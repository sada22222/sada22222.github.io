package utils

import chisel3._

import config.Configs._
import utils.OP_TYPES._
import utils.LS_TYPES._


class ifu extends Bundle{
    val pc = Output (UInt(32.W))
    val inst_valid = Output (Bool())
    val inst=Output(UInt(32.W))
}

class idu extends Bundle{
    val inst_valid = Output(Bool())                      // 指令有效
    val inst = Output(UInt(32.W))                        // 指令内容    
    val pc = Output(UInt(32.W))                      
    val rd_waddr = Output(UInt(5.W))                     // 写寄存器地址
    val rd_we = Output(Bool()) // 写使能

    val rs1_rdata=Output(UInt(32.W))
    val rs2_rdata=Output(UInt(32.W))
    val dec_imm = Output(UInt(32.W))      
    val dec_info_bus = Output(UInt(DECINFO_WIDTH.W))     

}

class exu extends Bundle{
    // to MEM
    val inst_valid = Output(Bool())
    val inst = Output(UInt(32.W))
    val pc = Output(UInt(32.W))     
    val rd_waddr = Output(UInt(5.W))
    val rd_we = Output(Bool())

    val req_alu=Output(Bool())
    val alu_res = Output(UInt(32.W))
    val bjp_op_jump=Output(Bool())
    val bjp_res= Output(UInt(32.W))
    val muldiv_reg_wdata_o= Output(UInt(32.W))
    val muldiv_reg_we_o= Output(Bool())
    val csr_reg_we=Output(Bool())
    val csr_rdata_o=Output(UInt(32.W))

    // output wires for MEM
    val req_mem_o = Output(Bool())
    val mem_op1_o = Output(UInt(32.W))
    val mem_op2_o = Output(UInt(32.W))
    val mem_rs2_data_o = Output(UInt(32.W))
    val mem_op_lb_o = Output(Bool())
    val mem_op_lh_o = Output(Bool())
    val mem_op_lw_o = Output(Bool())
    val mem_op_lbu_o = Output(Bool())
    val mem_op_lhu_o = Output(Bool())
    val mem_op_sb_o = Output(Bool())
    val mem_op_sh_o = Output(Bool())
    val mem_op_sw_o = Output(Bool())
}

class EX_dispatch_ALUIO extends Bundle{

    // output wires for ALU
    val req_alu_o = Output(Bool())
    val alu_op1_o = Output(UInt(32.W))
    val alu_op2_o = Output(UInt(32.W))
    val alu_op_lui_o = Output(Bool())
    val alu_op_auipc_o = Output(Bool())
    val alu_op_add_o = Output(Bool())
    val alu_op_sub_o = Output(Bool())
    val alu_op_sll_o = Output(Bool())
    val alu_op_slt_o = Output(Bool())
    val alu_op_sltu_o = Output(Bool())
    val alu_op_xor_o = Output(Bool())
    val alu_op_srl_o = Output(Bool())
    val alu_op_sra_o = Output(Bool())
    val alu_op_or_o = Output(Bool())
    val alu_op_and_o = Output(Bool())

    // output wires for BJP
    val req_bjp_o = Output(Bool())
    val bjp_op1_o = Output(UInt(32.W))
    val bjp_op2_o = Output(UInt(32.W))
    val bjp_jump_op1_o = Output(UInt(32.W))
    val bjp_jump_op2_o = Output(UInt(32.W))
    val bjp_op_jump_o = Output(Bool())
    val bjp_op_beq_o = Output(Bool())
    val bjp_op_bne_o = Output(Bool())
    val bjp_op_blt_o = Output(Bool())
    val bjp_op_bltu_o = Output(Bool())
    val bjp_op_bge_o = Output(Bool())
    val bjp_op_bgeu_o = Output(Bool())
    val bjp_op_jalr_o = Output(Bool())

    // output wires for MULDIV
    val req_muldiv_o = Output(Bool())
    val muldiv_op1_o = Output(UInt(32.W))
    val muldiv_op2_o = Output(UInt(32.W))
    val muldiv_op_mul_o = Output(Bool())
    val muldiv_op_mulh_o = Output(Bool())
    val muldiv_op_mulhsu_o = Output(Bool())
    val muldiv_op_mulhu_o = Output(Bool())
    val muldiv_op_div_o = Output(Bool())
    val muldiv_op_divu_o = Output(Bool())
    val muldiv_op_rem_o = Output(Bool())
    val muldiv_op_remu_o = Output(Bool())

    // output wires for CSR
    val req_csr_o = Output(Bool())
    val csr_op1_o = Output(UInt(32.W))
    val csr_csrrw_o = Output(Bool())
    val csr_csrrs_o = Output(Bool())
    val csr_csrrc_o = Output(Bool())

    // output wires for SYS
    val sys_op_nop_o = Output(Bool())
    val sys_op_mret_o = Output(Bool())
    val sys_op_ecall_o = Output(Bool())
    val sys_op_ebreak_o = Output(Bool())
    val sys_op_fence_o = Output(Bool())
    val sys_op_dret_o = Output(Bool())


}

class memu extends Bundle{
    
    val inst_valid = Output(Bool())
    val inst = Output(UInt(32.W))
    val pc = Output(UInt(32.W))     
    val rd_waddr = Output(UInt(5.W))
    val rd_we = Output(Bool())

    val req_alu= Output(Bool())
    val alu_res = Output(UInt(32.W))
    val bjp_op_jump=Output(Bool())
    val bjp_res= Output(UInt(32.W))
    val muldiv_reg_we=Output(Bool())
    val muldiv_reg_wdata= Output(UInt(32.W))
    val mem_reg_we = Output(Bool())
    val mem_wdata = Output(UInt(32.W))
    val csr_reg_we=Output(Bool())
    val csr_reg_wdata= Output(UInt(32.W))
}
