package axi

import chisel3._
import chisel3.util._

class AxiLiteArbiterSelector(val addrWidth: Int, val dataWidth: Int) extends Module {
  val numSlaves = 2 
  val io = IO(new Bundle {
    val ifaxi = Flipped(new AxiLiteMaster(addrWidth, dataWidth))
    val lsaxi = Flipped(new AxiLiteMaster(addrWidth, dataWidth))
    val slaves = Vec(numSlaves, Flipped(new AxiLiteSlave(addrWidth, dataWidth))) 
  })

  // 根据 `valid` 信号仲裁优先级：优先处理 ifaxi，若 ifaxi 没有请求则处理 lsaxi
  val ifaxi_readValid = io.ifaxi.readAddr.valid
  val lsaxi_readValid = io.lsaxi.readAddr.valid
  val ifaxi_writeValid = io.ifaxi.writeAddr.valid
  val lsaxi_writeValid = io.lsaxi.writeAddr.valid

  // 仲裁决定当前是处理 ifaxi 还是 lsaxi 的请求
  val readGrant = Mux(ifaxi_readValid, 0.U, 1.U)   // 0: ifaxi, 1: lsaxi
  val writeGrant = Mux(ifaxi_writeValid, 0.U, 1.U) // 0: ifaxi, 1: lsaxi

 
  // 通过地址的高位选择外设
def decodeAddress(addr: UInt): UInt = {
  MuxCase(2.U, Seq(
    (addr >= "h02000000".U && addr <= "h0200ffff".U) -> 0.U,  // SROM 
  //  (addr >= "h0f000000".U && addr <= "h0fffffff".U) -> 1.U,  // SRAM
  ))
}

  // 解码主设备请求的地址，选择从设备
  val selectedSlave = decodeAddress(Mux(readGrant === 0.U, io.ifaxi.readAddr.bits.addr, io.lsaxi.readAddr.bits.addr)) // 选择外设
  val writeSlave = decodeAddress(Mux(writeGrant === 0.U, io.ifaxi.writeAddr.bits.addr, io.lsaxi.writeAddr.bits.addr)) // 写时选择外设

 
  // 根据仲裁结果选择 ifaxi 或 lsaxi，并根据地址解码路由到正确的从设备
  val selectedReadAddr = Mux(readGrant === 0.U, io.ifaxi.readAddr.bits, io.lsaxi.readAddr.bits)
  val selectedReadValid = Mux(readGrant === 0.U, io.ifaxi.readAddr.valid, io.lsaxi.readAddr.valid)

  // 遍历所有从设备，给对应从设备传递请求
  for (i <- 0 until numSlaves) {
    io.slaves(i).readAddr.bits  := selectedReadAddr
    io.slaves(i).readAddr.valid := selectedReadValid && (selectedSlave === i.U)
    io.slaves(i).readData.ready := Mux(readGrant === 0.U, io.ifaxi.readData.ready, io.lsaxi.readData.ready) && (selectedSlave === i.U)
  }

  // 将从设备的响应路由回主设备
  io.ifaxi.readAddr.ready := io.slaves(selectedSlave).readAddr.ready && (readGrant === 0.U)
  io.lsaxi.readAddr.ready := io.slaves(selectedSlave).readAddr.ready && (readGrant === 1.U)

  io.ifaxi.readData.bits := io.slaves(selectedSlave).readData.bits
  io.ifaxi.readData.valid := io.slaves(selectedSlave).readData.valid && (readGrant === 0.U)
  io.lsaxi.readData.bits := io.slaves(selectedSlave).readData.bits
  io.lsaxi.readData.valid := io.slaves(selectedSlave).readData.valid && (readGrant === 1.U)


  val selectedWriteAddr = Mux(writeGrant === 0.U, io.ifaxi.writeAddr.bits, io.lsaxi.writeAddr.bits)
  val selectedWriteValid = Mux(writeGrant === 0.U, io.ifaxi.writeAddr.valid, io.lsaxi.writeAddr.valid)

  for (i <- 0 until numSlaves) {
    io.slaves(i).writeAddr.bits := selectedWriteAddr
    io.slaves(i).writeAddr.valid := selectedWriteValid && (writeSlave === i.U)
    io.slaves(i).writeData.bits := Mux(writeGrant === 0.U, io.ifaxi.writeData.bits, io.lsaxi.writeData.bits)
    io.slaves(i).writeData.valid := Mux(writeGrant === 0.U, io.ifaxi.writeData.valid, io.lsaxi.writeData.valid) && (writeSlave === i.U)
    io.slaves(i).writeResp.ready := Mux(writeGrant === 0.U, io.ifaxi.writeResp.ready, io.lsaxi.writeResp.ready) && (writeSlave === i.U)
  }

  io.ifaxi.writeAddr.ready := io.slaves(writeSlave).writeAddr.ready && (writeGrant === 0.U)
  io.lsaxi.writeAddr.ready := io.slaves(writeSlave).writeAddr.ready && (writeGrant === 1.U)

  io.ifaxi.writeData.ready := io.slaves(writeSlave).writeData.ready && (writeGrant === 0.U)
  io.lsaxi.writeData.ready := io.slaves(writeSlave).writeData.ready && (writeGrant === 1.U)

  io.ifaxi.writeResp.bits := io.slaves(writeSlave).writeResp.bits
  io.ifaxi.writeResp.valid := io.slaves(writeSlave).writeResp.valid && (writeGrant === 0.U)
  io.lsaxi.writeResp.bits := io.slaves(writeSlave).writeResp.bits
  io.lsaxi.writeResp.valid := io.slaves(writeSlave).writeResp.valid && (writeGrant === 1.U)
}
