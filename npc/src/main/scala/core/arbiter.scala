// src/arbiter.scala
package npc.core

import chisel3._
import chisel3.util._
import axi.AxiLiteMaster

class AxiLiteArbiter extends Module {
  val io = IO(new Bundle {
    val ifaxi = Flipped(new AxiLiteMaster)
    val lsaxi = Flipped(new AxiLiteMaster)
    val selectedMaster = new AxiLiteMaster
    val selectedMasterId = Output(UInt(1.W)) // 0 for ifaxi, 1 for lsaxi
  })

  // 仲裁逻辑：优先级 - `ifaxi` 高于 `lsaxi`
  val ifaxiValid = io.ifaxi.master_arvalid || io.ifaxi.master_awvalid
  val lsaxiValid = io.lsaxi.master_arvalid || io.lsaxi.master_awvalid

  val selectIfaxi = ifaxiValid // 优先选择 ifaxi
  val selectLsaxi = !ifaxiValid && lsaxiValid // 只有 ifaxi 无效时选择 lsaxi

  io.selectedMasterId := lsaxiValid

  // 输出选中的 Master 信号
  io.selectedMaster.master_arvalid := Mux(selectIfaxi, io.ifaxi.master_arvalid, io.lsaxi.master_arvalid)
  io.selectedMaster.master_araddr := Mux(selectIfaxi, io.ifaxi.master_araddr, io.lsaxi.master_araddr)
  io.selectedMaster.master_arid := Mux(selectIfaxi, io.ifaxi.master_arid, io.lsaxi.master_arid)
  io.selectedMaster.master_arlen := Mux(selectIfaxi, io.ifaxi.master_arlen, io.lsaxi.master_arlen)
  io.selectedMaster.master_arsize := Mux(selectIfaxi, io.ifaxi.master_arsize, io.lsaxi.master_arsize)
  io.selectedMaster.master_arburst := Mux(selectIfaxi, io.ifaxi.master_arburst, io.lsaxi.master_arburst)

  io.selectedMaster.master_awvalid := Mux(selectIfaxi, io.ifaxi.master_awvalid, io.lsaxi.master_awvalid)
  io.selectedMaster.master_awaddr := Mux(selectIfaxi, io.ifaxi.master_awaddr, io.lsaxi.master_awaddr)
  io.selectedMaster.master_awid := Mux(selectIfaxi, io.ifaxi.master_awid, io.lsaxi.master_awid)
  io.selectedMaster.master_awlen := Mux(selectIfaxi, io.ifaxi.master_awlen, io.lsaxi.master_awlen)
  io.selectedMaster.master_awsize := Mux(selectIfaxi, io.ifaxi.master_awsize, io.lsaxi.master_awsize)
  io.selectedMaster.master_awburst := Mux(selectIfaxi, io.ifaxi.master_awburst, io.lsaxi.master_awburst)

  io.selectedMaster.master_wvalid := Mux(selectIfaxi, io.ifaxi.master_wvalid, io.lsaxi.master_wvalid)
  io.selectedMaster.master_wdata := Mux(selectIfaxi, io.ifaxi.master_wdata, io.lsaxi.master_wdata)
  io.selectedMaster.master_wstrb := Mux(selectIfaxi, io.ifaxi.master_wstrb, io.lsaxi.master_wstrb)
  io.selectedMaster.master_wlast := Mux(selectIfaxi, io.ifaxi.master_wlast, io.lsaxi.master_wlast)

  io.selectedMaster.master_bready := Mux(selectIfaxi, io.ifaxi.master_bready, io.lsaxi.master_bready)
  io.selectedMaster.master_rready := Mux(selectIfaxi, io.ifaxi.master_rready, io.lsaxi.master_rready)

  // 回传信号给 ifaxi 和 lsaxi
  io.ifaxi.master_arready := selectIfaxi && io.selectedMaster.master_arready
  io.ifaxi.master_awready := selectIfaxi && io.selectedMaster.master_awready
  io.ifaxi.master_wready := selectIfaxi && io.selectedMaster.master_wready
  io.ifaxi.master_bvalid := selectIfaxi && io.selectedMaster.master_bvalid
  io.ifaxi.master_bresp := io.selectedMaster.master_bresp
  io.ifaxi.master_bid := io.selectedMaster.master_bid
  io.ifaxi.master_rvalid := selectIfaxi && io.selectedMaster.master_rvalid
  io.ifaxi.master_rdata := io.selectedMaster.master_rdata
  io.ifaxi.master_rresp := io.selectedMaster.master_rresp
  io.ifaxi.master_rlast := io.selectedMaster.master_rlast
  io.ifaxi.master_rid   := io.selectedMaster.master_rid

  io.lsaxi.master_arready := selectLsaxi && io.selectedMaster.master_arready
  io.lsaxi.master_awready := selectLsaxi && io.selectedMaster.master_awready
  io.lsaxi.master_wready := selectLsaxi && io.selectedMaster.master_wready
  io.lsaxi.master_bvalid := selectLsaxi && io.selectedMaster.master_bvalid
  io.lsaxi.master_bresp := io.selectedMaster.master_bresp
  io.lsaxi.master_bid := io.selectedMaster.master_bid
  io.lsaxi.master_rvalid := selectLsaxi && io.selectedMaster.master_rvalid
  io.lsaxi.master_rdata := io.selectedMaster.master_rdata
  io.lsaxi.master_rresp := io.selectedMaster.master_rresp
  io.lsaxi.master_rlast := io.selectedMaster.master_rlast
  io.lsaxi.master_rid   := io.selectedMaster.master_rid
}
