package rv32isc


import chisel3._
import chisel3.util._
import config.Configs._
import utils._

class EX extends  Module{
    val io=IO(new Bundle {

        val id_i=Flipped(new idu)
        //from mem or wb
        val mem_alu_res= Input(UInt(32.W))
        val mem_pc= Input(UInt(32.W))
        val wb_alu_res= Input(UInt(32.W))
        val wb_pc= Input(UInt(32.W))
        //from id
        val last_rs1_rd=Input(Bool())
        val last_rs2_rd=Input(Bool())
        val last_two_rs1_rd=Input(Bool())
        val last_two_rs2_rd=Input(Bool())
        val load1=Input(Bool())
        val load2=Input(Bool())

        val csr_rdata_i=Input(UInt(32.W))           // CSR寄存器数据
        val csr_raddr_o=Output(UInt(32.W))
        val csr_wdata_o= Output(UInt(32.W))
        val csr_we_o= Output(Bool())
        val csr_waddr_o= Output(UInt(32.W))

        val int_stall_i=Input(Bool())
        val inst_ecall_o=Output(Bool())
        val inst_ebreak_o=Output(Bool())
        val inst_mret_o=Output(Bool())
        val inst_dret_o=Output(Bool())

        // to pipe_ctrl
        val hold_flag_o=Output(Bool())                // 是否暂停标志
        val jump_flag_o=Output(Bool())                   // 是否跳转标志
        val jump_addr_o=Output(UInt(32.W))            // 跳转目的地址

        val ex_o=(new exu)

    })

    io.ex_o.inst:=io.id_i.inst
    io.ex_o.inst_valid:=io.id_i.inst_valid    
    io.ex_o.pc:=io.id_i.pc
    io.ex_o.rd_waddr:=io.id_i.rd_waddr
    io.ex_o.rd_we:=io.id_i.rd_we    

    val EX_ALU=Module(new EX_ALU)
    val EX_dispatch=Module(new EX_dispatch)
    val exu_muldiv=Module(new exu_muldiv)


    EX_dispatch.io.dec_info_bus_i:=io.id_i.dec_info_bus
    EX_dispatch.io.dec_imm_i:=io.id_i.dec_imm
    EX_dispatch.io.dec_pc_i:=io.id_i.pc

    EX_dispatch.io.ex_dispatch_ALUIO<>EX_ALU.io.ex_dispatch_ALUIO

    exu_muldiv.io.int_stall_i:=io.int_stall_i
    exu_muldiv.io.muldiv_op1_i:=EX_dispatch.io.ex_dispatch_ALUIO.muldiv_op1_o
    exu_muldiv.io.muldiv_op2_i:=EX_dispatch.io.ex_dispatch_ALUIO.muldiv_op2_o
    exu_muldiv.io.muldiv_op_mul_i:=EX_dispatch.io.ex_dispatch_ALUIO.muldiv_op_mul_o
    exu_muldiv.io.muldiv_op_mulh_i:=EX_dispatch.io.ex_dispatch_ALUIO.muldiv_op_mulh_o
    exu_muldiv.io.muldiv_op_mulhsu_i:=EX_dispatch.io.ex_dispatch_ALUIO.muldiv_op_mulhsu_o
    exu_muldiv.io.muldiv_op_mulhu_i:=EX_dispatch.io.ex_dispatch_ALUIO.muldiv_op_mulhu_o
    exu_muldiv.io.muldiv_op_div_i:=EX_dispatch.io.ex_dispatch_ALUIO.muldiv_op_div_o
    exu_muldiv.io.muldiv_op_divu_i:=EX_dispatch.io.ex_dispatch_ALUIO.muldiv_op_divu_o
    exu_muldiv.io.muldiv_op_rem_i:=EX_dispatch.io.ex_dispatch_ALUIO.muldiv_op_rem_o
    exu_muldiv.io.muldiv_op_remu_i:=EX_dispatch.io.ex_dispatch_ALUIO.muldiv_op_remu_o

    io.ex_o.csr_reg_we:=EX_dispatch.io.ex_dispatch_ALUIO.req_csr_o
    io.ex_o.csr_rdata_o:=io.csr_rdata_i
    io.ex_o.muldiv_reg_wdata_o:=exu_muldiv.io.muldiv_reg_wdata_o
    io.ex_o.muldiv_reg_we_o:=exu_muldiv.io.muldiv_reg_we_o
    io.ex_o.bjp_op_jump:=EX_dispatch.io.ex_dispatch_ALUIO.bjp_op_jump_o
    io.ex_o.bjp_res:=io.id_i.pc
    io.ex_o.req_alu:=EX_dispatch.io.ex_dispatch_ALUIO.req_alu_o
    io.ex_o.inst_valid:=io.id_i.inst_valid
    io.ex_o.inst:=io.id_i.inst
    io.ex_o.rd_waddr:=io.id_i.rd_waddr

    io.ex_o.req_mem_o:=EX_dispatch.io.req_mem_o
    io.ex_o.mem_rs2_data_o:=EX_dispatch.io.mem_rs2_data_o
    io.ex_o.mem_op_lb_o:=EX_dispatch.io.mem_op_lb_o
    io.ex_o.mem_op_lh_o:=EX_dispatch.io.mem_op_lh_o
    io.ex_o.mem_op_lw_o:=EX_dispatch.io.mem_op_lw_o
    io.ex_o.mem_op_lbu_o:=EX_dispatch.io.mem_op_lbu_o
    io.ex_o.mem_op_lhu_o:=EX_dispatch.io.mem_op_lhu_o
    io.ex_o.mem_op_sb_o:=EX_dispatch.io.mem_op_sb_o
    io.ex_o.mem_op_sh_o:=EX_dispatch.io.mem_op_sh_o
    io.ex_o.mem_op_sw_o:=EX_dispatch.io.mem_op_sw_o
    io.ex_o.mem_op1_o:=EX_dispatch.io.mem_op1_o
    io.ex_o.mem_op2_o:=EX_dispatch.io.mem_op2_o



    val csr_op1=Wire(UInt(32.W))
    val csr_op2=Wire(UInt(32.W))
    csr_op1 := Mux(EX_dispatch.io.ex_dispatch_ALUIO.csr_csrrc_o,(~EX_dispatch.io.ex_dispatch_ALUIO.csr_op1_o),EX_dispatch.io.ex_dispatch_ALUIO.csr_op1_o)
    csr_op2 := Mux(EX_dispatch.io.ex_dispatch_ALUIO.csr_csrrw_o, 0.U(32.W), io.csr_rdata_i)

    EX_ALU.io.ex_dispatch_ALUIO.req_csr_o:=EX_dispatch.io.ex_dispatch_ALUIO.req_csr_o
    EX_ALU.io.ex_dispatch_ALUIO.csr_csrrw_o:=EX_dispatch.io.ex_dispatch_ALUIO.csr_csrrw_o
    EX_ALU.io.ex_dispatch_ALUIO.csr_csrrs_o:=EX_dispatch.io.ex_dispatch_ALUIO.csr_csrrs_o
    EX_ALU.io.csr_op2_o:=csr_op2
    EX_ALU.io.ex_dispatch_ALUIO.csr_op1_o:=csr_op1

    io.csr_raddr_o:=EX_dispatch.io.csr_addr_o
    io.csr_waddr_o:=EX_dispatch.io.csr_addr_o
    io.csr_we_o:=EX_dispatch.io.ex_dispatch_ALUIO.req_csr_o&(!io.int_stall_i)
    io.csr_wdata_o:=EX_ALU.io.csr_res_o


    io.inst_ecall_o:=EX_dispatch.io.ex_dispatch_ALUIO.sys_op_ecall_o
    io.inst_ebreak_o:=EX_dispatch.io.ex_dispatch_ALUIO.sys_op_ebreak_o
    io.inst_mret_o:=EX_dispatch.io.ex_dispatch_ALUIO.sys_op_mret_o
    io.inst_dret_o:=EX_dispatch.io.ex_dispatch_ALUIO.sys_op_dret_o

    val raw_res_one=Wire(UInt(32.W))
    raw_res_one:=Mux(EX_dispatch.io.ex_dispatch_ALUIO.req_alu_o,io.mem_alu_res,Mux(EX_dispatch.io.ex_dispatch_ALUIO.req_bjp_o,io.mem_pc+4.U,0.U))
    val raw_res_two=Wire(UInt(32.W))
    raw_res_two:=Mux(EX_dispatch.io.ex_dispatch_ALUIO.req_alu_o,io.wb_alu_res,Mux(EX_dispatch.io.ex_dispatch_ALUIO.req_bjp_o,io.wb_pc+4.U,0.U))
    EX_dispatch.io.rs1_rdata_i:=Mux(io.last_rs1_rd,raw_res_one,Mux((io.last_two_rs1_rd||io.load1),raw_res_two,io.id_i.rs1_rdata))
    EX_dispatch.io.rs2_rdata_i:=Mux(io.last_rs2_rd,raw_res_one,Mux(io.last_two_rs2_rd||io.load2,raw_res_two,io.id_i.rs1_rdata))
    io.ex_o.alu_res:=EX_ALU.io.alu_res_o

    val prdt_taken=((!EX_dispatch.io.ex_dispatch_ALUIO.bjp_op_jalr_o)&EX_dispatch.io.ex_dispatch_ALUIO.req_bjp_o)|(EX_dispatch.io.ex_dispatch_ALUIO.req_bjp_o&(!EX_dispatch.io.ex_dispatch_ALUIO.bjp_op_jump_o)&io.id_i.dec_imm(31))
    val prdt_taken_error= prdt_taken&(!EX_ALU.io.bjp_cmp_res_o)&EX_dispatch.io.ex_dispatch_ALUIO.req_bjp_o&(!EX_dispatch.io.ex_dispatch_ALUIO.bjp_op_jump_o)
    val inst_jump=(!prdt_taken& EX_ALU.io.bjp_cmp_res_o)|(!prdt_taken& EX_ALU.io.ex_dispatch_ALUIO.bjp_op_jump_o)|EX_dispatch.io.ex_dispatch_ALUIO.sys_op_fence_o
    val next_pc=Wire(UInt(32.W))
    next_pc:=io.id_i.pc+4.U
    io.jump_flag_o:=(inst_jump|prdt_taken_error)&(!io.int_stall_i)
    io.jump_addr_o:= Mux(EX_dispatch.io.ex_dispatch_ALUIO.sys_op_fence_o,next_pc,
                     Mux(prdt_taken_error,next_pc,EX_ALU.io.bjp_res_o))
    io.hold_flag_o:=exu_muldiv.io.muldiv_stall_o

}




