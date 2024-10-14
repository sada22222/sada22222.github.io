package core

import chisel3._
import configs.{RegReadIO}

class RegFile extends Module {
  val io = IO(new Bundle {
    val read1 = Flipped(new RegReadIO)
    val read2 = Flipped(new RegReadIO)
    val en    = Input(Bool())
    val addr  = Input(UInt(5.W))
    val data  = Input(UInt(32.W))
  })

  val init = Seq.fill(32) { 0.U(32.W) }
  val regfile = RegInit(VecInit(init))

  // read channels
  io.read1.data := Mux(io.read1.en, regfile(io.read1.addr), 0.U)
  io.read2.data := Mux(io.read2.en, regfile(io.read2.addr), 0.U)

  // write channel
  when (io.en && io.addr =/= 0.U) {
    regfile(io.addr) := io.data
  }
}