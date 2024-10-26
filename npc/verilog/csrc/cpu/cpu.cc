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

    npc_cpu.pc = dut->io_npc;

    // Execute the first instruction
    dut->reset = 0;


    IFDEF(CONFIG_ITRACE, itrace(dut->io_npc, dut->io_inst));

    init_disasm("riscv32-pc-linux-gnu");

    npc_eval();

    IFDEF(CONFIG_DIFFTEST, init_difftest(diff_so_file, img_size, difftest_port));


    cpu_exec(-1);
}

void exec_once() {
    dut->clock = 1 - dut->clock; // 0
    dut->eval();
    tfp->dump(time_counter ++);
    
    dut->clock = 1 - dut->clock; // 1
    dut->eval();
    tfp->dump(time_counter ++);
    printf("next=%x flushpc=%x  flush=%x   stall=%x   id_inst=%x   bputake=%x  bpuaddr=%x  \n ifpc=%x  idpc=%x  expc=%x  mempc=%x  wbpc=%x  result=%x\n" ,dut->io_next,dut->io_flushpc,dut->io_flush,dut->io_stall,dut->io_id_inst,dut->io_bputake,dut->io_bpuaddr,
    dut->io_npc,dut->io_idpc,dut->io_expc,dut->io_mempc,dut->io_pc,dut->io_result);

    IFDEF(CONFIG_ITRACE, itrace(dut->io_npc, dut->io_inst));

    npc_eval();

    if(dut->io_pc>=0x80000008)
    IFDEF(CONFIG_DIFFTEST, difftest_step(npc_cpu.pc, npc_cpu.pc + 4));
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
    npc_state.halt_ret = 1;
    npc_state.halt_pc = npc_cpu.pc;
}

void npc_eval() {
    // 1. In the top's interface
    npc_cpu.pc = dut->io_npc;
    // 2. Use dpic
    for (int i = 0; i < 32; i ++) {
        npc_cpu.gpr[i] = gprs[i];
    }
}