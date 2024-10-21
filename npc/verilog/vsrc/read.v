
import "DPI-C" function int fetch(bit clk, bit rst, int pc);
import "DPI-C" function void halt(int inst);
module read (
    input  [31:0] addr,
    input         clock,
    input         reset,
    output [31:0] data
);
    reg [31:0] fetched_data;
    always @(posedge clock) begin
        if (reset) begin
            fetched_data <= 32'b0;
        end else begin
            fetched_data <= fetch(clock, reset, addr); // 调用DPI-C读函数
            halt(fetched_data); // 处理指令的halt逻辑
        end
    end
    assign data = fetched_data;
endmodule
    