package core

import chisel3._
import chisel3.util._
import configs.Instructions.NOP
import configs.AluOp._
import configs._
import configs.LsuOp.LSU_NOP

class EX extends Module{
  val io=IO(new Bundle() {
    val id_i = Input(new ID_IO)
    val stallReq=Output(Bool())
    val ex_o = Output(new EX_IO)
  })

  val opr1 = io.id_i.opr1
  val opr2 = io.id_i.opr2

  val Aluresult = MuxLookup(io.id_i.aluOp,0.U,Seq(
    ALU_ADD ->  (opr1+opr2),
    ALU_SUB ->  (opr1-opr2),
    ALU_AND ->  (opr1&opr2),
    ALU_OR  ->  (opr1|opr2),
    ALU_XOR ->  (opr1^opr2),
    ALU_SLL ->  (opr1<<opr2(4,0)),
    ALU_SRA ->  (opr1.asSInt>>opr2(4,0)).asUInt,
    ALU_SRL ->  (opr1>>opr2(4,0)),
    ALU_SLT ->  (opr1.asSInt<opr2.asSInt).asUInt,
    ALU_SLTU->  (opr1>opr2)
  ))

  val result = Mux(io.id_i.csren,io.id_i.csrrData,Aluresult)
  val load    = io.id_i.lsuOp =/= LSU_NOP && io.id_i.regWen
  val retired = io.id_i.inst =/= NOP


  io.stallReq          := false.B 
  io.ex_o.lsuOp        := io.id_i.lsuOp
  io.ex_o.lsuData      := io.id_i.lsuData
  io.ex_o.reg.en       := io.id_i.regWen
  io.ex_o.reg.addr     := io.id_i.regWaddr
  io.ex_o.reg.data     := result
  io.ex_o.load         := load

  io.ex_o.csr.op       := io.id_i.csrOp
  io.ex_o.csr.addr     := io.id_i.csrAddr
  io.ex_o.csr.data     := io.id_i.csrwData
  io.ex_o.csr.retired  := retired
  io.ex_o.excType     := io.id_i.excType
  io.ex_o.excValue     := io.id_i.excValue
  io.ex_o.valid        := io.id_i.valid
  io.ex_o.inst         := io.id_i.inst
  io.ex_o.currentPc    := io.id_i.currentPc


}
