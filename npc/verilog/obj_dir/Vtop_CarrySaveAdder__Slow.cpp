// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop_CarrySaveAdder.h"
#include "Vtop__Syms.h"

void Vtop_CarrySaveAdder___ctor_var_reset(Vtop_CarrySaveAdder* vlSelf);

Vtop_CarrySaveAdder::Vtop_CarrySaveAdder(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_CarrySaveAdder___ctor_var_reset(this);
}

void Vtop_CarrySaveAdder::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_CarrySaveAdder::~Vtop_CarrySaveAdder() {
}
