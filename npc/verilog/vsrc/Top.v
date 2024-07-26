module Top(
  input   clock,
  input   reset,
  input   io_a,
  input   io_b,
  output  io_f
);
  assign io_f = io_a ^ io_b; // @[example.scala 11:8]
endmodule
