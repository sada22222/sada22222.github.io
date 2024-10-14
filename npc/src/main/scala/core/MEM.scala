package core

import chisel3._
import chisel3.util._
import configs.ExceptCause._
import configs.ExceptType._
import configs.LsuDecode._
import configs.{EX_IO, ExceptInfoIO, MEM_IO, SramIO}

class MEM extends Module {
  val io = IO(new Bundle {
    val ex_i = Input(new EX_IO)
    val stallReq  = Output(Bool())
    val ram = new SramIO
    val except=Output(new ExceptInfoIO)

    val csrHasInt = Input(Bool())
    val csrBusy   = Input(Bool())

    val mem_o = Output(new MEM_IO)
  })

  // decode load store unit operation
  val (wen: Bool) :: width :: (signed: Bool)  :: Nil = ListLookup(io.ex_i.lsuOp, DEFAULT, TABLE)

  val addr  = Cat(io.ex_i.reg.data(31, 2), 0.U(2.W))
  val sel   = io.ex_i.reg.data(1 ,0)

  // write enable
  val selWord = "b1111".U(4.W)
  val writeEn = MuxLookup(width, 0.U, Seq(
    LS_DATA_BYTE -> ("b1". U(4.W) << sel),
    LS_DATA_HALF -> ("b11".U(4.W) << sel),
    LS_DATA_WORD -> selWord,
  ))
  val ramWen  = Mux(wen, writeEn,  selWord)

  // write data
  def mapWriteData(i: Int, w: Int) =
    (i * w / 8).U -> (io.ex_i.lsuData << (i * w))
  val byteSeq = 0 until 4 map { i => mapWriteData(i,  8) }
  val halfSeq = 0 until 2 map { i => mapWriteData(i, 16) }
  val wordSeq = 0 until 1 map { i => mapWriteData(i, 32) }
  val lsuData = MuxLookup(width, 0.U, Seq(
    LS_DATA_BYTE -> MuxLookup(sel, 0.U, byteSeq),
    LS_DATA_HALF -> MuxLookup(sel, 0.U, halfSeq),
    LS_DATA_WORD -> MuxLookup(sel, 0.U, wordSeq),
  ))
  val wdata   = lsuData

  io.stallReq:= !io.ram.valid ||  io.csrBusy

  def mapRamData(i: Int, w: Int) = {
    val d = io.ram.rdata((i + 1) * w - 1, i * w)
    val sext = Wire(SInt(32.W))
    sext := d.asSInt
    (i * w / 8).U -> Mux(signed, sext.asUInt, d)
  }
  // data from RAM
  val load_byteSeq   = 0 until 4 map { i => mapRamData(i,  8) }
  val load_halfSeq   = 0 until 2 map { i => mapRamData(i, 16) }
  val load_wordSeq   = 0 until 1 map { i => mapRamData(i, 32) }
  val loadData  = MuxLookup(width, 0.U, Seq(
    LS_DATA_BYTE  -> MuxLookup(sel, 0.U, load_byteSeq),
    LS_DATA_HALF  -> MuxLookup(sel, 0.U, load_halfSeq),
    LS_DATA_WORD  -> MuxLookup(sel, 0.U, load_wordSeq),
  ))
  val reg_data = Mux(io.ex_i.load,loadData,io.ex_i.reg.data)

  //地址对齐
  val memAddr   = MuxLookup(width, false.B, Seq(
    LS_DATA_BYTE  -> false.B,
    LS_DATA_HALF  -> (sel(0) =/= 0.U),
    LS_DATA_WORD  -> (sel(1, 0) =/= 0.U),
  ))
  val memExcept = memAddr || io.ram.fault

  // Signals about instruction exceptions
  val instAddr  = io.ex_i.excType === EXC_IADDR   // 指令地址异常
  val instIllg  = io.ex_i.excType === EXC_ILLEG   // 非法指令

  // Whether exception occurred
  val excMem    = io.ex_i.excType === EXC_LOAD    // 内存异常（只处理加载）
  val excOther  = io.ex_i.excType === EXC_ECALL || io.ex_i.excType === EXC_EBRK    // 其他异常（系统调用、断点）

  val hasTrap   = instAddr || instIllg || (excMem && memExcept) || excOther || io.csrHasInt   // 检查是否发生了异常

  // Exception cause
  val cause     = MuxLookup(io.ex_i.excType, 0.U, Seq(
    EXC_ECALL -> EXC_M_ECALL,      // 系统调用只处理机器模式下的情况
    EXC_EBRK  -> EXC_BRK_POINT,    // 断点异常
    EXC_LOAD  -> Mux(memAddr, EXC_LOAD_ADDR, EXC_LOAD_PAGE)    // 加载异常：地址不对齐或页错误
  ))

  val excCause  = Mux(instIllg, EXC_ILL_INST,        // 非法指令优先级其次
                  Mux(instAddr, EXC_INST_ADDR, cause))  // 最后处理指令地址异常或其他异常

  // Exception PC & Value
  val excPc     = io.ex_i.currentPc   // 异常发生时的 PC
  val excValue  = Mux(instIllg, io.ex_i.inst,         // 非法指令时返回指令本身
                  Mux(memExcept, io.ex_i.reg.data, io.ex_i.excValue)) // 内存异常或其他异常时返回对应的值

  io.except.excPc:=excPc
  io.except.hasTrap:=hasTrap
  io.except.excCause:=excCause
  io.except.excValue:=excValue
  io.except.isMret:=false.B
  io.except.isSret:=false.B  

  io.ram.en     := Mux(hasTrap, false.B, true.B)
  io.ram.wen    := ramWen
  io.ram.addr   := addr
  io.ram.wdata  := wdata


  io.mem_o.reg.en       := io.ex_i.reg.en
  io.mem_o.reg.addr     := io.ex_i.reg.addr
  io.mem_o.reg.data     := reg_data
  io.mem_o.csr          <> io.ex_i.csr
}