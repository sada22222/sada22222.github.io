#include "VTop.h"           // Verilated module header
#include "verilated.h"      // Verilator header
#include "verilated_vcd_c.h" // Verilator VCD tracing header
#include <iostream>         // C++ standard I/O header

int main(int argc, char** argv, char** env) {
    // Initialize Verilator's command arguments
    Verilated::commandArgs(argc, argv);

    // Instantiate the module
    VTop* top = new VTop;

    // Enable signal tracing
    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    top->trace(tfp, 99);
    tfp->open("waveform.vcd");

    // Simulation loop
    int main_time = 0;  // Current simulation time

    // Apply initial conditions
    top->io_a = 0;
    top->io_b = 0;

    while (main_time < 10) { // Simulate for 10 time units
        // Toggle inputs at specific time steps
        if (main_time == 2) top->io_a = 1;
        if (main_time == 4) top->io_b = 1;
        if (main_time == 6) top->io_a = 0;
        if (main_time == 8) top->io_b = 0;

        // Evaluate the module
        top->eval();

        // Dump variables into VCD file
        tfp->dump(main_time);

        // Increment simulation time
        main_time++;
    }

    // Cleanup and close VCD file
    tfp->close();
    delete top;
    delete tfp;
    return 0;
}

