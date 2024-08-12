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
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display(void) {
  for (int i = 0; i < 32; i++) {
    printf("%s: 0x%08x\n", regs[i], cpu.gpr[i]);
  }
  printf("pc: 0x%08x\n", cpu.pc);  // 打印程序计数器
}

word_t isa_reg_str2val(const char *s, bool *success) {
  // 处理 "pc" 特殊寄存器
  if (strcmp(s, "pc") == 0) {
    *success = true;
    return cpu.pc;
  }

  // 遍历通用寄存器
  for (int idx = 0; idx < 32; idx++) {
    if (strcmp(s, regs[idx] + 1) == 0) {  // 跳过 $ 符号进行比较
      *success = true;
      return cpu.gpr[idx];
    }
  }

  // 未找到匹配项，返回失败
  *success = false;
  return 0;  // 返回0或者其他默认值，表示没有匹配的寄存器
}
