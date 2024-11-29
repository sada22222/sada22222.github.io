package axi

import chisel3._
import chisel3.util._

// 定义 DPI-C 写接口的 BlackBox
class awrite extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    val wen   = Input(Bool())
    val ren   = Input(Bool())
    val addr  = Input(UInt(32.W))
    val mask  = Input(UInt(4.W))
    val sign  = Input(Bool())
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
      |    input  [31:0] addr,
      |    input  [ 3:0] mask,
      |    input         sign,
      |    input  [31:0] wdata,
      |    output reg [31:0] rdata
      |);
      |
      |    always @(posedge clock) begin
      |        if (wen) begin
      |            vaddr_write(addr, mask, wdata);
      |        end
      |    end
      |
      |    always @(*) begin
      |        if (ren) begin
      |            rdata = vaddr_read(sign, addr, mask);
      |        end else begin
      |            rdata = 32'b0;
      |        end
      |    end
      |endmodule
    """.stripMargin)
}

// AXI4 RAM Slave模块，集成DPI-C读写操作
class Axi4RamSlave extends Module {
  val io = IO(new Bundle {
    val axi = new Axi4Slave
    val state=Output(UInt(32.W))
  })

  // 引入 DPI-C 读写模块
  val awrite = Module(new awrite)
  awrite.io.clock := clock
  // 默认初始化所有 AXI4 信号
  io.axi.slave_arready := false.B
  io.axi.slave_rvalid  := false.B
  io.axi.slave_rdata   := 0.U
  io.axi.slave_rid     := 0.U
  io.axi.slave_rlast   := false.B
  io.axi.slave_rresp   := 0.U
  io.axi.slave_awready := false.B
  io.axi.slave_wready  := false.B
  io.axi.slave_bvalid  := false.B
  io.axi.slave_bresp   := 0.U
  io.axi.slave_bid     := 0.U

  // 定义握手信号
  val arHandshake = io.axi.slave_arvalid && io.axi.slave_arready
  val rHandshake  = io.axi.slave_rvalid && io.axi.slave_rready
  val awHandshake = io.axi.slave_awvalid && io.axi.slave_awready
  val wHandshake  = io.axi.slave_wvalid && io.axi.slave_wready
  val bHandshake  = io.axi.slave_bvalid && io.axi.slave_bready

  // 状态机
  val sIdle :: sReadReq :: sReadResp :: sWriteReq :: sWriteResp :: Nil = Enum(5)
  val state = RegInit(sIdle)
  io.state:=state
  switch(state) {
    is(sIdle) {
      awrite.io.wen := false.B
      awrite.io.ren := false.B
      when(arHandshake) {
        state := sReadReq
      } .elsewhen(awHandshake) {
        state := sWriteReq
      }
    }

    is(sReadReq) {
      awrite.io.addr := io.axi.slave_araddr
      awrite.io.wen := false.B
      awrite.io.ren := true.B
      io.axi.slave_rdata := awrite.io.rdata
      io.axi.slave_rlast := true.B
      io.axi.slave_rid := io.axi.slave_arid
      when(rHandshake) {
        state := sIdle
      }
    }

    is(sWriteReq) {
      awrite.io.addr := io.axi.slave_awaddr
      awrite.io.mask := io.axi.slave_wstrb
      awrite.io.wdata := io.axi.slave_wdata
      awrite.io.wen := true.B
      awrite.io.ren := false.B
      when(wHandshake) {
        state := sWriteResp
      }
    }

    is(sWriteResp) {
      io.axi.slave_bid := io.axi.slave_awid
      io.axi.slave_bresp := 0.U // 写响应成功
      io.axi.slave_bvalid := true.B
      when(bHandshake) {
        state := sIdle
      }
    }
  }

  // AXI接口信号
  io.axi.slave_arready := (state === sIdle)
  io.axi.slave_awready := (state === sIdle)
  io.axi.slave_rvalid  := (state === sReadReq)
  io.axi.slave_wready  := (state === sWriteReq)
  io.axi.slave_bvalid  := (state === sWriteResp)
}
