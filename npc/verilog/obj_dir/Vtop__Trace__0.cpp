// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_sub_1(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_sub_2(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_sub_3(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_sub_4(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_sub_5(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
    Vtop___024root__trace_chg_sub_1((&vlSymsp->TOP), bufp);
    Vtop___024root__trace_chg_sub_2((&vlSymsp->TOP), bufp);
    Vtop___024root__trace_chg_sub_3((&vlSymsp->TOP), bufp);
    Vtop___024root__trace_chg_sub_4((&vlSymsp->TOP), bufp);
    Vtop___024root__trace_chg_sub_5((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_h862c1705__0;
    VlWide<3>/*95:0*/ __Vtemp_h83fe5fd6__0;
    VlWide<3>/*95:0*/ __Vtemp_hb7345d43__0;
    VlWide<3>/*95:0*/ __Vtemp_h0a52f67d__0;
    VlWide<3>/*95:0*/ __Vtemp_h8342a930__0;
    VlWide<3>/*95:0*/ __Vtemp_h2d36da88__0;
    VlWide<3>/*95:0*/ __Vtemp_h1a379d92__0;
    VlWide<3>/*95:0*/ __Vtemp_hab5f0396__0;
    VlWide<3>/*95:0*/ __Vtemp_h57bd8b0c__0;
    VlWide<3>/*95:0*/ __Vtemp_h6e0a401d__0;
    VlWide<3>/*95:0*/ __Vtemp_h53e581e6__0;
    VlWide<3>/*95:0*/ __Vtemp_h6eff2b2e__0;
    VlWide<3>/*95:0*/ __Vtemp_h7060a158__0;
    VlWide<3>/*95:0*/ __Vtemp_hd1f76286__0;
    VlWide<3>/*95:0*/ __Vtemp_h03d144f7__0;
    VlWide<3>/*95:0*/ __Vtemp_hbf3cd1b5__0;
    VlWide<3>/*95:0*/ __Vtemp_h03e14beb__0;
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__core__DOT__ID_io_read1_data),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__core__DOT__ID_io_read2_data),32);
        bufp->chgIData(oldp+2,(((0xc00U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                 ? (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mcycle_data)
                                 : ((0xc02U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                     ? (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__minstret_data)
                                     : ((0xc80U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                         ? (IData)(
                                                   (vlSelf->top__DOT__core__DOT__csr__DOT__mcycle_data 
                                                    >> 0x20U))
                                         : ((0xc82U 
                                             == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                             ? (IData)(
                                                       (vlSelf->top__DOT__core__DOT__csr__DOT__minstret_data 
                                                        >> 0x20U))
                                             : ((0x100U 
                                                 == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                                 ? vlSelf->top__DOT__core__DOT__csr__DOT___T_74
                                                 : 
                                                ((0x104U 
                                                  == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                                  ? vlSelf->top__DOT__core__DOT__csr__DOT___T_82
                                                  : 
                                                 ((0x105U 
                                                   == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                                   ? vlSelf->top__DOT__core__DOT__csr__DOT___T_83
                                                   : 
                                                  ((0x106U 
                                                    == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                                    ? 0U
                                                    : 
                                                   ((0x140U 
                                                     == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                                     ? vlSelf->top__DOT__core__DOT__csr__DOT__sscratch_data
                                                     : 
                                                    ((0x141U 
                                                      == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                                      ? vlSelf->top__DOT__core__DOT__csr__DOT__sepc_data
                                                      : 
                                                     ((0x142U 
                                                       == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                                       ? vlSelf->top__DOT__core__DOT__csr__DOT___T_84
                                                       : 
                                                      ((0x143U 
                                                        == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                                        ? vlSelf->top__DOT__core__DOT__csr__DOT__stval_data
                                                        : 
                                                       ((0x144U 
                                                         == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                                         ? vlSelf->top__DOT__core__DOT__csr__DOT___T_92
                                                         : 
                                                        ((0x180U 
                                                          == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                                          ? vlSelf->top__DOT__core__DOT__csr__DOT___T_94
                                                          : 
                                                         ((0xf11U 
                                                           == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                                           ? 0U
                                                           : 
                                                          ((0xf12U 
                                                            == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                                            ? 0U
                                                            : vlSelf->top__DOT__core__DOT__csr__DOT___T_235))))))))))))))))),32);
        bufp->chgIData(oldp+3,(((IData)(vlSelf->top__DOT__core__DOT__ID__DOT__branchteke)
                                 ? vlSelf->top__DOT__core__DOT__ID__DOT__takepc
                                 : ((IData)(4U) + vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_pc))),32);
        bufp->chgIData(oldp+4,(((1U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc1))
                                 ? vlSelf->top__DOT__core__DOT__ID_io_read1_data
                                 : ((2U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc1))
                                     ? vlSelf->top__DOT__core__DOT__ID_io_read2_data
                                     : ((3U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc1))
                                         ? vlSelf->top__DOT__core__DOT__ID__DOT___GEN_1
                                         : ((4U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc1))
                                             ? vlSelf->top__DOT__core__DOT__ID__DOT____VdfgTmp_h6e65807c__0
                                             : ((5U 
                                                 == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc1))
                                                 ? vlSelf->top__DOT__core__DOT__ID__DOT___T_849
                                                 : 
                                                ((6U 
                                                  == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc1))
                                                  ? (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2)
                                                  : 
                                                 ((7U 
                                                   == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc1))
                                                   ? vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_pc
                                                   : 
                                                  ((8U 
                                                    == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc1))
                                                    ? 4U
                                                    : 0U))))))))),32);
        bufp->chgIData(oldp+5,(((1U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc2))
                                 ? vlSelf->top__DOT__core__DOT__ID_io_read1_data
                                 : ((2U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc2))
                                     ? vlSelf->top__DOT__core__DOT__ID_io_read2_data
                                     : ((3U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc2))
                                         ? vlSelf->top__DOT__core__DOT__ID__DOT___GEN_1
                                         : ((4U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc2))
                                             ? vlSelf->top__DOT__core__DOT__ID__DOT____VdfgTmp_h6e65807c__0
                                             : ((5U 
                                                 == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc2))
                                                 ? vlSelf->top__DOT__core__DOT__ID__DOT___T_849
                                                 : 
                                                ((6U 
                                                  == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc2))
                                                  ? (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2)
                                                  : 
                                                 ((7U 
                                                   == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc2))
                                                   ? vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_pc
                                                   : 
                                                  ((8U 
                                                    == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc2))
                                                    ? 4U
                                                    : 0U))))))))),32);
        bufp->chgIData(oldp+6,(((0U != (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp))
                                 ? ((IData)(vlSelf->top__DOT__core__DOT__ID__DOT__regEn1)
                                     ? vlSelf->top__DOT__core__DOT__ID_io_read1_data
                                     : (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                 : 0U)),32);
        bufp->chgCData(oldp+7,((((~ (((1U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp))
                                       ? (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__readable)
                                       : ((2U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp))
                                           ? (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__writable)
                                           : ((3U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp))
                                               ? (IData)(vlSelf->top__DOT__core__DOT__csr__DOT___T_319)
                                               : ((4U 
                                                   == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp))
                                                   ? (IData)(vlSelf->top__DOT__core__DOT__csr__DOT___T_319)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp)) 
                                                   & (IData)(vlSelf->top__DOT__core__DOT__csr__DOT___T_319)))))) 
                                     & (((0U != (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp))
                                          ? ((IData)(vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_valid)
                                              ? (3U 
                                                 & (vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_inst 
                                                    >> 0x1cU))
                                              : 0U)
                                          : 0U) <= (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mode)))) 
                                 & (0U != (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrOp)))
                                 ? 5U : ((IData)(vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_misaligned)
                                          ? 7U : ((IData)(vlSelf->top__DOT__core__DOT__ID__DOT__addrFault)
                                                   ? 7U
                                                   : 
                                                  ((0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x40000033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x17U 
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
                                                                : (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_761)))))))))))))))))),4);
        bufp->chgIData(oldp+8,(((IData)(vlSelf->top__DOT__core__DOT__ID__DOT__addrFault)
                                 ? vlSelf->top__DOT__core__DOT__ID__DOT__takepc
                                 : 0U)),32);
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_flush));
        bufp->chgIData(oldp+10,((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__result)),32);
        bufp->chgBit(oldp+11,(vlSelf->top__DOT__core__DOT__csr__DOT__hasInt));
        bufp->chgIData(oldp+12,(((IData)(vlSelf->top__DOT__core__DOT__csr__DOT___T_605)
                                  ? ((vlSelf->top__DOT__core__DOT__csr__DOT__stvec_base 
                                      + (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__stvec_mode) 
                                          & (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__hasInt))
                                          ? vlSelf->top__DOT__core__DOT__csr__DOT__cause
                                          : 0U)) << 2U)
                                  : ((vlSelf->top__DOT__core__DOT__csr__DOT__mtvec_base 
                                      + (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mtvec_mode) 
                                          & (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__hasInt))
                                          ? vlSelf->top__DOT__core__DOT__csr__DOT__cause
                                          : 0U)) << 2U))),32);
        bufp->chgIData(oldp+13,((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mulEn)
                                          ? (QData)((IData)(
                                                            ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__hiRem)
                                                              ? (IData)(
                                                                        (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mulOut 
                                                                         >> 0x20U))
                                                              : (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mulOut))))
                                          : ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_en)
                                              ? ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__hiRem)
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
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__isDiv0)
                                                   ? 0xffffffffULL
                                                   : (QData)((IData)(
                                                                     ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__isAnsNeg)
                                                                       ? 
                                                                      (- 
                                                                       vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[0U])
                                                                       : 
                                                                      vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[0U])))))
                                              : 0ULL)))),32);
        bufp->chgIData(oldp+14,(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu_io_valid)
                                  ? (IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mulEn)
                                              ? (QData)((IData)(
                                                                ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__hiRem)
                                                                  ? (IData)(
                                                                            (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mulOut 
                                                                             >> 0x20U))
                                                                  : (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mulOut))))
                                              : ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_en)
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__hiRem)
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
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__isDiv0)
                                                    ? 0xffffffffULL
                                                    : (QData)((IData)(
                                                                      ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__isAnsNeg)
                                                                        ? 
                                                                       (- 
                                                                        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[0U])
                                                                        : 
                                                                       vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[0U])))))
                                                  : 0ULL)))
                                  : 0U)),32);
        bufp->chgQData(oldp+15,(vlSelf->top__DOT__core__DOT__EX__DOT__result),63);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1),32);
        bufp->chgIData(oldp+18,(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT___T_62)
                                  ? vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divisor
                                  : 0U)),32);
        bufp->chgQData(oldp+19,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_result),64);
        bufp->chgQData(oldp+21,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mulOut),64);
        bufp->chgIData(oldp+23,(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__hiRem)
                                  ? (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mulOut 
                                             >> 0x20U))
                                  : (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mulOut))),32);
        bufp->chgQData(oldp+24,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A),64);
        bufp->chgQData(oldp+26,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B),64);
        bufp->chgQData(oldp+28,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin),64);
        bufp->chgQData(oldp+30,(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum),64);
        bufp->chgQData(oldp+32,((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                 << 1U)),64);
        bufp->chgQData(oldp+34,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A),64);
        bufp->chgQData(oldp+36,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B),64);
        bufp->chgQData(oldp+38,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin),64);
        bufp->chgQData(oldp+40,(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum),64);
        bufp->chgQData(oldp+42,((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                 << 1U)),64);
        bufp->chgQData(oldp+44,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A),64);
        bufp->chgQData(oldp+46,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B),64);
        bufp->chgQData(oldp+48,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin),64);
        bufp->chgQData(oldp+50,(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum),64);
        bufp->chgQData(oldp+52,((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                 << 1U)),64);
        bufp->chgQData(oldp+54,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A),64);
        bufp->chgQData(oldp+56,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B),64);
        bufp->chgQData(oldp+58,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin),64);
        bufp->chgQData(oldp+60,(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.io_Sum),64);
        bufp->chgQData(oldp+62,((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                 << 1U)),64);
        bufp->chgQData(oldp+64,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A),64);
        bufp->chgQData(oldp+66,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B),64);
        bufp->chgQData(oldp+68,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin),64);
        bufp->chgQData(oldp+70,(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.io_Sum),64);
        bufp->chgQData(oldp+72,((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                 << 1U)),64);
        bufp->chgQData(oldp+74,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A),64);
        bufp->chgQData(oldp+76,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B),64);
        bufp->chgQData(oldp+78,(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.io_Sum),64);
        bufp->chgQData(oldp+80,((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                 << 1U)),64);
        bufp->chgQData(oldp+82,(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.io_Sum),64);
        bufp->chgQData(oldp+84,((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                 << 1U)),64);
        bufp->chgQData(oldp+86,(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.io_Sum),64);
        bufp->chgQData(oldp+88,((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                 << 1U)),64);
        bufp->chgQData(oldp+90,(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.io_Sum),64);
        bufp->chgQData(oldp+92,((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                 << 1U)),64);
        bufp->chgQData(oldp+94,(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.io_Sum),64);
        bufp->chgQData(oldp+96,((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                 << 1U)),64);
        bufp->chgQData(oldp+98,(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.io_Sum),64);
        bufp->chgQData(oldp+100,((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                  << 1U)),64);
        bufp->chgQData(oldp+102,(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.io_Sum),64);
        bufp->chgQData(oldp+104,((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                  << 1U)),64);
        bufp->chgQData(oldp+106,(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.io_Sum),64);
        bufp->chgQData(oldp+108,((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                  << 1U)),64);
        bufp->chgQData(oldp+110,(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum),64);
        bufp->chgQData(oldp+112,((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                  << 1U)),64);
        bufp->chgQData(oldp+114,(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum),64);
        bufp->chgQData(oldp+116,((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                  << 1U)),64);
        bufp->chgQData(oldp+118,(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum),64);
        bufp->chgQData(oldp+120,((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                  << 1U)),64);
        bufp->chgQData(oldp+122,((((QData)((IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16.__PVT___T_253)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16.__PVT___T_222)))),64);
        bufp->chgQData(oldp+124,((((QData)((IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16.__PVT___T_316)) 
                                   << 0x21U) | ((QData)((IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16.__PVT___T_285)) 
                                                << 1U))),64);
        bufp->chgQData(oldp+126,(((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                  << 1U)),33);
        bufp->chgIData(oldp+128,((- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)),32);
        bufp->chgQData(oldp+129,((0x1ffffffffULL & 
                                  (- ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                      << 1U)))),33);
        bufp->chgCData(oldp+131,(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_h78cd338f__0) 
                                  << 1U)),3);
        bufp->chgCData(oldp+132,(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT___T_62) 
                                  & (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divisor 
                                     >> 0x1fU))),3);
        bufp->chgCData(oldp+133,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_1),3);
        bufp->chgCData(oldp+134,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_2),3);
        bufp->chgCData(oldp+135,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_3),3);
        bufp->chgCData(oldp+136,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_4),3);
        bufp->chgCData(oldp+137,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_5),3);
        bufp->chgCData(oldp+138,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_6),3);
        bufp->chgCData(oldp+139,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_7),3);
        bufp->chgCData(oldp+140,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_8),3);
        bufp->chgCData(oldp+141,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_9),3);
        bufp->chgCData(oldp+142,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_10),3);
        bufp->chgCData(oldp+143,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_11),3);
        bufp->chgCData(oldp+144,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_12),3);
        bufp->chgCData(oldp+145,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_13),3);
        bufp->chgCData(oldp+146,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_14),3);
        bufp->chgCData(oldp+147,(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_15),3);
        __Vtemp_h862c1705__0[0U] = (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                            << 1U));
        __Vtemp_h862c1705__0[1U] = (IData)(((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_h862c1705__0[2U] = 0U;
        bufp->chgWData(oldp+148,(__Vtemp_h862c1705__0),65);
        __Vtemp_h83fe5fd6__0[0U] = (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                            << 1U));
        __Vtemp_h83fe5fd6__0[1U] = (IData)(((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_h83fe5fd6__0[2U] = 0U;
        bufp->chgWData(oldp+151,(__Vtemp_h83fe5fd6__0),65);
        __Vtemp_hb7345d43__0[0U] = (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                            << 1U));
        __Vtemp_hb7345d43__0[1U] = (IData)(((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_hb7345d43__0[2U] = 0U;
        bufp->chgWData(oldp+154,(__Vtemp_hb7345d43__0),65);
        __Vtemp_h0a52f67d__0[0U] = (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                            << 1U));
        __Vtemp_h0a52f67d__0[1U] = (IData)(((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_h0a52f67d__0[2U] = 0U;
        bufp->chgWData(oldp+157,(__Vtemp_h0a52f67d__0),65);
        __Vtemp_h8342a930__0[0U] = (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                            << 1U));
        __Vtemp_h8342a930__0[1U] = (IData)(((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_h8342a930__0[2U] = 0U;
        bufp->chgWData(oldp+160,(__Vtemp_h8342a930__0),65);
        __Vtemp_h2d36da88__0[0U] = (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                            << 1U));
        __Vtemp_h2d36da88__0[1U] = (IData)(((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_h2d36da88__0[2U] = 0U;
        bufp->chgWData(oldp+163,(__Vtemp_h2d36da88__0),65);
        __Vtemp_h1a379d92__0[0U] = (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                            << 1U));
        __Vtemp_h1a379d92__0[1U] = (IData)(((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_h1a379d92__0[2U] = 0U;
        bufp->chgWData(oldp+166,(__Vtemp_h1a379d92__0),65);
        __Vtemp_hab5f0396__0[0U] = (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                            << 1U));
        __Vtemp_hab5f0396__0[1U] = (IData)(((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_hab5f0396__0[2U] = 0U;
        bufp->chgWData(oldp+169,(__Vtemp_hab5f0396__0),65);
        __Vtemp_h57bd8b0c__0[0U] = (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                            << 1U));
        __Vtemp_h57bd8b0c__0[1U] = (IData)(((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_h57bd8b0c__0[2U] = 0U;
        bufp->chgWData(oldp+172,(__Vtemp_h57bd8b0c__0),65);
        __Vtemp_h6e0a401d__0[0U] = (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                            << 1U));
        __Vtemp_h6e0a401d__0[1U] = (IData)(((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_h6e0a401d__0[2U] = 0U;
        bufp->chgWData(oldp+175,(__Vtemp_h6e0a401d__0),65);
        __Vtemp_h53e581e6__0[0U] = (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                            << 1U));
        __Vtemp_h53e581e6__0[1U] = (IData)(((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_h53e581e6__0[2U] = 0U;
        bufp->chgWData(oldp+178,(__Vtemp_h53e581e6__0),65);
        __Vtemp_h6eff2b2e__0[0U] = (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                            << 1U));
        __Vtemp_h6eff2b2e__0[1U] = (IData)(((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_h6eff2b2e__0[2U] = 0U;
        bufp->chgWData(oldp+181,(__Vtemp_h6eff2b2e__0),65);
        __Vtemp_h7060a158__0[0U] = (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                            << 1U));
        __Vtemp_h7060a158__0[1U] = (IData)(((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_h7060a158__0[2U] = 0U;
        bufp->chgWData(oldp+184,(__Vtemp_h7060a158__0),65);
        __Vtemp_hd1f76286__0[0U] = (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                            << 1U));
        __Vtemp_hd1f76286__0[1U] = (IData)(((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_hd1f76286__0[2U] = 0U;
        bufp->chgWData(oldp+187,(__Vtemp_hd1f76286__0),65);
        __Vtemp_h03d144f7__0[0U] = (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                            << 1U));
        __Vtemp_h03d144f7__0[1U] = (IData)(((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_h03d144f7__0[2U] = 0U;
        bufp->chgWData(oldp+190,(__Vtemp_h03d144f7__0),65);
        __Vtemp_hbf3cd1b5__0[0U] = (IData)((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                            << 1U));
        __Vtemp_hbf3cd1b5__0[1U] = (IData)(((vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_hbf3cd1b5__0[2U] = 0U;
        bufp->chgWData(oldp+193,(__Vtemp_hbf3cd1b5__0),65);
        __Vtemp_h03e14beb__0[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16.__PVT___T_316)) 
                                             << 0x21U) 
                                            | ((QData)((IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16.__PVT___T_285)) 
                                               << 1U)));
        __Vtemp_h03e14beb__0[1U] = (IData)(((((QData)((IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16.__PVT___T_316)) 
                                              << 0x21U) 
                                             | ((QData)((IData)(vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16.__PVT___T_285)) 
                                                << 1U)) 
                                            >> 0x20U));
        __Vtemp_h03e14beb__0[2U] = 0U;
        bufp->chgWData(oldp+196,(__Vtemp_h03e14beb__0),65);
        bufp->chgIData(oldp+199,((vlSelf->top__DOT__core__DOT__ID_io_read1_data 
                                  + vlSelf->top__DOT__core__DOT__ID__DOT___GEN_1)),32);
        bufp->chgIData(oldp+200,((0xfffffffeU & (vlSelf->top__DOT__core__DOT__ID_io_read1_data 
                                                 + vlSelf->top__DOT__core__DOT__ID__DOT___GEN_1))),32);
        bufp->chgIData(oldp+201,(((IData)(vlSelf->top__DOT__core__DOT__ID__DOT__regEn1)
                                   ? (0xfffffffeU & 
                                      (vlSelf->top__DOT__core__DOT__ID_io_read1_data 
                                       + vlSelf->top__DOT__core__DOT__ID__DOT___GEN_1))
                                   : (vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_pc 
                                      + (((- (IData)((IData)(vlSelf->top__DOT__core__DOT__ID__DOT____VdfgTmp_hc515ad56__0))) 
                                          << 0x15U) 
                                         | (((IData)(vlSelf->top__DOT__core__DOT__ID__DOT____VdfgTmp_hc515ad56__0) 
                                             << 0x14U) 
                                            | ((((IData)(vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_valid)
                                                  ? 
                                                 (0xffU 
                                                  & (vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_inst 
                                                     >> 0xcU))
                                                  : 0U) 
                                                << 0xcU) 
                                               | ((0x7ff800U 
                                                   & (((IData)(vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_valid) 
                                                       << 0xbU) 
                                                      & (vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_inst 
                                                         >> 9U))) 
                                                  | (((IData)(vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_valid)
                                                       ? 
                                                      (0x3ffU 
                                                       & (vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_inst 
                                                          >> 0x15U))
                                                       : 0U) 
                                                     << 1U)))))))),32);
        bufp->chgIData(oldp+202,(vlSelf->top__DOT__core__DOT__ID__DOT__takepc),32);
        bufp->chgBit(oldp+203,(vlSelf->top__DOT__core__DOT__ID__DOT__branchteke));
        bufp->chgBit(oldp+204,(((0U != (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__branchOp)) 
                                & (((IData)(vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_bpu_take) 
                                    != (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__branchteke)) 
                                   | (vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_bpu_takepc 
                                      != vlSelf->top__DOT__core__DOT__ID__DOT__takepc)))));
        bufp->chgBit(oldp+205,(vlSelf->top__DOT__core__DOT__ID__DOT__addrFault));
        bufp->chgBit(oldp+206,(vlSelf->top__DOT__core__DOT__csr__DOT__mip_ssip));
        bufp->chgBit(oldp+207,(vlSelf->top__DOT__core__DOT__csr__DOT__mip_stip));
        bufp->chgBit(oldp+208,(vlSelf->top__DOT__core__DOT__csr__DOT__mip_seip));
        bufp->chgIData(oldp+209,(vlSelf->top__DOT__core__DOT__csr__DOT__csrData),32);
        bufp->chgIData(oldp+210,(vlSelf->top__DOT__core__DOT__csr__DOT__writeData),32);
        bufp->chgIData(oldp+211,(vlSelf->top__DOT__core__DOT__csr__DOT__flagIntS),32);
        bufp->chgIData(oldp+212,(vlSelf->top__DOT__core__DOT__csr__DOT__flagIntM),32);
        bufp->chgBit(oldp+213,((((1U > (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mode)) 
                                 | ((1U == (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mode)) 
                                    & (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mstatus_sie))) 
                                & (0U != (vlSelf->top__DOT__core__DOT__csr__DOT__flagIntS 
                                          & vlSelf->top__DOT__core__DOT__csr__DOT__mideleg_data)))));
        bufp->chgBit(oldp+214,(vlSelf->top__DOT__core__DOT__csr__DOT__hasIntM));
        bufp->chgBit(oldp+215,(vlSelf->top__DOT__core__DOT__csr__DOT__handIntS));
        bufp->chgBit(oldp+216,(((~ (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__hasInt)) 
                                & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_flush))));
        bufp->chgBit(oldp+217,((((~ (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__hasInt)) 
                                 & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_flush)) 
                                & (vlSelf->top__DOT__core__DOT__csr__DOT__medeleg_data 
                                   >> ((5U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType))
                                        ? 2U : ((7U 
                                                 == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType))
                                                 ? 0U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType))
                                                  ? 0xbU
                                                  : 
                                                 ((8U 
                                                   == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType))
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__memAddr)
                                                    ? 4U
                                                    : 0xdU)
                                                   : 0U))))))));
        bufp->chgBit(oldp+218,(vlSelf->top__DOT__core__DOT__csr__DOT__handExcS));
        bufp->chgIData(oldp+219,(vlSelf->top__DOT__core__DOT__csr__DOT__intCauseS),31);
        bufp->chgIData(oldp+220,(((0x800U & vlSelf->top__DOT__core__DOT__csr__DOT__flagIntM)
                                   ? 0xbU : ((8U & vlSelf->top__DOT__core__DOT__csr__DOT__flagIntM)
                                              ? 3U : 
                                             ((0x80U 
                                               & vlSelf->top__DOT__core__DOT__csr__DOT__flagIntM)
                                               ? 7U
                                               : vlSelf->top__DOT__core__DOT__csr__DOT__intCauseS)))),31);
        bufp->chgIData(oldp+221,(((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__handIntS)
                                   ? vlSelf->top__DOT__core__DOT__csr__DOT__intCauseS
                                   : ((0x800U & vlSelf->top__DOT__core__DOT__csr__DOT__flagIntM)
                                       ? 0xbU : ((8U 
                                                  & vlSelf->top__DOT__core__DOT__csr__DOT__flagIntM)
                                                  ? 3U
                                                  : 
                                                 ((0x80U 
                                                   & vlSelf->top__DOT__core__DOT__csr__DOT__flagIntM)
                                                   ? 7U
                                                   : vlSelf->top__DOT__core__DOT__csr__DOT__intCauseS))))),31);
        bufp->chgIData(oldp+222,(vlSelf->top__DOT__core__DOT__csr__DOT__cause),32);
        bufp->chgIData(oldp+223,(((vlSelf->top__DOT__core__DOT__csr__DOT__stvec_base 
                                   + (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__stvec_mode) 
                                       & (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__hasInt))
                                       ? vlSelf->top__DOT__core__DOT__csr__DOT__cause
                                       : 0U)) << 2U)),32);
        bufp->chgIData(oldp+224,(((vlSelf->top__DOT__core__DOT__csr__DOT__mtvec_base 
                                   + (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mtvec_mode) 
                                       & (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__hasInt))
                                       ? vlSelf->top__DOT__core__DOT__csr__DOT__cause
                                       : 0U)) << 2U)),32);
        bufp->chgBit(oldp+225,((1U & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A))));
        bufp->chgBit(oldp+226,((1U & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B))));
        bufp->chgBit(oldp+227,((1U & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin))));
        bufp->chgBit(oldp+228,((1U & (((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A) 
                                       ^ (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B)) 
                                      ^ (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin)))));
        bufp->chgBit(oldp+229,((1U & ((((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A) 
                                        & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B)) 
                                       | ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B) 
                                          & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin))) 
                                      | ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A) 
                                         & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin))))));
        bufp->chgBit(oldp+230,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 1U)))));
        bufp->chgBit(oldp+231,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 1U)))));
        bufp->chgBit(oldp+232,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 1U)))));
        bufp->chgBit(oldp+233,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 1U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 1U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 1U))))));
        bufp->chgBit(oldp+234,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 1U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 1U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 1U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 1U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 1U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+235,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 2U)))));
        bufp->chgBit(oldp+236,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 2U)))));
        bufp->chgBit(oldp+237,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 2U)))));
        bufp->chgBit(oldp+238,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 2U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 2U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 2U))))));
        bufp->chgBit(oldp+239,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 2U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 2U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 2U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 2U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 2U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+240,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 3U)))));
        bufp->chgBit(oldp+241,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 3U)))));
        bufp->chgBit(oldp+242,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 3U)))));
        bufp->chgBit(oldp+243,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 3U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 3U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 3U))))));
        bufp->chgBit(oldp+244,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 3U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 3U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 3U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 3U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 3U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+245,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 4U)))));
        bufp->chgBit(oldp+246,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 4U)))));
        bufp->chgBit(oldp+247,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 4U)))));
        bufp->chgBit(oldp+248,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 4U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 4U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 4U))))));
        bufp->chgBit(oldp+249,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 4U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 4U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 4U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 4U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 4U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+250,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 5U)))));
        bufp->chgBit(oldp+251,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 5U)))));
        bufp->chgBit(oldp+252,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 5U)))));
        bufp->chgBit(oldp+253,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 5U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 5U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 5U))))));
        bufp->chgBit(oldp+254,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 5U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 5U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 5U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 5U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 5U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+255,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 6U)))));
        bufp->chgBit(oldp+256,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 6U)))));
        bufp->chgBit(oldp+257,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 6U)))));
        bufp->chgBit(oldp+258,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 6U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 6U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 6U))))));
        bufp->chgBit(oldp+259,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 6U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 6U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 6U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 6U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 6U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+260,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 7U)))));
        bufp->chgBit(oldp+261,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 7U)))));
        bufp->chgBit(oldp+262,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 7U)))));
        bufp->chgBit(oldp+263,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 7U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 7U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 7U))))));
        bufp->chgBit(oldp+264,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 7U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 7U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 7U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 7U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 7U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+265,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 8U)))));
        bufp->chgBit(oldp+266,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 8U)))));
        bufp->chgBit(oldp+267,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 8U)))));
        bufp->chgBit(oldp+268,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 8U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 8U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 8U))))));
        bufp->chgBit(oldp+269,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 8U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 8U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 8U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 8U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 8U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+270,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 9U)))));
        bufp->chgBit(oldp+271,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 9U)))));
        bufp->chgBit(oldp+272,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 9U)))));
        bufp->chgBit(oldp+273,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 9U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 9U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 9U))))));
        bufp->chgBit(oldp+274,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 9U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 9U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 9U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 9U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 9U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+275,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+276,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+277,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+278,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0xaU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+279,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0xaU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0xaU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0xaU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0xaU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0xaU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+280,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+281,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+282,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+283,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0xbU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0xbU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+284,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0xbU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0xbU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0xbU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0xbU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0xbU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+285,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+286,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+287,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+288,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0xcU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0xcU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+289,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0xcU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0xcU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0xcU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0xcU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0xcU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+290,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+291,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+292,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+293,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0xdU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0xdU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+294,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0xdU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0xdU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0xdU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0xdU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0xdU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+295,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+296,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+297,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+298,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0xeU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0xeU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+299,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0xeU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0xeU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0xeU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0xeU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0xeU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+300,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+301,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+302,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+303,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0xfU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0xfU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+304,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0xfU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0xfU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0xfU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0xfU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0xfU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+305,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+306,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+307,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+308,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x10U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x10U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+309,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x10U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x10U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x10U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x10U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x10U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+310,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+311,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+312,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+313,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x11U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x11U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+314,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x11U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x11U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x11U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x11U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x11U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+315,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+316,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+317,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+318,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x12U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x12U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+319,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x12U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x12U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x12U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x12U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x12U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+320,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+321,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+322,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+323,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x13U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x13U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+324,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x13U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x13U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x13U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x13U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x13U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+325,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+326,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+327,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+328,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x14U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x14U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+329,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x14U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x14U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x14U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x14U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x14U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+330,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+331,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+332,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+333,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x15U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x15U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+334,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x15U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x15U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x15U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x15U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x15U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+335,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+336,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+337,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+338,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x16U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x16U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+339,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x16U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x16U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x16U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x16U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x16U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+340,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+341,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+342,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+343,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x17U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x17U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+344,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x17U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x17U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x17U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x17U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x17U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+345,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+346,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+347,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+348,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x18U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x18U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+349,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x18U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x18U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x18U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x18U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x18U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+350,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+351,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+352,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+353,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x19U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x19U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+354,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x19U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x19U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x19U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x19U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x19U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+355,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+356,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+357,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+358,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x1aU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x1aU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+359,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x1aU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x1aU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x1aU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x1aU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x1aU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+360,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+361,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+362,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+363,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x1bU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x1bU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+364,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x1bU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x1bU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x1bU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x1bU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x1bU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+365,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+366,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+367,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+368,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x1cU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x1cU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+369,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x1cU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x1cU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x1cU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x1cU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x1cU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+370,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+371,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+372,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+373,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x1dU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x1dU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+374,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x1dU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x1dU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x1dU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x1dU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x1dU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+375,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+376,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+377,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+378,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x1eU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x1eU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+379,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x1eU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x1eU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x1eU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x1eU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x1eU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+380,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+381,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+382,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+383,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x1fU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x1fU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+384,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x1fU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x1fU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x1fU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x1fU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x1fU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+385,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+386,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+387,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+388,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x20U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x20U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+389,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x20U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x20U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x20U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x20U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x20U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+390,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+391,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+392,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+393,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x21U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x21U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+394,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x21U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x21U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x21U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x21U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x21U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+395,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+396,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+397,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+398,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x22U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x22U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+399,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x22U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x22U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x22U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x22U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x22U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+400,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+401,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+402,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+403,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x23U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x23U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+404,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x23U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x23U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x23U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x23U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x23U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+405,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+406,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+407,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+408,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x24U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x24U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+409,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x24U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x24U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x24U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x24U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x24U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+410,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+411,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+412,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+413,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x25U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x25U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+414,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x25U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x25U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x25U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x25U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x25U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+415,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+416,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+417,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+418,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x26U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x26U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x26U))))));
        bufp->chgBit(oldp+419,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x26U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x26U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x26U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x26U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x26U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x26U)))))));
        bufp->chgBit(oldp+420,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+421,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+422,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+423,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x27U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x27U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x27U))))));
        bufp->chgBit(oldp+424,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x27U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x27U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x27U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x27U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x27U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x27U)))))));
        bufp->chgBit(oldp+425,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+426,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+427,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+428,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x28U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x28U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x28U))))));
        bufp->chgBit(oldp+429,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x28U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x28U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x28U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x28U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x28U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x28U)))))));
        bufp->chgBit(oldp+430,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+431,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+432,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+433,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x29U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x29U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x29U))))));
        bufp->chgBit(oldp+434,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x29U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x29U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x29U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x29U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x29U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x29U)))))));
        bufp->chgBit(oldp+435,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+436,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+437,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+438,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x2aU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x2aU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x2aU))))));
        bufp->chgBit(oldp+439,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x2aU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x2aU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x2aU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x2aU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x2aU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x2aU)))))));
        bufp->chgBit(oldp+440,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+441,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+442,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+443,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x2bU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x2bU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x2bU))))));
        bufp->chgBit(oldp+444,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x2bU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x2bU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x2bU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x2bU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x2bU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x2bU)))))));
        bufp->chgBit(oldp+445,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+446,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+447,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+448,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x2cU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x2cU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x2cU))))));
        bufp->chgBit(oldp+449,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x2cU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x2cU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x2cU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x2cU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x2cU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x2cU)))))));
        bufp->chgBit(oldp+450,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+451,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+452,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+453,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x2dU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x2dU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x2dU))))));
        bufp->chgBit(oldp+454,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x2dU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x2dU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x2dU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x2dU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x2dU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x2dU)))))));
        bufp->chgBit(oldp+455,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+456,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+457,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+458,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x2eU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x2eU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x2eU))))));
        bufp->chgBit(oldp+459,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x2eU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x2eU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x2eU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x2eU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x2eU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x2eU)))))));
        bufp->chgBit(oldp+460,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+461,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+462,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+463,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x2fU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x2fU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x2fU))))));
        bufp->chgBit(oldp+464,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x2fU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x2fU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x2fU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x2fU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x2fU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x2fU)))))));
        bufp->chgBit(oldp+465,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+466,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+467,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+468,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x30U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x30U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x30U))))));
        bufp->chgBit(oldp+469,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x30U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x30U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x30U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x30U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x30U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x30U)))))));
        bufp->chgBit(oldp+470,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+471,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+472,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+473,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x31U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x31U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x31U))))));
        bufp->chgBit(oldp+474,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x31U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x31U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x31U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x31U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x31U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x31U)))))));
        bufp->chgBit(oldp+475,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+476,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+477,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+478,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x32U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x32U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x32U))))));
        bufp->chgBit(oldp+479,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x32U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x32U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x32U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x32U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x32U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x32U)))))));
        bufp->chgBit(oldp+480,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+481,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+482,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+483,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x33U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x33U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x33U))))));
        bufp->chgBit(oldp+484,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x33U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x33U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x33U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x33U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x33U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x33U)))))));
        bufp->chgBit(oldp+485,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+486,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+487,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+488,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x34U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x34U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x34U))))));
        bufp->chgBit(oldp+489,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x34U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x34U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x34U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x34U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x34U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x34U)))))));
        bufp->chgBit(oldp+490,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+491,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+492,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+493,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x35U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x35U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x35U))))));
        bufp->chgBit(oldp+494,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x35U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x35U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x35U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x35U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x35U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x35U)))))));
        bufp->chgBit(oldp+495,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+496,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+497,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+498,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x36U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x36U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x36U))))));
        bufp->chgBit(oldp+499,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x36U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x36U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x36U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x36U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x36U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x36U)))))));
        bufp->chgBit(oldp+500,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+501,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+502,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+503,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x37U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x37U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x37U))))));
        bufp->chgBit(oldp+504,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x37U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x37U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x37U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x37U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x37U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x37U)))))));
        bufp->chgBit(oldp+505,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+506,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+507,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+508,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x38U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x38U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x38U))))));
        bufp->chgBit(oldp+509,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x38U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x38U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x38U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x38U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x38U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x38U)))))));
        bufp->chgBit(oldp+510,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+511,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+512,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+513,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x39U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x39U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x39U))))));
        bufp->chgBit(oldp+514,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x39U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x39U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x39U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x39U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x39U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x39U)))))));
        bufp->chgBit(oldp+515,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+516,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+517,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+518,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x3aU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x3aU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x3aU))))));
        bufp->chgBit(oldp+519,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x3aU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x3aU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x3aU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x3aU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x3aU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x3aU)))))));
        bufp->chgBit(oldp+520,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+521,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+522,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+523,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x3bU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x3bU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x3bU))))));
        bufp->chgBit(oldp+524,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x3bU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x3bU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x3bU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x3bU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x3bU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x3bU)))))));
        bufp->chgBit(oldp+525,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+526,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+527,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+528,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x3cU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x3cU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x3cU))))));
        bufp->chgBit(oldp+529,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x3cU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x3cU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x3cU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x3cU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x3cU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x3cU)))))));
        bufp->chgBit(oldp+530,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+531,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+532,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+533,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x3dU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x3dU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x3dU))))));
        bufp->chgBit(oldp+534,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x3dU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x3dU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x3dU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x3dU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x3dU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x3dU)))))));
        bufp->chgBit(oldp+535,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+536,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+537,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+538,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x3eU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x3eU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x3eU))))));
        bufp->chgBit(oldp+539,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x3eU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x3eU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x3eU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x3eU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x3eU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x3eU)))))));
        bufp->chgBit(oldp+540,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+541,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+542,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+543,((IData)((((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                          ^ vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B) 
                                         ^ vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin) 
                                        >> 0x3fU))));
        bufp->chgBit(oldp+544,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x3fU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x3fU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x3fU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x3fU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x3fU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 0x3fU)))))));
        bufp->chgBit(oldp+545,((1U & ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A) 
                                      ^ (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B)))));
        bufp->chgBit(oldp+546,((1U & ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A) 
                                      & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B)))));
        bufp->chgBit(oldp+547,((1U & ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B) 
                                      & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin)))));
        bufp->chgBit(oldp+548,((1U & ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A) 
                                      & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin)))));
        bufp->chgBit(oldp+549,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 1U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 1U))))));
        bufp->chgBit(oldp+550,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 1U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 1U))))));
        bufp->chgBit(oldp+551,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 1U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 1U))))));
        bufp->chgBit(oldp+552,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 1U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 1U))))));
        bufp->chgBit(oldp+553,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0xaU)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+554,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0xaU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+555,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0xaU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+556,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0xaU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+557,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0xbU)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+558,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0xbU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+559,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0xbU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+560,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0xbU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+561,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0xcU)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+562,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0xcU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+563,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0xcU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+564,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0xcU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+565,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0xdU)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+566,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0xdU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+567,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0xdU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+568,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0xdU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+569,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0xeU)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+570,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0xeU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+571,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0xeU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+572,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0xeU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+573,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0xfU)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+574,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0xfU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+575,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0xfU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+576,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0xfU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+577,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x10U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+578,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x10U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+579,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x10U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+580,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x10U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+581,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x11U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+582,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x11U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+583,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x11U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+584,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x11U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+585,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x12U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+586,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x12U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+587,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x12U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+588,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x12U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+589,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x13U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+590,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x13U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+591,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x13U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+592,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x13U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+593,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 2U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 2U))))));
        bufp->chgBit(oldp+594,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 2U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 2U))))));
        bufp->chgBit(oldp+595,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 2U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 2U))))));
        bufp->chgBit(oldp+596,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 2U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 2U))))));
        bufp->chgBit(oldp+597,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x14U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+598,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x14U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+599,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x14U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+600,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x14U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+601,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x15U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+602,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x15U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+603,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x15U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+604,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x15U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+605,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x16U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+606,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x16U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+607,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x16U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+608,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x16U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+609,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x17U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+610,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x17U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+611,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x17U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+612,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x17U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+613,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x18U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+614,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x18U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+615,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x18U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+616,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x18U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+617,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x19U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+618,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x19U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+619,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x19U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+620,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x19U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+621,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x1aU)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+622,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x1aU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+623,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x1aU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+624,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x1aU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+625,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x1bU)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+626,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x1bU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+627,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x1bU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+628,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x1bU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+629,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x1cU)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+630,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x1cU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+631,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x1cU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+632,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x1cU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+633,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x1dU)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+634,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x1dU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+635,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x1dU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+636,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x1dU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+637,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 3U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 3U))))));
        bufp->chgBit(oldp+638,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 3U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 3U))))));
        bufp->chgBit(oldp+639,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 3U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 3U))))));
        bufp->chgBit(oldp+640,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 3U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 3U))))));
        bufp->chgBit(oldp+641,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x1eU)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+642,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x1eU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+643,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x1eU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+644,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x1eU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+645,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x1fU)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+646,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x1fU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+647,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x1fU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+648,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x1fU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+649,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x20U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+650,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x20U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+651,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x20U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+652,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x20U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+653,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x21U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+654,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x21U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+655,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x21U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+656,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x21U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+657,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x22U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+658,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x22U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+659,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x22U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+660,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x22U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+661,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x23U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+662,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x23U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+663,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x23U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+664,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x23U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+665,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x24U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+666,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x24U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+667,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x24U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+668,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x24U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+669,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x25U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+670,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x25U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+671,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x25U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+672,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x25U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+673,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x26U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x26U))))));
        bufp->chgBit(oldp+674,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x26U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x26U))))));
        bufp->chgBit(oldp+675,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x26U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x26U))))));
        bufp->chgBit(oldp+676,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x26U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x26U))))));
        bufp->chgBit(oldp+677,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x27U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x27U))))));
        bufp->chgBit(oldp+678,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x27U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x27U))))));
        bufp->chgBit(oldp+679,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x27U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x27U))))));
        bufp->chgBit(oldp+680,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x27U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x27U))))));
        bufp->chgBit(oldp+681,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 4U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 4U))))));
        bufp->chgBit(oldp+682,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 4U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 4U))))));
        bufp->chgBit(oldp+683,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 4U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 4U))))));
        bufp->chgBit(oldp+684,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 4U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 4U))))));
        bufp->chgBit(oldp+685,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x28U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x28U))))));
        bufp->chgBit(oldp+686,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x28U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x28U))))));
        bufp->chgBit(oldp+687,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x28U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x28U))))));
        bufp->chgBit(oldp+688,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x28U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x28U))))));
        bufp->chgBit(oldp+689,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x29U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x29U))))));
        bufp->chgBit(oldp+690,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x29U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x29U))))));
        bufp->chgBit(oldp+691,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x29U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x29U))))));
        bufp->chgBit(oldp+692,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x29U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x29U))))));
        bufp->chgBit(oldp+693,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x2aU)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x2aU))))));
        bufp->chgBit(oldp+694,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x2aU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x2aU))))));
        bufp->chgBit(oldp+695,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x2aU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x2aU))))));
        bufp->chgBit(oldp+696,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x2aU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x2aU))))));
        bufp->chgBit(oldp+697,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x2bU)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x2bU))))));
        bufp->chgBit(oldp+698,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x2bU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x2bU))))));
        bufp->chgBit(oldp+699,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x2bU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x2bU))))));
        bufp->chgBit(oldp+700,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x2bU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x2bU))))));
        bufp->chgBit(oldp+701,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x2cU)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x2cU))))));
        bufp->chgBit(oldp+702,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x2cU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x2cU))))));
        bufp->chgBit(oldp+703,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x2cU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x2cU))))));
        bufp->chgBit(oldp+704,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x2cU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x2cU))))));
        bufp->chgBit(oldp+705,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x2dU)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x2dU))))));
        bufp->chgBit(oldp+706,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x2dU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x2dU))))));
        bufp->chgBit(oldp+707,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x2dU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x2dU))))));
        bufp->chgBit(oldp+708,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x2dU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x2dU))))));
        bufp->chgBit(oldp+709,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x2eU)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x2eU))))));
        bufp->chgBit(oldp+710,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x2eU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x2eU))))));
        bufp->chgBit(oldp+711,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x2eU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x2eU))))));
        bufp->chgBit(oldp+712,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x2eU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x2eU))))));
        bufp->chgBit(oldp+713,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x2fU)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x2fU))))));
        bufp->chgBit(oldp+714,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x2fU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x2fU))))));
        bufp->chgBit(oldp+715,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x2fU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x2fU))))));
        bufp->chgBit(oldp+716,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x2fU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x2fU))))));
        bufp->chgBit(oldp+717,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x30U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x30U))))));
        bufp->chgBit(oldp+718,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x30U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x30U))))));
        bufp->chgBit(oldp+719,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x30U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x30U))))));
        bufp->chgBit(oldp+720,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x30U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x30U))))));
        bufp->chgBit(oldp+721,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x31U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x31U))))));
        bufp->chgBit(oldp+722,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x31U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x31U))))));
        bufp->chgBit(oldp+723,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x31U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x31U))))));
        bufp->chgBit(oldp+724,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x31U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x31U))))));
        bufp->chgBit(oldp+725,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 5U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 5U))))));
        bufp->chgBit(oldp+726,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 5U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 5U))))));
        bufp->chgBit(oldp+727,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 5U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 5U))))));
        bufp->chgBit(oldp+728,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 5U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 5U))))));
        bufp->chgBit(oldp+729,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x32U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x32U))))));
        bufp->chgBit(oldp+730,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x32U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x32U))))));
        bufp->chgBit(oldp+731,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x32U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x32U))))));
        bufp->chgBit(oldp+732,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x32U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x32U))))));
        bufp->chgBit(oldp+733,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x33U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x33U))))));
        bufp->chgBit(oldp+734,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x33U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x33U))))));
        bufp->chgBit(oldp+735,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x33U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x33U))))));
        bufp->chgBit(oldp+736,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x33U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x33U))))));
        bufp->chgBit(oldp+737,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x34U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x34U))))));
        bufp->chgBit(oldp+738,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x34U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x34U))))));
        bufp->chgBit(oldp+739,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x34U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x34U))))));
        bufp->chgBit(oldp+740,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x34U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x34U))))));
        bufp->chgBit(oldp+741,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x35U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x35U))))));
        bufp->chgBit(oldp+742,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x35U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x35U))))));
        bufp->chgBit(oldp+743,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x35U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x35U))))));
        bufp->chgBit(oldp+744,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x35U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x35U))))));
        bufp->chgBit(oldp+745,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x36U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x36U))))));
        bufp->chgBit(oldp+746,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x36U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x36U))))));
        bufp->chgBit(oldp+747,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x36U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x36U))))));
        bufp->chgBit(oldp+748,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x36U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x36U))))));
        bufp->chgBit(oldp+749,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x37U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x37U))))));
        bufp->chgBit(oldp+750,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x37U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x37U))))));
        bufp->chgBit(oldp+751,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x37U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x37U))))));
        bufp->chgBit(oldp+752,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x37U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x37U))))));
        bufp->chgBit(oldp+753,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x38U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x38U))))));
        bufp->chgBit(oldp+754,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x38U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x38U))))));
        bufp->chgBit(oldp+755,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x38U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x38U))))));
        bufp->chgBit(oldp+756,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x38U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x38U))))));
        bufp->chgBit(oldp+757,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x39U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x39U))))));
        bufp->chgBit(oldp+758,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x39U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x39U))))));
        bufp->chgBit(oldp+759,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x39U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x39U))))));
        bufp->chgBit(oldp+760,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x39U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x39U))))));
        bufp->chgBit(oldp+761,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x3aU)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x3aU))))));
        bufp->chgBit(oldp+762,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x3aU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x3aU))))));
        bufp->chgBit(oldp+763,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x3aU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x3aU))))));
        bufp->chgBit(oldp+764,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x3aU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x3aU))))));
        bufp->chgBit(oldp+765,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x3bU)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x3bU))))));
        bufp->chgBit(oldp+766,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x3bU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x3bU))))));
        bufp->chgBit(oldp+767,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x3bU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x3bU))))));
        bufp->chgBit(oldp+768,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x3bU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x3bU))))));
        bufp->chgBit(oldp+769,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 6U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 6U))))));
        bufp->chgBit(oldp+770,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 6U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 6U))))));
        bufp->chgBit(oldp+771,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 6U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 6U))))));
        bufp->chgBit(oldp+772,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 6U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 6U))))));
        bufp->chgBit(oldp+773,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x3cU)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x3cU))))));
        bufp->chgBit(oldp+774,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x3cU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x3cU))))));
        bufp->chgBit(oldp+775,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x3cU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x3cU))))));
        bufp->chgBit(oldp+776,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x3cU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x3cU))))));
        bufp->chgBit(oldp+777,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x3dU)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x3dU))))));
        bufp->chgBit(oldp+778,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x3dU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x3dU))))));
        bufp->chgBit(oldp+779,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x3dU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x3dU))))));
        bufp->chgBit(oldp+780,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x3dU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x3dU))))));
        bufp->chgBit(oldp+781,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x3eU)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x3eU))))));
        bufp->chgBit(oldp+782,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x3eU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 0x3eU))))));
        bufp->chgBit(oldp+783,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x3eU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x3eU))))));
        bufp->chgBit(oldp+784,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x3eU)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 0x3eU))))));
        bufp->chgBit(oldp+785,((IData)(((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                         ^ vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B) 
                                        >> 0x3fU))));
        bufp->chgBit(oldp+786,((IData)(((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                         & vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B) 
                                        >> 0x3fU))));
        bufp->chgBit(oldp+787,((IData)(((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                         & vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin) 
                                        >> 0x3fU))));
        bufp->chgBit(oldp+788,((IData)(((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                         & vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin) 
                                        >> 0x3fU))));
        bufp->chgBit(oldp+789,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 7U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 7U))))));
        bufp->chgBit(oldp+790,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 7U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 7U))))));
        bufp->chgBit(oldp+791,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 7U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 7U))))));
        bufp->chgBit(oldp+792,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 7U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 7U))))));
        bufp->chgBit(oldp+793,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 8U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 8U))))));
        bufp->chgBit(oldp+794,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 8U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 8U))))));
        bufp->chgBit(oldp+795,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 8U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 8U))))));
        bufp->chgBit(oldp+796,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 8U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 8U))))));
        bufp->chgBit(oldp+797,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 9U)) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 9U))))));
        bufp->chgBit(oldp+798,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 9U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                 >> 9U))))));
        bufp->chgBit(oldp+799,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 9U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 9U))))));
        bufp->chgBit(oldp+800,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 9U)) 
                                      & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 9U))))));
        bufp->chgBit(oldp+801,((1U & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A))));
        bufp->chgBit(oldp+802,((1U & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B))));
        bufp->chgBit(oldp+803,((1U & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin))));
        bufp->chgBit(oldp+804,((1U & (((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A) 
                                       ^ (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B)) 
                                      ^ (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin)))));
        bufp->chgBit(oldp+805,((1U & ((((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A) 
                                        & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B)) 
                                       | ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B) 
                                          & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin))) 
                                      | ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A) 
                                         & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin))))));
        bufp->chgBit(oldp+806,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 1U)))));
        bufp->chgBit(oldp+807,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 1U)))));
        bufp->chgBit(oldp+808,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 1U)))));
        bufp->chgBit(oldp+809,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 1U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 1U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 1U))))));
        bufp->chgBit(oldp+810,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 1U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 1U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 1U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 1U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 1U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+811,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 2U)))));
        bufp->chgBit(oldp+812,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 2U)))));
        bufp->chgBit(oldp+813,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 2U)))));
        bufp->chgBit(oldp+814,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 2U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 2U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 2U))))));
        bufp->chgBit(oldp+815,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 2U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 2U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 2U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 2U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 2U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+816,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 3U)))));
        bufp->chgBit(oldp+817,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 3U)))));
        bufp->chgBit(oldp+818,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 3U)))));
        bufp->chgBit(oldp+819,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 3U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 3U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 3U))))));
        bufp->chgBit(oldp+820,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 3U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 3U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 3U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 3U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 3U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+821,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 4U)))));
        bufp->chgBit(oldp+822,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 4U)))));
        bufp->chgBit(oldp+823,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 4U)))));
        bufp->chgBit(oldp+824,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 4U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 4U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 4U))))));
        bufp->chgBit(oldp+825,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 4U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 4U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 4U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 4U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 4U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+826,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 5U)))));
        bufp->chgBit(oldp+827,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 5U)))));
        bufp->chgBit(oldp+828,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 5U)))));
        bufp->chgBit(oldp+829,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 5U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 5U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 5U))))));
        bufp->chgBit(oldp+830,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 5U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 5U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 5U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 5U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 5U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 5U)))))));
        bufp->chgBit(oldp+831,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 6U)))));
        bufp->chgBit(oldp+832,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 6U)))));
        bufp->chgBit(oldp+833,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 6U)))));
        bufp->chgBit(oldp+834,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 6U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 6U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 6U))))));
        bufp->chgBit(oldp+835,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 6U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 6U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 6U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 6U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 6U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 6U)))))));
        bufp->chgBit(oldp+836,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 7U)))));
        bufp->chgBit(oldp+837,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 7U)))));
        bufp->chgBit(oldp+838,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 7U)))));
        bufp->chgBit(oldp+839,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 7U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 7U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 7U))))));
        bufp->chgBit(oldp+840,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 7U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 7U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 7U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 7U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 7U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 7U)))))));
        bufp->chgBit(oldp+841,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 8U)))));
        bufp->chgBit(oldp+842,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 8U)))));
        bufp->chgBit(oldp+843,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 8U)))));
        bufp->chgBit(oldp+844,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 8U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 8U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 8U))))));
        bufp->chgBit(oldp+845,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 8U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 8U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 8U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 8U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 8U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 8U)))))));
        bufp->chgBit(oldp+846,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 9U)))));
        bufp->chgBit(oldp+847,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 9U)))));
        bufp->chgBit(oldp+848,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 9U)))));
        bufp->chgBit(oldp+849,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 9U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 9U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 9U))))));
        bufp->chgBit(oldp+850,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 9U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 9U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 9U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 9U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 9U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 9U)))))));
        bufp->chgBit(oldp+851,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+852,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+853,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+854,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xaU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+855,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0xaU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0xaU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0xaU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0xaU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0xaU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0xaU)))))));
        bufp->chgBit(oldp+856,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+857,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+858,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+859,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xbU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xbU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+860,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0xbU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0xbU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0xbU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0xbU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0xbU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0xbU)))))));
        bufp->chgBit(oldp+861,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+862,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+863,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+864,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xcU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xcU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+865,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0xcU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0xcU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0xcU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0xcU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0xcU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0xcU)))))));
        bufp->chgBit(oldp+866,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+867,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+868,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+869,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xdU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xdU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+870,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0xdU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0xdU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0xdU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0xdU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0xdU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0xdU)))))));
        bufp->chgBit(oldp+871,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+872,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+873,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+874,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xeU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xeU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+875,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0xeU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0xeU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0xeU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0xeU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0xeU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0xeU)))))));
        bufp->chgBit(oldp+876,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+877,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+878,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+879,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xfU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xfU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+880,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0xfU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0xfU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0xfU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0xfU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0xfU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0xfU)))))));
        bufp->chgBit(oldp+881,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+882,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+883,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+884,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x10U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x10U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+885,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x10U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x10U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x10U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x10U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x10U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0x10U)))))));
        bufp->chgBit(oldp+886,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+887,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+888,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+889,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x11U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x11U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+890,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x11U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x11U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x11U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x11U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x11U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0x11U)))))));
        bufp->chgBit(oldp+891,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+892,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+893,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+894,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x12U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x12U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+895,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x12U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x12U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x12U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x12U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x12U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0x12U)))))));
        bufp->chgBit(oldp+896,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+897,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+898,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+899,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x13U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x13U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+900,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x13U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x13U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x13U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x13U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x13U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0x13U)))))));
        bufp->chgBit(oldp+901,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+902,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+903,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+904,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x14U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x14U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+905,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x14U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x14U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x14U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x14U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x14U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0x14U)))))));
        bufp->chgBit(oldp+906,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+907,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+908,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+909,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x15U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x15U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+910,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x15U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x15U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x15U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x15U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x15U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0x15U)))))));
        bufp->chgBit(oldp+911,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+912,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+913,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+914,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x16U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x16U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+915,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x16U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x16U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x16U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x16U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x16U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0x16U)))))));
        bufp->chgBit(oldp+916,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+917,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+918,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+919,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x17U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x17U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+920,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x17U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x17U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x17U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x17U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x17U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0x17U)))))));
        bufp->chgBit(oldp+921,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+922,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+923,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+924,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x18U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x18U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+925,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x18U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x18U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x18U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x18U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x18U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0x18U)))))));
        bufp->chgBit(oldp+926,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+927,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+928,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+929,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x19U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x19U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+930,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x19U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x19U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x19U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x19U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x19U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0x19U)))))));
        bufp->chgBit(oldp+931,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+932,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+933,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+934,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1aU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1aU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+935,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x1aU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x1aU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x1aU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x1aU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x1aU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0x1aU)))))));
        bufp->chgBit(oldp+936,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+937,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+938,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+939,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1bU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1bU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+940,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x1bU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x1bU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x1bU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x1bU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x1bU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0x1bU)))))));
        bufp->chgBit(oldp+941,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+942,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+943,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+944,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1cU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1cU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+945,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x1cU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x1cU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x1cU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x1cU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x1cU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0x1cU)))))));
        bufp->chgBit(oldp+946,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+947,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+948,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+949,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1dU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1dU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+950,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x1dU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x1dU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x1dU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x1dU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x1dU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0x1dU)))))));
        bufp->chgBit(oldp+951,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+952,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+953,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+954,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1eU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1eU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+955,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x1eU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x1eU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x1eU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x1eU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x1eU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0x1eU)))))));
        bufp->chgBit(oldp+956,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+957,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+958,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+959,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1fU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1fU))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+960,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x1fU)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x1fU))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x1fU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x1fU)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x1fU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0x1fU)))))));
        bufp->chgBit(oldp+961,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+962,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+963,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+964,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x20U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x20U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+965,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x20U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x20U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x20U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x20U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x20U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0x20U)))))));
        bufp->chgBit(oldp+966,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+967,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+968,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+969,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x21U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x21U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+970,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x21U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x21U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x21U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x21U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x21U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0x21U)))))));
        bufp->chgBit(oldp+971,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+972,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+973,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+974,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x22U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x22U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+975,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x22U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x22U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x22U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x22U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x22U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0x22U)))))));
        bufp->chgBit(oldp+976,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+977,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+978,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+979,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x23U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x23U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+980,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x23U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x23U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x23U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x23U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x23U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0x23U)))))));
        bufp->chgBit(oldp+981,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+982,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+983,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+984,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x24U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x24U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+985,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x24U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x24U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x24U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x24U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x24U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0x24U)))))));
        bufp->chgBit(oldp+986,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+987,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+988,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+989,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x25U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x25U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+990,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x25U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x25U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x25U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x25U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x25U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0x25U)))))));
        bufp->chgBit(oldp+991,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+992,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+993,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+994,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x26U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x26U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0x26U))))));
        bufp->chgBit(oldp+995,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x26U)) 
                                        & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x26U))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x26U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x26U)))) 
                                      | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x26U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                    >> 0x26U)))))));
        bufp->chgBit(oldp+996,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+997,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+998,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+999,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x27U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x27U))) 
                                      ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                 >> 0x27U))))));
        bufp->chgBit(oldp+1000,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x27U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x27U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x27U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x27U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x27U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1001,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1002,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1003,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1004,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x28U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x28U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+1005,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x28U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x28U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x28U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x28U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x28U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1006,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1007,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1008,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1009,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x29U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x29U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+1010,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x29U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x29U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x29U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x29U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x29U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1011,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1012,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1013,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1014,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x2aU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x2aU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+1015,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x2aU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x2aU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x2aU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x2aU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x2aU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1016,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1017,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1018,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1019,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x2bU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x2bU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+1020,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x2bU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x2bU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x2bU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x2bU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x2bU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1021,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1022,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1023,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1024,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x2cU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x2cU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+1025,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x2cU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x2cU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x2cU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x2cU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x2cU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1026,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1027,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1028,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1029,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x2dU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x2dU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+1030,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x2dU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x2dU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x2dU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x2dU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x2dU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1031,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1032,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1033,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1034,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x2eU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x2eU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+1035,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x2eU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x2eU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x2eU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x2eU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x2eU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1036,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1037,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1038,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1039,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x2fU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x2fU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+1040,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x2fU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x2fU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x2fU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x2fU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x2fU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1041,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1042,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1043,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1044,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x30U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x30U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+1045,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x30U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x30U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x30U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x30U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x30U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+1046,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1047,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1048,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1049,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x31U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x31U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+1050,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x31U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x31U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x31U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x31U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x31U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+1051,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1052,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1053,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1054,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x32U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x32U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+1055,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x32U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x32U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x32U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x32U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x32U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+1056,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1057,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1058,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1059,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x33U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x33U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+1060,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x33U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x33U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x33U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x33U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x33U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+1061,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1062,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1063,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1064,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x34U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x34U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+1065,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x34U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x34U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x34U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x34U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x34U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+1066,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1067,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1068,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1069,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x35U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x35U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+1070,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x35U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x35U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x35U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x35U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x35U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+1071,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1072,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1073,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1074,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x36U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x36U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+1075,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x36U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x36U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x36U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x36U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x36U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x36U)))))));
        bufp->chgBit(oldp+1076,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1077,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1078,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1079,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x37U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x37U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+1080,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x37U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x37U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x37U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x37U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x37U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+1081,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1082,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1083,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1084,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x38U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x38U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+1085,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x38U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x38U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x38U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x38U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x38U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x38U)))))));
        bufp->chgBit(oldp+1086,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1087,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1088,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1089,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x39U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x39U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+1090,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x39U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x39U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x39U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x39U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x39U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x39U)))))));
        bufp->chgBit(oldp+1091,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1092,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1093,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1094,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x3aU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x3aU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+1095,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x3aU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x3aU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x3aU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x3aU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x3aU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x3aU)))))));
        bufp->chgBit(oldp+1096,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1097,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1098,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1099,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x3bU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x3bU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+1100,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x3bU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x3bU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x3bU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x3bU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x3bU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x3bU)))))));
        bufp->chgBit(oldp+1101,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1102,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1103,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1104,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x3cU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x3cU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3cU))))));
        bufp->chgBit(oldp+1105,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x3cU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x3cU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x3cU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x3cU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x3cU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x3cU)))))));
        bufp->chgBit(oldp+1106,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1107,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1108,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1109,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x3dU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x3dU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3dU))))));
        bufp->chgBit(oldp+1110,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x3dU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x3dU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x3dU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x3dU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x3dU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x3dU)))))));
        bufp->chgBit(oldp+1111,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1112,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1113,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1114,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x3eU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x3eU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3eU))))));
        bufp->chgBit(oldp+1115,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x3eU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x3eU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x3eU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x3eU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x3eU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x3eU)))))));
        bufp->chgBit(oldp+1116,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1117,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1118,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1119,((IData)((((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                           ^ vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B) 
                                          ^ vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin) 
                                         >> 0x3fU))));
        bufp->chgBit(oldp+1120,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x3fU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x3fU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x3fU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x3fU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x3fU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x3fU)))))));
        bufp->chgBit(oldp+1121,((1U & ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A) 
                                       ^ (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B)))));
        bufp->chgBit(oldp+1122,((1U & ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A) 
                                       & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B)))));
        bufp->chgBit(oldp+1123,((1U & ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B) 
                                       & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin)))));
        bufp->chgBit(oldp+1124,((1U & ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A) 
                                       & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin)))));
        bufp->chgBit(oldp+1125,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 1U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1126,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 1U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1127,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 1U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1128,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 1U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1129,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xaU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1130,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xaU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1131,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0xaU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1132,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xaU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1133,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xbU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1134,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xbU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1135,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0xbU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1136,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xbU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1137,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xcU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1138,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xcU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1139,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0xcU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1140,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xcU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1141,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xdU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1142,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xdU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1143,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0xdU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1144,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xdU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1145,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xeU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1146,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xeU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1147,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0xeU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1148,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xeU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1149,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xfU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1150,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xfU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1151,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0xfU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1152,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xfU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1153,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x10U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1154,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x10U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1155,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x10U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1156,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x10U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1157,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x11U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1158,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x11U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1159,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x11U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1160,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x11U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1161,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x12U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1162,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x12U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1163,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x12U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1164,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x12U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1165,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x13U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1166,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x13U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1167,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x13U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1168,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x13U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1169,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 2U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1170,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 2U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1171,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 2U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1172,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 2U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1173,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x14U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1174,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x14U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1175,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x14U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1176,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x14U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1177,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x15U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1178,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x15U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1179,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x15U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1180,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x15U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1181,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x16U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1182,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x16U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1183,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x16U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1184,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x16U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1185,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x17U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1186,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x17U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1187,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x17U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1188,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x17U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1189,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x18U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1190,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x18U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1191,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x18U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1192,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x18U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1193,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x19U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1194,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x19U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1195,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x19U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1196,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x19U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1197,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1aU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1198,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1aU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1199,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x1aU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1200,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1aU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1201,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1bU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1202,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1bU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1203,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x1bU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1204,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1bU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1205,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1cU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1206,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1cU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1207,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x1cU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1208,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1cU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1209,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1dU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1210,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1dU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1211,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x1dU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1212,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1dU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1213,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 3U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1214,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 3U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1215,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 3U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1216,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 3U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1217,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1eU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1218,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1eU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1219,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x1eU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1220,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1eU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1221,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1fU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1222,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1fU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1223,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x1fU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1224,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1fU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1225,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x20U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1226,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x20U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1227,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x20U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1228,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x20U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1229,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x21U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1230,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x21U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1231,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x21U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1232,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x21U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1233,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x22U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1234,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x22U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1235,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x22U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1236,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x22U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1237,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x23U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1238,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x23U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1239,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x23U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1240,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x23U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1241,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x24U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1242,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x24U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1243,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x24U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1244,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x24U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1245,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x25U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1246,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x25U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1247,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x25U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1248,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x25U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1249,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x26U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+1250,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x26U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+1251,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x26U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+1252,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x26U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+1253,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x27U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+1254,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x27U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+1255,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x27U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+1256,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x27U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+1257,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 4U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1258,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 4U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1259,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 4U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1260,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 4U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1261,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x28U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+1262,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x28U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+1263,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x28U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+1264,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x28U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+1265,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x29U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+1266,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x29U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+1267,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x29U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+1268,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x29U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+1269,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2aU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+1270,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2aU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+1271,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x2aU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+1272,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2aU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+1273,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2bU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+1274,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2bU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+1275,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x2bU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+1276,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2bU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+1277,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2cU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+1278,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2cU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+1279,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x2cU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+1280,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2cU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+1281,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2dU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+1282,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2dU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+1283,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x2dU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+1284,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2dU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+1285,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2eU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+1286,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2eU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+1287,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x2eU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+1288,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2eU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+1289,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2fU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+1290,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2fU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+1291,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x2fU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+1292,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2fU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+1293,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x30U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+1294,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x30U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+1295,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x30U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+1296,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x30U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+1297,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x31U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+1298,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x31U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+1299,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x31U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+1300,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x31U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+1301,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 5U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1302,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 5U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1303,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 5U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1304,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 5U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1305,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x32U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+1306,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x32U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+1307,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x32U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+1308,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x32U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+1309,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x33U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+1310,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x33U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+1311,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x33U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+1312,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x33U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+1313,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x34U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+1314,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x34U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+1315,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x34U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+1316,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x34U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+1317,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x35U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+1318,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x35U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+1319,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x35U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+1320,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x35U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+1321,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x36U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+1322,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x36U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+1323,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x36U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+1324,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x36U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+1325,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x37U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+1326,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x37U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+1327,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x37U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+1328,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x37U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+1329,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x38U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+1330,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x38U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+1331,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x38U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+1332,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x38U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+1333,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x39U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+1334,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x39U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+1335,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x39U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+1336,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x39U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+1337,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3aU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+1338,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3aU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+1339,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x3aU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+1340,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3aU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+1341,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3bU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+1342,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3bU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+1343,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x3bU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+1344,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3bU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+1345,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 6U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1346,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 6U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1347,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 6U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1348,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 6U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1349,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3cU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x3cU))))));
        bufp->chgBit(oldp+1350,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3cU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x3cU))))));
        bufp->chgBit(oldp+1351,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x3cU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3cU))))));
        bufp->chgBit(oldp+1352,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3cU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3cU))))));
        bufp->chgBit(oldp+1353,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3dU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x3dU))))));
        bufp->chgBit(oldp+1354,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3dU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x3dU))))));
        bufp->chgBit(oldp+1355,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x3dU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3dU))))));
        bufp->chgBit(oldp+1356,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3dU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3dU))))));
        bufp->chgBit(oldp+1357,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3eU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x3eU))))));
        bufp->chgBit(oldp+1358,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3eU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x3eU))))));
        bufp->chgBit(oldp+1359,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x3eU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3eU))))));
        bufp->chgBit(oldp+1360,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3eU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3eU))))));
        bufp->chgBit(oldp+1361,((IData)(((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                          ^ vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B) 
                                         >> 0x3fU))));
        bufp->chgBit(oldp+1362,((IData)(((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                          & vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B) 
                                         >> 0x3fU))));
        bufp->chgBit(oldp+1363,((IData)(((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                          & vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin) 
                                         >> 0x3fU))));
        bufp->chgBit(oldp+1364,((IData)(((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                          & vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin) 
                                         >> 0x3fU))));
        bufp->chgBit(oldp+1365,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 7U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1366,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 7U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1367,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 7U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1368,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 7U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1369,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 8U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 8U))))));
        bufp->chgBit(oldp+1370,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 8U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 8U))))));
        bufp->chgBit(oldp+1371,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 8U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 8U))))));
        bufp->chgBit(oldp+1372,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 8U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 8U))))));
        bufp->chgBit(oldp+1373,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 9U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 9U))))));
        bufp->chgBit(oldp+1374,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 9U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 9U))))));
        bufp->chgBit(oldp+1375,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 9U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 9U))))));
        bufp->chgBit(oldp+1376,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 9U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 9U))))));
        bufp->chgBit(oldp+1377,((1U & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A))));
        bufp->chgBit(oldp+1378,((1U & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B))));
        bufp->chgBit(oldp+1379,((1U & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin))));
        bufp->chgBit(oldp+1380,((1U & (((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A) 
                                        ^ (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B)) 
                                       ^ (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin)))));
        bufp->chgBit(oldp+1381,((1U & ((((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A) 
                                         & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B)) 
                                        | ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B) 
                                           & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin))) 
                                       | ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A) 
                                          & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin))))));
        bufp->chgBit(oldp+1382,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 1U)))));
        bufp->chgBit(oldp+1383,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 1U)))));
        bufp->chgBit(oldp+1384,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 1U)))));
        bufp->chgBit(oldp+1385,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 1U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 1U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1386,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 1U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 1U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 1U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 1U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 1U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1387,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 2U)))));
        bufp->chgBit(oldp+1388,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 2U)))));
        bufp->chgBit(oldp+1389,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 2U)))));
        bufp->chgBit(oldp+1390,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 2U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 2U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1391,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 2U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 2U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 2U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 2U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 2U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1392,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 3U)))));
        bufp->chgBit(oldp+1393,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 3U)))));
        bufp->chgBit(oldp+1394,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 3U)))));
        bufp->chgBit(oldp+1395,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 3U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 3U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1396,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 3U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 3U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 3U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 3U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 3U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1397,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 4U)))));
        bufp->chgBit(oldp+1398,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 4U)))));
        bufp->chgBit(oldp+1399,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 4U)))));
        bufp->chgBit(oldp+1400,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 4U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 4U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1401,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 4U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 4U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 4U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 4U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 4U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1402,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 5U)))));
        bufp->chgBit(oldp+1403,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 5U)))));
        bufp->chgBit(oldp+1404,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 5U)))));
        bufp->chgBit(oldp+1405,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 5U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 5U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1406,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 5U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 5U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 5U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 5U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 5U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1407,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 6U)))));
        bufp->chgBit(oldp+1408,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 6U)))));
        bufp->chgBit(oldp+1409,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 6U)))));
        bufp->chgBit(oldp+1410,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 6U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 6U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1411,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 6U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 6U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 6U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 6U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 6U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1412,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 7U)))));
        bufp->chgBit(oldp+1413,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 7U)))));
        bufp->chgBit(oldp+1414,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 7U)))));
        bufp->chgBit(oldp+1415,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 7U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 7U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1416,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 7U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 7U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 7U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 7U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 7U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1417,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 8U)))));
        bufp->chgBit(oldp+1418,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 8U)))));
        bufp->chgBit(oldp+1419,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 8U)))));
        bufp->chgBit(oldp+1420,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 8U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 8U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 8U))))));
        bufp->chgBit(oldp+1421,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 8U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 8U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 8U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 8U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 8U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1422,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 9U)))));
        bufp->chgBit(oldp+1423,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 9U)))));
        bufp->chgBit(oldp+1424,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 9U)))));
        bufp->chgBit(oldp+1425,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 9U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 9U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 9U))))));
        bufp->chgBit(oldp+1426,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 9U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 9U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 9U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 9U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 9U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+1427,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1428,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1429,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1430,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0xaU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0xaU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1431,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0xaU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0xaU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0xaU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0xaU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0xaU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1432,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1433,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1434,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1435,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0xbU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0xbU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1436,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0xbU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0xbU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0xbU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0xbU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0xbU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1437,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1438,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1439,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1440,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0xcU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0xcU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1441,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0xcU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0xcU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0xcU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0xcU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0xcU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1442,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1443,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1444,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1445,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0xdU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0xdU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1446,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0xdU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0xdU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0xdU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0xdU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0xdU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1447,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1448,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1449,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1450,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0xeU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0xeU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1451,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0xeU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0xeU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0xeU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0xeU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0xeU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1452,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1453,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1454,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1455,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0xfU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0xfU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1456,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0xfU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0xfU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0xfU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0xfU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0xfU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1457,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1458,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1459,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1460,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x10U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x10U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1461,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x10U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x10U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x10U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x10U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x10U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1462,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1463,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1464,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1465,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x11U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x11U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1466,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x11U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x11U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x11U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x11U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x11U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1467,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1468,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1469,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1470,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x12U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x12U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1471,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x12U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x12U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x12U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x12U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x12U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1472,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1473,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1474,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1475,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x13U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x13U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1476,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x13U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x13U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x13U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x13U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x13U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1477,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1478,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1479,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1480,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x14U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x14U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1481,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x14U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x14U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x14U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x14U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x14U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1482,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1483,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1484,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1485,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x15U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x15U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1486,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x15U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x15U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x15U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x15U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x15U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1487,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1488,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1489,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1490,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x16U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x16U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1491,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x16U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x16U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x16U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x16U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x16U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1492,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1493,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1494,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1495,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x17U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x17U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1496,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x17U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x17U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x17U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x17U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x17U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1497,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1498,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1499,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1500,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x18U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x18U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1501,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x18U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x18U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x18U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x18U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x18U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1502,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1503,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1504,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1505,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x19U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x19U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1506,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x19U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x19U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x19U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x19U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x19U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1507,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1508,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1509,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1510,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x1aU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x1aU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1511,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x1aU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x1aU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x1aU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x1aU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x1aU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1512,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1513,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1514,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1515,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x1bU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x1bU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1516,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x1bU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x1bU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x1bU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x1bU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x1bU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1517,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1518,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1519,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1520,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x1cU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x1cU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1521,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x1cU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x1cU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x1cU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x1cU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x1cU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1522,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1523,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1524,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1525,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x1dU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x1dU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1526,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x1dU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x1dU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x1dU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x1dU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x1dU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1527,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1528,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1529,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1530,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x1eU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x1eU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1531,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x1eU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x1eU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x1eU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x1eU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x1eU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1532,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1533,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1534,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1535,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x1fU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x1fU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1536,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x1fU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x1fU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x1fU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x1fU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x1fU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1537,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1538,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1539,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1540,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x20U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x20U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1541,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x20U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x20U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x20U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x20U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x20U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1542,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1543,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1544,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1545,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x21U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x21U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1546,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x21U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x21U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x21U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x21U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x21U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1547,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1548,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1549,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1550,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x22U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x22U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1551,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x22U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x22U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x22U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x22U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x22U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1552,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1553,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1554,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1555,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x23U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x23U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1556,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x23U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x23U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x23U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x23U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x23U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1557,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1558,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1559,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1560,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x24U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x24U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1561,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x24U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x24U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x24U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x24U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x24U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1562,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1563,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1564,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1565,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x25U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x25U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1566,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x25U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x25U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x25U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x25U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x25U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1567,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1568,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1569,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1570,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x26U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x26U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+1571,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x26U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x26U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x26U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x26U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x26U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1572,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1573,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1574,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1575,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x27U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x27U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+1576,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x27U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x27U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x27U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x27U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x27U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1577,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1578,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1579,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1580,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x28U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x28U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+1581,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x28U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x28U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x28U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x28U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x28U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1582,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1583,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1584,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1585,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x29U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x29U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+1586,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x29U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x29U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x29U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x29U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x29U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1587,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1588,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1589,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1590,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x2aU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x2aU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+1591,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x2aU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x2aU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x2aU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x2aU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x2aU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1592,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1593,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1594,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1595,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x2bU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x2bU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+1596,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x2bU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x2bU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x2bU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x2bU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x2bU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1597,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1598,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1599,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1600,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x2cU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x2cU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+1601,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x2cU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x2cU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x2cU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x2cU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x2cU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1602,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1603,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1604,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1605,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x2dU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x2dU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+1606,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x2dU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x2dU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x2dU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x2dU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x2dU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1607,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1608,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1609,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1610,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x2eU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x2eU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+1611,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x2eU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x2eU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x2eU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x2eU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x2eU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1612,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1613,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1614,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1615,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x2fU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x2fU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+1616,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x2fU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x2fU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x2fU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x2fU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x2fU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1617,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1618,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1619,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1620,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x30U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x30U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+1621,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x30U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x30U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x30U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x30U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x30U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+1622,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1623,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1624,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1625,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x31U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x31U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+1626,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x31U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x31U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x31U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x31U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x31U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+1627,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1628,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1629,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1630,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x32U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x32U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+1631,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x32U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x32U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x32U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x32U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x32U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+1632,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1633,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1634,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1635,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x33U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x33U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+1636,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x33U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x33U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x33U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x33U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x33U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+1637,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1638,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1639,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1640,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x34U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x34U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+1641,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x34U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x34U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x34U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x34U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x34U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+1642,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1643,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1644,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1645,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x35U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x35U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+1646,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x35U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x35U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x35U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x35U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x35U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+1647,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1648,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1649,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1650,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x36U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x36U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+1651,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x36U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x36U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x36U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x36U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x36U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x36U)))))));
        bufp->chgBit(oldp+1652,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1653,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1654,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1655,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x37U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x37U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+1656,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x37U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x37U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x37U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x37U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x37U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+1657,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1658,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1659,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1660,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x38U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x38U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+1661,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x38U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x38U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x38U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x38U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x38U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x38U)))))));
        bufp->chgBit(oldp+1662,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1663,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1664,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1665,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x39U)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x39U))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+1666,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x39U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x39U))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x39U)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x39U)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x39U)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x39U)))))));
        bufp->chgBit(oldp+1667,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1668,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1669,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1670,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x3aU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x3aU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+1671,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x3aU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x3aU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x3aU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x3aU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x3aU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x3aU)))))));
        bufp->chgBit(oldp+1672,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1673,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1674,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1675,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x3bU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x3bU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+1676,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x3bU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x3bU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x3bU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x3bU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x3bU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x3bU)))))));
        bufp->chgBit(oldp+1677,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1678,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1679,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1680,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x3cU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x3cU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x3cU))))));
        bufp->chgBit(oldp+1681,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x3cU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x3cU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x3cU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x3cU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x3cU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x3cU)))))));
        bufp->chgBit(oldp+1682,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1683,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1684,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1685,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x3dU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x3dU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x3dU))))));
        bufp->chgBit(oldp+1686,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x3dU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x3dU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x3dU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x3dU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x3dU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x3dU)))))));
        bufp->chgBit(oldp+1687,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1688,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1689,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1690,((1U & (((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x3eU)) 
                                        ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x3eU))) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x3eU))))));
        bufp->chgBit(oldp+1691,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x3eU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x3eU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x3eU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x3eU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x3eU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x3eU)))))));
        bufp->chgBit(oldp+1692,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1693,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1694,((1U & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1695,((IData)((((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                           ^ vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B) 
                                          ^ vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin) 
                                         >> 0x3fU))));
        bufp->chgBit(oldp+1696,((1U & ((((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x3fU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x3fU))) 
                                        | ((IData)(
                                                   (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x3fU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x3fU)))) 
                                       | ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x3fU)) 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x3fU)))))));
        bufp->chgBit(oldp+1697,((1U & ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A) 
                                       ^ (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B)))));
        bufp->chgBit(oldp+1698,((1U & ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A) 
                                       & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B)))));
        bufp->chgBit(oldp+1699,((1U & ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B) 
                                       & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin)))));
        bufp->chgBit(oldp+1700,((1U & ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A) 
                                       & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin)))));
        bufp->chgBit(oldp+1701,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 1U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1702,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 1U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1703,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 1U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1704,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 1U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1705,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0xaU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1706,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0xaU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1707,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0xaU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1708,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0xaU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1709,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0xbU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1710,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0xbU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1711,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0xbU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1712,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0xbU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1713,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0xcU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1714,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0xcU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1715,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0xcU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1716,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0xcU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1717,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0xdU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1718,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0xdU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1719,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0xdU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1720,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0xdU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1721,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0xeU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1722,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0xeU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1723,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0xeU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1724,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0xeU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1725,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0xfU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1726,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0xfU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1727,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0xfU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1728,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0xfU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1729,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x10U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1730,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x10U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1731,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x10U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1732,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x10U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1733,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x11U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1734,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x11U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1735,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x11U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1736,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x11U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1737,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x12U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1738,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x12U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1739,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x12U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1740,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x12U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1741,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x13U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1742,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x13U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1743,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x13U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1744,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x13U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1745,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 2U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1746,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 2U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1747,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 2U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1748,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 2U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1749,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x14U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1750,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x14U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1751,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x14U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1752,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x14U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1753,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x15U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1754,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x15U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1755,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x15U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1756,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x15U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1757,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x16U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1758,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x16U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1759,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x16U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1760,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x16U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1761,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x17U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1762,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x17U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1763,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x17U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1764,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x17U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1765,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x18U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1766,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x18U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1767,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x18U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1768,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x18U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1769,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x19U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1770,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x19U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1771,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x19U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1772,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x19U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1773,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x1aU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1774,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x1aU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1775,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x1aU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1776,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x1aU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1777,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x1bU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1778,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x1bU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1779,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x1bU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1780,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x1bU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1781,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x1cU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1782,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x1cU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1783,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x1cU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1784,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x1cU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1785,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x1dU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1786,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x1dU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1787,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x1dU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1788,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x1dU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1789,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 3U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1790,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 3U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1791,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 3U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1792,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 3U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1793,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x1eU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1794,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x1eU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1795,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x1eU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1796,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x1eU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1797,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x1fU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1798,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x1fU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1799,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x1fU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1800,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x1fU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1801,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x20U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1802,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x20U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1803,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x20U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1804,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x20U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1805,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x21U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1806,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x21U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1807,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x21U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1808,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x21U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1809,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x22U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1810,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x22U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1811,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x22U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1812,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x22U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1813,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x23U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1814,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x23U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1815,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x23U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1816,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x23U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1817,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x24U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1818,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x24U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1819,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x24U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1820,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x24U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1821,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x25U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1822,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x25U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1823,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x25U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1824,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x25U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1825,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x26U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+1826,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x26U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+1827,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x26U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+1828,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x26U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+1829,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x27U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+1830,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x27U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+1831,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x27U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+1832,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x27U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+1833,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 4U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1834,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 4U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1835,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 4U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1836,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 4U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1837,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x28U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+1838,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x28U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+1839,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x28U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+1840,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x28U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+1841,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x29U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+1842,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x29U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+1843,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x29U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+1844,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x29U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+1845,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x2aU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+1846,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x2aU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+1847,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x2aU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+1848,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x2aU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+1849,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x2bU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+1850,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x2bU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+1851,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x2bU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+1852,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x2bU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+1853,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x2cU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+1854,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x2cU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+1855,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x2cU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+1856,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x2cU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+1857,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x2dU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+1858,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x2dU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+1859,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x2dU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+1860,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x2dU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+1861,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x2eU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+1862,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x2eU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+1863,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x2eU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+1864,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x2eU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+1865,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x2fU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+1866,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x2fU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+1867,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x2fU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+1868,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x2fU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+1869,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x30U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+1870,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x30U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+1871,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x30U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+1872,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x30U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+1873,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x31U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+1874,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x31U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+1875,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x31U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+1876,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x31U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+1877,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 5U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1878,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 5U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1879,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 5U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1880,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 5U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1881,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x32U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+1882,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x32U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+1883,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x32U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+1884,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x32U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+1885,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x33U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+1886,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x33U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+1887,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x33U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+1888,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x33U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+1889,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x34U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+1890,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x34U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+1891,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x34U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+1892,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x34U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+1893,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x35U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+1894,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x35U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+1895,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x35U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+1896,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x35U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+1897,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x36U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+1898,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x36U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+1899,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x36U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+1900,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x36U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+1901,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x37U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+1902,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x37U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+1903,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x37U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+1904,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x37U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+1905,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x38U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+1906,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x38U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+1907,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x38U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+1908,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x38U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+1909,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x39U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+1910,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x39U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+1911,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x39U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+1912,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x39U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+1913,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x3aU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+1914,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x3aU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+1915,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x3aU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+1916,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x3aU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+1917,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x3bU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+1918,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x3bU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+1919,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 0x3bU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+1920,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x3bU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+1921,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 6U)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1922,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 6U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1923,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                >> 6U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1924,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 6U)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1925,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x3cU)) 
                                       ^ (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x3cU))))));
        bufp->chgBit(oldp+1926,((1U & ((IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                >> 0x3cU)) 
                                       & (IData)((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                  >> 0x3cU))))));
    }
}
