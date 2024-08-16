#include <nvboard.h>
#include "Vcounter.h"

void nvboard_bind_all_pins(Vcounter* top) {
	nvboard_bind_pin( &top->io_start, 1, SW0);
	nvboard_bind_pin( &top->io_pause, 1, SW1);
	nvboard_bind_pin( &top->io_reset, 1, SW2);
	nvboard_bind_pin( &top->io_segA, 8, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G, DEC0P);
	nvboard_bind_pin( &top->io_segB, 8, SEG1A, SEG1B, SEG1C, SEG1D, SEG1E, SEG1F, SEG1G, DEC1P);
	nvboard_bind_pin( &top->io_led, 1, LD0);
}
