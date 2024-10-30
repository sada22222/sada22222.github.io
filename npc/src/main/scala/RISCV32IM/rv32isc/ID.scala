package rv32isc

import chisel3._
import chisel3.util._

import config.Configs._
import utils._

class ID extends Module {
  val io = IO(new Bundle {
    val if_i = Flipped(new ifu)

    val stall_o = Output(Bool())
    val illegal_inst_o = Output(Bool())

    val inst_ex = Input(UInt(32.W))
    val rd_ex = Input(UInt(5.W))
    val access_rd_ex = Input(Bool())
    val inst_mem = Input(UInt(32.W))
    val rd_mem = Input(UInt(5.W))
    val access_rd_mem = Input(Bool())

    val last_rs1_rd = Output(Bool())
    val last_rs2_rd = Output(Bool())
    val last_two_rs1_rd = Output(Bool())
    val last_two_rs2_rd = Output(Bool())
    val load1 = Output(Bool())
    val load2 = Output(Bool())

    val rs1_raddr = Output(UInt(5.W))
    val rs2_raddr = Output(UInt(5.W))
    val reg1_rdata_i = Input(UInt(32.W))
    val reg2_rdata_i = Input(UInt(32.W))

    val idu_o = new idu
  })

  val inst=Mux(io.if_i.inst_valid,io.if_i.inst,INST_NOP)
  io.idu_o.inst:=inst
  io.idu_o.inst_valid:=io.if_i.inst_valid
  io.idu_o.pc:=io.if_i.pc
  io.idu_o.rs1_rdata:=io.reg1_rdata_i
  io.idu_o.rs2_rdata:=io.reg2_rdata_i  

  val opcode = inst(6, 0)
  val rd = inst(11, 7)
  val rs1 = inst(19, 15)
  val rs2 = inst(24, 20)
  val funct7 = inst(31, 25)
  val funct3 = inst(14, 12)

  // Define opcode fields
  def isOpcode(op: UInt) = opcode === op

  // Define funct3 fields
  def isFunct3(fn: UInt) = funct3 === fn

  // Define funct7 fields
  def isFunct7(fn: UInt) = funct7 === fn

  // Determine instruction type
  val inst_lui = isOpcode("b0110111".U)
  val inst_auipc = isOpcode("b0010111".U)
  val inst_jal = isOpcode("b1101111".U)
  val inst_jalr = isOpcode("b1100111".U) && isFunct3("b000".U)
  val inst_beq = isOpcode("b1100011".U) && isFunct3("b000".U)
  val inst_bne = isOpcode("b1100011".U) && isFunct3("b001".U)
  val inst_blt = isOpcode("b1100011".U) && isFunct3("b100".U)
  val inst_bge = isOpcode("b1100011".U) && isFunct3("b101".U)
  val inst_bltu = isOpcode("b1100011".U) && isFunct3("b110".U)
  val inst_bgeu = isOpcode("b1100011".U) && isFunct3("b111".U)
  val inst_lb = isOpcode("b0000011".U) && isFunct3("b000".U)
  val inst_lh = isOpcode("b0000011".U) && isFunct3("b001".U)
  val inst_lw = isOpcode("b0000011".U) && isFunct3("b010".U)
  val inst_lbu = isOpcode("b0000011".U) && isFunct3("b100".U)
  val inst_lhu = isOpcode("b0000011".U) && isFunct3("b101".U)
  val inst_sb = isOpcode("b0100011".U) && isFunct3("b000".U)
  val inst_sh = isOpcode("b0100011".U) && isFunct3("b001".U)
  val inst_sw = isOpcode("b0100011".U) && isFunct3("b010".U)
  val inst_addi = isOpcode("b0010011".U) && isFunct3("b000".U)
  val inst_slti = isOpcode("b0010011".U) && isFunct3("b010".U)
  val inst_sltiu = isOpcode("b0010011".U) && isFunct3("b011".U)
  val inst_xori = isOpcode("b0010011".U) && isFunct3("b100".U)
  val inst_ori = isOpcode("b0010011".U) && isFunct3("b110".U)
  val inst_andi = isOpcode("b0010011".U) && isFunct3("b111".U)
  val inst_slli = isOpcode("b0010011".U) && isFunct3("b001".U) && isFunct7("b0000000".U)
  val inst_srli = isOpcode("b0010011".U) && isFunct3("b101".U) && isFunct7("b0000000".U)
  val inst_srai = isOpcode("b0010011".U) && isFunct3("b101".U) && isFunct7("b0100000".U)
  val inst_add = isOpcode("b0110011".U) && isFunct3("b000".U) && isFunct7("b0000000".U)
  val inst_sub = isOpcode("b0110011".U) && isFunct3("b000".U) && isFunct7("b0100000".U)
  val inst_sll = isOpcode("b0110011".U) && isFunct3("b001".U) && isFunct7("b0000000".U)
  val inst_slt = isOpcode("b0110011".U) && isFunct3("b010".U) && isFunct7("b0000000".U)
  val inst_sltu = isOpcode("b0110011".U) && isFunct3("b011".U) && isFunct7("b0000000".U)
  val inst_xor = isOpcode("b0110011".U) && isFunct3("b100".U) && isFunct7("b0000000".U)
  val inst_srl = isOpcode("b0110011".U) && isFunct3("b101".U) && isFunct7("b0000000".U)
  val inst_sra = isOpcode("b0110011".U) && isFunct3("b101".U) && isFunct7("b0100000".U)
  val inst_or = isOpcode("b0110011".U) && isFunct3("b110".U) && isFunct7("b0000000".U)
  val inst_and = isOpcode("b0110011".U) && isFunct3("b111".U) && isFunct7("b0000000".U)
  val inst_fence = isOpcode("b0001111".U) && isFunct3("b000".U)
  val inst_ecall = inst === "h00000073".U
  val inst_ebreak = inst === "h00100073".U
  val inst_fence_i = isOpcode("b0001111".U) && isFunct3("b001".U)
  val inst_csrrw = isOpcode("b1110011".U) && isFunct3("b001".U)
  val inst_csrrs = isOpcode("b1110011".U) && isFunct3("b010".U)
  val inst_csrrc = isOpcode("b1110011".U) && isFunct3("b011".U)
  val inst_csrrwi = isOpcode("b1110011".U) && isFunct3("b101".U)
  val inst_csrrsi = isOpcode("b1110011".U) && isFunct3("b110".U)
  val inst_csrrci = isOpcode("b1110011".U) && isFunct3("b111".U)
  val inst_mul = isOpcode("b0110011".U) && isFunct3("b000".U) && isFunct7("b0000001".U)
  val inst_mulh = isOpcode("b0110011".U) && isFunct3("b001".U) && isFunct7("b0000001".U)
  val inst_mulhsu = isOpcode("b0110011".U) && isFunct3("b010".U) && isFunct7("b0000001".U)
  val inst_mulhu = isOpcode("b0110011".U) && isFunct3("b011".U) && isFunct7("b0000001".U)
  val inst_div = isOpcode("b0110011".U) && isFunct3("b100".U) && isFunct7("b0000001".U)
  val inst_divu = isOpcode("b0110011".U) && isFunct3("b101".U) && isFunct7("b0000001".U)
  val inst_rem = isOpcode("b0110011".U) && isFunct3("b110".U) && isFunct7("b0000001".U)
  val inst_remu = isOpcode("b0110011".U) && isFunct3("b111".U) && isFunct7("b0000001".U)
  val inst_nop = inst === "h00000013".U
  val inst_mret = inst === "h30200073".U
  val inst_dret = inst === "h7b200073".U

  // Instruction classification
  val inst_type_load = isOpcode("b0000011".U)
  val inst_type_store = isOpcode("b0100011".U)
  val inst_type_branch = isOpcode("b1100011".U)
  val inst_type_muldiv = inst_mul || inst_mulh || inst_mulhsu || inst_mulhu || inst_div || inst_divu || inst_rem || inst_remu

val rs1_imm = Mux(opcode === "b0010011".U, true.B, false.B)

 // ALU信息总线
val dec_alu_info_bus = Cat(
  0.U(2.W), // 填充以符合总线宽度 
  rs1_imm || inst_lui || inst_auipc,
  inst_auipc,   
  inst_and || inst_andi,
  inst_or || inst_ori,
  inst_sra || inst_srai,
  inst_srl || inst_srli,
  inst_xor || inst_xori,
  inst_sltu || inst_sltiu,
  inst_slt || inst_slti,
  inst_sll || inst_slli,
  inst_sub,
  inst_add || inst_addi,
  inst_auipc,
  inst_lui,
  DECINFO_GRP_ALU
)

// BJP信息总线
val dec_bjp_info_bus = Cat(
  0.U(8.W),
  inst_jalr,
  inst_bgeu,
  inst_bltu,
  inst_bge,
  inst_blt,
  inst_bne,
  inst_beq,
  inst_jal,
  DECINFO_GRP_BJP
)

// MULDIV信息总线
val dec_muldiv_info_bus = Cat(
  0.U(8.W), // 填充以符合总线宽度    
  inst_remu,
  inst_rem,
  inst_divu,
  inst_div,
  inst_mulhu,
  inst_mulhsu,
  inst_mulh,
  inst_mul,
  DECINFO_GRP_MULDIV
)

// CSR信息总线
val dec_csr_info_bus = Cat(
  inst(31,20),  
  inst_csrrci,
  inst_csrrc,
  inst_csrrsi,
  inst_csrrs,
  inst_csrrwi,
  inst_csrrw,
  DECINFO_GRP_CSR
)

// MEM信息总线
val dec_mem_info_bus = Cat(
  0.U(8.W), // 填充以符合总线宽度    
  inst_sw,
  inst_sh,
  inst_sb,
  inst_lhu,
  inst_lbu,
  inst_lw,
  inst_lh,
  inst_lb,
  DECINFO_GRP_MEM
)

// SYS信息总线
val dec_sys_info_bus = Cat(
  0.U(10.W), // 填充以符合总线宽度    
  inst_fence || inst_fence_i,
  inst_dret,
  inst_mret,
  inst_nop,
  inst_ebreak,
  inst_ecall,
  DECINFO_GRP_SYS
)


  val inst_sel_u_imm = inst_lui | inst_auipc
  val inst_sel_j_imm = inst_jal
  val inst_sel_b_imm = inst_type_branch
  val inst_sel_s_imm = inst_type_store
  val inst_sel_i_imm = inst_addi | inst_slti | inst_sltiu | inst_xori | inst_ori | inst_andi | inst_type_load | inst_jalr
  val inst_sel_csr_imm = inst_csrrwi | inst_csrrsi | inst_csrrci
  val inst_sel_shift_imm = inst_slli | inst_srli | inst_srai
  // Immediate Selection
  val imm_u_type = Cat(inst(31, 12), 0.U(12.W))
  val imm_j_type = Cat(Fill(12, inst(31)), inst(19, 12), inst(20), inst(30, 21), 0.U(1.W))
  val imm_b_type = Cat(Fill(20, inst(31)), inst(7), inst(30, 25), inst(11, 8), 0.U(1.W))
  val imm_s_type = Cat(Fill(20, inst(31)), inst(31, 25), inst(11, 7))
  val imm_i_type = Cat(Fill(20, inst(31)), inst(31, 20))
  val imm_csr_type = Cat(0.U(27.W), inst(19, 15))
  val imm_shift_type = Cat(0.U(27.W), inst(24, 20))

  // Immediate Multiplexing
  io.idu_o.dec_imm := MuxLookup(inst.asUInt, 0.U, Seq(
    (inst_sel_u_imm, imm_u_type),
    (inst_sel_j_imm, imm_j_type),
    (inst_sel_b_imm, imm_b_type),
    (inst_sel_s_imm, imm_s_type),
    (inst_sel_i_imm, imm_i_type),
    (inst_sel_csr_imm, imm_csr_type),
    (inst_sel_shift_imm, imm_shift_type)
  ))

  // ALU, BJP, MULDIV, CSR, MEM, SYS bus selection
  val op_alu = inst_lui || inst_auipc || isOpcode("b0010011".U) || (isOpcode("b0110011".U) && !inst_type_muldiv)
  val op_bjp = inst_jal || inst_jalr || inst_type_branch
  val op_muldiv = inst_type_muldiv
  val op_csr = inst_csrrw || inst_csrrwi || inst_csrrs || inst_csrrsi || inst_csrrc || inst_csrrci
  val op_sys = inst_ebreak || inst_ecall || inst_nop || inst_mret || inst_fence || inst_fence_i || inst_dret
  val op_mem = inst_type_load || inst_type_store

  io.idu_o.dec_info_bus := MuxLookup(inst.asUInt, 0.U, Seq(
    (op_alu, dec_alu_info_bus),
    (op_bjp, dec_bjp_info_bus),
    (op_muldiv, dec_muldiv_info_bus),
    (op_csr, dec_csr_info_bus),
    (op_mem,  dec_mem_info_bus),
    (op_sys,dec_sys_info_bus)
  ))


  // Register file access
  val access_rs1 = !(inst_lui || inst_auipc || inst_jal || inst_ecall || inst_ebreak ||
    inst_csrrwi || inst_csrrsi || inst_csrrci || inst_nop ||
    inst_fence || inst_fence_i || inst_mret)
  io.rs1_raddr := Mux(access_rs1, rs1, 0.U)

  val access_rs2 = isOpcode("b0110011".U) || inst_type_store || inst_type_branch
  io.rs2_raddr := Mux(access_rs2, rs2, 0.U)

  val access_rd = inst_lui || inst_auipc || inst_jal || inst_jalr || inst_type_load || isOpcode("b0010011".U) || isOpcode("b0110011".U) || op_csr
  io.idu_o.rd_waddr := Mux(access_rd, rd, 0.U)
  io.idu_o.rd_we := access_rd

  // Hazard detection
  val load_hazard = io.access_rd_ex && io.inst_ex(6, 0) === "b0000011".U(7.W)

  io.last_rs1_rd := load_hazard && access_rs1 && (io.rd_ex === rs1)
  io.last_rs2_rd := load_hazard && access_rs2 && (io.rd_ex === rs2)
  io.last_two_rs1_rd := io.access_rd_mem && access_rs1 && (io.rd_mem === rs1)
  io.last_two_rs2_rd := io.access_rd_mem && access_rs2 && (io.rd_mem === rs2)

  io.load1 := load_hazard && access_rs1 && (io.rd_ex === rs1)
  io.load2 := load_hazard && access_rs2 && (io.rd_ex === rs2)

  io.stall_o := io.load1 || io.load2
  io.illegal_inst_o := false.B
}
