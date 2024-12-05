# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vtop.mk

default: Vtop

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vtop
# Module prefix (from --prefix)
VM_MODPREFIX = Vtop
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-I/home/hujun/ysyx-workbench/npc/verilog/csrc/device/io \
	-I/home/hujun/ysyx-workbench/npc/verilog/csrc/device \
	-I/home/hujun/ysyx-workbench/npc/verilog/csrc/monitor/dbg \
	-I/home/hujun/ysyx-workbench/npc/verilog/csrc/monitor/sdb \
	-I/home/hujun/ysyx-workbench/npc/verilog/csrc/monitor/trace \
	-I/home/hujun/ysyx-workbench/npc/verilog/csrc/monitor/difftest \
	-I/home/hujun/ysyx-workbench/npc/verilog/csrc/cpu \
	-I/home/hujun/ysyx-workbench/npc/verilog/csrc/include \
	-I/home/hujun/ysyx-workbench/npc/verilog/csrc/memory \
	-Wno-pointer-arith \
	-Wno-return-type \
	-fpermissive \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lz \
	-lSDL2 \
	-I/usr/lib/llvm-14/include \
	-std=c++14 \
	-fno-exceptions \
	-D_GNU_SOURCE \
	-D__STDC_CONSTANT_MACROS \
	-D__STDC_FORMAT_MACROS \
	-D__STDC_LIMIT_MACROS \
	-fPIE \
	-lLLVM-14 \
	/home/hujun/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so \
	-fsanitize=address \
	-lasan \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	cpu \
	reg \
	alarm \
	device \
	intr \
	map \
	mmio \
	serial \
	timer \
	dpic \
	init \
	main \
	paddr \
	debug \
	dut \
	sdb \
	itrace \
	mtrace \
	disasm \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/hujun/ysyx-workbench/npc/verilog/csrc \
	/home/hujun/ysyx-workbench/npc/verilog/csrc/cpu \
	/home/hujun/ysyx-workbench/npc/verilog/csrc/device \
	/home/hujun/ysyx-workbench/npc/verilog/csrc/device/io \
	/home/hujun/ysyx-workbench/npc/verilog/csrc/memory \
	/home/hujun/ysyx-workbench/npc/verilog/csrc/monitor/dbg \
	/home/hujun/ysyx-workbench/npc/verilog/csrc/monitor/difftest \
	/home/hujun/ysyx-workbench/npc/verilog/csrc/monitor/sdb \
	/home/hujun/ysyx-workbench/npc/verilog/csrc/monitor/trace \
	/home/hujun/ysyx-workbench/npc/verilog/csrc/util \


### Default rules...
# Include list of all generated classes
include Vtop_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

cpu.o: /home/hujun/ysyx-workbench/npc/verilog/csrc/cpu/cpu.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
reg.o: /home/hujun/ysyx-workbench/npc/verilog/csrc/cpu/reg.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
alarm.o: /home/hujun/ysyx-workbench/npc/verilog/csrc/device/alarm.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
device.o: /home/hujun/ysyx-workbench/npc/verilog/csrc/device/device.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
intr.o: /home/hujun/ysyx-workbench/npc/verilog/csrc/device/intr.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
map.o: /home/hujun/ysyx-workbench/npc/verilog/csrc/device/io/map.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mmio.o: /home/hujun/ysyx-workbench/npc/verilog/csrc/device/io/mmio.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
serial.o: /home/hujun/ysyx-workbench/npc/verilog/csrc/device/serial.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
timer.o: /home/hujun/ysyx-workbench/npc/verilog/csrc/device/timer.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
dpic.o: /home/hujun/ysyx-workbench/npc/verilog/csrc/dpic.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
init.o: /home/hujun/ysyx-workbench/npc/verilog/csrc/init.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main.o: /home/hujun/ysyx-workbench/npc/verilog/csrc/main.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
paddr.o: /home/hujun/ysyx-workbench/npc/verilog/csrc/memory/paddr.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
debug.o: /home/hujun/ysyx-workbench/npc/verilog/csrc/monitor/dbg/debug.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
dut.o: /home/hujun/ysyx-workbench/npc/verilog/csrc/monitor/difftest/dut.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdb.o: /home/hujun/ysyx-workbench/npc/verilog/csrc/monitor/sdb/sdb.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
itrace.o: /home/hujun/ysyx-workbench/npc/verilog/csrc/monitor/trace/itrace.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mtrace.o: /home/hujun/ysyx-workbench/npc/verilog/csrc/monitor/trace/mtrace.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
disasm.o: /home/hujun/ysyx-workbench/npc/verilog/csrc/util/disasm.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
Vtop: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
