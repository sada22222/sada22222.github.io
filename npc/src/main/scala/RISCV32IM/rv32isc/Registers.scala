package rv32isc

import chisel3._
import chisel3.util._

import config.Configs._



class Registers extends Module{
    val io=IO(new Bundle {
        val wen=Input(Bool())
        val waddr=Input(UInt(5.W))
        val wdata=Input(UInt(32.W))
        val rdaddr1_i=Input(UInt(5.W))
        val rdaddr2_i=Input(UInt(5.W))
        val rdata1_o=Output(UInt(32.W))
        val rdata2_o=Output(UInt(32.W))
    })

    val regs = RegInit(VecInit(Seq.fill(32)(0.U(32.W))))

    when(io.wen && io.waddr =/= 0.U) {
        regs(io.waddr) := io.wdata
    }


    when (io.rdaddr1_i === 0.U) {
        io.rdata1_o := 0.U
    } .elsewhen (io.rdaddr1_i=== io.waddr ) {
        io.rdata1_o := io.wdata
    } .otherwise {
        io.rdata1_o := regs(io.rdaddr1_i)
    }

    when (io.rdaddr2_i === 0.U) {
        io.rdata2_o := 0.U
    } .elsewhen (io.rdaddr2_i=== io.waddr ) {
        io.rdata2_o := io.wdata
    } .otherwise {
        io.rdata2_o := regs(io.rdaddr2_i)
    }




        



}

