
import "DPI-C" function void vaddr_write(int addr, byte mask, int data);
import "DPI-C" function int vaddr_read(bit is_signed, int addr, byte mask);

module awrite (
    input         clock,
    input         wen,       
    input         ren,        
    input  [31:0] addr,       // 地址
    input  [ 3:0] mask,       // 字节掩码
    input         sign,       // 是否有符号
    input  [31:0] wdata,      
    output reg [31:0] rdata   
);

    always @(posedge clock) begin
        if (wen) begin
            vaddr_write(addr, mask, wdata);  // 调用DPI-C写函数
        end
    end

    always @(*) begin
        if (ren) begin
            rdata = vaddr_read(sign, addr, mask); // 调用DPI-C读函数
        end else begin
            rdata = 32'b0;
        end
    end
endmodule

    