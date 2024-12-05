// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_CarrySaveAdder.h"
#include "VysyxSoCFull__Syms.h"

VL_INLINE_OPT void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder__0(VysyxSoCFull_CarrySaveAdder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder__0\n"); );
    // Init
    SData/*15:0*/ __PVT___T_206;
    __PVT___T_206 = 0;
    IData/*31:0*/ __PVT___T_222;
    __PVT___T_222 = 0;
    SData/*15:0*/ __PVT___T_237;
    __PVT___T_237 = 0;
    IData/*31:0*/ __PVT___T_253;
    __PVT___T_253 = 0;
    // Body
    __PVT___T_206 = (0xffffU & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A) 
                                 ^ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B)) 
                                ^ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin)));
    __PVT___T_237 = (0xffffU & (((IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                          >> 0x20U)) 
                                 ^ (IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                            >> 0x20U))) 
                                ^ (IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                           >> 0x20U))));
    vlSelf->__PVT___T_317 = (((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                               & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B) 
                              | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                 & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin)) 
                             | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin));
    __PVT___T_222 = (((((IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                 >> 0x1fU)) ^ (IData)(
                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                       >> 0x1fU))) 
                       ^ (IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                  >> 0x1fU))) << 0x1fU) 
                     | ((0x40000000U & ((((IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x1eU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                     >> 0x1eU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x1eU))) 
                                        << 0x1eU)) 
                        | ((0x20000000U & ((((IData)(
                                                     (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                      >> 0x1dU)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                        >> 0x1dU))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                       >> 0x1dU))) 
                                           << 0x1dU)) 
                           | ((0x10000000U & ((((IData)(
                                                        (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                         >> 0x1cU)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                           >> 0x1cU))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                          >> 0x1cU))) 
                                              << 0x1cU)) 
                              | ((0x8000000U & ((((IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                           >> 0x1bU)) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                             >> 0x1bU))) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                            >> 0x1bU))) 
                                                << 0x1bU)) 
                                 | ((0x4000000U & (
                                                   (((IData)(
                                                             (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                              >> 0x1aU)) 
                                                     ^ (IData)(
                                                               (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                               >> 0x1aU))) 
                                                   << 0x1aU)) 
                                    | ((0x2000000U 
                                        & ((((IData)(
                                                     (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                      >> 0x19U)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                        >> 0x19U))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                       >> 0x19U))) 
                                           << 0x19U)) 
                                       | ((0x1000000U 
                                           & ((((IData)(
                                                        (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                         >> 0x18U)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                           >> 0x18U))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                          >> 0x18U))) 
                                              << 0x18U)) 
                                          | ((0xff0000U 
                                              & ((((IData)(
                                                           (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                            >> 0x10U)) 
                                                   ^ (IData)(
                                                             (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                              >> 0x10U))) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                             >> 0x10U))) 
                                                 << 0x10U)) 
                                             | (IData)(__PVT___T_206))))))))));
    __PVT___T_253 = (((IData)((((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                 ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B) 
                                ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin) 
                               >> 0x3fU)) << 0x1fU) 
                     | ((0x40000000U & ((((IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x3eU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                     >> 0x3eU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x3eU))) 
                                        << 0x1eU)) 
                        | ((0x20000000U & ((((IData)(
                                                     (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                      >> 0x3dU)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                        >> 0x3dU))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                       >> 0x3dU))) 
                                           << 0x1dU)) 
                           | ((0x10000000U & ((((IData)(
                                                        (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                         >> 0x3cU)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                           >> 0x3cU))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                          >> 0x3cU))) 
                                              << 0x1cU)) 
                              | ((0x8000000U & ((((IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                           >> 0x3bU)) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                             >> 0x3bU))) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                            >> 0x3bU))) 
                                                << 0x1bU)) 
                                 | ((0x4000000U & (
                                                   (((IData)(
                                                             (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                              >> 0x3aU)) 
                                                     ^ (IData)(
                                                               (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                               >> 0x3aU))) 
                                                   << 0x1aU)) 
                                    | ((0x2000000U 
                                        & ((((IData)(
                                                     (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                      >> 0x39U)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                        >> 0x39U))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                       >> 0x39U))) 
                                           << 0x19U)) 
                                       | ((0x1000000U 
                                           & ((((IData)(
                                                        (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                         >> 0x38U)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                           >> 0x38U))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                          >> 0x38U))) 
                                              << 0x18U)) 
                                          | ((0xff0000U 
                                              & ((((IData)(
                                                           (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                            >> 0x30U)) 
                                                   ^ (IData)(
                                                             (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                              >> 0x30U))) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                             >> 0x30U))) 
                                                 << 0x10U)) 
                                             | (IData)(__PVT___T_237))))))))));
    vlSelf->io_Sum = (((QData)((IData)(__PVT___T_253)) 
                       << 0x20U) | (QData)((IData)(__PVT___T_222)));
}

VL_INLINE_OPT void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1__0(VysyxSoCFull_CarrySaveAdder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1__0\n"); );
    // Init
    SData/*15:0*/ __PVT___T_206;
    __PVT___T_206 = 0;
    IData/*31:0*/ __PVT___T_222;
    __PVT___T_222 = 0;
    SData/*15:0*/ __PVT___T_237;
    __PVT___T_237 = 0;
    IData/*31:0*/ __PVT___T_253;
    __PVT___T_253 = 0;
    // Body
    __PVT___T_206 = (0xffffU & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A) 
                                 ^ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B)) 
                                ^ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin)));
    __PVT___T_237 = (0xffffU & (((IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                          >> 0x20U)) 
                                 ^ (IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                            >> 0x20U))) 
                                ^ (IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                           >> 0x20U))));
    vlSelf->__PVT___T_317 = (((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                               & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B) 
                              | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                 & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin)) 
                             | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin));
    __PVT___T_222 = (((((IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                 >> 0x1fU)) ^ (IData)(
                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                       >> 0x1fU))) 
                       ^ (IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                  >> 0x1fU))) << 0x1fU) 
                     | ((0x40000000U & ((((IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x1eU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                     >> 0x1eU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0x1eU))) 
                                        << 0x1eU)) 
                        | ((0x20000000U & ((((IData)(
                                                     (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                      >> 0x1dU)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                        >> 0x1dU))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                       >> 0x1dU))) 
                                           << 0x1dU)) 
                           | ((0x10000000U & ((((IData)(
                                                        (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                         >> 0x1cU)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                           >> 0x1cU))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                          >> 0x1cU))) 
                                              << 0x1cU)) 
                              | ((0x8000000U & ((((IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                           >> 0x1bU)) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                             >> 0x1bU))) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                            >> 0x1bU))) 
                                                << 0x1bU)) 
                                 | ((0x4000000U & (
                                                   (((IData)(
                                                             (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                              >> 0x1aU)) 
                                                     ^ (IData)(
                                                               (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                               >> 0x1aU))) 
                                                   << 0x1aU)) 
                                    | ((0x2000000U 
                                        & ((((IData)(
                                                     (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                      >> 0x19U)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                        >> 0x19U))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                       >> 0x19U))) 
                                           << 0x19U)) 
                                       | ((0x1000000U 
                                           & ((((IData)(
                                                        (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                         >> 0x18U)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                           >> 0x18U))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                          >> 0x18U))) 
                                              << 0x18U)) 
                                          | ((0xff0000U 
                                              & ((((IData)(
                                                           (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                            >> 0x10U)) 
                                                   ^ (IData)(
                                                             (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                              >> 0x10U))) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                             >> 0x10U))) 
                                                 << 0x10U)) 
                                             | (IData)(__PVT___T_206))))))))));
    __PVT___T_253 = (((IData)((((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                 ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B) 
                                ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin) 
                               >> 0x3fU)) << 0x1fU) 
                     | ((0x40000000U & ((((IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x3eU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                     >> 0x3eU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0x3eU))) 
                                        << 0x1eU)) 
                        | ((0x20000000U & ((((IData)(
                                                     (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                      >> 0x3dU)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                        >> 0x3dU))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                       >> 0x3dU))) 
                                           << 0x1dU)) 
                           | ((0x10000000U & ((((IData)(
                                                        (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                         >> 0x3cU)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                           >> 0x3cU))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                          >> 0x3cU))) 
                                              << 0x1cU)) 
                              | ((0x8000000U & ((((IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                           >> 0x3bU)) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                             >> 0x3bU))) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                            >> 0x3bU))) 
                                                << 0x1bU)) 
                                 | ((0x4000000U & (
                                                   (((IData)(
                                                             (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                              >> 0x3aU)) 
                                                     ^ (IData)(
                                                               (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                               >> 0x3aU))) 
                                                   << 0x1aU)) 
                                    | ((0x2000000U 
                                        & ((((IData)(
                                                     (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                      >> 0x39U)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                        >> 0x39U))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                       >> 0x39U))) 
                                           << 0x19U)) 
                                       | ((0x1000000U 
                                           & ((((IData)(
                                                        (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                         >> 0x38U)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                           >> 0x38U))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                          >> 0x38U))) 
                                              << 0x18U)) 
                                          | ((0xff0000U 
                                              & ((((IData)(
                                                           (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                            >> 0x30U)) 
                                                   ^ (IData)(
                                                             (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                              >> 0x30U))) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                             >> 0x30U))) 
                                                 << 0x10U)) 
                                             | (IData)(__PVT___T_237))))))))));
    vlSelf->io_Sum = (((QData)((IData)(__PVT___T_253)) 
                       << 0x20U) | (QData)((IData)(__PVT___T_222)));
}

VL_INLINE_OPT void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2__0(VysyxSoCFull_CarrySaveAdder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2__0\n"); );
    // Init
    SData/*15:0*/ __PVT___T_206;
    __PVT___T_206 = 0;
    IData/*31:0*/ __PVT___T_222;
    __PVT___T_222 = 0;
    SData/*15:0*/ __PVT___T_237;
    __PVT___T_237 = 0;
    IData/*31:0*/ __PVT___T_253;
    __PVT___T_253 = 0;
    // Body
    __PVT___T_206 = (0xffffU & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A) 
                                 ^ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B)) 
                                ^ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin)));
    __PVT___T_237 = (0xffffU & (((IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                          >> 0x20U)) 
                                 ^ (IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                            >> 0x20U))) 
                                ^ (IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                           >> 0x20U))));
    vlSelf->__PVT___T_317 = (((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                               & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B) 
                              | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                 & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin)) 
                             | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin));
    __PVT___T_222 = (((((IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                 >> 0x1fU)) ^ (IData)(
                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                       >> 0x1fU))) 
                       ^ (IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                  >> 0x1fU))) << 0x1fU) 
                     | ((0x40000000U & ((((IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x1eU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                     >> 0x1eU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                    >> 0x1eU))) 
                                        << 0x1eU)) 
                        | ((0x20000000U & ((((IData)(
                                                     (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                      >> 0x1dU)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                        >> 0x1dU))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                       >> 0x1dU))) 
                                           << 0x1dU)) 
                           | ((0x10000000U & ((((IData)(
                                                        (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                         >> 0x1cU)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                           >> 0x1cU))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                          >> 0x1cU))) 
                                              << 0x1cU)) 
                              | ((0x8000000U & ((((IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                           >> 0x1bU)) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                             >> 0x1bU))) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                            >> 0x1bU))) 
                                                << 0x1bU)) 
                                 | ((0x4000000U & (
                                                   (((IData)(
                                                             (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                              >> 0x1aU)) 
                                                     ^ (IData)(
                                                               (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                               >> 0x1aU))) 
                                                   << 0x1aU)) 
                                    | ((0x2000000U 
                                        & ((((IData)(
                                                     (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                      >> 0x19U)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                        >> 0x19U))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                       >> 0x19U))) 
                                           << 0x19U)) 
                                       | ((0x1000000U 
                                           & ((((IData)(
                                                        (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                         >> 0x18U)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                           >> 0x18U))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                          >> 0x18U))) 
                                              << 0x18U)) 
                                          | ((0xff0000U 
                                              & ((((IData)(
                                                           (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                            >> 0x10U)) 
                                                   ^ (IData)(
                                                             (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                              >> 0x10U))) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                             >> 0x10U))) 
                                                 << 0x10U)) 
                                             | (IData)(__PVT___T_206))))))))));
    __PVT___T_253 = (((IData)((((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                 ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B) 
                                ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin) 
                               >> 0x3fU)) << 0x1fU) 
                     | ((0x40000000U & ((((IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x3eU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                     >> 0x3eU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                    >> 0x3eU))) 
                                        << 0x1eU)) 
                        | ((0x20000000U & ((((IData)(
                                                     (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                      >> 0x3dU)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                        >> 0x3dU))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                       >> 0x3dU))) 
                                           << 0x1dU)) 
                           | ((0x10000000U & ((((IData)(
                                                        (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                         >> 0x3cU)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                           >> 0x3cU))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                          >> 0x3cU))) 
                                              << 0x1cU)) 
                              | ((0x8000000U & ((((IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                           >> 0x3bU)) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                             >> 0x3bU))) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                            >> 0x3bU))) 
                                                << 0x1bU)) 
                                 | ((0x4000000U & (
                                                   (((IData)(
                                                             (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                              >> 0x3aU)) 
                                                     ^ (IData)(
                                                               (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                               >> 0x3aU))) 
                                                   << 0x1aU)) 
                                    | ((0x2000000U 
                                        & ((((IData)(
                                                     (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                      >> 0x39U)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                        >> 0x39U))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                       >> 0x39U))) 
                                           << 0x19U)) 
                                       | ((0x1000000U 
                                           & ((((IData)(
                                                        (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                         >> 0x38U)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                           >> 0x38U))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                          >> 0x38U))) 
                                              << 0x18U)) 
                                          | ((0xff0000U 
                                              & ((((IData)(
                                                           (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                            >> 0x30U)) 
                                                   ^ (IData)(
                                                             (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                              >> 0x30U))) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                             >> 0x30U))) 
                                                 << 0x10U)) 
                                             | (IData)(__PVT___T_237))))))))));
    vlSelf->io_Sum = (((QData)((IData)(__PVT___T_253)) 
                       << 0x20U) | (QData)((IData)(__PVT___T_222)));
}

VL_INLINE_OPT void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3__0(VysyxSoCFull_CarrySaveAdder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3__0\n"); );
    // Init
    SData/*15:0*/ __PVT___T_206;
    __PVT___T_206 = 0;
    IData/*31:0*/ __PVT___T_222;
    __PVT___T_222 = 0;
    SData/*15:0*/ __PVT___T_237;
    __PVT___T_237 = 0;
    IData/*31:0*/ __PVT___T_253;
    __PVT___T_253 = 0;
    // Body
    __PVT___T_206 = (0xffffU & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A) 
                                 ^ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B)) 
                                ^ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin)));
    __PVT___T_237 = (0xffffU & (((IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                          >> 0x20U)) 
                                 ^ (IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x20U))) 
                                ^ (IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                           >> 0x20U))));
    vlSelf->__PVT___T_317 = (((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                               & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B) 
                              | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                 & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin)) 
                             | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin));
    __PVT___T_222 = (((((IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                 >> 0x1fU)) ^ (IData)(
                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                       >> 0x1fU))) 
                       ^ (IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                  >> 0x1fU))) << 0x1fU) 
                     | ((0x40000000U & ((((IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                   >> 0x1eU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                     >> 0x1eU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                    >> 0x1eU))) 
                                        << 0x1eU)) 
                        | ((0x20000000U & ((((IData)(
                                                     (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                      >> 0x1dU)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                        >> 0x1dU))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                       >> 0x1dU))) 
                                           << 0x1dU)) 
                           | ((0x10000000U & ((((IData)(
                                                        (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                         >> 0x1cU)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                           >> 0x1cU))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                          >> 0x1cU))) 
                                              << 0x1cU)) 
                              | ((0x8000000U & ((((IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                           >> 0x1bU)) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                             >> 0x1bU))) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                            >> 0x1bU))) 
                                                << 0x1bU)) 
                                 | ((0x4000000U & (
                                                   (((IData)(
                                                             (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                              >> 0x1aU)) 
                                                     ^ (IData)(
                                                               (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                               >> 0x1aU))) 
                                                   << 0x1aU)) 
                                    | ((0x2000000U 
                                        & ((((IData)(
                                                     (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                      >> 0x19U)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                        >> 0x19U))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                       >> 0x19U))) 
                                           << 0x19U)) 
                                       | ((0x1000000U 
                                           & ((((IData)(
                                                        (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                         >> 0x18U)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                           >> 0x18U))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                          >> 0x18U))) 
                                              << 0x18U)) 
                                          | ((0xff0000U 
                                              & ((((IData)(
                                                           (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                            >> 0x10U)) 
                                                   ^ (IData)(
                                                             (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                              >> 0x10U))) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                             >> 0x10U))) 
                                                 << 0x10U)) 
                                             | (IData)(__PVT___T_206))))))))));
    __PVT___T_253 = (((IData)((((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                 ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B) 
                                ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin) 
                               >> 0x3fU)) << 0x1fU) 
                     | ((0x40000000U & ((((IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                   >> 0x3eU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                     >> 0x3eU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                    >> 0x3eU))) 
                                        << 0x1eU)) 
                        | ((0x20000000U & ((((IData)(
                                                     (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                      >> 0x3dU)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                        >> 0x3dU))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                       >> 0x3dU))) 
                                           << 0x1dU)) 
                           | ((0x10000000U & ((((IData)(
                                                        (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                         >> 0x3cU)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                           >> 0x3cU))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                          >> 0x3cU))) 
                                              << 0x1cU)) 
                              | ((0x8000000U & ((((IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                           >> 0x3bU)) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                             >> 0x3bU))) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                            >> 0x3bU))) 
                                                << 0x1bU)) 
                                 | ((0x4000000U & (
                                                   (((IData)(
                                                             (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                              >> 0x3aU)) 
                                                     ^ (IData)(
                                                               (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                               >> 0x3aU))) 
                                                   << 0x1aU)) 
                                    | ((0x2000000U 
                                        & ((((IData)(
                                                     (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                      >> 0x39U)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                        >> 0x39U))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                       >> 0x39U))) 
                                           << 0x19U)) 
                                       | ((0x1000000U 
                                           & ((((IData)(
                                                        (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                         >> 0x38U)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                           >> 0x38U))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                          >> 0x38U))) 
                                              << 0x18U)) 
                                          | ((0xff0000U 
                                              & ((((IData)(
                                                           (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                            >> 0x30U)) 
                                                   ^ (IData)(
                                                             (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                              >> 0x30U))) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                             >> 0x30U))) 
                                                 << 0x10U)) 
                                             | (IData)(__PVT___T_237))))))))));
    vlSelf->io_Sum = (((QData)((IData)(__PVT___T_253)) 
                       << 0x20U) | (QData)((IData)(__PVT___T_222)));
}

VL_INLINE_OPT void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4__0(VysyxSoCFull_CarrySaveAdder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4__0\n"); );
    // Init
    SData/*15:0*/ __PVT___T_206;
    __PVT___T_206 = 0;
    IData/*31:0*/ __PVT___T_222;
    __PVT___T_222 = 0;
    SData/*15:0*/ __PVT___T_237;
    __PVT___T_237 = 0;
    IData/*31:0*/ __PVT___T_253;
    __PVT___T_253 = 0;
    // Body
    __PVT___T_206 = (0xffffU & (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A) 
                                 ^ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B)) 
                                ^ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin)));
    __PVT___T_237 = (0xffffU & (((IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                          >> 0x20U)) 
                                 ^ (IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x20U))) 
                                ^ (IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                           >> 0x20U))));
    vlSelf->__PVT___T_317 = (((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                               & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B) 
                              | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                 & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin)) 
                             | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin));
    __PVT___T_222 = (((((IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                 >> 0x1fU)) ^ (IData)(
                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                       >> 0x1fU))) 
                       ^ (IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                  >> 0x1fU))) << 0x1fU) 
                     | ((0x40000000U & ((((IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                   >> 0x1eU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                     >> 0x1eU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                    >> 0x1eU))) 
                                        << 0x1eU)) 
                        | ((0x20000000U & ((((IData)(
                                                     (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                      >> 0x1dU)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                        >> 0x1dU))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                       >> 0x1dU))) 
                                           << 0x1dU)) 
                           | ((0x10000000U & ((((IData)(
                                                        (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                         >> 0x1cU)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                           >> 0x1cU))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                          >> 0x1cU))) 
                                              << 0x1cU)) 
                              | ((0x8000000U & ((((IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                           >> 0x1bU)) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                             >> 0x1bU))) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                            >> 0x1bU))) 
                                                << 0x1bU)) 
                                 | ((0x4000000U & (
                                                   (((IData)(
                                                             (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                              >> 0x1aU)) 
                                                     ^ (IData)(
                                                               (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                               >> 0x1aU))) 
                                                   << 0x1aU)) 
                                    | ((0x2000000U 
                                        & ((((IData)(
                                                     (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                      >> 0x19U)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                        >> 0x19U))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                       >> 0x19U))) 
                                           << 0x19U)) 
                                       | ((0x1000000U 
                                           & ((((IData)(
                                                        (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                         >> 0x18U)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                           >> 0x18U))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                          >> 0x18U))) 
                                              << 0x18U)) 
                                          | ((0xff0000U 
                                              & ((((IData)(
                                                           (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                            >> 0x10U)) 
                                                   ^ (IData)(
                                                             (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                              >> 0x10U))) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                             >> 0x10U))) 
                                                 << 0x10U)) 
                                             | (IData)(__PVT___T_206))))))))));
    __PVT___T_253 = (((IData)((((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                 ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B) 
                                ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin) 
                               >> 0x3fU)) << 0x1fU) 
                     | ((0x40000000U & ((((IData)((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                   >> 0x3eU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                     >> 0x3eU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                    >> 0x3eU))) 
                                        << 0x1eU)) 
                        | ((0x20000000U & ((((IData)(
                                                     (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                      >> 0x3dU)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                        >> 0x3dU))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                       >> 0x3dU))) 
                                           << 0x1dU)) 
                           | ((0x10000000U & ((((IData)(
                                                        (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                         >> 0x3cU)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                           >> 0x3cU))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                          >> 0x3cU))) 
                                              << 0x1cU)) 
                              | ((0x8000000U & ((((IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                           >> 0x3bU)) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                             >> 0x3bU))) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                            >> 0x3bU))) 
                                                << 0x1bU)) 
                                 | ((0x4000000U & (
                                                   (((IData)(
                                                             (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                              >> 0x3aU)) 
                                                     ^ (IData)(
                                                               (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                               >> 0x3aU))) 
                                                   << 0x1aU)) 
                                    | ((0x2000000U 
                                        & ((((IData)(
                                                     (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                      >> 0x39U)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                        >> 0x39U))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                       >> 0x39U))) 
                                           << 0x19U)) 
                                       | ((0x1000000U 
                                           & ((((IData)(
                                                        (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                         >> 0x38U)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                           >> 0x38U))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                          >> 0x38U))) 
                                              << 0x18U)) 
                                          | ((0xff0000U 
                                              & ((((IData)(
                                                           (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                            >> 0x30U)) 
                                                   ^ (IData)(
                                                             (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                              >> 0x30U))) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                             >> 0x30U))) 
                                                 << 0x10U)) 
                                             | (IData)(__PVT___T_237))))))))));
    vlSelf->io_Sum = (((QData)((IData)(__PVT___T_253)) 
                       << 0x20U) | (QData)((IData)(__PVT___T_222)));
}

VL_INLINE_OPT void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5__0(VysyxSoCFull_CarrySaveAdder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5__0\n"); );
    // Body
    vlSelf->io_Sum = (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                      ^ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B);
    vlSelf->__PVT___T_317 = (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                             & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B);
}

VL_INLINE_OPT void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6__0(VysyxSoCFull_CarrySaveAdder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6__0\n"); );
    // Init
    SData/*15:0*/ __PVT___T_206;
    __PVT___T_206 = 0;
    IData/*31:0*/ __PVT___T_222;
    __PVT___T_222 = 0;
    SData/*15:0*/ __PVT___T_237;
    __PVT___T_237 = 0;
    IData/*31:0*/ __PVT___T_253;
    __PVT___T_253 = 0;
    // Body
    __PVT___T_206 = (0xffffU & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum) 
                                 ^ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum)) 
                                ^ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum)));
    __PVT___T_237 = (0xffffU & (((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                          >> 0x20U)) 
                                 ^ (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x20U))) 
                                ^ (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                           >> 0x20U))));
    vlSelf->__PVT___T_317 = (((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                               & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum) 
                              | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                 & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum)) 
                             | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum));
    __PVT___T_222 = (((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                 >> 0x1fU)) ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                       >> 0x1fU))) 
                       ^ (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                  >> 0x1fU))) << 0x1fU) 
                     | ((0x40000000U & ((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                   >> 0x1eU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                     >> 0x1eU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                    >> 0x1eU))) 
                                        << 0x1eU)) 
                        | ((0x20000000U & ((((IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                      >> 0x1dU)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                        >> 0x1dU))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                       >> 0x1dU))) 
                                           << 0x1dU)) 
                           | ((0x10000000U & ((((IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                         >> 0x1cU)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                           >> 0x1cU))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                          >> 0x1cU))) 
                                              << 0x1cU)) 
                              | ((0x8000000U & ((((IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                           >> 0x1bU)) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                             >> 0x1bU))) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                            >> 0x1bU))) 
                                                << 0x1bU)) 
                                 | ((0x4000000U & (
                                                   (((IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                              >> 0x1aU)) 
                                                     ^ (IData)(
                                                               (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                               >> 0x1aU))) 
                                                   << 0x1aU)) 
                                    | ((0x2000000U 
                                        & ((((IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                      >> 0x19U)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                        >> 0x19U))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                       >> 0x19U))) 
                                           << 0x19U)) 
                                       | ((0x1000000U 
                                           & ((((IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                         >> 0x18U)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                           >> 0x18U))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                          >> 0x18U))) 
                                              << 0x18U)) 
                                          | ((0xff0000U 
                                              & ((((IData)(
                                                           (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                            >> 0x10U)) 
                                                   ^ (IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                              >> 0x10U))) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                             >> 0x10U))) 
                                                 << 0x10U)) 
                                             | (IData)(__PVT___T_206))))))))));
    __PVT___T_253 = (((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                 >> 0x3fU)) ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                       >> 0x3fU))) 
                       ^ (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                  >> 0x3fU))) << 0x1fU) 
                     | ((0x40000000U & ((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                   >> 0x3eU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                     >> 0x3eU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                    >> 0x3eU))) 
                                        << 0x1eU)) 
                        | ((0x20000000U & ((((IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                      >> 0x3dU)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                        >> 0x3dU))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                       >> 0x3dU))) 
                                           << 0x1dU)) 
                           | ((0x10000000U & ((((IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                         >> 0x3cU)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                           >> 0x3cU))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                          >> 0x3cU))) 
                                              << 0x1cU)) 
                              | ((0x8000000U & ((((IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                           >> 0x3bU)) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                             >> 0x3bU))) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                            >> 0x3bU))) 
                                                << 0x1bU)) 
                                 | ((0x4000000U & (
                                                   (((IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                              >> 0x3aU)) 
                                                     ^ (IData)(
                                                               (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                               >> 0x3aU))) 
                                                   << 0x1aU)) 
                                    | ((0x2000000U 
                                        & ((((IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                      >> 0x39U)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                        >> 0x39U))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                       >> 0x39U))) 
                                           << 0x19U)) 
                                       | ((0x1000000U 
                                           & ((((IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                         >> 0x38U)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                           >> 0x38U))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                          >> 0x38U))) 
                                              << 0x18U)) 
                                          | ((0xff0000U 
                                              & ((((IData)(
                                                           (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                            >> 0x30U)) 
                                                   ^ (IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                              >> 0x30U))) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                             >> 0x30U))) 
                                                 << 0x10U)) 
                                             | (IData)(__PVT___T_237))))))))));
    vlSelf->io_Sum = (((QData)((IData)(__PVT___T_253)) 
                       << 0x20U) | (QData)((IData)(__PVT___T_222)));
}

VL_INLINE_OPT void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7__0(VysyxSoCFull_CarrySaveAdder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7__0\n"); );
    // Init
    SData/*15:0*/ __PVT___T_206;
    __PVT___T_206 = 0;
    IData/*31:0*/ __PVT___T_222;
    __PVT___T_222 = 0;
    SData/*15:0*/ __PVT___T_237;
    __PVT___T_237 = 0;
    IData/*31:0*/ __PVT___T_253;
    __PVT___T_253 = 0;
    // Body
    __PVT___T_206 = (0xffffU & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.io_Sum) 
                                 ^ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.io_Sum)) 
                                ^ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.io_Sum)));
    __PVT___T_237 = (0xffffU & (((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.io_Sum 
                                          >> 0x20U)) 
                                 ^ (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.io_Sum 
                                            >> 0x20U))) 
                                ^ (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.io_Sum 
                                           >> 0x20U))));
    vlSelf->__PVT___T_317 = (((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.io_Sum 
                               & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.io_Sum) 
                              | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.io_Sum 
                                 & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.io_Sum)) 
                             | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.io_Sum 
                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.io_Sum));
    __PVT___T_222 = (((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.io_Sum 
                                 >> 0x1fU)) ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.io_Sum 
                                                       >> 0x1fU))) 
                       ^ (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.io_Sum 
                                  >> 0x1fU))) << 0x1fU) 
                     | ((0x40000000U & ((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.io_Sum 
                                                   >> 0x1eU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.io_Sum 
                                                     >> 0x1eU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.io_Sum 
                                                    >> 0x1eU))) 
                                        << 0x1eU)) 
                        | ((0x20000000U & ((((IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.io_Sum 
                                                      >> 0x1dU)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.io_Sum 
                                                        >> 0x1dU))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.io_Sum 
                                                       >> 0x1dU))) 
                                           << 0x1dU)) 
                           | ((0x10000000U & ((((IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.io_Sum 
                                                         >> 0x1cU)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.io_Sum 
                                                           >> 0x1cU))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.io_Sum 
                                                          >> 0x1cU))) 
                                              << 0x1cU)) 
                              | ((0x8000000U & ((((IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.io_Sum 
                                                           >> 0x1bU)) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.io_Sum 
                                                             >> 0x1bU))) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.io_Sum 
                                                            >> 0x1bU))) 
                                                << 0x1bU)) 
                                 | ((0x4000000U & (
                                                   (((IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.io_Sum 
                                                              >> 0x1aU)) 
                                                     ^ (IData)(
                                                               (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.io_Sum 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.io_Sum 
                                                               >> 0x1aU))) 
                                                   << 0x1aU)) 
                                    | ((0x2000000U 
                                        & ((((IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.io_Sum 
                                                      >> 0x19U)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.io_Sum 
                                                        >> 0x19U))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.io_Sum 
                                                       >> 0x19U))) 
                                           << 0x19U)) 
                                       | ((0x1000000U 
                                           & ((((IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.io_Sum 
                                                         >> 0x18U)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.io_Sum 
                                                           >> 0x18U))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.io_Sum 
                                                          >> 0x18U))) 
                                              << 0x18U)) 
                                          | ((0xff0000U 
                                              & ((((IData)(
                                                           (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.io_Sum 
                                                            >> 0x10U)) 
                                                   ^ (IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.io_Sum 
                                                              >> 0x10U))) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.io_Sum 
                                                             >> 0x10U))) 
                                                 << 0x10U)) 
                                             | (IData)(__PVT___T_206))))))))));
    __PVT___T_253 = (((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.io_Sum 
                                 >> 0x3fU)) ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.io_Sum 
                                                       >> 0x3fU))) 
                       ^ (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.io_Sum 
                                  >> 0x3fU))) << 0x1fU) 
                     | ((0x40000000U & ((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.io_Sum 
                                                   >> 0x3eU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.io_Sum 
                                                     >> 0x3eU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.io_Sum 
                                                    >> 0x3eU))) 
                                        << 0x1eU)) 
                        | ((0x20000000U & ((((IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.io_Sum 
                                                      >> 0x3dU)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.io_Sum 
                                                        >> 0x3dU))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.io_Sum 
                                                       >> 0x3dU))) 
                                           << 0x1dU)) 
                           | ((0x10000000U & ((((IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.io_Sum 
                                                         >> 0x3cU)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.io_Sum 
                                                           >> 0x3cU))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.io_Sum 
                                                          >> 0x3cU))) 
                                              << 0x1cU)) 
                              | ((0x8000000U & ((((IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.io_Sum 
                                                           >> 0x3bU)) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.io_Sum 
                                                             >> 0x3bU))) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.io_Sum 
                                                            >> 0x3bU))) 
                                                << 0x1bU)) 
                                 | ((0x4000000U & (
                                                   (((IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.io_Sum 
                                                              >> 0x3aU)) 
                                                     ^ (IData)(
                                                               (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.io_Sum 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.io_Sum 
                                                               >> 0x3aU))) 
                                                   << 0x1aU)) 
                                    | ((0x2000000U 
                                        & ((((IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.io_Sum 
                                                      >> 0x39U)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.io_Sum 
                                                        >> 0x39U))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.io_Sum 
                                                       >> 0x39U))) 
                                           << 0x19U)) 
                                       | ((0x1000000U 
                                           & ((((IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.io_Sum 
                                                         >> 0x38U)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.io_Sum 
                                                           >> 0x38U))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.io_Sum 
                                                          >> 0x38U))) 
                                              << 0x18U)) 
                                          | ((0xff0000U 
                                              & ((((IData)(
                                                           (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.io_Sum 
                                                            >> 0x30U)) 
                                                   ^ (IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.io_Sum 
                                                              >> 0x30U))) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.io_Sum 
                                                             >> 0x30U))) 
                                                 << 0x10U)) 
                                             | (IData)(__PVT___T_237))))))))));
    vlSelf->io_Sum = (((QData)((IData)(__PVT___T_253)) 
                       << 0x20U) | (QData)((IData)(__PVT___T_222)));
}

VL_INLINE_OPT void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8__0(VysyxSoCFull_CarrySaveAdder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8__0\n"); );
    // Init
    SData/*15:0*/ __PVT___T_206;
    __PVT___T_206 = 0;
    IData/*31:0*/ __PVT___T_222;
    __PVT___T_222 = 0;
    SData/*15:0*/ __PVT___T_237;
    __PVT___T_237 = 0;
    IData/*31:0*/ __PVT___T_253;
    __PVT___T_253 = 0;
    IData/*31:0*/ __PVT___T_285;
    __PVT___T_285 = 0;
    IData/*31:0*/ __PVT___T_316;
    __PVT___T_316 = 0;
    // Body
    __PVT___T_206 = (0xffffU & (((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                          << 1U)) ^ (IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                                             << 1U))) 
                                ^ (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                           << 1U))));
    __PVT___T_237 = (0xffffU & (((IData)((0xffffffffULL 
                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                             >> 0x1fU))) 
                                 ^ (IData)((0xffffffffULL 
                                            & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                               >> 0x1fU)))) 
                                ^ (IData)((0xffffffffULL 
                                           & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                              >> 0x1fU)))));
    __PVT___T_285 = ((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                << 1U)) & (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                                   << 1U))) 
                      | ((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                  << 1U)) & (IData)(
                                                    (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                                     << 1U)))) 
                     | ((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                 << 1U)) & (IData)(
                                                   (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                                    << 1U))));
    __PVT___T_316 = ((((IData)((0xffffffffULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                                 >> 0x1fU))) 
                       & (IData)((0xffffffffULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                                   >> 0x1fU)))) 
                      | ((IData)((0xffffffffULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                                   >> 0x1fU))) 
                         & (IData)((0xffffffffULL & 
                                    (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                     >> 0x1fU))))) 
                     | ((IData)((0xffffffffULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                                  >> 0x1fU))) 
                        & (IData)((0xffffffffULL & 
                                   (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                    >> 0x1fU)))));
    __PVT___T_222 = (((((IData)((0x1ffffffffULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                                   >> 0x1eU))) 
                        ^ (IData)((0x1ffffffffULL & 
                                   (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                    >> 0x1eU)))) ^ (IData)(
                                                           (0x1ffffffffULL 
                                                            & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                                               >> 0x1eU)))) 
                      << 0x1fU) | ((0x40000000U & (
                                                   (((IData)(
                                                             (0x3ffffffffULL 
                                                              & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                                                 >> 0x1dU))) 
                                                     ^ (IData)(
                                                               (0x3ffffffffULL 
                                                                & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                                                   >> 0x1dU)))) 
                                                    ^ (IData)(
                                                              (0x3ffffffffULL 
                                                               & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                                                  >> 0x1dU)))) 
                                                   << 0x1eU)) 
                                   | ((0x20000000U 
                                       & ((((IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                                        >> 0x1cU))) 
                                            ^ (IData)(
                                                      (0x7ffffffffULL 
                                                       & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                                          >> 0x1cU)))) 
                                           ^ (IData)(
                                                     (0x7ffffffffULL 
                                                      & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                                         >> 0x1cU)))) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((((IData)(
                                                       (0xfffffffffULL 
                                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                                           >> 0x1bU))) 
                                               ^ (IData)(
                                                         (0xfffffffffULL 
                                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                                             >> 0x1bU)))) 
                                              ^ (IData)(
                                                        (0xfffffffffULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                                            >> 0x1bU)))) 
                                             << 0x1cU)) 
                                         | ((0x8000000U 
                                             & ((((IData)(
                                                          (0x1fffffffffULL 
                                                           & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                                              >> 0x1aU))) 
                                                  ^ (IData)(
                                                            (0x1fffffffffULL 
                                                             & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                                                >> 0x1aU)))) 
                                                 ^ (IData)(
                                                           (0x1fffffffffULL 
                                                            & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                                               >> 0x1aU)))) 
                                                << 0x1bU)) 
                                            | ((0x4000000U 
                                                & ((((IData)(
                                                             (0x3fffffffffULL 
                                                              & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                                                 >> 0x19U))) 
                                                     ^ (IData)(
                                                               (0x3fffffffffULL 
                                                                & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                                                   >> 0x19U)))) 
                                                    ^ (IData)(
                                                              (0x3fffffffffULL 
                                                               & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                                                  >> 0x19U)))) 
                                                   << 0x1aU)) 
                                               | ((0x2000000U 
                                                   & ((((IData)(
                                                                (0x7fffffffffULL 
                                                                 & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                                                    >> 0x18U))) 
                                                        ^ (IData)(
                                                                  (0x7fffffffffULL 
                                                                   & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                                                      >> 0x18U)))) 
                                                       ^ (IData)(
                                                                 (0x7fffffffffULL 
                                                                  & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                                                     >> 0x18U)))) 
                                                      << 0x19U)) 
                                                  | ((0x1000000U 
                                                      & ((((IData)(
                                                                   (0xffffffffffULL 
                                                                    & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                                                       >> 0x17U))) 
                                                           ^ (IData)(
                                                                     (0xffffffffffULL 
                                                                      & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                                                         >> 0x17U)))) 
                                                          ^ (IData)(
                                                                    (0xffffffffffULL 
                                                                     & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                                                        >> 0x17U)))) 
                                                         << 0x18U)) 
                                                     | ((0xff0000U 
                                                         & ((((IData)(
                                                                      (0xffffffffffffULL 
                                                                       & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                                                          >> 0xfU))) 
                                                              ^ (IData)(
                                                                        (0xffffffffffffULL 
                                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                                                            >> 0xfU)))) 
                                                             ^ (IData)(
                                                                       (0xffffffffffffULL 
                                                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                                                           >> 0xfU)))) 
                                                            << 0x10U)) 
                                                        | (IData)(__PVT___T_206))))))))));
    __PVT___T_253 = (((((IData)((1ULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                         >> 0x3eU))) 
                        ^ (IData)((1ULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                           >> 0x3eU)))) 
                       ^ (IData)((1ULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                          >> 0x3eU)))) 
                      << 0x1fU) | ((0x40000000U & (
                                                   (((IData)(
                                                             (3ULL 
                                                              & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                                                 >> 0x3dU))) 
                                                     ^ (IData)(
                                                               (3ULL 
                                                                & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                                                   >> 0x3dU)))) 
                                                    ^ (IData)(
                                                              (3ULL 
                                                               & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                                                  >> 0x3dU)))) 
                                                   << 0x1eU)) 
                                   | ((0x20000000U 
                                       & ((((IData)(
                                                    (7ULL 
                                                     & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                                        >> 0x3cU))) 
                                            ^ (IData)(
                                                      (7ULL 
                                                       & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                                          >> 0x3cU)))) 
                                           ^ (IData)(
                                                     (7ULL 
                                                      & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                                         >> 0x3cU)))) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((((IData)(
                                                       (0xfULL 
                                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                                           >> 0x3bU))) 
                                               ^ (IData)(
                                                         (0xfULL 
                                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                                             >> 0x3bU)))) 
                                              ^ (IData)(
                                                        (0xfULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                                            >> 0x3bU)))) 
                                             << 0x1cU)) 
                                         | ((0x8000000U 
                                             & ((((IData)(
                                                          (0x1fULL 
                                                           & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                                              >> 0x3aU))) 
                                                  ^ (IData)(
                                                            (0x1fULL 
                                                             & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                                                >> 0x3aU)))) 
                                                 ^ (IData)(
                                                           (0x1fULL 
                                                            & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                                               >> 0x3aU)))) 
                                                << 0x1bU)) 
                                            | ((0x4000000U 
                                                & ((((IData)(
                                                             (0x3fULL 
                                                              & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                                                 >> 0x39U))) 
                                                     ^ (IData)(
                                                               (0x3fULL 
                                                                & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                                                   >> 0x39U)))) 
                                                    ^ (IData)(
                                                              (0x3fULL 
                                                               & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                                                  >> 0x39U)))) 
                                                   << 0x1aU)) 
                                               | ((0x2000000U 
                                                   & ((((IData)(
                                                                (0x7fULL 
                                                                 & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                                                    >> 0x38U))) 
                                                        ^ (IData)(
                                                                  (0x7fULL 
                                                                   & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                                                      >> 0x38U)))) 
                                                       ^ (IData)(
                                                                 (0x7fULL 
                                                                  & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                                                     >> 0x38U)))) 
                                                      << 0x19U)) 
                                                  | ((0x1000000U 
                                                      & ((((IData)(
                                                                   (0xffULL 
                                                                    & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                                                       >> 0x37U))) 
                                                           ^ (IData)(
                                                                     (0xffULL 
                                                                      & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                                                         >> 0x37U)))) 
                                                          ^ (IData)(
                                                                    (0xffULL 
                                                                     & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                                                        >> 0x37U)))) 
                                                         << 0x18U)) 
                                                     | ((0xff0000U 
                                                         & ((((IData)(
                                                                      (0xffffULL 
                                                                       & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                                                          >> 0x2fU))) 
                                                              ^ (IData)(
                                                                        (0xffffULL 
                                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                                                            >> 0x2fU)))) 
                                                             ^ (IData)(
                                                                       (0xffffULL 
                                                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                                                           >> 0x2fU)))) 
                                                            << 0x10U)) 
                                                        | (IData)(__PVT___T_237))))))))));
    vlSelf->__PVT___T_317 = (((QData)((IData)(__PVT___T_316)) 
                              << 0x20U) | (QData)((IData)(__PVT___T_285)));
    vlSelf->io_Sum = (((QData)((IData)(__PVT___T_253)) 
                       << 0x20U) | (QData)((IData)(__PVT___T_222)));
}

VL_INLINE_OPT void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9__0(VysyxSoCFull_CarrySaveAdder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9__0\n"); );
    // Init
    SData/*15:0*/ __PVT___T_206;
    __PVT___T_206 = 0;
    IData/*31:0*/ __PVT___T_222;
    __PVT___T_222 = 0;
    SData/*15:0*/ __PVT___T_237;
    __PVT___T_237 = 0;
    IData/*31:0*/ __PVT___T_253;
    __PVT___T_253 = 0;
    IData/*31:0*/ __PVT___T_285;
    __PVT___T_285 = 0;
    IData/*31:0*/ __PVT___T_316;
    __PVT___T_316 = 0;
    // Body
    __PVT___T_285 = ((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                << 1U)) & (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                                   << 1U))) 
                      | ((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                  << 1U)) & (IData)(
                                                    (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                                     << 1U)))) 
                     | ((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                 << 1U)) & (IData)(
                                                   (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                                    << 1U))));
    __PVT___T_316 = ((((IData)((0xffffffffULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                                 >> 0x1fU))) 
                       & (IData)((0xffffffffULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                                   >> 0x1fU)))) 
                      | ((IData)((0xffffffffULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                                   >> 0x1fU))) 
                         & (IData)((0xffffffffULL & 
                                    (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                     >> 0x1fU))))) 
                     | ((IData)((0xffffffffULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                                  >> 0x1fU))) 
                        & (IData)((0xffffffffULL & 
                                   (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                    >> 0x1fU)))));
    __PVT___T_206 = (0xffffU & (((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                          << 1U)) ^ (IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                                             << 1U))) 
                                ^ (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                           << 1U))));
    __PVT___T_237 = (0xffffU & (((IData)((0xffffffffULL 
                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                             >> 0x1fU))) 
                                 ^ (IData)((0xffffffffULL 
                                            & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                               >> 0x1fU)))) 
                                ^ (IData)((0xffffffffULL 
                                           & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                              >> 0x1fU)))));
    vlSelf->__PVT___T_317 = (((QData)((IData)(__PVT___T_316)) 
                              << 0x20U) | (QData)((IData)(__PVT___T_285)));
    __PVT___T_222 = (((((IData)((0x1ffffffffULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                                   >> 0x1eU))) 
                        ^ (IData)((0x1ffffffffULL & 
                                   (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                    >> 0x1eU)))) ^ (IData)(
                                                           (0x1ffffffffULL 
                                                            & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                                               >> 0x1eU)))) 
                      << 0x1fU) | ((0x40000000U & (
                                                   (((IData)(
                                                             (0x3ffffffffULL 
                                                              & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                                                 >> 0x1dU))) 
                                                     ^ (IData)(
                                                               (0x3ffffffffULL 
                                                                & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                                                   >> 0x1dU)))) 
                                                    ^ (IData)(
                                                              (0x3ffffffffULL 
                                                               & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                                                  >> 0x1dU)))) 
                                                   << 0x1eU)) 
                                   | ((0x20000000U 
                                       & ((((IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                                        >> 0x1cU))) 
                                            ^ (IData)(
                                                      (0x7ffffffffULL 
                                                       & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                                          >> 0x1cU)))) 
                                           ^ (IData)(
                                                     (0x7ffffffffULL 
                                                      & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                                         >> 0x1cU)))) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((((IData)(
                                                       (0xfffffffffULL 
                                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                                           >> 0x1bU))) 
                                               ^ (IData)(
                                                         (0xfffffffffULL 
                                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                                             >> 0x1bU)))) 
                                              ^ (IData)(
                                                        (0xfffffffffULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                                            >> 0x1bU)))) 
                                             << 0x1cU)) 
                                         | ((0x8000000U 
                                             & ((((IData)(
                                                          (0x1fffffffffULL 
                                                           & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                                              >> 0x1aU))) 
                                                  ^ (IData)(
                                                            (0x1fffffffffULL 
                                                             & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                                                >> 0x1aU)))) 
                                                 ^ (IData)(
                                                           (0x1fffffffffULL 
                                                            & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                                               >> 0x1aU)))) 
                                                << 0x1bU)) 
                                            | ((0x4000000U 
                                                & ((((IData)(
                                                             (0x3fffffffffULL 
                                                              & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                                                 >> 0x19U))) 
                                                     ^ (IData)(
                                                               (0x3fffffffffULL 
                                                                & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                                                   >> 0x19U)))) 
                                                    ^ (IData)(
                                                              (0x3fffffffffULL 
                                                               & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                                                  >> 0x19U)))) 
                                                   << 0x1aU)) 
                                               | ((0x2000000U 
                                                   & ((((IData)(
                                                                (0x7fffffffffULL 
                                                                 & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                                                    >> 0x18U))) 
                                                        ^ (IData)(
                                                                  (0x7fffffffffULL 
                                                                   & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                                                      >> 0x18U)))) 
                                                       ^ (IData)(
                                                                 (0x7fffffffffULL 
                                                                  & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                                                     >> 0x18U)))) 
                                                      << 0x19U)) 
                                                  | ((0x1000000U 
                                                      & ((((IData)(
                                                                   (0xffffffffffULL 
                                                                    & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                                                       >> 0x17U))) 
                                                           ^ (IData)(
                                                                     (0xffffffffffULL 
                                                                      & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                                                         >> 0x17U)))) 
                                                          ^ (IData)(
                                                                    (0xffffffffffULL 
                                                                     & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                                                        >> 0x17U)))) 
                                                         << 0x18U)) 
                                                     | ((0xff0000U 
                                                         & ((((IData)(
                                                                      (0xffffffffffffULL 
                                                                       & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                                                          >> 0xfU))) 
                                                              ^ (IData)(
                                                                        (0xffffffffffffULL 
                                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                                                            >> 0xfU)))) 
                                                             ^ (IData)(
                                                                       (0xffffffffffffULL 
                                                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                                                           >> 0xfU)))) 
                                                            << 0x10U)) 
                                                        | (IData)(__PVT___T_206))))))))));
    __PVT___T_253 = (((((IData)((1ULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                         >> 0x3eU))) 
                        ^ (IData)((1ULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                           >> 0x3eU)))) 
                       ^ (IData)((1ULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                          >> 0x3eU)))) 
                      << 0x1fU) | ((0x40000000U & (
                                                   (((IData)(
                                                             (3ULL 
                                                              & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                                                 >> 0x3dU))) 
                                                     ^ (IData)(
                                                               (3ULL 
                                                                & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                                                   >> 0x3dU)))) 
                                                    ^ (IData)(
                                                              (3ULL 
                                                               & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                                                  >> 0x3dU)))) 
                                                   << 0x1eU)) 
                                   | ((0x20000000U 
                                       & ((((IData)(
                                                    (7ULL 
                                                     & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                                        >> 0x3cU))) 
                                            ^ (IData)(
                                                      (7ULL 
                                                       & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                                          >> 0x3cU)))) 
                                           ^ (IData)(
                                                     (7ULL 
                                                      & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                                         >> 0x3cU)))) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((((IData)(
                                                       (0xfULL 
                                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                                           >> 0x3bU))) 
                                               ^ (IData)(
                                                         (0xfULL 
                                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                                             >> 0x3bU)))) 
                                              ^ (IData)(
                                                        (0xfULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                                            >> 0x3bU)))) 
                                             << 0x1cU)) 
                                         | ((0x8000000U 
                                             & ((((IData)(
                                                          (0x1fULL 
                                                           & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                                              >> 0x3aU))) 
                                                  ^ (IData)(
                                                            (0x1fULL 
                                                             & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                                                >> 0x3aU)))) 
                                                 ^ (IData)(
                                                           (0x1fULL 
                                                            & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                                               >> 0x3aU)))) 
                                                << 0x1bU)) 
                                            | ((0x4000000U 
                                                & ((((IData)(
                                                             (0x3fULL 
                                                              & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                                                 >> 0x39U))) 
                                                     ^ (IData)(
                                                               (0x3fULL 
                                                                & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                                                   >> 0x39U)))) 
                                                    ^ (IData)(
                                                              (0x3fULL 
                                                               & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                                                  >> 0x39U)))) 
                                                   << 0x1aU)) 
                                               | ((0x2000000U 
                                                   & ((((IData)(
                                                                (0x7fULL 
                                                                 & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                                                    >> 0x38U))) 
                                                        ^ (IData)(
                                                                  (0x7fULL 
                                                                   & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                                                      >> 0x38U)))) 
                                                       ^ (IData)(
                                                                 (0x7fULL 
                                                                  & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                                                     >> 0x38U)))) 
                                                      << 0x19U)) 
                                                  | ((0x1000000U 
                                                      & ((((IData)(
                                                                   (0xffULL 
                                                                    & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                                                       >> 0x37U))) 
                                                           ^ (IData)(
                                                                     (0xffULL 
                                                                      & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                                                         >> 0x37U)))) 
                                                          ^ (IData)(
                                                                    (0xffULL 
                                                                     & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                                                        >> 0x37U)))) 
                                                         << 0x18U)) 
                                                     | ((0xff0000U 
                                                         & ((((IData)(
                                                                      (0xffffULL 
                                                                       & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                                                          >> 0x2fU))) 
                                                              ^ (IData)(
                                                                        (0xffffULL 
                                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                                                            >> 0x2fU)))) 
                                                             ^ (IData)(
                                                                       (0xffffULL 
                                                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                                                           >> 0x2fU)))) 
                                                            << 0x10U)) 
                                                        | (IData)(__PVT___T_237))))))))));
    vlSelf->io_Sum = (((QData)((IData)(__PVT___T_253)) 
                       << 0x20U) | (QData)((IData)(__PVT___T_222)));
}

VL_INLINE_OPT void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10__0(VysyxSoCFull_CarrySaveAdder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10__0\n"); );
    // Init
    SData/*15:0*/ __PVT___T_206;
    __PVT___T_206 = 0;
    IData/*31:0*/ __PVT___T_222;
    __PVT___T_222 = 0;
    SData/*15:0*/ __PVT___T_237;
    __PVT___T_237 = 0;
    IData/*31:0*/ __PVT___T_253;
    __PVT___T_253 = 0;
    // Body
    __PVT___T_206 = (0xffffU & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.io_Sum) 
                                 ^ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.io_Sum)) 
                                ^ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.io_Sum)));
    __PVT___T_237 = (0xffffU & (((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.io_Sum 
                                          >> 0x20U)) 
                                 ^ (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.io_Sum 
                                            >> 0x20U))) 
                                ^ (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.io_Sum 
                                           >> 0x20U))));
    vlSelf->__PVT___T_317 = (((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.io_Sum 
                               & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.io_Sum) 
                              | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.io_Sum 
                                 & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.io_Sum)) 
                             | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.io_Sum 
                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.io_Sum));
    __PVT___T_222 = (((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.io_Sum 
                                 >> 0x1fU)) ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.io_Sum 
                                                       >> 0x1fU))) 
                       ^ (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.io_Sum 
                                  >> 0x1fU))) << 0x1fU) 
                     | ((0x40000000U & ((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.io_Sum 
                                                   >> 0x1eU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.io_Sum 
                                                     >> 0x1eU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.io_Sum 
                                                    >> 0x1eU))) 
                                        << 0x1eU)) 
                        | ((0x20000000U & ((((IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.io_Sum 
                                                      >> 0x1dU)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.io_Sum 
                                                        >> 0x1dU))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.io_Sum 
                                                       >> 0x1dU))) 
                                           << 0x1dU)) 
                           | ((0x10000000U & ((((IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.io_Sum 
                                                         >> 0x1cU)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.io_Sum 
                                                           >> 0x1cU))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.io_Sum 
                                                          >> 0x1cU))) 
                                              << 0x1cU)) 
                              | ((0x8000000U & ((((IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.io_Sum 
                                                           >> 0x1bU)) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.io_Sum 
                                                             >> 0x1bU))) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.io_Sum 
                                                            >> 0x1bU))) 
                                                << 0x1bU)) 
                                 | ((0x4000000U & (
                                                   (((IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.io_Sum 
                                                              >> 0x1aU)) 
                                                     ^ (IData)(
                                                               (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.io_Sum 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.io_Sum 
                                                               >> 0x1aU))) 
                                                   << 0x1aU)) 
                                    | ((0x2000000U 
                                        & ((((IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.io_Sum 
                                                      >> 0x19U)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.io_Sum 
                                                        >> 0x19U))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.io_Sum 
                                                       >> 0x19U))) 
                                           << 0x19U)) 
                                       | ((0x1000000U 
                                           & ((((IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.io_Sum 
                                                         >> 0x18U)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.io_Sum 
                                                           >> 0x18U))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.io_Sum 
                                                          >> 0x18U))) 
                                              << 0x18U)) 
                                          | ((0xff0000U 
                                              & ((((IData)(
                                                           (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.io_Sum 
                                                            >> 0x10U)) 
                                                   ^ (IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.io_Sum 
                                                              >> 0x10U))) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.io_Sum 
                                                             >> 0x10U))) 
                                                 << 0x10U)) 
                                             | (IData)(__PVT___T_206))))))))));
    __PVT___T_253 = (((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.io_Sum 
                                 >> 0x3fU)) ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.io_Sum 
                                                       >> 0x3fU))) 
                       ^ (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.io_Sum 
                                  >> 0x3fU))) << 0x1fU) 
                     | ((0x40000000U & ((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.io_Sum 
                                                   >> 0x3eU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.io_Sum 
                                                     >> 0x3eU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.io_Sum 
                                                    >> 0x3eU))) 
                                        << 0x1eU)) 
                        | ((0x20000000U & ((((IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.io_Sum 
                                                      >> 0x3dU)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.io_Sum 
                                                        >> 0x3dU))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.io_Sum 
                                                       >> 0x3dU))) 
                                           << 0x1dU)) 
                           | ((0x10000000U & ((((IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.io_Sum 
                                                         >> 0x3cU)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.io_Sum 
                                                           >> 0x3cU))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.io_Sum 
                                                          >> 0x3cU))) 
                                              << 0x1cU)) 
                              | ((0x8000000U & ((((IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.io_Sum 
                                                           >> 0x3bU)) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.io_Sum 
                                                             >> 0x3bU))) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.io_Sum 
                                                            >> 0x3bU))) 
                                                << 0x1bU)) 
                                 | ((0x4000000U & (
                                                   (((IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.io_Sum 
                                                              >> 0x3aU)) 
                                                     ^ (IData)(
                                                               (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.io_Sum 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.io_Sum 
                                                               >> 0x3aU))) 
                                                   << 0x1aU)) 
                                    | ((0x2000000U 
                                        & ((((IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.io_Sum 
                                                      >> 0x39U)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.io_Sum 
                                                        >> 0x39U))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.io_Sum 
                                                       >> 0x39U))) 
                                           << 0x19U)) 
                                       | ((0x1000000U 
                                           & ((((IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.io_Sum 
                                                         >> 0x38U)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.io_Sum 
                                                           >> 0x38U))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.io_Sum 
                                                          >> 0x38U))) 
                                              << 0x18U)) 
                                          | ((0xff0000U 
                                              & ((((IData)(
                                                           (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.io_Sum 
                                                            >> 0x30U)) 
                                                   ^ (IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.io_Sum 
                                                              >> 0x30U))) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.io_Sum 
                                                             >> 0x30U))) 
                                                 << 0x10U)) 
                                             | (IData)(__PVT___T_237))))))))));
    vlSelf->io_Sum = (((QData)((IData)(__PVT___T_253)) 
                       << 0x20U) | (QData)((IData)(__PVT___T_222)));
}

VL_INLINE_OPT void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11__0(VysyxSoCFull_CarrySaveAdder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11__0\n"); );
    // Init
    SData/*15:0*/ __PVT___T_206;
    __PVT___T_206 = 0;
    IData/*31:0*/ __PVT___T_222;
    __PVT___T_222 = 0;
    SData/*15:0*/ __PVT___T_237;
    __PVT___T_237 = 0;
    IData/*31:0*/ __PVT___T_253;
    __PVT___T_253 = 0;
    IData/*31:0*/ __PVT___T_285;
    __PVT___T_285 = 0;
    IData/*31:0*/ __PVT___T_316;
    __PVT___T_316 = 0;
    // Body
    __PVT___T_206 = (0xffffU & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.io_Sum) 
                                 ^ (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                            << 1U))) 
                                ^ (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                           << 1U))));
    __PVT___T_237 = (0xffffU & (((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.io_Sum 
                                          >> 0x20U)) 
                                 ^ (IData)((0xffffffffULL 
                                            & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                               >> 0x1fU)))) 
                                ^ (IData)((0xffffffffULL 
                                           & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                              >> 0x1fU)))));
    __PVT___T_285 = ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.io_Sum) 
                       & (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                  << 1U))) | ((IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                                       << 1U)) 
                                              & (IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                                         << 1U)))) 
                     | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.io_Sum) 
                        & (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                   << 1U))));
    __PVT___T_316 = ((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.io_Sum 
                                >> 0x20U)) & (IData)(
                                                     (0xffffffffULL 
                                                      & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                                         >> 0x1fU)))) 
                      | ((IData)((0xffffffffULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                                   >> 0x1fU))) 
                         & (IData)((0xffffffffULL & 
                                    (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                     >> 0x1fU))))) 
                     | ((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.io_Sum 
                                 >> 0x20U)) & (IData)(
                                                      (0xffffffffULL 
                                                       & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                                          >> 0x1fU)))));
    __PVT___T_222 = (((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.io_Sum 
                                 >> 0x1fU)) ^ (IData)(
                                                      (0x1ffffffffULL 
                                                       & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                                          >> 0x1eU)))) 
                       ^ (IData)((0x1ffffffffULL & 
                                  (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                   >> 0x1eU)))) << 0x1fU) 
                     | ((0x40000000U & ((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.io_Sum 
                                                   >> 0x1eU)) 
                                          ^ (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                                        >> 0x1dU)))) 
                                         ^ (IData)(
                                                   (0x3ffffffffULL 
                                                    & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                                       >> 0x1dU)))) 
                                        << 0x1eU)) 
                        | ((0x20000000U & ((((IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.io_Sum 
                                                      >> 0x1dU)) 
                                             ^ (IData)(
                                                       (0x7ffffffffULL 
                                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                                           >> 0x1cU)))) 
                                            ^ (IData)(
                                                      (0x7ffffffffULL 
                                                       & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                                          >> 0x1cU)))) 
                                           << 0x1dU)) 
                           | ((0x10000000U & ((((IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.io_Sum 
                                                         >> 0x1cU)) 
                                                ^ (IData)(
                                                          (0xfffffffffULL 
                                                           & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                                              >> 0x1bU)))) 
                                               ^ (IData)(
                                                         (0xfffffffffULL 
                                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                                             >> 0x1bU)))) 
                                              << 0x1cU)) 
                              | ((0x8000000U & ((((IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.io_Sum 
                                                           >> 0x1bU)) 
                                                  ^ (IData)(
                                                            (0x1fffffffffULL 
                                                             & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                                                >> 0x1aU)))) 
                                                 ^ (IData)(
                                                           (0x1fffffffffULL 
                                                            & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                                               >> 0x1aU)))) 
                                                << 0x1bU)) 
                                 | ((0x4000000U & (
                                                   (((IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.io_Sum 
                                                              >> 0x1aU)) 
                                                     ^ (IData)(
                                                               (0x3fffffffffULL 
                                                                & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                                                   >> 0x19U)))) 
                                                    ^ (IData)(
                                                              (0x3fffffffffULL 
                                                               & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                                                  >> 0x19U)))) 
                                                   << 0x1aU)) 
                                    | ((0x2000000U 
                                        & ((((IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.io_Sum 
                                                      >> 0x19U)) 
                                             ^ (IData)(
                                                       (0x7fffffffffULL 
                                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                                           >> 0x18U)))) 
                                            ^ (IData)(
                                                      (0x7fffffffffULL 
                                                       & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                                          >> 0x18U)))) 
                                           << 0x19U)) 
                                       | ((0x1000000U 
                                           & ((((IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.io_Sum 
                                                         >> 0x18U)) 
                                                ^ (IData)(
                                                          (0xffffffffffULL 
                                                           & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                                              >> 0x17U)))) 
                                               ^ (IData)(
                                                         (0xffffffffffULL 
                                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                                             >> 0x17U)))) 
                                              << 0x18U)) 
                                          | ((0xff0000U 
                                              & ((((IData)(
                                                           (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.io_Sum 
                                                            >> 0x10U)) 
                                                   ^ (IData)(
                                                             (0xffffffffffffULL 
                                                              & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                                                 >> 0xfU)))) 
                                                  ^ (IData)(
                                                            (0xffffffffffffULL 
                                                             & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | (IData)(__PVT___T_206))))))))));
    __PVT___T_253 = (((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.io_Sum 
                                 >> 0x3fU)) ^ (IData)(
                                                      (1ULL 
                                                       & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                                          >> 0x3eU)))) 
                       ^ (IData)((1ULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                          >> 0x3eU)))) 
                      << 0x1fU) | ((0x40000000U & (
                                                   (((IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.io_Sum 
                                                              >> 0x3eU)) 
                                                     ^ (IData)(
                                                               (3ULL 
                                                                & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                                                   >> 0x3dU)))) 
                                                    ^ (IData)(
                                                              (3ULL 
                                                               & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                                                  >> 0x3dU)))) 
                                                   << 0x1eU)) 
                                   | ((0x20000000U 
                                       & ((((IData)(
                                                    (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.io_Sum 
                                                     >> 0x3dU)) 
                                            ^ (IData)(
                                                      (7ULL 
                                                       & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                                          >> 0x3cU)))) 
                                           ^ (IData)(
                                                     (7ULL 
                                                      & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                                         >> 0x3cU)))) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((((IData)(
                                                       (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.io_Sum 
                                                        >> 0x3cU)) 
                                               ^ (IData)(
                                                         (0xfULL 
                                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                                             >> 0x3bU)))) 
                                              ^ (IData)(
                                                        (0xfULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                                            >> 0x3bU)))) 
                                             << 0x1cU)) 
                                         | ((0x8000000U 
                                             & ((((IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.io_Sum 
                                                           >> 0x3bU)) 
                                                  ^ (IData)(
                                                            (0x1fULL 
                                                             & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                                                >> 0x3aU)))) 
                                                 ^ (IData)(
                                                           (0x1fULL 
                                                            & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                                               >> 0x3aU)))) 
                                                << 0x1bU)) 
                                            | ((0x4000000U 
                                                & ((((IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.io_Sum 
                                                              >> 0x3aU)) 
                                                     ^ (IData)(
                                                               (0x3fULL 
                                                                & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                                                   >> 0x39U)))) 
                                                    ^ (IData)(
                                                              (0x3fULL 
                                                               & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                                                  >> 0x39U)))) 
                                                   << 0x1aU)) 
                                               | ((0x2000000U 
                                                   & ((((IData)(
                                                                (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.io_Sum 
                                                                 >> 0x39U)) 
                                                        ^ (IData)(
                                                                  (0x7fULL 
                                                                   & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                                                      >> 0x38U)))) 
                                                       ^ (IData)(
                                                                 (0x7fULL 
                                                                  & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                                                     >> 0x38U)))) 
                                                      << 0x19U)) 
                                                  | ((0x1000000U 
                                                      & ((((IData)(
                                                                   (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.io_Sum 
                                                                    >> 0x38U)) 
                                                           ^ (IData)(
                                                                     (0xffULL 
                                                                      & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                                                         >> 0x37U)))) 
                                                          ^ (IData)(
                                                                    (0xffULL 
                                                                     & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                                                        >> 0x37U)))) 
                                                         << 0x18U)) 
                                                     | ((0xff0000U 
                                                         & ((((IData)(
                                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.io_Sum 
                                                                       >> 0x30U)) 
                                                              ^ (IData)(
                                                                        (0xffffULL 
                                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                                                            >> 0x2fU)))) 
                                                             ^ (IData)(
                                                                       (0xffffULL 
                                                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                                                           >> 0x2fU)))) 
                                                            << 0x10U)) 
                                                        | (IData)(__PVT___T_237))))))))));
    vlSelf->__PVT___T_317 = (((QData)((IData)(__PVT___T_316)) 
                              << 0x20U) | (QData)((IData)(__PVT___T_285)));
    vlSelf->io_Sum = (((QData)((IData)(__PVT___T_253)) 
                       << 0x20U) | (QData)((IData)(__PVT___T_222)));
}

VL_INLINE_OPT void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12__0(VysyxSoCFull_CarrySaveAdder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12__0\n"); );
    // Init
    SData/*15:0*/ __PVT___T_206;
    __PVT___T_206 = 0;
    IData/*31:0*/ __PVT___T_222;
    __PVT___T_222 = 0;
    SData/*15:0*/ __PVT___T_237;
    __PVT___T_237 = 0;
    IData/*31:0*/ __PVT___T_253;
    __PVT___T_253 = 0;
    IData/*31:0*/ __PVT___T_285;
    __PVT___T_285 = 0;
    IData/*31:0*/ __PVT___T_316;
    __PVT___T_316 = 0;
    // Body
    __PVT___T_206 = (0xffffU & ((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                         << 1U)) ^ (IData)(
                                                           (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                                            << 1U))));
    __PVT___T_237 = (0xffffU & ((IData)((0xffffffffULL 
                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                            >> 0x1fU))) 
                                ^ (IData)((0xffffffffULL 
                                           & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                              >> 0x1fU)))));
    __PVT___T_285 = ((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                              << 1U)) & (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                                 << 1U)));
    __PVT___T_316 = ((IData)((0xffffffffULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                               >> 0x1fU))) 
                     & (IData)((0xffffffffULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                                 >> 0x1fU))));
    __PVT___T_222 = ((((IData)((0x1ffffffffULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                                  >> 0x1eU))) 
                       ^ (IData)((0x1ffffffffULL & 
                                  (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                   >> 0x1eU)))) << 0x1fU) 
                     | ((0x40000000U & (((IData)((0x3ffffffffULL 
                                                  & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                                     >> 0x1dU))) 
                                         ^ (IData)(
                                                   (0x3ffffffffULL 
                                                    & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                                       >> 0x1dU)))) 
                                        << 0x1eU)) 
                        | ((0x20000000U & (((IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                                        >> 0x1cU))) 
                                            ^ (IData)(
                                                      (0x7ffffffffULL 
                                                       & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                                          >> 0x1cU)))) 
                                           << 0x1dU)) 
                           | ((0x10000000U & (((IData)(
                                                       (0xfffffffffULL 
                                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                                           >> 0x1bU))) 
                                               ^ (IData)(
                                                         (0xfffffffffULL 
                                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                                             >> 0x1bU)))) 
                                              << 0x1cU)) 
                              | ((0x8000000U & (((IData)(
                                                         (0x1fffffffffULL 
                                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                                             >> 0x1aU))) 
                                                 ^ (IData)(
                                                           (0x1fffffffffULL 
                                                            & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                                               >> 0x1aU)))) 
                                                << 0x1bU)) 
                                 | ((0x4000000U & (
                                                   ((IData)(
                                                            (0x3fffffffffULL 
                                                             & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                                                >> 0x19U))) 
                                                    ^ (IData)(
                                                              (0x3fffffffffULL 
                                                               & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                                                  >> 0x19U)))) 
                                                   << 0x1aU)) 
                                    | ((0x2000000U 
                                        & (((IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                                        >> 0x18U))) 
                                            ^ (IData)(
                                                      (0x7fffffffffULL 
                                                       & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                                          >> 0x18U)))) 
                                           << 0x19U)) 
                                       | ((0x1000000U 
                                           & (((IData)(
                                                       (0xffffffffffULL 
                                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                                           >> 0x17U))) 
                                               ^ (IData)(
                                                         (0xffffffffffULL 
                                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                                             >> 0x17U)))) 
                                              << 0x18U)) 
                                          | ((0xff0000U 
                                              & (((IData)(
                                                          (0xffffffffffffULL 
                                                           & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                                              >> 0xfU))) 
                                                  ^ (IData)(
                                                            (0xffffffffffffULL 
                                                             & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | (IData)(__PVT___T_206))))))))));
    __PVT___T_253 = ((((IData)((1ULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                        >> 0x3eU))) 
                       ^ (IData)((1ULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                          >> 0x3eU)))) 
                      << 0x1fU) | ((0x40000000U & (
                                                   ((IData)(
                                                            (3ULL 
                                                             & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                                                >> 0x3dU))) 
                                                    ^ (IData)(
                                                              (3ULL 
                                                               & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                                                  >> 0x3dU)))) 
                                                   << 0x1eU)) 
                                   | ((0x20000000U 
                                       & (((IData)(
                                                   (7ULL 
                                                    & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                                       >> 0x3cU))) 
                                           ^ (IData)(
                                                     (7ULL 
                                                      & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                                         >> 0x3cU)))) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & (((IData)(
                                                      (0xfULL 
                                                       & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                                          >> 0x3bU))) 
                                              ^ (IData)(
                                                        (0xfULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                                            >> 0x3bU)))) 
                                             << 0x1cU)) 
                                         | ((0x8000000U 
                                             & (((IData)(
                                                         (0x1fULL 
                                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                                             >> 0x3aU))) 
                                                 ^ (IData)(
                                                           (0x1fULL 
                                                            & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                                               >> 0x3aU)))) 
                                                << 0x1bU)) 
                                            | ((0x4000000U 
                                                & (((IData)(
                                                            (0x3fULL 
                                                             & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                                                >> 0x39U))) 
                                                    ^ (IData)(
                                                              (0x3fULL 
                                                               & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                                                  >> 0x39U)))) 
                                                   << 0x1aU)) 
                                               | ((0x2000000U 
                                                   & (((IData)(
                                                               (0x7fULL 
                                                                & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                                                   >> 0x38U))) 
                                                       ^ (IData)(
                                                                 (0x7fULL 
                                                                  & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                                                     >> 0x38U)))) 
                                                      << 0x19U)) 
                                                  | ((0x1000000U 
                                                      & (((IData)(
                                                                  (0xffULL 
                                                                   & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                                                      >> 0x37U))) 
                                                          ^ (IData)(
                                                                    (0xffULL 
                                                                     & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                                                        >> 0x37U)))) 
                                                         << 0x18U)) 
                                                     | ((0xff0000U 
                                                         & (((IData)(
                                                                     (0xffffULL 
                                                                      & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                                                         >> 0x2fU))) 
                                                             ^ (IData)(
                                                                       (0xffffULL 
                                                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                                                           >> 0x2fU)))) 
                                                            << 0x10U)) 
                                                        | (IData)(__PVT___T_237))))))))));
    vlSelf->__PVT___T_317 = (((QData)((IData)(__PVT___T_316)) 
                              << 0x20U) | (QData)((IData)(__PVT___T_285)));
    vlSelf->io_Sum = (((QData)((IData)(__PVT___T_253)) 
                       << 0x20U) | (QData)((IData)(__PVT___T_222)));
}

VL_INLINE_OPT void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13__0(VysyxSoCFull_CarrySaveAdder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13__0\n"); );
    // Init
    SData/*15:0*/ __PVT___T_206;
    __PVT___T_206 = 0;
    IData/*31:0*/ __PVT___T_222;
    __PVT___T_222 = 0;
    SData/*15:0*/ __PVT___T_237;
    __PVT___T_237 = 0;
    IData/*31:0*/ __PVT___T_253;
    __PVT___T_253 = 0;
    IData/*31:0*/ __PVT___T_285;
    __PVT___T_285 = 0;
    IData/*31:0*/ __PVT___T_316;
    __PVT___T_316 = 0;
    // Body
    __PVT___T_285 = ((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                << 1U)) & (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                                   << 1U))) 
                      | ((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                  << 1U)) & (IData)(
                                                    (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                                     << 1U)))) 
                     | ((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                 << 1U)) & (IData)(
                                                   (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                                    << 1U))));
    __PVT___T_316 = ((((IData)((0xffffffffULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                                 >> 0x1fU))) 
                       & (IData)((0xffffffffULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                                   >> 0x1fU)))) 
                      | ((IData)((0xffffffffULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                                   >> 0x1fU))) 
                         & (IData)((0xffffffffULL & 
                                    (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                     >> 0x1fU))))) 
                     | ((IData)((0xffffffffULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                                  >> 0x1fU))) 
                        & (IData)((0xffffffffULL & 
                                   (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                    >> 0x1fU)))));
    __PVT___T_206 = (0xffffU & (((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                          << 1U)) ^ (IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                                             << 1U))) 
                                ^ (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                           << 1U))));
    __PVT___T_237 = (0xffffU & (((IData)((0xffffffffULL 
                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                             >> 0x1fU))) 
                                 ^ (IData)((0xffffffffULL 
                                            & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                               >> 0x1fU)))) 
                                ^ (IData)((0xffffffffULL 
                                           & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                              >> 0x1fU)))));
    vlSelf->__PVT___T_317 = (((QData)((IData)(__PVT___T_316)) 
                              << 0x20U) | (QData)((IData)(__PVT___T_285)));
    __PVT___T_222 = (((((IData)((0x1ffffffffULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                                   >> 0x1eU))) 
                        ^ (IData)((0x1ffffffffULL & 
                                   (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                    >> 0x1eU)))) ^ (IData)(
                                                           (0x1ffffffffULL 
                                                            & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                                               >> 0x1eU)))) 
                      << 0x1fU) | ((0x40000000U & (
                                                   (((IData)(
                                                             (0x3ffffffffULL 
                                                              & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                                                 >> 0x1dU))) 
                                                     ^ (IData)(
                                                               (0x3ffffffffULL 
                                                                & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                                                   >> 0x1dU)))) 
                                                    ^ (IData)(
                                                              (0x3ffffffffULL 
                                                               & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                                                  >> 0x1dU)))) 
                                                   << 0x1eU)) 
                                   | ((0x20000000U 
                                       & ((((IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                                        >> 0x1cU))) 
                                            ^ (IData)(
                                                      (0x7ffffffffULL 
                                                       & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                                          >> 0x1cU)))) 
                                           ^ (IData)(
                                                     (0x7ffffffffULL 
                                                      & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                                         >> 0x1cU)))) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((((IData)(
                                                       (0xfffffffffULL 
                                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                                           >> 0x1bU))) 
                                               ^ (IData)(
                                                         (0xfffffffffULL 
                                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                                             >> 0x1bU)))) 
                                              ^ (IData)(
                                                        (0xfffffffffULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                                            >> 0x1bU)))) 
                                             << 0x1cU)) 
                                         | ((0x8000000U 
                                             & ((((IData)(
                                                          (0x1fffffffffULL 
                                                           & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                                              >> 0x1aU))) 
                                                  ^ (IData)(
                                                            (0x1fffffffffULL 
                                                             & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                                                >> 0x1aU)))) 
                                                 ^ (IData)(
                                                           (0x1fffffffffULL 
                                                            & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                                               >> 0x1aU)))) 
                                                << 0x1bU)) 
                                            | ((0x4000000U 
                                                & ((((IData)(
                                                             (0x3fffffffffULL 
                                                              & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                                                 >> 0x19U))) 
                                                     ^ (IData)(
                                                               (0x3fffffffffULL 
                                                                & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                                                   >> 0x19U)))) 
                                                    ^ (IData)(
                                                              (0x3fffffffffULL 
                                                               & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                                                  >> 0x19U)))) 
                                                   << 0x1aU)) 
                                               | ((0x2000000U 
                                                   & ((((IData)(
                                                                (0x7fffffffffULL 
                                                                 & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                                                    >> 0x18U))) 
                                                        ^ (IData)(
                                                                  (0x7fffffffffULL 
                                                                   & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                                                      >> 0x18U)))) 
                                                       ^ (IData)(
                                                                 (0x7fffffffffULL 
                                                                  & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                                                     >> 0x18U)))) 
                                                      << 0x19U)) 
                                                  | ((0x1000000U 
                                                      & ((((IData)(
                                                                   (0xffffffffffULL 
                                                                    & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                                                       >> 0x17U))) 
                                                           ^ (IData)(
                                                                     (0xffffffffffULL 
                                                                      & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                                                         >> 0x17U)))) 
                                                          ^ (IData)(
                                                                    (0xffffffffffULL 
                                                                     & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                                                        >> 0x17U)))) 
                                                         << 0x18U)) 
                                                     | ((0xff0000U 
                                                         & ((((IData)(
                                                                      (0xffffffffffffULL 
                                                                       & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                                                          >> 0xfU))) 
                                                              ^ (IData)(
                                                                        (0xffffffffffffULL 
                                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                                                            >> 0xfU)))) 
                                                             ^ (IData)(
                                                                       (0xffffffffffffULL 
                                                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                                                           >> 0xfU)))) 
                                                            << 0x10U)) 
                                                        | (IData)(__PVT___T_206))))))))));
    __PVT___T_253 = (((((IData)((1ULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                         >> 0x3eU))) 
                        ^ (IData)((1ULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                           >> 0x3eU)))) 
                       ^ (IData)((1ULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                          >> 0x3eU)))) 
                      << 0x1fU) | ((0x40000000U & (
                                                   (((IData)(
                                                             (3ULL 
                                                              & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                                                 >> 0x3dU))) 
                                                     ^ (IData)(
                                                               (3ULL 
                                                                & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                                                   >> 0x3dU)))) 
                                                    ^ (IData)(
                                                              (3ULL 
                                                               & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                                                  >> 0x3dU)))) 
                                                   << 0x1eU)) 
                                   | ((0x20000000U 
                                       & ((((IData)(
                                                    (7ULL 
                                                     & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                                        >> 0x3cU))) 
                                            ^ (IData)(
                                                      (7ULL 
                                                       & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                                          >> 0x3cU)))) 
                                           ^ (IData)(
                                                     (7ULL 
                                                      & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                                         >> 0x3cU)))) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((((IData)(
                                                       (0xfULL 
                                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                                           >> 0x3bU))) 
                                               ^ (IData)(
                                                         (0xfULL 
                                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                                             >> 0x3bU)))) 
                                              ^ (IData)(
                                                        (0xfULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                                            >> 0x3bU)))) 
                                             << 0x1cU)) 
                                         | ((0x8000000U 
                                             & ((((IData)(
                                                          (0x1fULL 
                                                           & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                                              >> 0x3aU))) 
                                                  ^ (IData)(
                                                            (0x1fULL 
                                                             & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                                                >> 0x3aU)))) 
                                                 ^ (IData)(
                                                           (0x1fULL 
                                                            & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                                               >> 0x3aU)))) 
                                                << 0x1bU)) 
                                            | ((0x4000000U 
                                                & ((((IData)(
                                                             (0x3fULL 
                                                              & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                                                 >> 0x39U))) 
                                                     ^ (IData)(
                                                               (0x3fULL 
                                                                & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                                                   >> 0x39U)))) 
                                                    ^ (IData)(
                                                              (0x3fULL 
                                                               & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                                                  >> 0x39U)))) 
                                                   << 0x1aU)) 
                                               | ((0x2000000U 
                                                   & ((((IData)(
                                                                (0x7fULL 
                                                                 & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                                                    >> 0x38U))) 
                                                        ^ (IData)(
                                                                  (0x7fULL 
                                                                   & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                                                      >> 0x38U)))) 
                                                       ^ (IData)(
                                                                 (0x7fULL 
                                                                  & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                                                     >> 0x38U)))) 
                                                      << 0x19U)) 
                                                  | ((0x1000000U 
                                                      & ((((IData)(
                                                                   (0xffULL 
                                                                    & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                                                       >> 0x37U))) 
                                                           ^ (IData)(
                                                                     (0xffULL 
                                                                      & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                                                         >> 0x37U)))) 
                                                          ^ (IData)(
                                                                    (0xffULL 
                                                                     & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                                                        >> 0x37U)))) 
                                                         << 0x18U)) 
                                                     | ((0xff0000U 
                                                         & ((((IData)(
                                                                      (0xffffULL 
                                                                       & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                                                          >> 0x2fU))) 
                                                              ^ (IData)(
                                                                        (0xffffULL 
                                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                                                            >> 0x2fU)))) 
                                                             ^ (IData)(
                                                                       (0xffffULL 
                                                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                                                           >> 0x2fU)))) 
                                                            << 0x10U)) 
                                                        | (IData)(__PVT___T_237))))))))));
    vlSelf->io_Sum = (((QData)((IData)(__PVT___T_253)) 
                       << 0x20U) | (QData)((IData)(__PVT___T_222)));
}

VL_INLINE_OPT void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14__0(VysyxSoCFull_CarrySaveAdder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14__0\n"); );
    // Init
    SData/*15:0*/ __PVT___T_206;
    __PVT___T_206 = 0;
    IData/*31:0*/ __PVT___T_222;
    __PVT___T_222 = 0;
    SData/*15:0*/ __PVT___T_237;
    __PVT___T_237 = 0;
    IData/*31:0*/ __PVT___T_253;
    __PVT___T_253 = 0;
    // Body
    vlSelf->__PVT___T_317 = (((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.io_Sum 
                               & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.io_Sum) 
                              | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.io_Sum 
                                 & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.io_Sum)) 
                             | (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.io_Sum 
                                & vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.io_Sum));
    __PVT___T_206 = (0xffffU & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.io_Sum) 
                                 ^ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.io_Sum)) 
                                ^ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.io_Sum)));
    __PVT___T_237 = (0xffffU & (((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.io_Sum 
                                          >> 0x20U)) 
                                 ^ (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.io_Sum 
                                            >> 0x20U))) 
                                ^ (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.io_Sum 
                                           >> 0x20U))));
    __PVT___T_222 = (((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.io_Sum 
                                 >> 0x1fU)) ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.io_Sum 
                                                       >> 0x1fU))) 
                       ^ (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.io_Sum 
                                  >> 0x1fU))) << 0x1fU) 
                     | ((0x40000000U & ((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.io_Sum 
                                                   >> 0x1eU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.io_Sum 
                                                     >> 0x1eU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.io_Sum 
                                                    >> 0x1eU))) 
                                        << 0x1eU)) 
                        | ((0x20000000U & ((((IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.io_Sum 
                                                      >> 0x1dU)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.io_Sum 
                                                        >> 0x1dU))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.io_Sum 
                                                       >> 0x1dU))) 
                                           << 0x1dU)) 
                           | ((0x10000000U & ((((IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.io_Sum 
                                                         >> 0x1cU)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.io_Sum 
                                                           >> 0x1cU))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.io_Sum 
                                                          >> 0x1cU))) 
                                              << 0x1cU)) 
                              | ((0x8000000U & ((((IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.io_Sum 
                                                           >> 0x1bU)) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.io_Sum 
                                                             >> 0x1bU))) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.io_Sum 
                                                            >> 0x1bU))) 
                                                << 0x1bU)) 
                                 | ((0x4000000U & (
                                                   (((IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.io_Sum 
                                                              >> 0x1aU)) 
                                                     ^ (IData)(
                                                               (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.io_Sum 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.io_Sum 
                                                               >> 0x1aU))) 
                                                   << 0x1aU)) 
                                    | ((0x2000000U 
                                        & ((((IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.io_Sum 
                                                      >> 0x19U)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.io_Sum 
                                                        >> 0x19U))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.io_Sum 
                                                       >> 0x19U))) 
                                           << 0x19U)) 
                                       | ((0x1000000U 
                                           & ((((IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.io_Sum 
                                                         >> 0x18U)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.io_Sum 
                                                           >> 0x18U))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.io_Sum 
                                                          >> 0x18U))) 
                                              << 0x18U)) 
                                          | ((0xff0000U 
                                              & ((((IData)(
                                                           (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.io_Sum 
                                                            >> 0x10U)) 
                                                   ^ (IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.io_Sum 
                                                              >> 0x10U))) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.io_Sum 
                                                             >> 0x10U))) 
                                                 << 0x10U)) 
                                             | (IData)(__PVT___T_206))))))))));
    __PVT___T_253 = (((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.io_Sum 
                                 >> 0x3fU)) ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.io_Sum 
                                                       >> 0x3fU))) 
                       ^ (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.io_Sum 
                                  >> 0x3fU))) << 0x1fU) 
                     | ((0x40000000U & ((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.io_Sum 
                                                   >> 0x3eU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.io_Sum 
                                                     >> 0x3eU))) 
                                         ^ (IData)(
                                                   (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.io_Sum 
                                                    >> 0x3eU))) 
                                        << 0x1eU)) 
                        | ((0x20000000U & ((((IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.io_Sum 
                                                      >> 0x3dU)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.io_Sum 
                                                        >> 0x3dU))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.io_Sum 
                                                       >> 0x3dU))) 
                                           << 0x1dU)) 
                           | ((0x10000000U & ((((IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.io_Sum 
                                                         >> 0x3cU)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.io_Sum 
                                                           >> 0x3cU))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.io_Sum 
                                                          >> 0x3cU))) 
                                              << 0x1cU)) 
                              | ((0x8000000U & ((((IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.io_Sum 
                                                           >> 0x3bU)) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.io_Sum 
                                                             >> 0x3bU))) 
                                                 ^ (IData)(
                                                           (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.io_Sum 
                                                            >> 0x3bU))) 
                                                << 0x1bU)) 
                                 | ((0x4000000U & (
                                                   (((IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.io_Sum 
                                                              >> 0x3aU)) 
                                                     ^ (IData)(
                                                               (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.io_Sum 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.io_Sum 
                                                               >> 0x3aU))) 
                                                   << 0x1aU)) 
                                    | ((0x2000000U 
                                        & ((((IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.io_Sum 
                                                      >> 0x39U)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.io_Sum 
                                                        >> 0x39U))) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.io_Sum 
                                                       >> 0x39U))) 
                                           << 0x19U)) 
                                       | ((0x1000000U 
                                           & ((((IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.io_Sum 
                                                         >> 0x38U)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.io_Sum 
                                                           >> 0x38U))) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.io_Sum 
                                                          >> 0x38U))) 
                                              << 0x18U)) 
                                          | ((0xff0000U 
                                              & ((((IData)(
                                                           (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.io_Sum 
                                                            >> 0x30U)) 
                                                   ^ (IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.io_Sum 
                                                              >> 0x30U))) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.io_Sum 
                                                             >> 0x30U))) 
                                                 << 0x10U)) 
                                             | (IData)(__PVT___T_237))))))))));
    vlSelf->io_Sum = (((QData)((IData)(__PVT___T_253)) 
                       << 0x20U) | (QData)((IData)(__PVT___T_222)));
}

VL_INLINE_OPT void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15__0(VysyxSoCFull_CarrySaveAdder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15__0\n"); );
    // Init
    SData/*15:0*/ __PVT___T_206;
    __PVT___T_206 = 0;
    IData/*31:0*/ __PVT___T_222;
    __PVT___T_222 = 0;
    SData/*15:0*/ __PVT___T_237;
    __PVT___T_237 = 0;
    IData/*31:0*/ __PVT___T_253;
    __PVT___T_253 = 0;
    IData/*31:0*/ __PVT___T_285;
    __PVT___T_285 = 0;
    IData/*31:0*/ __PVT___T_316;
    __PVT___T_316 = 0;
    // Body
    __PVT___T_285 = ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum) 
                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum)) 
                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum) 
                         & (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                    << 1U)))) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum) 
                                                 & (IData)(
                                                           (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                            << 1U))));
    __PVT___T_316 = ((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                >> 0x20U)) & (IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                      >> 0x20U))) 
                      | ((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                  >> 0x20U)) & (IData)(
                                                       (0xffffffffULL 
                                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                           >> 0x1fU))))) 
                     | ((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                 >> 0x20U)) & (IData)(
                                                      (0xffffffffULL 
                                                       & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                          >> 0x1fU)))));
    __PVT___T_206 = (0xffffU & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum) 
                                 ^ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum)) 
                                ^ (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                           << 1U))));
    __PVT___T_237 = (0xffffU & (((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                          >> 0x20U)) 
                                 ^ (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                            >> 0x20U))) 
                                ^ (IData)((0xffffffffULL 
                                           & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                              >> 0x1fU)))));
    vlSelf->__PVT___T_317 = (((QData)((IData)(__PVT___T_316)) 
                              << 0x20U) | (QData)((IData)(__PVT___T_285)));
    __PVT___T_222 = (((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                 >> 0x1fU)) ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                       >> 0x1fU))) 
                       ^ (IData)((0x1ffffffffULL & 
                                  (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                   >> 0x1eU)))) << 0x1fU) 
                     | ((0x40000000U & ((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                   >> 0x1eU)) 
                                          ^ (IData)(
                                                    (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                     >> 0x1eU))) 
                                         ^ (IData)(
                                                   (0x3ffffffffULL 
                                                    & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                       >> 0x1dU)))) 
                                        << 0x1eU)) 
                        | ((0x20000000U & ((((IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                      >> 0x1dU)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                        >> 0x1dU))) 
                                            ^ (IData)(
                                                      (0x7ffffffffULL 
                                                       & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                          >> 0x1cU)))) 
                                           << 0x1dU)) 
                           | ((0x10000000U & ((((IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                         >> 0x1cU)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                           >> 0x1cU))) 
                                               ^ (IData)(
                                                         (0xfffffffffULL 
                                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                             >> 0x1bU)))) 
                                              << 0x1cU)) 
                              | ((0x8000000U & ((((IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                           >> 0x1bU)) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                             >> 0x1bU))) 
                                                 ^ (IData)(
                                                           (0x1fffffffffULL 
                                                            & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                               >> 0x1aU)))) 
                                                << 0x1bU)) 
                                 | ((0x4000000U & (
                                                   (((IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                              >> 0x1aU)) 
                                                     ^ (IData)(
                                                               (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (0x3fffffffffULL 
                                                               & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                                  >> 0x19U)))) 
                                                   << 0x1aU)) 
                                    | ((0x2000000U 
                                        & ((((IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                      >> 0x19U)) 
                                             ^ (IData)(
                                                       (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                        >> 0x19U))) 
                                            ^ (IData)(
                                                      (0x7fffffffffULL 
                                                       & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                          >> 0x18U)))) 
                                           << 0x19U)) 
                                       | ((0x1000000U 
                                           & ((((IData)(
                                                        (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                         >> 0x18U)) 
                                                ^ (IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                           >> 0x18U))) 
                                               ^ (IData)(
                                                         (0xffffffffffULL 
                                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                             >> 0x17U)))) 
                                              << 0x18U)) 
                                          | ((0xff0000U 
                                              & ((((IData)(
                                                           (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                            >> 0x10U)) 
                                                   ^ (IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                              >> 0x10U))) 
                                                  ^ (IData)(
                                                            (0xffffffffffffULL 
                                                             & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                                >> 0xfU)))) 
                                                 << 0x10U)) 
                                             | (IData)(__PVT___T_206))))))))));
    __PVT___T_253 = (((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                 >> 0x3fU)) ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                       >> 0x3fU))) 
                       ^ (IData)((1ULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                          >> 0x3eU)))) 
                      << 0x1fU) | ((0x40000000U & (
                                                   (((IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                              >> 0x3eU)) 
                                                     ^ (IData)(
                                                               (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                                >> 0x3eU))) 
                                                    ^ (IData)(
                                                              (3ULL 
                                                               & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                                  >> 0x3dU)))) 
                                                   << 0x1eU)) 
                                   | ((0x20000000U 
                                       & ((((IData)(
                                                    (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                     >> 0x3dU)) 
                                            ^ (IData)(
                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                       >> 0x3dU))) 
                                           ^ (IData)(
                                                     (7ULL 
                                                      & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                         >> 0x3cU)))) 
                                          << 0x1dU)) 
                                      | ((0x10000000U 
                                          & ((((IData)(
                                                       (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                        >> 0x3cU)) 
                                               ^ (IData)(
                                                         (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                          >> 0x3cU))) 
                                              ^ (IData)(
                                                        (0xfULL 
                                                         & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                            >> 0x3bU)))) 
                                             << 0x1cU)) 
                                         | ((0x8000000U 
                                             & ((((IData)(
                                                          (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                           >> 0x3bU)) 
                                                  ^ (IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                             >> 0x3bU))) 
                                                 ^ (IData)(
                                                           (0x1fULL 
                                                            & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                               >> 0x3aU)))) 
                                                << 0x1bU)) 
                                            | ((0x4000000U 
                                                & ((((IData)(
                                                             (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                              >> 0x3aU)) 
                                                     ^ (IData)(
                                                               (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (0x3fULL 
                                                               & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                                  >> 0x39U)))) 
                                                   << 0x1aU)) 
                                               | ((0x2000000U 
                                                   & ((((IData)(
                                                                (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                                 >> 0x39U)) 
                                                        ^ (IData)(
                                                                  (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                                   >> 0x39U))) 
                                                       ^ (IData)(
                                                                 (0x7fULL 
                                                                  & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                                     >> 0x38U)))) 
                                                      << 0x19U)) 
                                                  | ((0x1000000U 
                                                      & ((((IData)(
                                                                   (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                                    >> 0x38U)) 
                                                           ^ (IData)(
                                                                     (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                                      >> 0x38U))) 
                                                          ^ (IData)(
                                                                    (0xffULL 
                                                                     & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                                        >> 0x37U)))) 
                                                         << 0x18U)) 
                                                     | ((0xff0000U 
                                                         & ((((IData)(
                                                                      (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum 
                                                                       >> 0x30U)) 
                                                              ^ (IData)(
                                                                        (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum 
                                                                         >> 0x30U))) 
                                                             ^ (IData)(
                                                                       (0xffffULL 
                                                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                                                           >> 0x2fU)))) 
                                                            << 0x10U)) 
                                                        | (IData)(__PVT___T_237))))))))));
    vlSelf->io_Sum = (((QData)((IData)(__PVT___T_253)) 
                       << 0x20U) | (QData)((IData)(__PVT___T_222)));
}

VL_INLINE_OPT void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16__0(VysyxSoCFull_CarrySaveAdder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16__0\n"); );
    // Init
    SData/*15:0*/ __PVT___T_206;
    __PVT___T_206 = 0;
    SData/*15:0*/ __PVT___T_237;
    __PVT___T_237 = 0;
    // Body
    vlSelf->__PVT___T_285 = ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum) 
                               & (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                          << 1U))) 
                              | ((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                          << 1U)) & (IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                             << 1U)))) 
                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum) 
                                & (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                           << 1U))));
    vlSelf->__PVT___T_316 = ((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                        >> 0x20U)) 
                               & (IData)((0xffffffffULL 
                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                             >> 0x1fU)))) 
                              | ((IData)((0xffffffffULL 
                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                             >> 0x1fU))) 
                                 & (IData)((0xffffffffULL 
                                            & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                               >> 0x1fU))))) 
                             | ((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                         >> 0x20U)) 
                                & (IData)((0xffffffffULL 
                                           & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                              >> 0x1fU)))));
    __PVT___T_206 = (0xffffU & (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum) 
                                 ^ (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                            << 1U))) 
                                ^ (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                           << 1U))));
    __PVT___T_237 = (0xffffU & (((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                          >> 0x20U)) 
                                 ^ (IData)((0xffffffffULL 
                                            & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                               >> 0x1fU)))) 
                                ^ (IData)((0xffffffffULL 
                                           & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                              >> 0x1fU)))));
    vlSelf->__PVT___T_222 = (((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                         >> 0x1fU)) 
                                ^ (IData)((0x1ffffffffULL 
                                           & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                              >> 0x1eU)))) 
                               ^ (IData)((0x1ffffffffULL 
                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                             >> 0x1eU)))) 
                              << 0x1fU) | ((0x40000000U 
                                            & ((((IData)(
                                                         (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                          >> 0x1eU)) 
                                                 ^ (IData)(
                                                           (0x3ffffffffULL 
                                                            & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                               >> 0x1dU)))) 
                                                ^ (IData)(
                                                          (0x3ffffffffULL 
                                                           & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                              >> 0x1dU)))) 
                                               << 0x1eU)) 
                                           | ((0x20000000U 
                                               & ((((IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                             >> 0x1dU)) 
                                                    ^ (IData)(
                                                              (0x7ffffffffULL 
                                                               & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                                  >> 0x1cU)))) 
                                                   ^ (IData)(
                                                             (0x7ffffffffULL 
                                                              & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                                 >> 0x1cU)))) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & ((((IData)(
                                                               (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                                >> 0x1cU)) 
                                                       ^ (IData)(
                                                                 (0xfffffffffULL 
                                                                  & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                                     >> 0x1bU)))) 
                                                      ^ (IData)(
                                                                (0xfffffffffULL 
                                                                 & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                                    >> 0x1bU)))) 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & ((((IData)(
                                                                  (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                                   >> 0x1bU)) 
                                                          ^ (IData)(
                                                                    (0x1fffffffffULL 
                                                                     & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                                        >> 0x1aU)))) 
                                                         ^ (IData)(
                                                                   (0x1fffffffffULL 
                                                                    & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                                       >> 0x1aU)))) 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & ((((IData)(
                                                                     (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                                      >> 0x1aU)) 
                                                             ^ (IData)(
                                                                       (0x3fffffffffULL 
                                                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                                           >> 0x19U)))) 
                                                            ^ (IData)(
                                                                      (0x3fffffffffULL 
                                                                       & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                                          >> 0x19U)))) 
                                                           << 0x1aU)) 
                                                       | ((0x2000000U 
                                                           & ((((IData)(
                                                                        (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                                         >> 0x19U)) 
                                                                ^ (IData)(
                                                                          (0x7fffffffffULL 
                                                                           & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                                              >> 0x18U)))) 
                                                               ^ (IData)(
                                                                         (0x7fffffffffULL 
                                                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                                             >> 0x18U)))) 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & ((((IData)(
                                                                           (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                                            >> 0x18U)) 
                                                                   ^ (IData)(
                                                                             (0xffffffffffULL 
                                                                              & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                                                >> 0x17U)))) 
                                                                  ^ (IData)(
                                                                            (0xffffffffffULL 
                                                                             & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                                                >> 0x17U)))) 
                                                                 << 0x18U)) 
                                                             | ((0xff0000U 
                                                                 & ((((IData)(
                                                                              (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                                               >> 0x10U)) 
                                                                      ^ (IData)(
                                                                                (0xffffffffffffULL 
                                                                                & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                                                >> 0xfU)))) 
                                                                     ^ (IData)(
                                                                               (0xffffffffffffULL 
                                                                                & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                                                >> 0xfU)))) 
                                                                    << 0x10U)) 
                                                                | (IData)(__PVT___T_206))))))))));
    vlSelf->__PVT___T_253 = (((((IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                         >> 0x3fU)) 
                                ^ (IData)((1ULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                   >> 0x3eU)))) 
                               ^ (IData)((1ULL & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                  >> 0x3eU)))) 
                              << 0x1fU) | ((0x40000000U 
                                            & ((((IData)(
                                                         (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                          >> 0x3eU)) 
                                                 ^ (IData)(
                                                           (3ULL 
                                                            & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                               >> 0x3dU)))) 
                                                ^ (IData)(
                                                          (3ULL 
                                                           & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                              >> 0x3dU)))) 
                                               << 0x1eU)) 
                                           | ((0x20000000U 
                                               & ((((IData)(
                                                            (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                             >> 0x3dU)) 
                                                    ^ (IData)(
                                                              (7ULL 
                                                               & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                                  >> 0x3cU)))) 
                                                   ^ (IData)(
                                                             (7ULL 
                                                              & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                                 >> 0x3cU)))) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & ((((IData)(
                                                               (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                                >> 0x3cU)) 
                                                       ^ (IData)(
                                                                 (0xfULL 
                                                                  & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                                     >> 0x3bU)))) 
                                                      ^ (IData)(
                                                                (0xfULL 
                                                                 & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                                    >> 0x3bU)))) 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & ((((IData)(
                                                                  (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                                   >> 0x3bU)) 
                                                          ^ (IData)(
                                                                    (0x1fULL 
                                                                     & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                                        >> 0x3aU)))) 
                                                         ^ (IData)(
                                                                   (0x1fULL 
                                                                    & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                                       >> 0x3aU)))) 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & ((((IData)(
                                                                     (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                                      >> 0x3aU)) 
                                                             ^ (IData)(
                                                                       (0x3fULL 
                                                                        & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                                           >> 0x39U)))) 
                                                            ^ (IData)(
                                                                      (0x3fULL 
                                                                       & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                                          >> 0x39U)))) 
                                                           << 0x1aU)) 
                                                       | ((0x2000000U 
                                                           & ((((IData)(
                                                                        (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                                         >> 0x39U)) 
                                                                ^ (IData)(
                                                                          (0x7fULL 
                                                                           & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                                              >> 0x38U)))) 
                                                               ^ (IData)(
                                                                         (0x7fULL 
                                                                          & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                                             >> 0x38U)))) 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & ((((IData)(
                                                                           (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                                            >> 0x38U)) 
                                                                   ^ (IData)(
                                                                             (0xffULL 
                                                                              & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                                                >> 0x37U)))) 
                                                                  ^ (IData)(
                                                                            (0xffULL 
                                                                             & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                                                >> 0x37U)))) 
                                                                 << 0x18U)) 
                                                             | ((0xff0000U 
                                                                 & ((((IData)(
                                                                              (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum 
                                                                               >> 0x30U)) 
                                                                      ^ (IData)(
                                                                                (0xffffULL 
                                                                                & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                                                                >> 0x2fU)))) 
                                                                     ^ (IData)(
                                                                               (0xffffULL 
                                                                                & (vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                                                                >> 0x2fU)))) 
                                                                    << 0x10U)) 
                                                                | (IData)(__PVT___T_237))))))))));
}
