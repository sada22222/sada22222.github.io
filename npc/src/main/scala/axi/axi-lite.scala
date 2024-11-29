package axi

import chisel3._
import chisel3.util._

class Axi4Slave extends Bundle {
  // Write Address Channel
  val slave_awready = Output(Bool())
  val slave_awvalid = Input(Bool())
  val slave_awaddr  = Input(UInt(32.W))
  val slave_awid    = Input(UInt(4.W))
  val slave_awlen   = Input(UInt(8.W))
  val slave_awsize  = Input(UInt(3.W))
  val slave_awburst = Input(UInt(2.W))

  // Write Data Channel
  val slave_wready = Output(Bool())
  val slave_wvalid = Input(Bool())
  val slave_wdata  = Input(UInt(32.W))
  val slave_wstrb  = Input(UInt(4.W))
  val slave_wlast  = Input(Bool())

  // Write Response Channel
  val slave_bready = Input(Bool())
  val slave_bvalid = Output(Bool())
  val slave_bresp  = Output(UInt(2.W))
  val slave_bid    = Output(UInt(4.W))

  // Read Address Channel
  val slave_arready = Output(Bool())
  val slave_arvalid = Input(Bool())
  val slave_araddr  = Input(UInt(32.W))
  val slave_arid    = Input(UInt(4.W))
  val slave_arlen   = Input(UInt(8.W))
  val slave_arsize  = Input(UInt(3.W))
  val slave_arburst = Input(UInt(2.W))

  // Read Data Channel
  val slave_rready = Input(Bool())
  val slave_rvalid = Output(Bool())
  val slave_rresp  = Output(UInt(2.W))
  val slave_rdata  = Output(UInt(32.W))
  val slave_rlast  = Output(Bool())
  val slave_rid    = Output(UInt(4.W))
}

object Axi4Slave {
  def apply(): Axi4Slave = new Axi4Slave
}

// AXI Lite主设备接口定义
class AxiLiteMaster extends Bundle {
// AXI4 Master interface
  val master_awready = Input(Bool())
  val master_awvalid = Output(Bool())
  val master_awaddr  = Output(UInt(32.W))
  val master_awid    = Output(UInt(4.W))
  val master_awlen   = Output(UInt(8.W))
  val master_awsize  = Output(UInt(3.W))
  val master_awburst = Output(UInt(2.W))

  val master_wready  = Input(Bool())
  val master_wvalid  = Output(Bool())
  val master_wdata   = Output(UInt(32.W))
  val master_wstrb   = Output(UInt(4.W))
  val master_wlast   = Output(Bool())

  val master_bready  = Output(Bool())
  val master_bvalid  = Input(Bool())
  val master_bresp   = Input(UInt(2.W))
  val master_bid     = Input(UInt(4.W))

  val master_arready = Input(Bool())
  val master_arvalid = Output(Bool())
  val master_araddr  = Output(UInt(32.W))
  val master_arid    = Output(UInt(4.W))
  val master_arlen   = Output(UInt(8.W))
  val master_arsize  = Output(UInt(3.W))
  val master_arburst = Output(UInt(2.W))

  val master_rready  = Output(Bool())
  val master_rvalid  = Input(Bool())
  val master_rresp   = Input(UInt(2.W))
  val master_rdata   = Input(UInt(32.W))
  val master_rlast   = Input(Bool())
  val master_rid     = Input(UInt(4.W))
}

object AxiLiteMaster {
  def apply = new AxiLiteMaster
}

