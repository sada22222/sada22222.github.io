package rv32isc

import chisel3._
import chisel3.util._
import utils._
import config.Configs._


class MEM extends Module{
    val io=IO(new Bundle{

        val ex_i=Flipped(new exu)
        //OUTPUT to outside
        val mem_access_misaligned_o = Output(Bool())
        val mem_stall_o = Output(Bool())
        val mem_addr_o = Output(UInt(32.W))
        val mem_mem_we_o = Output(Bool())
        val mem_be_o = Output(UInt(4.W))
        val mem_req_o = Output(Bool())
        //from rom
        val mem_rdata_i=Input(UInt(32.W))
        val mem_gnt_i=Input(Bool())
        val mem_rvalid_i=Input(Bool())

        val mem_o=(new memu)

    })

    io.mem_o.inst:=io.ex_i.inst
    io.mem_o.inst_valid:=io.ex_i.inst_valid
    io.mem_o.pc:=io.ex_i.pc    
    io.mem_o.rd_we:=io.ex_i.rd_we
    io.mem_o.rd_waddr:=io.ex_i.rd_waddr
    io.mem_o.req_alu:=io.ex_i.req_alu
    io.mem_o.alu_res:=io.ex_i.alu_res
    io.mem_o.bjp_op_jump:=io.ex_i.bjp_op_jump
    io.mem_o.bjp_res:=io.ex_i.bjp_res
    io.mem_o.muldiv_reg_we:=io.ex_i.muldiv_reg_we_o
    io.mem_o.muldiv_reg_wdata:=io.ex_i.muldiv_reg_wdata_o
    io.mem_o.csr_reg_we:=io.ex_i.csr_reg_we
    io.mem_o.csr_reg_wdata:=io.ex_i.csr_rdata_o



    val mem_addr_i=Wire(UInt(32.W))
    mem_addr_i:=Mux(io.ex_i.req_mem_o,io.ex_i.mem_op1_o+io.ex_i.mem_op2_o,0.U)

    val mem_addr_index=Wire(UInt(2.W))
    val mem_addr_index00 = Wire(Bool())
    val mem_addr_index01 = Wire(Bool())
    val mem_addr_index10 = Wire(Bool())
    val mem_addr_index11 = Wire(Bool())

    mem_addr_index:=mem_addr_i(1,0)
    mem_addr_index00 := mem_addr_index === "b00".U
    mem_addr_index01 := mem_addr_index === "b01".U
    mem_addr_index10 := mem_addr_index === "b10".U
    mem_addr_index11 := mem_addr_index === "b11".U

    io.mem_be_o := WireInit(0.U(4.W))

    io.mem_be_o := Cat(
        (mem_addr_index11 | (io.ex_i.mem_op_sh_o & mem_addr_index10) | io.ex_i.mem_op_sw_o),
        (mem_addr_index10 | io.ex_i.mem_op_sw_o),
        (mem_addr_index01 | (io.ex_i.mem_op_sh_o & mem_addr_index00) | io.ex_i.mem_op_sw_o),
        (mem_addr_index00 | io.ex_i.mem_op_sw_o)
        )

    val sb_res= WireDefault(0.U(32.W))

    sb_res := MuxLookup(true.B, 0.U(32.W), Seq(
    mem_addr_index00 -> Cat(0.U(24.W), io.ex_i.mem_rs2_data_o(7, 0)),
    mem_addr_index01 -> Cat(0.U(16.W), io.ex_i.mem_rs2_data_o(7, 0), 0.U(8.W)),
    mem_addr_index10 -> Cat(0.U(8.W), io.ex_i.mem_rs2_data_o(7, 0), 0.U(16.W)),
    mem_addr_index11 -> Cat(io.ex_i.mem_rs2_data_o(7, 0), 0.U(24.W))
    ))

    val sh_res = MuxLookup(true.B, 0.U(32.W), Seq(
     mem_addr_index00 -> Cat(0.U(16.W), io.ex_i.mem_rs2_data_o(15, 0)),
     mem_addr_index10 -> Cat(io.ex_i.mem_rs2_data_o(15, 0), 0.U(16.W))
    ))

    val sw_res = io.ex_i.mem_rs2_data_o

    val lb_res = MuxLookup(true.B, 0.U(32.W), Seq(
    mem_addr_index00 -> Cat(Fill(24, io.mem_rdata_i(7)), io.mem_rdata_i(7, 0)),
    mem_addr_index01 -> Cat(Fill(24, io.mem_rdata_i(15)), io.mem_rdata_i(15, 8)),
    mem_addr_index10 -> Cat(Fill(24, io.mem_rdata_i(23)), io.mem_rdata_i(23, 16)),
    mem_addr_index11 -> Cat(Fill(24, io.mem_rdata_i(31)), io.mem_rdata_i(31, 24))
    ))

    val lh_res = MuxLookup(true.B, 0.U(32.W), Seq(
    mem_addr_index00 -> Cat(Fill(16, io.mem_rdata_i(15)), io.mem_rdata_i(15, 0)),
    mem_addr_index10 -> Cat(Fill(16, io.mem_rdata_i(31)), io.mem_rdata_i(31, 16))
    ))

    val lw_res = io.mem_rdata_i

    val mem_wdata = MuxLookup(true.B, 0.U(32.W), Seq(
    io.ex_i.mem_op_sb_o -> sb_res,
    io.ex_i.mem_op_sh_o -> sh_res,
    io.ex_i.mem_op_sw_o -> sw_res,
    io.ex_i.mem_op_lb_o -> lb_res,
    io.ex_i.mem_op_lbu_o -> sb_res,
    io.ex_i.mem_op_lh_o -> sb_res,
    io.ex_i.mem_op_lhu_o -> sb_res,
    io.ex_i.mem_op_lw_o -> sb_res
    ))
     io.mem_o.mem_wdata :=mem_wdata
    val op_load= io.ex_i.mem_op_lb_o | io.ex_i.mem_op_lh_o | io.ex_i.mem_op_lw_o | io.ex_i.mem_op_lbu_o | io.ex_i.mem_op_lhu_o
    val op_store= io.ex_i.mem_op_sb_o | io.ex_i.mem_op_sh_o | io.ex_i.mem_op_sw_o

    val sIdle :: sWaitRead :: sWaitWrite :: Nil = Enum(3)
    val state_q,state_d = RegInit(sIdle)

    val mem_stall_d = WireInit(false.B)
    val mem_reg_we_d = WireInit(false.B)
    val mem_mem_we_d = WireInit(false.B)
    val req_mem_d = WireInit(false.B)

    switch (state_q) {
        is (sIdle) {
            when (io.ex_i.req_mem_o) {
                mem_stall_d := true.B
                req_mem_d := true.B
                when (io.mem_gnt_i) {
                    when (op_load) {
                        state_d := sWaitRead
                    } .elsewhen (op_store) {
                        state_d := sWaitWrite
                        mem_mem_we_d := true.B
                    }
                }
            }
        }
        is (sWaitRead) {
            mem_stall_d := true.B
            when (io.mem_rvalid_i) {
                state_d := sIdle
                mem_reg_we_d := true.B
                mem_stall_d := false.B
            }
        }
        is (sWaitWrite) {
            mem_stall_d := true.B
            when (io.mem_rvalid_i) {
                state_d := sIdle
                mem_stall_d := false.B
            }
        }
    }

    state_q := state_d
    io.mem_stall_o := mem_stall_d
    io.mem_o.mem_reg_we := mem_reg_we_d
    io.mem_mem_we_o := mem_mem_we_d
    io.mem_req_o := req_mem_d
    io.mem_addr_o:=mem_addr_i
    io.mem_access_misaligned_o:=Mux(io.ex_i.mem_op_sw_o|io.ex_i.mem_op_lw_o,mem_addr_i(0)|mem_addr_i(1),
                                Mux(io.ex_i.mem_op_sh_o|io.ex_i.mem_op_lh_o|io.ex_i.mem_op_lhu_o,mem_addr_i(0),0.U))
}