// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_full_sub_1(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1928,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                             >> 0x3cU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x3cU))))));
    bufp->fullBit(oldp+1929,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                             >> 0x3cU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x3cU))))));
    bufp->fullBit(oldp+1930,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                             >> 0x3dU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x3dU))))));
    bufp->fullBit(oldp+1931,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                             >> 0x3dU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x3dU))))));
    bufp->fullBit(oldp+1932,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                             >> 0x3dU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x3dU))))));
    bufp->fullBit(oldp+1933,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                             >> 0x3dU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x3dU))))));
    bufp->fullBit(oldp+1934,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                             >> 0x3eU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x3eU))))));
    bufp->fullBit(oldp+1935,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                             >> 0x3eU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x3eU))))));
    bufp->fullBit(oldp+1936,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                             >> 0x3eU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x3eU))))));
    bufp->fullBit(oldp+1937,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                             >> 0x3eU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x3eU))))));
    bufp->fullBit(oldp+1938,((IData)(((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                       ^ vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B) 
                                      >> 0x3fU))));
    bufp->fullBit(oldp+1939,((IData)(((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                       & vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B) 
                                      >> 0x3fU))));
    bufp->fullBit(oldp+1940,((IData)(((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                       & vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin) 
                                      >> 0x3fU))));
    bufp->fullBit(oldp+1941,((IData)(((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                       & vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin) 
                                      >> 0x3fU))));
    bufp->fullBit(oldp+1942,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                             >> 7U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 7U))))));
    bufp->fullBit(oldp+1943,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                             >> 7U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 7U))))));
    bufp->fullBit(oldp+1944,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                             >> 7U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 7U))))));
    bufp->fullBit(oldp+1945,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                             >> 7U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 7U))))));
    bufp->fullBit(oldp+1946,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                             >> 8U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 8U))))));
    bufp->fullBit(oldp+1947,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                             >> 8U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 8U))))));
    bufp->fullBit(oldp+1948,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                             >> 8U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 8U))))));
    bufp->fullBit(oldp+1949,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                             >> 8U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 8U))))));
    bufp->fullBit(oldp+1950,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                             >> 9U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 9U))))));
    bufp->fullBit(oldp+1951,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                             >> 9U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 9U))))));
    bufp->fullBit(oldp+1952,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                             >> 9U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 9U))))));
    bufp->fullBit(oldp+1953,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                             >> 9U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 9U))))));
    bufp->fullBit(oldp+1954,((1U & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A))));
    bufp->fullBit(oldp+1955,((1U & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B))));
    bufp->fullBit(oldp+1956,((1U & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin))));
    bufp->fullBit(oldp+1957,((1U & (((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A) 
                                     ^ (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B)) 
                                    ^ (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin)))));
    bufp->fullBit(oldp+1958,((1U & ((((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A) 
                                      & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B)) 
                                     | ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B) 
                                        & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin))) 
                                    | ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A) 
                                       & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin))))));
    bufp->fullBit(oldp+1959,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 1U)))));
    bufp->fullBit(oldp+1960,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 1U)))));
    bufp->fullBit(oldp+1961,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 1U)))));
    bufp->fullBit(oldp+1962,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 1U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 1U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 1U))))));
    bufp->fullBit(oldp+1963,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 1U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 1U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 1U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 1U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 1U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 1U)))))));
    bufp->fullBit(oldp+1964,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 2U)))));
    bufp->fullBit(oldp+1965,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 2U)))));
    bufp->fullBit(oldp+1966,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 2U)))));
    bufp->fullBit(oldp+1967,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 2U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 2U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 2U))))));
    bufp->fullBit(oldp+1968,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 2U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 2U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 2U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 2U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 2U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+1969,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 3U)))));
    bufp->fullBit(oldp+1970,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 3U)))));
    bufp->fullBit(oldp+1971,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 3U)))));
    bufp->fullBit(oldp+1972,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 3U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 3U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 3U))))));
    bufp->fullBit(oldp+1973,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 3U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 3U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 3U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 3U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 3U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 3U)))))));
    bufp->fullBit(oldp+1974,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 4U)))));
    bufp->fullBit(oldp+1975,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 4U)))));
    bufp->fullBit(oldp+1976,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 4U)))));
    bufp->fullBit(oldp+1977,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 4U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 4U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 4U))))));
    bufp->fullBit(oldp+1978,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 4U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 4U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 4U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 4U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 4U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+1979,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 5U)))));
    bufp->fullBit(oldp+1980,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 5U)))));
    bufp->fullBit(oldp+1981,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 5U)))));
    bufp->fullBit(oldp+1982,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 5U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 5U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 5U))))));
    bufp->fullBit(oldp+1983,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 5U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 5U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 5U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 5U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 5U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 5U)))))));
    bufp->fullBit(oldp+1984,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 6U)))));
    bufp->fullBit(oldp+1985,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 6U)))));
    bufp->fullBit(oldp+1986,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 6U)))));
    bufp->fullBit(oldp+1987,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 6U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 6U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 6U))))));
    bufp->fullBit(oldp+1988,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 6U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 6U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 6U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 6U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 6U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 6U)))))));
    bufp->fullBit(oldp+1989,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 7U)))));
    bufp->fullBit(oldp+1990,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 7U)))));
    bufp->fullBit(oldp+1991,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 7U)))));
    bufp->fullBit(oldp+1992,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 7U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 7U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 7U))))));
    bufp->fullBit(oldp+1993,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 7U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 7U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 7U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 7U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 7U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 7U)))))));
    bufp->fullBit(oldp+1994,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 8U)))));
    bufp->fullBit(oldp+1995,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 8U)))));
    bufp->fullBit(oldp+1996,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 8U)))));
    bufp->fullBit(oldp+1997,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 8U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 8U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 8U))))));
    bufp->fullBit(oldp+1998,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 8U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 8U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 8U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 8U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 8U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+1999,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 9U)))));
    bufp->fullBit(oldp+2000,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 9U)))));
    bufp->fullBit(oldp+2001,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 9U)))));
    bufp->fullBit(oldp+2002,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 9U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 9U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 9U))))));
    bufp->fullBit(oldp+2003,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 9U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 9U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 9U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 9U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 9U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+2004,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0xaU)))));
    bufp->fullBit(oldp+2005,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0xaU)))));
    bufp->fullBit(oldp+2006,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0xaU)))));
    bufp->fullBit(oldp+2007,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0xaU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0xaU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+2008,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0xaU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0xaU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0xaU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0xaU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0xaU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+2009,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0xbU)))));
    bufp->fullBit(oldp+2010,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0xbU)))));
    bufp->fullBit(oldp+2011,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0xbU)))));
    bufp->fullBit(oldp+2012,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0xbU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0xbU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+2013,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0xbU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0xbU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0xbU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0xbU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0xbU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+2014,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0xcU)))));
    bufp->fullBit(oldp+2015,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0xcU)))));
    bufp->fullBit(oldp+2016,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0xcU)))));
    bufp->fullBit(oldp+2017,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0xcU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0xcU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+2018,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0xcU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0xcU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0xcU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0xcU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0xcU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+2019,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0xdU)))));
    bufp->fullBit(oldp+2020,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0xdU)))));
    bufp->fullBit(oldp+2021,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0xdU)))));
    bufp->fullBit(oldp+2022,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0xdU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0xdU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+2023,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0xdU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0xdU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0xdU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0xdU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0xdU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+2024,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0xeU)))));
    bufp->fullBit(oldp+2025,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0xeU)))));
    bufp->fullBit(oldp+2026,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0xeU)))));
    bufp->fullBit(oldp+2027,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0xeU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0xeU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+2028,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0xeU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0xeU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0xeU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0xeU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0xeU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+2029,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+2030,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+2031,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+2032,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0xfU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0xfU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+2033,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0xfU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0xfU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0xfU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0xfU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0xfU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+2034,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x10U)))));
    bufp->fullBit(oldp+2035,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x10U)))));
    bufp->fullBit(oldp+2036,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x10U)))));
    bufp->fullBit(oldp+2037,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x10U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x10U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+2038,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x10U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x10U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x10U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x10U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x10U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x10U)))))));
    bufp->fullBit(oldp+2039,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x11U)))));
    bufp->fullBit(oldp+2040,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x11U)))));
    bufp->fullBit(oldp+2041,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x11U)))));
    bufp->fullBit(oldp+2042,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x11U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x11U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+2043,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x11U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x11U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x11U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x11U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x11U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+2044,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x12U)))));
    bufp->fullBit(oldp+2045,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x12U)))));
    bufp->fullBit(oldp+2046,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x12U)))));
    bufp->fullBit(oldp+2047,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x12U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x12U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+2048,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x12U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x12U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x12U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x12U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x12U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+2049,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x13U)))));
    bufp->fullBit(oldp+2050,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x13U)))));
    bufp->fullBit(oldp+2051,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x13U)))));
    bufp->fullBit(oldp+2052,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x13U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x13U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+2053,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x13U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x13U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x13U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x13U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x13U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+2054,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+2055,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+2056,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+2057,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x14U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x14U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+2058,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x14U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x14U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x14U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x14U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x14U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+2059,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x15U)))));
    bufp->fullBit(oldp+2060,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x15U)))));
    bufp->fullBit(oldp+2061,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x15U)))));
    bufp->fullBit(oldp+2062,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x15U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x15U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+2063,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x15U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x15U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x15U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x15U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x15U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+2064,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x16U)))));
    bufp->fullBit(oldp+2065,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x16U)))));
    bufp->fullBit(oldp+2066,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x16U)))));
    bufp->fullBit(oldp+2067,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x16U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x16U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+2068,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x16U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x16U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x16U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x16U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x16U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+2069,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+2070,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+2071,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+2072,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x17U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x17U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+2073,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x17U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x17U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x17U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x17U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x17U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+2074,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x18U)))));
    bufp->fullBit(oldp+2075,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x18U)))));
    bufp->fullBit(oldp+2076,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x18U)))));
    bufp->fullBit(oldp+2077,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x18U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x18U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+2078,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x18U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x18U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x18U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x18U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x18U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x18U)))))));
    bufp->fullBit(oldp+2079,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+2080,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+2081,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+2082,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x19U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x19U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+2083,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x19U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x19U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x19U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x19U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x19U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+2084,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+2085,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+2086,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+2087,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x1aU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x1aU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+2088,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x1aU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x1aU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x1aU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x1aU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x1aU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+2089,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+2090,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+2091,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+2092,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x1bU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x1bU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+2093,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x1bU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x1bU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x1bU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x1bU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x1bU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+2094,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x1cU)))));
    bufp->fullBit(oldp+2095,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x1cU)))));
    bufp->fullBit(oldp+2096,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x1cU)))));
    bufp->fullBit(oldp+2097,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x1cU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x1cU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+2098,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x1cU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x1cU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x1cU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x1cU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x1cU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+2099,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x1dU)))));
    bufp->fullBit(oldp+2100,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x1dU)))));
    bufp->fullBit(oldp+2101,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x1dU)))));
    bufp->fullBit(oldp+2102,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x1dU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x1dU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+2103,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x1dU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x1dU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x1dU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x1dU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x1dU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+2104,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x1eU)))));
    bufp->fullBit(oldp+2105,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x1eU)))));
    bufp->fullBit(oldp+2106,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x1eU)))));
    bufp->fullBit(oldp+2107,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x1eU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x1eU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+2108,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x1eU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x1eU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x1eU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x1eU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x1eU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+2109,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+2110,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+2111,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+2112,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x1fU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x1fU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+2113,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x1fU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x1fU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x1fU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x1fU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x1fU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+2114,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x20U)))));
    bufp->fullBit(oldp+2115,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x20U)))));
    bufp->fullBit(oldp+2116,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x20U)))));
    bufp->fullBit(oldp+2117,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x20U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x20U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+2118,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x20U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x20U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x20U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x20U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x20U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x20U)))))));
    bufp->fullBit(oldp+2119,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x21U)))));
    bufp->fullBit(oldp+2120,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x21U)))));
    bufp->fullBit(oldp+2121,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x21U)))));
    bufp->fullBit(oldp+2122,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x21U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x21U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+2123,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x21U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x21U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x21U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x21U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x21U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x21U)))))));
    bufp->fullBit(oldp+2124,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x22U)))));
    bufp->fullBit(oldp+2125,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x22U)))));
    bufp->fullBit(oldp+2126,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x22U)))));
    bufp->fullBit(oldp+2127,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x22U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x22U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x22U))))));
    bufp->fullBit(oldp+2128,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x22U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x22U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x22U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x22U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x22U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x22U)))))));
    bufp->fullBit(oldp+2129,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x23U)))));
    bufp->fullBit(oldp+2130,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x23U)))));
    bufp->fullBit(oldp+2131,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x23U)))));
    bufp->fullBit(oldp+2132,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x23U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x23U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x23U))))));
    bufp->fullBit(oldp+2133,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x23U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x23U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x23U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x23U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x23U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x23U)))))));
    bufp->fullBit(oldp+2134,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x24U)))));
    bufp->fullBit(oldp+2135,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x24U)))));
    bufp->fullBit(oldp+2136,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x24U)))));
    bufp->fullBit(oldp+2137,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x24U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x24U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x24U))))));
    bufp->fullBit(oldp+2138,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x24U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x24U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x24U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x24U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x24U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x24U)))))));
    bufp->fullBit(oldp+2139,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x25U)))));
    bufp->fullBit(oldp+2140,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x25U)))));
    bufp->fullBit(oldp+2141,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x25U)))));
    bufp->fullBit(oldp+2142,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x25U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x25U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x25U))))));
    bufp->fullBit(oldp+2143,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x25U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x25U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x25U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x25U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x25U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x25U)))))));
    bufp->fullBit(oldp+2144,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x26U)))));
    bufp->fullBit(oldp+2145,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x26U)))));
    bufp->fullBit(oldp+2146,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x26U)))));
    bufp->fullBit(oldp+2147,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x26U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x26U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x26U))))));
    bufp->fullBit(oldp+2148,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x26U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x26U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x26U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x26U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x26U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x26U)))))));
    bufp->fullBit(oldp+2149,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x27U)))));
    bufp->fullBit(oldp+2150,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x27U)))));
    bufp->fullBit(oldp+2151,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x27U)))));
    bufp->fullBit(oldp+2152,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x27U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x27U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x27U))))));
    bufp->fullBit(oldp+2153,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x27U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x27U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x27U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x27U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x27U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x27U)))))));
    bufp->fullBit(oldp+2154,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x28U)))));
    bufp->fullBit(oldp+2155,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x28U)))));
    bufp->fullBit(oldp+2156,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x28U)))));
    bufp->fullBit(oldp+2157,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x28U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x28U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x28U))))));
    bufp->fullBit(oldp+2158,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x28U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x28U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x28U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x28U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x28U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x28U)))))));
    bufp->fullBit(oldp+2159,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x29U)))));
    bufp->fullBit(oldp+2160,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x29U)))));
    bufp->fullBit(oldp+2161,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x29U)))));
    bufp->fullBit(oldp+2162,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x29U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x29U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x29U))))));
    bufp->fullBit(oldp+2163,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x29U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x29U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x29U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x29U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x29U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x29U)))))));
    bufp->fullBit(oldp+2164,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x2aU)))));
    bufp->fullBit(oldp+2165,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x2aU)))));
    bufp->fullBit(oldp+2166,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x2aU)))));
    bufp->fullBit(oldp+2167,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x2aU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x2aU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x2aU))))));
    bufp->fullBit(oldp+2168,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x2aU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x2aU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x2aU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x2aU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x2aU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x2aU)))))));
    bufp->fullBit(oldp+2169,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x2bU)))));
    bufp->fullBit(oldp+2170,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x2bU)))));
    bufp->fullBit(oldp+2171,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x2bU)))));
    bufp->fullBit(oldp+2172,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x2bU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x2bU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x2bU))))));
    bufp->fullBit(oldp+2173,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x2bU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x2bU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x2bU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x2bU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x2bU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x2bU)))))));
    bufp->fullBit(oldp+2174,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x2cU)))));
    bufp->fullBit(oldp+2175,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x2cU)))));
    bufp->fullBit(oldp+2176,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x2cU)))));
    bufp->fullBit(oldp+2177,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x2cU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x2cU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x2cU))))));
    bufp->fullBit(oldp+2178,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x2cU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x2cU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x2cU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x2cU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x2cU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x2cU)))))));
    bufp->fullBit(oldp+2179,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x2dU)))));
    bufp->fullBit(oldp+2180,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x2dU)))));
    bufp->fullBit(oldp+2181,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x2dU)))));
    bufp->fullBit(oldp+2182,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x2dU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x2dU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x2dU))))));
    bufp->fullBit(oldp+2183,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x2dU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x2dU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x2dU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x2dU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x2dU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x2dU)))))));
    bufp->fullBit(oldp+2184,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x2eU)))));
    bufp->fullBit(oldp+2185,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x2eU)))));
    bufp->fullBit(oldp+2186,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x2eU)))));
    bufp->fullBit(oldp+2187,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x2eU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x2eU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x2eU))))));
    bufp->fullBit(oldp+2188,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x2eU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x2eU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x2eU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x2eU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x2eU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x2eU)))))));
    bufp->fullBit(oldp+2189,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x2fU)))));
    bufp->fullBit(oldp+2190,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x2fU)))));
    bufp->fullBit(oldp+2191,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x2fU)))));
    bufp->fullBit(oldp+2192,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x2fU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x2fU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x2fU))))));
    bufp->fullBit(oldp+2193,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x2fU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x2fU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x2fU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x2fU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x2fU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x2fU)))))));
    bufp->fullBit(oldp+2194,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x30U)))));
    bufp->fullBit(oldp+2195,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x30U)))));
    bufp->fullBit(oldp+2196,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x30U)))));
    bufp->fullBit(oldp+2197,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x30U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x30U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x30U))))));
    bufp->fullBit(oldp+2198,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x30U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x30U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x30U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x30U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x30U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x30U)))))));
    bufp->fullBit(oldp+2199,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x31U)))));
    bufp->fullBit(oldp+2200,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x31U)))));
    bufp->fullBit(oldp+2201,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x31U)))));
    bufp->fullBit(oldp+2202,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x31U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x31U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x31U))))));
    bufp->fullBit(oldp+2203,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x31U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x31U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x31U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x31U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x31U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x31U)))))));
    bufp->fullBit(oldp+2204,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x32U)))));
    bufp->fullBit(oldp+2205,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x32U)))));
    bufp->fullBit(oldp+2206,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x32U)))));
    bufp->fullBit(oldp+2207,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x32U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x32U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x32U))))));
    bufp->fullBit(oldp+2208,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x32U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x32U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x32U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x32U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x32U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x32U)))))));
    bufp->fullBit(oldp+2209,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x33U)))));
    bufp->fullBit(oldp+2210,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x33U)))));
    bufp->fullBit(oldp+2211,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x33U)))));
    bufp->fullBit(oldp+2212,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x33U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x33U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x33U))))));
    bufp->fullBit(oldp+2213,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x33U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x33U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x33U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x33U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x33U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x33U)))))));
    bufp->fullBit(oldp+2214,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x34U)))));
    bufp->fullBit(oldp+2215,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x34U)))));
    bufp->fullBit(oldp+2216,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x34U)))));
    bufp->fullBit(oldp+2217,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x34U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x34U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x34U))))));
    bufp->fullBit(oldp+2218,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x34U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x34U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x34U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x34U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x34U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x34U)))))));
    bufp->fullBit(oldp+2219,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x35U)))));
    bufp->fullBit(oldp+2220,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x35U)))));
    bufp->fullBit(oldp+2221,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x35U)))));
    bufp->fullBit(oldp+2222,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x35U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x35U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x35U))))));
    bufp->fullBit(oldp+2223,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x35U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x35U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x35U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x35U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x35U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x35U)))))));
    bufp->fullBit(oldp+2224,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x36U)))));
    bufp->fullBit(oldp+2225,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x36U)))));
    bufp->fullBit(oldp+2226,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x36U)))));
    bufp->fullBit(oldp+2227,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x36U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x36U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x36U))))));
    bufp->fullBit(oldp+2228,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x36U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x36U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x36U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x36U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x36U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x36U)))))));
    bufp->fullBit(oldp+2229,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x37U)))));
    bufp->fullBit(oldp+2230,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x37U)))));
    bufp->fullBit(oldp+2231,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x37U)))));
    bufp->fullBit(oldp+2232,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x37U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x37U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x37U))))));
    bufp->fullBit(oldp+2233,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x37U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x37U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x37U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x37U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x37U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x37U)))))));
    bufp->fullBit(oldp+2234,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x38U)))));
    bufp->fullBit(oldp+2235,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x38U)))));
    bufp->fullBit(oldp+2236,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x38U)))));
    bufp->fullBit(oldp+2237,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x38U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x38U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x38U))))));
    bufp->fullBit(oldp+2238,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x38U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x38U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x38U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x38U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x38U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x38U)))))));
    bufp->fullBit(oldp+2239,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x39U)))));
    bufp->fullBit(oldp+2240,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x39U)))));
    bufp->fullBit(oldp+2241,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x39U)))));
    bufp->fullBit(oldp+2242,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x39U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x39U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x39U))))));
    bufp->fullBit(oldp+2243,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x39U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x39U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x39U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x39U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x39U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x39U)))))));
    bufp->fullBit(oldp+2244,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x3aU)))));
    bufp->fullBit(oldp+2245,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x3aU)))));
    bufp->fullBit(oldp+2246,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x3aU)))));
    bufp->fullBit(oldp+2247,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x3aU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x3aU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x3aU))))));
    bufp->fullBit(oldp+2248,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x3aU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x3aU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x3aU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x3aU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x3aU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x3aU)))))));
    bufp->fullBit(oldp+2249,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x3bU)))));
    bufp->fullBit(oldp+2250,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x3bU)))));
    bufp->fullBit(oldp+2251,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x3bU)))));
    bufp->fullBit(oldp+2252,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x3bU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x3bU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x3bU))))));
    bufp->fullBit(oldp+2253,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x3bU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x3bU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x3bU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x3bU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x3bU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x3bU)))))));
    bufp->fullBit(oldp+2254,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x3cU)))));
    bufp->fullBit(oldp+2255,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x3cU)))));
    bufp->fullBit(oldp+2256,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x3cU)))));
    bufp->fullBit(oldp+2257,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x3cU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x3cU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x3cU))))));
    bufp->fullBit(oldp+2258,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x3cU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x3cU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x3cU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x3cU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x3cU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x3cU)))))));
    bufp->fullBit(oldp+2259,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x3dU)))));
    bufp->fullBit(oldp+2260,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x3dU)))));
    bufp->fullBit(oldp+2261,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x3dU)))));
    bufp->fullBit(oldp+2262,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x3dU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x3dU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x3dU))))));
    bufp->fullBit(oldp+2263,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x3dU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x3dU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x3dU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x3dU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x3dU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x3dU)))))));
    bufp->fullBit(oldp+2264,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x3eU)))));
    bufp->fullBit(oldp+2265,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x3eU)))));
    bufp->fullBit(oldp+2266,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x3eU)))));
    bufp->fullBit(oldp+2267,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                              >> 0x3eU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                >> 0x3eU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x3eU))))));
    bufp->fullBit(oldp+2268,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x3eU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x3eU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x3eU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x3eU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x3eU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x3eU)))))));
    bufp->fullBit(oldp+2269,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                            >> 0x3fU)))));
    bufp->fullBit(oldp+2270,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                            >> 0x3fU)))));
    bufp->fullBit(oldp+2271,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                            >> 0x3fU)))));
    bufp->fullBit(oldp+2272,((IData)((((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                        ^ vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B) 
                                       ^ vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin) 
                                      >> 0x3fU))));
    bufp->fullBit(oldp+2273,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                               >> 0x3fU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x3fU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                                 >> 0x3fU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                   >> 0x3fU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                                >> 0x3fU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                                  >> 0x3fU)))))));
    bufp->fullBit(oldp+2274,((1U & ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A) 
                                    ^ (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B)))));
    bufp->fullBit(oldp+2275,((1U & ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A) 
                                    & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B)))));
    bufp->fullBit(oldp+2276,((1U & ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B) 
                                    & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin)))));
    bufp->fullBit(oldp+2277,((1U & ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A) 
                                    & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin)))));
    bufp->fullBit(oldp+2278,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 1U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 1U))))));
    bufp->fullBit(oldp+2279,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 1U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 1U))))));
    bufp->fullBit(oldp+2280,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 1U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 1U))))));
    bufp->fullBit(oldp+2281,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 1U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 1U))))));
    bufp->fullBit(oldp+2282,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0xaU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+2283,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0xaU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+2284,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0xaU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+2285,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0xaU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+2286,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0xbU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+2287,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0xbU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+2288,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0xbU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+2289,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0xbU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+2290,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0xcU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+2291,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0xcU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+2292,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0xcU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+2293,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0xcU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+2294,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0xdU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+2295,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0xdU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+2296,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0xdU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+2297,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0xdU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+2298,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0xeU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+2299,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0xeU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+2300,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0xeU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+2301,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0xeU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+2302,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0xfU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+2303,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0xfU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+2304,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0xfU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+2305,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0xfU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+2306,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x10U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+2307,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x10U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+2308,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x10U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+2309,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x10U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+2310,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x11U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+2311,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x11U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+2312,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x11U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+2313,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x11U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+2314,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x12U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+2315,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x12U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+2316,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x12U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+2317,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x12U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+2318,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x13U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+2319,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x13U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+2320,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x13U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+2321,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x13U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+2322,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 2U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 2U))))));
    bufp->fullBit(oldp+2323,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 2U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 2U))))));
    bufp->fullBit(oldp+2324,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 2U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 2U))))));
    bufp->fullBit(oldp+2325,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 2U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 2U))))));
    bufp->fullBit(oldp+2326,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x14U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+2327,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x14U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+2328,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x14U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+2329,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x14U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+2330,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x15U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+2331,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x15U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+2332,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x15U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+2333,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x15U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+2334,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x16U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+2335,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x16U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+2336,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x16U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+2337,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x16U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+2338,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x17U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+2339,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x17U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+2340,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x17U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+2341,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x17U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+2342,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x18U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+2343,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x18U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+2344,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x18U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+2345,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x18U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+2346,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x19U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+2347,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x19U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+2348,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x19U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+2349,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x19U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+2350,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x1aU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+2351,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x1aU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+2352,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x1aU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+2353,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x1aU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+2354,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x1bU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+2355,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x1bU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+2356,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x1bU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+2357,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x1bU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+2358,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x1cU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+2359,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x1cU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+2360,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x1cU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+2361,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x1cU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+2362,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x1dU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+2363,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x1dU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+2364,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x1dU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+2365,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x1dU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+2366,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 3U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 3U))))));
    bufp->fullBit(oldp+2367,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 3U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 3U))))));
    bufp->fullBit(oldp+2368,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 3U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 3U))))));
    bufp->fullBit(oldp+2369,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 3U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 3U))))));
    bufp->fullBit(oldp+2370,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x1eU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+2371,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x1eU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+2372,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x1eU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+2373,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x1eU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+2374,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x1fU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+2375,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x1fU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+2376,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x1fU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+2377,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x1fU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+2378,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x20U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+2379,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x20U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+2380,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x20U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+2381,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x20U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+2382,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x21U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+2383,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x21U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+2384,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x21U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+2385,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x21U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+2386,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x22U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x22U))))));
    bufp->fullBit(oldp+2387,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x22U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x22U))))));
    bufp->fullBit(oldp+2388,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x22U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x22U))))));
    bufp->fullBit(oldp+2389,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x22U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x22U))))));
    bufp->fullBit(oldp+2390,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x23U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x23U))))));
    bufp->fullBit(oldp+2391,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x23U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x23U))))));
    bufp->fullBit(oldp+2392,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x23U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x23U))))));
    bufp->fullBit(oldp+2393,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x23U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x23U))))));
    bufp->fullBit(oldp+2394,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x24U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x24U))))));
    bufp->fullBit(oldp+2395,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x24U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x24U))))));
    bufp->fullBit(oldp+2396,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x24U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x24U))))));
    bufp->fullBit(oldp+2397,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x24U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x24U))))));
    bufp->fullBit(oldp+2398,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x25U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x25U))))));
    bufp->fullBit(oldp+2399,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x25U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x25U))))));
    bufp->fullBit(oldp+2400,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x25U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x25U))))));
    bufp->fullBit(oldp+2401,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x25U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x25U))))));
    bufp->fullBit(oldp+2402,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x26U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x26U))))));
    bufp->fullBit(oldp+2403,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x26U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x26U))))));
    bufp->fullBit(oldp+2404,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x26U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x26U))))));
    bufp->fullBit(oldp+2405,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x26U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x26U))))));
    bufp->fullBit(oldp+2406,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x27U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x27U))))));
    bufp->fullBit(oldp+2407,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x27U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x27U))))));
    bufp->fullBit(oldp+2408,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x27U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x27U))))));
    bufp->fullBit(oldp+2409,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x27U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x27U))))));
    bufp->fullBit(oldp+2410,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 4U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 4U))))));
    bufp->fullBit(oldp+2411,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 4U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 4U))))));
    bufp->fullBit(oldp+2412,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 4U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 4U))))));
    bufp->fullBit(oldp+2413,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 4U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 4U))))));
    bufp->fullBit(oldp+2414,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x28U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x28U))))));
    bufp->fullBit(oldp+2415,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x28U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x28U))))));
    bufp->fullBit(oldp+2416,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x28U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x28U))))));
    bufp->fullBit(oldp+2417,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x28U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x28U))))));
    bufp->fullBit(oldp+2418,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x29U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x29U))))));
    bufp->fullBit(oldp+2419,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x29U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x29U))))));
    bufp->fullBit(oldp+2420,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x29U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x29U))))));
    bufp->fullBit(oldp+2421,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x29U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x29U))))));
    bufp->fullBit(oldp+2422,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x2aU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x2aU))))));
    bufp->fullBit(oldp+2423,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x2aU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x2aU))))));
    bufp->fullBit(oldp+2424,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x2aU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x2aU))))));
    bufp->fullBit(oldp+2425,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x2aU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x2aU))))));
    bufp->fullBit(oldp+2426,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x2bU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x2bU))))));
    bufp->fullBit(oldp+2427,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x2bU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x2bU))))));
    bufp->fullBit(oldp+2428,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x2bU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x2bU))))));
    bufp->fullBit(oldp+2429,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x2bU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x2bU))))));
    bufp->fullBit(oldp+2430,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x2cU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x2cU))))));
    bufp->fullBit(oldp+2431,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x2cU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x2cU))))));
    bufp->fullBit(oldp+2432,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x2cU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x2cU))))));
    bufp->fullBit(oldp+2433,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x2cU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x2cU))))));
    bufp->fullBit(oldp+2434,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x2dU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x2dU))))));
    bufp->fullBit(oldp+2435,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x2dU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x2dU))))));
    bufp->fullBit(oldp+2436,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x2dU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x2dU))))));
    bufp->fullBit(oldp+2437,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x2dU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x2dU))))));
    bufp->fullBit(oldp+2438,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x2eU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x2eU))))));
    bufp->fullBit(oldp+2439,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x2eU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x2eU))))));
    bufp->fullBit(oldp+2440,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x2eU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x2eU))))));
    bufp->fullBit(oldp+2441,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x2eU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x2eU))))));
    bufp->fullBit(oldp+2442,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x2fU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x2fU))))));
    bufp->fullBit(oldp+2443,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x2fU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x2fU))))));
    bufp->fullBit(oldp+2444,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x2fU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x2fU))))));
    bufp->fullBit(oldp+2445,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x2fU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x2fU))))));
    bufp->fullBit(oldp+2446,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x30U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x30U))))));
    bufp->fullBit(oldp+2447,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x30U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x30U))))));
    bufp->fullBit(oldp+2448,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x30U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x30U))))));
    bufp->fullBit(oldp+2449,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x30U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x30U))))));
    bufp->fullBit(oldp+2450,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x31U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x31U))))));
    bufp->fullBit(oldp+2451,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x31U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x31U))))));
    bufp->fullBit(oldp+2452,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x31U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x31U))))));
    bufp->fullBit(oldp+2453,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x31U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x31U))))));
    bufp->fullBit(oldp+2454,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 5U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 5U))))));
    bufp->fullBit(oldp+2455,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 5U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 5U))))));
    bufp->fullBit(oldp+2456,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 5U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 5U))))));
    bufp->fullBit(oldp+2457,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 5U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 5U))))));
    bufp->fullBit(oldp+2458,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x32U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x32U))))));
    bufp->fullBit(oldp+2459,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x32U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x32U))))));
    bufp->fullBit(oldp+2460,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x32U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x32U))))));
    bufp->fullBit(oldp+2461,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x32U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x32U))))));
    bufp->fullBit(oldp+2462,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x33U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x33U))))));
    bufp->fullBit(oldp+2463,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x33U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x33U))))));
    bufp->fullBit(oldp+2464,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x33U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x33U))))));
    bufp->fullBit(oldp+2465,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x33U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x33U))))));
    bufp->fullBit(oldp+2466,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x34U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x34U))))));
    bufp->fullBit(oldp+2467,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x34U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x34U))))));
    bufp->fullBit(oldp+2468,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x34U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x34U))))));
    bufp->fullBit(oldp+2469,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x34U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x34U))))));
    bufp->fullBit(oldp+2470,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x35U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x35U))))));
    bufp->fullBit(oldp+2471,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x35U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x35U))))));
    bufp->fullBit(oldp+2472,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x35U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x35U))))));
    bufp->fullBit(oldp+2473,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x35U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x35U))))));
    bufp->fullBit(oldp+2474,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x36U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x36U))))));
    bufp->fullBit(oldp+2475,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x36U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x36U))))));
    bufp->fullBit(oldp+2476,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x36U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x36U))))));
    bufp->fullBit(oldp+2477,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x36U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x36U))))));
    bufp->fullBit(oldp+2478,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x37U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x37U))))));
    bufp->fullBit(oldp+2479,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x37U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x37U))))));
    bufp->fullBit(oldp+2480,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x37U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x37U))))));
    bufp->fullBit(oldp+2481,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x37U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x37U))))));
    bufp->fullBit(oldp+2482,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x38U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x38U))))));
    bufp->fullBit(oldp+2483,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x38U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x38U))))));
    bufp->fullBit(oldp+2484,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x38U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x38U))))));
    bufp->fullBit(oldp+2485,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x38U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x38U))))));
    bufp->fullBit(oldp+2486,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x39U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x39U))))));
    bufp->fullBit(oldp+2487,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x39U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x39U))))));
    bufp->fullBit(oldp+2488,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x39U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x39U))))));
    bufp->fullBit(oldp+2489,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x39U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x39U))))));
    bufp->fullBit(oldp+2490,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x3aU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x3aU))))));
    bufp->fullBit(oldp+2491,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x3aU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x3aU))))));
    bufp->fullBit(oldp+2492,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x3aU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x3aU))))));
    bufp->fullBit(oldp+2493,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x3aU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x3aU))))));
    bufp->fullBit(oldp+2494,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x3bU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x3bU))))));
    bufp->fullBit(oldp+2495,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x3bU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x3bU))))));
    bufp->fullBit(oldp+2496,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x3bU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x3bU))))));
    bufp->fullBit(oldp+2497,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x3bU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x3bU))))));
    bufp->fullBit(oldp+2498,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 6U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 6U))))));
    bufp->fullBit(oldp+2499,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 6U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 6U))))));
    bufp->fullBit(oldp+2500,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 6U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 6U))))));
    bufp->fullBit(oldp+2501,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 6U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 6U))))));
    bufp->fullBit(oldp+2502,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x3cU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x3cU))))));
    bufp->fullBit(oldp+2503,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x3cU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x3cU))))));
    bufp->fullBit(oldp+2504,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x3cU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x3cU))))));
    bufp->fullBit(oldp+2505,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x3cU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x3cU))))));
    bufp->fullBit(oldp+2506,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x3dU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x3dU))))));
    bufp->fullBit(oldp+2507,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x3dU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x3dU))))));
    bufp->fullBit(oldp+2508,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x3dU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x3dU))))));
    bufp->fullBit(oldp+2509,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x3dU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x3dU))))));
    bufp->fullBit(oldp+2510,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x3eU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x3eU))))));
    bufp->fullBit(oldp+2511,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x3eU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 0x3eU))))));
    bufp->fullBit(oldp+2512,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 0x3eU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x3eU))))));
    bufp->fullBit(oldp+2513,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 0x3eU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 0x3eU))))));
    bufp->fullBit(oldp+2514,((IData)(((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                       ^ vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B) 
                                      >> 0x3fU))));
    bufp->fullBit(oldp+2515,((IData)(((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                       & vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B) 
                                      >> 0x3fU))));
    bufp->fullBit(oldp+2516,((IData)(((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                       & vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin) 
                                      >> 0x3fU))));
    bufp->fullBit(oldp+2517,((IData)(((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                       & vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin) 
                                      >> 0x3fU))));
    bufp->fullBit(oldp+2518,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 7U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 7U))))));
    bufp->fullBit(oldp+2519,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 7U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 7U))))));
    bufp->fullBit(oldp+2520,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 7U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 7U))))));
    bufp->fullBit(oldp+2521,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 7U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 7U))))));
    bufp->fullBit(oldp+2522,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 8U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 8U))))));
    bufp->fullBit(oldp+2523,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 8U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 8U))))));
    bufp->fullBit(oldp+2524,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 8U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 8U))))));
    bufp->fullBit(oldp+2525,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 8U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 8U))))));
    bufp->fullBit(oldp+2526,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 9U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 9U))))));
    bufp->fullBit(oldp+2527,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 9U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                               >> 9U))))));
    bufp->fullBit(oldp+2528,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
                                             >> 9U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 9U))))));
    bufp->fullBit(oldp+2529,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
                                             >> 9U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
                                               >> 9U))))));
    bufp->fullBit(oldp+2530,((1U & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A))));
    bufp->fullBit(oldp+2531,((1U & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B))));
    bufp->fullBit(oldp+2532,((1U & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin))));
    bufp->fullBit(oldp+2533,((1U & (((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A) 
                                     ^ (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B)) 
                                    ^ (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin)))));
    bufp->fullBit(oldp+2534,((1U & ((((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A) 
                                      & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B)) 
                                     | ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B) 
                                        & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin))) 
                                    | ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A) 
                                       & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin))))));
    bufp->fullBit(oldp+2535,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 1U)))));
    bufp->fullBit(oldp+2536,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 1U)))));
    bufp->fullBit(oldp+2537,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 1U)))));
    bufp->fullBit(oldp+2538,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 1U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 1U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 1U))))));
    bufp->fullBit(oldp+2539,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 1U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 1U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 1U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 1U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 1U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 1U)))))));
    bufp->fullBit(oldp+2540,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 2U)))));
    bufp->fullBit(oldp+2541,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 2U)))));
    bufp->fullBit(oldp+2542,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 2U)))));
    bufp->fullBit(oldp+2543,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 2U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 2U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 2U))))));
    bufp->fullBit(oldp+2544,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 2U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 2U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 2U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 2U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 2U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+2545,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 3U)))));
    bufp->fullBit(oldp+2546,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 3U)))));
    bufp->fullBit(oldp+2547,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 3U)))));
    bufp->fullBit(oldp+2548,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 3U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 3U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 3U))))));
    bufp->fullBit(oldp+2549,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 3U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 3U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 3U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 3U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 3U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 3U)))))));
    bufp->fullBit(oldp+2550,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 4U)))));
    bufp->fullBit(oldp+2551,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 4U)))));
    bufp->fullBit(oldp+2552,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 4U)))));
    bufp->fullBit(oldp+2553,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 4U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 4U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 4U))))));
    bufp->fullBit(oldp+2554,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 4U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 4U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 4U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 4U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 4U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+2555,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 5U)))));
    bufp->fullBit(oldp+2556,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 5U)))));
    bufp->fullBit(oldp+2557,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 5U)))));
    bufp->fullBit(oldp+2558,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 5U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 5U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 5U))))));
    bufp->fullBit(oldp+2559,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 5U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 5U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 5U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 5U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 5U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 5U)))))));
    bufp->fullBit(oldp+2560,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 6U)))));
    bufp->fullBit(oldp+2561,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 6U)))));
    bufp->fullBit(oldp+2562,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 6U)))));
    bufp->fullBit(oldp+2563,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 6U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 6U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 6U))))));
    bufp->fullBit(oldp+2564,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 6U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 6U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 6U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 6U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 6U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 6U)))))));
    bufp->fullBit(oldp+2565,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 7U)))));
    bufp->fullBit(oldp+2566,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 7U)))));
    bufp->fullBit(oldp+2567,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 7U)))));
    bufp->fullBit(oldp+2568,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 7U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 7U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 7U))))));
    bufp->fullBit(oldp+2569,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 7U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 7U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 7U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 7U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 7U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 7U)))))));
    bufp->fullBit(oldp+2570,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 8U)))));
    bufp->fullBit(oldp+2571,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 8U)))));
    bufp->fullBit(oldp+2572,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 8U)))));
    bufp->fullBit(oldp+2573,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 8U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 8U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 8U))))));
    bufp->fullBit(oldp+2574,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 8U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 8U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 8U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 8U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 8U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+2575,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 9U)))));
    bufp->fullBit(oldp+2576,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 9U)))));
    bufp->fullBit(oldp+2577,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 9U)))));
    bufp->fullBit(oldp+2578,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 9U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 9U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 9U))))));
    bufp->fullBit(oldp+2579,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 9U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 9U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 9U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 9U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 9U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+2580,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0xaU)))));
    bufp->fullBit(oldp+2581,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0xaU)))));
    bufp->fullBit(oldp+2582,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0xaU)))));
    bufp->fullBit(oldp+2583,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0xaU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0xaU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+2584,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0xaU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0xaU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0xaU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0xaU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0xaU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+2585,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0xbU)))));
    bufp->fullBit(oldp+2586,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0xbU)))));
    bufp->fullBit(oldp+2587,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0xbU)))));
    bufp->fullBit(oldp+2588,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0xbU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0xbU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+2589,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0xbU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0xbU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0xbU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0xbU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0xbU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+2590,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0xcU)))));
    bufp->fullBit(oldp+2591,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0xcU)))));
    bufp->fullBit(oldp+2592,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0xcU)))));
    bufp->fullBit(oldp+2593,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0xcU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0xcU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+2594,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0xcU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0xcU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0xcU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0xcU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0xcU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+2595,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0xdU)))));
    bufp->fullBit(oldp+2596,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0xdU)))));
    bufp->fullBit(oldp+2597,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0xdU)))));
    bufp->fullBit(oldp+2598,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0xdU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0xdU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+2599,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0xdU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0xdU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0xdU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0xdU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0xdU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+2600,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0xeU)))));
    bufp->fullBit(oldp+2601,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0xeU)))));
    bufp->fullBit(oldp+2602,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0xeU)))));
    bufp->fullBit(oldp+2603,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0xeU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0xeU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+2604,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0xeU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0xeU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0xeU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0xeU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0xeU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+2605,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+2606,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+2607,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+2608,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0xfU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0xfU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+2609,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0xfU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0xfU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0xfU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0xfU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0xfU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+2610,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x10U)))));
    bufp->fullBit(oldp+2611,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x10U)))));
    bufp->fullBit(oldp+2612,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x10U)))));
    bufp->fullBit(oldp+2613,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x10U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x10U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+2614,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x10U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x10U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x10U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x10U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x10U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x10U)))))));
    bufp->fullBit(oldp+2615,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x11U)))));
    bufp->fullBit(oldp+2616,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x11U)))));
    bufp->fullBit(oldp+2617,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x11U)))));
    bufp->fullBit(oldp+2618,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x11U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x11U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+2619,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x11U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x11U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x11U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x11U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x11U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+2620,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x12U)))));
    bufp->fullBit(oldp+2621,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x12U)))));
    bufp->fullBit(oldp+2622,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x12U)))));
    bufp->fullBit(oldp+2623,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x12U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x12U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+2624,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x12U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x12U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x12U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x12U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x12U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+2625,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x13U)))));
    bufp->fullBit(oldp+2626,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x13U)))));
    bufp->fullBit(oldp+2627,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x13U)))));
    bufp->fullBit(oldp+2628,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x13U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x13U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+2629,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x13U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x13U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x13U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x13U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x13U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+2630,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+2631,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+2632,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+2633,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x14U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x14U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+2634,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x14U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x14U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x14U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x14U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x14U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+2635,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x15U)))));
    bufp->fullBit(oldp+2636,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x15U)))));
    bufp->fullBit(oldp+2637,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x15U)))));
    bufp->fullBit(oldp+2638,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x15U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x15U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+2639,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x15U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x15U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x15U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x15U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x15U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+2640,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x16U)))));
    bufp->fullBit(oldp+2641,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x16U)))));
    bufp->fullBit(oldp+2642,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x16U)))));
    bufp->fullBit(oldp+2643,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x16U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x16U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+2644,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x16U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x16U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x16U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x16U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x16U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+2645,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+2646,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+2647,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+2648,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x17U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x17U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+2649,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x17U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x17U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x17U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x17U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x17U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+2650,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x18U)))));
    bufp->fullBit(oldp+2651,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x18U)))));
    bufp->fullBit(oldp+2652,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x18U)))));
    bufp->fullBit(oldp+2653,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x18U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x18U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+2654,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x18U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x18U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x18U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x18U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x18U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x18U)))))));
    bufp->fullBit(oldp+2655,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+2656,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+2657,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+2658,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x19U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x19U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+2659,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x19U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x19U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x19U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x19U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x19U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+2660,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+2661,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+2662,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+2663,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x1aU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x1aU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+2664,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x1aU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x1aU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x1aU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x1aU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x1aU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+2665,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+2666,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+2667,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+2668,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x1bU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x1bU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+2669,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x1bU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x1bU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x1bU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x1bU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x1bU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+2670,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x1cU)))));
    bufp->fullBit(oldp+2671,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x1cU)))));
    bufp->fullBit(oldp+2672,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x1cU)))));
    bufp->fullBit(oldp+2673,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x1cU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x1cU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+2674,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x1cU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x1cU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x1cU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x1cU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x1cU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+2675,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x1dU)))));
    bufp->fullBit(oldp+2676,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x1dU)))));
    bufp->fullBit(oldp+2677,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x1dU)))));
    bufp->fullBit(oldp+2678,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x1dU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x1dU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+2679,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x1dU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x1dU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x1dU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x1dU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x1dU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+2680,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x1eU)))));
    bufp->fullBit(oldp+2681,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x1eU)))));
    bufp->fullBit(oldp+2682,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x1eU)))));
    bufp->fullBit(oldp+2683,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x1eU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x1eU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+2684,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x1eU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x1eU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x1eU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x1eU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x1eU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+2685,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+2686,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+2687,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+2688,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x1fU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x1fU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+2689,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x1fU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x1fU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x1fU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x1fU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x1fU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+2690,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x20U)))));
    bufp->fullBit(oldp+2691,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x20U)))));
    bufp->fullBit(oldp+2692,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x20U)))));
    bufp->fullBit(oldp+2693,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x20U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x20U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+2694,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x20U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x20U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x20U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x20U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x20U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x20U)))))));
    bufp->fullBit(oldp+2695,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x21U)))));
    bufp->fullBit(oldp+2696,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x21U)))));
    bufp->fullBit(oldp+2697,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x21U)))));
    bufp->fullBit(oldp+2698,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x21U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x21U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+2699,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x21U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x21U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x21U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x21U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x21U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x21U)))))));
    bufp->fullBit(oldp+2700,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x22U)))));
    bufp->fullBit(oldp+2701,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x22U)))));
    bufp->fullBit(oldp+2702,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x22U)))));
    bufp->fullBit(oldp+2703,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x22U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x22U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x22U))))));
    bufp->fullBit(oldp+2704,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x22U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x22U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x22U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x22U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x22U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x22U)))))));
    bufp->fullBit(oldp+2705,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x23U)))));
    bufp->fullBit(oldp+2706,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x23U)))));
    bufp->fullBit(oldp+2707,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x23U)))));
    bufp->fullBit(oldp+2708,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x23U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x23U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x23U))))));
    bufp->fullBit(oldp+2709,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x23U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x23U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x23U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x23U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x23U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x23U)))))));
    bufp->fullBit(oldp+2710,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x24U)))));
    bufp->fullBit(oldp+2711,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x24U)))));
    bufp->fullBit(oldp+2712,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x24U)))));
    bufp->fullBit(oldp+2713,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x24U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x24U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x24U))))));
    bufp->fullBit(oldp+2714,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x24U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x24U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x24U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x24U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x24U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x24U)))))));
    bufp->fullBit(oldp+2715,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x25U)))));
    bufp->fullBit(oldp+2716,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x25U)))));
    bufp->fullBit(oldp+2717,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x25U)))));
    bufp->fullBit(oldp+2718,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x25U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x25U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x25U))))));
    bufp->fullBit(oldp+2719,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x25U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x25U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x25U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x25U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x25U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x25U)))))));
    bufp->fullBit(oldp+2720,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x26U)))));
    bufp->fullBit(oldp+2721,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x26U)))));
    bufp->fullBit(oldp+2722,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x26U)))));
    bufp->fullBit(oldp+2723,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x26U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x26U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x26U))))));
    bufp->fullBit(oldp+2724,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x26U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x26U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x26U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x26U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x26U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x26U)))))));
    bufp->fullBit(oldp+2725,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x27U)))));
    bufp->fullBit(oldp+2726,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x27U)))));
    bufp->fullBit(oldp+2727,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x27U)))));
    bufp->fullBit(oldp+2728,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x27U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x27U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x27U))))));
    bufp->fullBit(oldp+2729,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x27U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x27U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x27U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x27U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x27U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x27U)))))));
    bufp->fullBit(oldp+2730,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x28U)))));
    bufp->fullBit(oldp+2731,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x28U)))));
    bufp->fullBit(oldp+2732,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x28U)))));
    bufp->fullBit(oldp+2733,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x28U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x28U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x28U))))));
    bufp->fullBit(oldp+2734,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x28U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x28U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x28U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x28U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x28U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x28U)))))));
    bufp->fullBit(oldp+2735,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x29U)))));
    bufp->fullBit(oldp+2736,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x29U)))));
    bufp->fullBit(oldp+2737,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x29U)))));
    bufp->fullBit(oldp+2738,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x29U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x29U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x29U))))));
    bufp->fullBit(oldp+2739,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x29U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x29U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x29U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x29U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x29U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x29U)))))));
    bufp->fullBit(oldp+2740,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x2aU)))));
    bufp->fullBit(oldp+2741,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x2aU)))));
    bufp->fullBit(oldp+2742,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x2aU)))));
    bufp->fullBit(oldp+2743,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x2aU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x2aU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x2aU))))));
    bufp->fullBit(oldp+2744,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x2aU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x2aU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x2aU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x2aU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x2aU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x2aU)))))));
    bufp->fullBit(oldp+2745,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x2bU)))));
    bufp->fullBit(oldp+2746,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x2bU)))));
    bufp->fullBit(oldp+2747,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x2bU)))));
    bufp->fullBit(oldp+2748,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x2bU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x2bU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x2bU))))));
    bufp->fullBit(oldp+2749,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x2bU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x2bU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x2bU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x2bU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x2bU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x2bU)))))));
    bufp->fullBit(oldp+2750,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x2cU)))));
    bufp->fullBit(oldp+2751,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x2cU)))));
    bufp->fullBit(oldp+2752,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x2cU)))));
    bufp->fullBit(oldp+2753,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x2cU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x2cU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x2cU))))));
    bufp->fullBit(oldp+2754,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x2cU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x2cU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x2cU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x2cU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x2cU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x2cU)))))));
    bufp->fullBit(oldp+2755,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x2dU)))));
    bufp->fullBit(oldp+2756,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x2dU)))));
    bufp->fullBit(oldp+2757,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x2dU)))));
    bufp->fullBit(oldp+2758,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x2dU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x2dU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x2dU))))));
    bufp->fullBit(oldp+2759,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x2dU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x2dU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x2dU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x2dU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x2dU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x2dU)))))));
    bufp->fullBit(oldp+2760,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x2eU)))));
    bufp->fullBit(oldp+2761,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x2eU)))));
    bufp->fullBit(oldp+2762,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x2eU)))));
    bufp->fullBit(oldp+2763,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x2eU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x2eU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x2eU))))));
    bufp->fullBit(oldp+2764,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x2eU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x2eU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x2eU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x2eU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x2eU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x2eU)))))));
    bufp->fullBit(oldp+2765,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x2fU)))));
    bufp->fullBit(oldp+2766,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x2fU)))));
    bufp->fullBit(oldp+2767,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x2fU)))));
    bufp->fullBit(oldp+2768,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x2fU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x2fU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x2fU))))));
    bufp->fullBit(oldp+2769,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x2fU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x2fU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x2fU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x2fU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x2fU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x2fU)))))));
    bufp->fullBit(oldp+2770,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x30U)))));
    bufp->fullBit(oldp+2771,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x30U)))));
    bufp->fullBit(oldp+2772,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x30U)))));
    bufp->fullBit(oldp+2773,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x30U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x30U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x30U))))));
    bufp->fullBit(oldp+2774,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x30U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x30U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x30U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x30U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x30U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x30U)))))));
    bufp->fullBit(oldp+2775,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x31U)))));
    bufp->fullBit(oldp+2776,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x31U)))));
    bufp->fullBit(oldp+2777,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x31U)))));
    bufp->fullBit(oldp+2778,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x31U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x31U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x31U))))));
    bufp->fullBit(oldp+2779,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x31U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x31U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x31U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x31U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x31U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x31U)))))));
    bufp->fullBit(oldp+2780,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x32U)))));
    bufp->fullBit(oldp+2781,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x32U)))));
    bufp->fullBit(oldp+2782,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x32U)))));
    bufp->fullBit(oldp+2783,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x32U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x32U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x32U))))));
    bufp->fullBit(oldp+2784,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x32U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x32U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x32U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x32U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x32U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x32U)))))));
    bufp->fullBit(oldp+2785,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x33U)))));
    bufp->fullBit(oldp+2786,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x33U)))));
    bufp->fullBit(oldp+2787,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x33U)))));
    bufp->fullBit(oldp+2788,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x33U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x33U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x33U))))));
    bufp->fullBit(oldp+2789,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x33U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x33U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x33U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x33U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x33U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x33U)))))));
    bufp->fullBit(oldp+2790,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x34U)))));
    bufp->fullBit(oldp+2791,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x34U)))));
    bufp->fullBit(oldp+2792,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x34U)))));
    bufp->fullBit(oldp+2793,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x34U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x34U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x34U))))));
    bufp->fullBit(oldp+2794,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x34U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x34U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x34U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x34U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x34U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x34U)))))));
    bufp->fullBit(oldp+2795,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x35U)))));
    bufp->fullBit(oldp+2796,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x35U)))));
    bufp->fullBit(oldp+2797,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x35U)))));
    bufp->fullBit(oldp+2798,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x35U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x35U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x35U))))));
    bufp->fullBit(oldp+2799,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x35U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x35U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x35U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x35U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x35U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x35U)))))));
    bufp->fullBit(oldp+2800,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x36U)))));
    bufp->fullBit(oldp+2801,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x36U)))));
    bufp->fullBit(oldp+2802,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x36U)))));
    bufp->fullBit(oldp+2803,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x36U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x36U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x36U))))));
    bufp->fullBit(oldp+2804,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x36U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x36U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x36U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x36U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x36U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x36U)))))));
    bufp->fullBit(oldp+2805,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x37U)))));
    bufp->fullBit(oldp+2806,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x37U)))));
    bufp->fullBit(oldp+2807,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x37U)))));
    bufp->fullBit(oldp+2808,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x37U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x37U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x37U))))));
    bufp->fullBit(oldp+2809,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x37U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x37U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x37U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x37U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x37U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x37U)))))));
    bufp->fullBit(oldp+2810,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x38U)))));
    bufp->fullBit(oldp+2811,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x38U)))));
    bufp->fullBit(oldp+2812,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x38U)))));
    bufp->fullBit(oldp+2813,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x38U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x38U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x38U))))));
    bufp->fullBit(oldp+2814,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x38U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x38U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x38U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x38U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x38U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x38U)))))));
    bufp->fullBit(oldp+2815,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x39U)))));
    bufp->fullBit(oldp+2816,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x39U)))));
    bufp->fullBit(oldp+2817,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x39U)))));
    bufp->fullBit(oldp+2818,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x39U)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x39U))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x39U))))));
    bufp->fullBit(oldp+2819,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x39U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x39U))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x39U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x39U)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x39U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x39U)))))));
    bufp->fullBit(oldp+2820,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x3aU)))));
    bufp->fullBit(oldp+2821,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x3aU)))));
    bufp->fullBit(oldp+2822,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x3aU)))));
    bufp->fullBit(oldp+2823,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x3aU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x3aU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x3aU))))));
    bufp->fullBit(oldp+2824,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x3aU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x3aU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x3aU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x3aU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x3aU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x3aU)))))));
    bufp->fullBit(oldp+2825,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x3bU)))));
    bufp->fullBit(oldp+2826,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x3bU)))));
    bufp->fullBit(oldp+2827,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x3bU)))));
    bufp->fullBit(oldp+2828,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x3bU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x3bU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x3bU))))));
    bufp->fullBit(oldp+2829,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x3bU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x3bU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x3bU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x3bU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x3bU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x3bU)))))));
    bufp->fullBit(oldp+2830,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x3cU)))));
    bufp->fullBit(oldp+2831,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x3cU)))));
    bufp->fullBit(oldp+2832,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x3cU)))));
    bufp->fullBit(oldp+2833,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x3cU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x3cU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x3cU))))));
    bufp->fullBit(oldp+2834,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x3cU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x3cU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x3cU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x3cU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x3cU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x3cU)))))));
    bufp->fullBit(oldp+2835,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x3dU)))));
    bufp->fullBit(oldp+2836,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x3dU)))));
    bufp->fullBit(oldp+2837,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x3dU)))));
    bufp->fullBit(oldp+2838,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x3dU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x3dU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x3dU))))));
    bufp->fullBit(oldp+2839,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x3dU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x3dU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x3dU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x3dU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x3dU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x3dU)))))));
    bufp->fullBit(oldp+2840,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x3eU)))));
    bufp->fullBit(oldp+2841,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x3eU)))));
    bufp->fullBit(oldp+2842,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x3eU)))));
    bufp->fullBit(oldp+2843,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                              >> 0x3eU)) 
                                     ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                >> 0x3eU))) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x3eU))))));
    bufp->fullBit(oldp+2844,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x3eU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x3eU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x3eU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x3eU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x3eU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x3eU)))))));
    bufp->fullBit(oldp+2845,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                            >> 0x3fU)))));
    bufp->fullBit(oldp+2846,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                            >> 0x3fU)))));
    bufp->fullBit(oldp+2847,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                            >> 0x3fU)))));
    bufp->fullBit(oldp+2848,((IData)((((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                        ^ vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B) 
                                       ^ vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin) 
                                      >> 0x3fU))));
    bufp->fullBit(oldp+2849,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                               >> 0x3fU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x3fU))) 
                                     | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                                 >> 0x3fU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                   >> 0x3fU)))) 
                                    | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                                >> 0x3fU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                                  >> 0x3fU)))))));
    bufp->fullBit(oldp+2850,((1U & ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A) 
                                    ^ (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B)))));
    bufp->fullBit(oldp+2851,((1U & ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A) 
                                    & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B)))));
    bufp->fullBit(oldp+2852,((1U & ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B) 
                                    & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin)))));
    bufp->fullBit(oldp+2853,((1U & ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A) 
                                    & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin)))));
    bufp->fullBit(oldp+2854,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 1U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 1U))))));
    bufp->fullBit(oldp+2855,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 1U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 1U))))));
    bufp->fullBit(oldp+2856,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 1U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 1U))))));
    bufp->fullBit(oldp+2857,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 1U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 1U))))));
    bufp->fullBit(oldp+2858,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0xaU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+2859,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0xaU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+2860,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0xaU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+2861,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0xaU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+2862,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0xbU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+2863,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0xbU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+2864,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0xbU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+2865,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0xbU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+2866,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0xcU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+2867,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0xcU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+2868,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0xcU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+2869,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0xcU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+2870,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0xdU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+2871,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0xdU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+2872,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0xdU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+2873,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0xdU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+2874,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0xeU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+2875,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0xeU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+2876,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0xeU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+2877,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0xeU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+2878,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0xfU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+2879,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0xfU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+2880,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0xfU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+2881,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0xfU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+2882,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x10U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+2883,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x10U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+2884,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x10U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+2885,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x10U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+2886,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x11U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+2887,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x11U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+2888,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x11U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+2889,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x11U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+2890,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x12U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+2891,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x12U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+2892,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x12U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+2893,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x12U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+2894,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x13U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+2895,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x13U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+2896,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x13U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+2897,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x13U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+2898,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 2U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 2U))))));
    bufp->fullBit(oldp+2899,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 2U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 2U))))));
    bufp->fullBit(oldp+2900,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 2U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 2U))))));
    bufp->fullBit(oldp+2901,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 2U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 2U))))));
    bufp->fullBit(oldp+2902,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x14U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+2903,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x14U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+2904,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x14U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+2905,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x14U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+2906,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x15U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+2907,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x15U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+2908,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x15U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+2909,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x15U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+2910,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x16U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+2911,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x16U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+2912,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x16U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+2913,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x16U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+2914,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x17U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+2915,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x17U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+2916,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x17U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+2917,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x17U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+2918,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x18U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+2919,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x18U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+2920,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x18U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+2921,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x18U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+2922,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x19U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+2923,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x19U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+2924,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x19U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+2925,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x19U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+2926,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x1aU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+2927,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x1aU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+2928,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x1aU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+2929,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x1aU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+2930,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x1bU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+2931,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x1bU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+2932,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x1bU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+2933,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x1bU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+2934,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x1cU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+2935,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x1cU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+2936,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x1cU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+2937,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x1cU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+2938,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x1dU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+2939,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x1dU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+2940,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x1dU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+2941,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x1dU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+2942,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 3U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 3U))))));
    bufp->fullBit(oldp+2943,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 3U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 3U))))));
    bufp->fullBit(oldp+2944,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 3U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 3U))))));
    bufp->fullBit(oldp+2945,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 3U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 3U))))));
    bufp->fullBit(oldp+2946,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x1eU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+2947,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x1eU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+2948,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x1eU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+2949,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x1eU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+2950,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x1fU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+2951,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x1fU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+2952,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x1fU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+2953,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x1fU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+2954,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x20U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+2955,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x20U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+2956,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x20U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+2957,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x20U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+2958,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x21U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+2959,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x21U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+2960,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x21U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+2961,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x21U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+2962,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x22U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x22U))))));
    bufp->fullBit(oldp+2963,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x22U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x22U))))));
    bufp->fullBit(oldp+2964,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x22U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x22U))))));
    bufp->fullBit(oldp+2965,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x22U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x22U))))));
    bufp->fullBit(oldp+2966,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x23U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x23U))))));
    bufp->fullBit(oldp+2967,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x23U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x23U))))));
    bufp->fullBit(oldp+2968,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x23U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x23U))))));
    bufp->fullBit(oldp+2969,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x23U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x23U))))));
    bufp->fullBit(oldp+2970,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x24U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x24U))))));
    bufp->fullBit(oldp+2971,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x24U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x24U))))));
    bufp->fullBit(oldp+2972,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x24U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x24U))))));
    bufp->fullBit(oldp+2973,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x24U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x24U))))));
    bufp->fullBit(oldp+2974,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x25U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x25U))))));
    bufp->fullBit(oldp+2975,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x25U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x25U))))));
    bufp->fullBit(oldp+2976,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x25U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x25U))))));
    bufp->fullBit(oldp+2977,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x25U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x25U))))));
    bufp->fullBit(oldp+2978,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x26U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x26U))))));
    bufp->fullBit(oldp+2979,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x26U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x26U))))));
    bufp->fullBit(oldp+2980,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x26U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x26U))))));
    bufp->fullBit(oldp+2981,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x26U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x26U))))));
    bufp->fullBit(oldp+2982,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x27U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x27U))))));
    bufp->fullBit(oldp+2983,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x27U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x27U))))));
    bufp->fullBit(oldp+2984,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x27U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x27U))))));
    bufp->fullBit(oldp+2985,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x27U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x27U))))));
    bufp->fullBit(oldp+2986,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 4U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 4U))))));
    bufp->fullBit(oldp+2987,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 4U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 4U))))));
    bufp->fullBit(oldp+2988,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 4U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 4U))))));
    bufp->fullBit(oldp+2989,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 4U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 4U))))));
    bufp->fullBit(oldp+2990,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x28U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x28U))))));
    bufp->fullBit(oldp+2991,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x28U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x28U))))));
    bufp->fullBit(oldp+2992,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x28U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x28U))))));
    bufp->fullBit(oldp+2993,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x28U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x28U))))));
    bufp->fullBit(oldp+2994,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x29U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x29U))))));
    bufp->fullBit(oldp+2995,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x29U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x29U))))));
    bufp->fullBit(oldp+2996,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x29U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x29U))))));
    bufp->fullBit(oldp+2997,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x29U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x29U))))));
    bufp->fullBit(oldp+2998,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x2aU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x2aU))))));
    bufp->fullBit(oldp+2999,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x2aU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x2aU))))));
    bufp->fullBit(oldp+3000,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x2aU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x2aU))))));
    bufp->fullBit(oldp+3001,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x2aU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x2aU))))));
    bufp->fullBit(oldp+3002,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x2bU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x2bU))))));
    bufp->fullBit(oldp+3003,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x2bU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x2bU))))));
    bufp->fullBit(oldp+3004,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x2bU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x2bU))))));
    bufp->fullBit(oldp+3005,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x2bU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x2bU))))));
    bufp->fullBit(oldp+3006,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x2cU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x2cU))))));
    bufp->fullBit(oldp+3007,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x2cU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x2cU))))));
    bufp->fullBit(oldp+3008,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x2cU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x2cU))))));
    bufp->fullBit(oldp+3009,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x2cU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x2cU))))));
    bufp->fullBit(oldp+3010,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x2dU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x2dU))))));
    bufp->fullBit(oldp+3011,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x2dU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x2dU))))));
    bufp->fullBit(oldp+3012,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x2dU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x2dU))))));
    bufp->fullBit(oldp+3013,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x2dU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x2dU))))));
    bufp->fullBit(oldp+3014,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x2eU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x2eU))))));
    bufp->fullBit(oldp+3015,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x2eU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x2eU))))));
    bufp->fullBit(oldp+3016,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x2eU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x2eU))))));
    bufp->fullBit(oldp+3017,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x2eU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x2eU))))));
    bufp->fullBit(oldp+3018,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x2fU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x2fU))))));
    bufp->fullBit(oldp+3019,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x2fU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x2fU))))));
    bufp->fullBit(oldp+3020,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x2fU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x2fU))))));
    bufp->fullBit(oldp+3021,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x2fU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x2fU))))));
    bufp->fullBit(oldp+3022,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x30U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x30U))))));
    bufp->fullBit(oldp+3023,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x30U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x30U))))));
    bufp->fullBit(oldp+3024,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x30U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x30U))))));
    bufp->fullBit(oldp+3025,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x30U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x30U))))));
    bufp->fullBit(oldp+3026,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x31U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x31U))))));
    bufp->fullBit(oldp+3027,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x31U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x31U))))));
    bufp->fullBit(oldp+3028,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x31U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x31U))))));
    bufp->fullBit(oldp+3029,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x31U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x31U))))));
    bufp->fullBit(oldp+3030,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 5U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 5U))))));
    bufp->fullBit(oldp+3031,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 5U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 5U))))));
    bufp->fullBit(oldp+3032,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 5U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 5U))))));
    bufp->fullBit(oldp+3033,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 5U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 5U))))));
    bufp->fullBit(oldp+3034,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x32U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x32U))))));
    bufp->fullBit(oldp+3035,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x32U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x32U))))));
    bufp->fullBit(oldp+3036,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x32U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x32U))))));
    bufp->fullBit(oldp+3037,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x32U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x32U))))));
    bufp->fullBit(oldp+3038,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x33U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x33U))))));
    bufp->fullBit(oldp+3039,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x33U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x33U))))));
    bufp->fullBit(oldp+3040,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x33U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x33U))))));
    bufp->fullBit(oldp+3041,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x33U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x33U))))));
    bufp->fullBit(oldp+3042,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x34U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x34U))))));
    bufp->fullBit(oldp+3043,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x34U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x34U))))));
    bufp->fullBit(oldp+3044,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x34U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x34U))))));
    bufp->fullBit(oldp+3045,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x34U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x34U))))));
    bufp->fullBit(oldp+3046,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x35U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x35U))))));
    bufp->fullBit(oldp+3047,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x35U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x35U))))));
    bufp->fullBit(oldp+3048,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x35U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x35U))))));
    bufp->fullBit(oldp+3049,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x35U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x35U))))));
    bufp->fullBit(oldp+3050,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x36U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x36U))))));
    bufp->fullBit(oldp+3051,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x36U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x36U))))));
    bufp->fullBit(oldp+3052,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x36U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x36U))))));
    bufp->fullBit(oldp+3053,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x36U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x36U))))));
    bufp->fullBit(oldp+3054,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x37U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x37U))))));
    bufp->fullBit(oldp+3055,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x37U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x37U))))));
    bufp->fullBit(oldp+3056,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x37U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x37U))))));
    bufp->fullBit(oldp+3057,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x37U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x37U))))));
    bufp->fullBit(oldp+3058,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x38U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x38U))))));
    bufp->fullBit(oldp+3059,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x38U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x38U))))));
    bufp->fullBit(oldp+3060,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x38U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x38U))))));
    bufp->fullBit(oldp+3061,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x38U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x38U))))));
    bufp->fullBit(oldp+3062,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x39U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x39U))))));
    bufp->fullBit(oldp+3063,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x39U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x39U))))));
    bufp->fullBit(oldp+3064,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x39U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x39U))))));
    bufp->fullBit(oldp+3065,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x39U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x39U))))));
    bufp->fullBit(oldp+3066,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x3aU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x3aU))))));
    bufp->fullBit(oldp+3067,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x3aU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x3aU))))));
    bufp->fullBit(oldp+3068,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x3aU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x3aU))))));
    bufp->fullBit(oldp+3069,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x3aU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x3aU))))));
    bufp->fullBit(oldp+3070,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x3bU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x3bU))))));
    bufp->fullBit(oldp+3071,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x3bU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x3bU))))));
    bufp->fullBit(oldp+3072,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x3bU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x3bU))))));
    bufp->fullBit(oldp+3073,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x3bU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x3bU))))));
    bufp->fullBit(oldp+3074,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 6U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 6U))))));
    bufp->fullBit(oldp+3075,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 6U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 6U))))));
    bufp->fullBit(oldp+3076,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 6U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 6U))))));
    bufp->fullBit(oldp+3077,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 6U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 6U))))));
    bufp->fullBit(oldp+3078,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x3cU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x3cU))))));
    bufp->fullBit(oldp+3079,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x3cU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x3cU))))));
    bufp->fullBit(oldp+3080,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x3cU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x3cU))))));
    bufp->fullBit(oldp+3081,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x3cU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x3cU))))));
    bufp->fullBit(oldp+3082,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x3dU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x3dU))))));
    bufp->fullBit(oldp+3083,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x3dU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x3dU))))));
    bufp->fullBit(oldp+3084,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x3dU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x3dU))))));
    bufp->fullBit(oldp+3085,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x3dU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x3dU))))));
    bufp->fullBit(oldp+3086,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x3eU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x3eU))))));
    bufp->fullBit(oldp+3087,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x3eU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 0x3eU))))));
    bufp->fullBit(oldp+3088,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 0x3eU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x3eU))))));
    bufp->fullBit(oldp+3089,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 0x3eU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 0x3eU))))));
    bufp->fullBit(oldp+3090,((IData)(((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                       ^ vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B) 
                                      >> 0x3fU))));
    bufp->fullBit(oldp+3091,((IData)(((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                       & vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B) 
                                      >> 0x3fU))));
    bufp->fullBit(oldp+3092,((IData)(((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                       & vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin) 
                                      >> 0x3fU))));
    bufp->fullBit(oldp+3093,((IData)(((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                       & vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin) 
                                      >> 0x3fU))));
    bufp->fullBit(oldp+3094,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 7U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 7U))))));
    bufp->fullBit(oldp+3095,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 7U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 7U))))));
    bufp->fullBit(oldp+3096,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 7U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 7U))))));
    bufp->fullBit(oldp+3097,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 7U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 7U))))));
    bufp->fullBit(oldp+3098,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 8U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 8U))))));
    bufp->fullBit(oldp+3099,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 8U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 8U))))));
    bufp->fullBit(oldp+3100,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 8U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 8U))))));
    bufp->fullBit(oldp+3101,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 8U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 8U))))));
    bufp->fullBit(oldp+3102,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 9U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 9U))))));
    bufp->fullBit(oldp+3103,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 9U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                               >> 9U))))));
    bufp->fullBit(oldp+3104,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
                                             >> 9U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 9U))))));
    bufp->fullBit(oldp+3105,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
                                             >> 9U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
                                               >> 9U))))));
    bufp->fullBit(oldp+3106,((1U & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A))));
    bufp->fullBit(oldp+3107,((1U & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B))));
    bufp->fullBit(oldp+3108,((1U & ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A) 
                                    ^ (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B)))));
    bufp->fullBit(oldp+3109,((1U & ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A) 
                                    & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B)))));
    bufp->fullBit(oldp+3110,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 1U)))));
    bufp->fullBit(oldp+3111,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 1U)))));
    bufp->fullBit(oldp+3112,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 1U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 1U))))));
    bufp->fullBit(oldp+3113,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 1U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 1U))))));
    bufp->fullBit(oldp+3114,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 2U)))));
    bufp->fullBit(oldp+3115,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 2U)))));
    bufp->fullBit(oldp+3116,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 2U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 2U))))));
    bufp->fullBit(oldp+3117,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 2U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 2U))))));
    bufp->fullBit(oldp+3118,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 3U)))));
    bufp->fullBit(oldp+3119,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 3U)))));
    bufp->fullBit(oldp+3120,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 3U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 3U))))));
    bufp->fullBit(oldp+3121,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 3U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 3U))))));
    bufp->fullBit(oldp+3122,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 4U)))));
    bufp->fullBit(oldp+3123,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 4U)))));
    bufp->fullBit(oldp+3124,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 4U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 4U))))));
    bufp->fullBit(oldp+3125,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 4U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 4U))))));
    bufp->fullBit(oldp+3126,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 5U)))));
    bufp->fullBit(oldp+3127,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 5U)))));
    bufp->fullBit(oldp+3128,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 5U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 5U))))));
    bufp->fullBit(oldp+3129,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 5U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 5U))))));
    bufp->fullBit(oldp+3130,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 6U)))));
    bufp->fullBit(oldp+3131,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 6U)))));
    bufp->fullBit(oldp+3132,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 6U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 6U))))));
    bufp->fullBit(oldp+3133,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 6U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 6U))))));
    bufp->fullBit(oldp+3134,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 7U)))));
    bufp->fullBit(oldp+3135,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 7U)))));
    bufp->fullBit(oldp+3136,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 7U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 7U))))));
    bufp->fullBit(oldp+3137,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 7U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 7U))))));
    bufp->fullBit(oldp+3138,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 8U)))));
    bufp->fullBit(oldp+3139,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 8U)))));
    bufp->fullBit(oldp+3140,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 8U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 8U))))));
    bufp->fullBit(oldp+3141,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 8U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 8U))))));
    bufp->fullBit(oldp+3142,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 9U)))));
    bufp->fullBit(oldp+3143,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 9U)))));
    bufp->fullBit(oldp+3144,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 9U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 9U))))));
    bufp->fullBit(oldp+3145,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 9U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 9U))))));
    bufp->fullBit(oldp+3146,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0xaU)))));
    bufp->fullBit(oldp+3147,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0xaU)))));
    bufp->fullBit(oldp+3148,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0xaU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+3149,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0xaU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+3150,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0xbU)))));
    bufp->fullBit(oldp+3151,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0xbU)))));
    bufp->fullBit(oldp+3152,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0xbU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+3153,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0xbU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+3154,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0xcU)))));
    bufp->fullBit(oldp+3155,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0xcU)))));
    bufp->fullBit(oldp+3156,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0xcU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+3157,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0xcU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+3158,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0xdU)))));
    bufp->fullBit(oldp+3159,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0xdU)))));
    bufp->fullBit(oldp+3160,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0xdU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+3161,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0xdU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+3162,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0xeU)))));
    bufp->fullBit(oldp+3163,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0xeU)))));
    bufp->fullBit(oldp+3164,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0xeU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+3165,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0xeU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+3166,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+3167,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+3168,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0xfU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+3169,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0xfU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+3170,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x10U)))));
    bufp->fullBit(oldp+3171,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x10U)))));
    bufp->fullBit(oldp+3172,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x10U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+3173,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x10U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+3174,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x11U)))));
    bufp->fullBit(oldp+3175,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x11U)))));
    bufp->fullBit(oldp+3176,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x11U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+3177,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x11U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+3178,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x12U)))));
    bufp->fullBit(oldp+3179,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x12U)))));
    bufp->fullBit(oldp+3180,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x12U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+3181,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x12U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+3182,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x13U)))));
    bufp->fullBit(oldp+3183,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x13U)))));
    bufp->fullBit(oldp+3184,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x13U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+3185,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x13U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+3186,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+3187,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+3188,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x14U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+3189,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x14U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+3190,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x15U)))));
    bufp->fullBit(oldp+3191,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x15U)))));
    bufp->fullBit(oldp+3192,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x15U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+3193,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x15U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+3194,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x16U)))));
    bufp->fullBit(oldp+3195,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x16U)))));
    bufp->fullBit(oldp+3196,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x16U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+3197,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x16U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+3198,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+3199,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+3200,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x17U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+3201,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x17U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+3202,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x18U)))));
    bufp->fullBit(oldp+3203,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x18U)))));
    bufp->fullBit(oldp+3204,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x18U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+3205,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x18U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+3206,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+3207,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+3208,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x19U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+3209,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x19U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+3210,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+3211,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+3212,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x1aU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+3213,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x1aU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+3214,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+3215,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+3216,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x1bU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+3217,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x1bU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+3218,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x1cU)))));
    bufp->fullBit(oldp+3219,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x1cU)))));
    bufp->fullBit(oldp+3220,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x1cU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+3221,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x1cU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+3222,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x1dU)))));
    bufp->fullBit(oldp+3223,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x1dU)))));
    bufp->fullBit(oldp+3224,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x1dU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+3225,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x1dU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+3226,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x1eU)))));
    bufp->fullBit(oldp+3227,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x1eU)))));
    bufp->fullBit(oldp+3228,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x1eU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+3229,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x1eU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+3230,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3231,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3232,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x1fU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+3233,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x1fU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+3234,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x20U)))));
    bufp->fullBit(oldp+3235,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x20U)))));
    bufp->fullBit(oldp+3236,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x20U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+3237,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x20U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+3238,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x21U)))));
    bufp->fullBit(oldp+3239,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x21U)))));
    bufp->fullBit(oldp+3240,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x21U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+3241,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x21U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+3242,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x22U)))));
    bufp->fullBit(oldp+3243,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x22U)))));
    bufp->fullBit(oldp+3244,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x22U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x22U))))));
    bufp->fullBit(oldp+3245,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x22U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x22U))))));
    bufp->fullBit(oldp+3246,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x23U)))));
    bufp->fullBit(oldp+3247,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x23U)))));
    bufp->fullBit(oldp+3248,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x23U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x23U))))));
    bufp->fullBit(oldp+3249,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x23U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x23U))))));
    bufp->fullBit(oldp+3250,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x24U)))));
    bufp->fullBit(oldp+3251,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x24U)))));
    bufp->fullBit(oldp+3252,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x24U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x24U))))));
    bufp->fullBit(oldp+3253,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x24U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x24U))))));
    bufp->fullBit(oldp+3254,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x25U)))));
    bufp->fullBit(oldp+3255,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x25U)))));
    bufp->fullBit(oldp+3256,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x25U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x25U))))));
    bufp->fullBit(oldp+3257,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x25U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x25U))))));
    bufp->fullBit(oldp+3258,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x26U)))));
    bufp->fullBit(oldp+3259,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x26U)))));
    bufp->fullBit(oldp+3260,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x26U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x26U))))));
    bufp->fullBit(oldp+3261,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x26U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x26U))))));
    bufp->fullBit(oldp+3262,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x27U)))));
    bufp->fullBit(oldp+3263,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x27U)))));
    bufp->fullBit(oldp+3264,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x27U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x27U))))));
    bufp->fullBit(oldp+3265,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x27U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x27U))))));
    bufp->fullBit(oldp+3266,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x28U)))));
    bufp->fullBit(oldp+3267,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x28U)))));
    bufp->fullBit(oldp+3268,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x28U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x28U))))));
    bufp->fullBit(oldp+3269,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x28U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x28U))))));
    bufp->fullBit(oldp+3270,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x29U)))));
    bufp->fullBit(oldp+3271,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x29U)))));
    bufp->fullBit(oldp+3272,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x29U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x29U))))));
    bufp->fullBit(oldp+3273,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x29U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x29U))))));
    bufp->fullBit(oldp+3274,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x2aU)))));
    bufp->fullBit(oldp+3275,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x2aU)))));
    bufp->fullBit(oldp+3276,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x2aU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x2aU))))));
    bufp->fullBit(oldp+3277,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x2aU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x2aU))))));
    bufp->fullBit(oldp+3278,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x2bU)))));
    bufp->fullBit(oldp+3279,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x2bU)))));
    bufp->fullBit(oldp+3280,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x2bU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x2bU))))));
    bufp->fullBit(oldp+3281,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x2bU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x2bU))))));
    bufp->fullBit(oldp+3282,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x2cU)))));
    bufp->fullBit(oldp+3283,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x2cU)))));
    bufp->fullBit(oldp+3284,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x2cU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x2cU))))));
    bufp->fullBit(oldp+3285,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x2cU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x2cU))))));
    bufp->fullBit(oldp+3286,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x2dU)))));
    bufp->fullBit(oldp+3287,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x2dU)))));
    bufp->fullBit(oldp+3288,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x2dU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x2dU))))));
    bufp->fullBit(oldp+3289,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x2dU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x2dU))))));
    bufp->fullBit(oldp+3290,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x2eU)))));
    bufp->fullBit(oldp+3291,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x2eU)))));
    bufp->fullBit(oldp+3292,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x2eU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x2eU))))));
    bufp->fullBit(oldp+3293,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x2eU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x2eU))))));
    bufp->fullBit(oldp+3294,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x2fU)))));
    bufp->fullBit(oldp+3295,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x2fU)))));
    bufp->fullBit(oldp+3296,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x2fU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x2fU))))));
    bufp->fullBit(oldp+3297,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x2fU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x2fU))))));
    bufp->fullBit(oldp+3298,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x30U)))));
    bufp->fullBit(oldp+3299,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x30U)))));
    bufp->fullBit(oldp+3300,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x30U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x30U))))));
    bufp->fullBit(oldp+3301,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x30U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x30U))))));
    bufp->fullBit(oldp+3302,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x31U)))));
    bufp->fullBit(oldp+3303,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x31U)))));
    bufp->fullBit(oldp+3304,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x31U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x31U))))));
    bufp->fullBit(oldp+3305,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x31U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x31U))))));
    bufp->fullBit(oldp+3306,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x32U)))));
    bufp->fullBit(oldp+3307,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x32U)))));
    bufp->fullBit(oldp+3308,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x32U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x32U))))));
    bufp->fullBit(oldp+3309,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x32U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x32U))))));
    bufp->fullBit(oldp+3310,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x33U)))));
    bufp->fullBit(oldp+3311,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x33U)))));
    bufp->fullBit(oldp+3312,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x33U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x33U))))));
    bufp->fullBit(oldp+3313,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x33U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x33U))))));
    bufp->fullBit(oldp+3314,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x34U)))));
    bufp->fullBit(oldp+3315,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x34U)))));
    bufp->fullBit(oldp+3316,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x34U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x34U))))));
    bufp->fullBit(oldp+3317,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x34U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x34U))))));
    bufp->fullBit(oldp+3318,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x35U)))));
    bufp->fullBit(oldp+3319,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x35U)))));
    bufp->fullBit(oldp+3320,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x35U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x35U))))));
    bufp->fullBit(oldp+3321,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x35U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x35U))))));
    bufp->fullBit(oldp+3322,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x36U)))));
    bufp->fullBit(oldp+3323,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x36U)))));
    bufp->fullBit(oldp+3324,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x36U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x36U))))));
    bufp->fullBit(oldp+3325,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x36U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x36U))))));
    bufp->fullBit(oldp+3326,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x37U)))));
    bufp->fullBit(oldp+3327,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x37U)))));
    bufp->fullBit(oldp+3328,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x37U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x37U))))));
    bufp->fullBit(oldp+3329,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x37U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x37U))))));
    bufp->fullBit(oldp+3330,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x38U)))));
    bufp->fullBit(oldp+3331,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x38U)))));
    bufp->fullBit(oldp+3332,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x38U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x38U))))));
    bufp->fullBit(oldp+3333,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x38U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x38U))))));
    bufp->fullBit(oldp+3334,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x39U)))));
    bufp->fullBit(oldp+3335,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x39U)))));
    bufp->fullBit(oldp+3336,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x39U)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x39U))))));
    bufp->fullBit(oldp+3337,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x39U)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x39U))))));
    bufp->fullBit(oldp+3338,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x3aU)))));
    bufp->fullBit(oldp+3339,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x3aU)))));
    bufp->fullBit(oldp+3340,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x3aU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x3aU))))));
    bufp->fullBit(oldp+3341,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x3aU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x3aU))))));
    bufp->fullBit(oldp+3342,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x3bU)))));
    bufp->fullBit(oldp+3343,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x3bU)))));
    bufp->fullBit(oldp+3344,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x3bU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x3bU))))));
    bufp->fullBit(oldp+3345,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x3bU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x3bU))))));
    bufp->fullBit(oldp+3346,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x3cU)))));
    bufp->fullBit(oldp+3347,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x3cU)))));
    bufp->fullBit(oldp+3348,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x3cU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x3cU))))));
    bufp->fullBit(oldp+3349,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x3cU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x3cU))))));
    bufp->fullBit(oldp+3350,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x3dU)))));
    bufp->fullBit(oldp+3351,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x3dU)))));
    bufp->fullBit(oldp+3352,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x3dU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x3dU))))));
    bufp->fullBit(oldp+3353,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x3dU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x3dU))))));
    bufp->fullBit(oldp+3354,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x3eU)))));
    bufp->fullBit(oldp+3355,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x3eU)))));
    bufp->fullBit(oldp+3356,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x3eU)) 
                                    ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x3eU))))));
    bufp->fullBit(oldp+3357,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                             >> 0x3eU)) 
                                    & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                               >> 0x3eU))))));
    bufp->fullBit(oldp+3358,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                            >> 0x3fU)))));
    bufp->fullBit(oldp+3359,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
                                            >> 0x3fU)))));
    bufp->fullBit(oldp+3360,((IData)(((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                       ^ vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B) 
                                      >> 0x3fU))));
    bufp->fullBit(oldp+3361,((IData)(((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
                                       & vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B) 
                                      >> 0x3fU))));
    bufp->fullBit(oldp+3362,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum))));
    bufp->fullBit(oldp+3363,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum))));
    bufp->fullBit(oldp+3364,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum))));
    bufp->fullBit(oldp+3365,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum) 
                                     ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum)) 
                                    ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum)))));
    bufp->fullBit(oldp+3366,((1U & ((((IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum) 
                                      & (IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum)) 
                                     | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum) 
                                        & (IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum))) 
                                    | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum) 
                                       & (IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum))))));
    bufp->fullBit(oldp+3367,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 1U)))));
    bufp->fullBit(oldp+3368,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 1U)))));
    bufp->fullBit(oldp+3369,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 1U)))));
    bufp->fullBit(oldp+3370,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 1U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 1U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 1U))))));
    bufp->fullBit(oldp+3371,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 1U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 1U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 1U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 1U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 1U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 1U)))))));
    bufp->fullBit(oldp+3372,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 2U)))));
    bufp->fullBit(oldp+3373,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 2U)))));
    bufp->fullBit(oldp+3374,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 2U)))));
    bufp->fullBit(oldp+3375,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 2U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 2U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 2U))))));
    bufp->fullBit(oldp+3376,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 2U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 2U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 2U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 2U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 2U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 2U)))))));
    bufp->fullBit(oldp+3377,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 3U)))));
    bufp->fullBit(oldp+3378,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 3U)))));
    bufp->fullBit(oldp+3379,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 3U)))));
    bufp->fullBit(oldp+3380,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 3U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 3U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 3U))))));
    bufp->fullBit(oldp+3381,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 3U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 3U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 3U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 3U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 3U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 3U)))))));
    bufp->fullBit(oldp+3382,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 4U)))));
    bufp->fullBit(oldp+3383,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 4U)))));
    bufp->fullBit(oldp+3384,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 4U)))));
    bufp->fullBit(oldp+3385,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 4U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 4U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 4U))))));
    bufp->fullBit(oldp+3386,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 4U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 4U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 4U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 4U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 4U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+3387,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 5U)))));
    bufp->fullBit(oldp+3388,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 5U)))));
    bufp->fullBit(oldp+3389,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 5U)))));
    bufp->fullBit(oldp+3390,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 5U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 5U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 5U))))));
    bufp->fullBit(oldp+3391,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 5U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 5U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 5U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 5U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 5U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 5U)))))));
    bufp->fullBit(oldp+3392,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 6U)))));
    bufp->fullBit(oldp+3393,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 6U)))));
    bufp->fullBit(oldp+3394,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 6U)))));
    bufp->fullBit(oldp+3395,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 6U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 6U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 6U))))));
    bufp->fullBit(oldp+3396,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 6U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 6U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 6U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 6U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 6U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 6U)))))));
    bufp->fullBit(oldp+3397,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 7U)))));
    bufp->fullBit(oldp+3398,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 7U)))));
    bufp->fullBit(oldp+3399,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 7U)))));
    bufp->fullBit(oldp+3400,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 7U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 7U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 7U))))));
    bufp->fullBit(oldp+3401,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 7U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 7U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 7U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 7U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 7U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 7U)))))));
    bufp->fullBit(oldp+3402,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 8U)))));
    bufp->fullBit(oldp+3403,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 8U)))));
    bufp->fullBit(oldp+3404,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 8U)))));
    bufp->fullBit(oldp+3405,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 8U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 8U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 8U))))));
    bufp->fullBit(oldp+3406,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 8U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 8U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 8U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 8U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 8U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+3407,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 9U)))));
    bufp->fullBit(oldp+3408,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 9U)))));
    bufp->fullBit(oldp+3409,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 9U)))));
    bufp->fullBit(oldp+3410,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 9U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 9U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 9U))))));
    bufp->fullBit(oldp+3411,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 9U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 9U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 9U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 9U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 9U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+3412,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0xaU)))));
    bufp->fullBit(oldp+3413,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0xaU)))));
    bufp->fullBit(oldp+3414,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0xaU)))));
    bufp->fullBit(oldp+3415,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0xaU)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0xaU))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+3416,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0xaU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0xaU))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0xaU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0xaU)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0xaU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+3417,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0xbU)))));
    bufp->fullBit(oldp+3418,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0xbU)))));
    bufp->fullBit(oldp+3419,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0xbU)))));
    bufp->fullBit(oldp+3420,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0xbU)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0xbU))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+3421,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0xbU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0xbU))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0xbU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0xbU)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0xbU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+3422,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0xcU)))));
    bufp->fullBit(oldp+3423,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0xcU)))));
    bufp->fullBit(oldp+3424,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0xcU)))));
    bufp->fullBit(oldp+3425,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0xcU)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0xcU))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+3426,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0xcU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0xcU))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0xcU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0xcU)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0xcU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0xcU)))))));
    bufp->fullBit(oldp+3427,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0xdU)))));
    bufp->fullBit(oldp+3428,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0xdU)))));
    bufp->fullBit(oldp+3429,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0xdU)))));
    bufp->fullBit(oldp+3430,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0xdU)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0xdU))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+3431,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0xdU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0xdU))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0xdU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0xdU)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0xdU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0xdU)))))));
    bufp->fullBit(oldp+3432,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0xeU)))));
    bufp->fullBit(oldp+3433,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0xeU)))));
    bufp->fullBit(oldp+3434,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0xeU)))));
    bufp->fullBit(oldp+3435,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0xeU)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0xeU))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+3436,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0xeU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0xeU))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0xeU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0xeU)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0xeU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0xeU)))))));
    bufp->fullBit(oldp+3437,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+3438,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+3439,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0xfU)))));
    bufp->fullBit(oldp+3440,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0xfU)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0xfU))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+3441,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0xfU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0xfU))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0xfU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0xfU)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0xfU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0xfU)))))));
    bufp->fullBit(oldp+3442,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x10U)))));
    bufp->fullBit(oldp+3443,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x10U)))));
    bufp->fullBit(oldp+3444,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x10U)))));
    bufp->fullBit(oldp+3445,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x10U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x10U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+3446,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x10U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x10U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x10U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x10U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x10U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x10U)))))));
    bufp->fullBit(oldp+3447,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x11U)))));
    bufp->fullBit(oldp+3448,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x11U)))));
    bufp->fullBit(oldp+3449,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x11U)))));
    bufp->fullBit(oldp+3450,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x11U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x11U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+3451,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x11U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x11U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x11U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x11U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x11U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x11U)))))));
    bufp->fullBit(oldp+3452,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x12U)))));
    bufp->fullBit(oldp+3453,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x12U)))));
    bufp->fullBit(oldp+3454,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x12U)))));
    bufp->fullBit(oldp+3455,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x12U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x12U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+3456,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x12U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x12U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x12U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x12U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x12U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x12U)))))));
    bufp->fullBit(oldp+3457,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x13U)))));
    bufp->fullBit(oldp+3458,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x13U)))));
    bufp->fullBit(oldp+3459,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x13U)))));
    bufp->fullBit(oldp+3460,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x13U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x13U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+3461,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x13U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x13U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x13U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x13U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x13U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x13U)))))));
    bufp->fullBit(oldp+3462,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+3463,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+3464,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+3465,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x14U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x14U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+3466,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x14U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x14U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x14U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x14U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x14U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x14U)))))));
    bufp->fullBit(oldp+3467,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x15U)))));
    bufp->fullBit(oldp+3468,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x15U)))));
    bufp->fullBit(oldp+3469,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x15U)))));
    bufp->fullBit(oldp+3470,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x15U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x15U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+3471,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x15U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x15U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x15U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x15U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x15U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x15U)))))));
    bufp->fullBit(oldp+3472,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x16U)))));
    bufp->fullBit(oldp+3473,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x16U)))));
    bufp->fullBit(oldp+3474,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x16U)))));
    bufp->fullBit(oldp+3475,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x16U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x16U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+3476,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x16U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x16U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x16U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x16U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x16U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x16U)))))));
    bufp->fullBit(oldp+3477,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+3478,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+3479,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+3480,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x17U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x17U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+3481,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x17U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x17U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x17U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x17U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x17U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x17U)))))));
    bufp->fullBit(oldp+3482,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x18U)))));
    bufp->fullBit(oldp+3483,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x18U)))));
    bufp->fullBit(oldp+3484,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x18U)))));
    bufp->fullBit(oldp+3485,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x18U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x18U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+3486,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x18U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x18U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x18U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x18U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x18U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x18U)))))));
    bufp->fullBit(oldp+3487,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+3488,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+3489,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+3490,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x19U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x19U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+3491,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x19U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x19U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x19U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x19U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x19U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+3492,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+3493,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+3494,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+3495,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x1aU)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x1aU))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+3496,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x1aU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x1aU))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x1aU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x1aU)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x1aU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x1aU)))))));
    bufp->fullBit(oldp+3497,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+3498,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+3499,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+3500,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x1bU)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x1bU))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+3501,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x1bU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x1bU))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x1bU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x1bU)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x1bU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x1bU)))))));
    bufp->fullBit(oldp+3502,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x1cU)))));
    bufp->fullBit(oldp+3503,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x1cU)))));
    bufp->fullBit(oldp+3504,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x1cU)))));
    bufp->fullBit(oldp+3505,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x1cU)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x1cU))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+3506,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x1cU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x1cU))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x1cU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x1cU)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x1cU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x1cU)))))));
    bufp->fullBit(oldp+3507,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x1dU)))));
    bufp->fullBit(oldp+3508,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x1dU)))));
    bufp->fullBit(oldp+3509,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x1dU)))));
    bufp->fullBit(oldp+3510,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x1dU)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x1dU))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+3511,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x1dU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x1dU))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x1dU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x1dU)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x1dU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x1dU)))))));
    bufp->fullBit(oldp+3512,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x1eU)))));
    bufp->fullBit(oldp+3513,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x1eU)))));
    bufp->fullBit(oldp+3514,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x1eU)))));
    bufp->fullBit(oldp+3515,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x1eU)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x1eU))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+3516,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x1eU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x1eU))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x1eU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x1eU)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x1eU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x1eU)))))));
    bufp->fullBit(oldp+3517,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3518,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3519,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+3520,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x1fU)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x1fU))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+3521,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x1fU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x1fU))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x1fU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x1fU)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x1fU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+3522,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x20U)))));
    bufp->fullBit(oldp+3523,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x20U)))));
    bufp->fullBit(oldp+3524,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x20U)))));
    bufp->fullBit(oldp+3525,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x20U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x20U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+3526,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x20U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x20U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x20U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x20U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x20U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x20U)))))));
    bufp->fullBit(oldp+3527,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x21U)))));
    bufp->fullBit(oldp+3528,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x21U)))));
    bufp->fullBit(oldp+3529,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x21U)))));
    bufp->fullBit(oldp+3530,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x21U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x21U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+3531,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x21U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x21U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x21U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x21U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x21U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x21U)))))));
    bufp->fullBit(oldp+3532,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x22U)))));
    bufp->fullBit(oldp+3533,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x22U)))));
    bufp->fullBit(oldp+3534,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x22U)))));
    bufp->fullBit(oldp+3535,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x22U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x22U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x22U))))));
    bufp->fullBit(oldp+3536,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x22U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x22U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x22U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x22U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x22U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x22U)))))));
    bufp->fullBit(oldp+3537,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x23U)))));
    bufp->fullBit(oldp+3538,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x23U)))));
    bufp->fullBit(oldp+3539,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x23U)))));
    bufp->fullBit(oldp+3540,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x23U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x23U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x23U))))));
    bufp->fullBit(oldp+3541,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x23U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x23U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x23U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x23U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x23U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x23U)))))));
    bufp->fullBit(oldp+3542,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x24U)))));
    bufp->fullBit(oldp+3543,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x24U)))));
    bufp->fullBit(oldp+3544,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x24U)))));
    bufp->fullBit(oldp+3545,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x24U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x24U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x24U))))));
    bufp->fullBit(oldp+3546,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x24U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x24U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x24U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x24U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x24U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x24U)))))));
    bufp->fullBit(oldp+3547,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x25U)))));
    bufp->fullBit(oldp+3548,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x25U)))));
    bufp->fullBit(oldp+3549,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x25U)))));
    bufp->fullBit(oldp+3550,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x25U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x25U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x25U))))));
    bufp->fullBit(oldp+3551,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x25U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x25U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x25U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x25U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x25U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x25U)))))));
    bufp->fullBit(oldp+3552,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x26U)))));
    bufp->fullBit(oldp+3553,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x26U)))));
    bufp->fullBit(oldp+3554,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x26U)))));
    bufp->fullBit(oldp+3555,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x26U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x26U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x26U))))));
    bufp->fullBit(oldp+3556,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x26U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x26U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x26U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x26U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x26U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x26U)))))));
    bufp->fullBit(oldp+3557,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x27U)))));
    bufp->fullBit(oldp+3558,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x27U)))));
    bufp->fullBit(oldp+3559,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x27U)))));
    bufp->fullBit(oldp+3560,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x27U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x27U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x27U))))));
    bufp->fullBit(oldp+3561,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x27U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x27U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x27U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x27U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x27U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x27U)))))));
    bufp->fullBit(oldp+3562,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x28U)))));
    bufp->fullBit(oldp+3563,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x28U)))));
    bufp->fullBit(oldp+3564,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x28U)))));
    bufp->fullBit(oldp+3565,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x28U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x28U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x28U))))));
    bufp->fullBit(oldp+3566,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x28U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x28U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x28U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x28U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x28U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x28U)))))));
    bufp->fullBit(oldp+3567,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x29U)))));
    bufp->fullBit(oldp+3568,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x29U)))));
    bufp->fullBit(oldp+3569,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x29U)))));
    bufp->fullBit(oldp+3570,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x29U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x29U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x29U))))));
    bufp->fullBit(oldp+3571,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x29U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x29U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x29U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x29U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x29U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x29U)))))));
    bufp->fullBit(oldp+3572,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x2aU)))));
    bufp->fullBit(oldp+3573,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x2aU)))));
    bufp->fullBit(oldp+3574,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x2aU)))));
    bufp->fullBit(oldp+3575,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x2aU)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x2aU))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x2aU))))));
    bufp->fullBit(oldp+3576,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x2aU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x2aU))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x2aU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x2aU)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x2aU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x2aU)))))));
    bufp->fullBit(oldp+3577,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x2bU)))));
    bufp->fullBit(oldp+3578,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x2bU)))));
    bufp->fullBit(oldp+3579,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x2bU)))));
    bufp->fullBit(oldp+3580,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x2bU)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x2bU))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x2bU))))));
    bufp->fullBit(oldp+3581,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x2bU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x2bU))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x2bU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x2bU)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x2bU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x2bU)))))));
    bufp->fullBit(oldp+3582,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x2cU)))));
    bufp->fullBit(oldp+3583,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x2cU)))));
    bufp->fullBit(oldp+3584,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x2cU)))));
    bufp->fullBit(oldp+3585,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x2cU)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x2cU))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x2cU))))));
    bufp->fullBit(oldp+3586,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x2cU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x2cU))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x2cU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x2cU)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x2cU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x2cU)))))));
    bufp->fullBit(oldp+3587,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x2dU)))));
    bufp->fullBit(oldp+3588,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x2dU)))));
    bufp->fullBit(oldp+3589,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x2dU)))));
    bufp->fullBit(oldp+3590,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x2dU)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x2dU))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x2dU))))));
    bufp->fullBit(oldp+3591,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x2dU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x2dU))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x2dU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x2dU)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x2dU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x2dU)))))));
    bufp->fullBit(oldp+3592,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x2eU)))));
    bufp->fullBit(oldp+3593,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x2eU)))));
    bufp->fullBit(oldp+3594,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x2eU)))));
    bufp->fullBit(oldp+3595,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x2eU)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x2eU))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x2eU))))));
    bufp->fullBit(oldp+3596,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x2eU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x2eU))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x2eU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x2eU)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x2eU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x2eU)))))));
    bufp->fullBit(oldp+3597,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x2fU)))));
    bufp->fullBit(oldp+3598,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x2fU)))));
    bufp->fullBit(oldp+3599,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x2fU)))));
    bufp->fullBit(oldp+3600,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x2fU)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x2fU))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x2fU))))));
    bufp->fullBit(oldp+3601,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x2fU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x2fU))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x2fU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x2fU)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x2fU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x2fU)))))));
    bufp->fullBit(oldp+3602,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x30U)))));
    bufp->fullBit(oldp+3603,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x30U)))));
    bufp->fullBit(oldp+3604,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x30U)))));
    bufp->fullBit(oldp+3605,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x30U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x30U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x30U))))));
    bufp->fullBit(oldp+3606,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x30U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x30U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x30U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x30U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x30U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x30U)))))));
    bufp->fullBit(oldp+3607,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x31U)))));
    bufp->fullBit(oldp+3608,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x31U)))));
    bufp->fullBit(oldp+3609,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x31U)))));
    bufp->fullBit(oldp+3610,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x31U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x31U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x31U))))));
    bufp->fullBit(oldp+3611,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x31U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x31U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x31U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x31U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x31U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x31U)))))));
    bufp->fullBit(oldp+3612,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x32U)))));
    bufp->fullBit(oldp+3613,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x32U)))));
    bufp->fullBit(oldp+3614,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x32U)))));
    bufp->fullBit(oldp+3615,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x32U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x32U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x32U))))));
    bufp->fullBit(oldp+3616,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x32U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x32U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x32U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x32U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x32U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x32U)))))));
    bufp->fullBit(oldp+3617,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x33U)))));
    bufp->fullBit(oldp+3618,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x33U)))));
    bufp->fullBit(oldp+3619,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x33U)))));
    bufp->fullBit(oldp+3620,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x33U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x33U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x33U))))));
    bufp->fullBit(oldp+3621,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x33U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x33U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x33U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x33U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x33U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x33U)))))));
    bufp->fullBit(oldp+3622,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x34U)))));
    bufp->fullBit(oldp+3623,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x34U)))));
    bufp->fullBit(oldp+3624,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x34U)))));
    bufp->fullBit(oldp+3625,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x34U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x34U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x34U))))));
    bufp->fullBit(oldp+3626,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x34U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x34U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x34U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x34U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x34U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x34U)))))));
    bufp->fullBit(oldp+3627,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x35U)))));
    bufp->fullBit(oldp+3628,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x35U)))));
    bufp->fullBit(oldp+3629,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x35U)))));
    bufp->fullBit(oldp+3630,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x35U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x35U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x35U))))));
    bufp->fullBit(oldp+3631,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x35U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x35U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x35U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x35U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x35U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x35U)))))));
    bufp->fullBit(oldp+3632,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x36U)))));
    bufp->fullBit(oldp+3633,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x36U)))));
    bufp->fullBit(oldp+3634,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x36U)))));
    bufp->fullBit(oldp+3635,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x36U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x36U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x36U))))));
    bufp->fullBit(oldp+3636,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x36U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x36U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x36U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x36U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x36U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x36U)))))));
    bufp->fullBit(oldp+3637,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x37U)))));
    bufp->fullBit(oldp+3638,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x37U)))));
    bufp->fullBit(oldp+3639,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x37U)))));
    bufp->fullBit(oldp+3640,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x37U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x37U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x37U))))));
    bufp->fullBit(oldp+3641,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x37U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x37U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x37U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x37U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x37U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x37U)))))));
    bufp->fullBit(oldp+3642,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x38U)))));
    bufp->fullBit(oldp+3643,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x38U)))));
    bufp->fullBit(oldp+3644,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x38U)))));
    bufp->fullBit(oldp+3645,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x38U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x38U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x38U))))));
    bufp->fullBit(oldp+3646,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x38U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x38U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x38U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x38U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x38U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x38U)))))));
    bufp->fullBit(oldp+3647,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x39U)))));
    bufp->fullBit(oldp+3648,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x39U)))));
    bufp->fullBit(oldp+3649,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x39U)))));
    bufp->fullBit(oldp+3650,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x39U)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x39U))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x39U))))));
    bufp->fullBit(oldp+3651,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x39U)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x39U))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x39U)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x39U)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x39U)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x39U)))))));
    bufp->fullBit(oldp+3652,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x3aU)))));
    bufp->fullBit(oldp+3653,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x3aU)))));
    bufp->fullBit(oldp+3654,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x3aU)))));
    bufp->fullBit(oldp+3655,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x3aU)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x3aU))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x3aU))))));
    bufp->fullBit(oldp+3656,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x3aU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x3aU))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x3aU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x3aU)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x3aU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x3aU)))))));
    bufp->fullBit(oldp+3657,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x3bU)))));
    bufp->fullBit(oldp+3658,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x3bU)))));
    bufp->fullBit(oldp+3659,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x3bU)))));
    bufp->fullBit(oldp+3660,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x3bU)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x3bU))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x3bU))))));
    bufp->fullBit(oldp+3661,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x3bU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x3bU))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x3bU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x3bU)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x3bU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x3bU)))))));
    bufp->fullBit(oldp+3662,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x3cU)))));
    bufp->fullBit(oldp+3663,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x3cU)))));
    bufp->fullBit(oldp+3664,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x3cU)))));
    bufp->fullBit(oldp+3665,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x3cU)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x3cU))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x3cU))))));
    bufp->fullBit(oldp+3666,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x3cU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x3cU))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x3cU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x3cU)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x3cU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x3cU)))))));
    bufp->fullBit(oldp+3667,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x3dU)))));
    bufp->fullBit(oldp+3668,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x3dU)))));
    bufp->fullBit(oldp+3669,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x3dU)))));
    bufp->fullBit(oldp+3670,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x3dU)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x3dU))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x3dU))))));
    bufp->fullBit(oldp+3671,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x3dU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x3dU))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x3dU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x3dU)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x3dU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x3dU)))))));
    bufp->fullBit(oldp+3672,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x3eU)))));
    bufp->fullBit(oldp+3673,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x3eU)))));
    bufp->fullBit(oldp+3674,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x3eU)))));
    bufp->fullBit(oldp+3675,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x3eU)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x3eU))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x3eU))))));
    bufp->fullBit(oldp+3676,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x3eU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x3eU))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x3eU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x3eU)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x3eU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x3eU)))))));
    bufp->fullBit(oldp+3677,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                            >> 0x3fU)))));
    bufp->fullBit(oldp+3678,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                            >> 0x3fU)))));
    bufp->fullBit(oldp+3679,((1U & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                            >> 0x3fU)))));
    bufp->fullBit(oldp+3680,((1U & (((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                              >> 0x3fU)) 
                                     ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                >> 0x3fU))) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x3fU))))));
    bufp->fullBit(oldp+3681,((1U & ((((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                               >> 0x3fU)) 
                                      & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x3fU))) 
                                     | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                                 >> 0x3fU)) 
                                        & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                   >> 0x3fU)))) 
                                    | ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                                >> 0x3fU)) 
                                       & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                                  >> 0x3fU)))))));
    bufp->fullBit(oldp+3682,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum) 
                                    ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum)))));
    bufp->fullBit(oldp+3683,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum) 
                                    & (IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum)))));
    bufp->fullBit(oldp+3684,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum) 
                                    & (IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum)))));
    bufp->fullBit(oldp+3685,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum) 
                                    & (IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum)))));
    bufp->fullBit(oldp+3686,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 1U)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 1U))))));
    bufp->fullBit(oldp+3687,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 1U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 1U))))));
    bufp->fullBit(oldp+3688,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 1U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 1U))))));
    bufp->fullBit(oldp+3689,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 1U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 1U))))));
    bufp->fullBit(oldp+3690,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0xaU)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+3691,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0xaU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+3692,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 0xaU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+3693,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0xaU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0xaU))))));
    bufp->fullBit(oldp+3694,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0xbU)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+3695,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0xbU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+3696,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 0xbU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+3697,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0xbU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0xbU))))));
    bufp->fullBit(oldp+3698,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0xcU)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+3699,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0xcU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+3700,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 0xcU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+3701,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0xcU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0xcU))))));
    bufp->fullBit(oldp+3702,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0xdU)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+3703,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0xdU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+3704,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 0xdU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+3705,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0xdU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0xdU))))));
    bufp->fullBit(oldp+3706,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0xeU)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+3707,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0xeU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+3708,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 0xeU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+3709,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0xeU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0xeU))))));
    bufp->fullBit(oldp+3710,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0xfU)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+3711,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0xfU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+3712,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 0xfU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+3713,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0xfU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0xfU))))));
    bufp->fullBit(oldp+3714,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x10U)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+3715,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x10U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+3716,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 0x10U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+3717,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x10U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x10U))))));
    bufp->fullBit(oldp+3718,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x11U)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+3719,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x11U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+3720,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 0x11U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+3721,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x11U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x11U))))));
    bufp->fullBit(oldp+3722,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x12U)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+3723,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x12U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+3724,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 0x12U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+3725,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x12U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x12U))))));
    bufp->fullBit(oldp+3726,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x13U)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+3727,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x13U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+3728,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 0x13U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+3729,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x13U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x13U))))));
    bufp->fullBit(oldp+3730,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 2U)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 2U))))));
    bufp->fullBit(oldp+3731,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 2U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 2U))))));
    bufp->fullBit(oldp+3732,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 2U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 2U))))));
    bufp->fullBit(oldp+3733,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 2U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 2U))))));
    bufp->fullBit(oldp+3734,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x14U)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+3735,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x14U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+3736,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 0x14U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+3737,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x14U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+3738,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x15U)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+3739,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x15U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+3740,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 0x15U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+3741,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x15U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x15U))))));
    bufp->fullBit(oldp+3742,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x16U)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+3743,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x16U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+3744,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 0x16U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+3745,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x16U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x16U))))));
    bufp->fullBit(oldp+3746,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x17U)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+3747,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x17U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+3748,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 0x17U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+3749,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x17U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+3750,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x18U)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+3751,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x18U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+3752,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 0x18U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+3753,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x18U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+3754,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x19U)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+3755,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x19U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+3756,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 0x19U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+3757,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x19U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+3758,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x1aU)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+3759,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x1aU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+3760,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 0x1aU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+3761,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x1aU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+3762,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x1bU)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+3763,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x1bU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+3764,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 0x1bU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+3765,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x1bU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+3766,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x1cU)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+3767,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x1cU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+3768,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 0x1cU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+3769,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x1cU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+3770,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x1dU)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+3771,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x1dU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+3772,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 0x1dU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+3773,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x1dU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x1dU))))));
    bufp->fullBit(oldp+3774,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 3U)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 3U))))));
    bufp->fullBit(oldp+3775,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 3U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 3U))))));
    bufp->fullBit(oldp+3776,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 3U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 3U))))));
    bufp->fullBit(oldp+3777,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 3U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 3U))))));
    bufp->fullBit(oldp+3778,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x1eU)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+3779,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x1eU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+3780,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 0x1eU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+3781,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x1eU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x1eU))))));
    bufp->fullBit(oldp+3782,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x1fU)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+3783,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x1fU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+3784,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 0x1fU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+3785,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x1fU)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+3786,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x20U)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+3787,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x20U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+3788,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 0x20U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+3789,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x20U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+3790,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x21U)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+3791,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x21U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+3792,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 0x21U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+3793,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x21U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x21U))))));
    bufp->fullBit(oldp+3794,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x22U)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x22U))))));
    bufp->fullBit(oldp+3795,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x22U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x22U))))));
    bufp->fullBit(oldp+3796,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 0x22U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x22U))))));
    bufp->fullBit(oldp+3797,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x22U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x22U))))));
    bufp->fullBit(oldp+3798,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x23U)) 
                                    ^ (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x23U))))));
    bufp->fullBit(oldp+3799,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum 
                                             >> 0x23U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                               >> 0x23U))))));
    bufp->fullBit(oldp+3800,((1U & ((IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum 
                                             >> 0x23U)) 
                                    & (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum 
                                               >> 0x23U))))));
}
