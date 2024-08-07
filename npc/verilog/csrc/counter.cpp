#include <nvboard.h>
#include <Vcounter.h>

static Vcounter dut;
static Vcounter& top = dut;  // Declare top as a reference to dut

void nvboard_bind_all_pins(Vcounter* top);

static void single_cycle() {
  top.clock = 0;
  top.eval();
  top.clock = 1;
  top.eval();
}

static void reset(int n) {
  top.reset = 1;
  while (n-- > 0) single_cycle();
  top.reset = 0;
}

int main() {
  nvboard_bind_all_pins(&top);
  nvboard_init();

  reset(10);

  while(1) {
    nvboard_update();
    single_cycle();
  }
}
