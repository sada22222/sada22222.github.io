CSRC += $(shell find $(abspath ./csrc) -name "*.cpp")
VSRC += $(shell find $(abspath ./vsrc) -name "*.v")
HSRC += $(shell find $(abspath ./csrc) -name "*.h")
TOP_NAME := top
SEARCHPATH := $(NPC_HOME)/verilog/vsrc

VERILATOR_FLAGS += -I$(SEARCHPATH)
VERILATOR_FLAGS += --top $(TOP_NAME)
VERILATOR_FLAGS += --trace --debug --cc --exe --build
VERILATOR_FLAGS += -Wno-UNUSED

INC_PATH		?= $(NPC_HOME)/sim/include
CFLAGS			+= -g -I$(INC_PATH)
CFLAGS			+= -I$(INC_PATH)
LDFLAGS			+= -lreadline -lSDL2 -ldl

DIFFTEST		:= $(NEMU_HOME)/build/riscv32-nemu-interpreter-so
OBJ_DIR			:= ./obj_dir
BIN				:= $(OBJ_DIR)/V$(TOP_NAME)

IMG				?= /home/hujun/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin

RUN_FLAGS		:= --img=${IMG} --diff=${DIFFTEST}
NPC_EXEC		:= ${BIN} ${RUN_FLAGS}

.PHONY:run gdb wave clean

com:${CSRC} ${VSRC}
	@verilator ${VERILATOR_FLAGS} ${CSRC} ${VSRC} $(addprefix -CFLAGS , $(CFLAGS)) -LDFLAGS -lSDL2 -LDFLAGS -lreadline

run:com
	$(call git_commit, "sim NPC")
	@${NPC_EXEC}

gdb:com ${DIFFTEST}
	$(call git_commit, "gdb NPC")
	@gdb --silent -s ${BIN} --args ${NPC_EXEC}

wave:
	@gtkwave $(OBJ_DIR)/dump.vcd

clean:
	rm -rf ${OBJ_DIR}
