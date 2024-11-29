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

static int cnt = 0;
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

word_t* gprs = NULL;
void set_gpr_ptr(uint32_t dut_x0, uint32_t dut_x1, uint32_t dut_x2, uint32_t dut_x3, 
                 uint32_t dut_x4, uint32_t dut_x5, uint32_t dut_x6, uint32_t dut_x7, uint32_t dut_x8, 
                 uint32_t dut_x9, uint32_t dut_x10, uint32_t dut_x11, uint32_t dut_x12, uint32_t dut_x13, 
                 uint32_t dut_x14, uint32_t dut_x15, uint32_t dut_x16, uint32_t dut_x17, uint32_t dut_x18, 
                 uint32_t dut_x19, uint32_t dut_x20, uint32_t dut_x21, uint32_t dut_x22, uint32_t dut_x23, 
                 uint32_t dut_x24, uint32_t dut_x25, uint32_t dut_x26, uint32_t dut_x27, uint32_t dut_x28, 
                 uint32_t dut_x29, uint32_t dut_x30, uint32_t dut_x31) {

    // 如果 gprs 没有初始化，则分配内存
    if (gprs == NULL) {
        gprs = (word_t*)malloc(32 * sizeof(word_t));  // 为32个寄存器分配内存
        if (gprs == NULL) {
            fprintf(stderr, "Memory allocation for gprs failed!\n");
            exit(1);
        }
    }
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



word_t vaddr_read(bool is_signed, paddr_t addr, uint8_t mask) { 
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
}
