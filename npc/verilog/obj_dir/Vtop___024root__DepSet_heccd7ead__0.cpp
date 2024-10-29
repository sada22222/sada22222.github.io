// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->Core__DOT__csr__DOT__mip_ssip = ((IData)(vlSelf->Core__DOT__csr__DOT__mipReal_ssip) 
                                             | (IData)(vlSelf->io_soft));
    vlSelf->Core__DOT__csr__DOT__mip_stip = ((IData)(vlSelf->Core__DOT__csr__DOT__mipReal_stip) 
                                             | (IData)(vlSelf->io_timer));
    vlSelf->Core__DOT__csr__DOT__mip_seip = ((IData)(vlSelf->Core__DOT__csr__DOT__mipReal_seip) 
                                             | (IData)(vlSelf->io_extern));
    vlSelf->Core__DOT__csr__DOT___T_92 = (((IData)(vlSelf->Core__DOT__csr__DOT__mip_seip) 
                                           << 9U) | 
                                          (((IData)(vlSelf->Core__DOT__csr__DOT__mip_stip) 
                                            << 5U) 
                                           | ((IData)(vlSelf->Core__DOT__csr__DOT__mip_ssip) 
                                              << 1U)));
    vlSelf->Core__DOT__csr__DOT___T_142 = (((IData)(vlSelf->io_extern) 
                                            << 0xbU) 
                                           | (((IData)(vlSelf->Core__DOT__csr__DOT__mip_seip) 
                                               << 9U) 
                                              | (((IData)(vlSelf->io_timer) 
                                                  << 7U) 
                                                 | (((IData)(vlSelf->Core__DOT__csr__DOT__mip_stip) 
                                                     << 5U) 
                                                    | (((IData)(vlSelf->io_soft) 
                                                        << 3U) 
                                                       | ((IData)(vlSelf->Core__DOT__csr__DOT__mip_ssip) 
                                                          << 1U))))));
    vlSelf->Core__DOT__csr__DOT__flagIntS = (vlSelf->Core__DOT__csr__DOT___T_92 
                                             & vlSelf->Core__DOT__csr__DOT___T_82);
    vlSelf->Core__DOT__csr__DOT___T_235 = ((0xf13U 
                                            == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                            ? 0U : 
                                           ((0xf14U 
                                             == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                             ? 0U : 
                                            ((0x300U 
                                              == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                              ? vlSelf->Core__DOT__csr__DOT___T_31
                                              : ((0x301U 
                                                  == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                  ? 0x40141101U
                                                  : 
                                                 ((0x302U 
                                                   == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                   ? vlSelf->Core__DOT__csr__DOT__medeleg_data
                                                   : 
                                                  ((0x303U 
                                                    == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                    ? vlSelf->Core__DOT__csr__DOT__mideleg_data
                                                    : 
                                                   ((0x304U 
                                                     == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                     ? vlSelf->Core__DOT__csr__DOT___T_47
                                                     : 
                                                    ((0x305U 
                                                      == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                      ? vlSelf->Core__DOT__csr__DOT___T_129
                                                      : 
                                                     ((0x306U 
                                                       == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                       ? 0U
                                                       : 
                                                      ((0x340U 
                                                        == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                        ? vlSelf->Core__DOT__csr__DOT__mscratch_data
                                                        : 
                                                       ((0x341U 
                                                         == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                         ? vlSelf->Core__DOT__csr__DOT__mepc_data
                                                         : 
                                                        ((0x342U 
                                                          == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                          ? vlSelf->Core__DOT__csr__DOT___T_130
                                                          : 
                                                         ((0x343U 
                                                           == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                           ? vlSelf->Core__DOT__csr__DOT__mtval_data
                                                           : 
                                                          ((0x344U 
                                                            == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                            ? vlSelf->Core__DOT__csr__DOT___T_142
                                                            : 
                                                           ((0xb00U 
                                                             == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                             ? (IData)(vlSelf->Core__DOT__csr__DOT__mcycle_data)
                                                             : 
                                                            ((0xb02U 
                                                              == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                              ? (IData)(vlSelf->Core__DOT__csr__DOT__minstret_data)
                                                              : 
                                                             ((0xb80U 
                                                               == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                               ? (IData)(
                                                                         (vlSelf->Core__DOT__csr__DOT__mcycle_data 
                                                                          >> 0x20U))
                                                               : 
                                                              ((0xb82U 
                                                                == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                                                ? (IData)(
                                                                          (vlSelf->Core__DOT__csr__DOT__minstret_data 
                                                                           >> 0x20U))
                                                                : 0U))))))))))))))))));
    vlSelf->Core__DOT__csr__DOT___T_422 = ((0xf13U 
                                            == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                            ? 0U : 
                                           ((0xf14U 
                                             == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                             ? 0U : 
                                            ((0x300U 
                                              == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                              ? vlSelf->Core__DOT__csr__DOT___T_31
                                              : ((0x301U 
                                                  == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                  ? 0x40141101U
                                                  : 
                                                 ((0x302U 
                                                   == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                   ? vlSelf->Core__DOT__csr__DOT__medeleg_data
                                                   : 
                                                  ((0x303U 
                                                    == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                    ? vlSelf->Core__DOT__csr__DOT__mideleg_data
                                                    : 
                                                   ((0x304U 
                                                     == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                     ? vlSelf->Core__DOT__csr__DOT___T_47
                                                     : 
                                                    ((0x305U 
                                                      == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                      ? vlSelf->Core__DOT__csr__DOT___T_129
                                                      : 
                                                     ((0x306U 
                                                       == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                       ? 0U
                                                       : 
                                                      ((0x340U 
                                                        == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                        ? vlSelf->Core__DOT__csr__DOT__mscratch_data
                                                        : 
                                                       ((0x341U 
                                                         == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                         ? vlSelf->Core__DOT__csr__DOT__mepc_data
                                                         : 
                                                        ((0x342U 
                                                          == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                          ? vlSelf->Core__DOT__csr__DOT___T_130
                                                          : 
                                                         ((0x343U 
                                                           == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                           ? vlSelf->Core__DOT__csr__DOT__mtval_data
                                                           : 
                                                          ((0x344U 
                                                            == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                            ? vlSelf->Core__DOT__csr__DOT___T_142
                                                            : 
                                                           ((0xb00U 
                                                             == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                             ? (IData)(vlSelf->Core__DOT__csr__DOT__mcycle_data)
                                                             : 
                                                            ((0xb02U 
                                                              == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                              ? (IData)(vlSelf->Core__DOT__csr__DOT__minstret_data)
                                                              : 
                                                             ((0xb80U 
                                                               == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                               ? (IData)(
                                                                         (vlSelf->Core__DOT__csr__DOT__mcycle_data 
                                                                          >> 0x20U))
                                                               : 
                                                              ((0xb82U 
                                                                == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                                ? (IData)(
                                                                          (vlSelf->Core__DOT__csr__DOT__minstret_data 
                                                                           >> 0x20U))
                                                                : 0U))))))))))))))))));
    vlSelf->Core__DOT__csr__DOT__flagIntM = (vlSelf->Core__DOT__csr__DOT___T_142 
                                             & vlSelf->Core__DOT__csr__DOT___T_47);
    vlSelf->Core__DOT__csr__DOT__intCauseS = ((0x200U 
                                               & vlSelf->Core__DOT__csr__DOT__flagIntS)
                                               ? 9U
                                               : ((2U 
                                                   & vlSelf->Core__DOT__csr__DOT__flagIntS)
                                                   ? 1U
                                                   : 5U));
    vlSelf->Core__DOT__csr__DOT__csrData = ((0xc00U 
                                             == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                             ? (IData)(vlSelf->Core__DOT__csr__DOT__mcycle_data)
                                             : ((0xc02U 
                                                 == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                 ? (IData)(vlSelf->Core__DOT__csr__DOT__minstret_data)
                                                 : 
                                                ((0xc80U 
                                                  == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                  ? (IData)(
                                                            (vlSelf->Core__DOT__csr__DOT__mcycle_data 
                                                             >> 0x20U))
                                                  : 
                                                 ((0xc82U 
                                                   == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                   ? (IData)(
                                                             (vlSelf->Core__DOT__csr__DOT__minstret_data 
                                                              >> 0x20U))
                                                   : 
                                                  ((0x100U 
                                                    == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                    ? vlSelf->Core__DOT__csr__DOT___T_74
                                                    : 
                                                   ((0x104U 
                                                     == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                     ? vlSelf->Core__DOT__csr__DOT___T_82
                                                     : 
                                                    ((0x105U 
                                                      == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                      ? vlSelf->Core__DOT__csr__DOT___T_83
                                                      : 
                                                     ((0x106U 
                                                       == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                       ? 0U
                                                       : 
                                                      ((0x140U 
                                                        == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                        ? vlSelf->Core__DOT__csr__DOT__sscratch_data
                                                        : 
                                                       ((0x141U 
                                                         == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                         ? vlSelf->Core__DOT__csr__DOT__sepc_data
                                                         : 
                                                        ((0x142U 
                                                          == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                          ? vlSelf->Core__DOT__csr__DOT___T_84
                                                          : 
                                                         ((0x143U 
                                                           == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                           ? vlSelf->Core__DOT__csr__DOT__stval_data
                                                           : 
                                                          ((0x144U 
                                                            == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                            ? vlSelf->Core__DOT__csr__DOT___T_92
                                                            : 
                                                           ((0x180U 
                                                             == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                             ? vlSelf->Core__DOT__csr__DOT___T_94
                                                             : 
                                                            ((0xf11U 
                                                              == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                              ? 0U
                                                              : 
                                                             ((0xf12U 
                                                               == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                               ? 0U
                                                               : vlSelf->Core__DOT__csr__DOT___T_422))))))))))))))));
    vlSelf->Core__DOT__csr__DOT__hasIntM = (((1U >= (IData)(vlSelf->Core__DOT__csr__DOT__mode)) 
                                             | (IData)(vlSelf->Core__DOT__csr__DOT__mstatus_mie)) 
                                            & (0U != 
                                               ((~ vlSelf->Core__DOT__csr__DOT__mideleg_data) 
                                                & vlSelf->Core__DOT__csr__DOT__flagIntM)));
    vlSelf->Core__DOT__csr__DOT___T_510 = (vlSelf->Core__DOT__csr__DOT__csrData 
                                           | vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_data);
    vlSelf->Core__DOT__csr__DOT___T_512 = ((~ vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_data) 
                                           & vlSelf->Core__DOT__csr__DOT__csrData);
    vlSelf->Core__DOT__csr__DOT__hasInt = ((IData)(vlSelf->Core__DOT__csr__DOT__hasIntM) 
                                           | (((1U 
                                                > (IData)(vlSelf->Core__DOT__csr__DOT__mode)) 
                                               | ((1U 
                                                   == (IData)(vlSelf->Core__DOT__csr__DOT__mode)) 
                                                  & (IData)(vlSelf->Core__DOT__csr__DOT__mstatus_sie))) 
                                              & (0U 
                                                 != 
                                                 (vlSelf->Core__DOT__csr__DOT__flagIntS 
                                                  & vlSelf->Core__DOT__csr__DOT__mideleg_data))));
    vlSelf->Core__DOT__csr__DOT__writeData = ((2U == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_op))
                                               ? vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_data
                                               : ((3U 
                                                   == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_op))
                                                   ? vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_data
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_op))
                                                    ? vlSelf->Core__DOT__csr__DOT___T_510
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_op))
                                                     ? vlSelf->Core__DOT__csr__DOT___T_512
                                                     : 0U))));
    vlSelf->Core__DOT__csr__DOT__handIntS = ((~ (IData)(vlSelf->Core__DOT__csr__DOT__hasIntM)) 
                                             & (IData)(vlSelf->Core__DOT__csr__DOT__hasInt));
    vlSelf->Core__DOT__ID_EX_io_flush = (((((7U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType)) 
                                            | (5U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))) 
                                           | ((8U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType)) 
                                              & (IData)(vlSelf->Core__DOT__MEM__DOT__memAddr))) 
                                          | (1U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))) 
                                         | (IData)(vlSelf->Core__DOT__csr__DOT__hasInt));
    vlSelf->Core__DOT__csr__DOT___T_768 = (((QData)((IData)(vlSelf->Core__DOT__csr__DOT__writeData)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->Core__DOT__csr__DOT__mcycle_data)));
    vlSelf->Core__DOT__csr__DOT___T_762 = (((QData)((IData)(
                                                            (vlSelf->Core__DOT__csr__DOT__mcycle_data 
                                                             >> 0x20U))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->Core__DOT__csr__DOT__writeData)));
    vlSelf->Core__DOT__csr__DOT___T_771 = (((QData)((IData)(vlSelf->Core__DOT__csr__DOT__writeData)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->Core__DOT__csr__DOT__minstret_data)));
    vlSelf->Core__DOT__csr__DOT___T_765 = (((QData)((IData)(
                                                            (vlSelf->Core__DOT__csr__DOT__minstret_data 
                                                             >> 0x20U))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->Core__DOT__csr__DOT__writeData)));
    vlSelf->Core__DOT__csr__DOT___T_756 = (((IData)(vlSelf->Core__DOT__csr__DOT__mipReal_seip) 
                                            << 9U) 
                                           | (((IData)(vlSelf->Core__DOT__csr__DOT__mipReal_stip) 
                                               << 5U) 
                                              | (2U 
                                                 & vlSelf->Core__DOT__csr__DOT__writeData)));
    vlSelf->Core__DOT__csr__DOT___T_675 = ((0x40000U 
                                            & vlSelf->Core__DOT__csr__DOT__writeData) 
                                           | (((IData)(vlSelf->Core__DOT__csr__DOT__mstatus_mpp) 
                                               << 0xbU) 
                                              | ((0x100U 
                                                  & vlSelf->Core__DOT__csr__DOT__writeData) 
                                                 | (((IData)(vlSelf->Core__DOT__csr__DOT__mstatus_mpie) 
                                                     << 7U) 
                                                    | ((0x20U 
                                                        & vlSelf->Core__DOT__csr__DOT__writeData) 
                                                       | (((IData)(vlSelf->Core__DOT__csr__DOT__mstatus_mie) 
                                                           << 3U) 
                                                          | (2U 
                                                             & vlSelf->Core__DOT__csr__DOT__writeData)))))));
    vlSelf->Core__DOT__csr__DOT___T_717 = (((IData)(vlSelf->Core__DOT__csr__DOT__mie_meie) 
                                            << 0xbU) 
                                           | ((0x200U 
                                               & vlSelf->Core__DOT__csr__DOT__writeData) 
                                              | (((IData)(vlSelf->Core__DOT__csr__DOT__mie_mtie) 
                                                  << 7U) 
                                                 | ((0x20U 
                                                     & vlSelf->Core__DOT__csr__DOT__writeData) 
                                                    | (((IData)(vlSelf->Core__DOT__csr__DOT__mie_msie) 
                                                        << 3U) 
                                                       | (2U 
                                                          & vlSelf->Core__DOT__csr__DOT__writeData))))));
    vlSelf->Core__DOT__csr__DOT__cause = ((IData)(vlSelf->Core__DOT__csr__DOT__hasInt)
                                           ? (0x80000000U 
                                              | ((IData)(vlSelf->Core__DOT__csr__DOT__handIntS)
                                                  ? vlSelf->Core__DOT__csr__DOT__intCauseS
                                                  : 
                                                 ((0x800U 
                                                   & vlSelf->Core__DOT__csr__DOT__flagIntM)
                                                   ? 0xbU
                                                   : 
                                                  ((8U 
                                                    & vlSelf->Core__DOT__csr__DOT__flagIntM)
                                                    ? 3U
                                                    : 
                                                   ((0x80U 
                                                     & vlSelf->Core__DOT__csr__DOT__flagIntM)
                                                     ? 7U
                                                     : vlSelf->Core__DOT__csr__DOT__intCauseS)))))
                                           : ((5U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                               ? 2U
                                               : ((7U 
                                                   == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                                    ? 0xbU
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                                     ? 
                                                    ((IData)(vlSelf->Core__DOT__MEM__DOT__memAddr)
                                                      ? 4U
                                                      : 0xdU)
                                                     : 0U)))));
    vlSelf->io_flush = ((IData)(vlSelf->Core__DOT__ID_EX_io_flush) 
                        | (IData)(vlSelf->Core__DOT__ID__DOT__branchmiss));
    vlSelf->Core__DOT__MEM_WB__DOT___T_3 = ((IData)(vlSelf->Core__DOT__ID_EX_io_flush) 
                                            | (IData)(vlSelf->Core__DOT__MEM_WB__DOT___T_2));
    vlSelf->Core__DOT__ID_EX__DOT___T_3 = ((IData)(vlSelf->Core__DOT__ID_EX_io_flush) 
                                           | ((~ (IData)(vlSelf->Core__DOT__ID_EX_io_stallNext)) 
                                              & (IData)(vlSelf->io_stall)));
    vlSelf->Core__DOT__EX_MEM__DOT___T_3 = ((IData)(vlSelf->Core__DOT__ID_EX_io_flush) 
                                            | ((~ (IData)(vlSelf->Core__DOT__MEM_WB__DOT___T_2)) 
                                               & (IData)(vlSelf->Core__DOT__ID_EX_io_stallNext)));
    vlSelf->Core__DOT__csr__DOT__handExcS = ((~ ((IData)(vlSelf->Core__DOT__csr__DOT__mode) 
                                                 >> 1U)) 
                                             & (((~ (IData)(vlSelf->Core__DOT__csr__DOT__hasInt)) 
                                                 & (IData)(vlSelf->Core__DOT__ID_EX_io_flush)) 
                                                & (vlSelf->Core__DOT__csr__DOT__medeleg_data 
                                                   >> 
                                                   ((5U 
                                                     == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                                     ? 2U
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                                       ? 0xbU
                                                       : 
                                                      ((8U 
                                                        == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                                        ? 
                                                       ((IData)(vlSelf->Core__DOT__MEM__DOT__memAddr)
                                                         ? 4U
                                                         : 0xdU)
                                                        : 0U)))))));
    vlSelf->Core__DOT__csr__DOT___T_605 = ((IData)(vlSelf->Core__DOT__csr__DOT__handIntS) 
                                           | (IData)(vlSelf->Core__DOT__csr__DOT__handExcS));
    vlSelf->Core__DOT__csr__DOT___GEN_67 = ((IData)(vlSelf->Core__DOT__csr__DOT___T_605) 
                                            & (IData)(vlSelf->Core__DOT__csr__DOT__mstatus_mie));
    vlSelf->io_flushpc = ((IData)(vlSelf->Core__DOT__ID_EX_io_flush)
                           ? ((IData)(vlSelf->Core__DOT__csr__DOT___T_605)
                               ? ((vlSelf->Core__DOT__csr__DOT__stvec_base 
                                   + (((IData)(vlSelf->Core__DOT__csr__DOT__stvec_mode) 
                                       & (IData)(vlSelf->Core__DOT__csr__DOT__hasInt))
                                       ? vlSelf->Core__DOT__csr__DOT__cause
                                       : 0U)) << 2U)
                               : ((vlSelf->Core__DOT__csr__DOT__mtvec_base 
                                   + (((IData)(vlSelf->Core__DOT__csr__DOT__mtvec_mode) 
                                       & (IData)(vlSelf->Core__DOT__csr__DOT__hasInt))
                                       ? vlSelf->Core__DOT__csr__DOT__cause
                                       : 0U)) << 2U))
                           : ((IData)(vlSelf->Core__DOT__ID__DOT__branchmiss)
                               ? vlSelf->Core__DOT__ID__DOT__takepc
                               : ((IData)(4U) + vlSelf->Core__DOT__IF_ID__DOT__ff_pc)));
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

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

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
                VL_FATAL_MT("/home/hujun/ysyx-workbench/npc/verilog/vsrc/top.v", 3821, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("/home/hujun/ysyx-workbench/npc/verilog/vsrc/top.v", 3821, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/hujun/ysyx-workbench/npc/verilog/vsrc/top.v", 3821, "", "NBA region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->io_timer & 0xfeU))) {
        Verilated::overWidthError("io_timer");}
    if (VL_UNLIKELY((vlSelf->io_soft & 0xfeU))) {
        Verilated::overWidthError("io_soft");}
    if (VL_UNLIKELY((vlSelf->io_extern & 0xfeU))) {
        Verilated::overWidthError("io_extern");}
}
#endif  // VL_DEBUG
