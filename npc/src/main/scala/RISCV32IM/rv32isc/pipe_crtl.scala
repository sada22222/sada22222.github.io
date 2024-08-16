package rv32isc


import chisel3._
import chisel3.util._

import config.Configs._
class PipeCtrl extends Module {
    val io = IO(new Bundle {
        val stall_from_if_i = Input(Bool())
        val stall_from_id_i = Input(Bool())
        val stall_from_ex_i = Input(Bool())
        val stall_from_mem_i = Input(Bool())
        val jump_assert_i = Input(Bool())
        val jump_addr_i = Input(UInt(32.W))
        val int_assert_i=Input(Bool())
        val int_addr_i=Input(UInt(32.W))

        val flush_IF_ID = Output(Bool())
        val flush_all = Output(Bool())
        val flush_addr_o = Output(UInt(32.W))
        val stall_o = Output(UInt(5.W))
    })
    val flush_all=io.int_assert_i
    io.flush_all:=flush_all
    io.flush_IF_ID := io.jump_assert_i||flush_all
    io.flush_addr_o := Mux(io.jump_assert_i,io.jump_addr_i,io.int_addr_i)

    val stall = Wire(UInt(4.W))
        stall :=Mux(io.stall_from_mem_i,            "b11110".U(5.W),
                Mux(io.stall_from_ex_i,             "b11100".U(5.W),
                Mux(io.stall_from_id_i,             "b11000".U(5.W),
                Mux(io.stall_from_if_i,             "b10000".U(5.W), 0.U))))
    io.stall_o := stall

}
