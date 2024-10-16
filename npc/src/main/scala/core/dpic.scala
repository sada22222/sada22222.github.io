package core

class DpiBlackBox extends BlackBox {
  // 定义 Verilog 模块的接口
  val io = IO(new Bundle {
    val i_rst_n       = Input(Bool())     // 复位信号
    val wbu_commit    = Input(Bool())     // commit 信号
    val wbu_nop       = Input(Bool())     // nop 信号
    val s_wbu_device  = Input(Bool())     // device 信号
    val iru_intr      = Input(Bool())     // interrupt 信号
    val s_wbu_lsclint = Input(Bool())     // lsc 信号
    val s_wbu_ins     = Input(UInt(32.W)) // 指令
    val s_a0zero      = Input(Bool())     // a0 信号
    val wbu_pc        = Input(UInt(32.W)) // 程序计数器
    val s_regs        = Input(Vec(32, UInt(64.W))) // 32 个寄存器
    val mstatus       = Input(UInt(32.W)) // mstatus
    val mtvec         = Input(UInt(32.W)) // mtvec
    val mepc          = Input(UInt(32.W)) // mepc
    val s_mcause      = Input(UInt(32.W)) // mcause
  })
}