// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop_CarrySaveAdder.h"

VL_ATTR_COLD void Vtop_CarrySaveAdder___ctor_var_reset(Vtop_CarrySaveAdder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_CarrySaveAdder___ctor_var_reset\n"); );
    // Body
    vlSelf->io_A = VL_RAND_RESET_Q(64);
    vlSelf->io_B = VL_RAND_RESET_Q(64);
    vlSelf->io_Cin = VL_RAND_RESET_Q(64);
    vlSelf->io_Sum = VL_RAND_RESET_Q(64);
    vlSelf->io_Cout = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___T_222 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_253 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_285 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_316 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___T_317 = VL_RAND_RESET_Q(64);
}
