package npc.core

import chisel3._
import chisel3.util._
import configs.{IF_IO, SramIO}

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
      |import "DPI-C" function void halt(int inst);
      |module read (
      |    input  [31:0] addr,
      |    input         clock,
      |    input         reset,
      |    output [31:0] data
      |);
      |    reg [31:0] fetched_data;
      |    always @(posedge clock) begin
      |        if (reset) begin
      |            fetched_data <= 32'b0;
      |        end else begin
      |            fetched_data <= fetch(clock, reset, addr); // 调用DPI-C读函数
      |            halt(fetched_data); // 处理指令的halt逻辑
      |        end
      |    end
      |    assign data = fetched_data;
      |endmodule
    """.stripMargin)
}

class IF extends Module {
  val io = IO(new Bundle {
    val rom = new SramIO
    val flush = Input(Bool())
    val flush_pc = Input(UInt(32.W))
    val stall = Input(Bool())
    val stallreq = Output(Bool())
    val IF = Output(new IF_IO)
  })

  // 初始化PC寄存器
  val pc = RegInit("h80000000".U(32.W))
  val valid = io.rom.valid

  // 分支预测单元
  val bpu = Module(new BPU)
  bpu.io.inst_i := io.rom.rdata
  bpu.io.inst_valid_i := valid
  bpu.io.pc_i := pc

  // 选择下一个PC值，处理跳转、刷线、停止
  val nextPc = Mux(io.flush, io.flush_pc,
               Mux(io.stall, pc,
               Mux(bpu.io.prdt_taken_o, bpu.io.prdt_addr_o, pc + 4.U)))
  pc := nextPc

  // 检查地址是否未对齐
  val misaligned = pc(1, 0) =/= 0.U

  // 配置ROM接口信号
  io.rom.en     := true.B
  io.rom.wen    := 0.U
  io.rom.addr   := pc
  io.rom.wdata  := 0.U

  // 实例化 `read` 模块
  val read = Module(new read)
  read.io.addr := pc
  read.io.clock := clock
  read.io.reset := reset.asBool

  // 输出信号控制
  io.stallreq := !io.rom.valid
  io.IF.pc := pc
  io.IF.valid := valid
  io.IF.inst := read.io.data
  io.IF.bpu_take := bpu.io.prdt_taken_o
  io.IF.bpu_takepc := bpu.io.prdt_addr_o
  io.IF.misaligned := misaligned
}
