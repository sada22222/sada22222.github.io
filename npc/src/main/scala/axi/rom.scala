package axi

import chisel3._
import chisel3.util._

class read extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val addr = Input(UInt(32.W))
    val data = Output(UInt(32.W))
    val clock = Input(Clock())
    val reset = Input(Bool())
  })

  setInline("read.v",
    """
      |import "DPI-C" function int fetch(bit clk, bit rst, int pc);
      |module read (
      |    input  [31:0] addr,
      |    input         clock,
      |    input         reset,
      |    output [31:0] data
      |);
      |    reg [31:0] fetched_data;
      |    always @(posedge clock) begin
      |        if (reset) begin
      |            fetched_data <= 32'h413; // NOP
      |        end else begin
      |            fetched_data <= fetch(clock, reset, addr);
      |        end
      |    end
      |    assign data = fetched_data;
      |endmodule
    """.stripMargin)
}

class AxiLiteRomSlave extends Module {
  val io = IO(new Bundle {
    val axi = new Axi4Slave
    val state=Output(Bool())
  })
  
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
  // 实例化 read 模块
  val readModule = Module(new read)
  readModule.io.clock := clock
  readModule.io.reset := reset.asBool


  // 状态机定义
  val sIdle  :: sReadResp :: Nil = Enum(2)
  val state = RegInit(sIdle)

  val ar_hs = io.axi.slave_arvalid && io.axi.slave_arready // 地址握手
  val r_hs  = io.axi.slave_rvalid  && io.axi.slave_rready // 数据握手

  switch(state) {
    is(sIdle) {
      when(ar_hs) {
        state := sReadResp
      }
    }

    is(sReadResp) {
        readModule.io.addr := io.axi.slave_araddr
        io.axi.slave_rdata := readModule.io.data
      when(r_hs) {
        state := sIdle
      }
    }
  }
   io.axi.slave_arready := true.B
   io.axi.slave_rvalid  := (state===sReadResp)
   io.state:=state
}