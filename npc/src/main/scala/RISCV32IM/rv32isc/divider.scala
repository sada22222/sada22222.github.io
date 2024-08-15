package rv32isc


import chisel3._
import chisel3.util._
import config.Configs._
import utils._

class Divider extends Module {
  val io = IO(new Bundle {
    val dividend_i = Input(UInt(32.W)) // 被除数
    val divisor_i = Input(UInt(32.W))  // 除数
    val start_i = Input(Bool())        // 开始信号
    val op_i = Input(UInt(4.W))        // 指令操作码

    val result_o = Output(UInt(32.W))  // 结果输出
    val ready_o = Output(Bool())       // 运算结束信号
  })

  // 状态定义
  val STATE_IDLE  = "b0001".U(4.W)
  val STATE_START = "b0010".U(4.W)
  val STATE_CALC  = "b0100".U(4.W)
  val STATE_END   = "b1000".U(4.W)

  // 寄存器定义
  val state = RegInit(STATE_IDLE)
  val dividend_r = RegInit(0.U(32.W))
  val divisor_r = RegInit(0.U(32.W))
  val op_r = RegInit(0.U(4.W))
  val count = RegInit(0.U(32.W))
  val div_result = RegInit(0.U(32.W))
  val div_remain = RegInit(0.U(32.W))
  val minuend = RegInit(0.U(32.W))
  val invert_result = RegInit(false.B)
  val result_o_reg = RegInit(0.U(32.W))
  val ready_o_reg = RegInit(false.B)

  io.result_o := result_o_reg
  io.ready_o := ready_o_reg

  // 操作类型信号
  val op_div = op_r(3)
  val op_divu = op_r(2)
  val op_rem = op_r(1)
  val op_remu = op_r(0)

  val dividend_invert = -dividend_r
  val divisor_invert = -divisor_r
  val minuend_ge_divisor = minuend >= divisor_r
  val minuend_sub_res = minuend - divisor_r
  val div_result_tmp = Mux(minuend_ge_divisor, Cat(div_result(30, 0), 1.U(1.W)), Cat(div_result(30, 0), 0.U(1.W)))
  val minuend_tmp = Mux(minuend_ge_divisor, minuend_sub_res(30, 0), minuend(30, 0))

  // 状态机实现
  switch(state) {
    is(STATE_IDLE) {
      when(io.start_i) {
        op_r := io.op_i
        dividend_r := io.dividend_i
        divisor_r := io.divisor_i
        state := STATE_START
      }.otherwise {
        op_r := 0.U
        dividend_r := 0.U
        divisor_r := 0.U
        ready_o_reg := false.B
        result_o_reg := 0.U
      }
    }

    is(STATE_START) {
      when(io.start_i) {
        when(divisor_r === 0.U) {
          // 除数为0的处理
          when(op_div || op_divu) {
            result_o_reg := "hffffffff".U
          }.otherwise {
            result_o_reg := dividend_r
          }
          ready_o_reg := true.B
          state := STATE_IDLE
        }.otherwise {
          count := "h40000000".U
          state := STATE_CALC
          div_result := 0.U
          div_remain := 0.U

          // 处理有符号运算
          when(op_div || op_rem) {
            when(dividend_r(31) === 1.U) {
              dividend_r := dividend_invert
              minuend := dividend_invert(31)
            }.otherwise {
              minuend := dividend_r(31)
            }
            when(divisor_r(31) === 1.U) {
              divisor_r := divisor_invert
            }
          }.otherwise {
            minuend := dividend_r(31)
          }

          // 结果是否需要取补码
          invert_result := (op_div && (dividend_r(31) ^ divisor_r(31))) || (op_rem && dividend_r(31))
        }
      }.otherwise {
        state := STATE_IDLE
        result_o_reg := 0.U
        ready_o_reg := false.B
      }
    }

    is(STATE_CALC) {
      when(io.start_i) {
        dividend_r := Cat(dividend_r(30, 0), 0.U(1.W))
        div_result := div_result_tmp
        count := Cat(0.U(1.W), count(31, 1))
        when(count.orR) {
          minuend := Cat(minuend_tmp, dividend_r(30))
        }.otherwise {
          state := STATE_END
          div_remain := Mux(minuend_ge_divisor, minuend_sub_res, minuend)
        }
      }.otherwise {
        state := STATE_IDLE
        result_o_reg := 0.U
        ready_o_reg := false.B
      }
    }

    is(STATE_END) {
      when(io.start_i) {
        ready_o_reg := true.B
        state := STATE_IDLE
        when(op_div || op_divu) {
          when(invert_result) {
            result_o_reg := -div_result
          }.otherwise {
            result_o_reg := div_result
          }
        }.otherwise {
          when(invert_result) {
            result_o_reg := -div_remain
          }.otherwise {
            result_o_reg := div_remain
          }
        }
      }.otherwise {
        state := STATE_IDLE
        result_o_reg := 0.U
        ready_o_reg := false.B
      }
    }
  }
}