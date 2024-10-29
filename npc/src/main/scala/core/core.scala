package npc.core

import chisel3._
import chisel3.util._

import configs.{EX_IO, ID_IO, IF_IO, MEM_IO, SramIO}
import axi.AxiLiteMaster

class Core extends Module{
  val io=IO(new Bundle() {
      val timer   = Input(Bool())
      val soft    = Input(Bool())
      val extern  = Input(Bool())

      val inst    = Output(UInt(32.W))
      val pc   = Output(UInt(32.W))
      val npc   = Output(UInt(32.W))     
      val next   = Output(UInt(32.W))
      val flushpc       = Output(UInt(32.W))
      val flush        =Output(Bool())
      val stall       = Output(Bool())
      val wbinst       = Output(UInt(32.W))
      val bputake       = Output(Bool())
      val bpuaddr       = Output(UInt(32.W))
      val idpc       = Output(UInt(32.W)) 
      val idinst       = Output(UInt(32.W))
      val expc       = Output(UInt(32.W)) 
      val exinst       = Output(UInt(32.W))
      val mempc       = Output(UInt(32.W))
      val meminst       = Output(UInt(32.W))                              
      val result       = Output(UInt(32.W))  
  })

  val fetch=Module(new IF)
  val IF_ID =Module(new MidStage(new IF_IO))
  val ID=Module(new ID)
  val ID_EX =Module(new MidStage(new ID_IO))
  val EX=Module(new EX)
  val EX_MEM =Module(new MidStage(new EX_IO))
  val MEM=Module(new MEM)
  val MEM_WB =Module(new MidStage(new MEM_IO))
  val WB=Module(new WB)
  val dpic=Module(new DpiBlackBox)
  val regfile=Module(new RegFile)
  val resoler=Module(new resolver)
  val ctrl=Module(new crtl)
  val csr=Module(new csr)



  fetch.io.flush:=ctrl.io.flushIf
  fetch.io.stall:=ctrl.io.stallIf
  fetch.io.flush_pc:=ctrl.io.flushPc
  IF_ID.io.prev<>fetch.io.IF
  IF_ID.io.flush:=ctrl.io.flushIf
  IF_ID.io.stallPrev:=ctrl.io.stallIf
  IF_ID.io.stallNext:=ctrl.io.stallId

  ID.io.if_i<>IF_ID.io.next
  ID.io.read1<>resoler.io.id_read1
  ID.io.read2<>resoler.io.id_read2
  ID.io.stallid:=ctrl.io.stallId
  ID_EX.io.prev<>ID.io.id_o
  ID_EX.io.flush:=ctrl.io.flush
  ID_EX.io.stallPrev:=ctrl.io.stallId
  ID_EX.io.stallNext:=ctrl.io.stallEx

  EX.io.id_i<>ID_EX.io.next
  EX_MEM.io.prev<>EX.io.ex_o
  EX_MEM.io.flush:=ctrl.io.flush
  EX_MEM.io.stallPrev:=ctrl.io.stallEx
  EX_MEM.io.stallNext:=ctrl.io.stallMm
  
  MEM.io.ex_i<>EX_MEM.io.next
  MEM.io.csrBusy:=csr.io.busy
  MEM.io.csrHasInt:=csr.io.hasInt
  
  MEM_WB.io.prev<>MEM.io.mem_o
  MEM_WB.io.flush:=ctrl.io.flush
  MEM_WB.io.stallPrev:=ctrl.io.stallMm
  MEM_WB.io.stallNext:=ctrl.io.stallWb

  WB.io.mem_i<>MEM_WB.io.next
  io.inst:=fetch.io.IF.inst
  io.pc:=WB.io.wb_pc
  io.npc:=fetch.io.IF.pc  

  regfile.io.read1      <> resoler.io.rs1
  regfile.io.read2      <> resoler.io.rs2
  regfile.io.en   := WB.io.regen
  regfile.io.addr := WB.io.regaddr
  regfile.io.data := WB.io.regdata

  resoler.io.load:=EX.io.ex_o.load
  resoler.io.ex_reg<>EX.io.ex_o.reg
  resoler.io.mem_reg<>MEM.io.mem_o.reg
  resoler.io.wb_reg.en:=WB.io.regen
  resoler.io.wb_reg.data:=WB.io.regdata
  resoler.io.wb_reg.addr:=WB.io.regaddr
  resoler.io.ex_csr<>EX.io.ex_o.csr
  resoler.io.mem_csr<>MEM.io.mem_o.csr
  resoler.io.wb_csr<>WB.io.csr
  resoler.io.csrRead<>ID.io.csrread
  
  ctrl.io.if_stall:=fetch.io.stallreq
  ctrl.io.ex_stall:=EX.io.stallReq
  ctrl.io.mem_stall:=MEM.io.stallReq
  ctrl.io.except<>MEM.io.except
  ctrl.io.id_flush:=ID.io.flush
  ctrl.io.id_flushpc:=ID.io.flushpc
  ctrl.io.loadflag:=resoler.io.loadflag
  ctrl.io.csrflag:=resoler.io.csrflag
  ctrl.io.csrMepc:=csr.io.mepc
  ctrl.io.csrSepc:=csr.io.sepc
  ctrl.io.csrTvec:=csr.io.trapVec

  csr.io.write<>WB.io.csr
  csr.io.except<>MEM.io.except
  csr.io.timer:=io.timer
  csr.io.soft:=io.soft
  csr.io.extern:=io.extern
  csr.io.read<>resoler.io.csr

  dpic.io.s_regs:=regfile.io.s_regs

  

  io.flush:=ctrl.io.flushIf
  io.stall:=ctrl.io.stallId
  io.flushpc:=ctrl.io.flushPc
  io.next:=MEM.io.ex_i.excType
  io.bputake:=fetch.io.prdt_taken_o
  io.bpuaddr:=fetch.io.prdt_addr_o
  io.idpc:=ID.io.if_i.pc
  io.idinst:=IF_ID.io.next.inst
  io.expc:=EX.io.id_i.currentPc
  io.exinst:=EX.io.id_i.inst
  io.mempc:=MEM.io.ex_i.currentPc
  io.meminst:=MEM.io.ex_i.inst
  io.wbinst:=WB.io.wbinst
  io.result:=WB.io.regdata
}

object Core extends App {
  Driver.execute(args, () => new Core)
}



