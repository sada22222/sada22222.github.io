# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VysyxSoCFull.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VysyxSoCFull \
	VysyxSoCFull___024root__DepSet_h4d156741__0 \
	VysyxSoCFull___024root__DepSet_h4d156741__1 \
	VysyxSoCFull___024root__DepSet_h0188974b__0 \
	VysyxSoCFull___024unit__DepSet_h308b0958__0 \
	VysyxSoCFull_CarrySaveAdder__DepSet_h131139c0__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VysyxSoCFull__ConstPool_0 \
	VysyxSoCFull___024root__Slow \
	VysyxSoCFull___024root__DepSet_h4d156741__0__Slow \
	VysyxSoCFull___024root__DepSet_h0188974b__0__Slow \
	VysyxSoCFull___024unit__Slow \
	VysyxSoCFull___024unit__DepSet_h460a3d32__0__Slow \
	VysyxSoCFull_CarrySaveAdder__Slow \
	VysyxSoCFull_CarrySaveAdder__DepSet_h351caf9f__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VysyxSoCFull__Dpi \
	VysyxSoCFull__Trace__0 \
	VysyxSoCFull__Trace__1 \
	VysyxSoCFull__Trace__2 \
	VysyxSoCFull__Trace__3 \
	VysyxSoCFull__Trace__4 \
	VysyxSoCFull__Trace__5 \
	VysyxSoCFull__Trace__6 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VysyxSoCFull__Syms \
	VysyxSoCFull__Trace__0__Slow \
	VysyxSoCFull__Trace__1__Slow \
	VysyxSoCFull__Trace__2__Slow \
	VysyxSoCFull__Trace__3__Slow \
	VysyxSoCFull__Trace__4__Slow \
	VysyxSoCFull__Trace__5__Slow \
	VysyxSoCFull__Trace__6__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_fst_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-