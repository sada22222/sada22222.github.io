#ifndef DPIC_H
#define DPIC_H
#include "macro.h"
#include "isa.h"
#include "paddr.h"
#include <svdpi.h>
#define EBREAK 0x100073
#define NOP    0x13

extern "C" void halt(uint32_t inst);
extern "C" uint32_t fetch(bool clk, bool rst, paddr_t pc);
extern "C" void  set_gpr_ptr(  uint32_t dut_x0,  uint32_t dut_x1,  uint32_t dut_x2,  uint32_t dut_x3,  uint32_t dut_x4,  uint32_t dut_x5,
                  uint32_t dut_x6,  uint32_t dut_x7,  uint32_t dut_x8,  uint32_t dut_x9,  uint32_t dut_x10, uint32_t dut_x11, uint32_t dut_x12,
                  uint32_t dut_x13, uint32_t dut_x14, uint32_t dut_x15, uint32_t dut_x16, uint32_t dut_x17, uint32_t dut_x18, uint32_t dut_x19,
                  uint32_t dut_x20, uint32_t dut_x21, uint32_t dut_x22, uint32_t dut_x23, uint32_t dut_x24, uint32_t dut_x25, uint32_t dut_x26,
                  uint32_t dut_x27, uint32_t dut_x28, uint32_t dut_x29, uint32_t dut_x30, uint32_t dut_x31);
extern "C" word_t vaddr_read(bool is_signed, paddr_t addr, uint8_t mask);
extern "C" void vaddr_write(paddr_t addr, uint8_t mask, word_t data);
#endif