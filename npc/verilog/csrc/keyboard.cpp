#include <nvboard.h>
#include <Vkeyboard.h>

static Vkeyboard dut;
static Vkeyboard& top = dut;  // Declare top as a reference to dut

void nvboard_bind_all_pins(Vkeyboard* top);

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
