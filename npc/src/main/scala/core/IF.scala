package npc.core

import chisel3._
import chisel3.util._
import configs.IF_IO
import axi.AxiLiteMaster

class IF extends Module {
  val io = IO(new Bundle {
    val axi = new AxiLiteMaster

    val flush = Input(Bool())
    val flush_pc = Input(UInt(32.W))
    val stall = Input(Bool())

    val stallreq = Output(Bool())
    val IF = Output(new IF_IO)

    val bputake = Output(Bool())
    val bpuaddr = Output(UInt(32.W))
    val state = Output(UInt(32.W))
  })

  // 初始 PC
  val pc = RegInit("h20000000".U(32.W))
  val nextPc = WireInit("h20000000".U(32.W))

  // 状态定义
  val sIdle :: sWaitReq :: sWaitRsp :: Nil = Enum(3)
  val state = RegInit(sIdle)

  // 初始化 AXI Lite 信号（写通道未使用）
  io.axi.master_awvalid := false.B
  io.axi.master_awaddr := 0.U
  io.axi.master_awid := 0.U
  io.axi.master_awlen := 0.U
  io.axi.master_awsize := 0.U
  io.axi.master_awburst := 0.U

  io.axi.master_wvalid := false.B
  io.axi.master_wdata := 0.U
  io.axi.master_wstrb := 0.U
  io.axi.master_wlast := false.B

  io.axi.master_bready := false.B

  // 读通道信号初始化
  io.axi.master_arvalid := false.B
  io.axi.master_araddr := 0.U
  io.axi.master_arid := 0.U
  io.axi.master_arlen := 0.U
  io.axi.master_arsize := "b010".U // 32-bit
  io.axi.master_arburst := "b01".U // INCR burst

  io.axi.master_rready := false.B

  // 握手信号
  val ar_hs = io.axi.master_arvalid && io.axi.master_arready // 读地址握手
  val r_hs = io.axi.master_rvalid && io.axi.master_rready // 读数据握手

  // 分支预测模块
  val bpu = Module(new BPU)
  bpu.io.inst_i := Mux(r_hs, io.axi.master_rdata, "h13".U)
  bpu.io.inst_valid_i := (state === sWaitRsp && r_hs) // 读数据成功
  bpu.io.pc_i := pc
  io.bputake := bpu.io.prdt_taken_o
  io.bpuaddr := bpu.io.prdt_addr_o

  // 状态机逻辑
  switch(state) {
    is(sIdle) {
      when(io.stall || io.flush) { state := state }.otherwise { state := sWaitReq }
    }
    is(sWaitReq) {
      when(ar_hs) { state := sWaitRsp } // 等待数据响应
    }
    is(sWaitRsp) {
      when(r_hs) { state := sIdle } // 数据响应接收完毕
    }
  }

  io.state := state

  // PC 更新逻辑
  nextPc := Mux(io.flush, io.flush_pc,
    Mux(io.stall, pc,
      Mux(bpu.io.prdt_taken_o, bpu.io.prdt_addr_o,
        Mux(r_hs, pc + 4.U, pc))))

  pc := nextPc

  // 错误检测
  val misaligned = pc(1, 0) =/= 0.U

  // AXI Lite 读通道信号
  io.axi.master_arvalid :=(state =/= sIdle)
  io.axi.master_araddr := pc
  io.axi.master_arid := 0.U
  io.axi.master_arlen := 0.U
  io.axi.master_rready :=  (state === sWaitRsp)

  // 停止请求信号
  io.stallreq := false.B

  // 输出到 IF 阶段
  io.IF.pc := pc
  io.IF.valid := (state === sWaitRsp && r_hs) // 读数据成功
  io.IF.inst := Mux(r_hs, io.axi.master_rdata, "h13".U)
  io.IF.bpu_take := bpu.io.prdt_taken_o
  io.IF.bpu_takepc := bpu.io.prdt_addr_o
  io.IF.misaligned := misaligned
}
