// 定义取指模块
package rv32isc


import chisel3._
import chisel3.util._
import utils._
import config.Configs._

class IFU extends Module {
    val io = IO(new Bundle {
        //
        val flush_i = Input(Bool())
        val flush_addr_i = Input(UInt(32.W))
        val stall_i = Input(UInt(5.W))
        val stallReq=Output(Bool())
        // to id
        val ifu=(new ifu)
        // TO ROM
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

    })
    val bpu = Module(new BEQ())
    bpu.io.inst_i := io.ifu.inst
    bpu.io.inst_valid_i := io.ifu.inst_valid
    bpu.io.pc_i := io.ifu.pc
    // program counter
    val pc = RegInit(0.U)
    // update PC
    val nextPc = Mux(io.flush_i, io.flush_addr_i,
                 Mux(io.stall_i(0), pc,
                 Mux(bpu.io.prdt_taken_o, bpu.io.prdt_addr_o,
                     pc + 4.U)))
    pc := nextPc

    // pipeline control signals
    io.stallReq := !io.valid

      // ROM control signals
    io.en     := true.B
    io.wen    := 0.U
    io.addr   := pc
    io.wdata  := 0.U

    // output signals
    io.ifu.inst_valid   := io.valid
    io.ifu.pc           := pc
    io.ifu.inst:=Mux(io.valid,io.rdata,"h00000013".U(32.W))
}


