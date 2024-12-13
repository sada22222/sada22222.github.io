#include <am.h>
#include <string.h>
#include <klib-macros.h>
#include "include/ysyxsoc.h"
#include "../riscv.h"

extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define HEAP_SIZE 0x1000
#define HEAP_END  ((uintptr_t)&_heap_start + HEAP_SIZE)

#define SRAM_START 0x0f000000
#define SRAM_SIZE 0x1fff

Area heap = RANGE(&_heap_start, HEAP_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

#define UART_DIV  32
#define UART_BASE 0x10000000L
#define UART_TX   (UART_BASE + 0)
#define UART_LCR  (UART_BASE + 3)
#define UART_DLB1 (UART_BASE + 0)
#define UART_DLB2 (UART_BASE + 1)
#define UART_LSR  (UART_BASE + 5)
#define UART_FCR  (UART_BASE + 2)
#define UART_IIR  (UART_BASE + 2)

void init_uart() {
  //outb(UART_FCR, 0x06);
  //inb(UART_IIR);
  // begin setting divisor latch
  outb(UART_LCR, 0b10000011);
  // set divisor latch
  outb(UART_DLB2, UART_DIV >> 8);
  outb(UART_DLB1, UART_DIV & 0xff);
  // end setting divisor latch
  outb(UART_LCR, 0b00000011);
}

void putch(char ch) {
  uint8_t t=0;
  do{ 
    t = inb(UART_LSR);
  } while(((t>>5)&1) == 0);
  outb(UART_TX, ch);
}

void halt(int code) {
  __asm__("add x1, x0, %0\n" : : "r"(code));
  __asm__("ebreak");
  while (1);
}

extern uint8_t _data_start, _data_end, _m_data_start;
extern uint8_t _bss_start, _bss_end;

void bootloader() {
    // 初始化 .data 段
    if (&_data_start != &_data_end) {
        memcpy(&_data_start, &_m_data_start, &_data_end - &_data_start);
    }

    // 初始化 .bss 段
    if (&_bss_start != &_bss_end) {
        memset(&_bss_start, 0, &_bss_end - &_bss_start);
    }
}

void _trm_init() {
  init_uart();
  bootloader();
  int ret = main(mainargs);
  halt(ret);
}