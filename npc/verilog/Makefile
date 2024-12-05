TOP_MODULE = ysyxSoCFull
VERILATOR = verilator
# Include directories for Verilator
VERILATOR_INC_PATH = $(addprefix -I, $(abspath ./vsrc)) \
                     $(addprefix -I, $(abspath /home/hujun/ysyx-workbench/ysyxSoC/perip/uart16550/rtl)) \
                     $(addprefix -I, $(abspath /home/hujun/ysyx-workbench/ysyxSoC/perip/spi/rtl))

# Verilator flags
VERILATOR_FLAGS = -cc --exe --build --trace-fst
VERILATOR_FLAGS += $(VERILATOR_INC_PATH)
VERILATOR_FLAGS += -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC
VERILATOR_FLAGS += --timescale "1ns/1ns" --no-timing
VERILATOR_FLAGS += --top-module ysyxSoCFull


WORK_DIR = $(shell pwd)

CSRC = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
VSRC = $(shell find $(abspath ./vsrc) -name "*.v") 
VSRC += $(shell find $(abspath /home/hujun/ysyx-workbench/ysyxSoC/perip) -name "*.v") 

FILELIST_MK = $(shell find ./csrc -name filelist.mk)
-include $(FILELIST_MK)

DIFFTEST_MK = $(shell find ./csrc -name difftest.mk)
-include $(DIFFTEST_MK)

CXX_INC_PATH = $(addprefix -I, $(INC_PATH))
CXX_FLAGS    = $(addprefix -CFLAGS , $(CXX_INC_PATH))
CXX_FLAGS   += $(addprefix -CFLAGS , -Wno-pointer-arith)  # ignore warning: (void*) arithmetic
CXX_FLAGS   += $(addprefix -CFLAGS , -Wno-return-type)    # ignore warning: no return
CXX_FLAGS   += $(addprefix -CFLAGS , -fpermissive)
LIB         += -fsanitize=address -lasan
LD_FLAGS     = $(addprefix -LDFLAGS , $(LIB))

default: run


OBJ_DIR = obj_dir
BIN = $(OBJ_DIR)/V$(TOP_MODULE)

LOAD_IMG =/home/hujun/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin
ARGS += $(LOAD_IMG)

run: $(CSRC)
	@echo "\033[0;1;36mVerilator the project: \033[0m"
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) $(VSRC) $(CXX_FLAGS) $(LD_FLAGS) $(CSRC) #> /dev/null 2>&1
	@# echo "\033[0;35m$(ARGS)\033[0m"
	@echo -n "(npc run) "
	$(BIN) $(ARGS)

SIM = sim.fst

sim:
	@echo "Run sim"
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

# 增加 GDB 的目标规则
gdb: $(LOAD_IMG)
	@echo "Starting GDB with $(ARGS)"
	gdb $(OBJ_DIR)/V$(TOP_MODULE) -ex "run $(ARGS)"



clean:
	rm -rf $(OBJ)
.PHONY: run sim default rm

include ../Makefile