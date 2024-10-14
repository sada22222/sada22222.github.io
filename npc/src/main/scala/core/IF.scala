package core

import chisel3._
import configs.IF_IO
import configs.SramIO

class IF extends Module{
  val io=IO(new Bundle() {
    val rom=new SramIO

    val flush=Input(Bool())
    val flush_pc=Input(UInt(32.W))
    val stall=Input(Bool())

    val stallreq=Output(Bool())
    val IF=Output(new IF_IO)
  })
  val pc=RegInit("h80000000".U(32.W))
  val valid=io.rom.valid

  val bpu   = Module(new BPU)
  bpu.io.inst_i:=io.rom.rdata
  bpu.io.inst_valid_i:=valid
  bpu.io.pc_i:=pc

  // update PC
  val nextPc = Mux(io.flush, io.flush_pc,
               Mux(io.stall, pc,
               Mux(bpu.io.prdt_taken_o, bpu.io.prdt_addr_o, pc + 4.U)))
  pc := nextPc

  val misaligned = pc(1, 0) =/= 0.U

  io.rom.en     := true.B
  io.rom.wen    := 0.U
  io.rom.addr   := pc
  io.rom.wdata  := 0.U

  io.stallreq := !io.rom.valid
  io.IF.pc := pc
  io.IF.valid:=valid
  io.IF.inst:=io.rom.rdata
  io.IF.bpu_take:=bpu.io.prdt_taken_o
  io.IF.bpu_takepc:=bpu.io.prdt_addr_o
  io.IF.misaligned:=misaligned
}
