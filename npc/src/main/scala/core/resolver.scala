package npc.core

import chisel3._
import configs.CsrOp._
import configs.{CsrCommitIO, RegCommitIO, RegReadIO, csrreadio}

class resolver extends Module{
  val io=IO(new Bundle() {
    val id_read1=Flipped(new RegReadIO)
    val id_read2=Flipped(new RegReadIO)
    val csrRead   = Flipped(new csrreadio)    

    val rs1=new RegReadIO
    val rs2=new RegReadIO
    val csr=new csrreadio

    val load =  Input(Bool())
    val ex_reg= Input(new RegCommitIO)
    val ex_csr= Input(new CsrCommitIO)
    val mem_reg=Input(new RegCommitIO)
    val mem_csr=Input(new CsrCommitIO)
    val wb_reg= Input(new RegCommitIO)
    val wb_csr= Input(new CsrCommitIO)

    val loadflag=Output(Bool())
    val csrflag=Output(Bool())

  })

  def forwardReg(id_read: RegReadIO, rs: RegReadIO) = {
    when (id_read.en && id_read.addr =/= 0.U) {
      when (io.ex_reg.en && id_read.addr === io.ex_reg.addr) {
        id_read.data := io.ex_reg.data
      } .elsewhen (io.mem_reg.en && id_read.addr === io.mem_reg.addr) {
        id_read.data := io.mem_reg.data
      } .elsewhen (io.wb_reg.en && id_read.addr === io.wb_reg.addr) {
        id_read.data := io.wb_reg.data
      } .otherwise {
        id_read.data := rs.data
      }
    } .otherwise {
      id_read.data := 0.U
    }
  }

  def resolveLoad(id_read: RegReadIO) = {
    val aluLoad = io.load && id_read.addr === io.ex_reg.addr
    id_read.en && aluLoad
  }


  def resolveCsrHazard(csrread:csrreadio) = {
    val isRead  = csrread.csr_op=/= CSR_NOP && csrread.csr_op =/= CSR_W
    val exCsr  = io.ex_csr.op =/= CSR_NOP && io.ex_csr.op =/= CSR_R &&
      csrread.csr_raddr=== io.ex_csr.addr
    val memCsr  = io.mem_csr.op =/= CSR_NOP && io.mem_csr.op =/= CSR_R &&
      csrread.csr_raddr === io.mem_csr.addr
    val wbCsr   = io.wb_csr.op =/= CSR_NOP && io.wb_csr.op =/= CSR_R &&
      csrread.csr_raddr === io.wb_csr.addr
    isRead && (memCsr || wbCsr || exCsr)
  }

  forwardReg(io.id_read1,io.rs1)
  forwardReg(io.id_read2,io.rs2)
  io.rs1.en   := io.id_read1.en
  io.rs1.addr := io.id_read1.addr
  io.rs2.en   := io.id_read2.en
  io.rs2.addr := io.id_read2.addr
  val load1=resolveLoad(io.id_read1)
  val load2=resolveLoad(io.id_read2)
  val csrharard=resolveCsrHazard(io.csrRead)
  io.loadflag:=load1||load2
  io.csrflag  := csrharard
  io.csr <> io.csrRead


}
