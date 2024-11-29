package npc.core

import chisel3._
import chisel3.util._

import configs.{EX_IO, ID_IO, IF_IO, MEM_IO, SramIO}
import axi.AxiLiteMaster

class Core extends Module {
  val io = IO(new Bundle() {
    val timer   = Input(Bool())
    val soft    = Input(Bool())
    val extern  = Input(Bool())

  
  val master_awready = Input(Bool())
  val master_awvalid = Output(Bool())
  val master_awaddr  = Output(UInt(32.W))
  val master_awid    = Output(UInt(4.W))
  val master_awlen   = Output(UInt(8.W))
  val master_awsize  = Output(UInt(3.W))
  val master_awburst = Output(UInt(2.W))

  val master_wready  = Input(Bool())
  val master_wvalid  = Output(Bool())
  val master_wdata   = Output(UInt(32.W))
  val master_wstrb   = Output(UInt(4.W))
  val master_wlast   = Output(Bool())

  val master_bready  = Output(Bool())
  val master_bvalid  = Input(Bool())
  val master_bresp   = Input(UInt(2.W))
  val master_bid     = Input(UInt(4.W))

  val master_arready = Input(Bool())
  val master_arvalid = Output(Bool())
  val master_araddr  = Output(UInt(32.W))
  val master_arid    = Output(UInt(4.W))
  val master_arlen   = Output(UInt(8.W))
  val master_arsize  = Output(UInt(3.W))
  val master_arburst = Output(UInt(2.W))

  val master_rready  = Output(Bool())
  val master_rvalid  = Input(Bool())
  val master_rresp   = Input(UInt(2.W))
  val master_rdata   = Input(UInt(32.W))
  val master_rlast   = Input(Bool())
  val master_rid     = Input(UInt(4.W))

    val inst    = Output(UInt(32.W))
    val pc      = Output(UInt(32.W))
    val npc     = Output(UInt(32.W))
    val flushpc = Output(UInt(32.W))
    val flush   = Output(Bool())
    val stall   = Output(Bool())
    val wbinst  = Output(UInt(32.W))
    val bputake = Output(Bool())
    val bpuaddr = Output(UInt(32.W))
    val idpc    = Output(UInt(32.W))
    val idinst  = Output(UInt(32.W))
    val expc    = Output(UInt(32.W))
    val exinst  = Output(UInt(32.W))
    val mempc   = Output(UInt(32.W))
    val meminst = Output(UInt(32.W))
    val result  = Output(UInt(32.W))
    val waddr   = Output(UInt(32.W))
    val state   = Output(UInt(32.W))
  })

  val fetch     = Module(new IF)
  val IF_ID     = Module(new MidStage(new IF_IO))
  val ID        = Module(new ID)
  val ID_EX     = Module(new MidStage(new ID_IO))
  val EX        = Module(new EX)
  val EX_MEM    = Module(new MidStage(new EX_IO))
  val MEM       = Module(new MEM)
  val MEM_WB    = Module(new MidStage(new MEM_IO))
  val WB        = Module(new WB)
  val dpic      = Module(new DpiBlackBox)
  val regfile   = Module(new RegFile)
  val resoler   = Module(new resolver)
  val ctrl      = Module(new crtl)
  val csr       = Module(new csr)
  val arbiter   = Module(new AxiLiteArbiter)

  arbiter.io.ifaxi           <> fetch.io.axi
  fetch.io.flush      := ctrl.io.flushIf
  fetch.io.stall      := ctrl.io.stallIf
  fetch.io.flush_pc   := ctrl.io.flushPc
  IF_ID.io.prev       <> fetch.io.IF
  IF_ID.io.flush      := ctrl.io.flushIf
  IF_ID.io.stallPrev  := ctrl.io.stallIf
  IF_ID.io.stallNext  := ctrl.io.stallId

  ID.io.if_i          <> IF_ID.io.next
  ID.io.read1         <> resoler.io.id_read1
  ID.io.read2         <> resoler.io.id_read2
  ID.io.stallid       := ctrl.io.stallId
  ID_EX.io.prev       <> ID.io.id_o
  ID_EX.io.flush      := ctrl.io.flush
  ID_EX.io.stallPrev  := ctrl.io.stallId
  ID_EX.io.stallNext  := ctrl.io.stallEx

  EX.io.id_i          <> ID_EX.io.next
  EX_MEM.io.prev      <> EX.io.ex_o
  EX_MEM.io.flush     := ctrl.io.flush
  EX_MEM.io.stallPrev := ctrl.io.stallEx
  EX_MEM.io.stallNext := ctrl.io.stallMm

  arbiter.io.lsaxi          <> MEM.io.axi
  MEM.io.ex_i         <> EX_MEM.io.next
  MEM.io.csrBusy      := csr.io.busy
  MEM.io.csrHasInt    := csr.io.hasInt

  MEM_WB.io.prev      <> MEM.io.mem_o
  MEM_WB.io.flush     := ctrl.io.flush
  MEM_WB.io.stallPrev := ctrl.io.stallMm
  MEM_WB.io.stallNext := ctrl.io.stallWb

  WB.io.mem_i         <> MEM_WB.io.next

  regfile.io.read1    <> resoler.io.rs1
  regfile.io.read2    <> resoler.io.rs2
  regfile.io.en       := WB.io.regen
  regfile.io.addr     := WB.io.regaddr
  regfile.io.data     := WB.io.regdata

  resoler.io.load         := EX.io.ex_o.load
  resoler.io.ex_reg       <> EX.io.ex_o.reg
  resoler.io.mem_reg      <> MEM.io.mem_o.reg
  resoler.io.wb_reg.en    := WB.io.regen
  resoler.io.wb_reg.data  := WB.io.regdata
  resoler.io.wb_reg.addr  := WB.io.regaddr
  resoler.io.ex_csr       <> EX.io.ex_o.csr
  resoler.io.mem_csr      <> MEM.io.mem_o.csr
  resoler.io.wb_csr       <> WB.io.csr
  resoler.io.csrRead      <> ID.io.csrread

  ctrl.io.if_stall      := fetch.io.stallreq
  ctrl.io.ex_stall      := EX.io.stallReq
  ctrl.io.mem_stall     := MEM.io.stallReq
  ctrl.io.except        <> MEM.io.except
  ctrl.io.id_flush      := ID.io.flush
  ctrl.io.id_flushpc    := ID.io.flushpc
  ctrl.io.loadflag      := resoler.io.loadflag
  ctrl.io.csrflag       := resoler.io.csrflag
  ctrl.io.csrMepc       := csr.io.mepc
  ctrl.io.csrSepc       := csr.io.sepc
  ctrl.io.csrTvec       := csr.io.trapVec

  csr.io.write          <> WB.io.csr
  csr.io.except         <> MEM.io.except
  csr.io.timer          := io.timer
  csr.io.soft           := io.soft
  csr.io.extern         := io.extern
  csr.io.read           <> resoler.io.csr

  dpic.io.s_regs        := regfile.io.s_regs

// AW通道 (Address Write Channel)
arbiter.io.selectedMaster.master_awready := io.master_awready
io.master_awvalid := arbiter.io.selectedMaster.master_awvalid
io.master_awaddr  := arbiter.io.selectedMaster.master_awaddr
io.master_awid    := arbiter.io.selectedMaster.master_awid
io.master_awlen   := arbiter.io.selectedMaster.master_awlen
io.master_awsize  := arbiter.io.selectedMaster.master_awsize
io.master_awburst := arbiter.io.selectedMaster.master_awburst

// W通道 (Write Data Channel)
arbiter.io.selectedMaster.master_wready := io.master_wready
io.master_wvalid := arbiter.io.selectedMaster.master_wvalid
io.master_wdata  := arbiter.io.selectedMaster.master_wdata
io.master_wstrb  := arbiter.io.selectedMaster.master_wstrb
io.master_wlast  := arbiter.io.selectedMaster.master_wlast

// B通道 (Write Response Channel)
arbiter.io.selectedMaster.master_bvalid := io.master_bvalid
arbiter.io.selectedMaster.master_bresp  := io.master_bresp
arbiter.io.selectedMaster.master_bid    := io.master_bid
io.master_bready := arbiter.io.selectedMaster.master_bready

// AR通道 (Address Read Channel)
arbiter.io.selectedMaster.master_arready := io.master_arready
io.master_arvalid := arbiter.io.selectedMaster.master_arvalid
io.master_araddr  := arbiter.io.selectedMaster.master_araddr
io.master_arid    := arbiter.io.selectedMaster.master_arid
io.master_arlen   := arbiter.io.selectedMaster.master_arlen
io.master_arsize  := arbiter.io.selectedMaster.master_arsize
io.master_arburst := arbiter.io.selectedMaster.master_arburst

// R通道 (Read Data Channel)
arbiter.io.selectedMaster.master_rvalid := io.master_rvalid
arbiter.io.selectedMaster.master_rresp  := io.master_rresp
arbiter.io.selectedMaster.master_rdata  := io.master_rdata
arbiter.io.selectedMaster.master_rlast  := io.master_rlast
arbiter.io.selectedMaster.master_rid    := io.master_rid
io.master_rready := arbiter.io.selectedMaster.master_rready



  io.state:=MEM.io.state
  io.inst := fetch.io.IF.inst
  io.pc := WB.io.wb_pc
  io.npc := fetch.io.IF.pc
  io.flush := ctrl.io.flushIf
  io.stall := ctrl.io.stallIf
  io.flushpc := ctrl.io.flushPc
  io.bputake := fetch.io.bputake
  io.bpuaddr := fetch.io.bpuaddr
  io.idpc := ID.io.if_i.pc
  io.idinst := ID.io.if_i.inst
  io.expc := EX.io.id_i.currentPc
  io.exinst := EX.io.id_i.inst
  io.mempc := MEM.io.ex_i.currentPc
  io.meminst := MEM.io.ex_i.inst
  io.wbinst := WB.io.wbinst
  io.result := WB.io.regdata
  io.waddr := WB.io.regaddr
}

object Core extends App {
  Driver.execute(args, () => new Core)
}


