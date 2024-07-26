# directories
export TOP_DIR = $(shell if [ "$$PWD" != "" ]; then echo $$PWD; else pwd; fi)
export TARGET_DIR = $(TOP_DIR)/verilog/vsrc
export SRC_DIR = $(TOP_DIR)/src/main/scala
export TEST_DIR = $(TOP_DIR)/src/test/scala

# files
TOP_SRC := $(wildcard $(SRC_DIR)/*.scala)
TOP_SRC += $(wildcard $(SRC_DIR)/**/*.scala)
TOP_TARGET := $(TARGET_DIR)/Top.v

.PHONY: all clean

all: $(TOP_TARGET)

$(TOP_TARGET): $(TARGET_DIR) $(TOP_SRC)
	sbt "runMain Top --target-dir $(TARGET_DIR)"

$(TARGET_DIR):
	mkdir -p $(TARGET_DIR)

clean:
	-rm -f $(TARGET_DIR)/*
