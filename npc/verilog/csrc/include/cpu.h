#ifndef CPU_H
#define CPU_H
#include "verilated_fst_c.h"
#include "VysyxSoCFull.h"
#include "paddr.h"
#include "isa.h"
#define EBREAK 0x100073
typedef struct {
    word_t gpr[32];
    paddr_t npc;
    paddr_t pc;
    word_t wbinst;

} CPU_state;
extern word_t gprs[32];
extern word_t npc_value ;
extern word_t pc_value  ;
extern word_t wbinst_value;

extern CPU_state npc_cpu;

extern VysyxSoCFull* dut;
extern VerilatedFstC* tfp;
const int FINISH_TIME = 1e7;
#define TIME_RESET  0 
extern uint32_t time_counter;

extern "C" void init_disasm(const char *triple);
void cpu_init();
void exec_once();
void cpu_exec(uint64_t n);
void ebreak();
void npc_eval();
#endif