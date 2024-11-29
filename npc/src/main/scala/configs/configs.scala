package configs

import chisel3._
import chisel3.util._


object AluOp {
  val ALU_OP_WIDTH = log2Ceil(10)

  val ALU_ADD   = 0.U(ALU_OP_WIDTH.W)
  val ALU_SUB   = 1.U(ALU_OP_WIDTH.W)
  val ALU_XOR   = 2.U(ALU_OP_WIDTH.W)
  val ALU_OR    = 3.U(ALU_OP_WIDTH.W)
  val ALU_AND   = 4.U(ALU_OP_WIDTH.W)
  val ALU_SLT   = 5.U(ALU_OP_WIDTH.W)
  val ALU_SLTU  = 6.U(ALU_OP_WIDTH.W)
  val ALU_SLL   = 7.U(ALU_OP_WIDTH.W)
  val ALU_SRL   = 8.U(ALU_OP_WIDTH.W)
  val ALU_SRA   = 9.U(ALU_OP_WIDTH.W)
}

// all operations that supported by MDU
object MduOp {
  val MDU_OP_WIDTH = log2Ceil(9)

  val MDU_NOP     = 0.U(MDU_OP_WIDTH.W)
  val MDU_MUL     = 1.U(MDU_OP_WIDTH.W)
  val MDU_MULH    = 2.U(MDU_OP_WIDTH.W)
  val MDU_MULHSU  = 3.U(MDU_OP_WIDTH.W)
  val MDU_MULHU   = 4.U(MDU_OP_WIDTH.W)
  val MDU_DIV     = 5.U(MDU_OP_WIDTH.W)
  val MDU_DIVU    = 6.U(MDU_OP_WIDTH.W)
  val MDU_REM     = 7.U(MDU_OP_WIDTH.W)
  val MDU_REMU    = 8.U(MDU_OP_WIDTH.W)
}

// all operations that supported by LSU
object LsuOp {
  val LSU_OP_WIDTH = log2Ceil(12)

  val LSU_NOP   = 0.U(LSU_OP_WIDTH.W)
  val LSU_LB    = 1.U(LSU_OP_WIDTH.W)
  val LSU_LH    = 2.U(LSU_OP_WIDTH.W)
  val LSU_LW    = 3.U(LSU_OP_WIDTH.W)
  val LSU_LBU   = 4.U(LSU_OP_WIDTH.W)
  val LSU_LHU   = 5.U(LSU_OP_WIDTH.W)
  val LSU_SB    = 6.U(LSU_OP_WIDTH.W)
  val LSU_SH    = 7.U(LSU_OP_WIDTH.W)
  val LSU_SW    = 8.U(LSU_OP_WIDTH.W)
  val LSU_FENC  = 9.U(LSU_OP_WIDTH.W)
  val LSU_FENI  = 10.U(LSU_OP_WIDTH.W)
  val LSU_FENV  = 11.U(LSU_OP_WIDTH.W)
}

// all operations that supported by CSR
object CsrOp {
  val CSR_OP_WIDTH = log2Ceil(6)

  val CSR_NOP = 0.U(CSR_OP_WIDTH.W)
  val CSR_R   = 1.U(CSR_OP_WIDTH.W)
  val CSR_W   = 2.U(CSR_OP_WIDTH.W)
  val CSR_RW  = 3.U(CSR_OP_WIDTH.W)
  val CSR_RS  = 4.U(CSR_OP_WIDTH.W)
  val CSR_RC  = 5.U(CSR_OP_WIDTH.W)
}


// exception type
object ExceptType {
  val EXC_TYPE_WIDTH = log2Ceil(11)

  val EXC_NONE  = 0.U(EXC_TYPE_WIDTH.W)
  val EXC_ECALL = 1.U(EXC_TYPE_WIDTH.W)
  val EXC_EBRK  = 2.U(EXC_TYPE_WIDTH.W)
  val EXC_SRET  = 3.U(EXC_TYPE_WIDTH.W)
  val EXC_MRET  = 4.U(EXC_TYPE_WIDTH.W)
  val EXC_ILLEG = 5.U(EXC_TYPE_WIDTH.W)   // illegal instruction
  val EXC_IPAGE = 6.U(EXC_TYPE_WIDTH.W)   // instruction page fault
  val EXC_IADDR = 7.U(EXC_TYPE_WIDTH.W)   // instruction address misaligned
  val EXC_LOAD  = 8.U(EXC_TYPE_WIDTH.W)
  val EXC_STAMO = 9.U(EXC_TYPE_WIDTH.W)
  val EXC_SPRIV = 10.U(EXC_TYPE_WIDTH.W)  // S-mode instruction
}

// exception cause
object ExceptCause {
  val EXC_CAUSE_WIDTH = 31

  // interruptions
  val EXC_S_SOFT_INT  = 1.U(EXC_CAUSE_WIDTH.W)
  val EXC_M_SOFT_INT  = 3.U(EXC_CAUSE_WIDTH.W)
  val EXC_S_TIMER_INT = 5.U(EXC_CAUSE_WIDTH.W)
  val EXC_M_TIMER_INT = 7.U(EXC_CAUSE_WIDTH.W)
  val EXC_S_EXT_INT   = 9.U(EXC_CAUSE_WIDTH.W)
  val EXC_M_EXT_INT   = 11.U(EXC_CAUSE_WIDTH.W)

  // exceptions
  val EXC_INST_ADDR   = 0.U(EXC_CAUSE_WIDTH.W)
  val EXC_ILL_INST    = 2.U(EXC_CAUSE_WIDTH.W)
  val EXC_BRK_POINT   = 3.U(EXC_CAUSE_WIDTH.W)
  val EXC_LOAD_ADDR   = 4.U(EXC_CAUSE_WIDTH.W)
  val EXC_STAMO_ADDR  = 6.U(EXC_CAUSE_WIDTH.W)
  val EXC_U_ECALL     = 8.U(EXC_CAUSE_WIDTH.W)
  val EXC_S_ECALL     = 9.U(EXC_CAUSE_WIDTH.W)
  val EXC_M_ECALL     = 11.U(EXC_CAUSE_WIDTH.W)
  val EXC_INST_PAGE   = 12.U(EXC_CAUSE_WIDTH.W)
  val EXC_LOAD_PAGE   = 13.U(EXC_CAUSE_WIDTH.W)
  val EXC_STAMO_PAGE  = 15.U(EXC_CAUSE_WIDTH.W)
}

object CSR {
  // privilege levels
  val CSR_MODE_WIDTH  = 2
  val CSR_MODE_U      = "b00".U(CSR_MODE_WIDTH.W)
  val CSR_MODE_S      = "b01".U(CSR_MODE_WIDTH.W)
  val CSR_MODE_M      = "b11".U(CSR_MODE_WIDTH.W)

  // address
  val CSR_ADDR_WIDTH  = 12
  // user counters (read only)
  val CSR_CYCLE       = 0xc00.U(CSR_ADDR_WIDTH.W)
  val CSR_TIME        = 0xc01.U(CSR_ADDR_WIDTH.W)
  val CSR_INSTRET     = 0xc02.U(CSR_ADDR_WIDTH.W)
  val CSR_CYCLEH      = 0xc80.U(CSR_ADDR_WIDTH.W)
  val CSR_TIMEH       = 0xc81.U(CSR_ADDR_WIDTH.W)
  val CSR_INSTRETH    = 0xc82.U(CSR_ADDR_WIDTH.W)
  // supervisor trap setup
  val CSR_SSTATUS     = 0x100.U(CSR_ADDR_WIDTH.W)
  val CSR_SIE         = 0x104.U(CSR_ADDR_WIDTH.W)
  val CSR_STVEC       = 0x105.U(CSR_ADDR_WIDTH.W)
  val CSR_SCOUNTEREN  = 0x106.U(CSR_ADDR_WIDTH.W)
  // supervisor trap handling
  val CSR_SSCRATCH    = 0x140.U(CSR_ADDR_WIDTH.W)
  val CSR_SEPC        = 0x141.U(CSR_ADDR_WIDTH.W)
  val CSR_SCAUSE      = 0x142.U(CSR_ADDR_WIDTH.W)
  val CSR_STVAL       = 0x143.U(CSR_ADDR_WIDTH.W)
  val CSR_SIP         = 0x144.U(CSR_ADDR_WIDTH.W)
  // supervisor protection and translation
  val CSR_SATP        = 0x180.U(CSR_ADDR_WIDTH.W)
  // machine information registers (read only)
  val CSR_MVENDERID   = 0xf11.U(CSR_ADDR_WIDTH.W)
  val CSR_MARCHID     = 0xf12.U(CSR_ADDR_WIDTH.W)
  val CSR_MIMPID      = 0xf13.U(CSR_ADDR_WIDTH.W)
  val CSR_MHARTID     = 0xf14.U(CSR_ADDR_WIDTH.W)
  // machine trap setup
  val CSR_MSTATUS     = 0x300.U(CSR_ADDR_WIDTH.W)
  val CSR_MISA        = 0x301.U(CSR_ADDR_WIDTH.W)
  val CSR_MEDELEG     = 0x302.U(CSR_ADDR_WIDTH.W)
  val CSR_MIDELEG     = 0x303.U(CSR_ADDR_WIDTH.W)
  val CSR_MIE         = 0x304.U(CSR_ADDR_WIDTH.W)
  val CSR_MTVEC       = 0x305.U(CSR_ADDR_WIDTH.W)
  val CSR_MCOUNTEREN  = 0x306.U(CSR_ADDR_WIDTH.W)
  // machine trap handling
  val CSR_MSCRATCH    = 0x340.U(CSR_ADDR_WIDTH.W)
  val CSR_MEPC        = 0x341.U(CSR_ADDR_WIDTH.W)
  val CSR_MCAUSE      = 0x342.U(CSR_ADDR_WIDTH.W)
  val CSR_MTVAL       = 0x343.U(CSR_ADDR_WIDTH.W)
  val CSR_MIP         = 0x344.U(CSR_ADDR_WIDTH.W)
  // machine memory protection
  val CSR_PMPCFG0     = 0x3a0.U(CSR_ADDR_WIDTH.W)
  val CSR_PMPCFG1     = 0x3a1.U(CSR_ADDR_WIDTH.W)
  val CSR_PMPCFG2     = 0x3a2.U(CSR_ADDR_WIDTH.W)
  val CSR_PMPCFG3     = 0x3a3.U(CSR_ADDR_WIDTH.W)
  val CSR_PMPADDR0    = 0x3b0.U(CSR_ADDR_WIDTH.W)
  val CSR_PMPADDR1    = 0x3b1.U(CSR_ADDR_WIDTH.W)
  val CSR_PMPADDR2    = 0x3b2.U(CSR_ADDR_WIDTH.W)
  val CSR_PMPADDR3    = 0x3b3.U(CSR_ADDR_WIDTH.W)
  val CSR_PMPADDR4    = 0x3b4.U(CSR_ADDR_WIDTH.W)
  val CSR_PMPADDR5    = 0x3b5.U(CSR_ADDR_WIDTH.W)
  val CSR_PMPADDR6    = 0x3b6.U(CSR_ADDR_WIDTH.W)
  val CSR_PMPADDR7    = 0x3b7.U(CSR_ADDR_WIDTH.W)
  val CSR_PMPADDR8    = 0x3b8.U(CSR_ADDR_WIDTH.W)
  val CSR_PMPADDR9    = 0x3b9.U(CSR_ADDR_WIDTH.W)
  val CSR_PMPADDR10   = 0x3ba.U(CSR_ADDR_WIDTH.W)
  val CSR_PMPADDR11   = 0x3bb.U(CSR_ADDR_WIDTH.W)
  val CSR_PMPADDR12   = 0x3bc.U(CSR_ADDR_WIDTH.W)
  val CSR_PMPADDR13   = 0x3bd.U(CSR_ADDR_WIDTH.W)
  val CSR_PMPADDR14   = 0x3be.U(CSR_ADDR_WIDTH.W)
  val CSR_PMPADDR15   = 0x3bf.U(CSR_ADDR_WIDTH.W)
  // machine counters
  val CSR_MCYCLE      = 0xb00.U(CSR_ADDR_WIDTH.W)
  val CSR_MINSTRET    = 0xb02.U(CSR_ADDR_WIDTH.W)
  val CSR_MCYCLEH     = 0xb80.U(CSR_ADDR_WIDTH.W)
  val CSR_MINSTRETH   = 0xb82.U(CSR_ADDR_WIDTH.W)
  // machine counter setup
  val CSR_MCOUNTINHIBIT = 0x320.U(CSR_ADDR_WIDTH.W)
}


