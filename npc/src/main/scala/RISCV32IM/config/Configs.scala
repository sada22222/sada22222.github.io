package config

import chisel3._

import math._

object Configs {
    def deley(IN:UInt,reset:Bool,hold:Bool): UInt = {
        withReset(reset||hold) {
            val q=RegInit(0.U(32.W))
            q:=IN
            q
        }
    }

    val CpuResetAddr = 0
    val RstEnable = 1
    val RstDisable = 1
    val ZeroWord = "h0"
    val ZeroReg = "h0"
    val WriteEnable = "b1"
    val WriteDisable = "b0"
    val ReadEnable = "b1"
    val ReadDisable = "b0"
    val True = 1
    val False=0
    val ChipEnable = 1
    val ChipDisable =0
    val JumpEnable = 1
    val JumpDisable= 0
    val DivResultNotReady = 0
    val DivResultReady = 1
    val DivStart = 1
    val DivStop = 0
    val HoldEnable = 1
    val HoldDisable = 0
    val Stop = 1
    val NoStop = 0
    val Hold_Pc="b001".U(3.W)
    val Hold_If="b010".U(3.W)
    val INT_BUS=8


    // I type inst
    val  INST_TYPE_I= "b0010011".U(7.W)
    val INST_ADDI =  "b000".U(3.W)
    val INST_SLTI =  "b010".U(3.W)
    val INST_SLTIU = "b011".U(3.W)
    val INST_XORI =  "b100".U(3.W)
    val INST_ORI =   "b110".U(3.W)
    val INST_ANDI =  "b111".U(3.W)
    val INST_SLLI =  "b001".U(3.W)
    val INST_SRI =   "b101".U(3.W)

    //L type
    val INST_TYPE_L =  "b0000011".U(7.W)
    val INST_LB =  "b000".U(3.W)
    val INST_LH =  "b001".U(3.W)
    val INST_LW =  "b010".U(3.W)
    val INST_LBU =  "b100".U(3.W)
    val INST_LHU =  "b101".U(3.W)

    //s type
    val INST_TYPE_S =  "b0100011".U(7.W)
    val INST_SB =  "b000".U(3.W)
    val INST_SH =  "b001".U(3.W)
    val INST_SW =  "b010".U(3.W)

    //R and M type
    val INST_TYPE_R_M =  "b0110011".U(7.W)
    val INST_ADD_SUB ="b000".U(3.W)
    val INST_SLL =  "b001".U(3.W)
    val INST_SLT =  "b010".U(3.W)
    val INST_SLTU =  "b011".U(3.W)
    val INST_XOR =  "b100".U(3.W)
    val INST_SR =  "b101".U(3.W)
    val INST_OR =  "b110".U(3.W)
    val INST_AND =  "b111".U(3.W)

    // M type
    val INST_MUL    =  "b000".U(3.W)
    val INST_MULH   =  "b001".U(3.W)
    val INST_MULHSU =  "b010".U(3.W)
    val INST_MULHU  =  "b011".U(3.W)
    val INST_DIV    =  "b100".U(3.W)
    val INST_DIVU   =  "b101".U(3.W)
    val INST_REM    =  "b110".U(3.W)
    val INST_REMU   =  "b111".U(3.W)

    //J type
    val INST_JAL    =  "b1101111".U(7.W)
    val INST_JALR   =  "b1100111".U(7.W)
    val INST_LUI   =  "b0110111".U(7.W)
    val INST_AUIPC   =  "b0010111".U(7.W)
    val INST_NOP   =  "h00000001".U(32.W)
    val INST_NOP_OP   =  "b0000001".U(7.W)
    val INST_MRET   =  "h30200073".U(32.W)
    val INST_RET   =  "h00008067".U(32.W)

    val INST_TYPE_B   =  "b1100011".U(7.W)
    val INST_BEQ    =  "b000".U(3.W)
    val INST_BNE    =  "b001".U(3.W)
    val INST_BLT    =  "b100".U(3.W)
    val INST_BGE    =  "b101".U(3.W)
    val INST_BLTU   =  "b110".U(3.W)
    val INST_BGEU   =  "b111".U(3.W)

    //CSR type
    val INST_CSR   =  "b1110011".U(7.W)
    val INST_CSRRW    =  "b001".U(3.W)
    val INST_CSRRS    =  "b010".U(3.W)
    val INST_CSRRC    =  "b011".U(3.W)
    val INST_CSRRWI   =  "b101".U(3.W)
    val INST_CSRRSI   =  "b110".U(3.W)
    val INST_CSRRCI   =  "b111".U(3.W)



    // Instruction decode information
    val DECINFO_GRP_BUS = 3.W
    val DECINFO_GRP_WIDTH = 3
    val DECINFO_GRP_ALU = 1.U(3.W)
    val DECINFO_GRP_BJP = 2.U(3.W)
    val DECINFO_GRP_MULDIV = 3.U(3.W)
    val DECINFO_GRP_CSR = 4.U(3.W)
    val DECINFO_GRP_MEM = 5.U(3.W)
    val DECINFO_GRP_SYS = 6.U(3.W)

    val DECINFO_ALU_BUS_WIDTH = (DECINFO_GRP_WIDTH + 14)
    val DECINFO_ALU_LUI = DECINFO_GRP_WIDTH
    val DECINFO_ALU_AUIPC = (DECINFO_GRP_WIDTH + 1)
    val DECINFO_ALU_ADD = (DECINFO_GRP_WIDTH + 2)
    val DECINFO_ALU_SUB = (DECINFO_GRP_WIDTH + 3)
    val DECINFO_ALU_SLL = (DECINFO_GRP_WIDTH + 4)
    val DECINFO_ALU_SLT = (DECINFO_GRP_WIDTH + 5)
    val DECINFO_ALU_SLTU = (DECINFO_GRP_WIDTH + 6)
    val DECINFO_ALU_XOR = (DECINFO_GRP_WIDTH + 7)
    val DECINFO_ALU_SRL = (DECINFO_GRP_WIDTH + 8)
    val DECINFO_ALU_SRA = (DECINFO_GRP_WIDTH + 9)
    val DECINFO_ALU_OR = (DECINFO_GRP_WIDTH + 10)
    val DECINFO_ALU_AND = (DECINFO_GRP_WIDTH + 11)
    val DECINFO_ALU_OP2IMM = (DECINFO_GRP_WIDTH + 12)
    val DECINFO_ALU_OP1PC = (DECINFO_GRP_WIDTH + 13)

    val DECINFO_BJP_BUS_WIDTH = (DECINFO_GRP_WIDTH + 8)
    val DECINFO_BJP_JUMP = DECINFO_GRP_WIDTH
    val DECINFO_BJP_BEQ = (DECINFO_GRP_WIDTH + 1)
    val DECINFO_BJP_BNE = (DECINFO_GRP_WIDTH + 2)
    val DECINFO_BJP_BLT = (DECINFO_GRP_WIDTH + 3)
    val DECINFO_BJP_BGE = (DECINFO_GRP_WIDTH + 4)
    val DECINFO_BJP_BLTU = (DECINFO_GRP_WIDTH + 5)
    val DECINFO_BJP_BGEU = (DECINFO_GRP_WIDTH + 6)
    val DECINFO_BJP_OP1RS1 = (DECINFO_GRP_WIDTH + 7)

    val DECINFO_MULDIV_BUS_WIDTH = (DECINFO_GRP_WIDTH + 8)
    val DECINFO_MULDIV_MUL = DECINFO_GRP_WIDTH
    val DECINFO_MULDIV_MULH = (DECINFO_GRP_WIDTH + 1)
    val DECINFO_MULDIV_MULHSU = (DECINFO_GRP_WIDTH + 2)
    val DECINFO_MULDIV_MULHU = (DECINFO_GRP_WIDTH + 3)
    val DECINFO_MULDIV_DIV = (DECINFO_GRP_WIDTH + 4)
    val DECINFO_MULDIV_DIVU = (DECINFO_GRP_WIDTH + 5)
    val DECINFO_MULDIV_REM = (DECINFO_GRP_WIDTH + 6)
    val DECINFO_MULDIV_REMU = (DECINFO_GRP_WIDTH + 7)

    val DECINFO_CSR_BUS_WIDTH = (DECINFO_GRP_WIDTH + 16)
    val DECINFO_CSR_CSRRW = DECINFO_GRP_WIDTH
    val DECINFO_CSR_CSRRS = (DECINFO_GRP_WIDTH + 1)
    val DECINFO_CSR_CSRRC = (DECINFO_GRP_WIDTH + 2)
    val DECINFO_CSR_RS1IMM = (DECINFO_GRP_WIDTH + 3)
    val DECINFO_CSR_CSRADDR = (DECINFO_GRP_WIDTH + 4)

    val DECINFO_MEM_BUS_WIDTH = (DECINFO_GRP_WIDTH + 8)
    val DECINFO_MEM_LB = DECINFO_GRP_WIDTH
    val DECINFO_MEM_LH = (DECINFO_GRP_WIDTH + 1)
    val DECINFO_MEM_LW = (DECINFO_GRP_WIDTH + 2)
    val DECINFO_MEM_LBU = (DECINFO_GRP_WIDTH + 3)
    val DECINFO_MEM_LHU = (DECINFO_GRP_WIDTH + 4)
    val DECINFO_MEM_SB = (DECINFO_GRP_WIDTH + 5)
    val DECINFO_MEM_SH = (DECINFO_GRP_WIDTH + 6)
    val DECINFO_MEM_SW = (DECINFO_GRP_WIDTH + 7)

    val DECINFO_SYS_BUS_WIDTH = (DECINFO_GRP_WIDTH + 6)
    val DECINFO_SYS_ECALL = DECINFO_GRP_WIDTH
    val DECINFO_SYS_EBREAK = (DECINFO_GRP_WIDTH + 1)
    val DECINFO_SYS_NOP = (DECINFO_GRP_WIDTH + 2)
    val DECINFO_SYS_MRET = (DECINFO_GRP_WIDTH + 3)
    val DECINFO_SYS_FENCE = (DECINFO_GRP_WIDTH + 4)
    val DECINFO_SYS_DRET = (DECINFO_GRP_WIDTH + 5)

    // The longest group
    val DECINFO_WIDTH = DECINFO_CSR_BUS_WIDTH

    val CSR_CYCLE       = "hc00".U(12.W)
    val CSR_CYCLEH      = "hc80".U(12.W)
    val CSR_MTVEC       = "h305".U(12.W)
    val CSR_MCAUSE      = "h342".U(12.W)
    val CSR_MEPC        = "h341".U(12.W)
    val CSR_MIE         = "h304".U(12.W)
    val CSR_MSTATUS     = "h300".U(12.W)
    val CSR_MSCRATCH    = "h340".U(12.W)
    val CSR_MHARTID     = "hF14".U(12.W)
    val CSR_MISA        = "h301".U(12.W)
    // only used for verification
    val CSR_SSTATUS     = "h100".U(12.W)
    // Debug
    val CSR_DCSR        = "h7b0".U(12.W)
    val CSR_DPC         = "h7b1".U(12.W)
    val CSR_DSCRATCH0   = "h7b2".U(12.W)
    val CSR_DSCRATCH1   = "h7b3".U(12.W)
    val CSR_TSELECT     = "h7A0".U(12.W)
    val CSR_TDATA1      = "h7A1".U(12.W)
    val CSR_TDATA2      = "h7A2".U(12.W)
    val CSR_TDATA3      = "h7A3".U(12.W)
    val CSR_MCONTEXT    = "h7A8".U(12.W)
    val CSR_SCONTEXT    = "h7AA".U(12.W)

    val DCSR_CAUSE_NONE    = "h0".U(3.W)
    val DCSR_CAUSE_STEP    = "h4".U(3.W)
    val DCSR_CAUSE_DBGREQ  = "h3".U(3.W)
    val DCSR_CAUSE_EBREAK  = "h1".U(3.W)
    val DCSR_CAUSE_HALT    = "h5".U(3.W)
    val DCSR_CAUSE_TRIGGER = "h2".U(3.W)





}
