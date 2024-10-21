package npc.core

import chisel3._
import chisel3.util._
import configs.{ID_IO, IF_IO, RegReadIO, csrreadio}
import configs.Control._
import configs.CsrOp._
import configs.Instructions._
import configs.ExceptType._


class ID extends Module{
  val io=IO(new Bundle() {
    val if_i=Input(new IF_IO)

    val read1 = new RegReadIO
    val read2 = new RegReadIO

    val stallid=Input(Bool())
    val csrread=new csrreadio

    val flush = Output(Bool())
    val flushpc = Output(UInt(32.W))
    val id_o = Output(new ID_IO)

  })
  val stall=RegNext(io.stallid)
  val lastinst = Reg(UInt(32.W))
  when(stall){lastinst:=io.if_i.inst}
  val inst=Mux(!io.if_i.valid,NOP,
    Mux(stall,lastinst,io.if_i.inst))

  // regfile addresses
  val rd  = inst(11, 7)
  val rs1 = inst(19, 15)
  val rs2 = inst(24, 20)


  // immediate
  val immI  = inst(31, 20)
  val immS  = Cat(inst(31, 25), inst(11, 7))
  val immB  = Cat(inst(31), inst(7), inst(30, 25), inst(11, 8), 0.U(1.W))
  val immU  = Cat(inst(31, 12), 0.U(12.W))
  val immJ  = Cat(inst(31), inst(19, 12), inst(20), inst(30, 21), 0.U(1.W))



  def generateOpr(oprSel: UInt) =
    MuxLookup(oprSel, 0.S, Seq(
      OPR_REG1  -> io.read1.data.asSInt,
      OPR_REG2  -> io.read2.data.asSInt,
      OPR_IMMI  -> immI.asSInt,
      OPR_IMMS  -> immS.asSInt,
      OPR_IMMU  -> immU.asSInt,
      OPR_IMMR  -> rs2.zext,
      OPR_PC    -> io.if_i.pc.asSInt,
      OPR_4     -> 4.S,
    ))

  val ((regEn1: Bool) :: (regEn2: Bool) :: (regWen: Bool) ::
    aluSrc1 :: aluSrc2 :: aluOp :: branchOp :: lsuOp :: csrOp ::
    mduOp :: excType :: Nil) = ListLookup(inst, DEFAULT, TABLE)

  val all_jump = branchOp === BR_AL
  val jal_pc   = (io.if_i.pc.asSInt  + immJ.asSInt).asUInt
  val imm_jalr  = (io.read1.data.asSInt + immI.asSInt).asUInt
  val jalr_pc =   Cat(imm_jalr,0.U(1.W))
  val pc_j = Mux(regEn1,jalr_pc,jal_pc)
  val pc_b = (io.if_i.pc.asSInt + immB.asSInt).asUInt
  val takepc = Mux(branchOp === BR_N,0.U,
               Mux(all_jump,pc_j,pc_b))
  val branchteke=MuxLookup(branchOp,false.B,Seq(
      BR_AL -> true.B,
      BR_EQ ->  (io.read1.data === io.read2.data),
      BR_NE ->  (io.read1.data =/= io.read2.data),
      BR_LT ->  (io.read1.data.asSInt < io.read2.data.asSInt),
      BR_GE ->  (io.read1.data.asSInt >= io.read2.data.asSInt),
      BR_LTU -> (io.read1.data < io.read2.data),
      BR_GEU -> (io.read1.data >= io.read2.data),
  ))

  val branchmiss = (io.if_i.bpu_take =/= branchteke) || (io.if_i.bpu_takepc =/= takepc)
  val flushpc = Mux(branchmiss,takepc,io.if_i.pc+4.U)
  val addrFault   = branchteke && takepc(1, 0) =/= 0.U

  // CSR related signals
  val csrActOp  = MuxLookup(csrOp, CSR_NOP, Seq(
    CSR_RW  -> Mux(rd === 0.U, CSR_W, CSR_RW),
    CSR_RS  -> Mux(rs1 === 0.U, CSR_R, CSR_RS),
    CSR_RC  -> Mux(rs1 === 0.U, CSR_R, CSR_RC),
  ))
  val csren = csrActOp =/= CSR_NOP
  val csrData   = Mux(!csren, 0.U, Mux(regEn1, io.read1.data, rs1))

  // exception signal
  val exceptType  = Mux(csrOp =/= CSR_NOP && !io.csrread.csr_valid, EXC_ILLEG,
                    Mux(io.if_i.misaligned, EXC_IADDR,
                    Mux(addrFault, EXC_IADDR, excType)))
  val exceptValue = Mux(addrFault, takepc, 0.U)

  io.csrread.csr_op:=csrActOp
  io.csrread.csr_raddr:=Mux(csren,immI,0.U)

  // pipeline control
  io.flush  := !io.stallid && !addrFault && branchmiss
  io.flushpc  := flushpc

  // regfile read signals
  io.read1.en   := regEn1
  io.read1.addr := rs1
  io.read2.en   := regEn2
  io.read2.addr := rs2

  io.flush := branchmiss
  io.flushpc := flushpc
  io.id_o.aluOp:=aluOp
  io.id_o.csrOp:=csrActOp
  io.id_o.csrAddr:= immI
  io.id_o.csrwData:= csrData
  io.id_o.csren:= csren
  io.id_o.csrrData:= io.csrread.csr_rdata
  io.id_o.lsuOp:=lsuOp
  io.id_o.lsuData:= io.read2.data
  io.id_o.mduOp := mduOp
  io.id_o.opr1 := generateOpr(aluSrc1).asUInt
  io.id_o.opr2 := generateOpr(aluSrc2).asUInt
  io.id_o.excType:=exceptType
  io.id_o.excValue:=exceptValue
  io.id_o.inst := io.if_i.inst
  io.id_o.valid := io.if_i.valid
  io.id_o.currentPc := io.if_i.pc
  io.id_o.regWen     := regWen
  io.id_o.regWaddr   := rd






}
