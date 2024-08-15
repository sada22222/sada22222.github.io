package rv32isc

import chisel3._
import chisel3.util._
import utils._
import config.Configs._





class EX_dispatch extends  Module{
  val io=IO(new Bundle {
      val ex_dispatch_ALUIO= new EX_dispatch_ALUIO()

      // input wires
      val dec_info_bus_i = Input(UInt(DECINFO_WIDTH.W))
      val dec_imm_i = Input(UInt(32.W))
      val dec_pc_i = Input(UInt(32.W))
      val rs1_rdata_i = Input(UInt(32.W))
      val rs2_rdata_i = Input(UInt(32.W))

      val csr_addr_o = Output(UInt(32.W))

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

  })

    val disp_info_grp=io.dec_info_bus_i(2,0)
    val op_alu=(disp_info_grp===DECINFO_GRP_ALU)
    val alu_info=Wire(UInt(DECINFO_WIDTH.W))
    alu_info:={Fill(DECINFO_WIDTH,op_alu)}&io.dec_info_bus_i
    //opcode1
    val alu_op1_pc = alu_info(DECINFO_ALU_OP1PC)
    val alu_op1_zero= alu_info(DECINFO_ALU_LUI)
    val alu_op1 = Wire(UInt(32.W))
    alu_op1 := Mux(alu_op1_pc, io.dec_pc_i, Mux(alu_op1_zero, 0.U(32.W), io.rs1_rdata_i))
    io.ex_dispatch_ALUIO.alu_op1_o := Mux(op_alu,alu_op1,0.U(32.W))
    //opcode2
    val alu_op2_imm=alu_info(DECINFO_ALU_OP2IMM)
    val alu_op2 =Wire(UInt(32.W))
    alu_op2:=Mux(alu_op2_imm,io.dec_imm_i,io.rs2_rdata_i)
    io.ex_dispatch_ALUIO.alu_op2_o := Mux(op_alu, alu_op2, 0.U(32.W))
    io.ex_dispatch_ALUIO.alu_op_lui_o := alu_info(DECINFO_ALU_LUI)
    io.ex_dispatch_ALUIO.alu_op_auipc_o := alu_info(DECINFO_ALU_AUIPC)
    io.ex_dispatch_ALUIO.alu_op_add_o := alu_info(DECINFO_ALU_ADD)
    io.ex_dispatch_ALUIO.alu_op_sub_o := alu_info(DECINFO_ALU_SUB)
    io.ex_dispatch_ALUIO.alu_op_sll_o := alu_info(DECINFO_ALU_SLL)
    io.ex_dispatch_ALUIO.alu_op_slt_o := alu_info(DECINFO_ALU_SLT)
    io.ex_dispatch_ALUIO.alu_op_sltu_o := alu_info(DECINFO_ALU_SLTU)
    io.ex_dispatch_ALUIO.alu_op_xor_o := alu_info(DECINFO_ALU_XOR)
    io.ex_dispatch_ALUIO.alu_op_srl_o := alu_info(DECINFO_ALU_SRL)
    io.ex_dispatch_ALUIO.alu_op_sra_o := alu_info(DECINFO_ALU_SRA)
    io.ex_dispatch_ALUIO.alu_op_or_o := alu_info(DECINFO_ALU_OR)
    io.ex_dispatch_ALUIO.alu_op_and_o := alu_info(DECINFO_ALU_AND)
    io.ex_dispatch_ALUIO.req_alu_o := op_alu


  val op_bjp = Wire(Bool())
  op_bjp := (disp_info_grp === DECINFO_GRP_BJP)
  val bjp_info = Wire(UInt(DECINFO_WIDTH.W))
  bjp_info := Fill(DECINFO_WIDTH, op_bjp) & io.dec_info_bus_i
  val bjp_op1_rs1 = Wire(Bool())
  bjp_op1_rs1 := bjp_info(DECINFO_BJP_OP1RS1)
  val bjp_op1 = Wire(UInt(32.W))
  bjp_op1 := Mux(bjp_op1_rs1, io.rs1_rdata_i, io.dec_pc_i)
  io.ex_dispatch_ALUIO.bjp_jump_op1_o := Mux(op_bjp, bjp_op1, 0.U(32.W))
  val bjp_op2 = Wire(UInt(32.W))
  bjp_op2 := io.dec_imm_i
  io.ex_dispatch_ALUIO.bjp_jump_op2_o := Mux(op_bjp, bjp_op2, 0.U(32.W))
  io.ex_dispatch_ALUIO.bjp_op1_o := Mux(op_bjp, io.rs1_rdata_i, 0.U(32.W))
  io.ex_dispatch_ALUIO.bjp_op2_o := Mux(op_bjp, io.rs2_rdata_i, 0.U(32.W))
  io.ex_dispatch_ALUIO.bjp_op_jump_o := bjp_info(DECINFO_BJP_JUMP)
  io.ex_dispatch_ALUIO.bjp_op_beq_o := bjp_info(DECINFO_BJP_BEQ)
  io.ex_dispatch_ALUIO.bjp_op_bne_o := bjp_info(DECINFO_BJP_BNE)
  io.ex_dispatch_ALUIO.bjp_op_blt_o := bjp_info(DECINFO_BJP_BLT)
  io.ex_dispatch_ALUIO.bjp_op_bltu_o := bjp_info(DECINFO_BJP_BLTU)
  io.ex_dispatch_ALUIO.bjp_op_bge_o := bjp_info(DECINFO_BJP_BGE)
  io.ex_dispatch_ALUIO.bjp_op_bgeu_o := bjp_info(DECINFO_BJP_BGEU)
  io.ex_dispatch_ALUIO.req_bjp_o := op_bjp
  io.ex_dispatch_ALUIO.bjp_op_jalr_o := bjp_op1_rs1

    // 判断是否是乘除法操作
    val op_muldiv = (disp_info_grp === DECINFO_GRP_MULDIV)
    // 提取乘除法操作的信息
    val muldiv_info = Wire(UInt(DECINFO_WIDTH.W))
    muldiv_info := io.dec_info_bus_i & Fill(DECINFO_WIDTH, op_muldiv)
    // 根据乘除法操作的信息，选择相应的输入和输出信号
    io.ex_dispatch_ALUIO.muldiv_op1_o := Mux(op_muldiv, io.rs1_rdata_i, 0.U(32.W))
    io.ex_dispatch_ALUIO.muldiv_op2_o := Mux(op_muldiv, io.rs2_rdata_i, 0.U(32.W))
    io.ex_dispatch_ALUIO.muldiv_op_mul_o := muldiv_info(DECINFO_MULDIV_MUL).asBool
    io.ex_dispatch_ALUIO.muldiv_op_mulh_o := muldiv_info(DECINFO_MULDIV_MULH).asBool
    io.ex_dispatch_ALUIO.muldiv_op_mulhu_o := muldiv_info(DECINFO_MULDIV_MULHU).asBool
    io.ex_dispatch_ALUIO.muldiv_op_mulhsu_o := muldiv_info(DECINFO_MULDIV_MULHSU).asBool
    io.ex_dispatch_ALUIO.muldiv_op_div_o := muldiv_info(DECINFO_MULDIV_DIV).asBool
    io.ex_dispatch_ALUIO.muldiv_op_divu_o := muldiv_info(DECINFO_MULDIV_DIVU).asBool
    io.ex_dispatch_ALUIO.muldiv_op_rem_o := muldiv_info(DECINFO_MULDIV_REM).asBool
    io.ex_dispatch_ALUIO.muldiv_op_remu_o := muldiv_info(DECINFO_MULDIV_REMU).asBool
    io.ex_dispatch_ALUIO.req_muldiv_o := op_muldiv


    val op_mem = (disp_info_grp === DECINFO_GRP_MEM)
    val mem_info = Wire(UInt(DECINFO_WIDTH.W))
    mem_info := io.dec_info_bus_i & Fill(DECINFO_WIDTH, op_mem)
    // 根据内存操作的信息，选择相应的输入和输出信号
    io.mem_op_lb_o := mem_info(DECINFO_MEM_LB).asBool
    io.mem_op_lh_o := mem_info(DECINFO_MEM_LH).asBool
    io.mem_op_lw_o := mem_info(DECINFO_MEM_LW).asBool
    io.mem_op_lbu_o := mem_info(DECINFO_MEM_LBU).asBool
    io.mem_op_lhu_o := mem_info(DECINFO_MEM_LHU).asBool
    io.mem_op_sb_o := mem_info(DECINFO_MEM_SB).asBool
    io.mem_op_sh_o := mem_info(DECINFO_MEM_SH).asBool
    io.mem_op_sw_o := mem_info(DECINFO_MEM_SW).asBool
    io.mem_op1_o := Mux(op_mem, io.rs1_rdata_i, 0.U(32.W))
    io.mem_op2_o := Mux(op_mem, io.dec_imm_i, 0.U(32.W))
    io.mem_rs2_data_o := Mux(op_mem, io.rs2_rdata_i, 0.U(32.W))
    io.req_mem_o := op_mem

    // CSR信息
    val opCsr = io.dec_info_bus_i === DECINFO_GRP_CSR
    val csrInfo = Wire(UInt(DECINFO_WIDTH.W))
     csrInfo  := io.dec_info_bus_i & Fill(DECINFO_WIDTH, opCsr)

    // CSR op1
    val csrRs1Imm = csrInfo(DECINFO_CSR_RS1IMM)
    val csrRs1 = Mux(csrRs1Imm, io.dec_imm_i, io.rs1_rdata_i)
    io.ex_dispatch_ALUIO.csr_op1_o := Mux(opCsr, csrRs1, 0.U)
    // CSR地址
    io.csr_addr_o := csrInfo(DECINFO_CSR_CSRADDR) // 假设DECINFO_CSR_CSRADDR是20位宽
    // CSR操作
    io.ex_dispatch_ALUIO.csr_csrrw_o := csrInfo(DECINFO_CSR_CSRRW)
    io.ex_dispatch_ALUIO.csr_csrrs_o := csrInfo(DECINFO_CSR_CSRRS)
    io.ex_dispatch_ALUIO.csr_csrrc_o := csrInfo(DECINFO_CSR_CSRRC)
    io.ex_dispatch_ALUIO.req_csr_o := opCsr


    // 判断是否是系统操作
    val op_sys = (disp_info_grp === DECINFO_GRP_SYS)
    // 提取系统操作的信息
    val sys_info = Wire(UInt(32.W))
    sys_info := io.dec_info_bus_i & Fill(32, op_sys)
    // 根据系统操作的信息，选择相应的输出信号
    io.ex_dispatch_ALUIO.sys_op_nop_o := sys_info(DECINFO_SYS_NOP).asBool
    io.ex_dispatch_ALUIO.sys_op_mret_o := sys_info(DECINFO_SYS_MRET).asBool
    io.ex_dispatch_ALUIO.sys_op_ecall_o := sys_info(DECINFO_SYS_ECALL).asBool
    io.ex_dispatch_ALUIO.sys_op_ebreak_o := sys_info(DECINFO_SYS_EBREAK).asBool
    io.ex_dispatch_ALUIO.sys_op_fence_o := sys_info(DECINFO_SYS_FENCE).asBool
    io.ex_dispatch_ALUIO.sys_op_dret_o := sys_info(DECINFO_SYS_DRET).asBool

}

