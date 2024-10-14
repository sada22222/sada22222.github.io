// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(((IData)(vlSelf->top__DOT__MEM__DOT__hasTrap) 
                              | (IData)(vlSelf->top__DOT__ID__DOT__branchmiss))));
        bufp->chgIData(oldp+1,(((IData)(vlSelf->top__DOT__MEM__DOT__hasTrap)
                                 ? ((IData)(vlSelf->top__DOT__csr__DOT___T_605)
                                     ? ((vlSelf->top__DOT__csr__DOT__stvec_base 
                                         + (((IData)(vlSelf->top__DOT__csr__DOT__stvec_mode) 
                                             & (IData)(vlSelf->top__DOT__csr__DOT__hasInt))
                                             ? vlSelf->top__DOT__csr__DOT__cause
                                             : 0U)) 
                                        << 2U) : ((vlSelf->top__DOT__csr__DOT__mtvec_base 
                                                   + 
                                                   (((IData)(vlSelf->top__DOT__csr__DOT__mtvec_mode) 
                                                     & (IData)(vlSelf->top__DOT__csr__DOT__hasInt))
                                                     ? vlSelf->top__DOT__csr__DOT__cause
                                                     : 0U)) 
                                                  << 2U))
                                 : (IData)(((IData)(vlSelf->top__DOT__ID__DOT__branchmiss)
                                             ? vlSelf->top__DOT__ID__DOT__takepc
                                             : (QData)((IData)(
                                                               ((IData)(4U) 
                                                                + vlSelf->top__DOT__IF_ID__DOT__ff_pc))))))),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__fetch__DOT__bpu_io_prdt_addr_o),32);
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__MEM__DOT__hasTrap));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__IF_ID_io_stallPrev));
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__ID_io_read1_data),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__ID_io_read2_data),32);
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__ID_io_stallid));
        bufp->chgIData(oldp+8,(((0xc00U == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                 ? (IData)(vlSelf->top__DOT__csr__DOT__mcycle_data)
                                 : ((0xc02U == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                     ? (IData)(vlSelf->top__DOT__csr__DOT__minstret_data)
                                     : ((0xc80U == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                         ? (IData)(
                                                   (vlSelf->top__DOT__csr__DOT__mcycle_data 
                                                    >> 0x20U))
                                         : ((0xc82U 
                                             == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                             ? (IData)(
                                                       (vlSelf->top__DOT__csr__DOT__minstret_data 
                                                        >> 0x20U))
                                             : ((0x100U 
                                                 == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                 ? vlSelf->top__DOT__csr__DOT___T_74
                                                 : 
                                                ((0x104U 
                                                  == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                  ? vlSelf->top__DOT__csr__DOT___T_82
                                                  : 
                                                 ((0x105U 
                                                   == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                   ? vlSelf->top__DOT__csr__DOT___T_83
                                                   : 
                                                  ((0x106U 
                                                    == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                    ? 0U
                                                    : 
                                                   ((0x140U 
                                                     == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                     ? vlSelf->top__DOT__csr__DOT__sscratch_data
                                                     : 
                                                    ((0x141U 
                                                      == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                      ? vlSelf->top__DOT__csr__DOT__sepc_data
                                                      : 
                                                     ((0x142U 
                                                       == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                       ? vlSelf->top__DOT__csr__DOT___T_84
                                                       : 
                                                      ((0x143U 
                                                        == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                        ? vlSelf->top__DOT__csr__DOT__stval_data
                                                        : 
                                                       ((0x144U 
                                                         == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                         ? vlSelf->top__DOT__csr__DOT___T_92
                                                         : 
                                                        ((0x180U 
                                                          == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                          ? vlSelf->top__DOT__csr__DOT___T_94
                                                          : 
                                                         ((0xf11U 
                                                           == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                           ? 0U
                                                           : 
                                                          ((0xf12U 
                                                            == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                            ? 0U
                                                            : vlSelf->top__DOT__csr__DOT___T_235))))))))))))))))),32);
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__ID__DOT__branchmiss));
        bufp->chgIData(oldp+10,((IData)(((IData)(vlSelf->top__DOT__ID__DOT__branchmiss)
                                          ? vlSelf->top__DOT__ID__DOT__takepc
                                          : (QData)((IData)(
                                                            ((IData)(4U) 
                                                             + vlSelf->top__DOT__IF_ID__DOT__ff_pc)))))),32);
        bufp->chgIData(oldp+11,(((1U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc1))
                                  ? vlSelf->top__DOT__ID_io_read1_data
                                  : ((2U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc1))
                                      ? vlSelf->top__DOT__ID_io_read2_data
                                      : ((3U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc1))
                                          ? vlSelf->top__DOT__ID__DOT___GEN_2
                                          : ((4U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc1))
                                              ? vlSelf->top__DOT__ID__DOT____VdfgTmp_h7417a8e6__0
                                              : ((5U 
                                                  == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc1))
                                                  ? vlSelf->top__DOT__ID__DOT___T_848
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc1))
                                                   ? (IData)(vlSelf->top__DOT__ID__DOT__rs2)
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc1))
                                                    ? vlSelf->top__DOT__IF_ID__DOT__ff_pc
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc1))
                                                     ? 4U
                                                     : 0U))))))))),32);
        bufp->chgIData(oldp+12,(((1U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc2))
                                  ? vlSelf->top__DOT__ID_io_read1_data
                                  : ((2U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc2))
                                      ? vlSelf->top__DOT__ID_io_read2_data
                                      : ((3U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc2))
                                          ? vlSelf->top__DOT__ID__DOT___GEN_2
                                          : ((4U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc2))
                                              ? vlSelf->top__DOT__ID__DOT____VdfgTmp_h7417a8e6__0
                                              : ((5U 
                                                  == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc2))
                                                  ? vlSelf->top__DOT__ID__DOT___T_848
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc2))
                                                   ? (IData)(vlSelf->top__DOT__ID__DOT__rs2)
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc2))
                                                    ? vlSelf->top__DOT__IF_ID__DOT__ff_pc
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc2))
                                                     ? 4U
                                                     : 0U))))))))),32);
        bufp->chgIData(oldp+13,(((0U != (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                  ? ((IData)(vlSelf->top__DOT__ID__DOT__regEn1)
                                      ? vlSelf->top__DOT__ID_io_read1_data
                                      : (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                  : 0U)),32);
        bufp->chgCData(oldp+14,((((~ (((1U == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                        ? (IData)(vlSelf->top__DOT__csr__DOT__readable)
                                        : ((2U == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                            ? (IData)(vlSelf->top__DOT__csr__DOT__writable)
                                            : ((3U 
                                                == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                                ? (IData)(vlSelf->top__DOT__csr__DOT___T_319)
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                                    ? (IData)(vlSelf->top__DOT__csr__DOT___T_319)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp)) 
                                                    & (IData)(vlSelf->top__DOT__csr__DOT___T_319)))))) 
                                      & (((0U != (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                           ? ((IData)(vlSelf->top__DOT__IF_ID__DOT__ff_valid)
                                               ? (3U 
                                                  & (vlSelf->top__DOT__ID__DOT___T_1 
                                                     >> 0x1cU))
                                               : 0U)
                                           : 0U) <= (IData)(vlSelf->top__DOT__csr__DOT__mode)))) 
                                  & (0U != (IData)(vlSelf->top__DOT__ID__DOT__csrOp)))
                                  ? 5U : ((IData)(vlSelf->top__DOT__IF_ID__DOT__ff_misaligned)
                                           ? 7U : ((IData)(vlSelf->top__DOT__ID__DOT__addrFault)
                                                    ? 7U
                                                    : 
                                                   ((0x33U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__ID__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__ID__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x40000033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__ID__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__ID__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__ID__DOT__inst))
                                                         ? 0U
                                                         : 
                                                        ((0x4033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__ID__DOT__inst))
                                                          ? 0U
                                                          : 
                                                         ((0x4013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__ID__DOT__inst))
                                                           ? 0U
                                                           : 
                                                          ((0x6033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->top__DOT__ID__DOT__inst))
                                                            ? 0U
                                                            : 
                                                           ((0x6013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__ID__DOT__inst))
                                                             ? 0U
                                                             : 
                                                            ((0x7033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->top__DOT__ID__DOT__inst))
                                                              ? 0U
                                                              : 
                                                             ((0x7013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__ID__DOT__inst))
                                                               ? 0U
                                                               : 
                                                              ((0x2033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->top__DOT__ID__DOT__inst))
                                                                ? 0U
                                                                : 
                                                               ((0x2013U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__ID__DOT__inst))
                                                                 ? 0U
                                                                 : (IData)(vlSelf->top__DOT__ID__DOT___T_762)))))))))))))))))),4);
        bufp->chgIData(oldp+15,(((IData)(vlSelf->top__DOT__ID__DOT__addrFault)
                                  ? ((0U == (IData)(vlSelf->top__DOT__ID__DOT__branchOp))
                                      ? 0U : (IData)(vlSelf->top__DOT__ID__DOT___T_791))
                                  : 0U)),32);
        bufp->chgBit(oldp+16,(vlSelf->top__DOT__EX_MEM_io_stallPrev));
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__MEM_io_stallReq));
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__MEM_io_except_excValue),32);
        bufp->chgBit(oldp+19,(vlSelf->top__DOT__csr__DOT__hasInt));
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__MEM_io_mem_o_reg_data),32);
        bufp->chgIData(oldp+21,(((IData)(vlSelf->top__DOT__csr__DOT___T_605)
                                  ? ((vlSelf->top__DOT__csr__DOT__stvec_base 
                                      + (((IData)(vlSelf->top__DOT__csr__DOT__stvec_mode) 
                                          & (IData)(vlSelf->top__DOT__csr__DOT__hasInt))
                                          ? vlSelf->top__DOT__csr__DOT__cause
                                          : 0U)) << 2U)
                                  : ((vlSelf->top__DOT__csr__DOT__mtvec_base 
                                      + (((IData)(vlSelf->top__DOT__csr__DOT__mtvec_mode) 
                                          & (IData)(vlSelf->top__DOT__csr__DOT__hasInt))
                                          ? vlSelf->top__DOT__csr__DOT__cause
                                          : 0U)) << 2U))),32);
        bufp->chgIData(oldp+22,((vlSelf->top__DOT__ID_io_read1_data 
                                 + vlSelf->top__DOT__ID__DOT___GEN_2)),32);
        bufp->chgQData(oldp+23,(((QData)((IData)((vlSelf->top__DOT__ID_io_read1_data 
                                                  + vlSelf->top__DOT__ID__DOT___GEN_2))) 
                                 << 1U)),33);
        bufp->chgQData(oldp+25,(((IData)(vlSelf->top__DOT__ID__DOT__regEn1)
                                  ? ((QData)((IData)(
                                                     (vlSelf->top__DOT__ID_io_read1_data 
                                                      + vlSelf->top__DOT__ID__DOT___GEN_2))) 
                                     << 1U) : (QData)((IData)(
                                                              (vlSelf->top__DOT__IF_ID__DOT__ff_pc 
                                                               + 
                                                               (((- (IData)((IData)(vlSelf->top__DOT__ID__DOT____VdfgTmp_h8afae4a5__0))) 
                                                                 << 0x15U) 
                                                                | (((IData)(vlSelf->top__DOT__ID__DOT____VdfgTmp_h8afae4a5__0) 
                                                                    << 0x14U) 
                                                                   | ((((IData)(vlSelf->top__DOT__IF_ID__DOT__ff_valid)
                                                                         ? 
                                                                        (0xffU 
                                                                         & (vlSelf->top__DOT__ID__DOT___T_1 
                                                                            >> 0xcU))
                                                                         : 0U) 
                                                                       << 0xcU) 
                                                                      | ((0x7ff800U 
                                                                          & (((IData)(vlSelf->top__DOT__IF_ID__DOT__ff_valid) 
                                                                              << 0xbU) 
                                                                             & (vlSelf->top__DOT__ID__DOT___T_1 
                                                                                >> 9U))) 
                                                                         | (((IData)(vlSelf->top__DOT__IF_ID__DOT__ff_valid)
                                                                              ? 
                                                                             (0x3ffU 
                                                                              & (vlSelf->top__DOT__ID__DOT___T_1 
                                                                                >> 0x15U))
                                                                              : 0U) 
                                                                            << 1U)))))))))),33);
        bufp->chgQData(oldp+27,(vlSelf->top__DOT__ID__DOT__takepc),33);
        bufp->chgBit(oldp+29,(vlSelf->top__DOT__ID__DOT__branchteke));
        bufp->chgQData(oldp+30,(((IData)(vlSelf->top__DOT__ID__DOT__branchmiss)
                                  ? vlSelf->top__DOT__ID__DOT__takepc
                                  : (QData)((IData)(
                                                    ((IData)(4U) 
                                                     + vlSelf->top__DOT__IF_ID__DOT__ff_pc))))),33);
        bufp->chgBit(oldp+32,(vlSelf->top__DOT__ID__DOT__addrFault));
        bufp->chgQData(oldp+33,(((IData)(vlSelf->top__DOT__ID__DOT__addrFault)
                                  ? vlSelf->top__DOT__ID__DOT__takepc
                                  : 0ULL)),33);
        bufp->chgBit(oldp+35,(vlSelf->top__DOT__MEM__DOT__memExcept));
        bufp->chgBit(oldp+36,(vlSelf->top__DOT__csr__DOT__mip_ssip));
        bufp->chgBit(oldp+37,(vlSelf->top__DOT__csr__DOT__mip_stip));
        bufp->chgBit(oldp+38,(vlSelf->top__DOT__csr__DOT__mip_seip));
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__csr__DOT__csrData),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__csr__DOT__writeData),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__csr__DOT__flagIntS),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__csr__DOT__flagIntM),32);
        bufp->chgBit(oldp+43,((((1U > (IData)(vlSelf->top__DOT__csr__DOT__mode)) 
                                | ((1U == (IData)(vlSelf->top__DOT__csr__DOT__mode)) 
                                   & (IData)(vlSelf->top__DOT__csr__DOT__mstatus_sie))) 
                               & (0U != (vlSelf->top__DOT__csr__DOT__flagIntS 
                                         & vlSelf->top__DOT__csr__DOT__mideleg_data)))));
        bufp->chgBit(oldp+44,(vlSelf->top__DOT__csr__DOT__hasIntM));
        bufp->chgBit(oldp+45,(vlSelf->top__DOT__csr__DOT__handIntS));
        bufp->chgBit(oldp+46,(((~ (IData)(vlSelf->top__DOT__csr__DOT__hasInt)) 
                               & (IData)(vlSelf->top__DOT__MEM__DOT__hasTrap))));
        bufp->chgBit(oldp+47,((((~ (IData)(vlSelf->top__DOT__csr__DOT__hasInt)) 
                                & (IData)(vlSelf->top__DOT__MEM__DOT__hasTrap)) 
                               & (vlSelf->top__DOT__csr__DOT__medeleg_data 
                                  >> ((5U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                       ? 2U : ((7U 
                                                == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                                    ? 0xbU
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                                     ? 3U
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__MEM__DOT__memAddr)
                                                       ? 4U
                                                       : 0xdU)
                                                      : 0U)))))))));
        bufp->chgBit(oldp+48,(vlSelf->top__DOT__csr__DOT__handExcS));
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__csr__DOT__intCauseS),31);
        bufp->chgIData(oldp+50,(((0x800U & vlSelf->top__DOT__csr__DOT__flagIntM)
                                  ? 0xbU : ((8U & vlSelf->top__DOT__csr__DOT__flagIntM)
                                             ? 3U : 
                                            ((0x80U 
                                              & vlSelf->top__DOT__csr__DOT__flagIntM)
                                              ? 7U : vlSelf->top__DOT__csr__DOT__intCauseS)))),31);
        bufp->chgIData(oldp+51,(((IData)(vlSelf->top__DOT__csr__DOT__handIntS)
                                  ? vlSelf->top__DOT__csr__DOT__intCauseS
                                  : ((0x800U & vlSelf->top__DOT__csr__DOT__flagIntM)
                                      ? 0xbU : ((8U 
                                                 & vlSelf->top__DOT__csr__DOT__flagIntM)
                                                 ? 3U
                                                 : 
                                                ((0x80U 
                                                  & vlSelf->top__DOT__csr__DOT__flagIntM)
                                                  ? 7U
                                                  : vlSelf->top__DOT__csr__DOT__intCauseS))))),31);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__csr__DOT__cause),32);
        bufp->chgIData(oldp+53,(((vlSelf->top__DOT__csr__DOT__stvec_base 
                                  + (((IData)(vlSelf->top__DOT__csr__DOT__stvec_mode) 
                                      & (IData)(vlSelf->top__DOT__csr__DOT__hasInt))
                                      ? vlSelf->top__DOT__csr__DOT__cause
                                      : 0U)) << 2U)),32);
        bufp->chgIData(oldp+54,(((vlSelf->top__DOT__csr__DOT__mtvec_base 
                                  + (((IData)(vlSelf->top__DOT__csr__DOT__mtvec_mode) 
                                      & (IData)(vlSelf->top__DOT__csr__DOT__hasInt))
                                      ? vlSelf->top__DOT__csr__DOT__cause
                                      : 0U)) << 2U)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+55,((0U != (3U & vlSelf->top__DOT__fetch__DOT__pc))));
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__IF_ID__DOT__ff_pc),32);
        bufp->chgBit(oldp+57,(vlSelf->top__DOT__IF_ID__DOT__ff_valid));
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__IF_ID__DOT__ff_inst),32);
        bufp->chgBit(oldp+59,(vlSelf->top__DOT__IF_ID__DOT__ff_bpu_take));
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__IF_ID__DOT__ff_bpu_takepc),32);
        bufp->chgBit(oldp+61,(vlSelf->top__DOT__IF_ID__DOT__ff_misaligned));
        bufp->chgBit(oldp+62,(vlSelf->top__DOT__ID__DOT__regEn1));
        bufp->chgCData(oldp+63,(vlSelf->top__DOT__ID__DOT__rs1),5);
        bufp->chgBit(oldp+64,(vlSelf->top__DOT__ID_io_read2_en));
        bufp->chgCData(oldp+65,(vlSelf->top__DOT__ID__DOT__rs2),5);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__ID__DOT___T_839),32);
        bufp->chgCData(oldp+67,(vlSelf->top__DOT__ID__DOT__csrActOp),3);
        bufp->chgBit(oldp+68,((((1U == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                 ? (IData)(vlSelf->top__DOT__csr__DOT__readable)
                                 : ((2U == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                     ? (IData)(vlSelf->top__DOT__csr__DOT__writable)
                                     : ((3U == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                         ? (IData)(vlSelf->top__DOT__csr__DOT___T_319)
                                         : ((4U == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                             ? (IData)(vlSelf->top__DOT__csr__DOT___T_319)
                                             : ((5U 
                                                 == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp)) 
                                                & (IData)(vlSelf->top__DOT__csr__DOT___T_319)))))) 
                               & (((0U != (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                    ? ((IData)(vlSelf->top__DOT__IF_ID__DOT__ff_valid)
                                        ? (3U & (vlSelf->top__DOT__ID__DOT___T_1 
                                                 >> 0x1cU))
                                        : 0U) : 0U) 
                                  <= (IData)(vlSelf->top__DOT__csr__DOT__mode)))));
        bufp->chgCData(oldp+69,(((0x33U == (0xfe00707fU 
                                            & vlSelf->top__DOT__ID__DOT__inst))
                                  ? 0U : ((0x13U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__ID__DOT__inst))
                                           ? 0U : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__ID__DOT__inst))
                                                    ? 1U
                                                    : 
                                                   ((0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__ID__DOT__inst))
                                                     ? 3U
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__ID__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x4033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__ID__DOT__inst))
                                                       ? 2U
                                                       : 
                                                      ((0x4013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__ID__DOT__inst))
                                                        ? 2U
                                                        : 
                                                       ((0x6033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__ID__DOT__inst))
                                                         ? 3U
                                                         : 
                                                        ((0x6013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__ID__DOT__inst))
                                                          ? 3U
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__ID__DOT__inst))
                                                           ? 4U
                                                           : 
                                                          ((0x7013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__ID__DOT__inst))
                                                            ? 4U
                                                            : 
                                                           ((0x2033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->top__DOT__ID__DOT__inst))
                                                             ? 5U
                                                             : 
                                                            ((0x2013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__ID__DOT__inst))
                                                              ? 5U
                                                              : (IData)(vlSelf->top__DOT__ID__DOT___T_472))))))))))))))),4);
        bufp->chgCData(oldp+70,(((0x33U == (0xfe00707fU 
                                            & vlSelf->top__DOT__ID__DOT__inst))
                                  ? 0U : ((0x13U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__ID__DOT__inst))
                                           ? 0U : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__ID__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__ID__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__ID__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x4033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__ID__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x4013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__ID__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x6033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__ID__DOT__inst))
                                                         ? 0U
                                                         : 
                                                        ((0x6013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__ID__DOT__inst))
                                                          ? 0U
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__ID__DOT__inst))
                                                           ? 0U
                                                           : 
                                                          ((0x7013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__ID__DOT__inst))
                                                            ? 0U
                                                            : 
                                                           ((0x2033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->top__DOT__ID__DOT__inst))
                                                             ? 0U
                                                             : 
                                                            ((0x2013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__ID__DOT__inst))
                                                              ? 0U
                                                              : (IData)(vlSelf->top__DOT__ID__DOT___T_588))))))))))))))),4);
        bufp->chgBit(oldp+71,(((0x33U == (0xfe00707fU 
                                          & vlSelf->top__DOT__ID__DOT__inst)) 
                               | ((0x13U == (0x707fU 
                                             & vlSelf->top__DOT__ID__DOT__inst)) 
                                  | ((0x40000033U == 
                                      (0xfe00707fU 
                                       & vlSelf->top__DOT__ID__DOT__inst)) 
                                     | ((0x37U == (0x7fU 
                                                   & vlSelf->top__DOT__ID__DOT__inst)) 
                                        | ((0x17U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__ID__DOT__inst)) 
                                           | ((0x4033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->top__DOT__ID__DOT__inst)) 
                                              | ((0x4013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__ID__DOT__inst)) 
                                                 | ((0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__ID__DOT__inst)) 
                                                    | ((0x6013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__ID__DOT__inst)) 
                                                       | ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__ID__DOT__inst)) 
                                                          | ((0x7013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__ID__DOT__inst)) 
                                                             | ((0x2033U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                | ((0x2013U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                   | ((0x3033U 
                                                                       == 
                                                                       (0xfe00707fU 
                                                                        & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                      | ((0x3013U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                         | ((0x1033U 
                                                                             == 
                                                                             (0xfe00707fU 
                                                                              & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                            | ((0x1013U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                               | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                                | (IData)(vlSelf->top__DOT__ID__DOT___T_293)))))))))))))))))))));
        bufp->chgCData(oldp+72,(vlSelf->top__DOT__ID__DOT__rd),5);
        bufp->chgSData(oldp+73,(vlSelf->top__DOT__ID__DOT__immI),12);
        bufp->chgBit(oldp+74,((0U != (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))));
        bufp->chgCData(oldp+75,(vlSelf->top__DOT__ID_EX__DOT__ff_aluOp),4);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__ID_EX__DOT__ff_opr1),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__ID_EX__DOT__ff_opr2),32);
        bufp->chgCData(oldp+78,(vlSelf->top__DOT__ID_EX__DOT__ff_lsuOp),4);
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__ID_EX__DOT__ff_lsuData),32);
        bufp->chgBit(oldp+80,(vlSelf->top__DOT__ID_EX__DOT__ff_regWen));
        bufp->chgCData(oldp+81,(vlSelf->top__DOT__ID_EX__DOT__ff_regWaddr),5);
        bufp->chgCData(oldp+82,(vlSelf->top__DOT__ID_EX__DOT__ff_csrOp),3);
        bufp->chgSData(oldp+83,(vlSelf->top__DOT__ID_EX__DOT__ff_csrAddr),12);
        bufp->chgBit(oldp+84,(vlSelf->top__DOT__ID_EX__DOT__ff_csren));
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__ID_EX__DOT__ff_csrrData),32);
        bufp->chgIData(oldp+86,(vlSelf->top__DOT__ID_EX__DOT__ff_csrwData),32);
        bufp->chgCData(oldp+87,(vlSelf->top__DOT__ID_EX__DOT__ff_excType),4);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__ID_EX__DOT__ff_excValue),32);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__ID_EX__DOT__ff_inst),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__ID_EX__DOT__ff_currentPc),32);
        bufp->chgIData(oldp+91,((IData)(vlSelf->top__DOT__EX__DOT__result)),32);
        bufp->chgBit(oldp+92,(vlSelf->top__DOT__EX_io_ex_o_load));
        bufp->chgBit(oldp+93,((0x13U != vlSelf->top__DOT__ID_EX__DOT__ff_inst)));
        bufp->chgCData(oldp+94,(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuOp),4);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuData),32);
        bufp->chgBit(oldp+96,(vlSelf->top__DOT__EX_MEM__DOT__ff_reg_en));
        bufp->chgCData(oldp+97,(vlSelf->top__DOT__EX_MEM__DOT__ff_reg_addr),5);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data),32);
        bufp->chgBit(oldp+99,(vlSelf->top__DOT__EX_MEM__DOT__ff_load));
        bufp->chgCData(oldp+100,(vlSelf->top__DOT__EX_MEM__DOT__ff_csr_op),3);
        bufp->chgSData(oldp+101,(vlSelf->top__DOT__EX_MEM__DOT__ff_csr_addr),12);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__EX_MEM__DOT__ff_csr_data),32);
        bufp->chgBit(oldp+103,(vlSelf->top__DOT__EX_MEM__DOT__ff_csr_retired));
        bufp->chgCData(oldp+104,(vlSelf->top__DOT__EX_MEM__DOT__ff_excType),4);
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__EX_MEM__DOT__ff_excValue),32);
        bufp->chgIData(oldp+106,(vlSelf->top__DOT__EX_MEM__DOT__ff_inst),32);
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__EX_MEM__DOT__ff_currentPc),32);
        bufp->chgIData(oldp+108,(((5U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                   ? 2U : ((7U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                            ? 0U : 
                                           ((1U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                             ? 0xbU
                                             : ((2U 
                                                 == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                                 ? 3U
                                                 : 
                                                ((8U 
                                                  == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__MEM__DOT__memAddr)
                                                   ? 4U
                                                   : 0xdU)
                                                  : 0U)))))),31);
        bufp->chgBit(oldp+109,(vlSelf->top__DOT__resoler__DOT___T_35));
        bufp->chgBit(oldp+110,(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_en));
        bufp->chgCData(oldp+111,(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr),5);
        bufp->chgIData(oldp+112,(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data),32);
        bufp->chgCData(oldp+113,(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op),3);
        bufp->chgSData(oldp+114,(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr),12);
        bufp->chgIData(oldp+115,(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_data),32);
        bufp->chgBit(oldp+116,(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_retired));
        bufp->chgIData(oldp+117,(((IData)(vlSelf->top__DOT__ID__DOT__regEn1)
                                   ? ((0x1fU == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                       ? vlSelf->top__DOT__regfile__DOT__regfile_31
                                       : ((0x1eU == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                           ? vlSelf->top__DOT__regfile__DOT__regfile_30
                                           : ((0x1dU 
                                               == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                               ? vlSelf->top__DOT__regfile__DOT__regfile_29
                                               : ((0x1cU 
                                                   == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                   ? vlSelf->top__DOT__regfile__DOT__regfile_28
                                                   : 
                                                  ((0x1bU 
                                                    == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                    ? vlSelf->top__DOT__regfile__DOT__regfile_27
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                     ? vlSelf->top__DOT__regfile__DOT__regfile_26
                                                     : 
                                                    ((0x19U 
                                                      == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                      ? vlSelf->top__DOT__regfile__DOT__regfile_25
                                                      : 
                                                     ((0x18U 
                                                       == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                       ? vlSelf->top__DOT__regfile__DOT__regfile_24
                                                       : 
                                                      ((0x17U 
                                                        == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                        ? vlSelf->top__DOT__regfile__DOT__regfile_23
                                                        : 
                                                       ((0x16U 
                                                         == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                         ? vlSelf->top__DOT__regfile__DOT__regfile_22
                                                         : vlSelf->top__DOT__regfile__DOT___GEN_21))))))))))
                                   : 0U)),32);
        bufp->chgIData(oldp+118,(((IData)(vlSelf->top__DOT__ID_io_read2_en)
                                   ? ((0x1fU == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                       ? vlSelf->top__DOT__regfile__DOT__regfile_31
                                       : ((0x1eU == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                           ? vlSelf->top__DOT__regfile__DOT__regfile_30
                                           : ((0x1dU 
                                               == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                               ? vlSelf->top__DOT__regfile__DOT__regfile_29
                                               : ((0x1cU 
                                                   == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                   ? vlSelf->top__DOT__regfile__DOT__regfile_28
                                                   : 
                                                  ((0x1bU 
                                                    == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                    ? vlSelf->top__DOT__regfile__DOT__regfile_27
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                     ? vlSelf->top__DOT__regfile__DOT__regfile_26
                                                     : 
                                                    ((0x19U 
                                                      == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                      ? vlSelf->top__DOT__regfile__DOT__regfile_25
                                                      : 
                                                     ((0x18U 
                                                       == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                       ? vlSelf->top__DOT__regfile__DOT__regfile_24
                                                       : 
                                                      ((0x17U 
                                                        == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                        ? vlSelf->top__DOT__regfile__DOT__regfile_23
                                                        : 
                                                       ((0x16U 
                                                         == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                         ? vlSelf->top__DOT__regfile__DOT__regfile_22
                                                         : vlSelf->top__DOT__regfile__DOT___GEN_53))))))))))
                                   : 0U)),32);
        bufp->chgBit(oldp+119,(vlSelf->top__DOT__resoler_io_loadflag));
        bufp->chgBit(oldp+120,(vlSelf->top__DOT__resoler_io_csrflag));
        bufp->chgQData(oldp+121,((0x7fffffffffffffffULL 
                                  & ((0U == (IData)(vlSelf->top__DOT__ID_EX__DOT__ff_aluOp))
                                      ? (QData)((IData)(
                                                        (vlSelf->top__DOT__ID_EX__DOT__ff_opr1 
                                                         + vlSelf->top__DOT__ID_EX__DOT__ff_opr2)))
                                      : ((1U == (IData)(vlSelf->top__DOT__ID_EX__DOT__ff_aluOp))
                                          ? (QData)((IData)(
                                                            (vlSelf->top__DOT__ID_EX__DOT__ff_opr1 
                                                             - vlSelf->top__DOT__ID_EX__DOT__ff_opr2)))
                                          : ((4U == (IData)(vlSelf->top__DOT__ID_EX__DOT__ff_aluOp))
                                              ? (QData)((IData)(
                                                                (vlSelf->top__DOT__ID_EX__DOT__ff_opr1 
                                                                 & vlSelf->top__DOT__ID_EX__DOT__ff_opr2)))
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__ID_EX__DOT__ff_aluOp))
                                                  ? (QData)((IData)(
                                                                    (vlSelf->top__DOT__ID_EX__DOT__ff_opr1 
                                                                     | vlSelf->top__DOT__ID_EX__DOT__ff_opr2)))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->top__DOT__ID_EX__DOT__ff_aluOp))
                                                   ? (QData)((IData)(
                                                                     (vlSelf->top__DOT__ID_EX__DOT__ff_opr1 
                                                                      ^ vlSelf->top__DOT__ID_EX__DOT__ff_opr2)))
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->top__DOT__ID_EX__DOT__ff_aluOp))
                                                    ? 
                                                   ((QData)((IData)(vlSelf->top__DOT__ID_EX__DOT__ff_opr1)) 
                                                    << 
                                                    (0x1fU 
                                                     & vlSelf->top__DOT__ID_EX__DOT__ff_opr2))
                                                    : (QData)((IData)(
                                                                      ((9U 
                                                                        == (IData)(vlSelf->top__DOT__ID_EX__DOT__ff_aluOp))
                                                                        ? 
                                                                       VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__ID_EX__DOT__ff_opr1, 
                                                                                (0x1fU 
                                                                                & vlSelf->top__DOT__ID_EX__DOT__ff_opr2))
                                                                        : 
                                                                       ((8U 
                                                                         == (IData)(vlSelf->top__DOT__ID_EX__DOT__ff_aluOp))
                                                                         ? 
                                                                        (vlSelf->top__DOT__ID_EX__DOT__ff_opr1 
                                                                         >> 
                                                                         (0x1fU 
                                                                          & vlSelf->top__DOT__ID_EX__DOT__ff_opr2))
                                                                         : 
                                                                        ((5U 
                                                                          == (IData)(vlSelf->top__DOT__ID_EX__DOT__ff_aluOp))
                                                                          ? 
                                                                         VL_LTS_III(32, vlSelf->top__DOT__ID_EX__DOT__ff_opr1, vlSelf->top__DOT__ID_EX__DOT__ff_opr2)
                                                                          : 
                                                                         ((6U 
                                                                           == (IData)(vlSelf->top__DOT__ID_EX__DOT__ff_aluOp)) 
                                                                          & (vlSelf->top__DOT__ID_EX__DOT__ff_opr1 
                                                                             > vlSelf->top__DOT__ID_EX__DOT__ff_opr2))))))))))))))),63);
        bufp->chgQData(oldp+123,(vlSelf->top__DOT__EX__DOT__result),63);
        bufp->chgBit(oldp+125,(vlSelf->top__DOT__ID__DOT__stall));
        bufp->chgIData(oldp+126,(vlSelf->top__DOT__ID__DOT__lastinst),32);
        bufp->chgIData(oldp+127,(vlSelf->top__DOT__ID__DOT__inst),32);
        bufp->chgCData(oldp+128,(vlSelf->top__DOT__ID__DOT__aluSrc1),4);
        bufp->chgCData(oldp+129,(vlSelf->top__DOT__ID__DOT__aluSrc2),4);
        bufp->chgCData(oldp+130,(vlSelf->top__DOT__ID__DOT__branchOp),3);
        bufp->chgCData(oldp+131,(vlSelf->top__DOT__ID__DOT__csrOp),3);
        bufp->chgCData(oldp+132,(((0x33U == (0xfe00707fU 
                                             & vlSelf->top__DOT__ID__DOT__inst))
                                   ? 0U : ((0x13U == 
                                            (0x707fU 
                                             & vlSelf->top__DOT__ID__DOT__inst))
                                            ? 0U : 
                                           ((0x40000033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->top__DOT__ID__DOT__inst))
                                             ? 0U : 
                                            ((0x37U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__ID__DOT__inst))
                                              ? 0U : 
                                             ((0x17U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__ID__DOT__inst))
                                               ? 0U
                                               : ((0x4033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__ID__DOT__inst))
                                                   ? 0U
                                                   : 
                                                  ((0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__ID__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__ID__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__ID__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__ID__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x7013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__ID__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x2033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__ID__DOT__inst))
                                                         ? 0U
                                                         : 
                                                        ((0x2013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__ID__DOT__inst))
                                                          ? 0U
                                                          : (IData)(vlSelf->top__DOT__ID__DOT___T_762))))))))))))))),4);
        bufp->chgBit(oldp+133,((1U == (IData)(vlSelf->top__DOT__ID__DOT__branchOp))));
        bufp->chgIData(oldp+134,((vlSelf->top__DOT__IF_ID__DOT__ff_pc 
                                  + (((- (IData)((IData)(vlSelf->top__DOT__ID__DOT____VdfgTmp_h8afae4a5__0))) 
                                      << 0x15U) | (
                                                   ((IData)(vlSelf->top__DOT__ID__DOT____VdfgTmp_h8afae4a5__0) 
                                                    << 0x14U) 
                                                   | ((((IData)(vlSelf->top__DOT__IF_ID__DOT__ff_valid)
                                                         ? 
                                                        (0xffU 
                                                         & (vlSelf->top__DOT__ID__DOT___T_1 
                                                            >> 0xcU))
                                                         : 0U) 
                                                       << 0xcU) 
                                                      | ((0x7ff800U 
                                                          & (((IData)(vlSelf->top__DOT__IF_ID__DOT__ff_valid) 
                                                              << 0xbU) 
                                                             & (vlSelf->top__DOT__ID__DOT___T_1 
                                                                >> 9U))) 
                                                         | (((IData)(vlSelf->top__DOT__IF_ID__DOT__ff_valid)
                                                              ? 
                                                             (0x3ffU 
                                                              & (vlSelf->top__DOT__ID__DOT___T_1 
                                                                 >> 0x15U))
                                                              : 0U) 
                                                            << 1U))))))),32);
        bufp->chgIData(oldp+135,((vlSelf->top__DOT__IF_ID__DOT__ff_pc 
                                  + (((- (IData)((IData)(vlSelf->top__DOT__ID__DOT____VdfgTmp_h8afae4a5__0))) 
                                      << 0xdU) | (((IData)(vlSelf->top__DOT__ID__DOT____VdfgTmp_h8afae4a5__0) 
                                                   << 0xcU) 
                                                  | ((0xfffff800U 
                                                      & (((IData)(vlSelf->top__DOT__IF_ID__DOT__ff_valid) 
                                                          << 0xbU) 
                                                         & (vlSelf->top__DOT__ID__DOT___T_1 
                                                            << 4U))) 
                                                     | ((((IData)(vlSelf->top__DOT__IF_ID__DOT__ff_valid)
                                                           ? 
                                                          (0x3fU 
                                                           & (vlSelf->top__DOT__ID__DOT___T_1 
                                                              >> 0x19U))
                                                           : 0U) 
                                                         << 5U) 
                                                        | (((IData)(vlSelf->top__DOT__IF_ID__DOT__ff_valid)
                                                             ? 
                                                            (0xfU 
                                                             & (vlSelf->top__DOT__ID__DOT___T_1 
                                                                >> 8U))
                                                             : 0U) 
                                                           << 1U))))))),32);
        bufp->chgBit(oldp+136,(vlSelf->top__DOT__MEM__DOT__wen));
        bufp->chgCData(oldp+137,(vlSelf->top__DOT__MEM__DOT__width),2);
        bufp->chgBit(oldp+138,(vlSelf->top__DOT__MEM__DOT__signed_));
        bufp->chgCData(oldp+139,((3U & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data)),2);
        bufp->chgCData(oldp+140,(vlSelf->top__DOT__MEM__DOT__writeEn),7);
        bufp->chgCData(oldp+141,(((IData)(vlSelf->top__DOT__MEM__DOT__wen)
                                   ? (IData)(vlSelf->top__DOT__MEM__DOT__writeEn)
                                   : 0xfU)),7);
        bufp->chgQData(oldp+142,(((0U == (IData)(vlSelf->top__DOT__MEM__DOT__width))
                                   ? ((0U == (3U & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                       ? (QData)((IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuData))
                                       : ((1U == (3U 
                                                  & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                           ? ((QData)((IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuData)) 
                                              << 8U)
                                           : ((2U == 
                                               (3U 
                                                & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                               ? ((QData)((IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuData)) 
                                                  << 0x10U)
                                               : ((3U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuData)) 
                                                   << 0x18U)
                                                   : 0ULL))))
                                   : ((1U == (IData)(vlSelf->top__DOT__MEM__DOT__width))
                                       ? ((0U == (3U 
                                                  & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                           ? (QData)((IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuData))
                                           : ((2U == 
                                               (3U 
                                                & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                               ? ((QData)((IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuData)) 
                                                  << 0x10U)
                                               : 0ULL))
                                       : (QData)((IData)(
                                                         ((2U 
                                                           == (IData)(vlSelf->top__DOT__MEM__DOT__width))
                                                           ? 
                                                          ((0U 
                                                            == 
                                                            (3U 
                                                             & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                                            ? vlSelf->top__DOT__EX_MEM__DOT__ff_lsuData
                                                            : 0U)
                                                           : 0U)))))),56);
        bufp->chgBit(oldp+144,(vlSelf->top__DOT__MEM__DOT__memAddr));
        bufp->chgBit(oldp+145,((7U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))));
        bufp->chgBit(oldp+146,((5U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))));
        bufp->chgBit(oldp+147,((8U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))));
        bufp->chgBit(oldp+148,(((1U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType)) 
                                | (2U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType)))));
        bufp->chgIData(oldp+149,(((1U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                   ? 0xbU : ((2U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                              ? 3U : 
                                             ((8U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                               ? ((IData)(vlSelf->top__DOT__MEM__DOT__memAddr)
                                                   ? 4U
                                                   : 0xdU)
                                               : 0U)))),31);
        bufp->chgCData(oldp+150,(vlSelf->top__DOT__csr__DOT__mode),2);
        bufp->chgBit(oldp+151,(vlSelf->top__DOT__csr__DOT__mstatus_sum));
        bufp->chgCData(oldp+152,(vlSelf->top__DOT__csr__DOT__mstatus_mpp),2);
        bufp->chgBit(oldp+153,(vlSelf->top__DOT__csr__DOT__mstatus_spp));
        bufp->chgBit(oldp+154,(vlSelf->top__DOT__csr__DOT__mstatus_mpie));
        bufp->chgBit(oldp+155,(vlSelf->top__DOT__csr__DOT__mstatus_spie));
        bufp->chgBit(oldp+156,(vlSelf->top__DOT__csr__DOT__mstatus_mie));
        bufp->chgBit(oldp+157,(vlSelf->top__DOT__csr__DOT__mstatus_sie));
        bufp->chgIData(oldp+158,(vlSelf->top__DOT__csr__DOT__medeleg_data),32);
        bufp->chgIData(oldp+159,(vlSelf->top__DOT__csr__DOT__mideleg_data),32);
        bufp->chgBit(oldp+160,(vlSelf->top__DOT__csr__DOT__mie_meie));
        bufp->chgBit(oldp+161,(vlSelf->top__DOT__csr__DOT__mie_seie));
        bufp->chgBit(oldp+162,(vlSelf->top__DOT__csr__DOT__mie_mtie));
        bufp->chgBit(oldp+163,(vlSelf->top__DOT__csr__DOT__mie_stie));
        bufp->chgBit(oldp+164,(vlSelf->top__DOT__csr__DOT__mie_msie));
        bufp->chgBit(oldp+165,(vlSelf->top__DOT__csr__DOT__mie_ssie));
        bufp->chgIData(oldp+166,(vlSelf->top__DOT__csr__DOT__mtvec_base),30);
        bufp->chgCData(oldp+167,(vlSelf->top__DOT__csr__DOT__mtvec_mode),2);
        bufp->chgIData(oldp+168,(vlSelf->top__DOT__csr__DOT__mscratch_data),32);
        bufp->chgIData(oldp+169,(vlSelf->top__DOT__csr__DOT__mepc_data),32);
        bufp->chgBit(oldp+170,(vlSelf->top__DOT__csr__DOT__mcause_int));
        bufp->chgIData(oldp+171,(vlSelf->top__DOT__csr__DOT__mcause_code),31);
        bufp->chgIData(oldp+172,(vlSelf->top__DOT__csr__DOT__mtval_data),32);
        bufp->chgBit(oldp+173,(vlSelf->top__DOT__csr__DOT__mipReal_seip));
        bufp->chgBit(oldp+174,(vlSelf->top__DOT__csr__DOT__mipReal_stip));
        bufp->chgBit(oldp+175,(vlSelf->top__DOT__csr__DOT__mipReal_ssip));
        bufp->chgQData(oldp+176,(vlSelf->top__DOT__csr__DOT__mcycle_data),64);
        bufp->chgQData(oldp+178,(vlSelf->top__DOT__csr__DOT__minstret_data),64);
        bufp->chgIData(oldp+180,(vlSelf->top__DOT__csr__DOT__stvec_base),30);
        bufp->chgCData(oldp+181,(vlSelf->top__DOT__csr__DOT__stvec_mode),2);
        bufp->chgIData(oldp+182,(vlSelf->top__DOT__csr__DOT__sscratch_data),32);
        bufp->chgIData(oldp+183,(vlSelf->top__DOT__csr__DOT__sepc_data),32);
        bufp->chgBit(oldp+184,(vlSelf->top__DOT__csr__DOT__scause_int));
        bufp->chgIData(oldp+185,(vlSelf->top__DOT__csr__DOT__scause_code),31);
        bufp->chgIData(oldp+186,(vlSelf->top__DOT__csr__DOT__stval_data),32);
        bufp->chgBit(oldp+187,(vlSelf->top__DOT__csr__DOT__satp_mode));
        bufp->chgIData(oldp+188,(vlSelf->top__DOT__csr__DOT__satp_ppn),22);
        bufp->chgBit(oldp+189,(vlSelf->top__DOT__csr__DOT__readable));
        bufp->chgBit(oldp+190,(vlSelf->top__DOT__csr__DOT__writable));
        bufp->chgBit(oldp+191,(((1U == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                 ? (IData)(vlSelf->top__DOT__csr__DOT__readable)
                                 : ((2U == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                     ? (IData)(vlSelf->top__DOT__csr__DOT__writable)
                                     : ((3U == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                         ? (IData)(vlSelf->top__DOT__csr__DOT___T_319)
                                         : ((4U == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                             ? (IData)(vlSelf->top__DOT__csr__DOT___T_319)
                                             : ((5U 
                                                 == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp)) 
                                                & (IData)(vlSelf->top__DOT__csr__DOT___T_319))))))));
        bufp->chgBit(oldp+192,((((0U != (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                  ? ((IData)(vlSelf->top__DOT__IF_ID__DOT__ff_valid)
                                      ? (3U & (vlSelf->top__DOT__ID__DOT___T_1 
                                               >> 0x1cU))
                                      : 0U) : 0U) <= (IData)(vlSelf->top__DOT__csr__DOT__mode))));
        bufp->chgIData(oldp+193,(vlSelf->top__DOT__fetch__DOT__pc),32);
        bufp->chgIData(oldp+194,(vlSelf->top__DOT__regfile__DOT__regfile_0),32);
        bufp->chgIData(oldp+195,(vlSelf->top__DOT__regfile__DOT__regfile_1),32);
        bufp->chgIData(oldp+196,(vlSelf->top__DOT__regfile__DOT__regfile_2),32);
        bufp->chgIData(oldp+197,(vlSelf->top__DOT__regfile__DOT__regfile_3),32);
        bufp->chgIData(oldp+198,(vlSelf->top__DOT__regfile__DOT__regfile_4),32);
        bufp->chgIData(oldp+199,(vlSelf->top__DOT__regfile__DOT__regfile_5),32);
        bufp->chgIData(oldp+200,(vlSelf->top__DOT__regfile__DOT__regfile_6),32);
        bufp->chgIData(oldp+201,(vlSelf->top__DOT__regfile__DOT__regfile_7),32);
        bufp->chgIData(oldp+202,(vlSelf->top__DOT__regfile__DOT__regfile_8),32);
        bufp->chgIData(oldp+203,(vlSelf->top__DOT__regfile__DOT__regfile_9),32);
        bufp->chgIData(oldp+204,(vlSelf->top__DOT__regfile__DOT__regfile_10),32);
        bufp->chgIData(oldp+205,(vlSelf->top__DOT__regfile__DOT__regfile_11),32);
        bufp->chgIData(oldp+206,(vlSelf->top__DOT__regfile__DOT__regfile_12),32);
        bufp->chgIData(oldp+207,(vlSelf->top__DOT__regfile__DOT__regfile_13),32);
        bufp->chgIData(oldp+208,(vlSelf->top__DOT__regfile__DOT__regfile_14),32);
        bufp->chgIData(oldp+209,(vlSelf->top__DOT__regfile__DOT__regfile_15),32);
        bufp->chgIData(oldp+210,(vlSelf->top__DOT__regfile__DOT__regfile_16),32);
        bufp->chgIData(oldp+211,(vlSelf->top__DOT__regfile__DOT__regfile_17),32);
        bufp->chgIData(oldp+212,(vlSelf->top__DOT__regfile__DOT__regfile_18),32);
        bufp->chgIData(oldp+213,(vlSelf->top__DOT__regfile__DOT__regfile_19),32);
        bufp->chgIData(oldp+214,(vlSelf->top__DOT__regfile__DOT__regfile_20),32);
        bufp->chgIData(oldp+215,(vlSelf->top__DOT__regfile__DOT__regfile_21),32);
        bufp->chgIData(oldp+216,(vlSelf->top__DOT__regfile__DOT__regfile_22),32);
        bufp->chgIData(oldp+217,(vlSelf->top__DOT__regfile__DOT__regfile_23),32);
        bufp->chgIData(oldp+218,(vlSelf->top__DOT__regfile__DOT__regfile_24),32);
        bufp->chgIData(oldp+219,(vlSelf->top__DOT__regfile__DOT__regfile_25),32);
        bufp->chgIData(oldp+220,(vlSelf->top__DOT__regfile__DOT__regfile_26),32);
        bufp->chgIData(oldp+221,(vlSelf->top__DOT__regfile__DOT__regfile_27),32);
        bufp->chgIData(oldp+222,(vlSelf->top__DOT__regfile__DOT__regfile_28),32);
        bufp->chgIData(oldp+223,(vlSelf->top__DOT__regfile__DOT__regfile_29),32);
        bufp->chgIData(oldp+224,(vlSelf->top__DOT__regfile__DOT__regfile_30),32);
        bufp->chgIData(oldp+225,(vlSelf->top__DOT__regfile__DOT__regfile_31),32);
        bufp->chgBit(oldp+226,(((IData)(vlSelf->top__DOT__ID__DOT__regEn1) 
                                & ((IData)(vlSelf->top__DOT__EX_io_ex_o_load) 
                                   & (IData)(vlSelf->top__DOT__resoler__DOT___T_2)))));
        bufp->chgBit(oldp+227,(((IData)(vlSelf->top__DOT__ID_io_read2_en) 
                                & ((IData)(vlSelf->top__DOT__EX_io_ex_o_load) 
                                   & (IData)(vlSelf->top__DOT__resoler__DOT___T_10)))));
    }
    bufp->chgBit(oldp+228,(vlSelf->clock));
    bufp->chgBit(oldp+229,(vlSelf->reset));
    bufp->chgBit(oldp+230,(vlSelf->io_rom_en));
    bufp->chgBit(oldp+231,(vlSelf->io_rom_valid));
    bufp->chgBit(oldp+232,(vlSelf->io_rom_fault));
    bufp->chgCData(oldp+233,(vlSelf->io_rom_wen),4);
    bufp->chgIData(oldp+234,(vlSelf->io_rom_addr),32);
    bufp->chgIData(oldp+235,(vlSelf->io_rom_rdata),32);
    bufp->chgIData(oldp+236,(vlSelf->io_rom_wdata),32);
    bufp->chgBit(oldp+237,(vlSelf->io_ram_en));
    bufp->chgBit(oldp+238,(vlSelf->io_ram_valid));
    bufp->chgBit(oldp+239,(vlSelf->io_ram_fault));
    bufp->chgCData(oldp+240,(vlSelf->io_ram_wen),4);
    bufp->chgIData(oldp+241,(vlSelf->io_ram_addr),32);
    bufp->chgIData(oldp+242,(vlSelf->io_ram_rdata),32);
    bufp->chgIData(oldp+243,(vlSelf->io_ram_wdata),32);
    bufp->chgBit(oldp+244,(vlSelf->io_timer));
    bufp->chgBit(oldp+245,(vlSelf->io_soft));
    bufp->chgBit(oldp+246,(vlSelf->io_extern));
    bufp->chgBit(oldp+247,((1U & (~ (IData)(vlSelf->io_rom_valid)))));
    bufp->chgBit(oldp+248,(vlSelf->top__DOT__fetch__DOT__bpu_io_prdt_taken_o));
    bufp->chgIData(oldp+249,(((0U == (IData)(vlSelf->top__DOT__MEM__DOT__width))
                               ? ((0U == (3U & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                   ? ((IData)(vlSelf->top__DOT__MEM__DOT__signed_)
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->io_ram_rdata 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          (0xffU & vlSelf->io_ram_rdata))
                                       : (0xffU & vlSelf->io_ram_rdata))
                                   : ((1U == (3U & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                       ? ((IData)(vlSelf->top__DOT__MEM__DOT__signed_)
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->io_ram_rdata 
                                                              >> 0xfU)))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & (vlSelf->io_ram_rdata 
                                                    >> 8U)))
                                           : (0xffU 
                                              & (vlSelf->io_ram_rdata 
                                                 >> 8U)))
                                       : ((2U == (3U 
                                                  & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                           ? ((IData)(vlSelf->top__DOT__MEM__DOT__signed_)
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->io_ram_rdata 
                                                                  >> 0x17U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & (vlSelf->io_ram_rdata 
                                                        >> 0x10U)))
                                               : (0xffU 
                                                  & (vlSelf->io_ram_rdata 
                                                     >> 0x10U)))
                                           : ((3U == 
                                               (3U 
                                                & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                               ? ((IData)(vlSelf->top__DOT__MEM__DOT__signed_)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->io_ram_rdata 
                                                                >> 0x1fU))) 
                                                    << 8U) 
                                                   | (vlSelf->io_ram_rdata 
                                                      >> 0x18U))
                                                   : 
                                                  (vlSelf->io_ram_rdata 
                                                   >> 0x18U))
                                               : 0U))))
                               : ((1U == (IData)(vlSelf->top__DOT__MEM__DOT__width))
                                   ? ((0U == (3U & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                       ? ((IData)(vlSelf->top__DOT__MEM__DOT__signed_)
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->io_ram_rdata 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (0xffffU 
                                                 & vlSelf->io_ram_rdata))
                                           : (0xffffU 
                                              & vlSelf->io_ram_rdata))
                                       : ((2U == (3U 
                                                  & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                           ? ((IData)(vlSelf->top__DOT__MEM__DOT__signed_)
                                               ? ((
                                                   (- (IData)(
                                                              (vlSelf->io_ram_rdata 
                                                               >> 0x1fU))) 
                                                   << 0x10U) 
                                                  | (vlSelf->io_ram_rdata 
                                                     >> 0x10U))
                                               : (vlSelf->io_ram_rdata 
                                                  >> 0x10U))
                                           : 0U)) : 
                                  ((2U == (IData)(vlSelf->top__DOT__MEM__DOT__width))
                                    ? ((0U == (3U & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                        ? vlSelf->io_ram_rdata
                                        : 0U) : 0U)))),32);
    bufp->chgCData(oldp+250,(((IData)(vlSelf->top__DOT__MEM_io_stallReq)
                               ? 0x1eU : ((IData)(vlSelf->top__DOT__resoler_io_csrflag)
                                           ? 0x1cU : 
                                          ((IData)(vlSelf->top__DOT__resoler_io_loadflag)
                                            ? 0x18U
                                            : ((IData)(vlSelf->io_rom_valid)
                                                ? 0U
                                                : 0x10U))))),5);
    bufp->chgCData(oldp+251,((0x7fU & vlSelf->io_rom_rdata)),7);
    bufp->chgBit(oldp+252,((0x63U == (0x7fU & vlSelf->io_rom_rdata))));
    bufp->chgBit(oldp+253,((0x6fU == (0x7fU & vlSelf->io_rom_rdata))));
    bufp->chgIData(oldp+254,(vlSelf->top__DOT__fetch__DOT__bpu__DOT__inst_b_type_imm),32);
    bufp->chgIData(oldp+255,(((((vlSelf->io_rom_rdata 
                                 >> 0x1fU) ? 0xfffU
                                 : 0U) << 0x14U) | 
                              ((0xff000U & vlSelf->io_rom_rdata) 
                               | ((0x800U & (vlSelf->io_rom_rdata 
                                             >> 9U)) 
                                  | (0x7feU & (vlSelf->io_rom_rdata 
                                               >> 0x14U)))))),32);
    bufp->chgBit(oldp+256,(((IData)((0x80000063U == 
                                     (0x8000007fU & vlSelf->io_rom_rdata))) 
                            | (0x6fU == (0x7fU & vlSelf->io_rom_rdata)))));
    bufp->chgIData(oldp+257,(((0x63U == (0x7fU & vlSelf->io_rom_rdata))
                               ? vlSelf->top__DOT__fetch__DOT__bpu__DOT__inst_b_type_imm
                               : ((0x6fU == (0x7fU 
                                             & vlSelf->io_rom_rdata))
                                   ? ((((vlSelf->io_rom_rdata 
                                         >> 0x1fU) ? 0xfffU
                                         : 0U) << 0x14U) 
                                      | ((0xff000U 
                                          & vlSelf->io_rom_rdata) 
                                         | ((0x800U 
                                             & (vlSelf->io_rom_rdata 
                                                >> 9U)) 
                                            | (0x7feU 
                                               & (vlSelf->io_rom_rdata 
                                                  >> 0x14U)))))
                                   : vlSelf->top__DOT__fetch__DOT__bpu__DOT__inst_b_type_imm))),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
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
