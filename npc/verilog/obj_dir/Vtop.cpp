// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop.h"
#include "Vtop__Syms.h"
#include "verilated_fst_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vtop::Vtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_timer{vlSymsp->TOP.io_timer}
    , io_soft{vlSymsp->TOP.io_soft}
    , io_extern{vlSymsp->TOP.io_extern}
    , io_flush{vlSymsp->TOP.io_flush}
    , io_stall{vlSymsp->TOP.io_stall}
    , io_bputake{vlSymsp->TOP.io_bputake}
    , io_romaddrvalid{vlSymsp->TOP.io_romaddrvalid}
    , io_romaddrready{vlSymsp->TOP.io_romaddrready}
    , io_romdatavalid{vlSymsp->TOP.io_romdatavalid}
    , io_romdataready{vlSymsp->TOP.io_romdataready}
    , io_ifaddrvalid{vlSymsp->TOP.io_ifaddrvalid}
    , io_ifaddrready{vlSymsp->TOP.io_ifaddrready}
    , io_ifdatavalid{vlSymsp->TOP.io_ifdatavalid}
    , io_ifdataready{vlSymsp->TOP.io_ifdataready}
    , io_inst{vlSymsp->TOP.io_inst}
    , io_pc{vlSymsp->TOP.io_pc}
    , io_npc{vlSymsp->TOP.io_npc}
    , io_flushpc{vlSymsp->TOP.io_flushpc}
    , io_wbinst{vlSymsp->TOP.io_wbinst}
    , io_bpuaddr{vlSymsp->TOP.io_bpuaddr}
    , io_idpc{vlSymsp->TOP.io_idpc}
    , io_idinst{vlSymsp->TOP.io_idinst}
    , io_expc{vlSymsp->TOP.io_expc}
    , io_exinst{vlSymsp->TOP.io_exinst}
    , io_mempc{vlSymsp->TOP.io_mempc}
    , io_meminst{vlSymsp->TOP.io_meminst}
    , io_result{vlSymsp->TOP.io_result}
    , io_waddr{vlSymsp->TOP.io_waddr}
    , io_state{vlSymsp->TOP.io_state}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder{vlSymsp->TOP.__PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder}
    , __PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1{vlSymsp->TOP.__PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1}
    , __PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2{vlSymsp->TOP.__PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2}
    , __PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3{vlSymsp->TOP.__PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3}
    , __PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4{vlSymsp->TOP.__PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4}
    , __PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5{vlSymsp->TOP.__PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5}
    , __PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6{vlSymsp->TOP.__PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6}
    , __PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7{vlSymsp->TOP.__PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7}
    , __PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8{vlSymsp->TOP.__PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8}
    , __PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9{vlSymsp->TOP.__PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9}
    , __PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10{vlSymsp->TOP.__PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10}
    , __PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11{vlSymsp->TOP.__PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11}
    , __PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12{vlSymsp->TOP.__PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12}
    , __PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13{vlSymsp->TOP.__PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13}
    , __PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14{vlSymsp->TOP.__PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14}
    , __PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15{vlSymsp->TOP.__PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15}
    , __PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16{vlSymsp->TOP.__PVT__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop::Vtop(const char* _vcname__)
    : Vtop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop::~Vtop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_static(Vtop___024root* vlSelf);
void Vtop___024root___eval_initial(Vtop___024root* vlSelf);
void Vtop___024root___eval_settle(Vtop___024root* vlSelf);
void Vtop___024root___eval(Vtop___024root* vlSelf);

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop___024root___eval_static(&(vlSymsp->TOP));
        Vtop___024root___eval_initial(&(vlSymsp->TOP));
        Vtop___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop::eventsPending() { return false; }

uint64_t Vtop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop___024root___eval_final(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop::final() {
    Vtop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop::hierName() const { return vlSymsp->name(); }
const char* Vtop::modelName() const { return "Vtop"; }
unsigned Vtop::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vtop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtop___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtop::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtop::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtop___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
