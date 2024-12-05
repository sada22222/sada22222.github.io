package npc.core

import chisel3._
import chisel3.util._
import configs.ExceptCause._
import configs.ExceptType._
import configs.LsuDecode._
import configs.{EX_IO, ExceptInfoIO, MEM_IO}
import axi.AxiLiteMaster

class MEM extends Module {
  val io = IO(new Bundle {
    val ex_i = Input(new EX_IO)
    val stallReq = Output(Bool())
    val except = Output(new ExceptInfoIO)
    val csrHasInt = Input(Bool())
    val csrBusy = Input(Bool())
    val mem_o = Output(new MEM_IO)

    val state = Output(UInt(32.W))
    val axi = new AxiLiteMaster
  })

  // 解码加载/存储单元操作
  val (wen: Bool) ::(ren: Bool) :: width :: (signed: Bool) :: Nil = ListLookup(io.ex_i.lsuOp, DEFAULT, TABLE)

  val addr = io.ex_i.reg.data // 地址对齐
  val sel = io.ex_i.reg.data(1, 0)
  // 写使能
  val writeEn = MuxLookup(width, 0.U, Seq(
    LS_DATA_BYTE -> ("b0001".U(4.W)),
    LS_DATA_HALF -> ("b0011".U(4.W)),
    LS_DATA_WORD -> ("b1111".U(4.W))
  ))


  // AXI Lite 握手信号
  val ar_hs = io.axi.master_arvalid && io.axi.master_arready // 读地址握手完成
  val r_hs = io.axi.master_rvalid && io.axi.master_rready // 读数据握手完成
  val aw_hs = io.axi.master_awvalid && io.axi.master_awready // 写地址握手完成
  val w_hs = io.axi.master_wvalid && io.axi.master_wready // 写数据握手完成
  val b_hs = io.axi.master_bvalid && io.axi.master_bready // 写响应握手完成

  // 状态定义
  val sIdle :: sWriteAddr :: sWriteData :: sWriteResp :: sReadAddr :: sReadData :: Nil = Enum(6)
  val state = RegInit(sIdle)

  // 状态机控制逻辑
  switch(state) {
    is(sIdle) {
      when(!io.csrBusy && !io.except.hasTrap) {
        when(wen) {
          state := sWriteAddr // 写请求开始
        }.elsewhen(ren) {
          state := sReadAddr // 读请求开始
        }
      }
    }
    is(sWriteAddr) {
      when(aw_hs) { state := sWriteData } // 写地址握手成功，进入写数据阶段
    }
    is(sWriteData) {
      when(w_hs) { state := sWriteResp } // 写数据握手成功，进入写响应阶段
    }
    is(sWriteResp) {
      when(b_hs) { state := sIdle } // 写响应握手成功，返回空闲状态
    }
    is(sReadAddr) {
      when(ar_hs) { state := sReadData } // 读地址握手成功，进入读数据阶段
    }
    is(sReadData) {
      when(r_hs) { state := sIdle } // 读数据握手成功，返回空闲状态
    }
  }

  // 控制 AXI Lite 接口
  io.axi.master_arvalid := (state === sReadAddr)
  io.axi.master_araddr := addr
  io.axi.master_arid := 0.U
  io.axi.master_arlen := 0.U
  io.axi.master_arsize := "b010".U // 32-bit
  io.axi.master_arburst := "b01".U // INCR burst
  io.axi.master_rready := (state === sReadData)

  io.axi.master_awvalid := (state === sWriteAddr)
  io.axi.master_awaddr := addr
  io.axi.master_awid := 0.U
  io.axi.master_awlen := 0.U
  io.axi.master_awsize := "b010".U
  io.axi.master_awburst := "b01".U
  io.axi.master_wvalid := (state === sWriteData)
  io.axi.master_wdata :=  io.ex_i.lsuData
  io.axi.master_wstrb := writeEn
  io.axi.master_wlast := true.B
  io.axi.master_bready := (state === sWriteResp)

  io.stallReq := Mux(b_hs || r_hs, false.B,
    Mux(ren || wen || io.csrBusy, true.B, false.B))

  // 从 AXI Lite 读取数据
  val loadData = MuxLookup(width, 0.U, Seq(
    LS_DATA_BYTE -> Cat(Fill(24, io.axi.master_rdata(7)), io.axi.master_rdata(7, 0)),
    LS_DATA_HALF -> Cat(Fill(16, io.axi.master_rdata(15)), io.axi.master_rdata(15, 0)),
    LS_DATA_WORD -> io.axi.master_rdata
  ))

  val reg_data = Mux(ren, Mux(signed, loadData, io.axi.master_rdata), io.ex_i.reg.data)
  io.state := state

  // 地址对齐检查
  val memAddr = MuxLookup(width, false.B, Seq(
    LS_DATA_BYTE -> false.B,
    LS_DATA_HALF -> (sel(0) =/= 0.U),
    LS_DATA_WORD -> (sel(1, 0) =/= 0.U)
  ))
  val memExcept = memAddr || false.B // 根据需求添加额外的地址错误检查

  // 异常处理逻辑
  val instAddr = io.ex_i.excType === EXC_IADDR
  val instIllg = io.ex_i.excType === EXC_ILLEG
  val excMem = io.ex_i.excType === EXC_LOAD && memExcept
  val excOther = io.ex_i.excType === EXC_ECALL

  val hasTrap = instAddr || instIllg || excMem || excOther || io.csrHasInt
  val cause = MuxLookup(io.ex_i.excType, 0.U, Seq(
    EXC_ECALL -> EXC_M_ECALL,
    EXC_LOAD -> Mux(memAddr, EXC_LOAD_ADDR, EXC_LOAD_PAGE)
  ))
  val excCause = Mux(instIllg, EXC_ILL_INST, Mux(instAddr, EXC_INST_ADDR, cause))
  val excPc = io.ex_i.currentPc
  val excValue = Mux(instIllg, io.ex_i.inst, Mux(memExcept, io.ex_i.reg.data, io.ex_i.excValue))

  // Exception output
  io.except.excPc := excPc
  io.except.hasTrap := hasTrap
  io.except.excCause := excCause
  io.except.excValue := excValue
  io.except.isMret := false.B
  io.except.isSret := false.B

  // 更新内存输出
  io.mem_o.currentPc := io.ex_i.currentPc
  io.mem_o.inst := io.ex_i.inst
  io.mem_o.reg.en := io.ex_i.reg.en
  io.mem_o.reg.addr := io.ex_i.reg.addr
  io.mem_o.reg.data := reg_data
  io.mem_o.csr <> io.ex_i.csr
}
