// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vkeyboard.h"
#include "Vkeyboard__Syms.h"

//============================================================
// Constructors

Vkeyboard::Vkeyboard(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vkeyboard__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_ps2_clk{vlSymsp->TOP.io_ps2_clk}
    , io_ps2_data{vlSymsp->TOP.io_ps2_data}
    , io_seg_0{vlSymsp->TOP.io_seg_0}
    , io_seg_1{vlSymsp->TOP.io_seg_1}
    , io_seg_2{vlSymsp->TOP.io_seg_2}
    , io_seg_3{vlSymsp->TOP.io_seg_3}
    , io_seg_4{vlSymsp->TOP.io_seg_4}
    , io_seg_5{vlSymsp->TOP.io_seg_5}
    , io_seg_6{vlSymsp->TOP.io_seg_6}
    , io_seg_7{vlSymsp->TOP.io_seg_7}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vkeyboard::Vkeyboard(const char* _vcname__)
    : Vkeyboard(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vkeyboard::~Vkeyboard() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vkeyboard___024root___eval_debug_assertions(Vkeyboard___024root* vlSelf);
#endif  // VL_DEBUG
void Vkeyboard___024root___eval_static(Vkeyboard___024root* vlSelf);
void Vkeyboard___024root___eval_initial(Vkeyboard___024root* vlSelf);
void Vkeyboard___024root___eval_settle(Vkeyboard___024root* vlSelf);
void Vkeyboard___024root___eval(Vkeyboard___024root* vlSelf);

void Vkeyboard::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vkeyboard::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vkeyboard___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vkeyboard___024root___eval_static(&(vlSymsp->TOP));
        Vkeyboard___024root___eval_initial(&(vlSymsp->TOP));
        Vkeyboard___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vkeyboard___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vkeyboard::eventsPending() { return false; }

uint64_t Vkeyboard::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vkeyboard::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vkeyboard___024root___eval_final(Vkeyboard___024root* vlSelf);

VL_ATTR_COLD void Vkeyboard::final() {
    Vkeyboard___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vkeyboard::hierName() const { return vlSymsp->name(); }
const char* Vkeyboard::modelName() const { return "Vkeyboard"; }
unsigned Vkeyboard::threads() const { return 1; }
