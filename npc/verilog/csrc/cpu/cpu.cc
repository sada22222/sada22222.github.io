#include "cpu.h"
#include "macro.h"
#include "trace.h"
#include "reg.h"
#include "dut.h"
#include "debug.h"
#include "init.h"
#include "sdb.h"
#include "device.h"

CPU_state npc_cpu;
extern bool diff_commit;

void cpu_init() { // exe the first instruction

    dut->clock = 0; dut->reset = 1; dut->eval();
     tfp->dump(time_counter ++);
    dut->clock = 1; dut->reset = 1; dut->eval(); // pc -> 0x8000_0000
    tfp->dump(time_counter ++); 
    // Execute the first instruction
    dut->reset = 0;


    IFDEF(CONFIG_ITRACE, itrace(npc_cpu.pc , npc_cpu.wbinst));

    init_disasm("riscv32-pc-linux-gnu");

    npc_eval();

    IFDEF(CONFIG_DIFFTEST, init_difftest(diff_so_file, img_size, difftest_port));

    cpu_exec(-1);
}

void exec_once() {
    dut->clock = 0; 
    dut->eval();
    tfp->dump(time_counter ++);
    
    dut->clock = 1 ; 
    dut->eval();
    tfp->dump(time_counter ++);
    IFDEF(CONFIG_ITRACE, itrace(npc_cpu.pc, npc_cpu.wbinst));

    npc_eval();

    if(npc_cpu.pc>=0x80000004 &&  npc_cpu.wbinst!=0x13){
    IFDEF(CONFIG_DIFFTEST, difftest_step(dut->io_pc, npc_cpu.pc + 4));}
}

void cpu_exec(uint64_t n) {
    if (n > 1) npc_state.state = NPC_RUNNING;
    for (int i = 0; i < n - 1; i++) {
            exec_once();  
        
        if (time_counter >= FINISH_TIME || (npc_state.state == NPC_RUNNING && npc_state.halt_ret)) {
            npc_state.state = NPC_END;
            break;
        }

        if (npc_state.state != NPC_RUNNING) break;

        IFDEF(CONFIG_DEVICE, device_update());
        ebreak();
    }

    IFDEF(CONFIG_MTRACE, mtraceDisplay());

    IFDEF(CONFIG_ITRACE, itraceDisplay());
   
    switch (npc_state.state) {
        case NPC_RUNNING:
            npc_state.state = NPC_STOP;
            break;

        case NPC_END:
        case NPC_ABORT:
            Log("npc: %s at pc = " FMT_WORD,
                (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", RED_TXT) :
                (npc_state.state == NPC_END ? ANSI_FMT("HIT GOOD TRAP", GREEN_TXT) :
                ANSI_FMT("HIT BAD TRAP", RED_TXT))),
                npc_state.halt_pc);
    }
}


void ebreak() {
    if ( npc_cpu.wbinst == 0x6f) {
        npc_state.halt_ret = 1;
        npc_state.halt_pc = npc_cpu.pc;
    }
}

void npc_eval() {
    npc_cpu.pc = pc;
    npc_cpu.npc = npc;
    npc_cpu.wbinst = awbinst;
    for (int i = 0; i < 32; i ++) {
        npc_cpu.gpr[i] = gprs[i];
    }
}