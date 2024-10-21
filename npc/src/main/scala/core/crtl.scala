package npc.core
import chisel3._
import configs.ExceptInfoIO
class crtl extends Module{
  val io=IO(new Bundle() {
    val if_stall=Input(Bool())
    val id_flush=Input(Bool())
    val id_flushpc=Input(UInt(32.W))
    val ex_stall=Input(Bool())
    val mem_stall=Input(Bool())
    val loadflag=Input(Bool())
    val csrflag =Input(Bool())
    val except = Input(new ExceptInfoIO)
    val csrSepc   = Input(UInt(32.W))
    val csrMepc   = Input(UInt(32.W))
    val csrTvec   = Input(UInt(32.W))

    val stallIf   = Output(Bool())
    val stallId   = Output(Bool())
    val stallEx   = Output(Bool())
    val stallMm   = Output(Bool())
    val stallWb   = Output(Bool())
    // flush signals
    val flush     = Output(Bool())
    val flushIf   = Output(Bool())
    val flushPc   = Output(UInt(32.W))

  })
  val stall = Mux(io.mem_stall,                      "b11110".U(5.W),
              Mux(io.csrflag||io.ex_stall,           "b11100".U(5.W),
              Mux(io.loadflag,                       "b11000".U(5.W),
              Mux(io.if_stall,                       "b10000".U(5.W), 0.U))))
  val excPc   = Mux(io.except.isSret, io.csrSepc,
                Mux(io.except.isMret, io.csrMepc, io.csrTvec))

  val flushPc   = Mux(io.except.hasTrap, excPc,io.id_flushpc)

  io.stallIf  := stall(4)
  io.stallId  := stall(3)
  io.stallEx  := stall(2)
  io.stallMm  := stall(1)
  io.stallWb  := stall(0)

  io.flush    := io.except.hasTrap
  io.flushIf  := io.except.hasTrap || io.id_flush
  io.flushPc  := flushPc

}
