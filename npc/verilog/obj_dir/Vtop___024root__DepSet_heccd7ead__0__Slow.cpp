// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->io_rom_en = 1U;
    vlSelf->io_rom_wen = 0U;
    vlSelf->io_rom_wdata = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/hujun/ysyx-workbench/npc/verilog/vsrc/top.v", 3714, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
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
    vlSelf->io_rom_addr = vlSelf->top__DOT__fetch__DOT__pc;
    vlSelf->io_ram_addr = (0xfffffffcU & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data);
    vlSelf->top__DOT__fetch__DOT___T_1 = ((IData)(4U) 
                                          + vlSelf->top__DOT__fetch__DOT__pc);
    vlSelf->top__DOT__csr__DOT___T_617 = (1ULL + vlSelf->top__DOT__csr__DOT__mcycle_data);
    vlSelf->top__DOT__csr__DOT___T_619 = (1ULL + vlSelf->top__DOT__csr__DOT__minstret_data);
    vlSelf->top__DOT__fetch__DOT__bpu_io_prdt_taken_o 
        = ((IData)(vlSelf->io_rom_valid) & ((IData)(
                                                    (0x80000063U 
                                                     == 
                                                     (0x8000007fU 
                                                      & vlSelf->io_rom_rdata))) 
                                            | (0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->io_rom_rdata))));
    vlSelf->top__DOT__regfile__DOT___T_4 = ((IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_en) 
                                            & (0U != (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr)));
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
    vlSelf->top__DOT__fetch__DOT__bpu__DOT__inst_b_type_imm 
        = ((((vlSelf->io_rom_rdata >> 0x1fU) ? 0xfffffU
              : 0U) << 0xcU) | ((0x800U & (vlSelf->io_rom_rdata 
                                           << 4U)) 
                                | ((0x7e0U & (vlSelf->io_rom_rdata 
                                              >> 0x14U)) 
                                   | (0x1eU & (vlSelf->io_rom_rdata 
                                               >> 7U)))));
    vlSelf->top__DOT__EX_io_ex_o_load = ((0U != (IData)(vlSelf->top__DOT__ID_EX__DOT__ff_lsuOp)) 
                                         & (IData)(vlSelf->top__DOT__ID_EX__DOT__ff_regWen));
    vlSelf->top__DOT__resoler__DOT___T_35 = ((0U != (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op)) 
                                             & (1U 
                                                != (IData)(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op)));
    vlSelf->top__DOT__csr__DOT___T_83 = ((vlSelf->top__DOT__csr__DOT__stvec_base 
                                          << 2U) | (IData)(vlSelf->top__DOT__csr__DOT__stvec_mode));
    vlSelf->top__DOT__csr__DOT___T_84 = (((IData)(vlSelf->top__DOT__csr__DOT__scause_int) 
                                          << 0x1fU) 
                                         | vlSelf->top__DOT__csr__DOT__scause_code);
    vlSelf->top__DOT__csr__DOT___T_94 = (((IData)(vlSelf->top__DOT__csr__DOT__satp_mode) 
                                          << 0x1fU) 
                                         | vlSelf->top__DOT__csr__DOT__satp_ppn);
    vlSelf->top__DOT__csr__DOT___T_74 = (((IData)(vlSelf->top__DOT__csr__DOT__mstatus_sum) 
                                          << 0x12U) 
                                         | (((IData)(vlSelf->top__DOT__csr__DOT__mstatus_spp) 
                                             << 8U) 
                                            | (((IData)(vlSelf->top__DOT__csr__DOT__mstatus_spie) 
                                                << 5U) 
                                               | ((IData)(vlSelf->top__DOT__csr__DOT__mstatus_sie) 
                                                  << 1U))));
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
    vlSelf->top__DOT__MEM__DOT__signed_ = ((1U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                           | (2U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuOp)));
    vlSelf->top__DOT__csr__DOT___T_129 = ((vlSelf->top__DOT__csr__DOT__mtvec_base 
                                           << 2U) | (IData)(vlSelf->top__DOT__csr__DOT__mtvec_mode));
    vlSelf->top__DOT__csr__DOT___T_130 = (((IData)(vlSelf->top__DOT__csr__DOT__mcause_int) 
                                           << 0x1fU) 
                                          | vlSelf->top__DOT__csr__DOT__mcause_code);
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
    vlSelf->top__DOT__ID__DOT___T_1 = ((IData)(vlSelf->top__DOT__ID__DOT__stall)
                                        ? vlSelf->top__DOT__ID__DOT__lastinst
                                        : vlSelf->top__DOT__IF_ID__DOT__ff_inst);
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
    vlSelf->top__DOT__MEM_io_stallReq = (1U & ((~ (IData)(vlSelf->io_ram_valid)) 
                                               | (IData)(vlSelf->top__DOT__resoler__DOT___T_35)));
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
    vlSelf->top__DOT__ID__DOT___T_848 = (((IData)(vlSelf->top__DOT__IF_ID__DOT__ff_valid)
                                           ? (vlSelf->top__DOT__ID__DOT___T_1 
                                              >> 0xcU)
                                           : 0U) << 0xcU);
    if (vlSelf->top__DOT__IF_ID__DOT__ff_valid) {
        vlSelf->top__DOT__ID__DOT____VdfgTmp_h8afae4a5__0 
            = (vlSelf->top__DOT__ID__DOT___T_1 >> 0x1fU);
        vlSelf->top__DOT__ID__DOT__immI = (vlSelf->top__DOT__ID__DOT___T_1 
                                           >> 0x14U);
        vlSelf->top__DOT__ID__DOT__rd = (0x1fU & (vlSelf->top__DOT__ID__DOT___T_1 
                                                  >> 7U));
        vlSelf->top__DOT__ID__DOT__rs2 = (0x1fU & (vlSelf->top__DOT__ID__DOT___T_1 
                                                   >> 0x14U));
        vlSelf->top__DOT__ID__DOT__rs1 = (0x1fU & (vlSelf->top__DOT__ID__DOT___T_1 
                                                   >> 0xfU));
        vlSelf->top__DOT__ID__DOT__inst = vlSelf->top__DOT__ID__DOT___T_1;
    } else {
        vlSelf->top__DOT__ID__DOT____VdfgTmp_h8afae4a5__0 = 0U;
        vlSelf->top__DOT__ID__DOT__immI = 0U;
        vlSelf->top__DOT__ID__DOT__rd = 0U;
        vlSelf->top__DOT__ID__DOT__rs2 = 0U;
        vlSelf->top__DOT__ID__DOT__rs1 = 0U;
        vlSelf->top__DOT__ID__DOT__inst = 0x13U;
    }
    vlSelf->io_ram_wen = ((IData)(vlSelf->top__DOT__MEM__DOT__wen)
                           ? (0xfU & (IData)(vlSelf->top__DOT__MEM__DOT__writeEn))
                           : 0xfU);
    vlSelf->top__DOT__MEM__DOT__memExcept = ((IData)(vlSelf->top__DOT__MEM__DOT__memAddr) 
                                             | (IData)(vlSelf->io_ram_fault));
    vlSelf->top__DOT__csr__DOT__flagIntS = (vlSelf->top__DOT__csr__DOT___T_92 
                                            & vlSelf->top__DOT__csr__DOT___T_82);
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
    vlSelf->top__DOT__ID__DOT___GEN_2 = (((- (IData)((IData)(vlSelf->top__DOT__ID__DOT____VdfgTmp_h8afae4a5__0))) 
                                          << 0xcU) 
                                         | (IData)(vlSelf->top__DOT__ID__DOT__immI));
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
    vlSelf->top__DOT__csr__DOT___T_605 = ((IData)(vlSelf->top__DOT__csr__DOT__handIntS) 
                                          | (IData)(vlSelf->top__DOT__csr__DOT__handExcS));
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
    vlSelf->top__DOT__csr__DOT___GEN_67 = ((IData)(vlSelf->top__DOT__csr__DOT___T_605) 
                                           & (IData)(vlSelf->top__DOT__csr__DOT__mstatus_mie));
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

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_rom_en = VL_RAND_RESET_I(1);
    vlSelf->io_rom_valid = VL_RAND_RESET_I(1);
    vlSelf->io_rom_fault = VL_RAND_RESET_I(1);
    vlSelf->io_rom_wen = VL_RAND_RESET_I(4);
    vlSelf->io_rom_addr = VL_RAND_RESET_I(32);
    vlSelf->io_rom_rdata = VL_RAND_RESET_I(32);
    vlSelf->io_rom_wdata = VL_RAND_RESET_I(32);
    vlSelf->io_ram_en = VL_RAND_RESET_I(1);
    vlSelf->io_ram_valid = VL_RAND_RESET_I(1);
    vlSelf->io_ram_fault = VL_RAND_RESET_I(1);
    vlSelf->io_ram_wen = VL_RAND_RESET_I(4);
    vlSelf->io_ram_addr = VL_RAND_RESET_I(32);
    vlSelf->io_ram_rdata = VL_RAND_RESET_I(32);
    vlSelf->io_ram_wdata = VL_RAND_RESET_I(32);
    vlSelf->io_timer = VL_RAND_RESET_I(1);
    vlSelf->io_soft = VL_RAND_RESET_I(1);
    vlSelf->io_extern = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IF_ID_io_stallPrev = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ID_io_read1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ID_io_read2_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ID_io_read2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ID_io_stallid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EX_io_ex_o_load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EX_MEM_io_stallPrev = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MEM_io_stallReq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MEM_io_except_excValue = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__MEM_io_mem_o_reg_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__resoler_io_loadflag = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__resoler_io_csrflag = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fetch__DOT__bpu_io_prdt_taken_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fetch__DOT__bpu_io_prdt_addr_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__fetch__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__fetch__DOT___T_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__fetch__DOT__bpu__DOT__inst_b_type_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IF_ID__DOT__ff_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IF_ID__DOT__ff_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IF_ID__DOT__ff_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IF_ID__DOT__ff_bpu_take = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IF_ID__DOT__ff_bpu_takepc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IF_ID__DOT__ff_misaligned = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ID__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ID__DOT__lastinst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ID__DOT___T_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ID__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ID__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__ID__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__ID__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__ID__DOT__immI = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__ID__DOT__regEn1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ID__DOT___T_293 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ID__DOT__aluSrc1 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ID__DOT__aluSrc2 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ID__DOT___T_472 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ID__DOT__branchOp = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ID__DOT___T_588 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ID__DOT__csrOp = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ID__DOT___T_762 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ID__DOT___GEN_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ID__DOT___T_791 = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__ID__DOT__takepc = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__ID__DOT__branchteke = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ID__DOT__branchmiss = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ID__DOT__addrFault = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ID__DOT__csrActOp = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ID__DOT___T_839 = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__ID__DOT___T_848 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ID__DOT____VdfgTmp_h8afae4a5__0 = 0;
    vlSelf->top__DOT__ID__DOT____VdfgTmp_h7417a8e6__0 = 0;
    vlSelf->top__DOT__ID_EX__DOT__ff_aluOp = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ID_EX__DOT__ff_opr1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ID_EX__DOT__ff_opr2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ID_EX__DOT__ff_lsuOp = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ID_EX__DOT__ff_lsuData = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ID_EX__DOT__ff_regWen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ID_EX__DOT__ff_regWaddr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__ID_EX__DOT__ff_csrOp = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ID_EX__DOT__ff_csrAddr = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__ID_EX__DOT__ff_csren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ID_EX__DOT__ff_csrrData = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ID_EX__DOT__ff_csrwData = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ID_EX__DOT__ff_excType = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__ID_EX__DOT__ff_excValue = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ID_EX__DOT__ff_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ID_EX__DOT__ff_currentPc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EX__DOT__result = VL_RAND_RESET_Q(63);
    vlSelf->top__DOT__EX_MEM__DOT__ff_lsuOp = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__EX_MEM__DOT__ff_lsuData = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EX_MEM__DOT__ff_reg_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EX_MEM__DOT__ff_reg_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EX_MEM__DOT__ff_load = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EX_MEM__DOT__ff_csr_op = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__EX_MEM__DOT__ff_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__EX_MEM__DOT__ff_csr_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EX_MEM__DOT__ff_csr_retired = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EX_MEM__DOT__ff_excType = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__EX_MEM__DOT__ff_excValue = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EX_MEM__DOT__ff_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EX_MEM__DOT__ff_currentPc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__MEM__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MEM__DOT__width = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__MEM__DOT__signed_ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MEM__DOT__writeEn = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__MEM__DOT__memAddr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MEM__DOT__memExcept = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MEM__DOT__hasTrap = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MEM_WB__DOT__ff_reg_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__MEM_WB__DOT__ff_csr_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__MEM_WB__DOT__ff_csr_retired = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__regfile__DOT__regfile_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_5 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_7 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_8 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_9 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_10 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_11 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_12 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_13 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_14 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_15 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_16 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_17 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_18 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_19 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_20 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_21 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_22 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_23 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_24 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_25 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_26 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_27 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_28 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_29 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_30 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT__regfile_31 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT___GEN_21 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT___GEN_53 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__regfile__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__resoler__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__resoler__DOT___T_10 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__resoler__DOT___T_35 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__mode = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__csr__DOT__mstatus_sum = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__mstatus_mpp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__csr__DOT__mstatus_spp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__mstatus_mpie = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__mstatus_spie = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__mstatus_mie = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__mstatus_sie = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__medeleg_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT__mideleg_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT__mie_meie = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__mie_seie = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__mie_mtie = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__mie_stie = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__mie_msie = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__mie_ssie = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__mtvec_base = VL_RAND_RESET_I(30);
    vlSelf->top__DOT__csr__DOT__mtvec_mode = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__csr__DOT__mscratch_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT__mepc_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT__mcause_int = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__mcause_code = VL_RAND_RESET_I(31);
    vlSelf->top__DOT__csr__DOT__mtval_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT__mipReal_seip = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__mipReal_stip = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__mipReal_ssip = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__mcycle_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__csr__DOT__minstret_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__csr__DOT___T_31 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT___T_47 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT__stvec_base = VL_RAND_RESET_I(30);
    vlSelf->top__DOT__csr__DOT__stvec_mode = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__csr__DOT__sscratch_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT__sepc_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT__scause_int = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__scause_code = VL_RAND_RESET_I(31);
    vlSelf->top__DOT__csr__DOT__stval_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT__satp_mode = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__satp_ppn = VL_RAND_RESET_I(22);
    vlSelf->top__DOT__csr__DOT___T_74 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT___T_82 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT___T_83 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT___T_84 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT__mip_ssip = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__mip_stip = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__mip_seip = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT___T_92 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT___T_94 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT___T_129 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT___T_130 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT___T_235 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT__readable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__writable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT___T_319 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__csrData = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT___T_510 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT___T_512 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT__writeData = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT__flagIntS = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT__flagIntM = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT__hasIntM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__hasInt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__handIntS = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__handExcS = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT__intCauseS = VL_RAND_RESET_I(31);
    vlSelf->top__DOT__csr__DOT__cause = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT___T_605 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr__DOT___T_617 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__csr__DOT___T_619 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__csr__DOT___T_675 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT___T_717 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT___T_756 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__csr__DOT___T_762 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__csr__DOT___T_765 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__csr__DOT___T_768 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__csr__DOT___T_771 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__csr__DOT___GEN_67 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
