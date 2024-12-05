include $(AM_HOME)/scripts/isa/riscv.mk
include $(AM_HOME)/scripts/platform/npc.mk
COMMON_CFLAGS += -march=rv32im -mabi=ilp32
LDFLAGS       += -melf32lriscv 


