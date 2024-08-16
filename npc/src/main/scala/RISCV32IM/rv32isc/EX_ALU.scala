package rv32isc

import chisel3._
import chisel3.util._
import utils._
import config.Configs._



class EX_ALU extends Module{
    val io=IO(new Bundle{
        val ex_dispatch_ALUIO= Flipped(new EX_dispatch_ALUIO())
        val csr_op2_o=Input(UInt(32.W))
        val csr_res_o = Output(UInt(32.W))
        val alu_res_o = Output(UInt(32.W))
        val bjp_res_o = Output(UInt(32.W))
        val bjp_cmp_res_o = Output(Bool())
    })

    val mux_op1=Wire(UInt(32.W))
    val mux_op2=Wire(UInt(32.W))
    mux_op1 := MuxCase(0.U, Array(
        (io.ex_dispatch_ALUIO.req_alu_o) -> io.ex_dispatch_ALUIO.alu_op1_o,
        (io.ex_dispatch_ALUIO.req_bjp_o) -> io.ex_dispatch_ALUIO.bjp_op1_o,
        (io.ex_dispatch_ALUIO.req_csr_o) -> io.ex_dispatch_ALUIO.csr_op1_o
    ))

    mux_op2 := MuxCase(0.U, Array(
        (io.ex_dispatch_ALUIO.req_alu_o) -> io.ex_dispatch_ALUIO.alu_op2_o,
        (io.ex_dispatch_ALUIO.req_bjp_o) -> io.ex_dispatch_ALUIO.bjp_op2_o,
        (io.ex_dispatch_ALUIO.req_csr_o) -> io.csr_op2_o
    ))
    val xor_res=Wire(UInt(32.W))
    val or_res=Wire(UInt(32.W))
    val and_res=Wire(UInt(32.W))
    val add_sub_res=Wire(UInt(32.W))
    val sll_res=Wire(UInt(32.W))
    val srl_res=Wire(UInt(32.W))
    val sr_shift_mask=Wire(UInt(32.W))
    val sra_res=Wire(UInt(32.W))

    xor_res := mux_op1 ^ mux_op2
    or_res  := mux_op1 | mux_op2
    and_res := mux_op1 & mux_op2
    add_sub_res:=mux_op1 + Mux(io.ex_dispatch_ALUIO.alu_op_sub_o,(-mux_op2),mux_op2)
    sll_res:=mux_op1<<mux_op2(4,0)
    srl_res:=mux_op1>>mux_op2(4,0)
    sr_shift_mask := "hffffffff".U>> mux_op2(4,0) // 对十六进制数进行逻辑右移，移位数为mux_op2的低5位，赋值给sr_shift_mask
    sra_res := ((srl_res.asUInt & sr_shift_mask) | (Fill(32,mux_op1(31)) & (~sr_shift_mask).asUInt))

    val op1_ge_op2_signed = (mux_op1.asSInt>=mux_op2.asSInt)
    val op1_ge_op2_unsigned= mux_op1>=mux_op2

    val op1_uneq_op2= xor_res.orR
    val op1_eq_op2= (~op1_uneq_op2).asBool

    val jump_beq= io.ex_dispatch_ALUIO.bjp_op_beq_o&op1_eq_op2
    val jump_bne= io.ex_dispatch_ALUIO.bjp_op_bne_o&op1_uneq_op2
    val jump_lt= io.ex_dispatch_ALUIO.bjp_op_blt_o & (!op1_ge_op2_signed)
    val jump_ltu= io.ex_dispatch_ALUIO.bjp_op_bltu_o & (!op1_ge_op2_unsigned)
    val jump_bge= io.ex_dispatch_ALUIO.bjp_op_bge_o &op1_ge_op2_signed
    val jump_bgeu= io.ex_dispatch_ALUIO.bjp_op_bgeu_o &op1_ge_op2_unsigned

    val csr_or=io.ex_dispatch_ALUIO.csr_csrrw_o| io.ex_dispatch_ALUIO.csr_csrrs_o
    val csr_and=io.ex_dispatch_ALUIO.csr_csrrc_o

    val slt_res=Wire(UInt(32.W))
    slt_res := Mux(!op1_ge_op2_signed,1.U,0.U)
    val sltu_res=Wire(UInt(32.W))
    sltu_res := Mux(!op1_ge_op2_unsigned,1.U,0.U)

val alu_datapath_res = WireInit(0.U)
    io.csr_res_o := 0.U

  alu_datapath_res := MuxLookup(true.B, 0.U, Seq(
  io.ex_dispatch_ALUIO.alu_op_xor_o -> xor_res,
  io.ex_dispatch_ALUIO.alu_op_or_o -> or_res,
  io.ex_dispatch_ALUIO.alu_op_and_o -> and_res,
  io.ex_dispatch_ALUIO.alu_op_add_o -> add_sub_res,
  io.ex_dispatch_ALUIO.alu_op_sub_o -> add_sub_res,
  io.ex_dispatch_ALUIO.alu_op_sll_o -> sll_res,
  io.ex_dispatch_ALUIO.alu_op_srl_o -> srl_res,
  io.ex_dispatch_ALUIO.alu_op_sra_o -> sra_res,
  io.ex_dispatch_ALUIO.alu_op_slt_o -> slt_res,
  io.ex_dispatch_ALUIO.alu_op_sltu_o -> sltu_res
))

io.csr_res_o := MuxLookup(true.B, 0.U, Seq(
  csr_or -> or_res,
  csr_and -> and_res
))




    io.alu_res_o:=alu_datapath_res
    io.bjp_res_o := Mux(io.ex_dispatch_ALUIO.req_bjp_o,io.ex_dispatch_ALUIO.bjp_jump_op1_o+io.ex_dispatch_ALUIO.bjp_jump_op2_o,0.U)
    io.bjp_cmp_res_o := jump_beq || jump_bge || jump_bgeu || jump_bne || jump_lt || jump_ltu

}
