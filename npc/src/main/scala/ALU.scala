import chisel3._
import chisel3.util._

class ALU extends Module {
  val io = IO(new Bundle {
    val A = Input(SInt(4.W))
    val B = Input(SInt(4.W))
    val sel = Input(UInt(3.W))
    val out = Output(SInt(4.W))
    val zero = Output(Bool())
    val overflow = Output(Bool())
    val carry = Output(Bool())
  })

  val add_result = io.A +& io.B
  val sub_result = io.A -& io.B

  // 计算标志位
  val add_overflow = (io.A(3) === io.B(3)) && (add_result(3) =/= io.A(3))
  val sub_overflow = (io.A(3) =/= io.B(3)) && (sub_result(3) =/= io.A(3))

  val add_carry = add_result(4)
  val sub_carry = sub_result(4)

  // 根据选择信号执行相应的操作
  io.out := MuxLookup(io.sel, 0.S, Seq(
    "b000".U -> add_result(3, 0).asSInt,
    "b001".U -> sub_result(3, 0).asSInt,
    "b010".U -> (~io.A).asSInt,
    "b011".U -> (io.A & io.B).asSInt,
    "b100".U -> (io.A | io.B).asSInt,
    "b101".U -> (io.A ^ io.B).asSInt,
    "b110".U -> Mux(io.A < io.B, 1.S, 0.S),
    "b111".U -> Mux(io.A === io.B, 1.S, 0.S)
  ))

  // 设置标志位
  io.zero := io.out === 0.S
  io.overflow := Mux(io.sel === "b000".U, add_overflow, Mux(io.sel === "b001".U, sub_overflow, false.B))
  io.carry := Mux(io.sel === "b000".U, add_carry, Mux(io.sel === "b001".U, sub_carry, false.B))
}

object ALU extends App {
  (new chisel3.stage.ChiselStage).emitVerilog(new ALU())
}
