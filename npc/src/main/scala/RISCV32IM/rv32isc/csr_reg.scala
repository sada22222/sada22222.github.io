package rv32isc

import chisel3._
import chisel3.util._
import utils._
import config.Configs._

class CSRReg extends Module {
  val io = IO(new Bundle {
    val clk = Input(Clock())
    val rst_n = Input(Bool())

    // from exu
    val exu_we_i = Input(Bool()) // exu模块写寄存器标志
    val exu_waddr_i = Input(UInt(32.W)) // exu模块写寄存器地址
    val exu_wdata_i = Input(UInt(32.W)) // exu模块写寄存器数据
    val exu_raddr_i = Input(UInt(32.W)) // exu模块读寄存器地址
    val exu_rdata_o = Output(UInt(32.W)) // exu模块读寄存器数据

    // from IF stage
    val pc_if_i = Input(UInt(32.W)) // 取指地址
    val trigger_match_o = Output(Bool()) // 断点

    // from exception
    val excep_we_i = Input(Bool()) // exception模块写寄存器标志
    val excep_waddr_i = Input(UInt(32.W)) // exception模块写寄存器地址
    val excep_wdata_i = Input(UInt(32.W)) // exception模块写寄存器数据

    // CSR outputs
    val mtvec_o = Output(UInt(32.W)) // mtvec寄存器值
    val mepc_o = Output(UInt(32.W)) // mepc寄存器值
    val mstatus_o = Output(UInt(32.W)) // mstatus寄存器值
    val mie_o = Output(UInt(32.W)) // mie寄存器值
    val dpc_o = Output(UInt(32.W)) // dpc寄存器值
    val dcsr_o = Output(UInt(32.W)) // dcsr寄存器值
  })

  // 硬件断点个数(必须大于等于1)
  val HwBpNum = 3
  val MaxTselect = HwBpNum - 1

  val max_tselect = MaxTselect.U(32.W)

  val misa = "h40001100".U(32.W) // 32bits, IM

  // for verification result
  val sstatus_d = RegInit(0.U(32.W))
  val sstatus_q = WireInit(0.U(32.W))
  val sstatus_we = RegInit(false.B)

  val mtvec_d = RegInit(0.U(32.W))
  val mtvec_q = WireInit(0.U(32.W))
  val mtvec_we = RegInit(false.B)

  val mcause_d = RegInit(0.U(32.W))
  val mcause_q = WireInit(0.U(32.W))
  val mcause_we = RegInit(false.B)

  val mepc_d = RegInit(0.U(32.W))
  val mepc_q = WireInit(0.U(32.W))
  val mepc_we = RegInit(false.B)

  val mie_d = RegInit(0.U(32.W))
  val mie_q = WireInit(0.U(32.W))
  val mie_we = RegInit(false.B)

  val mstatus_d = RegInit(0.U(32.W))
  val mstatus_q = WireInit(0.U(32.W))
  val mstatus_we = RegInit(false.B)

  val mscratch_d = RegInit(0.U(32.W))
  val mscratch_q = WireInit(0.U(32.W))
  val mscratch_we = RegInit(false.B)

  val dscratch0_d = RegInit(0.U(32.W))
  val dscratch0_q = WireInit(0.U(32.W))
  val dscratch0_we = RegInit(false.B)

  val dscratch1_d = RegInit(0.U(32.W))
  val dscratch1_q = WireInit(0.U(32.W))
  val dscratch1_we = RegInit(false.B)

  val mhartid_d = RegInit(0.U(32.W))
  val mhartid_q = WireInit(0.U(32.W))
  val mhartid_we = RegInit(false.B)

  val dpc_d = RegInit(0.U(32.W))
  val dpc_q = WireInit(0.U(32.W))
  val dpc_we = RegInit(false.B)

  val dcsr_d = RegInit(0.U(32.W))
  val dcsr_q = WireInit(0.U(32.W))
  val dcsr_we = RegInit(false.B)

  val tselect_d = RegInit(0.U(32.W))
  val tselect_q = WireInit(0.U(32.W))
  val tselect_we = RegInit(false.B)

  val tmatch_control_d = WireInit(false.B) // 初始化 Wire
  val tmatch_control_q = RegInit(VecInit(Seq.fill(HwBpNum)(false.B))) // 初始化 Vec
  val tmatch_control_we = WireInit(VecInit(Seq.fill(HwBpNum)(false.B))) // 初始化 Wire

  val tmatch_value_d = WireInit(0.U(32.W))
  val tmatch_value_q = RegInit(VecInit(Seq.fill(HwBpNum)(0.U(32.W)))) // 初始化 Vec
  val tmatch_value_we = WireInit(VecInit(Seq.fill(HwBpNum)(false.B))) // 初始化 Wire

  val trigger_match = WireInit(VecInit(Seq.fill(HwBpNum)(false.B))) // 初始化 Vec

  val cycle = RegInit(0.U(64.W))

  // cycle counter
  when(!io.rst_n) {
    cycle := 0.U
  } .otherwise {
    cycle := cycle + 1.U
  }

  io.mtvec_o := mtvec_q
  io.mepc_o := mepc_q
  io.mstatus_o := mstatus_q
  io.mie_o := mie_q
  io.dpc_o := dpc_q
  io.dcsr_o := dcsr_q

  val exu_rdata = Wire(UInt(32.W))



  // 写CSR寄存器
  val we = io.exu_we_i || io.excep_we_i
  val waddr = Mux(io.exu_we_i, io.exu_waddr_i, io.excep_waddr_i)
  val wdata = Mux(io.exu_we_i, io.exu_wdata_i, io.excep_wdata_i)

  // 默认值
  mtvec_d := mtvec_q
  mtvec_we := false.B
  mcause_d := mcause_q
  mcause_we := false.B
  mepc_d := mepc_q
  mepc_we := false.B
  mie_d := mie_q
  mie_we := false.B
  mstatus_d := mstatus_q
  mstatus_we := false.B
  mscratch_d := mscratch_q
  mscratch_we := false.B
  dscratch0_d := dscratch0_q
  dscratch0_we := false.B
  dscratch1_d := dscratch1_q
  dscratch1_we := false.B
  mhartid_d := mhartid_q
  mhartid_we := false.B
  dpc_d := dpc_q
  dpc_we := false.B
  dcsr_d := dcsr_q
  dcsr_we := false.B
  sstatus_d := sstatus_q
  sstatus_we := false.B

  when(we) {
    switch(waddr(11, 0)) {
      is(CSR_MTVEC) {
        mtvec_d := wdata
        mtvec_we := true.B
      }
      is(CSR_MCAUSE) {
        mcause_d := wdata
        mcause_we := true.B
      }
      is(CSR_MEPC) {
        mepc_d := wdata
        mepc_we := true.B
      }
      is(CSR_MIE) {
        mie_d := wdata
        mie_we := true.B
      }
      is(CSR_MSTATUS) {
        mstatus_d := wdata
        mstatus_we := true.B
      }
      is(CSR_MSCRATCH) {
        mscratch_d := wdata
        mscratch_we := true.B
      }
      is(CSR_DSCRATCH0) {
        dscratch0_d := wdata
        dscratch0_we := true.B
      }
      is(CSR_DSCRATCH1) {
        dscratch1_d := wdata
        dscratch1_we := true.B
      }
      is(CSR_MHARTID) {
        mhartid_d := wdata
        mhartid_we := true.B
      }
      is(CSR_SSTATUS) {
        sstatus_d := wdata
        sstatus_we := true.B
      }
      is(CSR_DPC) {
        dpc_d := wdata
        dpc_we := true.B
      }
      is(CSR_DCSR) {
        when(io.exu_we_i) {
          dcsr_d := Cat(dcsr_q(31, 28), wdata(27, 9), dcsr_q(8, 6), wdata(5, 4), dcsr_q(3), wdata(2, 0))
        } .otherwise {
          dcsr_d := wdata
        }
        dcsr_we := true.B
      }
    }
  }

  // trigger control
  tselect_we := (io.exu_waddr_i(11, 0) === CSR_TSELECT) && io.exu_we_i

  for (i <- 0 until HwBpNum) {
    tmatch_control_we(i) := (i.U === tselect_q) && io.exu_we_i && (io.exu_waddr_i(11, 0) === CSR_TDATA1)
    tmatch_value_we(i) := (i.U === tselect_q) && io.exu_we_i && (io.exu_waddr_i(11, 0) === CSR_TDATA2)
  }

  tselect_d := Mux(io.exu_wdata_i < HwBpNum.U, io.exu_wdata_i, max_tselect)
  tmatch_control_d := io.exu_wdata_i(2)
  tmatch_value_d := io.exu_wdata_i

  val selected_tmatch_control = Mux(HwBpNum.U > 1.U, tmatch_control_q(tselect_q), tmatch_control_q(0))
  val selected_tmatch_value = Mux(HwBpNum.U > 1.U, tmatch_value_q(tselect_q), tmatch_value_q(0))

  // TDATA0 - only support simple address matching
  val tmatch_control_rdata = Cat(
    "h2".U(4.W),  // type    : address/data match
    "b1".U(1.W),  // dmode   : access from D mode only
    "h00".U(6.W), // maskmax : exact match only
    "b0".U(1.W),  // hit     : not supported
    "b0".U(1.W),  // select  : address match only
    "b0".U(1.W),  // timing  : match before execution
    "b00".U(2.W), // sizelo  : match any access
    "h1".U(4.W),  // action  : enter debug mode
    "b0".U(1.W),  // chain   : not supported
    "h0".U(4.W),  // match   : simple match
    "b1".U(1.W),  // m       : match in m-mode
    "b0".U(1.W),  // 0       : zero
    "b0".U(1.W),  // s       : not supported
    "b1".U(1.W),  // u       : match in u-mode
    selected_tmatch_control, // execute : match instruction address
    "b0".U(1.W),  // store   : not supported
    "b0".U(1.W)   // load    : not supported
  )

  // TDATA1 - address match value only
  val tmatch_value_rdata = selected_tmatch_value

    // exu模块读CSR寄存器
  exu_rdata := MuxLookup(io.exu_raddr_i(11, 0), 0.U, Seq(
    CSR_CYCLE -> cycle(31, 0),
    CSR_CYCLEH -> cycle(63, 32),
    CSR_MTVEC -> mtvec_q,
    CSR_MCAUSE -> mcause_q,
    CSR_MEPC -> mepc_q,
    CSR_MIE -> mie_q,
    CSR_MSTATUS -> mstatus_q,
    CSR_MSCRATCH -> mscratch_q,
    CSR_DSCRATCH0 -> dscratch0_q,
    CSR_DSCRATCH1 -> dscratch1_q,
    CSR_MHARTID -> mhartid_q,
    CSR_DPC -> dpc_q,
    CSR_DCSR -> dcsr_q,
    CSR_MISA -> misa,
    CSR_TSELECT -> tselect_q,
    CSR_TDATA1 -> tmatch_control_rdata,
    CSR_TDATA2 -> tmatch_value_rdata
  ))

  io.exu_rdata_o := exu_rdata

  // Breakpoint matching
  // We match against the next address, as the breakpoint must be taken before execution
  for (i <- 0 until HwBpNum) {
    trigger_match(i) := tmatch_control_q(i) && (io.pc_if_i === tmatch_value_q(i))
  }

  io.trigger_match_o := trigger_match.asUInt.orR

  // CSR 寄存器实例化
  val mtvec_csr = Module(new CSR(0.U, 32))
  mtvec_csr.io.wdata_i := mtvec_d
  mtvec_csr.io.we_i := mtvec_we
  mtvec_q := mtvec_csr.io.rdata_o

  val mcause_csr = Module(new CSR(0.U, 32))
  mcause_csr.io.wdata_i := mcause_d
  mcause_csr.io.we_i := mcause_we
  mcause_q := mcause_csr.io.rdata_o

  val mepc_csr = Module(new CSR(0.U, 32))
  mepc_csr.io.wdata_i := mepc_d
  mepc_csr.io.we_i := mepc_we
  mepc_q := mepc_csr.io.rdata_o

  val mie_csr = Module(new CSR(0.U, 32))
  mie_csr.io.wdata_i := mie_d
  mie_csr.io.we_i := mie_we
  mie_q := mie_csr.io.rdata_o

  val mstatus_csr = Module(new CSR(0.U, 32))
  mstatus_csr.io.wdata_i := mstatus_d
  mstatus_csr.io.we_i := mstatus_we
  mstatus_q := mstatus_csr.io.rdata_o

  val mscratch_csr = Module(new CSR(0.U, 32))
  mscratch_csr.io.wdata_i := mscratch_d
  mscratch_csr.io.we_i := mscratch_we
  mscratch_q := mscratch_csr.io.rdata_o

  val dscratch0_csr = Module(new CSR(0.U, 32))
  dscratch0_csr.io.wdata_i := dscratch0_d
  dscratch0_csr.io.we_i := dscratch0_we
  dscratch0_q := dscratch0_csr.io.rdata_o

  val dscratch1_csr = Module(new CSR(0.U, 32))
  dscratch1_csr.io.wdata_i := dscratch1_d
  dscratch1_csr.io.we_i := dscratch1_we
  dscratch1_q := dscratch1_csr.io.rdata_o

  val mhartid_csr = Module(new CSR(0.U, 32))
  mhartid_csr.io.wdata_i := mhartid_d
  mhartid_csr.io.we_i := mhartid_we
  mhartid_q := mhartid_csr.io.rdata_o

  val dpc_csr = Module(new CSR(0.U, 32))
  dpc_csr.io.wdata_i := dpc_d
  dpc_csr.io.we_i := dpc_we
  dpc_q := dpc_csr.io.rdata_o

  val dcsr_csr = Module(new CSR("h40000000".U, 32)) // 32'h40000000
  dcsr_csr.io.wdata_i := dcsr_d
  dcsr_csr.io.we_i := dcsr_we
  dcsr_q := dcsr_csr.io.rdata_o

  val tselect_csr = Module(new CSR(0.U, 32))
  tselect_csr.io.wdata_i := tselect_d
  tselect_csr.io.we_i := tselect_we
  tselect_q := tselect_csr.io.rdata_o

  val sstatus_csr = Module(new CSR(0.U, 32))
  sstatus_csr.io.wdata_i := sstatus_d
  sstatus_csr.io.we_i := sstatus_we
  sstatus_q := sstatus_csr.io.rdata_o

  val tmatch_control_csrs = Array.fill(HwBpNum)(Module(new CSR(0.U, 1)))
  val tmatch_value_csrs = Array.fill(HwBpNum)(Module(new CSR(0.U, 32)))

  for (i <- 0 until HwBpNum) {
    tmatch_control_csrs(i).io.wdata_i := tmatch_control_d
    tmatch_control_csrs(i).io.we_i := tmatch_control_we(i)
    tmatch_control_q(i) := tmatch_control_csrs(i).io.rdata_o

    tmatch_value_csrs(i).io.wdata_i := tmatch_value_d
    tmatch_value_csrs(i).io.we_i := tmatch_value_we(i)
    tmatch_value_q(i) := tmatch_value_csrs(i).io.rdata_o
  }

  // 用于调试的信号
  val mtvec = mtvec_q
  val mstatus = mstatus_q
  val mepc = mepc_q
  val mie = mie_q
  val dpc = dpc_q
  val dcsr = dcsr_q
}
