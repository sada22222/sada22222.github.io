// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ top__DOT__csr__DOT___T_142;
    top__DOT__csr__DOT___T_142 = 0;
    IData/*31:0*/ top__DOT__csr__DOT___T_422;
    top__DOT__csr__DOT___T_422 = 0;
    // Body
    vlSelf->top__DOT__fetch__DOT__bpu_io_prdt_taken_o 
        = ((IData)(vlSelf->io_rom_valid) & ((IData)(
                                                    (0x80000063U 
                                                     == 
                                                     (0x8000007fU 
                                                      & vlSelf->io_rom_rdata))) 
                                            | (0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->io_rom_rdata))));
    vlSelf->top__DOT__fetch__DOT__bpu__DOT__inst_b_type_imm 
        = ((((vlSelf->io_rom_rdata >> 0x1fU) ? 0xfffffU
              : 0U) << 0xcU) | ((0x800U & (vlSelf->io_rom_rdata 
                                           << 4U)) 
                                | ((0x7e0U & (vlSelf->io_rom_rdata 
                                              >> 0x14U)) 
                                   | (0x1eU & (vlSelf->io_rom_rdata 
                                               >> 7U)))));
    vlSelf->top__DOT__MEM_io_stallReq = (1U & ((~ (IData)(vlSelf->io_ram_valid)) 
                                               | (IData)(vlSelf->top__DOT__resoler__DOT___T_35)));
    vlSelf->top__DOT__MEM__DOT__memExcept = ((IData)(vlSelf->top__DOT__MEM__DOT__memAddr) 
                                             | (IData)(vlSelf->io_ram_fault));
    vlSelf->top__DOT__MEM_io_mem_o_reg_data = ((IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_load)
                                                ? (
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__MEM__DOT__width))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__MEM__DOT__signed_)
                                                      ? 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->io_ram_rdata 
                                                                      >> 7U)))) 
                                                       << 8U) 
                                                      | (0xffU 
                                                         & vlSelf->io_ram_rdata))
                                                      : 
                                                     (0xffU 
                                                      & vlSelf->io_ram_rdata))
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__MEM__DOT__signed_)
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->io_ram_rdata 
                                                                       >> 0xfU)))) 
                                                        << 8U) 
                                                       | (0xffU 
                                                          & (vlSelf->io_ram_rdata 
                                                             >> 8U)))
                                                       : 
                                                      (0xffU 
                                                       & (vlSelf->io_ram_rdata 
                                                          >> 8U)))
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__MEM__DOT__signed_)
                                                        ? 
                                                       (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->io_ram_rdata 
                                                                        >> 0x17U)))) 
                                                         << 8U) 
                                                        | (0xffU 
                                                           & (vlSelf->io_ram_rdata 
                                                              >> 0x10U)))
                                                        : 
                                                       (0xffU 
                                                        & (vlSelf->io_ram_rdata 
                                                           >> 0x10U)))
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                                        ? 
                                                       ((IData)(vlSelf->top__DOT__MEM__DOT__signed_)
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
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__MEM__DOT__width))
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__MEM__DOT__signed_)
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->io_ram_rdata 
                                                                       >> 0xfU)))) 
                                                        << 0x10U) 
                                                       | (0xffffU 
                                                          & vlSelf->io_ram_rdata))
                                                       : 
                                                      (0xffffU 
                                                       & vlSelf->io_ram_rdata))
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__MEM__DOT__signed_)
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->io_ram_rdata 
                                                                     >> 0x1fU))) 
                                                         << 0x10U) 
                                                        | (vlSelf->io_ram_rdata 
                                                           >> 0x10U))
                                                        : 
                                                       (vlSelf->io_ram_rdata 
                                                        >> 0x10U))
                                                       : 0U))
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__MEM__DOT__width))
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                                       ? vlSelf->io_ram_rdata
                                                       : 0U)
                                                      : 0U)))
                                                : vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data);
    vlSelf->top__DOT__csr__DOT__mip_ssip = ((IData)(vlSelf->io_soft) 
                                            | (IData)(vlSelf->top__DOT__csr__DOT__mipReal_ssip));
    vlSelf->top__DOT__csr__DOT__mip_stip = ((IData)(vlSelf->io_timer) 
                                            | (IData)(vlSelf->top__DOT__csr__DOT__mipReal_stip));
    vlSelf->top__DOT__csr__DOT__mip_seip = ((IData)(vlSelf->io_extern) 
                                            | (IData)(vlSelf->top__DOT__csr__DOT__mipReal_seip));
    vlSelf->top__DOT__fetch__DOT__bpu_io_prdt_addr_o 
        = (vlSelf->top__DOT__fetch__DOT__pc + ((0x63U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->io_rom_rdata))
                                                ? vlSelf->top__DOT__fetch__DOT__bpu__DOT__inst_b_type_imm
                                                : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->io_rom_rdata))
                                                    ? 
                                                   ((((vlSelf->io_rom_rdata 
                                                       >> 0x1fU)
                                                       ? 0xfffU
                                                       : 0U) 
                                                     << 0x14U) 
                                                    | ((0xff000U 
                                                        & vlSelf->io_rom_rdata) 
                                                       | ((0x800U 
                                                           & (vlSelf->io_rom_rdata 
                                                              >> 9U)) 
                                                          | (0x7feU 
                                                             & (vlSelf->io_rom_rdata 
                                                                >> 0x14U)))))
                                                    : vlSelf->top__DOT__fetch__DOT__bpu__DOT__inst_b_type_imm)));
    vlSelf->top__DOT__EX_MEM_io_stallPrev = ((IData)(vlSelf->top__DOT__resoler_io_csrflag) 
                                             | (IData)(vlSelf->top__DOT__MEM_io_stallReq));
    vlSelf->top__DOT__ID_io_stallid = ((IData)(vlSelf->top__DOT__MEM_io_stallReq) 
                                       | ((IData)(vlSelf->top__DOT__resoler_io_csrflag) 
                                          | (IData)(vlSelf->top__DOT__resoler_io_loadflag)));
    vlSelf->top__DOT__IF_ID_io_stallPrev = (1U & ((IData)(vlSelf->top__DOT__MEM_io_stallReq) 
                                                  | ((IData)(vlSelf->top__DOT__resoler_io_csrflag) 
                                                     | ((~ (IData)(vlSelf->io_rom_valid)) 
                                                        | (IData)(vlSelf->top__DOT__resoler_io_loadflag)))));
    vlSelf->top__DOT__MEM_io_except_excValue = ((5U 
                                                 == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                                 ? vlSelf->top__DOT__EX_MEM__DOT__ff_inst
                                                 : 
                                                ((IData)(vlSelf->top__DOT__MEM__DOT__memExcept)
                                                  ? vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data
                                                  : vlSelf->top__DOT__EX_MEM__DOT__ff_excValue));
    vlSelf->top__DOT__ID_io_read2_data = (((IData)(vlSelf->top__DOT__ID_io_read2_en) 
                                           & (0U != (IData)(vlSelf->top__DOT__ID__DOT__rs2)))
                                           ? (((IData)(vlSelf->top__DOT__ID_EX__DOT__ff_regWen) 
                                               & (IData)(vlSelf->top__DOT__resoler__DOT___T_10))
                                               ? (IData)(vlSelf->top__DOT__EX__DOT__result)
                                               : (((IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_reg_en) 
                                                   & ((IData)(vlSelf->top__DOT__ID__DOT__rs2) 
                                                      == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_reg_addr)))
                                                   ? vlSelf->top__DOT__MEM_io_mem_o_reg_data
                                                   : 
                                                  (((IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_en) 
                                                    & ((IData)(vlSelf->top__DOT__ID__DOT__rs2) 
                                                       == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr)))
                                                    ? vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__ID_io_read2_en)
                                                     ? 
                                                    ((0x1fU 
                                                      == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                      ? vlSelf->top__DOT__regfile__DOT__regfile_31
                                                      : 
                                                     ((0x1eU 
                                                       == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                       ? vlSelf->top__DOT__regfile__DOT__regfile_30
                                                       : 
                                                      ((0x1dU 
                                                        == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                        ? vlSelf->top__DOT__regfile__DOT__regfile_29
                                                        : 
                                                       ((0x1cU 
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
                                                     : 0U))))
                                           : 0U);
    vlSelf->top__DOT__ID_io_read1_data = (((IData)(vlSelf->top__DOT__ID__DOT__regEn1) 
                                           & (0U != (IData)(vlSelf->top__DOT__ID__DOT__rs1)))
                                           ? (((IData)(vlSelf->top__DOT__ID_EX__DOT__ff_regWen) 
                                               & (IData)(vlSelf->top__DOT__resoler__DOT___T_2))
                                               ? (IData)(vlSelf->top__DOT__EX__DOT__result)
                                               : (((IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_reg_en) 
                                                   & ((IData)(vlSelf->top__DOT__ID__DOT__rs1) 
                                                      == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_reg_addr)))
                                                   ? vlSelf->top__DOT__MEM_io_mem_o_reg_data
                                                   : 
                                                  (((IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_en) 
                                                    & ((IData)(vlSelf->top__DOT__ID__DOT__rs1) 
                                                       == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr)))
                                                    ? vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__ID__DOT__regEn1)
                                                     ? 
                                                    ((0x1fU 
                                                      == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                      ? vlSelf->top__DOT__regfile__DOT__regfile_31
                                                      : 
                                                     ((0x1eU 
                                                       == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                       ? vlSelf->top__DOT__regfile__DOT__regfile_30
                                                       : 
                                                      ((0x1dU 
                                                        == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                        ? vlSelf->top__DOT__regfile__DOT__regfile_29
                                                        : 
                                                       ((0x1cU 
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
                                                     : 0U))))
                                           : 0U);
    vlSelf->top__DOT__csr__DOT___T_92 = (((IData)(vlSelf->top__DOT__csr__DOT__mip_seip) 
                                          << 9U) | 
                                         (((IData)(vlSelf->top__DOT__csr__DOT__mip_stip) 
                                           << 5U) | 
                                          ((IData)(vlSelf->top__DOT__csr__DOT__mip_ssip) 
                                           << 1U)));
    top__DOT__csr__DOT___T_142 = (((IData)(vlSelf->io_extern) 
                                   << 0xbU) | (((IData)(vlSelf->top__DOT__csr__DOT__mip_seip) 
                                                << 9U) 
                                               | (((IData)(vlSelf->io_timer) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->top__DOT__csr__DOT__mip_stip) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->io_soft) 
                                                         << 3U) 
                                                        | ((IData)(vlSelf->top__DOT__csr__DOT__mip_ssip) 
                                                           << 1U))))));
    vlSelf->top__DOT__ID__DOT__branchteke = ((1U == (IData)(vlSelf->top__DOT__ID__DOT__branchOp)) 
                                             | ((2U 
                                                 == (IData)(vlSelf->top__DOT__ID__DOT__branchOp))
                                                 ? 
                                                (vlSelf->top__DOT__ID_io_read1_data 
                                                 == vlSelf->top__DOT__ID_io_read2_data)
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->top__DOT__ID__DOT__branchOp))
                                                  ? 
                                                 (vlSelf->top__DOT__ID_io_read1_data 
                                                  != vlSelf->top__DOT__ID_io_read2_data)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__ID__DOT__branchOp))
                                                   ? 
                                                  VL_LTS_III(32, vlSelf->top__DOT__ID_io_read1_data, vlSelf->top__DOT__ID_io_read2_data)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__ID__DOT__branchOp))
                                                    ? 
                                                   VL_GTES_III(32, vlSelf->top__DOT__ID_io_read1_data, vlSelf->top__DOT__ID_io_read2_data)
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->top__DOT__ID__DOT__branchOp))
                                                     ? 
                                                    (vlSelf->top__DOT__ID_io_read1_data 
                                                     < vlSelf->top__DOT__ID_io_read2_data)
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->top__DOT__ID__DOT__branchOp)) 
                                                     & (vlSelf->top__DOT__ID_io_read1_data 
                                                        >= vlSelf->top__DOT__ID_io_read2_data))))))));
    vlSelf->top__DOT__ID__DOT___T_791 = ((1U == (IData)(vlSelf->top__DOT__ID__DOT__branchOp))
                                          ? ((IData)(vlSelf->top__DOT__ID__DOT__regEn1)
                                              ? ((QData)((IData)(
                                                                 (vlSelf->top__DOT__ID_io_read1_data 
                                                                  + vlSelf->top__DOT__ID__DOT___GEN_2))) 
                                                 << 1U)
                                              : (QData)((IData)(
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
                                                                              << 1U)))))))))
                                          : (QData)((IData)(
                                                            (vlSelf->top__DOT__IF_ID__DOT__ff_pc 
                                                             + 
                                                             (((- (IData)((IData)(vlSelf->top__DOT__ID__DOT____VdfgTmp_h8afae4a5__0))) 
                                                               << 0xdU) 
                                                              | (((IData)(vlSelf->top__DOT__ID__DOT____VdfgTmp_h8afae4a5__0) 
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
                                                                          << 1U)))))))));
    vlSelf->top__DOT__csr__DOT__flagIntS = (vlSelf->top__DOT__csr__DOT___T_92 
                                            & vlSelf->top__DOT__csr__DOT___T_82);
    vlSelf->top__DOT__csr__DOT___T_235 = ((0xf13U == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                           ? 0U : (
                                                   (0xf14U 
                                                    == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                    ? 0U
                                                    : 
                                                   ((0x300U 
                                                     == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                     ? vlSelf->top__DOT__csr__DOT___T_31
                                                     : 
                                                    ((0x301U 
                                                      == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                      ? 0x40141101U
                                                      : 
                                                     ((0x302U 
                                                       == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                       ? vlSelf->top__DOT__csr__DOT__medeleg_data
                                                       : 
                                                      ((0x303U 
                                                        == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                        ? vlSelf->top__DOT__csr__DOT__mideleg_data
                                                        : 
                                                       ((0x304U 
                                                         == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                         ? vlSelf->top__DOT__csr__DOT___T_47
                                                         : 
                                                        ((0x305U 
                                                          == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                          ? vlSelf->top__DOT__csr__DOT___T_129
                                                          : 
                                                         ((0x306U 
                                                           == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                           ? 0U
                                                           : 
                                                          ((0x340U 
                                                            == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                            ? vlSelf->top__DOT__csr__DOT__mscratch_data
                                                            : 
                                                           ((0x341U 
                                                             == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                             ? vlSelf->top__DOT__csr__DOT__mepc_data
                                                             : 
                                                            ((0x342U 
                                                              == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                              ? vlSelf->top__DOT__csr__DOT___T_130
                                                              : 
                                                             ((0x343U 
                                                               == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                               ? vlSelf->top__DOT__csr__DOT__mtval_data
                                                               : 
                                                              ((0x344U 
                                                                == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                                ? top__DOT__csr__DOT___T_142
                                                                : 
                                                               ((0xb00U 
                                                                 == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                                 ? (IData)(vlSelf->top__DOT__csr__DOT__mcycle_data)
                                                                 : 
                                                                ((0xb02U 
                                                                  == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                                  ? (IData)(vlSelf->top__DOT__csr__DOT__minstret_data)
                                                                  : 
                                                                 ((0xb80U 
                                                                   == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                                   ? (IData)(
                                                                             (vlSelf->top__DOT__csr__DOT__mcycle_data 
                                                                              >> 0x20U))
                                                                   : 
                                                                  ((0xb82U 
                                                                    == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                                    ? (IData)(
                                                                              (vlSelf->top__DOT__csr__DOT__minstret_data 
                                                                               >> 0x20U))
                                                                    : 0U))))))))))))))))));
    vlSelf->top__DOT__csr__DOT__flagIntM = (top__DOT__csr__DOT___T_142 
                                            & vlSelf->top__DOT__csr__DOT___T_47);
    top__DOT__csr__DOT___T_422 = ((0xf13U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                   ? 0U : ((0xf14U 
                                            == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                            ? 0U : 
                                           ((0x300U 
                                             == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                             ? vlSelf->top__DOT__csr__DOT___T_31
                                             : ((0x301U 
                                                 == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                 ? 0x40141101U
                                                 : 
                                                ((0x302U 
                                                  == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                  ? vlSelf->top__DOT__csr__DOT__medeleg_data
                                                  : 
                                                 ((0x303U 
                                                   == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                   ? vlSelf->top__DOT__csr__DOT__mideleg_data
                                                   : 
                                                  ((0x304U 
                                                    == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                    ? vlSelf->top__DOT__csr__DOT___T_47
                                                    : 
                                                   ((0x305U 
                                                     == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                     ? vlSelf->top__DOT__csr__DOT___T_129
                                                     : 
                                                    ((0x306U 
                                                      == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                      ? 0U
                                                      : 
                                                     ((0x340U 
                                                       == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                       ? vlSelf->top__DOT__csr__DOT__mscratch_data
                                                       : 
                                                      ((0x341U 
                                                        == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                        ? vlSelf->top__DOT__csr__DOT__mepc_data
                                                        : 
                                                       ((0x342U 
                                                         == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                         ? vlSelf->top__DOT__csr__DOT___T_130
                                                         : 
                                                        ((0x343U 
                                                          == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                          ? vlSelf->top__DOT__csr__DOT__mtval_data
                                                          : 
                                                         ((0x344U 
                                                           == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                           ? top__DOT__csr__DOT___T_142
                                                           : 
                                                          ((0xb00U 
                                                            == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                            ? (IData)(vlSelf->top__DOT__csr__DOT__mcycle_data)
                                                            : 
                                                           ((0xb02U 
                                                             == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                             ? (IData)(vlSelf->top__DOT__csr__DOT__minstret_data)
                                                             : 
                                                            ((0xb80U 
                                                              == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                              ? (IData)(
                                                                        (vlSelf->top__DOT__csr__DOT__mcycle_data 
                                                                         >> 0x20U))
                                                              : 
                                                             ((0xb82U 
                                                               == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                               ? (IData)(
                                                                         (vlSelf->top__DOT__csr__DOT__minstret_data 
                                                                          >> 0x20U))
                                                               : 0U))))))))))))))))));
    vlSelf->top__DOT__ID__DOT__addrFault = ((IData)(vlSelf->top__DOT__ID__DOT__branchteke) 
                                            & (0U != 
                                               ((0U 
                                                 == (IData)(vlSelf->top__DOT__ID__DOT__branchOp))
                                                 ? 0U
                                                 : 
                                                (3U 
                                                 & (IData)(vlSelf->top__DOT__ID__DOT___T_791)))));
    vlSelf->top__DOT__ID__DOT__takepc = ((0U == (IData)(vlSelf->top__DOT__ID__DOT__branchOp))
                                          ? 0ULL : vlSelf->top__DOT__ID__DOT___T_791);
    vlSelf->top__DOT__csr__DOT__intCauseS = ((0x200U 
                                              & vlSelf->top__DOT__csr__DOT__flagIntS)
                                              ? 9U : 
                                             ((2U & vlSelf->top__DOT__csr__DOT__flagIntS)
                                               ? 1U
                                               : 5U));
    vlSelf->top__DOT__csr__DOT__hasIntM = (((1U >= (IData)(vlSelf->top__DOT__csr__DOT__mode)) 
                                            | (IData)(vlSelf->top__DOT__csr__DOT__mstatus_mie)) 
                                           & (0U != 
                                              ((~ vlSelf->top__DOT__csr__DOT__mideleg_data) 
                                               & vlSelf->top__DOT__csr__DOT__flagIntM)));
    vlSelf->top__DOT__csr__DOT__csrData = ((0xc00U 
                                            == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                            ? (IData)(vlSelf->top__DOT__csr__DOT__mcycle_data)
                                            : ((0xc02U 
                                                == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                ? (IData)(vlSelf->top__DOT__csr__DOT__minstret_data)
                                                : (
                                                   (0xc80U 
                                                    == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                    ? (IData)(
                                                              (vlSelf->top__DOT__csr__DOT__mcycle_data 
                                                               >> 0x20U))
                                                    : 
                                                   ((0xc82U 
                                                     == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                     ? (IData)(
                                                               (vlSelf->top__DOT__csr__DOT__minstret_data 
                                                                >> 0x20U))
                                                     : 
                                                    ((0x100U 
                                                      == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                      ? vlSelf->top__DOT__csr__DOT___T_74
                                                      : 
                                                     ((0x104U 
                                                       == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                       ? vlSelf->top__DOT__csr__DOT___T_82
                                                       : 
                                                      ((0x105U 
                                                        == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                        ? vlSelf->top__DOT__csr__DOT___T_83
                                                        : 
                                                       ((0x106U 
                                                         == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                         ? 0U
                                                         : 
                                                        ((0x140U 
                                                          == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                          ? vlSelf->top__DOT__csr__DOT__sscratch_data
                                                          : 
                                                         ((0x141U 
                                                           == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                           ? vlSelf->top__DOT__csr__DOT__sepc_data
                                                           : 
                                                          ((0x142U 
                                                            == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                            ? vlSelf->top__DOT__csr__DOT___T_84
                                                            : 
                                                           ((0x143U 
                                                             == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                             ? vlSelf->top__DOT__csr__DOT__stval_data
                                                             : 
                                                            ((0x144U 
                                                              == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                              ? vlSelf->top__DOT__csr__DOT___T_92
                                                              : 
                                                             ((0x180U 
                                                               == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                               ? vlSelf->top__DOT__csr__DOT___T_94
                                                               : 
                                                              ((0xf11U 
                                                                == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                                ? 0U
                                                                : 
                                                               ((0xf12U 
                                                                 == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                                 ? 0U
                                                                 : top__DOT__csr__DOT___T_422))))))))))))))));
    vlSelf->top__DOT__ID__DOT__branchmiss = (((IData)(vlSelf->top__DOT__IF_ID__DOT__ff_bpu_take) 
                                              != (IData)(vlSelf->top__DOT__ID__DOT__branchteke)) 
                                             | ((QData)((IData)(vlSelf->top__DOT__IF_ID__DOT__ff_bpu_takepc)) 
                                                != vlSelf->top__DOT__ID__DOT__takepc));
    vlSelf->top__DOT__csr__DOT__hasInt = ((IData)(vlSelf->top__DOT__csr__DOT__hasIntM) 
                                          | (((1U > (IData)(vlSelf->top__DOT__csr__DOT__mode)) 
                                              | ((1U 
                                                  == (IData)(vlSelf->top__DOT__csr__DOT__mode)) 
                                                 & (IData)(vlSelf->top__DOT__csr__DOT__mstatus_sie))) 
                                             & (0U 
                                                != 
                                                (vlSelf->top__DOT__csr__DOT__flagIntS 
                                                 & vlSelf->top__DOT__csr__DOT__mideleg_data))));
    vlSelf->top__DOT__csr__DOT___T_510 = (vlSelf->top__DOT__csr__DOT__csrData 
                                          | vlSelf->top__DOT__MEM_WB__DOT__ff_csr_data);
    vlSelf->top__DOT__csr__DOT___T_512 = ((~ vlSelf->top__DOT__MEM_WB__DOT__ff_csr_data) 
                                          & vlSelf->top__DOT__csr__DOT__csrData);
    vlSelf->top__DOT__csr__DOT__handIntS = ((~ (IData)(vlSelf->top__DOT__csr__DOT__hasIntM)) 
                                            & (IData)(vlSelf->top__DOT__csr__DOT__hasInt));
    vlSelf->top__DOT__MEM__DOT__hasTrap = (((((7U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType)) 
                                              | (5U 
                                                 == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))) 
                                             | ((8U 
                                                 == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType)) 
                                                & (IData)(vlSelf->top__DOT__MEM__DOT__memExcept))) 
                                            | ((1U 
                                                == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType)) 
                                               | (2U 
                                                  == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType)))) 
                                           | (IData)(vlSelf->top__DOT__csr__DOT__hasInt));
    vlSelf->top__DOT__csr__DOT__writeData = ((2U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op))
                                              ? vlSelf->top__DOT__MEM_WB__DOT__ff_csr_data
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op))
                                                  ? vlSelf->top__DOT__MEM_WB__DOT__ff_csr_data
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op))
                                                   ? vlSelf->top__DOT__csr__DOT___T_510
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op))
                                                    ? vlSelf->top__DOT__csr__DOT___T_512
                                                    : 0U))));
    vlSelf->top__DOT__csr__DOT__cause = ((IData)(vlSelf->top__DOT__csr__DOT__hasInt)
                                          ? (0x80000000U 
                                             | ((IData)(vlSelf->top__DOT__csr__DOT__handIntS)
                                                 ? vlSelf->top__DOT__csr__DOT__intCauseS
                                                 : 
                                                ((0x800U 
                                                  & vlSelf->top__DOT__csr__DOT__flagIntM)
                                                  ? 0xbU
                                                  : 
                                                 ((8U 
                                                   & vlSelf->top__DOT__csr__DOT__flagIntM)
                                                   ? 3U
                                                   : 
                                                  ((0x80U 
                                                    & vlSelf->top__DOT__csr__DOT__flagIntM)
                                                    ? 7U
                                                    : vlSelf->top__DOT__csr__DOT__intCauseS)))))
                                          : ((5U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                              ? 2U : 
                                             ((7U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                               ? 0U
                                               : ((1U 
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
                                                     : 0U))))));
    vlSelf->io_ram_en = (1U & (~ (IData)(vlSelf->top__DOT__MEM__DOT__hasTrap)));
    vlSelf->top__DOT__csr__DOT__handExcS = ((~ ((IData)(vlSelf->top__DOT__csr__DOT__mode) 
                                                >> 1U)) 
                                            & (((~ (IData)(vlSelf->top__DOT__csr__DOT__hasInt)) 
                                                & (IData)(vlSelf->top__DOT__MEM__DOT__hasTrap)) 
                                               & (vlSelf->top__DOT__csr__DOT__medeleg_data 
                                                  >> 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                                    ? 2U
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                                     ? 0U
                                                     : 
                                                    ((1U 
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
                                                        : 0U))))))));
    vlSelf->top__DOT__csr__DOT___T_768 = (((QData)((IData)(vlSelf->top__DOT__csr__DOT__writeData)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top__DOT__csr__DOT__mcycle_data)));
    vlSelf->top__DOT__csr__DOT___T_762 = (((QData)((IData)(
                                                           (vlSelf->top__DOT__csr__DOT__mcycle_data 
                                                            >> 0x20U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top__DOT__csr__DOT__writeData)));
    vlSelf->top__DOT__csr__DOT___T_771 = (((QData)((IData)(vlSelf->top__DOT__csr__DOT__writeData)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top__DOT__csr__DOT__minstret_data)));
    vlSelf->top__DOT__csr__DOT___T_765 = (((QData)((IData)(
                                                           (vlSelf->top__DOT__csr__DOT__minstret_data 
                                                            >> 0x20U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top__DOT__csr__DOT__writeData)));
    vlSelf->top__DOT__csr__DOT___T_756 = (((IData)(vlSelf->top__DOT__csr__DOT__mipReal_seip) 
                                           << 9U) | 
                                          (((IData)(vlSelf->top__DOT__csr__DOT__mipReal_stip) 
                                            << 5U) 
                                           | (2U & vlSelf->top__DOT__csr__DOT__writeData)));
    vlSelf->top__DOT__csr__DOT___T_675 = ((0x40000U 
                                           & vlSelf->top__DOT__csr__DOT__writeData) 
                                          | (((IData)(vlSelf->top__DOT__csr__DOT__mstatus_mpp) 
                                              << 0xbU) 
                                             | ((0x100U 
                                                 & vlSelf->top__DOT__csr__DOT__writeData) 
                                                | (((IData)(vlSelf->top__DOT__csr__DOT__mstatus_mpie) 
                                                    << 7U) 
                                                   | ((0x20U 
                                                       & vlSelf->top__DOT__csr__DOT__writeData) 
                                                      | (((IData)(vlSelf->top__DOT__csr__DOT__mstatus_mie) 
                                                          << 3U) 
                                                         | (2U 
                                                            & vlSelf->top__DOT__csr__DOT__writeData)))))));
    vlSelf->top__DOT__csr__DOT___T_717 = (((IData)(vlSelf->top__DOT__csr__DOT__mie_meie) 
                                           << 0xbU) 
                                          | ((0x200U 
                                              & vlSelf->top__DOT__csr__DOT__writeData) 
                                             | (((IData)(vlSelf->top__DOT__csr__DOT__mie_mtie) 
                                                 << 7U) 
                                                | ((0x20U 
                                                    & vlSelf->top__DOT__csr__DOT__writeData) 
                                                   | (((IData)(vlSelf->top__DOT__csr__DOT__mie_msie) 
                                                       << 3U) 
                                                      | (2U 
                                                         & vlSelf->top__DOT__csr__DOT__writeData))))));
    vlSelf->top__DOT__csr__DOT___T_605 = ((IData)(vlSelf->top__DOT__csr__DOT__handIntS) 
                                          | (IData)(vlSelf->top__DOT__csr__DOT__handExcS));
    vlSelf->top__DOT__csr__DOT___GEN_67 = ((IData)(vlSelf->top__DOT__csr__DOT___T_605) 
                                           & (IData)(vlSelf->top__DOT__csr__DOT__mstatus_mie));
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ top__DOT__ID__DOT___T_153;
    top__DOT__ID__DOT___T_153 = 0;
    CData/*0:0*/ top__DOT__ID__DOT___T_171;
    top__DOT__ID__DOT___T_171 = 0;
    CData/*0:0*/ top__DOT__ID__DOT___T_188;
    top__DOT__ID__DOT___T_188 = 0;
    CData/*0:0*/ top__DOT__ID__DOT___T_229;
    top__DOT__ID__DOT___T_229 = 0;
    CData/*0:0*/ top__DOT__ID__DOT___T_246;
    top__DOT__ID__DOT___T_246 = 0;
    CData/*0:0*/ top__DOT__ID__DOT___T_276;
    top__DOT__ID__DOT___T_276 = 0;
    CData/*3:0*/ top__DOT__ID__DOT___T_326;
    top__DOT__ID__DOT___T_326 = 0;
    CData/*3:0*/ top__DOT__ID__DOT___T_341;
    top__DOT__ID__DOT___T_341 = 0;
    CData/*3:0*/ top__DOT__ID__DOT___T_356;
    top__DOT__ID__DOT___T_356 = 0;
    CData/*3:0*/ top__DOT__ID__DOT___T_389;
    top__DOT__ID__DOT___T_389 = 0;
    CData/*3:0*/ top__DOT__ID__DOT___T_404;
    top__DOT__ID__DOT___T_404 = 0;
    CData/*3:0*/ top__DOT__ID__DOT___T_419;
    top__DOT__ID__DOT___T_419 = 0;
    CData/*3:0*/ top__DOT__ID__DOT___T_442;
    top__DOT__ID__DOT___T_442 = 0;
    CData/*3:0*/ top__DOT__ID__DOT___T_457;
    top__DOT__ID__DOT___T_457 = 0;
    CData/*2:0*/ top__DOT__ID__DOT___T_529;
    top__DOT__ID__DOT___T_529 = 0;
    CData/*3:0*/ top__DOT__ID__DOT___T_558;
    top__DOT__ID__DOT___T_558 = 0;
    CData/*3:0*/ top__DOT__ID__DOT___T_573;
    top__DOT__ID__DOT___T_573 = 0;
    CData/*2:0*/ top__DOT__ID__DOT___T_629;
    top__DOT__ID__DOT___T_629 = 0;
    CData/*2:0*/ top__DOT__ID__DOT___T_644;
    top__DOT__ID__DOT___T_644 = 0;
    CData/*3:0*/ top__DOT__ID__DOT___T_732;
    top__DOT__ID__DOT___T_732 = 0;
    CData/*3:0*/ top__DOT__ID__DOT___T_747;
    top__DOT__ID__DOT___T_747 = 0;
    IData/*31:0*/ top__DOT__csr__DOT___T_142;
    top__DOT__csr__DOT___T_142 = 0;
    CData/*0:0*/ top__DOT__csr__DOT___T_267;
    top__DOT__csr__DOT___T_267 = 0;
    IData/*31:0*/ top__DOT__csr__DOT___T_422;
    top__DOT__csr__DOT___T_422 = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->top__DOT__IF_ID__DOT__ff_bpu_take = 0U;
        vlSelf->top__DOT__IF_ID__DOT__ff_bpu_takepc = 0U;
        vlSelf->top__DOT__EX_MEM__DOT__ff_load = 0U;
        vlSelf->top__DOT__ID_EX__DOT__ff_csren = 0U;
        vlSelf->top__DOT__EX_MEM__DOT__ff_lsuData = 0U;
        vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data = 0U;
        vlSelf->top__DOT__EX_MEM__DOT__ff_excValue = 0U;
        vlSelf->top__DOT__ID_EX__DOT__ff_opr1 = 0U;
        vlSelf->top__DOT__ID_EX__DOT__ff_opr2 = 0U;
        vlSelf->top__DOT__ID_EX__DOT__ff_aluOp = 0U;
        vlSelf->top__DOT__EX_MEM__DOT__ff_lsuOp = 0U;
        vlSelf->top__DOT__csr__DOT__satp_ppn = 0U;
        vlSelf->top__DOT__csr__DOT__satp_mode = 0U;
        vlSelf->top__DOT__csr__DOT__medeleg_data = 0U;
        vlSelf->top__DOT__csr__DOT__scause_int = 0U;
        vlSelf->top__DOT__csr__DOT__scause_code = 0U;
        vlSelf->top__DOT__csr__DOT__mcause_int = 0U;
        vlSelf->top__DOT__csr__DOT__mcause_code = 0U;
        vlSelf->top__DOT__csr__DOT__mstatus_sum = 0U;
        vlSelf->top__DOT__csr__DOT__mie_meie = 0U;
        vlSelf->top__DOT__csr__DOT__mie_msie = 0U;
        vlSelf->top__DOT__csr__DOT__mie_mtie = 0U;
        vlSelf->top__DOT__csr__DOT__mideleg_data = 0U;
        vlSelf->top__DOT__MEM_WB__DOT__ff_reg_en = 0U;
        vlSelf->top__DOT__csr__DOT__mie_seie = 0U;
        vlSelf->top__DOT__csr__DOT__mie_stie = 0U;
        vlSelf->top__DOT__csr__DOT__mie_ssie = 0U;
        vlSelf->top__DOT__csr__DOT__mipReal_ssip = 0U;
        vlSelf->top__DOT__csr__DOT__mipReal_stip = 0U;
        vlSelf->top__DOT__csr__DOT__mipReal_seip = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_27 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_26 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_29 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_31 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_28 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_30 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_22 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_23 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_24 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_25 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_9 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_7 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_11 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_2 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_10 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_21 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_1 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_19 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_5 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_20 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_6 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_14 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_8 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_0 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_3 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_12 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_4 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_13 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_15 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_16 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_17 = 0U;
        vlSelf->top__DOT__regfile__DOT__regfile_18 = 0U;
        vlSelf->top__DOT__csr__DOT__mepc_data = 0U;
        vlSelf->top__DOT__csr__DOT__mstatus_mpp = 0U;
        vlSelf->top__DOT__csr__DOT__mstatus_spp = 0U;
        vlSelf->top__DOT__csr__DOT__mstatus_mpie = 0U;
        vlSelf->top__DOT__csr__DOT__mscratch_data = 0U;
        vlSelf->top__DOT__csr__DOT__mtval_data = 0U;
        vlSelf->top__DOT__csr__DOT__mstatus_spie = 0U;
        vlSelf->top__DOT__EX_MEM__DOT__ff_inst = 0U;
        vlSelf->top__DOT__EX_MEM__DOT__ff_excType = 0U;
        vlSelf->top__DOT__ID_EX__DOT__ff_csrrData = 0U;
        vlSelf->top__DOT__ID_EX__DOT__ff_lsuData = 0U;
        vlSelf->top__DOT__ID_EX__DOT__ff_excValue = 0U;
        vlSelf->top__DOT__ID_EX__DOT__ff_lsuOp = 0U;
        vlSelf->top__DOT__EX_MEM__DOT__ff_reg_en = 0U;
        vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data = 0U;
        vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr = 0U;
        vlSelf->top__DOT__csr__DOT__mstatus_mie = 0U;
        vlSelf->top__DOT__csr__DOT__mstatus_sie = 0U;
        vlSelf->top__DOT__ID_EX__DOT__ff_excType = 0U;
        vlSelf->top__DOT__csr__DOT__mcycle_data = 0ULL;
        vlSelf->top__DOT__csr__DOT__sepc_data = 0U;
        vlSelf->top__DOT__csr__DOT__sscratch_data = 0U;
        vlSelf->top__DOT__csr__DOT__stval_data = 0U;
        vlSelf->top__DOT__csr__DOT__minstret_data = 0ULL;
        vlSelf->top__DOT__ID_EX__DOT__ff_regWen = 0U;
        vlSelf->top__DOT__EX_MEM__DOT__ff_reg_addr = 0U;
        vlSelf->top__DOT__csr__DOT__mode = 3U;
        vlSelf->top__DOT__IF_ID__DOT__ff_valid = 0U;
        vlSelf->top__DOT__IF_ID__DOT__ff_misaligned = 0U;
        vlSelf->top__DOT__EX_MEM__DOT__ff_currentPc = 0U;
        vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op = 0U;
        vlSelf->top__DOT__MEM_WB__DOT__ff_csr_data = 0U;
        vlSelf->top__DOT__MEM_WB__DOT__ff_csr_retired = 0U;
        vlSelf->top__DOT__ID_EX__DOT__ff_regWaddr = 0U;
        vlSelf->top__DOT__fetch__DOT__pc = 0x80000000U;
        vlSelf->top__DOT__ID_EX__DOT__ff_currentPc = 0U;
        vlSelf->top__DOT__EX_MEM__DOT__ff_csr_op = 0U;
        vlSelf->top__DOT__EX_MEM__DOT__ff_csr_data = 0U;
        vlSelf->top__DOT__EX_MEM__DOT__ff_csr_retired = 0U;
        vlSelf->top__DOT__csr__DOT__stvec_base = 0U;
        vlSelf->top__DOT__csr__DOT__stvec_mode = 0U;
        vlSelf->top__DOT__csr__DOT__mtvec_base = 0U;
        vlSelf->top__DOT__csr__DOT__mtvec_mode = 0U;
        vlSelf->top__DOT__IF_ID__DOT__ff_pc = 0U;
        vlSelf->top__DOT__ID_EX__DOT__ff_csrOp = 0U;
        vlSelf->top__DOT__ID_EX__DOT__ff_csrwData = 0U;
        vlSelf->top__DOT__ID_EX__DOT__ff_inst = 0U;
        vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr = 0U;
    } else {
        if (vlSelf->top__DOT__regfile__DOT___T_4) {
            if ((0x1bU == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_27 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((0x1aU == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_26 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((0x1dU == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_29 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((0x1fU == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_31 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((0x1cU == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_28 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((0x1eU == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_30 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((0x16U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_22 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((0x17U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_23 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((0x18U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_24 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((0x19U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_25 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((9U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_9 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((7U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_7 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((0xbU == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_11 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((2U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_2 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((0xaU == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_10 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((0x15U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_21 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((1U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_1 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((0x13U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_19 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((5U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_5 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((0x14U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_20 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((6U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_6 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((0xeU == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_14 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((8U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_8 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((0U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_0 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((3U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_3 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((0xcU == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_12 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((4U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_4 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((0xdU == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_13 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((0xfU == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_15 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((0x10U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_16 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((0x11U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_17 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
            if ((0x12U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr))) {
                vlSelf->top__DOT__regfile__DOT__regfile_18 
                    = vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data;
            }
        }
        if (vlSelf->top__DOT__resoler__DOT___T_35) {
            if ((0x180U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))) {
                vlSelf->top__DOT__csr__DOT__satp_ppn 
                    = (0x3fffffU & vlSelf->top__DOT__csr__DOT__writeData);
                vlSelf->top__DOT__csr__DOT__satp_mode 
                    = (vlSelf->top__DOT__csr__DOT__writeData 
                       >> 0x1fU);
            }
            if ((0x302U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))) {
                vlSelf->top__DOT__csr__DOT__medeleg_data 
                    = (0xb35dU & vlSelf->top__DOT__csr__DOT__writeData);
            }
            if ((0x142U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))) {
                vlSelf->top__DOT__csr__DOT__scause_int 
                    = (vlSelf->top__DOT__csr__DOT__writeData 
                       >> 0x1fU);
                vlSelf->top__DOT__csr__DOT__scause_code 
                    = (0xfU & vlSelf->top__DOT__csr__DOT__writeData);
            }
            if ((0x342U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))) {
                vlSelf->top__DOT__csr__DOT__mcause_int 
                    = (vlSelf->top__DOT__csr__DOT__writeData 
                       >> 0x1fU);
                vlSelf->top__DOT__csr__DOT__mcause_code 
                    = (0xfU & vlSelf->top__DOT__csr__DOT__writeData);
            }
            if ((0x300U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))) {
                vlSelf->top__DOT__csr__DOT__mstatus_sum 
                    = (1U & (vlSelf->top__DOT__csr__DOT__writeData 
                             >> 0x12U));
                vlSelf->top__DOT__csr__DOT__mstatus_mpp 
                    = (3U & (vlSelf->top__DOT__csr__DOT__writeData 
                             >> 0xbU));
                vlSelf->top__DOT__csr__DOT__mstatus_spp 
                    = (1U & (vlSelf->top__DOT__csr__DOT__writeData 
                             >> 8U));
                vlSelf->top__DOT__csr__DOT__mstatus_mpie 
                    = (1U & (vlSelf->top__DOT__csr__DOT__writeData 
                             >> 7U));
                vlSelf->top__DOT__csr__DOT__mstatus_spie 
                    = (1U & (vlSelf->top__DOT__csr__DOT__writeData 
                             >> 5U));
                vlSelf->top__DOT__csr__DOT__mstatus_mie 
                    = (1U & (vlSelf->top__DOT__csr__DOT__writeData 
                             >> 3U));
                vlSelf->top__DOT__csr__DOT__mstatus_sie 
                    = (1U & (vlSelf->top__DOT__csr__DOT__writeData 
                             >> 1U));
            } else if ((0x100U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))) {
                vlSelf->top__DOT__csr__DOT__mstatus_sum 
                    = (1U & (vlSelf->top__DOT__csr__DOT___T_675 
                             >> 0x12U));
                vlSelf->top__DOT__csr__DOT__mstatus_mpp 
                    = (3U & (vlSelf->top__DOT__csr__DOT___T_675 
                             >> 0xbU));
                vlSelf->top__DOT__csr__DOT__mstatus_spp 
                    = (1U & (vlSelf->top__DOT__csr__DOT___T_675 
                             >> 8U));
                vlSelf->top__DOT__csr__DOT__mstatus_mpie 
                    = (1U & (vlSelf->top__DOT__csr__DOT___T_675 
                             >> 7U));
                vlSelf->top__DOT__csr__DOT__mstatus_spie 
                    = (1U & (vlSelf->top__DOT__csr__DOT___T_675 
                             >> 5U));
                vlSelf->top__DOT__csr__DOT__mstatus_mie 
                    = (1U & (vlSelf->top__DOT__csr__DOT___T_675 
                             >> 3U));
                vlSelf->top__DOT__csr__DOT__mstatus_sie 
                    = (1U & (vlSelf->top__DOT__csr__DOT___T_675 
                             >> 1U));
            }
            if ((0x304U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))) {
                vlSelf->top__DOT__csr__DOT__mie_meie 
                    = (1U & (vlSelf->top__DOT__csr__DOT__writeData 
                             >> 0xbU));
                vlSelf->top__DOT__csr__DOT__mie_msie 
                    = (1U & (vlSelf->top__DOT__csr__DOT__writeData 
                             >> 3U));
                vlSelf->top__DOT__csr__DOT__mie_mtie 
                    = (1U & (vlSelf->top__DOT__csr__DOT__writeData 
                             >> 7U));
                vlSelf->top__DOT__csr__DOT__mie_seie 
                    = (1U & (vlSelf->top__DOT__csr__DOT__writeData 
                             >> 9U));
                vlSelf->top__DOT__csr__DOT__mie_stie 
                    = (1U & (vlSelf->top__DOT__csr__DOT__writeData 
                             >> 5U));
                vlSelf->top__DOT__csr__DOT__mie_ssie 
                    = (1U & (vlSelf->top__DOT__csr__DOT__writeData 
                             >> 1U));
            } else if ((0x104U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))) {
                vlSelf->top__DOT__csr__DOT__mie_meie 
                    = (1U & (vlSelf->top__DOT__csr__DOT___T_717 
                             >> 0xbU));
                vlSelf->top__DOT__csr__DOT__mie_msie 
                    = (1U & (vlSelf->top__DOT__csr__DOT___T_717 
                             >> 3U));
                vlSelf->top__DOT__csr__DOT__mie_mtie 
                    = (1U & (vlSelf->top__DOT__csr__DOT___T_717 
                             >> 7U));
                vlSelf->top__DOT__csr__DOT__mie_seie 
                    = (1U & (vlSelf->top__DOT__csr__DOT___T_717 
                             >> 9U));
                vlSelf->top__DOT__csr__DOT__mie_stie 
                    = (1U & (vlSelf->top__DOT__csr__DOT___T_717 
                             >> 5U));
                vlSelf->top__DOT__csr__DOT__mie_ssie 
                    = (1U & (vlSelf->top__DOT__csr__DOT___T_717 
                             >> 1U));
            }
            if ((0x303U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))) {
                vlSelf->top__DOT__csr__DOT__mideleg_data 
                    = (0x222U & vlSelf->top__DOT__csr__DOT__writeData);
            }
            if ((0x344U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))) {
                vlSelf->top__DOT__csr__DOT__mipReal_ssip 
                    = (1U & (vlSelf->top__DOT__csr__DOT__writeData 
                             >> 1U));
                vlSelf->top__DOT__csr__DOT__mipReal_stip 
                    = (1U & (vlSelf->top__DOT__csr__DOT__writeData 
                             >> 5U));
                vlSelf->top__DOT__csr__DOT__mipReal_seip 
                    = (1U & (vlSelf->top__DOT__csr__DOT__writeData 
                             >> 9U));
            } else if ((0x144U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))) {
                vlSelf->top__DOT__csr__DOT__mipReal_ssip 
                    = (1U & (vlSelf->top__DOT__csr__DOT___T_756 
                             >> 1U));
                vlSelf->top__DOT__csr__DOT__mipReal_stip 
                    = (1U & (vlSelf->top__DOT__csr__DOT___T_756 
                             >> 5U));
                vlSelf->top__DOT__csr__DOT__mipReal_seip 
                    = (1U & (vlSelf->top__DOT__csr__DOT___T_756 
                             >> 9U));
            }
            if ((0x341U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))) {
                vlSelf->top__DOT__csr__DOT__mepc_data 
                    = (0xfffffffcU & vlSelf->top__DOT__csr__DOT__writeData);
            }
            if ((0x340U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))) {
                vlSelf->top__DOT__csr__DOT__mscratch_data 
                    = ((2U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op))
                        ? vlSelf->top__DOT__MEM_WB__DOT__ff_csr_data
                        : ((3U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op))
                            ? vlSelf->top__DOT__MEM_WB__DOT__ff_csr_data
                            : ((4U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op))
                                ? vlSelf->top__DOT__csr__DOT___T_510
                                : ((5U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op))
                                    ? vlSelf->top__DOT__csr__DOT___T_512
                                    : 0U))));
            }
            if ((0x343U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))) {
                vlSelf->top__DOT__csr__DOT__mtval_data 
                    = ((2U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op))
                        ? vlSelf->top__DOT__MEM_WB__DOT__ff_csr_data
                        : ((3U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op))
                            ? vlSelf->top__DOT__MEM_WB__DOT__ff_csr_data
                            : ((4U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op))
                                ? vlSelf->top__DOT__csr__DOT___T_510
                                : ((5U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op))
                                    ? vlSelf->top__DOT__csr__DOT___T_512
                                    : 0U))));
            }
        } else if (vlSelf->top__DOT__MEM__DOT__hasTrap) {
            if (vlSelf->top__DOT__csr__DOT___T_605) {
                vlSelf->top__DOT__csr__DOT__scause_int 
                    = (vlSelf->top__DOT__csr__DOT__cause 
                       >> 0x1fU);
                vlSelf->top__DOT__csr__DOT__scause_code 
                    = (0xfU & vlSelf->top__DOT__csr__DOT__cause);
                vlSelf->top__DOT__csr__DOT__mstatus_spp 
                    = (1U & (IData)(vlSelf->top__DOT__csr__DOT__mode));
                vlSelf->top__DOT__csr__DOT__mstatus_spie 
                    = vlSelf->top__DOT__csr__DOT__mstatus_sie;
                vlSelf->top__DOT__csr__DOT__mstatus_sie = 0U;
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__csr__DOT___T_605)))) {
                vlSelf->top__DOT__csr__DOT__mcause_int 
                    = (vlSelf->top__DOT__csr__DOT__cause 
                       >> 0x1fU);
                vlSelf->top__DOT__csr__DOT__mcause_code 
                    = (0xfU & vlSelf->top__DOT__csr__DOT__cause);
                vlSelf->top__DOT__csr__DOT__mepc_data 
                    = (0xfffffffcU & vlSelf->top__DOT__EX_MEM__DOT__ff_currentPc);
                vlSelf->top__DOT__csr__DOT__mstatus_mpp 
                    = vlSelf->top__DOT__csr__DOT__mode;
                vlSelf->top__DOT__csr__DOT__mstatus_mpie 
                    = vlSelf->top__DOT__csr__DOT__mstatus_mie;
                vlSelf->top__DOT__csr__DOT__mtval_data 
                    = vlSelf->top__DOT__MEM_io_except_excValue;
            }
            vlSelf->top__DOT__csr__DOT__mstatus_mie 
                = vlSelf->top__DOT__csr__DOT___GEN_67;
        }
        if (vlSelf->top__DOT__MEM__DOT__hasTrap) {
            vlSelf->top__DOT__IF_ID__DOT__ff_bpu_take = 0U;
            vlSelf->top__DOT__IF_ID__DOT__ff_bpu_takepc = 0U;
            vlSelf->top__DOT__EX_MEM__DOT__ff_load = 0U;
            vlSelf->top__DOT__ID_EX__DOT__ff_csren = 0U;
            vlSelf->top__DOT__EX_MEM__DOT__ff_lsuData = 0U;
            vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data = 0U;
            vlSelf->top__DOT__EX_MEM__DOT__ff_excValue = 0U;
            vlSelf->top__DOT__ID_EX__DOT__ff_opr1 = 0U;
            vlSelf->top__DOT__ID_EX__DOT__ff_opr2 = 0U;
            vlSelf->top__DOT__ID_EX__DOT__ff_aluOp = 0U;
            vlSelf->top__DOT__EX_MEM__DOT__ff_lsuOp = 0U;
            vlSelf->top__DOT__MEM_WB__DOT__ff_reg_en = 0U;
            vlSelf->top__DOT__EX_MEM__DOT__ff_inst = 0U;
            vlSelf->top__DOT__EX_MEM__DOT__ff_excType = 0U;
            vlSelf->top__DOT__ID_EX__DOT__ff_csrrData = 0U;
        } else {
            if ((1U & (~ (IData)(vlSelf->top__DOT__IF_ID_io_stallPrev)))) {
                vlSelf->top__DOT__IF_ID__DOT__ff_bpu_take 
                    = vlSelf->top__DOT__fetch__DOT__bpu_io_prdt_taken_o;
                vlSelf->top__DOT__IF_ID__DOT__ff_bpu_takepc 
                    = vlSelf->top__DOT__fetch__DOT__bpu_io_prdt_addr_o;
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__EX_MEM_io_stallPrev)))) {
                vlSelf->top__DOT__EX_MEM__DOT__ff_load 
                    = vlSelf->top__DOT__EX_io_ex_o_load;
                vlSelf->top__DOT__EX_MEM__DOT__ff_lsuData 
                    = vlSelf->top__DOT__ID_EX__DOT__ff_lsuData;
                vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data 
                    = (IData)(vlSelf->top__DOT__EX__DOT__result);
                vlSelf->top__DOT__EX_MEM__DOT__ff_excValue 
                    = vlSelf->top__DOT__ID_EX__DOT__ff_excValue;
                vlSelf->top__DOT__EX_MEM__DOT__ff_lsuOp 
                    = vlSelf->top__DOT__ID_EX__DOT__ff_lsuOp;
                vlSelf->top__DOT__EX_MEM__DOT__ff_inst 
                    = vlSelf->top__DOT__ID_EX__DOT__ff_inst;
                vlSelf->top__DOT__EX_MEM__DOT__ff_excType 
                    = vlSelf->top__DOT__ID_EX__DOT__ff_excType;
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__ID_io_stallid)))) {
                vlSelf->top__DOT__ID_EX__DOT__ff_csren 
                    = (0U != (IData)(vlSelf->top__DOT__ID__DOT__csrActOp));
                vlSelf->top__DOT__ID_EX__DOT__ff_opr1 
                    = ((1U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc1))
                        ? vlSelf->top__DOT__ID_io_read1_data
                        : ((2U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc1))
                            ? vlSelf->top__DOT__ID_io_read2_data
                            : ((3U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc1))
                                ? vlSelf->top__DOT__ID__DOT___GEN_2
                                : ((4U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc1))
                                    ? vlSelf->top__DOT__ID__DOT____VdfgTmp_h7417a8e6__0
                                    : ((5U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc1))
                                        ? vlSelf->top__DOT__ID__DOT___T_848
                                        : ((6U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc1))
                                            ? (IData)(vlSelf->top__DOT__ID__DOT__rs2)
                                            : ((7U 
                                                == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc1))
                                                ? vlSelf->top__DOT__IF_ID__DOT__ff_pc
                                                : (
                                                   (8U 
                                                    == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc1))
                                                    ? 4U
                                                    : 0U))))))));
                vlSelf->top__DOT__ID_EX__DOT__ff_opr2 
                    = ((1U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc2))
                        ? vlSelf->top__DOT__ID_io_read1_data
                        : ((2U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc2))
                            ? vlSelf->top__DOT__ID_io_read2_data
                            : ((3U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc2))
                                ? vlSelf->top__DOT__ID__DOT___GEN_2
                                : ((4U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc2))
                                    ? vlSelf->top__DOT__ID__DOT____VdfgTmp_h7417a8e6__0
                                    : ((5U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc2))
                                        ? vlSelf->top__DOT__ID__DOT___T_848
                                        : ((6U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc2))
                                            ? (IData)(vlSelf->top__DOT__ID__DOT__rs2)
                                            : ((7U 
                                                == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc2))
                                                ? vlSelf->top__DOT__IF_ID__DOT__ff_pc
                                                : (
                                                   (8U 
                                                    == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc2))
                                                    ? 4U
                                                    : 0U))))))));
                vlSelf->top__DOT__ID_EX__DOT__ff_aluOp 
                    = ((0x33U == (0xfe00707fU & vlSelf->top__DOT__ID__DOT__inst))
                        ? 0U : ((0x13U == (0x707fU 
                                           & vlSelf->top__DOT__ID__DOT__inst))
                                 ? 0U : ((0x40000033U 
                                          == (0xfe00707fU 
                                              & vlSelf->top__DOT__ID__DOT__inst))
                                          ? 1U : ((0x37U 
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
                                                            : (IData)(vlSelf->top__DOT__ID__DOT___T_472))))))))))))));
                vlSelf->top__DOT__ID_EX__DOT__ff_csrrData 
                    = ((0xc00U == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                        ? (IData)(vlSelf->top__DOT__csr__DOT__mcycle_data)
                        : ((0xc02U == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                            ? (IData)(vlSelf->top__DOT__csr__DOT__minstret_data)
                            : ((0xc80U == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                ? (IData)((vlSelf->top__DOT__csr__DOT__mcycle_data 
                                           >> 0x20U))
                                : ((0xc82U == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                    ? (IData)((vlSelf->top__DOT__csr__DOT__minstret_data 
                                               >> 0x20U))
                                    : ((0x100U == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                        ? vlSelf->top__DOT__csr__DOT___T_74
                                        : ((0x104U 
                                            == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                            ? vlSelf->top__DOT__csr__DOT___T_82
                                            : ((0x105U 
                                                == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                ? vlSelf->top__DOT__csr__DOT___T_83
                                                : (
                                                   (0x106U 
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
                                                            : vlSelf->top__DOT__csr__DOT___T_235))))))))))))))));
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__MEM_io_stallReq)))) {
                vlSelf->top__DOT__MEM_WB__DOT__ff_reg_en 
                    = vlSelf->top__DOT__EX_MEM__DOT__ff_reg_en;
            }
        }
        if (vlSelf->top__DOT__resoler__DOT___T_35) {
            vlSelf->top__DOT__csr__DOT__mcycle_data 
                = ((0xb80U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                    ? vlSelf->top__DOT__csr__DOT___T_768
                    : ((0xb00U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                        ? vlSelf->top__DOT__csr__DOT___T_762
                        : vlSelf->top__DOT__csr__DOT___T_617));
            if ((0x141U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))) {
                vlSelf->top__DOT__csr__DOT__sepc_data 
                    = (0xfffffffcU & vlSelf->top__DOT__csr__DOT__writeData);
            }
            if ((0x140U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))) {
                vlSelf->top__DOT__csr__DOT__sscratch_data 
                    = ((2U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op))
                        ? vlSelf->top__DOT__MEM_WB__DOT__ff_csr_data
                        : ((3U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op))
                            ? vlSelf->top__DOT__MEM_WB__DOT__ff_csr_data
                            : ((4U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op))
                                ? vlSelf->top__DOT__csr__DOT___T_510
                                : ((5U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op))
                                    ? vlSelf->top__DOT__csr__DOT___T_512
                                    : 0U))));
            }
            if ((0x143U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))) {
                vlSelf->top__DOT__csr__DOT__stval_data 
                    = ((2U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op))
                        ? vlSelf->top__DOT__MEM_WB__DOT__ff_csr_data
                        : ((3U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op))
                            ? vlSelf->top__DOT__MEM_WB__DOT__ff_csr_data
                            : ((4U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op))
                                ? vlSelf->top__DOT__csr__DOT___T_510
                                : ((5U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op))
                                    ? vlSelf->top__DOT__csr__DOT___T_512
                                    : 0U))));
            }
            if ((0xb82U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))) {
                vlSelf->top__DOT__csr__DOT__minstret_data 
                    = vlSelf->top__DOT__csr__DOT___T_771;
            } else if ((0xb02U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))) {
                vlSelf->top__DOT__csr__DOT__minstret_data 
                    = vlSelf->top__DOT__csr__DOT___T_765;
            } else if (vlSelf->top__DOT__MEM_WB__DOT__ff_csr_retired) {
                vlSelf->top__DOT__csr__DOT__minstret_data 
                    = vlSelf->top__DOT__csr__DOT___T_619;
            }
        } else {
            vlSelf->top__DOT__csr__DOT__mcycle_data 
                = vlSelf->top__DOT__csr__DOT___T_617;
            if (vlSelf->top__DOT__MEM__DOT__hasTrap) {
                if (vlSelf->top__DOT__csr__DOT___T_605) {
                    vlSelf->top__DOT__csr__DOT__sepc_data 
                        = (0xfffffffcU & vlSelf->top__DOT__EX_MEM__DOT__ff_currentPc);
                    vlSelf->top__DOT__csr__DOT__stval_data 
                        = vlSelf->top__DOT__MEM_io_except_excValue;
                }
            }
            if (vlSelf->top__DOT__MEM_WB__DOT__ff_csr_retired) {
                vlSelf->top__DOT__csr__DOT__minstret_data 
                    = vlSelf->top__DOT__csr__DOT___T_619;
            }
        }
        if (vlSelf->top__DOT__MEM__DOT__hasTrap) {
            vlSelf->top__DOT__ID_EX__DOT__ff_lsuData = 0U;
            vlSelf->top__DOT__ID_EX__DOT__ff_excValue = 0U;
            vlSelf->top__DOT__ID_EX__DOT__ff_lsuOp = 0U;
            vlSelf->top__DOT__EX_MEM__DOT__ff_reg_en = 0U;
            vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data = 0U;
            vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr = 0U;
            vlSelf->top__DOT__ID_EX__DOT__ff_excType = 0U;
        } else {
            if ((1U & (~ (IData)(vlSelf->top__DOT__ID_io_stallid)))) {
                vlSelf->top__DOT__ID_EX__DOT__ff_lsuData 
                    = vlSelf->top__DOT__ID_io_read2_data;
                vlSelf->top__DOT__ID_EX__DOT__ff_excValue 
                    = ((IData)(vlSelf->top__DOT__ID__DOT__addrFault)
                        ? ((0U == (IData)(vlSelf->top__DOT__ID__DOT__branchOp))
                            ? 0U : (IData)(vlSelf->top__DOT__ID__DOT___T_791))
                        : 0U);
                vlSelf->top__DOT__ID_EX__DOT__ff_lsuOp 
                    = ((0x33U == (0xfe00707fU & vlSelf->top__DOT__ID__DOT__inst))
                        ? 0U : ((0x13U == (0x707fU 
                                           & vlSelf->top__DOT__ID__DOT__inst))
                                 ? 0U : ((0x40000033U 
                                          == (0xfe00707fU 
                                              & vlSelf->top__DOT__ID__DOT__inst))
                                          ? 0U : ((0x37U 
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
                                                            : (IData)(vlSelf->top__DOT__ID__DOT___T_588))))))))))))));
                vlSelf->top__DOT__ID_EX__DOT__ff_excType 
                    = (((~ (((1U == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                              ? (IData)(vlSelf->top__DOT__csr__DOT__readable)
                              : ((2U == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                  ? (IData)(vlSelf->top__DOT__csr__DOT__writable)
                                  : ((3U == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                      ? (IData)(vlSelf->top__DOT__csr__DOT___T_319)
                                      : ((4U == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                          ? (IData)(vlSelf->top__DOT__csr__DOT___T_319)
                                          : ((5U == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp)) 
                                             & (IData)(vlSelf->top__DOT__csr__DOT___T_319)))))) 
                            & (((0U != (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                 ? ((IData)(vlSelf->top__DOT__IF_ID__DOT__ff_valid)
                                     ? (3U & (vlSelf->top__DOT__ID__DOT___T_1 
                                              >> 0x1cU))
                                     : 0U) : 0U) <= (IData)(vlSelf->top__DOT__csr__DOT__mode)))) 
                        & (0U != (IData)(vlSelf->top__DOT__ID__DOT__csrOp)))
                        ? 5U : ((IData)(vlSelf->top__DOT__IF_ID__DOT__ff_misaligned)
                                 ? 7U : ((IData)(vlSelf->top__DOT__ID__DOT__addrFault)
                                          ? 7U : ((0x33U 
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
                                                               : (IData)(vlSelf->top__DOT__ID__DOT___T_762)))))))))))))))));
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__EX_MEM_io_stallPrev)))) {
                vlSelf->top__DOT__EX_MEM__DOT__ff_reg_en 
                    = vlSelf->top__DOT__ID_EX__DOT__ff_regWen;
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__MEM_io_stallReq)))) {
                vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data 
                    = vlSelf->top__DOT__MEM_io_mem_o_reg_data;
                vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr 
                    = vlSelf->top__DOT__EX_MEM__DOT__ff_reg_addr;
            }
        }
        if (((~ (IData)(vlSelf->top__DOT__resoler__DOT___T_35)) 
             & (IData)(vlSelf->top__DOT__MEM__DOT__hasTrap))) {
            vlSelf->top__DOT__csr__DOT__mode = ((IData)(vlSelf->top__DOT__csr__DOT__hasInt)
                                                 ? 
                                                ((IData)(vlSelf->top__DOT__csr__DOT__handIntS)
                                                  ? 1U
                                                  : 3U)
                                                 : 
                                                ((IData)(vlSelf->top__DOT__csr__DOT__handExcS)
                                                  ? 1U
                                                  : 3U));
        }
        if (vlSelf->top__DOT__MEM__DOT__hasTrap) {
            vlSelf->top__DOT__ID_EX__DOT__ff_regWen = 0U;
            vlSelf->top__DOT__EX_MEM__DOT__ff_reg_addr = 0U;
            vlSelf->top__DOT__IF_ID__DOT__ff_valid = 0U;
            vlSelf->top__DOT__IF_ID__DOT__ff_misaligned = 0U;
        } else {
            if ((1U & (~ (IData)(vlSelf->top__DOT__ID_io_stallid)))) {
                vlSelf->top__DOT__ID_EX__DOT__ff_regWen 
                    = ((0x33U == (0xfe00707fU & vlSelf->top__DOT__ID__DOT__inst)) 
                       | ((0x13U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst)) 
                          | ((0x40000033U == (0xfe00707fU 
                                              & vlSelf->top__DOT__ID__DOT__inst)) 
                             | ((0x37U == (0x7fU & vlSelf->top__DOT__ID__DOT__inst)) 
                                | ((0x17U == (0x7fU 
                                              & vlSelf->top__DOT__ID__DOT__inst)) 
                                   | ((0x4033U == (0xfe00707fU 
                                                   & vlSelf->top__DOT__ID__DOT__inst)) 
                                      | ((0x4013U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__ID__DOT__inst)) 
                                         | ((0x6033U 
                                             == (0xfe00707fU 
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
                                                                          | (IData)(vlSelf->top__DOT__ID__DOT___T_293)))))))))))))))))));
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__EX_MEM_io_stallPrev)))) {
                vlSelf->top__DOT__EX_MEM__DOT__ff_reg_addr 
                    = vlSelf->top__DOT__ID_EX__DOT__ff_regWaddr;
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__IF_ID_io_stallPrev)))) {
                vlSelf->top__DOT__IF_ID__DOT__ff_valid 
                    = vlSelf->io_rom_valid;
                vlSelf->top__DOT__IF_ID__DOT__ff_misaligned 
                    = (0U != (3U & vlSelf->top__DOT__fetch__DOT__pc));
            }
        }
        if (((IData)(vlSelf->top__DOT__MEM__DOT__hasTrap) 
             | (IData)(vlSelf->top__DOT__ID__DOT__branchmiss))) {
            vlSelf->top__DOT__fetch__DOT__pc = ((IData)(vlSelf->top__DOT__MEM__DOT__hasTrap)
                                                 ? 
                                                ((IData)(vlSelf->top__DOT__csr__DOT___T_605)
                                                  ? 
                                                 ((vlSelf->top__DOT__csr__DOT__stvec_base 
                                                   + 
                                                   (((IData)(vlSelf->top__DOT__csr__DOT__stvec_mode) 
                                                     & (IData)(vlSelf->top__DOT__csr__DOT__hasInt))
                                                     ? vlSelf->top__DOT__csr__DOT__cause
                                                     : 0U)) 
                                                  << 2U)
                                                  : 
                                                 ((vlSelf->top__DOT__csr__DOT__mtvec_base 
                                                   + 
                                                   (((IData)(vlSelf->top__DOT__csr__DOT__mtvec_mode) 
                                                     & (IData)(vlSelf->top__DOT__csr__DOT__hasInt))
                                                     ? vlSelf->top__DOT__csr__DOT__cause
                                                     : 0U)) 
                                                  << 2U))
                                                 : (IData)(
                                                           ((IData)(vlSelf->top__DOT__ID__DOT__branchmiss)
                                                             ? vlSelf->top__DOT__ID__DOT__takepc
                                                             : (QData)((IData)(
                                                                               ((IData)(4U) 
                                                                                + vlSelf->top__DOT__IF_ID__DOT__ff_pc))))));
        } else if (vlSelf->io_rom_valid) {
            vlSelf->top__DOT__fetch__DOT__pc = ((IData)(vlSelf->top__DOT__fetch__DOT__bpu_io_prdt_taken_o)
                                                 ? vlSelf->top__DOT__fetch__DOT__bpu_io_prdt_addr_o
                                                 : vlSelf->top__DOT__fetch__DOT___T_1);
        }
        if (vlSelf->top__DOT__resoler__DOT___T_35) {
            if ((0x105U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))) {
                vlSelf->top__DOT__csr__DOT__stvec_base 
                    = (vlSelf->top__DOT__csr__DOT__writeData 
                       >> 2U);
                vlSelf->top__DOT__csr__DOT__stvec_mode 
                    = (1U & vlSelf->top__DOT__csr__DOT__writeData);
            }
            if ((0x305U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))) {
                vlSelf->top__DOT__csr__DOT__mtvec_base 
                    = (vlSelf->top__DOT__csr__DOT__writeData 
                       >> 2U);
                vlSelf->top__DOT__csr__DOT__mtvec_mode 
                    = (1U & vlSelf->top__DOT__csr__DOT__writeData);
            }
        }
        if (vlSelf->top__DOT__MEM__DOT__hasTrap) {
            vlSelf->top__DOT__EX_MEM__DOT__ff_currentPc = 0U;
            vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op = 0U;
            vlSelf->top__DOT__MEM_WB__DOT__ff_csr_data = 0U;
            vlSelf->top__DOT__MEM_WB__DOT__ff_csr_retired = 0U;
            vlSelf->top__DOT__ID_EX__DOT__ff_regWaddr = 0U;
            vlSelf->top__DOT__ID_EX__DOT__ff_currentPc = 0U;
            vlSelf->top__DOT__EX_MEM__DOT__ff_csr_op = 0U;
            vlSelf->top__DOT__EX_MEM__DOT__ff_csr_data = 0U;
            vlSelf->top__DOT__EX_MEM__DOT__ff_csr_retired = 0U;
            vlSelf->top__DOT__IF_ID__DOT__ff_pc = 0U;
            vlSelf->top__DOT__ID_EX__DOT__ff_csrOp = 0U;
            vlSelf->top__DOT__ID_EX__DOT__ff_csrwData = 0U;
            vlSelf->top__DOT__ID_EX__DOT__ff_inst = 0U;
            vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr = 0U;
        } else {
            if ((1U & (~ (IData)(vlSelf->top__DOT__MEM_io_stallReq)))) {
                vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op 
                    = vlSelf->top__DOT__EX_MEM__DOT__ff_csr_op;
                vlSelf->top__DOT__MEM_WB__DOT__ff_csr_data 
                    = vlSelf->top__DOT__EX_MEM__DOT__ff_csr_data;
                vlSelf->top__DOT__MEM_WB__DOT__ff_csr_retired 
                    = vlSelf->top__DOT__EX_MEM__DOT__ff_csr_retired;
                vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr 
                    = vlSelf->top__DOT__EX_MEM__DOT__ff_csr_addr;
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__EX_MEM_io_stallPrev)))) {
                vlSelf->top__DOT__EX_MEM__DOT__ff_currentPc 
                    = vlSelf->top__DOT__ID_EX__DOT__ff_currentPc;
                vlSelf->top__DOT__EX_MEM__DOT__ff_csr_op 
                    = vlSelf->top__DOT__ID_EX__DOT__ff_csrOp;
                vlSelf->top__DOT__EX_MEM__DOT__ff_csr_data 
                    = vlSelf->top__DOT__ID_EX__DOT__ff_csrwData;
                vlSelf->top__DOT__EX_MEM__DOT__ff_csr_retired 
                    = (0x13U != vlSelf->top__DOT__ID_EX__DOT__ff_inst);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__ID_io_stallid)))) {
                vlSelf->top__DOT__ID_EX__DOT__ff_regWaddr 
                    = vlSelf->top__DOT__ID__DOT__rd;
                vlSelf->top__DOT__ID_EX__DOT__ff_currentPc 
                    = vlSelf->top__DOT__IF_ID__DOT__ff_pc;
                vlSelf->top__DOT__ID_EX__DOT__ff_csrOp 
                    = vlSelf->top__DOT__ID__DOT__csrActOp;
                vlSelf->top__DOT__ID_EX__DOT__ff_csrwData 
                    = ((0U != (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                        ? ((IData)(vlSelf->top__DOT__ID__DOT__regEn1)
                            ? vlSelf->top__DOT__ID_io_read1_data
                            : (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                        : 0U);
                vlSelf->top__DOT__ID_EX__DOT__ff_inst 
                    = vlSelf->top__DOT__IF_ID__DOT__ff_inst;
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__IF_ID_io_stallPrev)))) {
                vlSelf->top__DOT__IF_ID__DOT__ff_pc 
                    = vlSelf->io_rom_addr;
            }
        }
    }
    if (vlSelf->top__DOT__ID__DOT__stall) {
        vlSelf->top__DOT__ID__DOT__lastinst = vlSelf->top__DOT__IF_ID__DOT__ff_inst;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__IF_ID__DOT__ff_inst = 0U;
        vlSelf->top__DOT__EX_MEM__DOT__ff_csr_addr = 0U;
        vlSelf->top__DOT__ID_EX__DOT__ff_csrAddr = 0U;
    } else if (vlSelf->top__DOT__MEM__DOT__hasTrap) {
        vlSelf->top__DOT__IF_ID__DOT__ff_inst = 0U;
        vlSelf->top__DOT__EX_MEM__DOT__ff_csr_addr = 0U;
        vlSelf->top__DOT__ID_EX__DOT__ff_csrAddr = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->top__DOT__IF_ID_io_stallPrev)))) {
            vlSelf->top__DOT__IF_ID__DOT__ff_inst = vlSelf->io_rom_rdata;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__EX_MEM_io_stallPrev)))) {
            vlSelf->top__DOT__EX_MEM__DOT__ff_csr_addr 
                = vlSelf->top__DOT__ID_EX__DOT__ff_csrAddr;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__ID_io_stallid)))) {
            vlSelf->top__DOT__ID_EX__DOT__ff_csrAddr 
                = vlSelf->top__DOT__ID__DOT__immI;
        }
    }
    vlSelf->io_ram_addr = (0xfffffffcU & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data);
    vlSelf->top__DOT__MEM__DOT__wen = ((1U != (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                       & ((2U != (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                          & ((3U != (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                             & ((4U 
                                                 != (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                                & ((5U 
                                                    != (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                                   & ((6U 
                                                       == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                                      | ((7U 
                                                          == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                                         | (8U 
                                                            == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuOp)))))))));
    vlSelf->top__DOT__MEM__DOT__signed_ = ((1U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                           | (2U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuOp)));
    vlSelf->top__DOT__MEM__DOT__width = ((1U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuOp))
                                          ? 0U : ((2U 
                                                   == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuOp))
                                                   ? 1U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuOp))
                                                    ? 2U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuOp))
                                                     ? 0U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuOp))
                                                      ? 1U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuOp))
                                                       ? 0U
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuOp))
                                                        ? 1U
                                                        : 
                                                       ((8U 
                                                         == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuOp))
                                                         ? 2U
                                                         : 0U))))))));
    vlSelf->top__DOT__csr__DOT___T_94 = (((IData)(vlSelf->top__DOT__csr__DOT__satp_mode) 
                                          << 0x1fU) 
                                         | vlSelf->top__DOT__csr__DOT__satp_ppn);
    vlSelf->top__DOT__csr__DOT___T_84 = (((IData)(vlSelf->top__DOT__csr__DOT__scause_int) 
                                          << 0x1fU) 
                                         | vlSelf->top__DOT__csr__DOT__scause_code);
    vlSelf->top__DOT__csr__DOT___T_130 = (((IData)(vlSelf->top__DOT__csr__DOT__mcause_int) 
                                           << 0x1fU) 
                                          | vlSelf->top__DOT__csr__DOT__mcause_code);
    vlSelf->top__DOT__csr__DOT___T_82 = (((IData)(vlSelf->top__DOT__csr__DOT__mie_seie) 
                                          << 9U) | 
                                         (((IData)(vlSelf->top__DOT__csr__DOT__mie_stie) 
                                           << 5U) | 
                                          ((IData)(vlSelf->top__DOT__csr__DOT__mie_ssie) 
                                           << 1U)));
    vlSelf->top__DOT__csr__DOT___T_47 = (((IData)(vlSelf->top__DOT__csr__DOT__mie_meie) 
                                          << 0xbU) 
                                         | (((IData)(vlSelf->top__DOT__csr__DOT__mie_seie) 
                                             << 9U) 
                                            | (((IData)(vlSelf->top__DOT__csr__DOT__mie_mtie) 
                                                << 7U) 
                                               | (((IData)(vlSelf->top__DOT__csr__DOT__mie_stie) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->top__DOT__csr__DOT__mie_msie) 
                                                      << 3U) 
                                                     | ((IData)(vlSelf->top__DOT__csr__DOT__mie_ssie) 
                                                        << 1U))))));
    vlSelf->top__DOT__csr__DOT__mip_ssip = ((IData)(vlSelf->io_soft) 
                                            | (IData)(vlSelf->top__DOT__csr__DOT__mipReal_ssip));
    vlSelf->top__DOT__csr__DOT__mip_stip = ((IData)(vlSelf->io_timer) 
                                            | (IData)(vlSelf->top__DOT__csr__DOT__mipReal_stip));
    vlSelf->top__DOT__csr__DOT__mip_seip = ((IData)(vlSelf->io_extern) 
                                            | (IData)(vlSelf->top__DOT__csr__DOT__mipReal_seip));
    vlSelf->top__DOT__ID__DOT__stall = vlSelf->top__DOT__ID_io_stallid;
    vlSelf->top__DOT__ID__DOT___T_1 = ((IData)(vlSelf->top__DOT__ID__DOT__stall)
                                        ? vlSelf->top__DOT__ID__DOT__lastinst
                                        : vlSelf->top__DOT__IF_ID__DOT__ff_inst);
    vlSelf->top__DOT__EX__DOT__result = (0x7fffffffffffffffULL 
                                         & ((IData)(vlSelf->top__DOT__ID_EX__DOT__ff_csren)
                                             ? (QData)((IData)(vlSelf->top__DOT__ID_EX__DOT__ff_csrrData))
                                             : ((0U 
                                                 == (IData)(vlSelf->top__DOT__ID_EX__DOT__ff_aluOp))
                                                 ? (QData)((IData)(
                                                                   (vlSelf->top__DOT__ID_EX__DOT__ff_opr1 
                                                                    + vlSelf->top__DOT__ID_EX__DOT__ff_opr2)))
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->top__DOT__ID_EX__DOT__ff_aluOp))
                                                  ? (QData)((IData)(
                                                                    (vlSelf->top__DOT__ID_EX__DOT__ff_opr1 
                                                                     - vlSelf->top__DOT__ID_EX__DOT__ff_opr2)))
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__ID_EX__DOT__ff_aluOp))
                                                   ? (QData)((IData)(
                                                                     (vlSelf->top__DOT__ID_EX__DOT__ff_opr1 
                                                                      & vlSelf->top__DOT__ID_EX__DOT__ff_opr2)))
                                                   : 
                                                  ((3U 
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
                                                                               > vlSelf->top__DOT__ID_EX__DOT__ff_opr2)))))))))))))));
    vlSelf->io_ram_wdata = (IData)(((0U == (IData)(vlSelf->top__DOT__MEM__DOT__width))
                                     ? ((0U == (3U 
                                                & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                         ? (QData)((IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuData))
                                         : ((1U == 
                                             (3U & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                             ? ((QData)((IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuData)) 
                                                << 8U)
                                             : ((2U 
                                                 == 
                                                 (3U 
                                                  & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                                 ? 
                                                ((QData)((IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuData)) 
                                                 << 0x10U)
                                                 : 
                                                ((3U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                                  ? 
                                                 ((QData)((IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuData)) 
                                                  << 0x18U)
                                                  : 0ULL))))
                                     : ((1U == (IData)(vlSelf->top__DOT__MEM__DOT__width))
                                         ? ((0U == 
                                             (3U & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                             ? (QData)((IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuData))
                                             : ((2U 
                                                 == 
                                                 (3U 
                                                  & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                                 ? 
                                                ((QData)((IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuData)) 
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
                                                             : 0U))))));
    vlSelf->top__DOT__MEM__DOT__writeEn = (0x7fU & 
                                           ((0U == (IData)(vlSelf->top__DOT__MEM__DOT__width))
                                             ? ((IData)(1U) 
                                                << 
                                                (3U 
                                                 & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                             : ((1U 
                                                 == (IData)(vlSelf->top__DOT__MEM__DOT__width))
                                                 ? 
                                                ((IData)(3U) 
                                                 << 
                                                 (3U 
                                                  & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->top__DOT__MEM__DOT__width))
                                                  ? 0xfU
                                                  : 0U))));
    vlSelf->top__DOT__MEM__DOT__memAddr = ((0U != (IData)(vlSelf->top__DOT__MEM__DOT__width)) 
                                           & ((1U == (IData)(vlSelf->top__DOT__MEM__DOT__width))
                                               ? vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data
                                               : ((2U 
                                                   == (IData)(vlSelf->top__DOT__MEM__DOT__width)) 
                                                  & (0U 
                                                     != 
                                                     (3U 
                                                      & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data)))));
    vlSelf->top__DOT__csr__DOT___T_92 = (((IData)(vlSelf->top__DOT__csr__DOT__mip_seip) 
                                          << 9U) | 
                                         (((IData)(vlSelf->top__DOT__csr__DOT__mip_stip) 
                                           << 5U) | 
                                          ((IData)(vlSelf->top__DOT__csr__DOT__mip_ssip) 
                                           << 1U)));
    top__DOT__csr__DOT___T_142 = (((IData)(vlSelf->io_extern) 
                                   << 0xbU) | (((IData)(vlSelf->top__DOT__csr__DOT__mip_seip) 
                                                << 9U) 
                                               | (((IData)(vlSelf->io_timer) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->top__DOT__csr__DOT__mip_stip) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->io_soft) 
                                                         << 3U) 
                                                        | ((IData)(vlSelf->top__DOT__csr__DOT__mip_ssip) 
                                                           << 1U))))));
    vlSelf->top__DOT__MEM_io_mem_o_reg_data = ((IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_load)
                                                ? (
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__MEM__DOT__width))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__MEM__DOT__signed_)
                                                      ? 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->io_ram_rdata 
                                                                      >> 7U)))) 
                                                       << 8U) 
                                                      | (0xffU 
                                                         & vlSelf->io_ram_rdata))
                                                      : 
                                                     (0xffU 
                                                      & vlSelf->io_ram_rdata))
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__MEM__DOT__signed_)
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->io_ram_rdata 
                                                                       >> 0xfU)))) 
                                                        << 8U) 
                                                       | (0xffU 
                                                          & (vlSelf->io_ram_rdata 
                                                             >> 8U)))
                                                       : 
                                                      (0xffU 
                                                       & (vlSelf->io_ram_rdata 
                                                          >> 8U)))
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__MEM__DOT__signed_)
                                                        ? 
                                                       (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->io_ram_rdata 
                                                                        >> 0x17U)))) 
                                                         << 8U) 
                                                        | (0xffU 
                                                           & (vlSelf->io_ram_rdata 
                                                              >> 0x10U)))
                                                        : 
                                                       (0xffU 
                                                        & (vlSelf->io_ram_rdata 
                                                           >> 0x10U)))
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                                        ? 
                                                       ((IData)(vlSelf->top__DOT__MEM__DOT__signed_)
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
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__MEM__DOT__width))
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__MEM__DOT__signed_)
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->io_ram_rdata 
                                                                       >> 0xfU)))) 
                                                        << 0x10U) 
                                                       | (0xffffU 
                                                          & vlSelf->io_ram_rdata))
                                                       : 
                                                      (0xffffU 
                                                       & vlSelf->io_ram_rdata))
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__MEM__DOT__signed_)
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->io_ram_rdata 
                                                                     >> 0x1fU))) 
                                                         << 0x10U) 
                                                        | (vlSelf->io_ram_rdata 
                                                           >> 0x10U))
                                                        : 
                                                       (vlSelf->io_ram_rdata 
                                                        >> 0x10U))
                                                       : 0U))
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->top__DOT__MEM__DOT__width))
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                                       ? vlSelf->io_ram_rdata
                                                       : 0U)
                                                      : 0U)))
                                                : vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data);
    vlSelf->io_ram_wen = ((IData)(vlSelf->top__DOT__MEM__DOT__wen)
                           ? (0xfU & (IData)(vlSelf->top__DOT__MEM__DOT__writeEn))
                           : 0xfU);
    vlSelf->top__DOT__MEM__DOT__memExcept = ((IData)(vlSelf->top__DOT__MEM__DOT__memAddr) 
                                             | (IData)(vlSelf->io_ram_fault));
    vlSelf->top__DOT__csr__DOT__flagIntS = (vlSelf->top__DOT__csr__DOT___T_92 
                                            & vlSelf->top__DOT__csr__DOT___T_82);
    vlSelf->top__DOT__csr__DOT__flagIntM = (top__DOT__csr__DOT___T_142 
                                            & vlSelf->top__DOT__csr__DOT___T_47);
    vlSelf->top__DOT__regfile__DOT___T_4 = ((IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_en) 
                                            & (0U != (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr)));
    vlSelf->top__DOT__csr__DOT___T_74 = (((IData)(vlSelf->top__DOT__csr__DOT__mstatus_sum) 
                                          << 0x12U) 
                                         | (((IData)(vlSelf->top__DOT__csr__DOT__mstatus_spp) 
                                             << 8U) 
                                            | (((IData)(vlSelf->top__DOT__csr__DOT__mstatus_spie) 
                                                << 5U) 
                                               | ((IData)(vlSelf->top__DOT__csr__DOT__mstatus_sie) 
                                                  << 1U))));
    vlSelf->top__DOT__csr__DOT___T_31 = (((IData)(vlSelf->top__DOT__csr__DOT__mstatus_sum) 
                                          << 0x12U) 
                                         | (((IData)(vlSelf->top__DOT__csr__DOT__mstatus_mpp) 
                                             << 0xbU) 
                                            | (((IData)(vlSelf->top__DOT__csr__DOT__mstatus_spp) 
                                                << 8U) 
                                               | (((IData)(vlSelf->top__DOT__csr__DOT__mstatus_mpie) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->top__DOT__csr__DOT__mstatus_spie) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->top__DOT__csr__DOT__mstatus_mie) 
                                                         << 3U) 
                                                        | ((IData)(vlSelf->top__DOT__csr__DOT__mstatus_sie) 
                                                           << 1U)))))));
    vlSelf->top__DOT__csr__DOT___T_617 = (1ULL + vlSelf->top__DOT__csr__DOT__mcycle_data);
    vlSelf->top__DOT__csr__DOT___T_619 = (1ULL + vlSelf->top__DOT__csr__DOT__minstret_data);
    vlSelf->top__DOT__MEM_io_except_excValue = ((5U 
                                                 == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                                 ? vlSelf->top__DOT__EX_MEM__DOT__ff_inst
                                                 : 
                                                ((IData)(vlSelf->top__DOT__MEM__DOT__memExcept)
                                                  ? vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data
                                                  : vlSelf->top__DOT__EX_MEM__DOT__ff_excValue));
    vlSelf->top__DOT__csr__DOT__intCauseS = ((0x200U 
                                              & vlSelf->top__DOT__csr__DOT__flagIntS)
                                              ? 9U : 
                                             ((2U & vlSelf->top__DOT__csr__DOT__flagIntS)
                                               ? 1U
                                               : 5U));
    vlSelf->top__DOT__EX_io_ex_o_load = ((0U != (IData)(vlSelf->top__DOT__ID_EX__DOT__ff_lsuOp)) 
                                         & (IData)(vlSelf->top__DOT__ID_EX__DOT__ff_regWen));
    vlSelf->top__DOT__csr__DOT__hasIntM = (((1U >= (IData)(vlSelf->top__DOT__csr__DOT__mode)) 
                                            | (IData)(vlSelf->top__DOT__csr__DOT__mstatus_mie)) 
                                           & (0U != 
                                              ((~ vlSelf->top__DOT__csr__DOT__mideleg_data) 
                                               & vlSelf->top__DOT__csr__DOT__flagIntM)));
    vlSelf->top__DOT__csr__DOT__hasInt = ((IData)(vlSelf->top__DOT__csr__DOT__hasIntM) 
                                          | (((1U > (IData)(vlSelf->top__DOT__csr__DOT__mode)) 
                                              | ((1U 
                                                  == (IData)(vlSelf->top__DOT__csr__DOT__mode)) 
                                                 & (IData)(vlSelf->top__DOT__csr__DOT__mstatus_sie))) 
                                             & (0U 
                                                != 
                                                (vlSelf->top__DOT__csr__DOT__flagIntS 
                                                 & vlSelf->top__DOT__csr__DOT__mideleg_data))));
    vlSelf->top__DOT__fetch__DOT___T_1 = ((IData)(4U) 
                                          + vlSelf->top__DOT__fetch__DOT__pc);
    vlSelf->top__DOT__fetch__DOT__bpu_io_prdt_addr_o 
        = (vlSelf->top__DOT__fetch__DOT__pc + ((0x63U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->io_rom_rdata))
                                                ? vlSelf->top__DOT__fetch__DOT__bpu__DOT__inst_b_type_imm
                                                : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->io_rom_rdata))
                                                    ? 
                                                   ((((vlSelf->io_rom_rdata 
                                                       >> 0x1fU)
                                                       ? 0xfffU
                                                       : 0U) 
                                                     << 0x14U) 
                                                    | ((0xff000U 
                                                        & vlSelf->io_rom_rdata) 
                                                       | ((0x800U 
                                                           & (vlSelf->io_rom_rdata 
                                                              >> 9U)) 
                                                          | (0x7feU 
                                                             & (vlSelf->io_rom_rdata 
                                                                >> 0x14U)))))
                                                    : vlSelf->top__DOT__fetch__DOT__bpu__DOT__inst_b_type_imm)));
    if (vlSelf->top__DOT__csr__DOT__hasInt) {
        vlSelf->top__DOT__csr__DOT__handIntS = (1U 
                                                & (~ (IData)(vlSelf->top__DOT__csr__DOT__hasIntM)));
        vlSelf->top__DOT__csr__DOT__cause = (0x80000000U 
                                             | ((IData)(vlSelf->top__DOT__csr__DOT__handIntS)
                                                 ? vlSelf->top__DOT__csr__DOT__intCauseS
                                                 : 
                                                ((0x800U 
                                                  & vlSelf->top__DOT__csr__DOT__flagIntM)
                                                  ? 0xbU
                                                  : 
                                                 ((8U 
                                                   & vlSelf->top__DOT__csr__DOT__flagIntM)
                                                   ? 3U
                                                   : 
                                                  ((0x80U 
                                                    & vlSelf->top__DOT__csr__DOT__flagIntM)
                                                    ? 7U
                                                    : vlSelf->top__DOT__csr__DOT__intCauseS)))));
    } else {
        vlSelf->top__DOT__csr__DOT__handIntS = 0U;
        vlSelf->top__DOT__csr__DOT__cause = ((5U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                              ? 2U : 
                                             ((7U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                               ? 0U
                                               : ((1U 
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
                                                     : 0U)))));
    }
    vlSelf->top__DOT__resoler__DOT___T_35 = ((0U != (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op)) 
                                             & (1U 
                                                != (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op)));
    vlSelf->io_rom_addr = vlSelf->top__DOT__fetch__DOT__pc;
    vlSelf->top__DOT__csr__DOT___T_83 = ((vlSelf->top__DOT__csr__DOT__stvec_base 
                                          << 2U) | (IData)(vlSelf->top__DOT__csr__DOT__stvec_mode));
    vlSelf->top__DOT__csr__DOT___T_129 = ((vlSelf->top__DOT__csr__DOT__mtvec_base 
                                           << 2U) | (IData)(vlSelf->top__DOT__csr__DOT__mtvec_mode));
    vlSelf->top__DOT__MEM_io_stallReq = (1U & ((~ (IData)(vlSelf->io_ram_valid)) 
                                               | (IData)(vlSelf->top__DOT__resoler__DOT___T_35)));
    top__DOT__csr__DOT___T_422 = ((0xf13U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                   ? 0U : ((0xf14U 
                                            == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                            ? 0U : 
                                           ((0x300U 
                                             == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                             ? vlSelf->top__DOT__csr__DOT___T_31
                                             : ((0x301U 
                                                 == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                 ? 0x40141101U
                                                 : 
                                                ((0x302U 
                                                  == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                  ? vlSelf->top__DOT__csr__DOT__medeleg_data
                                                  : 
                                                 ((0x303U 
                                                   == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                   ? vlSelf->top__DOT__csr__DOT__mideleg_data
                                                   : 
                                                  ((0x304U 
                                                    == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                    ? vlSelf->top__DOT__csr__DOT___T_47
                                                    : 
                                                   ((0x305U 
                                                     == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                     ? vlSelf->top__DOT__csr__DOT___T_129
                                                     : 
                                                    ((0x306U 
                                                      == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                      ? 0U
                                                      : 
                                                     ((0x340U 
                                                       == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                       ? vlSelf->top__DOT__csr__DOT__mscratch_data
                                                       : 
                                                      ((0x341U 
                                                        == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                        ? vlSelf->top__DOT__csr__DOT__mepc_data
                                                        : 
                                                       ((0x342U 
                                                         == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                         ? vlSelf->top__DOT__csr__DOT___T_130
                                                         : 
                                                        ((0x343U 
                                                          == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                          ? vlSelf->top__DOT__csr__DOT__mtval_data
                                                          : 
                                                         ((0x344U 
                                                           == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                           ? top__DOT__csr__DOT___T_142
                                                           : 
                                                          ((0xb00U 
                                                            == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                            ? (IData)(vlSelf->top__DOT__csr__DOT__mcycle_data)
                                                            : 
                                                           ((0xb02U 
                                                             == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                             ? (IData)(vlSelf->top__DOT__csr__DOT__minstret_data)
                                                             : 
                                                            ((0xb80U 
                                                              == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                              ? (IData)(
                                                                        (vlSelf->top__DOT__csr__DOT__mcycle_data 
                                                                         >> 0x20U))
                                                              : 
                                                             ((0xb82U 
                                                               == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                               ? (IData)(
                                                                         (vlSelf->top__DOT__csr__DOT__minstret_data 
                                                                          >> 0x20U))
                                                               : 0U))))))))))))))))));
    vlSelf->top__DOT__csr__DOT__csrData = ((0xc00U 
                                            == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                            ? (IData)(vlSelf->top__DOT__csr__DOT__mcycle_data)
                                            : ((0xc02U 
                                                == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                ? (IData)(vlSelf->top__DOT__csr__DOT__minstret_data)
                                                : (
                                                   (0xc80U 
                                                    == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                    ? (IData)(
                                                              (vlSelf->top__DOT__csr__DOT__mcycle_data 
                                                               >> 0x20U))
                                                    : 
                                                   ((0xc82U 
                                                     == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                     ? (IData)(
                                                               (vlSelf->top__DOT__csr__DOT__minstret_data 
                                                                >> 0x20U))
                                                     : 
                                                    ((0x100U 
                                                      == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                      ? vlSelf->top__DOT__csr__DOT___T_74
                                                      : 
                                                     ((0x104U 
                                                       == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                       ? vlSelf->top__DOT__csr__DOT___T_82
                                                       : 
                                                      ((0x105U 
                                                        == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                        ? vlSelf->top__DOT__csr__DOT___T_83
                                                        : 
                                                       ((0x106U 
                                                         == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                         ? 0U
                                                         : 
                                                        ((0x140U 
                                                          == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                          ? vlSelf->top__DOT__csr__DOT__sscratch_data
                                                          : 
                                                         ((0x141U 
                                                           == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                           ? vlSelf->top__DOT__csr__DOT__sepc_data
                                                           : 
                                                          ((0x142U 
                                                            == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                            ? vlSelf->top__DOT__csr__DOT___T_84
                                                            : 
                                                           ((0x143U 
                                                             == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                             ? vlSelf->top__DOT__csr__DOT__stval_data
                                                             : 
                                                            ((0x144U 
                                                              == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                              ? vlSelf->top__DOT__csr__DOT___T_92
                                                              : 
                                                             ((0x180U 
                                                               == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                               ? vlSelf->top__DOT__csr__DOT___T_94
                                                               : 
                                                              ((0xf11U 
                                                                == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                                ? 0U
                                                                : 
                                                               ((0xf12U 
                                                                 == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr))
                                                                 ? 0U
                                                                 : top__DOT__csr__DOT___T_422))))))))))))))));
    vlSelf->top__DOT__ID__DOT___T_848 = (((IData)(vlSelf->top__DOT__IF_ID__DOT__ff_valid)
                                           ? (vlSelf->top__DOT__ID__DOT___T_1 
                                              >> 0xcU)
                                           : 0U) << 0xcU);
    if (vlSelf->top__DOT__IF_ID__DOT__ff_valid) {
        vlSelf->top__DOT__ID__DOT____VdfgTmp_h8afae4a5__0 
            = (vlSelf->top__DOT__ID__DOT___T_1 >> 0x1fU);
        vlSelf->top__DOT__ID__DOT__rd = (0x1fU & (vlSelf->top__DOT__ID__DOT___T_1 
                                                  >> 7U));
        vlSelf->top__DOT__ID__DOT__rs2 = (0x1fU & (vlSelf->top__DOT__ID__DOT___T_1 
                                                   >> 0x14U));
        vlSelf->top__DOT__ID__DOT__rs1 = (0x1fU & (vlSelf->top__DOT__ID__DOT___T_1 
                                                   >> 0xfU));
        vlSelf->top__DOT__ID__DOT__inst = vlSelf->top__DOT__ID__DOT___T_1;
        vlSelf->top__DOT__ID__DOT__immI = (vlSelf->top__DOT__ID__DOT___T_1 
                                           >> 0x14U);
    } else {
        vlSelf->top__DOT__ID__DOT____VdfgTmp_h8afae4a5__0 = 0U;
        vlSelf->top__DOT__ID__DOT__rd = 0U;
        vlSelf->top__DOT__ID__DOT__rs2 = 0U;
        vlSelf->top__DOT__ID__DOT__rs1 = 0U;
        vlSelf->top__DOT__ID__DOT__inst = 0x13U;
        vlSelf->top__DOT__ID__DOT__immI = 0U;
    }
    vlSelf->top__DOT__csr__DOT___T_510 = (vlSelf->top__DOT__csr__DOT__csrData 
                                          | vlSelf->top__DOT__MEM_WB__DOT__ff_csr_data);
    vlSelf->top__DOT__csr__DOT___T_512 = ((~ vlSelf->top__DOT__MEM_WB__DOT__ff_csr_data) 
                                          & vlSelf->top__DOT__csr__DOT__csrData);
    vlSelf->top__DOT__ID__DOT____VdfgTmp_h7417a8e6__0 
        = (((- (IData)((IData)(vlSelf->top__DOT__ID__DOT____VdfgTmp_h8afae4a5__0))) 
            << 0xcU) | ((((IData)(vlSelf->top__DOT__IF_ID__DOT__ff_valid)
                           ? (vlSelf->top__DOT__ID__DOT___T_1 
                              >> 0x19U) : 0U) << 5U) 
                        | (IData)(vlSelf->top__DOT__ID__DOT__rd)));
    vlSelf->top__DOT__resoler__DOT___T_10 = ((IData)(vlSelf->top__DOT__ID_EX__DOT__ff_regWaddr) 
                                             == (IData)(vlSelf->top__DOT__ID__DOT__rs2));
    vlSelf->top__DOT__regfile__DOT___GEN_53 = ((0x15U 
                                                == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                ? vlSelf->top__DOT__regfile__DOT__regfile_21
                                                : (
                                                   (0x14U 
                                                    == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                    ? vlSelf->top__DOT__regfile__DOT__regfile_20
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                     ? vlSelf->top__DOT__regfile__DOT__regfile_19
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                      ? vlSelf->top__DOT__regfile__DOT__regfile_18
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                       ? vlSelf->top__DOT__regfile__DOT__regfile_17
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                        ? vlSelf->top__DOT__regfile__DOT__regfile_16
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                         ? vlSelf->top__DOT__regfile__DOT__regfile_15
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                          ? vlSelf->top__DOT__regfile__DOT__regfile_14
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                           ? vlSelf->top__DOT__regfile__DOT__regfile_13
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                            ? vlSelf->top__DOT__regfile__DOT__regfile_12
                                                            : 
                                                           ((0xbU 
                                                             == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                             ? vlSelf->top__DOT__regfile__DOT__regfile_11
                                                             : 
                                                            ((0xaU 
                                                              == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                              ? vlSelf->top__DOT__regfile__DOT__regfile_10
                                                              : 
                                                             ((9U 
                                                               == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                               ? vlSelf->top__DOT__regfile__DOT__regfile_9
                                                               : 
                                                              ((8U 
                                                                == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                                ? vlSelf->top__DOT__regfile__DOT__regfile_8
                                                                : 
                                                               ((7U 
                                                                 == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                                 ? vlSelf->top__DOT__regfile__DOT__regfile_7
                                                                 : 
                                                                ((6U 
                                                                  == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                                  ? vlSelf->top__DOT__regfile__DOT__regfile_6
                                                                  : 
                                                                 ((5U 
                                                                   == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                                   ? vlSelf->top__DOT__regfile__DOT__regfile_5
                                                                   : 
                                                                  ((4U 
                                                                    == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                                    ? vlSelf->top__DOT__regfile__DOT__regfile_4
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                                     ? vlSelf->top__DOT__regfile__DOT__regfile_3
                                                                     : 
                                                                    ((2U 
                                                                      == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                                      ? vlSelf->top__DOT__regfile__DOT__regfile_2
                                                                      : 
                                                                     ((1U 
                                                                       == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                                       ? vlSelf->top__DOT__regfile__DOT__regfile_1
                                                                       : vlSelf->top__DOT__regfile__DOT__regfile_0)))))))))))))))))))));
    vlSelf->top__DOT__resoler__DOT___T_2 = ((IData)(vlSelf->top__DOT__ID_EX__DOT__ff_regWaddr) 
                                            == (IData)(vlSelf->top__DOT__ID__DOT__rs1));
    vlSelf->top__DOT__regfile__DOT___GEN_21 = ((0x15U 
                                                == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                ? vlSelf->top__DOT__regfile__DOT__regfile_21
                                                : (
                                                   (0x14U 
                                                    == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                    ? vlSelf->top__DOT__regfile__DOT__regfile_20
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                     ? vlSelf->top__DOT__regfile__DOT__regfile_19
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                      ? vlSelf->top__DOT__regfile__DOT__regfile_18
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                       ? vlSelf->top__DOT__regfile__DOT__regfile_17
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                        ? vlSelf->top__DOT__regfile__DOT__regfile_16
                                                        : 
                                                       ((0xfU 
                                                         == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                         ? vlSelf->top__DOT__regfile__DOT__regfile_15
                                                         : 
                                                        ((0xeU 
                                                          == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                          ? vlSelf->top__DOT__regfile__DOT__regfile_14
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                           ? vlSelf->top__DOT__regfile__DOT__regfile_13
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                            ? vlSelf->top__DOT__regfile__DOT__regfile_12
                                                            : 
                                                           ((0xbU 
                                                             == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                             ? vlSelf->top__DOT__regfile__DOT__regfile_11
                                                             : 
                                                            ((0xaU 
                                                              == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                              ? vlSelf->top__DOT__regfile__DOT__regfile_10
                                                              : 
                                                             ((9U 
                                                               == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                               ? vlSelf->top__DOT__regfile__DOT__regfile_9
                                                               : 
                                                              ((8U 
                                                                == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                                ? vlSelf->top__DOT__regfile__DOT__regfile_8
                                                                : 
                                                               ((7U 
                                                                 == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                                 ? vlSelf->top__DOT__regfile__DOT__regfile_7
                                                                 : 
                                                                ((6U 
                                                                  == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                                  ? vlSelf->top__DOT__regfile__DOT__regfile_6
                                                                  : 
                                                                 ((5U 
                                                                   == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                                   ? vlSelf->top__DOT__regfile__DOT__regfile_5
                                                                   : 
                                                                  ((4U 
                                                                    == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                                    ? vlSelf->top__DOT__regfile__DOT__regfile_4
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                                     ? vlSelf->top__DOT__regfile__DOT__regfile_3
                                                                     : 
                                                                    ((2U 
                                                                      == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                                      ? vlSelf->top__DOT__regfile__DOT__regfile_2
                                                                      : 
                                                                     ((1U 
                                                                       == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                                       ? vlSelf->top__DOT__regfile__DOT__regfile_1
                                                                       : vlSelf->top__DOT__regfile__DOT__regfile_0)))))))))))))))))))));
    top__DOT__ID__DOT___T_276 = ((0x1023U != (0x707fU 
                                              & vlSelf->top__DOT__ID__DOT__inst)) 
                                 & ((0x2023U != (0x707fU 
                                                 & vlSelf->top__DOT__ID__DOT__inst)) 
                                    & ((0xfU != (0xf00fffffU 
                                                 & vlSelf->top__DOT__ID__DOT__inst)) 
                                       & ((0x100fU 
                                           != vlSelf->top__DOT__ID__DOT__inst) 
                                          & ((0x1073U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__ID__DOT__inst)) 
                                             | ((0x2073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__ID__DOT__inst)) 
                                                | ((0x3073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__ID__DOT__inst)) 
                                                   | ((0x5073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__ID__DOT__inst)) 
                                                      | ((0x6073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__ID__DOT__inst)) 
                                                         | ((0x7073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__ID__DOT__inst)) 
                                                            | ((0x2000033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->top__DOT__ID__DOT__inst)) 
                                                               | ((0x2001033U 
                                                                   == 
                                                                   (0xfe00707fU 
                                                                    & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                  | ((0x2002033U 
                                                                      == 
                                                                      (0xfe00707fU 
                                                                       & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                     | ((0x2003033U 
                                                                         == 
                                                                         (0xfe00707fU 
                                                                          & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                        | ((0x2004033U 
                                                                            == 
                                                                            (0xfe00707fU 
                                                                             & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                           | ((0x2005033U 
                                                                               == 
                                                                               (0xfe00707fU 
                                                                                & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                              | ((0x2006033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                                | (0x2007033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->top__DOT__ID__DOT__inst)))))))))))))))))));
    if ((0x6073U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        top__DOT__ID__DOT___T_442 = 0U;
        top__DOT__ID__DOT___T_558 = 0U;
        top__DOT__ID__DOT___T_732 = 0U;
        top__DOT__ID__DOT___T_326 = 0U;
    } else if ((0x7073U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        top__DOT__ID__DOT___T_442 = 0U;
        top__DOT__ID__DOT___T_558 = 0U;
        top__DOT__ID__DOT___T_732 = 0U;
        top__DOT__ID__DOT___T_326 = 0U;
    } else if ((0x2000033U == (0xfe00707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        top__DOT__ID__DOT___T_442 = 0U;
        top__DOT__ID__DOT___T_558 = 0U;
        top__DOT__ID__DOT___T_732 = 0U;
        top__DOT__ID__DOT___T_326 = 1U;
    } else if ((0x2001033U == (0xfe00707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        top__DOT__ID__DOT___T_442 = 0U;
        top__DOT__ID__DOT___T_558 = 0U;
        top__DOT__ID__DOT___T_732 = 0U;
        top__DOT__ID__DOT___T_326 = 1U;
    } else if ((0x2002033U == (0xfe00707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        top__DOT__ID__DOT___T_442 = 0U;
        top__DOT__ID__DOT___T_558 = 0U;
        top__DOT__ID__DOT___T_732 = 0U;
        top__DOT__ID__DOT___T_326 = 1U;
    } else if ((0x2003033U == (0xfe00707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        top__DOT__ID__DOT___T_442 = 0U;
        top__DOT__ID__DOT___T_558 = 0U;
        top__DOT__ID__DOT___T_732 = 0U;
        top__DOT__ID__DOT___T_326 = 1U;
    } else if ((0x2004033U == (0xfe00707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        top__DOT__ID__DOT___T_442 = 0U;
        top__DOT__ID__DOT___T_558 = 0U;
        top__DOT__ID__DOT___T_732 = 0U;
        top__DOT__ID__DOT___T_326 = 1U;
    } else if ((0x2005033U == (0xfe00707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        top__DOT__ID__DOT___T_442 = 0U;
        top__DOT__ID__DOT___T_558 = 0U;
        top__DOT__ID__DOT___T_732 = 0U;
        top__DOT__ID__DOT___T_326 = 1U;
    } else if ((0x2006033U == (0xfe00707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        top__DOT__ID__DOT___T_442 = 0U;
        top__DOT__ID__DOT___T_558 = 0U;
        top__DOT__ID__DOT___T_732 = 0U;
        top__DOT__ID__DOT___T_326 = 1U;
    } else if ((0x2007033U == (0xfe00707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        top__DOT__ID__DOT___T_442 = 0U;
        top__DOT__ID__DOT___T_558 = 0U;
        top__DOT__ID__DOT___T_732 = 0U;
        top__DOT__ID__DOT___T_326 = 1U;
    } else if ((0x73U == vlSelf->top__DOT__ID__DOT__inst)) {
        top__DOT__ID__DOT___T_442 = 0U;
        top__DOT__ID__DOT___T_558 = 0U;
        top__DOT__ID__DOT___T_732 = 1U;
        top__DOT__ID__DOT___T_326 = 0U;
    } else if ((0x100073U == vlSelf->top__DOT__ID__DOT__inst)) {
        top__DOT__ID__DOT___T_442 = 0U;
        top__DOT__ID__DOT___T_558 = 0U;
        top__DOT__ID__DOT___T_732 = 2U;
        top__DOT__ID__DOT___T_326 = 0U;
    } else if ((0x10200073U == vlSelf->top__DOT__ID__DOT__inst)) {
        top__DOT__ID__DOT___T_442 = 0U;
        top__DOT__ID__DOT___T_558 = 0U;
        top__DOT__ID__DOT___T_732 = 3U;
        top__DOT__ID__DOT___T_326 = 0U;
    } else if ((0x30200073U == vlSelf->top__DOT__ID__DOT__inst)) {
        top__DOT__ID__DOT___T_442 = 0U;
        top__DOT__ID__DOT___T_558 = 0U;
        top__DOT__ID__DOT___T_732 = 4U;
        top__DOT__ID__DOT___T_326 = 0U;
    } else if ((0x10500073U == vlSelf->top__DOT__ID__DOT__inst)) {
        top__DOT__ID__DOT___T_442 = 0U;
        top__DOT__ID__DOT___T_558 = 0U;
        top__DOT__ID__DOT___T_732 = 0U;
        top__DOT__ID__DOT___T_326 = 0U;
    } else if ((0x12000073U == (0xfe007fffU & vlSelf->top__DOT__ID__DOT__inst))) {
        top__DOT__ID__DOT___T_442 = 3U;
        top__DOT__ID__DOT___T_558 = 0xbU;
        top__DOT__ID__DOT___T_732 = 0xaU;
        top__DOT__ID__DOT___T_326 = 1U;
    } else {
        top__DOT__ID__DOT___T_442 = 0U;
        top__DOT__ID__DOT___T_558 = 0U;
        top__DOT__ID__DOT___T_732 = 5U;
        top__DOT__ID__DOT___T_326 = 0U;
    }
    top__DOT__ID__DOT___T_389 = ((0x100fU == vlSelf->top__DOT__ID__DOT__inst)
                                  ? 0U : ((0x1073U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__ID__DOT__inst))
                                           ? 0U : (
                                                   (0x2073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__ID__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x3073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__ID__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x5073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__ID__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x6073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__ID__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x7073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__ID__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x2000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__ID__DOT__inst))
                                                         ? 2U
                                                         : 
                                                        ((0x2001033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__ID__DOT__inst))
                                                          ? 2U
                                                          : 
                                                         ((0x2002033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__ID__DOT__inst))
                                                           ? 2U
                                                           : 
                                                          ((0x2003033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->top__DOT__ID__DOT__inst))
                                                            ? 2U
                                                            : 
                                                           ((0x2004033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->top__DOT__ID__DOT__inst))
                                                             ? 2U
                                                             : 
                                                            ((0x2005033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->top__DOT__ID__DOT__inst))
                                                              ? 2U
                                                              : 
                                                             ((0x2006033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->top__DOT__ID__DOT__inst))
                                                               ? 2U
                                                               : 
                                                              ((0x2007033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->top__DOT__ID__DOT__inst))
                                                                ? 2U
                                                                : 0U)))))))))))))));
    top__DOT__ID__DOT___T_529 = ((0x3013U == (0x707fU 
                                              & vlSelf->top__DOT__ID__DOT__inst))
                                  ? 0U : ((0x1033U 
                                           == (0xfe00707fU 
                                               & vlSelf->top__DOT__ID__DOT__inst))
                                           ? 0U : (
                                                   (0x1013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__ID__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x5033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__ID__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x5013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__ID__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x40005033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__ID__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x40005013U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__ID__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__ID__DOT__inst))
                                                         ? 2U
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__ID__DOT__inst))
                                                          ? 3U
                                                          : 
                                                         ((0x4063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__ID__DOT__inst))
                                                           ? 4U
                                                           : 
                                                          ((0x5063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__ID__DOT__inst))
                                                            ? 5U
                                                            : 
                                                           ((0x6063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__ID__DOT__inst))
                                                             ? 6U
                                                             : 
                                                            ((0x7063U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__ID__DOT__inst))
                                                              ? 7U
                                                              : 
                                                             ((0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->top__DOT__ID__DOT__inst))
                                                               ? 1U
                                                               : 
                                                              ((0x67U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__ID__DOT__inst))
                                                                ? 1U
                                                                : 0U)))))))))))))));
    top__DOT__ID__DOT___T_629 = ((0x1003U == (0x707fU 
                                              & vlSelf->top__DOT__ID__DOT__inst))
                                  ? 0U : ((0x2003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__ID__DOT__inst))
                                           ? 0U : (
                                                   (0x4003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__ID__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x5003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__ID__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__ID__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x1023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__ID__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x2023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__ID__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0xfU 
                                                         == 
                                                         (0xf00fffffU 
                                                          & vlSelf->top__DOT__ID__DOT__inst))
                                                         ? 0U
                                                         : 
                                                        ((0x100fU 
                                                          == vlSelf->top__DOT__ID__DOT__inst)
                                                          ? 0U
                                                          : 
                                                         ((0x1073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__ID__DOT__inst))
                                                           ? 3U
                                                           : 
                                                          ((0x2073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__ID__DOT__inst))
                                                            ? 4U
                                                            : 
                                                           ((0x3073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__ID__DOT__inst))
                                                             ? 5U
                                                             : 
                                                            ((0x5073U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__ID__DOT__inst))
                                                              ? 3U
                                                              : 
                                                             ((0x6073U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__ID__DOT__inst))
                                                               ? 4U
                                                               : 
                                                              ((0x7073U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__ID__DOT__inst))
                                                                ? 5U
                                                                : 0U)))))))))))))));
    top__DOT__ID__DOT___T_153 = ((0x5073U != (0x707fU 
                                              & vlSelf->top__DOT__ID__DOT__inst)) 
                                 & ((0x6073U != (0x707fU 
                                                 & vlSelf->top__DOT__ID__DOT__inst)) 
                                    & ((0x7073U != 
                                        (0x707fU & vlSelf->top__DOT__ID__DOT__inst)) 
                                       & ((0x2000033U 
                                           == (0xfe00707fU 
                                               & vlSelf->top__DOT__ID__DOT__inst)) 
                                          | ((0x2001033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->top__DOT__ID__DOT__inst)) 
                                             | ((0x2002033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__ID__DOT__inst)) 
                                                | ((0x2003033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__ID__DOT__inst)) 
                                                   | ((0x2004033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__ID__DOT__inst)) 
                                                      | ((0x2005033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__ID__DOT__inst)) 
                                                         | ((0x2006033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->top__DOT__ID__DOT__inst)) 
                                                            | ((0x2007033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->top__DOT__ID__DOT__inst)) 
                                                               | ((0x73U 
                                                                   != vlSelf->top__DOT__ID__DOT__inst) 
                                                                  & ((0x100073U 
                                                                      != vlSelf->top__DOT__ID__DOT__inst) 
                                                                     & ((0x10200073U 
                                                                         != vlSelf->top__DOT__ID__DOT__inst) 
                                                                        & ((0x30200073U 
                                                                            != vlSelf->top__DOT__ID__DOT__inst) 
                                                                           & ((0x10500073U 
                                                                               != vlSelf->top__DOT__ID__DOT__inst) 
                                                                              & (0x12000073U 
                                                                                == 
                                                                                (0xfe007fffU 
                                                                                & vlSelf->top__DOT__ID__DOT__inst))))))))))))))))));
    vlSelf->top__DOT__csr__DOT__writeData = ((2U == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op))
                                              ? vlSelf->top__DOT__MEM_WB__DOT__ff_csr_data
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op))
                                                  ? vlSelf->top__DOT__MEM_WB__DOT__ff_csr_data
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op))
                                                   ? vlSelf->top__DOT__csr__DOT___T_510
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op))
                                                    ? vlSelf->top__DOT__csr__DOT___T_512
                                                    : 0U))));
    vlSelf->top__DOT__MEM__DOT__hasTrap = (((((7U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType)) 
                                              | (5U 
                                                 == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))) 
                                             | ((8U 
                                                 == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType)) 
                                                & (IData)(vlSelf->top__DOT__MEM__DOT__memExcept))) 
                                            | ((1U 
                                                == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType)) 
                                               | (2U 
                                                  == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType)))) 
                                           | (IData)(vlSelf->top__DOT__csr__DOT__hasInt));
    vlSelf->top__DOT__ID__DOT___T_293 = ((0x5013U == 
                                          (0xfe00707fU 
                                           & vlSelf->top__DOT__ID__DOT__inst)) 
                                         | ((0x40005033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->top__DOT__ID__DOT__inst)) 
                                            | ((0x40005013U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->top__DOT__ID__DOT__inst)) 
                                               | ((0x63U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__ID__DOT__inst)) 
                                                  & ((0x1063U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__ID__DOT__inst)) 
                                                     & ((0x4063U 
                                                         != 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__ID__DOT__inst)) 
                                                        & ((0x5063U 
                                                            != 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__ID__DOT__inst)) 
                                                           & ((0x6063U 
                                                               != 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__ID__DOT__inst)) 
                                                              & ((0x7063U 
                                                                  != 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                 & ((0x6fU 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                    | ((0x67U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                       | ((3U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                          | ((0x1003U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                             | ((0x2003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                                | ((0x4003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                                | ((0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                                | ((0x23U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                                & (IData)(top__DOT__ID__DOT___T_276))))))))))))))))));
    if ((0x67U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        top__DOT__ID__DOT___T_457 = 0U;
        top__DOT__ID__DOT___T_573 = 0U;
        top__DOT__ID__DOT___T_747 = 0U;
        top__DOT__ID__DOT___T_341 = 7U;
    } else if ((3U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        top__DOT__ID__DOT___T_457 = 0U;
        top__DOT__ID__DOT___T_573 = 1U;
        top__DOT__ID__DOT___T_747 = 8U;
        top__DOT__ID__DOT___T_341 = 1U;
    } else if ((0x1003U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        top__DOT__ID__DOT___T_457 = 0U;
        top__DOT__ID__DOT___T_573 = 2U;
        top__DOT__ID__DOT___T_747 = 8U;
        top__DOT__ID__DOT___T_341 = 1U;
    } else if ((0x2003U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        top__DOT__ID__DOT___T_457 = 0U;
        top__DOT__ID__DOT___T_573 = 3U;
        top__DOT__ID__DOT___T_747 = 8U;
        top__DOT__ID__DOT___T_341 = 1U;
    } else if ((0x4003U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        top__DOT__ID__DOT___T_457 = 0U;
        top__DOT__ID__DOT___T_573 = 4U;
        top__DOT__ID__DOT___T_747 = 8U;
        top__DOT__ID__DOT___T_341 = 1U;
    } else if ((0x5003U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        top__DOT__ID__DOT___T_457 = 0U;
        top__DOT__ID__DOT___T_573 = 5U;
        top__DOT__ID__DOT___T_747 = 8U;
        top__DOT__ID__DOT___T_341 = 1U;
    } else if ((0x23U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        top__DOT__ID__DOT___T_457 = 0U;
        top__DOT__ID__DOT___T_573 = 6U;
        top__DOT__ID__DOT___T_747 = 8U;
        top__DOT__ID__DOT___T_341 = 1U;
    } else if ((0x1023U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        top__DOT__ID__DOT___T_457 = 0U;
        top__DOT__ID__DOT___T_573 = 7U;
        top__DOT__ID__DOT___T_747 = 8U;
        top__DOT__ID__DOT___T_341 = 1U;
    } else if ((0x2023U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        top__DOT__ID__DOT___T_457 = 0U;
        top__DOT__ID__DOT___T_573 = 8U;
        top__DOT__ID__DOT___T_747 = 8U;
        top__DOT__ID__DOT___T_341 = 1U;
    } else if ((0xfU == (0xf00fffffU & vlSelf->top__DOT__ID__DOT__inst))) {
        top__DOT__ID__DOT___T_457 = 3U;
        top__DOT__ID__DOT___T_573 = 9U;
        top__DOT__ID__DOT___T_747 = 0U;
        top__DOT__ID__DOT___T_341 = 0U;
    } else if ((0x100fU == vlSelf->top__DOT__ID__DOT__inst)) {
        top__DOT__ID__DOT___T_457 = 0U;
        top__DOT__ID__DOT___T_573 = 0xaU;
        top__DOT__ID__DOT___T_747 = 0U;
        top__DOT__ID__DOT___T_341 = 0U;
    } else if ((0x1073U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        top__DOT__ID__DOT___T_457 = 0U;
        top__DOT__ID__DOT___T_573 = 0U;
        top__DOT__ID__DOT___T_747 = 0U;
        top__DOT__ID__DOT___T_341 = 0U;
    } else if ((0x2073U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        top__DOT__ID__DOT___T_457 = 0U;
        top__DOT__ID__DOT___T_573 = 0U;
        top__DOT__ID__DOT___T_747 = 0U;
        top__DOT__ID__DOT___T_341 = 0U;
    } else if ((0x3073U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        top__DOT__ID__DOT___T_457 = 0U;
        top__DOT__ID__DOT___T_573 = 0U;
        top__DOT__ID__DOT___T_747 = 0U;
        top__DOT__ID__DOT___T_341 = 0U;
    } else if ((0x5073U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        top__DOT__ID__DOT___T_457 = 0U;
        top__DOT__ID__DOT___T_573 = 0U;
        top__DOT__ID__DOT___T_747 = 0U;
        top__DOT__ID__DOT___T_341 = 0U;
    } else {
        top__DOT__ID__DOT___T_457 = top__DOT__ID__DOT___T_442;
        top__DOT__ID__DOT___T_573 = top__DOT__ID__DOT___T_558;
        top__DOT__ID__DOT___T_747 = top__DOT__ID__DOT___T_732;
        top__DOT__ID__DOT___T_341 = top__DOT__ID__DOT___T_326;
    }
    top__DOT__ID__DOT___T_404 = ((0x4063U == (0x707fU 
                                              & vlSelf->top__DOT__ID__DOT__inst))
                                  ? 0U : ((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__ID__DOT__inst))
                                           ? 0U : (
                                                   (0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__ID__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x7063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__ID__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__ID__DOT__inst))
                                                      ? 8U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__ID__DOT__inst))
                                                       ? 8U
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__ID__DOT__inst))
                                                        ? 3U
                                                        : 
                                                       ((0x1003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__ID__DOT__inst))
                                                         ? 3U
                                                         : 
                                                        ((0x2003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__ID__DOT__inst))
                                                          ? 3U
                                                          : 
                                                         ((0x4003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__ID__DOT__inst))
                                                           ? 3U
                                                           : 
                                                          ((0x5003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__ID__DOT__inst))
                                                            ? 3U
                                                            : 
                                                           ((0x23U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__ID__DOT__inst))
                                                             ? 4U
                                                             : 
                                                            ((0x1023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__ID__DOT__inst))
                                                              ? 4U
                                                              : 
                                                             ((0x2023U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__ID__DOT__inst))
                                                               ? 4U
                                                               : 
                                                              ((0xfU 
                                                                == 
                                                                (0xf00fffffU 
                                                                 & vlSelf->top__DOT__ID__DOT__inst))
                                                                ? 3U
                                                                : (IData)(top__DOT__ID__DOT___T_389))))))))))))))));
    top__DOT__ID__DOT___T_644 = ((0x1033U == (0xfe00707fU 
                                              & vlSelf->top__DOT__ID__DOT__inst))
                                  ? 0U : ((0x1013U 
                                           == (0xfe00707fU 
                                               & vlSelf->top__DOT__ID__DOT__inst))
                                           ? 0U : (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__ID__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x5013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__ID__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x40005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__ID__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x40005013U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__ID__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__ID__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__ID__DOT__inst))
                                                         ? 0U
                                                         : 
                                                        ((0x4063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__ID__DOT__inst))
                                                          ? 0U
                                                          : 
                                                         ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__ID__DOT__inst))
                                                           ? 0U
                                                           : 
                                                          ((0x6063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__ID__DOT__inst))
                                                            ? 0U
                                                            : 
                                                           ((0x7063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__ID__DOT__inst))
                                                             ? 0U
                                                             : 
                                                            ((0x6fU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->top__DOT__ID__DOT__inst))
                                                              ? 0U
                                                              : 
                                                             ((0x67U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__ID__DOT__inst))
                                                               ? 0U
                                                               : 
                                                              ((3U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__ID__DOT__inst))
                                                                ? 0U
                                                                : (IData)(top__DOT__ID__DOT___T_629))))))))))))))));
    top__DOT__ID__DOT___T_229 = ((0x5063U == (0x707fU 
                                              & vlSelf->top__DOT__ID__DOT__inst)) 
                                 | ((0x6063U == (0x707fU 
                                                 & vlSelf->top__DOT__ID__DOT__inst)) 
                                    | ((0x7063U == 
                                        (0x707fU & vlSelf->top__DOT__ID__DOT__inst)) 
                                       | ((0x6fU != 
                                           (0x7fU & vlSelf->top__DOT__ID__DOT__inst)) 
                                          & ((0x67U 
                                              != (0x707fU 
                                                  & vlSelf->top__DOT__ID__DOT__inst)) 
                                             & ((3U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__ID__DOT__inst)) 
                                                & ((0x1003U 
                                                    != 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__ID__DOT__inst)) 
                                                   & ((0x2003U 
                                                       != 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__ID__DOT__inst)) 
                                                      & ((0x4003U 
                                                          != 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__ID__DOT__inst)) 
                                                         & ((0x5003U 
                                                             != 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__ID__DOT__inst)) 
                                                            & ((0x23U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__ID__DOT__inst)) 
                                                               | ((0x1023U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                  | ((0x2023U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                     | ((0xfU 
                                                                         != 
                                                                         (0xf00fffffU 
                                                                          & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                        & ((0x100fU 
                                                                            != vlSelf->top__DOT__ID__DOT__inst) 
                                                                           & ((0x1073U 
                                                                               != 
                                                                               (0x707fU 
                                                                                & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                              & ((0x2073U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                                & ((0x3073U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                                & (IData)(top__DOT__ID__DOT___T_153)))))))))))))))))));
    top__DOT__ID__DOT___T_171 = ((0x5063U == (0x707fU 
                                              & vlSelf->top__DOT__ID__DOT__inst)) 
                                 | ((0x6063U == (0x707fU 
                                                 & vlSelf->top__DOT__ID__DOT__inst)) 
                                    | ((0x7063U == 
                                        (0x707fU & vlSelf->top__DOT__ID__DOT__inst)) 
                                       | ((0x6fU != 
                                           (0x7fU & vlSelf->top__DOT__ID__DOT__inst)) 
                                          & ((0x67U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__ID__DOT__inst)) 
                                             | ((3U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__ID__DOT__inst)) 
                                                | ((0x1003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__ID__DOT__inst)) 
                                                   | ((0x2003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__ID__DOT__inst)) 
                                                      | ((0x4003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__ID__DOT__inst)) 
                                                         | ((0x5003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__ID__DOT__inst)) 
                                                            | ((0x23U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__ID__DOT__inst)) 
                                                               | ((0x1023U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                  | ((0x2023U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                     | ((0xfU 
                                                                         != 
                                                                         (0xf00fffffU 
                                                                          & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                        & ((0x100fU 
                                                                            != vlSelf->top__DOT__ID__DOT__inst) 
                                                                           & ((0x1073U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                              | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                                | ((0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                                | (IData)(top__DOT__ID__DOT___T_153)))))))))))))))))));
    vlSelf->top__DOT__csr__DOT___T_768 = (((QData)((IData)(vlSelf->top__DOT__csr__DOT__writeData)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top__DOT__csr__DOT__mcycle_data)));
    vlSelf->top__DOT__csr__DOT___T_762 = (((QData)((IData)(
                                                           (vlSelf->top__DOT__csr__DOT__mcycle_data 
                                                            >> 0x20U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top__DOT__csr__DOT__writeData)));
    vlSelf->top__DOT__csr__DOT___T_771 = (((QData)((IData)(vlSelf->top__DOT__csr__DOT__writeData)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top__DOT__csr__DOT__minstret_data)));
    vlSelf->top__DOT__csr__DOT___T_765 = (((QData)((IData)(
                                                           (vlSelf->top__DOT__csr__DOT__minstret_data 
                                                            >> 0x20U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top__DOT__csr__DOT__writeData)));
    vlSelf->top__DOT__csr__DOT___T_756 = (((IData)(vlSelf->top__DOT__csr__DOT__mipReal_seip) 
                                           << 9U) | 
                                          (((IData)(vlSelf->top__DOT__csr__DOT__mipReal_stip) 
                                            << 5U) 
                                           | (2U & vlSelf->top__DOT__csr__DOT__writeData)));
    vlSelf->top__DOT__csr__DOT___T_675 = ((0x40000U 
                                           & vlSelf->top__DOT__csr__DOT__writeData) 
                                          | (((IData)(vlSelf->top__DOT__csr__DOT__mstatus_mpp) 
                                              << 0xbU) 
                                             | ((0x100U 
                                                 & vlSelf->top__DOT__csr__DOT__writeData) 
                                                | (((IData)(vlSelf->top__DOT__csr__DOT__mstatus_mpie) 
                                                    << 7U) 
                                                   | ((0x20U 
                                                       & vlSelf->top__DOT__csr__DOT__writeData) 
                                                      | (((IData)(vlSelf->top__DOT__csr__DOT__mstatus_mie) 
                                                          << 3U) 
                                                         | (2U 
                                                            & vlSelf->top__DOT__csr__DOT__writeData)))))));
    vlSelf->top__DOT__csr__DOT___T_717 = (((IData)(vlSelf->top__DOT__csr__DOT__mie_meie) 
                                           << 0xbU) 
                                          | ((0x200U 
                                              & vlSelf->top__DOT__csr__DOT__writeData) 
                                             | (((IData)(vlSelf->top__DOT__csr__DOT__mie_mtie) 
                                                 << 7U) 
                                                | ((0x20U 
                                                    & vlSelf->top__DOT__csr__DOT__writeData) 
                                                   | (((IData)(vlSelf->top__DOT__csr__DOT__mie_msie) 
                                                       << 3U) 
                                                      | (2U 
                                                         & vlSelf->top__DOT__csr__DOT__writeData))))));
    vlSelf->io_ram_en = (1U & (~ (IData)(vlSelf->top__DOT__MEM__DOT__hasTrap)));
    vlSelf->top__DOT__csr__DOT__handExcS = ((~ ((IData)(vlSelf->top__DOT__csr__DOT__mode) 
                                                >> 1U)) 
                                            & (((~ (IData)(vlSelf->top__DOT__csr__DOT__hasInt)) 
                                                & (IData)(vlSelf->top__DOT__MEM__DOT__hasTrap)) 
                                               & (vlSelf->top__DOT__csr__DOT__medeleg_data 
                                                  >> 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                                    ? 2U
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                                     ? 0U
                                                     : 
                                                    ((1U 
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
                                                        : 0U))))))));
    vlSelf->top__DOT__ID__DOT___GEN_2 = (((- (IData)((IData)(vlSelf->top__DOT__ID__DOT____VdfgTmp_h8afae4a5__0))) 
                                          << 0xcU) 
                                         | (IData)(vlSelf->top__DOT__ID__DOT__immI));
    if ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__ID__DOT___T_472 = 6U;
        vlSelf->top__DOT__ID__DOT___T_588 = 0U;
        vlSelf->top__DOT__ID__DOT___T_762 = 0U;
        top__DOT__ID__DOT___T_356 = 1U;
    } else if ((0x3013U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__ID__DOT___T_472 = 6U;
        vlSelf->top__DOT__ID__DOT___T_588 = 0U;
        vlSelf->top__DOT__ID__DOT___T_762 = 0U;
        top__DOT__ID__DOT___T_356 = 1U;
    } else if ((0x1033U == (0xfe00707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__ID__DOT___T_472 = 7U;
        vlSelf->top__DOT__ID__DOT___T_588 = 0U;
        vlSelf->top__DOT__ID__DOT___T_762 = 0U;
        top__DOT__ID__DOT___T_356 = 1U;
    } else if ((0x1013U == (0xfe00707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__ID__DOT___T_472 = 7U;
        vlSelf->top__DOT__ID__DOT___T_588 = 0U;
        vlSelf->top__DOT__ID__DOT___T_762 = 0U;
        top__DOT__ID__DOT___T_356 = 1U;
    } else if ((0x5033U == (0xfe00707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__ID__DOT___T_472 = 8U;
        vlSelf->top__DOT__ID__DOT___T_588 = 0U;
        vlSelf->top__DOT__ID__DOT___T_762 = 0U;
        top__DOT__ID__DOT___T_356 = 1U;
    } else if ((0x5013U == (0xfe00707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__ID__DOT___T_472 = 8U;
        vlSelf->top__DOT__ID__DOT___T_588 = 0U;
        vlSelf->top__DOT__ID__DOT___T_762 = 0U;
        top__DOT__ID__DOT___T_356 = 1U;
    } else if ((0x40005033U == (0xfe00707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__ID__DOT___T_472 = 9U;
        vlSelf->top__DOT__ID__DOT___T_588 = 0U;
        vlSelf->top__DOT__ID__DOT___T_762 = 0U;
        top__DOT__ID__DOT___T_356 = 1U;
    } else if ((0x40005013U == (0xfe00707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__ID__DOT___T_472 = 9U;
        vlSelf->top__DOT__ID__DOT___T_588 = 0U;
        vlSelf->top__DOT__ID__DOT___T_762 = 0U;
        top__DOT__ID__DOT___T_356 = 1U;
    } else if ((0x63U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__ID__DOT___T_472 = 0U;
        vlSelf->top__DOT__ID__DOT___T_588 = 0U;
        vlSelf->top__DOT__ID__DOT___T_762 = 0U;
        top__DOT__ID__DOT___T_356 = 0U;
    } else if ((0x1063U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__ID__DOT___T_472 = 0U;
        vlSelf->top__DOT__ID__DOT___T_588 = 0U;
        vlSelf->top__DOT__ID__DOT___T_762 = 0U;
        top__DOT__ID__DOT___T_356 = 0U;
    } else if ((0x4063U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__ID__DOT___T_472 = 0U;
        vlSelf->top__DOT__ID__DOT___T_588 = 0U;
        vlSelf->top__DOT__ID__DOT___T_762 = 0U;
        top__DOT__ID__DOT___T_356 = 0U;
    } else if ((0x5063U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__ID__DOT___T_472 = 0U;
        vlSelf->top__DOT__ID__DOT___T_588 = 0U;
        vlSelf->top__DOT__ID__DOT___T_762 = 0U;
        top__DOT__ID__DOT___T_356 = 0U;
    } else if ((0x6063U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__ID__DOT___T_472 = 0U;
        vlSelf->top__DOT__ID__DOT___T_588 = 0U;
        vlSelf->top__DOT__ID__DOT___T_762 = 0U;
        top__DOT__ID__DOT___T_356 = 0U;
    } else if ((0x7063U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__ID__DOT___T_472 = 0U;
        vlSelf->top__DOT__ID__DOT___T_588 = 0U;
        vlSelf->top__DOT__ID__DOT___T_762 = 0U;
        top__DOT__ID__DOT___T_356 = 0U;
    } else if ((0x6fU == (0x7fU & vlSelf->top__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__ID__DOT___T_472 = 0U;
        vlSelf->top__DOT__ID__DOT___T_588 = 0U;
        vlSelf->top__DOT__ID__DOT___T_762 = 0U;
        top__DOT__ID__DOT___T_356 = 7U;
    } else {
        vlSelf->top__DOT__ID__DOT___T_472 = top__DOT__ID__DOT___T_457;
        vlSelf->top__DOT__ID__DOT___T_588 = top__DOT__ID__DOT___T_573;
        vlSelf->top__DOT__ID__DOT___T_762 = top__DOT__ID__DOT___T_747;
        top__DOT__ID__DOT___T_356 = top__DOT__ID__DOT___T_341;
    }
    top__DOT__ID__DOT___T_419 = ((0x6013U == (0x707fU 
                                              & vlSelf->top__DOT__ID__DOT__inst))
                                  ? 3U : ((0x7033U 
                                           == (0xfe00707fU 
                                               & vlSelf->top__DOT__ID__DOT__inst))
                                           ? 2U : (
                                                   (0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__ID__DOT__inst))
                                                    ? 3U
                                                    : 
                                                   ((0x2033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__ID__DOT__inst))
                                                     ? 2U
                                                     : 
                                                    ((0x2013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__ID__DOT__inst))
                                                      ? 3U
                                                      : 
                                                     ((0x3033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__ID__DOT__inst))
                                                       ? 2U
                                                       : 
                                                      ((0x3013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__ID__DOT__inst))
                                                        ? 3U
                                                        : 
                                                       ((0x1033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__ID__DOT__inst))
                                                         ? 2U
                                                         : 
                                                        ((0x1013U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__ID__DOT__inst))
                                                          ? 6U
                                                          : 
                                                         ((0x5033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->top__DOT__ID__DOT__inst))
                                                           ? 2U
                                                           : 
                                                          ((0x5013U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->top__DOT__ID__DOT__inst))
                                                            ? 6U
                                                            : 
                                                           ((0x40005033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->top__DOT__ID__DOT__inst))
                                                             ? 2U
                                                             : 
                                                            ((0x40005013U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->top__DOT__ID__DOT__inst))
                                                              ? 6U
                                                              : 
                                                             ((0x63U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__ID__DOT__inst))
                                                               ? 0U
                                                               : 
                                                              ((0x1063U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__ID__DOT__inst))
                                                                ? 0U
                                                                : (IData)(top__DOT__ID__DOT___T_404))))))))))))))));
    if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__ID__DOT__branchOp = 0U;
        vlSelf->top__DOT__ID__DOT__csrOp = 0U;
        vlSelf->top__DOT__ID__DOT__aluSrc1 = 1U;
        vlSelf->top__DOT__ID__DOT__aluSrc2 = 2U;
    } else if ((0x13U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__ID__DOT__branchOp = 0U;
        vlSelf->top__DOT__ID__DOT__csrOp = 0U;
        vlSelf->top__DOT__ID__DOT__aluSrc1 = 1U;
        vlSelf->top__DOT__ID__DOT__aluSrc2 = 3U;
    } else if ((0x40000033U == (0xfe00707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__ID__DOT__branchOp = 0U;
        vlSelf->top__DOT__ID__DOT__csrOp = 0U;
        vlSelf->top__DOT__ID__DOT__aluSrc1 = 1U;
        vlSelf->top__DOT__ID__DOT__aluSrc2 = 2U;
    } else if ((0x37U == (0x7fU & vlSelf->top__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__ID__DOT__branchOp = 0U;
        vlSelf->top__DOT__ID__DOT__csrOp = 0U;
        vlSelf->top__DOT__ID__DOT__aluSrc1 = 0U;
        vlSelf->top__DOT__ID__DOT__aluSrc2 = 5U;
    } else if ((0x17U == (0x7fU & vlSelf->top__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__ID__DOT__branchOp = 0U;
        vlSelf->top__DOT__ID__DOT__csrOp = 0U;
        vlSelf->top__DOT__ID__DOT__aluSrc1 = 7U;
        vlSelf->top__DOT__ID__DOT__aluSrc2 = 5U;
    } else if ((0x4033U == (0xfe00707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__ID__DOT__branchOp = 0U;
        vlSelf->top__DOT__ID__DOT__csrOp = 0U;
        vlSelf->top__DOT__ID__DOT__aluSrc1 = 1U;
        vlSelf->top__DOT__ID__DOT__aluSrc2 = 2U;
    } else if ((0x4013U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__ID__DOT__branchOp = 0U;
        vlSelf->top__DOT__ID__DOT__csrOp = 0U;
        vlSelf->top__DOT__ID__DOT__aluSrc1 = 1U;
        vlSelf->top__DOT__ID__DOT__aluSrc2 = 3U;
    } else if ((0x6033U == (0xfe00707fU & vlSelf->top__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__ID__DOT__branchOp = 0U;
        vlSelf->top__DOT__ID__DOT__csrOp = 0U;
        vlSelf->top__DOT__ID__DOT__aluSrc1 = 1U;
        vlSelf->top__DOT__ID__DOT__aluSrc2 = 2U;
    } else {
        if ((0x6013U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
            vlSelf->top__DOT__ID__DOT__branchOp = 0U;
            vlSelf->top__DOT__ID__DOT__csrOp = 0U;
            vlSelf->top__DOT__ID__DOT__aluSrc1 = 1U;
        } else if ((0x7033U == (0xfe00707fU & vlSelf->top__DOT__ID__DOT__inst))) {
            vlSelf->top__DOT__ID__DOT__branchOp = 0U;
            vlSelf->top__DOT__ID__DOT__csrOp = 0U;
            vlSelf->top__DOT__ID__DOT__aluSrc1 = 1U;
        } else if ((0x7013U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
            vlSelf->top__DOT__ID__DOT__branchOp = 0U;
            vlSelf->top__DOT__ID__DOT__csrOp = 0U;
            vlSelf->top__DOT__ID__DOT__aluSrc1 = 1U;
        } else if ((0x2033U == (0xfe00707fU & vlSelf->top__DOT__ID__DOT__inst))) {
            vlSelf->top__DOT__ID__DOT__branchOp = 0U;
            vlSelf->top__DOT__ID__DOT__csrOp = 0U;
            vlSelf->top__DOT__ID__DOT__aluSrc1 = 1U;
        } else if ((0x2013U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))) {
            vlSelf->top__DOT__ID__DOT__branchOp = 0U;
            vlSelf->top__DOT__ID__DOT__csrOp = 0U;
            vlSelf->top__DOT__ID__DOT__aluSrc1 = 1U;
        } else {
            if ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__ID__DOT__inst))) {
                vlSelf->top__DOT__ID__DOT__branchOp = 0U;
                vlSelf->top__DOT__ID__DOT__csrOp = 0U;
            } else {
                vlSelf->top__DOT__ID__DOT__branchOp 
                    = top__DOT__ID__DOT___T_529;
                vlSelf->top__DOT__ID__DOT__csrOp = 
                    ((0x3013U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst))
                      ? 0U : (IData)(top__DOT__ID__DOT___T_644));
            }
            vlSelf->top__DOT__ID__DOT__aluSrc1 = top__DOT__ID__DOT___T_356;
        }
        vlSelf->top__DOT__ID__DOT__aluSrc2 = top__DOT__ID__DOT___T_419;
    }
    top__DOT__ID__DOT___T_246 = ((0x6033U == (0xfe00707fU 
                                              & vlSelf->top__DOT__ID__DOT__inst)) 
                                 | ((0x6013U != (0x707fU 
                                                 & vlSelf->top__DOT__ID__DOT__inst)) 
                                    & ((0x7033U == 
                                        (0xfe00707fU 
                                         & vlSelf->top__DOT__ID__DOT__inst)) 
                                       | ((0x7013U 
                                           != (0x707fU 
                                               & vlSelf->top__DOT__ID__DOT__inst)) 
                                          & ((0x2033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->top__DOT__ID__DOT__inst)) 
                                             | ((0x2013U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__ID__DOT__inst)) 
                                                & ((0x3033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__ID__DOT__inst)) 
                                                   | ((0x3013U 
                                                       != 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__ID__DOT__inst)) 
                                                      & ((0x1033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__ID__DOT__inst)) 
                                                         | ((0x1013U 
                                                             != 
                                                             (0xfe00707fU 
                                                              & vlSelf->top__DOT__ID__DOT__inst)) 
                                                            & ((0x5033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->top__DOT__ID__DOT__inst)) 
                                                               | ((0x5013U 
                                                                   != 
                                                                   (0xfe00707fU 
                                                                    & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                  & ((0x40005033U 
                                                                      == 
                                                                      (0xfe00707fU 
                                                                       & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                     | ((0x40005013U 
                                                                         != 
                                                                         (0xfe00707fU 
                                                                          & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                        & ((0x63U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                           | ((0x1063U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                              | ((0x4063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                                | (IData)(top__DOT__ID__DOT___T_229))))))))))))))))));
    top__DOT__ID__DOT___T_188 = ((0x6033U == (0xfe00707fU 
                                              & vlSelf->top__DOT__ID__DOT__inst)) 
                                 | ((0x6013U == (0x707fU 
                                                 & vlSelf->top__DOT__ID__DOT__inst)) 
                                    | ((0x7033U == 
                                        (0xfe00707fU 
                                         & vlSelf->top__DOT__ID__DOT__inst)) 
                                       | ((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__ID__DOT__inst)) 
                                          | ((0x2033U 
                                              == (0xfe00707fU 
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
                                                               | ((0x5013U 
                                                                   == 
                                                                   (0xfe00707fU 
                                                                    & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                  | ((0x40005033U 
                                                                      == 
                                                                      (0xfe00707fU 
                                                                       & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                     | ((0x40005013U 
                                                                         == 
                                                                         (0xfe00707fU 
                                                                          & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                        | ((0x63U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                           | ((0x1063U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                              | ((0x4063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__ID__DOT__inst)) 
                                                                                | (IData)(top__DOT__ID__DOT___T_171))))))))))))))))));
    vlSelf->top__DOT__csr__DOT___T_605 = ((IData)(vlSelf->top__DOT__csr__DOT__handIntS) 
                                          | (IData)(vlSelf->top__DOT__csr__DOT__handExcS));
    vlSelf->top__DOT__ID__DOT__csrActOp = ((3U == (IData)(vlSelf->top__DOT__ID__DOT__csrOp))
                                            ? ((0U 
                                                == (IData)(vlSelf->top__DOT__ID__DOT__rd))
                                                ? 2U
                                                : 3U)
                                            : ((4U 
                                                == (IData)(vlSelf->top__DOT__ID__DOT__csrOp))
                                                ? (
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                    ? 1U
                                                    : 4U)
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->top__DOT__ID__DOT__csrOp))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                     ? 1U
                                                     : 5U)
                                                    : 0U)));
    vlSelf->top__DOT__ID_io_read2_en = ((0x33U == (0xfe00707fU 
                                                   & vlSelf->top__DOT__ID__DOT__inst)) 
                                        | ((0x13U != 
                                            (0x707fU 
                                             & vlSelf->top__DOT__ID__DOT__inst)) 
                                           & ((0x40000033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->top__DOT__ID__DOT__inst)) 
                                              | ((0x37U 
                                                  != 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__ID__DOT__inst)) 
                                                 & ((0x17U 
                                                     != 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__ID__DOT__inst)) 
                                                    & ((0x4033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__ID__DOT__inst)) 
                                                       | ((0x4013U 
                                                           != 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__ID__DOT__inst)) 
                                                          & (IData)(top__DOT__ID__DOT___T_246))))))));
    vlSelf->top__DOT__ID__DOT__regEn1 = ((0x33U == 
                                          (0xfe00707fU 
                                           & vlSelf->top__DOT__ID__DOT__inst)) 
                                         | ((0x13U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__ID__DOT__inst)) 
                                            | ((0x40000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->top__DOT__ID__DOT__inst)) 
                                               | ((0x37U 
                                                   != 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__ID__DOT__inst)) 
                                                  & ((0x17U 
                                                      != 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__ID__DOT__inst)) 
                                                     & ((0x4033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__ID__DOT__inst)) 
                                                        | ((0x4013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__ID__DOT__inst)) 
                                                           | (IData)(top__DOT__ID__DOT___T_188))))))));
    vlSelf->top__DOT__csr__DOT___GEN_67 = ((IData)(vlSelf->top__DOT__csr__DOT___T_605) 
                                           & (IData)(vlSelf->top__DOT__csr__DOT__mstatus_mie));
    vlSelf->top__DOT__ID__DOT___T_839 = ((0U != (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                          ? (IData)(vlSelf->top__DOT__ID__DOT__immI)
                                          : 0U);
    vlSelf->top__DOT__ID_io_read2_data = (((IData)(vlSelf->top__DOT__ID_io_read2_en) 
                                           & (0U != (IData)(vlSelf->top__DOT__ID__DOT__rs2)))
                                           ? (((IData)(vlSelf->top__DOT__ID_EX__DOT__ff_regWen) 
                                               & (IData)(vlSelf->top__DOT__resoler__DOT___T_10))
                                               ? (IData)(vlSelf->top__DOT__EX__DOT__result)
                                               : (((IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_reg_en) 
                                                   & ((IData)(vlSelf->top__DOT__ID__DOT__rs2) 
                                                      == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_reg_addr)))
                                                   ? vlSelf->top__DOT__MEM_io_mem_o_reg_data
                                                   : 
                                                  (((IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_en) 
                                                    & ((IData)(vlSelf->top__DOT__ID__DOT__rs2) 
                                                       == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr)))
                                                    ? vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__ID_io_read2_en)
                                                     ? 
                                                    ((0x1fU 
                                                      == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                      ? vlSelf->top__DOT__regfile__DOT__regfile_31
                                                      : 
                                                     ((0x1eU 
                                                       == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                       ? vlSelf->top__DOT__regfile__DOT__regfile_30
                                                       : 
                                                      ((0x1dU 
                                                        == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                        ? vlSelf->top__DOT__regfile__DOT__regfile_29
                                                        : 
                                                       ((0x1cU 
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
                                                     : 0U))))
                                           : 0U);
    vlSelf->top__DOT__resoler_io_loadflag = (((IData)(vlSelf->top__DOT__ID__DOT__regEn1) 
                                              & ((IData)(vlSelf->top__DOT__EX_io_ex_o_load) 
                                                 & (IData)(vlSelf->top__DOT__resoler__DOT___T_2))) 
                                             | ((IData)(vlSelf->top__DOT__ID_io_read2_en) 
                                                & ((IData)(vlSelf->top__DOT__EX_io_ex_o_load) 
                                                   & (IData)(vlSelf->top__DOT__resoler__DOT___T_10))));
    vlSelf->top__DOT__ID_io_read1_data = (((IData)(vlSelf->top__DOT__ID__DOT__regEn1) 
                                           & (0U != (IData)(vlSelf->top__DOT__ID__DOT__rs1)))
                                           ? (((IData)(vlSelf->top__DOT__ID_EX__DOT__ff_regWen) 
                                               & (IData)(vlSelf->top__DOT__resoler__DOT___T_2))
                                               ? (IData)(vlSelf->top__DOT__EX__DOT__result)
                                               : (((IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_reg_en) 
                                                   & ((IData)(vlSelf->top__DOT__ID__DOT__rs1) 
                                                      == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_reg_addr)))
                                                   ? vlSelf->top__DOT__MEM_io_mem_o_reg_data
                                                   : 
                                                  (((IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_en) 
                                                    & ((IData)(vlSelf->top__DOT__ID__DOT__rs1) 
                                                       == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr)))
                                                    ? vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__ID__DOT__regEn1)
                                                     ? 
                                                    ((0x1fU 
                                                      == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                      ? vlSelf->top__DOT__regfile__DOT__regfile_31
                                                      : 
                                                     ((0x1eU 
                                                       == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                       ? vlSelf->top__DOT__regfile__DOT__regfile_30
                                                       : 
                                                      ((0x1dU 
                                                        == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                        ? vlSelf->top__DOT__regfile__DOT__regfile_29
                                                        : 
                                                       ((0x1cU 
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
                                                     : 0U))))
                                           : 0U);
    vlSelf->top__DOT__csr__DOT___T_235 = ((0xf13U == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                           ? 0U : (
                                                   (0xf14U 
                                                    == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                    ? 0U
                                                    : 
                                                   ((0x300U 
                                                     == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                     ? vlSelf->top__DOT__csr__DOT___T_31
                                                     : 
                                                    ((0x301U 
                                                      == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                      ? 0x40141101U
                                                      : 
                                                     ((0x302U 
                                                       == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                       ? vlSelf->top__DOT__csr__DOT__medeleg_data
                                                       : 
                                                      ((0x303U 
                                                        == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                        ? vlSelf->top__DOT__csr__DOT__mideleg_data
                                                        : 
                                                       ((0x304U 
                                                         == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                         ? vlSelf->top__DOT__csr__DOT___T_47
                                                         : 
                                                        ((0x305U 
                                                          == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                          ? vlSelf->top__DOT__csr__DOT___T_129
                                                          : 
                                                         ((0x306U 
                                                           == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                           ? 0U
                                                           : 
                                                          ((0x340U 
                                                            == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                            ? vlSelf->top__DOT__csr__DOT__mscratch_data
                                                            : 
                                                           ((0x341U 
                                                             == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                             ? vlSelf->top__DOT__csr__DOT__mepc_data
                                                             : 
                                                            ((0x342U 
                                                              == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                              ? vlSelf->top__DOT__csr__DOT___T_130
                                                              : 
                                                             ((0x343U 
                                                               == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                               ? vlSelf->top__DOT__csr__DOT__mtval_data
                                                               : 
                                                              ((0x344U 
                                                                == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                                ? top__DOT__csr__DOT___T_142
                                                                : 
                                                               ((0xb00U 
                                                                 == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                                 ? (IData)(vlSelf->top__DOT__csr__DOT__mcycle_data)
                                                                 : 
                                                                ((0xb02U 
                                                                  == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                                  ? (IData)(vlSelf->top__DOT__csr__DOT__minstret_data)
                                                                  : 
                                                                 ((0xb80U 
                                                                   == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                                   ? (IData)(
                                                                             (vlSelf->top__DOT__csr__DOT__mcycle_data 
                                                                              >> 0x20U))
                                                                   : 
                                                                  ((0xb82U 
                                                                    == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                                    ? (IData)(
                                                                              (vlSelf->top__DOT__csr__DOT__minstret_data 
                                                                               >> 0x20U))
                                                                    : 0U))))))))))))))))));
    top__DOT__csr__DOT___T_267 = ((0x300U == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                  | ((0x301U == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                     | ((0x302U == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                        | ((0x303U 
                                            == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                           | ((0x304U 
                                               == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                              | ((0x305U 
                                                  == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                 | ((0x306U 
                                                     == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                    | ((0x340U 
                                                        == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                       | ((0x341U 
                                                           == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                          | ((0x342U 
                                                              == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                             | ((0x343U 
                                                                 == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                | ((0x344U 
                                                                    == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                   | ((0xb00U 
                                                                       == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                      | ((0xb02U 
                                                                          == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                         | ((0xb80U 
                                                                             == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                            | ((0xb82U 
                                                                                == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                               | (0x320U 
                                                                                == (IData)(vlSelf->top__DOT__ID__DOT___T_839))))))))))))))))));
    vlSelf->top__DOT__resoler_io_csrflag = (((0U != (IData)(vlSelf->top__DOT__ID__DOT__csrActOp)) 
                                             & (2U 
                                                != (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))) 
                                            & (((((0U 
                                                   != (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_csr_op)) 
                                                  & (1U 
                                                     != (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_csr_op))) 
                                                 & ((IData)(vlSelf->top__DOT__ID__DOT___T_839) 
                                                    == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_csr_addr))) 
                                                | ((IData)(vlSelf->top__DOT__resoler__DOT___T_35) 
                                                   & ((IData)(vlSelf->top__DOT__ID__DOT___T_839) 
                                                      == (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr)))) 
                                               | (((0U 
                                                    != (IData)(vlSelf->top__DOT__ID_EX__DOT__ff_csrOp)) 
                                                   & (1U 
                                                      != (IData)(vlSelf->top__DOT__ID_EX__DOT__ff_csrOp))) 
                                                  & ((IData)(vlSelf->top__DOT__ID__DOT___T_839) 
                                                     == (IData)(vlSelf->top__DOT__ID_EX__DOT__ff_csrAddr)))));
    vlSelf->top__DOT__ID__DOT__branchteke = ((1U == (IData)(vlSelf->top__DOT__ID__DOT__branchOp)) 
                                             | ((2U 
                                                 == (IData)(vlSelf->top__DOT__ID__DOT__branchOp))
                                                 ? 
                                                (vlSelf->top__DOT__ID_io_read1_data 
                                                 == vlSelf->top__DOT__ID_io_read2_data)
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->top__DOT__ID__DOT__branchOp))
                                                  ? 
                                                 (vlSelf->top__DOT__ID_io_read1_data 
                                                  != vlSelf->top__DOT__ID_io_read2_data)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__ID__DOT__branchOp))
                                                   ? 
                                                  VL_LTS_III(32, vlSelf->top__DOT__ID_io_read1_data, vlSelf->top__DOT__ID_io_read2_data)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__ID__DOT__branchOp))
                                                    ? 
                                                   VL_GTES_III(32, vlSelf->top__DOT__ID_io_read1_data, vlSelf->top__DOT__ID_io_read2_data)
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->top__DOT__ID__DOT__branchOp))
                                                     ? 
                                                    (vlSelf->top__DOT__ID_io_read1_data 
                                                     < vlSelf->top__DOT__ID_io_read2_data)
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->top__DOT__ID__DOT__branchOp)) 
                                                     & (vlSelf->top__DOT__ID_io_read1_data 
                                                        >= vlSelf->top__DOT__ID_io_read2_data))))))));
    vlSelf->top__DOT__ID__DOT___T_791 = ((1U == (IData)(vlSelf->top__DOT__ID__DOT__branchOp))
                                          ? ((IData)(vlSelf->top__DOT__ID__DOT__regEn1)
                                              ? ((QData)((IData)(
                                                                 (vlSelf->top__DOT__ID_io_read1_data 
                                                                  + vlSelf->top__DOT__ID__DOT___GEN_2))) 
                                                 << 1U)
                                              : (QData)((IData)(
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
                                                                              << 1U)))))))))
                                          : (QData)((IData)(
                                                            (vlSelf->top__DOT__IF_ID__DOT__ff_pc 
                                                             + 
                                                             (((- (IData)((IData)(vlSelf->top__DOT__ID__DOT____VdfgTmp_h8afae4a5__0))) 
                                                               << 0xdU) 
                                                              | (((IData)(vlSelf->top__DOT__ID__DOT____VdfgTmp_h8afae4a5__0) 
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
                                                                          << 1U)))))))));
    vlSelf->top__DOT__csr__DOT__readable = ((0xc00U 
                                             == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                            | ((0xc02U 
                                                == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                               | ((0xc80U 
                                                   == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                  | ((0xc82U 
                                                      == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                     | ((0x100U 
                                                         == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                        | ((0x104U 
                                                            == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                           | ((0x105U 
                                                               == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                              | ((0x106U 
                                                                  == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                 | ((0x140U 
                                                                     == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                    | ((0x141U 
                                                                        == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                       | ((0x142U 
                                                                           == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                          | ((0x143U 
                                                                              == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                             | ((0x144U 
                                                                                == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                                | ((0x180U 
                                                                                == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                                | ((0xf11U 
                                                                                == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                                | ((0xf12U 
                                                                                == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                                | ((0xf13U 
                                                                                == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                                | ((0xf14U 
                                                                                == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                                | (IData)(top__DOT__csr__DOT___T_267)))))))))))))))))));
    vlSelf->top__DOT__csr__DOT__writable = ((0xc00U 
                                             != (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                            & ((0xc02U 
                                                != (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                               & ((0xc80U 
                                                   != (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                  & ((0xc82U 
                                                      != (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                     & ((0x100U 
                                                         == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                        | ((0x104U 
                                                            == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                           | ((0x105U 
                                                               == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                              | ((0x106U 
                                                                  == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                 | ((0x140U 
                                                                     == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                    | ((0x141U 
                                                                        == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                       | ((0x142U 
                                                                           == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                          | ((0x143U 
                                                                              == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                             | ((0x144U 
                                                                                == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                                | ((0x180U 
                                                                                == (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                                | ((0xf11U 
                                                                                != (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                                & ((0xf12U 
                                                                                != (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                                & ((0xf13U 
                                                                                != (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                                & ((0xf14U 
                                                                                != (IData)(vlSelf->top__DOT__ID__DOT___T_839)) 
                                                                                & (IData)(top__DOT__csr__DOT___T_267)))))))))))))))))));
    vlSelf->top__DOT__EX_MEM_io_stallPrev = ((IData)(vlSelf->top__DOT__resoler_io_csrflag) 
                                             | (IData)(vlSelf->top__DOT__MEM_io_stallReq));
    vlSelf->top__DOT__ID_io_stallid = ((IData)(vlSelf->top__DOT__MEM_io_stallReq) 
                                       | ((IData)(vlSelf->top__DOT__resoler_io_csrflag) 
                                          | (IData)(vlSelf->top__DOT__resoler_io_loadflag)));
    vlSelf->top__DOT__IF_ID_io_stallPrev = (1U & ((IData)(vlSelf->top__DOT__MEM_io_stallReq) 
                                                  | ((IData)(vlSelf->top__DOT__resoler_io_csrflag) 
                                                     | ((~ (IData)(vlSelf->io_rom_valid)) 
                                                        | (IData)(vlSelf->top__DOT__resoler_io_loadflag)))));
    vlSelf->top__DOT__ID__DOT__addrFault = ((IData)(vlSelf->top__DOT__ID__DOT__branchteke) 
                                            & (0U != 
                                               ((0U 
                                                 == (IData)(vlSelf->top__DOT__ID__DOT__branchOp))
                                                 ? 0U
                                                 : 
                                                (3U 
                                                 & (IData)(vlSelf->top__DOT__ID__DOT___T_791)))));
    vlSelf->top__DOT__ID__DOT__takepc = ((0U == (IData)(vlSelf->top__DOT__ID__DOT__branchOp))
                                          ? 0ULL : vlSelf->top__DOT__ID__DOT___T_791);
    vlSelf->top__DOT__csr__DOT___T_319 = ((IData)(vlSelf->top__DOT__csr__DOT__readable) 
                                          & (IData)(vlSelf->top__DOT__csr__DOT__writable));
    vlSelf->top__DOT__ID__DOT__branchmiss = (((IData)(vlSelf->top__DOT__IF_ID__DOT__ff_bpu_take) 
                                              != (IData)(vlSelf->top__DOT__ID__DOT__branchteke)) 
                                             | ((QData)((IData)(vlSelf->top__DOT__IF_ID__DOT__ff_bpu_takepc)) 
                                                != vlSelf->top__DOT__ID__DOT__takepc));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/hujun/ysyx-workbench/npc/verilog/vsrc/top.v", 3714, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/hujun/ysyx-workbench/npc/verilog/vsrc/top.v", 3714, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/hujun/ysyx-workbench/npc/verilog/vsrc/top.v", 3714, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_rom_valid & 0xfeU))) {
        Verilated::overWidthError("io_rom_valid");}
    if (VL_UNLIKELY((vlSelf->io_rom_fault & 0xfeU))) {
        Verilated::overWidthError("io_rom_fault");}
    if (VL_UNLIKELY((vlSelf->io_ram_valid & 0xfeU))) {
        Verilated::overWidthError("io_ram_valid");}
    if (VL_UNLIKELY((vlSelf->io_ram_fault & 0xfeU))) {
        Verilated::overWidthError("io_ram_fault");}
    if (VL_UNLIKELY((vlSelf->io_timer & 0xfeU))) {
        Verilated::overWidthError("io_timer");}
    if (VL_UNLIKELY((vlSelf->io_soft & 0xfeU))) {
        Verilated::overWidthError("io_soft");}
    if (VL_UNLIKELY((vlSelf->io_extern & 0xfeU))) {
        Verilated::overWidthError("io_extern");}
}
#endif  // VL_DEBUG
