
import "DPI-C" function void set_gpr_ptr(
    input int dut_x0, input int dut_x1, input int dut_x2, input int dut_x3, input int dut_x4, input int dut_x5,
    input int dut_x6, input int dut_x7, input int dut_x8, input int dut_x9, input int dut_x10, input int dut_x11, input int dut_x12,
    input int dut_x13, input int dut_x14, input int dut_x15, input int dut_x16, input int dut_x17, input int dut_x18, input int dut_x19,
    input int dut_x20, input int dut_x21, input int dut_x22, input int dut_x23, input int dut_x24, input int dut_x25, input int dut_x26,
    input int dut_x27, input int dut_x28, input int dut_x29, input int dut_x30, input int dut_x31
    
);
  import "DPI-C" function void get_diff_commit(input bit commit);

module DpiBlackBox (
    input        wb_commit,
    input [31:0] s_regs_0,
    input [31:0] s_regs_1,
    input [31:0] s_regs_2,
    input [31:0] s_regs_3,
    input [31:0] s_regs_4,
    input [31:0] s_regs_5,
    input [31:0] s_regs_6,
    input [31:0] s_regs_7,
    input [31:0] s_regs_8,
    input [31:0] s_regs_9,
    input [31:0] s_regs_10,
    input [31:0] s_regs_11,
    input [31:0] s_regs_12,
    input [31:0] s_regs_13,
    input [31:0] s_regs_14,
    input [31:0] s_regs_15,
    input [31:0] s_regs_16,
    input [31:0] s_regs_17,
    input [31:0] s_regs_18,
    input [31:0] s_regs_19,
    input [31:0] s_regs_20,
    input [31:0] s_regs_21,
    input [31:0] s_regs_22,
    input [31:0] s_regs_23,
    input [31:0] s_regs_24,
    input [31:0] s_regs_25,
    input [31:0] s_regs_26,
    input [31:0] s_regs_27,
    input [31:0] s_regs_28,
    input [31:0] s_regs_29,
    input [31:0] s_regs_30,
    input [31:0] s_regs_31
);
  always @(*) begin
    set_gpr_ptr( s_regs_0, s_regs_1, s_regs_2, s_regs_3, s_regs_4, s_regs_5, s_regs_6, s_regs_7, s_regs_8, s_regs_9,
                 s_regs_10, s_regs_11, s_regs_12, s_regs_13, s_regs_14, s_regs_15, s_regs_16, s_regs_17, s_regs_18, s_regs_19,
                 s_regs_20, s_regs_21, s_regs_22, s_regs_23, s_regs_24, s_regs_25, s_regs_26, s_regs_27, s_regs_28, s_regs_29,
                 s_regs_30, s_regs_31);
    get_diff_commit(wb_commit);
  end
 
endmodule
      