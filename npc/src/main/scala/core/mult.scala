package npc.core

import chisel3._
import chisel3.util._

class WallaceMultiplier extends Module {
  val io = IO(new Bundle {
    val mul1 = Input(UInt(32.W))
    val mul2 = Input(UInt(32.W))
    val result = Output(UInt(64.W))
  })

  // 定义 Booth 编码，部分积，和压缩器信号
  val boothCode = Wire(Vec(17, UInt(3.W)))

  val mulX  = io.mul1
  val mulX2 =mulX<<1
  val mulXCom = -mulX.asSInt
  val mulXCom2 = -(mulX<<1).asSInt
  val mulY = io.mul2

  val Nsum = Wire(Vec(17, UInt(64.W)))
  val Csum = Wire(Vec(17, UInt(65.W)))
  val Ssum = Wire(Vec(17, UInt(64.W)))
  // Booth 编码生成
  boothCode(0) := Cat(mulY(1), mulY(0), 0.U(1.W))
  boothCode(16) :=Cat(0.U(1.W),0.U(1.W),mulY(31))
  for (i <- 1 until 16) {
    boothCode(i) := Cat(mulY(2 * i + 1), mulY(2 * i), mulY(2 * i - 1))
  }


  // 生成部分积和进位
  for (i <- 0 until 16) {

      Nsum(i) := MuxCase(0.U, Seq(
      (boothCode(i) === "b000".U) -> 0.U,
      (boothCode(i) === "b001".U || boothCode(i) === "b010".U) -> Cat(Fill(32 - 2 * i,mulX(31)), mulX << (2 * i)),
      (boothCode(i) === "b011".U) -> Cat(Fill(32 - 2 * i - 1, mulX2(32)), mulX2 << (2 * i)),
      (boothCode(i) === "b100".U) -> Cat(Fill(32 - 2 * i - 1, mulXCom2(32)), mulXCom2 << (2 * i)),
      (boothCode(i) === "b101".U || boothCode(i) === "b110".U) -> Cat(Fill(32 - 2 * i, mulXCom(31)), mulXCom << (2 * i))
    ))
    Csum(i):=Cat(Csum(i)(64,1),0.U(1.W))
  }
  Nsum(16):=Mux(boothCode(16) === "b001".U,mulX << 32,0.U)



  // 部分积压缩（3:2 压缩器实现）
  val adders = Array.fill(17)(Module(new CarrySaveAdder(n=64))) // 使用全加器模块
  adders(0).io.A := Nsum(0)
  adders(0).io.B := Nsum(1)
  adders(0).io.Cin := Nsum(2)
  Ssum(0) := adders(0).io.Sum
  Csum(0) := adders(0).io.Cout

  adders(1).io.A := Nsum(3)
  adders(1).io.B := Nsum(4)
  adders(1).io.Cin := Nsum(5)
  Ssum(1) := adders(1).io.Sum
  Csum(1) := adders(1).io.Cout

  adders(2).io.A := Nsum(6)
  adders(2).io.B := Nsum(7)
  adders(2).io.Cin := Nsum(8)
  Ssum(2) := adders(2).io.Sum
  Csum(2) := adders(2).io.Cout

  adders(3).io.A := Nsum(9)
  adders(3).io.B := Nsum(10)
  adders(3).io.Cin := Nsum(11)
  Ssum(3) := adders(3).io.Sum
  Csum(3) := adders(3).io.Cout

  adders(4).io.A := Nsum(12)
  adders(4).io.B := Nsum(13)
  adders(4).io.Cin := Nsum(14)
  Ssum(4) := adders(4).io.Sum
  Csum(4) := adders(4).io.Cout

  adders(5).io.A := Nsum(15)
  adders(5).io.B := Nsum(16)
  adders(5).io.Cin := 0.U
  Ssum(5) := adders(5).io.Sum
  Csum(5) := adders(5).io.Cout

  adders(6).io.A := Ssum(0)
  adders(6).io.B := Ssum(1)
  adders(6).io.Cin := Ssum(2)
  Ssum(6) := adders(6).io.Sum
  Csum(6) := adders(6).io.Cout

  adders(7).io.A := Ssum(3)
  adders(7).io.B := Ssum(4)
  adders(7).io.Cin := Ssum(5)
  Ssum(7) := adders(7).io.Sum
  Csum(7) := adders(7).io.Cout

  adders(8).io.A := Csum(0)
  adders(8).io.B := Csum(1)
  adders(8).io.Cin := Csum(2)
  Ssum(8) := adders(8).io.Sum
  Csum(8) := adders(8).io.Cout

  adders(9).io.A := Csum(3)
  adders(9).io.B := Csum(4)
  adders(9).io.Cin := Csum(5)
  Ssum(9) := adders(9).io.Sum
  Csum(9) := adders(9).io.Cout


  adders(10).io.A := Ssum(6)
  adders(10).io.B := Ssum(7)
  adders(10).io.Cin := Ssum(8)
  Ssum(10) := adders(10).io.Sum
  Csum(10) := adders(10).io.Cout

  adders(11).io.A := Ssum(9)
  adders(11).io.B := Csum(6)
  adders(11).io.Cin := Csum(7)
  Ssum(11) := adders(11).io.Sum
  Csum(11) := adders(11).io.Cout


  adders(12).io.A := Csum(8)
  adders(12).io.B := Csum(9)
  adders(12).io.Cin := 0.U
  Ssum(12) := adders(12).io.Sum
  Csum(12) := adders(12).io.Cout

  adders(13).io.A := Csum(10)
  adders(13).io.B := Csum(11)
  adders(13).io.Cin := Csum(12)
  Ssum(13) := adders(13).io.Sum
  Csum(13) := adders(13).io.Cout


  adders(14).io.A := Ssum(10)
  adders(14).io.B := Ssum(11)
  adders(14).io.Cin := Ssum(12)
  Ssum(14) := adders(14).io.Sum
  Csum(14) := adders(14).io.Cout

  adders(15).io.A := Ssum(13)
  adders(15).io.B := Ssum(14)
  adders(15).io.Cin := Csum(13)
  Ssum(15) := adders(15).io.Sum
  Csum(15) := adders(15).io.Cout


  adders(16).io.A := Ssum(15)
  adders(16).io.B := Csum(14)
  adders(16).io.Cin := Csum(15)
  Ssum(16) := adders(16).io.Sum
  Csum(16) := adders(16).io.Cout


  io.result := (Ssum(16).asSInt + Csum(16)(63,0).asSInt).asUInt

}

class CarrySaveAdder(val n:Int) extends Module {
  val io = IO(new Bundle {
    val A    = Input(UInt(n.W))
    val B    = Input(UInt(n.W))
    val Cin  = Input(UInt(n.W))
    val Sum  = Output(UInt(n.W))
    val Cout = Output(UInt(n.W))
  })

  val FAs   = Array.fill(n)(Module(new FullAdder()))
  val carry = Wire(Vec(n, UInt(1.W)))
  val sum   = Wire(Vec(n, UInt(1.W)))

  carry(0) := 0.U
  for (i <- 0 until n) {
    FAs(i).io.a := io.A(i)
    FAs(i).io.b := io.B(i)
    FAs(i).io.cin := io.Cin(i)
    carry(i) := FAs(i).io.cout
    sum(i) := FAs(i).io.sum
  }
  io.Sum := sum.asUInt
  io.Cout := (carry.asUInt << 1)(n - 1, 0)
}


class FullAdder extends Module {
  val io = IO(new Bundle {
    val a    = Input(UInt(1.W))
    val b    = Input(UInt(1.W))
    val cin  = Input(UInt(1.W))
    val sum  = Output(UInt(1.W))
    val cout = Output(UInt(1.W))
  })

  val a_xor_b = io.a ^ io.b
  io.sum := a_xor_b ^ io.cin
  val a_and_b = io.a & io.b
  val b_and_cin = io.b & io.cin
  val a_and_cin = io.a & io.cin
  io.cout := a_and_b | b_and_cin | a_and_cin
}

