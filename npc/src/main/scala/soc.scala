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
      val pc   = Output(UInt(32.W))
      val npc   = Output(UInt(32.W))     
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
      val waddr        = Output(UInt(32.W))
      val state        = Output(UInt(32.W))

      val romaddrvalid =Output(Bool())
      val romaddrready =Output(Bool())
      val romdatavalid =Output(Bool())
      val romdataready =Output(Bool())

      val ifaddrvalid =Output(Bool())
      val ifaddrready =Output(Bool())
      val ifdatavalid =Output(Bool())
      val ifdataready =Output(Bool())
  })
  
  val core    = Module(new Core)
  val xbar    = Module(new AxiLiteArbiterSelector)
  val rom     = Module(new AxiLiteRomSlave)
  val ram     = Module(new Axi4RamSlave)  

  io.inst:=core.io.inst
  io.pc:=core.io.pc
  io.npc:=core.io.npc  
  io.flush:=core.io.flush
  io.stall:=core.io.stall
  io.flushpc:=core.io.flushpc
  io.bputake:=core.io.bputake
  io.bpuaddr:=core.io.bpuaddr
  io.idpc:=core.io.idpc
  io.idinst:=core.io.idinst
  io.expc:=core.io.expc
  io.exinst:=core.io.exinst
  io.mempc:=core.io.mempc
  io.meminst:=core.io.meminst
  io.wbinst:=core.io.wbinst
  io.result:=core.io.result
  io.waddr:=core.io.state
  io.state:=ram.io.state
  // ROM地址和数据信号映射
  io.romaddrvalid := ram.io.axi.slave_awvalid
  io.romaddrready := ram.io.axi.slave_awready
  io.romdatavalid := ram.io.axi.slave_wvalid
  io.romdataready := ram.io.axi.slave_wready

  // IF地址和数据信号映射
  io.ifaddrvalid := core.io.axi.master_awvalid
  io.ifaddrready := core.io.axi.master_awready
  io.ifdatavalid := core.io.axi.master_wvalid
  io.ifdataready := core.io.axi.master_wready


  core.io.soft:=io.soft
  core.io.timer:=io.timer
  core.io.extern:=io.extern

  
  xbar.io.selectedMaster <> core.io.axi
  rom.io.axi<>xbar.io.slaves(0.U)
  ram.io.axi<>xbar.io.slaves(1.U)
}

object top extends App {
  Driver.execute(args, () => new top)
}
