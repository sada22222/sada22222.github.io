// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/hujun/ysyx-workbench/ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/hujun/ysyx-workbench/npc/verilog/vsrc/DpiBlackBox.v:12:30
    extern void get_diff_commit(svBit commit);
    // DPI import at /home/hujun/ysyx-workbench/ysyxSoC/perip/ysyxSoCFull.v:4686:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at /home/hujun/ysyx-workbench/npc/verilog/vsrc/DpiBlackBox.v:2:30
    extern void set_gpr_ptr(int dut_x0, int dut_x1, int dut_x2, int dut_x3, int dut_x4, int dut_x5, int dut_x6, int dut_x7, int dut_x8, int dut_x9, int dut_x10, int dut_x11, int dut_x12, int dut_x13, int dut_x14, int dut_x15, int dut_x16, int dut_x17, int dut_x18, int dut_x19, int dut_x20, int dut_x21, int dut_x22, int dut_x23, int dut_x24, int dut_x25, int dut_x26, int dut_x27, int dut_x28, int dut_x29, int dut_x30, int dut_x31, int inst, int pc, int npc, int flushpc, int flush, int stall, int wbinst, int bputake, int bpuaddr, int idpc, int idinst, int expc, int exinst, int mempc, int meminst, int result, int waddr, int state);

#ifdef __cplusplus
}
#endif

#endif  // guard
