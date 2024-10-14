package core

import chisel3._
import configs.{ CsrWriteIO, MEM_IO}

class WB extends Module{
  val io= IO(new Bundle() {

    val mem_i=Input(new MEM_IO)
    val regen    = Output(Bool())
    val regaddr  = Output(UInt(5.W))
    val regdata  = Output(UInt(32.W))
    val csr   = new CsrWriteIO
  })
  io.regen:=io.mem_i.reg.en
  io.regaddr:=io.mem_i.reg.addr
  io.regdata:=io.mem_i.reg.data
  io.csr<>io.mem_i.csr

}
