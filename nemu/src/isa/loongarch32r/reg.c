/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "tp", "sp", "a0", "a1", "a2", "a3",
  "a4", "a5", "a6", "a7", "t0", "t1", "t2", "t3",
  "t4", "t5", "t6", "t7", "t8", "rs", "fp", "s0",
  "s1", "s2", "s3", "s4", "s5", "s6", "s7", "s8"
};

typedef struct {
  const char *name;
  uint32_t value;
} Reg;

static Reg cpu_registers[] = {
  {"eax", 0x12345678},
  {"ebx", 0x87654321},
  {"ecx", 0xabcdef12},
  {"edx", 0x12fedcba},
  // 可以继续添加其他寄存器
};

void isa_reg_display() {
  int num_regs = sizeof(cpu_registers) / sizeof(cpu_registers[0]);
  for (int i = 0; i < num_regs; i++) {
    printf("%s: 0x%08x\n", cpu_registers[i].name, cpu_registers[i].value);
  }
}

word_t isa_reg_str2val(const char *s, bool *success) {
  return 0;
}
