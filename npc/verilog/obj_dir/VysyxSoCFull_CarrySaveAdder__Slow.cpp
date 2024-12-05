// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_CarrySaveAdder.h"
#include "VysyxSoCFull__Syms.h"

void VysyxSoCFull_CarrySaveAdder___ctor_var_reset(VysyxSoCFull_CarrySaveAdder* vlSelf);

VysyxSoCFull_CarrySaveAdder::VysyxSoCFull_CarrySaveAdder(VysyxSoCFull__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VysyxSoCFull_CarrySaveAdder___ctor_var_reset(this);
}

void VysyxSoCFull_CarrySaveAdder::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VysyxSoCFull_CarrySaveAdder::~VysyxSoCFull_CarrySaveAdder() {
}
