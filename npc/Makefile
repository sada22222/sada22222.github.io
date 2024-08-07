# directories
export TOP_DIR = $(shell if [ "$$PWD" != "" ]; then echo $$PWD; else pwd; fi)
export TARGET_DIR = $(TOP_DIR)/verilog/vsrc
export SRC_DIR = $(TOP_DIR)/src/main/scala
export TEST_DIR = $(TOP_DIR)/src/test/scala

# files
TOP_SRC := $(wildcard $(SRC_DIR)/*.scala)
TOP_SRC += $(wildcard $(SRC_DIR)/**/*.scala)

.PHONY: all clean count keyboard

all: default 

$(TARGET_DIR)/count.v: $(TARGET_DIR) $(TOP_SRC)
	sbt "runMain counter --target-dir $(TARGET_DIR) --output-file count.v"

count: $(TARGET_DIR)/count.v

$(TARGET_DIR)/keyboard.v: $(TARGET_DIR) $(TOP_SRC)
	sbt "runMain keyboard --target-dir $(TARGET_DIR) --output-file keyboard.v"

keyboard: $(TARGET_DIR)/keyboard.v

$(TARGET_DIR):
	mkdir -p $(TARGET_DIR)

clean:
	-rm -f $(TARGET_DIR)/*
