package npc.core

import chisel3._
import chisel3.util._

import configs. {MduOp ,MduDecode}


class MDU extends Module {
  val io = IO(new Bundle {
    // control signals
    val flush   = Input(Bool())
    val op      = Input(UInt(4.W))
    val valid   = Output(Bool())
    // data
    val opr1    = Input(UInt(32.W))
    val opr2    = Input(UInt(32.W))
    val result  = Output(UInt(32.W))
  })

  // decode operation to divider & multiplier control signals
  val mulEn :: divEn :: hiRem :: lhsSigned :: rhsSigned :: Nil =
      ListLookup(io.op, MduDecode.DEFAULT, MduDecode.TABLE)

  // operands
  val isOpr1Neg = lhsSigned && io.opr1(31)
  val isOpr2Neg = rhsSigned && io.opr2(31)
  val isAnsNeg  = isOpr1Neg ^ isOpr2Neg
  val opr1      = Mux(isOpr1Neg, -io.opr1, io.opr1)
  val opr2      = Mux(isOpr2Neg, -io.opr2, io.opr2)

  // multiplier
  val mul       = Module(new WallaceMultiplier)
  val mulOut    = Mux(isAnsNeg,-mul.io.result,mul.io.result)
  val mulAns    = Mux(hiRem, mulOut(63, 32), mulOut(31, 0))
  mul.io.mul1  := Mux(mulEn && !io.flush,opr1,0.U)
  mul.io.mul2  := Mux(mulEn && !io.flush,opr2,0.U)

  // divider
  val div           = Module(new Divider(32))
  val allOnes       = Fill(32, 1.U)
  val oprMin        = 1.U << 32
  val isDivOverflow = lhsSigned && opr1 === oprMin && opr2 === allOnes
  val isRemNeg      = lhsSigned && (io.opr1(31) ^
                                    div.io.remainder(31))
  val divQuo        = Mux(isAnsNeg, -div.io.quotient, div.io.quotient)
  val divAnsQuo     = Mux(div.io.divZero, allOnes,
                      Mux(isDivOverflow, oprMin, divQuo))
  val divRem        = Mux(isRemNeg, -div.io.remainder, div.io.remainder)
  val divAnsRem     = Mux(div.io.divZero, io.opr1,
                      Mux(isDivOverflow, 0.U, divRem))
  val divAns        = Mux(hiRem, divAnsRem, divAnsQuo)
  div.io.en        := divEn
  div.io.flush     := io.flush
  div.io.divident  := opr1
  div.io.divisor   := opr2

  // output signals
  io.valid  := Mux(mulEn, true.B, Mux(divEn, div.io.done, true.B))
  io.result := Mux(mulEn, mulAns, Mux(divEn, divAns, 0.U))
}