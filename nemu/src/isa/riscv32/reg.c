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
  printf("Trying to match register: %s\n", s); // 调试输出

  // 遍历寄存器名称数组
  for (int i = 0; i < 32; i++) {
    if (strcmp(s, regs[i] + 1) == 0) {  // 匹配寄存器名，跳过 $ 符号
      *success = true;
      printf("Matched register: %s with value 0x%08x\n", regs[i], cpu.gpr[i]); // 调试输出
      return cpu.gpr[i];  // 返回通用寄存器值
    }
  }

  // 处理程序计数器
  if (strcmp(s, "pc") == 0) {
    *success = true;
    printf("Matched PC with value 0x%08x\n", cpu.pc); // 调试输出
    return cpu.pc;  // 返回程序计数器的值
  }

  // 如果未找到匹配项
  *success = false;
  printf("Failed to match register: %s\n", s); // 调试输出
  return 0;
}
