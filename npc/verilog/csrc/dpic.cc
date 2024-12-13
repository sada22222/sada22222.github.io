#include "dpic.h"
#include "debug.h"
#include "trace.h"
#include "cpu.h"
#include "paddr.h"
#include <stdio.h>
#include <verilated.h>
#include "verilated_dpi.h"


extern bool diff_commit;
extern "C" void get_diff_commit(svBit commit){
  diff_commit = commit;
}

extern "C" void flash_read(int32_t addr, int32_t *data) { assert(0); }
extern "C" void mrom_read(int32_t addr, int32_t *data) {    *data = paddr_read(addr, 4);}


word_t gprs[32];     // 寄存器数组，固定大小
word_t npc_value = 0;  // 下一条指令地址
word_t pc_value = 0;   // 当前指令地址
word_t wbinst_value = 0; // 写回阶段指令

void set_gpr_ptr(uint32_t dut_x0, uint32_t dut_x1, uint32_t dut_x2, uint32_t dut_x3, uint32_t dut_x4, uint32_t dut_x5,
                    uint32_t dut_x6, uint32_t dut_x7, uint32_t dut_x8, uint32_t dut_x9, uint32_t dut_x10, uint32_t dut_x11, uint32_t dut_x12,
                    uint32_t dut_x13, uint32_t dut_x14, uint32_t dut_x15, uint32_t dut_x16, uint32_t dut_x17, uint32_t dut_x18, uint32_t dut_x19,
                    uint32_t dut_x20, uint32_t dut_x21, uint32_t dut_x22, uint32_t dut_x23, uint32_t dut_x24, uint32_t dut_x25, uint32_t dut_x26,
                    uint32_t dut_x27, uint32_t dut_x28, uint32_t dut_x29, uint32_t dut_x30, uint32_t dut_x31, 
                    uint32_t inst, uint32_t pc, uint32_t npc, uint32_t flushpc, uint32_t flush, uint32_t stall,
                    uint32_t wbinst, uint32_t bputake, uint32_t bpuaddr, uint32_t idpc, uint32_t idinst, uint32_t expc,
                    uint32_t exinst, uint32_t mempc, uint32_t meminst, uint32_t result, uint32_t waddr, uint32_t state) {
    
    // 打印输入状态信息
    printf("flushpc=%x flush=%x stall=%x ifstate=%x bputake=%x bpuaddr=%x\n",
           flushpc, flush, stall, state, bputake, bpuaddr);
    printf("ifpc=%x ifinst=%x idpc=%x idinst=%x expc=%x exinst=%x mempc=%x meminst=%x wbpc=%x wbinst=%x result=%x waddr=%x\n\n",
           npc, inst, idpc, idinst, expc, exinst, mempc, meminst, pc, wbinst, result, waddr);

    // 更新全局变量
    npc_value = npc;
    pc_value = pc;
    wbinst_value = wbinst;

    // 将寄存器值存储到 gprs 数组
    gprs[0] = dut_x0;
    gprs[1] = dut_x1;
    gprs[2] = dut_x2;
    gprs[3] = dut_x3;
    gprs[4] = dut_x4;
    gprs[5] = dut_x5;
    gprs[6] = dut_x6;
    gprs[7] = dut_x7;
    gprs[8] = dut_x8;
    gprs[9] = dut_x9;
    gprs[10] = dut_x10;
    gprs[11] = dut_x11;
    gprs[12] = dut_x12;
    gprs[13] = dut_x13;
    gprs[14] = dut_x14;
    gprs[15] = dut_x15;
    gprs[16] = dut_x16;
    gprs[17] = dut_x17;
    gprs[18] = dut_x18;
    gprs[19] = dut_x19;
    gprs[20] = dut_x20;
    gprs[21] = dut_x21;
    gprs[22] = dut_x22;
    gprs[23] = dut_x23;
    gprs[24] = dut_x24;
    gprs[25] = dut_x25;
    gprs[26] = dut_x26;
    gprs[27] = dut_x27;
    gprs[28] = dut_x28;
    gprs[29] = dut_x29;
    gprs[30] = dut_x30;
    gprs[31] = dut_x31;
}
/*static int cnt = 0;
uint32_t fetch(bool clk, bool rst, paddr_t pc) {
    printf("clk=%d, rst=%d, pc=" FMT_PADDR "\n", clk, rst, pc);
    if (rst || pc == 0) { 
        return NOP;
    } else {
    Assert(in_pmem(pc), "Out of bounds memory accsee!\n");
    uint32_t inst = paddr_read(pc, 4);
    printf("pc = " FMT_PADDR ": " FMT_WORD " at %d\n", pc, inst, cnt ++);
    return inst;
    }

}

/*word_t vaddr_read(bool is_signed, paddr_t addr, uint8_t mask) { 
    int len = 0;
     
    switch (mask) {
        case 0b1111: len = 4; break; // 32位
        case 0b0011: len = 2; break; // 低16位
        case 0b0001: len = 1; break; // 低8位
    }
    sword_t data = paddr_read(addr, len);
    printf("data=%x\n",data); printf("addr is %x\n", addr);

        switch (mask) {
            case 0b0001:  data = data & 0x000000FF;     break; // 截取低 8 位
            case 0b0011:  data = data & 0x0000FFFF;     break; // 截取低 16 位
            case 0b1111:  data = data;                  break;
        }

    printf("mask=%d  addr=%x   data=%x\n",mask,addr,data);

    IFDEF(CONFIG_MTRACE, mtrace('r', addr, data));
   
    return data;
}


void vaddr_write(paddr_t addr, uint8_t mask, word_t data) {
     printf("mask=%d",mask);
    int len=0;
    switch (mask) {
    case 0b1111: len=4; break;//32位
    case 0b0011: len=2; break;//低16 
    case 0b0001: len=1; break;//低8  
    }
    IFDEF(CONFIG_MTRACE, mtrace('w', addr, data));
    paddr_write(addr, len, data);
}*/