module BPU(
  input  [31:0] io_inst_i,
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
  wire [31:0] _GEN_0 = inst_jal ? inst_j_type_imm : 32'h0; // @[bpu.scala 29:24]
  wire [31:0] prdt_imm = inst_type_branch ? inst_b_type_imm : _GEN_0; // @[bpu.scala 27:26]
  wire [31:0] prdt_taken = inst_type_branch ? inst_b_type_imm : {{31'd0}, inst_jal}; // @[bpu.scala 34:23]
  assign io_prdt_taken_o = prdt_taken[0]; // @[bpu.scala 37:19]
  assign io_prdt_addr_o = io_pc_i + prdt_imm; // @[bpu.scala 38:18]
endmodule
module IF(
  input         clock,
  input         reset,
  input         io_flush,
  input  [31:0] io_flush_pc,
  input         io_stall,
  output [31:0] io_IF_pc,
  output [31:0] io_IF_inst,
  output        io_IF_bpu_take,
  output [31:0] io_IF_bpu_takepc,
  output        io_IF_misaligned,
  output        io_prdt_taken_o,
  output [31:0] io_prdt_addr_o
);
  wire [31:0] read_addr; // @[IF.scala 57:20]
  wire [31:0] read_data; // @[IF.scala 57:20]
  wire  read_clock; // @[IF.scala 57:20]
  wire  read_reset; // @[IF.scala 57:20]
  wire [31:0] bpu_io_inst_i; // @[IF.scala 58:19]
  wire [31:0] bpu_io_pc_i; // @[IF.scala 58:19]
  wire  bpu_io_prdt_taken_o; // @[IF.scala 58:19]
  wire [31:0] bpu_io_prdt_addr_o; // @[IF.scala 58:19]
  reg [31:0] pc; // @[IF.scala 52:19]
  reg [31:0] _RAND_0;
  wire [31:0] _T_2 = pc + 32'h4; // @[IF.scala 72:65]
  wire [31:0] _T_3 = bpu_io_prdt_taken_o ? bpu_io_prdt_addr_o : _T_2; // @[IF.scala 72:20]
  wire [31:0] _T_4 = io_stall ? pc : _T_3; // @[IF.scala 71:20]
  read read ( // @[IF.scala 57:20]
    .addr(read_addr),
    .data(read_data),
    .clock(read_clock),
    .reset(read_reset)
  );
  BPU bpu ( // @[IF.scala 58:19]
    .io_inst_i(bpu_io_inst_i),
    .io_pc_i(bpu_io_pc_i),
    .io_prdt_taken_o(bpu_io_prdt_taken_o),
    .io_prdt_addr_o(bpu_io_prdt_addr_o)
  );
  assign io_IF_pc = pc; // @[IF.scala 87:12]
  assign io_IF_inst = read_data; // @[IF.scala 89:14]
  assign io_IF_bpu_take = bpu_io_prdt_taken_o; // @[IF.scala 90:18]
  assign io_IF_bpu_takepc = bpu_io_prdt_addr_o; // @[IF.scala 91:20]
  assign io_IF_misaligned = pc[1:0] != 2'h0; // @[IF.scala 92:20]
  assign io_prdt_taken_o = bpu_io_prdt_taken_o; // @[IF.scala 75:19]
  assign io_prdt_addr_o = bpu_io_prdt_addr_o; // @[IF.scala 76:18]
  assign read_addr = io_flush ? io_flush_pc : _T_4; // @[IF.scala 60:16]
  assign read_clock = clock; // @[IF.scala 62:17]
  assign read_reset = reset; // @[IF.scala 63:17]
  assign bpu_io_inst_i = read_data; // @[IF.scala 66:17]
  assign bpu_io_pc_i = pc; // @[IF.scala 61:15]
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
      end else begin
        pc <= _T_2;
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
  wire  _T_1 = ~io_stallNext; // @[MidStage.scala 18:38]
  wire  _T_2 = io_stallPrev & _T_1; // @[MidStage.scala 18:35]
  wire  _T_3 = io_flush | _T_2; // @[MidStage.scala 18:18]
  wire  _T_5 = ~io_stallPrev; // @[MidStage.scala 20:15]
  wire  _GEN_4 = _T_5 | ff_valid; // @[MidStage.scala 20:30]
  assign io_next_pc = ff_pc; // @[MidStage.scala 24:11]
  assign io_next_valid = ff_valid; // @[MidStage.scala 24:11]
  assign io_next_inst = ff_inst; // @[MidStage.scala 24:11]
  assign io_next_bpu_take = ff_bpu_take; // @[MidStage.scala 24:11]
  assign io_next_bpu_takepc = ff_bpu_takepc; // @[MidStage.scala 24:11]
  assign io_next_misaligned = ff_misaligned; // @[MidStage.scala 24:11]
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
    end else begin
      ff_valid <= _GEN_4;
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
  input         clock,
  input         reset,
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
  reg  stall; // @[ID.scala 28:22]
  reg [31:0] _RAND_0;
  reg [31:0] lastinst; // @[ID.scala 29:25]
  reg [31:0] _RAND_1;
  wire [31:0] _GEN_0 = stall ? lastinst : io_if_i_inst; // @[ID.scala 30:16]
  wire  _T = ~io_if_i_valid; // @[ID.scala 35:20]
  wire [31:0] inst = _T ? 32'h13 : _GEN_0; // @[ID.scala 35:19]
  wire [4:0] rd = inst[11:7]; // @[ID.scala 40:17]
  wire [4:0] rs1 = inst[19:15]; // @[ID.scala 41:17]
  wire [4:0] rs2 = inst[24:20]; // @[ID.scala 42:17]
  wire [11:0] immI = inst[31:20]; // @[ID.scala 46:19]
  wire [31:0] _T_19 = inst & 32'hfe00707f; // @[Lookup.scala 31:38]
  wire  _T_20 = 32'h33 == _T_19; // @[Lookup.scala 31:38]
  wire [31:0] _T_21 = inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _T_22 = 32'h13 == _T_21; // @[Lookup.scala 31:38]
  wire  _T_24 = 32'h40000033 == _T_19; // @[Lookup.scala 31:38]
  wire [31:0] _T_25 = inst & 32'h7f; // @[Lookup.scala 31:38]
  wire  _T_26 = 32'h37 == _T_25; // @[Lookup.scala 31:38]
  wire  _T_28 = 32'h17 == _T_25; // @[Lookup.scala 31:38]
  wire  _T_30 = 32'h4033 == _T_19; // @[Lookup.scala 31:38]
  wire  _T_32 = 32'h4013 == _T_21; // @[Lookup.scala 31:38]
  wire  _T_34 = 32'h6033 == _T_19; // @[Lookup.scala 31:38]
  wire  _T_36 = 32'h6013 == _T_21; // @[Lookup.scala 31:38]
  wire  _T_38 = 32'h7033 == _T_19; // @[Lookup.scala 31:38]
  wire  _T_40 = 32'h7013 == _T_21; // @[Lookup.scala 31:38]
  wire  _T_42 = 32'h2033 == _T_19; // @[Lookup.scala 31:38]
  wire  _T_44 = 32'h2013 == _T_21; // @[Lookup.scala 31:38]
  wire  _T_46 = 32'h3033 == _T_19; // @[Lookup.scala 31:38]
  wire  _T_48 = 32'h3013 == _T_21; // @[Lookup.scala 31:38]
  wire  _T_50 = 32'h1033 == _T_19; // @[Lookup.scala 31:38]
  wire  _T_52 = 32'h1013 == _T_19; // @[Lookup.scala 31:38]
  wire  _T_54 = 32'h5033 == _T_19; // @[Lookup.scala 31:38]
  wire  _T_56 = 32'h5013 == _T_19; // @[Lookup.scala 31:38]
  wire  _T_58 = 32'h40005033 == _T_19; // @[Lookup.scala 31:38]
  wire  _T_60 = 32'h40005013 == _T_19; // @[Lookup.scala 31:38]
  wire  _T_62 = 32'h63 == _T_21; // @[Lookup.scala 31:38]
  wire  _T_64 = 32'h1063 == _T_21; // @[Lookup.scala 31:38]
  wire  _T_66 = 32'h4063 == _T_21; // @[Lookup.scala 31:38]
  wire  _T_68 = 32'h5063 == _T_21; // @[Lookup.scala 31:38]
  wire  _T_70 = 32'h6063 == _T_21; // @[Lookup.scala 31:38]
  wire  _T_72 = 32'h7063 == _T_21; // @[Lookup.scala 31:38]
  wire  _T_74 = 32'h6f == _T_25; // @[Lookup.scala 31:38]
  wire  _T_76 = 32'h67 == _T_21; // @[Lookup.scala 31:38]
  wire  _T_78 = 32'h3 == _T_21; // @[Lookup.scala 31:38]
  wire  _T_80 = 32'h1003 == _T_21; // @[Lookup.scala 31:38]
  wire  _T_82 = 32'h2003 == _T_21; // @[Lookup.scala 31:38]
  wire  _T_84 = 32'h4003 == _T_21; // @[Lookup.scala 31:38]
  wire  _T_86 = 32'h5003 == _T_21; // @[Lookup.scala 31:38]
  wire  _T_88 = 32'h23 == _T_21; // @[Lookup.scala 31:38]
  wire  _T_90 = 32'h1023 == _T_21; // @[Lookup.scala 31:38]
  wire  _T_92 = 32'h2023 == _T_21; // @[Lookup.scala 31:38]
  wire [31:0] _T_93 = inst & 32'hf00fffff; // @[Lookup.scala 31:38]
  wire  _T_94 = 32'hf == _T_93; // @[Lookup.scala 31:38]
  wire  _T_96 = 32'h100f == inst; // @[Lookup.scala 31:38]
  wire  _T_98 = 32'h1073 == _T_21; // @[Lookup.scala 31:38]
  wire  _T_100 = 32'h2073 == _T_21; // @[Lookup.scala 31:38]
  wire  _T_102 = 32'h3073 == _T_21; // @[Lookup.scala 31:38]
  wire  _T_104 = 32'h5073 == _T_21; // @[Lookup.scala 31:38]
  wire  _T_106 = 32'h6073 == _T_21; // @[Lookup.scala 31:38]
  wire  _T_108 = 32'h7073 == _T_21; // @[Lookup.scala 31:38]
  wire  _T_110 = 32'h2000033 == _T_19; // @[Lookup.scala 31:38]
  wire  _T_112 = 32'h2001033 == _T_19; // @[Lookup.scala 31:38]
  wire  _T_114 = 32'h2002033 == _T_19; // @[Lookup.scala 31:38]
  wire  _T_116 = 32'h2003033 == _T_19; // @[Lookup.scala 31:38]
  wire  _T_118 = 32'h2004033 == _T_19; // @[Lookup.scala 31:38]
  wire  _T_120 = 32'h2005033 == _T_19; // @[Lookup.scala 31:38]
  wire  _T_122 = 32'h2006033 == _T_19; // @[Lookup.scala 31:38]
  wire  _T_124 = 32'h2007033 == _T_19; // @[Lookup.scala 31:38]
  wire  _T_126 = 32'h73 == inst; // @[Lookup.scala 31:38]
  wire  _T_128 = 32'h100073 == inst; // @[Lookup.scala 31:38]
  wire  _T_130 = 32'h10200073 == inst; // @[Lookup.scala 31:38]
  wire  _T_132 = 32'h30200073 == inst; // @[Lookup.scala 31:38]
  wire  _T_134 = 32'h10500073 == inst; // @[Lookup.scala 31:38]
  wire [31:0] _T_135 = inst & 32'hfe007fff; // @[Lookup.scala 31:38]
  wire  _T_136 = 32'h12000073 == _T_135; // @[Lookup.scala 31:38]
  wire  _T_138 = _T_134 ? 1'h0 : _T_136; // @[Lookup.scala 33:37]
  wire  _T_139 = _T_132 ? 1'h0 : _T_138; // @[Lookup.scala 33:37]
  wire  _T_140 = _T_130 ? 1'h0 : _T_139; // @[Lookup.scala 33:37]
  wire  _T_141 = _T_128 ? 1'h0 : _T_140; // @[Lookup.scala 33:37]
  wire  _T_142 = _T_126 ? 1'h0 : _T_141; // @[Lookup.scala 33:37]
  wire  _T_143 = _T_124 | _T_142; // @[Lookup.scala 33:37]
  wire  _T_144 = _T_122 | _T_143; // @[Lookup.scala 33:37]
  wire  _T_145 = _T_120 | _T_144; // @[Lookup.scala 33:37]
  wire  _T_146 = _T_118 | _T_145; // @[Lookup.scala 33:37]
  wire  _T_147 = _T_116 | _T_146; // @[Lookup.scala 33:37]
  wire  _T_148 = _T_114 | _T_147; // @[Lookup.scala 33:37]
  wire  _T_149 = _T_112 | _T_148; // @[Lookup.scala 33:37]
  wire  _T_150 = _T_110 | _T_149; // @[Lookup.scala 33:37]
  wire  _T_151 = _T_108 ? 1'h0 : _T_150; // @[Lookup.scala 33:37]
  wire  _T_152 = _T_106 ? 1'h0 : _T_151; // @[Lookup.scala 33:37]
  wire  _T_153 = _T_104 ? 1'h0 : _T_152; // @[Lookup.scala 33:37]
  wire  _T_154 = _T_102 | _T_153; // @[Lookup.scala 33:37]
  wire  _T_155 = _T_100 | _T_154; // @[Lookup.scala 33:37]
  wire  _T_156 = _T_98 | _T_155; // @[Lookup.scala 33:37]
  wire  _T_157 = _T_96 ? 1'h0 : _T_156; // @[Lookup.scala 33:37]
  wire  _T_158 = _T_94 ? 1'h0 : _T_157; // @[Lookup.scala 33:37]
  wire  _T_159 = _T_92 | _T_158; // @[Lookup.scala 33:37]
  wire  _T_160 = _T_90 | _T_159; // @[Lookup.scala 33:37]
  wire  _T_161 = _T_88 | _T_160; // @[Lookup.scala 33:37]
  wire  _T_162 = _T_86 | _T_161; // @[Lookup.scala 33:37]
  wire  _T_163 = _T_84 | _T_162; // @[Lookup.scala 33:37]
  wire  _T_164 = _T_82 | _T_163; // @[Lookup.scala 33:37]
  wire  _T_165 = _T_80 | _T_164; // @[Lookup.scala 33:37]
  wire  _T_166 = _T_78 | _T_165; // @[Lookup.scala 33:37]
  wire  _T_167 = _T_76 | _T_166; // @[Lookup.scala 33:37]
  wire  _T_168 = _T_74 ? 1'h0 : _T_167; // @[Lookup.scala 33:37]
  wire  _T_169 = _T_72 | _T_168; // @[Lookup.scala 33:37]
  wire  _T_170 = _T_70 | _T_169; // @[Lookup.scala 33:37]
  wire  _T_171 = _T_68 | _T_170; // @[Lookup.scala 33:37]
  wire  _T_172 = _T_66 | _T_171; // @[Lookup.scala 33:37]
  wire  _T_173 = _T_64 | _T_172; // @[Lookup.scala 33:37]
  wire  _T_174 = _T_62 | _T_173; // @[Lookup.scala 33:37]
  wire  _T_175 = _T_60 | _T_174; // @[Lookup.scala 33:37]
  wire  _T_176 = _T_58 | _T_175; // @[Lookup.scala 33:37]
  wire  _T_177 = _T_56 | _T_176; // @[Lookup.scala 33:37]
  wire  _T_178 = _T_54 | _T_177; // @[Lookup.scala 33:37]
  wire  _T_179 = _T_52 | _T_178; // @[Lookup.scala 33:37]
  wire  _T_180 = _T_50 | _T_179; // @[Lookup.scala 33:37]
  wire  _T_181 = _T_48 | _T_180; // @[Lookup.scala 33:37]
  wire  _T_182 = _T_46 | _T_181; // @[Lookup.scala 33:37]
  wire  _T_183 = _T_44 | _T_182; // @[Lookup.scala 33:37]
  wire  _T_184 = _T_42 | _T_183; // @[Lookup.scala 33:37]
  wire  _T_185 = _T_40 | _T_184; // @[Lookup.scala 33:37]
  wire  _T_186 = _T_38 | _T_185; // @[Lookup.scala 33:37]
  wire  _T_187 = _T_36 | _T_186; // @[Lookup.scala 33:37]
  wire  _T_188 = _T_34 | _T_187; // @[Lookup.scala 33:37]
  wire  _T_189 = _T_32 | _T_188; // @[Lookup.scala 33:37]
  wire  _T_190 = _T_30 | _T_189; // @[Lookup.scala 33:37]
  wire  _T_191 = _T_28 ? 1'h0 : _T_190; // @[Lookup.scala 33:37]
  wire  _T_192 = _T_26 ? 1'h0 : _T_191; // @[Lookup.scala 33:37]
  wire  _T_193 = _T_24 | _T_192; // @[Lookup.scala 33:37]
  wire  _T_194 = _T_22 | _T_193; // @[Lookup.scala 33:37]
  wire  regEn1 = _T_20 | _T_194; // @[Lookup.scala 33:37]
  wire  _T_212 = _T_102 ? 1'h0 : _T_153; // @[Lookup.scala 33:37]
  wire  _T_213 = _T_100 ? 1'h0 : _T_212; // @[Lookup.scala 33:37]
  wire  _T_214 = _T_98 ? 1'h0 : _T_213; // @[Lookup.scala 33:37]
  wire  _T_215 = _T_96 ? 1'h0 : _T_214; // @[Lookup.scala 33:37]
  wire  _T_216 = _T_94 ? 1'h0 : _T_215; // @[Lookup.scala 33:37]
  wire  _T_217 = _T_92 | _T_216; // @[Lookup.scala 33:37]
  wire  _T_218 = _T_90 | _T_217; // @[Lookup.scala 33:37]
  wire  _T_219 = _T_88 | _T_218; // @[Lookup.scala 33:37]
  wire  _T_220 = _T_86 ? 1'h0 : _T_219; // @[Lookup.scala 33:37]
  wire  _T_221 = _T_84 ? 1'h0 : _T_220; // @[Lookup.scala 33:37]
  wire  _T_222 = _T_82 ? 1'h0 : _T_221; // @[Lookup.scala 33:37]
  wire  _T_223 = _T_80 ? 1'h0 : _T_222; // @[Lookup.scala 33:37]
  wire  _T_224 = _T_78 ? 1'h0 : _T_223; // @[Lookup.scala 33:37]
  wire  _T_225 = _T_76 ? 1'h0 : _T_224; // @[Lookup.scala 33:37]
  wire  _T_226 = _T_74 ? 1'h0 : _T_225; // @[Lookup.scala 33:37]
  wire  _T_227 = _T_72 | _T_226; // @[Lookup.scala 33:37]
  wire  _T_228 = _T_70 | _T_227; // @[Lookup.scala 33:37]
  wire  _T_229 = _T_68 | _T_228; // @[Lookup.scala 33:37]
  wire  _T_230 = _T_66 | _T_229; // @[Lookup.scala 33:37]
  wire  _T_231 = _T_64 | _T_230; // @[Lookup.scala 33:37]
  wire  _T_232 = _T_62 | _T_231; // @[Lookup.scala 33:37]
  wire  _T_233 = _T_60 ? 1'h0 : _T_232; // @[Lookup.scala 33:37]
  wire  _T_234 = _T_58 | _T_233; // @[Lookup.scala 33:37]
  wire  _T_235 = _T_56 ? 1'h0 : _T_234; // @[Lookup.scala 33:37]
  wire  _T_236 = _T_54 | _T_235; // @[Lookup.scala 33:37]
  wire  _T_237 = _T_52 ? 1'h0 : _T_236; // @[Lookup.scala 33:37]
  wire  _T_238 = _T_50 | _T_237; // @[Lookup.scala 33:37]
  wire  _T_239 = _T_48 ? 1'h0 : _T_238; // @[Lookup.scala 33:37]
  wire  _T_240 = _T_46 | _T_239; // @[Lookup.scala 33:37]
  wire  _T_241 = _T_44 ? 1'h0 : _T_240; // @[Lookup.scala 33:37]
  wire  _T_242 = _T_42 | _T_241; // @[Lookup.scala 33:37]
  wire  _T_243 = _T_40 ? 1'h0 : _T_242; // @[Lookup.scala 33:37]
  wire  _T_244 = _T_38 | _T_243; // @[Lookup.scala 33:37]
  wire  _T_245 = _T_36 ? 1'h0 : _T_244; // @[Lookup.scala 33:37]
  wire  _T_246 = _T_34 | _T_245; // @[Lookup.scala 33:37]
  wire  _T_247 = _T_32 ? 1'h0 : _T_246; // @[Lookup.scala 33:37]
  wire  _T_248 = _T_30 | _T_247; // @[Lookup.scala 33:37]
  wire  _T_249 = _T_28 ? 1'h0 : _T_248; // @[Lookup.scala 33:37]
  wire  _T_250 = _T_26 ? 1'h0 : _T_249; // @[Lookup.scala 33:37]
  wire  _T_251 = _T_24 | _T_250; // @[Lookup.scala 33:37]
  wire  _T_252 = _T_22 ? 1'h0 : _T_251; // @[Lookup.scala 33:37]
  wire  _T_260 = _T_122 | _T_124; // @[Lookup.scala 33:37]
  wire  _T_261 = _T_120 | _T_260; // @[Lookup.scala 33:37]
  wire  _T_262 = _T_118 | _T_261; // @[Lookup.scala 33:37]
  wire  _T_263 = _T_116 | _T_262; // @[Lookup.scala 33:37]
  wire  _T_264 = _T_114 | _T_263; // @[Lookup.scala 33:37]
  wire  _T_265 = _T_112 | _T_264; // @[Lookup.scala 33:37]
  wire  _T_266 = _T_110 | _T_265; // @[Lookup.scala 33:37]
  wire  _T_267 = _T_108 | _T_266; // @[Lookup.scala 33:37]
  wire  _T_268 = _T_106 | _T_267; // @[Lookup.scala 33:37]
  wire  _T_269 = _T_104 | _T_268; // @[Lookup.scala 33:37]
  wire  _T_270 = _T_102 | _T_269; // @[Lookup.scala 33:37]
  wire  _T_271 = _T_100 | _T_270; // @[Lookup.scala 33:37]
  wire  _T_272 = _T_98 | _T_271; // @[Lookup.scala 33:37]
  wire  _T_273 = _T_96 ? 1'h0 : _T_272; // @[Lookup.scala 33:37]
  wire  _T_274 = _T_94 ? 1'h0 : _T_273; // @[Lookup.scala 33:37]
  wire  _T_275 = _T_92 ? 1'h0 : _T_274; // @[Lookup.scala 33:37]
  wire  _T_276 = _T_90 ? 1'h0 : _T_275; // @[Lookup.scala 33:37]
  wire  _T_277 = _T_88 ? 1'h0 : _T_276; // @[Lookup.scala 33:37]
  wire  _T_278 = _T_86 | _T_277; // @[Lookup.scala 33:37]
  wire  _T_279 = _T_84 | _T_278; // @[Lookup.scala 33:37]
  wire  _T_280 = _T_82 | _T_279; // @[Lookup.scala 33:37]
  wire  _T_281 = _T_80 | _T_280; // @[Lookup.scala 33:37]
  wire  _T_282 = _T_78 | _T_281; // @[Lookup.scala 33:37]
  wire  _T_283 = _T_76 | _T_282; // @[Lookup.scala 33:37]
  wire  _T_284 = _T_74 | _T_283; // @[Lookup.scala 33:37]
  wire  _T_285 = _T_72 ? 1'h0 : _T_284; // @[Lookup.scala 33:37]
  wire  _T_286 = _T_70 ? 1'h0 : _T_285; // @[Lookup.scala 33:37]
  wire  _T_287 = _T_68 ? 1'h0 : _T_286; // @[Lookup.scala 33:37]
  wire  _T_288 = _T_66 ? 1'h0 : _T_287; // @[Lookup.scala 33:37]
  wire  _T_289 = _T_64 ? 1'h0 : _T_288; // @[Lookup.scala 33:37]
  wire  _T_290 = _T_62 ? 1'h0 : _T_289; // @[Lookup.scala 33:37]
  wire  _T_291 = _T_60 | _T_290; // @[Lookup.scala 33:37]
  wire  _T_292 = _T_58 | _T_291; // @[Lookup.scala 33:37]
  wire  _T_293 = _T_56 | _T_292; // @[Lookup.scala 33:37]
  wire  _T_294 = _T_54 | _T_293; // @[Lookup.scala 33:37]
  wire  _T_295 = _T_52 | _T_294; // @[Lookup.scala 33:37]
  wire  _T_296 = _T_50 | _T_295; // @[Lookup.scala 33:37]
  wire  _T_297 = _T_48 | _T_296; // @[Lookup.scala 33:37]
  wire  _T_298 = _T_46 | _T_297; // @[Lookup.scala 33:37]
  wire  _T_299 = _T_44 | _T_298; // @[Lookup.scala 33:37]
  wire  _T_300 = _T_42 | _T_299; // @[Lookup.scala 33:37]
  wire  _T_301 = _T_40 | _T_300; // @[Lookup.scala 33:37]
  wire  _T_302 = _T_38 | _T_301; // @[Lookup.scala 33:37]
  wire  _T_303 = _T_36 | _T_302; // @[Lookup.scala 33:37]
  wire  _T_304 = _T_34 | _T_303; // @[Lookup.scala 33:37]
  wire  _T_305 = _T_32 | _T_304; // @[Lookup.scala 33:37]
  wire  _T_306 = _T_30 | _T_305; // @[Lookup.scala 33:37]
  wire  _T_307 = _T_28 | _T_306; // @[Lookup.scala 33:37]
  wire  _T_308 = _T_26 | _T_307; // @[Lookup.scala 33:37]
  wire  _T_309 = _T_24 | _T_308; // @[Lookup.scala 33:37]
  wire  _T_310 = _T_22 | _T_309; // @[Lookup.scala 33:37]
  wire [3:0] _T_311 = _T_136 ? 4'h1 : 4'h0; // @[Lookup.scala 33:37]
  wire [3:0] _T_312 = _T_134 ? 4'h0 : _T_311; // @[Lookup.scala 33:37]
  wire [3:0] _T_313 = _T_132 ? 4'h0 : _T_312; // @[Lookup.scala 33:37]
  wire [3:0] _T_314 = _T_130 ? 4'h0 : _T_313; // @[Lookup.scala 33:37]
  wire [3:0] _T_315 = _T_128 ? 4'h0 : _T_314; // @[Lookup.scala 33:37]
  wire [3:0] _T_316 = _T_126 ? 4'h0 : _T_315; // @[Lookup.scala 33:37]
  wire [3:0] _T_317 = _T_124 ? 4'h1 : _T_316; // @[Lookup.scala 33:37]
  wire [3:0] _T_318 = _T_122 ? 4'h1 : _T_317; // @[Lookup.scala 33:37]
  wire [3:0] _T_319 = _T_120 ? 4'h1 : _T_318; // @[Lookup.scala 33:37]
  wire [3:0] _T_320 = _T_118 ? 4'h1 : _T_319; // @[Lookup.scala 33:37]
  wire [3:0] _T_321 = _T_116 ? 4'h1 : _T_320; // @[Lookup.scala 33:37]
  wire [3:0] _T_322 = _T_114 ? 4'h1 : _T_321; // @[Lookup.scala 33:37]
  wire [3:0] _T_323 = _T_112 ? 4'h1 : _T_322; // @[Lookup.scala 33:37]
  wire [3:0] _T_324 = _T_110 ? 4'h1 : _T_323; // @[Lookup.scala 33:37]
  wire [3:0] _T_325 = _T_108 ? 4'h0 : _T_324; // @[Lookup.scala 33:37]
  wire [3:0] _T_326 = _T_106 ? 4'h0 : _T_325; // @[Lookup.scala 33:37]
  wire [3:0] _T_327 = _T_104 ? 4'h0 : _T_326; // @[Lookup.scala 33:37]
  wire [3:0] _T_328 = _T_102 ? 4'h0 : _T_327; // @[Lookup.scala 33:37]
  wire [3:0] _T_329 = _T_100 ? 4'h0 : _T_328; // @[Lookup.scala 33:37]
  wire [3:0] _T_330 = _T_98 ? 4'h0 : _T_329; // @[Lookup.scala 33:37]
  wire [3:0] _T_331 = _T_96 ? 4'h0 : _T_330; // @[Lookup.scala 33:37]
  wire [3:0] _T_332 = _T_94 ? 4'h0 : _T_331; // @[Lookup.scala 33:37]
  wire [3:0] _T_333 = _T_92 ? 4'h1 : _T_332; // @[Lookup.scala 33:37]
  wire [3:0] _T_334 = _T_90 ? 4'h1 : _T_333; // @[Lookup.scala 33:37]
  wire [3:0] _T_335 = _T_88 ? 4'h1 : _T_334; // @[Lookup.scala 33:37]
  wire [3:0] _T_336 = _T_86 ? 4'h1 : _T_335; // @[Lookup.scala 33:37]
  wire [3:0] _T_337 = _T_84 ? 4'h1 : _T_336; // @[Lookup.scala 33:37]
  wire [3:0] _T_338 = _T_82 ? 4'h1 : _T_337; // @[Lookup.scala 33:37]
  wire [3:0] _T_339 = _T_80 ? 4'h1 : _T_338; // @[Lookup.scala 33:37]
  wire [3:0] _T_340 = _T_78 ? 4'h1 : _T_339; // @[Lookup.scala 33:37]
  wire [3:0] _T_341 = _T_76 ? 4'h7 : _T_340; // @[Lookup.scala 33:37]
  wire [3:0] _T_342 = _T_74 ? 4'h7 : _T_341; // @[Lookup.scala 33:37]
  wire [3:0] _T_343 = _T_72 ? 4'h0 : _T_342; // @[Lookup.scala 33:37]
  wire [3:0] _T_344 = _T_70 ? 4'h0 : _T_343; // @[Lookup.scala 33:37]
  wire [3:0] _T_345 = _T_68 ? 4'h0 : _T_344; // @[Lookup.scala 33:37]
  wire [3:0] _T_346 = _T_66 ? 4'h0 : _T_345; // @[Lookup.scala 33:37]
  wire [3:0] _T_347 = _T_64 ? 4'h0 : _T_346; // @[Lookup.scala 33:37]
  wire [3:0] _T_348 = _T_62 ? 4'h0 : _T_347; // @[Lookup.scala 33:37]
  wire [3:0] _T_349 = _T_60 ? 4'h1 : _T_348; // @[Lookup.scala 33:37]
  wire [3:0] _T_350 = _T_58 ? 4'h1 : _T_349; // @[Lookup.scala 33:37]
  wire [3:0] _T_351 = _T_56 ? 4'h1 : _T_350; // @[Lookup.scala 33:37]
  wire [3:0] _T_352 = _T_54 ? 4'h1 : _T_351; // @[Lookup.scala 33:37]
  wire [3:0] _T_353 = _T_52 ? 4'h1 : _T_352; // @[Lookup.scala 33:37]
  wire [3:0] _T_354 = _T_50 ? 4'h1 : _T_353; // @[Lookup.scala 33:37]
  wire [3:0] _T_355 = _T_48 ? 4'h1 : _T_354; // @[Lookup.scala 33:37]
  wire [3:0] _T_356 = _T_46 ? 4'h1 : _T_355; // @[Lookup.scala 33:37]
  wire [3:0] _T_357 = _T_44 ? 4'h1 : _T_356; // @[Lookup.scala 33:37]
  wire [3:0] _T_358 = _T_42 ? 4'h1 : _T_357; // @[Lookup.scala 33:37]
  wire [3:0] _T_359 = _T_40 ? 4'h1 : _T_358; // @[Lookup.scala 33:37]
  wire [3:0] _T_360 = _T_38 ? 4'h1 : _T_359; // @[Lookup.scala 33:37]
  wire [3:0] _T_361 = _T_36 ? 4'h1 : _T_360; // @[Lookup.scala 33:37]
  wire [3:0] _T_362 = _T_34 ? 4'h1 : _T_361; // @[Lookup.scala 33:37]
  wire [3:0] _T_363 = _T_32 ? 4'h1 : _T_362; // @[Lookup.scala 33:37]
  wire [3:0] _T_364 = _T_30 ? 4'h1 : _T_363; // @[Lookup.scala 33:37]
  wire [3:0] _T_365 = _T_28 ? 4'h7 : _T_364; // @[Lookup.scala 33:37]
  wire [3:0] _T_366 = _T_26 ? 4'h0 : _T_365; // @[Lookup.scala 33:37]
  wire [3:0] _T_367 = _T_24 ? 4'h1 : _T_366; // @[Lookup.scala 33:37]
  wire [3:0] _T_368 = _T_22 ? 4'h1 : _T_367; // @[Lookup.scala 33:37]
  wire [3:0] aluSrc1 = _T_20 ? 4'h1 : _T_368; // @[Lookup.scala 33:37]
  wire [3:0] _T_375 = _T_124 ? 4'h2 : 4'h0; // @[Lookup.scala 33:37]
  wire [3:0] _T_376 = _T_122 ? 4'h2 : _T_375; // @[Lookup.scala 33:37]
  wire [3:0] _T_377 = _T_120 ? 4'h2 : _T_376; // @[Lookup.scala 33:37]
  wire [3:0] _T_378 = _T_118 ? 4'h2 : _T_377; // @[Lookup.scala 33:37]
  wire [3:0] _T_379 = _T_116 ? 4'h2 : _T_378; // @[Lookup.scala 33:37]
  wire [3:0] _T_380 = _T_114 ? 4'h2 : _T_379; // @[Lookup.scala 33:37]
  wire [3:0] _T_381 = _T_112 ? 4'h2 : _T_380; // @[Lookup.scala 33:37]
  wire [3:0] _T_382 = _T_110 ? 4'h2 : _T_381; // @[Lookup.scala 33:37]
  wire [3:0] _T_383 = _T_108 ? 4'h0 : _T_382; // @[Lookup.scala 33:37]
  wire [3:0] _T_384 = _T_106 ? 4'h0 : _T_383; // @[Lookup.scala 33:37]
  wire [3:0] _T_385 = _T_104 ? 4'h0 : _T_384; // @[Lookup.scala 33:37]
  wire [3:0] _T_386 = _T_102 ? 4'h0 : _T_385; // @[Lookup.scala 33:37]
  wire [3:0] _T_387 = _T_100 ? 4'h0 : _T_386; // @[Lookup.scala 33:37]
  wire [3:0] _T_388 = _T_98 ? 4'h0 : _T_387; // @[Lookup.scala 33:37]
  wire [3:0] _T_389 = _T_96 ? 4'h0 : _T_388; // @[Lookup.scala 33:37]
  wire [3:0] _T_390 = _T_94 ? 4'h3 : _T_389; // @[Lookup.scala 33:37]
  wire [3:0] _T_391 = _T_92 ? 4'h4 : _T_390; // @[Lookup.scala 33:37]
  wire [3:0] _T_392 = _T_90 ? 4'h4 : _T_391; // @[Lookup.scala 33:37]
  wire [3:0] _T_393 = _T_88 ? 4'h4 : _T_392; // @[Lookup.scala 33:37]
  wire [3:0] _T_394 = _T_86 ? 4'h3 : _T_393; // @[Lookup.scala 33:37]
  wire [3:0] _T_395 = _T_84 ? 4'h3 : _T_394; // @[Lookup.scala 33:37]
  wire [3:0] _T_396 = _T_82 ? 4'h3 : _T_395; // @[Lookup.scala 33:37]
  wire [3:0] _T_397 = _T_80 ? 4'h3 : _T_396; // @[Lookup.scala 33:37]
  wire [3:0] _T_398 = _T_78 ? 4'h3 : _T_397; // @[Lookup.scala 33:37]
  wire [3:0] _T_399 = _T_76 ? 4'h8 : _T_398; // @[Lookup.scala 33:37]
  wire [3:0] _T_400 = _T_74 ? 4'h8 : _T_399; // @[Lookup.scala 33:37]
  wire [3:0] _T_401 = _T_72 ? 4'h0 : _T_400; // @[Lookup.scala 33:37]
  wire [3:0] _T_402 = _T_70 ? 4'h0 : _T_401; // @[Lookup.scala 33:37]
  wire [3:0] _T_403 = _T_68 ? 4'h0 : _T_402; // @[Lookup.scala 33:37]
  wire [3:0] _T_404 = _T_66 ? 4'h0 : _T_403; // @[Lookup.scala 33:37]
  wire [3:0] _T_405 = _T_64 ? 4'h0 : _T_404; // @[Lookup.scala 33:37]
  wire [3:0] _T_406 = _T_62 ? 4'h0 : _T_405; // @[Lookup.scala 33:37]
  wire [3:0] _T_407 = _T_60 ? 4'h6 : _T_406; // @[Lookup.scala 33:37]
  wire [3:0] _T_408 = _T_58 ? 4'h2 : _T_407; // @[Lookup.scala 33:37]
  wire [3:0] _T_409 = _T_56 ? 4'h6 : _T_408; // @[Lookup.scala 33:37]
  wire [3:0] _T_410 = _T_54 ? 4'h2 : _T_409; // @[Lookup.scala 33:37]
  wire [3:0] _T_411 = _T_52 ? 4'h6 : _T_410; // @[Lookup.scala 33:37]
  wire [3:0] _T_412 = _T_50 ? 4'h2 : _T_411; // @[Lookup.scala 33:37]
  wire [3:0] _T_413 = _T_48 ? 4'h3 : _T_412; // @[Lookup.scala 33:37]
  wire [3:0] _T_414 = _T_46 ? 4'h2 : _T_413; // @[Lookup.scala 33:37]
  wire [3:0] _T_415 = _T_44 ? 4'h3 : _T_414; // @[Lookup.scala 33:37]
  wire [3:0] _T_416 = _T_42 ? 4'h2 : _T_415; // @[Lookup.scala 33:37]
  wire [3:0] _T_417 = _T_40 ? 4'h3 : _T_416; // @[Lookup.scala 33:37]
  wire [3:0] _T_418 = _T_38 ? 4'h2 : _T_417; // @[Lookup.scala 33:37]
  wire [3:0] _T_419 = _T_36 ? 4'h3 : _T_418; // @[Lookup.scala 33:37]
  wire [3:0] _T_420 = _T_34 ? 4'h2 : _T_419; // @[Lookup.scala 33:37]
  wire [3:0] _T_421 = _T_32 ? 4'h3 : _T_420; // @[Lookup.scala 33:37]
  wire [3:0] _T_422 = _T_30 ? 4'h2 : _T_421; // @[Lookup.scala 33:37]
  wire [3:0] _T_423 = _T_28 ? 4'h5 : _T_422; // @[Lookup.scala 33:37]
  wire [3:0] _T_424 = _T_26 ? 4'h5 : _T_423; // @[Lookup.scala 33:37]
  wire [3:0] _T_425 = _T_24 ? 4'h2 : _T_424; // @[Lookup.scala 33:37]
  wire [3:0] _T_426 = _T_22 ? 4'h3 : _T_425; // @[Lookup.scala 33:37]
  wire [3:0] aluSrc2 = _T_20 ? 4'h2 : _T_426; // @[Lookup.scala 33:37]
  wire [3:0] _T_427 = _T_136 ? 4'h3 : 4'h0; // @[Lookup.scala 33:37]
  wire [3:0] _T_428 = _T_134 ? 4'h0 : _T_427; // @[Lookup.scala 33:37]
  wire [3:0] _T_429 = _T_132 ? 4'h0 : _T_428; // @[Lookup.scala 33:37]
  wire [3:0] _T_430 = _T_130 ? 4'h0 : _T_429; // @[Lookup.scala 33:37]
  wire [3:0] _T_431 = _T_128 ? 4'h0 : _T_430; // @[Lookup.scala 33:37]
  wire [3:0] _T_432 = _T_126 ? 4'h0 : _T_431; // @[Lookup.scala 33:37]
  wire [3:0] _T_433 = _T_124 ? 4'h0 : _T_432; // @[Lookup.scala 33:37]
  wire [3:0] _T_434 = _T_122 ? 4'h0 : _T_433; // @[Lookup.scala 33:37]
  wire [3:0] _T_435 = _T_120 ? 4'h0 : _T_434; // @[Lookup.scala 33:37]
  wire [3:0] _T_436 = _T_118 ? 4'h0 : _T_435; // @[Lookup.scala 33:37]
  wire [3:0] _T_437 = _T_116 ? 4'h0 : _T_436; // @[Lookup.scala 33:37]
  wire [3:0] _T_438 = _T_114 ? 4'h0 : _T_437; // @[Lookup.scala 33:37]
  wire [3:0] _T_439 = _T_112 ? 4'h0 : _T_438; // @[Lookup.scala 33:37]
  wire [3:0] _T_440 = _T_110 ? 4'h0 : _T_439; // @[Lookup.scala 33:37]
  wire [3:0] _T_441 = _T_108 ? 4'h0 : _T_440; // @[Lookup.scala 33:37]
  wire [3:0] _T_442 = _T_106 ? 4'h0 : _T_441; // @[Lookup.scala 33:37]
  wire [3:0] _T_443 = _T_104 ? 4'h0 : _T_442; // @[Lookup.scala 33:37]
  wire [3:0] _T_444 = _T_102 ? 4'h0 : _T_443; // @[Lookup.scala 33:37]
  wire [3:0] _T_445 = _T_100 ? 4'h0 : _T_444; // @[Lookup.scala 33:37]
  wire [3:0] _T_446 = _T_98 ? 4'h0 : _T_445; // @[Lookup.scala 33:37]
  wire [3:0] _T_447 = _T_96 ? 4'h0 : _T_446; // @[Lookup.scala 33:37]
  wire [3:0] _T_448 = _T_94 ? 4'h3 : _T_447; // @[Lookup.scala 33:37]
  wire [3:0] _T_449 = _T_92 ? 4'h0 : _T_448; // @[Lookup.scala 33:37]
  wire [3:0] _T_450 = _T_90 ? 4'h0 : _T_449; // @[Lookup.scala 33:37]
  wire [3:0] _T_451 = _T_88 ? 4'h0 : _T_450; // @[Lookup.scala 33:37]
  wire [3:0] _T_452 = _T_86 ? 4'h0 : _T_451; // @[Lookup.scala 33:37]
  wire [3:0] _T_453 = _T_84 ? 4'h0 : _T_452; // @[Lookup.scala 33:37]
  wire [3:0] _T_454 = _T_82 ? 4'h0 : _T_453; // @[Lookup.scala 33:37]
  wire [3:0] _T_455 = _T_80 ? 4'h0 : _T_454; // @[Lookup.scala 33:37]
  wire [3:0] _T_456 = _T_78 ? 4'h0 : _T_455; // @[Lookup.scala 33:37]
  wire [3:0] _T_457 = _T_76 ? 4'h0 : _T_456; // @[Lookup.scala 33:37]
  wire [3:0] _T_458 = _T_74 ? 4'h0 : _T_457; // @[Lookup.scala 33:37]
  wire [3:0] _T_459 = _T_72 ? 4'h0 : _T_458; // @[Lookup.scala 33:37]
  wire [3:0] _T_460 = _T_70 ? 4'h0 : _T_459; // @[Lookup.scala 33:37]
  wire [3:0] _T_461 = _T_68 ? 4'h0 : _T_460; // @[Lookup.scala 33:37]
  wire [3:0] _T_462 = _T_66 ? 4'h0 : _T_461; // @[Lookup.scala 33:37]
  wire [3:0] _T_463 = _T_64 ? 4'h0 : _T_462; // @[Lookup.scala 33:37]
  wire [3:0] _T_464 = _T_62 ? 4'h0 : _T_463; // @[Lookup.scala 33:37]
  wire [3:0] _T_465 = _T_60 ? 4'h9 : _T_464; // @[Lookup.scala 33:37]
  wire [3:0] _T_466 = _T_58 ? 4'h9 : _T_465; // @[Lookup.scala 33:37]
  wire [3:0] _T_467 = _T_56 ? 4'h8 : _T_466; // @[Lookup.scala 33:37]
  wire [3:0] _T_468 = _T_54 ? 4'h8 : _T_467; // @[Lookup.scala 33:37]
  wire [3:0] _T_469 = _T_52 ? 4'h7 : _T_468; // @[Lookup.scala 33:37]
  wire [3:0] _T_470 = _T_50 ? 4'h7 : _T_469; // @[Lookup.scala 33:37]
  wire [3:0] _T_471 = _T_48 ? 4'h6 : _T_470; // @[Lookup.scala 33:37]
  wire [3:0] _T_472 = _T_46 ? 4'h6 : _T_471; // @[Lookup.scala 33:37]
  wire [3:0] _T_473 = _T_44 ? 4'h5 : _T_472; // @[Lookup.scala 33:37]
  wire [3:0] _T_474 = _T_42 ? 4'h5 : _T_473; // @[Lookup.scala 33:37]
  wire [3:0] _T_475 = _T_40 ? 4'h4 : _T_474; // @[Lookup.scala 33:37]
  wire [3:0] _T_476 = _T_38 ? 4'h4 : _T_475; // @[Lookup.scala 33:37]
  wire [3:0] _T_477 = _T_36 ? 4'h3 : _T_476; // @[Lookup.scala 33:37]
  wire [3:0] _T_478 = _T_34 ? 4'h3 : _T_477; // @[Lookup.scala 33:37]
  wire [3:0] _T_479 = _T_32 ? 4'h2 : _T_478; // @[Lookup.scala 33:37]
  wire [3:0] _T_480 = _T_30 ? 4'h2 : _T_479; // @[Lookup.scala 33:37]
  wire [3:0] _T_481 = _T_28 ? 4'h0 : _T_480; // @[Lookup.scala 33:37]
  wire [3:0] _T_482 = _T_26 ? 4'h3 : _T_481; // @[Lookup.scala 33:37]
  wire [3:0] _T_483 = _T_24 ? 4'h1 : _T_482; // @[Lookup.scala 33:37]
  wire [3:0] _T_484 = _T_22 ? 4'h0 : _T_483; // @[Lookup.scala 33:37]
  wire [2:0] _T_515 = _T_76 ? 3'h1 : 3'h0; // @[Lookup.scala 33:37]
  wire [2:0] _T_516 = _T_74 ? 3'h1 : _T_515; // @[Lookup.scala 33:37]
  wire [2:0] _T_517 = _T_72 ? 3'h7 : _T_516; // @[Lookup.scala 33:37]
  wire [2:0] _T_518 = _T_70 ? 3'h6 : _T_517; // @[Lookup.scala 33:37]
  wire [2:0] _T_519 = _T_68 ? 3'h5 : _T_518; // @[Lookup.scala 33:37]
  wire [2:0] _T_520 = _T_66 ? 3'h4 : _T_519; // @[Lookup.scala 33:37]
  wire [2:0] _T_521 = _T_64 ? 3'h3 : _T_520; // @[Lookup.scala 33:37]
  wire [2:0] _T_522 = _T_62 ? 3'h2 : _T_521; // @[Lookup.scala 33:37]
  wire [2:0] _T_523 = _T_60 ? 3'h0 : _T_522; // @[Lookup.scala 33:37]
  wire [2:0] _T_524 = _T_58 ? 3'h0 : _T_523; // @[Lookup.scala 33:37]
  wire [2:0] _T_525 = _T_56 ? 3'h0 : _T_524; // @[Lookup.scala 33:37]
  wire [2:0] _T_526 = _T_54 ? 3'h0 : _T_525; // @[Lookup.scala 33:37]
  wire [2:0] _T_527 = _T_52 ? 3'h0 : _T_526; // @[Lookup.scala 33:37]
  wire [2:0] _T_528 = _T_50 ? 3'h0 : _T_527; // @[Lookup.scala 33:37]
  wire [2:0] _T_529 = _T_48 ? 3'h0 : _T_528; // @[Lookup.scala 33:37]
  wire [2:0] _T_530 = _T_46 ? 3'h0 : _T_529; // @[Lookup.scala 33:37]
  wire [2:0] _T_531 = _T_44 ? 3'h0 : _T_530; // @[Lookup.scala 33:37]
  wire [2:0] _T_532 = _T_42 ? 3'h0 : _T_531; // @[Lookup.scala 33:37]
  wire [2:0] _T_533 = _T_40 ? 3'h0 : _T_532; // @[Lookup.scala 33:37]
  wire [2:0] _T_534 = _T_38 ? 3'h0 : _T_533; // @[Lookup.scala 33:37]
  wire [2:0] _T_535 = _T_36 ? 3'h0 : _T_534; // @[Lookup.scala 33:37]
  wire [2:0] _T_536 = _T_34 ? 3'h0 : _T_535; // @[Lookup.scala 33:37]
  wire [2:0] _T_537 = _T_32 ? 3'h0 : _T_536; // @[Lookup.scala 33:37]
  wire [2:0] _T_538 = _T_30 ? 3'h0 : _T_537; // @[Lookup.scala 33:37]
  wire [2:0] _T_539 = _T_28 ? 3'h0 : _T_538; // @[Lookup.scala 33:37]
  wire [2:0] _T_540 = _T_26 ? 3'h0 : _T_539; // @[Lookup.scala 33:37]
  wire [2:0] _T_541 = _T_24 ? 3'h0 : _T_540; // @[Lookup.scala 33:37]
  wire [2:0] _T_542 = _T_22 ? 3'h0 : _T_541; // @[Lookup.scala 33:37]
  wire [2:0] branchOp = _T_20 ? 3'h0 : _T_542; // @[Lookup.scala 33:37]
  wire [3:0] _T_543 = _T_136 ? 4'hb : 4'h0; // @[Lookup.scala 33:37]
  wire [3:0] _T_544 = _T_134 ? 4'h0 : _T_543; // @[Lookup.scala 33:37]
  wire [3:0] _T_545 = _T_132 ? 4'h0 : _T_544; // @[Lookup.scala 33:37]
  wire [3:0] _T_546 = _T_130 ? 4'h0 : _T_545; // @[Lookup.scala 33:37]
  wire [3:0] _T_547 = _T_128 ? 4'h0 : _T_546; // @[Lookup.scala 33:37]
  wire [3:0] _T_548 = _T_126 ? 4'h0 : _T_547; // @[Lookup.scala 33:37]
  wire [3:0] _T_549 = _T_124 ? 4'h0 : _T_548; // @[Lookup.scala 33:37]
  wire [3:0] _T_550 = _T_122 ? 4'h0 : _T_549; // @[Lookup.scala 33:37]
  wire [3:0] _T_551 = _T_120 ? 4'h0 : _T_550; // @[Lookup.scala 33:37]
  wire [3:0] _T_552 = _T_118 ? 4'h0 : _T_551; // @[Lookup.scala 33:37]
  wire [3:0] _T_553 = _T_116 ? 4'h0 : _T_552; // @[Lookup.scala 33:37]
  wire [3:0] _T_554 = _T_114 ? 4'h0 : _T_553; // @[Lookup.scala 33:37]
  wire [3:0] _T_555 = _T_112 ? 4'h0 : _T_554; // @[Lookup.scala 33:37]
  wire [3:0] _T_556 = _T_110 ? 4'h0 : _T_555; // @[Lookup.scala 33:37]
  wire [3:0] _T_557 = _T_108 ? 4'h0 : _T_556; // @[Lookup.scala 33:37]
  wire [3:0] _T_558 = _T_106 ? 4'h0 : _T_557; // @[Lookup.scala 33:37]
  wire [3:0] _T_559 = _T_104 ? 4'h0 : _T_558; // @[Lookup.scala 33:37]
  wire [3:0] _T_560 = _T_102 ? 4'h0 : _T_559; // @[Lookup.scala 33:37]
  wire [3:0] _T_561 = _T_100 ? 4'h0 : _T_560; // @[Lookup.scala 33:37]
  wire [3:0] _T_562 = _T_98 ? 4'h0 : _T_561; // @[Lookup.scala 33:37]
  wire [3:0] _T_563 = _T_96 ? 4'ha : _T_562; // @[Lookup.scala 33:37]
  wire [3:0] _T_564 = _T_94 ? 4'h9 : _T_563; // @[Lookup.scala 33:37]
  wire [3:0] _T_565 = _T_92 ? 4'h8 : _T_564; // @[Lookup.scala 33:37]
  wire [3:0] _T_566 = _T_90 ? 4'h7 : _T_565; // @[Lookup.scala 33:37]
  wire [3:0] _T_567 = _T_88 ? 4'h6 : _T_566; // @[Lookup.scala 33:37]
  wire [3:0] _T_568 = _T_86 ? 4'h5 : _T_567; // @[Lookup.scala 33:37]
  wire [3:0] _T_569 = _T_84 ? 4'h4 : _T_568; // @[Lookup.scala 33:37]
  wire [3:0] _T_570 = _T_82 ? 4'h3 : _T_569; // @[Lookup.scala 33:37]
  wire [3:0] _T_571 = _T_80 ? 4'h2 : _T_570; // @[Lookup.scala 33:37]
  wire [3:0] _T_572 = _T_78 ? 4'h1 : _T_571; // @[Lookup.scala 33:37]
  wire [3:0] _T_573 = _T_76 ? 4'h0 : _T_572; // @[Lookup.scala 33:37]
  wire [3:0] _T_574 = _T_74 ? 4'h0 : _T_573; // @[Lookup.scala 33:37]
  wire [3:0] _T_575 = _T_72 ? 4'h0 : _T_574; // @[Lookup.scala 33:37]
  wire [3:0] _T_576 = _T_70 ? 4'h0 : _T_575; // @[Lookup.scala 33:37]
  wire [3:0] _T_577 = _T_68 ? 4'h0 : _T_576; // @[Lookup.scala 33:37]
  wire [3:0] _T_578 = _T_66 ? 4'h0 : _T_577; // @[Lookup.scala 33:37]
  wire [3:0] _T_579 = _T_64 ? 4'h0 : _T_578; // @[Lookup.scala 33:37]
  wire [3:0] _T_580 = _T_62 ? 4'h0 : _T_579; // @[Lookup.scala 33:37]
  wire [3:0] _T_581 = _T_60 ? 4'h0 : _T_580; // @[Lookup.scala 33:37]
  wire [3:0] _T_582 = _T_58 ? 4'h0 : _T_581; // @[Lookup.scala 33:37]
  wire [3:0] _T_583 = _T_56 ? 4'h0 : _T_582; // @[Lookup.scala 33:37]
  wire [3:0] _T_584 = _T_54 ? 4'h0 : _T_583; // @[Lookup.scala 33:37]
  wire [3:0] _T_585 = _T_52 ? 4'h0 : _T_584; // @[Lookup.scala 33:37]
  wire [3:0] _T_586 = _T_50 ? 4'h0 : _T_585; // @[Lookup.scala 33:37]
  wire [3:0] _T_587 = _T_48 ? 4'h0 : _T_586; // @[Lookup.scala 33:37]
  wire [3:0] _T_588 = _T_46 ? 4'h0 : _T_587; // @[Lookup.scala 33:37]
  wire [3:0] _T_589 = _T_44 ? 4'h0 : _T_588; // @[Lookup.scala 33:37]
  wire [3:0] _T_590 = _T_42 ? 4'h0 : _T_589; // @[Lookup.scala 33:37]
  wire [3:0] _T_591 = _T_40 ? 4'h0 : _T_590; // @[Lookup.scala 33:37]
  wire [3:0] _T_592 = _T_38 ? 4'h0 : _T_591; // @[Lookup.scala 33:37]
  wire [3:0] _T_593 = _T_36 ? 4'h0 : _T_592; // @[Lookup.scala 33:37]
  wire [3:0] _T_594 = _T_34 ? 4'h0 : _T_593; // @[Lookup.scala 33:37]
  wire [3:0] _T_595 = _T_32 ? 4'h0 : _T_594; // @[Lookup.scala 33:37]
  wire [3:0] _T_596 = _T_30 ? 4'h0 : _T_595; // @[Lookup.scala 33:37]
  wire [3:0] _T_597 = _T_28 ? 4'h0 : _T_596; // @[Lookup.scala 33:37]
  wire [3:0] _T_598 = _T_26 ? 4'h0 : _T_597; // @[Lookup.scala 33:37]
  wire [3:0] _T_599 = _T_24 ? 4'h0 : _T_598; // @[Lookup.scala 33:37]
  wire [3:0] _T_600 = _T_22 ? 4'h0 : _T_599; // @[Lookup.scala 33:37]
  wire [2:0] _T_615 = _T_108 ? 3'h5 : 3'h0; // @[Lookup.scala 33:37]
  wire [2:0] _T_616 = _T_106 ? 3'h4 : _T_615; // @[Lookup.scala 33:37]
  wire [2:0] _T_617 = _T_104 ? 3'h3 : _T_616; // @[Lookup.scala 33:37]
  wire [2:0] _T_618 = _T_102 ? 3'h5 : _T_617; // @[Lookup.scala 33:37]
  wire [2:0] _T_619 = _T_100 ? 3'h4 : _T_618; // @[Lookup.scala 33:37]
  wire [2:0] _T_620 = _T_98 ? 3'h3 : _T_619; // @[Lookup.scala 33:37]
  wire [2:0] _T_621 = _T_96 ? 3'h0 : _T_620; // @[Lookup.scala 33:37]
  wire [2:0] _T_622 = _T_94 ? 3'h0 : _T_621; // @[Lookup.scala 33:37]
  wire [2:0] _T_623 = _T_92 ? 3'h0 : _T_622; // @[Lookup.scala 33:37]
  wire [2:0] _T_624 = _T_90 ? 3'h0 : _T_623; // @[Lookup.scala 33:37]
  wire [2:0] _T_625 = _T_88 ? 3'h0 : _T_624; // @[Lookup.scala 33:37]
  wire [2:0] _T_626 = _T_86 ? 3'h0 : _T_625; // @[Lookup.scala 33:37]
  wire [2:0] _T_627 = _T_84 ? 3'h0 : _T_626; // @[Lookup.scala 33:37]
  wire [2:0] _T_628 = _T_82 ? 3'h0 : _T_627; // @[Lookup.scala 33:37]
  wire [2:0] _T_629 = _T_80 ? 3'h0 : _T_628; // @[Lookup.scala 33:37]
  wire [2:0] _T_630 = _T_78 ? 3'h0 : _T_629; // @[Lookup.scala 33:37]
  wire [2:0] _T_631 = _T_76 ? 3'h0 : _T_630; // @[Lookup.scala 33:37]
  wire [2:0] _T_632 = _T_74 ? 3'h0 : _T_631; // @[Lookup.scala 33:37]
  wire [2:0] _T_633 = _T_72 ? 3'h0 : _T_632; // @[Lookup.scala 33:37]
  wire [2:0] _T_634 = _T_70 ? 3'h0 : _T_633; // @[Lookup.scala 33:37]
  wire [2:0] _T_635 = _T_68 ? 3'h0 : _T_634; // @[Lookup.scala 33:37]
  wire [2:0] _T_636 = _T_66 ? 3'h0 : _T_635; // @[Lookup.scala 33:37]
  wire [2:0] _T_637 = _T_64 ? 3'h0 : _T_636; // @[Lookup.scala 33:37]
  wire [2:0] _T_638 = _T_62 ? 3'h0 : _T_637; // @[Lookup.scala 33:37]
  wire [2:0] _T_639 = _T_60 ? 3'h0 : _T_638; // @[Lookup.scala 33:37]
  wire [2:0] _T_640 = _T_58 ? 3'h0 : _T_639; // @[Lookup.scala 33:37]
  wire [2:0] _T_641 = _T_56 ? 3'h0 : _T_640; // @[Lookup.scala 33:37]
  wire [2:0] _T_642 = _T_54 ? 3'h0 : _T_641; // @[Lookup.scala 33:37]
  wire [2:0] _T_643 = _T_52 ? 3'h0 : _T_642; // @[Lookup.scala 33:37]
  wire [2:0] _T_644 = _T_50 ? 3'h0 : _T_643; // @[Lookup.scala 33:37]
  wire [2:0] _T_645 = _T_48 ? 3'h0 : _T_644; // @[Lookup.scala 33:37]
  wire [2:0] _T_646 = _T_46 ? 3'h0 : _T_645; // @[Lookup.scala 33:37]
  wire [2:0] _T_647 = _T_44 ? 3'h0 : _T_646; // @[Lookup.scala 33:37]
  wire [2:0] _T_648 = _T_42 ? 3'h0 : _T_647; // @[Lookup.scala 33:37]
  wire [2:0] _T_649 = _T_40 ? 3'h0 : _T_648; // @[Lookup.scala 33:37]
  wire [2:0] _T_650 = _T_38 ? 3'h0 : _T_649; // @[Lookup.scala 33:37]
  wire [2:0] _T_651 = _T_36 ? 3'h0 : _T_650; // @[Lookup.scala 33:37]
  wire [2:0] _T_652 = _T_34 ? 3'h0 : _T_651; // @[Lookup.scala 33:37]
  wire [2:0] _T_653 = _T_32 ? 3'h0 : _T_652; // @[Lookup.scala 33:37]
  wire [2:0] _T_654 = _T_30 ? 3'h0 : _T_653; // @[Lookup.scala 33:37]
  wire [2:0] _T_655 = _T_28 ? 3'h0 : _T_654; // @[Lookup.scala 33:37]
  wire [2:0] _T_656 = _T_26 ? 3'h0 : _T_655; // @[Lookup.scala 33:37]
  wire [2:0] _T_657 = _T_24 ? 3'h0 : _T_656; // @[Lookup.scala 33:37]
  wire [2:0] _T_658 = _T_22 ? 3'h0 : _T_657; // @[Lookup.scala 33:37]
  wire [2:0] csrOp = _T_20 ? 3'h0 : _T_658; // @[Lookup.scala 33:37]
  wire [3:0] _T_717 = _T_136 ? 4'ha : 4'h5; // @[Lookup.scala 33:37]
  wire [3:0] _T_718 = _T_134 ? 4'h0 : _T_717; // @[Lookup.scala 33:37]
  wire [3:0] _T_719 = _T_132 ? 4'h4 : _T_718; // @[Lookup.scala 33:37]
  wire [3:0] _T_720 = _T_130 ? 4'h3 : _T_719; // @[Lookup.scala 33:37]
  wire [3:0] _T_721 = _T_128 ? 4'h2 : _T_720; // @[Lookup.scala 33:37]
  wire [3:0] _T_722 = _T_126 ? 4'h1 : _T_721; // @[Lookup.scala 33:37]
  wire [3:0] _T_723 = _T_124 ? 4'h0 : _T_722; // @[Lookup.scala 33:37]
  wire [3:0] _T_724 = _T_122 ? 4'h0 : _T_723; // @[Lookup.scala 33:37]
  wire [3:0] _T_725 = _T_120 ? 4'h0 : _T_724; // @[Lookup.scala 33:37]
  wire [3:0] _T_726 = _T_118 ? 4'h0 : _T_725; // @[Lookup.scala 33:37]
  wire [3:0] _T_727 = _T_116 ? 4'h0 : _T_726; // @[Lookup.scala 33:37]
  wire [3:0] _T_728 = _T_114 ? 4'h0 : _T_727; // @[Lookup.scala 33:37]
  wire [3:0] _T_729 = _T_112 ? 4'h0 : _T_728; // @[Lookup.scala 33:37]
  wire [3:0] _T_730 = _T_110 ? 4'h0 : _T_729; // @[Lookup.scala 33:37]
  wire [3:0] _T_731 = _T_108 ? 4'h0 : _T_730; // @[Lookup.scala 33:37]
  wire [3:0] _T_732 = _T_106 ? 4'h0 : _T_731; // @[Lookup.scala 33:37]
  wire [3:0] _T_733 = _T_104 ? 4'h0 : _T_732; // @[Lookup.scala 33:37]
  wire [3:0] _T_734 = _T_102 ? 4'h0 : _T_733; // @[Lookup.scala 33:37]
  wire [3:0] _T_735 = _T_100 ? 4'h0 : _T_734; // @[Lookup.scala 33:37]
  wire [3:0] _T_736 = _T_98 ? 4'h0 : _T_735; // @[Lookup.scala 33:37]
  wire [3:0] _T_737 = _T_96 ? 4'h0 : _T_736; // @[Lookup.scala 33:37]
  wire [3:0] _T_738 = _T_94 ? 4'h0 : _T_737; // @[Lookup.scala 33:37]
  wire [3:0] _T_739 = _T_92 ? 4'h8 : _T_738; // @[Lookup.scala 33:37]
  wire [3:0] _T_740 = _T_90 ? 4'h8 : _T_739; // @[Lookup.scala 33:37]
  wire [3:0] _T_741 = _T_88 ? 4'h8 : _T_740; // @[Lookup.scala 33:37]
  wire [3:0] _T_742 = _T_86 ? 4'h8 : _T_741; // @[Lookup.scala 33:37]
  wire [3:0] _T_743 = _T_84 ? 4'h8 : _T_742; // @[Lookup.scala 33:37]
  wire [3:0] _T_744 = _T_82 ? 4'h8 : _T_743; // @[Lookup.scala 33:37]
  wire [3:0] _T_745 = _T_80 ? 4'h8 : _T_744; // @[Lookup.scala 33:37]
  wire [3:0] _T_746 = _T_78 ? 4'h8 : _T_745; // @[Lookup.scala 33:37]
  wire [3:0] _T_747 = _T_76 ? 4'h0 : _T_746; // @[Lookup.scala 33:37]
  wire [3:0] _T_748 = _T_74 ? 4'h0 : _T_747; // @[Lookup.scala 33:37]
  wire [3:0] _T_749 = _T_72 ? 4'h0 : _T_748; // @[Lookup.scala 33:37]
  wire [3:0] _T_750 = _T_70 ? 4'h0 : _T_749; // @[Lookup.scala 33:37]
  wire [3:0] _T_751 = _T_68 ? 4'h0 : _T_750; // @[Lookup.scala 33:37]
  wire [3:0] _T_752 = _T_66 ? 4'h0 : _T_751; // @[Lookup.scala 33:37]
  wire [3:0] _T_753 = _T_64 ? 4'h0 : _T_752; // @[Lookup.scala 33:37]
  wire [3:0] _T_754 = _T_62 ? 4'h0 : _T_753; // @[Lookup.scala 33:37]
  wire [3:0] _T_755 = _T_60 ? 4'h0 : _T_754; // @[Lookup.scala 33:37]
  wire [3:0] _T_756 = _T_58 ? 4'h0 : _T_755; // @[Lookup.scala 33:37]
  wire [3:0] _T_757 = _T_56 ? 4'h0 : _T_756; // @[Lookup.scala 33:37]
  wire [3:0] _T_758 = _T_54 ? 4'h0 : _T_757; // @[Lookup.scala 33:37]
  wire [3:0] _T_759 = _T_52 ? 4'h0 : _T_758; // @[Lookup.scala 33:37]
  wire [3:0] _T_760 = _T_50 ? 4'h0 : _T_759; // @[Lookup.scala 33:37]
  wire [3:0] _T_761 = _T_48 ? 4'h0 : _T_760; // @[Lookup.scala 33:37]
  wire [3:0] _T_762 = _T_46 ? 4'h0 : _T_761; // @[Lookup.scala 33:37]
  wire [3:0] _T_763 = _T_44 ? 4'h0 : _T_762; // @[Lookup.scala 33:37]
  wire [3:0] _T_764 = _T_42 ? 4'h0 : _T_763; // @[Lookup.scala 33:37]
  wire [3:0] _T_765 = _T_40 ? 4'h0 : _T_764; // @[Lookup.scala 33:37]
  wire [3:0] _T_766 = _T_38 ? 4'h0 : _T_765; // @[Lookup.scala 33:37]
  wire [3:0] _T_767 = _T_36 ? 4'h0 : _T_766; // @[Lookup.scala 33:37]
  wire [3:0] _T_768 = _T_34 ? 4'h0 : _T_767; // @[Lookup.scala 33:37]
  wire [3:0] _T_769 = _T_32 ? 4'h0 : _T_768; // @[Lookup.scala 33:37]
  wire [3:0] _T_770 = _T_30 ? 4'h0 : _T_769; // @[Lookup.scala 33:37]
  wire [3:0] _T_771 = _T_28 ? 4'h0 : _T_770; // @[Lookup.scala 33:37]
  wire [3:0] _T_772 = _T_26 ? 4'h0 : _T_771; // @[Lookup.scala 33:37]
  wire [3:0] _T_773 = _T_24 ? 4'h0 : _T_772; // @[Lookup.scala 33:37]
  wire [3:0] _T_774 = _T_22 ? 4'h0 : _T_773; // @[Lookup.scala 33:37]
  wire [3:0] excType = _T_20 ? 4'h0 : _T_774; // @[Lookup.scala 33:37]
  wire  all_jump = branchOp == 3'h1; // @[ID.scala 68:27]
  wire [20:0] _T_776 = {inst[31],inst[19:12],inst[20],inst[30:21],1'h0}; // @[ID.scala 69:43]
  wire [31:0] _GEN_1 = {{11{_T_776[20]}},_T_776}; // @[ID.scala 69:36]
  wire [31:0] jal_pc = $signed(io_if_i_pc) + $signed(_GEN_1); // @[ID.scala 69:51]
  wire [11:0] _T_781 = inst[31:20]; // @[ID.scala 70:46]
  wire [31:0] _GEN_2 = {{20{_T_781[11]}},_T_781}; // @[ID.scala 70:39]
  wire [31:0] imm_jalr = $signed(io_read1_data) + $signed(_GEN_2); // @[ID.scala 70:39]
  wire [31:0] jalr_pc = {imm_jalr[31:1],1'h0}; // @[Cat.scala 30:58]
  wire [31:0] pc_j = regEn1 ? jalr_pc : jal_pc; // @[ID.scala 72:17]
  wire [12:0] _T_786 = {inst[31],inst[7],inst[30:25],inst[11:8],1'h0}; // @[ID.scala 73:40]
  wire [31:0] _GEN_3 = {{19{_T_786[12]}},_T_786}; // @[ID.scala 73:33]
  wire [31:0] pc_b = $signed(io_if_i_pc) + $signed(_GEN_3); // @[ID.scala 73:48]
  wire  _T_790 = branchOp == 3'h0; // @[ID.scala 74:29]
  wire [31:0] _T_791 = all_jump ? pc_j : pc_b; // @[ID.scala 75:19]
  wire [31:0] takepc = _T_790 ? 32'h0 : _T_791; // @[ID.scala 74:19]
  wire  _T_792 = io_read1_data == io_read2_data; // @[ID.scala 78:32]
  wire  _T_793 = io_read1_data != io_read2_data; // @[ID.scala 79:32]
  wire  _T_796 = $signed(io_read1_data) < $signed(io_read2_data); // @[ID.scala 80:39]
  wire  _T_799 = $signed(io_read1_data) >= $signed(io_read2_data); // @[ID.scala 81:39]
  wire  _T_800 = io_read1_data < io_read2_data; // @[ID.scala 82:32]
  wire  _T_801 = io_read1_data >= io_read2_data; // @[ID.scala 83:32]
  wire  _T_802 = 3'h7 == branchOp; // @[Mux.scala 68:19]
  wire  _T_803 = _T_802 & _T_801; // @[Mux.scala 68:16]
  wire  _T_804 = 3'h6 == branchOp; // @[Mux.scala 68:19]
  wire  _T_805 = _T_804 ? _T_800 : _T_803; // @[Mux.scala 68:16]
  wire  _T_806 = 3'h5 == branchOp; // @[Mux.scala 68:19]
  wire  _T_807 = _T_806 ? _T_799 : _T_805; // @[Mux.scala 68:16]
  wire  _T_808 = 3'h4 == branchOp; // @[Mux.scala 68:19]
  wire  _T_809 = _T_808 ? _T_796 : _T_807; // @[Mux.scala 68:16]
  wire  _T_810 = 3'h3 == branchOp; // @[Mux.scala 68:19]
  wire  _T_811 = _T_810 ? _T_793 : _T_809; // @[Mux.scala 68:16]
  wire  _T_812 = 3'h2 == branchOp; // @[Mux.scala 68:19]
  wire  _T_813 = _T_812 ? _T_792 : _T_811; // @[Mux.scala 68:16]
  wire  _T_814 = 3'h1 == branchOp; // @[Mux.scala 68:19]
  wire  branchteke = _T_814 | _T_813; // @[Mux.scala 68:16]
  wire  _T_815 = io_if_i_bpu_take != branchteke; // @[ID.scala 86:39]
  wire  _T_816 = io_if_i_bpu_takepc != takepc; // @[ID.scala 86:78]
  wire [31:0] _T_818 = io_if_i_pc + 32'h4; // @[ID.scala 87:49]
  wire  _T_820 = takepc[1:0] != 2'h0; // @[ID.scala 88:48]
  wire  addrFault = branchteke & _T_820; // @[ID.scala 88:32]
  wire  _T_821 = rd == 5'h0; // @[ID.scala 92:23]
  wire [2:0] _T_822 = _T_821 ? 3'h2 : 3'h3; // @[ID.scala 92:19]
  wire  _T_823 = rs1 == 5'h0; // @[ID.scala 93:24]
  wire [2:0] _T_824 = _T_823 ? 3'h1 : 3'h4; // @[ID.scala 93:19]
  wire [2:0] _T_826 = _T_823 ? 3'h1 : 3'h5; // @[ID.scala 94:19]
  wire  _T_827 = 3'h5 == csrOp; // @[Mux.scala 68:19]
  wire [2:0] _T_828 = _T_827 ? _T_826 : 3'h0; // @[Mux.scala 68:16]
  wire  _T_829 = 3'h4 == csrOp; // @[Mux.scala 68:19]
  wire [2:0] _T_830 = _T_829 ? _T_824 : _T_828; // @[Mux.scala 68:16]
  wire  _T_831 = 3'h3 == csrOp; // @[Mux.scala 68:19]
  wire [2:0] csrActOp = _T_831 ? _T_822 : _T_830; // @[Mux.scala 68:16]
  wire  csren = csrActOp != 3'h0; // @[ID.scala 96:24]
  wire  _T_832 = ~csren; // @[ID.scala 97:23]
  wire [31:0] _T_833 = regEn1 ? io_read1_data : {{27'd0}, rs1}; // @[ID.scala 97:39]
  wire  _T_834 = csrOp != 3'h0; // @[ID.scala 100:31]
  wire  _T_835 = ~io_csrread_csr_valid; // @[ID.scala 100:46]
  wire  _T_836 = _T_834 & _T_835; // @[ID.scala 100:43]
  wire [3:0] _T_837 = addrFault ? 4'h7 : excType; // @[ID.scala 102:24]
  wire [3:0] _T_838 = io_if_i_misaligned ? 4'h7 : _T_837; // @[ID.scala 101:24]
  wire [11:0] _T_839 = csren ? immI : 12'h0; // @[ID.scala 106:28]
  wire [11:0] _T_847 = {inst[31:25],rd}; // @[ID.scala 57:25]
  wire [31:0] _T_848 = {inst[31:12],12'h0}; // @[ID.scala 58:25]
  wire [5:0] _T_849 = {1'b0,$signed(rs2)}; // @[ID.scala 59:24]
  wire  _T_851 = 4'h8 == aluSrc1; // @[Mux.scala 68:19]
  wire [3:0] _T_852 = _T_851 ? $signed(4'sh4) : $signed(4'sh0); // @[Mux.scala 68:16]
  wire  _T_853 = 4'h7 == aluSrc1; // @[Mux.scala 68:19]
  wire [31:0] _T_854 = _T_853 ? $signed(io_if_i_pc) : $signed({{28{_T_852[3]}},_T_852}); // @[Mux.scala 68:16]
  wire  _T_855 = 4'h6 == aluSrc1; // @[Mux.scala 68:19]
  wire [31:0] _T_856 = _T_855 ? $signed({{26{_T_849[5]}},_T_849}) : $signed(_T_854); // @[Mux.scala 68:16]
  wire  _T_857 = 4'h5 == aluSrc1; // @[Mux.scala 68:19]
  wire [31:0] _T_858 = _T_857 ? $signed(_T_848) : $signed(_T_856); // @[Mux.scala 68:16]
  wire  _T_859 = 4'h4 == aluSrc1; // @[Mux.scala 68:19]
  wire [31:0] _T_860 = _T_859 ? $signed({{20{_T_847[11]}},_T_847}) : $signed(_T_858); // @[Mux.scala 68:16]
  wire  _T_861 = 4'h3 == aluSrc1; // @[Mux.scala 68:19]
  wire [31:0] _T_862 = _T_861 ? $signed({{20{_T_781[11]}},_T_781}) : $signed(_T_860); // @[Mux.scala 68:16]
  wire  _T_863 = 4'h2 == aluSrc1; // @[Mux.scala 68:19]
  wire [31:0] _T_864 = _T_863 ? $signed(io_read2_data) : $signed(_T_862); // @[Mux.scala 68:16]
  wire  _T_865 = 4'h1 == aluSrc1; // @[Mux.scala 68:19]
  wire  _T_875 = 4'h8 == aluSrc2; // @[Mux.scala 68:19]
  wire [3:0] _T_876 = _T_875 ? $signed(4'sh4) : $signed(4'sh0); // @[Mux.scala 68:16]
  wire  _T_877 = 4'h7 == aluSrc2; // @[Mux.scala 68:19]
  wire [31:0] _T_878 = _T_877 ? $signed(io_if_i_pc) : $signed({{28{_T_876[3]}},_T_876}); // @[Mux.scala 68:16]
  wire  _T_879 = 4'h6 == aluSrc2; // @[Mux.scala 68:19]
  wire [31:0] _T_880 = _T_879 ? $signed({{26{_T_849[5]}},_T_849}) : $signed(_T_878); // @[Mux.scala 68:16]
  wire  _T_881 = 4'h5 == aluSrc2; // @[Mux.scala 68:19]
  wire [31:0] _T_882 = _T_881 ? $signed(_T_848) : $signed(_T_880); // @[Mux.scala 68:16]
  wire  _T_883 = 4'h4 == aluSrc2; // @[Mux.scala 68:19]
  wire [31:0] _T_884 = _T_883 ? $signed({{20{_T_847[11]}},_T_847}) : $signed(_T_882); // @[Mux.scala 68:16]
  wire  _T_885 = 4'h3 == aluSrc2; // @[Mux.scala 68:19]
  wire [31:0] _T_886 = _T_885 ? $signed({{20{_T_781[11]}},_T_781}) : $signed(_T_884); // @[Mux.scala 68:16]
  wire  _T_887 = 4'h2 == aluSrc2; // @[Mux.scala 68:19]
  wire [31:0] _T_888 = _T_887 ? $signed(io_read2_data) : $signed(_T_886); // @[Mux.scala 68:16]
  wire  _T_889 = 4'h1 == aluSrc2; // @[Mux.scala 68:19]
  assign io_read1_en = _T_20 | _T_194; // @[ID.scala 113:17]
  assign io_read1_addr = inst[19:15]; // @[ID.scala 114:17]
  assign io_read2_en = _T_20 | _T_252; // @[ID.scala 115:17]
  assign io_read2_addr = inst[24:20]; // @[ID.scala 116:17]
  assign io_csrread_csr_raddr = {{20'd0}, _T_839}; // @[ID.scala 106:23]
  assign io_csrread_csr_op = _T_831 ? _T_822 : _T_830; // @[ID.scala 105:20]
  assign io_flush = _T_815 | _T_816; // @[ID.scala 109:13 ID.scala 118:12]
  assign io_flushpc = branchteke ? takepc : _T_818; // @[ID.scala 110:15 ID.scala 119:14]
  assign io_id_o_aluOp = _T_20 ? 4'h0 : _T_484; // @[ID.scala 120:16]
  assign io_id_o_opr1 = _T_865 ? $signed(io_read1_data) : $signed(_T_864); // @[ID.scala 129:16]
  assign io_id_o_opr2 = _T_889 ? $signed(io_read1_data) : $signed(_T_888); // @[ID.scala 130:16]
  assign io_id_o_lsuOp = _T_20 ? 4'h0 : _T_600; // @[ID.scala 126:16]
  assign io_id_o_lsuData = io_read2_data; // @[ID.scala 127:18]
  assign io_id_o_regWen = _T_20 | _T_310; // @[ID.scala 136:22]
  assign io_id_o_regWaddr = inst[11:7]; // @[ID.scala 137:22]
  assign io_id_o_csrOp = _T_831 ? _T_822 : _T_830; // @[ID.scala 121:16]
  assign io_id_o_csrAddr = inst[31:20]; // @[ID.scala 122:18]
  assign io_id_o_csren = csrActOp != 3'h0; // @[ID.scala 124:16]
  assign io_id_o_csrrData = io_csrread_csr_rdata; // @[ID.scala 125:19]
  assign io_id_o_csrwData = _T_832 ? 32'h0 : _T_833; // @[ID.scala 123:19]
  assign io_id_o_excType = _T_836 ? 4'h5 : _T_838; // @[ID.scala 131:18]
  assign io_id_o_excValue = addrFault ? takepc : 32'h0; // @[ID.scala 132:19]
  assign io_id_o_inst = _T ? 32'h13 : _GEN_0; // @[ID.scala 133:16]
  assign io_id_o_currentPc = io_if_i_pc; // @[ID.scala 135:21]
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
  stall = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  lastinst = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`endif // SYNTHESIS
  always @(posedge clock) begin
    stall <= io_stallid;
    if (reset) begin
      lastinst <= 32'h13;
    end else if (!(stall)) begin
      lastinst <= io_if_i_inst;
    end
  end
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
  reg [3:0] ff_lsuOp; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_3;
  reg [31:0] ff_lsuData; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_4;
  reg  ff_regWen; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_5;
  reg [4:0] ff_regWaddr; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_6;
  reg [2:0] ff_csrOp; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_7;
  reg [11:0] ff_csrAddr; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_8;
  reg  ff_csren; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_9;
  reg [31:0] ff_csrrData; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_10;
  reg [31:0] ff_csrwData; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_11;
  reg [3:0] ff_excType; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_12;
  reg [31:0] ff_excValue; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_13;
  reg [31:0] ff_inst; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_14;
  reg [31:0] ff_currentPc; // @[MidStage.scala 17:19]
  reg [31:0] _RAND_15;
  wire  _T_1 = ~io_stallNext; // @[MidStage.scala 18:38]
  wire  _T_2 = io_stallPrev & _T_1; // @[MidStage.scala 18:35]
  wire  _T_3 = io_flush | _T_2; // @[MidStage.scala 18:18]
  wire  _T_5 = ~io_stallPrev; // @[MidStage.scala 20:15]
  assign io_next_aluOp = ff_aluOp; // @[MidStage.scala 24:11]
  assign io_next_opr1 = ff_opr1; // @[MidStage.scala 24:11]
  assign io_next_opr2 = ff_opr2; // @[MidStage.scala 24:11]
  assign io_next_lsuOp = ff_lsuOp; // @[MidStage.scala 24:11]
  assign io_next_lsuData = ff_lsuData; // @[MidStage.scala 24:11]
  assign io_next_regWen = ff_regWen; // @[MidStage.scala 24:11]
  assign io_next_regWaddr = ff_regWaddr; // @[MidStage.scala 24:11]
  assign io_next_csrOp = ff_csrOp; // @[MidStage.scala 24:11]
  assign io_next_csrAddr = ff_csrAddr; // @[MidStage.scala 24:11]
  assign io_next_csren = ff_csren; // @[MidStage.scala 24:11]
  assign io_next_csrrData = ff_csrrData; // @[MidStage.scala 24:11]
  assign io_next_csrwData = ff_csrwData; // @[MidStage.scala 24:11]
  assign io_next_excType = ff_excType; // @[MidStage.scala 24:11]
  assign io_next_excValue = ff_excValue; // @[MidStage.scala 24:11]
  assign io_next_inst = ff_inst; // @[MidStage.scala 24:11]
  assign io_next_currentPc = ff_currentPc; // @[MidStage.scala 24:11]
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
  ff_lsuOp = _RAND_3[3:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  ff_lsuData = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  ff_regWen = _RAND_5[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  ff_regWaddr = _RAND_6[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  ff_csrOp = _RAND_7[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  ff_csrAddr = _RAND_8[11:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  ff_csren = _RAND_9[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  ff_csrrData = _RAND_10[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  ff_csrwData = _RAND_11[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  ff_excType = _RAND_12[3:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  ff_excValue = _RAND_13[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  ff_inst = _RAND_14[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  ff_currentPc = _RAND_15[31:0];
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
module EX(
  input  [3:0]  io_id_i_aluOp,
  input  [31:0] io_id_i_opr1,
  input  [31:0] io_id_i_opr2,
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
  wire [31:0] _T_1 = io_id_i_opr1 + io_id_i_opr2; // @[EX.scala 22:22]
  wire [31:0] _T_3 = io_id_i_opr1 - io_id_i_opr2; // @[EX.scala 23:22]
  wire [31:0] _T_4 = io_id_i_opr1 & io_id_i_opr2; // @[EX.scala 24:22]
  wire [31:0] _T_5 = io_id_i_opr1 | io_id_i_opr2; // @[EX.scala 25:22]
  wire [31:0] _T_6 = io_id_i_opr1 ^ io_id_i_opr2; // @[EX.scala 26:22]
  wire [62:0] _GEN_0 = {{31'd0}, io_id_i_opr1}; // @[EX.scala 27:22]
  wire [62:0] _T_8 = _GEN_0 << io_id_i_opr2[4:0]; // @[EX.scala 27:22]
  wire [31:0] _T_12 = $signed(io_id_i_opr1) >>> io_id_i_opr2[4:0]; // @[EX.scala 28:42]
  wire [31:0] _T_14 = io_id_i_opr1 >> io_id_i_opr2[4:0]; // @[EX.scala 29:22]
  wire  _T_17 = $signed(io_id_i_opr1) < $signed(io_id_i_opr2); // @[EX.scala 30:30]
  wire  _T_18 = io_id_i_opr1 < io_id_i_opr2; // @[EX.scala 31:23]
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
  wire [62:0] result = io_id_i_csren ? {{31'd0}, io_id_i_csrrData} : Aluresult; // @[EX.scala 34:19]
  wire  _T_38 = io_id_i_lsuOp != 4'h0; // @[EX.scala 35:31]
  assign io_ex_o_lsuOp = io_id_i_lsuOp; // @[EX.scala 40:24]
  assign io_ex_o_lsuData = io_id_i_lsuData; // @[EX.scala 41:24]
  assign io_ex_o_reg_en = io_id_i_regWen; // @[EX.scala 42:24]
  assign io_ex_o_reg_addr = io_id_i_regWaddr; // @[EX.scala 43:24]
  assign io_ex_o_reg_data = result[31:0]; // @[EX.scala 44:24]
  assign io_ex_o_load = _T_38 & io_id_i_regWen; // @[EX.scala 45:24]
  assign io_ex_o_csr_op = io_id_i_csrOp; // @[EX.scala 47:24]
  assign io_ex_o_csr_addr = io_id_i_csrAddr; // @[EX.scala 48:24]
  assign io_ex_o_csr_data = io_id_i_csrwData; // @[EX.scala 49:24]
  assign io_ex_o_csr_retired = io_id_i_inst != 32'h13; // @[EX.scala 50:24]
  assign io_ex_o_excType = io_id_i_excType; // @[EX.scala 51:24]
  assign io_ex_o_excValue = io_id_i_excValue; // @[EX.scala 52:24]
  assign io_ex_o_inst = io_id_i_inst; // @[EX.scala 54:24]
  assign io_ex_o_currentPc = io_id_i_currentPc; // @[EX.scala 55:24]
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
  wire  _T_1 = ~io_stallNext; // @[MidStage.scala 18:38]
  wire  _T_2 = io_stallPrev & _T_1; // @[MidStage.scala 18:35]
  wire  _T_3 = io_flush | _T_2; // @[MidStage.scala 18:18]
  wire  _T_5 = ~io_stallPrev; // @[MidStage.scala 20:15]
  assign io_next_lsuOp = ff_lsuOp; // @[MidStage.scala 24:11]
  assign io_next_lsuData = ff_lsuData; // @[MidStage.scala 24:11]
  assign io_next_reg_en = ff_reg_en; // @[MidStage.scala 24:11]
  assign io_next_reg_addr = ff_reg_addr; // @[MidStage.scala 24:11]
  assign io_next_reg_data = ff_reg_data; // @[MidStage.scala 24:11]
  assign io_next_csr_op = ff_csr_op; // @[MidStage.scala 24:11]
  assign io_next_csr_addr = ff_csr_addr; // @[MidStage.scala 24:11]
  assign io_next_csr_data = ff_csr_data; // @[MidStage.scala 24:11]
  assign io_next_csr_retired = ff_csr_retired; // @[MidStage.scala 24:11]
  assign io_next_excType = ff_excType; // @[MidStage.scala 24:11]
  assign io_next_excValue = ff_excValue; // @[MidStage.scala 24:11]
  assign io_next_inst = ff_inst; // @[MidStage.scala 24:11]
  assign io_next_currentPc = ff_currentPc; // @[MidStage.scala 24:11]
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
  output [31:0] io_mem_o_inst
);
  wire  mem_clock; // @[MEM.scala 93:19]
  wire  mem_wen; // @[MEM.scala 93:19]
  wire  mem_ren; // @[MEM.scala 93:19]
  wire [31:0] mem_addr; // @[MEM.scala 93:19]
  wire [3:0] mem_mask; // @[MEM.scala 93:19]
  wire  mem_sign; // @[MEM.scala 93:19]
  wire [31:0] mem_wdata; // @[MEM.scala 93:19]
  wire [31:0] mem_rdata; // @[MEM.scala 93:19]
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
  wire [1:0] sel = io_ex_i_reg_data[1:0]; // @[MEM.scala 70:29]
  wire  _T_45 = 2'h2 == width; // @[Mux.scala 68:19]
  wire [3:0] _T_46 = _T_45 ? 4'hf : 4'h0; // @[Mux.scala 68:16]
  wire  _T_47 = 2'h1 == width; // @[Mux.scala 68:19]
  wire [3:0] _T_48 = _T_47 ? 4'h3 : _T_46; // @[Mux.scala 68:16]
  wire  _T_49 = 2'h0 == width; // @[Mux.scala 68:19]
  wire [39:0] _T_51 = {io_ex_i_lsuData, 8'h0}; // @[MEM.scala 81:39]
  wire [47:0] _T_52 = {io_ex_i_lsuData, 16'h0}; // @[MEM.scala 81:39]
  wire [55:0] _T_53 = {io_ex_i_lsuData, 24'h0}; // @[MEM.scala 81:39]
  wire  _T_57 = 2'h3 == sel; // @[Mux.scala 68:19]
  wire [55:0] _T_58 = _T_57 ? _T_53 : 56'h0; // @[Mux.scala 68:16]
  wire  _T_59 = 2'h2 == sel; // @[Mux.scala 68:19]
  wire [55:0] _T_60 = _T_59 ? {{8'd0}, _T_52} : _T_58; // @[Mux.scala 68:16]
  wire  _T_61 = 2'h1 == sel; // @[Mux.scala 68:19]
  wire [55:0] _T_62 = _T_61 ? {{16'd0}, _T_51} : _T_60; // @[Mux.scala 68:16]
  wire  _T_63 = 2'h0 == sel; // @[Mux.scala 68:19]
  wire [55:0] _T_64 = _T_63 ? {{24'd0}, io_ex_i_lsuData} : _T_62; // @[Mux.scala 68:16]
  wire [47:0] _T_66 = _T_59 ? _T_52 : 48'h0; // @[Mux.scala 68:16]
  wire [47:0] _T_68 = _T_63 ? {{16'd0}, io_ex_i_lsuData} : _T_66; // @[Mux.scala 68:16]
  wire [31:0] _T_70 = _T_63 ? io_ex_i_lsuData : 32'h0; // @[Mux.scala 68:16]
  wire [31:0] _T_72 = _T_45 ? _T_70 : 32'h0; // @[Mux.scala 68:16]
  wire [47:0] _T_74 = _T_47 ? _T_68 : {{16'd0}, _T_72}; // @[Mux.scala 68:16]
  wire [55:0] lsuData = _T_49 ? _T_64 : {{8'd0}, _T_74}; // @[Mux.scala 68:16]
  wire  _T_76 = ~wen; // @[MEM.scala 98:17]
  wire  _T_81 = sel != 2'h0; // @[MEM.scala 112:32]
  wire  _T_83 = _T_45 & _T_81; // @[Mux.scala 68:16]
  wire  _T_85 = _T_47 ? sel[0] : _T_83; // @[Mux.scala 68:16]
  wire  memAddr = _T_49 ? 1'h0 : _T_85; // @[Mux.scala 68:16]
  wire  instAddr = io_ex_i_excType == 4'h7; // @[MEM.scala 117:35]
  wire  instIllg = io_ex_i_excType == 4'h5; // @[MEM.scala 118:35]
  wire  _T_87 = io_ex_i_excType == 4'h8; // @[MEM.scala 119:35]
  wire  excMem = _T_87 & memAddr; // @[MEM.scala 119:48]
  wire  excOther = io_ex_i_excType == 4'h1; // @[MEM.scala 120:35]
  wire  _T_88 = instAddr | instIllg; // @[MEM.scala 122:28]
  wire  _T_89 = _T_88 | excMem; // @[MEM.scala 122:40]
  wire  _T_90 = _T_89 | excOther; // @[MEM.scala 122:50]
  wire [30:0] _T_91 = memAddr ? 31'h4 : 31'hd; // @[MEM.scala 126:21]
  wire  _T_92 = 4'h8 == io_ex_i_excType; // @[Mux.scala 68:19]
  wire [30:0] _T_93 = _T_92 ? _T_91 : 31'h0; // @[Mux.scala 68:16]
  wire  _T_94 = 4'h1 == io_ex_i_excType; // @[Mux.scala 68:19]
  wire [30:0] cause = _T_94 ? 31'hb : _T_93; // @[Mux.scala 68:16]
  wire [30:0] _T_95 = instAddr ? 31'h0 : cause; // @[MEM.scala 128:50]
  wire [31:0] _T_96 = memAddr ? io_ex_i_reg_data : io_ex_i_excValue; // @[MEM.scala 130:50]
  wire  _T_97 = ~mem_wen; // @[MEM.scala 141:26]
  wire  _T_98 = wen & _T_97; // @[MEM.scala 141:23]
  wire  _T_99 = ~mem_ren; // @[MEM.scala 141:50]
  wire  _T_100 = ren & _T_99; // @[MEM.scala 141:47]
  wire  _T_101 = _T_98 | _T_100; // @[MEM.scala 141:39]
  awrite mem ( // @[MEM.scala 93:19]
    .clock(mem_clock),
    .wen(mem_wen),
    .ren(mem_ren),
    .addr(mem_addr),
    .mask(mem_mask),
    .sign(mem_sign),
    .wdata(mem_wdata),
    .rdata(mem_rdata)
  );
  assign io_stallReq = _T_101 | io_csrBusy; // @[MEM.scala 141:15]
  assign io_except_hasTrap = _T_90 | io_csrHasInt; // @[MEM.scala 134:21]
  assign io_except_excCause = instIllg ? 31'h2 : _T_95; // @[MEM.scala 135:22]
  assign io_except_excPc = io_ex_i_currentPc; // @[MEM.scala 133:19]
  assign io_except_excValue = instIllg ? io_ex_i_inst : _T_96; // @[MEM.scala 136:22]
  assign io_mem_o_reg_en = io_ex_i_reg_en; // @[MEM.scala 146:19]
  assign io_mem_o_reg_addr = io_ex_i_reg_addr; // @[MEM.scala 147:21]
  assign io_mem_o_reg_data = ren ? mem_rdata : io_ex_i_reg_data; // @[MEM.scala 148:21]
  assign io_mem_o_csr_op = io_ex_i_csr_op; // @[MEM.scala 149:16]
  assign io_mem_o_csr_addr = io_ex_i_csr_addr; // @[MEM.scala 149:16]
  assign io_mem_o_csr_data = io_ex_i_csr_data; // @[MEM.scala 149:16]
  assign io_mem_o_csr_retired = io_ex_i_csr_retired; // @[MEM.scala 149:16]
  assign io_mem_o_currentPc = io_ex_i_currentPc; // @[MEM.scala 144:22]
  assign io_mem_o_inst = io_ex_i_inst; // @[MEM.scala 145:17]
  assign mem_clock = clock; // @[MEM.scala 96:16]
  assign mem_wen = _T_1 ? 1'h0 : _T_22; // @[MEM.scala 97:14]
  assign mem_ren = _T_76 & ren; // @[MEM.scala 98:14]
  assign mem_addr = {io_ex_i_reg_data[31:2],2'h0}; // @[MEM.scala 99:15]
  assign mem_mask = _T_49 ? 4'h1 : _T_48; // @[MEM.scala 100:15]
  assign mem_sign = _T_1 | _T_3; // @[MEM.scala 101:15]
  assign mem_wdata = lsuData[31:0]; // @[MEM.scala 102:16]
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
  wire  _T_1 = ~io_stallNext; // @[MidStage.scala 18:38]
  wire  _T_2 = io_stallPrev & _T_1; // @[MidStage.scala 18:35]
  wire  _T_3 = io_flush | _T_2; // @[MidStage.scala 18:18]
  wire  _T_5 = ~io_stallPrev; // @[MidStage.scala 20:15]
  assign io_next_reg_en = ff_reg_en; // @[MidStage.scala 24:11]
  assign io_next_reg_addr = ff_reg_addr; // @[MidStage.scala 24:11]
  assign io_next_reg_data = ff_reg_data; // @[MidStage.scala 24:11]
  assign io_next_csr_op = ff_csr_op; // @[MidStage.scala 24:11]
  assign io_next_csr_addr = ff_csr_addr; // @[MidStage.scala 24:11]
  assign io_next_csr_data = ff_csr_data; // @[MidStage.scala 24:11]
  assign io_next_csr_retired = ff_csr_retired; // @[MidStage.scala 24:11]
  assign io_next_currentPc = ff_currentPc; // @[MidStage.scala 24:11]
  assign io_next_inst = ff_inst; // @[MidStage.scala 24:11]
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
  wire [4:0] _T_2 = io_loadflag ? 5'h18 : 5'h0; // @[crtl.scala 31:18]
  wire [4:0] _T_3 = io_csrflag ? 5'h1c : _T_2; // @[crtl.scala 30:18]
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
  wire [31:0] _T_580 = {{1'd0}, flagIntS[31:1]}; // @[csr.scala 143:17]
  wire [30:0] _T_582 = _T_580[0] ? 31'h1 : 31'h5; // @[csr.scala 143:8]
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
module Core(
  input         clock,
  input         reset,
  input         io_timer,
  input         io_soft,
  input         io_extern,
  output [31:0] io_inst,
  output [31:0] io_pc,
  output [31:0] io_npc,
  output [31:0] io_next,
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
  output [31:0] io_result
);
  wire  fetch_clock; // @[core.scala 34:19]
  wire  fetch_reset; // @[core.scala 34:19]
  wire  fetch_io_flush; // @[core.scala 34:19]
  wire [31:0] fetch_io_flush_pc; // @[core.scala 34:19]
  wire  fetch_io_stall; // @[core.scala 34:19]
  wire [31:0] fetch_io_IF_pc; // @[core.scala 34:19]
  wire [31:0] fetch_io_IF_inst; // @[core.scala 34:19]
  wire  fetch_io_IF_bpu_take; // @[core.scala 34:19]
  wire [31:0] fetch_io_IF_bpu_takepc; // @[core.scala 34:19]
  wire  fetch_io_IF_misaligned; // @[core.scala 34:19]
  wire  fetch_io_prdt_taken_o; // @[core.scala 34:19]
  wire [31:0] fetch_io_prdt_addr_o; // @[core.scala 34:19]
  wire  IF_ID_clock; // @[core.scala 35:20]
  wire  IF_ID_reset; // @[core.scala 35:20]
  wire  IF_ID_io_flush; // @[core.scala 35:20]
  wire  IF_ID_io_stallPrev; // @[core.scala 35:20]
  wire  IF_ID_io_stallNext; // @[core.scala 35:20]
  wire [31:0] IF_ID_io_prev_pc; // @[core.scala 35:20]
  wire [31:0] IF_ID_io_prev_inst; // @[core.scala 35:20]
  wire  IF_ID_io_prev_bpu_take; // @[core.scala 35:20]
  wire [31:0] IF_ID_io_prev_bpu_takepc; // @[core.scala 35:20]
  wire  IF_ID_io_prev_misaligned; // @[core.scala 35:20]
  wire [31:0] IF_ID_io_next_pc; // @[core.scala 35:20]
  wire  IF_ID_io_next_valid; // @[core.scala 35:20]
  wire [31:0] IF_ID_io_next_inst; // @[core.scala 35:20]
  wire  IF_ID_io_next_bpu_take; // @[core.scala 35:20]
  wire [31:0] IF_ID_io_next_bpu_takepc; // @[core.scala 35:20]
  wire  IF_ID_io_next_misaligned; // @[core.scala 35:20]
  wire  ID_clock; // @[core.scala 36:16]
  wire  ID_reset; // @[core.scala 36:16]
  wire [31:0] ID_io_if_i_pc; // @[core.scala 36:16]
  wire  ID_io_if_i_valid; // @[core.scala 36:16]
  wire [31:0] ID_io_if_i_inst; // @[core.scala 36:16]
  wire  ID_io_if_i_bpu_take; // @[core.scala 36:16]
  wire [31:0] ID_io_if_i_bpu_takepc; // @[core.scala 36:16]
  wire  ID_io_if_i_misaligned; // @[core.scala 36:16]
  wire  ID_io_read1_en; // @[core.scala 36:16]
  wire [4:0] ID_io_read1_addr; // @[core.scala 36:16]
  wire [31:0] ID_io_read1_data; // @[core.scala 36:16]
  wire  ID_io_read2_en; // @[core.scala 36:16]
  wire [4:0] ID_io_read2_addr; // @[core.scala 36:16]
  wire [31:0] ID_io_read2_data; // @[core.scala 36:16]
  wire  ID_io_stallid; // @[core.scala 36:16]
  wire [31:0] ID_io_csrread_csr_rdata; // @[core.scala 36:16]
  wire [31:0] ID_io_csrread_csr_raddr; // @[core.scala 36:16]
  wire [2:0] ID_io_csrread_csr_op; // @[core.scala 36:16]
  wire  ID_io_csrread_csr_valid; // @[core.scala 36:16]
  wire  ID_io_flush; // @[core.scala 36:16]
  wire [31:0] ID_io_flushpc; // @[core.scala 36:16]
  wire [3:0] ID_io_id_o_aluOp; // @[core.scala 36:16]
  wire [31:0] ID_io_id_o_opr1; // @[core.scala 36:16]
  wire [31:0] ID_io_id_o_opr2; // @[core.scala 36:16]
  wire [3:0] ID_io_id_o_lsuOp; // @[core.scala 36:16]
  wire [31:0] ID_io_id_o_lsuData; // @[core.scala 36:16]
  wire  ID_io_id_o_regWen; // @[core.scala 36:16]
  wire [4:0] ID_io_id_o_regWaddr; // @[core.scala 36:16]
  wire [2:0] ID_io_id_o_csrOp; // @[core.scala 36:16]
  wire [11:0] ID_io_id_o_csrAddr; // @[core.scala 36:16]
  wire  ID_io_id_o_csren; // @[core.scala 36:16]
  wire [31:0] ID_io_id_o_csrrData; // @[core.scala 36:16]
  wire [31:0] ID_io_id_o_csrwData; // @[core.scala 36:16]
  wire [3:0] ID_io_id_o_excType; // @[core.scala 36:16]
  wire [31:0] ID_io_id_o_excValue; // @[core.scala 36:16]
  wire [31:0] ID_io_id_o_inst; // @[core.scala 36:16]
  wire [31:0] ID_io_id_o_currentPc; // @[core.scala 36:16]
  wire  ID_EX_clock; // @[core.scala 37:20]
  wire  ID_EX_reset; // @[core.scala 37:20]
  wire  ID_EX_io_flush; // @[core.scala 37:20]
  wire  ID_EX_io_stallPrev; // @[core.scala 37:20]
  wire  ID_EX_io_stallNext; // @[core.scala 37:20]
  wire [3:0] ID_EX_io_prev_aluOp; // @[core.scala 37:20]
  wire [31:0] ID_EX_io_prev_opr1; // @[core.scala 37:20]
  wire [31:0] ID_EX_io_prev_opr2; // @[core.scala 37:20]
  wire [3:0] ID_EX_io_prev_lsuOp; // @[core.scala 37:20]
  wire [31:0] ID_EX_io_prev_lsuData; // @[core.scala 37:20]
  wire  ID_EX_io_prev_regWen; // @[core.scala 37:20]
  wire [4:0] ID_EX_io_prev_regWaddr; // @[core.scala 37:20]
  wire [2:0] ID_EX_io_prev_csrOp; // @[core.scala 37:20]
  wire [11:0] ID_EX_io_prev_csrAddr; // @[core.scala 37:20]
  wire  ID_EX_io_prev_csren; // @[core.scala 37:20]
  wire [31:0] ID_EX_io_prev_csrrData; // @[core.scala 37:20]
  wire [31:0] ID_EX_io_prev_csrwData; // @[core.scala 37:20]
  wire [3:0] ID_EX_io_prev_excType; // @[core.scala 37:20]
  wire [31:0] ID_EX_io_prev_excValue; // @[core.scala 37:20]
  wire [31:0] ID_EX_io_prev_inst; // @[core.scala 37:20]
  wire [31:0] ID_EX_io_prev_currentPc; // @[core.scala 37:20]
  wire [3:0] ID_EX_io_next_aluOp; // @[core.scala 37:20]
  wire [31:0] ID_EX_io_next_opr1; // @[core.scala 37:20]
  wire [31:0] ID_EX_io_next_opr2; // @[core.scala 37:20]
  wire [3:0] ID_EX_io_next_lsuOp; // @[core.scala 37:20]
  wire [31:0] ID_EX_io_next_lsuData; // @[core.scala 37:20]
  wire  ID_EX_io_next_regWen; // @[core.scala 37:20]
  wire [4:0] ID_EX_io_next_regWaddr; // @[core.scala 37:20]
  wire [2:0] ID_EX_io_next_csrOp; // @[core.scala 37:20]
  wire [11:0] ID_EX_io_next_csrAddr; // @[core.scala 37:20]
  wire  ID_EX_io_next_csren; // @[core.scala 37:20]
  wire [31:0] ID_EX_io_next_csrrData; // @[core.scala 37:20]
  wire [31:0] ID_EX_io_next_csrwData; // @[core.scala 37:20]
  wire [3:0] ID_EX_io_next_excType; // @[core.scala 37:20]
  wire [31:0] ID_EX_io_next_excValue; // @[core.scala 37:20]
  wire [31:0] ID_EX_io_next_inst; // @[core.scala 37:20]
  wire [31:0] ID_EX_io_next_currentPc; // @[core.scala 37:20]
  wire [3:0] EX_io_id_i_aluOp; // @[core.scala 38:16]
  wire [31:0] EX_io_id_i_opr1; // @[core.scala 38:16]
  wire [31:0] EX_io_id_i_opr2; // @[core.scala 38:16]
  wire [3:0] EX_io_id_i_lsuOp; // @[core.scala 38:16]
  wire [31:0] EX_io_id_i_lsuData; // @[core.scala 38:16]
  wire  EX_io_id_i_regWen; // @[core.scala 38:16]
  wire [4:0] EX_io_id_i_regWaddr; // @[core.scala 38:16]
  wire [2:0] EX_io_id_i_csrOp; // @[core.scala 38:16]
  wire [11:0] EX_io_id_i_csrAddr; // @[core.scala 38:16]
  wire  EX_io_id_i_csren; // @[core.scala 38:16]
  wire [31:0] EX_io_id_i_csrrData; // @[core.scala 38:16]
  wire [31:0] EX_io_id_i_csrwData; // @[core.scala 38:16]
  wire [3:0] EX_io_id_i_excType; // @[core.scala 38:16]
  wire [31:0] EX_io_id_i_excValue; // @[core.scala 38:16]
  wire [31:0] EX_io_id_i_inst; // @[core.scala 38:16]
  wire [31:0] EX_io_id_i_currentPc; // @[core.scala 38:16]
  wire [3:0] EX_io_ex_o_lsuOp; // @[core.scala 38:16]
  wire [31:0] EX_io_ex_o_lsuData; // @[core.scala 38:16]
  wire  EX_io_ex_o_reg_en; // @[core.scala 38:16]
  wire [4:0] EX_io_ex_o_reg_addr; // @[core.scala 38:16]
  wire [31:0] EX_io_ex_o_reg_data; // @[core.scala 38:16]
  wire  EX_io_ex_o_load; // @[core.scala 38:16]
  wire [2:0] EX_io_ex_o_csr_op; // @[core.scala 38:16]
  wire [11:0] EX_io_ex_o_csr_addr; // @[core.scala 38:16]
  wire [31:0] EX_io_ex_o_csr_data; // @[core.scala 38:16]
  wire  EX_io_ex_o_csr_retired; // @[core.scala 38:16]
  wire [3:0] EX_io_ex_o_excType; // @[core.scala 38:16]
  wire [31:0] EX_io_ex_o_excValue; // @[core.scala 38:16]
  wire [31:0] EX_io_ex_o_inst; // @[core.scala 38:16]
  wire [31:0] EX_io_ex_o_currentPc; // @[core.scala 38:16]
  wire  EX_MEM_clock; // @[core.scala 39:21]
  wire  EX_MEM_reset; // @[core.scala 39:21]
  wire  EX_MEM_io_flush; // @[core.scala 39:21]
  wire  EX_MEM_io_stallPrev; // @[core.scala 39:21]
  wire  EX_MEM_io_stallNext; // @[core.scala 39:21]
  wire [3:0] EX_MEM_io_prev_lsuOp; // @[core.scala 39:21]
  wire [31:0] EX_MEM_io_prev_lsuData; // @[core.scala 39:21]
  wire  EX_MEM_io_prev_reg_en; // @[core.scala 39:21]
  wire [4:0] EX_MEM_io_prev_reg_addr; // @[core.scala 39:21]
  wire [31:0] EX_MEM_io_prev_reg_data; // @[core.scala 39:21]
  wire [2:0] EX_MEM_io_prev_csr_op; // @[core.scala 39:21]
  wire [11:0] EX_MEM_io_prev_csr_addr; // @[core.scala 39:21]
  wire [31:0] EX_MEM_io_prev_csr_data; // @[core.scala 39:21]
  wire  EX_MEM_io_prev_csr_retired; // @[core.scala 39:21]
  wire [3:0] EX_MEM_io_prev_excType; // @[core.scala 39:21]
  wire [31:0] EX_MEM_io_prev_excValue; // @[core.scala 39:21]
  wire [31:0] EX_MEM_io_prev_inst; // @[core.scala 39:21]
  wire [31:0] EX_MEM_io_prev_currentPc; // @[core.scala 39:21]
  wire [3:0] EX_MEM_io_next_lsuOp; // @[core.scala 39:21]
  wire [31:0] EX_MEM_io_next_lsuData; // @[core.scala 39:21]
  wire  EX_MEM_io_next_reg_en; // @[core.scala 39:21]
  wire [4:0] EX_MEM_io_next_reg_addr; // @[core.scala 39:21]
  wire [31:0] EX_MEM_io_next_reg_data; // @[core.scala 39:21]
  wire [2:0] EX_MEM_io_next_csr_op; // @[core.scala 39:21]
  wire [11:0] EX_MEM_io_next_csr_addr; // @[core.scala 39:21]
  wire [31:0] EX_MEM_io_next_csr_data; // @[core.scala 39:21]
  wire  EX_MEM_io_next_csr_retired; // @[core.scala 39:21]
  wire [3:0] EX_MEM_io_next_excType; // @[core.scala 39:21]
  wire [31:0] EX_MEM_io_next_excValue; // @[core.scala 39:21]
  wire [31:0] EX_MEM_io_next_inst; // @[core.scala 39:21]
  wire [31:0] EX_MEM_io_next_currentPc; // @[core.scala 39:21]
  wire  MEM_clock; // @[core.scala 40:17]
  wire [3:0] MEM_io_ex_i_lsuOp; // @[core.scala 40:17]
  wire [31:0] MEM_io_ex_i_lsuData; // @[core.scala 40:17]
  wire  MEM_io_ex_i_reg_en; // @[core.scala 40:17]
  wire [4:0] MEM_io_ex_i_reg_addr; // @[core.scala 40:17]
  wire [31:0] MEM_io_ex_i_reg_data; // @[core.scala 40:17]
  wire [2:0] MEM_io_ex_i_csr_op; // @[core.scala 40:17]
  wire [11:0] MEM_io_ex_i_csr_addr; // @[core.scala 40:17]
  wire [31:0] MEM_io_ex_i_csr_data; // @[core.scala 40:17]
  wire  MEM_io_ex_i_csr_retired; // @[core.scala 40:17]
  wire [3:0] MEM_io_ex_i_excType; // @[core.scala 40:17]
  wire [31:0] MEM_io_ex_i_excValue; // @[core.scala 40:17]
  wire [31:0] MEM_io_ex_i_inst; // @[core.scala 40:17]
  wire [31:0] MEM_io_ex_i_currentPc; // @[core.scala 40:17]
  wire  MEM_io_stallReq; // @[core.scala 40:17]
  wire  MEM_io_except_hasTrap; // @[core.scala 40:17]
  wire [30:0] MEM_io_except_excCause; // @[core.scala 40:17]
  wire [31:0] MEM_io_except_excPc; // @[core.scala 40:17]
  wire [31:0] MEM_io_except_excValue; // @[core.scala 40:17]
  wire  MEM_io_csrHasInt; // @[core.scala 40:17]
  wire  MEM_io_csrBusy; // @[core.scala 40:17]
  wire  MEM_io_mem_o_reg_en; // @[core.scala 40:17]
  wire [4:0] MEM_io_mem_o_reg_addr; // @[core.scala 40:17]
  wire [31:0] MEM_io_mem_o_reg_data; // @[core.scala 40:17]
  wire [2:0] MEM_io_mem_o_csr_op; // @[core.scala 40:17]
  wire [11:0] MEM_io_mem_o_csr_addr; // @[core.scala 40:17]
  wire [31:0] MEM_io_mem_o_csr_data; // @[core.scala 40:17]
  wire  MEM_io_mem_o_csr_retired; // @[core.scala 40:17]
  wire [31:0] MEM_io_mem_o_currentPc; // @[core.scala 40:17]
  wire [31:0] MEM_io_mem_o_inst; // @[core.scala 40:17]
  wire  MEM_WB_clock; // @[core.scala 41:21]
  wire  MEM_WB_reset; // @[core.scala 41:21]
  wire  MEM_WB_io_flush; // @[core.scala 41:21]
  wire  MEM_WB_io_stallPrev; // @[core.scala 41:21]
  wire  MEM_WB_io_stallNext; // @[core.scala 41:21]
  wire  MEM_WB_io_prev_reg_en; // @[core.scala 41:21]
  wire [4:0] MEM_WB_io_prev_reg_addr; // @[core.scala 41:21]
  wire [31:0] MEM_WB_io_prev_reg_data; // @[core.scala 41:21]
  wire [2:0] MEM_WB_io_prev_csr_op; // @[core.scala 41:21]
  wire [11:0] MEM_WB_io_prev_csr_addr; // @[core.scala 41:21]
  wire [31:0] MEM_WB_io_prev_csr_data; // @[core.scala 41:21]
  wire  MEM_WB_io_prev_csr_retired; // @[core.scala 41:21]
  wire [31:0] MEM_WB_io_prev_currentPc; // @[core.scala 41:21]
  wire [31:0] MEM_WB_io_prev_inst; // @[core.scala 41:21]
  wire  MEM_WB_io_next_reg_en; // @[core.scala 41:21]
  wire [4:0] MEM_WB_io_next_reg_addr; // @[core.scala 41:21]
  wire [31:0] MEM_WB_io_next_reg_data; // @[core.scala 41:21]
  wire [2:0] MEM_WB_io_next_csr_op; // @[core.scala 41:21]
  wire [11:0] MEM_WB_io_next_csr_addr; // @[core.scala 41:21]
  wire [31:0] MEM_WB_io_next_csr_data; // @[core.scala 41:21]
  wire  MEM_WB_io_next_csr_retired; // @[core.scala 41:21]
  wire [31:0] MEM_WB_io_next_currentPc; // @[core.scala 41:21]
  wire [31:0] MEM_WB_io_next_inst; // @[core.scala 41:21]
  wire  WB_io_mem_i_reg_en; // @[core.scala 42:16]
  wire [4:0] WB_io_mem_i_reg_addr; // @[core.scala 42:16]
  wire [31:0] WB_io_mem_i_reg_data; // @[core.scala 42:16]
  wire [2:0] WB_io_mem_i_csr_op; // @[core.scala 42:16]
  wire [11:0] WB_io_mem_i_csr_addr; // @[core.scala 42:16]
  wire [31:0] WB_io_mem_i_csr_data; // @[core.scala 42:16]
  wire  WB_io_mem_i_csr_retired; // @[core.scala 42:16]
  wire [31:0] WB_io_mem_i_currentPc; // @[core.scala 42:16]
  wire [31:0] WB_io_mem_i_inst; // @[core.scala 42:16]
  wire  WB_io_regen; // @[core.scala 42:16]
  wire [4:0] WB_io_regaddr; // @[core.scala 42:16]
  wire [31:0] WB_io_regdata; // @[core.scala 42:16]
  wire [2:0] WB_io_csr_op; // @[core.scala 42:16]
  wire [11:0] WB_io_csr_addr; // @[core.scala 42:16]
  wire [31:0] WB_io_csr_data; // @[core.scala 42:16]
  wire  WB_io_csr_retired; // @[core.scala 42:16]
  wire [31:0] WB_io_wb_pc; // @[core.scala 42:16]
  wire [31:0] WB_io_wbinst; // @[core.scala 42:16]
  wire  dpic_wb_commit; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_0; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_1; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_2; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_3; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_4; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_5; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_6; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_7; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_8; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_9; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_10; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_11; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_12; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_13; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_14; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_15; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_16; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_17; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_18; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_19; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_20; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_21; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_22; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_23; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_24; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_25; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_26; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_27; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_28; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_29; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_30; // @[core.scala 43:18]
  wire [31:0] dpic_s_regs_31; // @[core.scala 43:18]
  wire  regfile_clock; // @[core.scala 44:21]
  wire  regfile_reset; // @[core.scala 44:21]
  wire  regfile_io_read1_en; // @[core.scala 44:21]
  wire [4:0] regfile_io_read1_addr; // @[core.scala 44:21]
  wire [31:0] regfile_io_read1_data; // @[core.scala 44:21]
  wire  regfile_io_read2_en; // @[core.scala 44:21]
  wire [4:0] regfile_io_read2_addr; // @[core.scala 44:21]
  wire [31:0] regfile_io_read2_data; // @[core.scala 44:21]
  wire  regfile_io_en; // @[core.scala 44:21]
  wire [4:0] regfile_io_addr; // @[core.scala 44:21]
  wire [31:0] regfile_io_data; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_0; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_1; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_2; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_3; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_4; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_5; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_6; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_7; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_8; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_9; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_10; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_11; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_12; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_13; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_14; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_15; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_16; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_17; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_18; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_19; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_20; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_21; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_22; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_23; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_24; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_25; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_26; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_27; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_28; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_29; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_30; // @[core.scala 44:21]
  wire [31:0] regfile_io_s_regs_31; // @[core.scala 44:21]
  wire  resoler_io_id_read1_en; // @[core.scala 45:21]
  wire [4:0] resoler_io_id_read1_addr; // @[core.scala 45:21]
  wire [31:0] resoler_io_id_read1_data; // @[core.scala 45:21]
  wire  resoler_io_id_read2_en; // @[core.scala 45:21]
  wire [4:0] resoler_io_id_read2_addr; // @[core.scala 45:21]
  wire [31:0] resoler_io_id_read2_data; // @[core.scala 45:21]
  wire [31:0] resoler_io_csrRead_csr_rdata; // @[core.scala 45:21]
  wire [31:0] resoler_io_csrRead_csr_raddr; // @[core.scala 45:21]
  wire [2:0] resoler_io_csrRead_csr_op; // @[core.scala 45:21]
  wire  resoler_io_csrRead_csr_valid; // @[core.scala 45:21]
  wire  resoler_io_rs1_en; // @[core.scala 45:21]
  wire [4:0] resoler_io_rs1_addr; // @[core.scala 45:21]
  wire [31:0] resoler_io_rs1_data; // @[core.scala 45:21]
  wire  resoler_io_rs2_en; // @[core.scala 45:21]
  wire [4:0] resoler_io_rs2_addr; // @[core.scala 45:21]
  wire [31:0] resoler_io_rs2_data; // @[core.scala 45:21]
  wire [31:0] resoler_io_csr_csr_rdata; // @[core.scala 45:21]
  wire [31:0] resoler_io_csr_csr_raddr; // @[core.scala 45:21]
  wire [2:0] resoler_io_csr_csr_op; // @[core.scala 45:21]
  wire  resoler_io_csr_csr_valid; // @[core.scala 45:21]
  wire  resoler_io_load; // @[core.scala 45:21]
  wire  resoler_io_ex_reg_en; // @[core.scala 45:21]
  wire [4:0] resoler_io_ex_reg_addr; // @[core.scala 45:21]
  wire [31:0] resoler_io_ex_reg_data; // @[core.scala 45:21]
  wire [2:0] resoler_io_ex_csr_op; // @[core.scala 45:21]
  wire [11:0] resoler_io_ex_csr_addr; // @[core.scala 45:21]
  wire  resoler_io_mem_reg_en; // @[core.scala 45:21]
  wire [4:0] resoler_io_mem_reg_addr; // @[core.scala 45:21]
  wire [31:0] resoler_io_mem_reg_data; // @[core.scala 45:21]
  wire [2:0] resoler_io_mem_csr_op; // @[core.scala 45:21]
  wire [11:0] resoler_io_mem_csr_addr; // @[core.scala 45:21]
  wire  resoler_io_wb_reg_en; // @[core.scala 45:21]
  wire [4:0] resoler_io_wb_reg_addr; // @[core.scala 45:21]
  wire [31:0] resoler_io_wb_reg_data; // @[core.scala 45:21]
  wire [2:0] resoler_io_wb_csr_op; // @[core.scala 45:21]
  wire [11:0] resoler_io_wb_csr_addr; // @[core.scala 45:21]
  wire  resoler_io_loadflag; // @[core.scala 45:21]
  wire  resoler_io_csrflag; // @[core.scala 45:21]
  wire  ctrl_io_id_flush; // @[core.scala 46:18]
  wire [31:0] ctrl_io_id_flushpc; // @[core.scala 46:18]
  wire  ctrl_io_mem_stall; // @[core.scala 46:18]
  wire  ctrl_io_loadflag; // @[core.scala 46:18]
  wire  ctrl_io_csrflag; // @[core.scala 46:18]
  wire  ctrl_io_except_hasTrap; // @[core.scala 46:18]
  wire [31:0] ctrl_io_csrTvec; // @[core.scala 46:18]
  wire  ctrl_io_stallIf; // @[core.scala 46:18]
  wire  ctrl_io_stallId; // @[core.scala 46:18]
  wire  ctrl_io_stallEx; // @[core.scala 46:18]
  wire  ctrl_io_stallMm; // @[core.scala 46:18]
  wire  ctrl_io_stallWb; // @[core.scala 46:18]
  wire  ctrl_io_flush; // @[core.scala 46:18]
  wire  ctrl_io_flushIf; // @[core.scala 46:18]
  wire [31:0] ctrl_io_flushPc; // @[core.scala 46:18]
  wire  csr_clock; // @[core.scala 47:17]
  wire  csr_reset; // @[core.scala 47:17]
  wire [31:0] csr_io_read_csr_rdata; // @[core.scala 47:17]
  wire [31:0] csr_io_read_csr_raddr; // @[core.scala 47:17]
  wire [2:0] csr_io_read_csr_op; // @[core.scala 47:17]
  wire  csr_io_read_csr_valid; // @[core.scala 47:17]
  wire [2:0] csr_io_write_op; // @[core.scala 47:17]
  wire [11:0] csr_io_write_addr; // @[core.scala 47:17]
  wire [31:0] csr_io_write_data; // @[core.scala 47:17]
  wire  csr_io_write_retired; // @[core.scala 47:17]
  wire  csr_io_except_hasTrap; // @[core.scala 47:17]
  wire [30:0] csr_io_except_excCause; // @[core.scala 47:17]
  wire [31:0] csr_io_except_excPc; // @[core.scala 47:17]
  wire [31:0] csr_io_except_excValue; // @[core.scala 47:17]
  wire  csr_io_timer; // @[core.scala 47:17]
  wire  csr_io_soft; // @[core.scala 47:17]
  wire  csr_io_extern; // @[core.scala 47:17]
  wire  csr_io_hasInt; // @[core.scala 47:17]
  wire  csr_io_busy; // @[core.scala 47:17]
  wire [31:0] csr_io_trapVec; // @[core.scala 47:17]
  IF fetch ( // @[core.scala 34:19]
    .clock(fetch_clock),
    .reset(fetch_reset),
    .io_flush(fetch_io_flush),
    .io_flush_pc(fetch_io_flush_pc),
    .io_stall(fetch_io_stall),
    .io_IF_pc(fetch_io_IF_pc),
    .io_IF_inst(fetch_io_IF_inst),
    .io_IF_bpu_take(fetch_io_IF_bpu_take),
    .io_IF_bpu_takepc(fetch_io_IF_bpu_takepc),
    .io_IF_misaligned(fetch_io_IF_misaligned),
    .io_prdt_taken_o(fetch_io_prdt_taken_o),
    .io_prdt_addr_o(fetch_io_prdt_addr_o)
  );
  MidStage IF_ID ( // @[core.scala 35:20]
    .clock(IF_ID_clock),
    .reset(IF_ID_reset),
    .io_flush(IF_ID_io_flush),
    .io_stallPrev(IF_ID_io_stallPrev),
    .io_stallNext(IF_ID_io_stallNext),
    .io_prev_pc(IF_ID_io_prev_pc),
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
  ID ID ( // @[core.scala 36:16]
    .clock(ID_clock),
    .reset(ID_reset),
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
  MidStage_1 ID_EX ( // @[core.scala 37:20]
    .clock(ID_EX_clock),
    .reset(ID_EX_reset),
    .io_flush(ID_EX_io_flush),
    .io_stallPrev(ID_EX_io_stallPrev),
    .io_stallNext(ID_EX_io_stallNext),
    .io_prev_aluOp(ID_EX_io_prev_aluOp),
    .io_prev_opr1(ID_EX_io_prev_opr1),
    .io_prev_opr2(ID_EX_io_prev_opr2),
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
  EX EX ( // @[core.scala 38:16]
    .io_id_i_aluOp(EX_io_id_i_aluOp),
    .io_id_i_opr1(EX_io_id_i_opr1),
    .io_id_i_opr2(EX_io_id_i_opr2),
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
  MidStage_2 EX_MEM ( // @[core.scala 39:21]
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
  MEM MEM ( // @[core.scala 40:17]
    .clock(MEM_clock),
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
    .io_mem_o_inst(MEM_io_mem_o_inst)
  );
  MidStage_3 MEM_WB ( // @[core.scala 41:21]
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
  WB WB ( // @[core.scala 42:16]
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
  DpiBlackBox dpic ( // @[core.scala 43:18]
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
  RegFile regfile ( // @[core.scala 44:21]
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
  resolver resoler ( // @[core.scala 45:21]
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
  crtl ctrl ( // @[core.scala 46:18]
    .io_id_flush(ctrl_io_id_flush),
    .io_id_flushpc(ctrl_io_id_flushpc),
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
  csr csr ( // @[core.scala 47:17]
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
  assign io_inst = fetch_io_IF_inst; // @[core.scala 84:10]
  assign io_pc = WB_io_wb_pc; // @[core.scala 85:8]
  assign io_npc = fetch_io_IF_pc; // @[core.scala 86:9]
  assign io_next = {{28'd0}, MEM_io_ex_i_excType}; // @[core.scala 131:10]
  assign io_flushpc = ctrl_io_flushPc; // @[core.scala 130:13]
  assign io_flush = ctrl_io_flushIf; // @[core.scala 128:11]
  assign io_stall = ctrl_io_stallId; // @[core.scala 129:11]
  assign io_wbinst = WB_io_wbinst; // @[core.scala 140:12]
  assign io_bputake = fetch_io_prdt_taken_o; // @[core.scala 132:13]
  assign io_bpuaddr = fetch_io_prdt_addr_o; // @[core.scala 133:13]
  assign io_idpc = ID_io_if_i_pc; // @[core.scala 134:10]
  assign io_idinst = IF_ID_io_next_inst; // @[core.scala 135:12]
  assign io_expc = EX_io_id_i_currentPc; // @[core.scala 136:10]
  assign io_exinst = EX_io_id_i_inst; // @[core.scala 137:12]
  assign io_mempc = MEM_io_ex_i_currentPc; // @[core.scala 138:11]
  assign io_meminst = MEM_io_ex_i_inst; // @[core.scala 139:13]
  assign io_result = WB_io_regdata; // @[core.scala 141:12]
  assign fetch_clock = clock;
  assign fetch_reset = reset;
  assign fetch_io_flush = ctrl_io_flushIf; // @[core.scala 51:17]
  assign fetch_io_flush_pc = ctrl_io_flushPc; // @[core.scala 53:20]
  assign fetch_io_stall = ctrl_io_stallIf; // @[core.scala 52:17]
  assign IF_ID_clock = clock;
  assign IF_ID_reset = reset;
  assign IF_ID_io_flush = ctrl_io_flushIf; // @[core.scala 55:17]
  assign IF_ID_io_stallPrev = ctrl_io_stallIf; // @[core.scala 56:21]
  assign IF_ID_io_stallNext = ctrl_io_stallId; // @[core.scala 57:21]
  assign IF_ID_io_prev_pc = fetch_io_IF_pc; // @[core.scala 54:16]
  assign IF_ID_io_prev_inst = fetch_io_IF_inst; // @[core.scala 54:16]
  assign IF_ID_io_prev_bpu_take = fetch_io_IF_bpu_take; // @[core.scala 54:16]
  assign IF_ID_io_prev_bpu_takepc = fetch_io_IF_bpu_takepc; // @[core.scala 54:16]
  assign IF_ID_io_prev_misaligned = fetch_io_IF_misaligned; // @[core.scala 54:16]
  assign ID_clock = clock;
  assign ID_reset = reset;
  assign ID_io_if_i_pc = IF_ID_io_next_pc; // @[core.scala 59:13]
  assign ID_io_if_i_valid = IF_ID_io_next_valid; // @[core.scala 59:13]
  assign ID_io_if_i_inst = IF_ID_io_next_inst; // @[core.scala 59:13]
  assign ID_io_if_i_bpu_take = IF_ID_io_next_bpu_take; // @[core.scala 59:13]
  assign ID_io_if_i_bpu_takepc = IF_ID_io_next_bpu_takepc; // @[core.scala 59:13]
  assign ID_io_if_i_misaligned = IF_ID_io_next_misaligned; // @[core.scala 59:13]
  assign ID_io_read1_data = resoler_io_id_read1_data; // @[core.scala 60:14]
  assign ID_io_read2_data = resoler_io_id_read2_data; // @[core.scala 61:14]
  assign ID_io_stallid = ctrl_io_stallId; // @[core.scala 62:16]
  assign ID_io_csrread_csr_rdata = resoler_io_csrRead_csr_rdata; // @[core.scala 103:21]
  assign ID_io_csrread_csr_valid = resoler_io_csrRead_csr_valid; // @[core.scala 103:21]
  assign ID_EX_clock = clock;
  assign ID_EX_reset = reset;
  assign ID_EX_io_flush = ctrl_io_flush; // @[core.scala 64:17]
  assign ID_EX_io_stallPrev = ctrl_io_stallId; // @[core.scala 65:21]
  assign ID_EX_io_stallNext = ctrl_io_stallEx; // @[core.scala 66:21]
  assign ID_EX_io_prev_aluOp = ID_io_id_o_aluOp; // @[core.scala 63:16]
  assign ID_EX_io_prev_opr1 = ID_io_id_o_opr1; // @[core.scala 63:16]
  assign ID_EX_io_prev_opr2 = ID_io_id_o_opr2; // @[core.scala 63:16]
  assign ID_EX_io_prev_lsuOp = ID_io_id_o_lsuOp; // @[core.scala 63:16]
  assign ID_EX_io_prev_lsuData = ID_io_id_o_lsuData; // @[core.scala 63:16]
  assign ID_EX_io_prev_regWen = ID_io_id_o_regWen; // @[core.scala 63:16]
  assign ID_EX_io_prev_regWaddr = ID_io_id_o_regWaddr; // @[core.scala 63:16]
  assign ID_EX_io_prev_csrOp = ID_io_id_o_csrOp; // @[core.scala 63:16]
  assign ID_EX_io_prev_csrAddr = ID_io_id_o_csrAddr; // @[core.scala 63:16]
  assign ID_EX_io_prev_csren = ID_io_id_o_csren; // @[core.scala 63:16]
  assign ID_EX_io_prev_csrrData = ID_io_id_o_csrrData; // @[core.scala 63:16]
  assign ID_EX_io_prev_csrwData = ID_io_id_o_csrwData; // @[core.scala 63:16]
  assign ID_EX_io_prev_excType = ID_io_id_o_excType; // @[core.scala 63:16]
  assign ID_EX_io_prev_excValue = ID_io_id_o_excValue; // @[core.scala 63:16]
  assign ID_EX_io_prev_inst = ID_io_id_o_inst; // @[core.scala 63:16]
  assign ID_EX_io_prev_currentPc = ID_io_id_o_currentPc; // @[core.scala 63:16]
  assign EX_io_id_i_aluOp = ID_EX_io_next_aluOp; // @[core.scala 68:13]
  assign EX_io_id_i_opr1 = ID_EX_io_next_opr1; // @[core.scala 68:13]
  assign EX_io_id_i_opr2 = ID_EX_io_next_opr2; // @[core.scala 68:13]
  assign EX_io_id_i_lsuOp = ID_EX_io_next_lsuOp; // @[core.scala 68:13]
  assign EX_io_id_i_lsuData = ID_EX_io_next_lsuData; // @[core.scala 68:13]
  assign EX_io_id_i_regWen = ID_EX_io_next_regWen; // @[core.scala 68:13]
  assign EX_io_id_i_regWaddr = ID_EX_io_next_regWaddr; // @[core.scala 68:13]
  assign EX_io_id_i_csrOp = ID_EX_io_next_csrOp; // @[core.scala 68:13]
  assign EX_io_id_i_csrAddr = ID_EX_io_next_csrAddr; // @[core.scala 68:13]
  assign EX_io_id_i_csren = ID_EX_io_next_csren; // @[core.scala 68:13]
  assign EX_io_id_i_csrrData = ID_EX_io_next_csrrData; // @[core.scala 68:13]
  assign EX_io_id_i_csrwData = ID_EX_io_next_csrwData; // @[core.scala 68:13]
  assign EX_io_id_i_excType = ID_EX_io_next_excType; // @[core.scala 68:13]
  assign EX_io_id_i_excValue = ID_EX_io_next_excValue; // @[core.scala 68:13]
  assign EX_io_id_i_inst = ID_EX_io_next_inst; // @[core.scala 68:13]
  assign EX_io_id_i_currentPc = ID_EX_io_next_currentPc; // @[core.scala 68:13]
  assign EX_MEM_clock = clock;
  assign EX_MEM_reset = reset;
  assign EX_MEM_io_flush = ctrl_io_flush; // @[core.scala 70:18]
  assign EX_MEM_io_stallPrev = ctrl_io_stallEx; // @[core.scala 71:22]
  assign EX_MEM_io_stallNext = ctrl_io_stallMm; // @[core.scala 72:22]
  assign EX_MEM_io_prev_lsuOp = EX_io_ex_o_lsuOp; // @[core.scala 69:17]
  assign EX_MEM_io_prev_lsuData = EX_io_ex_o_lsuData; // @[core.scala 69:17]
  assign EX_MEM_io_prev_reg_en = EX_io_ex_o_reg_en; // @[core.scala 69:17]
  assign EX_MEM_io_prev_reg_addr = EX_io_ex_o_reg_addr; // @[core.scala 69:17]
  assign EX_MEM_io_prev_reg_data = EX_io_ex_o_reg_data; // @[core.scala 69:17]
  assign EX_MEM_io_prev_csr_op = EX_io_ex_o_csr_op; // @[core.scala 69:17]
  assign EX_MEM_io_prev_csr_addr = EX_io_ex_o_csr_addr; // @[core.scala 69:17]
  assign EX_MEM_io_prev_csr_data = EX_io_ex_o_csr_data; // @[core.scala 69:17]
  assign EX_MEM_io_prev_csr_retired = EX_io_ex_o_csr_retired; // @[core.scala 69:17]
  assign EX_MEM_io_prev_excType = EX_io_ex_o_excType; // @[core.scala 69:17]
  assign EX_MEM_io_prev_excValue = EX_io_ex_o_excValue; // @[core.scala 69:17]
  assign EX_MEM_io_prev_inst = EX_io_ex_o_inst; // @[core.scala 69:17]
  assign EX_MEM_io_prev_currentPc = EX_io_ex_o_currentPc; // @[core.scala 69:17]
  assign MEM_clock = clock;
  assign MEM_io_ex_i_lsuOp = EX_MEM_io_next_lsuOp; // @[core.scala 74:14]
  assign MEM_io_ex_i_lsuData = EX_MEM_io_next_lsuData; // @[core.scala 74:14]
  assign MEM_io_ex_i_reg_en = EX_MEM_io_next_reg_en; // @[core.scala 74:14]
  assign MEM_io_ex_i_reg_addr = EX_MEM_io_next_reg_addr; // @[core.scala 74:14]
  assign MEM_io_ex_i_reg_data = EX_MEM_io_next_reg_data; // @[core.scala 74:14]
  assign MEM_io_ex_i_csr_op = EX_MEM_io_next_csr_op; // @[core.scala 74:14]
  assign MEM_io_ex_i_csr_addr = EX_MEM_io_next_csr_addr; // @[core.scala 74:14]
  assign MEM_io_ex_i_csr_data = EX_MEM_io_next_csr_data; // @[core.scala 74:14]
  assign MEM_io_ex_i_csr_retired = EX_MEM_io_next_csr_retired; // @[core.scala 74:14]
  assign MEM_io_ex_i_excType = EX_MEM_io_next_excType; // @[core.scala 74:14]
  assign MEM_io_ex_i_excValue = EX_MEM_io_next_excValue; // @[core.scala 74:14]
  assign MEM_io_ex_i_inst = EX_MEM_io_next_inst; // @[core.scala 74:14]
  assign MEM_io_ex_i_currentPc = EX_MEM_io_next_currentPc; // @[core.scala 74:14]
  assign MEM_io_csrHasInt = csr_io_hasInt; // @[core.scala 76:19]
  assign MEM_io_csrBusy = csr_io_busy; // @[core.scala 75:17]
  assign MEM_WB_clock = clock;
  assign MEM_WB_reset = reset;
  assign MEM_WB_io_flush = ctrl_io_flush; // @[core.scala 79:18]
  assign MEM_WB_io_stallPrev = ctrl_io_stallMm; // @[core.scala 80:22]
  assign MEM_WB_io_stallNext = ctrl_io_stallWb; // @[core.scala 81:22]
  assign MEM_WB_io_prev_reg_en = MEM_io_mem_o_reg_en; // @[core.scala 78:17]
  assign MEM_WB_io_prev_reg_addr = MEM_io_mem_o_reg_addr; // @[core.scala 78:17]
  assign MEM_WB_io_prev_reg_data = MEM_io_mem_o_reg_data; // @[core.scala 78:17]
  assign MEM_WB_io_prev_csr_op = MEM_io_mem_o_csr_op; // @[core.scala 78:17]
  assign MEM_WB_io_prev_csr_addr = MEM_io_mem_o_csr_addr; // @[core.scala 78:17]
  assign MEM_WB_io_prev_csr_data = MEM_io_mem_o_csr_data; // @[core.scala 78:17]
  assign MEM_WB_io_prev_csr_retired = MEM_io_mem_o_csr_retired; // @[core.scala 78:17]
  assign MEM_WB_io_prev_currentPc = MEM_io_mem_o_currentPc; // @[core.scala 78:17]
  assign MEM_WB_io_prev_inst = MEM_io_mem_o_inst; // @[core.scala 78:17]
  assign WB_io_mem_i_reg_en = MEM_WB_io_next_reg_en; // @[core.scala 83:14]
  assign WB_io_mem_i_reg_addr = MEM_WB_io_next_reg_addr; // @[core.scala 83:14]
  assign WB_io_mem_i_reg_data = MEM_WB_io_next_reg_data; // @[core.scala 83:14]
  assign WB_io_mem_i_csr_op = MEM_WB_io_next_csr_op; // @[core.scala 83:14]
  assign WB_io_mem_i_csr_addr = MEM_WB_io_next_csr_addr; // @[core.scala 83:14]
  assign WB_io_mem_i_csr_data = MEM_WB_io_next_csr_data; // @[core.scala 83:14]
  assign WB_io_mem_i_csr_retired = MEM_WB_io_next_csr_retired; // @[core.scala 83:14]
  assign WB_io_mem_i_currentPc = MEM_WB_io_next_currentPc; // @[core.scala 83:14]
  assign WB_io_mem_i_inst = MEM_WB_io_next_inst; // @[core.scala 83:14]
  assign dpic_wb_commit = 1'h0;
  assign dpic_s_regs_0 = regfile_io_s_regs_0; // @[core.scala 124:17]
  assign dpic_s_regs_1 = regfile_io_s_regs_1; // @[core.scala 124:17]
  assign dpic_s_regs_2 = regfile_io_s_regs_2; // @[core.scala 124:17]
  assign dpic_s_regs_3 = regfile_io_s_regs_3; // @[core.scala 124:17]
  assign dpic_s_regs_4 = regfile_io_s_regs_4; // @[core.scala 124:17]
  assign dpic_s_regs_5 = regfile_io_s_regs_5; // @[core.scala 124:17]
  assign dpic_s_regs_6 = regfile_io_s_regs_6; // @[core.scala 124:17]
  assign dpic_s_regs_7 = regfile_io_s_regs_7; // @[core.scala 124:17]
  assign dpic_s_regs_8 = regfile_io_s_regs_8; // @[core.scala 124:17]
  assign dpic_s_regs_9 = regfile_io_s_regs_9; // @[core.scala 124:17]
  assign dpic_s_regs_10 = regfile_io_s_regs_10; // @[core.scala 124:17]
  assign dpic_s_regs_11 = regfile_io_s_regs_11; // @[core.scala 124:17]
  assign dpic_s_regs_12 = regfile_io_s_regs_12; // @[core.scala 124:17]
  assign dpic_s_regs_13 = regfile_io_s_regs_13; // @[core.scala 124:17]
  assign dpic_s_regs_14 = regfile_io_s_regs_14; // @[core.scala 124:17]
  assign dpic_s_regs_15 = regfile_io_s_regs_15; // @[core.scala 124:17]
  assign dpic_s_regs_16 = regfile_io_s_regs_16; // @[core.scala 124:17]
  assign dpic_s_regs_17 = regfile_io_s_regs_17; // @[core.scala 124:17]
  assign dpic_s_regs_18 = regfile_io_s_regs_18; // @[core.scala 124:17]
  assign dpic_s_regs_19 = regfile_io_s_regs_19; // @[core.scala 124:17]
  assign dpic_s_regs_20 = regfile_io_s_regs_20; // @[core.scala 124:17]
  assign dpic_s_regs_21 = regfile_io_s_regs_21; // @[core.scala 124:17]
  assign dpic_s_regs_22 = regfile_io_s_regs_22; // @[core.scala 124:17]
  assign dpic_s_regs_23 = regfile_io_s_regs_23; // @[core.scala 124:17]
  assign dpic_s_regs_24 = regfile_io_s_regs_24; // @[core.scala 124:17]
  assign dpic_s_regs_25 = regfile_io_s_regs_25; // @[core.scala 124:17]
  assign dpic_s_regs_26 = regfile_io_s_regs_26; // @[core.scala 124:17]
  assign dpic_s_regs_27 = regfile_io_s_regs_27; // @[core.scala 124:17]
  assign dpic_s_regs_28 = regfile_io_s_regs_28; // @[core.scala 124:17]
  assign dpic_s_regs_29 = regfile_io_s_regs_29; // @[core.scala 124:17]
  assign dpic_s_regs_30 = regfile_io_s_regs_30; // @[core.scala 124:17]
  assign dpic_s_regs_31 = regfile_io_s_regs_31; // @[core.scala 124:17]
  assign regfile_clock = clock;
  assign regfile_reset = reset;
  assign regfile_io_read1_en = resoler_io_rs1_en; // @[core.scala 88:25]
  assign regfile_io_read1_addr = resoler_io_rs1_addr; // @[core.scala 88:25]
  assign regfile_io_read2_en = resoler_io_rs2_en; // @[core.scala 89:25]
  assign regfile_io_read2_addr = resoler_io_rs2_addr; // @[core.scala 89:25]
  assign regfile_io_en = WB_io_regen; // @[core.scala 90:19]
  assign regfile_io_addr = WB_io_regaddr; // @[core.scala 91:19]
  assign regfile_io_data = WB_io_regdata; // @[core.scala 92:19]
  assign resoler_io_id_read1_en = ID_io_read1_en; // @[core.scala 60:14]
  assign resoler_io_id_read1_addr = ID_io_read1_addr; // @[core.scala 60:14]
  assign resoler_io_id_read2_en = ID_io_read2_en; // @[core.scala 61:14]
  assign resoler_io_id_read2_addr = ID_io_read2_addr; // @[core.scala 61:14]
  assign resoler_io_csrRead_csr_raddr = ID_io_csrread_csr_raddr; // @[core.scala 103:21]
  assign resoler_io_csrRead_csr_op = ID_io_csrread_csr_op; // @[core.scala 103:21]
  assign resoler_io_rs1_data = regfile_io_read1_data; // @[core.scala 88:25]
  assign resoler_io_rs2_data = regfile_io_read2_data; // @[core.scala 89:25]
  assign resoler_io_csr_csr_rdata = csr_io_read_csr_rdata; // @[core.scala 122:14]
  assign resoler_io_csr_csr_valid = csr_io_read_csr_valid; // @[core.scala 122:14]
  assign resoler_io_load = EX_io_ex_o_load; // @[core.scala 94:18]
  assign resoler_io_ex_reg_en = EX_io_ex_o_reg_en; // @[core.scala 95:20]
  assign resoler_io_ex_reg_addr = EX_io_ex_o_reg_addr; // @[core.scala 95:20]
  assign resoler_io_ex_reg_data = EX_io_ex_o_reg_data; // @[core.scala 95:20]
  assign resoler_io_ex_csr_op = EX_io_ex_o_csr_op; // @[core.scala 100:20]
  assign resoler_io_ex_csr_addr = EX_io_ex_o_csr_addr; // @[core.scala 100:20]
  assign resoler_io_mem_reg_en = MEM_io_mem_o_reg_en; // @[core.scala 96:21]
  assign resoler_io_mem_reg_addr = MEM_io_mem_o_reg_addr; // @[core.scala 96:21]
  assign resoler_io_mem_reg_data = MEM_io_mem_o_reg_data; // @[core.scala 96:21]
  assign resoler_io_mem_csr_op = MEM_io_mem_o_csr_op; // @[core.scala 101:21]
  assign resoler_io_mem_csr_addr = MEM_io_mem_o_csr_addr; // @[core.scala 101:21]
  assign resoler_io_wb_reg_en = WB_io_regen; // @[core.scala 97:23]
  assign resoler_io_wb_reg_addr = WB_io_regaddr; // @[core.scala 99:25]
  assign resoler_io_wb_reg_data = WB_io_regdata; // @[core.scala 98:25]
  assign resoler_io_wb_csr_op = WB_io_csr_op; // @[core.scala 102:20]
  assign resoler_io_wb_csr_addr = WB_io_csr_addr; // @[core.scala 102:20]
  assign ctrl_io_id_flush = ID_io_flush; // @[core.scala 109:19]
  assign ctrl_io_id_flushpc = ID_io_flushpc; // @[core.scala 110:21]
  assign ctrl_io_mem_stall = MEM_io_stallReq; // @[core.scala 107:20]
  assign ctrl_io_loadflag = resoler_io_loadflag; // @[core.scala 111:19]
  assign ctrl_io_csrflag = resoler_io_csrflag; // @[core.scala 112:18]
  assign ctrl_io_except_hasTrap = MEM_io_except_hasTrap; // @[core.scala 108:17]
  assign ctrl_io_csrTvec = csr_io_trapVec; // @[core.scala 115:18]
  assign csr_clock = clock;
  assign csr_reset = reset;
  assign csr_io_read_csr_raddr = resoler_io_csr_csr_raddr; // @[core.scala 122:14]
  assign csr_io_read_csr_op = resoler_io_csr_csr_op; // @[core.scala 122:14]
  assign csr_io_write_op = WB_io_csr_op; // @[core.scala 117:15]
  assign csr_io_write_addr = WB_io_csr_addr; // @[core.scala 117:15]
  assign csr_io_write_data = WB_io_csr_data; // @[core.scala 117:15]
  assign csr_io_write_retired = WB_io_csr_retired; // @[core.scala 117:15]
  assign csr_io_except_hasTrap = MEM_io_except_hasTrap; // @[core.scala 118:16]
  assign csr_io_except_excCause = MEM_io_except_excCause; // @[core.scala 118:16]
  assign csr_io_except_excPc = MEM_io_except_excPc; // @[core.scala 118:16]
  assign csr_io_except_excValue = MEM_io_except_excValue; // @[core.scala 118:16]
  assign csr_io_timer = io_timer; // @[core.scala 119:15]
  assign csr_io_soft = io_soft; // @[core.scala 120:14]
  assign csr_io_extern = io_extern; // @[core.scala 121:16]
endmodule
