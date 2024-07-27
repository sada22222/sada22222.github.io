# Define variables
PROJECT = Top
OBJ_DIR = ./obj
VERILOG_SOURCES = ./vsrc/Top.v
CPP_SOURCES = ./csrc/Top.cpp
VERILATOR_FLAGS = --cc --exe --trace -Wall  -Wno-UNUSEDSIGNAL


# Default target
all: run

# Ensure the object directory exists
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Verilate the design and build
$(OBJ_DIR)/V$(PROJECT): $(OBJ_DIR) $(VERILOG_SOURCES) $(CPP_SOURCES)
	@echo "Verilating the design..."
	verilator $(VERILATOR_FLAGS) -o V$(PROJECT) $(VERILOG_SOURCES) $(CPP_SOURCES) --Mdir $(OBJ_DIR)
	cd $(OBJ_DIR) && make -f V$(PROJECT).mk

# Run the simulation
run: $(OBJ_DIR)/V$(PROJECT)
	@echo "Running the simulation..."
	$(OBJ_DIR)/V$(PROJECT)

# Run the simulation and open waveform in GTKWave
sim: run
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	gtkwave waveform.vcd &

# Clean up generated files
clean:
	rm -rf $(OBJ_DIR) waveform.vcd

.PHONY: all clean sim run

