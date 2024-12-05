// src/npc/core/AxiLiteArbiter.scala

package npc.core

import chisel3._
import chisel3.util._
import axi.AxiLiteMaster

class AxiLiteArbiter extends Module {
  val io = IO(new Bundle {
    val ifaxi = Flipped(new AxiLiteMaster) // AXI Master接口 1
    val lsaxi = Flipped(new AxiLiteMaster) // AXI Master接口 2
    val selectedMaster = new AxiLiteMaster // 仲裁后选定的 AXI Master接口
    val selectedMasterId = Output(UInt(1.W)) // 仲裁器输出：0 代表 ifaxi, 1 代表 lsaxi
  })

  // 仲裁信号
  val ifaxiValid = io.ifaxi.master_arvalid || io.ifaxi.master_awvalid
  val lsaxiValid = io.lsaxi.master_arvalid || io.lsaxi.master_awvalid

  // 仲裁结果寄存器，复位时优先选择 `ifaxi`
  val grant = RegInit(0.U(1.W)) // 0: ifaxi, 1: lsaxi

  // 仲裁逻辑
  when(ifaxiValid) {
    grant := 0.U // 优先选择 ifaxi
  }.elsewhen(lsaxiValid) {
    grant := 1.U // 次选 lsaxi
  }

  // 输出仲裁结果
  io.selectedMasterId := grant

  // Helper 函数：根据 grant 选择 AXI Lite 信号
  def selectAxiSignals[T <: Data](ifaxiSignal: T, lsaxiSignal: T): T = {
    Mux(grant === 0.U, ifaxiSignal, lsaxiSignal)
  }

  // AXI 信号选择
  io.selectedMaster.master_arvalid := selectAxiSignals(io.ifaxi.master_arvalid, io.lsaxi.master_arvalid)
  io.selectedMaster.master_araddr  := selectAxiSignals(io.ifaxi.master_araddr, io.lsaxi.master_araddr)
  io.selectedMaster.master_arid    := selectAxiSignals(io.ifaxi.master_arid, io.lsaxi.master_arid)
  io.selectedMaster.master_arlen   := selectAxiSignals(io.ifaxi.master_arlen, io.lsaxi.master_arlen)
  io.selectedMaster.master_arsize  := selectAxiSignals(io.ifaxi.master_arsize, io.lsaxi.master_arsize)
  io.selectedMaster.master_arburst := selectAxiSignals(io.ifaxi.master_arburst, io.lsaxi.master_arburst)

  io.selectedMaster.master_awvalid := selectAxiSignals(io.ifaxi.master_awvalid, io.lsaxi.master_awvalid)
  io.selectedMaster.master_awaddr  := selectAxiSignals(io.ifaxi.master_awaddr, io.lsaxi.master_awaddr)
  io.selectedMaster.master_awid    := selectAxiSignals(io.ifaxi.master_awid, io.lsaxi.master_awid)
  io.selectedMaster.master_awlen   := selectAxiSignals(io.ifaxi.master_awlen, io.lsaxi.master_awlen)
  io.selectedMaster.master_awsize  := selectAxiSignals(io.ifaxi.master_awsize, io.lsaxi.master_awsize)
  io.selectedMaster.master_awburst := selectAxiSignals(io.ifaxi.master_awburst, io.lsaxi.master_awburst)

  io.selectedMaster.master_wvalid := selectAxiSignals(io.ifaxi.master_wvalid, io.lsaxi.master_wvalid)
  io.selectedMaster.master_wdata  := selectAxiSignals(io.ifaxi.master_wdata, io.lsaxi.master_wdata)
  io.selectedMaster.master_wstrb  := selectAxiSignals(io.ifaxi.master_wstrb, io.lsaxi.master_wstrb)
  io.selectedMaster.master_wlast  := selectAxiSignals(io.ifaxi.master_wlast, io.lsaxi.master_wlast)

  io.selectedMaster.master_bready := selectAxiSignals(io.ifaxi.master_bready, io.lsaxi.master_bready)
  io.selectedMaster.master_rready := selectAxiSignals(io.ifaxi.master_rready, io.lsaxi.master_rready)

  // 回传信号处理
  io.ifaxi.master_arready := (grant === 0.U) && io.selectedMaster.master_arready
  io.ifaxi.master_awready := (grant === 0.U) && io.selectedMaster.master_awready
  io.ifaxi.master_wready  := (grant === 0.U) && io.selectedMaster.master_wready
  io.ifaxi.master_bvalid  := (grant === 0.U) && io.selectedMaster.master_bvalid
  io.ifaxi.master_bresp   := io.selectedMaster.master_bresp
  io.ifaxi.master_bid     := io.selectedMaster.master_bid
  io.ifaxi.master_rvalid  := (grant === 0.U) && io.selectedMaster.master_rvalid
  io.ifaxi.master_rdata   := io.selectedMaster.master_rdata
  io.ifaxi.master_rresp   := io.selectedMaster.master_rresp
  io.ifaxi.master_rlast   := io.selectedMaster.master_rlast
  io.ifaxi.master_rid     := io.selectedMaster.master_rid

  io.lsaxi.master_arready := (grant === 1.U) && io.selectedMaster.master_arready
  io.lsaxi.master_awready := (grant === 1.U) && io.selectedMaster.master_awready
  io.lsaxi.master_wready  := (grant === 1.U) && io.selectedMaster.master_wready
  io.lsaxi.master_bvalid  := (grant === 1.U) && io.selectedMaster.master_bvalid
  io.lsaxi.master_bresp   := io.selectedMaster.master_bresp
  io.lsaxi.master_bid     := io.selectedMaster.master_bid
  io.lsaxi.master_rvalid  := (grant === 1.U) && io.selectedMaster.master_rvalid
  io.lsaxi.master_rdata   := io.selectedMaster.master_rdata
  io.lsaxi.master_rresp   := io.selectedMaster.master_rresp
  io.lsaxi.master_rlast   := io.selectedMaster.master_rlast
  io.lsaxi.master_rid     := io.selectedMaster.master_rid
}
