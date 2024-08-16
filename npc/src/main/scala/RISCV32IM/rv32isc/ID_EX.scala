package rv32isc


import chisel3._
import chisel3.util._
import utils._
import config.Configs._



class ID_EX extends Module{
    val io=IO(new Bundle {
        // 流水线暂停
        val stall_i = Input(UInt(4.W))
        // 流水线冲刷
        val flush_i = Input(Bool())

        val id_i=Flipped(new idu)
        val ex_o=(new idu)
    })

    val en=(~io.stall_i(1)).asBool|io.flush_i

    val i_dec_info_bus=Wire(UInt(DECINFO_WIDTH.W))
    i_dec_info_bus:=Mux(io.flush_i,0.U,io.id_i.dec_info_bus)
    io.ex_o.dec_info_bus:=RegNext(i_dec_info_bus,en)

  val i_dec_imm=Wire(UInt(32.W))
  i_dec_imm:=Mux(io.flush_i,0.U,io.id_i.dec_imm)
  io.ex_o.dec_imm:=RegNext(i_dec_imm,en)

  val i_dec_pc=Wire(UInt(32.W))
  i_dec_pc:=Mux(io.flush_i,0.U,io.id_i.pc)
  io.ex_o.pc:=RegNext(i_dec_pc,en)

  val i_rs1_rdata=Wire(UInt(32.W))
  i_rs1_rdata:=Mux(io.flush_i,0.U,io.id_i.rs1_rdata)
  io.ex_o.rs1_rdata:=RegNext(i_rs1_rdata,en)

  val i_rs2_rdata=Wire(UInt(32.W))
  i_rs2_rdata:=Mux(io.flush_i,0.U,io.id_i.rs2_rdata)
  io.ex_o.rs2_rdata:=RegNext(i_rs2_rdata,en)

  val i_rd_waddr=Wire(UInt(5.W))
  i_rd_waddr:=Mux(io.flush_i,0.U,io.id_i.rd_waddr)
  io.ex_o.rd_waddr:=RegNext(i_rd_waddr,en)

  val i_rd_we=Wire(Bool())
  i_rd_we:=Mux(io.flush_i,0.U,io.id_i.rd_we)
  io.ex_o.rd_we:=RegNext(i_rd_we,en)

  val i_inst=Wire(UInt(32.W))
  i_inst:=Mux(io.flush_i,0.U,io.id_i.inst)
  io.ex_o.inst:=RegNext(i_inst,en)

  val i_inst_valid=Wire(Bool())
  i_inst_valid:=Mux(io.flush_i,0.U,io.id_i.inst_valid)
  io.ex_o.inst_valid:=RegNext(i_inst_valid,en)



}
