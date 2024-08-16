package rv32isc


import chisel3._
import chisel3.util._
import config.Configs._
import utils._


class Exception extends Module {
    val io = IO(new Bundle {
        val inst_valid_i = Input(Bool())
        val inst_executed_i = Input(Bool())
        val inst_ecall_i = Input(Bool())
        val inst_ebreak_i = Input(Bool())
        val inst_mret_i = Input(Bool())
        val inst_dret_i = Input(Bool())
        val inst_addr_i = Input(UInt(32.W))
        val illegal_inst_i = Input(Bool())
        val mtvec_i = Input(UInt(32.W))
        val mepc_i = Input(UInt(32.W))
        val mstatus_i = Input(UInt(32.W))
        val mie_i = Input(UInt(32.W))
        val dpc_i = Input(UInt(32.W))
        val dcsr_i = Input(UInt(32.W))
        val int_req_i = Input(Bool())
        val int_id_i = Input(UInt(8.W))
        val trigger_match_i = Input(Bool())
        val debug_halt_addr_i = Input(UInt(32.W))
        val debug_req_i = Input(Bool())
        val csr_we_o = Output(Bool())
        val csr_waddr_o = Output(UInt(32.W))
        val csr_wdata_o = Output(UInt(32.W))
        val stall_flag_o = Output(Bool())
        val int_addr_o = Output(UInt(32.W))
        val int_assert_o = Output(Bool())
    })


    val ILLEGAL_INSTR_OFFSET = 0
    val INSTR_ADDR_MISA_OFFSET = 4
    val ECALL_OFFSET = 8
    val EBREAK_OFFSET = 12
    val LOAD_MISA_OFFSET = 16
    val STORE_MISA_OFFSET = 20
    val RESERVED1_EXCEPTION_OFFSET = 24
    val RESERVED2_EXCEPTION_OFFSET = 28
    // Interrupt offset
    val INT_OFFSET = 32

    // States
    val S_IDLE = "b00001".U(5.W)
    val S_W_MEPC = "b00010".U(5.W)
    val S_W_DCSR = "b00100".U(5.W)
    val S_ASSERT = "b01000".U(5.W)
    val S_W_MSTATUS = "b10000".U(5.W)

    // Registers
    val debug_mode_d = RegInit(false.B)
    val debug_mode_q = RegInit(false.B)
    val state_d = RegInit(S_IDLE)
    val state_q = RegInit(S_IDLE)
    val assert_addr_d = RegInit(0.U(32.W))
    val assert_addr_q = RegInit(0.U(32.W))
    val return_addr_d = RegInit(0.U(32.W))
    val return_addr_q = RegInit(0.U(32.W))
    val trigger_match_d = RegInit(false.B)
    val trigger_match_q = RegInit(false.B)
    val csr_we = RegInit(false.B)
    val csr_waddr = RegInit(0.U(32.W))
    val csr_wdata = RegInit(0.U(32.W))

    val int_id_d = RegInit(0.U(8.W))
    val int_id_q = RegInit(0.U(8.W))
    val in_irq_context_d = RegInit(false.B)
    val in_irq_context_q = RegInit(false.B)
    val global_int_en = Wire(Bool())
    val interrupt_req_valid = Wire(Bool())

    global_int_en := io.mstatus_i(3)
    interrupt_req_valid := io.inst_valid_i && io.int_req_i && ((io.int_id_i =/= int_id_q) || !in_irq_context_q)

    // 异常请求的寄存器和原因
    val exception_req = RegInit(false.B)
    val exception_cause = RegInit(0.U(32.W))

    when(io.illegal_inst_i) {
        exception_req := true.B
        exception_cause := "h0".U
    }.elsewhen(io.inst_ecall_i && io.inst_valid_i) {
        exception_req := true.B
        exception_cause := "h2".U
    }.otherwise {
        exception_req := false.B
        exception_cause := "h0".U
    }

    // 将异常请求和中断请求的有效性组合
    val int_or_exception_req = (interrupt_req_valid && global_int_en && !debug_mode_q) || exception_req
    val int_or_exception_cause= Mux(exception_req, exception_cause, "h8".U + Cat(0.U(24.W), io.int_id_i))

    // 同步触发条件检测模块的使用
    val trigger_matching = Wire(Bool())
    val genTriggerSync = Module(new Delay(UInt(1.W), 5))
    genTriggerSync.io.in := trigger_match_q
    trigger_matching := genTriggerSync.io.out

    // 调试原因的寄存器
    val enter_debug_cause_debugger_req = RegInit(false.B)
    val enter_debug_cause_single_step = RegInit(false.B)
    val enter_debug_cause_ebreak = RegInit(false.B)
    val enter_debug_cause_reset_halt = RegInit(false.B)
    val enter_debug_cause_trigger = RegInit(false.B)
    val dcsr_cause_d = RegInit(DCSR_CAUSE_NONE)
    val dcsr_cause_q = RegInit(DCSR_CAUSE_NONE)


    // Combinational logic for setting the debug causes
    when(io.trigger_match_i && io.inst_valid_i && !trigger_matching) {
        enter_debug_cause_trigger       :=true.B
        dcsr_cause_d            := DCSR_CAUSE_TRIGGER
    }.elsewhen(io.inst_ebreak_i && io.inst_valid_i) {
        enter_debug_cause_ebreak       := true.B
        dcsr_cause_d            := DCSR_CAUSE_EBREAK
    }.elsewhen(io.inst_addr_i === 0.U && io.inst_valid_i && io.debug_req_i) {
        enter_debug_cause_reset_halt       := true.B
        dcsr_cause_d            := DCSR_CAUSE_HALT
    }.elsewhen(!debug_mode_q && io.debug_req_i && io.inst_valid_i) {
        enter_debug_cause_debugger_req       := true.B
        dcsr_cause_d            := DCSR_CAUSE_DBGREQ
    }.elsewhen(!debug_mode_q && io.dcsr_i(2) && io.inst_valid_i && io.inst_executed_i) {
        enter_debug_cause_single_step       := true.B
        dcsr_cause_d            := DCSR_CAUSE_STEP
    }
    val debug_mode_req = enter_debug_cause_debugger_req ||
        enter_debug_cause_single_step ||
        enter_debug_cause_reset_halt ||
        enter_debug_cause_trigger ||
        enter_debug_cause_ebreak

    // Calculate stall flag output
    io.stall_flag_o := (!state_q === S_IDLE) &&
        (!state_q === S_ASSERT) ||
        int_or_exception_req ||
        debug_mode_req ||
        io.inst_mret_i ||
        io.inst_dret_i

    state_d := state_q
    assert_addr_d := assert_addr_q
    debug_mode_d := debug_mode_q
    return_addr_d := return_addr_q
    csr_we := false.B  // Equivalent to '1'b0;
    csr_waddr := 0.U(32.W)  // Equivalent to '32'h0, makes sure it's a 32 bit signal
    csr_wdata := 0.U(32.W)  // Equivalent to '32'h0, makes sure it's a 32 bit signal
    trigger_match_d := trigger_match_q
    int_id_d := int_id_q
    in_irq_context_d := in_irq_context_q

    switch(state_q) {
        is(S_IDLE) {
            when(int_or_exception_req && !debug_mode_q) {
                csr_we := true.B
                csr_waddr := Cat(0.U(20.W), CSR_MCAUSE)
                csr_wdata := int_or_exception_cause
                assert_addr_d := io.mtvec_i
                return_addr_d := io.inst_addr_i
                state_d := S_W_MSTATUS
                int_id_d := io.int_id_i
                in_irq_context_d := true.B
            }.elsewhen(debug_mode_req) {
                debug_mode_d := true.B
                when(enter_debug_cause_debugger_req || enter_debug_cause_single_step || enter_debug_cause_trigger || enter_debug_cause_reset_halt) {
                    csr_we := true.B
                    csr_waddr := Cat(0.U(20.W), CSR_DPC)
                    csr_wdata := Mux(enter_debug_cause_reset_halt, 0.U, io.inst_addr_i)
                }
                when (enter_debug_cause_trigger) {
                    trigger_match_d := true.B
                }
                assert_addr_d := io.debug_halt_addr_i
                when (enter_debug_cause_ebreak) {
                    state_d := S_ASSERT
                } .otherwise {
                    state_d := S_W_DCSR
                }
            }.elsewhen(io.inst_mret_i) {
                in_irq_context_d := false.B
                assert_addr_d := io.mepc_i
                csr_we := true.B
                csr_waddr := Cat(0.U(20.W), CSR_MSTATUS)
                csr_wdata := Cat(io.mstatus_i(31,4), true.B, io.mstatus_i(2,0))
                state_d := S_ASSERT
            }.elsewhen(io.inst_dret_i) {
                assert_addr_d := io.dpc_i
                state_d := S_ASSERT
                debug_mode_d := false.B
                trigger_match_d := false.B
            }
        }

        is(S_W_MSTATUS) {
            csr_we := true.B
            csr_waddr := Cat(0.U(20.W), CSR_MSTATUS)
            csr_wdata := Cat(io.mstatus_i(31,4), false.B, io.mstatus_i(2,0))
            state_d := S_W_MEPC
        }

        is(S_W_MEPC) {
            csr_we := true.B
            csr_waddr := Cat(0.U(20.W), CSR_MEPC)
            csr_wdata := return_addr_q
            state_d := S_ASSERT
        }

        is(S_W_DCSR) {
            csr_we := true.B
            csr_waddr := Cat(0.U(20.W), CSR_DCSR)
            csr_wdata := Cat(io.dcsr_i(31,9), dcsr_cause_q, io.dcsr_i(5,0))
            state_d := S_ASSERT
        }

        is(S_ASSERT) {
            csr_we := false.B
            state_d := S_IDLE
        }
    }

    io.csr_we_o := csr_we
    io.csr_waddr_o := csr_waddr
    io.csr_wdata_o := csr_wdata
    io.int_assert_o := (state_q === S_ASSERT)
    io.int_addr_o := assert_addr_q



            state_q := state_d
            assert_addr_q := assert_addr_d
            debug_mode_q := debug_mode_d
            return_addr_q := return_addr_d
            dcsr_cause_q := dcsr_cause_d
            trigger_match_q := trigger_match_d
            int_id_q := int_id_d
            in_irq_context_q := in_irq_context_d
        
    

}

class Delay[T <: Data](dataType: T, delay: Int) extends Module {
    val io = IO(new Bundle {
        val in  = Input(dataType)
        val out = Output(dataType)
    })

    io.out := ShiftRegister(io.in, delay)
}