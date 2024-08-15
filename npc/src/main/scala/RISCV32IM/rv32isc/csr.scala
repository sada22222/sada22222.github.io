package rv32isc


import chisel3._
import chisel3.util._
import config.Configs._
import utils._


class CSR(resetVal: UInt, width: Int) extends Module {
  val io = IO(new Bundle {
    val wdata_i = Input(UInt(width.W))
    val we_i    = Input(Bool())
    val rdata_o = Output(UInt(width.W))
  })

  val rdata_q = RegInit(resetVal)
  when(io.we_i) {
    rdata_q := io.wdata_i
  }
  io.rdata_o := rdata_q
}


