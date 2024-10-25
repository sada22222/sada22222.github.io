package npc.core

import chisel3._
import chisel3.util._

class BPU extends Module {
  val io = IO(new Bundle {
    val inst_i = Input(UInt(32.W))
    val inst_valid_i = Input(Bool())
    val pc_i = Input(UInt(32.W))

    val prdt_taken_o = Output(Bool())
    val prdt_addr_o = Output(UInt(32.W))
  })

  val opcode = io.inst_i(6, 0)

  val inst_type_branch = (opcode === "b1100011".U)  // B-type (分支指令)
  val inst_jal = (opcode === "b1101111".U)          // JAL (无条件跳转)

  // B-type和J-type指令的立即数
  val inst_b_type_imm = Cat(Fill(20, io.inst_i(31)), io.inst_i(7), io.inst_i(30, 25), io.inst_i(11, 8), 0.U(1.W)).asSInt
  val inst_j_type_imm = Cat(Fill(12, io.inst_i(31)), io.inst_i(19, 12), io.inst_i(20), io.inst_i(30, 21), 0.U(1.W)).asSInt

  val prdt_imm = WireDefault(0.U(32.W))


  when(inst_type_branch) {
    prdt_imm := inst_b_type_imm.asUInt
  }.elsewhen(inst_jal) {
    prdt_imm := inst_j_type_imm.asUInt
  }

  // 分支预测：B-type的预测基于立即数的符号位，JAL总是预测跳转
  val prdt_taken = Mux(inst_type_branch, inst_b_type_imm < 0.S, inst_jal)

  // 如果指令有效，输出预测结果，否则输出默认值
  io.prdt_taken_o := Mux(io.inst_valid_i, prdt_taken, false.B)
  io.prdt_addr_o := io.pc_i + prdt_imm // 预测的目标地址
}
