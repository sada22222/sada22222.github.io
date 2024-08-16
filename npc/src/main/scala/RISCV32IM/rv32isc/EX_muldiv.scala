package rv32isc

import chisel3._
import chisel3.util._

import config.Configs._
import utils._


class exu_muldiv extends Module {
  val io = IO(new Bundle {
    val muldiv_op1_i = Input(UInt(32.W))
    val muldiv_op2_i = Input(UInt(32.W))

    val muldiv_op_mul_i = Input(Bool())
    val muldiv_op_mulh_i = Input(Bool())
    val muldiv_op_mulhsu_i = Input(Bool())
    val muldiv_op_mulhu_i = Input(Bool())
    val muldiv_op_div_i = Input(Bool())
    val muldiv_op_divu_i = Input(Bool())
    val muldiv_op_rem_i = Input(Bool())
    val muldiv_op_remu_i = Input(Bool())

    val int_stall_i = Input(Bool())

    val muldiv_reg_wdata_o = Output(UInt(32.W))
    val muldiv_reg_we_o = Output(Bool())
    val muldiv_stall_o = Output(Bool())
  })

    // Divider instance
  val u_divider = Module(new Divider)
  val div_result = Wire(UInt(32.W))
  val div_ready = Wire(Bool())
  div_result := u_divider.io.result_o
  div_ready := u_divider.io.ready_o

      // 除法操作
  val op_div = io.muldiv_op_div_i | io.muldiv_op_divu_i | io.muldiv_op_rem_i | io.muldiv_op_remu_i
  val div_start = op_div && !div_ready && !io.int_stall_i
  val div_op = Cat(io.muldiv_op_div_i, io.muldiv_op_divu_i, io.muldiv_op_rem_i, io.muldiv_op_remu_i)

  u_divider.io.dividend_i := io.muldiv_op1_i
  u_divider.io.divisor_i := io.muldiv_op2_i
  u_divider.io.start_i := div_start
  u_divider.io.op_i := div_op


  // 乘法操作
  val op_mul = io.muldiv_op_mul_i | io.muldiv_op_mulh_i | io.muldiv_op_mulhsu_i | io.muldiv_op_mulhu_i

  // 管道寄存器
  val muldiv_op1_r = RegEnable(io.muldiv_op1_i, 0.U(32.W), op_mul)
  val muldiv_op2_r = RegEnable(io.muldiv_op2_i, 0.U(32.W), op_mul)

  val mul_ready_r = RegInit(false.B)
  val mul_ready = !mul_ready_r && op_mul
  mul_ready_r := mul_ready

  val mul_start = !mul_ready_r && op_mul

  val op1_is_signed = muldiv_op1_r(31)
  val op2_is_signed = muldiv_op2_r(31)
  val op1_complcode = Mux(op1_is_signed, -muldiv_op1_r, muldiv_op1_r)
  val op2_complcode = Mux(op2_is_signed, -muldiv_op2_r, muldiv_op2_r)

  val op1_mul = Mux(io.muldiv_op_mul_i | io.muldiv_op_mulhu_i, muldiv_op1_r, op1_complcode)
  val op2_mul = Mux(io.muldiv_op_mul_i | io.muldiv_op_mulhu_i | io.muldiv_op_mulhsu_i, muldiv_op2_r, op2_complcode)

  val mul_res_tmp = op1_mul * op2_mul
  val mul_res_tmp_complcode = -mul_res_tmp
  val mul_res = mul_res_tmp(31, 0)
  val mulhu_res = mul_res_tmp(63, 32)
  val mulh_res = Mux(op1_is_signed ^ op2_is_signed, mul_res_tmp_complcode(63, 32), mul_res_tmp(63, 32))
  val mulhsu_res = Mux(op1_is_signed, mul_res_tmp_complcode(63, 32), mul_res_tmp(63, 32))

  val mul_op_res = Wire(UInt(32.W))
  mul_op_res := MuxLookup(true.B, 0.U(32.W), Seq(
    io.muldiv_op_mul_i -> mul_res,
    io.muldiv_op_mulhu_i -> mulhu_res,
    io.muldiv_op_mulh_i -> mulh_res,
    io.muldiv_op_mulhsu_i -> mulhsu_res
  ))

  // 运算结果
  io.muldiv_reg_wdata_o := div_result | mul_op_res
  io.muldiv_reg_we_o := div_ready || mul_ready_r
  io.muldiv_stall_o := div_start || mul_start
}

