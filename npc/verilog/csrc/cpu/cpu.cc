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

void cpu_init() {
    // 初始复位序列
    dut->clock = 0; 
    dut->reset = 1; 
    dut->eval();
    tfp->dump(time_counter ++);

    dut->clock = 1; 
    dut->reset = 1; 
    dut->eval();
    tfp->dump(time_counter ++);

    // 解除复位
    dut->reset = 0;

    IFDEF(CONFIG_ITRACE, itrace(dut->io_pc, dut->io_inst));

    init_disasm("riscv32-pc-linux-gnu");

    npc_cpu.pc = dut->io_pc;
    

    npc_eval();
    
    IFDEF(CONFIG_DIFFTEST, init_difftest(diff_so_file, img_size, difftest_port));

    
    cpu_exec(-1);
}

void exec_once() {
    // 切换时钟并评估
    dut->clock = 1 - dut->clock; 
    dut->eval();
    tfp->dump(time_counter ++);

    // 再次切换时钟并评估
    dut->clock = 1 - dut->clock; 
    dut->eval();
    tfp->dump(time_counter ++);

    // 更新程序计数器
    npc_cpu.pc = dut->io_pc;

    // 输出指令跟踪信息
    IFDEF(CONFIG_ITRACE, itrace(dut->io_pc, dut->io_inst));

    npc_eval();
    
    // 差异测试步骤
    IFDEF(CONFIG_DIFFTEST, difftest_step(npc_cpu.pc, npc_cpu.pc + 4));
    cmp_reg();    
   

}

void cpu_exec(uint64_t n) {
    if (n > 1) npc_state.state = NPC_RUNNING;
    
    for (int i = 0; i < n - 1; i ++) {
        exec_once();
    
        if (time_counter >= FINISH_TIME || (npc_state.state == NPC_RUNNING && npc_state.halt_ret)) {
            npc_state.state = NPC_END;
            break;
        }

        if (npc_state.state != NPC_RUNNING)  break;
        
        IFDEF(CONFIG_DEVICE, device_update());
        
    }
   
    
    IFDEF(CONFIG_MTRACE, mtraceDisplay());

    IFDEF(CONFIG_ITRACE, itraceDisplay());

    

    switch (npc_state.state) {
        case NPC_RUNNING: npc_state.state = NPC_STOP; break;

        case NPC_END: case NPC_ABORT:

            Log("npc: %s at pc = " FMT_WORD,
                (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", RED_TXT) :
                (npc_state.state == NPC_END ? ANSI_FMT("HIT GOOD TRAP", GREEN_TXT) :
                ANSI_FMT("HIT BAD TRAP", RED_TXT))),
                npc_state.halt_pc);

        // case NPC_QUIT: statistic();
    }
}

void ebreak() {
    npc_state.halt_ret = 1;
    npc_state.halt_pc = npc_cpu.pc;
}

void npc_eval() {

    for (int i = 0; i < 32; i++) {
        npc_cpu.gpr[i] = gprs[i];
    }
}
