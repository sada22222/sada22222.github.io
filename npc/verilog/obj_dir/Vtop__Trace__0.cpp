// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->Core__DOT__IF_ID__DOT___T_3));
        bufp->chgIData(oldp+1,(((0xc00U == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                 ? (IData)(vlSelf->Core__DOT__csr__DOT__mcycle_data)
                                 : ((0xc02U == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                     ? (IData)(vlSelf->Core__DOT__csr__DOT__minstret_data)
                                     : ((0xc80U == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                         ? (IData)(
                                                   (vlSelf->Core__DOT__csr__DOT__mcycle_data 
                                                    >> 0x20U))
                                         : ((0xc82U 
                                             == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                             ? (IData)(
                                                       (vlSelf->Core__DOT__csr__DOT__minstret_data 
                                                        >> 0x20U))
                                             : ((0x100U 
                                                 == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                 ? vlSelf->Core__DOT__csr__DOT___T_74
                                                 : 
                                                ((0x104U 
                                                  == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                  ? vlSelf->Core__DOT__csr__DOT___T_82
                                                  : 
                                                 ((0x105U 
                                                   == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                   ? vlSelf->Core__DOT__csr__DOT___T_83
                                                   : 
                                                  ((0x106U 
                                                    == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                    ? 0U
                                                    : 
                                                   ((0x140U 
                                                     == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                     ? vlSelf->Core__DOT__csr__DOT__sscratch_data
                                                     : 
                                                    ((0x141U 
                                                      == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                      ? vlSelf->Core__DOT__csr__DOT__sepc_data
                                                      : 
                                                     ((0x142U 
                                                       == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                       ? vlSelf->Core__DOT__csr__DOT___T_84
                                                       : 
                                                      ((0x143U 
                                                        == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                        ? vlSelf->Core__DOT__csr__DOT__stval_data
                                                        : 
                                                       ((0x144U 
                                                         == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                         ? vlSelf->Core__DOT__csr__DOT___T_92
                                                         : 
                                                        ((0x180U 
                                                          == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                          ? vlSelf->Core__DOT__csr__DOT___T_94
                                                          : 
                                                         ((0xf11U 
                                                           == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                           ? 0U
                                                           : 
                                                          ((0xf12U 
                                                            == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                            ? 0U
                                                            : vlSelf->Core__DOT__csr__DOT___T_235))))))))))))))))),32);
        bufp->chgBit(oldp+2,(vlSelf->Core__DOT__csr__DOT__hasInt));
        bufp->chgIData(oldp+3,(((IData)(vlSelf->Core__DOT__csr__DOT___T_605)
                                 ? ((vlSelf->Core__DOT__csr__DOT__stvec_base 
                                     + (((IData)(vlSelf->Core__DOT__csr__DOT__stvec_mode) 
                                         & (IData)(vlSelf->Core__DOT__csr__DOT__hasInt))
                                         ? vlSelf->Core__DOT__csr__DOT__cause
                                         : 0U)) << 2U)
                                 : ((vlSelf->Core__DOT__csr__DOT__mtvec_base 
                                     + (((IData)(vlSelf->Core__DOT__csr__DOT__mtvec_mode) 
                                         & (IData)(vlSelf->Core__DOT__csr__DOT__hasInt))
                                         ? vlSelf->Core__DOT__csr__DOT__cause
                                         : 0U)) << 2U))),32);
        bufp->chgBit(oldp+4,(vlSelf->Core__DOT__csr__DOT__mip_ssip));
        bufp->chgBit(oldp+5,(vlSelf->Core__DOT__csr__DOT__mip_stip));
        bufp->chgBit(oldp+6,(vlSelf->Core__DOT__csr__DOT__mip_seip));
        bufp->chgIData(oldp+7,(vlSelf->Core__DOT__csr__DOT__csrData),32);
        bufp->chgIData(oldp+8,(vlSelf->Core__DOT__csr__DOT__writeData),32);
        bufp->chgIData(oldp+9,(vlSelf->Core__DOT__csr__DOT__flagIntS),32);
        bufp->chgIData(oldp+10,(vlSelf->Core__DOT__csr__DOT__flagIntM),32);
        bufp->chgBit(oldp+11,((((1U > (IData)(vlSelf->Core__DOT__csr__DOT__mode)) 
                                | ((1U == (IData)(vlSelf->Core__DOT__csr__DOT__mode)) 
                                   & (IData)(vlSelf->Core__DOT__csr__DOT__mstatus_sie))) 
                               & (0U != (vlSelf->Core__DOT__csr__DOT__flagIntS 
                                         & vlSelf->Core__DOT__csr__DOT__mideleg_data)))));
        bufp->chgBit(oldp+12,(vlSelf->Core__DOT__csr__DOT__hasIntM));
        bufp->chgBit(oldp+13,(vlSelf->Core__DOT__csr__DOT__handIntS));
        bufp->chgBit(oldp+14,(vlSelf->Core__DOT__csr__DOT__handExcS));
        bufp->chgIData(oldp+15,(vlSelf->Core__DOT__csr__DOT__intCauseS),31);
        bufp->chgIData(oldp+16,(((0x800U & vlSelf->Core__DOT__csr__DOT__flagIntM)
                                  ? 0xbU : ((8U & vlSelf->Core__DOT__csr__DOT__flagIntM)
                                             ? 3U : 
                                            ((0x80U 
                                              & vlSelf->Core__DOT__csr__DOT__flagIntM)
                                              ? 7U : vlSelf->Core__DOT__csr__DOT__intCauseS)))),31);
        bufp->chgIData(oldp+17,(((IData)(vlSelf->Core__DOT__csr__DOT__handIntS)
                                  ? vlSelf->Core__DOT__csr__DOT__intCauseS
                                  : ((0x800U & vlSelf->Core__DOT__csr__DOT__flagIntM)
                                      ? 0xbU : ((8U 
                                                 & vlSelf->Core__DOT__csr__DOT__flagIntM)
                                                 ? 3U
                                                 : 
                                                ((0x80U 
                                                  & vlSelf->Core__DOT__csr__DOT__flagIntM)
                                                  ? 7U
                                                  : vlSelf->Core__DOT__csr__DOT__intCauseS))))),31);
        bufp->chgIData(oldp+18,(vlSelf->Core__DOT__csr__DOT__cause),32);
        bufp->chgIData(oldp+19,(((vlSelf->Core__DOT__csr__DOT__stvec_base 
                                  + (((IData)(vlSelf->Core__DOT__csr__DOT__stvec_mode) 
                                      & (IData)(vlSelf->Core__DOT__csr__DOT__hasInt))
                                      ? vlSelf->Core__DOT__csr__DOT__cause
                                      : 0U)) << 2U)),32);
        bufp->chgIData(oldp+20,(((vlSelf->Core__DOT__csr__DOT__mtvec_base 
                                  + (((IData)(vlSelf->Core__DOT__csr__DOT__mtvec_mode) 
                                      & (IData)(vlSelf->Core__DOT__csr__DOT__hasInt))
                                      ? vlSelf->Core__DOT__csr__DOT__cause
                                      : 0U)) << 2U)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+21,((0U != (3U & vlSelf->Core__DOT__fetch__DOT__pc))));
        bufp->chgBit(oldp+22,(vlSelf->Core__DOT__IF_ID__DOT__ff_valid));
        bufp->chgIData(oldp+23,(vlSelf->Core__DOT__IF_ID__DOT__ff_inst),32);
        bufp->chgBit(oldp+24,(vlSelf->Core__DOT__IF_ID__DOT__ff_bpu_take));
        bufp->chgIData(oldp+25,(vlSelf->Core__DOT__IF_ID__DOT__ff_bpu_takepc),32);
        bufp->chgBit(oldp+26,(vlSelf->Core__DOT__IF_ID__DOT__ff_misaligned));
        bufp->chgBit(oldp+27,(vlSelf->Core__DOT__ID__DOT__regEn1));
        bufp->chgCData(oldp+28,(vlSelf->Core__DOT__ID__DOT__rs1),5);
        bufp->chgIData(oldp+29,(vlSelf->Core__DOT__ID_io_read1_data),32);
        bufp->chgBit(oldp+30,(vlSelf->Core__DOT__ID_io_read2_en));
        bufp->chgCData(oldp+31,(vlSelf->Core__DOT__ID__DOT__rs2),5);
        bufp->chgIData(oldp+32,(vlSelf->Core__DOT__ID_io_read2_data),32);
        bufp->chgIData(oldp+33,(vlSelf->Core__DOT__ID__DOT___T_841),32);
        bufp->chgCData(oldp+34,(vlSelf->Core__DOT__ID__DOT__csrActOp),3);
        bufp->chgBit(oldp+35,((((1U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                 ? (IData)(vlSelf->Core__DOT__csr__DOT__readable)
                                 : ((2U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                     ? (IData)(vlSelf->Core__DOT__csr__DOT__writable)
                                     : ((3U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                         ? (IData)(vlSelf->Core__DOT__csr__DOT___T_319)
                                         : ((4U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                             ? (IData)(vlSelf->Core__DOT__csr__DOT___T_319)
                                             : ((5U 
                                                 == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp)) 
                                                & (IData)(vlSelf->Core__DOT__csr__DOT___T_319)))))) 
                               & (((0U != (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                    ? ((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                                        ? (3U & (vlSelf->Core__DOT__ID__DOT___T_1 
                                                 >> 0x1cU))
                                        : 0U) : 0U) 
                                  <= (IData)(vlSelf->Core__DOT__csr__DOT__mode)))));
        bufp->chgBit(oldp+36,(vlSelf->Core__DOT__ID__DOT__branchmiss));
        bufp->chgIData(oldp+37,((IData)(((IData)(vlSelf->Core__DOT__ID__DOT__branchmiss)
                                          ? vlSelf->Core__DOT__ID__DOT__takepc
                                          : (QData)((IData)(
                                                            ((IData)(4U) 
                                                             + vlSelf->Core__DOT__IF_ID__DOT__ff_pc)))))),32);
        bufp->chgCData(oldp+38,(((0x33U == (0xfe00707fU 
                                            & vlSelf->Core__DOT__ID__DOT__inst))
                                  ? 0U : ((0x13U == 
                                           (0x707fU 
                                            & vlSelf->Core__DOT__ID__DOT__inst))
                                           ? 0U : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Core__DOT__ID__DOT__inst))
                                                    ? 1U
                                                    : 
                                                   ((0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->Core__DOT__ID__DOT__inst))
                                                     ? 3U
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->Core__DOT__ID__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x4033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Core__DOT__ID__DOT__inst))
                                                       ? 2U
                                                       : 
                                                      ((0x4013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__ID__DOT__inst))
                                                        ? 2U
                                                        : 
                                                       ((0x6033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Core__DOT__ID__DOT__inst))
                                                         ? 3U
                                                         : 
                                                        ((0x6013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__ID__DOT__inst))
                                                          ? 3U
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Core__DOT__ID__DOT__inst))
                                                           ? 4U
                                                           : 
                                                          ((0x7013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__ID__DOT__inst))
                                                            ? 4U
                                                            : 
                                                           ((0x2033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Core__DOT__ID__DOT__inst))
                                                             ? 5U
                                                             : 
                                                            ((0x2013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Core__DOT__ID__DOT__inst))
                                                              ? 5U
                                                              : (IData)(vlSelf->Core__DOT__ID__DOT___T_472))))))))))))))),4);
        bufp->chgIData(oldp+39,(((1U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc1))
                                  ? vlSelf->Core__DOT__ID_io_read1_data
                                  : ((2U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc1))
                                      ? vlSelf->Core__DOT__ID_io_read2_data
                                      : ((3U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc1))
                                          ? vlSelf->Core__DOT__ID__DOT___GEN_2
                                          : ((4U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc1))
                                              ? vlSelf->Core__DOT__ID__DOT____VdfgTmp_h7417a8e6__0
                                              : ((5U 
                                                  == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc1))
                                                  ? vlSelf->Core__DOT__ID__DOT___T_850
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc1))
                                                   ? (IData)(vlSelf->Core__DOT__ID__DOT__rs2)
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc1))
                                                    ? vlSelf->Core__DOT__IF_ID__DOT__ff_pc
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc1))
                                                     ? 4U
                                                     : 0U))))))))),32);
        bufp->chgIData(oldp+40,(((1U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc2))
                                  ? vlSelf->Core__DOT__ID_io_read1_data
                                  : ((2U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc2))
                                      ? vlSelf->Core__DOT__ID_io_read2_data
                                      : ((3U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc2))
                                          ? vlSelf->Core__DOT__ID__DOT___GEN_2
                                          : ((4U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc2))
                                              ? vlSelf->Core__DOT__ID__DOT____VdfgTmp_h7417a8e6__0
                                              : ((5U 
                                                  == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc2))
                                                  ? vlSelf->Core__DOT__ID__DOT___T_850
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc2))
                                                   ? (IData)(vlSelf->Core__DOT__ID__DOT__rs2)
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc2))
                                                    ? vlSelf->Core__DOT__IF_ID__DOT__ff_pc
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc2))
                                                     ? 4U
                                                     : 0U))))))))),32);
        bufp->chgCData(oldp+41,(((0x33U == (0xfe00707fU 
                                            & vlSelf->Core__DOT__ID__DOT__inst))
                                  ? 0U : ((0x13U == 
                                           (0x707fU 
                                            & vlSelf->Core__DOT__ID__DOT__inst))
                                           ? 0U : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Core__DOT__ID__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->Core__DOT__ID__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->Core__DOT__ID__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x4033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Core__DOT__ID__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x4013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__ID__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x6033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Core__DOT__ID__DOT__inst))
                                                         ? 0U
                                                         : 
                                                        ((0x6013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__ID__DOT__inst))
                                                          ? 0U
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Core__DOT__ID__DOT__inst))
                                                           ? 0U
                                                           : 
                                                          ((0x7013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__ID__DOT__inst))
                                                            ? 0U
                                                            : 
                                                           ((0x2033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Core__DOT__ID__DOT__inst))
                                                             ? 0U
                                                             : 
                                                            ((0x2013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Core__DOT__ID__DOT__inst))
                                                              ? 0U
                                                              : (IData)(vlSelf->Core__DOT__ID__DOT___T_588))))))))))))))),4);
        bufp->chgBit(oldp+42,(((0x33U == (0xfe00707fU 
                                          & vlSelf->Core__DOT__ID__DOT__inst)) 
                               | ((0x13U == (0x707fU 
                                             & vlSelf->Core__DOT__ID__DOT__inst)) 
                                  | ((0x40000033U == 
                                      (0xfe00707fU 
                                       & vlSelf->Core__DOT__ID__DOT__inst)) 
                                     | ((0x37U == (0x7fU 
                                                   & vlSelf->Core__DOT__ID__DOT__inst)) 
                                        | ((0x17U == 
                                            (0x7fU 
                                             & vlSelf->Core__DOT__ID__DOT__inst)) 
                                           | ((0x4033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->Core__DOT__ID__DOT__inst)) 
                                              | ((0x4013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                 | ((0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                    | ((0x6013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                       | ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                          | ((0x7013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                             | ((0x2033U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                | ((0x2013U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                   | ((0x3033U 
                                                                       == 
                                                                       (0xfe00707fU 
                                                                        & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                      | ((0x3013U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                         | ((0x1033U 
                                                                             == 
                                                                             (0xfe00707fU 
                                                                              & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                            | ((0x1013U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                               | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                                | (IData)(vlSelf->Core__DOT__ID__DOT___T_293)))))))))))))))))))));
        bufp->chgCData(oldp+43,(vlSelf->Core__DOT__ID__DOT__rd),5);
        bufp->chgSData(oldp+44,(vlSelf->Core__DOT__ID__DOT__immI),12);
        bufp->chgBit(oldp+45,((0U != (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))));
        bufp->chgIData(oldp+46,(((0U != (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                  ? ((IData)(vlSelf->Core__DOT__ID__DOT__regEn1)
                                      ? vlSelf->Core__DOT__ID_io_read1_data
                                      : (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                  : 0U)),32);
        bufp->chgCData(oldp+47,((((~ (((1U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                        ? (IData)(vlSelf->Core__DOT__csr__DOT__readable)
                                        : ((2U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                            ? (IData)(vlSelf->Core__DOT__csr__DOT__writable)
                                            : ((3U 
                                                == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                                ? (IData)(vlSelf->Core__DOT__csr__DOT___T_319)
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                                    ? (IData)(vlSelf->Core__DOT__csr__DOT___T_319)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp)) 
                                                    & (IData)(vlSelf->Core__DOT__csr__DOT___T_319)))))) 
                                      & (((0U != (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                           ? ((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                                               ? (3U 
                                                  & (vlSelf->Core__DOT__ID__DOT___T_1 
                                                     >> 0x1cU))
                                               : 0U)
                                           : 0U) <= (IData)(vlSelf->Core__DOT__csr__DOT__mode)))) 
                                  & (0U != (IData)(vlSelf->Core__DOT__ID__DOT__csrOp)))
                                  ? 5U : ((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_misaligned)
                                           ? 7U : ((IData)(vlSelf->Core__DOT__ID__DOT__addrFault)
                                                    ? 7U
                                                    : 
                                                   ((0x33U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Core__DOT__ID__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__ID__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x40000033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Core__DOT__ID__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->Core__DOT__ID__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->Core__DOT__ID__DOT__inst))
                                                         ? 0U
                                                         : 
                                                        ((0x4033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Core__DOT__ID__DOT__inst))
                                                          ? 0U
                                                          : 
                                                         ((0x4013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Core__DOT__ID__DOT__inst))
                                                           ? 0U
                                                           : 
                                                          ((0x6033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Core__DOT__ID__DOT__inst))
                                                            ? 0U
                                                            : 
                                                           ((0x6013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__ID__DOT__inst))
                                                             ? 0U
                                                             : 
                                                            ((0x7033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->Core__DOT__ID__DOT__inst))
                                                              ? 0U
                                                              : 
                                                             ((0x7013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->Core__DOT__ID__DOT__inst))
                                                               ? 0U
                                                               : 
                                                              ((0x2033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->Core__DOT__ID__DOT__inst))
                                                                ? 0U
                                                                : 
                                                               ((0x2013U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->Core__DOT__ID__DOT__inst))
                                                                 ? 0U
                                                                 : (IData)(vlSelf->Core__DOT__ID__DOT___T_762)))))))))))))))))),4);
        bufp->chgIData(oldp+48,(((IData)(vlSelf->Core__DOT__ID__DOT__addrFault)
                                  ? ((0U == (IData)(vlSelf->Core__DOT__ID__DOT__branchOp))
                                      ? 0U : (IData)(vlSelf->Core__DOT__ID__DOT___T_791))
                                  : 0U)),32);
        bufp->chgBit(oldp+49,(vlSelf->Core__DOT__ID_EX_io_stallNext));
        bufp->chgCData(oldp+50,(vlSelf->Core__DOT__ID_EX__DOT__ff_aluOp),4);
        bufp->chgIData(oldp+51,(vlSelf->Core__DOT__ID_EX__DOT__ff_opr1),32);
        bufp->chgIData(oldp+52,(vlSelf->Core__DOT__ID_EX__DOT__ff_opr2),32);
        bufp->chgCData(oldp+53,(vlSelf->Core__DOT__ID_EX__DOT__ff_lsuOp),4);
        bufp->chgIData(oldp+54,(vlSelf->Core__DOT__ID_EX__DOT__ff_lsuData),32);
        bufp->chgBit(oldp+55,(vlSelf->Core__DOT__ID_EX__DOT__ff_regWen));
        bufp->chgCData(oldp+56,(vlSelf->Core__DOT__ID_EX__DOT__ff_regWaddr),5);
        bufp->chgCData(oldp+57,(vlSelf->Core__DOT__ID_EX__DOT__ff_csrOp),3);
        bufp->chgSData(oldp+58,(vlSelf->Core__DOT__ID_EX__DOT__ff_csrAddr),12);
        bufp->chgBit(oldp+59,(vlSelf->Core__DOT__ID_EX__DOT__ff_csren));
        bufp->chgIData(oldp+60,(vlSelf->Core__DOT__ID_EX__DOT__ff_csrrData),32);
        bufp->chgIData(oldp+61,(vlSelf->Core__DOT__ID_EX__DOT__ff_csrwData),32);
        bufp->chgCData(oldp+62,(vlSelf->Core__DOT__ID_EX__DOT__ff_excType),4);
        bufp->chgIData(oldp+63,(vlSelf->Core__DOT__ID_EX__DOT__ff_excValue),32);
        bufp->chgIData(oldp+64,(vlSelf->Core__DOT__ID_EX__DOT__ff_inst),32);
        bufp->chgIData(oldp+65,((IData)(vlSelf->Core__DOT__EX__DOT__result)),32);
        bufp->chgBit(oldp+66,(vlSelf->Core__DOT__EX_io_ex_o_load));
        bufp->chgBit(oldp+67,((0x13U != vlSelf->Core__DOT__ID_EX__DOT__ff_inst)));
        bufp->chgBit(oldp+68,(vlSelf->Core__DOT__MEM_WB__DOT___T_2));
        bufp->chgCData(oldp+69,(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp),4);
        bufp->chgIData(oldp+70,(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuData),32);
        bufp->chgBit(oldp+71,(vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_en));
        bufp->chgCData(oldp+72,(vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_addr),5);
        bufp->chgIData(oldp+73,(vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data),32);
        bufp->chgCData(oldp+74,(vlSelf->Core__DOT__EX_MEM__DOT__ff_csr_op),3);
        bufp->chgSData(oldp+75,(vlSelf->Core__DOT__EX_MEM__DOT__ff_csr_addr),12);
        bufp->chgIData(oldp+76,(vlSelf->Core__DOT__EX_MEM__DOT__ff_csr_data),32);
        bufp->chgBit(oldp+77,(vlSelf->Core__DOT__EX_MEM__DOT__ff_csr_retired));
        bufp->chgCData(oldp+78,(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType),4);
        bufp->chgIData(oldp+79,(vlSelf->Core__DOT__EX_MEM__DOT__ff_excValue),32);
        bufp->chgIData(oldp+80,(vlSelf->Core__DOT__EX_MEM__DOT__ff_inst),32);
        bufp->chgIData(oldp+81,(((5U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                  ? 2U : ((7U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                           ? 0U : (
                                                   (1U 
                                                    == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                                    ? 0xbU
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                                     ? 3U
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                                      ? 
                                                     ((IData)(vlSelf->Core__DOT__MEM__DOT__memAddr)
                                                       ? 4U
                                                       : 0xdU)
                                                      : 0U)))))),31);
        bufp->chgIData(oldp+82,(vlSelf->Core__DOT__MEM_io_except_excValue),32);
        bufp->chgBit(oldp+83,(vlSelf->Core__DOT__resoler__DOT___T_35));
        bufp->chgIData(oldp+84,(vlSelf->Core__DOT__MEM_io_mem_o_reg_data),32);
        bufp->chgBit(oldp+85,(vlSelf->Core__DOT__MEM_WB__DOT__ff_reg_en));
        bufp->chgCData(oldp+86,(vlSelf->Core__DOT__MEM_WB__DOT__ff_reg_addr),5);
        bufp->chgCData(oldp+87,(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_op),3);
        bufp->chgSData(oldp+88,(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr),12);
        bufp->chgIData(oldp+89,(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_data),32);
        bufp->chgBit(oldp+90,(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_retired));
        bufp->chgIData(oldp+91,(vlSelf->Core__DOT__regfile__DOT__regfile_0),32);
        bufp->chgIData(oldp+92,(vlSelf->Core__DOT__regfile__DOT__regfile_1),32);
        bufp->chgIData(oldp+93,(vlSelf->Core__DOT__regfile__DOT__regfile_2),32);
        bufp->chgIData(oldp+94,(vlSelf->Core__DOT__regfile__DOT__regfile_3),32);
        bufp->chgIData(oldp+95,(vlSelf->Core__DOT__regfile__DOT__regfile_4),32);
        bufp->chgIData(oldp+96,(vlSelf->Core__DOT__regfile__DOT__regfile_5),32);
        bufp->chgIData(oldp+97,(vlSelf->Core__DOT__regfile__DOT__regfile_6),32);
        bufp->chgIData(oldp+98,(vlSelf->Core__DOT__regfile__DOT__regfile_7),32);
        bufp->chgIData(oldp+99,(vlSelf->Core__DOT__regfile__DOT__regfile_8),32);
        bufp->chgIData(oldp+100,(vlSelf->Core__DOT__regfile__DOT__regfile_9),32);
        bufp->chgIData(oldp+101,(vlSelf->Core__DOT__regfile__DOT__regfile_10),32);
        bufp->chgIData(oldp+102,(vlSelf->Core__DOT__regfile__DOT__regfile_11),32);
        bufp->chgIData(oldp+103,(vlSelf->Core__DOT__regfile__DOT__regfile_12),32);
        bufp->chgIData(oldp+104,(vlSelf->Core__DOT__regfile__DOT__regfile_13),32);
        bufp->chgIData(oldp+105,(vlSelf->Core__DOT__regfile__DOT__regfile_14),32);
        bufp->chgIData(oldp+106,(vlSelf->Core__DOT__regfile__DOT__regfile_15),32);
        bufp->chgIData(oldp+107,(vlSelf->Core__DOT__regfile__DOT__regfile_16),32);
        bufp->chgIData(oldp+108,(vlSelf->Core__DOT__regfile__DOT__regfile_17),32);
        bufp->chgIData(oldp+109,(vlSelf->Core__DOT__regfile__DOT__regfile_18),32);
        bufp->chgIData(oldp+110,(vlSelf->Core__DOT__regfile__DOT__regfile_19),32);
        bufp->chgIData(oldp+111,(vlSelf->Core__DOT__regfile__DOT__regfile_20),32);
        bufp->chgIData(oldp+112,(vlSelf->Core__DOT__regfile__DOT__regfile_21),32);
        bufp->chgIData(oldp+113,(vlSelf->Core__DOT__regfile__DOT__regfile_22),32);
        bufp->chgIData(oldp+114,(vlSelf->Core__DOT__regfile__DOT__regfile_23),32);
        bufp->chgIData(oldp+115,(vlSelf->Core__DOT__regfile__DOT__regfile_24),32);
        bufp->chgIData(oldp+116,(vlSelf->Core__DOT__regfile__DOT__regfile_25),32);
        bufp->chgIData(oldp+117,(vlSelf->Core__DOT__regfile__DOT__regfile_26),32);
        bufp->chgIData(oldp+118,(vlSelf->Core__DOT__regfile__DOT__regfile_27),32);
        bufp->chgIData(oldp+119,(vlSelf->Core__DOT__regfile__DOT__regfile_28),32);
        bufp->chgIData(oldp+120,(vlSelf->Core__DOT__regfile__DOT__regfile_29),32);
        bufp->chgIData(oldp+121,(vlSelf->Core__DOT__regfile__DOT__regfile_30),32);
        bufp->chgIData(oldp+122,(vlSelf->Core__DOT__regfile__DOT__regfile_31),32);
        bufp->chgIData(oldp+123,(((IData)(vlSelf->Core__DOT__ID__DOT__regEn1)
                                   ? ((0x1fU == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                       ? vlSelf->Core__DOT__regfile__DOT__regfile_31
                                       : ((0x1eU == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                           ? vlSelf->Core__DOT__regfile__DOT__regfile_30
                                           : ((0x1dU 
                                               == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                               ? vlSelf->Core__DOT__regfile__DOT__regfile_29
                                               : ((0x1cU 
                                                   == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                   ? vlSelf->Core__DOT__regfile__DOT__regfile_28
                                                   : 
                                                  ((0x1bU 
                                                    == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                    ? vlSelf->Core__DOT__regfile__DOT__regfile_27
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                     ? vlSelf->Core__DOT__regfile__DOT__regfile_26
                                                     : 
                                                    ((0x19U 
                                                      == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                      ? vlSelf->Core__DOT__regfile__DOT__regfile_25
                                                      : 
                                                     ((0x18U 
                                                       == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                       ? vlSelf->Core__DOT__regfile__DOT__regfile_24
                                                       : 
                                                      ((0x17U 
                                                        == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                        ? vlSelf->Core__DOT__regfile__DOT__regfile_23
                                                        : 
                                                       ((0x16U 
                                                         == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                         ? vlSelf->Core__DOT__regfile__DOT__regfile_22
                                                         : vlSelf->Core__DOT__regfile__DOT___GEN_21))))))))))
                                   : 0U)),32);
        bufp->chgIData(oldp+124,(((IData)(vlSelf->Core__DOT__ID_io_read2_en)
                                   ? ((0x1fU == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                       ? vlSelf->Core__DOT__regfile__DOT__regfile_31
                                       : ((0x1eU == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                           ? vlSelf->Core__DOT__regfile__DOT__regfile_30
                                           : ((0x1dU 
                                               == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                               ? vlSelf->Core__DOT__regfile__DOT__regfile_29
                                               : ((0x1cU 
                                                   == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                   ? vlSelf->Core__DOT__regfile__DOT__regfile_28
                                                   : 
                                                  ((0x1bU 
                                                    == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                    ? vlSelf->Core__DOT__regfile__DOT__regfile_27
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                     ? vlSelf->Core__DOT__regfile__DOT__regfile_26
                                                     : 
                                                    ((0x19U 
                                                      == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                      ? vlSelf->Core__DOT__regfile__DOT__regfile_25
                                                      : 
                                                     ((0x18U 
                                                       == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                       ? vlSelf->Core__DOT__regfile__DOT__regfile_24
                                                       : 
                                                      ((0x17U 
                                                        == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                        ? vlSelf->Core__DOT__regfile__DOT__regfile_23
                                                        : 
                                                       ((0x16U 
                                                         == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                         ? vlSelf->Core__DOT__regfile__DOT__regfile_22
                                                         : vlSelf->Core__DOT__regfile__DOT___GEN_53))))))))))
                                   : 0U)),32);
        bufp->chgBit(oldp+125,(vlSelf->Core__DOT__resoler_io_loadflag));
        bufp->chgBit(oldp+126,(vlSelf->Core__DOT__resoler_io_csrflag));
        bufp->chgQData(oldp+127,((0x7fffffffffffffffULL 
                                  & ((0U == (IData)(vlSelf->Core__DOT__ID_EX__DOT__ff_aluOp))
                                      ? (QData)((IData)(
                                                        (vlSelf->Core__DOT__ID_EX__DOT__ff_opr1 
                                                         + vlSelf->Core__DOT__ID_EX__DOT__ff_opr2)))
                                      : ((1U == (IData)(vlSelf->Core__DOT__ID_EX__DOT__ff_aluOp))
                                          ? (QData)((IData)(
                                                            (vlSelf->Core__DOT__ID_EX__DOT__ff_opr1 
                                                             - vlSelf->Core__DOT__ID_EX__DOT__ff_opr2)))
                                          : ((4U == (IData)(vlSelf->Core__DOT__ID_EX__DOT__ff_aluOp))
                                              ? (QData)((IData)(
                                                                (vlSelf->Core__DOT__ID_EX__DOT__ff_opr1 
                                                                 & vlSelf->Core__DOT__ID_EX__DOT__ff_opr2)))
                                              : ((3U 
                                                  == (IData)(vlSelf->Core__DOT__ID_EX__DOT__ff_aluOp))
                                                  ? (QData)((IData)(
                                                                    (vlSelf->Core__DOT__ID_EX__DOT__ff_opr1 
                                                                     | vlSelf->Core__DOT__ID_EX__DOT__ff_opr2)))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->Core__DOT__ID_EX__DOT__ff_aluOp))
                                                   ? (QData)((IData)(
                                                                     (vlSelf->Core__DOT__ID_EX__DOT__ff_opr1 
                                                                      ^ vlSelf->Core__DOT__ID_EX__DOT__ff_opr2)))
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->Core__DOT__ID_EX__DOT__ff_aluOp))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->Core__DOT__ID_EX__DOT__ff_opr1)) 
                                                    << 
                                                    (0x1fU 
                                                     & vlSelf->Core__DOT__ID_EX__DOT__ff_opr2))
                                                    : (QData)((IData)(
                                                                      ((9U 
                                                                        == (IData)(vlSelf->Core__DOT__ID_EX__DOT__ff_aluOp))
                                                                        ? 
                                                                       VL_SHIFTRS_III(32,32,5, vlSelf->Core__DOT__ID_EX__DOT__ff_opr1, 
                                                                                (0x1fU 
                                                                                & vlSelf->Core__DOT__ID_EX__DOT__ff_opr2))
                                                                        : 
                                                                       ((8U 
                                                                         == (IData)(vlSelf->Core__DOT__ID_EX__DOT__ff_aluOp))
                                                                         ? 
                                                                        (vlSelf->Core__DOT__ID_EX__DOT__ff_opr1 
                                                                         >> 
                                                                         (0x1fU 
                                                                          & vlSelf->Core__DOT__ID_EX__DOT__ff_opr2))
                                                                         : 
                                                                        ((5U 
                                                                          == (IData)(vlSelf->Core__DOT__ID_EX__DOT__ff_aluOp))
                                                                          ? 
                                                                         VL_LTS_III(32, vlSelf->Core__DOT__ID_EX__DOT__ff_opr1, vlSelf->Core__DOT__ID_EX__DOT__ff_opr2)
                                                                          : 
                                                                         ((6U 
                                                                           == (IData)(vlSelf->Core__DOT__ID_EX__DOT__ff_aluOp)) 
                                                                          & (vlSelf->Core__DOT__ID_EX__DOT__ff_opr1 
                                                                             > vlSelf->Core__DOT__ID_EX__DOT__ff_opr2))))))))))))))),63);
        bufp->chgQData(oldp+129,(vlSelf->Core__DOT__EX__DOT__result),63);
        bufp->chgIData(oldp+131,(vlSelf->Core__DOT__EX_MEM__DOT__ff_currentPc),32);
        bufp->chgBit(oldp+132,(vlSelf->Core__DOT__ID__DOT__stall));
        bufp->chgIData(oldp+133,(vlSelf->Core__DOT__ID__DOT__lastinst),32);
        bufp->chgIData(oldp+134,(vlSelf->Core__DOT__ID__DOT__inst),32);
        bufp->chgCData(oldp+135,(vlSelf->Core__DOT__ID__DOT__aluSrc1),4);
        bufp->chgCData(oldp+136,(vlSelf->Core__DOT__ID__DOT__aluSrc2),4);
        bufp->chgCData(oldp+137,(vlSelf->Core__DOT__ID__DOT__branchOp),3);
        bufp->chgCData(oldp+138,(vlSelf->Core__DOT__ID__DOT__csrOp),3);
        bufp->chgCData(oldp+139,(((0x33U == (0xfe00707fU 
                                             & vlSelf->Core__DOT__ID__DOT__inst))
                                   ? 0U : ((0x13U == 
                                            (0x707fU 
                                             & vlSelf->Core__DOT__ID__DOT__inst))
                                            ? 0U : 
                                           ((0x40000033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->Core__DOT__ID__DOT__inst))
                                             ? 0U : 
                                            ((0x37U 
                                              == (0x7fU 
                                                  & vlSelf->Core__DOT__ID__DOT__inst))
                                              ? 0U : 
                                             ((0x17U 
                                               == (0x7fU 
                                                   & vlSelf->Core__DOT__ID__DOT__inst))
                                               ? 0U
                                               : ((0x4033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->Core__DOT__ID__DOT__inst))
                                                   ? 0U
                                                   : 
                                                  ((0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Core__DOT__ID__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Core__DOT__ID__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__ID__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Core__DOT__ID__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x7013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__ID__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x2033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Core__DOT__ID__DOT__inst))
                                                         ? 0U
                                                         : 
                                                        ((0x2013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__ID__DOT__inst))
                                                          ? 0U
                                                          : (IData)(vlSelf->Core__DOT__ID__DOT___T_762))))))))))))))),4);
        bufp->chgBit(oldp+140,((1U == (IData)(vlSelf->Core__DOT__ID__DOT__branchOp))));
        bufp->chgIData(oldp+141,((vlSelf->Core__DOT__IF_ID__DOT__ff_pc 
                                  + (((- (IData)((IData)(vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0))) 
                                      << 0x15U) | (
                                                   ((IData)(vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0) 
                                                    << 0x14U) 
                                                   | ((((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                                                         ? 
                                                        (0xffU 
                                                         & (vlSelf->Core__DOT__ID__DOT___T_1 
                                                            >> 0xcU))
                                                         : 0U) 
                                                       << 0xcU) 
                                                      | ((0x7ff800U 
                                                          & (((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid) 
                                                              << 0xbU) 
                                                             & (vlSelf->Core__DOT__ID__DOT___T_1 
                                                                >> 9U))) 
                                                         | (((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                                                              ? 
                                                             (0x3ffU 
                                                              & (vlSelf->Core__DOT__ID__DOT___T_1 
                                                                 >> 0x15U))
                                                              : 0U) 
                                                            << 1U))))))),32);
        bufp->chgIData(oldp+142,((vlSelf->Core__DOT__ID_io_read1_data 
                                  + vlSelf->Core__DOT__ID__DOT___GEN_2)),32);
        bufp->chgQData(oldp+143,(((QData)((IData)((vlSelf->Core__DOT__ID_io_read1_data 
                                                   + vlSelf->Core__DOT__ID__DOT___GEN_2))) 
                                  << 1U)),33);
        bufp->chgQData(oldp+145,(((IData)(vlSelf->Core__DOT__ID__DOT__regEn1)
                                   ? ((QData)((IData)(
                                                      (vlSelf->Core__DOT__ID_io_read1_data 
                                                       + vlSelf->Core__DOT__ID__DOT___GEN_2))) 
                                      << 1U) : (QData)((IData)(
                                                               (vlSelf->Core__DOT__IF_ID__DOT__ff_pc 
                                                                + 
                                                                (((- (IData)((IData)(vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0))) 
                                                                  << 0x15U) 
                                                                 | (((IData)(vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0) 
                                                                     << 0x14U) 
                                                                    | ((((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                                                                          ? 
                                                                         (0xffU 
                                                                          & (vlSelf->Core__DOT__ID__DOT___T_1 
                                                                             >> 0xcU))
                                                                          : 0U) 
                                                                        << 0xcU) 
                                                                       | ((0x7ff800U 
                                                                           & (((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid) 
                                                                               << 0xbU) 
                                                                              & (vlSelf->Core__DOT__ID__DOT___T_1 
                                                                                >> 9U))) 
                                                                          | (((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                                                                               ? 
                                                                              (0x3ffU 
                                                                               & (vlSelf->Core__DOT__ID__DOT___T_1 
                                                                                >> 0x15U))
                                                                               : 0U) 
                                                                             << 1U)))))))))),33);
        bufp->chgIData(oldp+147,((vlSelf->Core__DOT__IF_ID__DOT__ff_pc 
                                  + (((- (IData)((IData)(vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0))) 
                                      << 0xdU) | (((IData)(vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0) 
                                                   << 0xcU) 
                                                  | ((0xfffff800U 
                                                      & (((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid) 
                                                          << 0xbU) 
                                                         & (vlSelf->Core__DOT__ID__DOT___T_1 
                                                            << 4U))) 
                                                     | ((((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                                                           ? 
                                                          (0x3fU 
                                                           & (vlSelf->Core__DOT__ID__DOT___T_1 
                                                              >> 0x19U))
                                                           : 0U) 
                                                         << 5U) 
                                                        | (((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                                                             ? 
                                                            (0xfU 
                                                             & (vlSelf->Core__DOT__ID__DOT___T_1 
                                                                >> 8U))
                                                             : 0U) 
                                                           << 1U))))))),32);
        bufp->chgQData(oldp+148,(vlSelf->Core__DOT__ID__DOT__takepc),33);
        bufp->chgBit(oldp+150,(vlSelf->Core__DOT__ID__DOT__branchteke));
        bufp->chgQData(oldp+151,(((IData)(vlSelf->Core__DOT__ID__DOT__branchmiss)
                                   ? vlSelf->Core__DOT__ID__DOT__takepc
                                   : (QData)((IData)(
                                                     ((IData)(4U) 
                                                      + vlSelf->Core__DOT__IF_ID__DOT__ff_pc))))),33);
        bufp->chgBit(oldp+153,(vlSelf->Core__DOT__ID__DOT__addrFault));
        bufp->chgQData(oldp+154,(((IData)(vlSelf->Core__DOT__ID__DOT__addrFault)
                                   ? vlSelf->Core__DOT__ID__DOT__takepc
                                   : 0ULL)),33);
        bufp->chgIData(oldp+156,(vlSelf->Core__DOT__ID_EX__DOT__ff_currentPc),32);
        bufp->chgIData(oldp+157,(vlSelf->Core__DOT__IF_ID__DOT__ff_pc),32);
        bufp->chgBit(oldp+158,(vlSelf->Core__DOT__MEM__DOT__mem_wen));
        bufp->chgBit(oldp+159,(vlSelf->Core__DOT__MEM__DOT__mem_ren));
        bufp->chgIData(oldp+160,((0xfffffffcU & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data)),32);
        bufp->chgCData(oldp+161,(((IData)(vlSelf->Core__DOT__MEM__DOT__mem_wen)
                                   ? (0xfU & (IData)(vlSelf->Core__DOT__MEM__DOT__writeEn))
                                   : 0xfU)),4);
        bufp->chgBit(oldp+162,(((1U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                | (2U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)))));
        bufp->chgIData(oldp+163,((IData)(((0U == (IData)(vlSelf->Core__DOT__MEM__DOT__width))
                                           ? ((0U == 
                                               (3U 
                                                & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data))
                                               ? (QData)((IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuData))
                                               : ((1U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuData)) 
                                                   << 8U)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuData)) 
                                                    << 0x10U)
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data))
                                                     ? 
                                                    ((QData)((IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuData)) 
                                                     << 0x18U)
                                                     : 0ULL))))
                                           : ((1U == (IData)(vlSelf->Core__DOT__MEM__DOT__width))
                                               ? ((0U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data))
                                                   ? (QData)((IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuData))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuData)) 
                                                    << 0x10U)
                                                    : 0ULL))
                                               : (QData)((IData)(
                                                                 ((2U 
                                                                   == (IData)(vlSelf->Core__DOT__MEM__DOT__width))
                                                                   ? 
                                                                  ((0U 
                                                                    == 
                                                                    (3U 
                                                                     & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data))
                                                                    ? vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuData
                                                                    : 0U)
                                                                   : 0U))))))),32);
        bufp->chgIData(oldp+164,(vlSelf->Core__DOT__MEM__DOT__mem_rdata),32);
        bufp->chgBit(oldp+165,(vlSelf->Core__DOT__MEM__DOT__ren));
        bufp->chgCData(oldp+166,(vlSelf->Core__DOT__MEM__DOT__width),2);
        bufp->chgCData(oldp+167,((3U & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data)),2);
        bufp->chgCData(oldp+168,(vlSelf->Core__DOT__MEM__DOT__writeEn),7);
        bufp->chgCData(oldp+169,(((IData)(vlSelf->Core__DOT__MEM__DOT__mem_wen)
                                   ? (IData)(vlSelf->Core__DOT__MEM__DOT__writeEn)
                                   : 0xfU)),7);
        bufp->chgQData(oldp+170,(((0U == (IData)(vlSelf->Core__DOT__MEM__DOT__width))
                                   ? ((0U == (3U & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data))
                                       ? (QData)((IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuData))
                                       : ((1U == (3U 
                                                  & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data))
                                           ? ((QData)((IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuData)) 
                                              << 8U)
                                           : ((2U == 
                                               (3U 
                                                & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data))
                                               ? ((QData)((IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuData)) 
                                                  << 0x10U)
                                               : ((3U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuData)) 
                                                   << 0x18U)
                                                   : 0ULL))))
                                   : ((1U == (IData)(vlSelf->Core__DOT__MEM__DOT__width))
                                       ? ((0U == (3U 
                                                  & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data))
                                           ? (QData)((IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuData))
                                           : ((2U == 
                                               (3U 
                                                & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data))
                                               ? ((QData)((IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuData)) 
                                                  << 0x10U)
                                               : 0ULL))
                                       : (QData)((IData)(
                                                         ((2U 
                                                           == (IData)(vlSelf->Core__DOT__MEM__DOT__width))
                                                           ? 
                                                          ((0U 
                                                            == 
                                                            (3U 
                                                             & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data))
                                                            ? vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuData
                                                            : 0U)
                                                           : 0U)))))),56);
        bufp->chgBit(oldp+172,(vlSelf->Core__DOT__MEM__DOT__memAddr));
        bufp->chgBit(oldp+173,((7U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))));
        bufp->chgBit(oldp+174,((5U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))));
        bufp->chgBit(oldp+175,(((8U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType)) 
                                & (IData)(vlSelf->Core__DOT__MEM__DOT__memAddr))));
        bufp->chgBit(oldp+176,(((1U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType)) 
                                | (2U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType)))));
        bufp->chgIData(oldp+177,(((1U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                   ? 0xbU : ((2U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                              ? 3U : 
                                             ((8U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                               ? ((IData)(vlSelf->Core__DOT__MEM__DOT__memAddr)
                                                   ? 4U
                                                   : 0xdU)
                                               : 0U)))),31);
        bufp->chgIData(oldp+178,(vlSelf->Core__DOT__MEM_WB__DOT__ff_reg_data),32);
        bufp->chgIData(oldp+179,(vlSelf->Core__DOT__MEM_WB__DOT__ff_currentPc),32);
        bufp->chgCData(oldp+180,(vlSelf->Core__DOT__csr__DOT__mode),2);
        bufp->chgBit(oldp+181,(vlSelf->Core__DOT__csr__DOT__mstatus_sum));
        bufp->chgCData(oldp+182,(vlSelf->Core__DOT__csr__DOT__mstatus_mpp),2);
        bufp->chgBit(oldp+183,(vlSelf->Core__DOT__csr__DOT__mstatus_spp));
        bufp->chgBit(oldp+184,(vlSelf->Core__DOT__csr__DOT__mstatus_mpie));
        bufp->chgBit(oldp+185,(vlSelf->Core__DOT__csr__DOT__mstatus_spie));
        bufp->chgBit(oldp+186,(vlSelf->Core__DOT__csr__DOT__mstatus_mie));
        bufp->chgBit(oldp+187,(vlSelf->Core__DOT__csr__DOT__mstatus_sie));
        bufp->chgIData(oldp+188,(vlSelf->Core__DOT__csr__DOT__medeleg_data),32);
        bufp->chgIData(oldp+189,(vlSelf->Core__DOT__csr__DOT__mideleg_data),32);
        bufp->chgBit(oldp+190,(vlSelf->Core__DOT__csr__DOT__mie_meie));
        bufp->chgBit(oldp+191,(vlSelf->Core__DOT__csr__DOT__mie_seie));
        bufp->chgBit(oldp+192,(vlSelf->Core__DOT__csr__DOT__mie_mtie));
        bufp->chgBit(oldp+193,(vlSelf->Core__DOT__csr__DOT__mie_stie));
        bufp->chgBit(oldp+194,(vlSelf->Core__DOT__csr__DOT__mie_msie));
        bufp->chgBit(oldp+195,(vlSelf->Core__DOT__csr__DOT__mie_ssie));
        bufp->chgIData(oldp+196,(vlSelf->Core__DOT__csr__DOT__mtvec_base),30);
        bufp->chgCData(oldp+197,(vlSelf->Core__DOT__csr__DOT__mtvec_mode),2);
        bufp->chgIData(oldp+198,(vlSelf->Core__DOT__csr__DOT__mscratch_data),32);
        bufp->chgIData(oldp+199,(vlSelf->Core__DOT__csr__DOT__mepc_data),32);
        bufp->chgBit(oldp+200,(vlSelf->Core__DOT__csr__DOT__mcause_int));
        bufp->chgIData(oldp+201,(vlSelf->Core__DOT__csr__DOT__mcause_code),31);
        bufp->chgIData(oldp+202,(vlSelf->Core__DOT__csr__DOT__mtval_data),32);
        bufp->chgBit(oldp+203,(vlSelf->Core__DOT__csr__DOT__mipReal_seip));
        bufp->chgBit(oldp+204,(vlSelf->Core__DOT__csr__DOT__mipReal_stip));
        bufp->chgBit(oldp+205,(vlSelf->Core__DOT__csr__DOT__mipReal_ssip));
        bufp->chgQData(oldp+206,(vlSelf->Core__DOT__csr__DOT__mcycle_data),64);
        bufp->chgQData(oldp+208,(vlSelf->Core__DOT__csr__DOT__minstret_data),64);
        bufp->chgIData(oldp+210,(vlSelf->Core__DOT__csr__DOT__stvec_base),30);
        bufp->chgCData(oldp+211,(vlSelf->Core__DOT__csr__DOT__stvec_mode),2);
        bufp->chgIData(oldp+212,(vlSelf->Core__DOT__csr__DOT__sscratch_data),32);
        bufp->chgIData(oldp+213,(vlSelf->Core__DOT__csr__DOT__sepc_data),32);
        bufp->chgBit(oldp+214,(vlSelf->Core__DOT__csr__DOT__scause_int));
        bufp->chgIData(oldp+215,(vlSelf->Core__DOT__csr__DOT__scause_code),31);
        bufp->chgIData(oldp+216,(vlSelf->Core__DOT__csr__DOT__stval_data),32);
        bufp->chgBit(oldp+217,(vlSelf->Core__DOT__csr__DOT__satp_mode));
        bufp->chgIData(oldp+218,(vlSelf->Core__DOT__csr__DOT__satp_ppn),22);
        bufp->chgBit(oldp+219,(vlSelf->Core__DOT__csr__DOT__readable));
        bufp->chgBit(oldp+220,(vlSelf->Core__DOT__csr__DOT__writable));
        bufp->chgBit(oldp+221,(((1U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                 ? (IData)(vlSelf->Core__DOT__csr__DOT__readable)
                                 : ((2U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                     ? (IData)(vlSelf->Core__DOT__csr__DOT__writable)
                                     : ((3U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                         ? (IData)(vlSelf->Core__DOT__csr__DOT___T_319)
                                         : ((4U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                             ? (IData)(vlSelf->Core__DOT__csr__DOT___T_319)
                                             : ((5U 
                                                 == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp)) 
                                                & (IData)(vlSelf->Core__DOT__csr__DOT___T_319))))))));
        bufp->chgBit(oldp+222,((((0U != (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                  ? ((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                                      ? (3U & (vlSelf->Core__DOT__ID__DOT___T_1 
                                               >> 0x1cU))
                                      : 0U) : 0U) <= (IData)(vlSelf->Core__DOT__csr__DOT__mode))));
        bufp->chgCData(oldp+223,(((IData)(vlSelf->Core__DOT__MEM_WB__DOT___T_2)
                                   ? 0x1eU : ((IData)(vlSelf->Core__DOT__resoler_io_csrflag)
                                               ? 0x1cU
                                               : ((IData)(vlSelf->Core__DOT__resoler_io_loadflag)
                                                   ? 0x18U
                                                   : 0U)))),5);
        bufp->chgIData(oldp+224,(vlSelf->Core__DOT__fetch__DOT__pc),32);
        bufp->chgCData(oldp+225,((0x7fU & vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data)),7);
        bufp->chgBit(oldp+226,((0x63U == (0x7fU & vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data))));
        bufp->chgBit(oldp+227,((0x6fU == (0x7fU & vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data))));
        bufp->chgIData(oldp+228,(vlSelf->Core__DOT__fetch__DOT__bpu__DOT__inst_b_type_imm),32);
        bufp->chgIData(oldp+229,(((0x63U == (0x7fU 
                                             & vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data))
                                   ? vlSelf->Core__DOT__fetch__DOT__bpu__DOT__inst_b_type_imm
                                   : ((0x6fU == (0x7fU 
                                                 & vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data))
                                       ? ((((vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data 
                                             >> 0x1fU)
                                             ? 0xfffU
                                             : 0U) 
                                           << 0x14U) 
                                          | ((0xff000U 
                                              & vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data) 
                                             | ((0x800U 
                                                 & (vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data 
                                                      >> 0x14U)))))
                                       : 0U))),32);
        bufp->chgIData(oldp+230,(vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data),32);
        bufp->chgBit(oldp+231,(((IData)(vlSelf->Core__DOT__ID__DOT__regEn1) 
                                & ((IData)(vlSelf->Core__DOT__EX_io_ex_o_load) 
                                   & (IData)(vlSelf->Core__DOT__resoler__DOT___T_2)))));
        bufp->chgBit(oldp+232,(((IData)(vlSelf->Core__DOT__ID_io_read2_en) 
                                & ((IData)(vlSelf->Core__DOT__EX_io_ex_o_load) 
                                   & (IData)(vlSelf->Core__DOT__resoler__DOT___T_10)))));
    }
    bufp->chgBit(oldp+233,(vlSelf->clock));
    bufp->chgBit(oldp+234,(vlSelf->reset));
    bufp->chgBit(oldp+235,(vlSelf->io_timer));
    bufp->chgBit(oldp+236,(vlSelf->io_soft));
    bufp->chgBit(oldp+237,(vlSelf->io_extern));
    bufp->chgIData(oldp+238,(vlSelf->io_inst),32);
    bufp->chgIData(oldp+239,(vlSelf->io_pc),32);
    bufp->chgIData(oldp+240,(vlSelf->io_npc),32);
    bufp->chgIData(oldp+241,(vlSelf->io_next),32);
    bufp->chgIData(oldp+242,(vlSelf->io_flushpc),32);
    bufp->chgBit(oldp+243,(vlSelf->io_flush));
    bufp->chgBit(oldp+244,(vlSelf->io_stall));
    bufp->chgIData(oldp+245,(vlSelf->io_id_inst),32);
    bufp->chgBit(oldp+246,(vlSelf->io_bputake));
    bufp->chgIData(oldp+247,(vlSelf->io_bpuaddr),32);
    bufp->chgIData(oldp+248,(vlSelf->io_idpc),32);
    bufp->chgIData(oldp+249,(vlSelf->io_expc),32);
    bufp->chgIData(oldp+250,(vlSelf->io_mempc),32);
    bufp->chgIData(oldp+251,(vlSelf->io_result),32);
    bufp->chgBit(oldp+252,(((~ (IData)(vlSelf->Core__DOT__csr__DOT__hasInt)) 
                            & (IData)(vlSelf->io_flush))));
    bufp->chgBit(oldp+253,((((~ (IData)(vlSelf->Core__DOT__csr__DOT__hasInt)) 
                             & (IData)(vlSelf->io_flush)) 
                            & (vlSelf->Core__DOT__csr__DOT__medeleg_data 
                               >> ((5U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                    ? 2U : ((7U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                             ? 0U : 
                                            ((1U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                              ? 0xbU
                                              : ((2U 
                                                  == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                                  ? 3U
                                                  : 
                                                 ((8U 
                                                   == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                                   ? 
                                                  ((IData)(vlSelf->Core__DOT__MEM__DOT__memAddr)
                                                    ? 4U
                                                    : 0xdU)
                                                   : 0U)))))))));
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
