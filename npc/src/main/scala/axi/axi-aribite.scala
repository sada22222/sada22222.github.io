package axi

import chisel3._
import chisel3.util._
/*
class AxiLiteArbiterSelector(val addrWidth: Int, val dataWidth: Int) extends Module {
  val numSlaves = 2
  val io = IO(new Bundle {
    val ifaxi = Flipped(new AxiLiteMaster(addrWidth, dataWidth))
    val lsaxi = Flipped(new AxiLiteMaster(addrWidth, dataWidth))
    val slaves = Vec(numSlaves, Flipped(new AxiLiteSlave(addrWidth, dataWidth)))
    val selectedReadSlave=Output(UInt(32.W))
   // val readGrant=Output(Bool())
  })
  
  // 仲裁优先级
  val ifaxiReadValid = io.ifaxi.readAddr.valid
  val ifaxiWriteValid = io.ifaxi.writeAddr.valid
  val lsaxiReadValid = io.lsaxi.readAddr.valid
  val lsaxiWriteValid = io.lsaxi.writeAddr.valid

  val readGrant = Mux(ifaxiReadValid, 0.U, 1.U)
  val writeGrant = Mux(ifaxiWriteValid, 0.U, 1.U)
  def decodeAddress(addr: UInt): UInt = {
    MuxCase(2.U, Seq(
      (addr >= "h80000000".U && addr < "h800ff000".U) -> 0.U,//rom
      (addr >= "h800ff000".U && addr < "h8fffffff".U) -> 1.U //ram 
      //(addr >= "h60000000".U && addr <= "h6fffffff".U) -> 2.U //gpio->0x6000_0000 
    ))
  }
  

  val selectedReadSlave  = decodeAddress(Mux(readGrant === 0.U, io.ifaxi.readAddr.bits.addr, io.lsaxi.readAddr.bits.addr))
  val selectedWriteSlave = decodeAddress(Mux(writeGrant === 0.U, io.ifaxi.writeAddr.bits.addr, io.lsaxi.writeAddr.bits.addr))
 io.selectedReadSlave:=selectedReadSlave
  for (i <- 0 until numSlaves) {
    val isReadSlaveSelected  = (selectedReadSlave === i.U)
    val isWriteSlaveSelected = (selectedWriteSlave === i.U)
    
    io.slaves(i).readAddr.bits.addr  := Mux(isReadSlaveSelected, Mux(readGrant === 0.U, io.ifaxi.readAddr.bits.addr, io.lsaxi.readAddr.bits.addr), 0.U)
    io.slaves(i).readAddr.valid      := Mux(isReadSlaveSelected, Mux(readGrant === 0.U, ifaxiReadValid, lsaxiReadValid), false.B)
    io.slaves(i).readData.ready      := Mux(readGrant === 0.U, io.ifaxi.readData.ready, io.lsaxi.readData.ready) && isReadSlaveSelected

    io.slaves(i).writeAddr.bits.addr := Mux(isWriteSlaveSelected, Mux(writeGrant === 0.U, io.ifaxi.writeAddr.bits.addr, io.lsaxi.writeAddr.bits.addr), 0.U)
    io.slaves(i).writeAddr.valid     := Mux(isWriteSlaveSelected, Mux(writeGrant === 0.U, ifaxiWriteValid, lsaxiWriteValid), false.B)
    io.slaves(i).writeData.bits.data := Mux(isWriteSlaveSelected, Mux(writeGrant === 0.U, io.ifaxi.writeData.bits.data, io.lsaxi.writeData.bits.data), 0.U)
    io.slaves(i).writeData.bits.strb := Mux(isWriteSlaveSelected, Mux(writeGrant === 0.U, io.ifaxi.writeData.bits.strb, io.lsaxi.writeData.bits.strb), 0.U)
    io.slaves(i).writeData.valid     := Mux(isWriteSlaveSelected, Mux(writeGrant === 0.U, io.ifaxi.writeData.valid, io.lsaxi.writeData.valid), false.B)
    io.slaves(i).writeResp.ready     := Mux(writeGrant === 0.U, io.ifaxi.writeResp.ready, io.lsaxi.writeResp.ready) && isWriteSlaveSelected
  }

  io.ifaxi.readAddr.ready  := io.slaves(selectedReadSlave).readAddr.ready && (readGrant === 0.U)
  io.lsaxi.readAddr.ready  := io.slaves(selectedReadSlave).readAddr.ready && (readGrant === 1.U)

  io.ifaxi.readData.bits   := io.slaves(selectedReadSlave).readData.bits
  io.ifaxi.readData.valid  := io.slaves(selectedReadSlave).readData.valid && (readGrant === 0.U)
  io.lsaxi.readData.bits   := io.slaves(selectedReadSlave).readData.bits
  io.lsaxi.readData.valid  := io.slaves(selectedReadSlave).readData.valid && (readGrant === 1.U)

  io.ifaxi.writeAddr.ready := io.slaves(selectedWriteSlave).writeAddr.ready && (writeGrant === 0.U)
  io.ifaxi.writeData.ready := io.slaves(selectedWriteSlave).writeData.ready && (writeGrant === 0.U)
  io.ifaxi.writeResp.bits  := io.slaves(selectedWriteSlave).writeResp.bits
  io.ifaxi.writeResp.valid := io.slaves(selectedWriteSlave).writeResp.valid && (writeGrant === 0.U)

  io.lsaxi.writeAddr.ready := io.slaves(selectedWriteSlave).writeAddr.ready && (writeGrant === 1.U)
  io.lsaxi.writeData.ready := io.slaves(selectedWriteSlave).writeData.ready && (writeGrant === 1.U)
  io.lsaxi.writeResp.bits  := io.slaves(selectedWriteSlave).writeResp.bits
  io.lsaxi.writeResp.valid := io.slaves(selectedWriteSlave).writeResp.valid && (writeGrant === 1.U)
}
*/