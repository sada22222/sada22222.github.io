package rv32isc

import chisel3._
import chisel3.util._
import utils._
import config.Configs._


class MEM_WB extends Module{
    val io=IO(new Bundle{
        val stall_i=Input(UInt(4.W))
        val flush_i=Input(Bool())

        val mem_i=Flipped(new memu)
        val wb_o=(new memu)
    })

  val en=(~io.stall_i(3)).asBool|io.flush_i

    val i_rd_waddr=Wire(UInt(5.W))
    i_rd_waddr:=Mux(io.flush_i,0.U,io.mem_i.rd_waddr)
    io.wb_o.rd_waddr:=RegNext(i_rd_waddr,en)

    val i_rd_we=Wire(Bool())
    i_rd_we:=Mux(io.flush_i,0.U,io.mem_i.rd_we)
    io.wb_o.rd_we:=RegNext(i_rd_we,en)

    val i_inst=Wire(UInt(32.W))
    i_inst:=Mux(io.flush_i,0.U,io.mem_i.inst)
    io.wb_o.inst:=RegNext(i_inst,en)

    val inst_valid=Wire(Bool())
    inst_valid:=Mux(io.flush_i,0.U,io.mem_i.inst_valid)
    io.wb_o.inst_valid:=RegNext(inst_valid,en)

    val pc=Wire(Bool())
    pc:=Mux(io.flush_i,0.U,io.mem_i.pc)
    io.wb_o.pc:=RegNext(pc,en)

  val req_alu_i=Wire(Bool())
  req_alu_i:=Mux(io.flush_i,0.U,io.mem_i.req_alu)
  io.wb_o.req_alu:=RegNext(req_alu_i,en)

  val alu_res=Wire(UInt(32.W))
  alu_res:=Mux(io.flush_i,0.U,io.mem_i.alu_res)
  io.wb_o.alu_res:=RegNext(alu_res,en)

  val bjp_op_jump=Wire(Bool())
  bjp_op_jump:=Mux(io.flush_i,0.U,io.mem_i.bjp_op_jump)
  io.wb_o.bjp_op_jump:=RegNext(bjp_op_jump,en)

  val bjp_res=Wire(UInt(32.W))
  bjp_res:=Mux(io.flush_i,0.U,io.mem_i.bjp_res)
  io.wb_o.bjp_res:=RegNext(bjp_res,en)

  val muldiv_reg_we=Wire(Bool())
  muldiv_reg_we:=Mux(io.flush_i,0.U,io.mem_i.muldiv_reg_we)
  io.wb_o.muldiv_reg_we:=RegNext(muldiv_reg_we,en)

  val muldiv_reg_wdata=Wire(UInt(32.W))
  muldiv_reg_wdata:=Mux(io.flush_i,0.U,io.mem_i.muldiv_reg_wdata)
  io.wb_o.muldiv_reg_wdata:=RegNext(muldiv_reg_wdata,en)

  val mem_reg_we=Wire(Bool())
  mem_reg_we:=Mux(io.flush_i,0.U,io.mem_i.mem_reg_we)
  io.wb_o.mem_reg_we:=RegNext(mem_reg_we,en)

  val mem_wdata=Wire(UInt(32.W))
  mem_wdata:=Mux(io.flush_i,0.U,io.mem_i.mem_wdata)
  io.wb_o.mem_wdata:=RegNext(mem_wdata,en)

  val csr_reg_we=Wire(Bool())
  csr_reg_we:=Mux(io.flush_i,0.U,io.mem_i.csr_reg_we)
  io.wb_o.csr_reg_we:=RegNext(csr_reg_we,en)

  val csr_reg_wdata=Wire(UInt(32.W))
  csr_reg_wdata:=Mux(io.flush_i,0.U,io.mem_i.csr_reg_wdata)
  io.wb_o.csr_reg_wdata:=RegNext(csr_reg_wdata,en)



}
