package axi

import chisel3._
import chisel3.util._

// 定义 DPI-C 写接口的 BlackBox
class awrite extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
      val clock = Input(Clock())
      val wen = Input(Bool())     // 写使能
      val ren = Input(Bool())     // 读使能
      val addr = Input(UInt(32.W))
      val mask = Input(UInt(4.W))
      val sign = Input(Bool())
      val wdata = Input(UInt(32.W))
      val rdata = Output(UInt(32.W))
  })

  setInline("awrite.v",
    """
      |import "DPI-C" function void vaddr_write(int addr, byte mask, int data);
      |import "DPI-C" function int vaddr_read(bit is_signed, int addr, byte mask);
      |
      |module awrite (
      |    input         clock,
      |    input         wen,       
      |    input         ren,        
      |    input  [31:0] addr,       // 地址
      |    input  [ 3:0] mask,       // 字节掩码
      |    input         sign,       // 是否有符号
      |    input  [31:0] wdata,      
      |    output reg [31:0] rdata   
      |);
      |
      |    always @(posedge clock) begin
      |        if (wen) begin
      |            vaddr_write(addr, mask, wdata);  // 调用DPI-C写函数
      |        end
      |    end
      |
      |    always @(*) begin
      |        if (ren) begin
      |            rdata = vaddr_read(sign, addr, mask); // 调用DPI-C读函数
      |        end else begin
      |            rdata = 32'b0;
      |        end
      |    end
      |endmodule
      |
    """.stripMargin)
}

// 定义 DPI-C 读接口的 BlackBox
class read extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val addr = Input(UInt(32.W))
    val data = Output(UInt(32.W))
  })

  setInline("read.v",
    """
      |import "DPI-C" function int vaddr_read(int addr);
      |module read (
      |    input  [31:0] addr,
      |    output [31:0] data
      |);
      |  assign data = vaddr_read(addr); // 调用DPI-C读函数
      |endmodule
    """.stripMargin)
}

// AXI-Lite RAM Slave模块，集成DPI-C读写操作
class AxiLiteRamSlave(val addrWidth: Int, val dataWidth: Int, val depth: Int) extends Module {
  val io = IO(new Bundle {
    val axi = new AxiLiteSlave(addrWidth, dataWidth) // AXI-Lite从设备接口
  })

  // 引入 DPI-C 读写模块
  val readModule = Module(new read)
  val writeModule = Module(new awrite)

  // 读地址寄存器，用于保存收到的地址
  val readAddrReg = RegInit(0.U(addrWidth.W))

  // 写地址寄存器，用于保存写请求地址
  val writeAddrReg = RegInit(0.U(addrWidth.W))

  // 写数据寄存器，用于保存写请求数据
  val writeDataReg = RegInit(0.U(dataWidth.W))

  // 写掩码寄存器，用于保存写请求掩码
  val writeMaskReg = RegInit(0.U(4.W))

  // ------------------- 初始化信号 -------------------
  io.axi.readAddr.ready := false.B
  io.axi.readData.valid := false.B
  io.axi.readData.bits.data := 0.U
  io.axi.readData.bits.resp := 0.U // 00 表示成功响应
  
  io.axi.writeAddr.ready := false.B
  io.axi.writeData.ready := false.B
  io.axi.writeResp.valid := false.B
  io.axi.writeResp.bits := 0.U // 00 表示成功响应

  // 定义握手信号
  val ar_hs = io.axi.readAddr.valid && io.axi.readAddr.ready  // 读地址握手
  val r_hs = io.axi.readData.valid && io.axi.readData.ready   // 读数据握手
  val aw_hs = io.axi.writeAddr.valid && io.axi.writeAddr.ready // 写地址握手
  val w_hs = io.axi.writeData.valid && io.axi.writeData.ready  // 写数据握手
  val b_hs = io.axi.writeResp.valid && io.axi.writeResp.ready  // 写响应握手

  // 状态机
  val sIdle :: sReadReq :: sReadResp :: sWriteReq :: sWriteData :: sWriteResp :: Nil = Enum(6)
  val state = RegInit(sIdle)

  switch(state) {
    // 空闲状态，等待读或写请求
    is(sIdle) {
      // 处理读请求
      when(io.axi.readAddr.valid) {
        io.axi.readAddr.ready := true.B
        when(ar_hs) {
          readAddrReg := io.axi.readAddr.bits.addr
          state := sReadReq
        }
      }
      // 处理写请求
      when(io.axi.writeAddr.valid) {
        io.axi.writeAddr.ready := true.B
        when(aw_hs) {
          writeAddrReg := io.axi.writeAddr.bits.addr
          writeMaskReg := io.axi.writeData.bits.strb  // 写掩码
          state := sWriteReq
        }
      }
    }

    // 处理读请求，使用 `vaddr_read` 读取数据
    is(sReadReq) {
      // 通过DPI-C读取数据
      readModule.io.addr := readAddrReg
      io.axi.readData.bits.data := readModule.io.data
      io.axi.readData.bits.resp := 0.U // OKAY
      io.axi.readData.valid := true.B
      when(r_hs) {
        state := sIdle
      }
    }

    // 处理写请求
    is(sWriteReq) {
      when(io.axi.writeData.valid) {
        io.axi.writeData.ready := true.B
        when(w_hs) {
          writeDataReg := io.axi.writeData.bits.data
          state := sWriteData
        }
      }
    }

    // 使用DPI-C的`vaddr_write`函数进行写操作
    is(sWriteData) {
      // 使用 DPI-C 写操作
      writeModule.io.addr := writeAddrReg
      writeModule.io.mask := writeMaskReg
      writeModule.io.data := writeDataReg
      state := sWriteResp
    }

    // 发送写响应
    is(sWriteResp) {
      io.axi.writeResp.valid := true.B
      io.axi.writeResp.bits := 0.U // OKAY
      when(b_hs) {
        state := sIdle
      }
    }
  }
}
