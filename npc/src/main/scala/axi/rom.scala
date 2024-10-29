package axi

import chisel3._
import chisel3.util._

class AxiLiteRomSlave(val addrWidth: Int, val dataWidth: Int) extends Module {
  val io = IO(new Bundle {
    val axi = new AxiLiteSlave(addrWidth, dataWidth) // AXI-Lite从设备接口
  })

  // 实例化read模块用于调用DPI-C函数vaddr_read
  val readModule = Module(new read)

  // 读地址寄存器，用于保存收到的地址
  val readAddrReg = RegInit("h80000000".U(addrWidth.W))

  // 定义寄存器来控制 valid 信号，避免组合环路
  val readDataValidReg = RegInit(false.B)

  // ------------------- 初始化信号 -------------------
  io.axi.readAddr.ready := false.B
  io.axi.readData.valid := readDataValidReg // 使用寄存器控制 valid 信号
  io.axi.readData.bits.data := 0.U
  io.axi.readData.bits.resp := 0.U // 00 表示成功响应

  io.axi.writeAddr.ready := false.B // ROM 不处理写请求
  io.axi.writeData.ready := false.B // ROM 不处理写请求
  io.axi.writeResp.valid := false.B // ROM 不处理写响应
  io.axi.writeResp.bits := 0.U // 默认为成功响应（OKAY）

  // 状态机用于处理读请求
  val sIdle :: sReadReq :: sReadResp :: Nil = Enum(3)
  val state = RegInit(sIdle)

  // 加入握手信号
  val ar_hs = io.axi.readAddr.valid && io.axi.readAddr.ready
  val r_hs  = readDataValidReg && io.axi.readData.ready // 使用寄存器替代组合逻辑

  switch(state) {
    is(sIdle) {
      io.axi.readAddr.ready := true.B // 主动准备接收请求

      when(ar_hs) {
        // 接收到读请求，保存地址并进入处理状态
        readAddrReg := io.axi.readAddr.bits.addr
        state := sReadReq
      }
    }

    // 发起数据读取请求
    is(sReadReq) {
      // 设置read模块的输入地址
      readModule.io.addr := readAddrReg

      // 设置握手机制，检查AXI-Lite主设备是否准备好接收数据
      io.axi.readData.bits.data := readModule.io.data // 读取数据
      io.axi.readData.bits.resp := 0.U // 成功响应 (OKAY)
      readDataValidReg := true.B // 设置valid为true，表示数据有效
      state := sReadResp
    }

    // 发送读数据并等待主设备接收
    is(sReadResp) {
      when(r_hs) {
        // 主设备接收数据，回到空闲状态
        readDataValidReg := false.B // 数据发送完成后将 valid 清除
        state := sIdle
      }
    }
  }
}
