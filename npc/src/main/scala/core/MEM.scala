package npc.core

import chisel3._
import chisel3.util._
import configs.ExceptCause._
import configs.ExceptType._
import configs.LsuDecode._
import configs.{EX_IO, ExceptInfoIO, MEM_IO, SramIO}

class awrite extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
      val clock = Input(Clock())
      val wen = Input(Bool())     // 写使能
      val ren = Input(Bool())     // 读使能
      val addr = Input(UInt(32.W))
      val mask = Input(UInt(4.W))
      val sign = Input(Bool())
      val wdata = Input(UInt(32.W))
      val rdata = Output(UInt(32.W))
  })

  setInline("awrite.v",
    """
      |import "DPI-C" function void vaddr_write(int addr, byte mask, int data);
      |import "DPI-C" function int vaddr_read(bit is_signed, int addr, byte mask);
      |
      |module awrite (
      |    input         clock,
      |    input         wen,       
      |    input         ren,        
      |    input  [31:0] addr,       // 地址
      |    input  [ 3:0] mask,       // 字节掩码
      |    input         sign,       // 是否有符号
      |    input  [31:0] wdata,      
      |    output reg [31:0] rdata   
      |);
      |
      |    always @(posedge clock) begin
      |        if (wen) begin
      |            vaddr_write(addr, mask, wdata);  // 调用DPI-C写函数
      |        end
      |    end
      |
      |    always @(*) begin
      |        if (ren) begin
      |            rdata = vaddr_read(sign, addr, mask); // 调用DPI-C读函数
      |        end else begin
      |            rdata = 32'b0;
      |        end
      |    end
      |endmodule
      |
    """.stripMargin)
}

class MEM extends Module {
  val io = IO(new Bundle {
    val ex_i = Input(new EX_IO)
    val stallReq  = Output(Bool())
    val except = Output(new ExceptInfoIO)
    val csrHasInt = Input(Bool())
    val csrBusy = Input(Bool())
    val mem_o = Output(new MEM_IO)
  })

  // 解码加载/存储单元操作
  val (wen: Bool) ::(ren: Bool):: width :: (signed: Bool) :: Nil = ListLookup(io.ex_i.lsuOp, DEFAULT, TABLE)

  val addr = Cat(io.ex_i.reg.data(31, 2), 0.U(2.W)) // 地址对齐
  val sel = io.ex_i.reg.data(1, 0)

  // 写使能
  val selWord = "b1111".U(4.W)
  val writeEn = MuxLookup(width, 0.U, Seq(
    LS_DATA_BYTE -> ("b1".U(4.W) << sel),
    LS_DATA_HALF -> ("b11".U(4.W) << sel),
    LS_DATA_WORD -> selWord,
  ))
  val ramWen = Mux(wen, writeEn, selWord)

  // 写数据逻辑
  def mapWriteData(i: Int, w: Int) =
    (i * w / 8).U -> (io.ex_i.lsuData << (i * w))
  val byteSeq = 0 until 4 map { i => mapWriteData(i, 8) }
  val halfSeq = 0 until 2 map { i => mapWriteData(i, 16) }
  val wordSeq = 0 until 1 map { i => mapWriteData(i, 32) }
  val lsuData = MuxLookup(width, 0.U, Seq(
    LS_DATA_BYTE -> MuxLookup(sel, 0.U, byteSeq),
    LS_DATA_HALF -> MuxLookup(sel, 0.U, halfSeq),
    LS_DATA_WORD -> MuxLookup(sel, 0.U, wordSeq),
  ))
  val wdata = lsuData

  // 实例化DPI-C模块
  val mem = Module(new awrite)

  // 连接DPI-C模块的信号
  mem.io.clock := clock
  mem.io.wen := wen                // 写使能信号
  mem.io.ren := !wen && ren        // 读使能信号
  mem.io.addr := addr              // 地址
  mem.io.mask := ramWen            // 掩码
  mem.io.sign := signed            // 有符号/无符号
  mem.io.wdata := wdata            // 写入数据

  // 从DPI-C模块读取数据
  val loadData = mem.io.rdata
  val reg_data = Mux(ren, loadData, io.ex_i.reg.data)

  // 地址对齐检查
  val memAddr = MuxLookup(width, false.B, Seq(
    LS_DATA_BYTE -> false.B,
    LS_DATA_HALF -> (sel(0) =/= 0.U),
    LS_DATA_WORD -> (sel(1, 0) =/= 0.U),
  ))
  val memExcept = memAddr || false.B  // 根据需求添加额外的地址错误检查

  // 异常处理逻辑
  val instAddr  = io.ex_i.excType === EXC_IADDR
  val instIllg  = io.ex_i.excType === EXC_ILLEG
  val excMem    = io.ex_i.excType === EXC_LOAD && memExcept
  val excOther  = io.ex_i.excType === EXC_ECALL || io.ex_i.excType === EXC_EBRK

  val hasTrap   = instAddr || instIllg || excMem || excOther || io.csrHasInt
  val cause     = MuxLookup(io.ex_i.excType, 0.U, Seq(
    EXC_ECALL -> EXC_M_ECALL,
    EXC_EBRK  -> EXC_BRK_POINT,
    EXC_LOAD  -> Mux(memAddr, EXC_LOAD_ADDR, EXC_LOAD_PAGE)
  ))
  val excCause  = Mux(instIllg, EXC_ILL_INST, Mux(instAddr, EXC_INST_ADDR, cause))
  val excPc     = io.ex_i.currentPc
  val excValue  = Mux(instIllg, io.ex_i.inst, Mux(memExcept, io.ex_i.reg.data, io.ex_i.excValue))

  // Exception output
  io.except.excPc := excPc
  io.except.hasTrap := hasTrap
  io.except.excCause := excCause
  io.except.excValue := excValue
  io.except.isMret := false.B
  io.except.isSret := false.B

  // Stall 请求信号
  io.stallReq := (wen && !mem.io.wen) || (ren && !mem.io.ren) || io.csrBusy

  // 更新内存输出
  io.mem_o.currentPc := io.ex_i.currentPc
  io.mem_o.reg.en := io.ex_i.reg.en
  io.mem_o.reg.addr := io.ex_i.reg.addr
  io.mem_o.reg.data := reg_data
  io.mem_o.csr <> io.ex_i.csr
}
