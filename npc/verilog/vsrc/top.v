module BPU(
  input  [31:0] io_inst_i,
  input         io_inst_valid_i,
  input  [31:0] io_pc_i,
  output        io_prdt_taken_o,
  output [31:0] io_prdt_addr_o
);
  wire [6:0] opcode = io_inst_i[6:0]; // @[bpu.scala 16:25]
  wire  inst_type_branch = opcode == 7'h63; // @[bpu.scala 18:34]
  wire  inst_jal = opcode == 7'h6f; // @[bpu.scala 19:26]
  wire [19:0] _T_2 = io_inst_i[31] ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12]
  wire [31:0] inst_b_type_imm = {_T_2,io_inst_i[7],io_inst_i[30:25],io_inst_i[11:8],1'h0}; // @[Cat.scala 30:58]
  wire [11:0] _T_11 = io_inst_i[31] ? 12'hfff : 12'h0; // @[Bitwise.scala 72:12]
  wire [31:0] inst_j_type_imm = {_T_11,io_inst_i[19:12],io_inst_i[20],io_inst_i[30:21],1'h0}; // @[Cat.scala 30:58]
  wire [31:0] _GEN_0 = inst_jal ? inst_j_type_imm : 32'h0; // @[bpu.scala 30:24]
  wire [31:0] prdt_imm = inst_type_branch ? inst_b_type_imm : _GEN_0; // @[bpu.scala 28:26]
  wire  _T_19 = inst_type_branch & inst_b_type_imm[31]; // @[bpu.scala 35:38]
  wire  prdt_taken = _T_19 | inst_jal; // @[bpu.scala 35:61]
  assign io_prdt_taken_o = io_inst_valid_i & prdt_taken; // @[bpu.scala 38:19]
  assign io_prdt_addr_o = io_pc_i + prdt_imm; // @[bpu.scala 39:18]
endmodule
module IF(
  input         clock,
  input         reset,
  input         io_axi_master_arready,
  output        io_axi_master_arvalid,
  output [31:0] io_axi_master_araddr,
  output        io_axi_master_rready,
  input         io_axi_master_rvalid,
  input  [31:0] io_axi_master_rdata,
  input         io_flush,
  input  [31:0] io_flush_pc,
  input         io_stall,
  output [31:0] io_IF_pc,
  output        io_IF_valid,
  output [31:0] io_IF_inst,
  output        io_IF_bpu_take,
  output [31:0] io_IF_bpu_takepc,
  output        io_IF_misaligned,
  output        io_bputake,
  output [31:0] io_bpuaddr
);
  wire [31:0] bpu_io_inst_i; // @[IF.scala 62:19]
  wire  bpu_io_inst_valid_i; // @[IF.scala 62:19]
  wire [31:0] bpu_io_pc_i; // @[IF.scala 62:19]
  wire  bpu_io_prdt_taken_o; // @[IF.scala 62:19]
  wire [31:0] bpu_io_prdt_addr_o; // @[IF.scala 62:19]
  reg [31:0] pc; // @[IF.scala 25:19]
  reg [31:0] _RAND_0;
  reg [1:0] state; // @[IF.scala 30:22]
  reg [31:0] _RAND_1;
  wire  ar_hs = io_axi_master_arvalid & io_axi_master_arready; // @[IF.scala 58:37]
  wire  r_hs = io_axi_master_rvalid & io_axi_master_rready; // @[IF.scala 59:35]
  wire  _T_1 = state == 2'h2; // @[IF.scala 64:33]
  wire  _T_3 = 2'h0 == state; // @[Conditional.scala 37:30]
  wire  _T_4 = io_stall | io_flush; // @[IF.scala 72:21]
  wire  _T_5 = 2'h1 == state; // @[Conditional.scala 37:30]
  wire  _T_6 = 2'h2 == state; // @[Conditional.scala 37:30]
  wire [31:0] _T_8 = pc + 32'h4; // @[IF.scala 88:22]
  BPU bpu ( // @[IF.scala 62:19]
    .io_inst_i(bpu_io_inst_i),
    .io_inst_valid_i(bpu_io_inst_valid_i),
    .io_pc_i(bpu_io_pc_i),
    .io_prdt_taken_o(bpu_io_prdt_taken_o),
    .io_prdt_addr_o(bpu_io_prdt_addr_o)
  );
  assign io_axi_master_arvalid = state != 2'h0; // @[IF.scala 48:25 IF.scala 96:25]
  assign io_axi_master_araddr = pc; // @[IF.scala 49:24 IF.scala 97:24]
  assign io_axi_master_rready = state == 2'h2; // @[IF.scala 55:24 IF.scala 100:24]
  assign io_IF_pc = pc; // @[IF.scala 106:12]
  assign io_IF_valid = _T_1 & r_hs; // @[IF.scala 107:15]
  assign io_IF_inst = r_hs ? io_axi_master_rdata : 32'h13; // @[IF.scala 108:14]
  assign io_IF_bpu_take = bpu_io_prdt_taken_o; // @[IF.scala 109:18]
  assign io_IF_bpu_takepc = bpu_io_prdt_addr_o; // @[IF.scala 110:20]
  assign io_IF_misaligned = pc[1:0] != 2'h0; // @[IF.scala 111:20]
  assign io_bputake = bpu_io_prdt_taken_o; // @[IF.scala 66:14]
  assign io_bpuaddr = bpu_io_prdt_addr_o; // @[IF.scala 67:14]
  assign bpu_io_inst_i = r_hs ? io_axi_master_rdata : 32'h13; // @[IF.scala 63:17]
  assign bpu_io_inst_valid_i = _T_1 & r_hs; // @[IF.scala 64:23]
  assign bpu_io_pc_i = pc; // @[IF.scala 65:15]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  pc = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  state = _RAND_1[1:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (reset) begin
      pc <= 32'h80000000;
    end else if (io_flush) begin
      pc <= io_flush_pc;
    end else if (!(io_stall)) begin
      if (bpu_io_prdt_taken_o) begin
        pc <= bpu_io_prdt_addr_o;
      end else if (r_hs) begin
        pc <= _T_8;
      end
    end
    if (reset) begin
      state <= 2'h0;
    end else if (_T_3) begin
      if (!(_T_4)) begin
        state <= 2'h1;
      end
    end else if (_T_5) begin
      if (ar_hs) begin
        state <= 2'h2;
      end
    end else if (_T_6) begin
      if (r_hs) begin
        state <= 2'h0;
      end
    end
  end
endmodule
module MidStage(
  input         clock,
  input         reset,
  input         io_flush,
  input         io_stallPrev,
  input         io_stallNext,
  input  [31:0] io_prev_pc,
  input         io_prev_valid,
  input  [31:0] io_prev_inst,
  input         io_prev_bpu_take,
  input  [31:0] io_prev_bpu_takepc,
  input         io_prev_misaligned,
  output [31:0] io_next_pc,
  output        io_next_valid,
  output [31:0] io_next_inst,
  output        io_next_bpu_take,
  output [31:0] io_next_bpu_takepc,
  output        io_next_misaligned
);
  reg [31:0] ff_pc; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_0;
  reg  ff_valid; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_1;
  reg [31:0] ff_inst; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_2;
  reg  ff_bpu_take; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_3;
  reg [31:0] ff_bpu_takepc; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_4;
  reg  ff_misaligned; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_5;
  wire  _T_1 = ~io_stallNext; // @[MidStage.scala 18:37]
  wire  _T_2 = io_stallPrev & _T_1; // @[MidStage.scala 18:34]
  wire  _T_3 = io_flush | _T_2; // @[MidStage.scala 18:18]
  wire  _T_5 = ~io_stallPrev; // @[MidStage.scala 21:13]
  assign io_next_pc = ff_pc; // @[MidStage.scala 25:11]
  assign io_next_valid = ff_valid; // @[MidStage.scala 25:11]
  assign io_next_inst = ff_inst; // @[MidStage.scala 25:11]
  assign io_next_bpu_take = ff_bpu_take; // @[MidStage.scala 25:11]
  assign io_next_bpu_takepc = ff_bpu_takepc; // @[MidStage.scala 25:11]
  assign io_next_misaligned = ff_misaligned; // @[MidStage.scala 25:11]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  ff_pc = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  ff_valid = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  ff_inst = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  ff_bpu_take = _RAND_3[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  ff_bpu_takepc = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  ff_misaligned = _RAND_5[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (reset) begin
      ff_pc <= 32'h0;
    end else if (_T_3) begin
      ff_pc <= 32'h0;
    end else if (_T_5) begin
      ff_pc <= io_prev_pc;
    end
    if (reset) begin
      ff_valid <= 1'h0;
    end else if (_T_3) begin
      ff_valid <= 1'h0;
    end else if (_T_5) begin
      ff_valid <= io_prev_valid;
    end
    if (reset) begin
      ff_inst <= 32'h0;
    end else if (_T_3) begin
      ff_inst <= 32'h0;
    end else if (_T_5) begin
      ff_inst <= io_prev_inst;
    end
    if (reset) begin
      ff_bpu_take <= 1'h0;
    end else if (_T_3) begin
      ff_bpu_take <= 1'h0;
    end else if (_T_5) begin
      ff_bpu_take <= io_prev_bpu_take;
    end
    if (reset) begin
      ff_bpu_takepc <= 32'h0;
    end else if (_T_3) begin
      ff_bpu_takepc <= 32'h0;
    end else if (_T_5) begin
      ff_bpu_takepc <= io_prev_bpu_takepc;
    end
    if (reset) begin
      ff_misaligned <= 1'h0;
    end else if (_T_3) begin
      ff_misaligned <= 1'h0;
    end else if (_T_5) begin
      ff_misaligned <= io_prev_misaligned;
    end
  end
endmodule
module ID(
  input  [31:0] io_if_i_pc,
  input         io_if_i_valid,
  input  [31:0] io_if_i_inst,
  input         io_if_i_bpu_take,
  input  [31:0] io_if_i_bpu_takepc,
  input         io_if_i_misaligned,
  output        io_read1_en,
  output [4:0]  io_read1_addr,
  input  [31:0] io_read1_data,
  output        io_read2_en,
  output [4:0]  io_read2_addr,
  input  [31:0] io_read2_data,
  input         io_stallid,
  input  [31:0] io_csrread_csr_rdata,
  output [31:0] io_csrread_csr_raddr,
  output [2:0]  io_csrread_csr_op,
  input         io_csrread_csr_valid,
  output        io_flush,
  output [31:0] io_flushpc,
  output [3:0]  io_id_o_aluOp,
  output [31:0] io_id_o_opr1,
  output [31:0] io_id_o_opr2,
  output [3:0]  io_id_o_mduOp,
  output [3:0]  io_id_o_lsuOp,
  output [31:0] io_id_o_lsuData,
  output        io_id_o_regWen,
  output [4:0]  io_id_o_regWaddr,
  output [2:0]  io_id_o_csrOp,
  output [11:0] io_id_o_csrAddr,
  output        io_id_o_csren,
  output [31:0] io_id_o_csrrData,
  output [31:0] io_id_o_csrwData,
  output [3:0]  io_id_o_excType,
  output [31:0] io_id_o_excValue,
  output [31:0] io_id_o_inst,
  output [31:0] io_id_o_currentPc
);
  wire  _T = ~io_if_i_valid; // @[ID.scala 31:20]
  wire [31:0] inst = _T ? 32'h13 : io_if_i_inst; // @[ID.scala 31:19]
  wire [4:0] rd = inst[11:7]; // @[ID.scala 35:17]
  wire [4:0] rs1 = inst[19:15]; // @[ID.scala 36:17]
  wire [4:0] rs2 = inst[24:20]; // @[ID.scala 37:17]
  wire [11:0] immI = inst[31:20]; // @[ID.scala 41:19]
  wire [31:0] _T_18 = inst & 32'hfe00707f; // @[Lookup.scala 31:38]
  wire  _T_19 = 32'h33 == _T_18; // @[Lookup.scala 31:38]
  wire [31:0] _T_20 = inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _T_21 = 32'h13 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_23 = 32'h40000033 == _T_18; // @[Lookup.scala 31:38]
  wire [31:0] _T_24 = inst & 32'h7f; // @[Lookup.scala 31:38]
  wire  _T_25 = 32'h37 == _T_24; // @[Lookup.scala 31:38]
  wire  _T_27 = 32'h17 == _T_24; // @[Lookup.scala 31:38]
  wire  _T_29 = 32'h4033 == _T_18; // @[Lookup.scala 31:38]
  wire  _T_31 = 32'h4013 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_33 = 32'h6033 == _T_18; // @[Lookup.scala 31:38]
  wire  _T_35 = 32'h6013 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_37 = 32'h7033 == _T_18; // @[Lookup.scala 31:38]
  wire  _T_39 = 32'h7013 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_41 = 32'h2033 == _T_18; // @[Lookup.scala 31:38]
  wire  _T_43 = 32'h2013 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_45 = 32'h3033 == _T_18; // @[Lookup.scala 31:38]
  wire  _T_47 = 32'h3013 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_49 = 32'h1033 == _T_18; // @[Lookup.scala 31:38]
  wire  _T_51 = 32'h1013 == _T_18; // @[Lookup.scala 31:38]
  wire  _T_53 = 32'h5033 == _T_18; // @[Lookup.scala 31:38]
  wire  _T_55 = 32'h5013 == _T_18; // @[Lookup.scala 31:38]
  wire  _T_57 = 32'h40005033 == _T_18; // @[Lookup.scala 31:38]
  wire  _T_59 = 32'h40005013 == _T_18; // @[Lookup.scala 31:38]
  wire  _T_61 = 32'h63 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_63 = 32'h1063 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_65 = 32'h4063 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_67 = 32'h5063 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_69 = 32'h6063 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_71 = 32'h7063 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_73 = 32'h6f == _T_24; // @[Lookup.scala 31:38]
  wire  _T_75 = 32'h67 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_77 = 32'h3 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_79 = 32'h1003 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_81 = 32'h2003 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_83 = 32'h4003 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_85 = 32'h5003 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_87 = 32'h23 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_89 = 32'h1023 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_91 = 32'h2023 == _T_20; // @[Lookup.scala 31:38]
  wire [31:0] _T_92 = inst & 32'hf00fffff; // @[Lookup.scala 31:38]
  wire  _T_93 = 32'hf == _T_92; // @[Lookup.scala 31:38]
  wire  _T_95 = 32'h100f == inst; // @[Lookup.scala 31:38]
  wire  _T_97 = 32'h1073 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_99 = 32'h2073 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_101 = 32'h3073 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_103 = 32'h5073 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_105 = 32'h6073 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_107 = 32'h7073 == _T_20; // @[Lookup.scala 31:38]
  wire  _T_109 = 32'h2000033 == _T_18; // @[Lookup.scala 31:38]
  wire  _T_111 = 32'h2001033 == _T_18; // @[Lookup.scala 31:38]
  wire  _T_113 = 32'h2002033 == _T_18; // @[Lookup.scala 31:38]
  wire  _T_115 = 32'h2003033 == _T_18; // @[Lookup.scala 31:38]
  wire  _T_117 = 32'h2004033 == _T_18; // @[Lookup.scala 31:38]
  wire  _T_119 = 32'h2005033 == _T_18; // @[Lookup.scala 31:38]
  wire  _T_121 = 32'h2006033 == _T_18; // @[Lookup.scala 31:38]
  wire  _T_123 = 32'h2007033 == _T_18; // @[Lookup.scala 31:38]
  wire  _T_125 = 32'h73 == inst; // @[Lookup.scala 31:38]
  wire  _T_127 = 32'h100073 == inst; // @[Lookup.scala 31:38]
  wire  _T_129 = 32'h10200073 == inst; // @[Lookup.scala 31:38]
  wire  _T_131 = 32'h30200073 == inst; // @[Lookup.scala 31:38]
  wire  _T_133 = 32'h10500073 == inst; // @[Lookup.scala 31:38]
  wire [31:0] _T_134 = inst & 32'hfe007fff; // @[Lookup.scala 31:38]
  wire  _T_135 = 32'h12000073 == _T_134; // @[Lookup.scala 31:38]
  wire  _T_137 = _T_133 ? 1'h0 : _T_135; // @[Lookup.scala 33:37]
  wire  _T_138 = _T_131 ? 1'h0 : _T_137; // @[Lookup.scala 33:37]
  wire  _T_139 = _T_129 ? 1'h0 : _T_138; // @[Lookup.scala 33:37]
  wire  _T_140 = _T_127 ? 1'h0 : _T_139; // @[Lookup.scala 33:37]
  wire  _T_141 = _T_125 ? 1'h0 : _T_140; // @[Lookup.scala 33:37]
  wire  _T_142 = _T_123 | _T_141; // @[Lookup.scala 33:37]
  wire  _T_143 = _T_121 | _T_142; // @[Lookup.scala 33:37]
  wire  _T_144 = _T_119 | _T_143; // @[Lookup.scala 33:37]
  wire  _T_145 = _T_117 | _T_144; // @[Lookup.scala 33:37]
  wire  _T_146 = _T_115 | _T_145; // @[Lookup.scala 33:37]
  wire  _T_147 = _T_113 | _T_146; // @[Lookup.scala 33:37]
  wire  _T_148 = _T_111 | _T_147; // @[Lookup.scala 33:37]
  wire  _T_149 = _T_109 | _T_148; // @[Lookup.scala 33:37]
  wire  _T_150 = _T_107 ? 1'h0 : _T_149; // @[Lookup.scala 33:37]
  wire  _T_151 = _T_105 ? 1'h0 : _T_150; // @[Lookup.scala 33:37]
  wire  _T_152 = _T_103 ? 1'h0 : _T_151; // @[Lookup.scala 33:37]
  wire  _T_153 = _T_101 | _T_152; // @[Lookup.scala 33:37]
  wire  _T_154 = _T_99 | _T_153; // @[Lookup.scala 33:37]
  wire  _T_155 = _T_97 | _T_154; // @[Lookup.scala 33:37]
  wire  _T_156 = _T_95 ? 1'h0 : _T_155; // @[Lookup.scala 33:37]
  wire  _T_157 = _T_93 ? 1'h0 : _T_156; // @[Lookup.scala 33:37]
  wire  _T_158 = _T_91 | _T_157; // @[Lookup.scala 33:37]
  wire  _T_159 = _T_89 | _T_158; // @[Lookup.scala 33:37]
  wire  _T_160 = _T_87 | _T_159; // @[Lookup.scala 33:37]
  wire  _T_161 = _T_85 | _T_160; // @[Lookup.scala 33:37]
  wire  _T_162 = _T_83 | _T_161; // @[Lookup.scala 33:37]
  wire  _T_163 = _T_81 | _T_162; // @[Lookup.scala 33:37]
  wire  _T_164 = _T_79 | _T_163; // @[Lookup.scala 33:37]
  wire  _T_165 = _T_77 | _T_164; // @[Lookup.scala 33:37]
  wire  _T_166 = _T_75 | _T_165; // @[Lookup.scala 33:37]
  wire  _T_167 = _T_73 ? 1'h0 : _T_166; // @[Lookup.scala 33:37]
  wire  _T_168 = _T_71 | _T_167; // @[Lookup.scala 33:37]
  wire  _T_169 = _T_69 | _T_168; // @[Lookup.scala 33:37]
  wire  _T_170 = _T_67 | _T_169; // @[Lookup.scala 33:37]
  wire  _T_171 = _T_65 | _T_170; // @[Lookup.scala 33:37]
  wire  _T_172 = _T_63 | _T_171; // @[Lookup.scala 33:37]
  wire  _T_173 = _T_61 | _T_172; // @[Lookup.scala 33:37]
  wire  _T_174 = _T_59 | _T_173; // @[Lookup.scala 33:37]
  wire  _T_175 = _T_57 | _T_174; // @[Lookup.scala 33:37]
  wire  _T_176 = _T_55 | _T_175; // @[Lookup.scala 33:37]
  wire  _T_177 = _T_53 | _T_176; // @[Lookup.scala 33:37]
  wire  _T_178 = _T_51 | _T_177; // @[Lookup.scala 33:37]
  wire  _T_179 = _T_49 | _T_178; // @[Lookup.scala 33:37]
  wire  _T_180 = _T_47 | _T_179; // @[Lookup.scala 33:37]
  wire  _T_181 = _T_45 | _T_180; // @[Lookup.scala 33:37]
  wire  _T_182 = _T_43 | _T_181; // @[Lookup.scala 33:37]
  wire  _T_183 = _T_41 | _T_182; // @[Lookup.scala 33:37]
  wire  _T_184 = _T_39 | _T_183; // @[Lookup.scala 33:37]
  wire  _T_185 = _T_37 | _T_184; // @[Lookup.scala 33:37]
  wire  _T_186 = _T_35 | _T_185; // @[Lookup.scala 33:37]
  wire  _T_187 = _T_33 | _T_186; // @[Lookup.scala 33:37]
  wire  _T_188 = _T_31 | _T_187; // @[Lookup.scala 33:37]
  wire  _T_189 = _T_29 | _T_188; // @[Lookup.scala 33:37]
  wire  _T_190 = _T_27 ? 1'h0 : _T_189; // @[Lookup.scala 33:37]
  wire  _T_191 = _T_25 ? 1'h0 : _T_190; // @[Lookup.scala 33:37]
  wire  _T_192 = _T_23 | _T_191; // @[Lookup.scala 33:37]
  wire  _T_193 = _T_21 | _T_192; // @[Lookup.scala 33:37]
  wire  regEn1 = _T_19 | _T_193; // @[Lookup.scala 33:37]
  wire  _T_211 = _T_101 ? 1'h0 : _T_152; // @[Lookup.scala 33:37]
  wire  _T_212 = _T_99 ? 1'h0 : _T_211; // @[Lookup.scala 33:37]
  wire  _T_213 = _T_97 ? 1'h0 : _T_212; // @[Lookup.scala 33:37]
  wire  _T_214 = _T_95 ? 1'h0 : _T_213; // @[Lookup.scala 33:37]
  wire  _T_215 = _T_93 ? 1'h0 : _T_214; // @[Lookup.scala 33:37]
  wire  _T_216 = _T_91 | _T_215; // @[Lookup.scala 33:37]
  wire  _T_217 = _T_89 | _T_216; // @[Lookup.scala 33:37]
  wire  _T_218 = _T_87 | _T_217; // @[Lookup.scala 33:37]
  wire  _T_219 = _T_85 ? 1'h0 : _T_218; // @[Lookup.scala 33:37]
  wire  _T_220 = _T_83 ? 1'h0 : _T_219; // @[Lookup.scala 33:37]
  wire  _T_221 = _T_81 ? 1'h0 : _T_220; // @[Lookup.scala 33:37]
  wire  _T_222 = _T_79 ? 1'h0 : _T_221; // @[Lookup.scala 33:37]
  wire  _T_223 = _T_77 ? 1'h0 : _T_222; // @[Lookup.scala 33:37]
  wire  _T_224 = _T_75 ? 1'h0 : _T_223; // @[Lookup.scala 33:37]
  wire  _T_225 = _T_73 ? 1'h0 : _T_224; // @[Lookup.scala 33:37]
  wire  _T_226 = _T_71 | _T_225; // @[Lookup.scala 33:37]
  wire  _T_227 = _T_69 | _T_226; // @[Lookup.scala 33:37]
  wire  _T_228 = _T_67 | _T_227; // @[Lookup.scala 33:37]
  wire  _T_229 = _T_65 | _T_228; // @[Lookup.scala 33:37]
  wire  _T_230 = _T_63 | _T_229; // @[Lookup.scala 33:37]
  wire  _T_231 = _T_61 | _T_230; // @[Lookup.scala 33:37]
  wire  _T_232 = _T_59 ? 1'h0 : _T_231; // @[Lookup.scala 33:37]
  wire  _T_233 = _T_57 | _T_232; // @[Lookup.scala 33:37]
  wire  _T_234 = _T_55 ? 1'h0 : _T_233; // @[Lookup.scala 33:37]
  wire  _T_235 = _T_53 | _T_234; // @[Lookup.scala 33:37]
  wire  _T_236 = _T_51 ? 1'h0 : _T_235; // @[Lookup.scala 33:37]
  wire  _T_237 = _T_49 | _T_236; // @[Lookup.scala 33:37]
  wire  _T_238 = _T_47 ? 1'h0 : _T_237; // @[Lookup.scala 33:37]
  wire  _T_239 = _T_45 | _T_238; // @[Lookup.scala 33:37]
  wire  _T_240 = _T_43 ? 1'h0 : _T_239; // @[Lookup.scala 33:37]
  wire  _T_241 = _T_41 | _T_240; // @[Lookup.scala 33:37]
  wire  _T_242 = _T_39 ? 1'h0 : _T_241; // @[Lookup.scala 33:37]
  wire  _T_243 = _T_37 | _T_242; // @[Lookup.scala 33:37]
  wire  _T_244 = _T_35 ? 1'h0 : _T_243; // @[Lookup.scala 33:37]
  wire  _T_245 = _T_33 | _T_244; // @[Lookup.scala 33:37]
  wire  _T_246 = _T_31 ? 1'h0 : _T_245; // @[Lookup.scala 33:37]
  wire  _T_247 = _T_29 | _T_246; // @[Lookup.scala 33:37]
  wire  _T_248 = _T_27 ? 1'h0 : _T_247; // @[Lookup.scala 33:37]
  wire  _T_249 = _T_25 ? 1'h0 : _T_248; // @[Lookup.scala 33:37]
  wire  _T_250 = _T_23 | _T_249; // @[Lookup.scala 33:37]
  wire  _T_251 = _T_21 ? 1'h0 : _T_250; // @[Lookup.scala 33:37]
  wire  _T_259 = _T_121 | _T_123; // @[Lookup.scala 33:37]
  wire  _T_260 = _T_119 | _T_259; // @[Lookup.scala 33:37]
  wire  _T_261 = _T_117 | _T_260; // @[Lookup.scala 33:37]
  wire  _T_262 = _T_115 | _T_261; // @[Lookup.scala 33:37]
  wire  _T_263 = _T_113 | _T_262; // @[Lookup.scala 33:37]
  wire  _T_264 = _T_111 | _T_263; // @[Lookup.scala 33:37]
  wire  _T_265 = _T_109 | _T_264; // @[Lookup.scala 33:37]
  wire  _T_266 = _T_107 | _T_265; // @[Lookup.scala 33:37]
  wire  _T_267 = _T_105 | _T_266; // @[Lookup.scala 33:37]
  wire  _T_268 = _T_103 | _T_267; // @[Lookup.scala 33:37]
  wire  _T_269 = _T_101 | _T_268; // @[Lookup.scala 33:37]
  wire  _T_270 = _T_99 | _T_269; // @[Lookup.scala 33:37]
  wire  _T_271 = _T_97 | _T_270; // @[Lookup.scala 33:37]
  wire  _T_272 = _T_95 ? 1'h0 : _T_271; // @[Lookup.scala 33:37]
  wire  _T_273 = _T_93 ? 1'h0 : _T_272; // @[Lookup.scala 33:37]
  wire  _T_274 = _T_91 ? 1'h0 : _T_273; // @[Lookup.scala 33:37]
  wire  _T_275 = _T_89 ? 1'h0 : _T_274; // @[Lookup.scala 33:37]
  wire  _T_276 = _T_87 ? 1'h0 : _T_275; // @[Lookup.scala 33:37]
  wire  _T_277 = _T_85 | _T_276; // @[Lookup.scala 33:37]
  wire  _T_278 = _T_83 | _T_277; // @[Lookup.scala 33:37]
  wire  _T_279 = _T_81 | _T_278; // @[Lookup.scala 33:37]
  wire  _T_280 = _T_79 | _T_279; // @[Lookup.scala 33:37]
  wire  _T_281 = _T_77 | _T_280; // @[Lookup.scala 33:37]
  wire  _T_282 = _T_75 | _T_281; // @[Lookup.scala 33:37]
  wire  _T_283 = _T_73 | _T_282; // @[Lookup.scala 33:37]
  wire  _T_284 = _T_71 ? 1'h0 : _T_283; // @[Lookup.scala 33:37]
  wire  _T_285 = _T_69 ? 1'h0 : _T_284; // @[Lookup.scala 33:37]
  wire  _T_286 = _T_67 ? 1'h0 : _T_285; // @[Lookup.scala 33:37]
  wire  _T_287 = _T_65 ? 1'h0 : _T_286; // @[Lookup.scala 33:37]
  wire  _T_288 = _T_63 ? 1'h0 : _T_287; // @[Lookup.scala 33:37]
  wire  _T_289 = _T_61 ? 1'h0 : _T_288; // @[Lookup.scala 33:37]
  wire  _T_290 = _T_59 | _T_289; // @[Lookup.scala 33:37]
  wire  _T_291 = _T_57 | _T_290; // @[Lookup.scala 33:37]
  wire  _T_292 = _T_55 | _T_291; // @[Lookup.scala 33:37]
  wire  _T_293 = _T_53 | _T_292; // @[Lookup.scala 33:37]
  wire  _T_294 = _T_51 | _T_293; // @[Lookup.scala 33:37]
  wire  _T_295 = _T_49 | _T_294; // @[Lookup.scala 33:37]
  wire  _T_296 = _T_47 | _T_295; // @[Lookup.scala 33:37]
  wire  _T_297 = _T_45 | _T_296; // @[Lookup.scala 33:37]
  wire  _T_298 = _T_43 | _T_297; // @[Lookup.scala 33:37]
  wire  _T_299 = _T_41 | _T_298; // @[Lookup.scala 33:37]
  wire  _T_300 = _T_39 | _T_299; // @[Lookup.scala 33:37]
  wire  _T_301 = _T_37 | _T_300; // @[Lookup.scala 33:37]
  wire  _T_302 = _T_35 | _T_301; // @[Lookup.scala 33:37]
  wire  _T_303 = _T_33 | _T_302; // @[Lookup.scala 33:37]
  wire  _T_304 = _T_31 | _T_303; // @[Lookup.scala 33:37]
  wire  _T_305 = _T_29 | _T_304; // @[Lookup.scala 33:37]
  wire  _T_306 = _T_27 | _T_305; // @[Lookup.scala 33:37]
  wire  _T_307 = _T_25 | _T_306; // @[Lookup.scala 33:37]
  wire  _T_308 = _T_23 | _T_307; // @[Lookup.scala 33:37]
  wire  _T_309 = _T_21 | _T_308; // @[Lookup.scala 33:37]
  wire [3:0] _T_310 = _T_135 ? 4'h1 : 4'h0; // @[Lookup.scala 33:37]
  wire [3:0] _T_311 = _T_133 ? 4'h0 : _T_310; // @[Lookup.scala 33:37]
  wire [3:0] _T_312 = _T_131 ? 4'h0 : _T_311; // @[Lookup.scala 33:37]
  wire [3:0] _T_313 = _T_129 ? 4'h0 : _T_312; // @[Lookup.scala 33:37]
  wire [3:0] _T_314 = _T_127 ? 4'h0 : _T_313; // @[Lookup.scala 33:37]
  wire [3:0] _T_315 = _T_125 ? 4'h0 : _T_314; // @[Lookup.scala 33:37]
  wire [3:0] _T_316 = _T_123 ? 4'h1 : _T_315; // @[Lookup.scala 33:37]
  wire [3:0] _T_317 = _T_121 ? 4'h1 : _T_316; // @[Lookup.scala 33:37]
  wire [3:0] _T_318 = _T_119 ? 4'h1 : _T_317; // @[Lookup.scala 33:37]
  wire [3:0] _T_319 = _T_117 ? 4'h1 : _T_318; // @[Lookup.scala 33:37]
  wire [3:0] _T_320 = _T_115 ? 4'h1 : _T_319; // @[Lookup.scala 33:37]
  wire [3:0] _T_321 = _T_113 ? 4'h1 : _T_320; // @[Lookup.scala 33:37]
  wire [3:0] _T_322 = _T_111 ? 4'h1 : _T_321; // @[Lookup.scala 33:37]
  wire [3:0] _T_323 = _T_109 ? 4'h1 : _T_322; // @[Lookup.scala 33:37]
  wire [3:0] _T_324 = _T_107 ? 4'h0 : _T_323; // @[Lookup.scala 33:37]
  wire [3:0] _T_325 = _T_105 ? 4'h0 : _T_324; // @[Lookup.scala 33:37]
  wire [3:0] _T_326 = _T_103 ? 4'h0 : _T_325; // @[Lookup.scala 33:37]
  wire [3:0] _T_327 = _T_101 ? 4'h0 : _T_326; // @[Lookup.scala 33:37]
  wire [3:0] _T_328 = _T_99 ? 4'h0 : _T_327; // @[Lookup.scala 33:37]
  wire [3:0] _T_329 = _T_97 ? 4'h0 : _T_328; // @[Lookup.scala 33:37]
  wire [3:0] _T_330 = _T_95 ? 4'h0 : _T_329; // @[Lookup.scala 33:37]
  wire [3:0] _T_331 = _T_93 ? 4'h0 : _T_330; // @[Lookup.scala 33:37]
  wire [3:0] _T_332 = _T_91 ? 4'h1 : _T_331; // @[Lookup.scala 33:37]
  wire [3:0] _T_333 = _T_89 ? 4'h1 : _T_332; // @[Lookup.scala 33:37]
  wire [3:0] _T_334 = _T_87 ? 4'h1 : _T_333; // @[Lookup.scala 33:37]
  wire [3:0] _T_335 = _T_85 ? 4'h1 : _T_334; // @[Lookup.scala 33:37]
  wire [3:0] _T_336 = _T_83 ? 4'h1 : _T_335; // @[Lookup.scala 33:37]
  wire [3:0] _T_337 = _T_81 ? 4'h1 : _T_336; // @[Lookup.scala 33:37]
  wire [3:0] _T_338 = _T_79 ? 4'h1 : _T_337; // @[Lookup.scala 33:37]
  wire [3:0] _T_339 = _T_77 ? 4'h1 : _T_338; // @[Lookup.scala 33:37]
  wire [3:0] _T_340 = _T_75 ? 4'h7 : _T_339; // @[Lookup.scala 33:37]
  wire [3:0] _T_341 = _T_73 ? 4'h7 : _T_340; // @[Lookup.scala 33:37]
  wire [3:0] _T_342 = _T_71 ? 4'h0 : _T_341; // @[Lookup.scala 33:37]
  wire [3:0] _T_343 = _T_69 ? 4'h0 : _T_342; // @[Lookup.scala 33:37]
  wire [3:0] _T_344 = _T_67 ? 4'h0 : _T_343; // @[Lookup.scala 33:37]
  wire [3:0] _T_345 = _T_65 ? 4'h0 : _T_344; // @[Lookup.scala 33:37]
  wire [3:0] _T_346 = _T_63 ? 4'h0 : _T_345; // @[Lookup.scala 33:37]
  wire [3:0] _T_347 = _T_61 ? 4'h0 : _T_346; // @[Lookup.scala 33:37]
  wire [3:0] _T_348 = _T_59 ? 4'h1 : _T_347; // @[Lookup.scala 33:37]
  wire [3:0] _T_349 = _T_57 ? 4'h1 : _T_348; // @[Lookup.scala 33:37]
  wire [3:0] _T_350 = _T_55 ? 4'h1 : _T_349; // @[Lookup.scala 33:37]
  wire [3:0] _T_351 = _T_53 ? 4'h1 : _T_350; // @[Lookup.scala 33:37]
  wire [3:0] _T_352 = _T_51 ? 4'h1 : _T_351; // @[Lookup.scala 33:37]
  wire [3:0] _T_353 = _T_49 ? 4'h1 : _T_352; // @[Lookup.scala 33:37]
  wire [3:0] _T_354 = _T_47 ? 4'h1 : _T_353; // @[Lookup.scala 33:37]
  wire [3:0] _T_355 = _T_45 ? 4'h1 : _T_354; // @[Lookup.scala 33:37]
  wire [3:0] _T_356 = _T_43 ? 4'h1 : _T_355; // @[Lookup.scala 33:37]
  wire [3:0] _T_357 = _T_41 ? 4'h1 : _T_356; // @[Lookup.scala 33:37]
  wire [3:0] _T_358 = _T_39 ? 4'h1 : _T_357; // @[Lookup.scala 33:37]
  wire [3:0] _T_359 = _T_37 ? 4'h1 : _T_358; // @[Lookup.scala 33:37]
  wire [3:0] _T_360 = _T_35 ? 4'h1 : _T_359; // @[Lookup.scala 33:37]
  wire [3:0] _T_361 = _T_33 ? 4'h1 : _T_360; // @[Lookup.scala 33:37]
  wire [3:0] _T_362 = _T_31 ? 4'h1 : _T_361; // @[Lookup.scala 33:37]
  wire [3:0] _T_363 = _T_29 ? 4'h1 : _T_362; // @[Lookup.scala 33:37]
  wire [3:0] _T_364 = _T_27 ? 4'h7 : _T_363; // @[Lookup.scala 33:37]
  wire [3:0] _T_365 = _T_25 ? 4'h0 : _T_364; // @[Lookup.scala 33:37]
  wire [3:0] _T_366 = _T_23 ? 4'h1 : _T_365; // @[Lookup.scala 33:37]
  wire [3:0] _T_367 = _T_21 ? 4'h1 : _T_366; // @[Lookup.scala 33:37]
  wire [3:0] aluSrc1 = _T_19 ? 4'h1 : _T_367; // @[Lookup.scala 33:37]
  wire [3:0] _T_374 = _T_123 ? 4'h2 : 4'h0; // @[Lookup.scala 33:37]
  wire [3:0] _T_375 = _T_121 ? 4'h2 : _T_374; // @[Lookup.scala 33:37]
  wire [3:0] _T_376 = _T_119 ? 4'h2 : _T_375; // @[Lookup.scala 33:37]
  wire [3:0] _T_377 = _T_117 ? 4'h2 : _T_376; // @[Lookup.scala 33:37]
  wire [3:0] _T_378 = _T_115 ? 4'h2 : _T_377; // @[Lookup.scala 33:37]
  wire [3:0] _T_379 = _T_113 ? 4'h2 : _T_378; // @[Lookup.scala 33:37]
  wire [3:0] _T_380 = _T_111 ? 4'h2 : _T_379; // @[Lookup.scala 33:37]
  wire [3:0] _T_381 = _T_109 ? 4'h2 : _T_380; // @[Lookup.scala 33:37]
  wire [3:0] _T_382 = _T_107 ? 4'h0 : _T_381; // @[Lookup.scala 33:37]
  wire [3:0] _T_383 = _T_105 ? 4'h0 : _T_382; // @[Lookup.scala 33:37]
  wire [3:0] _T_384 = _T_103 ? 4'h0 : _T_383; // @[Lookup.scala 33:37]
  wire [3:0] _T_385 = _T_101 ? 4'h0 : _T_384; // @[Lookup.scala 33:37]
  wire [3:0] _T_386 = _T_99 ? 4'h0 : _T_385; // @[Lookup.scala 33:37]
  wire [3:0] _T_387 = _T_97 ? 4'h0 : _T_386; // @[Lookup.scala 33:37]
  wire [3:0] _T_388 = _T_95 ? 4'h0 : _T_387; // @[Lookup.scala 33:37]
  wire [3:0] _T_389 = _T_93 ? 4'h3 : _T_388; // @[Lookup.scala 33:37]
  wire [3:0] _T_390 = _T_91 ? 4'h4 : _T_389; // @[Lookup.scala 33:37]
  wire [3:0] _T_391 = _T_89 ? 4'h4 : _T_390; // @[Lookup.scala 33:37]
  wire [3:0] _T_392 = _T_87 ? 4'h4 : _T_391; // @[Lookup.scala 33:37]
  wire [3:0] _T_393 = _T_85 ? 4'h3 : _T_392; // @[Lookup.scala 33:37]
  wire [3:0] _T_394 = _T_83 ? 4'h3 : _T_393; // @[Lookup.scala 33:37]
  wire [3:0] _T_395 = _T_81 ? 4'h3 : _T_394; // @[Lookup.scala 33:37]
  wire [3:0] _T_396 = _T_79 ? 4'h3 : _T_395; // @[Lookup.scala 33:37]
  wire [3:0] _T_397 = _T_77 ? 4'h3 : _T_396; // @[Lookup.scala 33:37]
  wire [3:0] _T_398 = _T_75 ? 4'h8 : _T_397; // @[Lookup.scala 33:37]
  wire [3:0] _T_399 = _T_73 ? 4'h8 : _T_398; // @[Lookup.scala 33:37]
  wire [3:0] _T_400 = _T_71 ? 4'h0 : _T_399; // @[Lookup.scala 33:37]
  wire [3:0] _T_401 = _T_69 ? 4'h0 : _T_400; // @[Lookup.scala 33:37]
  wire [3:0] _T_402 = _T_67 ? 4'h0 : _T_401; // @[Lookup.scala 33:37]
  wire [3:0] _T_403 = _T_65 ? 4'h0 : _T_402; // @[Lookup.scala 33:37]
  wire [3:0] _T_404 = _T_63 ? 4'h0 : _T_403; // @[Lookup.scala 33:37]
  wire [3:0] _T_405 = _T_61 ? 4'h0 : _T_404; // @[Lookup.scala 33:37]
  wire [3:0] _T_406 = _T_59 ? 4'h6 : _T_405; // @[Lookup.scala 33:37]
  wire [3:0] _T_407 = _T_57 ? 4'h2 : _T_406; // @[Lookup.scala 33:37]
  wire [3:0] _T_408 = _T_55 ? 4'h6 : _T_407; // @[Lookup.scala 33:37]
  wire [3:0] _T_409 = _T_53 ? 4'h2 : _T_408; // @[Lookup.scala 33:37]
  wire [3:0] _T_410 = _T_51 ? 4'h6 : _T_409; // @[Lookup.scala 33:37]
  wire [3:0] _T_411 = _T_49 ? 4'h2 : _T_410; // @[Lookup.scala 33:37]
  wire [3:0] _T_412 = _T_47 ? 4'h3 : _T_411; // @[Lookup.scala 33:37]
  wire [3:0] _T_413 = _T_45 ? 4'h2 : _T_412; // @[Lookup.scala 33:37]
  wire [3:0] _T_414 = _T_43 ? 4'h3 : _T_413; // @[Lookup.scala 33:37]
  wire [3:0] _T_415 = _T_41 ? 4'h2 : _T_414; // @[Lookup.scala 33:37]
  wire [3:0] _T_416 = _T_39 ? 4'h3 : _T_415; // @[Lookup.scala 33:37]
  wire [3:0] _T_417 = _T_37 ? 4'h2 : _T_416; // @[Lookup.scala 33:37]
  wire [3:0] _T_418 = _T_35 ? 4'h3 : _T_417; // @[Lookup.scala 33:37]
  wire [3:0] _T_419 = _T_33 ? 4'h2 : _T_418; // @[Lookup.scala 33:37]
  wire [3:0] _T_420 = _T_31 ? 4'h3 : _T_419; // @[Lookup.scala 33:37]
  wire [3:0] _T_421 = _T_29 ? 4'h2 : _T_420; // @[Lookup.scala 33:37]
  wire [3:0] _T_422 = _T_27 ? 4'h5 : _T_421; // @[Lookup.scala 33:37]
  wire [3:0] _T_423 = _T_25 ? 4'h5 : _T_422; // @[Lookup.scala 33:37]
  wire [3:0] _T_424 = _T_23 ? 4'h2 : _T_423; // @[Lookup.scala 33:37]
  wire [3:0] _T_425 = _T_21 ? 4'h3 : _T_424; // @[Lookup.scala 33:37]
  wire [3:0] aluSrc2 = _T_19 ? 4'h2 : _T_425; // @[Lookup.scala 33:37]
  wire [3:0] _T_426 = _T_135 ? 4'h3 : 4'h0; // @[Lookup.scala 33:37]
  wire [3:0] _T_427 = _T_133 ? 4'h0 : _T_426; // @[Lookup.scala 33:37]
  wire [3:0] _T_428 = _T_131 ? 4'h0 : _T_427; // @[Lookup.scala 33:37]
  wire [3:0] _T_429 = _T_129 ? 4'h0 : _T_428; // @[Lookup.scala 33:37]
  wire [3:0] _T_430 = _T_127 ? 4'h0 : _T_429; // @[Lookup.scala 33:37]
  wire [3:0] _T_431 = _T_125 ? 4'h0 : _T_430; // @[Lookup.scala 33:37]
  wire [3:0] _T_432 = _T_123 ? 4'h0 : _T_431; // @[Lookup.scala 33:37]
  wire [3:0] _T_433 = _T_121 ? 4'h0 : _T_432; // @[Lookup.scala 33:37]
  wire [3:0] _T_434 = _T_119 ? 4'h0 : _T_433; // @[Lookup.scala 33:37]
  wire [3:0] _T_435 = _T_117 ? 4'h0 : _T_434; // @[Lookup.scala 33:37]
  wire [3:0] _T_436 = _T_115 ? 4'h0 : _T_435; // @[Lookup.scala 33:37]
  wire [3:0] _T_437 = _T_113 ? 4'h0 : _T_436; // @[Lookup.scala 33:37]
  wire [3:0] _T_438 = _T_111 ? 4'h0 : _T_437; // @[Lookup.scala 33:37]
  wire [3:0] _T_439 = _T_109 ? 4'h0 : _T_438; // @[Lookup.scala 33:37]
  wire [3:0] _T_440 = _T_107 ? 4'h0 : _T_439; // @[Lookup.scala 33:37]
  wire [3:0] _T_441 = _T_105 ? 4'h0 : _T_440; // @[Lookup.scala 33:37]
  wire [3:0] _T_442 = _T_103 ? 4'h0 : _T_441; // @[Lookup.scala 33:37]
  wire [3:0] _T_443 = _T_101 ? 4'h0 : _T_442; // @[Lookup.scala 33:37]
  wire [3:0] _T_444 = _T_99 ? 4'h0 : _T_443; // @[Lookup.scala 33:37]
  wire [3:0] _T_445 = _T_97 ? 4'h0 : _T_444; // @[Lookup.scala 33:37]
  wire [3:0] _T_446 = _T_95 ? 4'h0 : _T_445; // @[Lookup.scala 33:37]
  wire [3:0] _T_447 = _T_93 ? 4'h3 : _T_446; // @[Lookup.scala 33:37]
  wire [3:0] _T_448 = _T_91 ? 4'h0 : _T_447; // @[Lookup.scala 33:37]
  wire [3:0] _T_449 = _T_89 ? 4'h0 : _T_448; // @[Lookup.scala 33:37]
  wire [3:0] _T_450 = _T_87 ? 4'h0 : _T_449; // @[Lookup.scala 33:37]
  wire [3:0] _T_451 = _T_85 ? 4'h0 : _T_450; // @[Lookup.scala 33:37]
  wire [3:0] _T_452 = _T_83 ? 4'h0 : _T_451; // @[Lookup.scala 33:37]
  wire [3:0] _T_453 = _T_81 ? 4'h0 : _T_452; // @[Lookup.scala 33:37]
  wire [3:0] _T_454 = _T_79 ? 4'h0 : _T_453; // @[Lookup.scala 33:37]
  wire [3:0] _T_455 = _T_77 ? 4'h0 : _T_454; // @[Lookup.scala 33:37]
  wire [3:0] _T_456 = _T_75 ? 4'h0 : _T_455; // @[Lookup.scala 33:37]
  wire [3:0] _T_457 = _T_73 ? 4'h0 : _T_456; // @[Lookup.scala 33:37]
  wire [3:0] _T_458 = _T_71 ? 4'h0 : _T_457; // @[Lookup.scala 33:37]
  wire [3:0] _T_459 = _T_69 ? 4'h0 : _T_458; // @[Lookup.scala 33:37]
  wire [3:0] _T_460 = _T_67 ? 4'h0 : _T_459; // @[Lookup.scala 33:37]
  wire [3:0] _T_461 = _T_65 ? 4'h0 : _T_460; // @[Lookup.scala 33:37]
  wire [3:0] _T_462 = _T_63 ? 4'h0 : _T_461; // @[Lookup.scala 33:37]
  wire [3:0] _T_463 = _T_61 ? 4'h0 : _T_462; // @[Lookup.scala 33:37]
  wire [3:0] _T_464 = _T_59 ? 4'h9 : _T_463; // @[Lookup.scala 33:37]
  wire [3:0] _T_465 = _T_57 ? 4'h9 : _T_464; // @[Lookup.scala 33:37]
  wire [3:0] _T_466 = _T_55 ? 4'h8 : _T_465; // @[Lookup.scala 33:37]
  wire [3:0] _T_467 = _T_53 ? 4'h8 : _T_466; // @[Lookup.scala 33:37]
  wire [3:0] _T_468 = _T_51 ? 4'h7 : _T_467; // @[Lookup.scala 33:37]
  wire [3:0] _T_469 = _T_49 ? 4'h7 : _T_468; // @[Lookup.scala 33:37]
  wire [3:0] _T_470 = _T_47 ? 4'h6 : _T_469; // @[Lookup.scala 33:37]
  wire [3:0] _T_471 = _T_45 ? 4'h6 : _T_470; // @[Lookup.scala 33:37]
  wire [3:0] _T_472 = _T_43 ? 4'h5 : _T_471; // @[Lookup.scala 33:37]
  wire [3:0] _T_473 = _T_41 ? 4'h5 : _T_472; // @[Lookup.scala 33:37]
  wire [3:0] _T_474 = _T_39 ? 4'h4 : _T_473; // @[Lookup.scala 33:37]
  wire [3:0] _T_475 = _T_37 ? 4'h4 : _T_474; // @[Lookup.scala 33:37]
  wire [3:0] _T_476 = _T_35 ? 4'h3 : _T_475; // @[Lookup.scala 33:37]
  wire [3:0] _T_477 = _T_33 ? 4'h3 : _T_476; // @[Lookup.scala 33:37]
  wire [3:0] _T_478 = _T_31 ? 4'h2 : _T_477; // @[Lookup.scala 33:37]
  wire [3:0] _T_479 = _T_29 ? 4'h2 : _T_478; // @[Lookup.scala 33:37]
  wire [3:0] _T_480 = _T_27 ? 4'h0 : _T_479; // @[Lookup.scala 33:37]
  wire [3:0] _T_481 = _T_25 ? 4'h3 : _T_480; // @[Lookup.scala 33:37]
  wire [3:0] _T_482 = _T_23 ? 4'h1 : _T_481; // @[Lookup.scala 33:37]
  wire [3:0] _T_483 = _T_21 ? 4'h0 : _T_482; // @[Lookup.scala 33:37]
  wire [2:0] _T_514 = _T_75 ? 3'h1 : 3'h0; // @[Lookup.scala 33:37]
  wire [2:0] _T_515 = _T_73 ? 3'h1 : _T_514; // @[Lookup.scala 33:37]
  wire [2:0] _T_516 = _T_71 ? 3'h7 : _T_515; // @[Lookup.scala 33:37]
  wire [2:0] _T_517 = _T_69 ? 3'h6 : _T_516; // @[Lookup.scala 33:37]
  wire [2:0] _T_518 = _T_67 ? 3'h5 : _T_517; // @[Lookup.scala 33:37]
  wire [2:0] _T_519 = _T_65 ? 3'h4 : _T_518; // @[Lookup.scala 33:37]
  wire [2:0] _T_520 = _T_63 ? 3'h3 : _T_519; // @[Lookup.scala 33:37]
  wire [2:0] _T_521 = _T_61 ? 3'h2 : _T_520; // @[Lookup.scala 33:37]
  wire [2:0] _T_522 = _T_59 ? 3'h0 : _T_521; // @[Lookup.scala 33:37]
  wire [2:0] _T_523 = _T_57 ? 3'h0 : _T_522; // @[Lookup.scala 33:37]
  wire [2:0] _T_524 = _T_55 ? 3'h0 : _T_523; // @[Lookup.scala 33:37]
  wire [2:0] _T_525 = _T_53 ? 3'h0 : _T_524; // @[Lookup.scala 33:37]
  wire [2:0] _T_526 = _T_51 ? 3'h0 : _T_525; // @[Lookup.scala 33:37]
  wire [2:0] _T_527 = _T_49 ? 3'h0 : _T_526; // @[Lookup.scala 33:37]
  wire [2:0] _T_528 = _T_47 ? 3'h0 : _T_527; // @[Lookup.scala 33:37]
  wire [2:0] _T_529 = _T_45 ? 3'h0 : _T_528; // @[Lookup.scala 33:37]
  wire [2:0] _T_530 = _T_43 ? 3'h0 : _T_529; // @[Lookup.scala 33:37]
  wire [2:0] _T_531 = _T_41 ? 3'h0 : _T_530; // @[Lookup.scala 33:37]
  wire [2:0] _T_532 = _T_39 ? 3'h0 : _T_531; // @[Lookup.scala 33:37]
  wire [2:0] _T_533 = _T_37 ? 3'h0 : _T_532; // @[Lookup.scala 33:37]
  wire [2:0] _T_534 = _T_35 ? 3'h0 : _T_533; // @[Lookup.scala 33:37]
  wire [2:0] _T_535 = _T_33 ? 3'h0 : _T_534; // @[Lookup.scala 33:37]
  wire [2:0] _T_536 = _T_31 ? 3'h0 : _T_535; // @[Lookup.scala 33:37]
  wire [2:0] _T_537 = _T_29 ? 3'h0 : _T_536; // @[Lookup.scala 33:37]
  wire [2:0] _T_538 = _T_27 ? 3'h0 : _T_537; // @[Lookup.scala 33:37]
  wire [2:0] _T_539 = _T_25 ? 3'h0 : _T_538; // @[Lookup.scala 33:37]
  wire [2:0] _T_540 = _T_23 ? 3'h0 : _T_539; // @[Lookup.scala 33:37]
  wire [2:0] _T_541 = _T_21 ? 3'h0 : _T_540; // @[Lookup.scala 33:37]
  wire [2:0] branchOp = _T_19 ? 3'h0 : _T_541; // @[Lookup.scala 33:37]
  wire [3:0] _T_542 = _T_135 ? 4'hb : 4'h0; // @[Lookup.scala 33:37]
  wire [3:0] _T_543 = _T_133 ? 4'h0 : _T_542; // @[Lookup.scala 33:37]
  wire [3:0] _T_544 = _T_131 ? 4'h0 : _T_543; // @[Lookup.scala 33:37]
  wire [3:0] _T_545 = _T_129 ? 4'h0 : _T_544; // @[Lookup.scala 33:37]
  wire [3:0] _T_546 = _T_127 ? 4'h0 : _T_545; // @[Lookup.scala 33:37]
  wire [3:0] _T_547 = _T_125 ? 4'h0 : _T_546; // @[Lookup.scala 33:37]
  wire [3:0] _T_548 = _T_123 ? 4'h0 : _T_547; // @[Lookup.scala 33:37]
  wire [3:0] _T_549 = _T_121 ? 4'h0 : _T_548; // @[Lookup.scala 33:37]
  wire [3:0] _T_550 = _T_119 ? 4'h0 : _T_549; // @[Lookup.scala 33:37]
  wire [3:0] _T_551 = _T_117 ? 4'h0 : _T_550; // @[Lookup.scala 33:37]
  wire [3:0] _T_552 = _T_115 ? 4'h0 : _T_551; // @[Lookup.scala 33:37]
  wire [3:0] _T_553 = _T_113 ? 4'h0 : _T_552; // @[Lookup.scala 33:37]
  wire [3:0] _T_554 = _T_111 ? 4'h0 : _T_553; // @[Lookup.scala 33:37]
  wire [3:0] _T_555 = _T_109 ? 4'h0 : _T_554; // @[Lookup.scala 33:37]
  wire [3:0] _T_556 = _T_107 ? 4'h0 : _T_555; // @[Lookup.scala 33:37]
  wire [3:0] _T_557 = _T_105 ? 4'h0 : _T_556; // @[Lookup.scala 33:37]
  wire [3:0] _T_558 = _T_103 ? 4'h0 : _T_557; // @[Lookup.scala 33:37]
  wire [3:0] _T_559 = _T_101 ? 4'h0 : _T_558; // @[Lookup.scala 33:37]
  wire [3:0] _T_560 = _T_99 ? 4'h0 : _T_559; // @[Lookup.scala 33:37]
  wire [3:0] _T_561 = _T_97 ? 4'h0 : _T_560; // @[Lookup.scala 33:37]
  wire [3:0] _T_562 = _T_95 ? 4'ha : _T_561; // @[Lookup.scala 33:37]
  wire [3:0] _T_563 = _T_93 ? 4'h9 : _T_562; // @[Lookup.scala 33:37]
  wire [3:0] _T_564 = _T_91 ? 4'h8 : _T_563; // @[Lookup.scala 33:37]
  wire [3:0] _T_565 = _T_89 ? 4'h7 : _T_564; // @[Lookup.scala 33:37]
  wire [3:0] _T_566 = _T_87 ? 4'h6 : _T_565; // @[Lookup.scala 33:37]
  wire [3:0] _T_567 = _T_85 ? 4'h5 : _T_566; // @[Lookup.scala 33:37]
  wire [3:0] _T_568 = _T_83 ? 4'h4 : _T_567; // @[Lookup.scala 33:37]
  wire [3:0] _T_569 = _T_81 ? 4'h3 : _T_568; // @[Lookup.scala 33:37]
  wire [3:0] _T_570 = _T_79 ? 4'h2 : _T_569; // @[Lookup.scala 33:37]
  wire [3:0] _T_571 = _T_77 ? 4'h1 : _T_570; // @[Lookup.scala 33:37]
  wire [3:0] _T_572 = _T_75 ? 4'h0 : _T_571; // @[Lookup.scala 33:37]
  wire [3:0] _T_573 = _T_73 ? 4'h0 : _T_572; // @[Lookup.scala 33:37]
  wire [3:0] _T_574 = _T_71 ? 4'h0 : _T_573; // @[Lookup.scala 33:37]
  wire [3:0] _T_575 = _T_69 ? 4'h0 : _T_574; // @[Lookup.scala 33:37]
  wire [3:0] _T_576 = _T_67 ? 4'h0 : _T_575; // @[Lookup.scala 33:37]
  wire [3:0] _T_577 = _T_65 ? 4'h0 : _T_576; // @[Lookup.scala 33:37]
  wire [3:0] _T_578 = _T_63 ? 4'h0 : _T_577; // @[Lookup.scala 33:37]
  wire [3:0] _T_579 = _T_61 ? 4'h0 : _T_578; // @[Lookup.scala 33:37]
  wire [3:0] _T_580 = _T_59 ? 4'h0 : _T_579; // @[Lookup.scala 33:37]
  wire [3:0] _T_581 = _T_57 ? 4'h0 : _T_580; // @[Lookup.scala 33:37]
  wire [3:0] _T_582 = _T_55 ? 4'h0 : _T_581; // @[Lookup.scala 33:37]
  wire [3:0] _T_583 = _T_53 ? 4'h0 : _T_582; // @[Lookup.scala 33:37]
  wire [3:0] _T_584 = _T_51 ? 4'h0 : _T_583; // @[Lookup.scala 33:37]
  wire [3:0] _T_585 = _T_49 ? 4'h0 : _T_584; // @[Lookup.scala 33:37]
  wire [3:0] _T_586 = _T_47 ? 4'h0 : _T_585; // @[Lookup.scala 33:37]
  wire [3:0] _T_587 = _T_45 ? 4'h0 : _T_586; // @[Lookup.scala 33:37]
  wire [3:0] _T_588 = _T_43 ? 4'h0 : _T_587; // @[Lookup.scala 33:37]
  wire [3:0] _T_589 = _T_41 ? 4'h0 : _T_588; // @[Lookup.scala 33:37]
  wire [3:0] _T_590 = _T_39 ? 4'h0 : _T_589; // @[Lookup.scala 33:37]
  wire [3:0] _T_591 = _T_37 ? 4'h0 : _T_590; // @[Lookup.scala 33:37]
  wire [3:0] _T_592 = _T_35 ? 4'h0 : _T_591; // @[Lookup.scala 33:37]
  wire [3:0] _T_593 = _T_33 ? 4'h0 : _T_592; // @[Lookup.scala 33:37]
  wire [3:0] _T_594 = _T_31 ? 4'h0 : _T_593; // @[Lookup.scala 33:37]
  wire [3:0] _T_595 = _T_29 ? 4'h0 : _T_594; // @[Lookup.scala 33:37]
  wire [3:0] _T_596 = _T_27 ? 4'h0 : _T_595; // @[Lookup.scala 33:37]
  wire [3:0] _T_597 = _T_25 ? 4'h0 : _T_596; // @[Lookup.scala 33:37]
  wire [3:0] _T_598 = _T_23 ? 4'h0 : _T_597; // @[Lookup.scala 33:37]
  wire [3:0] _T_599 = _T_21 ? 4'h0 : _T_598; // @[Lookup.scala 33:37]
  wire [2:0] _T_614 = _T_107 ? 3'h5 : 3'h0; // @[Lookup.scala 33:37]
  wire [2:0] _T_615 = _T_105 ? 3'h4 : _T_614; // @[Lookup.scala 33:37]
  wire [2:0] _T_616 = _T_103 ? 3'h3 : _T_615; // @[Lookup.scala 33:37]
  wire [2:0] _T_617 = _T_101 ? 3'h5 : _T_616; // @[Lookup.scala 33:37]
  wire [2:0] _T_618 = _T_99 ? 3'h4 : _T_617; // @[Lookup.scala 33:37]
  wire [2:0] _T_619 = _T_97 ? 3'h3 : _T_618; // @[Lookup.scala 33:37]
  wire [2:0] _T_620 = _T_95 ? 3'h0 : _T_619; // @[Lookup.scala 33:37]
  wire [2:0] _T_621 = _T_93 ? 3'h0 : _T_620; // @[Lookup.scala 33:37]
  wire [2:0] _T_622 = _T_91 ? 3'h0 : _T_621; // @[Lookup.scala 33:37]
  wire [2:0] _T_623 = _T_89 ? 3'h0 : _T_622; // @[Lookup.scala 33:37]
  wire [2:0] _T_624 = _T_87 ? 3'h0 : _T_623; // @[Lookup.scala 33:37]
  wire [2:0] _T_625 = _T_85 ? 3'h0 : _T_624; // @[Lookup.scala 33:37]
  wire [2:0] _T_626 = _T_83 ? 3'h0 : _T_625; // @[Lookup.scala 33:37]
  wire [2:0] _T_627 = _T_81 ? 3'h0 : _T_626; // @[Lookup.scala 33:37]
  wire [2:0] _T_628 = _T_79 ? 3'h0 : _T_627; // @[Lookup.scala 33:37]
  wire [2:0] _T_629 = _T_77 ? 3'h0 : _T_628; // @[Lookup.scala 33:37]
  wire [2:0] _T_630 = _T_75 ? 3'h0 : _T_629; // @[Lookup.scala 33:37]
  wire [2:0] _T_631 = _T_73 ? 3'h0 : _T_630; // @[Lookup.scala 33:37]
  wire [2:0] _T_632 = _T_71 ? 3'h0 : _T_631; // @[Lookup.scala 33:37]
  wire [2:0] _T_633 = _T_69 ? 3'h0 : _T_632; // @[Lookup.scala 33:37]
  wire [2:0] _T_634 = _T_67 ? 3'h0 : _T_633; // @[Lookup.scala 33:37]
  wire [2:0] _T_635 = _T_65 ? 3'h0 : _T_634; // @[Lookup.scala 33:37]
  wire [2:0] _T_636 = _T_63 ? 3'h0 : _T_635; // @[Lookup.scala 33:37]
  wire [2:0] _T_637 = _T_61 ? 3'h0 : _T_636; // @[Lookup.scala 33:37]
  wire [2:0] _T_638 = _T_59 ? 3'h0 : _T_637; // @[Lookup.scala 33:37]
  wire [2:0] _T_639 = _T_57 ? 3'h0 : _T_638; // @[Lookup.scala 33:37]
  wire [2:0] _T_640 = _T_55 ? 3'h0 : _T_639; // @[Lookup.scala 33:37]
  wire [2:0] _T_641 = _T_53 ? 3'h0 : _T_640; // @[Lookup.scala 33:37]
  wire [2:0] _T_642 = _T_51 ? 3'h0 : _T_641; // @[Lookup.scala 33:37]
  wire [2:0] _T_643 = _T_49 ? 3'h0 : _T_642; // @[Lookup.scala 33:37]
  wire [2:0] _T_644 = _T_47 ? 3'h0 : _T_643; // @[Lookup.scala 33:37]
  wire [2:0] _T_645 = _T_45 ? 3'h0 : _T_644; // @[Lookup.scala 33:37]
  wire [2:0] _T_646 = _T_43 ? 3'h0 : _T_645; // @[Lookup.scala 33:37]
  wire [2:0] _T_647 = _T_41 ? 3'h0 : _T_646; // @[Lookup.scala 33:37]
  wire [2:0] _T_648 = _T_39 ? 3'h0 : _T_647; // @[Lookup.scala 33:37]
  wire [2:0] _T_649 = _T_37 ? 3'h0 : _T_648; // @[Lookup.scala 33:37]
  wire [2:0] _T_650 = _T_35 ? 3'h0 : _T_649; // @[Lookup.scala 33:37]
  wire [2:0] _T_651 = _T_33 ? 3'h0 : _T_650; // @[Lookup.scala 33:37]
  wire [2:0] _T_652 = _T_31 ? 3'h0 : _T_651; // @[Lookup.scala 33:37]
  wire [2:0] _T_653 = _T_29 ? 3'h0 : _T_652; // @[Lookup.scala 33:37]
  wire [2:0] _T_654 = _T_27 ? 3'h0 : _T_653; // @[Lookup.scala 33:37]
  wire [2:0] _T_655 = _T_25 ? 3'h0 : _T_654; // @[Lookup.scala 33:37]
  wire [2:0] _T_656 = _T_23 ? 3'h0 : _T_655; // @[Lookup.scala 33:37]
  wire [2:0] _T_657 = _T_21 ? 3'h0 : _T_656; // @[Lookup.scala 33:37]
  wire [2:0] csrOp = _T_19 ? 3'h0 : _T_657; // @[Lookup.scala 33:37]
  wire [3:0] _T_664 = _T_123 ? 4'h8 : 4'h0; // @[Lookup.scala 33:37]
  wire [3:0] _T_665 = _T_121 ? 4'h7 : _T_664; // @[Lookup.scala 33:37]
  wire [3:0] _T_666 = _T_119 ? 4'h6 : _T_665; // @[Lookup.scala 33:37]
  wire [3:0] _T_667 = _T_117 ? 4'h5 : _T_666; // @[Lookup.scala 33:37]
  wire [3:0] _T_668 = _T_115 ? 4'h4 : _T_667; // @[Lookup.scala 33:37]
  wire [3:0] _T_669 = _T_113 ? 4'h3 : _T_668; // @[Lookup.scala 33:37]
  wire [3:0] _T_670 = _T_111 ? 4'h2 : _T_669; // @[Lookup.scala 33:37]
  wire [3:0] _T_671 = _T_109 ? 4'h1 : _T_670; // @[Lookup.scala 33:37]
  wire [3:0] _T_672 = _T_107 ? 4'h0 : _T_671; // @[Lookup.scala 33:37]
  wire [3:0] _T_673 = _T_105 ? 4'h0 : _T_672; // @[Lookup.scala 33:37]
  wire [3:0] _T_674 = _T_103 ? 4'h0 : _T_673; // @[Lookup.scala 33:37]
  wire [3:0] _T_675 = _T_101 ? 4'h0 : _T_674; // @[Lookup.scala 33:37]
  wire [3:0] _T_676 = _T_99 ? 4'h0 : _T_675; // @[Lookup.scala 33:37]
  wire [3:0] _T_677 = _T_97 ? 4'h0 : _T_676; // @[Lookup.scala 33:37]
  wire [3:0] _T_678 = _T_95 ? 4'h0 : _T_677; // @[Lookup.scala 33:37]
  wire [3:0] _T_679 = _T_93 ? 4'h0 : _T_678; // @[Lookup.scala 33:37]
  wire [3:0] _T_680 = _T_91 ? 4'h0 : _T_679; // @[Lookup.scala 33:37]
  wire [3:0] _T_681 = _T_89 ? 4'h0 : _T_680; // @[Lookup.scala 33:37]
  wire [3:0] _T_682 = _T_87 ? 4'h0 : _T_681; // @[Lookup.scala 33:37]
  wire [3:0] _T_683 = _T_85 ? 4'h0 : _T_682; // @[Lookup.scala 33:37]
  wire [3:0] _T_684 = _T_83 ? 4'h0 : _T_683; // @[Lookup.scala 33:37]
  wire [3:0] _T_685 = _T_81 ? 4'h0 : _T_684; // @[Lookup.scala 33:37]
  wire [3:0] _T_686 = _T_79 ? 4'h0 : _T_685; // @[Lookup.scala 33:37]
  wire [3:0] _T_687 = _T_77 ? 4'h0 : _T_686; // @[Lookup.scala 33:37]
  wire [3:0] _T_688 = _T_75 ? 4'h0 : _T_687; // @[Lookup.scala 33:37]
  wire [3:0] _T_689 = _T_73 ? 4'h0 : _T_688; // @[Lookup.scala 33:37]
  wire [3:0] _T_690 = _T_71 ? 4'h0 : _T_689; // @[Lookup.scala 33:37]
  wire [3:0] _T_691 = _T_69 ? 4'h0 : _T_690; // @[Lookup.scala 33:37]
  wire [3:0] _T_692 = _T_67 ? 4'h0 : _T_691; // @[Lookup.scala 33:37]
  wire [3:0] _T_693 = _T_65 ? 4'h0 : _T_692; // @[Lookup.scala 33:37]
  wire [3:0] _T_694 = _T_63 ? 4'h0 : _T_693; // @[Lookup.scala 33:37]
  wire [3:0] _T_695 = _T_61 ? 4'h0 : _T_694; // @[Lookup.scala 33:37]
  wire [3:0] _T_696 = _T_59 ? 4'h0 : _T_695; // @[Lookup.scala 33:37]
  wire [3:0] _T_697 = _T_57 ? 4'h0 : _T_696; // @[Lookup.scala 33:37]
  wire [3:0] _T_698 = _T_55 ? 4'h0 : _T_697; // @[Lookup.scala 33:37]
  wire [3:0] _T_699 = _T_53 ? 4'h0 : _T_698; // @[Lookup.scala 33:37]
  wire [3:0] _T_700 = _T_51 ? 4'h0 : _T_699; // @[Lookup.scala 33:37]
  wire [3:0] _T_701 = _T_49 ? 4'h0 : _T_700; // @[Lookup.scala 33:37]
  wire [3:0] _T_702 = _T_47 ? 4'h0 : _T_701; // @[Lookup.scala 33:37]
  wire [3:0] _T_703 = _T_45 ? 4'h0 : _T_702; // @[Lookup.scala 33:37]
  wire [3:0] _T_704 = _T_43 ? 4'h0 : _T_703; // @[Lookup.scala 33:37]
  wire [3:0] _T_705 = _T_41 ? 4'h0 : _T_704; // @[Lookup.scala 33:37]
  wire [3:0] _T_706 = _T_39 ? 4'h0 : _T_705; // @[Lookup.scala 33:37]
  wire [3:0] _T_707 = _T_37 ? 4'h0 : _T_706; // @[Lookup.scala 33:37]
  wire [3:0] _T_708 = _T_35 ? 4'h0 : _T_707; // @[Lookup.scala 33:37]
  wire [3:0] _T_709 = _T_33 ? 4'h0 : _T_708; // @[Lookup.scala 33:37]
  wire [3:0] _T_710 = _T_31 ? 4'h0 : _T_709; // @[Lookup.scala 33:37]
  wire [3:0] _T_711 = _T_29 ? 4'h0 : _T_710; // @[Lookup.scala 33:37]
  wire [3:0] _T_712 = _T_27 ? 4'h0 : _T_711; // @[Lookup.scala 33:37]
  wire [3:0] _T_713 = _T_25 ? 4'h0 : _T_712; // @[Lookup.scala 33:37]
  wire [3:0] _T_714 = _T_23 ? 4'h0 : _T_713; // @[Lookup.scala 33:37]
  wire [3:0] _T_715 = _T_21 ? 4'h0 : _T_714; // @[Lookup.scala 33:37]
  wire [3:0] _T_716 = _T_135 ? 4'ha : 4'h5; // @[Lookup.scala 33:37]
  wire [3:0] _T_717 = _T_133 ? 4'h0 : _T_716; // @[Lookup.scala 33:37]
  wire [3:0] _T_718 = _T_131 ? 4'h4 : _T_717; // @[Lookup.scala 33:37]
  wire [3:0] _T_719 = _T_129 ? 4'h3 : _T_718; // @[Lookup.scala 33:37]
  wire [3:0] _T_720 = _T_127 ? 4'h2 : _T_719; // @[Lookup.scala 33:37]
  wire [3:0] _T_721 = _T_125 ? 4'h1 : _T_720; // @[Lookup.scala 33:37]
  wire [3:0] _T_722 = _T_123 ? 4'h0 : _T_721; // @[Lookup.scala 33:37]
  wire [3:0] _T_723 = _T_121 ? 4'h0 : _T_722; // @[Lookup.scala 33:37]
  wire [3:0] _T_724 = _T_119 ? 4'h0 : _T_723; // @[Lookup.scala 33:37]
  wire [3:0] _T_725 = _T_117 ? 4'h0 : _T_724; // @[Lookup.scala 33:37]
  wire [3:0] _T_726 = _T_115 ? 4'h0 : _T_725; // @[Lookup.scala 33:37]
  wire [3:0] _T_727 = _T_113 ? 4'h0 : _T_726; // @[Lookup.scala 33:37]
  wire [3:0] _T_728 = _T_111 ? 4'h0 : _T_727; // @[Lookup.scala 33:37]
  wire [3:0] _T_729 = _T_109 ? 4'h0 : _T_728; // @[Lookup.scala 33:37]
  wire [3:0] _T_730 = _T_107 ? 4'h0 : _T_729; // @[Lookup.scala 33:37]
  wire [3:0] _T_731 = _T_105 ? 4'h0 : _T_730; // @[Lookup.scala 33:37]
  wire [3:0] _T_732 = _T_103 ? 4'h0 : _T_731; // @[Lookup.scala 33:37]
  wire [3:0] _T_733 = _T_101 ? 4'h0 : _T_732; // @[Lookup.scala 33:37]
  wire [3:0] _T_734 = _T_99 ? 4'h0 : _T_733; // @[Lookup.scala 33:37]
  wire [3:0] _T_735 = _T_97 ? 4'h0 : _T_734; // @[Lookup.scala 33:37]
  wire [3:0] _T_736 = _T_95 ? 4'h0 : _T_735; // @[Lookup.scala 33:37]
  wire [3:0] _T_737 = _T_93 ? 4'h0 : _T_736; // @[Lookup.scala 33:37]
  wire [3:0] _T_738 = _T_91 ? 4'h8 : _T_737; // @[Lookup.scala 33:37]
  wire [3:0] _T_739 = _T_89 ? 4'h8 : _T_738; // @[Lookup.scala 33:37]
  wire [3:0] _T_740 = _T_87 ? 4'h8 : _T_739; // @[Lookup.scala 33:37]
  wire [3:0] _T_741 = _T_85 ? 4'h8 : _T_740; // @[Lookup.scala 33:37]
  wire [3:0] _T_742 = _T_83 ? 4'h8 : _T_741; // @[Lookup.scala 33:37]
  wire [3:0] _T_743 = _T_81 ? 4'h8 : _T_742; // @[Lookup.scala 33:37]
  wire [3:0] _T_744 = _T_79 ? 4'h8 : _T_743; // @[Lookup.scala 33:37]
  wire [3:0] _T_745 = _T_77 ? 4'h8 : _T_744; // @[Lookup.scala 33:37]
  wire [3:0] _T_746 = _T_75 ? 4'h0 : _T_745; // @[Lookup.scala 33:37]
  wire [3:0] _T_747 = _T_73 ? 4'h0 : _T_746; // @[Lookup.scala 33:37]
  wire [3:0] _T_748 = _T_71 ? 4'h0 : _T_747; // @[Lookup.scala 33:37]
  wire [3:0] _T_749 = _T_69 ? 4'h0 : _T_748; // @[Lookup.scala 33:37]
  wire [3:0] _T_750 = _T_67 ? 4'h0 : _T_749; // @[Lookup.scala 33:37]
  wire [3:0] _T_751 = _T_65 ? 4'h0 : _T_750; // @[Lookup.scala 33:37]
  wire [3:0] _T_752 = _T_63 ? 4'h0 : _T_751; // @[Lookup.scala 33:37]
  wire [3:0] _T_753 = _T_61 ? 4'h0 : _T_752; // @[Lookup.scala 33:37]
  wire [3:0] _T_754 = _T_59 ? 4'h0 : _T_753; // @[Lookup.scala 33:37]
  wire [3:0] _T_755 = _T_57 ? 4'h0 : _T_754; // @[Lookup.scala 33:37]
  wire [3:0] _T_756 = _T_55 ? 4'h0 : _T_755; // @[Lookup.scala 33:37]
  wire [3:0] _T_757 = _T_53 ? 4'h0 : _T_756; // @[Lookup.scala 33:37]
  wire [3:0] _T_758 = _T_51 ? 4'h0 : _T_757; // @[Lookup.scala 33:37]
  wire [3:0] _T_759 = _T_49 ? 4'h0 : _T_758; // @[Lookup.scala 33:37]
  wire [3:0] _T_760 = _T_47 ? 4'h0 : _T_759; // @[Lookup.scala 33:37]
  wire [3:0] _T_761 = _T_45 ? 4'h0 : _T_760; // @[Lookup.scala 33:37]
  wire [3:0] _T_762 = _T_43 ? 4'h0 : _T_761; // @[Lookup.scala 33:37]
  wire [3:0] _T_763 = _T_41 ? 4'h0 : _T_762; // @[Lookup.scala 33:37]
  wire [3:0] _T_764 = _T_39 ? 4'h0 : _T_763; // @[Lookup.scala 33:37]
  wire [3:0] _T_765 = _T_37 ? 4'h0 : _T_764; // @[Lookup.scala 33:37]
  wire [3:0] _T_766 = _T_35 ? 4'h0 : _T_765; // @[Lookup.scala 33:37]
  wire [3:0] _T_767 = _T_33 ? 4'h0 : _T_766; // @[Lookup.scala 33:37]
  wire [3:0] _T_768 = _T_31 ? 4'h0 : _T_767; // @[Lookup.scala 33:37]
  wire [3:0] _T_769 = _T_29 ? 4'h0 : _T_768; // @[Lookup.scala 33:37]
  wire [3:0] _T_770 = _T_27 ? 4'h0 : _T_769; // @[Lookup.scala 33:37]
  wire [3:0] _T_771 = _T_25 ? 4'h0 : _T_770; // @[Lookup.scala 33:37]
  wire [3:0] _T_772 = _T_23 ? 4'h0 : _T_771; // @[Lookup.scala 33:37]
  wire [3:0] _T_773 = _T_21 ? 4'h0 : _T_772; // @[Lookup.scala 33:37]
  wire [3:0] excType = _T_19 ? 4'h0 : _T_773; // @[Lookup.scala 33:37]
  wire  all_jump = branchOp == 3'h1; // @[ID.scala 63:27]
  wire [20:0] _T_775 = {inst[31],inst[19:12],inst[20],inst[30:21],1'h0}; // @[ID.scala 64:43]
  wire [31:0] _GEN_0 = {{11{_T_775[20]}},_T_775}; // @[ID.scala 64:36]
  wire [31:0] jal_pc = $signed(io_if_i_pc) + $signed(_GEN_0); // @[ID.scala 64:51]
  wire [11:0] _T_780 = inst[31:20]; // @[ID.scala 65:46]
  wire [31:0] _GEN_1 = {{20{_T_780[11]}},_T_780}; // @[ID.scala 65:39]
  wire [31:0] imm_jalr = $signed(io_read1_data) + $signed(_GEN_1); // @[ID.scala 65:39]
  wire [31:0] jalr_pc = {imm_jalr[31:1],1'h0}; // @[Cat.scala 30:58]
  wire [31:0] pc_j = regEn1 ? jalr_pc : jal_pc; // @[ID.scala 67:17]
  wire [12:0] _T_785 = {inst[31],inst[7],inst[30:25],inst[11:8],1'h0}; // @[ID.scala 68:40]
  wire [31:0] _GEN_2 = {{19{_T_785[12]}},_T_785}; // @[ID.scala 68:33]
  wire [31:0] pc_b = $signed(io_if_i_pc) + $signed(_GEN_2); // @[ID.scala 68:48]
  wire  _T_789 = branchOp == 3'h0; // @[ID.scala 69:29]
  wire [31:0] _T_790 = all_jump ? pc_j : pc_b; // @[ID.scala 70:19]
  wire [31:0] takepc = _T_789 ? 32'h0 : _T_790; // @[ID.scala 69:19]
  wire  _T_791 = io_read1_data == io_read2_data; // @[ID.scala 73:32]
  wire  _T_792 = io_read1_data != io_read2_data; // @[ID.scala 74:32]
  wire  _T_795 = $signed(io_read1_data) < $signed(io_read2_data); // @[ID.scala 75:39]
  wire  _T_798 = $signed(io_read1_data) >= $signed(io_read2_data); // @[ID.scala 76:39]
  wire  _T_799 = io_read1_data < io_read2_data; // @[ID.scala 77:32]
  wire  _T_800 = io_read1_data >= io_read2_data; // @[ID.scala 78:32]
  wire  _T_801 = 3'h7 == branchOp; // @[Mux.scala 68:19]
  wire  _T_802 = _T_801 & _T_800; // @[Mux.scala 68:16]
  wire  _T_803 = 3'h6 == branchOp; // @[Mux.scala 68:19]
  wire  _T_804 = _T_803 ? _T_799 : _T_802; // @[Mux.scala 68:16]
  wire  _T_805 = 3'h5 == branchOp; // @[Mux.scala 68:19]
  wire  _T_806 = _T_805 ? _T_798 : _T_804; // @[Mux.scala 68:16]
  wire  _T_807 = 3'h4 == branchOp; // @[Mux.scala 68:19]
  wire  _T_808 = _T_807 ? _T_795 : _T_806; // @[Mux.scala 68:16]
  wire  _T_809 = 3'h3 == branchOp; // @[Mux.scala 68:19]
  wire  _T_810 = _T_809 ? _T_792 : _T_808; // @[Mux.scala 68:16]
  wire  _T_811 = 3'h2 == branchOp; // @[Mux.scala 68:19]
  wire  _T_812 = _T_811 ? _T_791 : _T_810; // @[Mux.scala 68:16]
  wire  _T_813 = 3'h1 == branchOp; // @[Mux.scala 68:19]
  wire  branchteke = _T_813 | _T_812; // @[Mux.scala 68:16]
  wire  _T_814 = branchOp != 3'h0; // @[ID.scala 81:29]
  wire  _T_815 = io_if_i_bpu_take != branchteke; // @[ID.scala 81:58]
  wire  _T_816 = io_if_i_bpu_takepc != takepc; // @[ID.scala 81:97]
  wire  _T_817 = _T_815 | _T_816; // @[ID.scala 81:74]
  wire  branchmiss = _T_814 & _T_817; // @[ID.scala 81:37]
  wire [31:0] _T_819 = io_if_i_pc + 32'h4; // @[ID.scala 82:49]
  wire  _T_821 = takepc[1:0] != 2'h0; // @[ID.scala 83:48]
  wire  addrFault = branchteke & _T_821; // @[ID.scala 83:32]
  wire  _T_822 = rd == 5'h0; // @[ID.scala 87:23]
  wire [2:0] _T_823 = _T_822 ? 3'h2 : 3'h3; // @[ID.scala 87:19]
  wire  _T_824 = rs1 == 5'h0; // @[ID.scala 88:24]
  wire [2:0] _T_825 = _T_824 ? 3'h1 : 3'h4; // @[ID.scala 88:19]
  wire [2:0] _T_827 = _T_824 ? 3'h1 : 3'h5; // @[ID.scala 89:19]
  wire  _T_828 = 3'h5 == csrOp; // @[Mux.scala 68:19]
  wire [2:0] _T_829 = _T_828 ? _T_827 : 3'h0; // @[Mux.scala 68:16]
  wire  _T_830 = 3'h4 == csrOp; // @[Mux.scala 68:19]
  wire [2:0] _T_831 = _T_830 ? _T_825 : _T_829; // @[Mux.scala 68:16]
  wire  _T_832 = 3'h3 == csrOp; // @[Mux.scala 68:19]
  wire [2:0] csrActOp = _T_832 ? _T_823 : _T_831; // @[Mux.scala 68:16]
  wire  csren = csrActOp != 3'h0; // @[ID.scala 91:24]
  wire  _T_833 = ~csren; // @[ID.scala 92:23]
  wire [31:0] _T_834 = regEn1 ? io_read1_data : {{27'd0}, rs1}; // @[ID.scala 92:39]
  wire  _T_835 = csrOp != 3'h0; // @[ID.scala 95:31]
  wire  _T_836 = ~io_csrread_csr_valid; // @[ID.scala 95:46]
  wire  _T_837 = _T_835 & _T_836; // @[ID.scala 95:43]
  wire [3:0] _T_838 = addrFault ? 4'h7 : excType; // @[ID.scala 97:24]
  wire [3:0] _T_839 = io_if_i_misaligned ? 4'h7 : _T_838; // @[ID.scala 96:24]
  wire [11:0] _T_840 = csren ? immI : 12'h0; // @[ID.scala 101:28]
  wire  _T_841 = ~io_stallid; // @[ID.scala 104:16]
  wire  _T_842 = ~addrFault; // @[ID.scala 104:31]
  wire  _T_843 = _T_841 & _T_842; // @[ID.scala 104:28]
  wire [11:0] _T_848 = {inst[31:25],rd}; // @[ID.scala 52:25]
  wire [31:0] _T_849 = {inst[31:12],12'h0}; // @[ID.scala 53:25]
  wire [5:0] _T_850 = {1'b0,$signed(rs2)}; // @[ID.scala 54:24]
  wire  _T_852 = 4'h8 == aluSrc1; // @[Mux.scala 68:19]
  wire [3:0] _T_853 = _T_852 ? $signed(4'sh4) : $signed(4'sh0); // @[Mux.scala 68:16]
  wire  _T_854 = 4'h7 == aluSrc1; // @[Mux.scala 68:19]
  wire [31:0] _T_855 = _T_854 ? $signed(io_if_i_pc) : $signed({{28{_T_853[3]}},_T_853}); // @[Mux.scala 68:16]
  wire  _T_856 = 4'h6 == aluSrc1; // @[Mux.scala 68:19]
  wire [31:0] _T_857 = _T_856 ? $signed({{26{_T_850[5]}},_T_850}) : $signed(_T_855); // @[Mux.scala 68:16]
  wire  _T_858 = 4'h5 == aluSrc1; // @[Mux.scala 68:19]
  wire [31:0] _T_859 = _T_858 ? $signed(_T_849) : $signed(_T_857); // @[Mux.scala 68:16]
  wire  _T_860 = 4'h4 == aluSrc1; // @[Mux.scala 68:19]
  wire [31:0] _T_861 = _T_860 ? $signed({{20{_T_848[11]}},_T_848}) : $signed(_T_859); // @[Mux.scala 68:16]
  wire  _T_862 = 4'h3 == aluSrc1; // @[Mux.scala 68:19]
  wire [31:0] _T_863 = _T_862 ? $signed({{20{_T_780[11]}},_T_780}) : $signed(_T_861); // @[Mux.scala 68:16]
  wire  _T_864 = 4'h2 == aluSrc1; // @[Mux.scala 68:19]
  wire [31:0] _T_865 = _T_864 ? $signed(io_read2_data) : $signed(_T_863); // @[Mux.scala 68:16]
  wire  _T_866 = 4'h1 == aluSrc1; // @[Mux.scala 68:19]
  wire  _T_876 = 4'h8 == aluSrc2; // @[Mux.scala 68:19]
  wire [3:0] _T_877 = _T_876 ? $signed(4'sh4) : $signed(4'sh0); // @[Mux.scala 68:16]
  wire  _T_878 = 4'h7 == aluSrc2; // @[Mux.scala 68:19]
  wire [31:0] _T_879 = _T_878 ? $signed(io_if_i_pc) : $signed({{28{_T_877[3]}},_T_877}); // @[Mux.scala 68:16]
  wire  _T_880 = 4'h6 == aluSrc2; // @[Mux.scala 68:19]
  wire [31:0] _T_881 = _T_880 ? $signed({{26{_T_850[5]}},_T_850}) : $signed(_T_879); // @[Mux.scala 68:16]
  wire  _T_882 = 4'h5 == aluSrc2; // @[Mux.scala 68:19]
  wire [31:0] _T_883 = _T_882 ? $signed(_T_849) : $signed(_T_881); // @[Mux.scala 68:16]
  wire  _T_884 = 4'h4 == aluSrc2; // @[Mux.scala 68:19]
  wire [31:0] _T_885 = _T_884 ? $signed({{20{_T_848[11]}},_T_848}) : $signed(_T_883); // @[Mux.scala 68:16]
  wire  _T_886 = 4'h3 == aluSrc2; // @[Mux.scala 68:19]
  wire [31:0] _T_887 = _T_886 ? $signed({{20{_T_780[11]}},_T_780}) : $signed(_T_885); // @[Mux.scala 68:16]
  wire  _T_888 = 4'h2 == aluSrc2; // @[Mux.scala 68:19]
  wire [31:0] _T_889 = _T_888 ? $signed(io_read2_data) : $signed(_T_887); // @[Mux.scala 68:16]
  wire  _T_890 = 4'h1 == aluSrc2; // @[Mux.scala 68:19]
  assign io_read1_en = _T_19 | _T_193; // @[ID.scala 109:17]
  assign io_read1_addr = inst[19:15]; // @[ID.scala 110:17]
  assign io_read2_en = _T_19 | _T_251; // @[ID.scala 111:17]
  assign io_read2_addr = inst[24:20]; // @[ID.scala 112:17]
  assign io_csrread_csr_raddr = {{20'd0}, _T_840}; // @[ID.scala 101:23]
  assign io_csrread_csr_op = _T_832 ? _T_823 : _T_831; // @[ID.scala 100:20]
  assign io_flush = _T_843 & branchmiss; // @[ID.scala 104:13]
  assign io_flushpc = branchteke ? takepc : _T_819; // @[ID.scala 105:15]
  assign io_id_o_aluOp = _T_19 ? 4'h0 : _T_483; // @[ID.scala 114:16]
  assign io_id_o_opr1 = _T_866 ? $signed(io_read1_data) : $signed(_T_865); // @[ID.scala 123:16]
  assign io_id_o_opr2 = _T_890 ? $signed(io_read1_data) : $signed(_T_889); // @[ID.scala 124:16]
  assign io_id_o_mduOp = _T_19 ? 4'h0 : _T_715; // @[ID.scala 122:17]
  assign io_id_o_lsuOp = _T_19 ? 4'h0 : _T_599; // @[ID.scala 120:16]
  assign io_id_o_lsuData = io_read2_data; // @[ID.scala 121:18]
  assign io_id_o_regWen = _T_19 | _T_309; // @[ID.scala 130:22]
  assign io_id_o_regWaddr = inst[11:7]; // @[ID.scala 131:22]
  assign io_id_o_csrOp = _T_832 ? _T_823 : _T_831; // @[ID.scala 115:16]
  assign io_id_o_csrAddr = inst[31:20]; // @[ID.scala 116:18]
  assign io_id_o_csren = csrActOp != 3'h0; // @[ID.scala 118:16]
  assign io_id_o_csrrData = io_csrread_csr_rdata; // @[ID.scala 119:19]
  assign io_id_o_csrwData = _T_833 ? 32'h0 : _T_834; // @[ID.scala 117:19]
  assign io_id_o_excType = _T_837 ? 4'h5 : _T_839; // @[ID.scala 125:18]
  assign io_id_o_excValue = addrFault ? takepc : 32'h0; // @[ID.scala 126:19]
  assign io_id_o_inst = _T ? 32'h13 : io_if_i_inst; // @[ID.scala 127:16]
  assign io_id_o_currentPc = io_if_i_pc; // @[ID.scala 129:21]
endmodule
module MidStage_1(
  input         clock,
  input         reset,
  input         io_flush,
  input         io_stallPrev,
  input         io_stallNext,
  input  [3:0]  io_prev_aluOp,
  input  [31:0] io_prev_opr1,
  input  [31:0] io_prev_opr2,
  input  [3:0]  io_prev_mduOp,
  input  [3:0]  io_prev_lsuOp,
  input  [31:0] io_prev_lsuData,
  input         io_prev_regWen,
  input  [4:0]  io_prev_regWaddr,
  input  [2:0]  io_prev_csrOp,
  input  [11:0] io_prev_csrAddr,
  input         io_prev_csren,
  input  [31:0] io_prev_csrrData,
  input  [31:0] io_prev_csrwData,
  input  [3:0]  io_prev_excType,
  input  [31:0] io_prev_excValue,
  input  [31:0] io_prev_inst,
  input  [31:0] io_prev_currentPc,
  output [3:0]  io_next_aluOp,
  output [31:0] io_next_opr1,
  output [31:0] io_next_opr2,
  output [3:0]  io_next_mduOp,
  output [3:0]  io_next_lsuOp,
  output [31:0] io_next_lsuData,
  output        io_next_regWen,
  output [4:0]  io_next_regWaddr,
  output [2:0]  io_next_csrOp,
  output [11:0] io_next_csrAddr,
  output        io_next_csren,
  output [31:0] io_next_csrrData,
  output [31:0] io_next_csrwData,
  output [3:0]  io_next_excType,
  output [31:0] io_next_excValue,
  output [31:0] io_next_inst,
  output [31:0] io_next_currentPc
);
  reg [3:0] ff_aluOp; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_0;
  reg [31:0] ff_opr1; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_1;
  reg [31:0] ff_opr2; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_2;
  reg [3:0] ff_mduOp; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_3;
  reg [3:0] ff_lsuOp; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_4;
  reg [31:0] ff_lsuData; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_5;
  reg  ff_regWen; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_6;
  reg [4:0] ff_regWaddr; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_7;
  reg [2:0] ff_csrOp; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_8;
  reg [11:0] ff_csrAddr; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_9;
  reg  ff_csren; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_10;
  reg [31:0] ff_csrrData; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_11;
  reg [31:0] ff_csrwData; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_12;
  reg [3:0] ff_excType; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_13;
  reg [31:0] ff_excValue; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_14;
  reg [31:0] ff_inst; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_15;
  reg [31:0] ff_currentPc; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_16;
  wire  _T_1 = ~io_stallNext; // @[MidStage.scala 18:37]
  wire  _T_2 = io_stallPrev & _T_1; // @[MidStage.scala 18:34]
  wire  _T_3 = io_flush | _T_2; // @[MidStage.scala 18:18]
  wire  _T_5 = ~io_stallPrev; // @[MidStage.scala 21:13]
  assign io_next_aluOp = ff_aluOp; // @[MidStage.scala 25:11]
  assign io_next_opr1 = ff_opr1; // @[MidStage.scala 25:11]
  assign io_next_opr2 = ff_opr2; // @[MidStage.scala 25:11]
  assign io_next_mduOp = ff_mduOp; // @[MidStage.scala 25:11]
  assign io_next_lsuOp = ff_lsuOp; // @[MidStage.scala 25:11]
  assign io_next_lsuData = ff_lsuData; // @[MidStage.scala 25:11]
  assign io_next_regWen = ff_regWen; // @[MidStage.scala 25:11]
  assign io_next_regWaddr = ff_regWaddr; // @[MidStage.scala 25:11]
  assign io_next_csrOp = ff_csrOp; // @[MidStage.scala 25:11]
  assign io_next_csrAddr = ff_csrAddr; // @[MidStage.scala 25:11]
  assign io_next_csren = ff_csren; // @[MidStage.scala 25:11]
  assign io_next_csrrData = ff_csrrData; // @[MidStage.scala 25:11]
  assign io_next_csrwData = ff_csrwData; // @[MidStage.scala 25:11]
  assign io_next_excType = ff_excType; // @[MidStage.scala 25:11]
  assign io_next_excValue = ff_excValue; // @[MidStage.scala 25:11]
  assign io_next_inst = ff_inst; // @[MidStage.scala 25:11]
  assign io_next_currentPc = ff_currentPc; // @[MidStage.scala 25:11]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  ff_aluOp = _RAND_0[3:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  ff_opr1 = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  ff_opr2 = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  ff_mduOp = _RAND_3[3:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  ff_lsuOp = _RAND_4[3:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  ff_lsuData = _RAND_5[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  ff_regWen = _RAND_6[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  ff_regWaddr = _RAND_7[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  ff_csrOp = _RAND_8[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  ff_csrAddr = _RAND_9[11:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  ff_csren = _RAND_10[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  ff_csrrData = _RAND_11[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  ff_csrwData = _RAND_12[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  ff_excType = _RAND_13[3:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  ff_excValue = _RAND_14[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  ff_inst = _RAND_15[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {1{`RANDOM}};
  ff_currentPc = _RAND_16[31:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (reset) begin
      ff_aluOp <= 4'h0;
    end else if (_T_3) begin
      ff_aluOp <= 4'h0;
    end else if (_T_5) begin
      ff_aluOp <= io_prev_aluOp;
    end
    if (reset) begin
      ff_opr1 <= 32'h0;
    end else if (_T_3) begin
      ff_opr1 <= 32'h0;
    end else if (_T_5) begin
      ff_opr1 <= io_prev_opr1;
    end
    if (reset) begin
      ff_opr2 <= 32'h0;
    end else if (_T_3) begin
      ff_opr2 <= 32'h0;
    end else if (_T_5) begin
      ff_opr2 <= io_prev_opr2;
    end
    if (reset) begin
      ff_mduOp <= 4'h0;
    end else if (_T_3) begin
      ff_mduOp <= 4'h0;
    end else if (_T_5) begin
      ff_mduOp <= io_prev_mduOp;
    end
    if (reset) begin
      ff_lsuOp <= 4'h0;
    end else if (_T_3) begin
      ff_lsuOp <= 4'h0;
    end else if (_T_5) begin
      ff_lsuOp <= io_prev_lsuOp;
    end
    if (reset) begin
      ff_lsuData <= 32'h0;
    end else if (_T_3) begin
      ff_lsuData <= 32'h0;
    end else if (_T_5) begin
      ff_lsuData <= io_prev_lsuData;
    end
    if (reset) begin
      ff_regWen <= 1'h0;
    end else if (_T_3) begin
      ff_regWen <= 1'h0;
    end else if (_T_5) begin
      ff_regWen <= io_prev_regWen;
    end
    if (reset) begin
      ff_regWaddr <= 5'h0;
    end else if (_T_3) begin
      ff_regWaddr <= 5'h0;
    end else if (_T_5) begin
      ff_regWaddr <= io_prev_regWaddr;
    end
    if (reset) begin
      ff_csrOp <= 3'h0;
    end else if (_T_3) begin
      ff_csrOp <= 3'h0;
    end else if (_T_5) begin
      ff_csrOp <= io_prev_csrOp;
    end
    if (reset) begin
      ff_csrAddr <= 12'h0;
    end else if (_T_3) begin
      ff_csrAddr <= 12'h0;
    end else if (_T_5) begin
      ff_csrAddr <= io_prev_csrAddr;
    end
    if (reset) begin
      ff_csren <= 1'h0;
    end else if (_T_3) begin
      ff_csren <= 1'h0;
    end else if (_T_5) begin
      ff_csren <= io_prev_csren;
    end
    if (reset) begin
      ff_csrrData <= 32'h0;
    end else if (_T_3) begin
      ff_csrrData <= 32'h0;
    end else if (_T_5) begin
      ff_csrrData <= io_prev_csrrData;
    end
    if (reset) begin
      ff_csrwData <= 32'h0;
    end else if (_T_3) begin
      ff_csrwData <= 32'h0;
    end else if (_T_5) begin
      ff_csrwData <= io_prev_csrwData;
    end
    if (reset) begin
      ff_excType <= 4'h0;
    end else if (_T_3) begin
      ff_excType <= 4'h0;
    end else if (_T_5) begin
      ff_excType <= io_prev_excType;
    end
    if (reset) begin
      ff_excValue <= 32'h0;
    end else if (_T_3) begin
      ff_excValue <= 32'h0;
    end else if (_T_5) begin
      ff_excValue <= io_prev_excValue;
    end
    if (reset) begin
      ff_inst <= 32'h0;
    end else if (_T_3) begin
      ff_inst <= 32'h0;
    end else if (_T_5) begin
      ff_inst <= io_prev_inst;
    end
    if (reset) begin
      ff_currentPc <= 32'h0;
    end else if (_T_3) begin
      ff_currentPc <= 32'h0;
    end else if (_T_5) begin
      ff_currentPc <= io_prev_currentPc;
    end
  end
endmodule
module FullAdder(
  input   io_a,
  input   io_b,
  input   io_cin,
  output  io_sum,
  output  io_cout
);
  wire  a_xor_b = io_a ^ io_b; // @[mult.scala 197:22]
  wire  a_and_b = io_a & io_b; // @[mult.scala 199:22]
  wire  b_and_cin = io_b & io_cin; // @[mult.scala 200:24]
  wire  a_and_cin = io_a & io_cin; // @[mult.scala 201:24]
  wire  _T_1 = a_and_b | b_and_cin; // @[mult.scala 202:22]
  assign io_sum = a_xor_b ^ io_cin; // @[mult.scala 198:10]
  assign io_cout = _T_1 | a_and_cin; // @[mult.scala 202:11]
endmodule
module CarrySaveAdder(
  input  [63:0] io_A,
  input  [63:0] io_B,
  input  [63:0] io_Cin,
  output [63:0] io_Sum,
  output [63:0] io_Cout
);
  wire  FullAdder_io_a; // @[mult.scala 171:35]
  wire  FullAdder_io_b; // @[mult.scala 171:35]
  wire  FullAdder_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_1_io_a; // @[mult.scala 171:35]
  wire  FullAdder_1_io_b; // @[mult.scala 171:35]
  wire  FullAdder_1_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_1_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_1_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_2_io_a; // @[mult.scala 171:35]
  wire  FullAdder_2_io_b; // @[mult.scala 171:35]
  wire  FullAdder_2_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_2_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_2_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_3_io_a; // @[mult.scala 171:35]
  wire  FullAdder_3_io_b; // @[mult.scala 171:35]
  wire  FullAdder_3_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_3_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_3_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_4_io_a; // @[mult.scala 171:35]
  wire  FullAdder_4_io_b; // @[mult.scala 171:35]
  wire  FullAdder_4_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_4_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_4_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_5_io_a; // @[mult.scala 171:35]
  wire  FullAdder_5_io_b; // @[mult.scala 171:35]
  wire  FullAdder_5_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_5_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_5_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_6_io_a; // @[mult.scala 171:35]
  wire  FullAdder_6_io_b; // @[mult.scala 171:35]
  wire  FullAdder_6_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_6_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_6_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_7_io_a; // @[mult.scala 171:35]
  wire  FullAdder_7_io_b; // @[mult.scala 171:35]
  wire  FullAdder_7_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_7_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_7_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_8_io_a; // @[mult.scala 171:35]
  wire  FullAdder_8_io_b; // @[mult.scala 171:35]
  wire  FullAdder_8_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_8_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_8_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_9_io_a; // @[mult.scala 171:35]
  wire  FullAdder_9_io_b; // @[mult.scala 171:35]
  wire  FullAdder_9_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_9_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_9_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_10_io_a; // @[mult.scala 171:35]
  wire  FullAdder_10_io_b; // @[mult.scala 171:35]
  wire  FullAdder_10_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_10_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_10_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_11_io_a; // @[mult.scala 171:35]
  wire  FullAdder_11_io_b; // @[mult.scala 171:35]
  wire  FullAdder_11_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_11_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_11_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_12_io_a; // @[mult.scala 171:35]
  wire  FullAdder_12_io_b; // @[mult.scala 171:35]
  wire  FullAdder_12_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_12_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_12_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_13_io_a; // @[mult.scala 171:35]
  wire  FullAdder_13_io_b; // @[mult.scala 171:35]
  wire  FullAdder_13_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_13_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_13_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_14_io_a; // @[mult.scala 171:35]
  wire  FullAdder_14_io_b; // @[mult.scala 171:35]
  wire  FullAdder_14_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_14_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_14_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_15_io_a; // @[mult.scala 171:35]
  wire  FullAdder_15_io_b; // @[mult.scala 171:35]
  wire  FullAdder_15_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_15_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_15_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_16_io_a; // @[mult.scala 171:35]
  wire  FullAdder_16_io_b; // @[mult.scala 171:35]
  wire  FullAdder_16_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_16_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_16_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_17_io_a; // @[mult.scala 171:35]
  wire  FullAdder_17_io_b; // @[mult.scala 171:35]
  wire  FullAdder_17_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_17_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_17_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_18_io_a; // @[mult.scala 171:35]
  wire  FullAdder_18_io_b; // @[mult.scala 171:35]
  wire  FullAdder_18_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_18_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_18_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_19_io_a; // @[mult.scala 171:35]
  wire  FullAdder_19_io_b; // @[mult.scala 171:35]
  wire  FullAdder_19_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_19_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_19_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_20_io_a; // @[mult.scala 171:35]
  wire  FullAdder_20_io_b; // @[mult.scala 171:35]
  wire  FullAdder_20_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_20_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_20_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_21_io_a; // @[mult.scala 171:35]
  wire  FullAdder_21_io_b; // @[mult.scala 171:35]
  wire  FullAdder_21_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_21_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_21_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_22_io_a; // @[mult.scala 171:35]
  wire  FullAdder_22_io_b; // @[mult.scala 171:35]
  wire  FullAdder_22_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_22_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_22_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_23_io_a; // @[mult.scala 171:35]
  wire  FullAdder_23_io_b; // @[mult.scala 171:35]
  wire  FullAdder_23_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_23_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_23_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_24_io_a; // @[mult.scala 171:35]
  wire  FullAdder_24_io_b; // @[mult.scala 171:35]
  wire  FullAdder_24_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_24_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_24_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_25_io_a; // @[mult.scala 171:35]
  wire  FullAdder_25_io_b; // @[mult.scala 171:35]
  wire  FullAdder_25_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_25_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_25_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_26_io_a; // @[mult.scala 171:35]
  wire  FullAdder_26_io_b; // @[mult.scala 171:35]
  wire  FullAdder_26_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_26_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_26_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_27_io_a; // @[mult.scala 171:35]
  wire  FullAdder_27_io_b; // @[mult.scala 171:35]
  wire  FullAdder_27_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_27_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_27_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_28_io_a; // @[mult.scala 171:35]
  wire  FullAdder_28_io_b; // @[mult.scala 171:35]
  wire  FullAdder_28_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_28_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_28_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_29_io_a; // @[mult.scala 171:35]
  wire  FullAdder_29_io_b; // @[mult.scala 171:35]
  wire  FullAdder_29_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_29_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_29_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_30_io_a; // @[mult.scala 171:35]
  wire  FullAdder_30_io_b; // @[mult.scala 171:35]
  wire  FullAdder_30_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_30_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_30_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_31_io_a; // @[mult.scala 171:35]
  wire  FullAdder_31_io_b; // @[mult.scala 171:35]
  wire  FullAdder_31_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_31_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_31_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_32_io_a; // @[mult.scala 171:35]
  wire  FullAdder_32_io_b; // @[mult.scala 171:35]
  wire  FullAdder_32_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_32_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_32_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_33_io_a; // @[mult.scala 171:35]
  wire  FullAdder_33_io_b; // @[mult.scala 171:35]
  wire  FullAdder_33_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_33_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_33_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_34_io_a; // @[mult.scala 171:35]
  wire  FullAdder_34_io_b; // @[mult.scala 171:35]
  wire  FullAdder_34_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_34_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_34_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_35_io_a; // @[mult.scala 171:35]
  wire  FullAdder_35_io_b; // @[mult.scala 171:35]
  wire  FullAdder_35_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_35_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_35_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_36_io_a; // @[mult.scala 171:35]
  wire  FullAdder_36_io_b; // @[mult.scala 171:35]
  wire  FullAdder_36_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_36_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_36_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_37_io_a; // @[mult.scala 171:35]
  wire  FullAdder_37_io_b; // @[mult.scala 171:35]
  wire  FullAdder_37_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_37_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_37_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_38_io_a; // @[mult.scala 171:35]
  wire  FullAdder_38_io_b; // @[mult.scala 171:35]
  wire  FullAdder_38_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_38_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_38_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_39_io_a; // @[mult.scala 171:35]
  wire  FullAdder_39_io_b; // @[mult.scala 171:35]
  wire  FullAdder_39_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_39_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_39_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_40_io_a; // @[mult.scala 171:35]
  wire  FullAdder_40_io_b; // @[mult.scala 171:35]
  wire  FullAdder_40_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_40_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_40_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_41_io_a; // @[mult.scala 171:35]
  wire  FullAdder_41_io_b; // @[mult.scala 171:35]
  wire  FullAdder_41_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_41_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_41_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_42_io_a; // @[mult.scala 171:35]
  wire  FullAdder_42_io_b; // @[mult.scala 171:35]
  wire  FullAdder_42_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_42_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_42_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_43_io_a; // @[mult.scala 171:35]
  wire  FullAdder_43_io_b; // @[mult.scala 171:35]
  wire  FullAdder_43_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_43_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_43_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_44_io_a; // @[mult.scala 171:35]
  wire  FullAdder_44_io_b; // @[mult.scala 171:35]
  wire  FullAdder_44_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_44_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_44_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_45_io_a; // @[mult.scala 171:35]
  wire  FullAdder_45_io_b; // @[mult.scala 171:35]
  wire  FullAdder_45_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_45_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_45_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_46_io_a; // @[mult.scala 171:35]
  wire  FullAdder_46_io_b; // @[mult.scala 171:35]
  wire  FullAdder_46_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_46_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_46_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_47_io_a; // @[mult.scala 171:35]
  wire  FullAdder_47_io_b; // @[mult.scala 171:35]
  wire  FullAdder_47_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_47_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_47_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_48_io_a; // @[mult.scala 171:35]
  wire  FullAdder_48_io_b; // @[mult.scala 171:35]
  wire  FullAdder_48_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_48_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_48_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_49_io_a; // @[mult.scala 171:35]
  wire  FullAdder_49_io_b; // @[mult.scala 171:35]
  wire  FullAdder_49_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_49_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_49_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_50_io_a; // @[mult.scala 171:35]
  wire  FullAdder_50_io_b; // @[mult.scala 171:35]
  wire  FullAdder_50_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_50_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_50_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_51_io_a; // @[mult.scala 171:35]
  wire  FullAdder_51_io_b; // @[mult.scala 171:35]
  wire  FullAdder_51_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_51_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_51_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_52_io_a; // @[mult.scala 171:35]
  wire  FullAdder_52_io_b; // @[mult.scala 171:35]
  wire  FullAdder_52_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_52_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_52_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_53_io_a; // @[mult.scala 171:35]
  wire  FullAdder_53_io_b; // @[mult.scala 171:35]
  wire  FullAdder_53_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_53_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_53_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_54_io_a; // @[mult.scala 171:35]
  wire  FullAdder_54_io_b; // @[mult.scala 171:35]
  wire  FullAdder_54_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_54_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_54_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_55_io_a; // @[mult.scala 171:35]
  wire  FullAdder_55_io_b; // @[mult.scala 171:35]
  wire  FullAdder_55_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_55_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_55_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_56_io_a; // @[mult.scala 171:35]
  wire  FullAdder_56_io_b; // @[mult.scala 171:35]
  wire  FullAdder_56_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_56_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_56_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_57_io_a; // @[mult.scala 171:35]
  wire  FullAdder_57_io_b; // @[mult.scala 171:35]
  wire  FullAdder_57_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_57_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_57_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_58_io_a; // @[mult.scala 171:35]
  wire  FullAdder_58_io_b; // @[mult.scala 171:35]
  wire  FullAdder_58_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_58_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_58_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_59_io_a; // @[mult.scala 171:35]
  wire  FullAdder_59_io_b; // @[mult.scala 171:35]
  wire  FullAdder_59_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_59_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_59_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_60_io_a; // @[mult.scala 171:35]
  wire  FullAdder_60_io_b; // @[mult.scala 171:35]
  wire  FullAdder_60_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_60_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_60_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_61_io_a; // @[mult.scala 171:35]
  wire  FullAdder_61_io_b; // @[mult.scala 171:35]
  wire  FullAdder_61_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_61_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_61_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_62_io_a; // @[mult.scala 171:35]
  wire  FullAdder_62_io_b; // @[mult.scala 171:35]
  wire  FullAdder_62_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_62_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_62_io_cout; // @[mult.scala 171:35]
  wire  FullAdder_63_io_a; // @[mult.scala 171:35]
  wire  FullAdder_63_io_b; // @[mult.scala 171:35]
  wire  FullAdder_63_io_cin; // @[mult.scala 171:35]
  wire  FullAdder_63_io_sum; // @[mult.scala 171:35]
  wire  FullAdder_63_io_cout; // @[mult.scala 171:35]
  wire  sum_1 = FullAdder_1_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_0 = FullAdder_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_3 = FullAdder_3_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_2 = FullAdder_2_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_5 = FullAdder_5_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_4 = FullAdder_4_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_7 = FullAdder_7_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_6 = FullAdder_6_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire [7:0] _T_198 = {sum_7,sum_6,sum_5,sum_4,sum_3,sum_2,sum_1,sum_0}; // @[mult.scala 183:17]
  wire  sum_9 = FullAdder_9_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_8 = FullAdder_8_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_11 = FullAdder_11_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_10 = FullAdder_10_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_13 = FullAdder_13_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_12 = FullAdder_12_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_15 = FullAdder_15_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_14 = FullAdder_14_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire [15:0] _T_206 = {sum_15,sum_14,sum_13,sum_12,sum_11,sum_10,sum_9,sum_8,_T_198}; // @[mult.scala 183:17]
  wire  sum_17 = FullAdder_17_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_16 = FullAdder_16_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_19 = FullAdder_19_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_18 = FullAdder_18_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_21 = FullAdder_21_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_20 = FullAdder_20_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_23 = FullAdder_23_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_22 = FullAdder_22_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire [7:0] _T_213 = {sum_23,sum_22,sum_21,sum_20,sum_19,sum_18,sum_17,sum_16}; // @[mult.scala 183:17]
  wire  sum_25 = FullAdder_25_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_24 = FullAdder_24_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_27 = FullAdder_27_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_26 = FullAdder_26_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_29 = FullAdder_29_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_28 = FullAdder_28_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_31 = FullAdder_31_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_30 = FullAdder_30_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire [31:0] _T_222 = {sum_31,sum_30,sum_29,sum_28,sum_27,sum_26,sum_25,sum_24,_T_213,_T_206}; // @[mult.scala 183:17]
  wire  sum_33 = FullAdder_33_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_32 = FullAdder_32_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_35 = FullAdder_35_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_34 = FullAdder_34_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_37 = FullAdder_37_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_36 = FullAdder_36_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_39 = FullAdder_39_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_38 = FullAdder_38_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire [7:0] _T_229 = {sum_39,sum_38,sum_37,sum_36,sum_35,sum_34,sum_33,sum_32}; // @[mult.scala 183:17]
  wire  sum_41 = FullAdder_41_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_40 = FullAdder_40_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_43 = FullAdder_43_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_42 = FullAdder_42_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_45 = FullAdder_45_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_44 = FullAdder_44_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_47 = FullAdder_47_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_46 = FullAdder_46_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire [15:0] _T_237 = {sum_47,sum_46,sum_45,sum_44,sum_43,sum_42,sum_41,sum_40,_T_229}; // @[mult.scala 183:17]
  wire  sum_49 = FullAdder_49_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_48 = FullAdder_48_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_51 = FullAdder_51_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_50 = FullAdder_50_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_53 = FullAdder_53_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_52 = FullAdder_52_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_55 = FullAdder_55_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_54 = FullAdder_54_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire [7:0] _T_244 = {sum_55,sum_54,sum_53,sum_52,sum_51,sum_50,sum_49,sum_48}; // @[mult.scala 183:17]
  wire  sum_57 = FullAdder_57_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_56 = FullAdder_56_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_59 = FullAdder_59_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_58 = FullAdder_58_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_61 = FullAdder_61_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_60 = FullAdder_60_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_63 = FullAdder_63_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire  sum_62 = FullAdder_62_io_sum; // @[mult.scala 173:19 mult.scala 181:12]
  wire [31:0] _T_253 = {sum_63,sum_62,sum_61,sum_60,sum_59,sum_58,sum_57,sum_56,_T_244,_T_237}; // @[mult.scala 183:17]
  wire  carry_1 = FullAdder_1_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_0 = FullAdder_io_cout; // @[mult.scala 172:19 mult.scala 175:12 mult.scala 180:14]
  wire  carry_3 = FullAdder_3_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_2 = FullAdder_2_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_5 = FullAdder_5_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_4 = FullAdder_4_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_7 = FullAdder_7_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_6 = FullAdder_6_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire [7:0] _T_261 = {carry_7,carry_6,carry_5,carry_4,carry_3,carry_2,carry_1,carry_0}; // @[mult.scala 184:21]
  wire  carry_9 = FullAdder_9_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_8 = FullAdder_8_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_11 = FullAdder_11_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_10 = FullAdder_10_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_13 = FullAdder_13_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_12 = FullAdder_12_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_15 = FullAdder_15_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_14 = FullAdder_14_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire [15:0] _T_269 = {carry_15,carry_14,carry_13,carry_12,carry_11,carry_10,carry_9,carry_8,_T_261}; // @[mult.scala 184:21]
  wire  carry_17 = FullAdder_17_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_16 = FullAdder_16_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_19 = FullAdder_19_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_18 = FullAdder_18_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_21 = FullAdder_21_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_20 = FullAdder_20_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_23 = FullAdder_23_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_22 = FullAdder_22_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire [7:0] _T_276 = {carry_23,carry_22,carry_21,carry_20,carry_19,carry_18,carry_17,carry_16}; // @[mult.scala 184:21]
  wire  carry_25 = FullAdder_25_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_24 = FullAdder_24_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_27 = FullAdder_27_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_26 = FullAdder_26_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_29 = FullAdder_29_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_28 = FullAdder_28_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_31 = FullAdder_31_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_30 = FullAdder_30_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire [31:0] _T_285 = {carry_31,carry_30,carry_29,carry_28,carry_27,carry_26,carry_25,carry_24,_T_276,_T_269}; // @[mult.scala 184:21]
  wire  carry_33 = FullAdder_33_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_32 = FullAdder_32_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_35 = FullAdder_35_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_34 = FullAdder_34_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_37 = FullAdder_37_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_36 = FullAdder_36_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_39 = FullAdder_39_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_38 = FullAdder_38_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire [7:0] _T_292 = {carry_39,carry_38,carry_37,carry_36,carry_35,carry_34,carry_33,carry_32}; // @[mult.scala 184:21]
  wire  carry_41 = FullAdder_41_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_40 = FullAdder_40_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_43 = FullAdder_43_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_42 = FullAdder_42_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_45 = FullAdder_45_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_44 = FullAdder_44_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_47 = FullAdder_47_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_46 = FullAdder_46_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire [15:0] _T_300 = {carry_47,carry_46,carry_45,carry_44,carry_43,carry_42,carry_41,carry_40,_T_292}; // @[mult.scala 184:21]
  wire  carry_49 = FullAdder_49_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_48 = FullAdder_48_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_51 = FullAdder_51_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_50 = FullAdder_50_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_53 = FullAdder_53_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_52 = FullAdder_52_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_55 = FullAdder_55_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_54 = FullAdder_54_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire [7:0] _T_307 = {carry_55,carry_54,carry_53,carry_52,carry_51,carry_50,carry_49,carry_48}; // @[mult.scala 184:21]
  wire  carry_57 = FullAdder_57_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_56 = FullAdder_56_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_59 = FullAdder_59_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_58 = FullAdder_58_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_61 = FullAdder_61_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_60 = FullAdder_60_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_63 = FullAdder_63_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire  carry_62 = FullAdder_62_io_cout; // @[mult.scala 172:19 mult.scala 180:14]
  wire [31:0] _T_316 = {carry_63,carry_62,carry_61,carry_60,carry_59,carry_58,carry_57,carry_56,_T_307,_T_300}; // @[mult.scala 184:21]
  wire [63:0] _T_317 = {_T_316,_T_285}; // @[mult.scala 184:21]
  wire [64:0] _T_318 = {_T_317, 1'h0}; // @[mult.scala 184:28]
  FullAdder FullAdder ( // @[mult.scala 171:35]
    .io_a(FullAdder_io_a),
    .io_b(FullAdder_io_b),
    .io_cin(FullAdder_io_cin),
    .io_sum(FullAdder_io_sum),
    .io_cout(FullAdder_io_cout)
  );
  FullAdder FullAdder_1 ( // @[mult.scala 171:35]
    .io_a(FullAdder_1_io_a),
    .io_b(FullAdder_1_io_b),
    .io_cin(FullAdder_1_io_cin),
    .io_sum(FullAdder_1_io_sum),
    .io_cout(FullAdder_1_io_cout)
  );
  FullAdder FullAdder_2 ( // @[mult.scala 171:35]
    .io_a(FullAdder_2_io_a),
    .io_b(FullAdder_2_io_b),
    .io_cin(FullAdder_2_io_cin),
    .io_sum(FullAdder_2_io_sum),
    .io_cout(FullAdder_2_io_cout)
  );
  FullAdder FullAdder_3 ( // @[mult.scala 171:35]
    .io_a(FullAdder_3_io_a),
    .io_b(FullAdder_3_io_b),
    .io_cin(FullAdder_3_io_cin),
    .io_sum(FullAdder_3_io_sum),
    .io_cout(FullAdder_3_io_cout)
  );
  FullAdder FullAdder_4 ( // @[mult.scala 171:35]
    .io_a(FullAdder_4_io_a),
    .io_b(FullAdder_4_io_b),
    .io_cin(FullAdder_4_io_cin),
    .io_sum(FullAdder_4_io_sum),
    .io_cout(FullAdder_4_io_cout)
  );
  FullAdder FullAdder_5 ( // @[mult.scala 171:35]
    .io_a(FullAdder_5_io_a),
    .io_b(FullAdder_5_io_b),
    .io_cin(FullAdder_5_io_cin),
    .io_sum(FullAdder_5_io_sum),
    .io_cout(FullAdder_5_io_cout)
  );
  FullAdder FullAdder_6 ( // @[mult.scala 171:35]
    .io_a(FullAdder_6_io_a),
    .io_b(FullAdder_6_io_b),
    .io_cin(FullAdder_6_io_cin),
    .io_sum(FullAdder_6_io_sum),
    .io_cout(FullAdder_6_io_cout)
  );
  FullAdder FullAdder_7 ( // @[mult.scala 171:35]
    .io_a(FullAdder_7_io_a),
    .io_b(FullAdder_7_io_b),
    .io_cin(FullAdder_7_io_cin),
    .io_sum(FullAdder_7_io_sum),
    .io_cout(FullAdder_7_io_cout)
  );
  FullAdder FullAdder_8 ( // @[mult.scala 171:35]
    .io_a(FullAdder_8_io_a),
    .io_b(FullAdder_8_io_b),
    .io_cin(FullAdder_8_io_cin),
    .io_sum(FullAdder_8_io_sum),
    .io_cout(FullAdder_8_io_cout)
  );
  FullAdder FullAdder_9 ( // @[mult.scala 171:35]
    .io_a(FullAdder_9_io_a),
    .io_b(FullAdder_9_io_b),
    .io_cin(FullAdder_9_io_cin),
    .io_sum(FullAdder_9_io_sum),
    .io_cout(FullAdder_9_io_cout)
  );
  FullAdder FullAdder_10 ( // @[mult.scala 171:35]
    .io_a(FullAdder_10_io_a),
    .io_b(FullAdder_10_io_b),
    .io_cin(FullAdder_10_io_cin),
    .io_sum(FullAdder_10_io_sum),
    .io_cout(FullAdder_10_io_cout)
  );
  FullAdder FullAdder_11 ( // @[mult.scala 171:35]
    .io_a(FullAdder_11_io_a),
    .io_b(FullAdder_11_io_b),
    .io_cin(FullAdder_11_io_cin),
    .io_sum(FullAdder_11_io_sum),
    .io_cout(FullAdder_11_io_cout)
  );
  FullAdder FullAdder_12 ( // @[mult.scala 171:35]
    .io_a(FullAdder_12_io_a),
    .io_b(FullAdder_12_io_b),
    .io_cin(FullAdder_12_io_cin),
    .io_sum(FullAdder_12_io_sum),
    .io_cout(FullAdder_12_io_cout)
  );
  FullAdder FullAdder_13 ( // @[mult.scala 171:35]
    .io_a(FullAdder_13_io_a),
    .io_b(FullAdder_13_io_b),
    .io_cin(FullAdder_13_io_cin),
    .io_sum(FullAdder_13_io_sum),
    .io_cout(FullAdder_13_io_cout)
  );
  FullAdder FullAdder_14 ( // @[mult.scala 171:35]
    .io_a(FullAdder_14_io_a),
    .io_b(FullAdder_14_io_b),
    .io_cin(FullAdder_14_io_cin),
    .io_sum(FullAdder_14_io_sum),
    .io_cout(FullAdder_14_io_cout)
  );
  FullAdder FullAdder_15 ( // @[mult.scala 171:35]
    .io_a(FullAdder_15_io_a),
    .io_b(FullAdder_15_io_b),
    .io_cin(FullAdder_15_io_cin),
    .io_sum(FullAdder_15_io_sum),
    .io_cout(FullAdder_15_io_cout)
  );
  FullAdder FullAdder_16 ( // @[mult.scala 171:35]
    .io_a(FullAdder_16_io_a),
    .io_b(FullAdder_16_io_b),
    .io_cin(FullAdder_16_io_cin),
    .io_sum(FullAdder_16_io_sum),
    .io_cout(FullAdder_16_io_cout)
  );
  FullAdder FullAdder_17 ( // @[mult.scala 171:35]
    .io_a(FullAdder_17_io_a),
    .io_b(FullAdder_17_io_b),
    .io_cin(FullAdder_17_io_cin),
    .io_sum(FullAdder_17_io_sum),
    .io_cout(FullAdder_17_io_cout)
  );
  FullAdder FullAdder_18 ( // @[mult.scala 171:35]
    .io_a(FullAdder_18_io_a),
    .io_b(FullAdder_18_io_b),
    .io_cin(FullAdder_18_io_cin),
    .io_sum(FullAdder_18_io_sum),
    .io_cout(FullAdder_18_io_cout)
  );
  FullAdder FullAdder_19 ( // @[mult.scala 171:35]
    .io_a(FullAdder_19_io_a),
    .io_b(FullAdder_19_io_b),
    .io_cin(FullAdder_19_io_cin),
    .io_sum(FullAdder_19_io_sum),
    .io_cout(FullAdder_19_io_cout)
  );
  FullAdder FullAdder_20 ( // @[mult.scala 171:35]
    .io_a(FullAdder_20_io_a),
    .io_b(FullAdder_20_io_b),
    .io_cin(FullAdder_20_io_cin),
    .io_sum(FullAdder_20_io_sum),
    .io_cout(FullAdder_20_io_cout)
  );
  FullAdder FullAdder_21 ( // @[mult.scala 171:35]
    .io_a(FullAdder_21_io_a),
    .io_b(FullAdder_21_io_b),
    .io_cin(FullAdder_21_io_cin),
    .io_sum(FullAdder_21_io_sum),
    .io_cout(FullAdder_21_io_cout)
  );
  FullAdder FullAdder_22 ( // @[mult.scala 171:35]
    .io_a(FullAdder_22_io_a),
    .io_b(FullAdder_22_io_b),
    .io_cin(FullAdder_22_io_cin),
    .io_sum(FullAdder_22_io_sum),
    .io_cout(FullAdder_22_io_cout)
  );
  FullAdder FullAdder_23 ( // @[mult.scala 171:35]
    .io_a(FullAdder_23_io_a),
    .io_b(FullAdder_23_io_b),
    .io_cin(FullAdder_23_io_cin),
    .io_sum(FullAdder_23_io_sum),
    .io_cout(FullAdder_23_io_cout)
  );
  FullAdder FullAdder_24 ( // @[mult.scala 171:35]
    .io_a(FullAdder_24_io_a),
    .io_b(FullAdder_24_io_b),
    .io_cin(FullAdder_24_io_cin),
    .io_sum(FullAdder_24_io_sum),
    .io_cout(FullAdder_24_io_cout)
  );
  FullAdder FullAdder_25 ( // @[mult.scala 171:35]
    .io_a(FullAdder_25_io_a),
    .io_b(FullAdder_25_io_b),
    .io_cin(FullAdder_25_io_cin),
    .io_sum(FullAdder_25_io_sum),
    .io_cout(FullAdder_25_io_cout)
  );
  FullAdder FullAdder_26 ( // @[mult.scala 171:35]
    .io_a(FullAdder_26_io_a),
    .io_b(FullAdder_26_io_b),
    .io_cin(FullAdder_26_io_cin),
    .io_sum(FullAdder_26_io_sum),
    .io_cout(FullAdder_26_io_cout)
  );
  FullAdder FullAdder_27 ( // @[mult.scala 171:35]
    .io_a(FullAdder_27_io_a),
    .io_b(FullAdder_27_io_b),
    .io_cin(FullAdder_27_io_cin),
    .io_sum(FullAdder_27_io_sum),
    .io_cout(FullAdder_27_io_cout)
  );
  FullAdder FullAdder_28 ( // @[mult.scala 171:35]
    .io_a(FullAdder_28_io_a),
    .io_b(FullAdder_28_io_b),
    .io_cin(FullAdder_28_io_cin),
    .io_sum(FullAdder_28_io_sum),
    .io_cout(FullAdder_28_io_cout)
  );
  FullAdder FullAdder_29 ( // @[mult.scala 171:35]
    .io_a(FullAdder_29_io_a),
    .io_b(FullAdder_29_io_b),
    .io_cin(FullAdder_29_io_cin),
    .io_sum(FullAdder_29_io_sum),
    .io_cout(FullAdder_29_io_cout)
  );
  FullAdder FullAdder_30 ( // @[mult.scala 171:35]
    .io_a(FullAdder_30_io_a),
    .io_b(FullAdder_30_io_b),
    .io_cin(FullAdder_30_io_cin),
    .io_sum(FullAdder_30_io_sum),
    .io_cout(FullAdder_30_io_cout)
  );
  FullAdder FullAdder_31 ( // @[mult.scala 171:35]
    .io_a(FullAdder_31_io_a),
    .io_b(FullAdder_31_io_b),
    .io_cin(FullAdder_31_io_cin),
    .io_sum(FullAdder_31_io_sum),
    .io_cout(FullAdder_31_io_cout)
  );
  FullAdder FullAdder_32 ( // @[mult.scala 171:35]
    .io_a(FullAdder_32_io_a),
    .io_b(FullAdder_32_io_b),
    .io_cin(FullAdder_32_io_cin),
    .io_sum(FullAdder_32_io_sum),
    .io_cout(FullAdder_32_io_cout)
  );
  FullAdder FullAdder_33 ( // @[mult.scala 171:35]
    .io_a(FullAdder_33_io_a),
    .io_b(FullAdder_33_io_b),
    .io_cin(FullAdder_33_io_cin),
    .io_sum(FullAdder_33_io_sum),
    .io_cout(FullAdder_33_io_cout)
  );
  FullAdder FullAdder_34 ( // @[mult.scala 171:35]
    .io_a(FullAdder_34_io_a),
    .io_b(FullAdder_34_io_b),
    .io_cin(FullAdder_34_io_cin),
    .io_sum(FullAdder_34_io_sum),
    .io_cout(FullAdder_34_io_cout)
  );
  FullAdder FullAdder_35 ( // @[mult.scala 171:35]
    .io_a(FullAdder_35_io_a),
    .io_b(FullAdder_35_io_b),
    .io_cin(FullAdder_35_io_cin),
    .io_sum(FullAdder_35_io_sum),
    .io_cout(FullAdder_35_io_cout)
  );
  FullAdder FullAdder_36 ( // @[mult.scala 171:35]
    .io_a(FullAdder_36_io_a),
    .io_b(FullAdder_36_io_b),
    .io_cin(FullAdder_36_io_cin),
    .io_sum(FullAdder_36_io_sum),
    .io_cout(FullAdder_36_io_cout)
  );
  FullAdder FullAdder_37 ( // @[mult.scala 171:35]
    .io_a(FullAdder_37_io_a),
    .io_b(FullAdder_37_io_b),
    .io_cin(FullAdder_37_io_cin),
    .io_sum(FullAdder_37_io_sum),
    .io_cout(FullAdder_37_io_cout)
  );
  FullAdder FullAdder_38 ( // @[mult.scala 171:35]
    .io_a(FullAdder_38_io_a),
    .io_b(FullAdder_38_io_b),
    .io_cin(FullAdder_38_io_cin),
    .io_sum(FullAdder_38_io_sum),
    .io_cout(FullAdder_38_io_cout)
  );
  FullAdder FullAdder_39 ( // @[mult.scala 171:35]
    .io_a(FullAdder_39_io_a),
    .io_b(FullAdder_39_io_b),
    .io_cin(FullAdder_39_io_cin),
    .io_sum(FullAdder_39_io_sum),
    .io_cout(FullAdder_39_io_cout)
  );
  FullAdder FullAdder_40 ( // @[mult.scala 171:35]
    .io_a(FullAdder_40_io_a),
    .io_b(FullAdder_40_io_b),
    .io_cin(FullAdder_40_io_cin),
    .io_sum(FullAdder_40_io_sum),
    .io_cout(FullAdder_40_io_cout)
  );
  FullAdder FullAdder_41 ( // @[mult.scala 171:35]
    .io_a(FullAdder_41_io_a),
    .io_b(FullAdder_41_io_b),
    .io_cin(FullAdder_41_io_cin),
    .io_sum(FullAdder_41_io_sum),
    .io_cout(FullAdder_41_io_cout)
  );
  FullAdder FullAdder_42 ( // @[mult.scala 171:35]
    .io_a(FullAdder_42_io_a),
    .io_b(FullAdder_42_io_b),
    .io_cin(FullAdder_42_io_cin),
    .io_sum(FullAdder_42_io_sum),
    .io_cout(FullAdder_42_io_cout)
  );
  FullAdder FullAdder_43 ( // @[mult.scala 171:35]
    .io_a(FullAdder_43_io_a),
    .io_b(FullAdder_43_io_b),
    .io_cin(FullAdder_43_io_cin),
    .io_sum(FullAdder_43_io_sum),
    .io_cout(FullAdder_43_io_cout)
  );
  FullAdder FullAdder_44 ( // @[mult.scala 171:35]
    .io_a(FullAdder_44_io_a),
    .io_b(FullAdder_44_io_b),
    .io_cin(FullAdder_44_io_cin),
    .io_sum(FullAdder_44_io_sum),
    .io_cout(FullAdder_44_io_cout)
  );
  FullAdder FullAdder_45 ( // @[mult.scala 171:35]
    .io_a(FullAdder_45_io_a),
    .io_b(FullAdder_45_io_b),
    .io_cin(FullAdder_45_io_cin),
    .io_sum(FullAdder_45_io_sum),
    .io_cout(FullAdder_45_io_cout)
  );
  FullAdder FullAdder_46 ( // @[mult.scala 171:35]
    .io_a(FullAdder_46_io_a),
    .io_b(FullAdder_46_io_b),
    .io_cin(FullAdder_46_io_cin),
    .io_sum(FullAdder_46_io_sum),
    .io_cout(FullAdder_46_io_cout)
  );
  FullAdder FullAdder_47 ( // @[mult.scala 171:35]
    .io_a(FullAdder_47_io_a),
    .io_b(FullAdder_47_io_b),
    .io_cin(FullAdder_47_io_cin),
    .io_sum(FullAdder_47_io_sum),
    .io_cout(FullAdder_47_io_cout)
  );
  FullAdder FullAdder_48 ( // @[mult.scala 171:35]
    .io_a(FullAdder_48_io_a),
    .io_b(FullAdder_48_io_b),
    .io_cin(FullAdder_48_io_cin),
    .io_sum(FullAdder_48_io_sum),
    .io_cout(FullAdder_48_io_cout)
  );
  FullAdder FullAdder_49 ( // @[mult.scala 171:35]
    .io_a(FullAdder_49_io_a),
    .io_b(FullAdder_49_io_b),
    .io_cin(FullAdder_49_io_cin),
    .io_sum(FullAdder_49_io_sum),
    .io_cout(FullAdder_49_io_cout)
  );
  FullAdder FullAdder_50 ( // @[mult.scala 171:35]
    .io_a(FullAdder_50_io_a),
    .io_b(FullAdder_50_io_b),
    .io_cin(FullAdder_50_io_cin),
    .io_sum(FullAdder_50_io_sum),
    .io_cout(FullAdder_50_io_cout)
  );
  FullAdder FullAdder_51 ( // @[mult.scala 171:35]
    .io_a(FullAdder_51_io_a),
    .io_b(FullAdder_51_io_b),
    .io_cin(FullAdder_51_io_cin),
    .io_sum(FullAdder_51_io_sum),
    .io_cout(FullAdder_51_io_cout)
  );
  FullAdder FullAdder_52 ( // @[mult.scala 171:35]
    .io_a(FullAdder_52_io_a),
    .io_b(FullAdder_52_io_b),
    .io_cin(FullAdder_52_io_cin),
    .io_sum(FullAdder_52_io_sum),
    .io_cout(FullAdder_52_io_cout)
  );
  FullAdder FullAdder_53 ( // @[mult.scala 171:35]
    .io_a(FullAdder_53_io_a),
    .io_b(FullAdder_53_io_b),
    .io_cin(FullAdder_53_io_cin),
    .io_sum(FullAdder_53_io_sum),
    .io_cout(FullAdder_53_io_cout)
  );
  FullAdder FullAdder_54 ( // @[mult.scala 171:35]
    .io_a(FullAdder_54_io_a),
    .io_b(FullAdder_54_io_b),
    .io_cin(FullAdder_54_io_cin),
    .io_sum(FullAdder_54_io_sum),
    .io_cout(FullAdder_54_io_cout)
  );
  FullAdder FullAdder_55 ( // @[mult.scala 171:35]
    .io_a(FullAdder_55_io_a),
    .io_b(FullAdder_55_io_b),
    .io_cin(FullAdder_55_io_cin),
    .io_sum(FullAdder_55_io_sum),
    .io_cout(FullAdder_55_io_cout)
  );
  FullAdder FullAdder_56 ( // @[mult.scala 171:35]
    .io_a(FullAdder_56_io_a),
    .io_b(FullAdder_56_io_b),
    .io_cin(FullAdder_56_io_cin),
    .io_sum(FullAdder_56_io_sum),
    .io_cout(FullAdder_56_io_cout)
  );
  FullAdder FullAdder_57 ( // @[mult.scala 171:35]
    .io_a(FullAdder_57_io_a),
    .io_b(FullAdder_57_io_b),
    .io_cin(FullAdder_57_io_cin),
    .io_sum(FullAdder_57_io_sum),
    .io_cout(FullAdder_57_io_cout)
  );
  FullAdder FullAdder_58 ( // @[mult.scala 171:35]
    .io_a(FullAdder_58_io_a),
    .io_b(FullAdder_58_io_b),
    .io_cin(FullAdder_58_io_cin),
    .io_sum(FullAdder_58_io_sum),
    .io_cout(FullAdder_58_io_cout)
  );
  FullAdder FullAdder_59 ( // @[mult.scala 171:35]
    .io_a(FullAdder_59_io_a),
    .io_b(FullAdder_59_io_b),
    .io_cin(FullAdder_59_io_cin),
    .io_sum(FullAdder_59_io_sum),
    .io_cout(FullAdder_59_io_cout)
  );
  FullAdder FullAdder_60 ( // @[mult.scala 171:35]
    .io_a(FullAdder_60_io_a),
    .io_b(FullAdder_60_io_b),
    .io_cin(FullAdder_60_io_cin),
    .io_sum(FullAdder_60_io_sum),
    .io_cout(FullAdder_60_io_cout)
  );
  FullAdder FullAdder_61 ( // @[mult.scala 171:35]
    .io_a(FullAdder_61_io_a),
    .io_b(FullAdder_61_io_b),
    .io_cin(FullAdder_61_io_cin),
    .io_sum(FullAdder_61_io_sum),
    .io_cout(FullAdder_61_io_cout)
  );
  FullAdder FullAdder_62 ( // @[mult.scala 171:35]
    .io_a(FullAdder_62_io_a),
    .io_b(FullAdder_62_io_b),
    .io_cin(FullAdder_62_io_cin),
    .io_sum(FullAdder_62_io_sum),
    .io_cout(FullAdder_62_io_cout)
  );
  FullAdder FullAdder_63 ( // @[mult.scala 171:35]
    .io_a(FullAdder_63_io_a),
    .io_b(FullAdder_63_io_b),
    .io_cin(FullAdder_63_io_cin),
    .io_sum(FullAdder_63_io_sum),
    .io_cout(FullAdder_63_io_cout)
  );
  assign io_Sum = {_T_253,_T_222}; // @[mult.scala 183:10]
  assign io_Cout = _T_318[63:0]; // @[mult.scala 184:11]
  assign FullAdder_io_a = io_A[0]; // @[mult.scala 177:17]
  assign FullAdder_io_b = io_B[0]; // @[mult.scala 178:17]
  assign FullAdder_io_cin = io_Cin[0]; // @[mult.scala 179:19]
  assign FullAdder_1_io_a = io_A[1]; // @[mult.scala 177:17]
  assign FullAdder_1_io_b = io_B[1]; // @[mult.scala 178:17]
  assign FullAdder_1_io_cin = io_Cin[1]; // @[mult.scala 179:19]
  assign FullAdder_2_io_a = io_A[2]; // @[mult.scala 177:17]
  assign FullAdder_2_io_b = io_B[2]; // @[mult.scala 178:17]
  assign FullAdder_2_io_cin = io_Cin[2]; // @[mult.scala 179:19]
  assign FullAdder_3_io_a = io_A[3]; // @[mult.scala 177:17]
  assign FullAdder_3_io_b = io_B[3]; // @[mult.scala 178:17]
  assign FullAdder_3_io_cin = io_Cin[3]; // @[mult.scala 179:19]
  assign FullAdder_4_io_a = io_A[4]; // @[mult.scala 177:17]
  assign FullAdder_4_io_b = io_B[4]; // @[mult.scala 178:17]
  assign FullAdder_4_io_cin = io_Cin[4]; // @[mult.scala 179:19]
  assign FullAdder_5_io_a = io_A[5]; // @[mult.scala 177:17]
  assign FullAdder_5_io_b = io_B[5]; // @[mult.scala 178:17]
  assign FullAdder_5_io_cin = io_Cin[5]; // @[mult.scala 179:19]
  assign FullAdder_6_io_a = io_A[6]; // @[mult.scala 177:17]
  assign FullAdder_6_io_b = io_B[6]; // @[mult.scala 178:17]
  assign FullAdder_6_io_cin = io_Cin[6]; // @[mult.scala 179:19]
  assign FullAdder_7_io_a = io_A[7]; // @[mult.scala 177:17]
  assign FullAdder_7_io_b = io_B[7]; // @[mult.scala 178:17]
  assign FullAdder_7_io_cin = io_Cin[7]; // @[mult.scala 179:19]
  assign FullAdder_8_io_a = io_A[8]; // @[mult.scala 177:17]
  assign FullAdder_8_io_b = io_B[8]; // @[mult.scala 178:17]
  assign FullAdder_8_io_cin = io_Cin[8]; // @[mult.scala 179:19]
  assign FullAdder_9_io_a = io_A[9]; // @[mult.scala 177:17]
  assign FullAdder_9_io_b = io_B[9]; // @[mult.scala 178:17]
  assign FullAdder_9_io_cin = io_Cin[9]; // @[mult.scala 179:19]
  assign FullAdder_10_io_a = io_A[10]; // @[mult.scala 177:17]
  assign FullAdder_10_io_b = io_B[10]; // @[mult.scala 178:17]
  assign FullAdder_10_io_cin = io_Cin[10]; // @[mult.scala 179:19]
  assign FullAdder_11_io_a = io_A[11]; // @[mult.scala 177:17]
  assign FullAdder_11_io_b = io_B[11]; // @[mult.scala 178:17]
  assign FullAdder_11_io_cin = io_Cin[11]; // @[mult.scala 179:19]
  assign FullAdder_12_io_a = io_A[12]; // @[mult.scala 177:17]
  assign FullAdder_12_io_b = io_B[12]; // @[mult.scala 178:17]
  assign FullAdder_12_io_cin = io_Cin[12]; // @[mult.scala 179:19]
  assign FullAdder_13_io_a = io_A[13]; // @[mult.scala 177:17]
  assign FullAdder_13_io_b = io_B[13]; // @[mult.scala 178:17]
  assign FullAdder_13_io_cin = io_Cin[13]; // @[mult.scala 179:19]
  assign FullAdder_14_io_a = io_A[14]; // @[mult.scala 177:17]
  assign FullAdder_14_io_b = io_B[14]; // @[mult.scala 178:17]
  assign FullAdder_14_io_cin = io_Cin[14]; // @[mult.scala 179:19]
  assign FullAdder_15_io_a = io_A[15]; // @[mult.scala 177:17]
  assign FullAdder_15_io_b = io_B[15]; // @[mult.scala 178:17]
  assign FullAdder_15_io_cin = io_Cin[15]; // @[mult.scala 179:19]
  assign FullAdder_16_io_a = io_A[16]; // @[mult.scala 177:17]
  assign FullAdder_16_io_b = io_B[16]; // @[mult.scala 178:17]
  assign FullAdder_16_io_cin = io_Cin[16]; // @[mult.scala 179:19]
  assign FullAdder_17_io_a = io_A[17]; // @[mult.scala 177:17]
  assign FullAdder_17_io_b = io_B[17]; // @[mult.scala 178:17]
  assign FullAdder_17_io_cin = io_Cin[17]; // @[mult.scala 179:19]
  assign FullAdder_18_io_a = io_A[18]; // @[mult.scala 177:17]
  assign FullAdder_18_io_b = io_B[18]; // @[mult.scala 178:17]
  assign FullAdder_18_io_cin = io_Cin[18]; // @[mult.scala 179:19]
  assign FullAdder_19_io_a = io_A[19]; // @[mult.scala 177:17]
  assign FullAdder_19_io_b = io_B[19]; // @[mult.scala 178:17]
  assign FullAdder_19_io_cin = io_Cin[19]; // @[mult.scala 179:19]
  assign FullAdder_20_io_a = io_A[20]; // @[mult.scala 177:17]
  assign FullAdder_20_io_b = io_B[20]; // @[mult.scala 178:17]
  assign FullAdder_20_io_cin = io_Cin[20]; // @[mult.scala 179:19]
  assign FullAdder_21_io_a = io_A[21]; // @[mult.scala 177:17]
  assign FullAdder_21_io_b = io_B[21]; // @[mult.scala 178:17]
  assign FullAdder_21_io_cin = io_Cin[21]; // @[mult.scala 179:19]
  assign FullAdder_22_io_a = io_A[22]; // @[mult.scala 177:17]
  assign FullAdder_22_io_b = io_B[22]; // @[mult.scala 178:17]
  assign FullAdder_22_io_cin = io_Cin[22]; // @[mult.scala 179:19]
  assign FullAdder_23_io_a = io_A[23]; // @[mult.scala 177:17]
  assign FullAdder_23_io_b = io_B[23]; // @[mult.scala 178:17]
  assign FullAdder_23_io_cin = io_Cin[23]; // @[mult.scala 179:19]
  assign FullAdder_24_io_a = io_A[24]; // @[mult.scala 177:17]
  assign FullAdder_24_io_b = io_B[24]; // @[mult.scala 178:17]
  assign FullAdder_24_io_cin = io_Cin[24]; // @[mult.scala 179:19]
  assign FullAdder_25_io_a = io_A[25]; // @[mult.scala 177:17]
  assign FullAdder_25_io_b = io_B[25]; // @[mult.scala 178:17]
  assign FullAdder_25_io_cin = io_Cin[25]; // @[mult.scala 179:19]
  assign FullAdder_26_io_a = io_A[26]; // @[mult.scala 177:17]
  assign FullAdder_26_io_b = io_B[26]; // @[mult.scala 178:17]
  assign FullAdder_26_io_cin = io_Cin[26]; // @[mult.scala 179:19]
  assign FullAdder_27_io_a = io_A[27]; // @[mult.scala 177:17]
  assign FullAdder_27_io_b = io_B[27]; // @[mult.scala 178:17]
  assign FullAdder_27_io_cin = io_Cin[27]; // @[mult.scala 179:19]
  assign FullAdder_28_io_a = io_A[28]; // @[mult.scala 177:17]
  assign FullAdder_28_io_b = io_B[28]; // @[mult.scala 178:17]
  assign FullAdder_28_io_cin = io_Cin[28]; // @[mult.scala 179:19]
  assign FullAdder_29_io_a = io_A[29]; // @[mult.scala 177:17]
  assign FullAdder_29_io_b = io_B[29]; // @[mult.scala 178:17]
  assign FullAdder_29_io_cin = io_Cin[29]; // @[mult.scala 179:19]
  assign FullAdder_30_io_a = io_A[30]; // @[mult.scala 177:17]
  assign FullAdder_30_io_b = io_B[30]; // @[mult.scala 178:17]
  assign FullAdder_30_io_cin = io_Cin[30]; // @[mult.scala 179:19]
  assign FullAdder_31_io_a = io_A[31]; // @[mult.scala 177:17]
  assign FullAdder_31_io_b = io_B[31]; // @[mult.scala 178:17]
  assign FullAdder_31_io_cin = io_Cin[31]; // @[mult.scala 179:19]
  assign FullAdder_32_io_a = io_A[32]; // @[mult.scala 177:17]
  assign FullAdder_32_io_b = io_B[32]; // @[mult.scala 178:17]
  assign FullAdder_32_io_cin = io_Cin[32]; // @[mult.scala 179:19]
  assign FullAdder_33_io_a = io_A[33]; // @[mult.scala 177:17]
  assign FullAdder_33_io_b = io_B[33]; // @[mult.scala 178:17]
  assign FullAdder_33_io_cin = io_Cin[33]; // @[mult.scala 179:19]
  assign FullAdder_34_io_a = io_A[34]; // @[mult.scala 177:17]
  assign FullAdder_34_io_b = io_B[34]; // @[mult.scala 178:17]
  assign FullAdder_34_io_cin = io_Cin[34]; // @[mult.scala 179:19]
  assign FullAdder_35_io_a = io_A[35]; // @[mult.scala 177:17]
  assign FullAdder_35_io_b = io_B[35]; // @[mult.scala 178:17]
  assign FullAdder_35_io_cin = io_Cin[35]; // @[mult.scala 179:19]
  assign FullAdder_36_io_a = io_A[36]; // @[mult.scala 177:17]
  assign FullAdder_36_io_b = io_B[36]; // @[mult.scala 178:17]
  assign FullAdder_36_io_cin = io_Cin[36]; // @[mult.scala 179:19]
  assign FullAdder_37_io_a = io_A[37]; // @[mult.scala 177:17]
  assign FullAdder_37_io_b = io_B[37]; // @[mult.scala 178:17]
  assign FullAdder_37_io_cin = io_Cin[37]; // @[mult.scala 179:19]
  assign FullAdder_38_io_a = io_A[38]; // @[mult.scala 177:17]
  assign FullAdder_38_io_b = io_B[38]; // @[mult.scala 178:17]
  assign FullAdder_38_io_cin = io_Cin[38]; // @[mult.scala 179:19]
  assign FullAdder_39_io_a = io_A[39]; // @[mult.scala 177:17]
  assign FullAdder_39_io_b = io_B[39]; // @[mult.scala 178:17]
  assign FullAdder_39_io_cin = io_Cin[39]; // @[mult.scala 179:19]
  assign FullAdder_40_io_a = io_A[40]; // @[mult.scala 177:17]
  assign FullAdder_40_io_b = io_B[40]; // @[mult.scala 178:17]
  assign FullAdder_40_io_cin = io_Cin[40]; // @[mult.scala 179:19]
  assign FullAdder_41_io_a = io_A[41]; // @[mult.scala 177:17]
  assign FullAdder_41_io_b = io_B[41]; // @[mult.scala 178:17]
  assign FullAdder_41_io_cin = io_Cin[41]; // @[mult.scala 179:19]
  assign FullAdder_42_io_a = io_A[42]; // @[mult.scala 177:17]
  assign FullAdder_42_io_b = io_B[42]; // @[mult.scala 178:17]
  assign FullAdder_42_io_cin = io_Cin[42]; // @[mult.scala 179:19]
  assign FullAdder_43_io_a = io_A[43]; // @[mult.scala 177:17]
  assign FullAdder_43_io_b = io_B[43]; // @[mult.scala 178:17]
  assign FullAdder_43_io_cin = io_Cin[43]; // @[mult.scala 179:19]
  assign FullAdder_44_io_a = io_A[44]; // @[mult.scala 177:17]
  assign FullAdder_44_io_b = io_B[44]; // @[mult.scala 178:17]
  assign FullAdder_44_io_cin = io_Cin[44]; // @[mult.scala 179:19]
  assign FullAdder_45_io_a = io_A[45]; // @[mult.scala 177:17]
  assign FullAdder_45_io_b = io_B[45]; // @[mult.scala 178:17]
  assign FullAdder_45_io_cin = io_Cin[45]; // @[mult.scala 179:19]
  assign FullAdder_46_io_a = io_A[46]; // @[mult.scala 177:17]
  assign FullAdder_46_io_b = io_B[46]; // @[mult.scala 178:17]
  assign FullAdder_46_io_cin = io_Cin[46]; // @[mult.scala 179:19]
  assign FullAdder_47_io_a = io_A[47]; // @[mult.scala 177:17]
  assign FullAdder_47_io_b = io_B[47]; // @[mult.scala 178:17]
  assign FullAdder_47_io_cin = io_Cin[47]; // @[mult.scala 179:19]
  assign FullAdder_48_io_a = io_A[48]; // @[mult.scala 177:17]
  assign FullAdder_48_io_b = io_B[48]; // @[mult.scala 178:17]
  assign FullAdder_48_io_cin = io_Cin[48]; // @[mult.scala 179:19]
  assign FullAdder_49_io_a = io_A[49]; // @[mult.scala 177:17]
  assign FullAdder_49_io_b = io_B[49]; // @[mult.scala 178:17]
  assign FullAdder_49_io_cin = io_Cin[49]; // @[mult.scala 179:19]
  assign FullAdder_50_io_a = io_A[50]; // @[mult.scala 177:17]
  assign FullAdder_50_io_b = io_B[50]; // @[mult.scala 178:17]
  assign FullAdder_50_io_cin = io_Cin[50]; // @[mult.scala 179:19]
  assign FullAdder_51_io_a = io_A[51]; // @[mult.scala 177:17]
  assign FullAdder_51_io_b = io_B[51]; // @[mult.scala 178:17]
  assign FullAdder_51_io_cin = io_Cin[51]; // @[mult.scala 179:19]
  assign FullAdder_52_io_a = io_A[52]; // @[mult.scala 177:17]
  assign FullAdder_52_io_b = io_B[52]; // @[mult.scala 178:17]
  assign FullAdder_52_io_cin = io_Cin[52]; // @[mult.scala 179:19]
  assign FullAdder_53_io_a = io_A[53]; // @[mult.scala 177:17]
  assign FullAdder_53_io_b = io_B[53]; // @[mult.scala 178:17]
  assign FullAdder_53_io_cin = io_Cin[53]; // @[mult.scala 179:19]
  assign FullAdder_54_io_a = io_A[54]; // @[mult.scala 177:17]
  assign FullAdder_54_io_b = io_B[54]; // @[mult.scala 178:17]
  assign FullAdder_54_io_cin = io_Cin[54]; // @[mult.scala 179:19]
  assign FullAdder_55_io_a = io_A[55]; // @[mult.scala 177:17]
  assign FullAdder_55_io_b = io_B[55]; // @[mult.scala 178:17]
  assign FullAdder_55_io_cin = io_Cin[55]; // @[mult.scala 179:19]
  assign FullAdder_56_io_a = io_A[56]; // @[mult.scala 177:17]
  assign FullAdder_56_io_b = io_B[56]; // @[mult.scala 178:17]
  assign FullAdder_56_io_cin = io_Cin[56]; // @[mult.scala 179:19]
  assign FullAdder_57_io_a = io_A[57]; // @[mult.scala 177:17]
  assign FullAdder_57_io_b = io_B[57]; // @[mult.scala 178:17]
  assign FullAdder_57_io_cin = io_Cin[57]; // @[mult.scala 179:19]
  assign FullAdder_58_io_a = io_A[58]; // @[mult.scala 177:17]
  assign FullAdder_58_io_b = io_B[58]; // @[mult.scala 178:17]
  assign FullAdder_58_io_cin = io_Cin[58]; // @[mult.scala 179:19]
  assign FullAdder_59_io_a = io_A[59]; // @[mult.scala 177:17]
  assign FullAdder_59_io_b = io_B[59]; // @[mult.scala 178:17]
  assign FullAdder_59_io_cin = io_Cin[59]; // @[mult.scala 179:19]
  assign FullAdder_60_io_a = io_A[60]; // @[mult.scala 177:17]
  assign FullAdder_60_io_b = io_B[60]; // @[mult.scala 178:17]
  assign FullAdder_60_io_cin = io_Cin[60]; // @[mult.scala 179:19]
  assign FullAdder_61_io_a = io_A[61]; // @[mult.scala 177:17]
  assign FullAdder_61_io_b = io_B[61]; // @[mult.scala 178:17]
  assign FullAdder_61_io_cin = io_Cin[61]; // @[mult.scala 179:19]
  assign FullAdder_62_io_a = io_A[62]; // @[mult.scala 177:17]
  assign FullAdder_62_io_b = io_B[62]; // @[mult.scala 178:17]
  assign FullAdder_62_io_cin = io_Cin[62]; // @[mult.scala 179:19]
  assign FullAdder_63_io_a = io_A[63]; // @[mult.scala 177:17]
  assign FullAdder_63_io_b = io_B[63]; // @[mult.scala 178:17]
  assign FullAdder_63_io_cin = io_Cin[63]; // @[mult.scala 179:19]
endmodule
module WallaceMultiplier(
  input  [31:0] io_mul1,
  input  [31:0] io_mul2,
  output [63:0] io_result
);
  wire [63:0] CarrySaveAdder_io_A; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_io_B; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_io_Cin; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_io_Sum; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_io_Cout; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_1_io_A; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_1_io_B; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_1_io_Cin; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_1_io_Sum; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_1_io_Cout; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_2_io_A; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_2_io_B; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_2_io_Cin; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_2_io_Sum; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_2_io_Cout; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_3_io_A; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_3_io_B; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_3_io_Cin; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_3_io_Sum; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_3_io_Cout; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_4_io_A; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_4_io_B; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_4_io_Cin; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_4_io_Sum; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_4_io_Cout; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_5_io_A; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_5_io_B; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_5_io_Cin; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_5_io_Sum; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_5_io_Cout; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_6_io_A; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_6_io_B; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_6_io_Cin; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_6_io_Sum; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_6_io_Cout; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_7_io_A; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_7_io_B; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_7_io_Cin; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_7_io_Sum; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_7_io_Cout; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_8_io_A; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_8_io_B; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_8_io_Cin; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_8_io_Sum; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_8_io_Cout; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_9_io_A; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_9_io_B; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_9_io_Cin; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_9_io_Sum; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_9_io_Cout; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_10_io_A; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_10_io_B; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_10_io_Cin; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_10_io_Sum; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_10_io_Cout; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_11_io_A; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_11_io_B; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_11_io_Cin; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_11_io_Sum; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_11_io_Cout; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_12_io_A; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_12_io_B; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_12_io_Cin; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_12_io_Sum; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_12_io_Cout; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_13_io_A; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_13_io_B; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_13_io_Cin; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_13_io_Sum; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_13_io_Cout; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_14_io_A; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_14_io_B; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_14_io_Cin; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_14_io_Sum; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_14_io_Cout; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_15_io_A; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_15_io_B; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_15_io_Cin; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_15_io_Sum; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_15_io_Cout; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_16_io_A; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_16_io_B; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_16_io_Cin; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_16_io_Sum; // @[mult.scala 50:37]
  wire [63:0] CarrySaveAdder_16_io_Cout; // @[mult.scala 50:37]
  wire [32:0] mulX2 = {io_mul1, 1'h0}; // @[mult.scala 17:18]
  wire [31:0] mulXCom = 32'sh0 - $signed(io_mul1); // @[mult.scala 18:17]
  wire [32:0] _T_4 = {io_mul1, 1'h0}; // @[mult.scala 19:29]
  wire [32:0] mulXCom2 = 33'sh0 - $signed(_T_4); // @[mult.scala 19:18]
  wire [2:0] boothCode_0 = {io_mul2[1],io_mul2[0],1'h0}; // @[Cat.scala 30:58]
  wire [2:0] boothCode_16 = {2'h0,io_mul2[31]}; // @[Cat.scala 30:58]
  wire [2:0] boothCode_1 = {io_mul2[3],io_mul2[2],io_mul2[1]}; // @[Cat.scala 30:58]
  wire [2:0] boothCode_2 = {io_mul2[5],io_mul2[4],io_mul2[3]}; // @[Cat.scala 30:58]
  wire [2:0] boothCode_3 = {io_mul2[7],io_mul2[6],io_mul2[5]}; // @[Cat.scala 30:58]
  wire [2:0] boothCode_4 = {io_mul2[9],io_mul2[8],io_mul2[7]}; // @[Cat.scala 30:58]
  wire [2:0] boothCode_5 = {io_mul2[11],io_mul2[10],io_mul2[9]}; // @[Cat.scala 30:58]
  wire [2:0] boothCode_6 = {io_mul2[13],io_mul2[12],io_mul2[11]}; // @[Cat.scala 30:58]
  wire [2:0] boothCode_7 = {io_mul2[15],io_mul2[14],io_mul2[13]}; // @[Cat.scala 30:58]
  wire [2:0] boothCode_8 = {io_mul2[17],io_mul2[16],io_mul2[15]}; // @[Cat.scala 30:58]
  wire [2:0] boothCode_9 = {io_mul2[19],io_mul2[18],io_mul2[17]}; // @[Cat.scala 30:58]
  wire [2:0] boothCode_10 = {io_mul2[21],io_mul2[20],io_mul2[19]}; // @[Cat.scala 30:58]
  wire [2:0] boothCode_11 = {io_mul2[23],io_mul2[22],io_mul2[21]}; // @[Cat.scala 30:58]
  wire [2:0] boothCode_12 = {io_mul2[25],io_mul2[24],io_mul2[23]}; // @[Cat.scala 30:58]
  wire [2:0] boothCode_13 = {io_mul2[27],io_mul2[26],io_mul2[25]}; // @[Cat.scala 30:58]
  wire [2:0] boothCode_14 = {io_mul2[29],io_mul2[28],io_mul2[27]}; // @[Cat.scala 30:58]
  wire [2:0] boothCode_15 = {io_mul2[31],io_mul2[30],io_mul2[29]}; // @[Cat.scala 30:58]
  wire  _T_89 = boothCode_0 == 3'h0; // @[mult.scala 37:21]
  wire  _T_90 = boothCode_0 == 3'h1; // @[mult.scala 38:21]
  wire  _T_91 = boothCode_0 == 3'h2; // @[mult.scala 38:50]
  wire  _T_92 = _T_90 | _T_91; // @[mult.scala 38:34]
  wire [31:0] _T_95 = io_mul1[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_97 = {_T_95,io_mul1}; // @[Cat.scala 30:58]
  wire  _T_98 = boothCode_0 == 3'h3; // @[mult.scala 39:21]
  wire [30:0] _T_101 = mulX2[32] ? 31'h7fffffff : 31'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_103 = {_T_101,mulX2}; // @[Cat.scala 30:58]
  wire  _T_104 = boothCode_0 == 3'h4; // @[mult.scala 40:21]
  wire [30:0] _T_107 = mulXCom2[32] ? 31'h7fffffff : 31'h0; // @[Bitwise.scala 72:12]
  wire [32:0] _T_109 = 33'sh0 - $signed(_T_4); // @[Cat.scala 30:58]
  wire [63:0] _T_110 = {_T_107,_T_109}; // @[Cat.scala 30:58]
  wire  _T_111 = boothCode_0 == 3'h5; // @[mult.scala 41:21]
  wire  _T_112 = boothCode_0 == 3'h6; // @[mult.scala 41:50]
  wire  _T_113 = _T_111 | _T_112; // @[mult.scala 41:34]
  wire [31:0] _T_116 = mulXCom[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [31:0] _T_118 = 32'sh0 - $signed(io_mul1); // @[Cat.scala 30:58]
  wire [63:0] _T_119 = {_T_116,_T_118}; // @[Cat.scala 30:58]
  wire [63:0] _T_120 = _T_113 ? _T_119 : 64'h0; // @[Mux.scala 87:16]
  wire [63:0] _T_121 = _T_104 ? _T_110 : _T_120; // @[Mux.scala 87:16]
  wire [63:0] _T_122 = _T_98 ? _T_103 : _T_121; // @[Mux.scala 87:16]
  wire [63:0] _T_123 = _T_92 ? _T_97 : _T_122; // @[Mux.scala 87:16]
  wire [64:0] Csum_0 = {{1'd0}, CarrySaveAdder_io_Cout}; // @[mult.scala 23:18 mult.scala 43:12 mult.scala 55:11]
  wire  _T_127 = boothCode_1 == 3'h0; // @[mult.scala 37:21]
  wire  _T_128 = boothCode_1 == 3'h1; // @[mult.scala 38:21]
  wire  _T_129 = boothCode_1 == 3'h2; // @[mult.scala 38:50]
  wire  _T_130 = _T_128 | _T_129; // @[mult.scala 38:34]
  wire [29:0] _T_133 = io_mul1[31] ? 30'h3fffffff : 30'h0; // @[Bitwise.scala 72:12]
  wire [33:0] _T_134 = {io_mul1, 2'h0}; // @[mult.scala 38:103]
  wire [63:0] _T_135 = {_T_133,_T_134}; // @[Cat.scala 30:58]
  wire  _T_136 = boothCode_1 == 3'h3; // @[mult.scala 39:21]
  wire [28:0] _T_139 = mulX2[32] ? 29'h1fffffff : 29'h0; // @[Bitwise.scala 72:12]
  wire [34:0] _T_140 = {mulX2, 2'h0}; // @[mult.scala 39:81]
  wire [63:0] _T_141 = {_T_139,_T_140}; // @[Cat.scala 30:58]
  wire  _T_142 = boothCode_1 == 3'h4; // @[mult.scala 40:21]
  wire [28:0] _T_145 = mulXCom2[32] ? 29'h1fffffff : 29'h0; // @[Bitwise.scala 72:12]
  wire [34:0] _T_147 = {$signed(mulXCom2), 2'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_148 = {_T_145,_T_147}; // @[Cat.scala 30:58]
  wire  _T_149 = boothCode_1 == 3'h5; // @[mult.scala 41:21]
  wire  _T_150 = boothCode_1 == 3'h6; // @[mult.scala 41:50]
  wire  _T_151 = _T_149 | _T_150; // @[mult.scala 41:34]
  wire [29:0] _T_154 = mulXCom[31] ? 30'h3fffffff : 30'h0; // @[Bitwise.scala 72:12]
  wire [33:0] _T_156 = {$signed(mulXCom), 2'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_157 = {_T_154,_T_156}; // @[Cat.scala 30:58]
  wire [63:0] _T_158 = _T_151 ? _T_157 : 64'h0; // @[Mux.scala 87:16]
  wire [63:0] _T_159 = _T_142 ? _T_148 : _T_158; // @[Mux.scala 87:16]
  wire [63:0] _T_160 = _T_136 ? _T_141 : _T_159; // @[Mux.scala 87:16]
  wire [63:0] _T_161 = _T_130 ? _T_135 : _T_160; // @[Mux.scala 87:16]
  wire [64:0] Csum_1 = {{1'd0}, CarrySaveAdder_1_io_Cout}; // @[mult.scala 23:18 mult.scala 43:12 mult.scala 61:11]
  wire  _T_165 = boothCode_2 == 3'h0; // @[mult.scala 37:21]
  wire  _T_166 = boothCode_2 == 3'h1; // @[mult.scala 38:21]
  wire  _T_167 = boothCode_2 == 3'h2; // @[mult.scala 38:50]
  wire  _T_168 = _T_166 | _T_167; // @[mult.scala 38:34]
  wire [27:0] _T_171 = io_mul1[31] ? 28'hfffffff : 28'h0; // @[Bitwise.scala 72:12]
  wire [35:0] _T_172 = {io_mul1, 4'h0}; // @[mult.scala 38:103]
  wire [63:0] _T_173 = {_T_171,_T_172}; // @[Cat.scala 30:58]
  wire  _T_174 = boothCode_2 == 3'h3; // @[mult.scala 39:21]
  wire [26:0] _T_177 = mulX2[32] ? 27'h7ffffff : 27'h0; // @[Bitwise.scala 72:12]
  wire [36:0] _T_178 = {mulX2, 4'h0}; // @[mult.scala 39:81]
  wire [63:0] _T_179 = {_T_177,_T_178}; // @[Cat.scala 30:58]
  wire  _T_180 = boothCode_2 == 3'h4; // @[mult.scala 40:21]
  wire [26:0] _T_183 = mulXCom2[32] ? 27'h7ffffff : 27'h0; // @[Bitwise.scala 72:12]
  wire [36:0] _T_185 = {$signed(mulXCom2), 4'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_186 = {_T_183,_T_185}; // @[Cat.scala 30:58]
  wire  _T_187 = boothCode_2 == 3'h5; // @[mult.scala 41:21]
  wire  _T_188 = boothCode_2 == 3'h6; // @[mult.scala 41:50]
  wire  _T_189 = _T_187 | _T_188; // @[mult.scala 41:34]
  wire [27:0] _T_192 = mulXCom[31] ? 28'hfffffff : 28'h0; // @[Bitwise.scala 72:12]
  wire [35:0] _T_194 = {$signed(mulXCom), 4'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_195 = {_T_192,_T_194}; // @[Cat.scala 30:58]
  wire [63:0] _T_196 = _T_189 ? _T_195 : 64'h0; // @[Mux.scala 87:16]
  wire [63:0] _T_197 = _T_180 ? _T_186 : _T_196; // @[Mux.scala 87:16]
  wire [63:0] _T_198 = _T_174 ? _T_179 : _T_197; // @[Mux.scala 87:16]
  wire [63:0] _T_199 = _T_168 ? _T_173 : _T_198; // @[Mux.scala 87:16]
  wire [64:0] Csum_2 = {{1'd0}, CarrySaveAdder_2_io_Cout}; // @[mult.scala 23:18 mult.scala 43:12 mult.scala 67:11]
  wire  _T_203 = boothCode_3 == 3'h0; // @[mult.scala 37:21]
  wire  _T_204 = boothCode_3 == 3'h1; // @[mult.scala 38:21]
  wire  _T_205 = boothCode_3 == 3'h2; // @[mult.scala 38:50]
  wire  _T_206 = _T_204 | _T_205; // @[mult.scala 38:34]
  wire [25:0] _T_209 = io_mul1[31] ? 26'h3ffffff : 26'h0; // @[Bitwise.scala 72:12]
  wire [37:0] _T_210 = {io_mul1, 6'h0}; // @[mult.scala 38:103]
  wire [63:0] _T_211 = {_T_209,_T_210}; // @[Cat.scala 30:58]
  wire  _T_212 = boothCode_3 == 3'h3; // @[mult.scala 39:21]
  wire [24:0] _T_215 = mulX2[32] ? 25'h1ffffff : 25'h0; // @[Bitwise.scala 72:12]
  wire [38:0] _T_216 = {mulX2, 6'h0}; // @[mult.scala 39:81]
  wire [63:0] _T_217 = {_T_215,_T_216}; // @[Cat.scala 30:58]
  wire  _T_218 = boothCode_3 == 3'h4; // @[mult.scala 40:21]
  wire [24:0] _T_221 = mulXCom2[32] ? 25'h1ffffff : 25'h0; // @[Bitwise.scala 72:12]
  wire [38:0] _T_223 = {$signed(mulXCom2), 6'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_224 = {_T_221,_T_223}; // @[Cat.scala 30:58]
  wire  _T_225 = boothCode_3 == 3'h5; // @[mult.scala 41:21]
  wire  _T_226 = boothCode_3 == 3'h6; // @[mult.scala 41:50]
  wire  _T_227 = _T_225 | _T_226; // @[mult.scala 41:34]
  wire [25:0] _T_230 = mulXCom[31] ? 26'h3ffffff : 26'h0; // @[Bitwise.scala 72:12]
  wire [37:0] _T_232 = {$signed(mulXCom), 6'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_233 = {_T_230,_T_232}; // @[Cat.scala 30:58]
  wire [63:0] _T_234 = _T_227 ? _T_233 : 64'h0; // @[Mux.scala 87:16]
  wire [63:0] _T_235 = _T_218 ? _T_224 : _T_234; // @[Mux.scala 87:16]
  wire [63:0] _T_236 = _T_212 ? _T_217 : _T_235; // @[Mux.scala 87:16]
  wire [63:0] _T_237 = _T_206 ? _T_211 : _T_236; // @[Mux.scala 87:16]
  wire [64:0] Csum_3 = {{1'd0}, CarrySaveAdder_3_io_Cout}; // @[mult.scala 23:18 mult.scala 43:12 mult.scala 73:11]
  wire  _T_241 = boothCode_4 == 3'h0; // @[mult.scala 37:21]
  wire  _T_242 = boothCode_4 == 3'h1; // @[mult.scala 38:21]
  wire  _T_243 = boothCode_4 == 3'h2; // @[mult.scala 38:50]
  wire  _T_244 = _T_242 | _T_243; // @[mult.scala 38:34]
  wire [23:0] _T_247 = io_mul1[31] ? 24'hffffff : 24'h0; // @[Bitwise.scala 72:12]
  wire [39:0] _T_248 = {io_mul1, 8'h0}; // @[mult.scala 38:103]
  wire [63:0] _T_249 = {_T_247,_T_248}; // @[Cat.scala 30:58]
  wire  _T_250 = boothCode_4 == 3'h3; // @[mult.scala 39:21]
  wire [22:0] _T_253 = mulX2[32] ? 23'h7fffff : 23'h0; // @[Bitwise.scala 72:12]
  wire [40:0] _T_254 = {mulX2, 8'h0}; // @[mult.scala 39:81]
  wire [63:0] _T_255 = {_T_253,_T_254}; // @[Cat.scala 30:58]
  wire  _T_256 = boothCode_4 == 3'h4; // @[mult.scala 40:21]
  wire [22:0] _T_259 = mulXCom2[32] ? 23'h7fffff : 23'h0; // @[Bitwise.scala 72:12]
  wire [40:0] _T_261 = {$signed(mulXCom2), 8'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_262 = {_T_259,_T_261}; // @[Cat.scala 30:58]
  wire  _T_263 = boothCode_4 == 3'h5; // @[mult.scala 41:21]
  wire  _T_264 = boothCode_4 == 3'h6; // @[mult.scala 41:50]
  wire  _T_265 = _T_263 | _T_264; // @[mult.scala 41:34]
  wire [23:0] _T_268 = mulXCom[31] ? 24'hffffff : 24'h0; // @[Bitwise.scala 72:12]
  wire [39:0] _T_270 = {$signed(mulXCom), 8'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_271 = {_T_268,_T_270}; // @[Cat.scala 30:58]
  wire [63:0] _T_272 = _T_265 ? _T_271 : 64'h0; // @[Mux.scala 87:16]
  wire [63:0] _T_273 = _T_256 ? _T_262 : _T_272; // @[Mux.scala 87:16]
  wire [63:0] _T_274 = _T_250 ? _T_255 : _T_273; // @[Mux.scala 87:16]
  wire [63:0] _T_275 = _T_244 ? _T_249 : _T_274; // @[Mux.scala 87:16]
  wire [64:0] Csum_4 = {{1'd0}, CarrySaveAdder_4_io_Cout}; // @[mult.scala 23:18 mult.scala 43:12 mult.scala 79:11]
  wire  _T_279 = boothCode_5 == 3'h0; // @[mult.scala 37:21]
  wire  _T_280 = boothCode_5 == 3'h1; // @[mult.scala 38:21]
  wire  _T_281 = boothCode_5 == 3'h2; // @[mult.scala 38:50]
  wire  _T_282 = _T_280 | _T_281; // @[mult.scala 38:34]
  wire [21:0] _T_285 = io_mul1[31] ? 22'h3fffff : 22'h0; // @[Bitwise.scala 72:12]
  wire [41:0] _T_286 = {io_mul1, 10'h0}; // @[mult.scala 38:103]
  wire [63:0] _T_287 = {_T_285,_T_286}; // @[Cat.scala 30:58]
  wire  _T_288 = boothCode_5 == 3'h3; // @[mult.scala 39:21]
  wire [20:0] _T_291 = mulX2[32] ? 21'h1fffff : 21'h0; // @[Bitwise.scala 72:12]
  wire [42:0] _T_292 = {mulX2, 10'h0}; // @[mult.scala 39:81]
  wire [63:0] _T_293 = {_T_291,_T_292}; // @[Cat.scala 30:58]
  wire  _T_294 = boothCode_5 == 3'h4; // @[mult.scala 40:21]
  wire [20:0] _T_297 = mulXCom2[32] ? 21'h1fffff : 21'h0; // @[Bitwise.scala 72:12]
  wire [42:0] _T_299 = {$signed(mulXCom2), 10'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_300 = {_T_297,_T_299}; // @[Cat.scala 30:58]
  wire  _T_301 = boothCode_5 == 3'h5; // @[mult.scala 41:21]
  wire  _T_302 = boothCode_5 == 3'h6; // @[mult.scala 41:50]
  wire  _T_303 = _T_301 | _T_302; // @[mult.scala 41:34]
  wire [21:0] _T_306 = mulXCom[31] ? 22'h3fffff : 22'h0; // @[Bitwise.scala 72:12]
  wire [41:0] _T_308 = {$signed(mulXCom), 10'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_309 = {_T_306,_T_308}; // @[Cat.scala 30:58]
  wire [63:0] _T_310 = _T_303 ? _T_309 : 64'h0; // @[Mux.scala 87:16]
  wire [63:0] _T_311 = _T_294 ? _T_300 : _T_310; // @[Mux.scala 87:16]
  wire [63:0] _T_312 = _T_288 ? _T_293 : _T_311; // @[Mux.scala 87:16]
  wire [63:0] _T_313 = _T_282 ? _T_287 : _T_312; // @[Mux.scala 87:16]
  wire [64:0] Csum_5 = {{1'd0}, CarrySaveAdder_5_io_Cout}; // @[mult.scala 23:18 mult.scala 43:12 mult.scala 85:11]
  wire  _T_317 = boothCode_6 == 3'h0; // @[mult.scala 37:21]
  wire  _T_318 = boothCode_6 == 3'h1; // @[mult.scala 38:21]
  wire  _T_319 = boothCode_6 == 3'h2; // @[mult.scala 38:50]
  wire  _T_320 = _T_318 | _T_319; // @[mult.scala 38:34]
  wire [19:0] _T_323 = io_mul1[31] ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12]
  wire [43:0] _T_324 = {io_mul1, 12'h0}; // @[mult.scala 38:103]
  wire [63:0] _T_325 = {_T_323,_T_324}; // @[Cat.scala 30:58]
  wire  _T_326 = boothCode_6 == 3'h3; // @[mult.scala 39:21]
  wire [18:0] _T_329 = mulX2[32] ? 19'h7ffff : 19'h0; // @[Bitwise.scala 72:12]
  wire [44:0] _T_330 = {mulX2, 12'h0}; // @[mult.scala 39:81]
  wire [63:0] _T_331 = {_T_329,_T_330}; // @[Cat.scala 30:58]
  wire  _T_332 = boothCode_6 == 3'h4; // @[mult.scala 40:21]
  wire [18:0] _T_335 = mulXCom2[32] ? 19'h7ffff : 19'h0; // @[Bitwise.scala 72:12]
  wire [44:0] _T_337 = {$signed(mulXCom2), 12'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_338 = {_T_335,_T_337}; // @[Cat.scala 30:58]
  wire  _T_339 = boothCode_6 == 3'h5; // @[mult.scala 41:21]
  wire  _T_340 = boothCode_6 == 3'h6; // @[mult.scala 41:50]
  wire  _T_341 = _T_339 | _T_340; // @[mult.scala 41:34]
  wire [19:0] _T_344 = mulXCom[31] ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12]
  wire [43:0] _T_346 = {$signed(mulXCom), 12'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_347 = {_T_344,_T_346}; // @[Cat.scala 30:58]
  wire [63:0] _T_348 = _T_341 ? _T_347 : 64'h0; // @[Mux.scala 87:16]
  wire [63:0] _T_349 = _T_332 ? _T_338 : _T_348; // @[Mux.scala 87:16]
  wire [63:0] _T_350 = _T_326 ? _T_331 : _T_349; // @[Mux.scala 87:16]
  wire [63:0] _T_351 = _T_320 ? _T_325 : _T_350; // @[Mux.scala 87:16]
  wire [64:0] Csum_6 = {{1'd0}, CarrySaveAdder_6_io_Cout}; // @[mult.scala 23:18 mult.scala 43:12 mult.scala 91:11]
  wire  _T_355 = boothCode_7 == 3'h0; // @[mult.scala 37:21]
  wire  _T_356 = boothCode_7 == 3'h1; // @[mult.scala 38:21]
  wire  _T_357 = boothCode_7 == 3'h2; // @[mult.scala 38:50]
  wire  _T_358 = _T_356 | _T_357; // @[mult.scala 38:34]
  wire [17:0] _T_361 = io_mul1[31] ? 18'h3ffff : 18'h0; // @[Bitwise.scala 72:12]
  wire [45:0] _T_362 = {io_mul1, 14'h0}; // @[mult.scala 38:103]
  wire [63:0] _T_363 = {_T_361,_T_362}; // @[Cat.scala 30:58]
  wire  _T_364 = boothCode_7 == 3'h3; // @[mult.scala 39:21]
  wire [16:0] _T_367 = mulX2[32] ? 17'h1ffff : 17'h0; // @[Bitwise.scala 72:12]
  wire [46:0] _T_368 = {mulX2, 14'h0}; // @[mult.scala 39:81]
  wire [63:0] _T_369 = {_T_367,_T_368}; // @[Cat.scala 30:58]
  wire  _T_370 = boothCode_7 == 3'h4; // @[mult.scala 40:21]
  wire [16:0] _T_373 = mulXCom2[32] ? 17'h1ffff : 17'h0; // @[Bitwise.scala 72:12]
  wire [46:0] _T_375 = {$signed(mulXCom2), 14'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_376 = {_T_373,_T_375}; // @[Cat.scala 30:58]
  wire  _T_377 = boothCode_7 == 3'h5; // @[mult.scala 41:21]
  wire  _T_378 = boothCode_7 == 3'h6; // @[mult.scala 41:50]
  wire  _T_379 = _T_377 | _T_378; // @[mult.scala 41:34]
  wire [17:0] _T_382 = mulXCom[31] ? 18'h3ffff : 18'h0; // @[Bitwise.scala 72:12]
  wire [45:0] _T_384 = {$signed(mulXCom), 14'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_385 = {_T_382,_T_384}; // @[Cat.scala 30:58]
  wire [63:0] _T_386 = _T_379 ? _T_385 : 64'h0; // @[Mux.scala 87:16]
  wire [63:0] _T_387 = _T_370 ? _T_376 : _T_386; // @[Mux.scala 87:16]
  wire [63:0] _T_388 = _T_364 ? _T_369 : _T_387; // @[Mux.scala 87:16]
  wire [63:0] _T_389 = _T_358 ? _T_363 : _T_388; // @[Mux.scala 87:16]
  wire [64:0] Csum_7 = {{1'd0}, CarrySaveAdder_7_io_Cout}; // @[mult.scala 23:18 mult.scala 43:12 mult.scala 97:11]
  wire  _T_393 = boothCode_8 == 3'h0; // @[mult.scala 37:21]
  wire  _T_394 = boothCode_8 == 3'h1; // @[mult.scala 38:21]
  wire  _T_395 = boothCode_8 == 3'h2; // @[mult.scala 38:50]
  wire  _T_396 = _T_394 | _T_395; // @[mult.scala 38:34]
  wire [15:0] _T_399 = io_mul1[31] ? 16'hffff : 16'h0; // @[Bitwise.scala 72:12]
  wire [47:0] _T_400 = {io_mul1, 16'h0}; // @[mult.scala 38:103]
  wire [63:0] _T_401 = {_T_399,_T_400}; // @[Cat.scala 30:58]
  wire  _T_402 = boothCode_8 == 3'h3; // @[mult.scala 39:21]
  wire [14:0] _T_405 = mulX2[32] ? 15'h7fff : 15'h0; // @[Bitwise.scala 72:12]
  wire [48:0] _T_406 = {mulX2, 16'h0}; // @[mult.scala 39:81]
  wire [63:0] _T_407 = {_T_405,_T_406}; // @[Cat.scala 30:58]
  wire  _T_408 = boothCode_8 == 3'h4; // @[mult.scala 40:21]
  wire [14:0] _T_411 = mulXCom2[32] ? 15'h7fff : 15'h0; // @[Bitwise.scala 72:12]
  wire [48:0] _T_413 = {$signed(mulXCom2), 16'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_414 = {_T_411,_T_413}; // @[Cat.scala 30:58]
  wire  _T_415 = boothCode_8 == 3'h5; // @[mult.scala 41:21]
  wire  _T_416 = boothCode_8 == 3'h6; // @[mult.scala 41:50]
  wire  _T_417 = _T_415 | _T_416; // @[mult.scala 41:34]
  wire [15:0] _T_420 = mulXCom[31] ? 16'hffff : 16'h0; // @[Bitwise.scala 72:12]
  wire [47:0] _T_422 = {$signed(mulXCom), 16'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_423 = {_T_420,_T_422}; // @[Cat.scala 30:58]
  wire [63:0] _T_424 = _T_417 ? _T_423 : 64'h0; // @[Mux.scala 87:16]
  wire [63:0] _T_425 = _T_408 ? _T_414 : _T_424; // @[Mux.scala 87:16]
  wire [63:0] _T_426 = _T_402 ? _T_407 : _T_425; // @[Mux.scala 87:16]
  wire [63:0] _T_427 = _T_396 ? _T_401 : _T_426; // @[Mux.scala 87:16]
  wire [64:0] Csum_8 = {{1'd0}, CarrySaveAdder_8_io_Cout}; // @[mult.scala 23:18 mult.scala 43:12 mult.scala 103:11]
  wire  _T_431 = boothCode_9 == 3'h0; // @[mult.scala 37:21]
  wire  _T_432 = boothCode_9 == 3'h1; // @[mult.scala 38:21]
  wire  _T_433 = boothCode_9 == 3'h2; // @[mult.scala 38:50]
  wire  _T_434 = _T_432 | _T_433; // @[mult.scala 38:34]
  wire [13:0] _T_437 = io_mul1[31] ? 14'h3fff : 14'h0; // @[Bitwise.scala 72:12]
  wire [49:0] _T_438 = {io_mul1, 18'h0}; // @[mult.scala 38:103]
  wire [63:0] _T_439 = {_T_437,_T_438}; // @[Cat.scala 30:58]
  wire  _T_440 = boothCode_9 == 3'h3; // @[mult.scala 39:21]
  wire [12:0] _T_443 = mulX2[32] ? 13'h1fff : 13'h0; // @[Bitwise.scala 72:12]
  wire [50:0] _T_444 = {mulX2, 18'h0}; // @[mult.scala 39:81]
  wire [63:0] _T_445 = {_T_443,_T_444}; // @[Cat.scala 30:58]
  wire  _T_446 = boothCode_9 == 3'h4; // @[mult.scala 40:21]
  wire [12:0] _T_449 = mulXCom2[32] ? 13'h1fff : 13'h0; // @[Bitwise.scala 72:12]
  wire [50:0] _T_451 = {$signed(mulXCom2), 18'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_452 = {_T_449,_T_451}; // @[Cat.scala 30:58]
  wire  _T_453 = boothCode_9 == 3'h5; // @[mult.scala 41:21]
  wire  _T_454 = boothCode_9 == 3'h6; // @[mult.scala 41:50]
  wire  _T_455 = _T_453 | _T_454; // @[mult.scala 41:34]
  wire [13:0] _T_458 = mulXCom[31] ? 14'h3fff : 14'h0; // @[Bitwise.scala 72:12]
  wire [49:0] _T_460 = {$signed(mulXCom), 18'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_461 = {_T_458,_T_460}; // @[Cat.scala 30:58]
  wire [63:0] _T_462 = _T_455 ? _T_461 : 64'h0; // @[Mux.scala 87:16]
  wire [63:0] _T_463 = _T_446 ? _T_452 : _T_462; // @[Mux.scala 87:16]
  wire [63:0] _T_464 = _T_440 ? _T_445 : _T_463; // @[Mux.scala 87:16]
  wire [63:0] _T_465 = _T_434 ? _T_439 : _T_464; // @[Mux.scala 87:16]
  wire [64:0] Csum_9 = {{1'd0}, CarrySaveAdder_9_io_Cout}; // @[mult.scala 23:18 mult.scala 43:12 mult.scala 109:11]
  wire  _T_469 = boothCode_10 == 3'h0; // @[mult.scala 37:21]
  wire  _T_470 = boothCode_10 == 3'h1; // @[mult.scala 38:21]
  wire  _T_471 = boothCode_10 == 3'h2; // @[mult.scala 38:50]
  wire  _T_472 = _T_470 | _T_471; // @[mult.scala 38:34]
  wire [11:0] _T_475 = io_mul1[31] ? 12'hfff : 12'h0; // @[Bitwise.scala 72:12]
  wire [51:0] _T_476 = {io_mul1, 20'h0}; // @[mult.scala 38:103]
  wire [63:0] _T_477 = {_T_475,_T_476}; // @[Cat.scala 30:58]
  wire  _T_478 = boothCode_10 == 3'h3; // @[mult.scala 39:21]
  wire [10:0] _T_481 = mulX2[32] ? 11'h7ff : 11'h0; // @[Bitwise.scala 72:12]
  wire [52:0] _T_482 = {mulX2, 20'h0}; // @[mult.scala 39:81]
  wire [63:0] _T_483 = {_T_481,_T_482}; // @[Cat.scala 30:58]
  wire  _T_484 = boothCode_10 == 3'h4; // @[mult.scala 40:21]
  wire [10:0] _T_487 = mulXCom2[32] ? 11'h7ff : 11'h0; // @[Bitwise.scala 72:12]
  wire [52:0] _T_489 = {$signed(mulXCom2), 20'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_490 = {_T_487,_T_489}; // @[Cat.scala 30:58]
  wire  _T_491 = boothCode_10 == 3'h5; // @[mult.scala 41:21]
  wire  _T_492 = boothCode_10 == 3'h6; // @[mult.scala 41:50]
  wire  _T_493 = _T_491 | _T_492; // @[mult.scala 41:34]
  wire [11:0] _T_496 = mulXCom[31] ? 12'hfff : 12'h0; // @[Bitwise.scala 72:12]
  wire [51:0] _T_498 = {$signed(mulXCom), 20'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_499 = {_T_496,_T_498}; // @[Cat.scala 30:58]
  wire [63:0] _T_500 = _T_493 ? _T_499 : 64'h0; // @[Mux.scala 87:16]
  wire [63:0] _T_501 = _T_484 ? _T_490 : _T_500; // @[Mux.scala 87:16]
  wire [63:0] _T_502 = _T_478 ? _T_483 : _T_501; // @[Mux.scala 87:16]
  wire [63:0] _T_503 = _T_472 ? _T_477 : _T_502; // @[Mux.scala 87:16]
  wire [64:0] Csum_10 = {{1'd0}, CarrySaveAdder_10_io_Cout}; // @[mult.scala 23:18 mult.scala 43:12 mult.scala 116:12]
  wire  _T_507 = boothCode_11 == 3'h0; // @[mult.scala 37:21]
  wire  _T_508 = boothCode_11 == 3'h1; // @[mult.scala 38:21]
  wire  _T_509 = boothCode_11 == 3'h2; // @[mult.scala 38:50]
  wire  _T_510 = _T_508 | _T_509; // @[mult.scala 38:34]
  wire [9:0] _T_513 = io_mul1[31] ? 10'h3ff : 10'h0; // @[Bitwise.scala 72:12]
  wire [53:0] _T_514 = {io_mul1, 22'h0}; // @[mult.scala 38:103]
  wire [63:0] _T_515 = {_T_513,_T_514}; // @[Cat.scala 30:58]
  wire  _T_516 = boothCode_11 == 3'h3; // @[mult.scala 39:21]
  wire [8:0] _T_519 = mulX2[32] ? 9'h1ff : 9'h0; // @[Bitwise.scala 72:12]
  wire [54:0] _T_520 = {mulX2, 22'h0}; // @[mult.scala 39:81]
  wire [63:0] _T_521 = {_T_519,_T_520}; // @[Cat.scala 30:58]
  wire  _T_522 = boothCode_11 == 3'h4; // @[mult.scala 40:21]
  wire [8:0] _T_525 = mulXCom2[32] ? 9'h1ff : 9'h0; // @[Bitwise.scala 72:12]
  wire [54:0] _T_527 = {$signed(mulXCom2), 22'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_528 = {_T_525,_T_527}; // @[Cat.scala 30:58]
  wire  _T_529 = boothCode_11 == 3'h5; // @[mult.scala 41:21]
  wire  _T_530 = boothCode_11 == 3'h6; // @[mult.scala 41:50]
  wire  _T_531 = _T_529 | _T_530; // @[mult.scala 41:34]
  wire [9:0] _T_534 = mulXCom[31] ? 10'h3ff : 10'h0; // @[Bitwise.scala 72:12]
  wire [53:0] _T_536 = {$signed(mulXCom), 22'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_537 = {_T_534,_T_536}; // @[Cat.scala 30:58]
  wire [63:0] _T_538 = _T_531 ? _T_537 : 64'h0; // @[Mux.scala 87:16]
  wire [63:0] _T_539 = _T_522 ? _T_528 : _T_538; // @[Mux.scala 87:16]
  wire [63:0] _T_540 = _T_516 ? _T_521 : _T_539; // @[Mux.scala 87:16]
  wire [63:0] _T_541 = _T_510 ? _T_515 : _T_540; // @[Mux.scala 87:16]
  wire [64:0] Csum_11 = {{1'd0}, CarrySaveAdder_11_io_Cout}; // @[mult.scala 23:18 mult.scala 43:12 mult.scala 122:12]
  wire  _T_545 = boothCode_12 == 3'h0; // @[mult.scala 37:21]
  wire  _T_546 = boothCode_12 == 3'h1; // @[mult.scala 38:21]
  wire  _T_547 = boothCode_12 == 3'h2; // @[mult.scala 38:50]
  wire  _T_548 = _T_546 | _T_547; // @[mult.scala 38:34]
  wire [7:0] _T_551 = io_mul1[31] ? 8'hff : 8'h0; // @[Bitwise.scala 72:12]
  wire [55:0] _T_552 = {io_mul1, 24'h0}; // @[mult.scala 38:103]
  wire [63:0] _T_553 = {_T_551,_T_552}; // @[Cat.scala 30:58]
  wire  _T_554 = boothCode_12 == 3'h3; // @[mult.scala 39:21]
  wire [6:0] _T_557 = mulX2[32] ? 7'h7f : 7'h0; // @[Bitwise.scala 72:12]
  wire [56:0] _T_558 = {mulX2, 24'h0}; // @[mult.scala 39:81]
  wire [63:0] _T_559 = {_T_557,_T_558}; // @[Cat.scala 30:58]
  wire  _T_560 = boothCode_12 == 3'h4; // @[mult.scala 40:21]
  wire [6:0] _T_563 = mulXCom2[32] ? 7'h7f : 7'h0; // @[Bitwise.scala 72:12]
  wire [56:0] _T_565 = {$signed(mulXCom2), 24'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_566 = {_T_563,_T_565}; // @[Cat.scala 30:58]
  wire  _T_567 = boothCode_12 == 3'h5; // @[mult.scala 41:21]
  wire  _T_568 = boothCode_12 == 3'h6; // @[mult.scala 41:50]
  wire  _T_569 = _T_567 | _T_568; // @[mult.scala 41:34]
  wire [7:0] _T_572 = mulXCom[31] ? 8'hff : 8'h0; // @[Bitwise.scala 72:12]
  wire [55:0] _T_574 = {$signed(mulXCom), 24'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_575 = {_T_572,_T_574}; // @[Cat.scala 30:58]
  wire [63:0] _T_576 = _T_569 ? _T_575 : 64'h0; // @[Mux.scala 87:16]
  wire [63:0] _T_577 = _T_560 ? _T_566 : _T_576; // @[Mux.scala 87:16]
  wire [63:0] _T_578 = _T_554 ? _T_559 : _T_577; // @[Mux.scala 87:16]
  wire [63:0] _T_579 = _T_548 ? _T_553 : _T_578; // @[Mux.scala 87:16]
  wire [64:0] Csum_12 = {{1'd0}, CarrySaveAdder_12_io_Cout}; // @[mult.scala 23:18 mult.scala 43:12 mult.scala 129:12]
  wire  _T_583 = boothCode_13 == 3'h0; // @[mult.scala 37:21]
  wire  _T_584 = boothCode_13 == 3'h1; // @[mult.scala 38:21]
  wire  _T_585 = boothCode_13 == 3'h2; // @[mult.scala 38:50]
  wire  _T_586 = _T_584 | _T_585; // @[mult.scala 38:34]
  wire [5:0] _T_589 = io_mul1[31] ? 6'h3f : 6'h0; // @[Bitwise.scala 72:12]
  wire [57:0] _T_590 = {io_mul1, 26'h0}; // @[mult.scala 38:103]
  wire [63:0] _T_591 = {_T_589,_T_590}; // @[Cat.scala 30:58]
  wire  _T_592 = boothCode_13 == 3'h3; // @[mult.scala 39:21]
  wire [4:0] _T_595 = mulX2[32] ? 5'h1f : 5'h0; // @[Bitwise.scala 72:12]
  wire [58:0] _T_596 = {mulX2, 26'h0}; // @[mult.scala 39:81]
  wire [63:0] _T_597 = {_T_595,_T_596}; // @[Cat.scala 30:58]
  wire  _T_598 = boothCode_13 == 3'h4; // @[mult.scala 40:21]
  wire [4:0] _T_601 = mulXCom2[32] ? 5'h1f : 5'h0; // @[Bitwise.scala 72:12]
  wire [58:0] _T_603 = {$signed(mulXCom2), 26'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_604 = {_T_601,_T_603}; // @[Cat.scala 30:58]
  wire  _T_605 = boothCode_13 == 3'h5; // @[mult.scala 41:21]
  wire  _T_606 = boothCode_13 == 3'h6; // @[mult.scala 41:50]
  wire  _T_607 = _T_605 | _T_606; // @[mult.scala 41:34]
  wire [5:0] _T_610 = mulXCom[31] ? 6'h3f : 6'h0; // @[Bitwise.scala 72:12]
  wire [57:0] _T_612 = {$signed(mulXCom), 26'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_613 = {_T_610,_T_612}; // @[Cat.scala 30:58]
  wire [63:0] _T_614 = _T_607 ? _T_613 : 64'h0; // @[Mux.scala 87:16]
  wire [63:0] _T_615 = _T_598 ? _T_604 : _T_614; // @[Mux.scala 87:16]
  wire [63:0] _T_616 = _T_592 ? _T_597 : _T_615; // @[Mux.scala 87:16]
  wire [63:0] _T_617 = _T_586 ? _T_591 : _T_616; // @[Mux.scala 87:16]
  wire [64:0] Csum_13 = {{1'd0}, CarrySaveAdder_13_io_Cout}; // @[mult.scala 23:18 mult.scala 43:12 mult.scala 135:12]
  wire  _T_621 = boothCode_14 == 3'h0; // @[mult.scala 37:21]
  wire  _T_622 = boothCode_14 == 3'h1; // @[mult.scala 38:21]
  wire  _T_623 = boothCode_14 == 3'h2; // @[mult.scala 38:50]
  wire  _T_624 = _T_622 | _T_623; // @[mult.scala 38:34]
  wire [3:0] _T_627 = io_mul1[31] ? 4'hf : 4'h0; // @[Bitwise.scala 72:12]
  wire [59:0] _T_628 = {io_mul1, 28'h0}; // @[mult.scala 38:103]
  wire [63:0] _T_629 = {_T_627,_T_628}; // @[Cat.scala 30:58]
  wire  _T_630 = boothCode_14 == 3'h3; // @[mult.scala 39:21]
  wire [2:0] _T_633 = mulX2[32] ? 3'h7 : 3'h0; // @[Bitwise.scala 72:12]
  wire [60:0] _T_634 = {mulX2, 28'h0}; // @[mult.scala 39:81]
  wire [63:0] _T_635 = {_T_633,_T_634}; // @[Cat.scala 30:58]
  wire  _T_636 = boothCode_14 == 3'h4; // @[mult.scala 40:21]
  wire [2:0] _T_639 = mulXCom2[32] ? 3'h7 : 3'h0; // @[Bitwise.scala 72:12]
  wire [60:0] _T_641 = {$signed(mulXCom2), 28'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_642 = {_T_639,_T_641}; // @[Cat.scala 30:58]
  wire  _T_643 = boothCode_14 == 3'h5; // @[mult.scala 41:21]
  wire  _T_644 = boothCode_14 == 3'h6; // @[mult.scala 41:50]
  wire  _T_645 = _T_643 | _T_644; // @[mult.scala 41:34]
  wire [3:0] _T_648 = mulXCom[31] ? 4'hf : 4'h0; // @[Bitwise.scala 72:12]
  wire [59:0] _T_650 = {$signed(mulXCom), 28'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_651 = {_T_648,_T_650}; // @[Cat.scala 30:58]
  wire [63:0] _T_652 = _T_645 ? _T_651 : 64'h0; // @[Mux.scala 87:16]
  wire [63:0] _T_653 = _T_636 ? _T_642 : _T_652; // @[Mux.scala 87:16]
  wire [63:0] _T_654 = _T_630 ? _T_635 : _T_653; // @[Mux.scala 87:16]
  wire [63:0] _T_655 = _T_624 ? _T_629 : _T_654; // @[Mux.scala 87:16]
  wire [64:0] Csum_14 = {{1'd0}, CarrySaveAdder_14_io_Cout}; // @[mult.scala 23:18 mult.scala 43:12 mult.scala 142:12]
  wire  _T_659 = boothCode_15 == 3'h0; // @[mult.scala 37:21]
  wire  _T_660 = boothCode_15 == 3'h1; // @[mult.scala 38:21]
  wire  _T_661 = boothCode_15 == 3'h2; // @[mult.scala 38:50]
  wire  _T_662 = _T_660 | _T_661; // @[mult.scala 38:34]
  wire [1:0] _T_665 = io_mul1[31] ? 2'h3 : 2'h0; // @[Bitwise.scala 72:12]
  wire [61:0] _T_666 = {io_mul1, 30'h0}; // @[mult.scala 38:103]
  wire [63:0] _T_667 = {_T_665,_T_666}; // @[Cat.scala 30:58]
  wire  _T_668 = boothCode_15 == 3'h3; // @[mult.scala 39:21]
  wire [62:0] _T_670 = {mulX2, 30'h0}; // @[mult.scala 39:81]
  wire [63:0] _T_671 = {mulX2[32],_T_670}; // @[Cat.scala 30:58]
  wire  _T_672 = boothCode_15 == 3'h4; // @[mult.scala 40:21]
  wire [62:0] _T_675 = {$signed(mulXCom2), 30'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_676 = {mulXCom2[32],_T_675}; // @[Cat.scala 30:58]
  wire  _T_677 = boothCode_15 == 3'h5; // @[mult.scala 41:21]
  wire  _T_678 = boothCode_15 == 3'h6; // @[mult.scala 41:50]
  wire  _T_679 = _T_677 | _T_678; // @[mult.scala 41:34]
  wire [1:0] _T_682 = mulXCom[31] ? 2'h3 : 2'h0; // @[Bitwise.scala 72:12]
  wire [61:0] _T_684 = {$signed(mulXCom), 30'h0}; // @[Cat.scala 30:58]
  wire [63:0] _T_685 = {_T_682,_T_684}; // @[Cat.scala 30:58]
  wire [63:0] _T_686 = _T_679 ? _T_685 : 64'h0; // @[Mux.scala 87:16]
  wire [63:0] _T_687 = _T_672 ? _T_676 : _T_686; // @[Mux.scala 87:16]
  wire [63:0] _T_688 = _T_668 ? _T_671 : _T_687; // @[Mux.scala 87:16]
  wire [63:0] _T_689 = _T_662 ? _T_667 : _T_688; // @[Mux.scala 87:16]
  wire [64:0] Csum_15 = {{1'd0}, CarrySaveAdder_15_io_Cout}; // @[mult.scala 23:18 mult.scala 43:12 mult.scala 148:12]
  wire  _T_693 = boothCode_16 == 3'h1; // @[mult.scala 45:31]
  wire [63:0] _T_694 = {io_mul1, 32'h0}; // @[mult.scala 45:49]
  wire [64:0] Csum_16 = {{1'd0}, CarrySaveAdder_16_io_Cout}; // @[mult.scala 23:18 mult.scala 155:12]
  wire [63:0] _T_698 = Csum_16[63:0]; // @[mult.scala 158:50]
  CarrySaveAdder CarrySaveAdder ( // @[mult.scala 50:37]
    .io_A(CarrySaveAdder_io_A),
    .io_B(CarrySaveAdder_io_B),
    .io_Cin(CarrySaveAdder_io_Cin),
    .io_Sum(CarrySaveAdder_io_Sum),
    .io_Cout(CarrySaveAdder_io_Cout)
  );
  CarrySaveAdder CarrySaveAdder_1 ( // @[mult.scala 50:37]
    .io_A(CarrySaveAdder_1_io_A),
    .io_B(CarrySaveAdder_1_io_B),
    .io_Cin(CarrySaveAdder_1_io_Cin),
    .io_Sum(CarrySaveAdder_1_io_Sum),
    .io_Cout(CarrySaveAdder_1_io_Cout)
  );
  CarrySaveAdder CarrySaveAdder_2 ( // @[mult.scala 50:37]
    .io_A(CarrySaveAdder_2_io_A),
    .io_B(CarrySaveAdder_2_io_B),
    .io_Cin(CarrySaveAdder_2_io_Cin),
    .io_Sum(CarrySaveAdder_2_io_Sum),
    .io_Cout(CarrySaveAdder_2_io_Cout)
  );
  CarrySaveAdder CarrySaveAdder_3 ( // @[mult.scala 50:37]
    .io_A(CarrySaveAdder_3_io_A),
    .io_B(CarrySaveAdder_3_io_B),
    .io_Cin(CarrySaveAdder_3_io_Cin),
    .io_Sum(CarrySaveAdder_3_io_Sum),
    .io_Cout(CarrySaveAdder_3_io_Cout)
  );
  CarrySaveAdder CarrySaveAdder_4 ( // @[mult.scala 50:37]
    .io_A(CarrySaveAdder_4_io_A),
    .io_B(CarrySaveAdder_4_io_B),
    .io_Cin(CarrySaveAdder_4_io_Cin),
    .io_Sum(CarrySaveAdder_4_io_Sum),
    .io_Cout(CarrySaveAdder_4_io_Cout)
  );
  CarrySaveAdder CarrySaveAdder_5 ( // @[mult.scala 50:37]
    .io_A(CarrySaveAdder_5_io_A),
    .io_B(CarrySaveAdder_5_io_B),
    .io_Cin(CarrySaveAdder_5_io_Cin),
    .io_Sum(CarrySaveAdder_5_io_Sum),
    .io_Cout(CarrySaveAdder_5_io_Cout)
  );
  CarrySaveAdder CarrySaveAdder_6 ( // @[mult.scala 50:37]
    .io_A(CarrySaveAdder_6_io_A),
    .io_B(CarrySaveAdder_6_io_B),
    .io_Cin(CarrySaveAdder_6_io_Cin),
    .io_Sum(CarrySaveAdder_6_io_Sum),
    .io_Cout(CarrySaveAdder_6_io_Cout)
  );
  CarrySaveAdder CarrySaveAdder_7 ( // @[mult.scala 50:37]
    .io_A(CarrySaveAdder_7_io_A),
    .io_B(CarrySaveAdder_7_io_B),
    .io_Cin(CarrySaveAdder_7_io_Cin),
    .io_Sum(CarrySaveAdder_7_io_Sum),
    .io_Cout(CarrySaveAdder_7_io_Cout)
  );
  CarrySaveAdder CarrySaveAdder_8 ( // @[mult.scala 50:37]
    .io_A(CarrySaveAdder_8_io_A),
    .io_B(CarrySaveAdder_8_io_B),
    .io_Cin(CarrySaveAdder_8_io_Cin),
    .io_Sum(CarrySaveAdder_8_io_Sum),
    .io_Cout(CarrySaveAdder_8_io_Cout)
  );
  CarrySaveAdder CarrySaveAdder_9 ( // @[mult.scala 50:37]
    .io_A(CarrySaveAdder_9_io_A),
    .io_B(CarrySaveAdder_9_io_B),
    .io_Cin(CarrySaveAdder_9_io_Cin),
    .io_Sum(CarrySaveAdder_9_io_Sum),
    .io_Cout(CarrySaveAdder_9_io_Cout)
  );
  CarrySaveAdder CarrySaveAdder_10 ( // @[mult.scala 50:37]
    .io_A(CarrySaveAdder_10_io_A),
    .io_B(CarrySaveAdder_10_io_B),
    .io_Cin(CarrySaveAdder_10_io_Cin),
    .io_Sum(CarrySaveAdder_10_io_Sum),
    .io_Cout(CarrySaveAdder_10_io_Cout)
  );
  CarrySaveAdder CarrySaveAdder_11 ( // @[mult.scala 50:37]
    .io_A(CarrySaveAdder_11_io_A),
    .io_B(CarrySaveAdder_11_io_B),
    .io_Cin(CarrySaveAdder_11_io_Cin),
    .io_Sum(CarrySaveAdder_11_io_Sum),
    .io_Cout(CarrySaveAdder_11_io_Cout)
  );
  CarrySaveAdder CarrySaveAdder_12 ( // @[mult.scala 50:37]
    .io_A(CarrySaveAdder_12_io_A),
    .io_B(CarrySaveAdder_12_io_B),
    .io_Cin(CarrySaveAdder_12_io_Cin),
    .io_Sum(CarrySaveAdder_12_io_Sum),
    .io_Cout(CarrySaveAdder_12_io_Cout)
  );
  CarrySaveAdder CarrySaveAdder_13 ( // @[mult.scala 50:37]
    .io_A(CarrySaveAdder_13_io_A),
    .io_B(CarrySaveAdder_13_io_B),
    .io_Cin(CarrySaveAdder_13_io_Cin),
    .io_Sum(CarrySaveAdder_13_io_Sum),
    .io_Cout(CarrySaveAdder_13_io_Cout)
  );
  CarrySaveAdder CarrySaveAdder_14 ( // @[mult.scala 50:37]
    .io_A(CarrySaveAdder_14_io_A),
    .io_B(CarrySaveAdder_14_io_B),
    .io_Cin(CarrySaveAdder_14_io_Cin),
    .io_Sum(CarrySaveAdder_14_io_Sum),
    .io_Cout(CarrySaveAdder_14_io_Cout)
  );
  CarrySaveAdder CarrySaveAdder_15 ( // @[mult.scala 50:37]
    .io_A(CarrySaveAdder_15_io_A),
    .io_B(CarrySaveAdder_15_io_B),
    .io_Cin(CarrySaveAdder_15_io_Cin),
    .io_Sum(CarrySaveAdder_15_io_Sum),
    .io_Cout(CarrySaveAdder_15_io_Cout)
  );
  CarrySaveAdder CarrySaveAdder_16 ( // @[mult.scala 50:37]
    .io_A(CarrySaveAdder_16_io_A),
    .io_B(CarrySaveAdder_16_io_B),
    .io_Cin(CarrySaveAdder_16_io_Cin),
    .io_Sum(CarrySaveAdder_16_io_Sum),
    .io_Cout(CarrySaveAdder_16_io_Cout)
  );
  assign io_result = $signed(CarrySaveAdder_16_io_Sum) + $signed(_T_698); // @[mult.scala 158:13]
  assign CarrySaveAdder_io_A = _T_89 ? 64'h0 : _T_123; // @[mult.scala 51:18]
  assign CarrySaveAdder_io_B = _T_127 ? 64'h0 : _T_161; // @[mult.scala 52:18]
  assign CarrySaveAdder_io_Cin = _T_165 ? 64'h0 : _T_199; // @[mult.scala 53:20]
  assign CarrySaveAdder_1_io_A = _T_203 ? 64'h0 : _T_237; // @[mult.scala 57:18]
  assign CarrySaveAdder_1_io_B = _T_241 ? 64'h0 : _T_275; // @[mult.scala 58:18]
  assign CarrySaveAdder_1_io_Cin = _T_279 ? 64'h0 : _T_313; // @[mult.scala 59:20]
  assign CarrySaveAdder_2_io_A = _T_317 ? 64'h0 : _T_351; // @[mult.scala 63:18]
  assign CarrySaveAdder_2_io_B = _T_355 ? 64'h0 : _T_389; // @[mult.scala 64:18]
  assign CarrySaveAdder_2_io_Cin = _T_393 ? 64'h0 : _T_427; // @[mult.scala 65:20]
  assign CarrySaveAdder_3_io_A = _T_431 ? 64'h0 : _T_465; // @[mult.scala 69:18]
  assign CarrySaveAdder_3_io_B = _T_469 ? 64'h0 : _T_503; // @[mult.scala 70:18]
  assign CarrySaveAdder_3_io_Cin = _T_507 ? 64'h0 : _T_541; // @[mult.scala 71:20]
  assign CarrySaveAdder_4_io_A = _T_545 ? 64'h0 : _T_579; // @[mult.scala 75:18]
  assign CarrySaveAdder_4_io_B = _T_583 ? 64'h0 : _T_617; // @[mult.scala 76:18]
  assign CarrySaveAdder_4_io_Cin = _T_621 ? 64'h0 : _T_655; // @[mult.scala 77:20]
  assign CarrySaveAdder_5_io_A = _T_659 ? 64'h0 : _T_689; // @[mult.scala 81:18]
  assign CarrySaveAdder_5_io_B = _T_693 ? _T_694 : 64'h0; // @[mult.scala 82:18]
  assign CarrySaveAdder_5_io_Cin = 64'h0; // @[mult.scala 83:20]
  assign CarrySaveAdder_6_io_A = CarrySaveAdder_io_Sum; // @[mult.scala 87:18]
  assign CarrySaveAdder_6_io_B = CarrySaveAdder_1_io_Sum; // @[mult.scala 88:18]
  assign CarrySaveAdder_6_io_Cin = CarrySaveAdder_2_io_Sum; // @[mult.scala 89:20]
  assign CarrySaveAdder_7_io_A = CarrySaveAdder_3_io_Sum; // @[mult.scala 93:18]
  assign CarrySaveAdder_7_io_B = CarrySaveAdder_4_io_Sum; // @[mult.scala 94:18]
  assign CarrySaveAdder_7_io_Cin = CarrySaveAdder_5_io_Sum; // @[mult.scala 95:20]
  assign CarrySaveAdder_8_io_A = Csum_0[63:0]; // @[mult.scala 99:18]
  assign CarrySaveAdder_8_io_B = Csum_1[63:0]; // @[mult.scala 100:18]
  assign CarrySaveAdder_8_io_Cin = Csum_2[63:0]; // @[mult.scala 101:20]
  assign CarrySaveAdder_9_io_A = Csum_3[63:0]; // @[mult.scala 105:18]
  assign CarrySaveAdder_9_io_B = Csum_4[63:0]; // @[mult.scala 106:18]
  assign CarrySaveAdder_9_io_Cin = Csum_5[63:0]; // @[mult.scala 107:20]
  assign CarrySaveAdder_10_io_A = CarrySaveAdder_6_io_Sum; // @[mult.scala 112:19]
  assign CarrySaveAdder_10_io_B = CarrySaveAdder_7_io_Sum; // @[mult.scala 113:19]
  assign CarrySaveAdder_10_io_Cin = CarrySaveAdder_8_io_Sum; // @[mult.scala 114:21]
  assign CarrySaveAdder_11_io_A = CarrySaveAdder_9_io_Sum; // @[mult.scala 118:19]
  assign CarrySaveAdder_11_io_B = Csum_6[63:0]; // @[mult.scala 119:19]
  assign CarrySaveAdder_11_io_Cin = Csum_7[63:0]; // @[mult.scala 120:21]
  assign CarrySaveAdder_12_io_A = Csum_8[63:0]; // @[mult.scala 125:19]
  assign CarrySaveAdder_12_io_B = Csum_9[63:0]; // @[mult.scala 126:19]
  assign CarrySaveAdder_12_io_Cin = 64'h0; // @[mult.scala 127:21]
  assign CarrySaveAdder_13_io_A = Csum_10[63:0]; // @[mult.scala 131:19]
  assign CarrySaveAdder_13_io_B = Csum_11[63:0]; // @[mult.scala 132:19]
  assign CarrySaveAdder_13_io_Cin = Csum_12[63:0]; // @[mult.scala 133:21]
  assign CarrySaveAdder_14_io_A = CarrySaveAdder_10_io_Sum; // @[mult.scala 138:19]
  assign CarrySaveAdder_14_io_B = CarrySaveAdder_11_io_Sum; // @[mult.scala 139:19]
  assign CarrySaveAdder_14_io_Cin = CarrySaveAdder_12_io_Sum; // @[mult.scala 140:21]
  assign CarrySaveAdder_15_io_A = CarrySaveAdder_13_io_Sum; // @[mult.scala 144:19]
  assign CarrySaveAdder_15_io_B = CarrySaveAdder_14_io_Sum; // @[mult.scala 145:19]
  assign CarrySaveAdder_15_io_Cin = Csum_13[63:0]; // @[mult.scala 146:21]
  assign CarrySaveAdder_16_io_A = CarrySaveAdder_15_io_Sum; // @[mult.scala 151:19]
  assign CarrySaveAdder_16_io_B = Csum_14[63:0]; // @[mult.scala 152:19]
  assign CarrySaveAdder_16_io_Cin = Csum_15[63:0]; // @[mult.scala 153:21]
endmodule
module Divider(
  input         clock,
  input         reset,
  input         io_en,
  input         io_flush,
  output        io_divZero,
  output        io_done,
  input  [31:0] io_divident,
  input  [31:0] io_divisor,
  output [31:0] io_quotient,
  output [31:0] io_remainder
);
  reg [1:0] state; // @[div.scala 27:22]
  reg [31:0] _RAND_0;
  reg [64:0] result; // @[div.scala 31:30]
  reg [95:0] _RAND_1;
  reg [3:0] counter; // @[div.scala 33:30]
  reg [31:0] _RAND_2;
  reg  isDiv0; // @[div.scala 35:30]
  reg [31:0] _RAND_3;
  reg [31:0] lastDivident; // @[div.scala 37:30]
  reg [31:0] _RAND_4;
  reg [31:0] lastDivisor; // @[div.scala 38:30]
  reg [31:0] _RAND_5;
  reg [64:0] divisor; // @[div.scala 41:28]
  reg [95:0] _RAND_6;
  wire [63:0] minDivisor = divisor[64:1]; // @[div.scala 43:29]
  wire [64:0] _GEN_41 = {{1'd0}, minDivisor}; // @[div.scala 45:29]
  wire [64:0] maxDivisor = divisor + _GEN_41; // @[div.scala 45:29]
  wire  _T_1 = lastDivident != io_divident; // @[div.scala 47:34]
  wire  _T_2 = lastDivisor != io_divisor; // @[div.scala 48:33]
  wire  startFlag = _T_1 | _T_2; // @[div.scala 47:50]
  wire  _T_3 = 2'h0 == state; // @[Conditional.scala 37:30]
  wire  _T_4 = io_divisor == 32'h0; // @[div.scala 64:30]
  wire [64:0] _T_6 = {32'h0,io_divident,1'h0}; // @[Cat.scala 30:58]
  wire [64:0] _T_8 = {1'h0,io_divisor,32'h0}; // @[Cat.scala 30:58]
  wire [64:0] _GEN_2 = _T_4 ? result : _T_6; // @[div.scala 64:39]
  wire [64:0] _GEN_9 = startFlag ? _GEN_2 : result; // @[div.scala 59:28]
  wire [64:0] _GEN_16 = io_en ? _GEN_9 : result; // @[div.scala 58:22]
  wire  _T_9 = 2'h1 == state; // @[Conditional.scala 37:30]
  wire  _T_10 = result >= maxDivisor; // @[div.scala 82:22]
  wire [64:0] _T_12 = result - maxDivisor; // @[div.scala 83:30]
  wire [66:0] _T_13 = {_T_12, 2'h0}; // @[div.scala 83:44]
  wire [66:0] _T_14 = _T_13 | 67'h3; // @[div.scala 83:50]
  wire  _T_15 = result < maxDivisor; // @[div.scala 84:29]
  wire  _T_16 = result >= divisor; // @[div.scala 84:52]
  wire  _T_17 = _T_15 & _T_16; // @[div.scala 84:42]
  wire [64:0] _T_19 = result - divisor; // @[div.scala 85:30]
  wire [66:0] _T_20 = {_T_19, 2'h0}; // @[div.scala 85:41]
  wire [66:0] _T_21 = _T_20 | 67'h2; // @[div.scala 85:47]
  wire  _T_22 = result < divisor; // @[div.scala 86:29]
  wire  _T_23 = result >= _GEN_41; // @[div.scala 86:49]
  wire  _T_24 = _T_22 & _T_23; // @[div.scala 86:39]
  wire [64:0] _T_26 = result - _GEN_41; // @[div.scala 87:30]
  wire [66:0] _T_27 = {_T_26, 2'h0}; // @[div.scala 87:44]
  wire [66:0] _T_28 = _T_27 | 67'h1; // @[div.scala 87:50]
  wire [66:0] _T_29 = {result, 2'h0}; // @[div.scala 89:28]
  wire [66:0] _GEN_19 = _T_24 ? _T_28 : _T_29; // @[div.scala 86:64]
  wire [66:0] _GEN_20 = _T_17 ? _T_21 : _GEN_19; // @[div.scala 84:64]
  wire [66:0] _GEN_21 = _T_10 ? _T_14 : _GEN_20; // @[div.scala 82:37]
  wire [3:0] _T_31 = counter + 4'h1; // @[div.scala 92:28]
  wire  _T_32 = counter == 4'hf; // @[div.scala 93:23]
  wire  _T_33 = 2'h2 == state; // @[Conditional.scala 37:30]
  wire [66:0] _GEN_24 = _T_9 ? _GEN_21 : {{2'd0}, result}; // @[Conditional.scala 39:67]
  wire [66:0] _GEN_31 = _T_3 ? {{2'd0}, _GEN_16} : _GEN_24; // @[Conditional.scala 40:58]
  wire [66:0] _GEN_35 = io_flush ? 67'h0 : _GEN_31; // @[div.scala 51:19]
  assign io_divZero = isDiv0; // @[div.scala 102:17]
  assign io_done = state == 2'h2; // @[div.scala 103:17]
  assign io_quotient = result[31:0]; // @[div.scala 104:17]
  assign io_remainder = result[64:33]; // @[div.scala 105:17]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  state = _RAND_0[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {3{`RANDOM}};
  result = _RAND_1[64:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  counter = _RAND_2[3:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  isDiv0 = _RAND_3[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  lastDivident = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  lastDivisor = _RAND_5[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {3{`RANDOM}};
  divisor = _RAND_6[64:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (reset) begin
      state <= 2'h0;
    end else if (io_flush) begin
      state <= 2'h0;
    end else if (_T_3) begin
      if (io_en) begin
        if (startFlag) begin
          if (_T_4) begin
            state <= 2'h2;
          end else begin
            state <= 2'h1;
          end
        end else begin
          state <= 2'h2;
        end
      end
    end else if (_T_9) begin
      if (_T_32) begin
        state <= 2'h2;
      end
    end else if (_T_33) begin
      state <= 2'h0;
    end
    if (reset) begin
      result <= 65'h0;
    end else begin
      result <= _GEN_35[64:0];
    end
    if (reset) begin
      counter <= 4'h0;
    end else if (!(io_flush)) begin
      if (_T_3) begin
        if (io_en) begin
          if (startFlag) begin
            if (!(_T_4)) begin
              counter <= 4'h0;
            end
          end
        end
      end else if (_T_9) begin
        counter <= _T_31;
      end
    end
    if (reset) begin
      isDiv0 <= 1'h0;
    end else if (io_flush) begin
      isDiv0 <= 1'h0;
    end else if (_T_3) begin
      if (io_en) begin
        if (startFlag) begin
          isDiv0 <= _T_4;
        end
      end
    end
    if (reset) begin
      lastDivident <= 32'h0;
    end else if (!(io_flush)) begin
      if (_T_3) begin
        if (io_en) begin
          if (startFlag) begin
            lastDivident <= io_divident;
          end
        end
      end
    end
    if (reset) begin
      lastDivisor <= 32'h0;
    end else if (!(io_flush)) begin
      if (_T_3) begin
        if (io_en) begin
          if (startFlag) begin
            lastDivisor <= io_divisor;
          end
        end
      end
    end
    if (reset) begin
      divisor <= 65'h0;
    end else if (!(io_flush)) begin
      if (_T_3) begin
        if (io_en) begin
          if (startFlag) begin
            if (!(_T_4)) begin
              divisor <= _T_8;
            end
          end
        end
      end
    end
  end
endmodule
module MDU(
  input         clock,
  input         reset,
  input         io_flush,
  input  [3:0]  io_op,
  output        io_valid,
  input  [31:0] io_opr1,
  input  [31:0] io_opr2,
  output [31:0] io_result
);
  wire [31:0] mul_io_mul1; // @[MUD.scala 33:25]
  wire [31:0] mul_io_mul2; // @[MUD.scala 33:25]
  wire [63:0] mul_io_result; // @[MUD.scala 33:25]
  wire  div_clock; // @[MUD.scala 40:29]
  wire  div_reset; // @[MUD.scala 40:29]
  wire  div_io_en; // @[MUD.scala 40:29]
  wire  div_io_flush; // @[MUD.scala 40:29]
  wire  div_io_divZero; // @[MUD.scala 40:29]
  wire  div_io_done; // @[MUD.scala 40:29]
  wire [31:0] div_io_divident; // @[MUD.scala 40:29]
  wire [31:0] div_io_divisor; // @[MUD.scala 40:29]
  wire [31:0] div_io_quotient; // @[MUD.scala 40:29]
  wire [31:0] div_io_remainder; // @[MUD.scala 40:29]
  wire  _T_1 = 4'h1 == io_op; // @[Lookup.scala 31:38]
  wire  _T_3 = 4'h2 == io_op; // @[Lookup.scala 31:38]
  wire  _T_5 = 4'h3 == io_op; // @[Lookup.scala 31:38]
  wire  _T_7 = 4'h4 == io_op; // @[Lookup.scala 31:38]
  wire  _T_9 = 4'h5 == io_op; // @[Lookup.scala 31:38]
  wire  _T_11 = 4'h6 == io_op; // @[Lookup.scala 31:38]
  wire  _T_13 = 4'h7 == io_op; // @[Lookup.scala 31:38]
  wire  _T_15 = 4'h8 == io_op; // @[Lookup.scala 31:38]
  wire  _T_21 = _T_5 | _T_7; // @[Lookup.scala 33:37]
  wire  _T_22 = _T_3 | _T_21; // @[Lookup.scala 33:37]
  wire  mulEn = _T_1 | _T_22; // @[Lookup.scala 33:37]
  wire  _T_24 = _T_13 | _T_15; // @[Lookup.scala 33:37]
  wire  _T_25 = _T_11 | _T_24; // @[Lookup.scala 33:37]
  wire  _T_26 = _T_9 | _T_25; // @[Lookup.scala 33:37]
  wire  _T_27 = _T_7 ? 1'h0 : _T_26; // @[Lookup.scala 33:37]
  wire  _T_28 = _T_5 ? 1'h0 : _T_27; // @[Lookup.scala 33:37]
  wire  _T_29 = _T_3 ? 1'h0 : _T_28; // @[Lookup.scala 33:37]
  wire  divEn = _T_1 ? 1'h0 : _T_29; // @[Lookup.scala 33:37]
  wire  _T_32 = _T_11 ? 1'h0 : _T_24; // @[Lookup.scala 33:37]
  wire  _T_33 = _T_9 ? 1'h0 : _T_32; // @[Lookup.scala 33:37]
  wire  _T_34 = _T_7 | _T_33; // @[Lookup.scala 33:37]
  wire  _T_35 = _T_5 | _T_34; // @[Lookup.scala 33:37]
  wire  _T_36 = _T_3 | _T_35; // @[Lookup.scala 33:37]
  wire  hiRem = _T_1 ? 1'h0 : _T_36; // @[Lookup.scala 33:37]
  wire  _T_39 = _T_11 ? 1'h0 : _T_13; // @[Lookup.scala 33:37]
  wire  _T_40 = _T_9 | _T_39; // @[Lookup.scala 33:37]
  wire  _T_41 = _T_7 ? 1'h0 : _T_40; // @[Lookup.scala 33:37]
  wire  _T_42 = _T_5 | _T_41; // @[Lookup.scala 33:37]
  wire  _T_43 = _T_3 | _T_42; // @[Lookup.scala 33:37]
  wire  lhsSigned = _T_1 ? 1'h0 : _T_43; // @[Lookup.scala 33:37]
  wire  _T_49 = _T_5 ? 1'h0 : _T_41; // @[Lookup.scala 33:37]
  wire  _T_50 = _T_3 | _T_49; // @[Lookup.scala 33:37]
  wire  rhsSigned = _T_1 ? 1'h0 : _T_50; // @[Lookup.scala 33:37]
  wire  isOpr1Neg = lhsSigned & io_opr1[31]; // @[MUD.scala 26:29]
  wire  isOpr2Neg = rhsSigned & io_opr2[31]; // @[MUD.scala 27:29]
  wire  isAnsNeg = isOpr1Neg ^ isOpr2Neg; // @[MUD.scala 28:29]
  wire [31:0] _T_54 = 32'h0 - io_opr1; // @[MUD.scala 29:34]
  wire [31:0] opr1 = isOpr1Neg ? _T_54 : io_opr1; // @[MUD.scala 29:22]
  wire [31:0] _T_56 = 32'h0 - io_opr2; // @[MUD.scala 30:34]
  wire [31:0] opr2 = isOpr2Neg ? _T_56 : io_opr2; // @[MUD.scala 30:22]
  wire [31:0] mulAns = hiRem ? mul_io_result[63:32] : mul_io_result[31:0]; // @[MUD.scala 35:22]
  wire  _T_59 = ~io_flush; // @[MUD.scala 36:32]
  wire  _T_60 = mulEn & _T_59; // @[MUD.scala 36:29]
  wire [32:0] _GEN_0 = {{1'd0}, opr1}; // @[MUD.scala 43:41]
  wire  _T_65 = _GEN_0 == 33'h100000000; // @[MUD.scala 43:41]
  wire  _T_66 = lhsSigned & _T_65; // @[MUD.scala 43:33]
  wire  _T_67 = opr2 == 32'hffffffff; // @[MUD.scala 43:60]
  wire  isDivOverflow = _T_66 & _T_67; // @[MUD.scala 43:52]
  wire  _T_70 = io_opr1[31] ^ div_io_remainder[31]; // @[MUD.scala 44:49]
  wire  isRemNeg = lhsSigned & _T_70; // @[MUD.scala 44:33]
  wire [31:0] _T_72 = 32'h0 - div_io_quotient; // @[MUD.scala 46:37]
  wire [31:0] divQuo = isAnsNeg ? _T_72 : div_io_quotient; // @[MUD.scala 46:26]
  wire [32:0] _T_73 = isDivOverflow ? 33'h100000000 : {{1'd0}, divQuo}; // @[MUD.scala 48:26]
  wire [32:0] divAnsQuo = div_io_divZero ? 33'hffffffff : _T_73; // @[MUD.scala 47:26]
  wire [31:0] _T_75 = 32'h0 - div_io_remainder; // @[MUD.scala 49:37]
  wire [31:0] divRem = isRemNeg ? _T_75 : div_io_remainder; // @[MUD.scala 49:26]
  wire [31:0] _T_76 = isDivOverflow ? 32'h0 : divRem; // @[MUD.scala 51:26]
  wire [31:0] divAnsRem = div_io_divZero ? io_opr1 : _T_76; // @[MUD.scala 50:26]
  wire [32:0] divAns = hiRem ? {{1'd0}, divAnsRem} : divAnsQuo; // @[MUD.scala 52:26]
  wire  _T_77 = divEn ? div_io_done : 1'h1; // @[MUD.scala 59:38]
  wire [32:0] _T_79 = divEn ? divAns : 33'h0; // @[MUD.scala 60:38]
  wire [32:0] _T_80 = mulEn ? {{1'd0}, mulAns} : _T_79; // @[MUD.scala 60:19]
  WallaceMultiplier mul ( // @[MUD.scala 33:25]
    .io_mul1(mul_io_mul1),
    .io_mul2(mul_io_mul2),
    .io_result(mul_io_result)
  );
  Divider div ( // @[MUD.scala 40:29]
    .clock(div_clock),
    .reset(div_reset),
    .io_en(div_io_en),
    .io_flush(div_io_flush),
    .io_divZero(div_io_divZero),
    .io_done(div_io_done),
    .io_divident(div_io_divident),
    .io_divisor(div_io_divisor),
    .io_quotient(div_io_quotient),
    .io_remainder(div_io_remainder)
  );
  assign io_valid = mulEn | _T_77; // @[MUD.scala 59:13]
  assign io_result = _T_80[31:0]; // @[MUD.scala 60:13]
  assign mul_io_mul1 = _T_60 ? opr1 : 32'h0; // @[MUD.scala 36:16]
  assign mul_io_mul2 = _T_60 ? opr2 : 32'h0; // @[MUD.scala 37:16]
  assign div_clock = clock;
  assign div_reset = reset;
  assign div_io_en = _T_1 ? 1'h0 : _T_29; // @[MUD.scala 53:20]
  assign div_io_flush = io_flush; // @[MUD.scala 54:20]
  assign div_io_divident = isOpr1Neg ? _T_54 : io_opr1; // @[MUD.scala 55:20]
  assign div_io_divisor = isOpr2Neg ? _T_56 : io_opr2; // @[MUD.scala 56:20]
endmodule
module EX(
  input         clock,
  input         reset,
  input  [3:0]  io_id_i_aluOp,
  input  [31:0] io_id_i_opr1,
  input  [31:0] io_id_i_opr2,
  input  [3:0]  io_id_i_mduOp,
  input  [3:0]  io_id_i_lsuOp,
  input  [31:0] io_id_i_lsuData,
  input         io_id_i_regWen,
  input  [4:0]  io_id_i_regWaddr,
  input  [2:0]  io_id_i_csrOp,
  input  [11:0] io_id_i_csrAddr,
  input         io_id_i_csren,
  input  [31:0] io_id_i_csrrData,
  input  [31:0] io_id_i_csrwData,
  input  [3:0]  io_id_i_excType,
  input  [31:0] io_id_i_excValue,
  input  [31:0] io_id_i_inst,
  input  [31:0] io_id_i_currentPc,
  input         io_flush,
  output        io_stallReq,
  output [3:0]  io_ex_o_lsuOp,
  output [31:0] io_ex_o_lsuData,
  output        io_ex_o_reg_en,
  output [4:0]  io_ex_o_reg_addr,
  output [31:0] io_ex_o_reg_data,
  output        io_ex_o_load,
  output [2:0]  io_ex_o_csr_op,
  output [11:0] io_ex_o_csr_addr,
  output [31:0] io_ex_o_csr_data,
  output        io_ex_o_csr_retired,
  output [3:0]  io_ex_o_excType,
  output [31:0] io_ex_o_excValue,
  output [31:0] io_ex_o_inst,
  output [31:0] io_ex_o_currentPc
);
  wire  mdu_clock; // @[EX.scala 35:19]
  wire  mdu_reset; // @[EX.scala 35:19]
  wire  mdu_io_flush; // @[EX.scala 35:19]
  wire [3:0] mdu_io_op; // @[EX.scala 35:19]
  wire  mdu_io_valid; // @[EX.scala 35:19]
  wire [31:0] mdu_io_opr1; // @[EX.scala 35:19]
  wire [31:0] mdu_io_opr2; // @[EX.scala 35:19]
  wire [31:0] mdu_io_result; // @[EX.scala 35:19]
  wire [31:0] _T_1 = io_id_i_opr1 + io_id_i_opr2; // @[EX.scala 23:22]
  wire [31:0] _T_3 = io_id_i_opr1 - io_id_i_opr2; // @[EX.scala 24:22]
  wire [31:0] _T_4 = io_id_i_opr1 & io_id_i_opr2; // @[EX.scala 25:22]
  wire [31:0] _T_5 = io_id_i_opr1 | io_id_i_opr2; // @[EX.scala 26:22]
  wire [31:0] _T_6 = io_id_i_opr1 ^ io_id_i_opr2; // @[EX.scala 27:22]
  wire [62:0] _GEN_0 = {{31'd0}, io_id_i_opr1}; // @[EX.scala 28:22]
  wire [62:0] _T_8 = _GEN_0 << io_id_i_opr2[4:0]; // @[EX.scala 28:22]
  wire [31:0] _T_12 = $signed(io_id_i_opr1) >>> io_id_i_opr2[4:0]; // @[EX.scala 29:42]
  wire [31:0] _T_14 = io_id_i_opr1 >> io_id_i_opr2[4:0]; // @[EX.scala 30:22]
  wire  _T_17 = $signed(io_id_i_opr1) < $signed(io_id_i_opr2); // @[EX.scala 31:30]
  wire  _T_18 = io_id_i_opr1 < io_id_i_opr2; // @[EX.scala 32:23]
  wire  _T_19 = 4'h6 == io_id_i_aluOp; // @[Mux.scala 68:19]
  wire  _T_20 = _T_19 & _T_18; // @[Mux.scala 68:16]
  wire  _T_21 = 4'h5 == io_id_i_aluOp; // @[Mux.scala 68:19]
  wire  _T_22 = _T_21 ? _T_17 : _T_20; // @[Mux.scala 68:16]
  wire  _T_23 = 4'h8 == io_id_i_aluOp; // @[Mux.scala 68:19]
  wire [31:0] _T_24 = _T_23 ? _T_14 : {{31'd0}, _T_22}; // @[Mux.scala 68:16]
  wire  _T_25 = 4'h9 == io_id_i_aluOp; // @[Mux.scala 68:19]
  wire [31:0] _T_26 = _T_25 ? _T_12 : _T_24; // @[Mux.scala 68:16]
  wire  _T_27 = 4'h7 == io_id_i_aluOp; // @[Mux.scala 68:19]
  wire [62:0] _T_28 = _T_27 ? _T_8 : {{31'd0}, _T_26}; // @[Mux.scala 68:16]
  wire  _T_29 = 4'h2 == io_id_i_aluOp; // @[Mux.scala 68:19]
  wire [62:0] _T_30 = _T_29 ? {{31'd0}, _T_6} : _T_28; // @[Mux.scala 68:16]
  wire  _T_31 = 4'h3 == io_id_i_aluOp; // @[Mux.scala 68:19]
  wire [62:0] _T_32 = _T_31 ? {{31'd0}, _T_5} : _T_30; // @[Mux.scala 68:16]
  wire  _T_33 = 4'h4 == io_id_i_aluOp; // @[Mux.scala 68:19]
  wire [62:0] _T_34 = _T_33 ? {{31'd0}, _T_4} : _T_32; // @[Mux.scala 68:16]
  wire  _T_35 = 4'h1 == io_id_i_aluOp; // @[Mux.scala 68:19]
  wire [62:0] _T_36 = _T_35 ? {{31'd0}, _T_3} : _T_34; // @[Mux.scala 68:16]
  wire  _T_37 = 4'h0 == io_id_i_aluOp; // @[Mux.scala 68:19]
  wire [62:0] Aluresult = _T_37 ? {{31'd0}, _T_1} : _T_36; // @[Mux.scala 68:16]
  wire [31:0] mduResult = mdu_io_valid ? mdu_io_result : 32'h0; // @[EX.scala 40:22]
  wire  _T_38 = io_id_i_mduOp != 4'h0; // @[EX.scala 43:34]
  wire [62:0] _T_39 = _T_38 ? {{31'd0}, mduResult} : Aluresult; // @[EX.scala 43:19]
  wire [62:0] result = io_id_i_csren ? {{31'd0}, io_id_i_csrrData} : _T_39; // @[EX.scala 42:19]
  wire  _T_40 = io_id_i_lsuOp != 4'h0; // @[EX.scala 44:31]
  MDU mdu ( // @[EX.scala 35:19]
    .clock(mdu_clock),
    .reset(mdu_reset),
    .io_flush(mdu_io_flush),
    .io_op(mdu_io_op),
    .io_valid(mdu_io_valid),
    .io_opr1(mdu_io_opr1),
    .io_opr2(mdu_io_opr2),
    .io_result(mdu_io_result)
  );
  assign io_stallReq = ~mdu_io_valid; // @[EX.scala 48:24]
  assign io_ex_o_lsuOp = io_id_i_lsuOp; // @[EX.scala 49:24]
  assign io_ex_o_lsuData = io_id_i_lsuData; // @[EX.scala 50:24]
  assign io_ex_o_reg_en = io_id_i_regWen; // @[EX.scala 51:24]
  assign io_ex_o_reg_addr = io_id_i_regWaddr; // @[EX.scala 52:24]
  assign io_ex_o_reg_data = result[31:0]; // @[EX.scala 53:24]
  assign io_ex_o_load = _T_40 & io_id_i_regWen; // @[EX.scala 54:24]
  assign io_ex_o_csr_op = io_id_i_csrOp; // @[EX.scala 56:24]
  assign io_ex_o_csr_addr = io_id_i_csrAddr; // @[EX.scala 57:24]
  assign io_ex_o_csr_data = io_id_i_csrwData; // @[EX.scala 58:24]
  assign io_ex_o_csr_retired = io_id_i_inst != 32'h13; // @[EX.scala 59:24]
  assign io_ex_o_excType = io_id_i_excType; // @[EX.scala 60:24]
  assign io_ex_o_excValue = io_id_i_excValue; // @[EX.scala 61:24]
  assign io_ex_o_inst = io_id_i_inst; // @[EX.scala 63:24]
  assign io_ex_o_currentPc = io_id_i_currentPc; // @[EX.scala 64:24]
  assign mdu_clock = clock;
  assign mdu_reset = reset;
  assign mdu_io_flush = io_flush; // @[EX.scala 39:15]
  assign mdu_io_op = io_id_i_mduOp; // @[EX.scala 36:12]
  assign mdu_io_opr1 = io_id_i_opr1; // @[EX.scala 37:14]
  assign mdu_io_opr2 = io_id_i_opr2; // @[EX.scala 38:14]
endmodule
module MidStage_2(
  input         clock,
  input         reset,
  input         io_flush,
  input         io_stallPrev,
  input         io_stallNext,
  input  [3:0]  io_prev_lsuOp,
  input  [31:0] io_prev_lsuData,
  input         io_prev_reg_en,
  input  [4:0]  io_prev_reg_addr,
  input  [31:0] io_prev_reg_data,
  input  [2:0]  io_prev_csr_op,
  input  [11:0] io_prev_csr_addr,
  input  [31:0] io_prev_csr_data,
  input         io_prev_csr_retired,
  input  [3:0]  io_prev_excType,
  input  [31:0] io_prev_excValue,
  input  [31:0] io_prev_inst,
  input  [31:0] io_prev_currentPc,
  output [3:0]  io_next_lsuOp,
  output [31:0] io_next_lsuData,
  output        io_next_reg_en,
  output [4:0]  io_next_reg_addr,
  output [31:0] io_next_reg_data,
  output [2:0]  io_next_csr_op,
  output [11:0] io_next_csr_addr,
  output [31:0] io_next_csr_data,
  output        io_next_csr_retired,
  output [3:0]  io_next_excType,
  output [31:0] io_next_excValue,
  output [31:0] io_next_inst,
  output [31:0] io_next_currentPc
);
  reg [3:0] ff_lsuOp; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_0;
  reg [31:0] ff_lsuData; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_1;
  reg  ff_reg_en; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_2;
  reg [4:0] ff_reg_addr; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_3;
  reg [31:0] ff_reg_data; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_4;
  reg [2:0] ff_csr_op; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_5;
  reg [11:0] ff_csr_addr; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_6;
  reg [31:0] ff_csr_data; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_7;
  reg  ff_csr_retired; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_8;
  reg [3:0] ff_excType; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_9;
  reg [31:0] ff_excValue; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_10;
  reg [31:0] ff_inst; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_11;
  reg [31:0] ff_currentPc; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_12;
  wire  _T_1 = ~io_stallNext; // @[MidStage.scala 18:37]
  wire  _T_2 = io_stallPrev & _T_1; // @[MidStage.scala 18:34]
  wire  _T_3 = io_flush | _T_2; // @[MidStage.scala 18:18]
  wire  _T_5 = ~io_stallPrev; // @[MidStage.scala 21:13]
  assign io_next_lsuOp = ff_lsuOp; // @[MidStage.scala 25:11]
  assign io_next_lsuData = ff_lsuData; // @[MidStage.scala 25:11]
  assign io_next_reg_en = ff_reg_en; // @[MidStage.scala 25:11]
  assign io_next_reg_addr = ff_reg_addr; // @[MidStage.scala 25:11]
  assign io_next_reg_data = ff_reg_data; // @[MidStage.scala 25:11]
  assign io_next_csr_op = ff_csr_op; // @[MidStage.scala 25:11]
  assign io_next_csr_addr = ff_csr_addr; // @[MidStage.scala 25:11]
  assign io_next_csr_data = ff_csr_data; // @[MidStage.scala 25:11]
  assign io_next_csr_retired = ff_csr_retired; // @[MidStage.scala 25:11]
  assign io_next_excType = ff_excType; // @[MidStage.scala 25:11]
  assign io_next_excValue = ff_excValue; // @[MidStage.scala 25:11]
  assign io_next_inst = ff_inst; // @[MidStage.scala 25:11]
  assign io_next_currentPc = ff_currentPc; // @[MidStage.scala 25:11]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  ff_lsuOp = _RAND_0[3:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  ff_lsuData = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  ff_reg_en = _RAND_2[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  ff_reg_addr = _RAND_3[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  ff_reg_data = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  ff_csr_op = _RAND_5[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  ff_csr_addr = _RAND_6[11:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  ff_csr_data = _RAND_7[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  ff_csr_retired = _RAND_8[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  ff_excType = _RAND_9[3:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  ff_excValue = _RAND_10[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  ff_inst = _RAND_11[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  ff_currentPc = _RAND_12[31:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (reset) begin
      ff_lsuOp <= 4'h0;
    end else if (_T_3) begin
      ff_lsuOp <= 4'h0;
    end else if (_T_5) begin
      ff_lsuOp <= io_prev_lsuOp;
    end
    if (reset) begin
      ff_lsuData <= 32'h0;
    end else if (_T_3) begin
      ff_lsuData <= 32'h0;
    end else if (_T_5) begin
      ff_lsuData <= io_prev_lsuData;
    end
    if (reset) begin
      ff_reg_en <= 1'h0;
    end else if (_T_3) begin
      ff_reg_en <= 1'h0;
    end else if (_T_5) begin
      ff_reg_en <= io_prev_reg_en;
    end
    if (reset) begin
      ff_reg_addr <= 5'h0;
    end else if (_T_3) begin
      ff_reg_addr <= 5'h0;
    end else if (_T_5) begin
      ff_reg_addr <= io_prev_reg_addr;
    end
    if (reset) begin
      ff_reg_data <= 32'h0;
    end else if (_T_3) begin
      ff_reg_data <= 32'h0;
    end else if (_T_5) begin
      ff_reg_data <= io_prev_reg_data;
    end
    if (reset) begin
      ff_csr_op <= 3'h0;
    end else if (_T_3) begin
      ff_csr_op <= 3'h0;
    end else if (_T_5) begin
      ff_csr_op <= io_prev_csr_op;
    end
    if (reset) begin
      ff_csr_addr <= 12'h0;
    end else if (_T_3) begin
      ff_csr_addr <= 12'h0;
    end else if (_T_5) begin
      ff_csr_addr <= io_prev_csr_addr;
    end
    if (reset) begin
      ff_csr_data <= 32'h0;
    end else if (_T_3) begin
      ff_csr_data <= 32'h0;
    end else if (_T_5) begin
      ff_csr_data <= io_prev_csr_data;
    end
    if (reset) begin
      ff_csr_retired <= 1'h0;
    end else if (_T_3) begin
      ff_csr_retired <= 1'h0;
    end else if (_T_5) begin
      ff_csr_retired <= io_prev_csr_retired;
    end
    if (reset) begin
      ff_excType <= 4'h0;
    end else if (_T_3) begin
      ff_excType <= 4'h0;
    end else if (_T_5) begin
      ff_excType <= io_prev_excType;
    end
    if (reset) begin
      ff_excValue <= 32'h0;
    end else if (_T_3) begin
      ff_excValue <= 32'h0;
    end else if (_T_5) begin
      ff_excValue <= io_prev_excValue;
    end
    if (reset) begin
      ff_inst <= 32'h0;
    end else if (_T_3) begin
      ff_inst <= 32'h0;
    end else if (_T_5) begin
      ff_inst <= io_prev_inst;
    end
    if (reset) begin
      ff_currentPc <= 32'h0;
    end else if (_T_3) begin
      ff_currentPc <= 32'h0;
    end else if (_T_5) begin
      ff_currentPc <= io_prev_currentPc;
    end
  end
endmodule
module MEM(
  input         clock,
  input         reset,
  input  [3:0]  io_ex_i_lsuOp,
  input  [31:0] io_ex_i_lsuData,
  input         io_ex_i_reg_en,
  input  [4:0]  io_ex_i_reg_addr,
  input  [31:0] io_ex_i_reg_data,
  input  [2:0]  io_ex_i_csr_op,
  input  [11:0] io_ex_i_csr_addr,
  input  [31:0] io_ex_i_csr_data,
  input         io_ex_i_csr_retired,
  input  [3:0]  io_ex_i_excType,
  input  [31:0] io_ex_i_excValue,
  input  [31:0] io_ex_i_inst,
  input  [31:0] io_ex_i_currentPc,
  output        io_stallReq,
  output        io_except_hasTrap,
  output [30:0] io_except_excCause,
  output [31:0] io_except_excPc,
  output [31:0] io_except_excValue,
  input         io_csrHasInt,
  input         io_csrBusy,
  output        io_mem_o_reg_en,
  output [4:0]  io_mem_o_reg_addr,
  output [31:0] io_mem_o_reg_data,
  output [2:0]  io_mem_o_csr_op,
  output [11:0] io_mem_o_csr_addr,
  output [31:0] io_mem_o_csr_data,
  output        io_mem_o_csr_retired,
  output [31:0] io_mem_o_currentPc,
  output [31:0] io_mem_o_inst,
  output [31:0] io_state,
  input         io_axi_master_awready,
  output        io_axi_master_awvalid,
  output [31:0] io_axi_master_awaddr,
  input         io_axi_master_wready,
  output        io_axi_master_wvalid,
  output [31:0] io_axi_master_wdata,
  output [3:0]  io_axi_master_wstrb,
  output        io_axi_master_bready,
  input         io_axi_master_bvalid,
  input         io_axi_master_arready,
  output        io_axi_master_arvalid,
  output [31:0] io_axi_master_araddr,
  output        io_axi_master_rready,
  input         io_axi_master_rvalid,
  input  [31:0] io_axi_master_rdata
);
  wire  _T_1 = 4'h1 == io_ex_i_lsuOp; // @[Lookup.scala 31:38]
  wire  _T_3 = 4'h2 == io_ex_i_lsuOp; // @[Lookup.scala 31:38]
  wire  _T_5 = 4'h3 == io_ex_i_lsuOp; // @[Lookup.scala 31:38]
  wire  _T_7 = 4'h4 == io_ex_i_lsuOp; // @[Lookup.scala 31:38]
  wire  _T_9 = 4'h5 == io_ex_i_lsuOp; // @[Lookup.scala 31:38]
  wire  _T_11 = 4'h6 == io_ex_i_lsuOp; // @[Lookup.scala 31:38]
  wire  _T_13 = 4'h7 == io_ex_i_lsuOp; // @[Lookup.scala 31:38]
  wire  _T_15 = 4'h8 == io_ex_i_lsuOp; // @[Lookup.scala 31:38]
  wire  _T_17 = _T_13 | _T_15; // @[Lookup.scala 33:37]
  wire  _T_18 = _T_11 | _T_17; // @[Lookup.scala 33:37]
  wire  _T_19 = _T_9 ? 1'h0 : _T_18; // @[Lookup.scala 33:37]
  wire  _T_20 = _T_7 ? 1'h0 : _T_19; // @[Lookup.scala 33:37]
  wire  _T_21 = _T_5 ? 1'h0 : _T_20; // @[Lookup.scala 33:37]
  wire  _T_22 = _T_3 ? 1'h0 : _T_21; // @[Lookup.scala 33:37]
  wire  wen = _T_1 ? 1'h0 : _T_22; // @[Lookup.scala 33:37]
  wire  _T_27 = _T_7 | _T_9; // @[Lookup.scala 33:37]
  wire  _T_28 = _T_5 | _T_27; // @[Lookup.scala 33:37]
  wire  _T_29 = _T_3 | _T_28; // @[Lookup.scala 33:37]
  wire  ren = _T_1 | _T_29; // @[Lookup.scala 33:37]
  wire [1:0] _T_30 = _T_15 ? 2'h2 : 2'h0; // @[Lookup.scala 33:37]
  wire [1:0] _T_31 = _T_13 ? 2'h1 : _T_30; // @[Lookup.scala 33:37]
  wire [1:0] _T_32 = _T_11 ? 2'h0 : _T_31; // @[Lookup.scala 33:37]
  wire [1:0] _T_33 = _T_9 ? 2'h1 : _T_32; // @[Lookup.scala 33:37]
  wire [1:0] _T_34 = _T_7 ? 2'h0 : _T_33; // @[Lookup.scala 33:37]
  wire [1:0] _T_35 = _T_5 ? 2'h2 : _T_34; // @[Lookup.scala 33:37]
  wire [1:0] _T_36 = _T_3 ? 2'h1 : _T_35; // @[Lookup.scala 33:37]
  wire [1:0] width = _T_1 ? 2'h0 : _T_36; // @[Lookup.scala 33:37]
  wire  signed_ = _T_1 | _T_3; // @[Lookup.scala 33:37]
  wire [1:0] sel = io_ex_i_reg_data[1:0]; // @[MEM.scala 28:29]
  wire  _T_44 = 2'h2 == width; // @[Mux.scala 68:19]
  wire [3:0] _T_45 = _T_44 ? 4'hf : 4'h0; // @[Mux.scala 68:16]
  wire  _T_46 = 2'h1 == width; // @[Mux.scala 68:19]
  wire [3:0] _T_47 = _T_46 ? 4'h3 : _T_45; // @[Mux.scala 68:16]
  wire  _T_48 = 2'h0 == width; // @[Mux.scala 68:19]
  wire  ar_hs = io_axi_master_arvalid & io_axi_master_arready; // @[MEM.scala 38:37]
  wire  r_hs = io_axi_master_rvalid & io_axi_master_rready; // @[MEM.scala 39:35]
  wire  aw_hs = io_axi_master_awvalid & io_axi_master_awready; // @[MEM.scala 40:37]
  wire  w_hs = io_axi_master_wvalid & io_axi_master_wready; // @[MEM.scala 41:35]
  wire  b_hs = io_axi_master_bvalid & io_axi_master_bready; // @[MEM.scala 42:35]
  reg [2:0] state; // @[MEM.scala 46:22]
  reg [31:0] _RAND_0;
  wire  _T_49 = 3'h0 == state; // @[Conditional.scala 37:30]
  wire  _T_50 = ~io_csrBusy; // @[MEM.scala 51:12]
  wire  _T_51 = ~io_except_hasTrap; // @[MEM.scala 51:27]
  wire  _T_52 = _T_50 & _T_51; // @[MEM.scala 51:24]
  wire  _T_53 = 3'h1 == state; // @[Conditional.scala 37:30]
  wire  _T_54 = 3'h2 == state; // @[Conditional.scala 37:30]
  wire  _T_55 = 3'h3 == state; // @[Conditional.scala 37:30]
  wire  _T_56 = 3'h4 == state; // @[Conditional.scala 37:30]
  wire  _T_57 = 3'h5 == state; // @[Conditional.scala 37:30]
  wire  _T_63 = b_hs | r_hs; // @[MEM.scala 97:27]
  wire  _T_64 = ren | wen; // @[MEM.scala 98:13]
  wire  _T_65 = _T_64 | io_csrBusy; // @[MEM.scala 98:20]
  wire [23:0] _T_70 = io_axi_master_rdata[7] ? 24'hffffff : 24'h0; // @[Bitwise.scala 72:12]
  wire [31:0] _T_72 = {_T_70,io_axi_master_rdata[7:0]}; // @[Cat.scala 30:58]
  wire [15:0] _T_75 = io_axi_master_rdata[15] ? 16'hffff : 16'h0; // @[Bitwise.scala 72:12]
  wire [31:0] _T_77 = {_T_75,io_axi_master_rdata[15:0]}; // @[Cat.scala 30:58]
  wire [31:0] _T_79 = _T_44 ? io_axi_master_rdata : 32'h0; // @[Mux.scala 68:16]
  wire [31:0] _T_81 = _T_46 ? _T_77 : _T_79; // @[Mux.scala 68:16]
  wire [31:0] loadData = _T_48 ? _T_72 : _T_81; // @[Mux.scala 68:16]
  wire [31:0] _T_83 = signed_ ? loadData : io_axi_master_rdata; // @[MEM.scala 107:30]
  wire  _T_87 = sel != 2'h0; // @[MEM.scala 114:32]
  wire  _T_89 = _T_44 & _T_87; // @[Mux.scala 68:16]
  wire  _T_91 = _T_46 ? sel[0] : _T_89; // @[Mux.scala 68:16]
  wire  memAddr = _T_48 ? 1'h0 : _T_91; // @[Mux.scala 68:16]
  wire  instAddr = io_ex_i_excType == 4'h7; // @[MEM.scala 119:34]
  wire  instIllg = io_ex_i_excType == 4'h5; // @[MEM.scala 120:34]
  wire  _T_93 = io_ex_i_excType == 4'h8; // @[MEM.scala 121:32]
  wire  excMem = _T_93 & memAddr; // @[MEM.scala 121:45]
  wire  excOther = io_ex_i_excType == 4'h1; // @[MEM.scala 122:34]
  wire  _T_94 = instAddr | instIllg; // @[MEM.scala 124:26]
  wire  _T_95 = _T_94 | excMem; // @[MEM.scala 124:38]
  wire  _T_96 = _T_95 | excOther; // @[MEM.scala 124:48]
  wire [30:0] _T_97 = memAddr ? 31'h4 : 31'hd; // @[MEM.scala 127:20]
  wire  _T_98 = 4'h8 == io_ex_i_excType; // @[Mux.scala 68:19]
  wire [30:0] _T_99 = _T_98 ? _T_97 : 31'h0; // @[Mux.scala 68:16]
  wire  _T_100 = 4'h1 == io_ex_i_excType; // @[Mux.scala 68:19]
  wire [30:0] cause = _T_100 ? 31'hb : _T_99; // @[Mux.scala 68:16]
  wire [30:0] _T_101 = instAddr ? 31'h0 : cause; // @[MEM.scala 129:49]
  wire [31:0] _T_102 = memAddr ? io_ex_i_reg_data : io_ex_i_excValue; // @[MEM.scala 131:49]
  assign io_stallReq = _T_63 ? 1'h0 : _T_65; // @[MEM.scala 97:15]
  assign io_except_hasTrap = _T_96 | io_csrHasInt; // @[MEM.scala 135:21]
  assign io_except_excCause = instIllg ? 31'h2 : _T_101; // @[MEM.scala 136:22]
  assign io_except_excPc = io_ex_i_currentPc; // @[MEM.scala 134:19]
  assign io_except_excValue = instIllg ? io_ex_i_inst : _T_102; // @[MEM.scala 137:22]
  assign io_mem_o_reg_en = io_ex_i_reg_en; // @[MEM.scala 144:19]
  assign io_mem_o_reg_addr = io_ex_i_reg_addr; // @[MEM.scala 145:21]
  assign io_mem_o_reg_data = ren ? _T_83 : io_ex_i_reg_data; // @[MEM.scala 146:21]
  assign io_mem_o_csr_op = io_ex_i_csr_op; // @[MEM.scala 147:16]
  assign io_mem_o_csr_addr = io_ex_i_csr_addr; // @[MEM.scala 147:16]
  assign io_mem_o_csr_data = io_ex_i_csr_data; // @[MEM.scala 147:16]
  assign io_mem_o_csr_retired = io_ex_i_csr_retired; // @[MEM.scala 147:16]
  assign io_mem_o_currentPc = io_ex_i_currentPc; // @[MEM.scala 142:22]
  assign io_mem_o_inst = io_ex_i_inst; // @[MEM.scala 143:17]
  assign io_state = {{29'd0}, state}; // @[MEM.scala 108:12]
  assign io_axi_master_awvalid = state != 3'h0; // @[MEM.scala 85:25]
  assign io_axi_master_awaddr = io_ex_i_reg_data; // @[MEM.scala 86:24]
  assign io_axi_master_wvalid = state == 3'h2; // @[MEM.scala 91:24]
  assign io_axi_master_wdata = io_ex_i_lsuData; // @[MEM.scala 92:23]
  assign io_axi_master_wstrb = _T_48 ? 4'h1 : _T_47; // @[MEM.scala 93:23]
  assign io_axi_master_bready = state == 3'h3; // @[MEM.scala 95:24]
  assign io_axi_master_arvalid = state == 3'h4; // @[MEM.scala 77:25]
  assign io_axi_master_araddr = io_ex_i_reg_data; // @[MEM.scala 78:24]
  assign io_axi_master_rready = state == 3'h5; // @[MEM.scala 83:24]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  state = _RAND_0[2:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (reset) begin
      state <= 3'h0;
    end else if (_T_49) begin
      if (_T_52) begin
        if (wen) begin
          state <= 3'h1;
        end else if (ren) begin
          state <= 3'h4;
        end
      end
    end else if (_T_53) begin
      if (aw_hs) begin
        state <= 3'h2;
      end
    end else if (_T_54) begin
      if (w_hs) begin
        state <= 3'h3;
      end
    end else if (_T_55) begin
      if (b_hs) begin
        state <= 3'h0;
      end
    end else if (_T_56) begin
      if (ar_hs) begin
        state <= 3'h5;
      end
    end else if (_T_57) begin
      if (r_hs) begin
        state <= 3'h0;
      end
    end
  end
endmodule
module MidStage_3(
  input         clock,
  input         reset,
  input         io_flush,
  input         io_stallPrev,
  input         io_stallNext,
  input         io_prev_reg_en,
  input  [4:0]  io_prev_reg_addr,
  input  [31:0] io_prev_reg_data,
  input  [2:0]  io_prev_csr_op,
  input  [11:0] io_prev_csr_addr,
  input  [31:0] io_prev_csr_data,
  input         io_prev_csr_retired,
  input  [31:0] io_prev_currentPc,
  input  [31:0] io_prev_inst,
  output        io_next_reg_en,
  output [4:0]  io_next_reg_addr,
  output [31:0] io_next_reg_data,
  output [2:0]  io_next_csr_op,
  output [11:0] io_next_csr_addr,
  output [31:0] io_next_csr_data,
  output        io_next_csr_retired,
  output [31:0] io_next_currentPc,
  output [31:0] io_next_inst
);
  reg  ff_reg_en; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_0;
  reg [4:0] ff_reg_addr; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_1;
  reg [31:0] ff_reg_data; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_2;
  reg [2:0] ff_csr_op; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_3;
  reg [11:0] ff_csr_addr; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_4;
  reg [31:0] ff_csr_data; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_5;
  reg  ff_csr_retired; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_6;
  reg [31:0] ff_currentPc; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_7;
  reg [31:0] ff_inst; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_8;
  wire  _T_1 = ~io_stallNext; // @[MidStage.scala 18:37]
  wire  _T_2 = io_stallPrev & _T_1; // @[MidStage.scala 18:34]
  wire  _T_3 = io_flush | _T_2; // @[MidStage.scala 18:18]
  wire  _T_5 = ~io_stallPrev; // @[MidStage.scala 21:13]
  assign io_next_reg_en = ff_reg_en; // @[MidStage.scala 25:11]
  assign io_next_reg_addr = ff_reg_addr; // @[MidStage.scala 25:11]
  assign io_next_reg_data = ff_reg_data; // @[MidStage.scala 25:11]
  assign io_next_csr_op = ff_csr_op; // @[MidStage.scala 25:11]
  assign io_next_csr_addr = ff_csr_addr; // @[MidStage.scala 25:11]
  assign io_next_csr_data = ff_csr_data; // @[MidStage.scala 25:11]
  assign io_next_csr_retired = ff_csr_retired; // @[MidStage.scala 25:11]
  assign io_next_currentPc = ff_currentPc; // @[MidStage.scala 25:11]
  assign io_next_inst = ff_inst; // @[MidStage.scala 25:11]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  ff_reg_en = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  ff_reg_addr = _RAND_1[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  ff_reg_data = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  ff_csr_op = _RAND_3[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  ff_csr_addr = _RAND_4[11:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  ff_csr_data = _RAND_5[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  ff_csr_retired = _RAND_6[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  ff_currentPc = _RAND_7[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  ff_inst = _RAND_8[31:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (reset) begin
      ff_reg_en <= 1'h0;
    end else if (_T_3) begin
      ff_reg_en <= 1'h0;
    end else if (_T_5) begin
      ff_reg_en <= io_prev_reg_en;
    end
    if (reset) begin
      ff_reg_addr <= 5'h0;
    end else if (_T_3) begin
      ff_reg_addr <= 5'h0;
    end else if (_T_5) begin
      ff_reg_addr <= io_prev_reg_addr;
    end
    if (reset) begin
      ff_reg_data <= 32'h0;
    end else if (_T_3) begin
      ff_reg_data <= 32'h0;
    end else if (_T_5) begin
      ff_reg_data <= io_prev_reg_data;
    end
    if (reset) begin
      ff_csr_op <= 3'h0;
    end else if (_T_3) begin
      ff_csr_op <= 3'h0;
    end else if (_T_5) begin
      ff_csr_op <= io_prev_csr_op;
    end
    if (reset) begin
      ff_csr_addr <= 12'h0;
    end else if (_T_3) begin
      ff_csr_addr <= 12'h0;
    end else if (_T_5) begin
      ff_csr_addr <= io_prev_csr_addr;
    end
    if (reset) begin
      ff_csr_data <= 32'h0;
    end else if (_T_3) begin
      ff_csr_data <= 32'h0;
    end else if (_T_5) begin
      ff_csr_data <= io_prev_csr_data;
    end
    if (reset) begin
      ff_csr_retired <= 1'h0;
    end else if (_T_3) begin
      ff_csr_retired <= 1'h0;
    end else if (_T_5) begin
      ff_csr_retired <= io_prev_csr_retired;
    end
    if (reset) begin
      ff_currentPc <= 32'h0;
    end else if (_T_3) begin
      ff_currentPc <= 32'h0;
    end else if (_T_5) begin
      ff_currentPc <= io_prev_currentPc;
    end
    if (reset) begin
      ff_inst <= 32'h0;
    end else if (_T_3) begin
      ff_inst <= 32'h0;
    end else if (_T_5) begin
      ff_inst <= io_prev_inst;
    end
  end
endmodule
module WB(
  input         io_mem_i_reg_en,
  input  [4:0]  io_mem_i_reg_addr,
  input  [31:0] io_mem_i_reg_data,
  input  [2:0]  io_mem_i_csr_op,
  input  [11:0] io_mem_i_csr_addr,
  input  [31:0] io_mem_i_csr_data,
  input         io_mem_i_csr_retired,
  input  [31:0] io_mem_i_currentPc,
  input  [31:0] io_mem_i_inst,
  output        io_regen,
  output [4:0]  io_regaddr,
  output [31:0] io_regdata,
  output [2:0]  io_csr_op,
  output [11:0] io_csr_addr,
  output [31:0] io_csr_data,
  output        io_csr_retired,
  output [31:0] io_wb_pc,
  output [31:0] io_wbinst
);
  assign io_regen = io_mem_i_reg_en; // @[WB.scala 17:11]
  assign io_regaddr = io_mem_i_reg_addr; // @[WB.scala 18:13]
  assign io_regdata = io_mem_i_reg_data; // @[WB.scala 19:13]
  assign io_csr_op = io_mem_i_csr_op; // @[WB.scala 20:9]
  assign io_csr_addr = io_mem_i_csr_addr; // @[WB.scala 20:9]
  assign io_csr_data = io_mem_i_csr_data; // @[WB.scala 20:9]
  assign io_csr_retired = io_mem_i_csr_retired; // @[WB.scala 20:9]
  assign io_wb_pc = io_mem_i_currentPc; // @[WB.scala 21:11]
  assign io_wbinst = io_mem_i_inst; // @[WB.scala 22:12]
endmodule
module RegFile(
  input         clock,
  input         reset,
  input         io_read1_en,
  input  [4:0]  io_read1_addr,
  output [31:0] io_read1_data,
  input         io_read2_en,
  input  [4:0]  io_read2_addr,
  output [31:0] io_read2_data,
  input         io_en,
  input  [4:0]  io_addr,
  input  [31:0] io_data,
  output [31:0] io_s_regs_0,
  output [31:0] io_s_regs_1,
  output [31:0] io_s_regs_2,
  output [31:0] io_s_regs_3,
  output [31:0] io_s_regs_4,
  output [31:0] io_s_regs_5,
  output [31:0] io_s_regs_6,
  output [31:0] io_s_regs_7,
  output [31:0] io_s_regs_8,
  output [31:0] io_s_regs_9,
  output [31:0] io_s_regs_10,
  output [31:0] io_s_regs_11,
  output [31:0] io_s_regs_12,
  output [31:0] io_s_regs_13,
  output [31:0] io_s_regs_14,
  output [31:0] io_s_regs_15,
  output [31:0] io_s_regs_16,
  output [31:0] io_s_regs_17,
  output [31:0] io_s_regs_18,
  output [31:0] io_s_regs_19,
  output [31:0] io_s_regs_20,
  output [31:0] io_s_regs_21,
  output [31:0] io_s_regs_22,
  output [31:0] io_s_regs_23,
  output [31:0] io_s_regs_24,
  output [31:0] io_s_regs_25,
  output [31:0] io_s_regs_26,
  output [31:0] io_s_regs_27,
  output [31:0] io_s_regs_28,
  output [31:0] io_s_regs_29,
  output [31:0] io_s_regs_30,
  output [31:0] io_s_regs_31
);
  reg [31:0] regfile_0; // @[regfile.scala 19:24]
  reg [31:0] _RAND_0;
  reg [31:0] regfile_1; // @[regfile.scala 19:24]
  reg [31:0] _RAND_1;
  reg [31:0] regfile_2; // @[regfile.scala 19:24]
  reg [31:0] _RAND_2;
  reg [31:0] regfile_3; // @[regfile.scala 19:24]
  reg [31:0] _RAND_3;
  reg [31:0] regfile_4; // @[regfile.scala 19:24]
  reg [31:0] _RAND_4;
  reg [31:0] regfile_5; // @[regfile.scala 19:24]
  reg [31:0] _RAND_5;
  reg [31:0] regfile_6; // @[regfile.scala 19:24]
  reg [31:0] _RAND_6;
  reg [31:0] regfile_7; // @[regfile.scala 19:24]
  reg [31:0] _RAND_7;
  reg [31:0] regfile_8; // @[regfile.scala 19:24]
  reg [31:0] _RAND_8;
  reg [31:0] regfile_9; // @[regfile.scala 19:24]
  reg [31:0] _RAND_9;
  reg [31:0] regfile_10; // @[regfile.scala 19:24]
  reg [31:0] _RAND_10;
  reg [31:0] regfile_11; // @[regfile.scala 19:24]
  reg [31:0] _RAND_11;
  reg [31:0] regfile_12; // @[regfile.scala 19:24]
  reg [31:0] _RAND_12;
  reg [31:0] regfile_13; // @[regfile.scala 19:24]
  reg [31:0] _RAND_13;
  reg [31:0] regfile_14; // @[regfile.scala 19:24]
  reg [31:0] _RAND_14;
  reg [31:0] regfile_15; // @[regfile.scala 19:24]
  reg [31:0] _RAND_15;
  reg [31:0] regfile_16; // @[regfile.scala 19:24]
  reg [31:0] _RAND_16;
  reg [31:0] regfile_17; // @[regfile.scala 19:24]
  reg [31:0] _RAND_17;
  reg [31:0] regfile_18; // @[regfile.scala 19:24]
  reg [31:0] _RAND_18;
  reg [31:0] regfile_19; // @[regfile.scala 19:24]
  reg [31:0] _RAND_19;
  reg [31:0] regfile_20; // @[regfile.scala 19:24]
  reg [31:0] _RAND_20;
  reg [31:0] regfile_21; // @[regfile.scala 19:24]
  reg [31:0] _RAND_21;
  reg [31:0] regfile_22; // @[regfile.scala 19:24]
  reg [31:0] _RAND_22;
  reg [31:0] regfile_23; // @[regfile.scala 19:24]
  reg [31:0] _RAND_23;
  reg [31:0] regfile_24; // @[regfile.scala 19:24]
  reg [31:0] _RAND_24;
  reg [31:0] regfile_25; // @[regfile.scala 19:24]
  reg [31:0] _RAND_25;
  reg [31:0] regfile_26; // @[regfile.scala 19:24]
  reg [31:0] _RAND_26;
  reg [31:0] regfile_27; // @[regfile.scala 19:24]
  reg [31:0] _RAND_27;
  reg [31:0] regfile_28; // @[regfile.scala 19:24]
  reg [31:0] _RAND_28;
  reg [31:0] regfile_29; // @[regfile.scala 19:24]
  reg [31:0] _RAND_29;
  reg [31:0] regfile_30; // @[regfile.scala 19:24]
  reg [31:0] _RAND_30;
  reg [31:0] regfile_31; // @[regfile.scala 19:24]
  reg [31:0] _RAND_31;
  wire [31:0] _GEN_1 = 5'h1 == io_read1_addr ? regfile_1 : regfile_0; // @[regfile.scala 25:23]
  wire [31:0] _GEN_2 = 5'h2 == io_read1_addr ? regfile_2 : _GEN_1; // @[regfile.scala 25:23]
  wire [31:0] _GEN_3 = 5'h3 == io_read1_addr ? regfile_3 : _GEN_2; // @[regfile.scala 25:23]
  wire [31:0] _GEN_4 = 5'h4 == io_read1_addr ? regfile_4 : _GEN_3; // @[regfile.scala 25:23]
  wire [31:0] _GEN_5 = 5'h5 == io_read1_addr ? regfile_5 : _GEN_4; // @[regfile.scala 25:23]
  wire [31:0] _GEN_6 = 5'h6 == io_read1_addr ? regfile_6 : _GEN_5; // @[regfile.scala 25:23]
  wire [31:0] _GEN_7 = 5'h7 == io_read1_addr ? regfile_7 : _GEN_6; // @[regfile.scala 25:23]
  wire [31:0] _GEN_8 = 5'h8 == io_read1_addr ? regfile_8 : _GEN_7; // @[regfile.scala 25:23]
  wire [31:0] _GEN_9 = 5'h9 == io_read1_addr ? regfile_9 : _GEN_8; // @[regfile.scala 25:23]
  wire [31:0] _GEN_10 = 5'ha == io_read1_addr ? regfile_10 : _GEN_9; // @[regfile.scala 25:23]
  wire [31:0] _GEN_11 = 5'hb == io_read1_addr ? regfile_11 : _GEN_10; // @[regfile.scala 25:23]
  wire [31:0] _GEN_12 = 5'hc == io_read1_addr ? regfile_12 : _GEN_11; // @[regfile.scala 25:23]
  wire [31:0] _GEN_13 = 5'hd == io_read1_addr ? regfile_13 : _GEN_12; // @[regfile.scala 25:23]
  wire [31:0] _GEN_14 = 5'he == io_read1_addr ? regfile_14 : _GEN_13; // @[regfile.scala 25:23]
  wire [31:0] _GEN_15 = 5'hf == io_read1_addr ? regfile_15 : _GEN_14; // @[regfile.scala 25:23]
  wire [31:0] _GEN_16 = 5'h10 == io_read1_addr ? regfile_16 : _GEN_15; // @[regfile.scala 25:23]
  wire [31:0] _GEN_17 = 5'h11 == io_read1_addr ? regfile_17 : _GEN_16; // @[regfile.scala 25:23]
  wire [31:0] _GEN_18 = 5'h12 == io_read1_addr ? regfile_18 : _GEN_17; // @[regfile.scala 25:23]
  wire [31:0] _GEN_19 = 5'h13 == io_read1_addr ? regfile_19 : _GEN_18; // @[regfile.scala 25:23]
  wire [31:0] _GEN_20 = 5'h14 == io_read1_addr ? regfile_20 : _GEN_19; // @[regfile.scala 25:23]
  wire [31:0] _GEN_21 = 5'h15 == io_read1_addr ? regfile_21 : _GEN_20; // @[regfile.scala 25:23]
  wire [31:0] _GEN_22 = 5'h16 == io_read1_addr ? regfile_22 : _GEN_21; // @[regfile.scala 25:23]
  wire [31:0] _GEN_23 = 5'h17 == io_read1_addr ? regfile_23 : _GEN_22; // @[regfile.scala 25:23]
  wire [31:0] _GEN_24 = 5'h18 == io_read1_addr ? regfile_24 : _GEN_23; // @[regfile.scala 25:23]
  wire [31:0] _GEN_25 = 5'h19 == io_read1_addr ? regfile_25 : _GEN_24; // @[regfile.scala 25:23]
  wire [31:0] _GEN_26 = 5'h1a == io_read1_addr ? regfile_26 : _GEN_25; // @[regfile.scala 25:23]
  wire [31:0] _GEN_27 = 5'h1b == io_read1_addr ? regfile_27 : _GEN_26; // @[regfile.scala 25:23]
  wire [31:0] _GEN_28 = 5'h1c == io_read1_addr ? regfile_28 : _GEN_27; // @[regfile.scala 25:23]
  wire [31:0] _GEN_29 = 5'h1d == io_read1_addr ? regfile_29 : _GEN_28; // @[regfile.scala 25:23]
  wire [31:0] _GEN_30 = 5'h1e == io_read1_addr ? regfile_30 : _GEN_29; // @[regfile.scala 25:23]
  wire [31:0] _GEN_31 = 5'h1f == io_read1_addr ? regfile_31 : _GEN_30; // @[regfile.scala 25:23]
  wire [31:0] _GEN_33 = 5'h1 == io_read2_addr ? regfile_1 : regfile_0; // @[regfile.scala 26:23]
  wire [31:0] _GEN_34 = 5'h2 == io_read2_addr ? regfile_2 : _GEN_33; // @[regfile.scala 26:23]
  wire [31:0] _GEN_35 = 5'h3 == io_read2_addr ? regfile_3 : _GEN_34; // @[regfile.scala 26:23]
  wire [31:0] _GEN_36 = 5'h4 == io_read2_addr ? regfile_4 : _GEN_35; // @[regfile.scala 26:23]
  wire [31:0] _GEN_37 = 5'h5 == io_read2_addr ? regfile_5 : _GEN_36; // @[regfile.scala 26:23]
  wire [31:0] _GEN_38 = 5'h6 == io_read2_addr ? regfile_6 : _GEN_37; // @[regfile.scala 26:23]
  wire [31:0] _GEN_39 = 5'h7 == io_read2_addr ? regfile_7 : _GEN_38; // @[regfile.scala 26:23]
  wire [31:0] _GEN_40 = 5'h8 == io_read2_addr ? regfile_8 : _GEN_39; // @[regfile.scala 26:23]
  wire [31:0] _GEN_41 = 5'h9 == io_read2_addr ? regfile_9 : _GEN_40; // @[regfile.scala 26:23]
  wire [31:0] _GEN_42 = 5'ha == io_read2_addr ? regfile_10 : _GEN_41; // @[regfile.scala 26:23]
  wire [31:0] _GEN_43 = 5'hb == io_read2_addr ? regfile_11 : _GEN_42; // @[regfile.scala 26:23]
  wire [31:0] _GEN_44 = 5'hc == io_read2_addr ? regfile_12 : _GEN_43; // @[regfile.scala 26:23]
  wire [31:0] _GEN_45 = 5'hd == io_read2_addr ? regfile_13 : _GEN_44; // @[regfile.scala 26:23]
  wire [31:0] _GEN_46 = 5'he == io_read2_addr ? regfile_14 : _GEN_45; // @[regfile.scala 26:23]
  wire [31:0] _GEN_47 = 5'hf == io_read2_addr ? regfile_15 : _GEN_46; // @[regfile.scala 26:23]
  wire [31:0] _GEN_48 = 5'h10 == io_read2_addr ? regfile_16 : _GEN_47; // @[regfile.scala 26:23]
  wire [31:0] _GEN_49 = 5'h11 == io_read2_addr ? regfile_17 : _GEN_48; // @[regfile.scala 26:23]
  wire [31:0] _GEN_50 = 5'h12 == io_read2_addr ? regfile_18 : _GEN_49; // @[regfile.scala 26:23]
  wire [31:0] _GEN_51 = 5'h13 == io_read2_addr ? regfile_19 : _GEN_50; // @[regfile.scala 26:23]
  wire [31:0] _GEN_52 = 5'h14 == io_read2_addr ? regfile_20 : _GEN_51; // @[regfile.scala 26:23]
  wire [31:0] _GEN_53 = 5'h15 == io_read2_addr ? regfile_21 : _GEN_52; // @[regfile.scala 26:23]
  wire [31:0] _GEN_54 = 5'h16 == io_read2_addr ? regfile_22 : _GEN_53; // @[regfile.scala 26:23]
  wire [31:0] _GEN_55 = 5'h17 == io_read2_addr ? regfile_23 : _GEN_54; // @[regfile.scala 26:23]
  wire [31:0] _GEN_56 = 5'h18 == io_read2_addr ? regfile_24 : _GEN_55; // @[regfile.scala 26:23]
  wire [31:0] _GEN_57 = 5'h19 == io_read2_addr ? regfile_25 : _GEN_56; // @[regfile.scala 26:23]
  wire [31:0] _GEN_58 = 5'h1a == io_read2_addr ? regfile_26 : _GEN_57; // @[regfile.scala 26:23]
  wire [31:0] _GEN_59 = 5'h1b == io_read2_addr ? regfile_27 : _GEN_58; // @[regfile.scala 26:23]
  wire [31:0] _GEN_60 = 5'h1c == io_read2_addr ? regfile_28 : _GEN_59; // @[regfile.scala 26:23]
  wire [31:0] _GEN_61 = 5'h1d == io_read2_addr ? regfile_29 : _GEN_60; // @[regfile.scala 26:23]
  wire [31:0] _GEN_62 = 5'h1e == io_read2_addr ? regfile_30 : _GEN_61; // @[regfile.scala 26:23]
  wire [31:0] _GEN_63 = 5'h1f == io_read2_addr ? regfile_31 : _GEN_62; // @[regfile.scala 26:23]
  wire  _T_3 = io_addr != 5'h0; // @[regfile.scala 29:25]
  wire  _T_4 = io_en & _T_3; // @[regfile.scala 29:14]
  assign io_read1_data = io_read1_en ? _GEN_31 : 32'h0; // @[regfile.scala 25:17]
  assign io_read2_data = io_read2_en ? _GEN_63 : 32'h0; // @[regfile.scala 26:17]
  assign io_s_regs_0 = regfile_0; // @[regfile.scala 22:13]
  assign io_s_regs_1 = regfile_1; // @[regfile.scala 22:13]
  assign io_s_regs_2 = regfile_2; // @[regfile.scala 22:13]
  assign io_s_regs_3 = regfile_3; // @[regfile.scala 22:13]
  assign io_s_regs_4 = regfile_4; // @[regfile.scala 22:13]
  assign io_s_regs_5 = regfile_5; // @[regfile.scala 22:13]
  assign io_s_regs_6 = regfile_6; // @[regfile.scala 22:13]
  assign io_s_regs_7 = regfile_7; // @[regfile.scala 22:13]
  assign io_s_regs_8 = regfile_8; // @[regfile.scala 22:13]
  assign io_s_regs_9 = regfile_9; // @[regfile.scala 22:13]
  assign io_s_regs_10 = regfile_10; // @[regfile.scala 22:13]
  assign io_s_regs_11 = regfile_11; // @[regfile.scala 22:13]
  assign io_s_regs_12 = regfile_12; // @[regfile.scala 22:13]
  assign io_s_regs_13 = regfile_13; // @[regfile.scala 22:13]
  assign io_s_regs_14 = regfile_14; // @[regfile.scala 22:13]
  assign io_s_regs_15 = regfile_15; // @[regfile.scala 22:13]
  assign io_s_regs_16 = regfile_16; // @[regfile.scala 22:13]
  assign io_s_regs_17 = regfile_17; // @[regfile.scala 22:13]
  assign io_s_regs_18 = regfile_18; // @[regfile.scala 22:13]
  assign io_s_regs_19 = regfile_19; // @[regfile.scala 22:13]
  assign io_s_regs_20 = regfile_20; // @[regfile.scala 22:13]
  assign io_s_regs_21 = regfile_21; // @[regfile.scala 22:13]
  assign io_s_regs_22 = regfile_22; // @[regfile.scala 22:13]
  assign io_s_regs_23 = regfile_23; // @[regfile.scala 22:13]
  assign io_s_regs_24 = regfile_24; // @[regfile.scala 22:13]
  assign io_s_regs_25 = regfile_25; // @[regfile.scala 22:13]
  assign io_s_regs_26 = regfile_26; // @[regfile.scala 22:13]
  assign io_s_regs_27 = regfile_27; // @[regfile.scala 22:13]
  assign io_s_regs_28 = regfile_28; // @[regfile.scala 22:13]
  assign io_s_regs_29 = regfile_29; // @[regfile.scala 22:13]
  assign io_s_regs_30 = regfile_30; // @[regfile.scala 22:13]
  assign io_s_regs_31 = regfile_31; // @[regfile.scala 22:13]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  regfile_0 = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  regfile_1 = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  regfile_2 = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  regfile_3 = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  regfile_4 = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  regfile_5 = _RAND_5[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  regfile_6 = _RAND_6[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  regfile_7 = _RAND_7[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  regfile_8 = _RAND_8[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  regfile_9 = _RAND_9[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  regfile_10 = _RAND_10[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  regfile_11 = _RAND_11[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  regfile_12 = _RAND_12[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  regfile_13 = _RAND_13[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  regfile_14 = _RAND_14[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  regfile_15 = _RAND_15[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {1{`RANDOM}};
  regfile_16 = _RAND_16[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_17 = {1{`RANDOM}};
  regfile_17 = _RAND_17[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_18 = {1{`RANDOM}};
  regfile_18 = _RAND_18[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_19 = {1{`RANDOM}};
  regfile_19 = _RAND_19[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_20 = {1{`RANDOM}};
  regfile_20 = _RAND_20[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_21 = {1{`RANDOM}};
  regfile_21 = _RAND_21[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_22 = {1{`RANDOM}};
  regfile_22 = _RAND_22[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_23 = {1{`RANDOM}};
  regfile_23 = _RAND_23[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_24 = {1{`RANDOM}};
  regfile_24 = _RAND_24[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_25 = {1{`RANDOM}};
  regfile_25 = _RAND_25[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_26 = {1{`RANDOM}};
  regfile_26 = _RAND_26[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_27 = {1{`RANDOM}};
  regfile_27 = _RAND_27[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_28 = {1{`RANDOM}};
  regfile_28 = _RAND_28[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_29 = {1{`RANDOM}};
  regfile_29 = _RAND_29[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_30 = {1{`RANDOM}};
  regfile_30 = _RAND_30[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_31 = {1{`RANDOM}};
  regfile_31 = _RAND_31[31:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (reset) begin
      regfile_0 <= 32'h0;
    end else if (_T_4) begin
      if (5'h0 == io_addr) begin
        regfile_0 <= io_data;
      end
    end
    if (reset) begin
      regfile_1 <= 32'h0;
    end else if (_T_4) begin
      if (5'h1 == io_addr) begin
        regfile_1 <= io_data;
      end
    end
    if (reset) begin
      regfile_2 <= 32'h0;
    end else if (_T_4) begin
      if (5'h2 == io_addr) begin
        regfile_2 <= io_data;
      end
    end
    if (reset) begin
      regfile_3 <= 32'h0;
    end else if (_T_4) begin
      if (5'h3 == io_addr) begin
        regfile_3 <= io_data;
      end
    end
    if (reset) begin
      regfile_4 <= 32'h0;
    end else if (_T_4) begin
      if (5'h4 == io_addr) begin
        regfile_4 <= io_data;
      end
    end
    if (reset) begin
      regfile_5 <= 32'h0;
    end else if (_T_4) begin
      if (5'h5 == io_addr) begin
        regfile_5 <= io_data;
      end
    end
    if (reset) begin
      regfile_6 <= 32'h0;
    end else if (_T_4) begin
      if (5'h6 == io_addr) begin
        regfile_6 <= io_data;
      end
    end
    if (reset) begin
      regfile_7 <= 32'h0;
    end else if (_T_4) begin
      if (5'h7 == io_addr) begin
        regfile_7 <= io_data;
      end
    end
    if (reset) begin
      regfile_8 <= 32'h0;
    end else if (_T_4) begin
      if (5'h8 == io_addr) begin
        regfile_8 <= io_data;
      end
    end
    if (reset) begin
      regfile_9 <= 32'h0;
    end else if (_T_4) begin
      if (5'h9 == io_addr) begin
        regfile_9 <= io_data;
      end
    end
    if (reset) begin
      regfile_10 <= 32'h0;
    end else if (_T_4) begin
      if (5'ha == io_addr) begin
        regfile_10 <= io_data;
      end
    end
    if (reset) begin
      regfile_11 <= 32'h0;
    end else if (_T_4) begin
      if (5'hb == io_addr) begin
        regfile_11 <= io_data;
      end
    end
    if (reset) begin
      regfile_12 <= 32'h0;
    end else if (_T_4) begin
      if (5'hc == io_addr) begin
        regfile_12 <= io_data;
      end
    end
    if (reset) begin
      regfile_13 <= 32'h0;
    end else if (_T_4) begin
      if (5'hd == io_addr) begin
        regfile_13 <= io_data;
      end
    end
    if (reset) begin
      regfile_14 <= 32'h0;
    end else if (_T_4) begin
      if (5'he == io_addr) begin
        regfile_14 <= io_data;
      end
    end
    if (reset) begin
      regfile_15 <= 32'h0;
    end else if (_T_4) begin
      if (5'hf == io_addr) begin
        regfile_15 <= io_data;
      end
    end
    if (reset) begin
      regfile_16 <= 32'h0;
    end else if (_T_4) begin
      if (5'h10 == io_addr) begin
        regfile_16 <= io_data;
      end
    end
    if (reset) begin
      regfile_17 <= 32'h0;
    end else if (_T_4) begin
      if (5'h11 == io_addr) begin
        regfile_17 <= io_data;
      end
    end
    if (reset) begin
      regfile_18 <= 32'h0;
    end else if (_T_4) begin
      if (5'h12 == io_addr) begin
        regfile_18 <= io_data;
      end
    end
    if (reset) begin
      regfile_19 <= 32'h0;
    end else if (_T_4) begin
      if (5'h13 == io_addr) begin
        regfile_19 <= io_data;
      end
    end
    if (reset) begin
      regfile_20 <= 32'h0;
    end else if (_T_4) begin
      if (5'h14 == io_addr) begin
        regfile_20 <= io_data;
      end
    end
    if (reset) begin
      regfile_21 <= 32'h0;
    end else if (_T_4) begin
      if (5'h15 == io_addr) begin
        regfile_21 <= io_data;
      end
    end
    if (reset) begin
      regfile_22 <= 32'h0;
    end else if (_T_4) begin
      if (5'h16 == io_addr) begin
        regfile_22 <= io_data;
      end
    end
    if (reset) begin
      regfile_23 <= 32'h0;
    end else if (_T_4) begin
      if (5'h17 == io_addr) begin
        regfile_23 <= io_data;
      end
    end
    if (reset) begin
      regfile_24 <= 32'h0;
    end else if (_T_4) begin
      if (5'h18 == io_addr) begin
        regfile_24 <= io_data;
      end
    end
    if (reset) begin
      regfile_25 <= 32'h0;
    end else if (_T_4) begin
      if (5'h19 == io_addr) begin
        regfile_25 <= io_data;
      end
    end
    if (reset) begin
      regfile_26 <= 32'h0;
    end else if (_T_4) begin
      if (5'h1a == io_addr) begin
        regfile_26 <= io_data;
      end
    end
    if (reset) begin
      regfile_27 <= 32'h0;
    end else if (_T_4) begin
      if (5'h1b == io_addr) begin
        regfile_27 <= io_data;
      end
    end
    if (reset) begin
      regfile_28 <= 32'h0;
    end else if (_T_4) begin
      if (5'h1c == io_addr) begin
        regfile_28 <= io_data;
      end
    end
    if (reset) begin
      regfile_29 <= 32'h0;
    end else if (_T_4) begin
      if (5'h1d == io_addr) begin
        regfile_29 <= io_data;
      end
    end
    if (reset) begin
      regfile_30 <= 32'h0;
    end else if (_T_4) begin
      if (5'h1e == io_addr) begin
        regfile_30 <= io_data;
      end
    end
    if (reset) begin
      regfile_31 <= 32'h0;
    end else if (_T_4) begin
      if (5'h1f == io_addr) begin
        regfile_31 <= io_data;
      end
    end
  end
endmodule
module resolver(
  input         io_id_read1_en,
  input  [4:0]  io_id_read1_addr,
  output [31:0] io_id_read1_data,
  input         io_id_read2_en,
  input  [4:0]  io_id_read2_addr,
  output [31:0] io_id_read2_data,
  output [31:0] io_csrRead_csr_rdata,
  input  [31:0] io_csrRead_csr_raddr,
  input  [2:0]  io_csrRead_csr_op,
  output        io_csrRead_csr_valid,
  output        io_rs1_en,
  output [4:0]  io_rs1_addr,
  input  [31:0] io_rs1_data,
  output        io_rs2_en,
  output [4:0]  io_rs2_addr,
  input  [31:0] io_rs2_data,
  input  [31:0] io_csr_csr_rdata,
  output [31:0] io_csr_csr_raddr,
  output [2:0]  io_csr_csr_op,
  input         io_csr_csr_valid,
  input         io_load,
  input         io_ex_reg_en,
  input  [4:0]  io_ex_reg_addr,
  input  [31:0] io_ex_reg_data,
  input  [2:0]  io_ex_csr_op,
  input  [11:0] io_ex_csr_addr,
  input         io_mem_reg_en,
  input  [4:0]  io_mem_reg_addr,
  input  [31:0] io_mem_reg_data,
  input  [2:0]  io_mem_csr_op,
  input  [11:0] io_mem_csr_addr,
  input         io_wb_reg_en,
  input  [4:0]  io_wb_reg_addr,
  input  [31:0] io_wb_reg_data,
  input  [2:0]  io_wb_csr_op,
  input  [11:0] io_wb_csr_addr,
  output        io_loadflag,
  output        io_csrflag
);
  wire  _T = io_id_read1_addr != 5'h0; // @[resolver.scala 31:38]
  wire  _T_1 = io_id_read1_en & _T; // @[resolver.scala 31:22]
  wire  _T_2 = io_id_read1_addr == io_ex_reg_addr; // @[resolver.scala 32:42]
  wire  _T_3 = io_ex_reg_en & _T_2; // @[resolver.scala 32:26]
  wire  _T_4 = io_id_read1_addr == io_mem_reg_addr; // @[resolver.scala 34:50]
  wire  _T_5 = io_mem_reg_en & _T_4; // @[resolver.scala 34:34]
  wire  _T_6 = io_id_read1_addr == io_wb_reg_addr; // @[resolver.scala 36:49]
  wire  _T_7 = io_wb_reg_en & _T_6; // @[resolver.scala 36:33]
  wire [31:0] _GEN_0 = _T_7 ? io_wb_reg_data : io_rs1_data; // @[resolver.scala 36:69]
  wire [31:0] _GEN_1 = _T_5 ? io_mem_reg_data : _GEN_0; // @[resolver.scala 34:71]
  wire [31:0] _GEN_2 = _T_3 ? io_ex_reg_data : _GEN_1; // @[resolver.scala 32:62]
  wire  _T_8 = io_id_read2_addr != 5'h0; // @[resolver.scala 31:38]
  wire  _T_9 = io_id_read2_en & _T_8; // @[resolver.scala 31:22]
  wire  _T_10 = io_id_read2_addr == io_ex_reg_addr; // @[resolver.scala 32:42]
  wire  _T_11 = io_ex_reg_en & _T_10; // @[resolver.scala 32:26]
  wire  _T_12 = io_id_read2_addr == io_mem_reg_addr; // @[resolver.scala 34:50]
  wire  _T_13 = io_mem_reg_en & _T_12; // @[resolver.scala 34:34]
  wire  _T_14 = io_id_read2_addr == io_wb_reg_addr; // @[resolver.scala 36:49]
  wire  _T_15 = io_wb_reg_en & _T_14; // @[resolver.scala 36:33]
  wire [31:0] _GEN_4 = _T_15 ? io_wb_reg_data : io_rs2_data; // @[resolver.scala 36:69]
  wire [31:0] _GEN_5 = _T_13 ? io_mem_reg_data : _GEN_4; // @[resolver.scala 34:71]
  wire [31:0] _GEN_6 = _T_11 ? io_ex_reg_data : _GEN_5; // @[resolver.scala 32:62]
  wire  _T_17 = io_load & _T_2; // @[resolver.scala 47:27]
  wire  load1 = io_id_read1_en & _T_17; // @[resolver.scala 48:16]
  wire  _T_19 = io_load & _T_10; // @[resolver.scala 47:27]
  wire  load2 = io_id_read2_en & _T_19; // @[resolver.scala 48:16]
  wire  _T_20 = io_csrRead_csr_op != 3'h0; // @[resolver.scala 53:33]
  wire  _T_21 = io_csrRead_csr_op != 3'h2; // @[resolver.scala 53:63]
  wire  _T_22 = _T_20 & _T_21; // @[resolver.scala 53:45]
  wire  _T_23 = io_ex_csr_op != 3'h0; // @[resolver.scala 54:31]
  wire  _T_24 = io_ex_csr_op != 3'h1; // @[resolver.scala 54:59]
  wire  _T_25 = _T_23 & _T_24; // @[resolver.scala 54:43]
  wire [31:0] _GEN_8 = {{20'd0}, io_ex_csr_addr}; // @[resolver.scala 55:24]
  wire  _T_26 = io_csrRead_csr_raddr == _GEN_8; // @[resolver.scala 55:24]
  wire  _T_27 = _T_25 & _T_26; // @[resolver.scala 54:69]
  wire  _T_28 = io_mem_csr_op != 3'h0; // @[resolver.scala 56:33]
  wire  _T_29 = io_mem_csr_op != 3'h1; // @[resolver.scala 56:62]
  wire  _T_30 = _T_28 & _T_29; // @[resolver.scala 56:45]
  wire [31:0] _GEN_9 = {{20'd0}, io_mem_csr_addr}; // @[resolver.scala 57:25]
  wire  _T_31 = io_csrRead_csr_raddr == _GEN_9; // @[resolver.scala 57:25]
  wire  _T_32 = _T_30 & _T_31; // @[resolver.scala 56:72]
  wire  _T_33 = io_wb_csr_op != 3'h0; // @[resolver.scala 58:32]
  wire  _T_34 = io_wb_csr_op != 3'h1; // @[resolver.scala 58:60]
  wire  _T_35 = _T_33 & _T_34; // @[resolver.scala 58:44]
  wire [31:0] _GEN_10 = {{20'd0}, io_wb_csr_addr}; // @[resolver.scala 59:25]
  wire  _T_36 = io_csrRead_csr_raddr == _GEN_10; // @[resolver.scala 59:25]
  wire  _T_37 = _T_35 & _T_36; // @[resolver.scala 58:70]
  wire  _T_38 = _T_32 | _T_37; // @[resolver.scala 60:23]
  wire  _T_39 = _T_38 | _T_27; // @[resolver.scala 60:32]
  assign io_id_read1_data = _T_1 ? _GEN_2 : 32'h0; // @[resolver.scala 33:22 resolver.scala 35:22 resolver.scala 37:22 resolver.scala 39:22 resolver.scala 42:20]
  assign io_id_read2_data = _T_9 ? _GEN_6 : 32'h0; // @[resolver.scala 33:22 resolver.scala 35:22 resolver.scala 37:22 resolver.scala 39:22 resolver.scala 42:20]
  assign io_csrRead_csr_rdata = io_csr_csr_rdata; // @[resolver.scala 74:10]
  assign io_csrRead_csr_valid = io_csr_csr_valid; // @[resolver.scala 74:10]
  assign io_rs1_en = io_id_read1_en; // @[resolver.scala 65:15]
  assign io_rs1_addr = io_id_read1_addr; // @[resolver.scala 66:15]
  assign io_rs2_en = io_id_read2_en; // @[resolver.scala 67:15]
  assign io_rs2_addr = io_id_read2_addr; // @[resolver.scala 68:15]
  assign io_csr_csr_raddr = io_csrRead_csr_raddr; // @[resolver.scala 74:10]
  assign io_csr_csr_op = io_csrRead_csr_op; // @[resolver.scala 74:10]
  assign io_loadflag = load1 | load2; // @[resolver.scala 72:14]
  assign io_csrflag = _T_22 & _T_39; // @[resolver.scala 73:15]
endmodule
module crtl(
  input         io_id_flush,
  input  [31:0] io_id_flushpc,
  input         io_ex_stall,
  input         io_mem_stall,
  input         io_loadflag,
  input         io_csrflag,
  input         io_except_hasTrap,
  input  [31:0] io_csrTvec,
  output        io_stallIf,
  output        io_stallId,
  output        io_stallEx,
  output        io_stallMm,
  output        io_stallWb,
  output        io_flush,
  output        io_flushIf,
  output [31:0] io_flushPc
);
  wire  _T = io_csrflag | io_ex_stall; // @[crtl.scala 30:29]
  wire [4:0] _T_2 = io_loadflag ? 5'h18 : 5'h0; // @[crtl.scala 31:18]
  wire [4:0] _T_3 = _T ? 5'h1c : _T_2; // @[crtl.scala 30:18]
  wire [4:0] stall = io_mem_stall ? 5'h1e : _T_3; // @[crtl.scala 29:18]
  assign io_stallIf = stall[4]; // @[crtl.scala 38:15]
  assign io_stallId = stall[3]; // @[crtl.scala 39:15]
  assign io_stallEx = stall[2]; // @[crtl.scala 40:15]
  assign io_stallMm = stall[1]; // @[crtl.scala 41:15]
  assign io_stallWb = stall[0]; // @[crtl.scala 42:15]
  assign io_flush = io_except_hasTrap; // @[crtl.scala 44:15]
  assign io_flushIf = io_except_hasTrap | io_id_flush; // @[crtl.scala 45:15]
  assign io_flushPc = io_except_hasTrap ? io_csrTvec : io_id_flushpc; // @[crtl.scala 46:15]
endmodule
module csr(
  input         clock,
  input         reset,
  output [31:0] io_read_csr_rdata,
  input  [31:0] io_read_csr_raddr,
  input  [2:0]  io_read_csr_op,
  output        io_read_csr_valid,
  input  [2:0]  io_write_op,
  input  [11:0] io_write_addr,
  input  [31:0] io_write_data,
  input         io_write_retired,
  input         io_except_hasTrap,
  input  [30:0] io_except_excCause,
  input  [31:0] io_except_excPc,
  input  [31:0] io_except_excValue,
  input         io_timer,
  input         io_soft,
  input         io_extern,
  output        io_hasInt,
  output        io_busy,
  output [31:0] io_trapVec
);
  reg [1:0] mode; // @[csr.scala 31:26]
  reg [31:0] _RAND_0;
  reg  mstatus_sum; // @[csr.scala 34:26]
  reg [31:0] _RAND_1;
  reg [1:0] mstatus_mpp; // @[csr.scala 34:26]
  reg [31:0] _RAND_2;
  reg  mstatus_spp; // @[csr.scala 34:26]
  reg [31:0] _RAND_3;
  reg  mstatus_mpie; // @[csr.scala 34:26]
  reg [31:0] _RAND_4;
  reg  mstatus_spie; // @[csr.scala 34:26]
  reg [31:0] _RAND_5;
  reg  mstatus_mie; // @[csr.scala 34:26]
  reg [31:0] _RAND_6;
  reg  mstatus_sie; // @[csr.scala 34:26]
  reg [31:0] _RAND_7;
  reg [31:0] medeleg_data; // @[csr.scala 36:26]
  reg [31:0] _RAND_8;
  reg [31:0] mideleg_data; // @[csr.scala 37:26]
  reg [31:0] _RAND_9;
  reg  mie_meie; // @[csr.scala 38:26]
  reg [31:0] _RAND_10;
  reg  mie_seie; // @[csr.scala 38:26]
  reg [31:0] _RAND_11;
  reg  mie_mtie; // @[csr.scala 38:26]
  reg [31:0] _RAND_12;
  reg  mie_stie; // @[csr.scala 38:26]
  reg [31:0] _RAND_13;
  reg  mie_msie; // @[csr.scala 38:26]
  reg [31:0] _RAND_14;
  reg  mie_ssie; // @[csr.scala 38:26]
  reg [31:0] _RAND_15;
  reg [29:0] mtvec_base; // @[csr.scala 39:26]
  reg [31:0] _RAND_16;
  reg [1:0] mtvec_mode; // @[csr.scala 39:26]
  reg [31:0] _RAND_17;
  reg [31:0] mscratch_data; // @[csr.scala 40:26]
  reg [31:0] _RAND_18;
  reg [31:0] mepc_data; // @[csr.scala 41:26]
  reg [31:0] _RAND_19;
  reg  mcause_int; // @[csr.scala 42:26]
  reg [31:0] _RAND_20;
  reg [30:0] mcause_code; // @[csr.scala 42:26]
  reg [31:0] _RAND_21;
  reg [31:0] mtval_data; // @[csr.scala 43:26]
  reg [31:0] _RAND_22;
  reg  mipReal_seip; // @[csr.scala 44:26]
  reg [31:0] _RAND_23;
  reg  mipReal_stip; // @[csr.scala 44:26]
  reg [31:0] _RAND_24;
  reg  mipReal_ssip; // @[csr.scala 44:26]
  reg [31:0] _RAND_25;
  reg [63:0] mcycle_data; // @[csr.scala 46:26]
  reg [63:0] _RAND_26;
  reg [63:0] minstret_data; // @[csr.scala 47:26]
  reg [63:0] _RAND_27;
  wire [10:0] _T_20 = {2'h0,mstatus_spp,mstatus_mpie,1'h0,mstatus_spie,1'h0,mstatus_mie,1'h0,mstatus_sie,1'h0}; // @[csrfile.scala 28:18]
  wire [31:0] _T_31 = {13'h0,mstatus_sum,1'h0,2'h0,2'h0,mstatus_mpp,_T_20}; // @[csrfile.scala 28:18]
  wire  sstatus_sum = _T_31[18]; // @[csrfile.scala 53:18]
  wire  sstatus_spp = _T_31[8]; // @[csrfile.scala 54:18]
  wire  sstatus_spie = _T_31[5]; // @[csrfile.scala 55:18]
  wire  sstatus_sie = _T_31[1]; // @[csrfile.scala 56:18]
  wire [5:0] _T_40 = {mie_stie,1'h0,mie_msie,1'h0,mie_ssie,1'h0}; // @[csrfile.scala 28:18]
  wire [31:0] _T_47 = {20'h0,mie_meie,1'h0,mie_seie,1'h0,mie_mtie,1'h0,_T_40}; // @[csrfile.scala 28:18]
  wire  sie_seie = _T_47[9]; // @[csrfile.scala 78:18]
  wire  sie_stie = _T_47[5]; // @[csrfile.scala 79:18]
  wire  sie_ssie = _T_47[1]; // @[csrfile.scala 80:18]
  reg [29:0] stvec_base; // @[csr.scala 51:26]
  reg [31:0] _RAND_28;
  reg [1:0] stvec_mode; // @[csr.scala 51:26]
  reg [31:0] _RAND_29;
  reg [31:0] sscratch_data; // @[csr.scala 52:26]
  reg [31:0] _RAND_30;
  reg [31:0] sepc_data; // @[csr.scala 53:26]
  reg [31:0] _RAND_31;
  reg  scause_int; // @[csr.scala 54:26]
  reg [31:0] _RAND_32;
  reg [30:0] scause_code; // @[csr.scala 54:26]
  reg [31:0] _RAND_33;
  reg [31:0] stval_data; // @[csr.scala 55:26]
  reg [31:0] _RAND_34;
  reg  satp_mode; // @[csr.scala 56:26]
  reg [31:0] _RAND_35;
  reg [21:0] satp_ppn; // @[csr.scala 56:26]
  reg [31:0] _RAND_36;
  wire [8:0] _T_66 = {sstatus_spp,2'h0,sstatus_spie,1'h0,2'h0,sstatus_sie,1'h0}; // @[csr.scala 71:48]
  wire [31:0] _T_74 = {12'h0,1'h0,sstatus_sum,9'h0,_T_66}; // @[csr.scala 71:48]
  wire [31:0] _T_82 = {22'h0,sie_seie,1'h0,2'h0,sie_stie,3'h0,sie_ssie,1'h0}; // @[csr.scala 72:44]
  wire [31:0] _T_83 = {stvec_base,stvec_mode}; // @[csr.scala 73:46]
  wire [31:0] _T_84 = {scause_int,scause_code}; // @[csr.scala 77:47]
  wire  mip_ssip = mipReal_ssip | io_soft; // @[csr.scala 162:28]
  wire  mip_stip = mipReal_stip | io_timer; // @[csr.scala 160:28]
  wire  mip_seip = mipReal_seip | io_extern; // @[csr.scala 158:28]
  wire [31:0] _T_92 = {22'h0,mip_seip,1'h0,2'h0,mip_stip,3'h0,mip_ssip,1'h0}; // @[csr.scala 79:44]
  wire [31:0] _T_94 = {satp_mode,9'h0,satp_ppn}; // @[csr.scala 80:45]
  wire [31:0] _T_129 = {mtvec_base,mtvec_mode}; // @[csr.scala 90:46]
  wire [31:0] _T_130 = {mcause_int,mcause_code}; // @[csr.scala 94:47]
  wire [5:0] _T_135 = {mip_stip,1'h0,io_soft,1'h0,mip_ssip,1'h0}; // @[csr.scala 96:44]
  wire [31:0] _T_142 = {20'h0,io_extern,1'h0,mip_seip,1'h0,io_timer,1'h0,_T_135}; // @[csr.scala 96:44]
  wire [31:0] _T_147 = io_read_csr_raddr & 32'hfff; // @[Lookup.scala 31:38]
  wire  _T_148 = 32'hc00 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_150 = 32'hc02 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_152 = 32'hc80 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_154 = 32'hc82 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_156 = 32'h100 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_158 = 32'h104 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_160 = 32'h105 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_162 = 32'h106 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_164 = 32'h140 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_166 = 32'h141 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_168 = 32'h142 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_170 = 32'h143 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_172 = 32'h144 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_174 = 32'h180 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_176 = 32'hf11 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_178 = 32'hf12 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_180 = 32'hf13 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_182 = 32'hf14 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_184 = 32'h300 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_186 = 32'h301 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_188 = 32'h302 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_190 = 32'h303 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_192 = 32'h304 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_194 = 32'h305 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_196 = 32'h306 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_198 = 32'h340 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_200 = 32'h341 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_202 = 32'h342 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_204 = 32'h343 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_206 = 32'h344 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_208 = 32'hb00 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_210 = 32'hb02 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_212 = 32'hb80 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_214 = 32'hb82 == _T_147; // @[Lookup.scala 31:38]
  wire  _T_216 = 32'h320 == _T_147; // @[Lookup.scala 31:38]
  wire [31:0] _T_218 = _T_214 ? minstret_data[63:32] : 32'h0; // @[Lookup.scala 33:37]
  wire [31:0] _T_219 = _T_212 ? mcycle_data[63:32] : _T_218; // @[Lookup.scala 33:37]
  wire [31:0] _T_220 = _T_210 ? minstret_data[31:0] : _T_219; // @[Lookup.scala 33:37]
  wire [31:0] _T_221 = _T_208 ? mcycle_data[31:0] : _T_220; // @[Lookup.scala 33:37]
  wire [31:0] _T_222 = _T_206 ? _T_142 : _T_221; // @[Lookup.scala 33:37]
  wire [31:0] _T_223 = _T_204 ? mtval_data : _T_222; // @[Lookup.scala 33:37]
  wire [31:0] _T_224 = _T_202 ? _T_130 : _T_223; // @[Lookup.scala 33:37]
  wire [31:0] _T_225 = _T_200 ? mepc_data : _T_224; // @[Lookup.scala 33:37]
  wire [31:0] _T_226 = _T_198 ? mscratch_data : _T_225; // @[Lookup.scala 33:37]
  wire [31:0] _T_227 = _T_196 ? 32'h0 : _T_226; // @[Lookup.scala 33:37]
  wire [31:0] _T_228 = _T_194 ? _T_129 : _T_227; // @[Lookup.scala 33:37]
  wire [31:0] _T_229 = _T_192 ? _T_47 : _T_228; // @[Lookup.scala 33:37]
  wire [31:0] _T_230 = _T_190 ? mideleg_data : _T_229; // @[Lookup.scala 33:37]
  wire [31:0] _T_231 = _T_188 ? medeleg_data : _T_230; // @[Lookup.scala 33:37]
  wire [31:0] _T_232 = _T_186 ? 32'h40141101 : _T_231; // @[Lookup.scala 33:37]
  wire [31:0] _T_233 = _T_184 ? _T_31 : _T_232; // @[Lookup.scala 33:37]
  wire [31:0] _T_234 = _T_182 ? 32'h0 : _T_233; // @[Lookup.scala 33:37]
  wire [31:0] _T_235 = _T_180 ? 32'h0 : _T_234; // @[Lookup.scala 33:37]
  wire [31:0] _T_236 = _T_178 ? 32'h0 : _T_235; // @[Lookup.scala 33:37]
  wire [31:0] _T_237 = _T_176 ? 32'h0 : _T_236; // @[Lookup.scala 33:37]
  wire [31:0] _T_238 = _T_174 ? _T_94 : _T_237; // @[Lookup.scala 33:37]
  wire [31:0] _T_239 = _T_172 ? _T_92 : _T_238; // @[Lookup.scala 33:37]
  wire [31:0] _T_240 = _T_170 ? stval_data : _T_239; // @[Lookup.scala 33:37]
  wire [31:0] _T_241 = _T_168 ? _T_84 : _T_240; // @[Lookup.scala 33:37]
  wire [31:0] _T_242 = _T_166 ? sepc_data : _T_241; // @[Lookup.scala 33:37]
  wire [31:0] _T_243 = _T_164 ? sscratch_data : _T_242; // @[Lookup.scala 33:37]
  wire [31:0] _T_244 = _T_162 ? 32'h0 : _T_243; // @[Lookup.scala 33:37]
  wire [31:0] _T_245 = _T_160 ? _T_83 : _T_244; // @[Lookup.scala 33:37]
  wire [31:0] _T_246 = _T_158 ? _T_82 : _T_245; // @[Lookup.scala 33:37]
  wire [31:0] _T_247 = _T_156 ? _T_74 : _T_246; // @[Lookup.scala 33:37]
  wire [31:0] _T_248 = _T_154 ? minstret_data[63:32] : _T_247; // @[Lookup.scala 33:37]
  wire [31:0] _T_249 = _T_152 ? mcycle_data[63:32] : _T_248; // @[Lookup.scala 33:37]
  wire [31:0] _T_250 = _T_150 ? minstret_data[31:0] : _T_249; // @[Lookup.scala 33:37]
  wire  _T_252 = _T_214 | _T_216; // @[Lookup.scala 33:37]
  wire  _T_253 = _T_212 | _T_252; // @[Lookup.scala 33:37]
  wire  _T_254 = _T_210 | _T_253; // @[Lookup.scala 33:37]
  wire  _T_255 = _T_208 | _T_254; // @[Lookup.scala 33:37]
  wire  _T_256 = _T_206 | _T_255; // @[Lookup.scala 33:37]
  wire  _T_257 = _T_204 | _T_256; // @[Lookup.scala 33:37]
  wire  _T_258 = _T_202 | _T_257; // @[Lookup.scala 33:37]
  wire  _T_259 = _T_200 | _T_258; // @[Lookup.scala 33:37]
  wire  _T_260 = _T_198 | _T_259; // @[Lookup.scala 33:37]
  wire  _T_261 = _T_196 | _T_260; // @[Lookup.scala 33:37]
  wire  _T_262 = _T_194 | _T_261; // @[Lookup.scala 33:37]
  wire  _T_263 = _T_192 | _T_262; // @[Lookup.scala 33:37]
  wire  _T_264 = _T_190 | _T_263; // @[Lookup.scala 33:37]
  wire  _T_265 = _T_188 | _T_264; // @[Lookup.scala 33:37]
  wire  _T_266 = _T_186 | _T_265; // @[Lookup.scala 33:37]
  wire  _T_267 = _T_184 | _T_266; // @[Lookup.scala 33:37]
  wire  _T_268 = _T_182 | _T_267; // @[Lookup.scala 33:37]
  wire  _T_269 = _T_180 | _T_268; // @[Lookup.scala 33:37]
  wire  _T_270 = _T_178 | _T_269; // @[Lookup.scala 33:37]
  wire  _T_271 = _T_176 | _T_270; // @[Lookup.scala 33:37]
  wire  _T_272 = _T_174 | _T_271; // @[Lookup.scala 33:37]
  wire  _T_273 = _T_172 | _T_272; // @[Lookup.scala 33:37]
  wire  _T_274 = _T_170 | _T_273; // @[Lookup.scala 33:37]
  wire  _T_275 = _T_168 | _T_274; // @[Lookup.scala 33:37]
  wire  _T_276 = _T_166 | _T_275; // @[Lookup.scala 33:37]
  wire  _T_277 = _T_164 | _T_276; // @[Lookup.scala 33:37]
  wire  _T_278 = _T_162 | _T_277; // @[Lookup.scala 33:37]
  wire  _T_279 = _T_160 | _T_278; // @[Lookup.scala 33:37]
  wire  _T_280 = _T_158 | _T_279; // @[Lookup.scala 33:37]
  wire  _T_281 = _T_156 | _T_280; // @[Lookup.scala 33:37]
  wire  _T_282 = _T_154 | _T_281; // @[Lookup.scala 33:37]
  wire  _T_283 = _T_152 | _T_282; // @[Lookup.scala 33:37]
  wire  _T_284 = _T_150 | _T_283; // @[Lookup.scala 33:37]
  wire  readable = _T_148 | _T_284; // @[Lookup.scala 33:37]
  wire  _T_302 = _T_182 ? 1'h0 : _T_267; // @[Lookup.scala 33:37]
  wire  _T_303 = _T_180 ? 1'h0 : _T_302; // @[Lookup.scala 33:37]
  wire  _T_304 = _T_178 ? 1'h0 : _T_303; // @[Lookup.scala 33:37]
  wire  _T_305 = _T_176 ? 1'h0 : _T_304; // @[Lookup.scala 33:37]
  wire  _T_306 = _T_174 | _T_305; // @[Lookup.scala 33:37]
  wire  _T_307 = _T_172 | _T_306; // @[Lookup.scala 33:37]
  wire  _T_308 = _T_170 | _T_307; // @[Lookup.scala 33:37]
  wire  _T_309 = _T_168 | _T_308; // @[Lookup.scala 33:37]
  wire  _T_310 = _T_166 | _T_309; // @[Lookup.scala 33:37]
  wire  _T_311 = _T_164 | _T_310; // @[Lookup.scala 33:37]
  wire  _T_312 = _T_162 | _T_311; // @[Lookup.scala 33:37]
  wire  _T_313 = _T_160 | _T_312; // @[Lookup.scala 33:37]
  wire  _T_314 = _T_158 | _T_313; // @[Lookup.scala 33:37]
  wire  _T_315 = _T_156 | _T_314; // @[Lookup.scala 33:37]
  wire  _T_316 = _T_154 ? 1'h0 : _T_315; // @[Lookup.scala 33:37]
  wire  _T_317 = _T_152 ? 1'h0 : _T_316; // @[Lookup.scala 33:37]
  wire  _T_318 = _T_150 ? 1'h0 : _T_317; // @[Lookup.scala 33:37]
  wire  writable = _T_148 ? 1'h0 : _T_318; // @[Lookup.scala 33:37]
  wire  _T_319 = readable & writable; // @[csr.scala 110:26]
  wire  _T_322 = 3'h5 == io_read_csr_op; // @[Mux.scala 68:19]
  wire  _T_323 = _T_322 & _T_319; // @[Mux.scala 68:16]
  wire  _T_324 = 3'h4 == io_read_csr_op; // @[Mux.scala 68:19]
  wire  _T_325 = _T_324 ? _T_319 : _T_323; // @[Mux.scala 68:16]
  wire  _T_326 = 3'h3 == io_read_csr_op; // @[Mux.scala 68:19]
  wire  _T_327 = _T_326 ? _T_319 : _T_325; // @[Mux.scala 68:16]
  wire  _T_328 = 3'h2 == io_read_csr_op; // @[Mux.scala 68:19]
  wire  _T_329 = _T_328 ? writable : _T_327; // @[Mux.scala 68:16]
  wire  _T_330 = 3'h1 == io_read_csr_op; // @[Mux.scala 68:19]
  wire  readValid = _T_330 ? readable : _T_329; // @[Mux.scala 68:16]
  wire  _T_332 = io_read_csr_raddr[9:8] <= mode; // @[csr.scala 114:44]
  wire  _T_333 = io_read_csr_raddr < 32'h1000; // @[csr.scala 114:75]
  wire  modeValid = _T_332 & _T_333; // @[csr.scala 114:53]
  wire  _T_335 = 12'hc00 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_337 = 12'hc02 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_339 = 12'hc80 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_341 = 12'hc82 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_343 = 12'h100 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_345 = 12'h104 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_347 = 12'h105 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_349 = 12'h106 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_351 = 12'h140 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_353 = 12'h141 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_355 = 12'h142 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_357 = 12'h143 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_359 = 12'h144 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_361 = 12'h180 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_363 = 12'hf11 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_365 = 12'hf12 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_367 = 12'hf13 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_369 = 12'hf14 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_371 = 12'h300 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_373 = 12'h301 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_375 = 12'h302 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_377 = 12'h303 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_379 = 12'h304 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_381 = 12'h305 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_383 = 12'h306 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_385 = 12'h340 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_387 = 12'h341 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_389 = 12'h342 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_391 = 12'h343 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_393 = 12'h344 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_395 = 12'hb00 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_397 = 12'hb02 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_399 = 12'hb80 == io_write_addr; // @[Lookup.scala 31:38]
  wire  _T_401 = 12'hb82 == io_write_addr; // @[Lookup.scala 31:38]
  wire [31:0] _T_405 = _T_401 ? minstret_data[63:32] : 32'h0; // @[Lookup.scala 33:37]
  wire [31:0] _T_406 = _T_399 ? mcycle_data[63:32] : _T_405; // @[Lookup.scala 33:37]
  wire [31:0] _T_407 = _T_397 ? minstret_data[31:0] : _T_406; // @[Lookup.scala 33:37]
  wire [31:0] _T_408 = _T_395 ? mcycle_data[31:0] : _T_407; // @[Lookup.scala 33:37]
  wire [31:0] _T_409 = _T_393 ? _T_142 : _T_408; // @[Lookup.scala 33:37]
  wire [31:0] _T_410 = _T_391 ? mtval_data : _T_409; // @[Lookup.scala 33:37]
  wire [31:0] _T_411 = _T_389 ? _T_130 : _T_410; // @[Lookup.scala 33:37]
  wire [31:0] _T_412 = _T_387 ? mepc_data : _T_411; // @[Lookup.scala 33:37]
  wire [31:0] _T_413 = _T_385 ? mscratch_data : _T_412; // @[Lookup.scala 33:37]
  wire [31:0] _T_414 = _T_383 ? 32'h0 : _T_413; // @[Lookup.scala 33:37]
  wire [31:0] _T_415 = _T_381 ? _T_129 : _T_414; // @[Lookup.scala 33:37]
  wire [31:0] _T_416 = _T_379 ? _T_47 : _T_415; // @[Lookup.scala 33:37]
  wire [31:0] _T_417 = _T_377 ? mideleg_data : _T_416; // @[Lookup.scala 33:37]
  wire [31:0] _T_418 = _T_375 ? medeleg_data : _T_417; // @[Lookup.scala 33:37]
  wire [31:0] _T_419 = _T_373 ? 32'h40141101 : _T_418; // @[Lookup.scala 33:37]
  wire [31:0] _T_420 = _T_371 ? _T_31 : _T_419; // @[Lookup.scala 33:37]
  wire [31:0] _T_421 = _T_369 ? 32'h0 : _T_420; // @[Lookup.scala 33:37]
  wire [31:0] _T_422 = _T_367 ? 32'h0 : _T_421; // @[Lookup.scala 33:37]
  wire [31:0] _T_423 = _T_365 ? 32'h0 : _T_422; // @[Lookup.scala 33:37]
  wire [31:0] _T_424 = _T_363 ? 32'h0 : _T_423; // @[Lookup.scala 33:37]
  wire [31:0] _T_425 = _T_361 ? _T_94 : _T_424; // @[Lookup.scala 33:37]
  wire [31:0] _T_426 = _T_359 ? _T_92 : _T_425; // @[Lookup.scala 33:37]
  wire [31:0] _T_427 = _T_357 ? stval_data : _T_426; // @[Lookup.scala 33:37]
  wire [31:0] _T_428 = _T_355 ? _T_84 : _T_427; // @[Lookup.scala 33:37]
  wire [31:0] _T_429 = _T_353 ? sepc_data : _T_428; // @[Lookup.scala 33:37]
  wire [31:0] _T_430 = _T_351 ? sscratch_data : _T_429; // @[Lookup.scala 33:37]
  wire [31:0] _T_431 = _T_349 ? 32'h0 : _T_430; // @[Lookup.scala 33:37]
  wire [31:0] _T_432 = _T_347 ? _T_83 : _T_431; // @[Lookup.scala 33:37]
  wire [31:0] _T_433 = _T_345 ? _T_82 : _T_432; // @[Lookup.scala 33:37]
  wire [31:0] _T_434 = _T_343 ? _T_74 : _T_433; // @[Lookup.scala 33:37]
  wire [31:0] _T_435 = _T_341 ? minstret_data[63:32] : _T_434; // @[Lookup.scala 33:37]
  wire [31:0] _T_436 = _T_339 ? mcycle_data[63:32] : _T_435; // @[Lookup.scala 33:37]
  wire [31:0] _T_437 = _T_337 ? minstret_data[31:0] : _T_436; // @[Lookup.scala 33:37]
  wire [31:0] csrData = _T_335 ? mcycle_data[31:0] : _T_437; // @[Lookup.scala 33:37]
  wire  _T_508 = io_write_op != 3'h0; // @[csr.scala 120:31]
  wire  _T_509 = io_write_op != 3'h1; // @[csr.scala 120:58]
  wire  writeEn = _T_508 & _T_509; // @[csr.scala 120:43]
  wire [31:0] _T_510 = csrData | io_write_data; // @[csr.scala 124:25]
  wire [31:0] _T_511 = ~io_write_data; // @[csr.scala 125:28]
  wire [31:0] _T_512 = csrData & _T_511; // @[csr.scala 125:25]
  wire  _T_513 = 3'h5 == io_write_op; // @[Mux.scala 68:19]
  wire [31:0] _T_514 = _T_513 ? _T_512 : 32'h0; // @[Mux.scala 68:16]
  wire  _T_515 = 3'h4 == io_write_op; // @[Mux.scala 68:19]
  wire [31:0] _T_516 = _T_515 ? _T_510 : _T_514; // @[Mux.scala 68:16]
  wire  _T_517 = 3'h3 == io_write_op; // @[Mux.scala 68:19]
  wire [31:0] _T_518 = _T_517 ? io_write_data : _T_516; // @[Mux.scala 68:16]
  wire  _T_519 = 3'h2 == io_write_op; // @[Mux.scala 68:19]
  wire [31:0] writeData = _T_519 ? io_write_data : _T_518; // @[Mux.scala 68:16]
  wire [31:0] flagIntS = _T_92 & _T_82; // @[csr.scala 129:30]
  wire [31:0] flagIntM = _T_142 & _T_47; // @[csr.scala 130:30]
  wire  _T_560 = mode < 2'h1; // @[csr.scala 131:28]
  wire  _T_561 = mode == 2'h1; // @[csr.scala 132:11]
  wire  _T_562 = _T_561 & mstatus_sie; // @[csr.scala 132:26]
  wire  _T_563 = _T_560 | _T_562; // @[csr.scala 131:41]
  wire [31:0] _T_564 = flagIntS & mideleg_data; // @[csr.scala 133:15]
  wire  _T_565 = _T_564 != 32'h0; // @[csr.scala 133:33]
  wire  hasIntS = _T_563 & _T_565; // @[csr.scala 131:22]
  wire  _T_566 = mode <= 2'h1; // @[csr.scala 134:28]
  wire  _T_567 = _T_566 | mstatus_mie; // @[csr.scala 134:42]
  wire [31:0] _T_568 = ~mideleg_data; // @[csr.scala 135:18]
  wire [31:0] _T_569 = flagIntM & _T_568; // @[csr.scala 135:15]
  wire  _T_570 = _T_569 != 32'h0; // @[csr.scala 135:36]
  wire  hasIntM = _T_567 & _T_570; // @[csr.scala 134:22]
  wire  hasInt = hasIntM | hasIntS; // @[csr.scala 137:27]
  wire  _T_571 = ~hasIntM; // @[csr.scala 138:29]
  wire  handIntS = hasInt & _T_571; // @[csr.scala 138:26]
  wire  _T_572 = ~hasInt; // @[csr.scala 139:40]
  wire  hasExc = io_except_hasTrap & _T_572; // @[csr.scala 139:37]
  wire [31:0] _T_574 = medeleg_data >> io_except_excCause[4:0]; // @[csr.scala 140:45]
  wire  hasExcS = hasExc & _T_574[0]; // @[csr.scala 140:26]
  wire  _T_577 = ~mode[1]; // @[csr.scala 141:19]
  wire  handExcS = _T_577 & hasExcS; // @[csr.scala 141:28]
  wire [31:0] _T_578 = {{9'd0}, flagIntS[31:9]}; // @[csr.scala 142:31]
  wire [31:0] _T_580 = {{1'd0}, flagIntS[31:1]}; // @[csr.scala 143:31]
  wire [30:0] _T_582 = _T_580[0] ? 31'h1 : 31'h5; // @[csr.scala 143:22]
  wire [30:0] intCauseS = _T_578[0] ? 31'h9 : _T_582; // @[csr.scala 142:22]
  wire [31:0] _T_583 = {{11'd0}, flagIntM[31:11]}; // @[csr.scala 145:31]
  wire [31:0] _T_585 = {{3'd0}, flagIntM[31:3]}; // @[csr.scala 146:17]
  wire [31:0] _T_587 = {{7'd0}, flagIntM[31:7]}; // @[csr.scala 147:19]
  wire [30:0] _T_589 = _T_587[0] ? 31'h7 : intCauseS; // @[csr.scala 147:10]
  wire [30:0] _T_590 = _T_585[0] ? 31'h3 : _T_589; // @[csr.scala 146:8]
  wire [30:0] intCauseM = _T_583[0] ? 31'hb : _T_590; // @[csr.scala 145:22]
  wire [30:0] intCause = handIntS ? intCauseS : intCauseM; // @[csr.scala 149:22]
  wire [31:0] _T_591 = {1'h1,intCause}; // @[Cat.scala 30:58]
  wire [31:0] _T_592 = {1'h0,io_except_excCause}; // @[Cat.scala 30:58]
  wire [31:0] cause = hasInt ? _T_591 : _T_592; // @[csr.scala 150:22]
  wire  _T_594 = stvec_mode[0] & hasInt; // @[csr.scala 152:51]
  wire [29:0] _T_596 = _T_594 ? cause[29:0] : 30'h0; // @[csr.scala 152:36]
  wire [29:0] _T_598 = stvec_base + _T_596; // @[csr.scala 152:31]
  wire [31:0] trapVecS = {_T_598, 2'h0}; // @[csr.scala 152:82]
  wire  _T_600 = mtvec_mode[0] & hasInt; // @[csr.scala 153:51]
  wire [29:0] _T_602 = _T_600 ? cause[29:0] : 30'h0; // @[csr.scala 153:36]
  wire [29:0] _T_604 = mtvec_base + _T_602; // @[csr.scala 153:31]
  wire [31:0] trapVecM = {_T_604, 2'h0}; // @[csr.scala 153:82]
  wire  _T_605 = handIntS | handExcS; // @[csr.scala 154:32]
  wire  _T_614 = ~writeEn; // @[csr.scala 175:44]
  wire  _T_615 = io_except_hasTrap & _T_614; // @[csr.scala 175:41]
  wire [63:0] _T_617 = mcycle_data + 64'h1; // @[csr.scala 179:30]
  wire [63:0] _T_619 = minstret_data + 64'h1; // @[csr.scala 181:36]
  wire  _T_620 = io_write_addr == 12'h100; // @[csr.scala 189:25]
  wire [8:0] _T_667 = {writeData[8],_T_31[7:6],writeData[5],_T_31[4],_T_31[3:2],writeData[1],_T_31[0]}; // @[csrfile.scala 18:18]
  wire [31:0] _T_675 = {_T_31[31],_T_31[30:20],_T_31[19],writeData[18],_T_31[17],_T_31[16:15],_T_31[14:13],_T_31[12:9],_T_667}; // @[csrfile.scala 18:18]
  wire  _T_683 = io_write_addr == 12'h104; // @[csr.scala 192:25]
  wire [31:0] _T_717 = {_T_47[31:10],writeData[9],_T_47[8],_T_47[7:6],writeData[5],_T_47[4],_T_47[3:2],writeData[1],_T_47[0]}; // @[csrfile.scala 18:18]
  wire  _T_724 = io_write_addr == 12'h144; // @[csr.scala 195:25]
  wire [31:0] _T_737 = {21'h0,1'h0,mipReal_seip,3'h0,mipReal_stip,1'h0,1'h0,1'h0,mipReal_ssip,1'h0}; // @[csrfile.scala 16:24]
  wire [31:0] _T_756 = {_T_737[31:10],_T_737[9],_T_737[8],_T_737[7:6],_T_737[5],_T_737[4],_T_737[3:2],writeData[1],_T_737[0]}; // @[csrfile.scala 18:18]
  wire  _T_760 = io_write_addr == 12'hb00; // @[csr.scala 198:25]
  wire [63:0] _T_762 = {mcycle_data[63:32],writeData}; // @[Cat.scala 30:58]
  wire  _T_763 = io_write_addr == 12'hb02; // @[csr.scala 201:25]
  wire [63:0] _T_765 = {minstret_data[63:32],writeData}; // @[Cat.scala 30:58]
  wire  _T_766 = io_write_addr == 12'hb80; // @[csr.scala 204:25]
  wire [63:0] _T_768 = {writeData,mcycle_data[31:0]}; // @[Cat.scala 30:58]
  wire  _T_769 = io_write_addr == 12'hb82; // @[csr.scala 207:25]
  wire [63:0] _T_771 = {writeData,minstret_data[31:0]}; // @[Cat.scala 30:58]
  wire  _T_772 = io_write_addr == 12'h105; // @[csr.scala 210:25]
  wire  _T_775 = io_write_addr == 12'h140; // @[csr.scala 211:25]
  wire  _T_779 = io_write_addr == 12'h141; // @[csr.scala 212:25]
  wire [31:0] _T_781 = {writeData[31:2],2'h0}; // @[Cat.scala 30:58]
  wire  _T_782 = io_write_addr == 12'h142; // @[csr.scala 213:25]
  wire  _T_785 = io_write_addr == 12'h143; // @[csr.scala 214:25]
  wire  _T_789 = io_write_addr == 12'h180; // @[csr.scala 215:25]
  wire  _T_792 = io_write_addr == 12'h300; // @[csr.scala 216:25]
  wire  _T_800 = io_write_addr == 12'h302; // @[csr.scala 217:25]
  wire [6:0] _T_810 = {writeData[6],1'h0,writeData[4:2],1'h0,writeData[0]}; // @[Cat.scala 30:58]
  wire [15:0] _T_816 = {writeData[15],1'h0,writeData[13:12],2'h0,writeData[9:8],1'h0,_T_810}; // @[Cat.scala 30:58]
  wire  _T_817 = io_write_addr == 12'h303; // @[csr.scala 218:25]
  wire [11:0] _T_826 = {2'h0,writeData[9],3'h0,writeData[5],3'h0,writeData[1],1'h0}; // @[Cat.scala 30:58]
  wire  _T_827 = io_write_addr == 12'h304; // @[csr.scala 219:25]
  wire  _T_834 = io_write_addr == 12'h305; // @[csr.scala 220:25]
  wire  _T_837 = io_write_addr == 12'h340; // @[csr.scala 221:25]
  wire  _T_841 = io_write_addr == 12'h341; // @[csr.scala 222:25]
  wire  _T_844 = io_write_addr == 12'h342; // @[csr.scala 223:25]
  wire  _T_847 = io_write_addr == 12'h343; // @[csr.scala 224:25]
  wire  _T_851 = io_write_addr == 12'h344; // @[csr.scala 225:25]
  wire [31:0] _T_857 = {io_except_excPc[31:2],2'h0}; // @[Cat.scala 30:58]
  wire  _GEN_67 = _T_605 & mstatus_mie; // @[csr.scala 239:40]
  assign io_read_csr_rdata = _T_148 ? mcycle_data[31:0] : _T_250; // @[csr.scala 261:22]
  assign io_read_csr_valid = readValid & modeValid; // @[csr.scala 260:21]
  assign io_hasInt = hasIntM | hasIntS; // @[csr.scala 264:15]
  assign io_busy = _T_508 & _T_509; // @[csr.scala 265:15]
  assign io_trapVec = _T_605 ? trapVecS : trapVecM; // @[csr.scala 269:15]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  mode = _RAND_0[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  mstatus_sum = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  mstatus_mpp = _RAND_2[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  mstatus_spp = _RAND_3[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  mstatus_mpie = _RAND_4[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  mstatus_spie = _RAND_5[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  mstatus_mie = _RAND_6[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  mstatus_sie = _RAND_7[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  medeleg_data = _RAND_8[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  mideleg_data = _RAND_9[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  mie_meie = _RAND_10[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  mie_seie = _RAND_11[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  mie_mtie = _RAND_12[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  mie_stie = _RAND_13[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  mie_msie = _RAND_14[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  mie_ssie = _RAND_15[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {1{`RANDOM}};
  mtvec_base = _RAND_16[29:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_17 = {1{`RANDOM}};
  mtvec_mode = _RAND_17[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_18 = {1{`RANDOM}};
  mscratch_data = _RAND_18[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_19 = {1{`RANDOM}};
  mepc_data = _RAND_19[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_20 = {1{`RANDOM}};
  mcause_int = _RAND_20[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_21 = {1{`RANDOM}};
  mcause_code = _RAND_21[30:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_22 = {1{`RANDOM}};
  mtval_data = _RAND_22[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_23 = {1{`RANDOM}};
  mipReal_seip = _RAND_23[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_24 = {1{`RANDOM}};
  mipReal_stip = _RAND_24[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_25 = {1{`RANDOM}};
  mipReal_ssip = _RAND_25[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_26 = {2{`RANDOM}};
  mcycle_data = _RAND_26[63:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_27 = {2{`RANDOM}};
  minstret_data = _RAND_27[63:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_28 = {1{`RANDOM}};
  stvec_base = _RAND_28[29:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_29 = {1{`RANDOM}};
  stvec_mode = _RAND_29[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_30 = {1{`RANDOM}};
  sscratch_data = _RAND_30[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_31 = {1{`RANDOM}};
  sepc_data = _RAND_31[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_32 = {1{`RANDOM}};
  scause_int = _RAND_32[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_33 = {1{`RANDOM}};
  scause_code = _RAND_33[30:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_34 = {1{`RANDOM}};
  stval_data = _RAND_34[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_35 = {1{`RANDOM}};
  satp_mode = _RAND_35[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_36 = {1{`RANDOM}};
  satp_ppn = _RAND_36[21:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (reset) begin
      mode <= 2'h3;
    end else if (_T_615) begin
      if (hasInt) begin
        if (handIntS) begin
          mode <= 2'h1;
        end else begin
          mode <= 2'h3;
        end
      end else if (handExcS) begin
        mode <= 2'h1;
      end else begin
        mode <= 2'h3;
      end
    end
    if (reset) begin
      mstatus_sum <= 1'h0;
    end else if (writeEn) begin
      if (_T_792) begin
        mstatus_sum <= writeData[18];
      end else if (_T_620) begin
        mstatus_sum <= _T_675[18];
      end
    end
    if (reset) begin
      mstatus_mpp <= 2'h0;
    end else if (writeEn) begin
      if (_T_792) begin
        mstatus_mpp <= writeData[12:11];
      end else if (_T_620) begin
        mstatus_mpp <= _T_675[12:11];
      end
    end else if (io_except_hasTrap) begin
      if (!(_T_605)) begin
        mstatus_mpp <= mode;
      end
    end
    if (reset) begin
      mstatus_spp <= 1'h0;
    end else if (writeEn) begin
      if (_T_792) begin
        mstatus_spp <= writeData[8];
      end else if (_T_620) begin
        mstatus_spp <= _T_675[8];
      end
    end else if (io_except_hasTrap) begin
      if (_T_605) begin
        mstatus_spp <= mode[0];
      end
    end
    if (reset) begin
      mstatus_mpie <= 1'h0;
    end else if (writeEn) begin
      if (_T_792) begin
        mstatus_mpie <= writeData[7];
      end else if (_T_620) begin
        mstatus_mpie <= _T_675[7];
      end
    end else if (io_except_hasTrap) begin
      if (!(_T_605)) begin
        mstatus_mpie <= mstatus_mie;
      end
    end
    if (reset) begin
      mstatus_spie <= 1'h0;
    end else if (writeEn) begin
      if (_T_792) begin
        mstatus_spie <= writeData[5];
      end else if (_T_620) begin
        mstatus_spie <= _T_675[5];
      end
    end else if (io_except_hasTrap) begin
      if (_T_605) begin
        mstatus_spie <= mstatus_sie;
      end
    end
    if (reset) begin
      mstatus_mie <= 1'h0;
    end else if (writeEn) begin
      if (_T_792) begin
        mstatus_mie <= writeData[3];
      end else if (_T_620) begin
        mstatus_mie <= _T_675[3];
      end
    end else if (io_except_hasTrap) begin
      mstatus_mie <= _GEN_67;
    end
    if (reset) begin
      mstatus_sie <= 1'h0;
    end else if (writeEn) begin
      if (_T_792) begin
        mstatus_sie <= writeData[1];
      end else if (_T_620) begin
        mstatus_sie <= _T_675[1];
      end
    end else if (io_except_hasTrap) begin
      if (_T_605) begin
        mstatus_sie <= 1'h0;
      end
    end
    if (reset) begin
      medeleg_data <= 32'h0;
    end else if (writeEn) begin
      if (_T_800) begin
        medeleg_data <= {{16'd0}, _T_816};
      end
    end
    if (reset) begin
      mideleg_data <= 32'h0;
    end else if (writeEn) begin
      if (_T_817) begin
        mideleg_data <= {{20'd0}, _T_826};
      end
    end
    if (reset) begin
      mie_meie <= 1'h0;
    end else if (writeEn) begin
      if (_T_827) begin
        mie_meie <= writeData[11];
      end else if (_T_683) begin
        mie_meie <= _T_717[11];
      end
    end
    if (reset) begin
      mie_seie <= 1'h0;
    end else if (writeEn) begin
      if (_T_827) begin
        mie_seie <= writeData[9];
      end else if (_T_683) begin
        mie_seie <= _T_717[9];
      end
    end
    if (reset) begin
      mie_mtie <= 1'h0;
    end else if (writeEn) begin
      if (_T_827) begin
        mie_mtie <= writeData[7];
      end else if (_T_683) begin
        mie_mtie <= _T_717[7];
      end
    end
    if (reset) begin
      mie_stie <= 1'h0;
    end else if (writeEn) begin
      if (_T_827) begin
        mie_stie <= writeData[5];
      end else if (_T_683) begin
        mie_stie <= _T_717[5];
      end
    end
    if (reset) begin
      mie_msie <= 1'h0;
    end else if (writeEn) begin
      if (_T_827) begin
        mie_msie <= writeData[3];
      end else if (_T_683) begin
        mie_msie <= _T_717[3];
      end
    end
    if (reset) begin
      mie_ssie <= 1'h0;
    end else if (writeEn) begin
      if (_T_827) begin
        mie_ssie <= writeData[1];
      end else if (_T_683) begin
        mie_ssie <= _T_717[1];
      end
    end
    if (reset) begin
      mtvec_base <= 30'h0;
    end else if (writeEn) begin
      if (_T_834) begin
        mtvec_base <= writeData[31:2];
      end
    end
    if (reset) begin
      mtvec_mode <= 2'h0;
    end else if (writeEn) begin
      if (_T_834) begin
        mtvec_mode <= {{1'd0}, writeData[0]};
      end
    end
    if (reset) begin
      mscratch_data <= 32'h0;
    end else if (writeEn) begin
      if (_T_837) begin
        if (_T_519) begin
          mscratch_data <= io_write_data;
        end else if (_T_517) begin
          mscratch_data <= io_write_data;
        end else if (_T_515) begin
          mscratch_data <= _T_510;
        end else if (_T_513) begin
          mscratch_data <= _T_512;
        end else begin
          mscratch_data <= 32'h0;
        end
      end
    end
    if (reset) begin
      mepc_data <= 32'h0;
    end else if (writeEn) begin
      if (_T_841) begin
        mepc_data <= _T_781;
      end
    end else if (io_except_hasTrap) begin
      if (!(_T_605)) begin
        mepc_data <= _T_857;
      end
    end
    if (reset) begin
      mcause_int <= 1'h0;
    end else if (writeEn) begin
      if (_T_844) begin
        mcause_int <= writeData[31];
      end
    end else if (io_except_hasTrap) begin
      if (!(_T_605)) begin
        mcause_int <= cause[31];
      end
    end
    if (reset) begin
      mcause_code <= 31'h0;
    end else if (writeEn) begin
      if (_T_844) begin
        mcause_code <= {{27'd0}, writeData[3:0]};
      end
    end else if (io_except_hasTrap) begin
      if (!(_T_605)) begin
        mcause_code <= {{27'd0}, cause[3:0]};
      end
    end
    if (reset) begin
      mtval_data <= 32'h0;
    end else if (writeEn) begin
      if (_T_847) begin
        if (_T_519) begin
          mtval_data <= io_write_data;
        end else if (_T_517) begin
          mtval_data <= io_write_data;
        end else if (_T_515) begin
          mtval_data <= _T_510;
        end else if (_T_513) begin
          mtval_data <= _T_512;
        end else begin
          mtval_data <= 32'h0;
        end
      end
    end else if (io_except_hasTrap) begin
      if (!(_T_605)) begin
        mtval_data <= io_except_excValue;
      end
    end
    if (reset) begin
      mipReal_seip <= 1'h0;
    end else if (writeEn) begin
      if (_T_851) begin
        mipReal_seip <= writeData[9];
      end else if (_T_724) begin
        mipReal_seip <= _T_756[9];
      end
    end
    if (reset) begin
      mipReal_stip <= 1'h0;
    end else if (writeEn) begin
      if (_T_851) begin
        mipReal_stip <= writeData[5];
      end else if (_T_724) begin
        mipReal_stip <= _T_756[5];
      end
    end
    if (reset) begin
      mipReal_ssip <= 1'h0;
    end else if (writeEn) begin
      if (_T_851) begin
        mipReal_ssip <= writeData[1];
      end else if (_T_724) begin
        mipReal_ssip <= _T_756[1];
      end
    end
    if (reset) begin
      mcycle_data <= 64'h0;
    end else if (writeEn) begin
      if (_T_766) begin
        mcycle_data <= _T_768;
      end else if (_T_760) begin
        mcycle_data <= _T_762;
      end else begin
        mcycle_data <= _T_617;
      end
    end else begin
      mcycle_data <= _T_617;
    end
    if (reset) begin
      minstret_data <= 64'h0;
    end else if (writeEn) begin
      if (_T_769) begin
        minstret_data <= _T_771;
      end else if (_T_763) begin
        minstret_data <= _T_765;
      end else if (io_write_retired) begin
        minstret_data <= _T_619;
      end
    end else if (io_write_retired) begin
      minstret_data <= _T_619;
    end
    if (reset) begin
      stvec_base <= 30'h0;
    end else if (writeEn) begin
      if (_T_772) begin
        stvec_base <= writeData[31:2];
      end
    end
    if (reset) begin
      stvec_mode <= 2'h0;
    end else if (writeEn) begin
      if (_T_772) begin
        stvec_mode <= {{1'd0}, writeData[0]};
      end
    end
    if (reset) begin
      sscratch_data <= 32'h0;
    end else if (writeEn) begin
      if (_T_775) begin
        if (_T_519) begin
          sscratch_data <= io_write_data;
        end else if (_T_517) begin
          sscratch_data <= io_write_data;
        end else if (_T_515) begin
          sscratch_data <= _T_510;
        end else if (_T_513) begin
          sscratch_data <= _T_512;
        end else begin
          sscratch_data <= 32'h0;
        end
      end
    end
    if (reset) begin
      sepc_data <= 32'h0;
    end else if (writeEn) begin
      if (_T_779) begin
        sepc_data <= _T_781;
      end
    end else if (io_except_hasTrap) begin
      if (_T_605) begin
        sepc_data <= _T_857;
      end
    end
    if (reset) begin
      scause_int <= 1'h0;
    end else if (writeEn) begin
      if (_T_782) begin
        scause_int <= writeData[31];
      end
    end else if (io_except_hasTrap) begin
      if (_T_605) begin
        scause_int <= cause[31];
      end
    end
    if (reset) begin
      scause_code <= 31'h0;
    end else if (writeEn) begin
      if (_T_782) begin
        scause_code <= {{27'd0}, writeData[3:0]};
      end
    end else if (io_except_hasTrap) begin
      if (_T_605) begin
        scause_code <= {{27'd0}, cause[3:0]};
      end
    end
    if (reset) begin
      stval_data <= 32'h0;
    end else if (writeEn) begin
      if (_T_785) begin
        if (_T_519) begin
          stval_data <= io_write_data;
        end else if (_T_517) begin
          stval_data <= io_write_data;
        end else if (_T_515) begin
          stval_data <= _T_510;
        end else if (_T_513) begin
          stval_data <= _T_512;
        end else begin
          stval_data <= 32'h0;
        end
      end
    end else if (io_except_hasTrap) begin
      if (_T_605) begin
        stval_data <= io_except_excValue;
      end
    end
    if (reset) begin
      satp_mode <= 1'h0;
    end else if (writeEn) begin
      if (_T_789) begin
        satp_mode <= writeData[31];
      end
    end
    if (reset) begin
      satp_ppn <= 22'h0;
    end else if (writeEn) begin
      if (_T_789) begin
        satp_ppn <= writeData[21:0];
      end
    end
  end
endmodule
module AxiLiteArbiter(
  output        io_ifaxi_master_arready,
  input         io_ifaxi_master_arvalid,
  input  [31:0] io_ifaxi_master_araddr,
  input         io_ifaxi_master_rready,
  output        io_ifaxi_master_rvalid,
  output [31:0] io_ifaxi_master_rdata,
  output        io_lsaxi_master_awready,
  input         io_lsaxi_master_awvalid,
  input  [31:0] io_lsaxi_master_awaddr,
  output        io_lsaxi_master_wready,
  input         io_lsaxi_master_wvalid,
  input  [31:0] io_lsaxi_master_wdata,
  input  [3:0]  io_lsaxi_master_wstrb,
  input         io_lsaxi_master_bready,
  output        io_lsaxi_master_bvalid,
  output        io_lsaxi_master_arready,
  input         io_lsaxi_master_arvalid,
  input  [31:0] io_lsaxi_master_araddr,
  input         io_lsaxi_master_rready,
  output        io_lsaxi_master_rvalid,
  output [31:0] io_lsaxi_master_rdata,
  input         io_selectedMaster_master_awready,
  output        io_selectedMaster_master_awvalid,
  output [31:0] io_selectedMaster_master_awaddr,
  input         io_selectedMaster_master_wready,
  output        io_selectedMaster_master_wvalid,
  output [31:0] io_selectedMaster_master_wdata,
  output [3:0]  io_selectedMaster_master_wstrb,
  output        io_selectedMaster_master_bready,
  input         io_selectedMaster_master_bvalid,
  input         io_selectedMaster_master_arready,
  output        io_selectedMaster_master_arvalid,
  output [31:0] io_selectedMaster_master_araddr,
  output        io_selectedMaster_master_rready,
  input         io_selectedMaster_master_rvalid,
  input  [31:0] io_selectedMaster_master_rdata
);
  wire  lsaxiValid = io_lsaxi_master_arvalid | io_lsaxi_master_awvalid; // @[arbiter.scala 18:44]
  wire  _T = ~io_ifaxi_master_arvalid; // @[arbiter.scala 21:21]
  wire  selectLsaxi = _T & lsaxiValid; // @[arbiter.scala 21:33]
  assign io_ifaxi_master_arready = io_ifaxi_master_arvalid & io_selectedMaster_master_arready; // @[arbiter.scala 49:27]
  assign io_ifaxi_master_rvalid = io_ifaxi_master_arvalid & io_selectedMaster_master_rvalid; // @[arbiter.scala 55:26]
  assign io_ifaxi_master_rdata = io_selectedMaster_master_rdata; // @[arbiter.scala 56:25]
  assign io_lsaxi_master_awready = selectLsaxi & io_selectedMaster_master_awready; // @[arbiter.scala 62:27]
  assign io_lsaxi_master_wready = selectLsaxi & io_selectedMaster_master_wready; // @[arbiter.scala 63:26]
  assign io_lsaxi_master_bvalid = selectLsaxi & io_selectedMaster_master_bvalid; // @[arbiter.scala 64:26]
  assign io_lsaxi_master_arready = selectLsaxi & io_selectedMaster_master_arready; // @[arbiter.scala 61:27]
  assign io_lsaxi_master_rvalid = selectLsaxi & io_selectedMaster_master_rvalid; // @[arbiter.scala 67:26]
  assign io_lsaxi_master_rdata = io_selectedMaster_master_rdata; // @[arbiter.scala 68:25]
  assign io_selectedMaster_master_awvalid = io_ifaxi_master_arvalid ? 1'h0 : io_lsaxi_master_awvalid; // @[arbiter.scala 33:36]
  assign io_selectedMaster_master_awaddr = io_ifaxi_master_arvalid ? 32'h0 : io_lsaxi_master_awaddr; // @[arbiter.scala 34:35]
  assign io_selectedMaster_master_wvalid = io_ifaxi_master_arvalid ? 1'h0 : io_lsaxi_master_wvalid; // @[arbiter.scala 40:35]
  assign io_selectedMaster_master_wdata = io_ifaxi_master_arvalid ? 32'h0 : io_lsaxi_master_wdata; // @[arbiter.scala 41:34]
  assign io_selectedMaster_master_wstrb = io_ifaxi_master_arvalid ? 4'h0 : io_lsaxi_master_wstrb; // @[arbiter.scala 42:34]
  assign io_selectedMaster_master_bready = io_ifaxi_master_arvalid ? 1'h0 : io_lsaxi_master_bready; // @[arbiter.scala 45:35]
  assign io_selectedMaster_master_arvalid = io_ifaxi_master_arvalid ? io_ifaxi_master_arvalid : io_lsaxi_master_arvalid; // @[arbiter.scala 26:36]
  assign io_selectedMaster_master_araddr = io_ifaxi_master_arvalid ? io_ifaxi_master_araddr : io_lsaxi_master_araddr; // @[arbiter.scala 27:35]
  assign io_selectedMaster_master_rready = io_ifaxi_master_arvalid ? io_ifaxi_master_rready : io_lsaxi_master_rready; // @[arbiter.scala 46:35]
endmodule
module Core(
  input         clock,
  input         reset,
  input         io_timer,
  input         io_soft,
  input         io_extern,
  input         io_axi_master_awready,
  output        io_axi_master_awvalid,
  output [31:0] io_axi_master_awaddr,
  input         io_axi_master_wready,
  output        io_axi_master_wvalid,
  output [31:0] io_axi_master_wdata,
  output [3:0]  io_axi_master_wstrb,
  output        io_axi_master_bready,
  input         io_axi_master_bvalid,
  input         io_axi_master_arready,
  output        io_axi_master_arvalid,
  output [31:0] io_axi_master_araddr,
  output        io_axi_master_rready,
  input         io_axi_master_rvalid,
  input  [31:0] io_axi_master_rdata,
  output [31:0] io_inst,
  output [31:0] io_pc,
  output [31:0] io_npc,
  output [31:0] io_flushpc,
  output        io_flush,
  output        io_stall,
  output [31:0] io_wbinst,
  output        io_bputake,
  output [31:0] io_bpuaddr,
  output [31:0] io_idpc,
  output [31:0] io_idinst,
  output [31:0] io_expc,
  output [31:0] io_exinst,
  output [31:0] io_mempc,
  output [31:0] io_meminst,
  output [31:0] io_result,
  output [31:0] io_state
);
  wire  fetch_clock; // @[core.scala 38:25]
  wire  fetch_reset; // @[core.scala 38:25]
  wire  fetch_io_axi_master_arready; // @[core.scala 38:25]
  wire  fetch_io_axi_master_arvalid; // @[core.scala 38:25]
  wire [31:0] fetch_io_axi_master_araddr; // @[core.scala 38:25]
  wire  fetch_io_axi_master_rready; // @[core.scala 38:25]
  wire  fetch_io_axi_master_rvalid; // @[core.scala 38:25]
  wire [31:0] fetch_io_axi_master_rdata; // @[core.scala 38:25]
  wire  fetch_io_flush; // @[core.scala 38:25]
  wire [31:0] fetch_io_flush_pc; // @[core.scala 38:25]
  wire  fetch_io_stall; // @[core.scala 38:25]
  wire [31:0] fetch_io_IF_pc; // @[core.scala 38:25]
  wire  fetch_io_IF_valid; // @[core.scala 38:25]
  wire [31:0] fetch_io_IF_inst; // @[core.scala 38:25]
  wire  fetch_io_IF_bpu_take; // @[core.scala 38:25]
  wire [31:0] fetch_io_IF_bpu_takepc; // @[core.scala 38:25]
  wire  fetch_io_IF_misaligned; // @[core.scala 38:25]
  wire  fetch_io_bputake; // @[core.scala 38:25]
  wire [31:0] fetch_io_bpuaddr; // @[core.scala 38:25]
  wire  IF_ID_clock; // @[core.scala 39:25]
  wire  IF_ID_reset; // @[core.scala 39:25]
  wire  IF_ID_io_flush; // @[core.scala 39:25]
  wire  IF_ID_io_stallPrev; // @[core.scala 39:25]
  wire  IF_ID_io_stallNext; // @[core.scala 39:25]
  wire [31:0] IF_ID_io_prev_pc; // @[core.scala 39:25]
  wire  IF_ID_io_prev_valid; // @[core.scala 39:25]
  wire [31:0] IF_ID_io_prev_inst; // @[core.scala 39:25]
  wire  IF_ID_io_prev_bpu_take; // @[core.scala 39:25]
  wire [31:0] IF_ID_io_prev_bpu_takepc; // @[core.scala 39:25]
  wire  IF_ID_io_prev_misaligned; // @[core.scala 39:25]
  wire [31:0] IF_ID_io_next_pc; // @[core.scala 39:25]
  wire  IF_ID_io_next_valid; // @[core.scala 39:25]
  wire [31:0] IF_ID_io_next_inst; // @[core.scala 39:25]
  wire  IF_ID_io_next_bpu_take; // @[core.scala 39:25]
  wire [31:0] IF_ID_io_next_bpu_takepc; // @[core.scala 39:25]
  wire  IF_ID_io_next_misaligned; // @[core.scala 39:25]
  wire [31:0] ID_io_if_i_pc; // @[core.scala 40:25]
  wire  ID_io_if_i_valid; // @[core.scala 40:25]
  wire [31:0] ID_io_if_i_inst; // @[core.scala 40:25]
  wire  ID_io_if_i_bpu_take; // @[core.scala 40:25]
  wire [31:0] ID_io_if_i_bpu_takepc; // @[core.scala 40:25]
  wire  ID_io_if_i_misaligned; // @[core.scala 40:25]
  wire  ID_io_read1_en; // @[core.scala 40:25]
  wire [4:0] ID_io_read1_addr; // @[core.scala 40:25]
  wire [31:0] ID_io_read1_data; // @[core.scala 40:25]
  wire  ID_io_read2_en; // @[core.scala 40:25]
  wire [4:0] ID_io_read2_addr; // @[core.scala 40:25]
  wire [31:0] ID_io_read2_data; // @[core.scala 40:25]
  wire  ID_io_stallid; // @[core.scala 40:25]
  wire [31:0] ID_io_csrread_csr_rdata; // @[core.scala 40:25]
  wire [31:0] ID_io_csrread_csr_raddr; // @[core.scala 40:25]
  wire [2:0] ID_io_csrread_csr_op; // @[core.scala 40:25]
  wire  ID_io_csrread_csr_valid; // @[core.scala 40:25]
  wire  ID_io_flush; // @[core.scala 40:25]
  wire [31:0] ID_io_flushpc; // @[core.scala 40:25]
  wire [3:0] ID_io_id_o_aluOp; // @[core.scala 40:25]
  wire [31:0] ID_io_id_o_opr1; // @[core.scala 40:25]
  wire [31:0] ID_io_id_o_opr2; // @[core.scala 40:25]
  wire [3:0] ID_io_id_o_mduOp; // @[core.scala 40:25]
  wire [3:0] ID_io_id_o_lsuOp; // @[core.scala 40:25]
  wire [31:0] ID_io_id_o_lsuData; // @[core.scala 40:25]
  wire  ID_io_id_o_regWen; // @[core.scala 40:25]
  wire [4:0] ID_io_id_o_regWaddr; // @[core.scala 40:25]
  wire [2:0] ID_io_id_o_csrOp; // @[core.scala 40:25]
  wire [11:0] ID_io_id_o_csrAddr; // @[core.scala 40:25]
  wire  ID_io_id_o_csren; // @[core.scala 40:25]
  wire [31:0] ID_io_id_o_csrrData; // @[core.scala 40:25]
  wire [31:0] ID_io_id_o_csrwData; // @[core.scala 40:25]
  wire [3:0] ID_io_id_o_excType; // @[core.scala 40:25]
  wire [31:0] ID_io_id_o_excValue; // @[core.scala 40:25]
  wire [31:0] ID_io_id_o_inst; // @[core.scala 40:25]
  wire [31:0] ID_io_id_o_currentPc; // @[core.scala 40:25]
  wire  ID_EX_clock; // @[core.scala 41:25]
  wire  ID_EX_reset; // @[core.scala 41:25]
  wire  ID_EX_io_flush; // @[core.scala 41:25]
  wire  ID_EX_io_stallPrev; // @[core.scala 41:25]
  wire  ID_EX_io_stallNext; // @[core.scala 41:25]
  wire [3:0] ID_EX_io_prev_aluOp; // @[core.scala 41:25]
  wire [31:0] ID_EX_io_prev_opr1; // @[core.scala 41:25]
  wire [31:0] ID_EX_io_prev_opr2; // @[core.scala 41:25]
  wire [3:0] ID_EX_io_prev_mduOp; // @[core.scala 41:25]
  wire [3:0] ID_EX_io_prev_lsuOp; // @[core.scala 41:25]
  wire [31:0] ID_EX_io_prev_lsuData; // @[core.scala 41:25]
  wire  ID_EX_io_prev_regWen; // @[core.scala 41:25]
  wire [4:0] ID_EX_io_prev_regWaddr; // @[core.scala 41:25]
  wire [2:0] ID_EX_io_prev_csrOp; // @[core.scala 41:25]
  wire [11:0] ID_EX_io_prev_csrAddr; // @[core.scala 41:25]
  wire  ID_EX_io_prev_csren; // @[core.scala 41:25]
  wire [31:0] ID_EX_io_prev_csrrData; // @[core.scala 41:25]
  wire [31:0] ID_EX_io_prev_csrwData; // @[core.scala 41:25]
  wire [3:0] ID_EX_io_prev_excType; // @[core.scala 41:25]
  wire [31:0] ID_EX_io_prev_excValue; // @[core.scala 41:25]
  wire [31:0] ID_EX_io_prev_inst; // @[core.scala 41:25]
  wire [31:0] ID_EX_io_prev_currentPc; // @[core.scala 41:25]
  wire [3:0] ID_EX_io_next_aluOp; // @[core.scala 41:25]
  wire [31:0] ID_EX_io_next_opr1; // @[core.scala 41:25]
  wire [31:0] ID_EX_io_next_opr2; // @[core.scala 41:25]
  wire [3:0] ID_EX_io_next_mduOp; // @[core.scala 41:25]
  wire [3:0] ID_EX_io_next_lsuOp; // @[core.scala 41:25]
  wire [31:0] ID_EX_io_next_lsuData; // @[core.scala 41:25]
  wire  ID_EX_io_next_regWen; // @[core.scala 41:25]
  wire [4:0] ID_EX_io_next_regWaddr; // @[core.scala 41:25]
  wire [2:0] ID_EX_io_next_csrOp; // @[core.scala 41:25]
  wire [11:0] ID_EX_io_next_csrAddr; // @[core.scala 41:25]
  wire  ID_EX_io_next_csren; // @[core.scala 41:25]
  wire [31:0] ID_EX_io_next_csrrData; // @[core.scala 41:25]
  wire [31:0] ID_EX_io_next_csrwData; // @[core.scala 41:25]
  wire [3:0] ID_EX_io_next_excType; // @[core.scala 41:25]
  wire [31:0] ID_EX_io_next_excValue; // @[core.scala 41:25]
  wire [31:0] ID_EX_io_next_inst; // @[core.scala 41:25]
  wire [31:0] ID_EX_io_next_currentPc; // @[core.scala 41:25]
  wire  EX_clock; // @[core.scala 42:25]
  wire  EX_reset; // @[core.scala 42:25]
  wire [3:0] EX_io_id_i_aluOp; // @[core.scala 42:25]
  wire [31:0] EX_io_id_i_opr1; // @[core.scala 42:25]
  wire [31:0] EX_io_id_i_opr2; // @[core.scala 42:25]
  wire [3:0] EX_io_id_i_mduOp; // @[core.scala 42:25]
  wire [3:0] EX_io_id_i_lsuOp; // @[core.scala 42:25]
  wire [31:0] EX_io_id_i_lsuData; // @[core.scala 42:25]
  wire  EX_io_id_i_regWen; // @[core.scala 42:25]
  wire [4:0] EX_io_id_i_regWaddr; // @[core.scala 42:25]
  wire [2:0] EX_io_id_i_csrOp; // @[core.scala 42:25]
  wire [11:0] EX_io_id_i_csrAddr; // @[core.scala 42:25]
  wire  EX_io_id_i_csren; // @[core.scala 42:25]
  wire [31:0] EX_io_id_i_csrrData; // @[core.scala 42:25]
  wire [31:0] EX_io_id_i_csrwData; // @[core.scala 42:25]
  wire [3:0] EX_io_id_i_excType; // @[core.scala 42:25]
  wire [31:0] EX_io_id_i_excValue; // @[core.scala 42:25]
  wire [31:0] EX_io_id_i_inst; // @[core.scala 42:25]
  wire [31:0] EX_io_id_i_currentPc; // @[core.scala 42:25]
  wire  EX_io_flush; // @[core.scala 42:25]
  wire  EX_io_stallReq; // @[core.scala 42:25]
  wire [3:0] EX_io_ex_o_lsuOp; // @[core.scala 42:25]
  wire [31:0] EX_io_ex_o_lsuData; // @[core.scala 42:25]
  wire  EX_io_ex_o_reg_en; // @[core.scala 42:25]
  wire [4:0] EX_io_ex_o_reg_addr; // @[core.scala 42:25]
  wire [31:0] EX_io_ex_o_reg_data; // @[core.scala 42:25]
  wire  EX_io_ex_o_load; // @[core.scala 42:25]
  wire [2:0] EX_io_ex_o_csr_op; // @[core.scala 42:25]
  wire [11:0] EX_io_ex_o_csr_addr; // @[core.scala 42:25]
  wire [31:0] EX_io_ex_o_csr_data; // @[core.scala 42:25]
  wire  EX_io_ex_o_csr_retired; // @[core.scala 42:25]
  wire [3:0] EX_io_ex_o_excType; // @[core.scala 42:25]
  wire [31:0] EX_io_ex_o_excValue; // @[core.scala 42:25]
  wire [31:0] EX_io_ex_o_inst; // @[core.scala 42:25]
  wire [31:0] EX_io_ex_o_currentPc; // @[core.scala 42:25]
  wire  EX_MEM_clock; // @[core.scala 43:25]
  wire  EX_MEM_reset; // @[core.scala 43:25]
  wire  EX_MEM_io_flush; // @[core.scala 43:25]
  wire  EX_MEM_io_stallPrev; // @[core.scala 43:25]
  wire  EX_MEM_io_stallNext; // @[core.scala 43:25]
  wire [3:0] EX_MEM_io_prev_lsuOp; // @[core.scala 43:25]
  wire [31:0] EX_MEM_io_prev_lsuData; // @[core.scala 43:25]
  wire  EX_MEM_io_prev_reg_en; // @[core.scala 43:25]
  wire [4:0] EX_MEM_io_prev_reg_addr; // @[core.scala 43:25]
  wire [31:0] EX_MEM_io_prev_reg_data; // @[core.scala 43:25]
  wire [2:0] EX_MEM_io_prev_csr_op; // @[core.scala 43:25]
  wire [11:0] EX_MEM_io_prev_csr_addr; // @[core.scala 43:25]
  wire [31:0] EX_MEM_io_prev_csr_data; // @[core.scala 43:25]
  wire  EX_MEM_io_prev_csr_retired; // @[core.scala 43:25]
  wire [3:0] EX_MEM_io_prev_excType; // @[core.scala 43:25]
  wire [31:0] EX_MEM_io_prev_excValue; // @[core.scala 43:25]
  wire [31:0] EX_MEM_io_prev_inst; // @[core.scala 43:25]
  wire [31:0] EX_MEM_io_prev_currentPc; // @[core.scala 43:25]
  wire [3:0] EX_MEM_io_next_lsuOp; // @[core.scala 43:25]
  wire [31:0] EX_MEM_io_next_lsuData; // @[core.scala 43:25]
  wire  EX_MEM_io_next_reg_en; // @[core.scala 43:25]
  wire [4:0] EX_MEM_io_next_reg_addr; // @[core.scala 43:25]
  wire [31:0] EX_MEM_io_next_reg_data; // @[core.scala 43:25]
  wire [2:0] EX_MEM_io_next_csr_op; // @[core.scala 43:25]
  wire [11:0] EX_MEM_io_next_csr_addr; // @[core.scala 43:25]
  wire [31:0] EX_MEM_io_next_csr_data; // @[core.scala 43:25]
  wire  EX_MEM_io_next_csr_retired; // @[core.scala 43:25]
  wire [3:0] EX_MEM_io_next_excType; // @[core.scala 43:25]
  wire [31:0] EX_MEM_io_next_excValue; // @[core.scala 43:25]
  wire [31:0] EX_MEM_io_next_inst; // @[core.scala 43:25]
  wire [31:0] EX_MEM_io_next_currentPc; // @[core.scala 43:25]
  wire  MEM_clock; // @[core.scala 44:25]
  wire  MEM_reset; // @[core.scala 44:25]
  wire [3:0] MEM_io_ex_i_lsuOp; // @[core.scala 44:25]
  wire [31:0] MEM_io_ex_i_lsuData; // @[core.scala 44:25]
  wire  MEM_io_ex_i_reg_en; // @[core.scala 44:25]
  wire [4:0] MEM_io_ex_i_reg_addr; // @[core.scala 44:25]
  wire [31:0] MEM_io_ex_i_reg_data; // @[core.scala 44:25]
  wire [2:0] MEM_io_ex_i_csr_op; // @[core.scala 44:25]
  wire [11:0] MEM_io_ex_i_csr_addr; // @[core.scala 44:25]
  wire [31:0] MEM_io_ex_i_csr_data; // @[core.scala 44:25]
  wire  MEM_io_ex_i_csr_retired; // @[core.scala 44:25]
  wire [3:0] MEM_io_ex_i_excType; // @[core.scala 44:25]
  wire [31:0] MEM_io_ex_i_excValue; // @[core.scala 44:25]
  wire [31:0] MEM_io_ex_i_inst; // @[core.scala 44:25]
  wire [31:0] MEM_io_ex_i_currentPc; // @[core.scala 44:25]
  wire  MEM_io_stallReq; // @[core.scala 44:25]
  wire  MEM_io_except_hasTrap; // @[core.scala 44:25]
  wire [30:0] MEM_io_except_excCause; // @[core.scala 44:25]
  wire [31:0] MEM_io_except_excPc; // @[core.scala 44:25]
  wire [31:0] MEM_io_except_excValue; // @[core.scala 44:25]
  wire  MEM_io_csrHasInt; // @[core.scala 44:25]
  wire  MEM_io_csrBusy; // @[core.scala 44:25]
  wire  MEM_io_mem_o_reg_en; // @[core.scala 44:25]
  wire [4:0] MEM_io_mem_o_reg_addr; // @[core.scala 44:25]
  wire [31:0] MEM_io_mem_o_reg_data; // @[core.scala 44:25]
  wire [2:0] MEM_io_mem_o_csr_op; // @[core.scala 44:25]
  wire [11:0] MEM_io_mem_o_csr_addr; // @[core.scala 44:25]
  wire [31:0] MEM_io_mem_o_csr_data; // @[core.scala 44:25]
  wire  MEM_io_mem_o_csr_retired; // @[core.scala 44:25]
  wire [31:0] MEM_io_mem_o_currentPc; // @[core.scala 44:25]
  wire [31:0] MEM_io_mem_o_inst; // @[core.scala 44:25]
  wire [31:0] MEM_io_state; // @[core.scala 44:25]
  wire  MEM_io_axi_master_awready; // @[core.scala 44:25]
  wire  MEM_io_axi_master_awvalid; // @[core.scala 44:25]
  wire [31:0] MEM_io_axi_master_awaddr; // @[core.scala 44:25]
  wire  MEM_io_axi_master_wready; // @[core.scala 44:25]
  wire  MEM_io_axi_master_wvalid; // @[core.scala 44:25]
  wire [31:0] MEM_io_axi_master_wdata; // @[core.scala 44:25]
  wire [3:0] MEM_io_axi_master_wstrb; // @[core.scala 44:25]
  wire  MEM_io_axi_master_bready; // @[core.scala 44:25]
  wire  MEM_io_axi_master_bvalid; // @[core.scala 44:25]
  wire  MEM_io_axi_master_arready; // @[core.scala 44:25]
  wire  MEM_io_axi_master_arvalid; // @[core.scala 44:25]
  wire [31:0] MEM_io_axi_master_araddr; // @[core.scala 44:25]
  wire  MEM_io_axi_master_rready; // @[core.scala 44:25]
  wire  MEM_io_axi_master_rvalid; // @[core.scala 44:25]
  wire [31:0] MEM_io_axi_master_rdata; // @[core.scala 44:25]
  wire  MEM_WB_clock; // @[core.scala 45:25]
  wire  MEM_WB_reset; // @[core.scala 45:25]
  wire  MEM_WB_io_flush; // @[core.scala 45:25]
  wire  MEM_WB_io_stallPrev; // @[core.scala 45:25]
  wire  MEM_WB_io_stallNext; // @[core.scala 45:25]
  wire  MEM_WB_io_prev_reg_en; // @[core.scala 45:25]
  wire [4:0] MEM_WB_io_prev_reg_addr; // @[core.scala 45:25]
  wire [31:0] MEM_WB_io_prev_reg_data; // @[core.scala 45:25]
  wire [2:0] MEM_WB_io_prev_csr_op; // @[core.scala 45:25]
  wire [11:0] MEM_WB_io_prev_csr_addr; // @[core.scala 45:25]
  wire [31:0] MEM_WB_io_prev_csr_data; // @[core.scala 45:25]
  wire  MEM_WB_io_prev_csr_retired; // @[core.scala 45:25]
  wire [31:0] MEM_WB_io_prev_currentPc; // @[core.scala 45:25]
  wire [31:0] MEM_WB_io_prev_inst; // @[core.scala 45:25]
  wire  MEM_WB_io_next_reg_en; // @[core.scala 45:25]
  wire [4:0] MEM_WB_io_next_reg_addr; // @[core.scala 45:25]
  wire [31:0] MEM_WB_io_next_reg_data; // @[core.scala 45:25]
  wire [2:0] MEM_WB_io_next_csr_op; // @[core.scala 45:25]
  wire [11:0] MEM_WB_io_next_csr_addr; // @[core.scala 45:25]
  wire [31:0] MEM_WB_io_next_csr_data; // @[core.scala 45:25]
  wire  MEM_WB_io_next_csr_retired; // @[core.scala 45:25]
  wire [31:0] MEM_WB_io_next_currentPc; // @[core.scala 45:25]
  wire [31:0] MEM_WB_io_next_inst; // @[core.scala 45:25]
  wire  WB_io_mem_i_reg_en; // @[core.scala 46:25]
  wire [4:0] WB_io_mem_i_reg_addr; // @[core.scala 46:25]
  wire [31:0] WB_io_mem_i_reg_data; // @[core.scala 46:25]
  wire [2:0] WB_io_mem_i_csr_op; // @[core.scala 46:25]
  wire [11:0] WB_io_mem_i_csr_addr; // @[core.scala 46:25]
  wire [31:0] WB_io_mem_i_csr_data; // @[core.scala 46:25]
  wire  WB_io_mem_i_csr_retired; // @[core.scala 46:25]
  wire [31:0] WB_io_mem_i_currentPc; // @[core.scala 46:25]
  wire [31:0] WB_io_mem_i_inst; // @[core.scala 46:25]
  wire  WB_io_regen; // @[core.scala 46:25]
  wire [4:0] WB_io_regaddr; // @[core.scala 46:25]
  wire [31:0] WB_io_regdata; // @[core.scala 46:25]
  wire [2:0] WB_io_csr_op; // @[core.scala 46:25]
  wire [11:0] WB_io_csr_addr; // @[core.scala 46:25]
  wire [31:0] WB_io_csr_data; // @[core.scala 46:25]
  wire  WB_io_csr_retired; // @[core.scala 46:25]
  wire [31:0] WB_io_wb_pc; // @[core.scala 46:25]
  wire [31:0] WB_io_wbinst; // @[core.scala 46:25]
  wire  dpic_wb_commit; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_0; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_1; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_2; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_3; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_4; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_5; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_6; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_7; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_8; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_9; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_10; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_11; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_12; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_13; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_14; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_15; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_16; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_17; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_18; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_19; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_20; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_21; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_22; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_23; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_24; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_25; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_26; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_27; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_28; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_29; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_30; // @[core.scala 47:25]
  wire [31:0] dpic_s_regs_31; // @[core.scala 47:25]
  wire  regfile_clock; // @[core.scala 48:25]
  wire  regfile_reset; // @[core.scala 48:25]
  wire  regfile_io_read1_en; // @[core.scala 48:25]
  wire [4:0] regfile_io_read1_addr; // @[core.scala 48:25]
  wire [31:0] regfile_io_read1_data; // @[core.scala 48:25]
  wire  regfile_io_read2_en; // @[core.scala 48:25]
  wire [4:0] regfile_io_read2_addr; // @[core.scala 48:25]
  wire [31:0] regfile_io_read2_data; // @[core.scala 48:25]
  wire  regfile_io_en; // @[core.scala 48:25]
  wire [4:0] regfile_io_addr; // @[core.scala 48:25]
  wire [31:0] regfile_io_data; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_0; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_1; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_2; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_3; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_4; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_5; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_6; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_7; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_8; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_9; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_10; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_11; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_12; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_13; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_14; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_15; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_16; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_17; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_18; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_19; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_20; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_21; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_22; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_23; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_24; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_25; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_26; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_27; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_28; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_29; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_30; // @[core.scala 48:25]
  wire [31:0] regfile_io_s_regs_31; // @[core.scala 48:25]
  wire  resoler_io_id_read1_en; // @[core.scala 49:25]
  wire [4:0] resoler_io_id_read1_addr; // @[core.scala 49:25]
  wire [31:0] resoler_io_id_read1_data; // @[core.scala 49:25]
  wire  resoler_io_id_read2_en; // @[core.scala 49:25]
  wire [4:0] resoler_io_id_read2_addr; // @[core.scala 49:25]
  wire [31:0] resoler_io_id_read2_data; // @[core.scala 49:25]
  wire [31:0] resoler_io_csrRead_csr_rdata; // @[core.scala 49:25]
  wire [31:0] resoler_io_csrRead_csr_raddr; // @[core.scala 49:25]
  wire [2:0] resoler_io_csrRead_csr_op; // @[core.scala 49:25]
  wire  resoler_io_csrRead_csr_valid; // @[core.scala 49:25]
  wire  resoler_io_rs1_en; // @[core.scala 49:25]
  wire [4:0] resoler_io_rs1_addr; // @[core.scala 49:25]
  wire [31:0] resoler_io_rs1_data; // @[core.scala 49:25]
  wire  resoler_io_rs2_en; // @[core.scala 49:25]
  wire [4:0] resoler_io_rs2_addr; // @[core.scala 49:25]
  wire [31:0] resoler_io_rs2_data; // @[core.scala 49:25]
  wire [31:0] resoler_io_csr_csr_rdata; // @[core.scala 49:25]
  wire [31:0] resoler_io_csr_csr_raddr; // @[core.scala 49:25]
  wire [2:0] resoler_io_csr_csr_op; // @[core.scala 49:25]
  wire  resoler_io_csr_csr_valid; // @[core.scala 49:25]
  wire  resoler_io_load; // @[core.scala 49:25]
  wire  resoler_io_ex_reg_en; // @[core.scala 49:25]
  wire [4:0] resoler_io_ex_reg_addr; // @[core.scala 49:25]
  wire [31:0] resoler_io_ex_reg_data; // @[core.scala 49:25]
  wire [2:0] resoler_io_ex_csr_op; // @[core.scala 49:25]
  wire [11:0] resoler_io_ex_csr_addr; // @[core.scala 49:25]
  wire  resoler_io_mem_reg_en; // @[core.scala 49:25]
  wire [4:0] resoler_io_mem_reg_addr; // @[core.scala 49:25]
  wire [31:0] resoler_io_mem_reg_data; // @[core.scala 49:25]
  wire [2:0] resoler_io_mem_csr_op; // @[core.scala 49:25]
  wire [11:0] resoler_io_mem_csr_addr; // @[core.scala 49:25]
  wire  resoler_io_wb_reg_en; // @[core.scala 49:25]
  wire [4:0] resoler_io_wb_reg_addr; // @[core.scala 49:25]
  wire [31:0] resoler_io_wb_reg_data; // @[core.scala 49:25]
  wire [2:0] resoler_io_wb_csr_op; // @[core.scala 49:25]
  wire [11:0] resoler_io_wb_csr_addr; // @[core.scala 49:25]
  wire  resoler_io_loadflag; // @[core.scala 49:25]
  wire  resoler_io_csrflag; // @[core.scala 49:25]
  wire  ctrl_io_id_flush; // @[core.scala 50:25]
  wire [31:0] ctrl_io_id_flushpc; // @[core.scala 50:25]
  wire  ctrl_io_ex_stall; // @[core.scala 50:25]
  wire  ctrl_io_mem_stall; // @[core.scala 50:25]
  wire  ctrl_io_loadflag; // @[core.scala 50:25]
  wire  ctrl_io_csrflag; // @[core.scala 50:25]
  wire  ctrl_io_except_hasTrap; // @[core.scala 50:25]
  wire [31:0] ctrl_io_csrTvec; // @[core.scala 50:25]
  wire  ctrl_io_stallIf; // @[core.scala 50:25]
  wire  ctrl_io_stallId; // @[core.scala 50:25]
  wire  ctrl_io_stallEx; // @[core.scala 50:25]
  wire  ctrl_io_stallMm; // @[core.scala 50:25]
  wire  ctrl_io_stallWb; // @[core.scala 50:25]
  wire  ctrl_io_flush; // @[core.scala 50:25]
  wire  ctrl_io_flushIf; // @[core.scala 50:25]
  wire [31:0] ctrl_io_flushPc; // @[core.scala 50:25]
  wire  csr_clock; // @[core.scala 51:25]
  wire  csr_reset; // @[core.scala 51:25]
  wire [31:0] csr_io_read_csr_rdata; // @[core.scala 51:25]
  wire [31:0] csr_io_read_csr_raddr; // @[core.scala 51:25]
  wire [2:0] csr_io_read_csr_op; // @[core.scala 51:25]
  wire  csr_io_read_csr_valid; // @[core.scala 51:25]
  wire [2:0] csr_io_write_op; // @[core.scala 51:25]
  wire [11:0] csr_io_write_addr; // @[core.scala 51:25]
  wire [31:0] csr_io_write_data; // @[core.scala 51:25]
  wire  csr_io_write_retired; // @[core.scala 51:25]
  wire  csr_io_except_hasTrap; // @[core.scala 51:25]
  wire [30:0] csr_io_except_excCause; // @[core.scala 51:25]
  wire [31:0] csr_io_except_excPc; // @[core.scala 51:25]
  wire [31:0] csr_io_except_excValue; // @[core.scala 51:25]
  wire  csr_io_timer; // @[core.scala 51:25]
  wire  csr_io_soft; // @[core.scala 51:25]
  wire  csr_io_extern; // @[core.scala 51:25]
  wire  csr_io_hasInt; // @[core.scala 51:25]
  wire  csr_io_busy; // @[core.scala 51:25]
  wire [31:0] csr_io_trapVec; // @[core.scala 51:25]
  wire  arbiter_io_ifaxi_master_arready; // @[core.scala 52:25]
  wire  arbiter_io_ifaxi_master_arvalid; // @[core.scala 52:25]
  wire [31:0] arbiter_io_ifaxi_master_araddr; // @[core.scala 52:25]
  wire  arbiter_io_ifaxi_master_rready; // @[core.scala 52:25]
  wire  arbiter_io_ifaxi_master_rvalid; // @[core.scala 52:25]
  wire [31:0] arbiter_io_ifaxi_master_rdata; // @[core.scala 52:25]
  wire  arbiter_io_lsaxi_master_awready; // @[core.scala 52:25]
  wire  arbiter_io_lsaxi_master_awvalid; // @[core.scala 52:25]
  wire [31:0] arbiter_io_lsaxi_master_awaddr; // @[core.scala 52:25]
  wire  arbiter_io_lsaxi_master_wready; // @[core.scala 52:25]
  wire  arbiter_io_lsaxi_master_wvalid; // @[core.scala 52:25]
  wire [31:0] arbiter_io_lsaxi_master_wdata; // @[core.scala 52:25]
  wire [3:0] arbiter_io_lsaxi_master_wstrb; // @[core.scala 52:25]
  wire  arbiter_io_lsaxi_master_bready; // @[core.scala 52:25]
  wire  arbiter_io_lsaxi_master_bvalid; // @[core.scala 52:25]
  wire  arbiter_io_lsaxi_master_arready; // @[core.scala 52:25]
  wire  arbiter_io_lsaxi_master_arvalid; // @[core.scala 52:25]
  wire [31:0] arbiter_io_lsaxi_master_araddr; // @[core.scala 52:25]
  wire  arbiter_io_lsaxi_master_rready; // @[core.scala 52:25]
  wire  arbiter_io_lsaxi_master_rvalid; // @[core.scala 52:25]
  wire [31:0] arbiter_io_lsaxi_master_rdata; // @[core.scala 52:25]
  wire  arbiter_io_selectedMaster_master_awready; // @[core.scala 52:25]
  wire  arbiter_io_selectedMaster_master_awvalid; // @[core.scala 52:25]
  wire [31:0] arbiter_io_selectedMaster_master_awaddr; // @[core.scala 52:25]
  wire  arbiter_io_selectedMaster_master_wready; // @[core.scala 52:25]
  wire  arbiter_io_selectedMaster_master_wvalid; // @[core.scala 52:25]
  wire [31:0] arbiter_io_selectedMaster_master_wdata; // @[core.scala 52:25]
  wire [3:0] arbiter_io_selectedMaster_master_wstrb; // @[core.scala 52:25]
  wire  arbiter_io_selectedMaster_master_bready; // @[core.scala 52:25]
  wire  arbiter_io_selectedMaster_master_bvalid; // @[core.scala 52:25]
  wire  arbiter_io_selectedMaster_master_arready; // @[core.scala 52:25]
  wire  arbiter_io_selectedMaster_master_arvalid; // @[core.scala 52:25]
  wire [31:0] arbiter_io_selectedMaster_master_araddr; // @[core.scala 52:25]
  wire  arbiter_io_selectedMaster_master_rready; // @[core.scala 52:25]
  wire  arbiter_io_selectedMaster_master_rvalid; // @[core.scala 52:25]
  wire [31:0] arbiter_io_selectedMaster_master_rdata; // @[core.scala 52:25]
  IF fetch ( // @[core.scala 38:25]
    .clock(fetch_clock),
    .reset(fetch_reset),
    .io_axi_master_arready(fetch_io_axi_master_arready),
    .io_axi_master_arvalid(fetch_io_axi_master_arvalid),
    .io_axi_master_araddr(fetch_io_axi_master_araddr),
    .io_axi_master_rready(fetch_io_axi_master_rready),
    .io_axi_master_rvalid(fetch_io_axi_master_rvalid),
    .io_axi_master_rdata(fetch_io_axi_master_rdata),
    .io_flush(fetch_io_flush),
    .io_flush_pc(fetch_io_flush_pc),
    .io_stall(fetch_io_stall),
    .io_IF_pc(fetch_io_IF_pc),
    .io_IF_valid(fetch_io_IF_valid),
    .io_IF_inst(fetch_io_IF_inst),
    .io_IF_bpu_take(fetch_io_IF_bpu_take),
    .io_IF_bpu_takepc(fetch_io_IF_bpu_takepc),
    .io_IF_misaligned(fetch_io_IF_misaligned),
    .io_bputake(fetch_io_bputake),
    .io_bpuaddr(fetch_io_bpuaddr)
  );
  MidStage IF_ID ( // @[core.scala 39:25]
    .clock(IF_ID_clock),
    .reset(IF_ID_reset),
    .io_flush(IF_ID_io_flush),
    .io_stallPrev(IF_ID_io_stallPrev),
    .io_stallNext(IF_ID_io_stallNext),
    .io_prev_pc(IF_ID_io_prev_pc),
    .io_prev_valid(IF_ID_io_prev_valid),
    .io_prev_inst(IF_ID_io_prev_inst),
    .io_prev_bpu_take(IF_ID_io_prev_bpu_take),
    .io_prev_bpu_takepc(IF_ID_io_prev_bpu_takepc),
    .io_prev_misaligned(IF_ID_io_prev_misaligned),
    .io_next_pc(IF_ID_io_next_pc),
    .io_next_valid(IF_ID_io_next_valid),
    .io_next_inst(IF_ID_io_next_inst),
    .io_next_bpu_take(IF_ID_io_next_bpu_take),
    .io_next_bpu_takepc(IF_ID_io_next_bpu_takepc),
    .io_next_misaligned(IF_ID_io_next_misaligned)
  );
  ID ID ( // @[core.scala 40:25]
    .io_if_i_pc(ID_io_if_i_pc),
    .io_if_i_valid(ID_io_if_i_valid),
    .io_if_i_inst(ID_io_if_i_inst),
    .io_if_i_bpu_take(ID_io_if_i_bpu_take),
    .io_if_i_bpu_takepc(ID_io_if_i_bpu_takepc),
    .io_if_i_misaligned(ID_io_if_i_misaligned),
    .io_read1_en(ID_io_read1_en),
    .io_read1_addr(ID_io_read1_addr),
    .io_read1_data(ID_io_read1_data),
    .io_read2_en(ID_io_read2_en),
    .io_read2_addr(ID_io_read2_addr),
    .io_read2_data(ID_io_read2_data),
    .io_stallid(ID_io_stallid),
    .io_csrread_csr_rdata(ID_io_csrread_csr_rdata),
    .io_csrread_csr_raddr(ID_io_csrread_csr_raddr),
    .io_csrread_csr_op(ID_io_csrread_csr_op),
    .io_csrread_csr_valid(ID_io_csrread_csr_valid),
    .io_flush(ID_io_flush),
    .io_flushpc(ID_io_flushpc),
    .io_id_o_aluOp(ID_io_id_o_aluOp),
    .io_id_o_opr1(ID_io_id_o_opr1),
    .io_id_o_opr2(ID_io_id_o_opr2),
    .io_id_o_mduOp(ID_io_id_o_mduOp),
    .io_id_o_lsuOp(ID_io_id_o_lsuOp),
    .io_id_o_lsuData(ID_io_id_o_lsuData),
    .io_id_o_regWen(ID_io_id_o_regWen),
    .io_id_o_regWaddr(ID_io_id_o_regWaddr),
    .io_id_o_csrOp(ID_io_id_o_csrOp),
    .io_id_o_csrAddr(ID_io_id_o_csrAddr),
    .io_id_o_csren(ID_io_id_o_csren),
    .io_id_o_csrrData(ID_io_id_o_csrrData),
    .io_id_o_csrwData(ID_io_id_o_csrwData),
    .io_id_o_excType(ID_io_id_o_excType),
    .io_id_o_excValue(ID_io_id_o_excValue),
    .io_id_o_inst(ID_io_id_o_inst),
    .io_id_o_currentPc(ID_io_id_o_currentPc)
  );
  MidStage_1 ID_EX ( // @[core.scala 41:25]
    .clock(ID_EX_clock),
    .reset(ID_EX_reset),
    .io_flush(ID_EX_io_flush),
    .io_stallPrev(ID_EX_io_stallPrev),
    .io_stallNext(ID_EX_io_stallNext),
    .io_prev_aluOp(ID_EX_io_prev_aluOp),
    .io_prev_opr1(ID_EX_io_prev_opr1),
    .io_prev_opr2(ID_EX_io_prev_opr2),
    .io_prev_mduOp(ID_EX_io_prev_mduOp),
    .io_prev_lsuOp(ID_EX_io_prev_lsuOp),
    .io_prev_lsuData(ID_EX_io_prev_lsuData),
    .io_prev_regWen(ID_EX_io_prev_regWen),
    .io_prev_regWaddr(ID_EX_io_prev_regWaddr),
    .io_prev_csrOp(ID_EX_io_prev_csrOp),
    .io_prev_csrAddr(ID_EX_io_prev_csrAddr),
    .io_prev_csren(ID_EX_io_prev_csren),
    .io_prev_csrrData(ID_EX_io_prev_csrrData),
    .io_prev_csrwData(ID_EX_io_prev_csrwData),
    .io_prev_excType(ID_EX_io_prev_excType),
    .io_prev_excValue(ID_EX_io_prev_excValue),
    .io_prev_inst(ID_EX_io_prev_inst),
    .io_prev_currentPc(ID_EX_io_prev_currentPc),
    .io_next_aluOp(ID_EX_io_next_aluOp),
    .io_next_opr1(ID_EX_io_next_opr1),
    .io_next_opr2(ID_EX_io_next_opr2),
    .io_next_mduOp(ID_EX_io_next_mduOp),
    .io_next_lsuOp(ID_EX_io_next_lsuOp),
    .io_next_lsuData(ID_EX_io_next_lsuData),
    .io_next_regWen(ID_EX_io_next_regWen),
    .io_next_regWaddr(ID_EX_io_next_regWaddr),
    .io_next_csrOp(ID_EX_io_next_csrOp),
    .io_next_csrAddr(ID_EX_io_next_csrAddr),
    .io_next_csren(ID_EX_io_next_csren),
    .io_next_csrrData(ID_EX_io_next_csrrData),
    .io_next_csrwData(ID_EX_io_next_csrwData),
    .io_next_excType(ID_EX_io_next_excType),
    .io_next_excValue(ID_EX_io_next_excValue),
    .io_next_inst(ID_EX_io_next_inst),
    .io_next_currentPc(ID_EX_io_next_currentPc)
  );
  EX EX ( // @[core.scala 42:25]
    .clock(EX_clock),
    .reset(EX_reset),
    .io_id_i_aluOp(EX_io_id_i_aluOp),
    .io_id_i_opr1(EX_io_id_i_opr1),
    .io_id_i_opr2(EX_io_id_i_opr2),
    .io_id_i_mduOp(EX_io_id_i_mduOp),
    .io_id_i_lsuOp(EX_io_id_i_lsuOp),
    .io_id_i_lsuData(EX_io_id_i_lsuData),
    .io_id_i_regWen(EX_io_id_i_regWen),
    .io_id_i_regWaddr(EX_io_id_i_regWaddr),
    .io_id_i_csrOp(EX_io_id_i_csrOp),
    .io_id_i_csrAddr(EX_io_id_i_csrAddr),
    .io_id_i_csren(EX_io_id_i_csren),
    .io_id_i_csrrData(EX_io_id_i_csrrData),
    .io_id_i_csrwData(EX_io_id_i_csrwData),
    .io_id_i_excType(EX_io_id_i_excType),
    .io_id_i_excValue(EX_io_id_i_excValue),
    .io_id_i_inst(EX_io_id_i_inst),
    .io_id_i_currentPc(EX_io_id_i_currentPc),
    .io_flush(EX_io_flush),
    .io_stallReq(EX_io_stallReq),
    .io_ex_o_lsuOp(EX_io_ex_o_lsuOp),
    .io_ex_o_lsuData(EX_io_ex_o_lsuData),
    .io_ex_o_reg_en(EX_io_ex_o_reg_en),
    .io_ex_o_reg_addr(EX_io_ex_o_reg_addr),
    .io_ex_o_reg_data(EX_io_ex_o_reg_data),
    .io_ex_o_load(EX_io_ex_o_load),
    .io_ex_o_csr_op(EX_io_ex_o_csr_op),
    .io_ex_o_csr_addr(EX_io_ex_o_csr_addr),
    .io_ex_o_csr_data(EX_io_ex_o_csr_data),
    .io_ex_o_csr_retired(EX_io_ex_o_csr_retired),
    .io_ex_o_excType(EX_io_ex_o_excType),
    .io_ex_o_excValue(EX_io_ex_o_excValue),
    .io_ex_o_inst(EX_io_ex_o_inst),
    .io_ex_o_currentPc(EX_io_ex_o_currentPc)
  );
  MidStage_2 EX_MEM ( // @[core.scala 43:25]
    .clock(EX_MEM_clock),
    .reset(EX_MEM_reset),
    .io_flush(EX_MEM_io_flush),
    .io_stallPrev(EX_MEM_io_stallPrev),
    .io_stallNext(EX_MEM_io_stallNext),
    .io_prev_lsuOp(EX_MEM_io_prev_lsuOp),
    .io_prev_lsuData(EX_MEM_io_prev_lsuData),
    .io_prev_reg_en(EX_MEM_io_prev_reg_en),
    .io_prev_reg_addr(EX_MEM_io_prev_reg_addr),
    .io_prev_reg_data(EX_MEM_io_prev_reg_data),
    .io_prev_csr_op(EX_MEM_io_prev_csr_op),
    .io_prev_csr_addr(EX_MEM_io_prev_csr_addr),
    .io_prev_csr_data(EX_MEM_io_prev_csr_data),
    .io_prev_csr_retired(EX_MEM_io_prev_csr_retired),
    .io_prev_excType(EX_MEM_io_prev_excType),
    .io_prev_excValue(EX_MEM_io_prev_excValue),
    .io_prev_inst(EX_MEM_io_prev_inst),
    .io_prev_currentPc(EX_MEM_io_prev_currentPc),
    .io_next_lsuOp(EX_MEM_io_next_lsuOp),
    .io_next_lsuData(EX_MEM_io_next_lsuData),
    .io_next_reg_en(EX_MEM_io_next_reg_en),
    .io_next_reg_addr(EX_MEM_io_next_reg_addr),
    .io_next_reg_data(EX_MEM_io_next_reg_data),
    .io_next_csr_op(EX_MEM_io_next_csr_op),
    .io_next_csr_addr(EX_MEM_io_next_csr_addr),
    .io_next_csr_data(EX_MEM_io_next_csr_data),
    .io_next_csr_retired(EX_MEM_io_next_csr_retired),
    .io_next_excType(EX_MEM_io_next_excType),
    .io_next_excValue(EX_MEM_io_next_excValue),
    .io_next_inst(EX_MEM_io_next_inst),
    .io_next_currentPc(EX_MEM_io_next_currentPc)
  );
  MEM MEM ( // @[core.scala 44:25]
    .clock(MEM_clock),
    .reset(MEM_reset),
    .io_ex_i_lsuOp(MEM_io_ex_i_lsuOp),
    .io_ex_i_lsuData(MEM_io_ex_i_lsuData),
    .io_ex_i_reg_en(MEM_io_ex_i_reg_en),
    .io_ex_i_reg_addr(MEM_io_ex_i_reg_addr),
    .io_ex_i_reg_data(MEM_io_ex_i_reg_data),
    .io_ex_i_csr_op(MEM_io_ex_i_csr_op),
    .io_ex_i_csr_addr(MEM_io_ex_i_csr_addr),
    .io_ex_i_csr_data(MEM_io_ex_i_csr_data),
    .io_ex_i_csr_retired(MEM_io_ex_i_csr_retired),
    .io_ex_i_excType(MEM_io_ex_i_excType),
    .io_ex_i_excValue(MEM_io_ex_i_excValue),
    .io_ex_i_inst(MEM_io_ex_i_inst),
    .io_ex_i_currentPc(MEM_io_ex_i_currentPc),
    .io_stallReq(MEM_io_stallReq),
    .io_except_hasTrap(MEM_io_except_hasTrap),
    .io_except_excCause(MEM_io_except_excCause),
    .io_except_excPc(MEM_io_except_excPc),
    .io_except_excValue(MEM_io_except_excValue),
    .io_csrHasInt(MEM_io_csrHasInt),
    .io_csrBusy(MEM_io_csrBusy),
    .io_mem_o_reg_en(MEM_io_mem_o_reg_en),
    .io_mem_o_reg_addr(MEM_io_mem_o_reg_addr),
    .io_mem_o_reg_data(MEM_io_mem_o_reg_data),
    .io_mem_o_csr_op(MEM_io_mem_o_csr_op),
    .io_mem_o_csr_addr(MEM_io_mem_o_csr_addr),
    .io_mem_o_csr_data(MEM_io_mem_o_csr_data),
    .io_mem_o_csr_retired(MEM_io_mem_o_csr_retired),
    .io_mem_o_currentPc(MEM_io_mem_o_currentPc),
    .io_mem_o_inst(MEM_io_mem_o_inst),
    .io_state(MEM_io_state),
    .io_axi_master_awready(MEM_io_axi_master_awready),
    .io_axi_master_awvalid(MEM_io_axi_master_awvalid),
    .io_axi_master_awaddr(MEM_io_axi_master_awaddr),
    .io_axi_master_wready(MEM_io_axi_master_wready),
    .io_axi_master_wvalid(MEM_io_axi_master_wvalid),
    .io_axi_master_wdata(MEM_io_axi_master_wdata),
    .io_axi_master_wstrb(MEM_io_axi_master_wstrb),
    .io_axi_master_bready(MEM_io_axi_master_bready),
    .io_axi_master_bvalid(MEM_io_axi_master_bvalid),
    .io_axi_master_arready(MEM_io_axi_master_arready),
    .io_axi_master_arvalid(MEM_io_axi_master_arvalid),
    .io_axi_master_araddr(MEM_io_axi_master_araddr),
    .io_axi_master_rready(MEM_io_axi_master_rready),
    .io_axi_master_rvalid(MEM_io_axi_master_rvalid),
    .io_axi_master_rdata(MEM_io_axi_master_rdata)
  );
  MidStage_3 MEM_WB ( // @[core.scala 45:25]
    .clock(MEM_WB_clock),
    .reset(MEM_WB_reset),
    .io_flush(MEM_WB_io_flush),
    .io_stallPrev(MEM_WB_io_stallPrev),
    .io_stallNext(MEM_WB_io_stallNext),
    .io_prev_reg_en(MEM_WB_io_prev_reg_en),
    .io_prev_reg_addr(MEM_WB_io_prev_reg_addr),
    .io_prev_reg_data(MEM_WB_io_prev_reg_data),
    .io_prev_csr_op(MEM_WB_io_prev_csr_op),
    .io_prev_csr_addr(MEM_WB_io_prev_csr_addr),
    .io_prev_csr_data(MEM_WB_io_prev_csr_data),
    .io_prev_csr_retired(MEM_WB_io_prev_csr_retired),
    .io_prev_currentPc(MEM_WB_io_prev_currentPc),
    .io_prev_inst(MEM_WB_io_prev_inst),
    .io_next_reg_en(MEM_WB_io_next_reg_en),
    .io_next_reg_addr(MEM_WB_io_next_reg_addr),
    .io_next_reg_data(MEM_WB_io_next_reg_data),
    .io_next_csr_op(MEM_WB_io_next_csr_op),
    .io_next_csr_addr(MEM_WB_io_next_csr_addr),
    .io_next_csr_data(MEM_WB_io_next_csr_data),
    .io_next_csr_retired(MEM_WB_io_next_csr_retired),
    .io_next_currentPc(MEM_WB_io_next_currentPc),
    .io_next_inst(MEM_WB_io_next_inst)
  );
  WB WB ( // @[core.scala 46:25]
    .io_mem_i_reg_en(WB_io_mem_i_reg_en),
    .io_mem_i_reg_addr(WB_io_mem_i_reg_addr),
    .io_mem_i_reg_data(WB_io_mem_i_reg_data),
    .io_mem_i_csr_op(WB_io_mem_i_csr_op),
    .io_mem_i_csr_addr(WB_io_mem_i_csr_addr),
    .io_mem_i_csr_data(WB_io_mem_i_csr_data),
    .io_mem_i_csr_retired(WB_io_mem_i_csr_retired),
    .io_mem_i_currentPc(WB_io_mem_i_currentPc),
    .io_mem_i_inst(WB_io_mem_i_inst),
    .io_regen(WB_io_regen),
    .io_regaddr(WB_io_regaddr),
    .io_regdata(WB_io_regdata),
    .io_csr_op(WB_io_csr_op),
    .io_csr_addr(WB_io_csr_addr),
    .io_csr_data(WB_io_csr_data),
    .io_csr_retired(WB_io_csr_retired),
    .io_wb_pc(WB_io_wb_pc),
    .io_wbinst(WB_io_wbinst)
  );
  DpiBlackBox dpic ( // @[core.scala 47:25]
    .wb_commit(dpic_wb_commit),
    .s_regs_0(dpic_s_regs_0),
    .s_regs_1(dpic_s_regs_1),
    .s_regs_2(dpic_s_regs_2),
    .s_regs_3(dpic_s_regs_3),
    .s_regs_4(dpic_s_regs_4),
    .s_regs_5(dpic_s_regs_5),
    .s_regs_6(dpic_s_regs_6),
    .s_regs_7(dpic_s_regs_7),
    .s_regs_8(dpic_s_regs_8),
    .s_regs_9(dpic_s_regs_9),
    .s_regs_10(dpic_s_regs_10),
    .s_regs_11(dpic_s_regs_11),
    .s_regs_12(dpic_s_regs_12),
    .s_regs_13(dpic_s_regs_13),
    .s_regs_14(dpic_s_regs_14),
    .s_regs_15(dpic_s_regs_15),
    .s_regs_16(dpic_s_regs_16),
    .s_regs_17(dpic_s_regs_17),
    .s_regs_18(dpic_s_regs_18),
    .s_regs_19(dpic_s_regs_19),
    .s_regs_20(dpic_s_regs_20),
    .s_regs_21(dpic_s_regs_21),
    .s_regs_22(dpic_s_regs_22),
    .s_regs_23(dpic_s_regs_23),
    .s_regs_24(dpic_s_regs_24),
    .s_regs_25(dpic_s_regs_25),
    .s_regs_26(dpic_s_regs_26),
    .s_regs_27(dpic_s_regs_27),
    .s_regs_28(dpic_s_regs_28),
    .s_regs_29(dpic_s_regs_29),
    .s_regs_30(dpic_s_regs_30),
    .s_regs_31(dpic_s_regs_31)
  );
  RegFile regfile ( // @[core.scala 48:25]
    .clock(regfile_clock),
    .reset(regfile_reset),
    .io_read1_en(regfile_io_read1_en),
    .io_read1_addr(regfile_io_read1_addr),
    .io_read1_data(regfile_io_read1_data),
    .io_read2_en(regfile_io_read2_en),
    .io_read2_addr(regfile_io_read2_addr),
    .io_read2_data(regfile_io_read2_data),
    .io_en(regfile_io_en),
    .io_addr(regfile_io_addr),
    .io_data(regfile_io_data),
    .io_s_regs_0(regfile_io_s_regs_0),
    .io_s_regs_1(regfile_io_s_regs_1),
    .io_s_regs_2(regfile_io_s_regs_2),
    .io_s_regs_3(regfile_io_s_regs_3),
    .io_s_regs_4(regfile_io_s_regs_4),
    .io_s_regs_5(regfile_io_s_regs_5),
    .io_s_regs_6(regfile_io_s_regs_6),
    .io_s_regs_7(regfile_io_s_regs_7),
    .io_s_regs_8(regfile_io_s_regs_8),
    .io_s_regs_9(regfile_io_s_regs_9),
    .io_s_regs_10(regfile_io_s_regs_10),
    .io_s_regs_11(regfile_io_s_regs_11),
    .io_s_regs_12(regfile_io_s_regs_12),
    .io_s_regs_13(regfile_io_s_regs_13),
    .io_s_regs_14(regfile_io_s_regs_14),
    .io_s_regs_15(regfile_io_s_regs_15),
    .io_s_regs_16(regfile_io_s_regs_16),
    .io_s_regs_17(regfile_io_s_regs_17),
    .io_s_regs_18(regfile_io_s_regs_18),
    .io_s_regs_19(regfile_io_s_regs_19),
    .io_s_regs_20(regfile_io_s_regs_20),
    .io_s_regs_21(regfile_io_s_regs_21),
    .io_s_regs_22(regfile_io_s_regs_22),
    .io_s_regs_23(regfile_io_s_regs_23),
    .io_s_regs_24(regfile_io_s_regs_24),
    .io_s_regs_25(regfile_io_s_regs_25),
    .io_s_regs_26(regfile_io_s_regs_26),
    .io_s_regs_27(regfile_io_s_regs_27),
    .io_s_regs_28(regfile_io_s_regs_28),
    .io_s_regs_29(regfile_io_s_regs_29),
    .io_s_regs_30(regfile_io_s_regs_30),
    .io_s_regs_31(regfile_io_s_regs_31)
  );
  resolver resoler ( // @[core.scala 49:25]
    .io_id_read1_en(resoler_io_id_read1_en),
    .io_id_read1_addr(resoler_io_id_read1_addr),
    .io_id_read1_data(resoler_io_id_read1_data),
    .io_id_read2_en(resoler_io_id_read2_en),
    .io_id_read2_addr(resoler_io_id_read2_addr),
    .io_id_read2_data(resoler_io_id_read2_data),
    .io_csrRead_csr_rdata(resoler_io_csrRead_csr_rdata),
    .io_csrRead_csr_raddr(resoler_io_csrRead_csr_raddr),
    .io_csrRead_csr_op(resoler_io_csrRead_csr_op),
    .io_csrRead_csr_valid(resoler_io_csrRead_csr_valid),
    .io_rs1_en(resoler_io_rs1_en),
    .io_rs1_addr(resoler_io_rs1_addr),
    .io_rs1_data(resoler_io_rs1_data),
    .io_rs2_en(resoler_io_rs2_en),
    .io_rs2_addr(resoler_io_rs2_addr),
    .io_rs2_data(resoler_io_rs2_data),
    .io_csr_csr_rdata(resoler_io_csr_csr_rdata),
    .io_csr_csr_raddr(resoler_io_csr_csr_raddr),
    .io_csr_csr_op(resoler_io_csr_csr_op),
    .io_csr_csr_valid(resoler_io_csr_csr_valid),
    .io_load(resoler_io_load),
    .io_ex_reg_en(resoler_io_ex_reg_en),
    .io_ex_reg_addr(resoler_io_ex_reg_addr),
    .io_ex_reg_data(resoler_io_ex_reg_data),
    .io_ex_csr_op(resoler_io_ex_csr_op),
    .io_ex_csr_addr(resoler_io_ex_csr_addr),
    .io_mem_reg_en(resoler_io_mem_reg_en),
    .io_mem_reg_addr(resoler_io_mem_reg_addr),
    .io_mem_reg_data(resoler_io_mem_reg_data),
    .io_mem_csr_op(resoler_io_mem_csr_op),
    .io_mem_csr_addr(resoler_io_mem_csr_addr),
    .io_wb_reg_en(resoler_io_wb_reg_en),
    .io_wb_reg_addr(resoler_io_wb_reg_addr),
    .io_wb_reg_data(resoler_io_wb_reg_data),
    .io_wb_csr_op(resoler_io_wb_csr_op),
    .io_wb_csr_addr(resoler_io_wb_csr_addr),
    .io_loadflag(resoler_io_loadflag),
    .io_csrflag(resoler_io_csrflag)
  );
  crtl ctrl ( // @[core.scala 50:25]
    .io_id_flush(ctrl_io_id_flush),
    .io_id_flushpc(ctrl_io_id_flushpc),
    .io_ex_stall(ctrl_io_ex_stall),
    .io_mem_stall(ctrl_io_mem_stall),
    .io_loadflag(ctrl_io_loadflag),
    .io_csrflag(ctrl_io_csrflag),
    .io_except_hasTrap(ctrl_io_except_hasTrap),
    .io_csrTvec(ctrl_io_csrTvec),
    .io_stallIf(ctrl_io_stallIf),
    .io_stallId(ctrl_io_stallId),
    .io_stallEx(ctrl_io_stallEx),
    .io_stallMm(ctrl_io_stallMm),
    .io_stallWb(ctrl_io_stallWb),
    .io_flush(ctrl_io_flush),
    .io_flushIf(ctrl_io_flushIf),
    .io_flushPc(ctrl_io_flushPc)
  );
  csr csr ( // @[core.scala 51:25]
    .clock(csr_clock),
    .reset(csr_reset),
    .io_read_csr_rdata(csr_io_read_csr_rdata),
    .io_read_csr_raddr(csr_io_read_csr_raddr),
    .io_read_csr_op(csr_io_read_csr_op),
    .io_read_csr_valid(csr_io_read_csr_valid),
    .io_write_op(csr_io_write_op),
    .io_write_addr(csr_io_write_addr),
    .io_write_data(csr_io_write_data),
    .io_write_retired(csr_io_write_retired),
    .io_except_hasTrap(csr_io_except_hasTrap),
    .io_except_excCause(csr_io_except_excCause),
    .io_except_excPc(csr_io_except_excPc),
    .io_except_excValue(csr_io_except_excValue),
    .io_timer(csr_io_timer),
    .io_soft(csr_io_soft),
    .io_extern(csr_io_extern),
    .io_hasInt(csr_io_hasInt),
    .io_busy(csr_io_busy),
    .io_trapVec(csr_io_trapVec)
  );
  AxiLiteArbiter arbiter ( // @[core.scala 52:25]
    .io_ifaxi_master_arready(arbiter_io_ifaxi_master_arready),
    .io_ifaxi_master_arvalid(arbiter_io_ifaxi_master_arvalid),
    .io_ifaxi_master_araddr(arbiter_io_ifaxi_master_araddr),
    .io_ifaxi_master_rready(arbiter_io_ifaxi_master_rready),
    .io_ifaxi_master_rvalid(arbiter_io_ifaxi_master_rvalid),
    .io_ifaxi_master_rdata(arbiter_io_ifaxi_master_rdata),
    .io_lsaxi_master_awready(arbiter_io_lsaxi_master_awready),
    .io_lsaxi_master_awvalid(arbiter_io_lsaxi_master_awvalid),
    .io_lsaxi_master_awaddr(arbiter_io_lsaxi_master_awaddr),
    .io_lsaxi_master_wready(arbiter_io_lsaxi_master_wready),
    .io_lsaxi_master_wvalid(arbiter_io_lsaxi_master_wvalid),
    .io_lsaxi_master_wdata(arbiter_io_lsaxi_master_wdata),
    .io_lsaxi_master_wstrb(arbiter_io_lsaxi_master_wstrb),
    .io_lsaxi_master_bready(arbiter_io_lsaxi_master_bready),
    .io_lsaxi_master_bvalid(arbiter_io_lsaxi_master_bvalid),
    .io_lsaxi_master_arready(arbiter_io_lsaxi_master_arready),
    .io_lsaxi_master_arvalid(arbiter_io_lsaxi_master_arvalid),
    .io_lsaxi_master_araddr(arbiter_io_lsaxi_master_araddr),
    .io_lsaxi_master_rready(arbiter_io_lsaxi_master_rready),
    .io_lsaxi_master_rvalid(arbiter_io_lsaxi_master_rvalid),
    .io_lsaxi_master_rdata(arbiter_io_lsaxi_master_rdata),
    .io_selectedMaster_master_awready(arbiter_io_selectedMaster_master_awready),
    .io_selectedMaster_master_awvalid(arbiter_io_selectedMaster_master_awvalid),
    .io_selectedMaster_master_awaddr(arbiter_io_selectedMaster_master_awaddr),
    .io_selectedMaster_master_wready(arbiter_io_selectedMaster_master_wready),
    .io_selectedMaster_master_wvalid(arbiter_io_selectedMaster_master_wvalid),
    .io_selectedMaster_master_wdata(arbiter_io_selectedMaster_master_wdata),
    .io_selectedMaster_master_wstrb(arbiter_io_selectedMaster_master_wstrb),
    .io_selectedMaster_master_bready(arbiter_io_selectedMaster_master_bready),
    .io_selectedMaster_master_bvalid(arbiter_io_selectedMaster_master_bvalid),
    .io_selectedMaster_master_arready(arbiter_io_selectedMaster_master_arready),
    .io_selectedMaster_master_arvalid(arbiter_io_selectedMaster_master_arvalid),
    .io_selectedMaster_master_araddr(arbiter_io_selectedMaster_master_araddr),
    .io_selectedMaster_master_rready(arbiter_io_selectedMaster_master_rready),
    .io_selectedMaster_master_rvalid(arbiter_io_selectedMaster_master_rvalid),
    .io_selectedMaster_master_rdata(arbiter_io_selectedMaster_master_rdata)
  );
  assign io_axi_master_awvalid = arbiter_io_selectedMaster_master_awvalid; // @[core.scala 129:28]
  assign io_axi_master_awaddr = arbiter_io_selectedMaster_master_awaddr; // @[core.scala 129:28]
  assign io_axi_master_wvalid = arbiter_io_selectedMaster_master_wvalid; // @[core.scala 129:28]
  assign io_axi_master_wdata = arbiter_io_selectedMaster_master_wdata; // @[core.scala 129:28]
  assign io_axi_master_wstrb = arbiter_io_selectedMaster_master_wstrb; // @[core.scala 129:28]
  assign io_axi_master_bready = arbiter_io_selectedMaster_master_bready; // @[core.scala 129:28]
  assign io_axi_master_arvalid = arbiter_io_selectedMaster_master_arvalid; // @[core.scala 129:28]
  assign io_axi_master_araddr = arbiter_io_selectedMaster_master_araddr; // @[core.scala 129:28]
  assign io_axi_master_rready = arbiter_io_selectedMaster_master_rready; // @[core.scala 129:28]
  assign io_inst = fetch_io_IF_inst; // @[core.scala 173:11]
  assign io_pc = WB_io_wb_pc; // @[core.scala 174:9]
  assign io_npc = fetch_io_IF_pc; // @[core.scala 175:10]
  assign io_flushpc = ctrl_io_flushPc; // @[core.scala 178:14]
  assign io_flush = ctrl_io_flushIf; // @[core.scala 176:12]
  assign io_stall = ctrl_io_stallIf; // @[core.scala 177:12]
  assign io_wbinst = WB_io_wbinst; // @[core.scala 187:13]
  assign io_bputake = fetch_io_bputake; // @[core.scala 179:14]
  assign io_bpuaddr = fetch_io_bpuaddr; // @[core.scala 180:14]
  assign io_idpc = ID_io_if_i_pc; // @[core.scala 181:11]
  assign io_idinst = ID_io_if_i_inst; // @[core.scala 182:13]
  assign io_expc = EX_io_id_i_currentPc; // @[core.scala 183:11]
  assign io_exinst = EX_io_id_i_inst; // @[core.scala 184:13]
  assign io_mempc = MEM_io_ex_i_currentPc; // @[core.scala 185:12]
  assign io_meminst = MEM_io_ex_i_inst; // @[core.scala 186:14]
  assign io_result = MEM_io_ex_i_reg_data; // @[core.scala 188:13]
  assign io_state = MEM_io_state; // @[core.scala 172:11]
  assign fetch_clock = clock;
  assign fetch_reset = reset;
  assign fetch_io_axi_master_arready = arbiter_io_ifaxi_master_arready; // @[core.scala 54:30]
  assign fetch_io_axi_master_rvalid = arbiter_io_ifaxi_master_rvalid; // @[core.scala 54:30]
  assign fetch_io_axi_master_rdata = arbiter_io_ifaxi_master_rdata; // @[core.scala 54:30]
  assign fetch_io_flush = ctrl_io_flushIf; // @[core.scala 55:23]
  assign fetch_io_flush_pc = ctrl_io_flushPc; // @[core.scala 57:23]
  assign fetch_io_stall = ctrl_io_stallIf; // @[core.scala 56:23]
  assign IF_ID_clock = clock;
  assign IF_ID_reset = reset;
  assign IF_ID_io_flush = ctrl_io_flushIf; // @[core.scala 59:23]
  assign IF_ID_io_stallPrev = ctrl_io_stallIf; // @[core.scala 60:23]
  assign IF_ID_io_stallNext = ctrl_io_stallId; // @[core.scala 61:23]
  assign IF_ID_io_prev_pc = fetch_io_IF_pc; // @[core.scala 58:23]
  assign IF_ID_io_prev_valid = fetch_io_IF_valid; // @[core.scala 58:23]
  assign IF_ID_io_prev_inst = fetch_io_IF_inst; // @[core.scala 58:23]
  assign IF_ID_io_prev_bpu_take = fetch_io_IF_bpu_take; // @[core.scala 58:23]
  assign IF_ID_io_prev_bpu_takepc = fetch_io_IF_bpu_takepc; // @[core.scala 58:23]
  assign IF_ID_io_prev_misaligned = fetch_io_IF_misaligned; // @[core.scala 58:23]
  assign ID_io_if_i_pc = IF_ID_io_next_pc; // @[core.scala 63:23]
  assign ID_io_if_i_valid = IF_ID_io_next_valid; // @[core.scala 63:23]
  assign ID_io_if_i_inst = IF_ID_io_next_inst; // @[core.scala 63:23]
  assign ID_io_if_i_bpu_take = IF_ID_io_next_bpu_take; // @[core.scala 63:23]
  assign ID_io_if_i_bpu_takepc = IF_ID_io_next_bpu_takepc; // @[core.scala 63:23]
  assign ID_io_if_i_misaligned = IF_ID_io_next_misaligned; // @[core.scala 63:23]
  assign ID_io_read1_data = resoler_io_id_read1_data; // @[core.scala 64:23]
  assign ID_io_read2_data = resoler_io_id_read2_data; // @[core.scala 65:23]
  assign ID_io_stallid = ctrl_io_stallId; // @[core.scala 66:23]
  assign ID_io_csrread_csr_rdata = resoler_io_csrRead_csr_rdata; // @[core.scala 106:27]
  assign ID_io_csrread_csr_valid = resoler_io_csrRead_csr_valid; // @[core.scala 106:27]
  assign ID_EX_clock = clock;
  assign ID_EX_reset = reset;
  assign ID_EX_io_flush = ctrl_io_flush; // @[core.scala 68:23]
  assign ID_EX_io_stallPrev = ctrl_io_stallId; // @[core.scala 69:23]
  assign ID_EX_io_stallNext = ctrl_io_stallEx; // @[core.scala 70:23]
  assign ID_EX_io_prev_aluOp = ID_io_id_o_aluOp; // @[core.scala 67:23]
  assign ID_EX_io_prev_opr1 = ID_io_id_o_opr1; // @[core.scala 67:23]
  assign ID_EX_io_prev_opr2 = ID_io_id_o_opr2; // @[core.scala 67:23]
  assign ID_EX_io_prev_mduOp = ID_io_id_o_mduOp; // @[core.scala 67:23]
  assign ID_EX_io_prev_lsuOp = ID_io_id_o_lsuOp; // @[core.scala 67:23]
  assign ID_EX_io_prev_lsuData = ID_io_id_o_lsuData; // @[core.scala 67:23]
  assign ID_EX_io_prev_regWen = ID_io_id_o_regWen; // @[core.scala 67:23]
  assign ID_EX_io_prev_regWaddr = ID_io_id_o_regWaddr; // @[core.scala 67:23]
  assign ID_EX_io_prev_csrOp = ID_io_id_o_csrOp; // @[core.scala 67:23]
  assign ID_EX_io_prev_csrAddr = ID_io_id_o_csrAddr; // @[core.scala 67:23]
  assign ID_EX_io_prev_csren = ID_io_id_o_csren; // @[core.scala 67:23]
  assign ID_EX_io_prev_csrrData = ID_io_id_o_csrrData; // @[core.scala 67:23]
  assign ID_EX_io_prev_csrwData = ID_io_id_o_csrwData; // @[core.scala 67:23]
  assign ID_EX_io_prev_excType = ID_io_id_o_excType; // @[core.scala 67:23]
  assign ID_EX_io_prev_excValue = ID_io_id_o_excValue; // @[core.scala 67:23]
  assign ID_EX_io_prev_inst = ID_io_id_o_inst; // @[core.scala 67:23]
  assign ID_EX_io_prev_currentPc = ID_io_id_o_currentPc; // @[core.scala 67:23]
  assign EX_clock = clock;
  assign EX_reset = reset;
  assign EX_io_id_i_aluOp = ID_EX_io_next_aluOp; // @[core.scala 72:23]
  assign EX_io_id_i_opr1 = ID_EX_io_next_opr1; // @[core.scala 72:23]
  assign EX_io_id_i_opr2 = ID_EX_io_next_opr2; // @[core.scala 72:23]
  assign EX_io_id_i_mduOp = ID_EX_io_next_mduOp; // @[core.scala 72:23]
  assign EX_io_id_i_lsuOp = ID_EX_io_next_lsuOp; // @[core.scala 72:23]
  assign EX_io_id_i_lsuData = ID_EX_io_next_lsuData; // @[core.scala 72:23]
  assign EX_io_id_i_regWen = ID_EX_io_next_regWen; // @[core.scala 72:23]
  assign EX_io_id_i_regWaddr = ID_EX_io_next_regWaddr; // @[core.scala 72:23]
  assign EX_io_id_i_csrOp = ID_EX_io_next_csrOp; // @[core.scala 72:23]
  assign EX_io_id_i_csrAddr = ID_EX_io_next_csrAddr; // @[core.scala 72:23]
  assign EX_io_id_i_csren = ID_EX_io_next_csren; // @[core.scala 72:23]
  assign EX_io_id_i_csrrData = ID_EX_io_next_csrrData; // @[core.scala 72:23]
  assign EX_io_id_i_csrwData = ID_EX_io_next_csrwData; // @[core.scala 72:23]
  assign EX_io_id_i_excType = ID_EX_io_next_excType; // @[core.scala 72:23]
  assign EX_io_id_i_excValue = ID_EX_io_next_excValue; // @[core.scala 72:23]
  assign EX_io_id_i_inst = ID_EX_io_next_inst; // @[core.scala 72:23]
  assign EX_io_id_i_currentPc = ID_EX_io_next_currentPc; // @[core.scala 72:23]
  assign EX_io_flush = ctrl_io_flush; // @[core.scala 73:23]
  assign EX_MEM_clock = clock;
  assign EX_MEM_reset = reset;
  assign EX_MEM_io_flush = ctrl_io_flush; // @[core.scala 75:23]
  assign EX_MEM_io_stallPrev = ctrl_io_stallEx; // @[core.scala 76:23]
  assign EX_MEM_io_stallNext = ctrl_io_stallMm; // @[core.scala 77:23]
  assign EX_MEM_io_prev_lsuOp = EX_io_ex_o_lsuOp; // @[core.scala 74:23]
  assign EX_MEM_io_prev_lsuData = EX_io_ex_o_lsuData; // @[core.scala 74:23]
  assign EX_MEM_io_prev_reg_en = EX_io_ex_o_reg_en; // @[core.scala 74:23]
  assign EX_MEM_io_prev_reg_addr = EX_io_ex_o_reg_addr; // @[core.scala 74:23]
  assign EX_MEM_io_prev_reg_data = EX_io_ex_o_reg_data; // @[core.scala 74:23]
  assign EX_MEM_io_prev_csr_op = EX_io_ex_o_csr_op; // @[core.scala 74:23]
  assign EX_MEM_io_prev_csr_addr = EX_io_ex_o_csr_addr; // @[core.scala 74:23]
  assign EX_MEM_io_prev_csr_data = EX_io_ex_o_csr_data; // @[core.scala 74:23]
  assign EX_MEM_io_prev_csr_retired = EX_io_ex_o_csr_retired; // @[core.scala 74:23]
  assign EX_MEM_io_prev_excType = EX_io_ex_o_excType; // @[core.scala 74:23]
  assign EX_MEM_io_prev_excValue = EX_io_ex_o_excValue; // @[core.scala 74:23]
  assign EX_MEM_io_prev_inst = EX_io_ex_o_inst; // @[core.scala 74:23]
  assign EX_MEM_io_prev_currentPc = EX_io_ex_o_currentPc; // @[core.scala 74:23]
  assign MEM_clock = clock;
  assign MEM_reset = reset;
  assign MEM_io_ex_i_lsuOp = EX_MEM_io_next_lsuOp; // @[core.scala 80:23]
  assign MEM_io_ex_i_lsuData = EX_MEM_io_next_lsuData; // @[core.scala 80:23]
  assign MEM_io_ex_i_reg_en = EX_MEM_io_next_reg_en; // @[core.scala 80:23]
  assign MEM_io_ex_i_reg_addr = EX_MEM_io_next_reg_addr; // @[core.scala 80:23]
  assign MEM_io_ex_i_reg_data = EX_MEM_io_next_reg_data; // @[core.scala 80:23]
  assign MEM_io_ex_i_csr_op = EX_MEM_io_next_csr_op; // @[core.scala 80:23]
  assign MEM_io_ex_i_csr_addr = EX_MEM_io_next_csr_addr; // @[core.scala 80:23]
  assign MEM_io_ex_i_csr_data = EX_MEM_io_next_csr_data; // @[core.scala 80:23]
  assign MEM_io_ex_i_csr_retired = EX_MEM_io_next_csr_retired; // @[core.scala 80:23]
  assign MEM_io_ex_i_excType = EX_MEM_io_next_excType; // @[core.scala 80:23]
  assign MEM_io_ex_i_excValue = EX_MEM_io_next_excValue; // @[core.scala 80:23]
  assign MEM_io_ex_i_inst = EX_MEM_io_next_inst; // @[core.scala 80:23]
  assign MEM_io_ex_i_currentPc = EX_MEM_io_next_currentPc; // @[core.scala 80:23]
  assign MEM_io_csrHasInt = csr_io_hasInt; // @[core.scala 82:23]
  assign MEM_io_csrBusy = csr_io_busy; // @[core.scala 81:23]
  assign MEM_io_axi_master_awready = arbiter_io_lsaxi_master_awready; // @[core.scala 79:29]
  assign MEM_io_axi_master_wready = arbiter_io_lsaxi_master_wready; // @[core.scala 79:29]
  assign MEM_io_axi_master_bvalid = arbiter_io_lsaxi_master_bvalid; // @[core.scala 79:29]
  assign MEM_io_axi_master_arready = arbiter_io_lsaxi_master_arready; // @[core.scala 79:29]
  assign MEM_io_axi_master_rvalid = arbiter_io_lsaxi_master_rvalid; // @[core.scala 79:29]
  assign MEM_io_axi_master_rdata = arbiter_io_lsaxi_master_rdata; // @[core.scala 79:29]
  assign MEM_WB_clock = clock;
  assign MEM_WB_reset = reset;
  assign MEM_WB_io_flush = ctrl_io_flush; // @[core.scala 85:23]
  assign MEM_WB_io_stallPrev = ctrl_io_stallMm; // @[core.scala 86:23]
  assign MEM_WB_io_stallNext = ctrl_io_stallWb; // @[core.scala 87:23]
  assign MEM_WB_io_prev_reg_en = MEM_io_mem_o_reg_en; // @[core.scala 84:23]
  assign MEM_WB_io_prev_reg_addr = MEM_io_mem_o_reg_addr; // @[core.scala 84:23]
  assign MEM_WB_io_prev_reg_data = MEM_io_mem_o_reg_data; // @[core.scala 84:23]
  assign MEM_WB_io_prev_csr_op = MEM_io_mem_o_csr_op; // @[core.scala 84:23]
  assign MEM_WB_io_prev_csr_addr = MEM_io_mem_o_csr_addr; // @[core.scala 84:23]
  assign MEM_WB_io_prev_csr_data = MEM_io_mem_o_csr_data; // @[core.scala 84:23]
  assign MEM_WB_io_prev_csr_retired = MEM_io_mem_o_csr_retired; // @[core.scala 84:23]
  assign MEM_WB_io_prev_currentPc = MEM_io_mem_o_currentPc; // @[core.scala 84:23]
  assign MEM_WB_io_prev_inst = MEM_io_mem_o_inst; // @[core.scala 84:23]
  assign WB_io_mem_i_reg_en = MEM_WB_io_next_reg_en; // @[core.scala 89:23]
  assign WB_io_mem_i_reg_addr = MEM_WB_io_next_reg_addr; // @[core.scala 89:23]
  assign WB_io_mem_i_reg_data = MEM_WB_io_next_reg_data; // @[core.scala 89:23]
  assign WB_io_mem_i_csr_op = MEM_WB_io_next_csr_op; // @[core.scala 89:23]
  assign WB_io_mem_i_csr_addr = MEM_WB_io_next_csr_addr; // @[core.scala 89:23]
  assign WB_io_mem_i_csr_data = MEM_WB_io_next_csr_data; // @[core.scala 89:23]
  assign WB_io_mem_i_csr_retired = MEM_WB_io_next_csr_retired; // @[core.scala 89:23]
  assign WB_io_mem_i_currentPc = MEM_WB_io_next_currentPc; // @[core.scala 89:23]
  assign WB_io_mem_i_inst = MEM_WB_io_next_inst; // @[core.scala 89:23]
  assign dpic_wb_commit = 1'h0;
  assign dpic_s_regs_0 = regfile_io_s_regs_0; // @[core.scala 127:25]
  assign dpic_s_regs_1 = regfile_io_s_regs_1; // @[core.scala 127:25]
  assign dpic_s_regs_2 = regfile_io_s_regs_2; // @[core.scala 127:25]
  assign dpic_s_regs_3 = regfile_io_s_regs_3; // @[core.scala 127:25]
  assign dpic_s_regs_4 = regfile_io_s_regs_4; // @[core.scala 127:25]
  assign dpic_s_regs_5 = regfile_io_s_regs_5; // @[core.scala 127:25]
  assign dpic_s_regs_6 = regfile_io_s_regs_6; // @[core.scala 127:25]
  assign dpic_s_regs_7 = regfile_io_s_regs_7; // @[core.scala 127:25]
  assign dpic_s_regs_8 = regfile_io_s_regs_8; // @[core.scala 127:25]
  assign dpic_s_regs_9 = regfile_io_s_regs_9; // @[core.scala 127:25]
  assign dpic_s_regs_10 = regfile_io_s_regs_10; // @[core.scala 127:25]
  assign dpic_s_regs_11 = regfile_io_s_regs_11; // @[core.scala 127:25]
  assign dpic_s_regs_12 = regfile_io_s_regs_12; // @[core.scala 127:25]
  assign dpic_s_regs_13 = regfile_io_s_regs_13; // @[core.scala 127:25]
  assign dpic_s_regs_14 = regfile_io_s_regs_14; // @[core.scala 127:25]
  assign dpic_s_regs_15 = regfile_io_s_regs_15; // @[core.scala 127:25]
  assign dpic_s_regs_16 = regfile_io_s_regs_16; // @[core.scala 127:25]
  assign dpic_s_regs_17 = regfile_io_s_regs_17; // @[core.scala 127:25]
  assign dpic_s_regs_18 = regfile_io_s_regs_18; // @[core.scala 127:25]
  assign dpic_s_regs_19 = regfile_io_s_regs_19; // @[core.scala 127:25]
  assign dpic_s_regs_20 = regfile_io_s_regs_20; // @[core.scala 127:25]
  assign dpic_s_regs_21 = regfile_io_s_regs_21; // @[core.scala 127:25]
  assign dpic_s_regs_22 = regfile_io_s_regs_22; // @[core.scala 127:25]
  assign dpic_s_regs_23 = regfile_io_s_regs_23; // @[core.scala 127:25]
  assign dpic_s_regs_24 = regfile_io_s_regs_24; // @[core.scala 127:25]
  assign dpic_s_regs_25 = regfile_io_s_regs_25; // @[core.scala 127:25]
  assign dpic_s_regs_26 = regfile_io_s_regs_26; // @[core.scala 127:25]
  assign dpic_s_regs_27 = regfile_io_s_regs_27; // @[core.scala 127:25]
  assign dpic_s_regs_28 = regfile_io_s_regs_28; // @[core.scala 127:25]
  assign dpic_s_regs_29 = regfile_io_s_regs_29; // @[core.scala 127:25]
  assign dpic_s_regs_30 = regfile_io_s_regs_30; // @[core.scala 127:25]
  assign dpic_s_regs_31 = regfile_io_s_regs_31; // @[core.scala 127:25]
  assign regfile_clock = clock;
  assign regfile_reset = reset;
  assign regfile_io_read1_en = resoler_io_rs1_en; // @[core.scala 91:23]
  assign regfile_io_read1_addr = resoler_io_rs1_addr; // @[core.scala 91:23]
  assign regfile_io_read2_en = resoler_io_rs2_en; // @[core.scala 92:23]
  assign regfile_io_read2_addr = resoler_io_rs2_addr; // @[core.scala 92:23]
  assign regfile_io_en = WB_io_regen; // @[core.scala 93:23]
  assign regfile_io_addr = WB_io_regaddr; // @[core.scala 94:23]
  assign regfile_io_data = WB_io_regdata; // @[core.scala 95:23]
  assign resoler_io_id_read1_en = ID_io_read1_en; // @[core.scala 64:23]
  assign resoler_io_id_read1_addr = ID_io_read1_addr; // @[core.scala 64:23]
  assign resoler_io_id_read2_en = ID_io_read2_en; // @[core.scala 65:23]
  assign resoler_io_id_read2_addr = ID_io_read2_addr; // @[core.scala 65:23]
  assign resoler_io_csrRead_csr_raddr = ID_io_csrread_csr_raddr; // @[core.scala 106:27]
  assign resoler_io_csrRead_csr_op = ID_io_csrread_csr_op; // @[core.scala 106:27]
  assign resoler_io_rs1_data = regfile_io_read1_data; // @[core.scala 91:23]
  assign resoler_io_rs2_data = regfile_io_read2_data; // @[core.scala 92:23]
  assign resoler_io_csr_csr_rdata = csr_io_read_csr_rdata; // @[core.scala 125:25]
  assign resoler_io_csr_csr_valid = csr_io_read_csr_valid; // @[core.scala 125:25]
  assign resoler_io_load = EX_io_ex_o_load; // @[core.scala 97:27]
  assign resoler_io_ex_reg_en = EX_io_ex_o_reg_en; // @[core.scala 98:27]
  assign resoler_io_ex_reg_addr = EX_io_ex_o_reg_addr; // @[core.scala 98:27]
  assign resoler_io_ex_reg_data = EX_io_ex_o_reg_data; // @[core.scala 98:27]
  assign resoler_io_ex_csr_op = EX_io_ex_o_csr_op; // @[core.scala 103:27]
  assign resoler_io_ex_csr_addr = EX_io_ex_o_csr_addr; // @[core.scala 103:27]
  assign resoler_io_mem_reg_en = MEM_io_mem_o_reg_en; // @[core.scala 99:27]
  assign resoler_io_mem_reg_addr = MEM_io_mem_o_reg_addr; // @[core.scala 99:27]
  assign resoler_io_mem_reg_data = MEM_io_mem_o_reg_data; // @[core.scala 99:27]
  assign resoler_io_mem_csr_op = MEM_io_mem_o_csr_op; // @[core.scala 104:27]
  assign resoler_io_mem_csr_addr = MEM_io_mem_o_csr_addr; // @[core.scala 104:27]
  assign resoler_io_wb_reg_en = WB_io_regen; // @[core.scala 100:27]
  assign resoler_io_wb_reg_addr = WB_io_regaddr; // @[core.scala 102:27]
  assign resoler_io_wb_reg_data = WB_io_regdata; // @[core.scala 101:27]
  assign resoler_io_wb_csr_op = WB_io_csr_op; // @[core.scala 105:27]
  assign resoler_io_wb_csr_addr = WB_io_csr_addr; // @[core.scala 105:27]
  assign ctrl_io_id_flush = ID_io_flush; // @[core.scala 112:25]
  assign ctrl_io_id_flushpc = ID_io_flushpc; // @[core.scala 113:25]
  assign ctrl_io_ex_stall = EX_io_stallReq; // @[core.scala 109:25]
  assign ctrl_io_mem_stall = MEM_io_stallReq; // @[core.scala 110:25]
  assign ctrl_io_loadflag = resoler_io_loadflag; // @[core.scala 114:25]
  assign ctrl_io_csrflag = resoler_io_csrflag; // @[core.scala 115:25]
  assign ctrl_io_except_hasTrap = MEM_io_except_hasTrap; // @[core.scala 111:25]
  assign ctrl_io_csrTvec = csr_io_trapVec; // @[core.scala 118:25]
  assign csr_clock = clock;
  assign csr_reset = reset;
  assign csr_io_read_csr_raddr = resoler_io_csr_csr_raddr; // @[core.scala 125:25]
  assign csr_io_read_csr_op = resoler_io_csr_csr_op; // @[core.scala 125:25]
  assign csr_io_write_op = WB_io_csr_op; // @[core.scala 120:25]
  assign csr_io_write_addr = WB_io_csr_addr; // @[core.scala 120:25]
  assign csr_io_write_data = WB_io_csr_data; // @[core.scala 120:25]
  assign csr_io_write_retired = WB_io_csr_retired; // @[core.scala 120:25]
  assign csr_io_except_hasTrap = MEM_io_except_hasTrap; // @[core.scala 121:25]
  assign csr_io_except_excCause = MEM_io_except_excCause; // @[core.scala 121:25]
  assign csr_io_except_excPc = MEM_io_except_excPc; // @[core.scala 121:25]
  assign csr_io_except_excValue = MEM_io_except_excValue; // @[core.scala 121:25]
  assign csr_io_timer = io_timer; // @[core.scala 122:25]
  assign csr_io_soft = io_soft; // @[core.scala 123:25]
  assign csr_io_extern = io_extern; // @[core.scala 124:25]
  assign arbiter_io_ifaxi_master_arvalid = fetch_io_axi_master_arvalid; // @[core.scala 54:30]
  assign arbiter_io_ifaxi_master_araddr = fetch_io_axi_master_araddr; // @[core.scala 54:30]
  assign arbiter_io_ifaxi_master_rready = fetch_io_axi_master_rready; // @[core.scala 54:30]
  assign arbiter_io_lsaxi_master_awvalid = MEM_io_axi_master_awvalid; // @[core.scala 79:29]
  assign arbiter_io_lsaxi_master_awaddr = MEM_io_axi_master_awaddr; // @[core.scala 79:29]
  assign arbiter_io_lsaxi_master_wvalid = MEM_io_axi_master_wvalid; // @[core.scala 79:29]
  assign arbiter_io_lsaxi_master_wdata = MEM_io_axi_master_wdata; // @[core.scala 79:29]
  assign arbiter_io_lsaxi_master_wstrb = MEM_io_axi_master_wstrb; // @[core.scala 79:29]
  assign arbiter_io_lsaxi_master_bready = MEM_io_axi_master_bready; // @[core.scala 79:29]
  assign arbiter_io_lsaxi_master_arvalid = MEM_io_axi_master_arvalid; // @[core.scala 79:29]
  assign arbiter_io_lsaxi_master_araddr = MEM_io_axi_master_araddr; // @[core.scala 79:29]
  assign arbiter_io_lsaxi_master_rready = MEM_io_axi_master_rready; // @[core.scala 79:29]
  assign arbiter_io_selectedMaster_master_awready = io_axi_master_awready; // @[core.scala 129:28]
  assign arbiter_io_selectedMaster_master_wready = io_axi_master_wready; // @[core.scala 129:28]
  assign arbiter_io_selectedMaster_master_bvalid = io_axi_master_bvalid; // @[core.scala 129:28]
  assign arbiter_io_selectedMaster_master_arready = io_axi_master_arready; // @[core.scala 129:28]
  assign arbiter_io_selectedMaster_master_rvalid = io_axi_master_rvalid; // @[core.scala 129:28]
  assign arbiter_io_selectedMaster_master_rdata = io_axi_master_rdata; // @[core.scala 129:28]
endmodule
module AxiLiteArbiterSelector(
  output        io_selectedMaster_master_awready,
  input         io_selectedMaster_master_awvalid,
  input  [31:0] io_selectedMaster_master_awaddr,
  output        io_selectedMaster_master_wready,
  input         io_selectedMaster_master_wvalid,
  input  [31:0] io_selectedMaster_master_wdata,
  input  [3:0]  io_selectedMaster_master_wstrb,
  input         io_selectedMaster_master_bready,
  output        io_selectedMaster_master_bvalid,
  output        io_selectedMaster_master_arready,
  input         io_selectedMaster_master_arvalid,
  input  [31:0] io_selectedMaster_master_araddr,
  input         io_selectedMaster_master_rready,
  output        io_selectedMaster_master_rvalid,
  output [31:0] io_selectedMaster_master_rdata,
  output        io_slaves_0_slave_arvalid,
  output [31:0] io_slaves_0_slave_araddr,
  output        io_slaves_0_slave_rready,
  input         io_slaves_0_slave_rvalid,
  input  [31:0] io_slaves_0_slave_rdata,
  input         io_slaves_1_slave_awready,
  output        io_slaves_1_slave_awvalid,
  output [31:0] io_slaves_1_slave_awaddr,
  input         io_slaves_1_slave_wready,
  output        io_slaves_1_slave_wvalid,
  output [31:0] io_slaves_1_slave_wdata,
  output [3:0]  io_slaves_1_slave_wstrb,
  output        io_slaves_1_slave_bready,
  input         io_slaves_1_slave_bvalid,
  input         io_slaves_1_slave_arready,
  output        io_slaves_1_slave_arvalid,
  output [31:0] io_slaves_1_slave_araddr,
  output        io_slaves_1_slave_rready,
  input         io_slaves_1_slave_rvalid,
  input  [31:0] io_slaves_1_slave_rdata
);
  wire  _T = io_selectedMaster_master_araddr >= 32'h80000000; // @[xbar.scala 17:13]
  wire  _T_1 = io_selectedMaster_master_araddr < 32'h800ff000; // @[xbar.scala 17:38]
  wire  _T_2 = _T & _T_1; // @[xbar.scala 17:30]
  wire  _T_3 = io_selectedMaster_master_araddr >= 32'h800ff000; // @[xbar.scala 18:13]
  wire  _T_4 = io_selectedMaster_master_araddr < 32'h8fffffff; // @[xbar.scala 18:38]
  wire  _T_5 = _T_3 & _T_4; // @[xbar.scala 18:30]
  wire [1:0] _T_6 = _T_5 ? 2'h1 : 2'h2; // @[Mux.scala 87:16]
  wire [1:0] selectedReadSlave = _T_2 ? 2'h0 : _T_6; // @[Mux.scala 87:16]
  wire  _T_7 = io_selectedMaster_master_awaddr >= 32'h80000000; // @[xbar.scala 17:13]
  wire  _T_8 = io_selectedMaster_master_awaddr < 32'h800ff000; // @[xbar.scala 17:38]
  wire  _T_9 = _T_7 & _T_8; // @[xbar.scala 17:30]
  wire  _T_10 = io_selectedMaster_master_awaddr >= 32'h800ff000; // @[xbar.scala 18:13]
  wire  _T_11 = io_selectedMaster_master_awaddr < 32'h8fffffff; // @[xbar.scala 18:38]
  wire  _T_12 = _T_10 & _T_11; // @[xbar.scala 18:30]
  wire [1:0] _T_13 = _T_12 ? 2'h1 : 2'h2; // @[Mux.scala 87:16]
  wire [1:0] selectedWriteSlave = _T_9 ? 2'h0 : _T_13; // @[Mux.scala 87:16]
  wire  _T_14 = selectedReadSlave == 2'h0; // @[xbar.scala 29:50]
  wire  _T_21 = selectedReadSlave == 2'h1; // @[xbar.scala 29:50]
  wire  _T_22 = selectedWriteSlave == 2'h1; // @[xbar.scala 30:52]
  assign io_selectedMaster_master_awready = selectedWriteSlave[0] & io_slaves_1_slave_awready; // @[xbar.scala 63:36]
  assign io_selectedMaster_master_wready = selectedWriteSlave[0] & io_slaves_1_slave_wready; // @[xbar.scala 64:36]
  assign io_selectedMaster_master_bvalid = selectedWriteSlave[0] & io_slaves_1_slave_bvalid; // @[xbar.scala 65:36]
  assign io_selectedMaster_master_arready = selectedReadSlave[0] ? io_slaves_1_slave_arready : 1'h1; // @[xbar.scala 56:36]
  assign io_selectedMaster_master_rvalid = selectedReadSlave[0] ? io_slaves_1_slave_rvalid : io_slaves_0_slave_rvalid; // @[xbar.scala 57:36]
  assign io_selectedMaster_master_rdata = selectedReadSlave[0] ? io_slaves_1_slave_rdata : io_slaves_0_slave_rdata; // @[xbar.scala 58:36]
  assign io_slaves_0_slave_arvalid = _T_14 & io_selectedMaster_master_arvalid; // @[xbar.scala 33:32]
  assign io_slaves_0_slave_araddr = io_selectedMaster_master_araddr; // @[xbar.scala 34:31]
  assign io_slaves_0_slave_rready = _T_14 & io_selectedMaster_master_rready; // @[xbar.scala 39:31]
  assign io_slaves_1_slave_awvalid = _T_22 & io_selectedMaster_master_awvalid; // @[xbar.scala 42:32]
  assign io_slaves_1_slave_awaddr = io_selectedMaster_master_awaddr; // @[xbar.scala 43:31]
  assign io_slaves_1_slave_wvalid = _T_22 & io_selectedMaster_master_wvalid; // @[xbar.scala 48:31]
  assign io_slaves_1_slave_wdata = io_selectedMaster_master_wdata; // @[xbar.scala 49:30]
  assign io_slaves_1_slave_wstrb = io_selectedMaster_master_wstrb; // @[xbar.scala 50:30]
  assign io_slaves_1_slave_bready = _T_22 & io_selectedMaster_master_bready; // @[xbar.scala 52:31]
  assign io_slaves_1_slave_arvalid = _T_21 & io_selectedMaster_master_arvalid; // @[xbar.scala 33:32]
  assign io_slaves_1_slave_araddr = io_selectedMaster_master_araddr; // @[xbar.scala 34:31]
  assign io_slaves_1_slave_rready = _T_21 & io_selectedMaster_master_rready; // @[xbar.scala 39:31]
endmodule
module AxiLiteRomSlave(
  input         clock,
  input         reset,
  output        io_axi_slave_arready,
  input         io_axi_slave_arvalid,
  input  [31:0] io_axi_slave_araddr,
  input         io_axi_slave_rready,
  output        io_axi_slave_rvalid,
  output [31:0] io_axi_slave_rdata
);
  wire [31:0] readModule_addr; // @[rom.scala 54:26]
  wire [31:0] readModule_data; // @[rom.scala 54:26]
  wire  readModule_clock; // @[rom.scala 54:26]
  wire  readModule_reset; // @[rom.scala 54:26]
  reg  state; // @[rom.scala 61:22]
  reg [31:0] _RAND_0;
  wire  ar_hs = io_axi_slave_arvalid & io_axi_slave_arready; // @[rom.scala 63:36]
  wire  r_hs = io_axi_slave_rvalid & io_axi_slave_rready; // @[rom.scala 64:36]
  wire  _T_1 = ~state; // @[Conditional.scala 37:30]
  wire  _GEN_0 = ar_hs | state; // @[rom.scala 68:19]
  wire [31:0] _GEN_3 = state ? readModule_data : 32'h0; // @[Conditional.scala 39:67]
  read readModule ( // @[rom.scala 54:26]
    .addr(readModule_addr),
    .data(readModule_data),
    .clock(readModule_clock),
    .reset(readModule_reset)
  );
  assign io_axi_slave_arready = 1'h1; // @[rom.scala 42:24 rom.scala 81:25]
  assign io_axi_slave_rvalid = state; // @[rom.scala 43:24 rom.scala 82:25]
  assign io_axi_slave_rdata = _T_1 ? 32'h0 : _GEN_3; // @[rom.scala 44:24 rom.scala 75:28]
  assign readModule_addr = io_axi_slave_araddr; // @[rom.scala 74:28]
  assign readModule_clock = clock; // @[rom.scala 55:23]
  assign readModule_reset = reset; // @[rom.scala 56:23]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  state = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (reset) begin
      state <= 1'h0;
    end else if (_T_1) begin
      state <= _GEN_0;
    end else if (state) begin
      if (r_hs) begin
        state <= 1'h0;
      end
    end
  end
endmodule
module Axi4RamSlave(
  input         clock,
  input         reset,
  output        io_axi_slave_awready,
  input         io_axi_slave_awvalid,
  input  [31:0] io_axi_slave_awaddr,
  output        io_axi_slave_wready,
  input         io_axi_slave_wvalid,
  input  [31:0] io_axi_slave_wdata,
  input  [3:0]  io_axi_slave_wstrb,
  input         io_axi_slave_bready,
  output        io_axi_slave_bvalid,
  output        io_axi_slave_arready,
  input         io_axi_slave_arvalid,
  input  [31:0] io_axi_slave_araddr,
  input         io_axi_slave_rready,
  output        io_axi_slave_rvalid,
  output [31:0] io_axi_slave_rdata,
  output [31:0] io_state
);
  wire  awrite_clock; // @[ram.scala 60:22]
  wire  awrite_wen; // @[ram.scala 60:22]
  wire  awrite_ren; // @[ram.scala 60:22]
  wire [31:0] awrite_addr; // @[ram.scala 60:22]
  wire [3:0] awrite_mask; // @[ram.scala 60:22]
  wire  awrite_sign; // @[ram.scala 60:22]
  wire [31:0] awrite_wdata; // @[ram.scala 60:22]
  wire [31:0] awrite_rdata; // @[ram.scala 60:22]
  wire  arHandshake = io_axi_slave_arvalid & io_axi_slave_arready; // @[ram.scala 76:42]
  wire  rHandshake = io_axi_slave_rvalid & io_axi_slave_rready; // @[ram.scala 77:41]
  wire  awHandshake = io_axi_slave_awvalid & io_axi_slave_awready; // @[ram.scala 78:42]
  wire  wHandshake = io_axi_slave_wvalid & io_axi_slave_wready; // @[ram.scala 79:41]
  wire  bHandshake = io_axi_slave_bvalid & io_axi_slave_bready; // @[ram.scala 80:41]
  reg [2:0] state; // @[ram.scala 84:22]
  reg [31:0] _RAND_0;
  wire  _T = 3'h0 == state; // @[Conditional.scala 37:30]
  wire  _T_1 = 3'h1 == state; // @[Conditional.scala 37:30]
  wire  _T_2 = 3'h3 == state; // @[Conditional.scala 37:30]
  wire  _T_3 = 3'h4 == state; // @[Conditional.scala 37:30]
  wire  _GEN_19 = _T_1 ? 1'h0 : 1'h1; // @[Conditional.scala 39:67]
  wire [31:0] _GEN_21 = _T_1 ? awrite_rdata : 32'h0; // @[Conditional.scala 39:67]
  awrite awrite ( // @[ram.scala 60:22]
    .clock(awrite_clock),
    .wen(awrite_wen),
    .ren(awrite_ren),
    .addr(awrite_addr),
    .mask(awrite_mask),
    .sign(awrite_sign),
    .wdata(awrite_wdata),
    .rdata(awrite_rdata)
  );
  assign io_axi_slave_awready = state == 3'h0; // @[ram.scala 69:24 ram.scala 132:24]
  assign io_axi_slave_wready = state == 3'h3; // @[ram.scala 70:24 ram.scala 134:24]
  assign io_axi_slave_bvalid = state == 3'h4; // @[ram.scala 71:24 ram.scala 123:27 ram.scala 135:24]
  assign io_axi_slave_arready = state == 3'h0; // @[ram.scala 63:24 ram.scala 131:24]
  assign io_axi_slave_rvalid = state == 3'h1; // @[ram.scala 64:24 ram.scala 133:24]
  assign io_axi_slave_rdata = _T ? 32'h0 : _GEN_21; // @[ram.scala 65:24 ram.scala 101:26]
  assign io_state = {{29'd0}, state}; // @[ram.scala 85:11]
  assign awrite_clock = clock; // @[ram.scala 61:19]
  assign awrite_wen = _T ? 1'h0 : _GEN_19; // @[ram.scala 88:21 ram.scala 99:21 ram.scala 113:21]
  assign awrite_ren = _T ? 1'h0 : _T_1; // @[ram.scala 89:21 ram.scala 100:21 ram.scala 114:21]
  assign awrite_addr = _T_1 ? io_axi_slave_araddr : io_axi_slave_awaddr; // @[ram.scala 98:22 ram.scala 110:22]
  assign awrite_mask = io_axi_slave_wstrb; // @[ram.scala 111:22]
  assign awrite_sign = 1'h0;
  assign awrite_wdata = io_axi_slave_wdata; // @[ram.scala 112:23]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  state = _RAND_0[2:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (reset) begin
      state <= 3'h0;
    end else if (_T) begin
      if (arHandshake) begin
        state <= 3'h1;
      end else if (awHandshake) begin
        state <= 3'h3;
      end
    end else if (_T_1) begin
      if (rHandshake) begin
        state <= 3'h0;
      end
    end else if (_T_2) begin
      if (wHandshake) begin
        state <= 3'h4;
      end
    end else if (_T_3) begin
      if (bHandshake) begin
        state <= 3'h0;
      end
    end
  end
endmodule
module top(
  input         clock,
  input         reset,
  input         io_timer,
  input         io_soft,
  input         io_extern,
  output [31:0] io_inst,
  output [31:0] io_pc,
  output [31:0] io_npc,
  output [31:0] io_flushpc,
  output        io_flush,
  output        io_stall,
  output [31:0] io_wbinst,
  output        io_bputake,
  output [31:0] io_bpuaddr,
  output [31:0] io_idpc,
  output [31:0] io_idinst,
  output [31:0] io_expc,
  output [31:0] io_exinst,
  output [31:0] io_mempc,
  output [31:0] io_meminst,
  output [31:0] io_result,
  output [31:0] io_waddr,
  output [31:0] io_state,
  output        io_romaddrvalid,
  output        io_romaddrready,
  output        io_romdatavalid,
  output        io_romdataready,
  output        io_ifaddrvalid,
  output        io_ifaddrready,
  output        io_ifdatavalid,
  output        io_ifdataready
);
  wire  core_clock; // @[soc.scala 44:23]
  wire  core_reset; // @[soc.scala 44:23]
  wire  core_io_timer; // @[soc.scala 44:23]
  wire  core_io_soft; // @[soc.scala 44:23]
  wire  core_io_extern; // @[soc.scala 44:23]
  wire  core_io_axi_master_awready; // @[soc.scala 44:23]
  wire  core_io_axi_master_awvalid; // @[soc.scala 44:23]
  wire [31:0] core_io_axi_master_awaddr; // @[soc.scala 44:23]
  wire  core_io_axi_master_wready; // @[soc.scala 44:23]
  wire  core_io_axi_master_wvalid; // @[soc.scala 44:23]
  wire [31:0] core_io_axi_master_wdata; // @[soc.scala 44:23]
  wire [3:0] core_io_axi_master_wstrb; // @[soc.scala 44:23]
  wire  core_io_axi_master_bready; // @[soc.scala 44:23]
  wire  core_io_axi_master_bvalid; // @[soc.scala 44:23]
  wire  core_io_axi_master_arready; // @[soc.scala 44:23]
  wire  core_io_axi_master_arvalid; // @[soc.scala 44:23]
  wire [31:0] core_io_axi_master_araddr; // @[soc.scala 44:23]
  wire  core_io_axi_master_rready; // @[soc.scala 44:23]
  wire  core_io_axi_master_rvalid; // @[soc.scala 44:23]
  wire [31:0] core_io_axi_master_rdata; // @[soc.scala 44:23]
  wire [31:0] core_io_inst; // @[soc.scala 44:23]
  wire [31:0] core_io_pc; // @[soc.scala 44:23]
  wire [31:0] core_io_npc; // @[soc.scala 44:23]
  wire [31:0] core_io_flushpc; // @[soc.scala 44:23]
  wire  core_io_flush; // @[soc.scala 44:23]
  wire  core_io_stall; // @[soc.scala 44:23]
  wire [31:0] core_io_wbinst; // @[soc.scala 44:23]
  wire  core_io_bputake; // @[soc.scala 44:23]
  wire [31:0] core_io_bpuaddr; // @[soc.scala 44:23]
  wire [31:0] core_io_idpc; // @[soc.scala 44:23]
  wire [31:0] core_io_idinst; // @[soc.scala 44:23]
  wire [31:0] core_io_expc; // @[soc.scala 44:23]
  wire [31:0] core_io_exinst; // @[soc.scala 44:23]
  wire [31:0] core_io_mempc; // @[soc.scala 44:23]
  wire [31:0] core_io_meminst; // @[soc.scala 44:23]
  wire [31:0] core_io_result; // @[soc.scala 44:23]
  wire [31:0] core_io_state; // @[soc.scala 44:23]
  wire  xbar_io_selectedMaster_master_awready; // @[soc.scala 45:23]
  wire  xbar_io_selectedMaster_master_awvalid; // @[soc.scala 45:23]
  wire [31:0] xbar_io_selectedMaster_master_awaddr; // @[soc.scala 45:23]
  wire  xbar_io_selectedMaster_master_wready; // @[soc.scala 45:23]
  wire  xbar_io_selectedMaster_master_wvalid; // @[soc.scala 45:23]
  wire [31:0] xbar_io_selectedMaster_master_wdata; // @[soc.scala 45:23]
  wire [3:0] xbar_io_selectedMaster_master_wstrb; // @[soc.scala 45:23]
  wire  xbar_io_selectedMaster_master_bready; // @[soc.scala 45:23]
  wire  xbar_io_selectedMaster_master_bvalid; // @[soc.scala 45:23]
  wire  xbar_io_selectedMaster_master_arready; // @[soc.scala 45:23]
  wire  xbar_io_selectedMaster_master_arvalid; // @[soc.scala 45:23]
  wire [31:0] xbar_io_selectedMaster_master_araddr; // @[soc.scala 45:23]
  wire  xbar_io_selectedMaster_master_rready; // @[soc.scala 45:23]
  wire  xbar_io_selectedMaster_master_rvalid; // @[soc.scala 45:23]
  wire [31:0] xbar_io_selectedMaster_master_rdata; // @[soc.scala 45:23]
  wire  xbar_io_slaves_0_slave_arvalid; // @[soc.scala 45:23]
  wire [31:0] xbar_io_slaves_0_slave_araddr; // @[soc.scala 45:23]
  wire  xbar_io_slaves_0_slave_rready; // @[soc.scala 45:23]
  wire  xbar_io_slaves_0_slave_rvalid; // @[soc.scala 45:23]
  wire [31:0] xbar_io_slaves_0_slave_rdata; // @[soc.scala 45:23]
  wire  xbar_io_slaves_1_slave_awready; // @[soc.scala 45:23]
  wire  xbar_io_slaves_1_slave_awvalid; // @[soc.scala 45:23]
  wire [31:0] xbar_io_slaves_1_slave_awaddr; // @[soc.scala 45:23]
  wire  xbar_io_slaves_1_slave_wready; // @[soc.scala 45:23]
  wire  xbar_io_slaves_1_slave_wvalid; // @[soc.scala 45:23]
  wire [31:0] xbar_io_slaves_1_slave_wdata; // @[soc.scala 45:23]
  wire [3:0] xbar_io_slaves_1_slave_wstrb; // @[soc.scala 45:23]
  wire  xbar_io_slaves_1_slave_bready; // @[soc.scala 45:23]
  wire  xbar_io_slaves_1_slave_bvalid; // @[soc.scala 45:23]
  wire  xbar_io_slaves_1_slave_arready; // @[soc.scala 45:23]
  wire  xbar_io_slaves_1_slave_arvalid; // @[soc.scala 45:23]
  wire [31:0] xbar_io_slaves_1_slave_araddr; // @[soc.scala 45:23]
  wire  xbar_io_slaves_1_slave_rready; // @[soc.scala 45:23]
  wire  xbar_io_slaves_1_slave_rvalid; // @[soc.scala 45:23]
  wire [31:0] xbar_io_slaves_1_slave_rdata; // @[soc.scala 45:23]
  wire  rom_clock; // @[soc.scala 46:23]
  wire  rom_reset; // @[soc.scala 46:23]
  wire  rom_io_axi_slave_arready; // @[soc.scala 46:23]
  wire  rom_io_axi_slave_arvalid; // @[soc.scala 46:23]
  wire [31:0] rom_io_axi_slave_araddr; // @[soc.scala 46:23]
  wire  rom_io_axi_slave_rready; // @[soc.scala 46:23]
  wire  rom_io_axi_slave_rvalid; // @[soc.scala 46:23]
  wire [31:0] rom_io_axi_slave_rdata; // @[soc.scala 46:23]
  wire  ram_clock; // @[soc.scala 47:23]
  wire  ram_reset; // @[soc.scala 47:23]
  wire  ram_io_axi_slave_awready; // @[soc.scala 47:23]
  wire  ram_io_axi_slave_awvalid; // @[soc.scala 47:23]
  wire [31:0] ram_io_axi_slave_awaddr; // @[soc.scala 47:23]
  wire  ram_io_axi_slave_wready; // @[soc.scala 47:23]
  wire  ram_io_axi_slave_wvalid; // @[soc.scala 47:23]
  wire [31:0] ram_io_axi_slave_wdata; // @[soc.scala 47:23]
  wire [3:0] ram_io_axi_slave_wstrb; // @[soc.scala 47:23]
  wire  ram_io_axi_slave_bready; // @[soc.scala 47:23]
  wire  ram_io_axi_slave_bvalid; // @[soc.scala 47:23]
  wire  ram_io_axi_slave_arready; // @[soc.scala 47:23]
  wire  ram_io_axi_slave_arvalid; // @[soc.scala 47:23]
  wire [31:0] ram_io_axi_slave_araddr; // @[soc.scala 47:23]
  wire  ram_io_axi_slave_rready; // @[soc.scala 47:23]
  wire  ram_io_axi_slave_rvalid; // @[soc.scala 47:23]
  wire [31:0] ram_io_axi_slave_rdata; // @[soc.scala 47:23]
  wire [31:0] ram_io_state; // @[soc.scala 47:23]
  Core core ( // @[soc.scala 44:23]
    .clock(core_clock),
    .reset(core_reset),
    .io_timer(core_io_timer),
    .io_soft(core_io_soft),
    .io_extern(core_io_extern),
    .io_axi_master_awready(core_io_axi_master_awready),
    .io_axi_master_awvalid(core_io_axi_master_awvalid),
    .io_axi_master_awaddr(core_io_axi_master_awaddr),
    .io_axi_master_wready(core_io_axi_master_wready),
    .io_axi_master_wvalid(core_io_axi_master_wvalid),
    .io_axi_master_wdata(core_io_axi_master_wdata),
    .io_axi_master_wstrb(core_io_axi_master_wstrb),
    .io_axi_master_bready(core_io_axi_master_bready),
    .io_axi_master_bvalid(core_io_axi_master_bvalid),
    .io_axi_master_arready(core_io_axi_master_arready),
    .io_axi_master_arvalid(core_io_axi_master_arvalid),
    .io_axi_master_araddr(core_io_axi_master_araddr),
    .io_axi_master_rready(core_io_axi_master_rready),
    .io_axi_master_rvalid(core_io_axi_master_rvalid),
    .io_axi_master_rdata(core_io_axi_master_rdata),
    .io_inst(core_io_inst),
    .io_pc(core_io_pc),
    .io_npc(core_io_npc),
    .io_flushpc(core_io_flushpc),
    .io_flush(core_io_flush),
    .io_stall(core_io_stall),
    .io_wbinst(core_io_wbinst),
    .io_bputake(core_io_bputake),
    .io_bpuaddr(core_io_bpuaddr),
    .io_idpc(core_io_idpc),
    .io_idinst(core_io_idinst),
    .io_expc(core_io_expc),
    .io_exinst(core_io_exinst),
    .io_mempc(core_io_mempc),
    .io_meminst(core_io_meminst),
    .io_result(core_io_result),
    .io_state(core_io_state)
  );
  AxiLiteArbiterSelector xbar ( // @[soc.scala 45:23]
    .io_selectedMaster_master_awready(xbar_io_selectedMaster_master_awready),
    .io_selectedMaster_master_awvalid(xbar_io_selectedMaster_master_awvalid),
    .io_selectedMaster_master_awaddr(xbar_io_selectedMaster_master_awaddr),
    .io_selectedMaster_master_wready(xbar_io_selectedMaster_master_wready),
    .io_selectedMaster_master_wvalid(xbar_io_selectedMaster_master_wvalid),
    .io_selectedMaster_master_wdata(xbar_io_selectedMaster_master_wdata),
    .io_selectedMaster_master_wstrb(xbar_io_selectedMaster_master_wstrb),
    .io_selectedMaster_master_bready(xbar_io_selectedMaster_master_bready),
    .io_selectedMaster_master_bvalid(xbar_io_selectedMaster_master_bvalid),
    .io_selectedMaster_master_arready(xbar_io_selectedMaster_master_arready),
    .io_selectedMaster_master_arvalid(xbar_io_selectedMaster_master_arvalid),
    .io_selectedMaster_master_araddr(xbar_io_selectedMaster_master_araddr),
    .io_selectedMaster_master_rready(xbar_io_selectedMaster_master_rready),
    .io_selectedMaster_master_rvalid(xbar_io_selectedMaster_master_rvalid),
    .io_selectedMaster_master_rdata(xbar_io_selectedMaster_master_rdata),
    .io_slaves_0_slave_arvalid(xbar_io_slaves_0_slave_arvalid),
    .io_slaves_0_slave_araddr(xbar_io_slaves_0_slave_araddr),
    .io_slaves_0_slave_rready(xbar_io_slaves_0_slave_rready),
    .io_slaves_0_slave_rvalid(xbar_io_slaves_0_slave_rvalid),
    .io_slaves_0_slave_rdata(xbar_io_slaves_0_slave_rdata),
    .io_slaves_1_slave_awready(xbar_io_slaves_1_slave_awready),
    .io_slaves_1_slave_awvalid(xbar_io_slaves_1_slave_awvalid),
    .io_slaves_1_slave_awaddr(xbar_io_slaves_1_slave_awaddr),
    .io_slaves_1_slave_wready(xbar_io_slaves_1_slave_wready),
    .io_slaves_1_slave_wvalid(xbar_io_slaves_1_slave_wvalid),
    .io_slaves_1_slave_wdata(xbar_io_slaves_1_slave_wdata),
    .io_slaves_1_slave_wstrb(xbar_io_slaves_1_slave_wstrb),
    .io_slaves_1_slave_bready(xbar_io_slaves_1_slave_bready),
    .io_slaves_1_slave_bvalid(xbar_io_slaves_1_slave_bvalid),
    .io_slaves_1_slave_arready(xbar_io_slaves_1_slave_arready),
    .io_slaves_1_slave_arvalid(xbar_io_slaves_1_slave_arvalid),
    .io_slaves_1_slave_araddr(xbar_io_slaves_1_slave_araddr),
    .io_slaves_1_slave_rready(xbar_io_slaves_1_slave_rready),
    .io_slaves_1_slave_rvalid(xbar_io_slaves_1_slave_rvalid),
    .io_slaves_1_slave_rdata(xbar_io_slaves_1_slave_rdata)
  );
  AxiLiteRomSlave rom ( // @[soc.scala 46:23]
    .clock(rom_clock),
    .reset(rom_reset),
    .io_axi_slave_arready(rom_io_axi_slave_arready),
    .io_axi_slave_arvalid(rom_io_axi_slave_arvalid),
    .io_axi_slave_araddr(rom_io_axi_slave_araddr),
    .io_axi_slave_rready(rom_io_axi_slave_rready),
    .io_axi_slave_rvalid(rom_io_axi_slave_rvalid),
    .io_axi_slave_rdata(rom_io_axi_slave_rdata)
  );
  Axi4RamSlave ram ( // @[soc.scala 47:23]
    .clock(ram_clock),
    .reset(ram_reset),
    .io_axi_slave_awready(ram_io_axi_slave_awready),
    .io_axi_slave_awvalid(ram_io_axi_slave_awvalid),
    .io_axi_slave_awaddr(ram_io_axi_slave_awaddr),
    .io_axi_slave_wready(ram_io_axi_slave_wready),
    .io_axi_slave_wvalid(ram_io_axi_slave_wvalid),
    .io_axi_slave_wdata(ram_io_axi_slave_wdata),
    .io_axi_slave_wstrb(ram_io_axi_slave_wstrb),
    .io_axi_slave_bready(ram_io_axi_slave_bready),
    .io_axi_slave_bvalid(ram_io_axi_slave_bvalid),
    .io_axi_slave_arready(ram_io_axi_slave_arready),
    .io_axi_slave_arvalid(ram_io_axi_slave_arvalid),
    .io_axi_slave_araddr(ram_io_axi_slave_araddr),
    .io_axi_slave_rready(ram_io_axi_slave_rready),
    .io_axi_slave_rvalid(ram_io_axi_slave_rvalid),
    .io_axi_slave_rdata(ram_io_axi_slave_rdata),
    .io_state(ram_io_state)
  );
  assign io_inst = core_io_inst; // @[soc.scala 49:10]
  assign io_pc = core_io_pc; // @[soc.scala 50:8]
  assign io_npc = core_io_npc; // @[soc.scala 51:9]
  assign io_flushpc = core_io_flushpc; // @[soc.scala 54:13]
  assign io_flush = core_io_flush; // @[soc.scala 52:11]
  assign io_stall = core_io_stall; // @[soc.scala 53:11]
  assign io_wbinst = core_io_wbinst; // @[soc.scala 63:12]
  assign io_bputake = core_io_bputake; // @[soc.scala 55:13]
  assign io_bpuaddr = core_io_bpuaddr; // @[soc.scala 56:13]
  assign io_idpc = core_io_idpc; // @[soc.scala 57:10]
  assign io_idinst = core_io_idinst; // @[soc.scala 58:12]
  assign io_expc = core_io_expc; // @[soc.scala 59:10]
  assign io_exinst = core_io_exinst; // @[soc.scala 60:12]
  assign io_mempc = core_io_mempc; // @[soc.scala 61:11]
  assign io_meminst = core_io_meminst; // @[soc.scala 62:13]
  assign io_result = core_io_result; // @[soc.scala 64:12]
  assign io_waddr = core_io_state; // @[soc.scala 65:11]
  assign io_state = ram_io_state; // @[soc.scala 66:11]
  assign io_romaddrvalid = ram_io_axi_slave_awvalid; // @[soc.scala 68:19]
  assign io_romaddrready = ram_io_axi_slave_awready; // @[soc.scala 69:19]
  assign io_romdatavalid = ram_io_axi_slave_wvalid; // @[soc.scala 70:19]
  assign io_romdataready = ram_io_axi_slave_wready; // @[soc.scala 71:19]
  assign io_ifaddrvalid = core_io_axi_master_awvalid; // @[soc.scala 74:18]
  assign io_ifaddrready = core_io_axi_master_awready; // @[soc.scala 75:18]
  assign io_ifdatavalid = core_io_axi_master_wvalid; // @[soc.scala 76:18]
  assign io_ifdataready = core_io_axi_master_wready; // @[soc.scala 77:18]
  assign core_clock = clock;
  assign core_reset = reset;
  assign core_io_timer = io_timer; // @[soc.scala 81:16]
  assign core_io_soft = io_soft; // @[soc.scala 80:15]
  assign core_io_extern = io_extern; // @[soc.scala 82:17]
  assign core_io_axi_master_awready = xbar_io_selectedMaster_master_awready; // @[soc.scala 85:26]
  assign core_io_axi_master_wready = xbar_io_selectedMaster_master_wready; // @[soc.scala 85:26]
  assign core_io_axi_master_bvalid = xbar_io_selectedMaster_master_bvalid; // @[soc.scala 85:26]
  assign core_io_axi_master_arready = xbar_io_selectedMaster_master_arready; // @[soc.scala 85:26]
  assign core_io_axi_master_rvalid = xbar_io_selectedMaster_master_rvalid; // @[soc.scala 85:26]
  assign core_io_axi_master_rdata = xbar_io_selectedMaster_master_rdata; // @[soc.scala 85:26]
  assign xbar_io_selectedMaster_master_awvalid = core_io_axi_master_awvalid; // @[soc.scala 85:26]
  assign xbar_io_selectedMaster_master_awaddr = core_io_axi_master_awaddr; // @[soc.scala 85:26]
  assign xbar_io_selectedMaster_master_wvalid = core_io_axi_master_wvalid; // @[soc.scala 85:26]
  assign xbar_io_selectedMaster_master_wdata = core_io_axi_master_wdata; // @[soc.scala 85:26]
  assign xbar_io_selectedMaster_master_wstrb = core_io_axi_master_wstrb; // @[soc.scala 85:26]
  assign xbar_io_selectedMaster_master_bready = core_io_axi_master_bready; // @[soc.scala 85:26]
  assign xbar_io_selectedMaster_master_arvalid = core_io_axi_master_arvalid; // @[soc.scala 85:26]
  assign xbar_io_selectedMaster_master_araddr = core_io_axi_master_araddr; // @[soc.scala 85:26]
  assign xbar_io_selectedMaster_master_rready = core_io_axi_master_rready; // @[soc.scala 85:26]
  assign xbar_io_slaves_0_slave_rvalid = rom_io_axi_slave_rvalid; // @[soc.scala 86:13]
  assign xbar_io_slaves_0_slave_rdata = rom_io_axi_slave_rdata; // @[soc.scala 86:13]
  assign xbar_io_slaves_1_slave_awready = ram_io_axi_slave_awready; // @[soc.scala 87:13]
  assign xbar_io_slaves_1_slave_wready = ram_io_axi_slave_wready; // @[soc.scala 87:13]
  assign xbar_io_slaves_1_slave_bvalid = ram_io_axi_slave_bvalid; // @[soc.scala 87:13]
  assign xbar_io_slaves_1_slave_arready = ram_io_axi_slave_arready; // @[soc.scala 87:13]
  assign xbar_io_slaves_1_slave_rvalid = ram_io_axi_slave_rvalid; // @[soc.scala 87:13]
  assign xbar_io_slaves_1_slave_rdata = ram_io_axi_slave_rdata; // @[soc.scala 87:13]
  assign rom_clock = clock;
  assign rom_reset = reset;
  assign rom_io_axi_slave_arvalid = xbar_io_slaves_0_slave_arvalid; // @[soc.scala 86:13]
  assign rom_io_axi_slave_araddr = xbar_io_slaves_0_slave_araddr; // @[soc.scala 86:13]
  assign rom_io_axi_slave_rready = xbar_io_slaves_0_slave_rready; // @[soc.scala 86:13]
  assign ram_clock = clock;
  assign ram_reset = reset;
  assign ram_io_axi_slave_awvalid = xbar_io_slaves_1_slave_awvalid; // @[soc.scala 87:13]
  assign ram_io_axi_slave_awaddr = xbar_io_slaves_1_slave_awaddr; // @[soc.scala 87:13]
  assign ram_io_axi_slave_wvalid = xbar_io_slaves_1_slave_wvalid; // @[soc.scala 87:13]
  assign ram_io_axi_slave_wdata = xbar_io_slaves_1_slave_wdata; // @[soc.scala 87:13]
  assign ram_io_axi_slave_wstrb = xbar_io_slaves_1_slave_wstrb; // @[soc.scala 87:13]
  assign ram_io_axi_slave_bready = xbar_io_slaves_1_slave_bready; // @[soc.scala 87:13]
  assign ram_io_axi_slave_arvalid = xbar_io_slaves_1_slave_arvalid; // @[soc.scala 87:13]
  assign ram_io_axi_slave_araddr = xbar_io_slaves_1_slave_araddr; // @[soc.scala 87:13]
  assign ram_io_axi_slave_rready = xbar_io_slaves_1_slave_rready; // @[soc.scala 87:13]
endmodule
