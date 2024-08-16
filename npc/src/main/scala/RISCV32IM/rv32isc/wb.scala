package rv32isc
import chisel3._
import chisel3.util._
import utils._
import config.Configs._



class WB extends Module {
    val io = IO(new Bundle {

        val wb_i = Flipped(new memu)

        val reg_we_o = Output(Bool())
        val reg_waddr_o = Output(UInt(5.W))
        val reg_wdata_o = Output(UInt(32.W))
    })



 val reg_wdata = MuxLookup(true.B, 0.U, Seq(
  io.wb_i.muldiv_reg_we -> io.wb_i.muldiv_reg_wdata,
  io.wb_i.mem_reg_we    -> io.wb_i.mem_wdata,
  io.wb_i.csr_reg_we    -> io.wb_i.csr_reg_wdata,
  io.wb_i.bjp_op_jump   -> (io.wb_i.bjp_res + 4.U),
  io.wb_i.req_alu       -> io.wb_i.alu_res
))


    io.reg_wdata_o := reg_wdata
    io.reg_we_o:=io.wb_i.rd_we
    io.reg_waddr_o:=io.wb_i.rd_waddr
}

