package configs

import chisel3._
import configs.AluOp.ALU_OP_WIDTH
import configs.CSR.CSR_ADDR_WIDTH
import configs.CsrOp.CSR_OP_WIDTH
import configs.ExceptCause.EXC_CAUSE_WIDTH
import configs.ExceptType.EXC_TYPE_WIDTH
import configs.LsuOp.LSU_OP_WIDTH
import configs.MduOp.MDU_OP_WIDTH

class SramIO extends Bundle {
  // enable signal
  val en    = Output(Bool())
  // data valid flag
  val valid = Input(Bool())
  // page fault flag
  val fault = Input(Bool())
  // other signals
  val wen   = Output(UInt((4).W))
  val addr  = Output(UInt(32.W))
  val rdata = Input(UInt(32.W))
  val wdata = Output(UInt(32.W))
}

class StageIO extends Bundle {
  // for initializing flip-flops in mid-stage
  def default() = 0.U.asTypeOf(this)
}

class IF_IO extends StageIO{
  val pc = UInt(32.W)
  val valid=Bool()
  val inst=UInt(32.W)
  val bpu_take=Bool()
  val bpu_takepc=UInt(32.W)
  val misaligned=Bool()
}

class ID_IO extends StageIO {
  // to ALU/MDU
  val aluOp     = UInt(ALU_OP_WIDTH.W)

  val opr1      = UInt(32.W)
  val opr2      = UInt(32.W)
  val mduOp     = UInt(MDU_OP_WIDTH.W)
  // to Mem (LSU)
  val lsuOp     = UInt(LSU_OP_WIDTH.W)
  val lsuData   = UInt(32.W)
  // to write back
  val regWen    = Bool()
  val regWaddr  = UInt(5.W)
  // to CSR
  val csrOp     = UInt(CSR_OP_WIDTH.W)
  val csrAddr   = UInt(CSR_ADDR_WIDTH.W)
  val csren      = Bool()
  val csrrData   = UInt(32.W)
  val csrwData   = UInt(32.W)
  // exception information
  val excType   = UInt(EXC_TYPE_WIDTH.W)
  val excValue  = UInt(32.W)
  // instruction info
  val valid     = Bool()
  val inst      = UInt(32.W)
  val currentPc = UInt(32.W)
}

class EX_IO extends StageIO{
  val lsuOp     = UInt(LSU_OP_WIDTH.W)
  val lsuData   = UInt(32.W)
  // to write back
  val reg       = new RegCommitIO
  val load      = Bool()
  // to CSR
  val csr       = new CsrCommitIO
  // exception information
  val excType   = UInt(EXC_TYPE_WIDTH.W)
  val excValue  = UInt(32.W)
  // instruction info
  val valid     = Bool()
  val inst      = UInt(32.W)
  val currentPc = UInt(32.W)
}

class MEM_IO extends StageIO{

  val reg       = new RegCommitIO
  // to CSR
  val csr       = new CsrCommitIO


}



class RegCommitIO extends Bundle {
  val en    = Bool()
  val addr  = UInt(5.W)
  val data  = UInt(32.W)

}

class RegReadIO extends Bundle {
  val en    = Output(Bool())
  val addr  = Output(UInt(5.W))
  val data  = Input(UInt(32.W))
}

class csrreadio extends  Bundle{
  val csr_rdata=Input(UInt(32.W))
  val csr_raddr=Output(UInt(32.W))
  val csr_op   =Output(UInt(CSR_OP_WIDTH.W))
  val csr_valid=Input(Bool())
}
class CsrWriteIO extends Bundle {
  val op      = Output(UInt(CSR_OP_WIDTH.W))
  val addr    = Output(UInt(CSR_ADDR_WIDTH.W))
  val data    = Output(UInt(32.W))
  val retired = Output(Bool())
}

class CsrCommitIO extends Bundle {
  val op      = UInt(CSR_OP_WIDTH.W)
  val addr    = UInt(CSR_ADDR_WIDTH.W)
  val data    = UInt(32.W)
  // instruction retired flag
  val retired = Bool()
}

class ExceptInfoIO extends Bundle {
  val hasTrap   = Bool()
  val isMret    = Bool()
  val isSret    = Bool()
  val excCause  = UInt(EXC_CAUSE_WIDTH.W)
  val excPc     = UInt(32.W)
  val excValue  = UInt(32.W)
}