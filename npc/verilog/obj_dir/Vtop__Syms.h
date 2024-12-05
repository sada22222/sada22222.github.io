// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop___024unit.h"
#include "Vtop_CarrySaveAdder.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop___024unit                 TOP____024unit;
    Vtop_CarrySaveAdder            TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder;
    Vtop_CarrySaveAdder            TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1;
    Vtop_CarrySaveAdder            TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10;
    Vtop_CarrySaveAdder            TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11;
    Vtop_CarrySaveAdder            TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12;
    Vtop_CarrySaveAdder            TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13;
    Vtop_CarrySaveAdder            TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14;
    Vtop_CarrySaveAdder            TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15;
    Vtop_CarrySaveAdder            TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16;
    Vtop_CarrySaveAdder            TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2;
    Vtop_CarrySaveAdder            TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3;
    Vtop_CarrySaveAdder            TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4;
    Vtop_CarrySaveAdder            TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5;
    Vtop_CarrySaveAdder            TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6;
    Vtop_CarrySaveAdder            TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7;
    Vtop_CarrySaveAdder            TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8;
    Vtop_CarrySaveAdder            TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
