package npc.core

import chisel3._
import configs.{RegReadIO}

class RegFile extends Module {
  val io = IO(new Bundle {
    val read1 = Flipped(new RegReadIO) 
    val read2 = Flipped(new RegReadIO) 
    val en    = Input(Bool())       
    val addr  = Input(UInt(5.W))      
    val data  = Input(UInt(32.W))      

    val s_regs = Output(Vec(32, UInt(32.W))) 
  })


  val init = Seq.fill(32) { 0.U(32.W) }
  val regfile = RegInit(VecInit(init)) 


  io.s_regs := regfile


  io.read1.data := Mux(io.read1.en, regfile(io.read1.addr), 0.U)
  io.read2.data := Mux(io.read2.en, regfile(io.read2.addr), 0.U)


  when(io.en && io.addr =/= 0.U) { // 写入时，地址不应为0（零号寄存器通常为0）
    regfile(io.addr) := io.data
  }
}

