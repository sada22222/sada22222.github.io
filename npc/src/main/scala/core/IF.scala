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
      |            fetched_data <= 32'h13;//NOP
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
    val flush = Input(Bool())
    val flush_pc = Input(UInt(32.W))
    val stall = Input(Bool())
    val stallreq = Output(Bool())
    val IF = Output(new IF_IO)

    val prdt_taken_o = Output(Bool())
    val prdt_addr_o  = Output(UInt(32.W))
    val nextpc       = Output(UInt(32.W))
  })

  // 初始化PC寄存器
  val pc = RegInit("h80000000".U(32.W)) 
  val valid = true.B

  // 实例化 `read` 模块
  val read = Module(new read)
  val bpu = Module(new BPU)

  read.io.addr := pc
  bpu.io.pc_i := pc
  read.io.clock := clock
  read.io.reset := reset.asBool

  // 使用当前的 PC 作为分支预测输入
  bpu.io.inst_i := read.io.data
  bpu.io.inst_valid_i := valid

  // 选择下一个PC值，处理跳转、刷线、停止
  val nextPc = Wire(UInt(32.W))
  nextPc := Mux(io.flush, io.flush_pc,  // 如果flush有效，跳转到flush_pc
                Mux(io.stall, pc,        // 如果stall有效，保持当前PC
                Mux(bpu.io.prdt_taken_o, bpu.io.prdt_addr_o, pc + 4.U)))  // 否则，按顺序执行

  // 输出分支预测结果
  io.prdt_taken_o := bpu.io.prdt_taken_o
  io.prdt_addr_o := bpu.io.prdt_addr_o
  io.nextpc := pc  // 输出更新后的 nextPc

  // 检查地址是否未对齐
  val misaligned = pc(1, 0) =/= 0.U

  // 更新PC: 将nextPc更新到PC
  pc := nextPc

  // 输出信号控制
  io.stallreq := false.B  // 你可以根据需要调整这个信号的逻辑
  io.IF.pc := pc
  io.IF.valid := valid
  io.IF.inst := read.io.data
  io.IF.bpu_take := bpu.io.prdt_taken_o
  io.IF.bpu_takepc := bpu.io.prdt_addr_o
  io.IF.misaligned := misaligned
}

