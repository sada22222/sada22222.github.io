package npc
import chisel3._
import chisel3.util._

import axi._
import npc.core.Core
class top extends Module{
  val io=IO(new Bundle() {
      val timer   = Input(Bool())
      val soft    = Input(Bool())
      val extern  = Input(Bool())
      val inst    = Output(UInt(32.W))
      val pc      = Output(UInt(32.W))
      val npc     = Output(UInt(32.W))
  })
  
  val core    = Module(new Core)
  val axi     = Module(new AxiLiteArbiterSelector(addrWidth = 32, dataWidth = 32))
  val rom     = Module(new AxiLiteRomSlave(addrWidth = 32, dataWidth = 32))
  val ram     = Module(new AxiLiteRamSlave(addrWidth = 32, dataWidth = 32, depth = 4096))  
  core.io.if_axi<>axi.io.ifaxi
  //core.io.ls_axi<>axi.io.lsaxi  
  io.inst:=core.io.inst
  io.pc:=core.io.pc
  io.npc:=core.io.npc
  core.io.soft:=io.soft
  core.io.timer:=io.timer
  core.io.extern:=io.extern
  rom.io.axi<>axi.io.slaves(0.U)
  ram.io.axi<>axi.io.slaves(1.U)
}

object top extends App {
  Driver.execute(args, () => new top)
}