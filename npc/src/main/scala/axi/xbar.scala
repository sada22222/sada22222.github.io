package axi

import chisel3._
import chisel3.util._

class AxiLiteArbiterSelector extends Module {
  val numSlaves = 2
  val io = IO(new Bundle {
    val selectedMaster = Flipped(new AxiLiteMaster) // 选中的主设备接口
    val slaves = Vec(numSlaves, Flipped(new Axi4Slave)) // 从设备接口
    val selectedReadSlave = Output(UInt(32.W)) // 选中的从设备索引
  })

  // 地址解码逻辑
  def decodeAddress(addr: UInt): UInt = {
    MuxCase(2.U, Seq(
      (addr >= "h80000000".U && addr < "h800ff000".U) -> 0.U, // ROM
      (addr >= "h800ff000".U && addr < "h8fffffff".U) -> 1.U  // RAM
    ))
  }

  // 选中从设备
  val selectedReadSlave = decodeAddress(io.selectedMaster.master_araddr)
  val selectedWriteSlave = decodeAddress(io.selectedMaster.master_awaddr)
  io.selectedReadSlave := selectedReadSlave

  // 遍历所有从设备，控制信号路由
  for (i <- 0 until numSlaves) {
    val isReadSlaveSelected = (selectedReadSlave === i.U)
    val isWriteSlaveSelected = (selectedWriteSlave === i.U)

    // 将主设备的读请求信号路由到选中的从设备
    io.slaves(i).slave_arvalid := isReadSlaveSelected && io.selectedMaster.master_arvalid
    io.slaves(i).slave_araddr := io.selectedMaster.master_araddr
    io.slaves(i).slave_arid := io.selectedMaster.master_arid
    io.slaves(i).slave_arlen := io.selectedMaster.master_arlen
    io.slaves(i).slave_arsize := io.selectedMaster.master_arsize
    io.slaves(i).slave_arburst := io.selectedMaster.master_arburst
    io.slaves(i).slave_rready := isReadSlaveSelected && io.selectedMaster.master_rready

    // 将主设备的写请求信号路由到选中的从设备
    io.slaves(i).slave_awvalid := isWriteSlaveSelected && io.selectedMaster.master_awvalid
    io.slaves(i).slave_awaddr := io.selectedMaster.master_awaddr
    io.slaves(i).slave_awid := io.selectedMaster.master_awid
    io.slaves(i).slave_awlen := io.selectedMaster.master_awlen
    io.slaves(i).slave_awsize := io.selectedMaster.master_awsize
    io.slaves(i).slave_awburst := io.selectedMaster.master_awburst
    io.slaves(i).slave_wvalid := isWriteSlaveSelected && io.selectedMaster.master_wvalid
    io.slaves(i).slave_wdata := io.selectedMaster.master_wdata
    io.slaves(i).slave_wstrb := io.selectedMaster.master_wstrb
    io.slaves(i).slave_wlast := io.selectedMaster.master_wlast
    io.slaves(i).slave_bready := isWriteSlaveSelected && io.selectedMaster.master_bready
  }

  // 从选中的从设备返回响应信号到 `selectedMaster`
  io.selectedMaster.master_arready := io.slaves(selectedReadSlave).slave_arready
  io.selectedMaster.master_rvalid  := io.slaves(selectedReadSlave).slave_rvalid
  io.selectedMaster.master_rdata   := io.slaves(selectedReadSlave).slave_rdata
  io.selectedMaster.master_rresp   := io.slaves(selectedReadSlave).slave_rresp
  io.selectedMaster.master_rlast   := io.slaves(selectedReadSlave).slave_rlast
  io.selectedMaster.master_rid     := io.slaves(selectedReadSlave).slave_rid

  io.selectedMaster.master_awready := io.slaves(selectedWriteSlave).slave_awready
  io.selectedMaster.master_wready  := io.slaves(selectedWriteSlave).slave_wready
  io.selectedMaster.master_bvalid  := io.slaves(selectedWriteSlave).slave_bvalid
  io.selectedMaster.master_bresp   := io.slaves(selectedWriteSlave).slave_bresp
  io.selectedMaster.master_bid     := io.slaves(selectedWriteSlave).slave_bid
}
