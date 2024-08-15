package rv32isc

import chisel3._
import chisel3.util._
import utils._
import config.Configs._

class BEQ extends Module {
  val io = IO(new Bundle {
    val inst_i = Input(UInt(32.W))
    val inst_valid_i = Input(Bool())
    val pc_i = Input(UInt(32.W))

    val prdt_taken_o = Output(Bool())
    val prdt_addr_o = Output(UInt(32.W))
  })

  val opcode = Wire(UInt(7.W))
  opcode := io.inst_i(6, 0)

  val opcode_1100011 = (opcode === "b1100011".U)
  val opcode_1101111 = (opcode === "b1101111".U)

  val inst_type_branch = opcode_1100011
  val inst_jal = opcode_1101111

  val inst_b_type_imm = Cat(Fill(20, io.inst_i(31)), io.inst_i(7), io.inst_i(30, 25), io.inst_i(11, 8), 0.U(1.W))
  val inst_j_type_imm = Cat(Fill(12, io.inst_i(31)), io.inst_i(19, 12), io.inst_i(20), io.inst_i(30, 21), 0.U(1.W))

  val prdt_taken = (inst_type_branch && inst_b_type_imm(31)) || inst_jal
  val prdt_imm = WireInit(inst_b_type_imm)

  when(inst_type_branch) {
    prdt_imm := inst_b_type_imm
  }.elsewhen(inst_jal) {
    prdt_imm := inst_j_type_imm
  }

  io.prdt_taken_o := Mux(io.inst_valid_i, prdt_taken, false.B)
  io.prdt_addr_o := io.pc_i + prdt_imm
}
