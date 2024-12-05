// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_5(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_5\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 8360);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x1aU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x1aU))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x1aU)) 
                                        & (IData)((0x3fffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                      >> 0x19U))))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x1aU)) 
                                       & (IData)((0x3fffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                     >> 0x19U))))))));
        bufp->chgBit(oldp+1,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                            >> 0x1bU)))));
        bufp->chgBit(oldp+2,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                            >> 0x1bU)))));
        bufp->chgBit(oldp+3,((1U & (IData)((0x1fffffffffULL 
                                            & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                               >> 0x1aU))))));
        bufp->chgBit(oldp+4,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                              >> 0x1bU)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                >> 0x1bU))) 
                                    ^ (IData)((0x1fffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                  >> 0x1aU)))))));
        bufp->chgBit(oldp+5,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x1bU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x1bU))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x1bU)) 
                                        & (IData)((0x1fffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                      >> 0x1aU))))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x1bU)) 
                                       & (IData)((0x1fffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                     >> 0x1aU))))))));
        bufp->chgBit(oldp+6,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                            >> 0x1cU)))));
        bufp->chgBit(oldp+7,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                            >> 0x1cU)))));
        bufp->chgBit(oldp+8,((1U & (IData)((0xfffffffffULL 
                                            & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                               >> 0x1bU))))));
        bufp->chgBit(oldp+9,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                              >> 0x1cU)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                >> 0x1cU))) 
                                    ^ (IData)((0xfffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                  >> 0x1bU)))))));
        bufp->chgBit(oldp+10,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x1cU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x1cU))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x1cU)) 
                                         & (IData)(
                                                   (0xfffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x1bU))))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x1cU)) 
                                        & (IData)((0xfffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                      >> 0x1bU))))))));
        bufp->chgBit(oldp+11,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                             >> 0x1dU)))));
        bufp->chgBit(oldp+12,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                             >> 0x1dU)))));
        bufp->chgBit(oldp+13,((1U & (IData)((0x7ffffffffULL 
                                             & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                >> 0x1cU))))));
        bufp->chgBit(oldp+14,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x1dU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x1dU))) 
                                     ^ (IData)((0x7ffffffffULL 
                                                & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                   >> 0x1cU)))))));
        bufp->chgBit(oldp+15,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x1dU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x1dU))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x1dU)) 
                                         & (IData)(
                                                   (0x7ffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x1cU))))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x1dU)) 
                                        & (IData)((0x7ffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                      >> 0x1cU))))))));
        bufp->chgBit(oldp+16,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                             >> 0x1eU)))));
        bufp->chgBit(oldp+17,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                             >> 0x1eU)))));
        bufp->chgBit(oldp+18,((1U & (IData)((0x3ffffffffULL 
                                             & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                >> 0x1dU))))));
        bufp->chgBit(oldp+19,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x1eU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x1eU))) 
                                     ^ (IData)((0x3ffffffffULL 
                                                & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                   >> 0x1dU)))))));
        bufp->chgBit(oldp+20,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x1eU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x1eU))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x1eU)) 
                                         & (IData)(
                                                   (0x3ffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x1dU))))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x1eU)) 
                                        & (IData)((0x3ffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                      >> 0x1dU))))))));
        bufp->chgBit(oldp+21,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                             >> 0x1fU)))));
        bufp->chgBit(oldp+22,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                             >> 0x1fU)))));
        bufp->chgBit(oldp+23,((1U & (IData)((0x1ffffffffULL 
                                             & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                >> 0x1eU))))));
        bufp->chgBit(oldp+24,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x1fU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x1fU))) 
                                     ^ (IData)((0x1ffffffffULL 
                                                & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                   >> 0x1eU)))))));
        bufp->chgBit(oldp+25,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x1fU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x1fU))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x1fU)) 
                                         & (IData)(
                                                   (0x1ffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x1eU))))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x1fU)) 
                                        & (IData)((0x1ffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                      >> 0x1eU))))))));
        bufp->chgBit(oldp+26,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                             >> 0x20U)))));
        bufp->chgBit(oldp+27,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                             >> 0x20U)))));
        bufp->chgBit(oldp+28,((1U & (IData)((0xffffffffULL 
                                             & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                >> 0x1fU))))));
        bufp->chgBit(oldp+29,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x20U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x20U))) 
                                     ^ (IData)((0xffffffffULL 
                                                & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                   >> 0x1fU)))))));
        bufp->chgBit(oldp+30,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x20U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x20U))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x20U)) 
                                         & (IData)(
                                                   (0xffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x1fU))))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x20U)) 
                                        & (IData)((0xffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                      >> 0x1fU))))))));
        bufp->chgBit(oldp+31,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                             >> 0x21U)))));
        bufp->chgBit(oldp+32,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                             >> 0x21U)))));
        bufp->chgBit(oldp+33,((1U & (IData)((0x7fffffffULL 
                                             & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                >> 0x20U))))));
        bufp->chgBit(oldp+34,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x21U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x21U))) 
                                     ^ (IData)((0x7fffffffULL 
                                                & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                   >> 0x20U)))))));
        bufp->chgBit(oldp+35,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x21U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x21U))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x21U)) 
                                         & (IData)(
                                                   (0x7fffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x20U))))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x21U)) 
                                        & (IData)((0x7fffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                      >> 0x20U))))))));
        bufp->chgBit(oldp+36,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                             >> 0x22U)))));
        bufp->chgBit(oldp+37,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                             >> 0x22U)))));
        bufp->chgBit(oldp+38,((1U & (IData)((0x3fffffffULL 
                                             & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                >> 0x21U))))));
        bufp->chgBit(oldp+39,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x22U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x22U))) 
                                     ^ (IData)((0x3fffffffULL 
                                                & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                   >> 0x21U)))))));
        bufp->chgBit(oldp+40,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x22U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x22U))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x22U)) 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x21U))))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x22U)) 
                                        & (IData)((0x3fffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                      >> 0x21U))))))));
        bufp->chgBit(oldp+41,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                             >> 0x23U)))));
        bufp->chgBit(oldp+42,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                             >> 0x23U)))));
        bufp->chgBit(oldp+43,((1U & (IData)((0x1fffffffULL 
                                             & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                >> 0x22U))))));
        bufp->chgBit(oldp+44,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x23U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x23U))) 
                                     ^ (IData)((0x1fffffffULL 
                                                & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                   >> 0x22U)))))));
        bufp->chgBit(oldp+45,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x23U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x23U))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x23U)) 
                                         & (IData)(
                                                   (0x1fffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x22U))))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x23U)) 
                                        & (IData)((0x1fffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                      >> 0x22U))))))));
        bufp->chgBit(oldp+46,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                             >> 0x24U)))));
        bufp->chgBit(oldp+47,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                             >> 0x24U)))));
        bufp->chgBit(oldp+48,((1U & (IData)((0xfffffffULL 
                                             & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                >> 0x23U))))));
        bufp->chgBit(oldp+49,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x24U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x24U))) 
                                     ^ (IData)((0xfffffffULL 
                                                & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                   >> 0x23U)))))));
        bufp->chgBit(oldp+50,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x24U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x24U))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x24U)) 
                                         & (IData)(
                                                   (0xfffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x23U))))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x24U)) 
                                        & (IData)((0xfffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                      >> 0x23U))))))));
        bufp->chgBit(oldp+51,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                             >> 0x25U)))));
        bufp->chgBit(oldp+52,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                             >> 0x25U)))));
        bufp->chgBit(oldp+53,((1U & (IData)((0x7ffffffULL 
                                             & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                >> 0x24U))))));
        bufp->chgBit(oldp+54,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x25U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x25U))) 
                                     ^ (IData)((0x7ffffffULL 
                                                & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                   >> 0x24U)))))));
        bufp->chgBit(oldp+55,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x25U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x25U))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x25U)) 
                                         & (IData)(
                                                   (0x7ffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x24U))))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x25U)) 
                                        & (IData)((0x7ffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                      >> 0x24U))))))));
        bufp->chgBit(oldp+56,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                             >> 0x26U)))));
        bufp->chgBit(oldp+57,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                             >> 0x26U)))));
        bufp->chgBit(oldp+58,((1U & (IData)((0x3ffffffULL 
                                             & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                >> 0x25U))))));
        bufp->chgBit(oldp+59,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x26U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x26U))) 
                                     ^ (IData)((0x3ffffffULL 
                                                & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                   >> 0x25U)))))));
        bufp->chgBit(oldp+60,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x26U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x26U))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x26U)) 
                                         & (IData)(
                                                   (0x3ffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x25U))))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x26U)) 
                                        & (IData)((0x3ffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                      >> 0x25U))))))));
        bufp->chgBit(oldp+61,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                             >> 0x27U)))));
        bufp->chgBit(oldp+62,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                             >> 0x27U)))));
        bufp->chgBit(oldp+63,((1U & (IData)((0x1ffffffULL 
                                             & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                >> 0x26U))))));
        bufp->chgBit(oldp+64,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x27U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x27U))) 
                                     ^ (IData)((0x1ffffffULL 
                                                & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                   >> 0x26U)))))));
        bufp->chgBit(oldp+65,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x27U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x27U))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x27U)) 
                                         & (IData)(
                                                   (0x1ffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x26U))))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x27U)) 
                                        & (IData)((0x1ffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                      >> 0x26U))))))));
        bufp->chgBit(oldp+66,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                             >> 0x28U)))));
        bufp->chgBit(oldp+67,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                             >> 0x28U)))));
        bufp->chgBit(oldp+68,((1U & (IData)((0xffffffULL 
                                             & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                >> 0x27U))))));
        bufp->chgBit(oldp+69,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x28U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x28U))) 
                                     ^ (IData)((0xffffffULL 
                                                & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                   >> 0x27U)))))));
        bufp->chgBit(oldp+70,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x28U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x28U))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x28U)) 
                                         & (IData)(
                                                   (0xffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x27U))))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x28U)) 
                                        & (IData)((0xffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                      >> 0x27U))))))));
        bufp->chgBit(oldp+71,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                             >> 0x29U)))));
        bufp->chgBit(oldp+72,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                             >> 0x29U)))));
        bufp->chgBit(oldp+73,((1U & (IData)((0x7fffffULL 
                                             & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                >> 0x28U))))));
        bufp->chgBit(oldp+74,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x29U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x29U))) 
                                     ^ (IData)((0x7fffffULL 
                                                & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                   >> 0x28U)))))));
        bufp->chgBit(oldp+75,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x29U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x29U))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x29U)) 
                                         & (IData)(
                                                   (0x7fffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x28U))))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x29U)) 
                                        & (IData)((0x7fffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                      >> 0x28U))))))));
        bufp->chgBit(oldp+76,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                             >> 0x2aU)))));
        bufp->chgBit(oldp+77,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                             >> 0x2aU)))));
        bufp->chgBit(oldp+78,((1U & (IData)((0x3fffffULL 
                                             & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                >> 0x29U))))));
        bufp->chgBit(oldp+79,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x2aU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x2aU))) 
                                     ^ (IData)((0x3fffffULL 
                                                & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                   >> 0x29U)))))));
        bufp->chgBit(oldp+80,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x2aU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x2aU))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x2aU)) 
                                         & (IData)(
                                                   (0x3fffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x29U))))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x2aU)) 
                                        & (IData)((0x3fffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                      >> 0x29U))))))));
        bufp->chgBit(oldp+81,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                             >> 0x2bU)))));
        bufp->chgBit(oldp+82,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                             >> 0x2bU)))));
        bufp->chgBit(oldp+83,((1U & (IData)((0x1fffffULL 
                                             & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                >> 0x2aU))))));
        bufp->chgBit(oldp+84,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x2bU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x2bU))) 
                                     ^ (IData)((0x1fffffULL 
                                                & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                   >> 0x2aU)))))));
        bufp->chgBit(oldp+85,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x2bU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x2bU))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x2bU)) 
                                         & (IData)(
                                                   (0x1fffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x2aU))))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x2bU)) 
                                        & (IData)((0x1fffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                      >> 0x2aU))))))));
        bufp->chgBit(oldp+86,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                             >> 0x2cU)))));
        bufp->chgBit(oldp+87,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                             >> 0x2cU)))));
        bufp->chgBit(oldp+88,((1U & (IData)((0xfffffULL 
                                             & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                >> 0x2bU))))));
        bufp->chgBit(oldp+89,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x2cU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x2cU))) 
                                     ^ (IData)((0xfffffULL 
                                                & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                   >> 0x2bU)))))));
        bufp->chgBit(oldp+90,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x2cU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x2cU))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x2cU)) 
                                         & (IData)(
                                                   (0xfffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x2bU))))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x2cU)) 
                                        & (IData)((0xfffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                      >> 0x2bU))))))));
        bufp->chgBit(oldp+91,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                             >> 0x2dU)))));
        bufp->chgBit(oldp+92,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                             >> 0x2dU)))));
        bufp->chgBit(oldp+93,((1U & (IData)((0x7ffffULL 
                                             & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                >> 0x2cU))))));
        bufp->chgBit(oldp+94,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x2dU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x2dU))) 
                                     ^ (IData)((0x7ffffULL 
                                                & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                   >> 0x2cU)))))));
        bufp->chgBit(oldp+95,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x2dU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x2dU))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x2dU)) 
                                         & (IData)(
                                                   (0x7ffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x2cU))))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x2dU)) 
                                        & (IData)((0x7ffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                      >> 0x2cU))))))));
        bufp->chgBit(oldp+96,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                             >> 0x2eU)))));
        bufp->chgBit(oldp+97,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                             >> 0x2eU)))));
        bufp->chgBit(oldp+98,((1U & (IData)((0x3ffffULL 
                                             & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                >> 0x2dU))))));
        bufp->chgBit(oldp+99,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x2eU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x2eU))) 
                                     ^ (IData)((0x3ffffULL 
                                                & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                   >> 0x2dU)))))));
        bufp->chgBit(oldp+100,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x2eU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x2eU))) 
                                       | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x2eU)) 
                                          & (IData)(
                                                    (0x3ffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                        >> 0x2dU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                  >> 0x2eU)) 
                                         & (IData)(
                                                   (0x3ffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x2dU))))))));
        bufp->chgBit(oldp+101,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+102,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+103,((1U & (IData)((0x1ffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                 >> 0x2eU))))));
        bufp->chgBit(oldp+104,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x2fU)) 
                                       ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x2fU))) 
                                      ^ (IData)((0x1ffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x2eU)))))));
        bufp->chgBit(oldp+105,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x2fU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x2fU))) 
                                       | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x2fU)) 
                                          & (IData)(
                                                    (0x1ffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                        >> 0x2eU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                  >> 0x2fU)) 
                                         & (IData)(
                                                   (0x1ffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x2eU))))))));
        bufp->chgBit(oldp+106,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+107,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+108,((1U & (IData)((0xffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                 >> 0x2fU))))));
        bufp->chgBit(oldp+109,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x30U)) 
                                       ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x30U))) 
                                      ^ (IData)((0xffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x2fU)))))));
        bufp->chgBit(oldp+110,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x30U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x30U))) 
                                       | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x30U)) 
                                          & (IData)(
                                                    (0xffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                        >> 0x2fU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                  >> 0x30U)) 
                                         & (IData)(
                                                   (0xffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x2fU))))))));
        bufp->chgBit(oldp+111,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+112,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+113,((1U & (IData)((0x7fffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                 >> 0x30U))))));
        bufp->chgBit(oldp+114,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x31U)) 
                                       ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x31U))) 
                                      ^ (IData)((0x7fffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x30U)))))));
        bufp->chgBit(oldp+115,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x31U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x31U))) 
                                       | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x31U)) 
                                          & (IData)(
                                                    (0x7fffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                        >> 0x30U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                  >> 0x31U)) 
                                         & (IData)(
                                                   (0x7fffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x30U))))))));
        bufp->chgBit(oldp+116,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+117,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+118,((1U & (IData)((0x3fffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                 >> 0x31U))))));
        bufp->chgBit(oldp+119,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x32U)) 
                                       ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x32U))) 
                                      ^ (IData)((0x3fffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x31U)))))));
        bufp->chgBit(oldp+120,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x32U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x32U))) 
                                       | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x32U)) 
                                          & (IData)(
                                                    (0x3fffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                        >> 0x31U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                  >> 0x32U)) 
                                         & (IData)(
                                                   (0x3fffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x31U))))))));
        bufp->chgBit(oldp+121,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+122,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+123,((1U & (IData)((0x1fffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                 >> 0x32U))))));
        bufp->chgBit(oldp+124,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x33U)) 
                                       ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x33U))) 
                                      ^ (IData)((0x1fffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x32U)))))));
        bufp->chgBit(oldp+125,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x33U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x33U))) 
                                       | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x33U)) 
                                          & (IData)(
                                                    (0x1fffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                        >> 0x32U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                  >> 0x33U)) 
                                         & (IData)(
                                                   (0x1fffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x32U))))))));
        bufp->chgBit(oldp+126,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+127,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+128,((1U & (IData)((0xfffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                 >> 0x33U))))));
        bufp->chgBit(oldp+129,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x34U)) 
                                       ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x34U))) 
                                      ^ (IData)((0xfffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x33U)))))));
        bufp->chgBit(oldp+130,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x34U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x34U))) 
                                       | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x34U)) 
                                          & (IData)(
                                                    (0xfffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                        >> 0x33U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                  >> 0x34U)) 
                                         & (IData)(
                                                   (0xfffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x33U))))))));
        bufp->chgBit(oldp+131,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+132,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+133,((1U & (IData)((0x7ffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                 >> 0x34U))))));
        bufp->chgBit(oldp+134,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x35U)) 
                                       ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x35U))) 
                                      ^ (IData)((0x7ffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x34U)))))));
        bufp->chgBit(oldp+135,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x35U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x35U))) 
                                       | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x35U)) 
                                          & (IData)(
                                                    (0x7ffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                        >> 0x34U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                  >> 0x35U)) 
                                         & (IData)(
                                                   (0x7ffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x34U))))))));
        bufp->chgBit(oldp+136,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+137,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+138,((1U & (IData)((0x3ffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                 >> 0x35U))))));
        bufp->chgBit(oldp+139,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x36U)) 
                                       ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x36U))) 
                                      ^ (IData)((0x3ffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x35U)))))));
        bufp->chgBit(oldp+140,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x36U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x36U))) 
                                       | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x36U)) 
                                          & (IData)(
                                                    (0x3ffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                        >> 0x35U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                  >> 0x36U)) 
                                         & (IData)(
                                                   (0x3ffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x35U))))))));
        bufp->chgBit(oldp+141,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+142,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+143,((1U & (IData)((0x1ffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                 >> 0x36U))))));
        bufp->chgBit(oldp+144,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x37U)) 
                                       ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x37U))) 
                                      ^ (IData)((0x1ffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x36U)))))));
        bufp->chgBit(oldp+145,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x37U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x37U))) 
                                       | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x37U)) 
                                          & (IData)(
                                                    (0x1ffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                        >> 0x36U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                  >> 0x37U)) 
                                         & (IData)(
                                                   (0x1ffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x36U))))))));
        bufp->chgBit(oldp+146,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+147,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+148,((1U & (IData)((0xffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                 >> 0x37U))))));
        bufp->chgBit(oldp+149,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x38U)) 
                                       ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x38U))) 
                                      ^ (IData)((0xffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x37U)))))));
        bufp->chgBit(oldp+150,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x38U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x38U))) 
                                       | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x38U)) 
                                          & (IData)(
                                                    (0xffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                        >> 0x37U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                  >> 0x38U)) 
                                         & (IData)(
                                                   (0xffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x37U))))))));
        bufp->chgBit(oldp+151,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+152,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+153,((1U & (IData)((0x7fULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                 >> 0x38U))))));
        bufp->chgBit(oldp+154,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x39U)) 
                                       ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x39U))) 
                                      ^ (IData)((0x7fULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x38U)))))));
        bufp->chgBit(oldp+155,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x39U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x39U))) 
                                       | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x39U)) 
                                          & (IData)(
                                                    (0x7fULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                        >> 0x38U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                  >> 0x39U)) 
                                         & (IData)(
                                                   (0x7fULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x38U))))))));
        bufp->chgBit(oldp+156,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+157,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+158,((1U & (IData)((0x3fULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                 >> 0x39U))))));
        bufp->chgBit(oldp+159,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x3aU)) 
                                       ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x3aU))) 
                                      ^ (IData)((0x3fULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x39U)))))));
        bufp->chgBit(oldp+160,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x3aU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x3aU))) 
                                       | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x3aU)) 
                                          & (IData)(
                                                    (0x3fULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                        >> 0x39U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                  >> 0x3aU)) 
                                         & (IData)(
                                                   (0x3fULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x39U))))))));
        bufp->chgBit(oldp+161,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+162,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+163,((1U & (IData)((0x1fULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                 >> 0x3aU))))));
        bufp->chgBit(oldp+164,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x3bU)) 
                                       ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x3bU))) 
                                      ^ (IData)((0x1fULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x3aU)))))));
        bufp->chgBit(oldp+165,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x3bU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x3bU))) 
                                       | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x3bU)) 
                                          & (IData)(
                                                    (0x1fULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                        >> 0x3aU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                  >> 0x3bU)) 
                                         & (IData)(
                                                   (0x1fULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x3aU))))))));
        bufp->chgBit(oldp+166,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+167,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+168,((1U & (IData)((0xfULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                 >> 0x3bU))))));
        bufp->chgBit(oldp+169,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x3cU)) 
                                       ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x3cU))) 
                                      ^ (IData)((0xfULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x3bU)))))));
        bufp->chgBit(oldp+170,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x3cU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x3cU))) 
                                       | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x3cU)) 
                                          & (IData)(
                                                    (0xfULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                        >> 0x3bU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                  >> 0x3cU)) 
                                         & (IData)(
                                                   (0xfULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x3bU))))))));
        bufp->chgBit(oldp+171,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+172,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+173,((1U & (IData)((7ULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                 >> 0x3cU))))));
        bufp->chgBit(oldp+174,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x3dU)) 
                                       ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x3dU))) 
                                      ^ (IData)((7ULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x3cU)))))));
        bufp->chgBit(oldp+175,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x3dU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x3dU))) 
                                       | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x3dU)) 
                                          & (IData)(
                                                    (7ULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                        >> 0x3cU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                  >> 0x3dU)) 
                                         & (IData)(
                                                   (7ULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x3cU))))))));
        bufp->chgBit(oldp+176,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+177,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+178,((1U & (IData)((3ULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                 >> 0x3dU))))));
        bufp->chgBit(oldp+179,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x3eU)) 
                                       ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x3eU))) 
                                      ^ (IData)((3ULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x3dU)))))));
        bufp->chgBit(oldp+180,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x3eU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x3eU))) 
                                       | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x3eU)) 
                                          & (IData)(
                                                    (3ULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                        >> 0x3dU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                  >> 0x3eU)) 
                                         & (IData)(
                                                   (3ULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x3dU))))))));
        bufp->chgBit(oldp+181,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+182,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+183,((1U & (IData)((1ULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                 >> 0x3eU))))));
        bufp->chgBit(oldp+184,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                >> 0x3fU)) 
                                       ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                  >> 0x3fU))) 
                                      ^ (IData)((1ULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x3eU)))))));
        bufp->chgBit(oldp+185,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                 >> 0x3fU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x3fU))) 
                                       | (IData)(((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                   >> 0x3fU) 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                     >> 0x3eU)))) 
                                      | (IData)(((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                  >> 0x3fU) 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x3eU)))))));
        bufp->chgBit(oldp+186,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum) 
                                      ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum)))));
        bufp->chgBit(oldp+187,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum) 
                                      & (IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum)))));
        bufp->chgBit(oldp+188,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                 << 1U))))));
        bufp->chgBit(oldp+189,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                 << 1U))))));
        bufp->chgBit(oldp+190,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 1U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 1U))))));
        bufp->chgBit(oldp+191,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 1U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 1U))))));
        bufp->chgBit(oldp+192,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 1U)) 
                                      & (IData)((0x7fffffffffffffffULL 
                                                 & vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317))))));
        bufp->chgBit(oldp+193,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 1U)) 
                                      & (IData)((0x7fffffffffffffffULL 
                                                 & vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317))))));
        bufp->chgBit(oldp+194,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0xaU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+195,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0xaU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+196,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0xaU)) 
                                      & (IData)((0x3fffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+197,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0xaU)) 
                                      & (IData)((0x3fffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+198,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0xbU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+199,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0xbU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+200,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0xbU)) 
                                      & (IData)((0x1fffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+201,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0xbU)) 
                                      & (IData)((0x1fffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+202,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0xcU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+203,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0xcU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+204,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0xcU)) 
                                      & (IData)((0xfffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+205,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0xcU)) 
                                      & (IData)((0xfffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+206,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0xdU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+207,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0xdU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+208,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0xdU)) 
                                      & (IData)((0x7ffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+209,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0xdU)) 
                                      & (IData)((0x7ffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+210,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0xeU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+211,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0xeU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+212,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0xeU)) 
                                      & (IData)((0x3ffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+213,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0xeU)) 
                                      & (IData)((0x3ffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+214,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0xfU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+215,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0xfU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+216,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0xfU)) 
                                      & (IData)((0x1ffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+217,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0xfU)) 
                                      & (IData)((0x1ffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+218,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x10U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+219,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x10U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+220,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x10U)) 
                                      & (IData)((0xffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+221,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x10U)) 
                                      & (IData)((0xffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+222,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x11U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+223,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x11U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+224,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x11U)) 
                                      & (IData)((0x7fffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+225,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x11U)) 
                                      & (IData)((0x7fffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+226,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x12U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+227,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x12U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+228,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x12U)) 
                                      & (IData)((0x3fffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+229,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x12U)) 
                                      & (IData)((0x3fffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+230,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x13U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+231,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x13U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+232,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x13U)) 
                                      & (IData)((0x1fffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+233,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x13U)) 
                                      & (IData)((0x1fffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+234,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 2U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 2U))))));
        bufp->chgBit(oldp+235,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 2U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 2U))))));
        bufp->chgBit(oldp+236,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 2U)) 
                                      & (IData)((0x3fffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+237,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 2U)) 
                                      & (IData)((0x3fffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+238,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x14U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+239,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x14U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+240,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x14U)) 
                                      & (IData)((0xfffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+241,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x14U)) 
                                      & (IData)((0xfffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+242,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x15U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+243,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x15U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+244,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x15U)) 
                                      & (IData)((0x7ffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+245,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x15U)) 
                                      & (IData)((0x7ffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+246,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x16U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+247,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x16U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+248,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x16U)) 
                                      & (IData)((0x3ffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+249,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x16U)) 
                                      & (IData)((0x3ffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+250,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x17U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+251,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x17U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+252,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x17U)) 
                                      & (IData)((0x1ffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+253,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x17U)) 
                                      & (IData)((0x1ffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+254,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x18U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+255,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x18U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+256,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x18U)) 
                                      & (IData)((0xffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+257,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x18U)) 
                                      & (IData)((0xffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+258,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x19U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+259,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x19U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+260,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x19U)) 
                                      & (IData)((0x7fffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+261,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x19U)) 
                                      & (IData)((0x7fffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+262,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x1aU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+263,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x1aU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+264,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x1aU)) 
                                      & (IData)((0x3fffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+265,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x1aU)) 
                                      & (IData)((0x3fffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+266,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x1bU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+267,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x1bU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+268,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x1bU)) 
                                      & (IData)((0x1fffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+269,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x1bU)) 
                                      & (IData)((0x1fffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+270,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x1cU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+271,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x1cU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+272,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x1cU)) 
                                      & (IData)((0xfffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+273,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x1cU)) 
                                      & (IData)((0xfffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+274,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x1dU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+275,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x1dU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+276,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x1dU)) 
                                      & (IData)((0x7ffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+277,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x1dU)) 
                                      & (IData)((0x7ffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+278,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 3U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 3U))))));
        bufp->chgBit(oldp+279,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 3U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 3U))))));
        bufp->chgBit(oldp+280,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 3U)) 
                                      & (IData)((0x1fffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+281,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 3U)) 
                                      & (IData)((0x1fffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+282,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x1eU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+283,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x1eU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+284,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x1eU)) 
                                      & (IData)((0x3ffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+285,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x1eU)) 
                                      & (IData)((0x3ffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+286,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x1fU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+287,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x1fU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+288,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x1fU)) 
                                      & (IData)((0x1ffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+289,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x1fU)) 
                                      & (IData)((0x1ffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+290,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x20U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+291,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x20U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+292,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x20U)) 
                                      & (IData)((0xffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+293,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x20U)) 
                                      & (IData)((0xffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+294,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x21U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+295,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x21U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+296,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x21U)) 
                                      & (IData)((0x7fffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+297,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x21U)) 
                                      & (IData)((0x7fffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+298,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x22U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+299,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x22U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+300,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x22U)) 
                                      & (IData)((0x3fffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+301,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x22U)) 
                                      & (IData)((0x3fffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+302,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x23U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+303,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x23U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+304,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x23U)) 
                                      & (IData)((0x1fffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+305,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x23U)) 
                                      & (IData)((0x1fffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+306,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x24U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+307,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x24U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+308,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x24U)) 
                                      & (IData)((0xfffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+309,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x24U)) 
                                      & (IData)((0xfffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+310,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x25U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+311,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x25U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+312,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x25U)) 
                                      & (IData)((0x7ffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+313,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x25U)) 
                                      & (IData)((0x7ffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+314,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x26U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x26U))))));
        bufp->chgBit(oldp+315,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x26U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x26U))))));
        bufp->chgBit(oldp+316,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x26U)) 
                                      & (IData)((0x3ffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+317,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x26U)) 
                                      & (IData)((0x3ffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+318,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x27U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x27U))))));
        bufp->chgBit(oldp+319,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x27U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x27U))))));
        bufp->chgBit(oldp+320,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x27U)) 
                                      & (IData)((0x1ffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x26U)))))));
        bufp->chgBit(oldp+321,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x27U)) 
                                      & (IData)((0x1ffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x26U)))))));
        bufp->chgBit(oldp+322,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 4U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 4U))))));
        bufp->chgBit(oldp+323,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 4U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 4U))))));
        bufp->chgBit(oldp+324,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 4U)) 
                                      & (IData)((0xfffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+325,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 4U)) 
                                      & (IData)((0xfffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+326,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x28U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x28U))))));
        bufp->chgBit(oldp+327,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x28U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x28U))))));
        bufp->chgBit(oldp+328,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x28U)) 
                                      & (IData)((0xffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x27U)))))));
        bufp->chgBit(oldp+329,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x28U)) 
                                      & (IData)((0xffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x27U)))))));
        bufp->chgBit(oldp+330,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x29U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x29U))))));
        bufp->chgBit(oldp+331,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x29U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x29U))))));
        bufp->chgBit(oldp+332,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x29U)) 
                                      & (IData)((0x7fffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x28U)))))));
        bufp->chgBit(oldp+333,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x29U)) 
                                      & (IData)((0x7fffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x28U)))))));
        bufp->chgBit(oldp+334,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x2aU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x2aU))))));
        bufp->chgBit(oldp+335,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x2aU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x2aU))))));
        bufp->chgBit(oldp+336,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x2aU)) 
                                      & (IData)((0x3fffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x29U)))))));
        bufp->chgBit(oldp+337,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x2aU)) 
                                      & (IData)((0x3fffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x29U)))))));
        bufp->chgBit(oldp+338,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x2bU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x2bU))))));
        bufp->chgBit(oldp+339,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x2bU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x2bU))))));
        bufp->chgBit(oldp+340,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x2bU)) 
                                      & (IData)((0x1fffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x2aU)))))));
        bufp->chgBit(oldp+341,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x2bU)) 
                                      & (IData)((0x1fffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x2aU)))))));
        bufp->chgBit(oldp+342,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x2cU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x2cU))))));
        bufp->chgBit(oldp+343,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x2cU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x2cU))))));
        bufp->chgBit(oldp+344,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x2cU)) 
                                      & (IData)((0xfffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x2bU)))))));
        bufp->chgBit(oldp+345,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x2cU)) 
                                      & (IData)((0xfffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x2bU)))))));
        bufp->chgBit(oldp+346,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x2dU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x2dU))))));
        bufp->chgBit(oldp+347,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x2dU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x2dU))))));
        bufp->chgBit(oldp+348,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x2dU)) 
                                      & (IData)((0x7ffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x2cU)))))));
        bufp->chgBit(oldp+349,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x2dU)) 
                                      & (IData)((0x7ffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x2cU)))))));
        bufp->chgBit(oldp+350,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x2eU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x2eU))))));
        bufp->chgBit(oldp+351,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x2eU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x2eU))))));
        bufp->chgBit(oldp+352,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x2eU)) 
                                      & (IData)((0x3ffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x2dU)))))));
        bufp->chgBit(oldp+353,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x2eU)) 
                                      & (IData)((0x3ffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x2dU)))))));
        bufp->chgBit(oldp+354,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x2fU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x2fU))))));
        bufp->chgBit(oldp+355,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x2fU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x2fU))))));
        bufp->chgBit(oldp+356,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x2fU)) 
                                      & (IData)((0x1ffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x2eU)))))));
        bufp->chgBit(oldp+357,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x2fU)) 
                                      & (IData)((0x1ffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x2eU)))))));
        bufp->chgBit(oldp+358,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x30U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x30U))))));
        bufp->chgBit(oldp+359,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x30U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x30U))))));
        bufp->chgBit(oldp+360,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x30U)) 
                                      & (IData)((0xffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x2fU)))))));
        bufp->chgBit(oldp+361,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x30U)) 
                                      & (IData)((0xffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x2fU)))))));
        bufp->chgBit(oldp+362,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x31U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x31U))))));
        bufp->chgBit(oldp+363,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x31U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x31U))))));
        bufp->chgBit(oldp+364,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x31U)) 
                                      & (IData)((0x7fffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x30U)))))));
        bufp->chgBit(oldp+365,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x31U)) 
                                      & (IData)((0x7fffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x30U)))))));
        bufp->chgBit(oldp+366,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 5U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 5U))))));
        bufp->chgBit(oldp+367,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 5U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 5U))))));
        bufp->chgBit(oldp+368,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 5U)) 
                                      & (IData)((0x7ffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+369,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 5U)) 
                                      & (IData)((0x7ffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+370,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x32U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x32U))))));
        bufp->chgBit(oldp+371,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x32U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x32U))))));
        bufp->chgBit(oldp+372,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x32U)) 
                                      & (IData)((0x3fffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x31U)))))));
        bufp->chgBit(oldp+373,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x32U)) 
                                      & (IData)((0x3fffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x31U)))))));
        bufp->chgBit(oldp+374,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x33U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x33U))))));
        bufp->chgBit(oldp+375,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x33U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x33U))))));
        bufp->chgBit(oldp+376,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x33U)) 
                                      & (IData)((0x1fffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x32U)))))));
        bufp->chgBit(oldp+377,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x33U)) 
                                      & (IData)((0x1fffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x32U)))))));
        bufp->chgBit(oldp+378,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x34U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x34U))))));
        bufp->chgBit(oldp+379,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x34U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x34U))))));
        bufp->chgBit(oldp+380,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x34U)) 
                                      & (IData)((0xfffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x33U)))))));
        bufp->chgBit(oldp+381,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x34U)) 
                                      & (IData)((0xfffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x33U)))))));
        bufp->chgBit(oldp+382,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x35U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x35U))))));
        bufp->chgBit(oldp+383,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x35U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x35U))))));
        bufp->chgBit(oldp+384,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x35U)) 
                                      & (IData)((0x7ffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x34U)))))));
        bufp->chgBit(oldp+385,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x35U)) 
                                      & (IData)((0x7ffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x34U)))))));
        bufp->chgBit(oldp+386,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x36U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x36U))))));
        bufp->chgBit(oldp+387,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x36U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x36U))))));
        bufp->chgBit(oldp+388,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x36U)) 
                                      & (IData)((0x3ffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x35U)))))));
        bufp->chgBit(oldp+389,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x36U)) 
                                      & (IData)((0x3ffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x35U)))))));
        bufp->chgBit(oldp+390,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x37U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x37U))))));
        bufp->chgBit(oldp+391,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x37U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x37U))))));
        bufp->chgBit(oldp+392,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x37U)) 
                                      & (IData)((0x1ffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x36U)))))));
        bufp->chgBit(oldp+393,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x37U)) 
                                      & (IData)((0x1ffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x36U)))))));
        bufp->chgBit(oldp+394,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x38U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x38U))))));
        bufp->chgBit(oldp+395,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x38U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x38U))))));
        bufp->chgBit(oldp+396,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x38U)) 
                                      & (IData)((0xffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x37U)))))));
        bufp->chgBit(oldp+397,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x38U)) 
                                      & (IData)((0xffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x37U)))))));
        bufp->chgBit(oldp+398,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x39U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x39U))))));
        bufp->chgBit(oldp+399,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x39U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x39U))))));
        bufp->chgBit(oldp+400,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x39U)) 
                                      & (IData)((0x7fULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x38U)))))));
        bufp->chgBit(oldp+401,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x39U)) 
                                      & (IData)((0x7fULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x38U)))))));
        bufp->chgBit(oldp+402,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x3aU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x3aU))))));
        bufp->chgBit(oldp+403,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x3aU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x3aU))))));
        bufp->chgBit(oldp+404,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x3aU)) 
                                      & (IData)((0x3fULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x39U)))))));
        bufp->chgBit(oldp+405,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x3aU)) 
                                      & (IData)((0x3fULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x39U)))))));
        bufp->chgBit(oldp+406,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x3bU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x3bU))))));
        bufp->chgBit(oldp+407,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x3bU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x3bU))))));
        bufp->chgBit(oldp+408,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x3bU)) 
                                      & (IData)((0x1fULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x3aU)))))));
        bufp->chgBit(oldp+409,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x3bU)) 
                                      & (IData)((0x1fULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x3aU)))))));
        bufp->chgBit(oldp+410,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 6U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 6U))))));
        bufp->chgBit(oldp+411,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 6U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 6U))))));
        bufp->chgBit(oldp+412,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 6U)) 
                                      & (IData)((0x3ffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+413,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 6U)) 
                                      & (IData)((0x3ffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+414,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x3cU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x3cU))))));
        bufp->chgBit(oldp+415,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x3cU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x3cU))))));
        bufp->chgBit(oldp+416,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x3cU)) 
                                      & (IData)((0xfULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x3bU)))))));
        bufp->chgBit(oldp+417,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x3cU)) 
                                      & (IData)((0xfULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x3bU)))))));
        bufp->chgBit(oldp+418,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x3dU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x3dU))))));
        bufp->chgBit(oldp+419,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x3dU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x3dU))))));
        bufp->chgBit(oldp+420,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x3dU)) 
                                      & (IData)((7ULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x3cU)))))));
        bufp->chgBit(oldp+421,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x3dU)) 
                                      & (IData)((7ULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x3cU)))))));
        bufp->chgBit(oldp+422,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x3eU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x3eU))))));
        bufp->chgBit(oldp+423,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x3eU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x3eU))))));
        bufp->chgBit(oldp+424,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x3eU)) 
                                      & (IData)((3ULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x3dU)))))));
        bufp->chgBit(oldp+425,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x3eU)) 
                                      & (IData)((3ULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 0x3dU)))))));
        bufp->chgBit(oldp+426,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x3fU)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x3fU))))));
        bufp->chgBit(oldp+427,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x3fU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 0x3fU))))));
        bufp->chgBit(oldp+428,((1U & (IData)(((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 0x3fU) 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                 >> 0x3eU))))));
        bufp->chgBit(oldp+429,((1U & (IData)(((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 0x3fU) 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                 >> 0x3eU))))));
        bufp->chgBit(oldp+430,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 7U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 7U))))));
        bufp->chgBit(oldp+431,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 7U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 7U))))));
        bufp->chgBit(oldp+432,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 7U)) 
                                      & (IData)((0x1ffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+433,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 7U)) 
                                      & (IData)((0x1ffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+434,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 8U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 8U))))));
        bufp->chgBit(oldp+435,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 8U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 8U))))));
        bufp->chgBit(oldp+436,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 8U)) 
                                      & (IData)((0xffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+437,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 8U)) 
                                      & (IData)((0xffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+438,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 9U)) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 9U))))));
        bufp->chgBit(oldp+439,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 9U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                 >> 9U))))));
        bufp->chgBit(oldp+440,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                               >> 9U)) 
                                      & (IData)((0x7fffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+441,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                               >> 9U)) 
                                      & (IData)((0x7fffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+442,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum))));
        bufp->chgBit(oldp+443,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                              << 1U)))));
        bufp->chgBit(oldp+444,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                              << 1U)))));
        bufp->chgBit(oldp+445,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum) 
                                       ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  << 1U))) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 << 1U))))));
        bufp->chgBit(oldp+446,((1U & ((((IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                   << 1U))) 
                                       | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                   << 1U)) 
                                          & (IData)(
                                                    (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                     << 1U)))) 
                                      | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum) 
                                         & (IData)(
                                                   (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    << 1U)))))));
        bufp->chgBit(oldp+447,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 1U)))));
        bufp->chgBit(oldp+448,((1U & (IData)((0x7fffffffffffffffULL 
                                              & vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317)))));
        bufp->chgBit(oldp+449,((1U & (IData)((0x7fffffffffffffffULL 
                                              & vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317)))));
        bufp->chgBit(oldp+450,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 1U)) 
                                       ^ (IData)((0x7fffffffffffffffULL 
                                                  & vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317))) 
                                      ^ (IData)((0x7fffffffffffffffULL 
                                                 & vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317))))));
        bufp->chgBit(oldp+451,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 1U)) 
                                        & (IData)((0x7fffffffffffffffULL 
                                                   & vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317))) 
                                       | ((IData)((0x7fffffffffffffffULL 
                                                   & vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317)) 
                                          & (IData)(
                                                    (0x7fffffffffffffffULL 
                                                     & vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317)))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 1U)) 
                                         & (IData)(
                                                   (0x7fffffffffffffffULL 
                                                    & vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317)))))));
        bufp->chgBit(oldp+452,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 2U)))));
        bufp->chgBit(oldp+453,((1U & (IData)((0x3fffffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 1U))))));
        bufp->chgBit(oldp+454,((1U & (IData)((0x3fffffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 1U))))));
        bufp->chgBit(oldp+455,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 2U)) 
                                       ^ (IData)((0x3fffffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 1U)))) 
                                      ^ (IData)((0x3fffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+456,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 2U)) 
                                        & (IData)((0x3fffffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 1U)))) 
                                       | ((IData)((0x3fffffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 1U))) 
                                          & (IData)(
                                                    (0x3fffffffffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 1U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 2U)) 
                                         & (IData)(
                                                   (0x3fffffffffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 1U))))))));
        bufp->chgBit(oldp+457,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 3U)))));
        bufp->chgBit(oldp+458,((1U & (IData)((0x1fffffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 2U))))));
        bufp->chgBit(oldp+459,((1U & (IData)((0x1fffffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 2U))))));
        bufp->chgBit(oldp+460,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 3U)) 
                                       ^ (IData)((0x1fffffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 2U)))) 
                                      ^ (IData)((0x1fffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+461,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 3U)) 
                                        & (IData)((0x1fffffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 2U)))) 
                                       | ((IData)((0x1fffffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 2U))) 
                                          & (IData)(
                                                    (0x1fffffffffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 2U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 3U)) 
                                         & (IData)(
                                                   (0x1fffffffffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 2U))))))));
        bufp->chgBit(oldp+462,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 4U)))));
        bufp->chgBit(oldp+463,((1U & (IData)((0xfffffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 3U))))));
        bufp->chgBit(oldp+464,((1U & (IData)((0xfffffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 3U))))));
        bufp->chgBit(oldp+465,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 4U)) 
                                       ^ (IData)((0xfffffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 3U)))) 
                                      ^ (IData)((0xfffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+466,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 4U)) 
                                        & (IData)((0xfffffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 3U)))) 
                                       | ((IData)((0xfffffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 3U))) 
                                          & (IData)(
                                                    (0xfffffffffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 3U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 4U)) 
                                         & (IData)(
                                                   (0xfffffffffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 3U))))))));
        bufp->chgBit(oldp+467,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 5U)))));
        bufp->chgBit(oldp+468,((1U & (IData)((0x7ffffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 4U))))));
        bufp->chgBit(oldp+469,((1U & (IData)((0x7ffffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 4U))))));
        bufp->chgBit(oldp+470,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 5U)) 
                                       ^ (IData)((0x7ffffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 4U)))) 
                                      ^ (IData)((0x7ffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+471,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 5U)) 
                                        & (IData)((0x7ffffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 4U)))) 
                                       | ((IData)((0x7ffffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 4U))) 
                                          & (IData)(
                                                    (0x7ffffffffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 4U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 5U)) 
                                         & (IData)(
                                                   (0x7ffffffffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 4U))))))));
        bufp->chgBit(oldp+472,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 6U)))));
        bufp->chgBit(oldp+473,((1U & (IData)((0x3ffffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 5U))))));
        bufp->chgBit(oldp+474,((1U & (IData)((0x3ffffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 5U))))));
        bufp->chgBit(oldp+475,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 6U)) 
                                       ^ (IData)((0x3ffffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 5U)))) 
                                      ^ (IData)((0x3ffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+476,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 6U)) 
                                        & (IData)((0x3ffffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 5U)))) 
                                       | ((IData)((0x3ffffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 5U))) 
                                          & (IData)(
                                                    (0x3ffffffffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 5U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 6U)) 
                                         & (IData)(
                                                   (0x3ffffffffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 5U))))))));
        bufp->chgBit(oldp+477,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 7U)))));
        bufp->chgBit(oldp+478,((1U & (IData)((0x1ffffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 6U))))));
        bufp->chgBit(oldp+479,((1U & (IData)((0x1ffffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 6U))))));
        bufp->chgBit(oldp+480,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 7U)) 
                                       ^ (IData)((0x1ffffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 6U)))) 
                                      ^ (IData)((0x1ffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+481,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 7U)) 
                                        & (IData)((0x1ffffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 6U)))) 
                                       | ((IData)((0x1ffffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 6U))) 
                                          & (IData)(
                                                    (0x1ffffffffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 6U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 7U)) 
                                         & (IData)(
                                                   (0x1ffffffffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 6U))))))));
        bufp->chgBit(oldp+482,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 8U)))));
        bufp->chgBit(oldp+483,((1U & (IData)((0xffffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 7U))))));
        bufp->chgBit(oldp+484,((1U & (IData)((0xffffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 7U))))));
        bufp->chgBit(oldp+485,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 8U)) 
                                       ^ (IData)((0xffffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 7U)))) 
                                      ^ (IData)((0xffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+486,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 8U)) 
                                        & (IData)((0xffffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 7U)))) 
                                       | ((IData)((0xffffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 7U))) 
                                          & (IData)(
                                                    (0xffffffffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 7U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 8U)) 
                                         & (IData)(
                                                   (0xffffffffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 7U))))))));
        bufp->chgBit(oldp+487,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 9U)))));
        bufp->chgBit(oldp+488,((1U & (IData)((0x7fffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 8U))))));
        bufp->chgBit(oldp+489,((1U & (IData)((0x7fffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 8U))))));
        bufp->chgBit(oldp+490,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 9U)) 
                                       ^ (IData)((0x7fffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 8U)))) 
                                      ^ (IData)((0x7fffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+491,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 9U)) 
                                        & (IData)((0x7fffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 8U)))) 
                                       | ((IData)((0x7fffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 8U))) 
                                          & (IData)(
                                                    (0x7fffffffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 8U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 9U)) 
                                         & (IData)(
                                                   (0x7fffffffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 8U))))))));
        bufp->chgBit(oldp+492,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+493,((1U & (IData)((0x3fffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 9U))))));
        bufp->chgBit(oldp+494,((1U & (IData)((0x3fffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 9U))))));
        bufp->chgBit(oldp+495,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0xaU)) 
                                       ^ (IData)((0x3fffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 9U)))) 
                                      ^ (IData)((0x3fffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+496,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0xaU)) 
                                        & (IData)((0x3fffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 9U)))) 
                                       | ((IData)((0x3fffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 9U))) 
                                          & (IData)(
                                                    (0x3fffffffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 9U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0xaU)) 
                                         & (IData)(
                                                   (0x3fffffffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 9U))))))));
        bufp->chgBit(oldp+497,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+498,((1U & (IData)((0x1fffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+499,((1U & (IData)((0x1fffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+500,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0xbU)) 
                                       ^ (IData)((0x1fffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0xaU)))) 
                                      ^ (IData)((0x1fffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+501,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0xbU)) 
                                        & (IData)((0x1fffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0xaU)))) 
                                       | ((IData)((0x1fffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0xaU))) 
                                          & (IData)(
                                                    (0x1fffffffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0xaU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0xbU)) 
                                         & (IData)(
                                                   (0x1fffffffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0xaU))))))));
        bufp->chgBit(oldp+502,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+503,((1U & (IData)((0xfffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+504,((1U & (IData)((0xfffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+505,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0xcU)) 
                                       ^ (IData)((0xfffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0xbU)))) 
                                      ^ (IData)((0xfffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+506,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0xcU)) 
                                        & (IData)((0xfffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0xbU)))) 
                                       | ((IData)((0xfffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0xbU))) 
                                          & (IData)(
                                                    (0xfffffffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0xbU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0xcU)) 
                                         & (IData)(
                                                   (0xfffffffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0xbU))))))));
        bufp->chgBit(oldp+507,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+508,((1U & (IData)((0x7ffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+509,((1U & (IData)((0x7ffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+510,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0xdU)) 
                                       ^ (IData)((0x7ffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0xcU)))) 
                                      ^ (IData)((0x7ffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+511,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0xdU)) 
                                        & (IData)((0x7ffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0xcU)))) 
                                       | ((IData)((0x7ffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0xcU))) 
                                          & (IData)(
                                                    (0x7ffffffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0xcU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0xdU)) 
                                         & (IData)(
                                                   (0x7ffffffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0xcU))))))));
        bufp->chgBit(oldp+512,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+513,((1U & (IData)((0x3ffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+514,((1U & (IData)((0x3ffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+515,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0xeU)) 
                                       ^ (IData)((0x3ffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0xdU)))) 
                                      ^ (IData)((0x3ffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+516,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0xeU)) 
                                        & (IData)((0x3ffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0xdU)))) 
                                       | ((IData)((0x3ffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0xdU))) 
                                          & (IData)(
                                                    (0x3ffffffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0xdU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0xeU)) 
                                         & (IData)(
                                                   (0x3ffffffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0xdU))))))));
        bufp->chgBit(oldp+517,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+518,((1U & (IData)((0x1ffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+519,((1U & (IData)((0x1ffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+520,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0xfU)) 
                                       ^ (IData)((0x1ffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0xeU)))) 
                                      ^ (IData)((0x1ffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+521,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0xfU)) 
                                        & (IData)((0x1ffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0xeU)))) 
                                       | ((IData)((0x1ffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0xeU))) 
                                          & (IData)(
                                                    (0x1ffffffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0xeU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0xfU)) 
                                         & (IData)(
                                                   (0x1ffffffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0xeU))))))));
        bufp->chgBit(oldp+522,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+523,((1U & (IData)((0xffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+524,((1U & (IData)((0xffffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+525,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x10U)) 
                                       ^ (IData)((0xffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0xfU)))) 
                                      ^ (IData)((0xffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+526,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x10U)) 
                                        & (IData)((0xffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0xfU)))) 
                                       | ((IData)((0xffffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0xfU))) 
                                          & (IData)(
                                                    (0xffffffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0xfU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x10U)) 
                                         & (IData)(
                                                   (0xffffffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0xfU))))))));
        bufp->chgBit(oldp+527,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+528,((1U & (IData)((0x7fffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+529,((1U & (IData)((0x7fffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+530,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x11U)) 
                                       ^ (IData)((0x7fffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x10U)))) 
                                      ^ (IData)((0x7fffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+531,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x11U)) 
                                        & (IData)((0x7fffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x10U)))) 
                                       | ((IData)((0x7fffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x10U))) 
                                          & (IData)(
                                                    (0x7fffffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x10U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x11U)) 
                                         & (IData)(
                                                   (0x7fffffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x10U))))))));
        bufp->chgBit(oldp+532,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+533,((1U & (IData)((0x3fffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+534,((1U & (IData)((0x3fffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+535,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x12U)) 
                                       ^ (IData)((0x3fffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x11U)))) 
                                      ^ (IData)((0x3fffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+536,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x12U)) 
                                        & (IData)((0x3fffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x11U)))) 
                                       | ((IData)((0x3fffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x11U))) 
                                          & (IData)(
                                                    (0x3fffffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x11U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x12U)) 
                                         & (IData)(
                                                   (0x3fffffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x11U))))))));
        bufp->chgBit(oldp+537,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+538,((1U & (IData)((0x1fffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+539,((1U & (IData)((0x1fffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+540,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x13U)) 
                                       ^ (IData)((0x1fffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x12U)))) 
                                      ^ (IData)((0x1fffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+541,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x13U)) 
                                        & (IData)((0x1fffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x12U)))) 
                                       | ((IData)((0x1fffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x12U))) 
                                          & (IData)(
                                                    (0x1fffffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x12U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x13U)) 
                                         & (IData)(
                                                   (0x1fffffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x12U))))))));
        bufp->chgBit(oldp+542,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+543,((1U & (IData)((0xfffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+544,((1U & (IData)((0xfffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+545,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x14U)) 
                                       ^ (IData)((0xfffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x13U)))) 
                                      ^ (IData)((0xfffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+546,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x14U)) 
                                        & (IData)((0xfffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x13U)))) 
                                       | ((IData)((0xfffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x13U))) 
                                          & (IData)(
                                                    (0xfffffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x13U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x14U)) 
                                         & (IData)(
                                                   (0xfffffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x13U))))))));
        bufp->chgBit(oldp+547,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+548,((1U & (IData)((0x7ffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+549,((1U & (IData)((0x7ffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+550,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x15U)) 
                                       ^ (IData)((0x7ffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x14U)))) 
                                      ^ (IData)((0x7ffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+551,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x15U)) 
                                        & (IData)((0x7ffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x14U)))) 
                                       | ((IData)((0x7ffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x14U))) 
                                          & (IData)(
                                                    (0x7ffffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x14U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x15U)) 
                                         & (IData)(
                                                   (0x7ffffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x14U))))))));
        bufp->chgBit(oldp+552,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+553,((1U & (IData)((0x3ffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+554,((1U & (IData)((0x3ffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+555,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x16U)) 
                                       ^ (IData)((0x3ffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x15U)))) 
                                      ^ (IData)((0x3ffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+556,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x16U)) 
                                        & (IData)((0x3ffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x15U)))) 
                                       | ((IData)((0x3ffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x15U))) 
                                          & (IData)(
                                                    (0x3ffffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x15U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x16U)) 
                                         & (IData)(
                                                   (0x3ffffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x15U))))))));
        bufp->chgBit(oldp+557,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+558,((1U & (IData)((0x1ffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+559,((1U & (IData)((0x1ffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+560,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x17U)) 
                                       ^ (IData)((0x1ffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x16U)))) 
                                      ^ (IData)((0x1ffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+561,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x17U)) 
                                        & (IData)((0x1ffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x16U)))) 
                                       | ((IData)((0x1ffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x16U))) 
                                          & (IData)(
                                                    (0x1ffffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x16U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x17U)) 
                                         & (IData)(
                                                   (0x1ffffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x16U))))))));
        bufp->chgBit(oldp+562,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+563,((1U & (IData)((0xffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+564,((1U & (IData)((0xffffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+565,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x18U)) 
                                       ^ (IData)((0xffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x17U)))) 
                                      ^ (IData)((0xffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+566,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x18U)) 
                                        & (IData)((0xffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x17U)))) 
                                       | ((IData)((0xffffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x17U))) 
                                          & (IData)(
                                                    (0xffffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x17U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x18U)) 
                                         & (IData)(
                                                   (0xffffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x17U))))))));
        bufp->chgBit(oldp+567,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+568,((1U & (IData)((0x7fffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+569,((1U & (IData)((0x7fffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+570,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x19U)) 
                                       ^ (IData)((0x7fffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x18U)))) 
                                      ^ (IData)((0x7fffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+571,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x19U)) 
                                        & (IData)((0x7fffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x18U)))) 
                                       | ((IData)((0x7fffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x18U))) 
                                          & (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x18U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x19U)) 
                                         & (IData)(
                                                   (0x7fffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x18U))))))));
        bufp->chgBit(oldp+572,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+573,((1U & (IData)((0x3fffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+574,((1U & (IData)((0x3fffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+575,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x1aU)) 
                                       ^ (IData)((0x3fffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x19U)))) 
                                      ^ (IData)((0x3fffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+576,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x1aU)) 
                                        & (IData)((0x3fffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x19U)))) 
                                       | ((IData)((0x3fffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x19U))) 
                                          & (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x19U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x1aU)) 
                                         & (IData)(
                                                   (0x3fffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x19U))))))));
        bufp->chgBit(oldp+577,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+578,((1U & (IData)((0x1fffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+579,((1U & (IData)((0x1fffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+580,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x1bU)) 
                                       ^ (IData)((0x1fffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x1aU)))) 
                                      ^ (IData)((0x1fffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+581,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x1bU)) 
                                        & (IData)((0x1fffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x1aU)))) 
                                       | ((IData)((0x1fffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x1aU))) 
                                          & (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x1aU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x1bU)) 
                                         & (IData)(
                                                   (0x1fffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x1aU))))))));
        bufp->chgBit(oldp+582,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+583,((1U & (IData)((0xfffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+584,((1U & (IData)((0xfffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+585,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x1cU)) 
                                       ^ (IData)((0xfffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x1bU)))) 
                                      ^ (IData)((0xfffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+586,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x1cU)) 
                                        & (IData)((0xfffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x1bU)))) 
                                       | ((IData)((0xfffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x1bU))) 
                                          & (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x1bU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x1cU)) 
                                         & (IData)(
                                                   (0xfffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x1bU))))))));
        bufp->chgBit(oldp+587,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+588,((1U & (IData)((0x7ffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+589,((1U & (IData)((0x7ffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+590,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x1dU)) 
                                       ^ (IData)((0x7ffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x1cU)))) 
                                      ^ (IData)((0x7ffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+591,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x1dU)) 
                                        & (IData)((0x7ffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x1cU)))) 
                                       | ((IData)((0x7ffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x1cU))) 
                                          & (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x1cU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x1dU)) 
                                         & (IData)(
                                                   (0x7ffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x1cU))))))));
        bufp->chgBit(oldp+592,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+593,((1U & (IData)((0x3ffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+594,((1U & (IData)((0x3ffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+595,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x1eU)) 
                                       ^ (IData)((0x3ffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x1dU)))) 
                                      ^ (IData)((0x3ffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+596,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x1eU)) 
                                        & (IData)((0x3ffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x1dU)))) 
                                       | ((IData)((0x3ffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x1dU))) 
                                          & (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x1dU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x1eU)) 
                                         & (IData)(
                                                   (0x3ffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x1dU))))))));
        bufp->chgBit(oldp+597,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+598,((1U & (IData)((0x1ffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+599,((1U & (IData)((0x1ffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+600,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x1fU)) 
                                       ^ (IData)((0x1ffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x1eU)))) 
                                      ^ (IData)((0x1ffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+601,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x1fU)) 
                                        & (IData)((0x1ffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x1eU)))) 
                                       | ((IData)((0x1ffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x1eU))) 
                                          & (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x1eU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x1fU)) 
                                         & (IData)(
                                                   (0x1ffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x1eU))))))));
        bufp->chgBit(oldp+602,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+603,((1U & (IData)((0xffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+604,((1U & (IData)((0xffffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+605,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x20U)) 
                                       ^ (IData)((0xffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x1fU)))) 
                                      ^ (IData)((0xffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+606,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x20U)) 
                                        & (IData)((0xffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x1fU)))) 
                                       | ((IData)((0xffffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x1fU))) 
                                          & (IData)(
                                                    (0xffffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x1fU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x20U)) 
                                         & (IData)(
                                                   (0xffffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x1fU))))))));
        bufp->chgBit(oldp+607,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+608,((1U & (IData)((0x7fffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+609,((1U & (IData)((0x7fffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+610,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x21U)) 
                                       ^ (IData)((0x7fffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x20U)))) 
                                      ^ (IData)((0x7fffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+611,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x21U)) 
                                        & (IData)((0x7fffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x20U)))) 
                                       | ((IData)((0x7fffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x20U))) 
                                          & (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x20U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x21U)) 
                                         & (IData)(
                                                   (0x7fffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x20U))))))));
        bufp->chgBit(oldp+612,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+613,((1U & (IData)((0x3fffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+614,((1U & (IData)((0x3fffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+615,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x22U)) 
                                       ^ (IData)((0x3fffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x21U)))) 
                                      ^ (IData)((0x3fffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+616,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x22U)) 
                                        & (IData)((0x3fffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x21U)))) 
                                       | ((IData)((0x3fffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x21U))) 
                                          & (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x21U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x22U)) 
                                         & (IData)(
                                                   (0x3fffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x21U))))))));
        bufp->chgBit(oldp+617,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+618,((1U & (IData)((0x1fffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+619,((1U & (IData)((0x1fffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+620,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x23U)) 
                                       ^ (IData)((0x1fffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x22U)))) 
                                      ^ (IData)((0x1fffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+621,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x23U)) 
                                        & (IData)((0x1fffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x22U)))) 
                                       | ((IData)((0x1fffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x22U))) 
                                          & (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x22U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x23U)) 
                                         & (IData)(
                                                   (0x1fffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x22U))))))));
        bufp->chgBit(oldp+622,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+623,((1U & (IData)((0xfffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+624,((1U & (IData)((0xfffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+625,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x24U)) 
                                       ^ (IData)((0xfffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x23U)))) 
                                      ^ (IData)((0xfffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+626,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x24U)) 
                                        & (IData)((0xfffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x23U)))) 
                                       | ((IData)((0xfffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x23U))) 
                                          & (IData)(
                                                    (0xfffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x23U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x24U)) 
                                         & (IData)(
                                                   (0xfffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x23U))))))));
        bufp->chgBit(oldp+627,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+628,((1U & (IData)((0x7ffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+629,((1U & (IData)((0x7ffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+630,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x25U)) 
                                       ^ (IData)((0x7ffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x24U)))) 
                                      ^ (IData)((0x7ffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+631,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x25U)) 
                                        & (IData)((0x7ffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x24U)))) 
                                       | ((IData)((0x7ffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x24U))) 
                                          & (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x24U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x25U)) 
                                         & (IData)(
                                                   (0x7ffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x24U))))))));
        bufp->chgBit(oldp+632,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+633,((1U & (IData)((0x3ffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+634,((1U & (IData)((0x3ffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+635,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x26U)) 
                                       ^ (IData)((0x3ffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x25U)))) 
                                      ^ (IData)((0x3ffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+636,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x26U)) 
                                        & (IData)((0x3ffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x25U)))) 
                                       | ((IData)((0x3ffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x25U))) 
                                          & (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x25U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x26U)) 
                                         & (IData)(
                                                   (0x3ffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x25U))))))));
        bufp->chgBit(oldp+637,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+638,((1U & (IData)((0x1ffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x26U))))));
        bufp->chgBit(oldp+639,((1U & (IData)((0x1ffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x26U))))));
        bufp->chgBit(oldp+640,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x27U)) 
                                       ^ (IData)((0x1ffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x26U)))) 
                                      ^ (IData)((0x1ffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x26U)))))));
        bufp->chgBit(oldp+641,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x27U)) 
                                        & (IData)((0x1ffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x26U)))) 
                                       | ((IData)((0x1ffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x26U))) 
                                          & (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x26U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x27U)) 
                                         & (IData)(
                                                   (0x1ffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x26U))))))));
        bufp->chgBit(oldp+642,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+643,((1U & (IData)((0xffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x27U))))));
        bufp->chgBit(oldp+644,((1U & (IData)((0xffffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x27U))))));
        bufp->chgBit(oldp+645,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x28U)) 
                                       ^ (IData)((0xffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x27U)))) 
                                      ^ (IData)((0xffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x27U)))))));
        bufp->chgBit(oldp+646,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x28U)) 
                                        & (IData)((0xffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x27U)))) 
                                       | ((IData)((0xffffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x27U))) 
                                          & (IData)(
                                                    (0xffffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x27U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x28U)) 
                                         & (IData)(
                                                   (0xffffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x27U))))))));
        bufp->chgBit(oldp+647,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+648,((1U & (IData)((0x7fffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x28U))))));
        bufp->chgBit(oldp+649,((1U & (IData)((0x7fffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x28U))))));
        bufp->chgBit(oldp+650,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x29U)) 
                                       ^ (IData)((0x7fffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x28U)))) 
                                      ^ (IData)((0x7fffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x28U)))))));
        bufp->chgBit(oldp+651,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x29U)) 
                                        & (IData)((0x7fffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x28U)))) 
                                       | ((IData)((0x7fffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x28U))) 
                                          & (IData)(
                                                    (0x7fffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x28U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x29U)) 
                                         & (IData)(
                                                   (0x7fffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x28U))))))));
        bufp->chgBit(oldp+652,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+653,((1U & (IData)((0x3fffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x29U))))));
        bufp->chgBit(oldp+654,((1U & (IData)((0x3fffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x29U))))));
        bufp->chgBit(oldp+655,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x2aU)) 
                                       ^ (IData)((0x3fffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x29U)))) 
                                      ^ (IData)((0x3fffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x29U)))))));
        bufp->chgBit(oldp+656,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x2aU)) 
                                        & (IData)((0x3fffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x29U)))) 
                                       | ((IData)((0x3fffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x29U))) 
                                          & (IData)(
                                                    (0x3fffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x29U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x2aU)) 
                                         & (IData)(
                                                   (0x3fffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x29U))))))));
        bufp->chgBit(oldp+657,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+658,((1U & (IData)((0x1fffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x2aU))))));
        bufp->chgBit(oldp+659,((1U & (IData)((0x1fffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x2aU))))));
        bufp->chgBit(oldp+660,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x2bU)) 
                                       ^ (IData)((0x1fffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x2aU)))) 
                                      ^ (IData)((0x1fffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x2aU)))))));
        bufp->chgBit(oldp+661,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x2bU)) 
                                        & (IData)((0x1fffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x2aU)))) 
                                       | ((IData)((0x1fffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x2aU))) 
                                          & (IData)(
                                                    (0x1fffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x2aU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x2bU)) 
                                         & (IData)(
                                                   (0x1fffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x2aU))))))));
        bufp->chgBit(oldp+662,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+663,((1U & (IData)((0xfffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x2bU))))));
        bufp->chgBit(oldp+664,((1U & (IData)((0xfffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x2bU))))));
        bufp->chgBit(oldp+665,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x2cU)) 
                                       ^ (IData)((0xfffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x2bU)))) 
                                      ^ (IData)((0xfffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x2bU)))))));
        bufp->chgBit(oldp+666,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x2cU)) 
                                        & (IData)((0xfffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x2bU)))) 
                                       | ((IData)((0xfffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x2bU))) 
                                          & (IData)(
                                                    (0xfffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x2bU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x2cU)) 
                                         & (IData)(
                                                   (0xfffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x2bU))))))));
        bufp->chgBit(oldp+667,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+668,((1U & (IData)((0x7ffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x2cU))))));
        bufp->chgBit(oldp+669,((1U & (IData)((0x7ffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x2cU))))));
        bufp->chgBit(oldp+670,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x2dU)) 
                                       ^ (IData)((0x7ffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x2cU)))) 
                                      ^ (IData)((0x7ffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x2cU)))))));
        bufp->chgBit(oldp+671,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x2dU)) 
                                        & (IData)((0x7ffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x2cU)))) 
                                       | ((IData)((0x7ffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x2cU))) 
                                          & (IData)(
                                                    (0x7ffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x2cU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x2dU)) 
                                         & (IData)(
                                                   (0x7ffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x2cU))))))));
        bufp->chgBit(oldp+672,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+673,((1U & (IData)((0x3ffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x2dU))))));
        bufp->chgBit(oldp+674,((1U & (IData)((0x3ffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x2dU))))));
        bufp->chgBit(oldp+675,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x2eU)) 
                                       ^ (IData)((0x3ffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x2dU)))) 
                                      ^ (IData)((0x3ffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x2dU)))))));
        bufp->chgBit(oldp+676,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x2eU)) 
                                        & (IData)((0x3ffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x2dU)))) 
                                       | ((IData)((0x3ffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x2dU))) 
                                          & (IData)(
                                                    (0x3ffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x2dU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x2eU)) 
                                         & (IData)(
                                                   (0x3ffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x2dU))))))));
        bufp->chgBit(oldp+677,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+678,((1U & (IData)((0x1ffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x2eU))))));
        bufp->chgBit(oldp+679,((1U & (IData)((0x1ffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x2eU))))));
        bufp->chgBit(oldp+680,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x2fU)) 
                                       ^ (IData)((0x1ffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x2eU)))) 
                                      ^ (IData)((0x1ffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x2eU)))))));
        bufp->chgBit(oldp+681,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x2fU)) 
                                        & (IData)((0x1ffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x2eU)))) 
                                       | ((IData)((0x1ffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x2eU))) 
                                          & (IData)(
                                                    (0x1ffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x2eU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x2fU)) 
                                         & (IData)(
                                                   (0x1ffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x2eU))))))));
        bufp->chgBit(oldp+682,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+683,((1U & (IData)((0xffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x2fU))))));
        bufp->chgBit(oldp+684,((1U & (IData)((0xffffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x2fU))))));
        bufp->chgBit(oldp+685,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x30U)) 
                                       ^ (IData)((0xffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x2fU)))) 
                                      ^ (IData)((0xffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x2fU)))))));
        bufp->chgBit(oldp+686,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x30U)) 
                                        & (IData)((0xffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x2fU)))) 
                                       | ((IData)((0xffffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x2fU))) 
                                          & (IData)(
                                                    (0xffffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x2fU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x30U)) 
                                         & (IData)(
                                                   (0xffffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x2fU))))))));
        bufp->chgBit(oldp+687,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+688,((1U & (IData)((0x7fffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x30U))))));
        bufp->chgBit(oldp+689,((1U & (IData)((0x7fffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x30U))))));
        bufp->chgBit(oldp+690,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x31U)) 
                                       ^ (IData)((0x7fffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x30U)))) 
                                      ^ (IData)((0x7fffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x30U)))))));
        bufp->chgBit(oldp+691,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x31U)) 
                                        & (IData)((0x7fffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x30U)))) 
                                       | ((IData)((0x7fffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x30U))) 
                                          & (IData)(
                                                    (0x7fffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x30U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x31U)) 
                                         & (IData)(
                                                   (0x7fffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x30U))))))));
        bufp->chgBit(oldp+692,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+693,((1U & (IData)((0x3fffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x31U))))));
        bufp->chgBit(oldp+694,((1U & (IData)((0x3fffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x31U))))));
        bufp->chgBit(oldp+695,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x32U)) 
                                       ^ (IData)((0x3fffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x31U)))) 
                                      ^ (IData)((0x3fffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x31U)))))));
        bufp->chgBit(oldp+696,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x32U)) 
                                        & (IData)((0x3fffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x31U)))) 
                                       | ((IData)((0x3fffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x31U))) 
                                          & (IData)(
                                                    (0x3fffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x31U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x32U)) 
                                         & (IData)(
                                                   (0x3fffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x31U))))))));
        bufp->chgBit(oldp+697,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+698,((1U & (IData)((0x1fffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x32U))))));
        bufp->chgBit(oldp+699,((1U & (IData)((0x1fffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x32U))))));
        bufp->chgBit(oldp+700,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x33U)) 
                                       ^ (IData)((0x1fffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x32U)))) 
                                      ^ (IData)((0x1fffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x32U)))))));
        bufp->chgBit(oldp+701,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x33U)) 
                                        & (IData)((0x1fffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x32U)))) 
                                       | ((IData)((0x1fffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x32U))) 
                                          & (IData)(
                                                    (0x1fffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x32U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x33U)) 
                                         & (IData)(
                                                   (0x1fffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x32U))))))));
        bufp->chgBit(oldp+702,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+703,((1U & (IData)((0xfffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x33U))))));
        bufp->chgBit(oldp+704,((1U & (IData)((0xfffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x33U))))));
        bufp->chgBit(oldp+705,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x34U)) 
                                       ^ (IData)((0xfffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x33U)))) 
                                      ^ (IData)((0xfffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x33U)))))));
        bufp->chgBit(oldp+706,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x34U)) 
                                        & (IData)((0xfffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x33U)))) 
                                       | ((IData)((0xfffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x33U))) 
                                          & (IData)(
                                                    (0xfffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x33U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x34U)) 
                                         & (IData)(
                                                   (0xfffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x33U))))))));
        bufp->chgBit(oldp+707,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+708,((1U & (IData)((0x7ffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x34U))))));
        bufp->chgBit(oldp+709,((1U & (IData)((0x7ffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x34U))))));
        bufp->chgBit(oldp+710,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x35U)) 
                                       ^ (IData)((0x7ffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x34U)))) 
                                      ^ (IData)((0x7ffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x34U)))))));
        bufp->chgBit(oldp+711,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x35U)) 
                                        & (IData)((0x7ffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x34U)))) 
                                       | ((IData)((0x7ffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x34U))) 
                                          & (IData)(
                                                    (0x7ffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x34U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x35U)) 
                                         & (IData)(
                                                   (0x7ffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x34U))))))));
        bufp->chgBit(oldp+712,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+713,((1U & (IData)((0x3ffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x35U))))));
        bufp->chgBit(oldp+714,((1U & (IData)((0x3ffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x35U))))));
        bufp->chgBit(oldp+715,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x36U)) 
                                       ^ (IData)((0x3ffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x35U)))) 
                                      ^ (IData)((0x3ffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x35U)))))));
        bufp->chgBit(oldp+716,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x36U)) 
                                        & (IData)((0x3ffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x35U)))) 
                                       | ((IData)((0x3ffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x35U))) 
                                          & (IData)(
                                                    (0x3ffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x35U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x36U)) 
                                         & (IData)(
                                                   (0x3ffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x35U))))))));
        bufp->chgBit(oldp+717,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+718,((1U & (IData)((0x1ffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x36U))))));
        bufp->chgBit(oldp+719,((1U & (IData)((0x1ffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x36U))))));
        bufp->chgBit(oldp+720,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x37U)) 
                                       ^ (IData)((0x1ffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x36U)))) 
                                      ^ (IData)((0x1ffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x36U)))))));
        bufp->chgBit(oldp+721,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x37U)) 
                                        & (IData)((0x1ffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x36U)))) 
                                       | ((IData)((0x1ffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x36U))) 
                                          & (IData)(
                                                    (0x1ffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x36U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x37U)) 
                                         & (IData)(
                                                   (0x1ffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x36U))))))));
        bufp->chgBit(oldp+722,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+723,((1U & (IData)((0xffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x37U))))));
        bufp->chgBit(oldp+724,((1U & (IData)((0xffULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x37U))))));
        bufp->chgBit(oldp+725,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x38U)) 
                                       ^ (IData)((0xffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x37U)))) 
                                      ^ (IData)((0xffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x37U)))))));
        bufp->chgBit(oldp+726,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x38U)) 
                                        & (IData)((0xffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x37U)))) 
                                       | ((IData)((0xffULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x37U))) 
                                          & (IData)(
                                                    (0xffULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x37U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x38U)) 
                                         & (IData)(
                                                   (0xffULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x37U))))))));
        bufp->chgBit(oldp+727,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+728,((1U & (IData)((0x7fULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x38U))))));
        bufp->chgBit(oldp+729,((1U & (IData)((0x7fULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x38U))))));
        bufp->chgBit(oldp+730,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x39U)) 
                                       ^ (IData)((0x7fULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x38U)))) 
                                      ^ (IData)((0x7fULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x38U)))))));
        bufp->chgBit(oldp+731,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x39U)) 
                                        & (IData)((0x7fULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x38U)))) 
                                       | ((IData)((0x7fULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x38U))) 
                                          & (IData)(
                                                    (0x7fULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x38U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x39U)) 
                                         & (IData)(
                                                   (0x7fULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x38U))))))));
        bufp->chgBit(oldp+732,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+733,((1U & (IData)((0x3fULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x39U))))));
        bufp->chgBit(oldp+734,((1U & (IData)((0x3fULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x39U))))));
        bufp->chgBit(oldp+735,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x3aU)) 
                                       ^ (IData)((0x3fULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x39U)))) 
                                      ^ (IData)((0x3fULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x39U)))))));
        bufp->chgBit(oldp+736,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x3aU)) 
                                        & (IData)((0x3fULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x39U)))) 
                                       | ((IData)((0x3fULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x39U))) 
                                          & (IData)(
                                                    (0x3fULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x39U))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x3aU)) 
                                         & (IData)(
                                                   (0x3fULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x39U))))))));
        bufp->chgBit(oldp+737,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+738,((1U & (IData)((0x1fULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x3aU))))));
        bufp->chgBit(oldp+739,((1U & (IData)((0x1fULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x3aU))))));
        bufp->chgBit(oldp+740,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x3bU)) 
                                       ^ (IData)((0x1fULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x3aU)))) 
                                      ^ (IData)((0x1fULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x3aU)))))));
        bufp->chgBit(oldp+741,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x3bU)) 
                                        & (IData)((0x1fULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x3aU)))) 
                                       | ((IData)((0x1fULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x3aU))) 
                                          & (IData)(
                                                    (0x1fULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x3aU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x3bU)) 
                                         & (IData)(
                                                   (0x1fULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x3aU))))))));
        bufp->chgBit(oldp+742,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+743,((1U & (IData)((0xfULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x3bU))))));
        bufp->chgBit(oldp+744,((1U & (IData)((0xfULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x3bU))))));
        bufp->chgBit(oldp+745,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x3cU)) 
                                       ^ (IData)((0xfULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x3bU)))) 
                                      ^ (IData)((0xfULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x3bU)))))));
        bufp->chgBit(oldp+746,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x3cU)) 
                                        & (IData)((0xfULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x3bU)))) 
                                       | ((IData)((0xfULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x3bU))) 
                                          & (IData)(
                                                    (0xfULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x3bU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x3cU)) 
                                         & (IData)(
                                                   (0xfULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x3bU))))))));
        bufp->chgBit(oldp+747,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+748,((1U & (IData)((7ULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x3cU))))));
        bufp->chgBit(oldp+749,((1U & (IData)((7ULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x3cU))))));
        bufp->chgBit(oldp+750,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x3dU)) 
                                       ^ (IData)((7ULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x3cU)))) 
                                      ^ (IData)((7ULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x3cU)))))));
        bufp->chgBit(oldp+751,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x3dU)) 
                                        & (IData)((7ULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x3cU)))) 
                                       | ((IData)((7ULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x3cU))) 
                                          & (IData)(
                                                    (7ULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x3cU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x3dU)) 
                                         & (IData)(
                                                   (7ULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x3cU))))))));
        bufp->chgBit(oldp+752,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+753,((1U & (IData)((3ULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x3dU))))));
        bufp->chgBit(oldp+754,((1U & (IData)((3ULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x3dU))))));
        bufp->chgBit(oldp+755,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x3eU)) 
                                       ^ (IData)((3ULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x3dU)))) 
                                      ^ (IData)((3ULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x3dU)))))));
        bufp->chgBit(oldp+756,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x3eU)) 
                                        & (IData)((3ULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x3dU)))) 
                                       | ((IData)((3ULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x3dU))) 
                                          & (IData)(
                                                    (3ULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x3dU))))) 
                                      | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x3eU)) 
                                         & (IData)(
                                                   (3ULL 
                                                    & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                       >> 0x3dU))))))));
        bufp->chgBit(oldp+757,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+758,((1U & (IData)((1ULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 >> 0x3eU))))));
        bufp->chgBit(oldp+759,((1U & (IData)((1ULL 
                                              & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 >> 0x3eU))))));
        bufp->chgBit(oldp+760,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x3fU)) 
                                       ^ (IData)((1ULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 0x3eU)))) 
                                      ^ (IData)((1ULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x3eU)))))));
        bufp->chgBit(oldp+761,((1U & (((IData)(((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                 >> 0x3fU) 
                                                & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                   >> 0x3eU))) 
                                       | ((IData)((1ULL 
                                                   & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                      >> 0x3eU))) 
                                          & (IData)(
                                                    (1ULL 
                                                     & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                        >> 0x3eU))))) 
                                      | (IData)(((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                  >> 0x3fU) 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x3eU)))))));
        bufp->chgBit(oldp+762,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum) 
                                      ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 << 1U))))));
        bufp->chgBit(oldp+763,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                 << 1U))))));
        bufp->chgBit(oldp+764,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                               << 1U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 << 1U))))));
        bufp->chgBit(oldp+765,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                 << 1U))))));
        bufp->chgBit(oldp+766,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 1U)) 
                                      ^ (IData)((0x7fffffffffffffffULL 
                                                 & vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317))))));
        bufp->chgBit(oldp+767,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 1U)) 
                                      & (IData)((0x7fffffffffffffffULL 
                                                 & vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317))))));
        bufp->chgBit(oldp+768,((1U & ((IData)((0x7fffffffffffffffULL 
                                               & vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317)) 
                                      & (IData)((0x7fffffffffffffffULL 
                                                 & vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317))))));
        bufp->chgBit(oldp+769,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 1U)) 
                                      & (IData)((0x7fffffffffffffffULL 
                                                 & vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317))))));
        bufp->chgBit(oldp+770,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0xaU)) 
                                      ^ (IData)((0x3fffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+771,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0xaU)) 
                                      & (IData)((0x3fffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+772,((1U & ((IData)((0x3fffffffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 9U))) 
                                      & (IData)((0x3fffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+773,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0xaU)) 
                                      & (IData)((0x3fffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+774,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0xbU)) 
                                      ^ (IData)((0x1fffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+775,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0xbU)) 
                                      & (IData)((0x1fffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+776,((1U & ((IData)((0x1fffffffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0xaU))) 
                                      & (IData)((0x1fffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+777,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0xbU)) 
                                      & (IData)((0x1fffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+778,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0xcU)) 
                                      ^ (IData)((0xfffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+779,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0xcU)) 
                                      & (IData)((0xfffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+780,((1U & ((IData)((0xfffffffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0xbU))) 
                                      & (IData)((0xfffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+781,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0xcU)) 
                                      & (IData)((0xfffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+782,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0xdU)) 
                                      ^ (IData)((0x7ffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+783,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0xdU)) 
                                      & (IData)((0x7ffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+784,((1U & ((IData)((0x7ffffffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0xcU))) 
                                      & (IData)((0x7ffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+785,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0xdU)) 
                                      & (IData)((0x7ffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+786,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0xeU)) 
                                      ^ (IData)((0x3ffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+787,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0xeU)) 
                                      & (IData)((0x3ffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+788,((1U & ((IData)((0x3ffffffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0xdU))) 
                                      & (IData)((0x3ffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+789,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0xeU)) 
                                      & (IData)((0x3ffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+790,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0xfU)) 
                                      ^ (IData)((0x1ffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+791,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0xfU)) 
                                      & (IData)((0x1ffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+792,((1U & ((IData)((0x1ffffffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0xeU))) 
                                      & (IData)((0x1ffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+793,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0xfU)) 
                                      & (IData)((0x1ffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+794,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x10U)) 
                                      ^ (IData)((0xffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+795,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x10U)) 
                                      & (IData)((0xffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+796,((1U & ((IData)((0xffffffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0xfU))) 
                                      & (IData)((0xffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+797,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x10U)) 
                                      & (IData)((0xffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+798,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x11U)) 
                                      ^ (IData)((0x7fffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+799,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x11U)) 
                                      & (IData)((0x7fffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+800,((1U & ((IData)((0x7fffffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x10U))) 
                                      & (IData)((0x7fffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+801,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x11U)) 
                                      & (IData)((0x7fffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+802,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x12U)) 
                                      ^ (IData)((0x3fffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+803,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x12U)) 
                                      & (IData)((0x3fffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+804,((1U & ((IData)((0x3fffffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x11U))) 
                                      & (IData)((0x3fffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+805,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x12U)) 
                                      & (IData)((0x3fffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+806,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x13U)) 
                                      ^ (IData)((0x1fffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+807,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x13U)) 
                                      & (IData)((0x1fffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+808,((1U & ((IData)((0x1fffffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x12U))) 
                                      & (IData)((0x1fffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+809,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x13U)) 
                                      & (IData)((0x1fffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+810,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 2U)) 
                                      ^ (IData)((0x3fffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+811,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 2U)) 
                                      & (IData)((0x3fffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+812,((1U & ((IData)((0x3fffffffffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 1U))) 
                                      & (IData)((0x3fffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+813,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 2U)) 
                                      & (IData)((0x3fffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+814,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x14U)) 
                                      ^ (IData)((0xfffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+815,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x14U)) 
                                      & (IData)((0xfffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+816,((1U & ((IData)((0xfffffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x13U))) 
                                      & (IData)((0xfffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+817,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x14U)) 
                                      & (IData)((0xfffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+818,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x15U)) 
                                      ^ (IData)((0x7ffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+819,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x15U)) 
                                      & (IData)((0x7ffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+820,((1U & ((IData)((0x7ffffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x14U))) 
                                      & (IData)((0x7ffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+821,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x15U)) 
                                      & (IData)((0x7ffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+822,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x16U)) 
                                      ^ (IData)((0x3ffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+823,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x16U)) 
                                      & (IData)((0x3ffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+824,((1U & ((IData)((0x3ffffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x15U))) 
                                      & (IData)((0x3ffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+825,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x16U)) 
                                      & (IData)((0x3ffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+826,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x17U)) 
                                      ^ (IData)((0x1ffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+827,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x17U)) 
                                      & (IData)((0x1ffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+828,((1U & ((IData)((0x1ffffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x16U))) 
                                      & (IData)((0x1ffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+829,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x17U)) 
                                      & (IData)((0x1ffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+830,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x18U)) 
                                      ^ (IData)((0xffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+831,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x18U)) 
                                      & (IData)((0xffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+832,((1U & ((IData)((0xffffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x17U))) 
                                      & (IData)((0xffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+833,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x18U)) 
                                      & (IData)((0xffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+834,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x19U)) 
                                      ^ (IData)((0x7fffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+835,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x19U)) 
                                      & (IData)((0x7fffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+836,((1U & ((IData)((0x7fffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x18U))) 
                                      & (IData)((0x7fffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+837,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x19U)) 
                                      & (IData)((0x7fffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+838,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x1aU)) 
                                      ^ (IData)((0x3fffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+839,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x1aU)) 
                                      & (IData)((0x3fffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+840,((1U & ((IData)((0x3fffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x19U))) 
                                      & (IData)((0x3fffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+841,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x1aU)) 
                                      & (IData)((0x3fffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+842,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x1bU)) 
                                      ^ (IData)((0x1fffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+843,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x1bU)) 
                                      & (IData)((0x1fffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+844,((1U & ((IData)((0x1fffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x1aU))) 
                                      & (IData)((0x1fffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+845,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x1bU)) 
                                      & (IData)((0x1fffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+846,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x1cU)) 
                                      ^ (IData)((0xfffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+847,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x1cU)) 
                                      & (IData)((0xfffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+848,((1U & ((IData)((0xfffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x1bU))) 
                                      & (IData)((0xfffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+849,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x1cU)) 
                                      & (IData)((0xfffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+850,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x1dU)) 
                                      ^ (IData)((0x7ffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+851,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x1dU)) 
                                      & (IData)((0x7ffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+852,((1U & ((IData)((0x7ffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x1cU))) 
                                      & (IData)((0x7ffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+853,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x1dU)) 
                                      & (IData)((0x7ffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+854,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 3U)) 
                                      ^ (IData)((0x1fffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+855,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 3U)) 
                                      & (IData)((0x1fffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+856,((1U & ((IData)((0x1fffffffffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 2U))) 
                                      & (IData)((0x1fffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+857,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 3U)) 
                                      & (IData)((0x1fffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+858,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x1eU)) 
                                      ^ (IData)((0x3ffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+859,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x1eU)) 
                                      & (IData)((0x3ffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+860,((1U & ((IData)((0x3ffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x1dU))) 
                                      & (IData)((0x3ffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+861,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x1eU)) 
                                      & (IData)((0x3ffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+862,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x1fU)) 
                                      ^ (IData)((0x1ffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+863,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x1fU)) 
                                      & (IData)((0x1ffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+864,((1U & ((IData)((0x1ffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x1eU))) 
                                      & (IData)((0x1ffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+865,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x1fU)) 
                                      & (IData)((0x1ffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+866,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x20U)) 
                                      ^ (IData)((0xffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+867,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x20U)) 
                                      & (IData)((0xffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+868,((1U & ((IData)((0xffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x1fU))) 
                                      & (IData)((0xffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+869,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x20U)) 
                                      & (IData)((0xffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+870,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x21U)) 
                                      ^ (IData)((0x7fffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+871,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x21U)) 
                                      & (IData)((0x7fffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+872,((1U & ((IData)((0x7fffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x20U))) 
                                      & (IData)((0x7fffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+873,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x21U)) 
                                      & (IData)((0x7fffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+874,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x22U)) 
                                      ^ (IData)((0x3fffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+875,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x22U)) 
                                      & (IData)((0x3fffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+876,((1U & ((IData)((0x3fffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x21U))) 
                                      & (IData)((0x3fffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+877,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x22U)) 
                                      & (IData)((0x3fffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+878,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x23U)) 
                                      ^ (IData)((0x1fffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+879,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x23U)) 
                                      & (IData)((0x1fffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+880,((1U & ((IData)((0x1fffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x22U))) 
                                      & (IData)((0x1fffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+881,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x23U)) 
                                      & (IData)((0x1fffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+882,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x24U)) 
                                      ^ (IData)((0xfffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+883,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x24U)) 
                                      & (IData)((0xfffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+884,((1U & ((IData)((0xfffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x23U))) 
                                      & (IData)((0xfffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+885,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x24U)) 
                                      & (IData)((0xfffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+886,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x25U)) 
                                      ^ (IData)((0x7ffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+887,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x25U)) 
                                      & (IData)((0x7ffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+888,((1U & ((IData)((0x7ffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x24U))) 
                                      & (IData)((0x7ffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+889,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x25U)) 
                                      & (IData)((0x7ffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+890,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x26U)) 
                                      ^ (IData)((0x3ffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+891,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x26U)) 
                                      & (IData)((0x3ffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+892,((1U & ((IData)((0x3ffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x25U))) 
                                      & (IData)((0x3ffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+893,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x26U)) 
                                      & (IData)((0x3ffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+894,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x27U)) 
                                      ^ (IData)((0x1ffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x26U)))))));
        bufp->chgBit(oldp+895,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x27U)) 
                                      & (IData)((0x1ffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x26U)))))));
        bufp->chgBit(oldp+896,((1U & ((IData)((0x1ffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x26U))) 
                                      & (IData)((0x1ffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x26U)))))));
        bufp->chgBit(oldp+897,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x27U)) 
                                      & (IData)((0x1ffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x26U)))))));
        bufp->chgBit(oldp+898,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 4U)) 
                                      ^ (IData)((0xfffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+899,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 4U)) 
                                      & (IData)((0xfffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+900,((1U & ((IData)((0xfffffffffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 3U))) 
                                      & (IData)((0xfffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+901,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 4U)) 
                                      & (IData)((0xfffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+902,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x28U)) 
                                      ^ (IData)((0xffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x27U)))))));
        bufp->chgBit(oldp+903,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x28U)) 
                                      & (IData)((0xffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x27U)))))));
        bufp->chgBit(oldp+904,((1U & ((IData)((0xffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x27U))) 
                                      & (IData)((0xffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x27U)))))));
        bufp->chgBit(oldp+905,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x28U)) 
                                      & (IData)((0xffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x27U)))))));
        bufp->chgBit(oldp+906,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x29U)) 
                                      ^ (IData)((0x7fffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x28U)))))));
        bufp->chgBit(oldp+907,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x29U)) 
                                      & (IData)((0x7fffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x28U)))))));
        bufp->chgBit(oldp+908,((1U & ((IData)((0x7fffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x28U))) 
                                      & (IData)((0x7fffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x28U)))))));
        bufp->chgBit(oldp+909,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x29U)) 
                                      & (IData)((0x7fffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x28U)))))));
        bufp->chgBit(oldp+910,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x2aU)) 
                                      ^ (IData)((0x3fffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x29U)))))));
        bufp->chgBit(oldp+911,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x2aU)) 
                                      & (IData)((0x3fffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x29U)))))));
        bufp->chgBit(oldp+912,((1U & ((IData)((0x3fffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x29U))) 
                                      & (IData)((0x3fffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x29U)))))));
        bufp->chgBit(oldp+913,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x2aU)) 
                                      & (IData)((0x3fffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x29U)))))));
        bufp->chgBit(oldp+914,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x2bU)) 
                                      ^ (IData)((0x1fffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x2aU)))))));
        bufp->chgBit(oldp+915,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x2bU)) 
                                      & (IData)((0x1fffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x2aU)))))));
        bufp->chgBit(oldp+916,((1U & ((IData)((0x1fffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x2aU))) 
                                      & (IData)((0x1fffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x2aU)))))));
        bufp->chgBit(oldp+917,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x2bU)) 
                                      & (IData)((0x1fffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x2aU)))))));
        bufp->chgBit(oldp+918,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x2cU)) 
                                      ^ (IData)((0xfffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x2bU)))))));
        bufp->chgBit(oldp+919,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x2cU)) 
                                      & (IData)((0xfffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x2bU)))))));
        bufp->chgBit(oldp+920,((1U & ((IData)((0xfffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x2bU))) 
                                      & (IData)((0xfffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x2bU)))))));
        bufp->chgBit(oldp+921,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x2cU)) 
                                      & (IData)((0xfffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x2bU)))))));
        bufp->chgBit(oldp+922,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x2dU)) 
                                      ^ (IData)((0x7ffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x2cU)))))));
        bufp->chgBit(oldp+923,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x2dU)) 
                                      & (IData)((0x7ffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x2cU)))))));
        bufp->chgBit(oldp+924,((1U & ((IData)((0x7ffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x2cU))) 
                                      & (IData)((0x7ffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x2cU)))))));
        bufp->chgBit(oldp+925,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x2dU)) 
                                      & (IData)((0x7ffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x2cU)))))));
        bufp->chgBit(oldp+926,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x2eU)) 
                                      ^ (IData)((0x3ffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x2dU)))))));
        bufp->chgBit(oldp+927,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x2eU)) 
                                      & (IData)((0x3ffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x2dU)))))));
        bufp->chgBit(oldp+928,((1U & ((IData)((0x3ffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x2dU))) 
                                      & (IData)((0x3ffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x2dU)))))));
        bufp->chgBit(oldp+929,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x2eU)) 
                                      & (IData)((0x3ffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x2dU)))))));
        bufp->chgBit(oldp+930,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x2fU)) 
                                      ^ (IData)((0x1ffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x2eU)))))));
        bufp->chgBit(oldp+931,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x2fU)) 
                                      & (IData)((0x1ffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x2eU)))))));
        bufp->chgBit(oldp+932,((1U & ((IData)((0x1ffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x2eU))) 
                                      & (IData)((0x1ffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x2eU)))))));
        bufp->chgBit(oldp+933,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x2fU)) 
                                      & (IData)((0x1ffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x2eU)))))));
        bufp->chgBit(oldp+934,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x30U)) 
                                      ^ (IData)((0xffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x2fU)))))));
        bufp->chgBit(oldp+935,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x30U)) 
                                      & (IData)((0xffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x2fU)))))));
        bufp->chgBit(oldp+936,((1U & ((IData)((0xffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x2fU))) 
                                      & (IData)((0xffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x2fU)))))));
        bufp->chgBit(oldp+937,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x30U)) 
                                      & (IData)((0xffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x2fU)))))));
        bufp->chgBit(oldp+938,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x31U)) 
                                      ^ (IData)((0x7fffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x30U)))))));
        bufp->chgBit(oldp+939,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x31U)) 
                                      & (IData)((0x7fffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x30U)))))));
        bufp->chgBit(oldp+940,((1U & ((IData)((0x7fffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x30U))) 
                                      & (IData)((0x7fffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x30U)))))));
        bufp->chgBit(oldp+941,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x31U)) 
                                      & (IData)((0x7fffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x30U)))))));
        bufp->chgBit(oldp+942,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 5U)) 
                                      ^ (IData)((0x7ffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+943,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 5U)) 
                                      & (IData)((0x7ffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+944,((1U & ((IData)((0x7ffffffffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 4U))) 
                                      & (IData)((0x7ffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+945,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 5U)) 
                                      & (IData)((0x7ffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+946,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x32U)) 
                                      ^ (IData)((0x3fffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x31U)))))));
        bufp->chgBit(oldp+947,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x32U)) 
                                      & (IData)((0x3fffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x31U)))))));
        bufp->chgBit(oldp+948,((1U & ((IData)((0x3fffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x31U))) 
                                      & (IData)((0x3fffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x31U)))))));
        bufp->chgBit(oldp+949,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x32U)) 
                                      & (IData)((0x3fffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x31U)))))));
        bufp->chgBit(oldp+950,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x33U)) 
                                      ^ (IData)((0x1fffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x32U)))))));
        bufp->chgBit(oldp+951,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x33U)) 
                                      & (IData)((0x1fffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x32U)))))));
        bufp->chgBit(oldp+952,((1U & ((IData)((0x1fffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x32U))) 
                                      & (IData)((0x1fffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x32U)))))));
        bufp->chgBit(oldp+953,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x33U)) 
                                      & (IData)((0x1fffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x32U)))))));
        bufp->chgBit(oldp+954,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x34U)) 
                                      ^ (IData)((0xfffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x33U)))))));
        bufp->chgBit(oldp+955,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x34U)) 
                                      & (IData)((0xfffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x33U)))))));
        bufp->chgBit(oldp+956,((1U & ((IData)((0xfffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x33U))) 
                                      & (IData)((0xfffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x33U)))))));
        bufp->chgBit(oldp+957,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x34U)) 
                                      & (IData)((0xfffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x33U)))))));
        bufp->chgBit(oldp+958,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x35U)) 
                                      ^ (IData)((0x7ffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x34U)))))));
        bufp->chgBit(oldp+959,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x35U)) 
                                      & (IData)((0x7ffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x34U)))))));
        bufp->chgBit(oldp+960,((1U & ((IData)((0x7ffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x34U))) 
                                      & (IData)((0x7ffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x34U)))))));
        bufp->chgBit(oldp+961,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x35U)) 
                                      & (IData)((0x7ffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x34U)))))));
        bufp->chgBit(oldp+962,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x36U)) 
                                      ^ (IData)((0x3ffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x35U)))))));
        bufp->chgBit(oldp+963,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x36U)) 
                                      & (IData)((0x3ffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x35U)))))));
        bufp->chgBit(oldp+964,((1U & ((IData)((0x3ffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x35U))) 
                                      & (IData)((0x3ffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x35U)))))));
        bufp->chgBit(oldp+965,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x36U)) 
                                      & (IData)((0x3ffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x35U)))))));
        bufp->chgBit(oldp+966,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x37U)) 
                                      ^ (IData)((0x1ffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x36U)))))));
        bufp->chgBit(oldp+967,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x37U)) 
                                      & (IData)((0x1ffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x36U)))))));
        bufp->chgBit(oldp+968,((1U & ((IData)((0x1ffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x36U))) 
                                      & (IData)((0x1ffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x36U)))))));
        bufp->chgBit(oldp+969,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x37U)) 
                                      & (IData)((0x1ffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x36U)))))));
        bufp->chgBit(oldp+970,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x38U)) 
                                      ^ (IData)((0xffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x37U)))))));
        bufp->chgBit(oldp+971,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x38U)) 
                                      & (IData)((0xffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x37U)))))));
        bufp->chgBit(oldp+972,((1U & ((IData)((0xffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x37U))) 
                                      & (IData)((0xffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x37U)))))));
        bufp->chgBit(oldp+973,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x38U)) 
                                      & (IData)((0xffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x37U)))))));
        bufp->chgBit(oldp+974,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x39U)) 
                                      ^ (IData)((0x7fULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x38U)))))));
        bufp->chgBit(oldp+975,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x39U)) 
                                      & (IData)((0x7fULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x38U)))))));
        bufp->chgBit(oldp+976,((1U & ((IData)((0x7fULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x38U))) 
                                      & (IData)((0x7fULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x38U)))))));
        bufp->chgBit(oldp+977,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x39U)) 
                                      & (IData)((0x7fULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x38U)))))));
        bufp->chgBit(oldp+978,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x3aU)) 
                                      ^ (IData)((0x3fULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x39U)))))));
        bufp->chgBit(oldp+979,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x3aU)) 
                                      & (IData)((0x3fULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x39U)))))));
        bufp->chgBit(oldp+980,((1U & ((IData)((0x3fULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x39U))) 
                                      & (IData)((0x3fULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x39U)))))));
        bufp->chgBit(oldp+981,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x3aU)) 
                                      & (IData)((0x3fULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x39U)))))));
        bufp->chgBit(oldp+982,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x3bU)) 
                                      ^ (IData)((0x1fULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x3aU)))))));
        bufp->chgBit(oldp+983,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x3bU)) 
                                      & (IData)((0x1fULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x3aU)))))));
        bufp->chgBit(oldp+984,((1U & ((IData)((0x1fULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x3aU))) 
                                      & (IData)((0x1fULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x3aU)))))));
        bufp->chgBit(oldp+985,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x3bU)) 
                                      & (IData)((0x1fULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x3aU)))))));
        bufp->chgBit(oldp+986,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 6U)) 
                                      ^ (IData)((0x3ffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+987,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 6U)) 
                                      & (IData)((0x3ffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+988,((1U & ((IData)((0x3ffffffffffffffULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 5U))) 
                                      & (IData)((0x3ffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+989,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 6U)) 
                                      & (IData)((0x3ffffffffffffffULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+990,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x3cU)) 
                                      ^ (IData)((0xfULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x3bU)))))));
        bufp->chgBit(oldp+991,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x3cU)) 
                                      & (IData)((0xfULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x3bU)))))));
        bufp->chgBit(oldp+992,((1U & ((IData)((0xfULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x3bU))) 
                                      & (IData)((0xfULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x3bU)))))));
        bufp->chgBit(oldp+993,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x3cU)) 
                                      & (IData)((0xfULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x3bU)))))));
        bufp->chgBit(oldp+994,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x3dU)) 
                                      ^ (IData)((7ULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x3cU)))))));
        bufp->chgBit(oldp+995,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x3dU)) 
                                      & (IData)((7ULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x3cU)))))));
        bufp->chgBit(oldp+996,((1U & ((IData)((7ULL 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x3cU))) 
                                      & (IData)((7ULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x3cU)))))));
        bufp->chgBit(oldp+997,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x3dU)) 
                                      & (IData)((7ULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                    >> 0x3cU)))))));
        bufp->chgBit(oldp+998,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x3eU)) 
                                      ^ (IData)((3ULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x3dU)))))));
        bufp->chgBit(oldp+999,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                               >> 0x3eU)) 
                                      & (IData)((3ULL 
                                                 & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                    >> 0x3dU)))))));
        bufp->chgBit(oldp+1000,((1U & ((IData)((3ULL 
                                                & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                   >> 0x3dU))) 
                                       & (IData)((3ULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                     >> 0x3dU)))))));
        bufp->chgBit(oldp+1001,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x3eU)) 
                                       & (IData)((3ULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                     >> 0x3dU)))))));
        bufp->chgBit(oldp+1002,((1U & ((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                        >> 0x3fU) ^ 
                                       (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                        >> 0x3eU)))));
        bufp->chgBit(oldp+1003,((1U & (IData)(((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x3fU) 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                  >> 0x3eU))))));
        bufp->chgBit(oldp+1004,((1U & ((IData)((1ULL 
                                                & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                   >> 0x3eU))) 
                                       & (IData)((1ULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                     >> 0x3eU)))))));
        bufp->chgBit(oldp+1005,((1U & (IData)(((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 0x3fU) 
                                               & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                  >> 0x3eU))))));
        bufp->chgBit(oldp+1006,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 7U)) 
                                       ^ (IData)((0x1ffffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1007,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 7U)) 
                                       & (IData)((0x1ffffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1008,((1U & ((IData)((0x1ffffffffffffffULL 
                                                & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                   >> 6U))) 
                                       & (IData)((0x1ffffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1009,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 7U)) 
                                       & (IData)((0x1ffffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1010,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 8U)) 
                                       ^ (IData)((0xffffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1011,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 8U)) 
                                       & (IData)((0xffffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1012,((1U & ((IData)((0xffffffffffffffULL 
                                                & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                   >> 7U))) 
                                       & (IData)((0xffffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1013,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 8U)) 
                                       & (IData)((0xffffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1014,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 9U)) 
                                       ^ (IData)((0x7fffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1015,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 9U)) 
                                       & (IData)((0x7fffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1016,((1U & ((IData)((0x7fffffffffffffULL 
                                                & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                   >> 8U))) 
                                       & (IData)((0x7fffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1017,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                >> 9U)) 
                                       & (IData)((0x7fffffffffffffULL 
                                                  & (vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                     >> 8U)))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+1018,(vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_awaddr),32);
        bufp->chgIData(oldp+1019,(((IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant)
                                    ? vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuData
                                    : 0U)),32);
        bufp->chgCData(oldp+1020,(((IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant)
                                    ? ((0U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__width))
                                        ? 1U : ((1U 
                                                 == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__width))
                                                 ? 3U
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__width))
                                                  ? 0xfU
                                                  : 0U)))
                                    : 0U)),4);
        bufp->chgBit(oldp+1021,(((IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant) 
                                 & (3U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state)))));
        bufp->chgBit(oldp+1022,(((IData)(vlSelf->top__DOT__xbar__DOT____VdfgTmp_hca0e4086__0) 
                                 & (4U == (IData)(vlSelf->top__DOT__ram__DOT__state)))));
        bufp->chgBit(oldp+1023,(vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_arready));
        bufp->chgBit(oldp+1024,(vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_arvalid));
        bufp->chgIData(oldp+1025,(vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_araddr),32);
        bufp->chgBit(oldp+1026,(vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_rready));
        bufp->chgBit(oldp+1027,(vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_rvalid));
        bufp->chgIData(oldp+1028,(vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata),32);
        bufp->chgBit(oldp+1029,(((0U == (IData)(vlSelf->top__DOT__xbar__DOT__selectedReadSlave)) 
                                 & (IData)(vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_arvalid))));
        bufp->chgBit(oldp+1030,(((0U == (IData)(vlSelf->top__DOT__xbar__DOT__selectedReadSlave)) 
                                 & (IData)(vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_rready))));
        bufp->chgBit(oldp+1031,(vlSelf->top__DOT__rom__DOT__state));
        bufp->chgIData(oldp+1032,(((IData)(vlSelf->top__DOT__rom__DOT__state)
                                    ? ((IData)(vlSelf->top__DOT__rom__DOT__state)
                                        ? vlSelf->top__DOT__rom__DOT__readModule__DOT__fetched_data
                                        : 0U) : 0U)),32);
        bufp->chgBit(oldp+1033,(((1U == (IData)(vlSelf->top__DOT__xbar__DOT__selectedWriteSlave)) 
                                 & ((IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant) 
                                    & (3U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state))))));
        bufp->chgBit(oldp+1034,((4U == (IData)(vlSelf->top__DOT__ram__DOT__state))));
        bufp->chgBit(oldp+1035,(((1U == (IData)(vlSelf->top__DOT__xbar__DOT__selectedReadSlave)) 
                                 & (IData)(vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_arvalid))));
        bufp->chgBit(oldp+1036,(((1U == (IData)(vlSelf->top__DOT__xbar__DOT__selectedReadSlave)) 
                                 & (IData)(vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_rready))));
        bufp->chgBit(oldp+1037,((1U == (IData)(vlSelf->top__DOT__ram__DOT__state))));
        bufp->chgBit(oldp+1038,(((~ (IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant)) 
                                 & (IData)(vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_arready))));
        bufp->chgBit(oldp+1039,((1U == (IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__state))));
        bufp->chgBit(oldp+1040,((2U == (IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__state))));
        bufp->chgBit(oldp+1041,(((~ (IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant)) 
                                 & (IData)(vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_rvalid))));
        bufp->chgBit(oldp+1042,(vlSelf->top__DOT__core__DOT__fetch__DOT__bpu_io_inst_valid_i));
        bufp->chgBit(oldp+1043,((0U != (3U & vlSelf->top__DOT__core__DOT__fetch__DOT__pc))));
        bufp->chgBit(oldp+1044,(vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_valid));
        bufp->chgBit(oldp+1045,(vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_bpu_take));
        bufp->chgIData(oldp+1046,(vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_bpu_takepc),32);
        bufp->chgBit(oldp+1047,(vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_misaligned));
        bufp->chgBit(oldp+1048,(vlSelf->top__DOT__core__DOT__ID__DOT__regEn1));
        bufp->chgCData(oldp+1049,(vlSelf->top__DOT__core__DOT__ID__DOT__rs1),5);
        bufp->chgBit(oldp+1050,(vlSelf->top__DOT__core__DOT__ID_io_read2_en));
        bufp->chgCData(oldp+1051,(vlSelf->top__DOT__core__DOT__ID__DOT__rs2),5);
        bufp->chgIData(oldp+1052,(vlSelf->top__DOT__core__DOT__ID__DOT___T_840),32);
        bufp->chgCData(oldp+1053,(vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp),3);
        bufp->chgBit(oldp+1054,((((1U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp))
                                   ? (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__readable)
                                   : ((2U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp))
                                       ? (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__writable)
                                       : ((3U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp))
                                           ? (IData)(vlSelf->top__DOT__core__DOT__csr__DOT___T_319)
                                           : ((4U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp))
                                               ? (IData)(vlSelf->top__DOT__core__DOT__csr__DOT___T_319)
                                               : ((5U 
                                                   == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp)) 
                                                  & (IData)(vlSelf->top__DOT__core__DOT__csr__DOT___T_319)))))) 
                                 & (((0U != (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp))
                                      ? ((IData)(vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_valid)
                                          ? (3U & (vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_inst 
                                                   >> 0x1cU))
                                          : 0U) : 0U) 
                                    <= (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mode)))));
        bufp->chgCData(oldp+1055,(((0x33U == (0xfe00707fU 
                                              & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                    ? 0U : ((0x13U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                             ? 0U : 
                                            ((0x40000033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                              ? 1U : 
                                             ((0x37U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                               ? 3U
                                               : ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                   ? 0U
                                                   : 
                                                  ((0x4033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                    ? 2U
                                                    : 
                                                   ((0x4013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                     ? 2U
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                      ? 3U
                                                      : 
                                                     ((0x6013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                       ? 3U
                                                       : 
                                                      ((0x7033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                        ? 4U
                                                        : 
                                                       ((0x7013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                         ? 4U
                                                         : 
                                                        ((0x2033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                          ? 5U
                                                          : 
                                                         ((0x2013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                           ? 5U
                                                           : (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_471))))))))))))))),4);
        bufp->chgCData(oldp+1056,(((0x33U == (0xfe00707fU 
                                              & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                    ? 0U : ((0x13U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                             ? 0U : 
                                            ((0x40000033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                              ? 0U : 
                                             ((0x37U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                               ? 0U
                                               : ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                   ? 0U
                                                   : 
                                                  ((0x4033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x4013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                      ? 0U
                                                      : (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_708)))))))))),4);
        bufp->chgCData(oldp+1057,(((0x33U == (0xfe00707fU 
                                              & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                    ? 0U : ((0x13U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                             ? 0U : 
                                            ((0x40000033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                              ? 0U : 
                                             ((0x37U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                               ? 0U
                                               : ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                   ? 0U
                                                   : 
                                                  ((0x4033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x4013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x6013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x7033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x7013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                         ? 0U
                                                         : 
                                                        ((0x2033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                          ? 0U
                                                          : 
                                                         ((0x2013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                           ? 0U
                                                           : (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_587))))))))))))))),4);
        bufp->chgBit(oldp+1058,(((0x33U == (0xfe00707fU 
                                            & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                 | ((0x13U == (0x707fU 
                                               & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                    | ((0x40000033U 
                                        == (0xfe00707fU 
                                            & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                       | ((0x37U == 
                                           (0x7fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                          | ((0x17U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                             | ((0x4033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                | ((0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                   | ((0x6033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                      | ((0x6013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                         | ((0x7033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                            | ((0x7013U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                               | ((0x2033U 
                                                                   == 
                                                                   (0xfe00707fU 
                                                                    & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                                  | ((0x2013U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                                     | ((0x3033U 
                                                                         == 
                                                                         (0xfe00707fU 
                                                                          & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                                        | ((0x3013U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                                           | ((0x1033U 
                                                                               == 
                                                                               (0xfe00707fU 
                                                                                & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                                              | ((0x1013U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                                                | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                                                | (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_292)))))))))))))))))))));
        bufp->chgCData(oldp+1059,(vlSelf->top__DOT__core__DOT__ID__DOT__rd),5);
        bufp->chgSData(oldp+1060,(vlSelf->top__DOT__core__DOT__ID__DOT__immI),12);
        bufp->chgBit(oldp+1061,((0U != (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp))));
        bufp->chgIData(oldp+1062,(vlSelf->top__DOT__core__DOT__ID__DOT__inst),32);
        bufp->chgBit(oldp+1063,(vlSelf->top__DOT__core__DOT__ID_EX_io_stallNext));
        bufp->chgCData(oldp+1064,(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_aluOp),4);
        bufp->chgIData(oldp+1065,(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr1),32);
        bufp->chgIData(oldp+1066,(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr2),32);
        bufp->chgCData(oldp+1067,(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp),4);
        bufp->chgCData(oldp+1068,(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_lsuOp),4);
        bufp->chgIData(oldp+1069,(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_lsuData),32);
        bufp->chgBit(oldp+1070,(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_regWen));
        bufp->chgCData(oldp+1071,(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_regWaddr),5);
        bufp->chgCData(oldp+1072,(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_csrOp),3);
        bufp->chgSData(oldp+1073,(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_csrAddr),12);
        bufp->chgBit(oldp+1074,(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_csren));
        bufp->chgIData(oldp+1075,(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_csrrData),32);
        bufp->chgIData(oldp+1076,(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_csrwData),32);
        bufp->chgCData(oldp+1077,(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_excType),4);
        bufp->chgIData(oldp+1078,(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_excValue),32);
        bufp->chgBit(oldp+1079,((1U & (~ (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu_io_valid)))));
        bufp->chgBit(oldp+1080,(vlSelf->top__DOT__core__DOT__EX_io_ex_o_load));
        bufp->chgBit(oldp+1081,((0x13U != vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_inst)));
        bufp->chgBit(oldp+1082,(vlSelf->top__DOT__core__DOT__MEM_WB__DOT___T_2));
        bufp->chgCData(oldp+1083,(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuOp),4);
        bufp->chgIData(oldp+1084,(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuData),32);
        bufp->chgBit(oldp+1085,(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_reg_en));
        bufp->chgCData(oldp+1086,(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_reg_addr),5);
        bufp->chgCData(oldp+1087,(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_csr_op),3);
        bufp->chgSData(oldp+1088,(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_csr_addr),12);
        bufp->chgIData(oldp+1089,(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_csr_data),32);
        bufp->chgBit(oldp+1090,(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_csr_retired));
        bufp->chgCData(oldp+1091,(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType),4);
        bufp->chgIData(oldp+1092,(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excValue),32);
        bufp->chgIData(oldp+1093,(((5U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType))
                                    ? 2U : ((7U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType))
                                             ? 0U : 
                                            ((1U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType))
                                              ? 0xbU
                                              : ((8U 
                                                  == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType))
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__memAddr)
                                                   ? 4U
                                                   : 0xdU)
                                                  : 0U))))),31);
        bufp->chgIData(oldp+1094,(vlSelf->top__DOT__core__DOT__MEM_io_except_excValue),32);
        bufp->chgBit(oldp+1095,(vlSelf->top__DOT__core__DOT__resoler__DOT___T_35));
        bufp->chgIData(oldp+1096,(vlSelf->top__DOT__core__DOT__MEM_io_mem_o_reg_data),32);
        bufp->chgBit(oldp+1097,((1U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state))));
        bufp->chgBit(oldp+1098,((2U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state))));
        bufp->chgCData(oldp+1099,(((0U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__width))
                                    ? 1U : ((1U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__width))
                                             ? 3U : 
                                            ((2U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__width))
                                              ? 0xfU
                                              : 0U)))),4);
        bufp->chgBit(oldp+1100,((3U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state))));
        bufp->chgBit(oldp+1101,(((IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant) 
                                 & ((IData)(vlSelf->top__DOT__xbar__DOT____VdfgTmp_hca0e4086__0) 
                                    & (4U == (IData)(vlSelf->top__DOT__ram__DOT__state))))));
        bufp->chgBit(oldp+1102,(((IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant) 
                                 & (IData)(vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_arready))));
        bufp->chgBit(oldp+1103,((4U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state))));
        bufp->chgBit(oldp+1104,((5U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state))));
        bufp->chgBit(oldp+1105,(((IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant) 
                                 & (IData)(vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_rvalid))));
        bufp->chgBit(oldp+1106,(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_reg_en));
        bufp->chgCData(oldp+1107,(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_reg_addr),5);
        bufp->chgIData(oldp+1108,(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_reg_data),32);
        bufp->chgCData(oldp+1109,(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_op),3);
        bufp->chgSData(oldp+1110,(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr),12);
        bufp->chgIData(oldp+1111,(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_data),32);
        bufp->chgBit(oldp+1112,(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_retired));
        bufp->chgIData(oldp+1113,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_0),32);
        bufp->chgIData(oldp+1114,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_1),32);
        bufp->chgIData(oldp+1115,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_2),32);
        bufp->chgIData(oldp+1116,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_3),32);
        bufp->chgIData(oldp+1117,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_4),32);
        bufp->chgIData(oldp+1118,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_5),32);
        bufp->chgIData(oldp+1119,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_6),32);
        bufp->chgIData(oldp+1120,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_7),32);
        bufp->chgIData(oldp+1121,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_8),32);
        bufp->chgIData(oldp+1122,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_9),32);
        bufp->chgIData(oldp+1123,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_10),32);
        bufp->chgIData(oldp+1124,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_11),32);
        bufp->chgIData(oldp+1125,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_12),32);
        bufp->chgIData(oldp+1126,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_13),32);
        bufp->chgIData(oldp+1127,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_14),32);
        bufp->chgIData(oldp+1128,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_15),32);
        bufp->chgIData(oldp+1129,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_16),32);
        bufp->chgIData(oldp+1130,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_17),32);
        bufp->chgIData(oldp+1131,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_18),32);
        bufp->chgIData(oldp+1132,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_19),32);
        bufp->chgIData(oldp+1133,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_20),32);
        bufp->chgIData(oldp+1134,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_21),32);
        bufp->chgIData(oldp+1135,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_22),32);
        bufp->chgIData(oldp+1136,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_23),32);
        bufp->chgIData(oldp+1137,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_24),32);
        bufp->chgIData(oldp+1138,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_25),32);
        bufp->chgIData(oldp+1139,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_26),32);
        bufp->chgIData(oldp+1140,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_27),32);
        bufp->chgIData(oldp+1141,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_28),32);
        bufp->chgIData(oldp+1142,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_29),32);
        bufp->chgIData(oldp+1143,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_30),32);
        bufp->chgIData(oldp+1144,(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_31),32);
        bufp->chgIData(oldp+1145,(((IData)(vlSelf->top__DOT__core__DOT__ID__DOT__regEn1)
                                    ? ((0x1fU == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                        ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_31
                                        : ((0x1eU == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                            ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_30
                                            : ((0x1dU 
                                                == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                                ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_29
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                                    ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_28
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                                     ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_27
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                                      ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_26
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                                       ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_25
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                                        ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_24
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                                         ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_23
                                                         : 
                                                        ((0x16U 
                                                          == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                                          ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_22
                                                          : vlSelf->top__DOT__core__DOT__regfile__DOT___GEN_21))))))))))
                                    : 0U)),32);
        bufp->chgIData(oldp+1146,(((IData)(vlSelf->top__DOT__core__DOT__ID_io_read2_en)
                                    ? ((0x1fU == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                                        ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_31
                                        : ((0x1eU == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                                            ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_30
                                            : ((0x1dU 
                                                == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                                                ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_29
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                                                    ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_28
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                                                     ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_27
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                                                      ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_26
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                                                       ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_25
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                                                        ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_24
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                                                         ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_23
                                                         : 
                                                        ((0x16U 
                                                          == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                                                          ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_22
                                                          : vlSelf->top__DOT__core__DOT__regfile__DOT___GEN_53))))))))))
                                    : 0U)),32);
        bufp->chgBit(oldp+1147,(vlSelf->top__DOT__core__DOT__resoler_io_loadflag));
        bufp->chgBit(oldp+1148,((((0U != (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp)) 
                                  & (2U != (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp))) 
                                 & (((((0U != (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_csr_op)) 
                                       & (1U != (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_csr_op))) 
                                      & ((IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840) 
                                         == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_csr_addr))) 
                                     | ((IData)(vlSelf->top__DOT__core__DOT__resoler__DOT___T_35) 
                                        & ((IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840) 
                                           == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr)))) 
                                    | (((0U != (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_csrOp)) 
                                        & (1U != (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_csrOp))) 
                                       & ((IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840) 
                                          == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_csrAddr)))))));
        bufp->chgBit(oldp+1149,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu_io_valid));
        bufp->chgQData(oldp+1150,((0x7fffffffffffffffULL 
                                   & ((0U == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_aluOp))
                                       ? (QData)((IData)(
                                                         (vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr1 
                                                          + vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr2)))
                                       : ((1U == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_aluOp))
                                           ? (QData)((IData)(
                                                             (vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr1 
                                                              - vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr2)))
                                           : ((4U == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_aluOp))
                                               ? (QData)((IData)(
                                                                 (vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr1 
                                                                  & vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr2)))
                                               : ((3U 
                                                   == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_aluOp))
                                                   ? (QData)((IData)(
                                                                     (vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr1 
                                                                      | vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr2)))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_aluOp))
                                                    ? (QData)((IData)(
                                                                      (vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr1 
                                                                       ^ vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr2)))
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_aluOp))
                                                     ? 
                                                    ((QData)((IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr1)) 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr2))
                                                     : (QData)((IData)(
                                                                       ((9U 
                                                                         == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_aluOp))
                                                                         ? 
                                                                        VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr1, 
                                                                                (0x1fU 
                                                                                & vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr2))
                                                                         : 
                                                                        ((8U 
                                                                          == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_aluOp))
                                                                          ? 
                                                                         (vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr1 
                                                                          >> 
                                                                          (0x1fU 
                                                                           & vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr2))
                                                                          : 
                                                                         ((5U 
                                                                           == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_aluOp))
                                                                           ? 
                                                                          VL_LTS_III(32, vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr1, vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr2)
                                                                           : 
                                                                          ((6U 
                                                                            == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_aluOp)) 
                                                                           & (vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr1 
                                                                              < vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr2))))))))))))))),63);
        bufp->chgBit(oldp+1152,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_en));
        bufp->chgBit(oldp+1153,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__isDiv0));
        bufp->chgBit(oldp+1154,((2U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__state))));
        bufp->chgIData(oldp+1155,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divident),32);
        bufp->chgIData(oldp+1156,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divisor),32);
        bufp->chgIData(oldp+1157,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[0U]),32);
        bufp->chgIData(oldp+1158,(((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U] 
                                    << 0x1fU) | (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[1U] 
                                                 >> 1U))),32);
        bufp->chgBit(oldp+1159,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mulEn));
        bufp->chgBit(oldp+1160,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__hiRem));
        bufp->chgBit(oldp+1161,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__lhsSigned));
        bufp->chgBit(oldp+1162,(((1U != (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
                                 & ((2U == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
                                    | ((3U != (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
                                       & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT___T_41))))));
        bufp->chgBit(oldp+1163,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__isOpr1Neg));
        bufp->chgBit(oldp+1164,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__isOpr2Neg));
        bufp->chgBit(oldp+1165,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__isAnsNeg));
        bufp->chgBit(oldp+1166,(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__lhsSigned) 
                                 & ((vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr1 
                                     >> 0x1fU) ^ vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U]))));
        bufp->chgIData(oldp+1167,(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__isAnsNeg)
                                    ? (- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[0U])
                                    : vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[0U])),32);
        bufp->chgQData(oldp+1168,(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__isDiv0)
                                    ? 0xffffffffULL
                                    : (QData)((IData)(
                                                      ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__isAnsNeg)
                                                        ? 
                                                       (- 
                                                        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[0U])
                                                        : 
                                                       vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[0U]))))),33);
        bufp->chgIData(oldp+1170,((((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__lhsSigned) 
                                    & ((vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr1 
                                        >> 0x1fU) ^ 
                                       vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U]))
                                    ? (- ((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U] 
                                           << 0x1fU) 
                                          | (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[1U] 
                                             >> 1U)))
                                    : ((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U] 
                                        << 0x1fU) | 
                                       (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[1U] 
                                        >> 1U)))),32);
        bufp->chgIData(oldp+1171,(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__isDiv0)
                                    ? vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr1
                                    : (((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__lhsSigned) 
                                        & ((vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr1 
                                            >> 0x1fU) 
                                           ^ vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U]))
                                        ? (- ((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U] 
                                               << 0x1fU) 
                                              | (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[1U] 
                                                 >> 1U)))
                                        : ((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U] 
                                            << 0x1fU) 
                                           | (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[1U] 
                                              >> 1U))))),32);
        bufp->chgQData(oldp+1172,(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__hiRem)
                                    ? (QData)((IData)(
                                                      ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__isDiv0)
                                                        ? vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr1
                                                        : 
                                                       (((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__lhsSigned) 
                                                         & ((vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr1 
                                                             >> 0x1fU) 
                                                            ^ 
                                                            vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U]))
                                                         ? 
                                                        (- 
                                                         ((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U] 
                                                           << 0x1fU) 
                                                          | (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[1U] 
                                                             >> 1U)))
                                                         : 
                                                        ((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U] 
                                                          << 0x1fU) 
                                                         | (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[1U] 
                                                            >> 1U))))))
                                    : ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__isDiv0)
                                        ? 0xffffffffULL
                                        : (QData)((IData)(
                                                          ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__isAnsNeg)
                                                            ? 
                                                           (- 
                                                            vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[0U])
                                                            : 
                                                           vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[0U])))))),33);
        bufp->chgCData(oldp+1174,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__state),2);
        bufp->chgWData(oldp+1175,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result),65);
        bufp->chgCData(oldp+1178,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__counter),4);
        bufp->chgIData(oldp+1179,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__lastDivident),32);
        bufp->chgIData(oldp+1180,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__lastDivisor),32);
        bufp->chgWData(oldp+1181,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__divisor),65);
        bufp->chgQData(oldp+1184,((((QData)((IData)(
                                                    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__divisor[2U])) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__divisor[1U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__divisor[0U])) 
                                                    >> 1U)))),64);
        bufp->chgWData(oldp+1186,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__maxDivisor),65);
        bufp->chgBit(oldp+1189,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__startFlag));
        bufp->chgIData(oldp+1190,(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_reg_data),32);
        bufp->chgIData(oldp+1191,(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_inst),32);
        bufp->chgIData(oldp+1192,(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_currentPc),32);
        bufp->chgCData(oldp+1193,(vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc1),4);
        bufp->chgCData(oldp+1194,(vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc2),4);
        bufp->chgCData(oldp+1195,(vlSelf->top__DOT__core__DOT__ID__DOT__branchOp),3);
        bufp->chgCData(oldp+1196,(vlSelf->top__DOT__core__DOT__ID__DOT__csrOp),3);
        bufp->chgCData(oldp+1197,(((0x33U == (0xfe00707fU 
                                              & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                    ? 0U : ((0x13U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                             ? 0U : 
                                            ((0x40000033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                              ? 0U : 
                                             ((0x37U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                               ? 0U
                                               : ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                   ? 0U
                                                   : 
                                                  ((0x4033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x4013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x6013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x7033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x7013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                         ? 0U
                                                         : 
                                                        ((0x2033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                          ? 0U
                                                          : 
                                                         ((0x2013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                           ? 0U
                                                           : (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_761))))))))))))))),4);
        bufp->chgBit(oldp+1198,((1U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__branchOp))));
        bufp->chgIData(oldp+1199,((vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_pc 
                                   + (((- (IData)((IData)(vlSelf->top__DOT__core__DOT__ID__DOT____VdfgTmp_hc515ad56__0))) 
                                       << 0x15U) | 
                                      (((IData)(vlSelf->top__DOT__core__DOT__ID__DOT____VdfgTmp_hc515ad56__0) 
                                        << 0x14U) | 
                                       ((((IData)(vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_valid)
                                           ? (0xffU 
                                              & (vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_inst 
                                                 >> 0xcU))
                                           : 0U) << 0xcU) 
                                        | ((0x7ff800U 
                                            & (((IData)(vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_valid) 
                                                << 0xbU) 
                                               & (vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_inst 
                                                  >> 9U))) 
                                           | (((IData)(vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_valid)
                                                ? (0x3ffU 
                                                   & (vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_inst 
                                                      >> 0x15U))
                                                : 0U) 
                                              << 1U))))))),32);
        bufp->chgIData(oldp+1200,((vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_pc 
                                   + (((- (IData)((IData)(vlSelf->top__DOT__core__DOT__ID__DOT____VdfgTmp_hc515ad56__0))) 
                                       << 0xdU) | (
                                                   ((IData)(vlSelf->top__DOT__core__DOT__ID__DOT____VdfgTmp_hc515ad56__0) 
                                                    << 0xcU) 
                                                   | ((0xfffff800U 
                                                       & (((IData)(vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_valid) 
                                                           << 0xbU) 
                                                          & (vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_inst 
                                                             << 4U))) 
                                                      | ((((IData)(vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_valid)
                                                            ? 
                                                           (0x3fU 
                                                            & (vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_inst 
                                                               >> 0x19U))
                                                            : 0U) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_valid)
                                                              ? 
                                                             (0xfU 
                                                              & (vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_inst 
                                                                 >> 8U))
                                                              : 0U) 
                                                            << 1U))))))),32);
        bufp->chgIData(oldp+1201,(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_inst),32);
        bufp->chgIData(oldp+1202,(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_currentPc),32);
        bufp->chgIData(oldp+1203,(vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_pc),32);
        bufp->chgIData(oldp+1204,(vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_inst),32);
        bufp->chgBit(oldp+1205,(vlSelf->top__DOT__core__DOT__MEM__DOT__wen));
        bufp->chgBit(oldp+1206,(vlSelf->top__DOT__core__DOT__MEM__DOT__ren));
        bufp->chgCData(oldp+1207,(vlSelf->top__DOT__core__DOT__MEM__DOT__width),2);
        bufp->chgBit(oldp+1208,(((1U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                 | (2U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuOp)))));
        bufp->chgCData(oldp+1209,((3U & vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_reg_data)),2);
        bufp->chgBit(oldp+1210,(((4U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state)) 
                                 & ((IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant) 
                                    & (IData)(vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_arready)))));
        bufp->chgBit(oldp+1211,(vlSelf->top__DOT__core__DOT__MEM__DOT__r_hs));
        bufp->chgBit(oldp+1212,(vlSelf->top__DOT__core__DOT__MEM__DOT__b_hs));
        bufp->chgCData(oldp+1213,(vlSelf->top__DOT__core__DOT__MEM__DOT__state),3);
        bufp->chgIData(oldp+1214,(((0U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__width))
                                    ? ((((0x80U & vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata)
                                          ? 0xffffffU
                                          : 0U) << 8U) 
                                       | (0xffU & vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata))
                                    : ((1U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__width))
                                        ? ((((0x8000U 
                                              & vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata)
                                              ? 0xffffU
                                              : 0U) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata))
                                        : ((2U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__width))
                                            ? vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata
                                            : 0U)))),32);
        bufp->chgBit(oldp+1215,(vlSelf->top__DOT__core__DOT__MEM__DOT__memAddr));
        bufp->chgBit(oldp+1216,((7U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType))));
        bufp->chgBit(oldp+1217,((5U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType))));
        bufp->chgBit(oldp+1218,(((8U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType)) 
                                 & (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__memAddr))));
        bufp->chgBit(oldp+1219,((1U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType))));
        bufp->chgIData(oldp+1220,(((1U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType))
                                    ? 0xbU : ((8U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType))
                                               ? ((IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__memAddr)
                                                   ? 4U
                                                   : 0xdU)
                                               : 0U))),31);
        bufp->chgIData(oldp+1221,(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_currentPc),32);
        bufp->chgIData(oldp+1222,(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_inst),32);
        bufp->chgBit(oldp+1223,(((4U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state)) 
                                 | (1U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state)))));
        bufp->chgBit(oldp+1224,(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant));
        bufp->chgCData(oldp+1225,(vlSelf->top__DOT__core__DOT__csr__DOT__mode),2);
        bufp->chgBit(oldp+1226,(vlSelf->top__DOT__core__DOT__csr__DOT__mstatus_sum));
        bufp->chgCData(oldp+1227,(vlSelf->top__DOT__core__DOT__csr__DOT__mstatus_mpp),2);
        bufp->chgBit(oldp+1228,(vlSelf->top__DOT__core__DOT__csr__DOT__mstatus_spp));
        bufp->chgBit(oldp+1229,(vlSelf->top__DOT__core__DOT__csr__DOT__mstatus_mpie));
        bufp->chgBit(oldp+1230,(vlSelf->top__DOT__core__DOT__csr__DOT__mstatus_spie));
        bufp->chgBit(oldp+1231,(vlSelf->top__DOT__core__DOT__csr__DOT__mstatus_mie));
        bufp->chgBit(oldp+1232,(vlSelf->top__DOT__core__DOT__csr__DOT__mstatus_sie));
        bufp->chgIData(oldp+1233,(vlSelf->top__DOT__core__DOT__csr__DOT__medeleg_data),32);
        bufp->chgIData(oldp+1234,(vlSelf->top__DOT__core__DOT__csr__DOT__mideleg_data),32);
        bufp->chgBit(oldp+1235,(vlSelf->top__DOT__core__DOT__csr__DOT__mie_meie));
        bufp->chgBit(oldp+1236,(vlSelf->top__DOT__core__DOT__csr__DOT__mie_seie));
        bufp->chgBit(oldp+1237,(vlSelf->top__DOT__core__DOT__csr__DOT__mie_mtie));
        bufp->chgBit(oldp+1238,(vlSelf->top__DOT__core__DOT__csr__DOT__mie_stie));
        bufp->chgBit(oldp+1239,(vlSelf->top__DOT__core__DOT__csr__DOT__mie_msie));
        bufp->chgBit(oldp+1240,(vlSelf->top__DOT__core__DOT__csr__DOT__mie_ssie));
        bufp->chgIData(oldp+1241,(vlSelf->top__DOT__core__DOT__csr__DOT__mtvec_base),30);
        bufp->chgCData(oldp+1242,(vlSelf->top__DOT__core__DOT__csr__DOT__mtvec_mode),2);
        bufp->chgIData(oldp+1243,(vlSelf->top__DOT__core__DOT__csr__DOT__mscratch_data),32);
        bufp->chgIData(oldp+1244,(vlSelf->top__DOT__core__DOT__csr__DOT__mepc_data),32);
        bufp->chgBit(oldp+1245,(vlSelf->top__DOT__core__DOT__csr__DOT__mcause_int));
        bufp->chgIData(oldp+1246,(vlSelf->top__DOT__core__DOT__csr__DOT__mcause_code),31);
        bufp->chgIData(oldp+1247,(vlSelf->top__DOT__core__DOT__csr__DOT__mtval_data),32);
        bufp->chgBit(oldp+1248,(vlSelf->top__DOT__core__DOT__csr__DOT__mipReal_seip));
        bufp->chgBit(oldp+1249,(vlSelf->top__DOT__core__DOT__csr__DOT__mipReal_stip));
        bufp->chgBit(oldp+1250,(vlSelf->top__DOT__core__DOT__csr__DOT__mipReal_ssip));
        bufp->chgQData(oldp+1251,(vlSelf->top__DOT__core__DOT__csr__DOT__mcycle_data),64);
        bufp->chgQData(oldp+1253,(vlSelf->top__DOT__core__DOT__csr__DOT__minstret_data),64);
        bufp->chgIData(oldp+1255,(vlSelf->top__DOT__core__DOT__csr__DOT__stvec_base),30);
        bufp->chgCData(oldp+1256,(vlSelf->top__DOT__core__DOT__csr__DOT__stvec_mode),2);
        bufp->chgIData(oldp+1257,(vlSelf->top__DOT__core__DOT__csr__DOT__sscratch_data),32);
        bufp->chgIData(oldp+1258,(vlSelf->top__DOT__core__DOT__csr__DOT__sepc_data),32);
        bufp->chgBit(oldp+1259,(vlSelf->top__DOT__core__DOT__csr__DOT__scause_int));
        bufp->chgIData(oldp+1260,(vlSelf->top__DOT__core__DOT__csr__DOT__scause_code),31);
        bufp->chgIData(oldp+1261,(vlSelf->top__DOT__core__DOT__csr__DOT__stval_data),32);
        bufp->chgBit(oldp+1262,(vlSelf->top__DOT__core__DOT__csr__DOT__satp_mode));
        bufp->chgIData(oldp+1263,(vlSelf->top__DOT__core__DOT__csr__DOT__satp_ppn),22);
        bufp->chgBit(oldp+1264,(vlSelf->top__DOT__core__DOT__csr__DOT__readable));
        bufp->chgBit(oldp+1265,(vlSelf->top__DOT__core__DOT__csr__DOT__writable));
        bufp->chgBit(oldp+1266,(((1U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp))
                                  ? (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__readable)
                                  : ((2U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp))
                                      ? (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__writable)
                                      : ((3U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp))
                                          ? (IData)(vlSelf->top__DOT__core__DOT__csr__DOT___T_319)
                                          : ((4U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp))
                                              ? (IData)(vlSelf->top__DOT__core__DOT__csr__DOT___T_319)
                                              : ((5U 
                                                  == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp)) 
                                                 & (IData)(vlSelf->top__DOT__core__DOT__csr__DOT___T_319))))))));
        bufp->chgBit(oldp+1267,((((0U != (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp))
                                   ? ((IData)(vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_valid)
                                       ? (3U & (vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_inst 
                                                >> 0x1cU))
                                       : 0U) : 0U) 
                                 <= (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mode))));
        bufp->chgCData(oldp+1268,(((IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT___T_2)
                                    ? 0x1eU : ((IData)(vlSelf->top__DOT__core__DOT__ctrl__DOT___T)
                                                ? 0x1cU
                                                : ((IData)(vlSelf->top__DOT__core__DOT__resoler_io_loadflag)
                                                    ? 0x18U
                                                    : 0U)))),5);
        bufp->chgIData(oldp+1269,(vlSelf->top__DOT__core__DOT__fetch__DOT__pc),32);
        bufp->chgCData(oldp+1270,(vlSelf->top__DOT__core__DOT__fetch__DOT__state),2);
        bufp->chgBit(oldp+1271,(((1U == (IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__state)) 
                                 & ((~ (IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant)) 
                                    & (IData)(vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_arready)))));
        bufp->chgBit(oldp+1272,(vlSelf->top__DOT__core__DOT__fetch__DOT__r_hs));
        bufp->chgCData(oldp+1273,(vlSelf->top__DOT__core__DOT__fetch__DOT__bpu__DOT__opcode),7);
        bufp->chgBit(oldp+1274,((0x63U == (IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__bpu__DOT__opcode))));
        bufp->chgBit(oldp+1275,((0x6fU == (IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__bpu__DOT__opcode))));
        bufp->chgIData(oldp+1276,(((((IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__bpu__DOT____VdfgTmp_hfc59af28__0)
                                      ? 0xfffffU : 0U) 
                                    << 0xcU) | ((0xfffff800U 
                                                 & (((IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__r_hs) 
                                                     << 0xbU) 
                                                    & (vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata 
                                                       << 4U))) 
                                                | ((((IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__r_hs)
                                                      ? 
                                                     (0x3fU 
                                                      & (vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata 
                                                         >> 0x19U))
                                                      : 0U) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__r_hs)
                                                        ? 
                                                       (0xfU 
                                                        & (vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata 
                                                           >> 8U))
                                                        : 0U) 
                                                      << 1U))))),32);
        bufp->chgIData(oldp+1277,(((((IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__bpu__DOT____VdfgTmp_hfc59af28__0)
                                      ? 0xfffU : 0U) 
                                    << 0x14U) | ((((IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__r_hs)
                                                    ? 
                                                   (0xffU 
                                                    & (vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata 
                                                       >> 0xcU))
                                                    : 0U) 
                                                  << 0xcU) 
                                                 | ((0x7ff800U 
                                                     & (((IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__r_hs) 
                                                         << 0xbU) 
                                                        & (vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata 
                                                           >> 9U))) 
                                                    | (((IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__r_hs)
                                                         ? 
                                                        (0x3ffU 
                                                         & (vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata 
                                                            >> 0x15U))
                                                         : 0U) 
                                                       << 1U))))),32);
        bufp->chgIData(oldp+1278,(((0x63U == (IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__bpu__DOT__opcode))
                                    ? ((((IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__bpu__DOT____VdfgTmp_hfc59af28__0)
                                          ? 0xfffffU
                                          : 0U) << 0xcU) 
                                       | ((0xfffff800U 
                                           & (((IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__r_hs) 
                                               << 0xbU) 
                                              & (vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata 
                                                 << 4U))) 
                                          | ((((IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__r_hs)
                                                ? (0x3fU 
                                                   & (vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata 
                                                      >> 0x19U))
                                                : 0U) 
                                              << 5U) 
                                             | (((IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__r_hs)
                                                  ? 
                                                 (0xfU 
                                                  & (vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata 
                                                     >> 8U))
                                                  : 0U) 
                                                << 1U))))
                                    : ((0x6fU == (IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__bpu__DOT__opcode))
                                        ? ((((IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__bpu__DOT____VdfgTmp_hfc59af28__0)
                                              ? 0xfffU
                                              : 0U) 
                                            << 0x14U) 
                                           | ((((IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__r_hs)
                                                 ? 
                                                (0xffU 
                                                 & (vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata 
                                                    >> 0xcU))
                                                 : 0U) 
                                               << 0xcU) 
                                              | ((0x7ff800U 
                                                  & (((IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__r_hs) 
                                                      << 0xbU) 
                                                     & (vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata 
                                                        >> 9U))) 
                                                 | (((IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__r_hs)
                                                      ? 
                                                     (0x3ffU 
                                                      & (vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata 
                                                         >> 0x15U))
                                                      : 0U) 
                                                    << 1U))))
                                        : 0U))),32);
        bufp->chgBit(oldp+1279,((((0x63U == (IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__bpu__DOT__opcode)) 
                                  & (IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__bpu__DOT____VdfgTmp_hfc59af28__0)) 
                                 | (0x6fU == (IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__bpu__DOT__opcode)))));
        bufp->chgBit(oldp+1280,(((IData)(vlSelf->top__DOT__core__DOT__ID__DOT__regEn1) 
                                 & ((IData)(vlSelf->top__DOT__core__DOT__EX_io_ex_o_load) 
                                    & (IData)(vlSelf->top__DOT__core__DOT__resoler__DOT___T_2)))));
        bufp->chgBit(oldp+1281,(((IData)(vlSelf->top__DOT__core__DOT__ID_io_read2_en) 
                                 & ((IData)(vlSelf->top__DOT__core__DOT__EX_io_ex_o_load) 
                                    & (IData)(vlSelf->top__DOT__core__DOT__resoler__DOT___T_10)))));
        bufp->chgIData(oldp+1282,(((1U == (IData)(vlSelf->top__DOT__ram__DOT__state))
                                    ? vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_araddr
                                    : vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_awaddr)),32);
        bufp->chgIData(oldp+1283,(vlSelf->top__DOT__ram__DOT__awrite_rdata),32);
        bufp->chgBit(oldp+1284,(((1U == (IData)(vlSelf->top__DOT__ram__DOT__state)) 
                                 & ((1U == (IData)(vlSelf->top__DOT__xbar__DOT__selectedReadSlave)) 
                                    & (IData)(vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_rready)))));
        bufp->chgBit(oldp+1285,(((4U == (IData)(vlSelf->top__DOT__ram__DOT__state)) 
                                 & ((1U == (IData)(vlSelf->top__DOT__xbar__DOT__selectedWriteSlave)) 
                                    & ((IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant) 
                                       & (3U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state)))))));
        bufp->chgCData(oldp+1286,(vlSelf->top__DOT__ram__DOT__state),3);
        bufp->chgIData(oldp+1287,(vlSelf->top__DOT__rom__DOT__readModule__DOT__fetched_data),32);
        bufp->chgBit(oldp+1288,((((0U == (IData)(vlSelf->top__DOT__xbar__DOT__selectedReadSlave)) 
                                  & (IData)(vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_rready)) 
                                 & (IData)(vlSelf->top__DOT__rom__DOT__state))));
        bufp->chgCData(oldp+1289,(vlSelf->top__DOT__xbar__DOT__selectedReadSlave),2);
        bufp->chgCData(oldp+1290,(vlSelf->top__DOT__xbar__DOT__selectedWriteSlave),2);
    }
    bufp->chgBit(oldp+1291,(vlSelf->clock));
    bufp->chgBit(oldp+1292,(vlSelf->reset));
    bufp->chgBit(oldp+1293,(vlSelf->io_timer));
    bufp->chgBit(oldp+1294,(vlSelf->io_soft));
    bufp->chgBit(oldp+1295,(vlSelf->io_extern));
    bufp->chgIData(oldp+1296,(vlSelf->io_inst),32);
    bufp->chgIData(oldp+1297,(vlSelf->io_pc),32);
    bufp->chgIData(oldp+1298,(vlSelf->io_npc),32);
    bufp->chgIData(oldp+1299,(vlSelf->io_flushpc),32);
    bufp->chgBit(oldp+1300,(vlSelf->io_flush));
    bufp->chgBit(oldp+1301,(vlSelf->io_stall));
    bufp->chgIData(oldp+1302,(vlSelf->io_wbinst),32);
    bufp->chgBit(oldp+1303,(vlSelf->io_bputake));
    bufp->chgIData(oldp+1304,(vlSelf->io_bpuaddr),32);
    bufp->chgIData(oldp+1305,(vlSelf->io_idpc),32);
    bufp->chgIData(oldp+1306,(vlSelf->io_idinst),32);
    bufp->chgIData(oldp+1307,(vlSelf->io_expc),32);
    bufp->chgIData(oldp+1308,(vlSelf->io_exinst),32);
    bufp->chgIData(oldp+1309,(vlSelf->io_mempc),32);
    bufp->chgIData(oldp+1310,(vlSelf->io_meminst),32);
    bufp->chgIData(oldp+1311,(vlSelf->io_result),32);
    bufp->chgIData(oldp+1312,(vlSelf->io_waddr),32);
    bufp->chgIData(oldp+1313,(vlSelf->io_state),32);
    bufp->chgBit(oldp+1314,(vlSelf->io_romaddrvalid));
    bufp->chgBit(oldp+1315,(vlSelf->io_romaddrready));
    bufp->chgBit(oldp+1316,(vlSelf->io_romdatavalid));
    bufp->chgBit(oldp+1317,(vlSelf->io_romdataready));
    bufp->chgBit(oldp+1318,(vlSelf->io_ifaddrvalid));
    bufp->chgBit(oldp+1319,(vlSelf->io_ifaddrready));
    bufp->chgBit(oldp+1320,(vlSelf->io_ifdatavalid));
    bufp->chgBit(oldp+1321,(vlSelf->io_ifdataready));
    bufp->chgIData(oldp+1322,(((IData)(vlSelf->io_romaddrready)
                                ? 0U : ((1U == (IData)(vlSelf->top__DOT__ram__DOT__state))
                                         ? vlSelf->top__DOT__ram__DOT__awrite_rdata
                                         : 0U))),32);
    bufp->chgBit(oldp+1323,((((~ (IData)(vlSelf->io_stall)) 
                              & (~ (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__addrFault))) 
                             & ((0U != (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__branchOp)) 
                                & (((IData)(vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_bpu_take) 
                                    != (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__branchteke)) 
                                   | (vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_bpu_takepc 
                                      != vlSelf->top__DOT__core__DOT__ID__DOT__takepc))))));
    bufp->chgBit(oldp+1324,(((IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant) 
                             & (IData)(vlSelf->io_ifaddrready))));
    bufp->chgBit(oldp+1325,(((IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant) 
                             & (IData)(vlSelf->io_ifdataready))));
    bufp->chgBit(oldp+1326,(((1U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state)) 
                             & ((IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant) 
                                & (IData)(vlSelf->io_ifaddrready)))));
    bufp->chgBit(oldp+1327,(((2U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state)) 
                             & ((IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant) 
                                & (IData)(vlSelf->io_ifdataready)))));
    bufp->chgBit(oldp+1328,(((~ (IData)(vlSelf->io_romaddrready)) 
                             & (1U != (IData)(vlSelf->top__DOT__ram__DOT__state)))));
    bufp->chgBit(oldp+1329,(((~ (IData)(vlSelf->io_romaddrready)) 
                             & (1U == (IData)(vlSelf->top__DOT__ram__DOT__state)))));
    bufp->chgBit(oldp+1330,((((1U == (IData)(vlSelf->top__DOT__xbar__DOT__selectedReadSlave)) 
                              & (IData)(vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_arvalid)) 
                             & (IData)(vlSelf->io_romaddrready))));
    bufp->chgBit(oldp+1331,(((IData)(vlSelf->io_romaddrvalid) 
                             & (IData)(vlSelf->io_romaddrready))));
    bufp->chgBit(oldp+1332,(((IData)(vlSelf->io_romdatavalid) 
                             & (IData)(vlSelf->io_romdataready))));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
