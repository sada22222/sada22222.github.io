#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <inttypes.h>
#include <assert.h>
#include <stdlib.h>

typedef int32_t sword_t;
typedef uint32_t word_t;

#define BITMASK(bits) ((1ull << (bits)) - 1)
#define BITS(x, hi, lo) (((x) >> (lo)) & BITMASK((hi) - (lo) + 1)) // similar to x[hi:lo] in verilog

#define STRLEN(CONST_STR) (sizeof(CONST_STR) - 1)
#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))

//static enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };

#define NPC_RUNNING 0
#define NPC_STOP    1
#define NPC_END     2
#define NPC_ABORT   3
#define NPC_QUIT    4

uint64_t get_time();