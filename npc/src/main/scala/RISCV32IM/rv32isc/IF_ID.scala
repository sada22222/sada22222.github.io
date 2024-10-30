package rv32isc


import chisel3._
import chisel3.util._
import utils._
import config.Configs._



class IF_ID extends  Module{
  val io = IO(new Bundle {
      val stall_i = Input(UInt(4.W))
      val flush_i = Input(Bool())

      val if_i=Flipped(new ifu)
      val id_o=new ifu
  })

    val en=(~io.stall_i(0)).asBool|io.flush_i

    val i_inst_addr=Wire(UInt(32.W))
    i_inst_addr:=Mux(io.flush_i,0.U(32.W),io.if_i.pc)
    io.id_o.pc:=RegNext(i_inst_addr,en)

    val inst=Wire(UInt(32.W))
    inst:=Mux(io.flush_i,0.U(32.W),io.if_i.inst)
    io.id_o.inst:=RegNext(inst,en)

    val i_inst_valid=Mux(io.flush_i | (~io.if_i.inst_valid),false.B,io.id_o.inst_valid)
    io.id_o.inst_valid:=RegNext(i_inst_valid,en)

}

