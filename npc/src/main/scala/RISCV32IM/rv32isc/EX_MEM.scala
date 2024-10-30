package rv32isc



import chisel3._
import chisel3.util._
import  utils._
import config.Configs._


class EX_MEM extends Module{
    val io =IO(new Bundle{
        val stall_i=Input(UInt(4.W))
        val flush_i=Input(Bool())
        val csr_rdata_i=Input(UInt(32.W))
        val ex_i= Flipped(new exu)
        val mem_o=(new exu)
    })

    val en=(~io.stall_i(3)).asBool|io.flush_i

    val i_rd_waddr=Wire(UInt(5.W))
    i_rd_waddr:=Mux(io.flush_i,0.U,io.ex_i.rd_waddr)
    io.mem_o.rd_waddr:=RegNext(i_rd_waddr,en)

    val i_rd_we=Wire(Bool())
    i_rd_we:=Mux(io.flush_i,0.U,io.ex_i.rd_we)
    io.mem_o.rd_we:=RegNext(i_rd_we,en)

    val i_inst=Wire(UInt(32.W))
    i_inst:=Mux(io.flush_i,0.U,io.ex_i.inst)
    io.mem_o.inst:=RegNext(i_inst,en)

    val inst_valid=Wire(Bool())
    inst_valid:=Mux(io.flush_i,0.U,io.ex_i.inst_valid)
    io.mem_o.inst_valid:=RegNext(inst_valid,en)

    val pc=Wire(Bool())
    pc:=Mux(io.flush_i,0.U,io.ex_i.pc)
    io.mem_o.pc:=RegNext(pc,en)

    val bjp_op_jump=Wire(Bool())
    bjp_op_jump:=Mux(io.flush_i,0.U,io.ex_i.bjp_op_jump)
    io.mem_o.bjp_op_jump:=RegNext(bjp_op_jump,en)

    val bjp_res=Wire(UInt(32.W))
    bjp_res:=Mux(io.flush_i,0.U,io.ex_i.bjp_res)
    io.mem_o.bjp_res:=RegNext(bjp_res,en)

    val csr_reg_we=Wire(Bool())
    csr_reg_we:=Mux(io.flush_i,0.U,io.ex_i.csr_reg_we)
    io.mem_o.csr_reg_we:=RegNext(csr_reg_we,en)

    val csr_rdata_o=Wire(UInt(32.W))
    csr_rdata_o:=Mux(io.flush_i,0.U,io.ex_i.csr_rdata_o)
    io.mem_o.csr_rdata_o:=RegNext(csr_rdata_o,en)

    val muldiv_reg_we_o=Wire(Bool())
    muldiv_reg_we_o:=Mux(io.flush_i,0.U,io.ex_i.muldiv_reg_we_o)
    io.mem_o.muldiv_reg_we_o:=RegNext(muldiv_reg_we_o,en)

    val muldiv_reg_wdata_o=Wire(UInt(32.W))
    muldiv_reg_wdata_o:=Mux(io.flush_i,0.U,io.ex_i.muldiv_reg_wdata_o)
    io.mem_o.muldiv_reg_wdata_o:=RegNext(muldiv_reg_wdata_o,en)

    val req_alu=Wire(Bool())
    req_alu:=Mux(io.flush_i,0.U,io.ex_i.req_alu)
    io.mem_o.req_alu:=RegNext(req_alu,en)

    val alu_res=Wire(UInt(32.W))
    alu_res:=Mux(io.flush_i,0.U,io.ex_i.alu_res)
    io.mem_o.alu_res:=RegNext(alu_res,en)

    val req_mem_o=Wire(Bool())
    req_mem_o:=Mux(io.flush_i,0.U,io.ex_i.req_mem_o)
    io.mem_o.req_mem_o:=RegNext(req_mem_o,en)

    val mem_op1_o=Wire(UInt(32.W))
    mem_op1_o:=Mux(io.flush_i,0.U,io.ex_i.mem_op1_o)
    io.mem_o.mem_op1_o:=RegNext(mem_op1_o,en)

    val mem_op2_o=Wire(UInt(32.W))
    mem_op2_o:=Mux(io.flush_i,0.U,io.ex_i.mem_op2_o)
    io.mem_o.mem_op2_o:=RegNext(mem_op2_o,en)

    val mem_rs2_data_o=Wire(UInt(32.W))
    mem_rs2_data_o:=Mux(io.flush_i,0.U,io.ex_i.mem_rs2_data_o)
    io.mem_o.mem_rs2_data_o:=RegNext(mem_rs2_data_o,en)

    
    val mem_op_lb_o=Wire(Bool())
    mem_op_lb_o:=Mux(io.flush_i,0.U,io.ex_i.mem_op_lb_o)
    io.mem_o.mem_op_lb_o:=RegNext(mem_op_lb_o,en)

    val mem_op_lh_o=Wire(Bool())
    mem_op_lh_o:=Mux(io.flush_i,0.U,io.ex_i.mem_op_lh_o)
    io.mem_o.mem_op_lh_o:=RegNext(mem_op_lh_o,en)

    val mem_op_lw_o=Wire(Bool())
    mem_op_lw_o:=Mux(io.flush_i,0.U,io.ex_i.mem_op_lw_o)
    io.mem_o.mem_op_lw_o:=RegNext(mem_op_lw_o,en)

    val mem_op_lbu_o=Wire(Bool())
    mem_op_lbu_o:=Mux(io.flush_i,0.U,io.ex_i.mem_op_lbu_o)
    io.mem_o.mem_op_lbu_o:=RegNext(mem_op_lbu_o,en)

    val mem_op_lhu_o=Wire(Bool())
    mem_op_lhu_o:=Mux(io.flush_i,0.U,io.ex_i.mem_op_lhu_o)
    io.mem_o.mem_op_lhu_o:=RegNext(mem_op_lhu_o,en)

    val mem_op_sb_o=Wire(Bool())
    mem_op_sb_o:=Mux(io.flush_i,0.U,io.ex_i.mem_op_sb_o)
    io.mem_o.mem_op_sb_o:=RegNext(mem_op_sb_o,en)

    val mem_op_sh_o=Wire(Bool())
    mem_op_sh_o:=Mux(io.flush_i,0.U,io.ex_i.mem_op_sh_o)
    io.mem_o.mem_op_sh_o:=RegNext(mem_op_sh_o,en)

    val mem_op_sw_o=Wire(Bool())
    mem_op_sw_o:=Mux(io.flush_i,0.U,io.ex_i.mem_op_sw_o)
    io.mem_o.mem_op_sw_o:=RegNext(mem_op_sw_o,en)
}
