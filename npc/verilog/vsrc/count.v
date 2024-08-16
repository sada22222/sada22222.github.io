module Timer(
  input        clock,
  input        reset,
  input        io_start,
  input        io_pause,
  input        io_reset,
  output [3:0] io_digit1,
  output [3:0] io_digit2,
  output       io_led
);
  reg [25:0] count; // @[counter.scala 15:22]
  reg [31:0] _RAND_0;
  wire  _T = count == 26'hbebc1f; // @[counter.scala 16:14]
  wire [25:0] _T_2 = count + 26'h1; // @[counter.scala 19:20]
  reg [6:0] counter; // @[counter.scala 24:24]
  reg [31:0] _RAND_1;
  reg  run; // @[counter.scala 25:20]
  reg [31:0] _RAND_2;
  wire  _GEN_1 = io_pause ? 1'h0 : run; // @[counter.scala 33:25]
  wire  _GEN_2 = io_start | _GEN_1; // @[counter.scala 31:25]
  wire  _T_3 = run & _T; // @[counter.scala 37:12]
  wire  _T_4 = counter == 7'h63; // @[counter.scala 38:18]
  wire [6:0] _T_6 = counter + 7'h1; // @[counter.scala 41:26]
  wire [6:0] _T_8 = counter / 7'ha; // @[counter.scala 46:25]
  wire [6:0] _GEN_0 = counter % 7'ha; // @[counter.scala 45:13]
  wire [6:0] _GEN_3 = _T_8 % 7'ha; // @[counter.scala 46:13]
  assign io_digit1 = _GEN_0[3:0]; // @[counter.scala 45:13]
  assign io_digit2 = _GEN_3[3:0]; // @[counter.scala 46:13]
  assign io_led = counter == 7'h63; // @[counter.scala 47:10]
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
  count = _RAND_0[25:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  counter = _RAND_1[6:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  run = _RAND_2[0:0];
  `endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (reset) begin
      count <= 26'h0;
    end else if (_T) begin
      count <= 26'h0;
    end else begin
      count <= _T_2;
    end
    if (reset) begin
      counter <= 7'h0;
    end else if (_T_3) begin
      if (_T_4) begin
        counter <= 7'h0;
      end else begin
        counter <= _T_6;
      end
    end else if (io_reset) begin
      counter <= 7'h0;
    end
    if (reset) begin
      run <= 1'h0;
    end else if (io_reset) begin
      run <= 1'h0;
    end else begin
      run <= _GEN_2;
    end
  end
endmodule
module SevenSegmentDecoder(
  input  [3:0] io_digit,
  output [7:0] io_segments
);
  wire  _T = 4'h9 == io_digit; // @[Mux.scala 68:19]
  wire [7:0] _T_1 = _T ? 8'h9 : 8'hff; // @[Mux.scala 68:16]
  wire  _T_2 = 4'h8 == io_digit; // @[Mux.scala 68:19]
  wire [7:0] _T_3 = _T_2 ? 8'h1 : _T_1; // @[Mux.scala 68:16]
  wire  _T_4 = 4'h7 == io_digit; // @[Mux.scala 68:19]
  wire [7:0] _T_5 = _T_4 ? 8'h1f : _T_3; // @[Mux.scala 68:16]
  wire  _T_6 = 4'h6 == io_digit; // @[Mux.scala 68:19]
  wire [7:0] _T_7 = _T_6 ? 8'h41 : _T_5; // @[Mux.scala 68:16]
  wire  _T_8 = 4'h5 == io_digit; // @[Mux.scala 68:19]
  wire [7:0] _T_9 = _T_8 ? 8'h49 : _T_7; // @[Mux.scala 68:16]
  wire  _T_10 = 4'h4 == io_digit; // @[Mux.scala 68:19]
  wire [7:0] _T_11 = _T_10 ? 8'h99 : _T_9; // @[Mux.scala 68:16]
  wire  _T_12 = 4'h3 == io_digit; // @[Mux.scala 68:19]
  wire [7:0] _T_13 = _T_12 ? 8'hd : _T_11; // @[Mux.scala 68:16]
  wire  _T_14 = 4'h2 == io_digit; // @[Mux.scala 68:19]
  wire [7:0] _T_15 = _T_14 ? 8'h25 : _T_13; // @[Mux.scala 68:16]
  wire  _T_16 = 4'h1 == io_digit; // @[Mux.scala 68:19]
  wire [7:0] _T_17 = _T_16 ? 8'h9f : _T_15; // @[Mux.scala 68:16]
  wire  _T_18 = 4'h0 == io_digit; // @[Mux.scala 68:19]
  assign io_segments = _T_18 ? 8'h3 : _T_17; // @[counter.scala 56:13]
endmodule
module counter(
  input        clock,
  input        reset,
  input        io_start,
  input        io_pause,
  input        io_reset,
  output [7:0] io_segA,
  output [7:0] io_segB,
  output       io_led
);
  wire  timer_clock; // @[counter.scala 81:21]
  wire  timer_reset; // @[counter.scala 81:21]
  wire  timer_io_start; // @[counter.scala 81:21]
  wire  timer_io_pause; // @[counter.scala 81:21]
  wire  timer_io_reset; // @[counter.scala 81:21]
  wire [3:0] timer_io_digit1; // @[counter.scala 81:21]
  wire [3:0] timer_io_digit2; // @[counter.scala 81:21]
  wire  timer_io_led; // @[counter.scala 81:21]
  wire [3:0] decoderA_io_digit; // @[counter.scala 82:24]
  wire [7:0] decoderA_io_segments; // @[counter.scala 82:24]
  wire [3:0] decoderB_io_digit; // @[counter.scala 83:24]
  wire [7:0] decoderB_io_segments; // @[counter.scala 83:24]
  Timer timer ( // @[counter.scala 81:21]
    .clock(timer_clock),
    .reset(timer_reset),
    .io_start(timer_io_start),
    .io_pause(timer_io_pause),
    .io_reset(timer_io_reset),
    .io_digit1(timer_io_digit1),
    .io_digit2(timer_io_digit2),
    .io_led(timer_io_led)
  );
  SevenSegmentDecoder decoderA ( // @[counter.scala 82:24]
    .io_digit(decoderA_io_digit),
    .io_segments(decoderA_io_segments)
  );
  SevenSegmentDecoder decoderB ( // @[counter.scala 83:24]
    .io_digit(decoderB_io_digit),
    .io_segments(decoderB_io_segments)
  );
  assign io_segA = decoderA_io_segments; // @[counter.scala 92:11]
  assign io_segB = decoderB_io_segments; // @[counter.scala 93:11]
  assign io_led = timer_io_led; // @[counter.scala 94:10]
  assign timer_clock = clock;
  assign timer_reset = reset;
  assign timer_io_start = io_start; // @[counter.scala 85:18]
  assign timer_io_pause = io_pause; // @[counter.scala 86:18]
  assign timer_io_reset = io_reset; // @[counter.scala 87:18]
  assign decoderA_io_digit = timer_io_digit1; // @[counter.scala 89:21]
  assign decoderB_io_digit = timer_io_digit2; // @[counter.scala 90:21]
endmodule
