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
    vlSelf->top__DOT__core__DOT__csr__DOT__mip_ssip 
        = ((IData)(vlSelf->io_soft) | (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mipReal_ssip));
    vlSelf->top__DOT__core__DOT__csr__DOT__mip_stip 
        = ((IData)(vlSelf->io_timer) | (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mipReal_stip));
    vlSelf->top__DOT__core__DOT__csr__DOT__mip_seip 
        = ((IData)(vlSelf->io_extern) | (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mipReal_seip));
    vlSelf->top__DOT__core__DOT__csr__DOT___T_92 = 
        (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mip_seip) 
          << 9U) | (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mip_stip) 
                     << 5U) | ((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mip_ssip) 
                               << 1U)));
    vlSelf->top__DOT__core__DOT__csr__DOT___T_142 = 
        (((IData)(vlSelf->io_extern) << 0xbU) | (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mip_seip) 
                                                  << 9U) 
                                                 | (((IData)(vlSelf->io_timer) 
                                                     << 7U) 
                                                    | (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mip_stip) 
                                                        << 5U) 
                                                       | (((IData)(vlSelf->io_soft) 
                                                           << 3U) 
                                                          | ((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mip_ssip) 
                                                             << 1U))))));
    vlSelf->top__DOT__core__DOT__csr__DOT__flagIntS 
        = (vlSelf->top__DOT__core__DOT__csr__DOT___T_92 
           & vlSelf->top__DOT__core__DOT__csr__DOT___T_82);
    vlSelf->top__DOT__core__DOT__csr__DOT___T_235 = 
        ((0xf13U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
          ? 0U : ((0xf14U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                   ? 0U : ((0x300U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                            ? vlSelf->top__DOT__core__DOT__csr__DOT___T_31
                            : ((0x301U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                ? 0x40141101U : ((0x302U 
                                                  == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                                  ? vlSelf->top__DOT__core__DOT__csr__DOT__medeleg_data
                                                  : 
                                                 ((0x303U 
                                                   == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                                   ? vlSelf->top__DOT__core__DOT__csr__DOT__mideleg_data
                                                   : 
                                                  ((0x304U 
                                                    == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                                    ? vlSelf->top__DOT__core__DOT__csr__DOT___T_47
                                                    : 
                                                   ((0x305U 
                                                     == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                                     ? vlSelf->top__DOT__core__DOT__csr__DOT___T_129
                                                     : 
                                                    ((0x306U 
                                                      == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                                      ? 0U
                                                      : 
                                                     ((0x340U 
                                                       == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                                       ? vlSelf->top__DOT__core__DOT__csr__DOT__mscratch_data
                                                       : 
                                                      ((0x341U 
                                                        == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                                        ? vlSelf->top__DOT__core__DOT__csr__DOT__mepc_data
                                                        : 
                                                       ((0x342U 
                                                         == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                                         ? vlSelf->top__DOT__core__DOT__csr__DOT___T_130
                                                         : 
                                                        ((0x343U 
                                                          == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                                          ? vlSelf->top__DOT__core__DOT__csr__DOT__mtval_data
                                                          : 
                                                         ((0x344U 
                                                           == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                                           ? vlSelf->top__DOT__core__DOT__csr__DOT___T_142
                                                           : 
                                                          ((0xb00U 
                                                            == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                                            ? (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mcycle_data)
                                                            : 
                                                           ((0xb02U 
                                                             == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                                             ? (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__minstret_data)
                                                             : 
                                                            ((0xb80U 
                                                              == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                                              ? (IData)(
                                                                        (vlSelf->top__DOT__core__DOT__csr__DOT__mcycle_data 
                                                                         >> 0x20U))
                                                              : 
                                                             ((0xb82U 
                                                               == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))
                                                               ? (IData)(
                                                                         (vlSelf->top__DOT__core__DOT__csr__DOT__minstret_data 
                                                                          >> 0x20U))
                                                               : 0U))))))))))))))))));
    vlSelf->top__DOT__core__DOT__csr__DOT___T_422 = 
        ((0xf13U == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
          ? 0U : ((0xf14U == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                   ? 0U : ((0x300U == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                            ? vlSelf->top__DOT__core__DOT__csr__DOT___T_31
                            : ((0x301U == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                ? 0x40141101U : ((0x302U 
                                                  == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                  ? vlSelf->top__DOT__core__DOT__csr__DOT__medeleg_data
                                                  : 
                                                 ((0x303U 
                                                   == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                   ? vlSelf->top__DOT__core__DOT__csr__DOT__mideleg_data
                                                   : 
                                                  ((0x304U 
                                                    == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                    ? vlSelf->top__DOT__core__DOT__csr__DOT___T_47
                                                    : 
                                                   ((0x305U 
                                                     == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                     ? vlSelf->top__DOT__core__DOT__csr__DOT___T_129
                                                     : 
                                                    ((0x306U 
                                                      == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                      ? 0U
                                                      : 
                                                     ((0x340U 
                                                       == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                       ? vlSelf->top__DOT__core__DOT__csr__DOT__mscratch_data
                                                       : 
                                                      ((0x341U 
                                                        == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                        ? vlSelf->top__DOT__core__DOT__csr__DOT__mepc_data
                                                        : 
                                                       ((0x342U 
                                                         == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                         ? vlSelf->top__DOT__core__DOT__csr__DOT___T_130
                                                         : 
                                                        ((0x343U 
                                                          == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                          ? vlSelf->top__DOT__core__DOT__csr__DOT__mtval_data
                                                          : 
                                                         ((0x344U 
                                                           == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                           ? vlSelf->top__DOT__core__DOT__csr__DOT___T_142
                                                           : 
                                                          ((0xb00U 
                                                            == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                            ? (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mcycle_data)
                                                            : 
                                                           ((0xb02U 
                                                             == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                             ? (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__minstret_data)
                                                             : 
                                                            ((0xb80U 
                                                              == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                              ? (IData)(
                                                                        (vlSelf->top__DOT__core__DOT__csr__DOT__mcycle_data 
                                                                         >> 0x20U))
                                                              : 
                                                             ((0xb82U 
                                                               == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                               ? (IData)(
                                                                         (vlSelf->top__DOT__core__DOT__csr__DOT__minstret_data 
                                                                          >> 0x20U))
                                                               : 0U))))))))))))))))));
    vlSelf->top__DOT__core__DOT__csr__DOT__flagIntM 
        = (vlSelf->top__DOT__core__DOT__csr__DOT___T_142 
           & vlSelf->top__DOT__core__DOT__csr__DOT___T_47);
    vlSelf->top__DOT__core__DOT__csr__DOT__intCauseS 
        = ((0x200U & vlSelf->top__DOT__core__DOT__csr__DOT__flagIntS)
            ? 9U : ((2U & vlSelf->top__DOT__core__DOT__csr__DOT__flagIntS)
                     ? 1U : 5U));
    vlSelf->top__DOT__core__DOT__csr__DOT__csrData 
        = ((0xc00U == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
            ? (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mcycle_data)
            : ((0xc02U == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                ? (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__minstret_data)
                : ((0xc80U == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                    ? (IData)((vlSelf->top__DOT__core__DOT__csr__DOT__mcycle_data 
                               >> 0x20U)) : ((0xc82U 
                                              == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                              ? (IData)(
                                                        (vlSelf->top__DOT__core__DOT__csr__DOT__minstret_data 
                                                         >> 0x20U))
                                              : ((0x100U 
                                                  == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                  ? vlSelf->top__DOT__core__DOT__csr__DOT___T_74
                                                  : 
                                                 ((0x104U 
                                                   == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                   ? vlSelf->top__DOT__core__DOT__csr__DOT___T_82
                                                   : 
                                                  ((0x105U 
                                                    == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                    ? vlSelf->top__DOT__core__DOT__csr__DOT___T_83
                                                    : 
                                                   ((0x106U 
                                                     == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                     ? 0U
                                                     : 
                                                    ((0x140U 
                                                      == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                      ? vlSelf->top__DOT__core__DOT__csr__DOT__sscratch_data
                                                      : 
                                                     ((0x141U 
                                                       == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                       ? vlSelf->top__DOT__core__DOT__csr__DOT__sepc_data
                                                       : 
                                                      ((0x142U 
                                                        == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                        ? vlSelf->top__DOT__core__DOT__csr__DOT___T_84
                                                        : 
                                                       ((0x143U 
                                                         == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                         ? vlSelf->top__DOT__core__DOT__csr__DOT__stval_data
                                                         : 
                                                        ((0x144U 
                                                          == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                          ? vlSelf->top__DOT__core__DOT__csr__DOT___T_92
                                                          : 
                                                         ((0x180U 
                                                           == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                           ? vlSelf->top__DOT__core__DOT__csr__DOT___T_94
                                                           : 
                                                          ((0xf11U 
                                                            == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                            ? 0U
                                                            : 
                                                           ((0xf12U 
                                                             == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr))
                                                             ? 0U
                                                             : vlSelf->top__DOT__core__DOT__csr__DOT___T_422))))))))))))))));
    vlSelf->top__DOT__core__DOT__csr__DOT__hasIntM 
        = (((1U >= (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mode)) 
            | (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mstatus_mie)) 
           & (0U != ((~ vlSelf->top__DOT__core__DOT__csr__DOT__mideleg_data) 
                     & vlSelf->top__DOT__core__DOT__csr__DOT__flagIntM)));
    vlSelf->top__DOT__core__DOT__csr__DOT___T_510 = 
        (vlSelf->top__DOT__core__DOT__csr__DOT__csrData 
         | vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_data);
    vlSelf->top__DOT__core__DOT__csr__DOT___T_512 = 
        ((~ vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_data) 
         & vlSelf->top__DOT__core__DOT__csr__DOT__csrData);
    vlSelf->top__DOT__core__DOT__csr__DOT__hasInt = 
        ((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__hasIntM) 
         | (((1U > (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mode)) 
             | ((1U == (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mode)) 
                & (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mstatus_sie))) 
            & (0U != (vlSelf->top__DOT__core__DOT__csr__DOT__flagIntS 
                      & vlSelf->top__DOT__core__DOT__csr__DOT__mideleg_data))));
    vlSelf->top__DOT__core__DOT__csr__DOT__writeData 
        = ((2U == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_op))
            ? vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_data
            : ((3U == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_op))
                ? vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_data
                : ((4U == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_op))
                    ? vlSelf->top__DOT__core__DOT__csr__DOT___T_510
                    : ((5U == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_op))
                        ? vlSelf->top__DOT__core__DOT__csr__DOT___T_512
                        : 0U))));
    vlSelf->top__DOT__core__DOT__csr__DOT__handIntS 
        = ((~ (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__hasIntM)) 
           & (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__hasInt));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_flush 
        = (((((7U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType)) 
              | (5U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType))) 
             | ((8U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType)) 
                & (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__memAddr))) 
            | (1U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType))) 
           | (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__hasInt));
    vlSelf->top__DOT__core__DOT__csr__DOT___T_768 = 
        (((QData)((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__writeData)) 
          << 0x20U) | (QData)((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mcycle_data)));
    vlSelf->top__DOT__core__DOT__csr__DOT___T_762 = 
        (((QData)((IData)((vlSelf->top__DOT__core__DOT__csr__DOT__mcycle_data 
                           >> 0x20U))) << 0x20U) | (QData)((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__writeData)));
    vlSelf->top__DOT__core__DOT__csr__DOT___T_771 = 
        (((QData)((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__writeData)) 
          << 0x20U) | (QData)((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__minstret_data)));
    vlSelf->top__DOT__core__DOT__csr__DOT___T_765 = 
        (((QData)((IData)((vlSelf->top__DOT__core__DOT__csr__DOT__minstret_data 
                           >> 0x20U))) << 0x20U) | (QData)((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__writeData)));
    vlSelf->top__DOT__core__DOT__csr__DOT___T_756 = 
        (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mipReal_seip) 
          << 9U) | (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mipReal_stip) 
                     << 5U) | (2U & vlSelf->top__DOT__core__DOT__csr__DOT__writeData)));
    vlSelf->top__DOT__core__DOT__csr__DOT___T_675 = 
        ((0x40000U & vlSelf->top__DOT__core__DOT__csr__DOT__writeData) 
         | (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mstatus_mpp) 
             << 0xbU) | ((0x100U & vlSelf->top__DOT__core__DOT__csr__DOT__writeData) 
                         | (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mstatus_mpie) 
                             << 7U) | ((0x20U & vlSelf->top__DOT__core__DOT__csr__DOT__writeData) 
                                       | (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mstatus_mie) 
                                           << 3U) | 
                                          (2U & vlSelf->top__DOT__core__DOT__csr__DOT__writeData)))))));
    vlSelf->top__DOT__core__DOT__csr__DOT___T_717 = 
        (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mie_meie) 
          << 0xbU) | ((0x200U & vlSelf->top__DOT__core__DOT__csr__DOT__writeData) 
                      | (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mie_mtie) 
                          << 7U) | ((0x20U & vlSelf->top__DOT__core__DOT__csr__DOT__writeData) 
                                    | (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mie_msie) 
                                        << 3U) | (2U 
                                                  & vlSelf->top__DOT__core__DOT__csr__DOT__writeData))))));
    vlSelf->top__DOT__core__DOT__csr__DOT__cause = 
        ((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__hasInt)
          ? (0x80000000U | ((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__handIntS)
                             ? vlSelf->top__DOT__core__DOT__csr__DOT__intCauseS
                             : ((0x800U & vlSelf->top__DOT__core__DOT__csr__DOT__flagIntM)
                                 ? 0xbU : ((8U & vlSelf->top__DOT__core__DOT__csr__DOT__flagIntM)
                                            ? 3U : 
                                           ((0x80U 
                                             & vlSelf->top__DOT__core__DOT__csr__DOT__flagIntM)
                                             ? 7U : vlSelf->top__DOT__core__DOT__csr__DOT__intCauseS)))))
          : ((5U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType))
              ? 2U : ((7U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType))
                       ? 0U : ((1U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType))
                                ? 0xbU : ((8U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType))
                                           ? ((IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__memAddr)
                                               ? 4U
                                               : 0xdU)
                                           : 0U)))));
    vlSelf->top__DOT__core__DOT__MEM_WB__DOT___T_3 
        = ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_flush) 
           | (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT___T_2));
    vlSelf->top__DOT__core__DOT__ID_EX__DOT___T_3 = 
        ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_flush) 
         | ((~ (IData)(vlSelf->top__DOT__core__DOT__ID_EX_io_stallNext)) 
            & (IData)(vlSelf->io_stall)));
    vlSelf->top__DOT__core__DOT__EX_MEM__DOT___T_3 
        = ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_flush) 
           | ((~ (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT___T_2)) 
              & (IData)(vlSelf->top__DOT__core__DOT__ID_EX_io_stallNext)));
    vlSelf->top__DOT__core__DOT__csr__DOT__handExcS 
        = ((~ ((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mode) 
               >> 1U)) & (((~ (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__hasInt)) 
                           & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_flush)) 
                          & (vlSelf->top__DOT__core__DOT__csr__DOT__medeleg_data 
                             >> ((5U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType))
                                  ? 2U : ((7U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType))
                                           ? 0U : (
                                                   (1U 
                                                    == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType))
                                                    ? 0xbU
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType))
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__memAddr)
                                                      ? 4U
                                                      : 0xdU)
                                                     : 0U)))))));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT___T_62 
        = ((~ (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_flush)) 
           & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mulEn));
    vlSelf->top__DOT__core__DOT__csr__DOT___T_605 = 
        ((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__handIntS) 
         | (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__handExcS));
    if (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT___T_62) {
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_15 
            = (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divisor 
               >> 0x1dU);
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_h78cd338f__0 
            = (3U & vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divisor);
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_1 
            = (7U & (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divisor 
                     >> 1U));
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_2 
            = (7U & (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divisor 
                     >> 3U));
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_3 
            = (7U & (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divisor 
                     >> 5U));
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_4 
            = (7U & (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divisor 
                     >> 7U));
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_5 
            = (7U & (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divisor 
                     >> 9U));
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_6 
            = (7U & (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divisor 
                     >> 0xbU));
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_7 
            = (7U & (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divisor 
                     >> 0xdU));
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_8 
            = (7U & (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divisor 
                     >> 0xfU));
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_9 
            = (7U & (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divisor 
                     >> 0x11U));
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_10 
            = (7U & (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divisor 
                     >> 0x13U));
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_11 
            = (7U & (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divisor 
                     >> 0x15U));
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_12 
            = (7U & (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divisor 
                     >> 0x17U));
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_13 
            = (7U & (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divisor 
                     >> 0x19U));
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_14 
            = (7U & (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divisor 
                     >> 0x1bU));
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1 
            = vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divident;
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0 
            = (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divident 
               >> 0x1fU);
    } else {
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_15 = 0U;
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_h78cd338f__0 = 0U;
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_1 = 0U;
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_2 = 0U;
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_3 = 0U;
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_4 = 0U;
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_5 = 0U;
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_6 = 0U;
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_7 = 0U;
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_8 = 0U;
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_9 = 0U;
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_10 = 0U;
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_11 = 0U;
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_12 = 0U;
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_13 = 0U;
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_14 = 0U;
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1 = 0U;
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0 = 0U;
    }
    vlSelf->top__DOT__core__DOT__csr__DOT___GEN_67 
        = ((IData)(vlSelf->top__DOT__core__DOT__csr__DOT___T_605) 
           & (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mstatus_mie));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A 
        = ((0U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_15))
            ? 0ULL : (((1U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_15)) 
                       | (2U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_15)))
                       ? (((QData)((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                             ? 3U : 0U))) 
                           << 0x3eU) | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                        << 0x1eU)) : 
                      ((3U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_15))
                        ? (((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)) 
                            << 0x3fU) | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                         << 0x1fU))
                        : ((4U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_15))
                            ? (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (1ULL 
                                                            & ((- 
                                                                ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                                 << 1U)) 
                                                               >> 0x20U)))))) 
                                << 0x3fU) | (0x7fffffffc0000000ULL 
                                             & ((- 
                                                 ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                  << 1U)) 
                                                << 0x1eU)))
                            : (((5U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_15)) 
                                | (6U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_15)))
                                ? (((QData)((IData)(
                                                    (((- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1) 
                                                      >> 0x1fU)
                                                      ? 3U
                                                      : 0U))) 
                                    << 0x3eU) | ((QData)((IData)(
                                                                 (- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1))) 
                                                 << 0x1eU))
                                : 0ULL)))));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B 
        = (((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT___T_62) 
            & (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divisor 
               >> 0x1fU)) ? ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                             << 0x20U) : 0ULL);
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
        = ((0U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_h78cd338f__0))
            ? 0ULL : ((1U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_h78cd338f__0))
                       ? (((QData)((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                             ? 0xffffffffU
                                             : 0U))) 
                           << 0x20U) | (QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)))
                       : ((2U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_h78cd338f__0))
                           ? (((QData)((IData)(((1U 
                                                 & (IData)(
                                                           (1ULL 
                                                            & ((- 
                                                                ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                                 << 1U)) 
                                                               >> 0x20U))))
                                                 ? 0x7fffffffU
                                                 : 0U))) 
                               << 0x21U) | (0x1ffffffffULL 
                                            & (- ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                  << 1U))))
                           : ((3U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_h78cd338f__0))
                               ? (((QData)((IData)(
                                                   (((- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1) 
                                                     >> 0x1fU)
                                                     ? 0xffffffffU
                                                     : 0U))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1))))
                               : 0ULL))));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
        = ((0U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_1))
            ? 0ULL : (((1U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_1)) 
                       | (2U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_1)))
                       ? (((QData)((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                             ? 0x3fffffffU
                                             : 0U))) 
                           << 0x22U) | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                        << 2U)) : (
                                                   (3U 
                                                    == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                                                       ? 0x1fffffffU
                                                                       : 0U))) 
                                                     << 0x23U) 
                                                    | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                       << 3U))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_1))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (1ULL 
                                                                                & ((- 
                                                                                ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                                                << 1U)) 
                                                                                >> 0x20U))))
                                                                        ? 0x1fffffffU
                                                                        : 0U))) 
                                                      << 0x23U) 
                                                     | (0x7fffffffcULL 
                                                        & ((- 
                                                            ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                             << 1U)) 
                                                           << 2U)))
                                                     : 
                                                    (((5U 
                                                       == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_1)) 
                                                      | (6U 
                                                         == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_1)))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (((- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1) 
                                                                         >> 0x1fU)
                                                                         ? 0x3fffffffU
                                                                         : 0U))) 
                                                       << 0x22U) 
                                                      | ((QData)((IData)(
                                                                         (- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1))) 
                                                         << 2U))
                                                      : 0ULL)))));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
        = ((0U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_2))
            ? 0ULL : (((1U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_2)) 
                       | (2U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_2)))
                       ? (((QData)((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                             ? 0xfffffffU
                                             : 0U))) 
                           << 0x24U) | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                        << 4U)) : (
                                                   (3U 
                                                    == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_2))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                                                       ? 0x7ffffffU
                                                                       : 0U))) 
                                                     << 0x25U) 
                                                    | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                       << 5U))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_2))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (1ULL 
                                                                                & ((- 
                                                                                ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                                                << 1U)) 
                                                                                >> 0x20U))))
                                                                        ? 0x7ffffffU
                                                                        : 0U))) 
                                                      << 0x25U) 
                                                     | (0x1ffffffff0ULL 
                                                        & ((- 
                                                            ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                             << 1U)) 
                                                           << 4U)))
                                                     : 
                                                    (((5U 
                                                       == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_2)) 
                                                      | (6U 
                                                         == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_2)))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (((- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1) 
                                                                         >> 0x1fU)
                                                                         ? 0xfffffffU
                                                                         : 0U))) 
                                                       << 0x24U) 
                                                      | ((QData)((IData)(
                                                                         (- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1))) 
                                                         << 4U))
                                                      : 0ULL)))));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
        = ((0U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_3))
            ? 0ULL : (((1U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_3)) 
                       | (2U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_3)))
                       ? (((QData)((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                             ? 0x3ffffffU
                                             : 0U))) 
                           << 0x26U) | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                        << 6U)) : (
                                                   (3U 
                                                    == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_3))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                                                       ? 0x1ffffffU
                                                                       : 0U))) 
                                                     << 0x27U) 
                                                    | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                       << 7U))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_3))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (1ULL 
                                                                                & ((- 
                                                                                ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                                                << 1U)) 
                                                                                >> 0x20U))))
                                                                        ? 0x1ffffffU
                                                                        : 0U))) 
                                                      << 0x27U) 
                                                     | (0x7fffffffc0ULL 
                                                        & ((- 
                                                            ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                             << 1U)) 
                                                           << 6U)))
                                                     : 
                                                    (((5U 
                                                       == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_3)) 
                                                      | (6U 
                                                         == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_3)))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (((- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1) 
                                                                         >> 0x1fU)
                                                                         ? 0x3ffffffU
                                                                         : 0U))) 
                                                       << 0x26U) 
                                                      | ((QData)((IData)(
                                                                         (- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1))) 
                                                         << 6U))
                                                      : 0ULL)))));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
        = ((0U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_4))
            ? 0ULL : (((1U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_4)) 
                       | (2U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_4)))
                       ? (((QData)((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                             ? 0xffffffU
                                             : 0U))) 
                           << 0x28U) | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                        << 8U)) : (
                                                   (3U 
                                                    == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_4))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                                                       ? 0x7fffffU
                                                                       : 0U))) 
                                                     << 0x29U) 
                                                    | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                       << 9U))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_4))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (1ULL 
                                                                                & ((- 
                                                                                ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                                                << 1U)) 
                                                                                >> 0x20U))))
                                                                        ? 0x7fffffU
                                                                        : 0U))) 
                                                      << 0x29U) 
                                                     | (0x1ffffffff00ULL 
                                                        & ((- 
                                                            ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                             << 1U)) 
                                                           << 8U)))
                                                     : 
                                                    (((5U 
                                                       == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_4)) 
                                                      | (6U 
                                                         == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_4)))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (((- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1) 
                                                                         >> 0x1fU)
                                                                         ? 0xffffffU
                                                                         : 0U))) 
                                                       << 0x28U) 
                                                      | ((QData)((IData)(
                                                                         (- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1))) 
                                                         << 8U))
                                                      : 0ULL)))));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
        = ((0U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_5))
            ? 0ULL : (((1U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_5)) 
                       | (2U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_5)))
                       ? (((QData)((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                             ? 0x3fffffU
                                             : 0U))) 
                           << 0x2aU) | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                        << 0xaU)) : 
                      ((3U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_5))
                        ? (((QData)((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                              ? 0x1fffffU
                                              : 0U))) 
                            << 0x2bU) | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                         << 0xbU)) : 
                       ((4U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_5))
                         ? (((QData)((IData)(((1U & (IData)(
                                                            (1ULL 
                                                             & ((- 
                                                                 ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                                  << 1U)) 
                                                                >> 0x20U))))
                                               ? 0x1fffffU
                                               : 0U))) 
                             << 0x2bU) | (0x7fffffffc00ULL 
                                          & ((- ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                 << 1U)) 
                                             << 0xaU)))
                         : (((5U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_5)) 
                             | (6U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_5)))
                             ? (((QData)((IData)(((
                                                   (- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1) 
                                                   >> 0x1fU)
                                                   ? 0x3fffffU
                                                   : 0U))) 
                                 << 0x2aU) | ((QData)((IData)(
                                                              (- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1))) 
                                              << 0xaU))
                             : 0ULL)))));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
        = ((0U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_6))
            ? 0ULL : (((1U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_6)) 
                       | (2U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_6)))
                       ? (((QData)((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                             ? 0xfffffU
                                             : 0U))) 
                           << 0x2cU) | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                        << 0xcU)) : 
                      ((3U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_6))
                        ? (((QData)((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                              ? 0x7ffffU
                                              : 0U))) 
                            << 0x2dU) | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                         << 0xdU)) : 
                       ((4U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_6))
                         ? (((QData)((IData)(((1U & (IData)(
                                                            (1ULL 
                                                             & ((- 
                                                                 ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                                  << 1U)) 
                                                                >> 0x20U))))
                                               ? 0x7ffffU
                                               : 0U))) 
                             << 0x2dU) | (0x1ffffffff000ULL 
                                          & ((- ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                 << 1U)) 
                                             << 0xcU)))
                         : (((5U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_6)) 
                             | (6U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_6)))
                             ? (((QData)((IData)(((
                                                   (- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1) 
                                                   >> 0x1fU)
                                                   ? 0xfffffU
                                                   : 0U))) 
                                 << 0x2cU) | ((QData)((IData)(
                                                              (- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1))) 
                                              << 0xcU))
                             : 0ULL)))));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
        = ((0U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_7))
            ? 0ULL : (((1U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_7)) 
                       | (2U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_7)))
                       ? (((QData)((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                             ? 0x3ffffU
                                             : 0U))) 
                           << 0x2eU) | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                        << 0xeU)) : 
                      ((3U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_7))
                        ? (((QData)((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                              ? 0x1ffffU
                                              : 0U))) 
                            << 0x2fU) | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                         << 0xfU)) : 
                       ((4U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_7))
                         ? (((QData)((IData)(((1U & (IData)(
                                                            (1ULL 
                                                             & ((- 
                                                                 ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                                  << 1U)) 
                                                                >> 0x20U))))
                                               ? 0x1ffffU
                                               : 0U))) 
                             << 0x2fU) | (0x7fffffffc000ULL 
                                          & ((- ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                 << 1U)) 
                                             << 0xeU)))
                         : (((5U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_7)) 
                             | (6U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_7)))
                             ? (((QData)((IData)(((
                                                   (- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1) 
                                                   >> 0x1fU)
                                                   ? 0x3ffffU
                                                   : 0U))) 
                                 << 0x2eU) | ((QData)((IData)(
                                                              (- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1))) 
                                              << 0xeU))
                             : 0ULL)))));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
        = ((0U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_8))
            ? 0ULL : (((1U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_8)) 
                       | (2U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_8)))
                       ? (((QData)((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                             ? 0xffffU
                                             : 0U))) 
                           << 0x30U) | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                        << 0x10U)) : 
                      ((3U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_8))
                        ? (((QData)((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                              ? 0x7fffU
                                              : 0U))) 
                            << 0x31U) | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                         << 0x11U))
                        : ((4U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_8))
                            ? (((QData)((IData)(((1U 
                                                  & (IData)(
                                                            (1ULL 
                                                             & ((- 
                                                                 ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                                  << 1U)) 
                                                                >> 0x20U))))
                                                  ? 0x7fffU
                                                  : 0U))) 
                                << 0x31U) | (0x1ffffffff0000ULL 
                                             & ((- 
                                                 ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                  << 1U)) 
                                                << 0x10U)))
                            : (((5U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_8)) 
                                | (6U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_8)))
                                ? (((QData)((IData)(
                                                    (((- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1) 
                                                      >> 0x1fU)
                                                      ? 0xffffU
                                                      : 0U))) 
                                    << 0x30U) | ((QData)((IData)(
                                                                 (- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1))) 
                                                 << 0x10U))
                                : 0ULL)))));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A 
        = ((0U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_9))
            ? 0ULL : (((1U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_9)) 
                       | (2U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_9)))
                       ? (((QData)((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                             ? 0x3fffU
                                             : 0U))) 
                           << 0x32U) | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                        << 0x12U)) : 
                      ((3U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_9))
                        ? (((QData)((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                              ? 0x1fffU
                                              : 0U))) 
                            << 0x33U) | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                         << 0x13U))
                        : ((4U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_9))
                            ? (((QData)((IData)(((1U 
                                                  & (IData)(
                                                            (1ULL 
                                                             & ((- 
                                                                 ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                                  << 1U)) 
                                                                >> 0x20U))))
                                                  ? 0x1fffU
                                                  : 0U))) 
                                << 0x33U) | (0x7fffffffc0000ULL 
                                             & ((- 
                                                 ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                  << 1U)) 
                                                << 0x12U)))
                            : (((5U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_9)) 
                                | (6U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_9)))
                                ? (((QData)((IData)(
                                                    (((- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1) 
                                                      >> 0x1fU)
                                                      ? 0x3fffU
                                                      : 0U))) 
                                    << 0x32U) | ((QData)((IData)(
                                                                 (- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1))) 
                                                 << 0x12U))
                                : 0ULL)))));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B 
        = ((0U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_10))
            ? 0ULL : (((1U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_10)) 
                       | (2U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_10)))
                       ? (((QData)((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                             ? 0xfffU
                                             : 0U))) 
                           << 0x34U) | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                        << 0x14U)) : 
                      ((3U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_10))
                        ? (((QData)((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                              ? 0x7ffU
                                              : 0U))) 
                            << 0x35U) | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                         << 0x15U))
                        : ((4U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_10))
                            ? (((QData)((IData)(((1U 
                                                  & (IData)(
                                                            (1ULL 
                                                             & ((- 
                                                                 ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                                  << 1U)) 
                                                                >> 0x20U))))
                                                  ? 0x7ffU
                                                  : 0U))) 
                                << 0x35U) | (0x1ffffffff00000ULL 
                                             & ((- 
                                                 ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                  << 1U)) 
                                                << 0x14U)))
                            : (((5U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_10)) 
                                | (6U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_10)))
                                ? (((QData)((IData)(
                                                    (((- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1) 
                                                      >> 0x1fU)
                                                      ? 0xfffU
                                                      : 0U))) 
                                    << 0x34U) | ((QData)((IData)(
                                                                 (- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1))) 
                                                 << 0x14U))
                                : 0ULL)))));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin 
        = ((0U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_11))
            ? 0ULL : (((1U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_11)) 
                       | (2U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_11)))
                       ? (((QData)((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                             ? 0x3ffU
                                             : 0U))) 
                           << 0x36U) | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                        << 0x16U)) : 
                      ((3U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_11))
                        ? (((QData)((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                              ? 0x1ffU
                                              : 0U))) 
                            << 0x37U) | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                         << 0x17U))
                        : ((4U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_11))
                            ? (((QData)((IData)(((1U 
                                                  & (IData)(
                                                            (1ULL 
                                                             & ((- 
                                                                 ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                                  << 1U)) 
                                                                >> 0x20U))))
                                                  ? 0x1ffU
                                                  : 0U))) 
                                << 0x37U) | (0x7fffffffc00000ULL 
                                             & ((- 
                                                 ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                  << 1U)) 
                                                << 0x16U)))
                            : (((5U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_11)) 
                                | (6U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_11)))
                                ? (((QData)((IData)(
                                                    (((- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1) 
                                                      >> 0x1fU)
                                                      ? 0x3ffU
                                                      : 0U))) 
                                    << 0x36U) | ((QData)((IData)(
                                                                 (- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1))) 
                                                 << 0x16U))
                                : 0ULL)))));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A 
        = ((0U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_12))
            ? 0ULL : (((1U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_12)) 
                       | (2U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_12)))
                       ? (((QData)((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                             ? 0xffU
                                             : 0U))) 
                           << 0x38U) | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                        << 0x18U)) : 
                      ((3U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_12))
                        ? (((QData)((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                              ? 0x7fU
                                              : 0U))) 
                            << 0x39U) | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                         << 0x19U))
                        : ((4U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_12))
                            ? (((QData)((IData)(((1U 
                                                  & (IData)(
                                                            (1ULL 
                                                             & ((- 
                                                                 ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                                  << 1U)) 
                                                                >> 0x20U))))
                                                  ? 0x7fU
                                                  : 0U))) 
                                << 0x39U) | (0x1ffffffff000000ULL 
                                             & ((- 
                                                 ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                  << 1U)) 
                                                << 0x18U)))
                            : (((5U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_12)) 
                                | (6U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_12)))
                                ? (((QData)((IData)(
                                                    (((- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1) 
                                                      >> 0x1fU)
                                                      ? 0xffU
                                                      : 0U))) 
                                    << 0x38U) | ((QData)((IData)(
                                                                 (- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1))) 
                                                 << 0x18U))
                                : 0ULL)))));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B 
        = ((0U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_13))
            ? 0ULL : (((1U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_13)) 
                       | (2U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_13)))
                       ? (((QData)((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                             ? 0x3fU
                                             : 0U))) 
                           << 0x3aU) | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                        << 0x1aU)) : 
                      ((3U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_13))
                        ? (((QData)((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                              ? 0x1fU
                                              : 0U))) 
                            << 0x3bU) | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                         << 0x1bU))
                        : ((4U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_13))
                            ? (((QData)((IData)(((1U 
                                                  & (IData)(
                                                            (1ULL 
                                                             & ((- 
                                                                 ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                                  << 1U)) 
                                                                >> 0x20U))))
                                                  ? 0x1fU
                                                  : 0U))) 
                                << 0x3bU) | (0x7fffffffc000000ULL 
                                             & ((- 
                                                 ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                  << 1U)) 
                                                << 0x1aU)))
                            : (((5U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_13)) 
                                | (6U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_13)))
                                ? (((QData)((IData)(
                                                    (((- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1) 
                                                      >> 0x1fU)
                                                      ? 0x3fU
                                                      : 0U))) 
                                    << 0x3aU) | ((QData)((IData)(
                                                                 (- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1))) 
                                                 << 0x1aU))
                                : 0ULL)))));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin 
        = ((0U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_14))
            ? 0ULL : (((1U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_14)) 
                       | (2U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_14)))
                       ? (((QData)((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                             ? 0xfU
                                             : 0U))) 
                           << 0x3cU) | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                        << 0x1cU)) : 
                      ((3U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_14))
                        ? (((QData)((IData)(((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_hb9e64110__0)
                                              ? 7U : 0U))) 
                            << 0x3dU) | ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                         << 0x1dU))
                        : ((4U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_14))
                            ? (((QData)((IData)(((1U 
                                                  & (IData)(
                                                            (1ULL 
                                                             & ((- 
                                                                 ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                                  << 1U)) 
                                                                >> 0x20U))))
                                                  ? 7U
                                                  : 0U))) 
                                << 0x3dU) | (0x1ffffffff0000000ULL 
                                             & ((- 
                                                 ((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                                  << 1U)) 
                                                << 0x1cU)))
                            : (((5U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_14)) 
                                | (6U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_14)))
                                ? (((QData)((IData)(
                                                    (((- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1) 
                                                      >> 0x1fU)
                                                      ? 0xfU
                                                      : 0U))) 
                                    << 0x3cU) | ((QData)((IData)(
                                                                 (- vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mul_io_mul1))) 
                                                 << 0x1cU))
                                : 0ULL)))));
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_ico(Vtop___024root* vlSelf);
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_nba(Vtop___024root* vlSelf);

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
                VL_FATAL_MT("/home/hujun/ysyx-workbench/npc/verilog/vsrc/top.v", 7793, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("/home/hujun/ysyx-workbench/npc/verilog/vsrc/top.v", 7793, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/hujun/ysyx-workbench/npc/verilog/vsrc/top.v", 7793, "", "NBA region did not converge.");
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
