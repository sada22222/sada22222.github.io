package core

import chisel3._
import configs.{EX_IO, ID_IO, IF_IO, MEM_IO, SramIO}


class top extends Module{
  val io=IO(new Bundle() {
      val rom=new SramIO
      val ram=new SramIO

      val timer   = Input(Bool())
      val soft    = Input(Bool())
      val extern  = Input(Bool())
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

  val regfile=Module(new RegFile)
  val resoler=Module(new resolver)
  val ctrl=Module(new crtl)
  val csr=Module(new csr)

  fetch.io.rom<>io.rom
  fetch.io.flush:=ctrl.io.flushIf
  fetch.io.stall:=ctrl.io.if_stall
  fetch.io.flush_pc:=ctrl.io.flushPc

  IF_ID.io.prev:=fetch.io.IF
  IF_ID.io.flush:=ctrl.io.flush
  IF_ID.io.stallPrev:=ctrl.io.stallIf

  ID.io.if_i<>IF_ID.io.next
  ID.io.read1<>resoler.io.id_read1
  ID.io.read2<>resoler.io.id_read2
  ID.io.stallid:=ctrl.io.stallId
  ID.io.csrread<>csr.io.read
  
  ID_EX.io.prev<>ID.io.id_o
  ID_EX.io.flush:=ctrl.io.flush
  ID_EX.io.stallPrev:=ctrl.io.stallId


  EX.io.id_i<>ID_EX.io.next

  EX_MEM.io.prev<>EX.io.ex_o
  EX_MEM.io.flush:=ctrl.io.flush
  EX_MEM.io.stallPrev:=ctrl.io.stallEx

  MEM.io.ex_i<>EX_MEM.io.next
  MEM.io.csrBusy:=csr.io.busy
  MEM.io.csrHasInt:=csr.io.hasInt
  io.ram<>MEM.io.ram
  MEM_WB.io.prev<>MEM.io.mem_o
  MEM_WB.io.flush:=ctrl.io.flush
  MEM_WB.io.stallPrev:=ctrl.io.stallMm


  WB.io.mem_i<>MEM_WB.io.next


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
  resoler.io.csrRead_op:=ID.io.csrread.csr_op
  resoler.io.csrRead_addr:=ID.io.csrread.csr_raddr
  
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


}


object top extends App {
  Driver.execute(args, () => new top)
}




