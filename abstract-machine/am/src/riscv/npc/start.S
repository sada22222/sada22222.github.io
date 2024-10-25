.section entry, "ax"
.globl _start
.type _start, @function

_start:
  li x1,1
  li x1,1
  li x1,1
  li x1,1
  li x1,1
  li x1,1
  la sp, _stack_pointer
  jal _trm_init
