/*package npc.core
import chisel3._
import chisel3.util._
import axi.AxiLiteMaster

class Instcache extends Module {
  val io = IO(new Bundle {
    val pc = Input(UInt(32.W))
    val data = Output(UInt(32.W))
    val valid = Output(Bool())
    val flush = Input(Bool())

    val axi   = new AxiLiteMaster
  })

  // 初始化 AXI Lite 信号（写通道未使用）
  io.axi.master_awvalid := false.B
  io.axi.master_awaddr := 0.U
  io.axi.master_awid := 0.U
  io.axi.master_awlen := 0.U
  io.axi.master_awsize := 0.U
  io.axi.master_awburst := 0.U

  io.axi.master_wvalid := false.B
  io.axi.master_wdata := 0.U
  io.axi.master_wstrb := 0.U
  io.axi.master_wlast := false.B

  io.axi.master_bready := false.B

  // 读通道信号初始化
  io.axi.master_arvalid := false.B
  io.axi.master_araddr := 0.U
  io.axi.master_arid := 0.U
  io.axi.master_arlen := 0.U
  io.axi.master_arsize := "b010".U // 32-bit
  io.axi.master_arburst := "b01".U // INCR burst

  io.axi.master_rready := false.B


}*/