module DpiModule (
    input logic i_rst_n,
    input logic wbu_commit,
    input logic wbu_nop,
    input logic s_wbu_device,
    input logic iru_intr,
    input logic s_wbu_lsclint,
    input int s_wbu_ins,
    input logic s_a0zero,
    input longint wbu_pc,
    input longint s_regs [0:31],
    input longint mstatus,
    input longint mtvec,
    input longint mepc,
    input longint s_mcause
);

    // Import DPI-C functions
    import "DPI-C" function void check_rst(input bit rst_flag);
    import "DPI-C" function void get_diff_skip(input bit skip);
    import "DPI-C" function void get_diff_commit(input bit commit);
    import "DPI-C" function void check_finsih(input int ins, input bit a0zero);
    import "DPI-C" function void get_dut_regs(
        input longint dut_pc,
        input longint dut_x0, input longint dut_x1, input longint dut_x2, input longint dut_x3,
        input longint dut_x4, input longint dut_x5, input longint dut_x6, input longint dut_x7,
        input longint dut_x8, input longint dut_x9, input longint dut_x10, input longint dut_x11,
        input longint dut_x12, input longint dut_x13, input longint dut_x14, input longint dut_x15,
        input longint dut_x16, input longint dut_x17, input longint dut_x18, input longint dut_x19,
        input longint dut_x20, input longint dut_x21, input longint dut_x22, input longint dut_x23,
        input longint dut_x24, input longint dut_x25, input longint dut_x26, input longint dut_x27,
        input longint dut_x28, input longint dut_x29, input longint dut_x30, input longint dut_x31,
        input longint dut_mstatus, input longint dut_mtvec, input longint dut_mepc, input longint dut_mcause
    );

    // Wire to calculate real_commit signal
    wire real_commit = wbu_commit & !wbu_nop;

    // Always block to call DPI-C functions
    always @(*) begin
        check_rst(i_rst_n);  // Call DPI-C function to check reset flag
        get_diff_skip(s_wbu_device | iru_intr | s_wbu_lsclint);  // Call DPI-C function to skip diff
        get_diff_commit(real_commit);  // Call DPI-C function to commit diff
        check_finsih(s_wbu_ins, s_a0zero);  // Call DPI-C function to check finish

        // Call DPI-C function to pass register values
        get_dut_regs(
            wbu_pc, s_regs[0], s_regs[1], s_regs[2], s_regs[3], s_regs[4], s_regs[5],
            s_regs[6],  s_regs[7],  s_regs[8],  s_regs[9],  s_regs[10], s_regs[11], s_regs[12],
            s_regs[13], s_regs[14], s_regs[15], s_regs[16], s_regs[17], s_regs[18], s_regs[19],
            s_regs[20], s_regs[21], s_regs[22], s_regs[23], s_regs[24], s_regs[25], s_regs[26],
            s_regs[27], s_regs[28], s_regs[29], s_regs[30], s_regs[31], mstatus,    mtvec, mepc, s_mcause
        );
    end

endmodule
