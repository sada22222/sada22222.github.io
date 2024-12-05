// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_CARRYSAVEADDER_H_
#define VERILATED_VTOP_CARRYSAVEADDER_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop_CarrySaveAdder final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT___T_222;
    IData/*31:0*/ __PVT___T_253;
    IData/*31:0*/ __PVT___T_285;
    IData/*31:0*/ __PVT___T_316;
    VL_IN64(io_A,63,0);
    VL_IN64(io_B,63,0);
    VL_IN64(io_Cin,63,0);
    VL_OUT64(io_Sum,63,0);
    VL_OUT64(io_Cout,63,0);
    QData/*63:0*/ __PVT___T_317;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_CarrySaveAdder(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_CarrySaveAdder();
    VL_UNCOPYABLE(Vtop_CarrySaveAdder);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
