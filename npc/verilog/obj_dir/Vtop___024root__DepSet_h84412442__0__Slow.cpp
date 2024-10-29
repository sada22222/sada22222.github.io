// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void Vtop___024unit____Vdpiimwrap_set_gpr_ptr_TOP____024unit(IData/*31:0*/ dut_x0, IData/*31:0*/ dut_x1, IData/*31:0*/ dut_x2, IData/*31:0*/ dut_x3, IData/*31:0*/ dut_x4, IData/*31:0*/ dut_x5, IData/*31:0*/ dut_x6, IData/*31:0*/ dut_x7, IData/*31:0*/ dut_x8, IData/*31:0*/ dut_x9, IData/*31:0*/ dut_x10, IData/*31:0*/ dut_x11, IData/*31:0*/ dut_x12, IData/*31:0*/ dut_x13, IData/*31:0*/ dut_x14, IData/*31:0*/ dut_x15, IData/*31:0*/ dut_x16, IData/*31:0*/ dut_x17, IData/*31:0*/ dut_x18, IData/*31:0*/ dut_x19, IData/*31:0*/ dut_x20, IData/*31:0*/ dut_x21, IData/*31:0*/ dut_x22, IData/*31:0*/ dut_x23, IData/*31:0*/ dut_x24, IData/*31:0*/ dut_x25, IData/*31:0*/ dut_x26, IData/*31:0*/ dut_x27, IData/*31:0*/ dut_x28, IData/*31:0*/ dut_x29, IData/*31:0*/ dut_x30, IData/*31:0*/ dut_x31);
void Vtop___024unit____Vdpiimwrap_get_diff_commit_TOP____024unit(CData/*0:0*/ commit);
void Vtop___024unit____Vdpiimwrap_vaddr_read_TOP____024unit(CData/*0:0*/ is_signed, IData/*31:0*/ addr, CData/*7:0*/ mask, IData/*31:0*/ &vaddr_read__Vfuncrtn);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->io_inst = vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data;
    vlSelf->io_npc = vlSelf->Core__DOT__fetch__DOT__pc;
    vlSelf->io_next = vlSelf->Core__DOT__EX_MEM__DOT__ff_excType;
    vlSelf->io_idpc = vlSelf->Core__DOT__IF_ID__DOT__ff_pc;
    vlSelf->io_idinst = vlSelf->Core__DOT__IF_ID__DOT__ff_inst;
    vlSelf->io_meminst = vlSelf->Core__DOT__EX_MEM__DOT__ff_inst;
    vlSelf->io_result = vlSelf->Core__DOT__MEM_WB__DOT__ff_reg_data;
    vlSelf->Core__DOT__fetch__DOT___T_2 = ((IData)(4U) 
                                           + vlSelf->Core__DOT__fetch__DOT__pc);
    vlSelf->Core__DOT__csr__DOT___T_617 = (1ULL + vlSelf->Core__DOT__csr__DOT__mcycle_data);
    vlSelf->Core__DOT__csr__DOT___T_619 = (1ULL + vlSelf->Core__DOT__csr__DOT__minstret_data);
    vlSelf->io_pc = vlSelf->Core__DOT__MEM_WB__DOT__ff_currentPc;
    vlSelf->io_wbinst = vlSelf->Core__DOT__MEM_WB__DOT__ff_inst;
    vlSelf->io_expc = vlSelf->Core__DOT__ID_EX__DOT__ff_currentPc;
    vlSelf->io_exinst = vlSelf->Core__DOT__ID_EX__DOT__ff_inst;
    vlSelf->io_mempc = vlSelf->Core__DOT__EX_MEM__DOT__ff_currentPc;
    vlSelf->Core__DOT__regfile__DOT___T_4 = ((IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_reg_en) 
                                             & (0U 
                                                != (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_reg_addr)));
    vlSelf->Core__DOT__fetch__DOT__bpu__DOT__inst_b_type_imm 
        = ((((vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data 
              >> 0x1fU) ? 0xfffffU : 0U) << 0xcU) | 
           ((0x800U & (vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data 
                       << 4U)) | ((0x7e0U & (vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data 
                                             >> 0x14U)) 
                                  | (0x1eU & (vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data 
                                              >> 7U)))));
    vlSelf->Core__DOT__EX_io_ex_o_load = ((0U != (IData)(vlSelf->Core__DOT__ID_EX__DOT__ff_lsuOp)) 
                                          & (IData)(vlSelf->Core__DOT__ID_EX__DOT__ff_regWen));
    Vtop___024unit____Vdpiimwrap_set_gpr_ptr_TOP____024unit(vlSelf->Core__DOT__regfile__DOT__regfile_0, vlSelf->Core__DOT__regfile__DOT__regfile_1, vlSelf->Core__DOT__regfile__DOT__regfile_2, vlSelf->Core__DOT__regfile__DOT__regfile_3, vlSelf->Core__DOT__regfile__DOT__regfile_4, vlSelf->Core__DOT__regfile__DOT__regfile_5, vlSelf->Core__DOT__regfile__DOT__regfile_6, vlSelf->Core__DOT__regfile__DOT__regfile_7, vlSelf->Core__DOT__regfile__DOT__regfile_8, vlSelf->Core__DOT__regfile__DOT__regfile_9, vlSelf->Core__DOT__regfile__DOT__regfile_10, vlSelf->Core__DOT__regfile__DOT__regfile_11, vlSelf->Core__DOT__regfile__DOT__regfile_12, vlSelf->Core__DOT__regfile__DOT__regfile_13, vlSelf->Core__DOT__regfile__DOT__regfile_14, vlSelf->Core__DOT__regfile__DOT__regfile_15, vlSelf->Core__DOT__regfile__DOT__regfile_16, vlSelf->Core__DOT__regfile__DOT__regfile_17, vlSelf->Core__DOT__regfile__DOT__regfile_18, vlSelf->Core__DOT__regfile__DOT__regfile_19, vlSelf->Core__DOT__regfile__DOT__regfile_20, vlSelf->Core__DOT__regfile__DOT__regfile_21, vlSelf->Core__DOT__regfile__DOT__regfile_22, vlSelf->Core__DOT__regfile__DOT__regfile_23, vlSelf->Core__DOT__regfile__DOT__regfile_24, vlSelf->Core__DOT__regfile__DOT__regfile_25, vlSelf->Core__DOT__regfile__DOT__regfile_26, vlSelf->Core__DOT__regfile__DOT__regfile_27, vlSelf->Core__DOT__regfile__DOT__regfile_28, vlSelf->Core__DOT__regfile__DOT__regfile_29, vlSelf->Core__DOT__regfile__DOT__regfile_30, vlSelf->Core__DOT__regfile__DOT__regfile_31);
    Vtop___024unit____Vdpiimwrap_get_diff_commit_TOP____024unit(0U);
    vlSelf->Core__DOT__resoler__DOT___T_35 = ((0U != (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_op)) 
                                              & (1U 
                                                 != (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_op)));
    vlSelf->Core__DOT__csr__DOT___T_83 = ((vlSelf->Core__DOT__csr__DOT__stvec_base 
                                           << 2U) | (IData)(vlSelf->Core__DOT__csr__DOT__stvec_mode));
    vlSelf->Core__DOT__csr__DOT___T_84 = (((IData)(vlSelf->Core__DOT__csr__DOT__scause_int) 
                                           << 0x1fU) 
                                          | vlSelf->Core__DOT__csr__DOT__scause_code);
    vlSelf->Core__DOT__csr__DOT___T_94 = (((IData)(vlSelf->Core__DOT__csr__DOT__satp_mode) 
                                           << 0x1fU) 
                                          | vlSelf->Core__DOT__csr__DOT__satp_ppn);
    vlSelf->Core__DOT__csr__DOT___T_74 = (((IData)(vlSelf->Core__DOT__csr__DOT__mstatus_sum) 
                                           << 0x12U) 
                                          | (((IData)(vlSelf->Core__DOT__csr__DOT__mstatus_spp) 
                                              << 8U) 
                                             | (((IData)(vlSelf->Core__DOT__csr__DOT__mstatus_spie) 
                                                 << 5U) 
                                                | ((IData)(vlSelf->Core__DOT__csr__DOT__mstatus_sie) 
                                                   << 1U))));
    vlSelf->Core__DOT__csr__DOT___T_129 = ((vlSelf->Core__DOT__csr__DOT__mtvec_base 
                                            << 2U) 
                                           | (IData)(vlSelf->Core__DOT__csr__DOT__mtvec_mode));
    vlSelf->Core__DOT__csr__DOT___T_130 = (((IData)(vlSelf->Core__DOT__csr__DOT__mcause_int) 
                                            << 0x1fU) 
                                           | vlSelf->Core__DOT__csr__DOT__mcause_code);
    vlSelf->Core__DOT__csr__DOT___T_31 = (((IData)(vlSelf->Core__DOT__csr__DOT__mstatus_sum) 
                                           << 0x12U) 
                                          | (((IData)(vlSelf->Core__DOT__csr__DOT__mstatus_mpp) 
                                              << 0xbU) 
                                             | (((IData)(vlSelf->Core__DOT__csr__DOT__mstatus_spp) 
                                                 << 8U) 
                                                | (((IData)(vlSelf->Core__DOT__csr__DOT__mstatus_mpie) 
                                                    << 7U) 
                                                   | (((IData)(vlSelf->Core__DOT__csr__DOT__mstatus_spie) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->Core__DOT__csr__DOT__mstatus_mie) 
                                                          << 3U) 
                                                         | ((IData)(vlSelf->Core__DOT__csr__DOT__mstatus_sie) 
                                                            << 1U)))))));
    vlSelf->Core__DOT__EX__DOT__result = (0x7fffffffffffffffULL 
                                          & ((IData)(vlSelf->Core__DOT__ID_EX__DOT__ff_csren)
                                              ? (QData)((IData)(vlSelf->Core__DOT__ID_EX__DOT__ff_csrrData))
                                              : ((0U 
                                                  == (IData)(vlSelf->Core__DOT__ID_EX__DOT__ff_aluOp))
                                                  ? (QData)((IData)(
                                                                    (vlSelf->Core__DOT__ID_EX__DOT__ff_opr1 
                                                                     + vlSelf->Core__DOT__ID_EX__DOT__ff_opr2)))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->Core__DOT__ID_EX__DOT__ff_aluOp))
                                                   ? (QData)((IData)(
                                                                     (vlSelf->Core__DOT__ID_EX__DOT__ff_opr1 
                                                                      - vlSelf->Core__DOT__ID_EX__DOT__ff_opr2)))
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->Core__DOT__ID_EX__DOT__ff_aluOp))
                                                    ? (QData)((IData)(
                                                                      (vlSelf->Core__DOT__ID_EX__DOT__ff_opr1 
                                                                       & vlSelf->Core__DOT__ID_EX__DOT__ff_opr2)))
                                                    : 
                                                   ((3U 
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
                                                                                < vlSelf->Core__DOT__ID_EX__DOT__ff_opr2)))))))))))))));
    vlSelf->Core__DOT__csr__DOT___T_82 = (((IData)(vlSelf->Core__DOT__csr__DOT__mie_seie) 
                                           << 9U) | 
                                          (((IData)(vlSelf->Core__DOT__csr__DOT__mie_stie) 
                                            << 5U) 
                                           | ((IData)(vlSelf->Core__DOT__csr__DOT__mie_ssie) 
                                              << 1U)));
    vlSelf->Core__DOT__MEM__DOT__width = ((1U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp))
                                           ? 0U : (
                                                   (2U 
                                                    == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp))
                                                    ? 1U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp))
                                                     ? 2U
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp))
                                                      ? 0U
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp))
                                                       ? 1U
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp))
                                                        ? 0U
                                                        : 
                                                       ((7U 
                                                         == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp))
                                                         ? 1U
                                                         : 
                                                        ((8U 
                                                          == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp))
                                                          ? 2U
                                                          : 0U))))))));
    vlSelf->Core__DOT__csr__DOT___T_47 = (((IData)(vlSelf->Core__DOT__csr__DOT__mie_meie) 
                                           << 0xbU) 
                                          | (((IData)(vlSelf->Core__DOT__csr__DOT__mie_seie) 
                                              << 9U) 
                                             | (((IData)(vlSelf->Core__DOT__csr__DOT__mie_mtie) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->Core__DOT__csr__DOT__mie_stie) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->Core__DOT__csr__DOT__mie_msie) 
                                                       << 3U) 
                                                      | ((IData)(vlSelf->Core__DOT__csr__DOT__mie_ssie) 
                                                         << 1U))))));
    vlSelf->Core__DOT__MEM__DOT__mem_wen = ((1U != (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                            & ((2U 
                                                != (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                               & ((3U 
                                                   != (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                                  & ((4U 
                                                      != (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                                     & ((5U 
                                                         != (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                                        & ((6U 
                                                            == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                                           | ((7U 
                                                               == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                                              | (8U 
                                                                 == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)))))))));
    vlSelf->Core__DOT__MEM__DOT__ren = ((1U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                        | ((2U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                           | ((3U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                              | ((4U 
                                                  == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                                 | (5U 
                                                    == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp))))));
    vlSelf->Core__DOT__csr__DOT__mip_ssip = ((IData)(vlSelf->Core__DOT__csr__DOT__mipReal_ssip) 
                                             | (IData)(vlSelf->io_soft));
    vlSelf->Core__DOT__csr__DOT__mip_stip = ((IData)(vlSelf->Core__DOT__csr__DOT__mipReal_stip) 
                                             | (IData)(vlSelf->io_timer));
    vlSelf->Core__DOT__csr__DOT__mip_seip = ((IData)(vlSelf->Core__DOT__csr__DOT__mipReal_seip) 
                                             | (IData)(vlSelf->io_extern));
    vlSelf->Core__DOT__ID__DOT___GEN_0 = ((IData)(vlSelf->Core__DOT__ID__DOT__stall)
                                           ? vlSelf->Core__DOT__ID__DOT__lastinst
                                           : vlSelf->Core__DOT__IF_ID__DOT__ff_inst);
    vlSelf->io_bputake = ((0x63U == (0x7fU & vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data))
                           ? VL_GTS_III(32, 0U, vlSelf->Core__DOT__fetch__DOT__bpu__DOT__inst_b_type_imm)
                           : (0x6fU == (0x7fU & vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data)));
    vlSelf->io_bpuaddr = (vlSelf->Core__DOT__fetch__DOT__pc 
                          + ((0x63U == (0x7fU & vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data))
                              ? vlSelf->Core__DOT__fetch__DOT__bpu__DOT__inst_b_type_imm
                              : ((0x6fU == (0x7fU & vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data))
                                  ? ((((vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data 
                                        >> 0x1fU) ? 0xfffU
                                        : 0U) << 0x14U) 
                                     | ((0xff000U & vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data) 
                                        | ((0x800U 
                                            & (vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data 
                                                 >> 0x14U)))))
                                  : 0U)));
    vlSelf->Core__DOT__MEM__DOT__memAddr = ((0U != (IData)(vlSelf->Core__DOT__MEM__DOT__width)) 
                                            & ((1U 
                                                == (IData)(vlSelf->Core__DOT__MEM__DOT__width))
                                                ? vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->Core__DOT__MEM__DOT__width)) 
                                                   & (0U 
                                                      != 
                                                      (3U 
                                                       & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data)))));
    vlSelf->Core__DOT__MEM__DOT__writeEn = (0x7fU & 
                                            ((0U == (IData)(vlSelf->Core__DOT__MEM__DOT__width))
                                              ? ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data))
                                              : ((1U 
                                                  == (IData)(vlSelf->Core__DOT__MEM__DOT__width))
                                                  ? 
                                                 ((IData)(3U) 
                                                  << 
                                                  (3U 
                                                   & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->Core__DOT__MEM__DOT__width))
                                                   ? 0xfU
                                                   : 0U))));
    vlSelf->Core__DOT__MEM__DOT__mem_ren = ((~ (IData)(vlSelf->Core__DOT__MEM__DOT__mem_wen)) 
                                            & (IData)(vlSelf->Core__DOT__MEM__DOT__ren));
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
    vlSelf->Core__DOT__ID__DOT___T_850 = (((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                                            ? (vlSelf->Core__DOT__ID__DOT___GEN_0 
                                               >> 0xcU)
                                            : 0U) << 0xcU);
    if (vlSelf->Core__DOT__IF_ID__DOT__ff_valid) {
        vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0 
            = (vlSelf->Core__DOT__ID__DOT___GEN_0 >> 0x1fU);
        vlSelf->Core__DOT__ID__DOT__rd = (0x1fU & (vlSelf->Core__DOT__ID__DOT___GEN_0 
                                                   >> 7U));
        vlSelf->Core__DOT__ID__DOT__immI = (vlSelf->Core__DOT__ID__DOT___GEN_0 
                                            >> 0x14U);
        vlSelf->Core__DOT__ID__DOT__rs2 = (0x1fU & 
                                           (vlSelf->Core__DOT__ID__DOT___GEN_0 
                                            >> 0x14U));
        vlSelf->Core__DOT__ID__DOT__rs1 = (0x1fU & 
                                           (vlSelf->Core__DOT__ID__DOT___GEN_0 
                                            >> 0xfU));
        vlSelf->Core__DOT__ID__DOT__inst = vlSelf->Core__DOT__ID__DOT___GEN_0;
    } else {
        vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0 = 0U;
        vlSelf->Core__DOT__ID__DOT__rd = 0U;
        vlSelf->Core__DOT__ID__DOT__immI = 0U;
        vlSelf->Core__DOT__ID__DOT__rs2 = 0U;
        vlSelf->Core__DOT__ID__DOT__rs1 = 0U;
        vlSelf->Core__DOT__ID__DOT__inst = 0x13U;
    }
    vlSelf->Core__DOT__MEM_io_except_excValue = ((5U 
                                                  == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                                  ? vlSelf->Core__DOT__EX_MEM__DOT__ff_inst
                                                  : 
                                                 ((IData)(vlSelf->Core__DOT__MEM__DOT__memAddr)
                                                   ? vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data
                                                   : vlSelf->Core__DOT__EX_MEM__DOT__ff_excValue));
    vlSelf->Core__DOT__MEM_WB__DOT___T_2 = (((~ (IData)(vlSelf->Core__DOT__MEM__DOT__mem_ren)) 
                                             & (IData)(vlSelf->Core__DOT__MEM__DOT__ren)) 
                                            | (IData)(vlSelf->Core__DOT__resoler__DOT___T_35));
    if (vlSelf->Core__DOT__MEM__DOT__mem_ren) {
        Vtop___024unit____Vdpiimwrap_vaddr_read_TOP____024unit(
                                                               ((1U 
                                                                 == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                                                | (2U 
                                                                   == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp))), 
                                                               (0xfffffffcU 
                                                                & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data), 
                                                               ((IData)(vlSelf->Core__DOT__MEM__DOT__mem_wen)
                                                                 ? 
                                                                (0xfU 
                                                                 & (IData)(vlSelf->Core__DOT__MEM__DOT__writeEn))
                                                                 : 0xfU), vlSelf->__Vfunc_vaddr_read__2__Vfuncout);
        vlSelf->Core__DOT__MEM__DOT__mem_rdata = vlSelf->__Vfunc_vaddr_read__2__Vfuncout;
    } else {
        vlSelf->Core__DOT__MEM__DOT__mem_rdata = 0U;
    }
    vlSelf->Core__DOT__csr__DOT__flagIntS = (vlSelf->Core__DOT__csr__DOT___T_92 
                                             & vlSelf->Core__DOT__csr__DOT___T_82);
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
    vlSelf->Core__DOT__ID__DOT____VdfgTmp_h7417a8e6__0 
        = (((- (IData)((IData)(vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0))) 
            << 0xcU) | ((((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                           ? (vlSelf->Core__DOT__ID__DOT___GEN_0 
                              >> 0x19U) : 0U) << 5U) 
                        | (IData)(vlSelf->Core__DOT__ID__DOT__rd)));
    vlSelf->Core__DOT__ID__DOT___GEN_2 = (((- (IData)((IData)(vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0))) 
                                           << 0xcU) 
                                          | (IData)(vlSelf->Core__DOT__ID__DOT__immI));
    vlSelf->Core__DOT__regfile__DOT___GEN_53 = ((0x15U 
                                                 == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                 ? vlSelf->Core__DOT__regfile__DOT__regfile_21
                                                 : 
                                                ((0x14U 
                                                  == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                  ? vlSelf->Core__DOT__regfile__DOT__regfile_20
                                                  : 
                                                 ((0x13U 
                                                   == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                   ? vlSelf->Core__DOT__regfile__DOT__regfile_19
                                                   : 
                                                  ((0x12U 
                                                    == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                    ? vlSelf->Core__DOT__regfile__DOT__regfile_18
                                                    : 
                                                   ((0x11U 
                                                     == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                     ? vlSelf->Core__DOT__regfile__DOT__regfile_17
                                                     : 
                                                    ((0x10U 
                                                      == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                      ? vlSelf->Core__DOT__regfile__DOT__regfile_16
                                                      : 
                                                     ((0xfU 
                                                       == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                       ? vlSelf->Core__DOT__regfile__DOT__regfile_15
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                        ? vlSelf->Core__DOT__regfile__DOT__regfile_14
                                                        : 
                                                       ((0xdU 
                                                         == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                         ? vlSelf->Core__DOT__regfile__DOT__regfile_13
                                                         : 
                                                        ((0xcU 
                                                          == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                          ? vlSelf->Core__DOT__regfile__DOT__regfile_12
                                                          : 
                                                         ((0xbU 
                                                           == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                           ? vlSelf->Core__DOT__regfile__DOT__regfile_11
                                                           : 
                                                          ((0xaU 
                                                            == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                            ? vlSelf->Core__DOT__regfile__DOT__regfile_10
                                                            : 
                                                           ((9U 
                                                             == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                             ? vlSelf->Core__DOT__regfile__DOT__regfile_9
                                                             : 
                                                            ((8U 
                                                              == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                              ? vlSelf->Core__DOT__regfile__DOT__regfile_8
                                                              : 
                                                             ((7U 
                                                               == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                               ? vlSelf->Core__DOT__regfile__DOT__regfile_7
                                                               : 
                                                              ((6U 
                                                                == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                                ? vlSelf->Core__DOT__regfile__DOT__regfile_6
                                                                : 
                                                               ((5U 
                                                                 == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                                 ? vlSelf->Core__DOT__regfile__DOT__regfile_5
                                                                 : 
                                                                ((4U 
                                                                  == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                                  ? vlSelf->Core__DOT__regfile__DOT__regfile_4
                                                                  : 
                                                                 ((3U 
                                                                   == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                                   ? vlSelf->Core__DOT__regfile__DOT__regfile_3
                                                                   : 
                                                                  ((2U 
                                                                    == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                                    ? vlSelf->Core__DOT__regfile__DOT__regfile_2
                                                                    : 
                                                                   ((1U 
                                                                     == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                                     ? vlSelf->Core__DOT__regfile__DOT__regfile_1
                                                                     : vlSelf->Core__DOT__regfile__DOT__regfile_0)))))))))))))))))))));
    vlSelf->Core__DOT__resoler__DOT___T_10 = ((IData)(vlSelf->Core__DOT__ID_EX__DOT__ff_regWaddr) 
                                              == (IData)(vlSelf->Core__DOT__ID__DOT__rs2));
    vlSelf->Core__DOT__regfile__DOT___GEN_21 = ((0x15U 
                                                 == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                 ? vlSelf->Core__DOT__regfile__DOT__regfile_21
                                                 : 
                                                ((0x14U 
                                                  == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                  ? vlSelf->Core__DOT__regfile__DOT__regfile_20
                                                  : 
                                                 ((0x13U 
                                                   == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                   ? vlSelf->Core__DOT__regfile__DOT__regfile_19
                                                   : 
                                                  ((0x12U 
                                                    == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                    ? vlSelf->Core__DOT__regfile__DOT__regfile_18
                                                    : 
                                                   ((0x11U 
                                                     == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                     ? vlSelf->Core__DOT__regfile__DOT__regfile_17
                                                     : 
                                                    ((0x10U 
                                                      == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                      ? vlSelf->Core__DOT__regfile__DOT__regfile_16
                                                      : 
                                                     ((0xfU 
                                                       == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                       ? vlSelf->Core__DOT__regfile__DOT__regfile_15
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                        ? vlSelf->Core__DOT__regfile__DOT__regfile_14
                                                        : 
                                                       ((0xdU 
                                                         == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                         ? vlSelf->Core__DOT__regfile__DOT__regfile_13
                                                         : 
                                                        ((0xcU 
                                                          == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                          ? vlSelf->Core__DOT__regfile__DOT__regfile_12
                                                          : 
                                                         ((0xbU 
                                                           == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                           ? vlSelf->Core__DOT__regfile__DOT__regfile_11
                                                           : 
                                                          ((0xaU 
                                                            == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                            ? vlSelf->Core__DOT__regfile__DOT__regfile_10
                                                            : 
                                                           ((9U 
                                                             == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                             ? vlSelf->Core__DOT__regfile__DOT__regfile_9
                                                             : 
                                                            ((8U 
                                                              == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                              ? vlSelf->Core__DOT__regfile__DOT__regfile_8
                                                              : 
                                                             ((7U 
                                                               == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                               ? vlSelf->Core__DOT__regfile__DOT__regfile_7
                                                               : 
                                                              ((6U 
                                                                == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                                ? vlSelf->Core__DOT__regfile__DOT__regfile_6
                                                                : 
                                                               ((5U 
                                                                 == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                                 ? vlSelf->Core__DOT__regfile__DOT__regfile_5
                                                                 : 
                                                                ((4U 
                                                                  == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                                  ? vlSelf->Core__DOT__regfile__DOT__regfile_4
                                                                  : 
                                                                 ((3U 
                                                                   == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                                   ? vlSelf->Core__DOT__regfile__DOT__regfile_3
                                                                   : 
                                                                  ((2U 
                                                                    == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                                    ? vlSelf->Core__DOT__regfile__DOT__regfile_2
                                                                    : 
                                                                   ((1U 
                                                                     == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                                     ? vlSelf->Core__DOT__regfile__DOT__regfile_1
                                                                     : vlSelf->Core__DOT__regfile__DOT__regfile_0)))))))))))))))))))));
    vlSelf->Core__DOT__resoler__DOT___T_2 = ((IData)(vlSelf->Core__DOT__ID_EX__DOT__ff_regWaddr) 
                                             == (IData)(vlSelf->Core__DOT__ID__DOT__rs1));
    vlSelf->Core__DOT__ID__DOT___T_276 = ((0x1023U 
                                           != (0x707fU 
                                               & vlSelf->Core__DOT__ID__DOT__inst)) 
                                          & ((0x2023U 
                                              != (0x707fU 
                                                  & vlSelf->Core__DOT__ID__DOT__inst)) 
                                             & ((0xfU 
                                                 != 
                                                 (0xf00fffffU 
                                                  & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                & ((0x100fU 
                                                    != vlSelf->Core__DOT__ID__DOT__inst) 
                                                   & ((0x1073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                      | ((0x2073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                         | ((0x3073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                            | ((0x5073U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                               | ((0x6073U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                  | ((0x7073U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                     | ((0x2000033U 
                                                                         == 
                                                                         (0xfe00707fU 
                                                                          & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                        | ((0x2001033U 
                                                                            == 
                                                                            (0xfe00707fU 
                                                                             & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                           | ((0x2002033U 
                                                                               == 
                                                                               (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                              | ((0x2003033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                                | ((0x2004033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                                | ((0x2005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                                | ((0x2006033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                                | (0x2007033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)))))))))))))))))));
    if ((0x6073U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_442 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_558 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_732 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_326 = 0U;
    } else if ((0x7073U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_442 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_558 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_732 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_326 = 0U;
    } else if ((0x2000033U == (0xfe00707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_442 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_558 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_732 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_326 = 1U;
    } else if ((0x2001033U == (0xfe00707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_442 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_558 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_732 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_326 = 1U;
    } else if ((0x2002033U == (0xfe00707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_442 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_558 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_732 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_326 = 1U;
    } else if ((0x2003033U == (0xfe00707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_442 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_558 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_732 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_326 = 1U;
    } else if ((0x2004033U == (0xfe00707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_442 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_558 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_732 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_326 = 1U;
    } else if ((0x2005033U == (0xfe00707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_442 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_558 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_732 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_326 = 1U;
    } else if ((0x2006033U == (0xfe00707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_442 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_558 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_732 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_326 = 1U;
    } else if ((0x2007033U == (0xfe00707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_442 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_558 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_732 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_326 = 1U;
    } else if ((0x73U == vlSelf->Core__DOT__ID__DOT__inst)) {
        vlSelf->Core__DOT__ID__DOT___T_442 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_558 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_732 = 1U;
        vlSelf->Core__DOT__ID__DOT___T_326 = 0U;
    } else if ((0x100073U == vlSelf->Core__DOT__ID__DOT__inst)) {
        vlSelf->Core__DOT__ID__DOT___T_442 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_558 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_732 = 2U;
        vlSelf->Core__DOT__ID__DOT___T_326 = 0U;
    } else if ((0x10200073U == vlSelf->Core__DOT__ID__DOT__inst)) {
        vlSelf->Core__DOT__ID__DOT___T_442 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_558 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_732 = 3U;
        vlSelf->Core__DOT__ID__DOT___T_326 = 0U;
    } else if ((0x30200073U == vlSelf->Core__DOT__ID__DOT__inst)) {
        vlSelf->Core__DOT__ID__DOT___T_442 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_558 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_732 = 4U;
        vlSelf->Core__DOT__ID__DOT___T_326 = 0U;
    } else if ((0x10500073U == vlSelf->Core__DOT__ID__DOT__inst)) {
        vlSelf->Core__DOT__ID__DOT___T_442 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_558 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_732 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_326 = 0U;
    } else if ((0x12000073U == (0xfe007fffU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_442 = 3U;
        vlSelf->Core__DOT__ID__DOT___T_558 = 0xbU;
        vlSelf->Core__DOT__ID__DOT___T_732 = 0xaU;
        vlSelf->Core__DOT__ID__DOT___T_326 = 1U;
    } else {
        vlSelf->Core__DOT__ID__DOT___T_442 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_558 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_732 = 5U;
        vlSelf->Core__DOT__ID__DOT___T_326 = 0U;
    }
    vlSelf->Core__DOT__ID__DOT___T_389 = ((0x100fU 
                                           == vlSelf->Core__DOT__ID__DOT__inst)
                                           ? 0U : (
                                                   (0x1073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Core__DOT__ID__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x2073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__ID__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x3073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__ID__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x5073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__ID__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x6073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__ID__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x7073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Core__DOT__ID__DOT__inst))
                                                         ? 0U
                                                         : 
                                                        ((0x2000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Core__DOT__ID__DOT__inst))
                                                          ? 2U
                                                          : 
                                                         ((0x2001033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Core__DOT__ID__DOT__inst))
                                                           ? 2U
                                                           : 
                                                          ((0x2002033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Core__DOT__ID__DOT__inst))
                                                            ? 2U
                                                            : 
                                                           ((0x2003033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Core__DOT__ID__DOT__inst))
                                                             ? 2U
                                                             : 
                                                            ((0x2004033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->Core__DOT__ID__DOT__inst))
                                                              ? 2U
                                                              : 
                                                             ((0x2005033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->Core__DOT__ID__DOT__inst))
                                                               ? 2U
                                                               : 
                                                              ((0x2006033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->Core__DOT__ID__DOT__inst))
                                                                ? 2U
                                                                : 
                                                               ((0x2007033U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->Core__DOT__ID__DOT__inst))
                                                                 ? 2U
                                                                 : 0U)))))))))))))));
    vlSelf->Core__DOT__ID__DOT___T_629 = ((0x1003U 
                                           == (0x707fU 
                                               & vlSelf->Core__DOT__ID__DOT__inst))
                                           ? 0U : (
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Core__DOT__ID__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x4003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__ID__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x5003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__ID__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x23U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__ID__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x1023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__ID__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x2023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Core__DOT__ID__DOT__inst))
                                                         ? 0U
                                                         : 
                                                        ((0xfU 
                                                          == 
                                                          (0xf00fffffU 
                                                           & vlSelf->Core__DOT__ID__DOT__inst))
                                                          ? 0U
                                                          : 
                                                         ((0x100fU 
                                                           == vlSelf->Core__DOT__ID__DOT__inst)
                                                           ? 0U
                                                           : 
                                                          ((0x1073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__ID__DOT__inst))
                                                            ? 3U
                                                            : 
                                                           ((0x2073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__ID__DOT__inst))
                                                             ? 4U
                                                             : 
                                                            ((0x3073U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Core__DOT__ID__DOT__inst))
                                                              ? 5U
                                                              : 
                                                             ((0x5073U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->Core__DOT__ID__DOT__inst))
                                                               ? 3U
                                                               : 
                                                              ((0x6073U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->Core__DOT__ID__DOT__inst))
                                                                ? 4U
                                                                : 
                                                               ((0x7073U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->Core__DOT__ID__DOT__inst))
                                                                 ? 5U
                                                                 : 0U)))))))))))))));
    vlSelf->Core__DOT__ID__DOT___T_529 = ((0x3013U 
                                           == (0x707fU 
                                               & vlSelf->Core__DOT__ID__DOT__inst))
                                           ? 0U : (
                                                   (0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Core__DOT__ID__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x1013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Core__DOT__ID__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x5033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Core__DOT__ID__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x5013U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Core__DOT__ID__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x40005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Core__DOT__ID__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x40005013U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Core__DOT__ID__DOT__inst))
                                                         ? 0U
                                                         : 
                                                        ((0x63U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__ID__DOT__inst))
                                                          ? 2U
                                                          : 
                                                         ((0x1063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Core__DOT__ID__DOT__inst))
                                                           ? 3U
                                                           : 
                                                          ((0x4063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__ID__DOT__inst))
                                                            ? 4U
                                                            : 
                                                           ((0x5063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__ID__DOT__inst))
                                                             ? 5U
                                                             : 
                                                            ((0x6063U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Core__DOT__ID__DOT__inst))
                                                              ? 6U
                                                              : 
                                                             ((0x7063U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->Core__DOT__ID__DOT__inst))
                                                               ? 7U
                                                               : 
                                                              ((0x6fU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->Core__DOT__ID__DOT__inst))
                                                                ? 1U
                                                                : 
                                                               ((0x67U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->Core__DOT__ID__DOT__inst))
                                                                 ? 1U
                                                                 : 0U)))))))))))))));
    vlSelf->Core__DOT__ID__DOT___T_153 = ((0x5073U 
                                           != (0x707fU 
                                               & vlSelf->Core__DOT__ID__DOT__inst)) 
                                          & ((0x6073U 
                                              != (0x707fU 
                                                  & vlSelf->Core__DOT__ID__DOT__inst)) 
                                             & ((0x7073U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                & ((0x2000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                   | ((0x2001033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                      | ((0x2002033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                         | ((0x2003033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                            | ((0x2004033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                               | ((0x2005033U 
                                                                   == 
                                                                   (0xfe00707fU 
                                                                    & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                  | ((0x2006033U 
                                                                      == 
                                                                      (0xfe00707fU 
                                                                       & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                     | ((0x2007033U 
                                                                         == 
                                                                         (0xfe00707fU 
                                                                          & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                        | ((0x73U 
                                                                            != vlSelf->Core__DOT__ID__DOT__inst) 
                                                                           & ((0x100073U 
                                                                               != vlSelf->Core__DOT__ID__DOT__inst) 
                                                                              & ((0x10200073U 
                                                                                != vlSelf->Core__DOT__ID__DOT__inst) 
                                                                                & ((0x30200073U 
                                                                                != vlSelf->Core__DOT__ID__DOT__inst) 
                                                                                & ((0x10500073U 
                                                                                != vlSelf->Core__DOT__ID__DOT__inst) 
                                                                                & (0x12000073U 
                                                                                == 
                                                                                (0xfe007fffU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst))))))))))))))))));
    vlSelf->Core__DOT__MEM_io_mem_o_reg_data = ((IData)(vlSelf->Core__DOT__MEM__DOT__ren)
                                                 ? vlSelf->Core__DOT__MEM__DOT__mem_rdata
                                                 : vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data);
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
    vlSelf->Core__DOT__ID__DOT___T_293 = ((0x5013U 
                                           == (0xfe00707fU 
                                               & vlSelf->Core__DOT__ID__DOT__inst)) 
                                          | ((0x40005033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->Core__DOT__ID__DOT__inst)) 
                                             | ((0x40005013U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                | ((0x63U 
                                                    != 
                                                    (0x707fU 
                                                     & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                   & ((0x1063U 
                                                       != 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                      & ((0x4063U 
                                                          != 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                         & ((0x5063U 
                                                             != 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                            & ((0x6063U 
                                                                != 
                                                                (0x707fU 
                                                                 & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                               & ((0x7063U 
                                                                   != 
                                                                   (0x707fU 
                                                                    & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                  & ((0x6fU 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                     | ((0x67U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                        | ((3U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                           | ((0x1003U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                              | ((0x2003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                                | ((0x4003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                                | ((0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                                | ((0x23U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                                & (IData)(vlSelf->Core__DOT__ID__DOT___T_276))))))))))))))))));
    if ((0x67U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_457 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_573 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_747 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_341 = 7U;
    } else if ((3U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_457 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_573 = 1U;
        vlSelf->Core__DOT__ID__DOT___T_747 = 8U;
        vlSelf->Core__DOT__ID__DOT___T_341 = 1U;
    } else if ((0x1003U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_457 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_573 = 2U;
        vlSelf->Core__DOT__ID__DOT___T_747 = 8U;
        vlSelf->Core__DOT__ID__DOT___T_341 = 1U;
    } else if ((0x2003U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_457 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_573 = 3U;
        vlSelf->Core__DOT__ID__DOT___T_747 = 8U;
        vlSelf->Core__DOT__ID__DOT___T_341 = 1U;
    } else if ((0x4003U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_457 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_573 = 4U;
        vlSelf->Core__DOT__ID__DOT___T_747 = 8U;
        vlSelf->Core__DOT__ID__DOT___T_341 = 1U;
    } else if ((0x5003U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_457 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_573 = 5U;
        vlSelf->Core__DOT__ID__DOT___T_747 = 8U;
        vlSelf->Core__DOT__ID__DOT___T_341 = 1U;
    } else if ((0x23U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_457 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_573 = 6U;
        vlSelf->Core__DOT__ID__DOT___T_747 = 8U;
        vlSelf->Core__DOT__ID__DOT___T_341 = 1U;
    } else if ((0x1023U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_457 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_573 = 7U;
        vlSelf->Core__DOT__ID__DOT___T_747 = 8U;
        vlSelf->Core__DOT__ID__DOT___T_341 = 1U;
    } else if ((0x2023U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_457 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_573 = 8U;
        vlSelf->Core__DOT__ID__DOT___T_747 = 8U;
        vlSelf->Core__DOT__ID__DOT___T_341 = 1U;
    } else if ((0xfU == (0xf00fffffU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_457 = 3U;
        vlSelf->Core__DOT__ID__DOT___T_573 = 9U;
        vlSelf->Core__DOT__ID__DOT___T_747 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_341 = 0U;
    } else if ((0x100fU == vlSelf->Core__DOT__ID__DOT__inst)) {
        vlSelf->Core__DOT__ID__DOT___T_457 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_573 = 0xaU;
        vlSelf->Core__DOT__ID__DOT___T_747 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_341 = 0U;
    } else if ((0x1073U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_457 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_573 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_747 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_341 = 0U;
    } else if ((0x2073U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_457 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_573 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_747 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_341 = 0U;
    } else if ((0x3073U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_457 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_573 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_747 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_341 = 0U;
    } else if ((0x5073U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_457 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_573 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_747 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_341 = 0U;
    } else {
        vlSelf->Core__DOT__ID__DOT___T_457 = vlSelf->Core__DOT__ID__DOT___T_442;
        vlSelf->Core__DOT__ID__DOT___T_573 = vlSelf->Core__DOT__ID__DOT___T_558;
        vlSelf->Core__DOT__ID__DOT___T_747 = vlSelf->Core__DOT__ID__DOT___T_732;
        vlSelf->Core__DOT__ID__DOT___T_341 = vlSelf->Core__DOT__ID__DOT___T_326;
    }
    vlSelf->Core__DOT__ID__DOT___T_404 = ((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->Core__DOT__ID__DOT__inst))
                                           ? 0U : (
                                                   (0x5063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Core__DOT__ID__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x6063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__ID__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Core__DOT__ID__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->Core__DOT__ID__DOT__inst))
                                                       ? 8U
                                                       : 
                                                      ((0x67U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Core__DOT__ID__DOT__inst))
                                                        ? 8U
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Core__DOT__ID__DOT__inst))
                                                         ? 3U
                                                         : 
                                                        ((0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__ID__DOT__inst))
                                                          ? 3U
                                                          : 
                                                         ((0x2003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Core__DOT__ID__DOT__inst))
                                                           ? 3U
                                                           : 
                                                          ((0x4003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__ID__DOT__inst))
                                                            ? 3U
                                                            : 
                                                           ((0x5003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__ID__DOT__inst))
                                                             ? 3U
                                                             : 
                                                            ((0x23U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Core__DOT__ID__DOT__inst))
                                                              ? 4U
                                                              : 
                                                             ((0x1023U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->Core__DOT__ID__DOT__inst))
                                                               ? 4U
                                                               : 
                                                              ((0x2023U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->Core__DOT__ID__DOT__inst))
                                                                ? 4U
                                                                : 
                                                               ((0xfU 
                                                                 == 
                                                                 (0xf00fffffU 
                                                                  & vlSelf->Core__DOT__ID__DOT__inst))
                                                                 ? 3U
                                                                 : (IData)(vlSelf->Core__DOT__ID__DOT___T_389))))))))))))))));
    vlSelf->Core__DOT__ID__DOT___T_644 = ((0x1033U 
                                           == (0xfe00707fU 
                                               & vlSelf->Core__DOT__ID__DOT__inst))
                                           ? 0U : (
                                                   (0x1013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Core__DOT__ID__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x5033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Core__DOT__ID__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x5013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Core__DOT__ID__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x40005033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Core__DOT__ID__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x40005013U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Core__DOT__ID__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Core__DOT__ID__DOT__inst))
                                                         ? 0U
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__ID__DOT__inst))
                                                          ? 0U
                                                          : 
                                                         ((0x4063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Core__DOT__ID__DOT__inst))
                                                           ? 0U
                                                           : 
                                                          ((0x5063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__ID__DOT__inst))
                                                            ? 0U
                                                            : 
                                                           ((0x6063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__ID__DOT__inst))
                                                             ? 0U
                                                             : 
                                                            ((0x7063U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Core__DOT__ID__DOT__inst))
                                                              ? 0U
                                                              : 
                                                             ((0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->Core__DOT__ID__DOT__inst))
                                                               ? 0U
                                                               : 
                                                              ((0x67U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->Core__DOT__ID__DOT__inst))
                                                                ? 0U
                                                                : 
                                                               ((3U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->Core__DOT__ID__DOT__inst))
                                                                 ? 0U
                                                                 : (IData)(vlSelf->Core__DOT__ID__DOT___T_629))))))))))))))));
    vlSelf->Core__DOT__ID__DOT___T_229 = ((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->Core__DOT__ID__DOT__inst)) 
                                          | ((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->Core__DOT__ID__DOT__inst)) 
                                             | ((0x7063U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                | ((0x6fU 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                   & ((0x67U 
                                                       != 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                      & ((3U 
                                                          != 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                         & ((0x1003U 
                                                             != 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                            & ((0x2003U 
                                                                != 
                                                                (0x707fU 
                                                                 & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                               & ((0x4003U 
                                                                   != 
                                                                   (0x707fU 
                                                                    & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                  & ((0x5003U 
                                                                      != 
                                                                      (0x707fU 
                                                                       & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                     & ((0x23U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                        | ((0x1023U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                           | ((0x2023U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                              | ((0xfU 
                                                                                != 
                                                                                (0xf00fffffU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                                & ((0x100fU 
                                                                                != vlSelf->Core__DOT__ID__DOT__inst) 
                                                                                & ((0x1073U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                                & ((0x2073U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                                & ((0x3073U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                                & (IData)(vlSelf->Core__DOT__ID__DOT___T_153)))))))))))))))))));
    vlSelf->Core__DOT__ID__DOT___T_171 = ((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->Core__DOT__ID__DOT__inst)) 
                                          | ((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->Core__DOT__ID__DOT__inst)) 
                                             | ((0x7063U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                | ((0x6fU 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                   & ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                      | ((3U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                         | ((0x1003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                            | ((0x2003U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                               | ((0x4003U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                  | ((0x5003U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                     | ((0x23U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                        | ((0x1023U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                           | ((0x2023U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                              | ((0xfU 
                                                                                != 
                                                                                (0xf00fffffU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                                & ((0x100fU 
                                                                                != vlSelf->Core__DOT__ID__DOT__inst) 
                                                                                & ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                                | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                                | ((0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                                | (IData)(vlSelf->Core__DOT__ID__DOT___T_153)))))))))))))))))));
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
    if ((0x3033U == (0xfe00707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_472 = 6U;
        vlSelf->Core__DOT__ID__DOT___T_588 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_762 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_356 = 1U;
    } else if ((0x3013U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_472 = 6U;
        vlSelf->Core__DOT__ID__DOT___T_588 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_762 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_356 = 1U;
    } else if ((0x1033U == (0xfe00707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_472 = 7U;
        vlSelf->Core__DOT__ID__DOT___T_588 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_762 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_356 = 1U;
    } else if ((0x1013U == (0xfe00707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_472 = 7U;
        vlSelf->Core__DOT__ID__DOT___T_588 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_762 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_356 = 1U;
    } else if ((0x5033U == (0xfe00707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_472 = 8U;
        vlSelf->Core__DOT__ID__DOT___T_588 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_762 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_356 = 1U;
    } else if ((0x5013U == (0xfe00707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_472 = 8U;
        vlSelf->Core__DOT__ID__DOT___T_588 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_762 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_356 = 1U;
    } else if ((0x40005033U == (0xfe00707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_472 = 9U;
        vlSelf->Core__DOT__ID__DOT___T_588 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_762 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_356 = 1U;
    } else if ((0x40005013U == (0xfe00707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_472 = 9U;
        vlSelf->Core__DOT__ID__DOT___T_588 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_762 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_356 = 1U;
    } else if ((0x63U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_472 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_588 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_762 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_356 = 0U;
    } else if ((0x1063U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_472 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_588 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_762 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_356 = 0U;
    } else if ((0x4063U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_472 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_588 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_762 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_356 = 0U;
    } else if ((0x5063U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_472 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_588 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_762 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_356 = 0U;
    } else if ((0x6063U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_472 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_588 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_762 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_356 = 0U;
    } else if ((0x7063U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_472 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_588 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_762 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_356 = 0U;
    } else if ((0x6fU == (0x7fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT___T_472 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_588 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_762 = 0U;
        vlSelf->Core__DOT__ID__DOT___T_356 = 7U;
    } else {
        vlSelf->Core__DOT__ID__DOT___T_472 = vlSelf->Core__DOT__ID__DOT___T_457;
        vlSelf->Core__DOT__ID__DOT___T_588 = vlSelf->Core__DOT__ID__DOT___T_573;
        vlSelf->Core__DOT__ID__DOT___T_762 = vlSelf->Core__DOT__ID__DOT___T_747;
        vlSelf->Core__DOT__ID__DOT___T_356 = vlSelf->Core__DOT__ID__DOT___T_341;
    }
    vlSelf->Core__DOT__ID__DOT___T_419 = ((0x6013U 
                                           == (0x707fU 
                                               & vlSelf->Core__DOT__ID__DOT__inst))
                                           ? 3U : (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Core__DOT__ID__DOT__inst))
                                                    ? 2U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Core__DOT__ID__DOT__inst))
                                                     ? 3U
                                                     : 
                                                    ((0x2033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Core__DOT__ID__DOT__inst))
                                                      ? 2U
                                                      : 
                                                     ((0x2013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Core__DOT__ID__DOT__inst))
                                                       ? 3U
                                                       : 
                                                      ((0x3033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Core__DOT__ID__DOT__inst))
                                                        ? 2U
                                                        : 
                                                       ((0x3013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Core__DOT__ID__DOT__inst))
                                                         ? 3U
                                                         : 
                                                        ((0x1033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Core__DOT__ID__DOT__inst))
                                                          ? 2U
                                                          : 
                                                         ((0x1013U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Core__DOT__ID__DOT__inst))
                                                           ? 6U
                                                           : 
                                                          ((0x5033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Core__DOT__ID__DOT__inst))
                                                            ? 2U
                                                            : 
                                                           ((0x5013U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Core__DOT__ID__DOT__inst))
                                                             ? 6U
                                                             : 
                                                            ((0x40005033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->Core__DOT__ID__DOT__inst))
                                                              ? 2U
                                                              : 
                                                             ((0x40005013U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->Core__DOT__ID__DOT__inst))
                                                               ? 6U
                                                               : 
                                                              ((0x63U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->Core__DOT__ID__DOT__inst))
                                                                ? 0U
                                                                : 
                                                               ((0x1063U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->Core__DOT__ID__DOT__inst))
                                                                 ? 0U
                                                                 : (IData)(vlSelf->Core__DOT__ID__DOT___T_404))))))))))))))));
    if ((0x33U == (0xfe00707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT__branchOp = 0U;
        vlSelf->Core__DOT__ID__DOT__csrOp = 0U;
        vlSelf->Core__DOT__ID__DOT__aluSrc1 = 1U;
        vlSelf->Core__DOT__ID__DOT__aluSrc2 = 2U;
    } else if ((0x13U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT__branchOp = 0U;
        vlSelf->Core__DOT__ID__DOT__csrOp = 0U;
        vlSelf->Core__DOT__ID__DOT__aluSrc1 = 1U;
        vlSelf->Core__DOT__ID__DOT__aluSrc2 = 3U;
    } else if ((0x40000033U == (0xfe00707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT__branchOp = 0U;
        vlSelf->Core__DOT__ID__DOT__csrOp = 0U;
        vlSelf->Core__DOT__ID__DOT__aluSrc1 = 1U;
        vlSelf->Core__DOT__ID__DOT__aluSrc2 = 2U;
    } else if ((0x37U == (0x7fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT__branchOp = 0U;
        vlSelf->Core__DOT__ID__DOT__csrOp = 0U;
        vlSelf->Core__DOT__ID__DOT__aluSrc1 = 0U;
        vlSelf->Core__DOT__ID__DOT__aluSrc2 = 5U;
    } else if ((0x17U == (0x7fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT__branchOp = 0U;
        vlSelf->Core__DOT__ID__DOT__csrOp = 0U;
        vlSelf->Core__DOT__ID__DOT__aluSrc1 = 7U;
        vlSelf->Core__DOT__ID__DOT__aluSrc2 = 5U;
    } else if ((0x4033U == (0xfe00707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT__branchOp = 0U;
        vlSelf->Core__DOT__ID__DOT__csrOp = 0U;
        vlSelf->Core__DOT__ID__DOT__aluSrc1 = 1U;
        vlSelf->Core__DOT__ID__DOT__aluSrc2 = 2U;
    } else if ((0x4013U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT__branchOp = 0U;
        vlSelf->Core__DOT__ID__DOT__csrOp = 0U;
        vlSelf->Core__DOT__ID__DOT__aluSrc1 = 1U;
        vlSelf->Core__DOT__ID__DOT__aluSrc2 = 3U;
    } else if ((0x6033U == (0xfe00707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
        vlSelf->Core__DOT__ID__DOT__branchOp = 0U;
        vlSelf->Core__DOT__ID__DOT__csrOp = 0U;
        vlSelf->Core__DOT__ID__DOT__aluSrc1 = 1U;
        vlSelf->Core__DOT__ID__DOT__aluSrc2 = 2U;
    } else {
        if ((0x6013U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
            vlSelf->Core__DOT__ID__DOT__branchOp = 0U;
            vlSelf->Core__DOT__ID__DOT__csrOp = 0U;
            vlSelf->Core__DOT__ID__DOT__aluSrc1 = 1U;
        } else if ((0x7033U == (0xfe00707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
            vlSelf->Core__DOT__ID__DOT__branchOp = 0U;
            vlSelf->Core__DOT__ID__DOT__csrOp = 0U;
            vlSelf->Core__DOT__ID__DOT__aluSrc1 = 1U;
        } else if ((0x7013U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
            vlSelf->Core__DOT__ID__DOT__branchOp = 0U;
            vlSelf->Core__DOT__ID__DOT__csrOp = 0U;
            vlSelf->Core__DOT__ID__DOT__aluSrc1 = 1U;
        } else if ((0x2033U == (0xfe00707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
            vlSelf->Core__DOT__ID__DOT__branchOp = 0U;
            vlSelf->Core__DOT__ID__DOT__csrOp = 0U;
            vlSelf->Core__DOT__ID__DOT__aluSrc1 = 1U;
        } else if ((0x2013U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
            vlSelf->Core__DOT__ID__DOT__branchOp = 0U;
            vlSelf->Core__DOT__ID__DOT__csrOp = 0U;
            vlSelf->Core__DOT__ID__DOT__aluSrc1 = 1U;
        } else {
            if ((0x3033U == (0xfe00707fU & vlSelf->Core__DOT__ID__DOT__inst))) {
                vlSelf->Core__DOT__ID__DOT__branchOp = 0U;
                vlSelf->Core__DOT__ID__DOT__csrOp = 0U;
            } else {
                vlSelf->Core__DOT__ID__DOT__branchOp 
                    = vlSelf->Core__DOT__ID__DOT___T_529;
                vlSelf->Core__DOT__ID__DOT__csrOp = 
                    ((0x3013U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst))
                      ? 0U : (IData)(vlSelf->Core__DOT__ID__DOT___T_644));
            }
            vlSelf->Core__DOT__ID__DOT__aluSrc1 = vlSelf->Core__DOT__ID__DOT___T_356;
        }
        vlSelf->Core__DOT__ID__DOT__aluSrc2 = vlSelf->Core__DOT__ID__DOT___T_419;
    }
    vlSelf->Core__DOT__ID__DOT___T_246 = ((0x6033U 
                                           == (0xfe00707fU 
                                               & vlSelf->Core__DOT__ID__DOT__inst)) 
                                          | ((0x6013U 
                                              != (0x707fU 
                                                  & vlSelf->Core__DOT__ID__DOT__inst)) 
                                             & ((0x7033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                | ((0x7013U 
                                                    != 
                                                    (0x707fU 
                                                     & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                   & ((0x2033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                      | ((0x2013U 
                                                          != 
                                                          (0x707fU 
                                                           & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                         & ((0x3033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                            | ((0x3013U 
                                                                != 
                                                                (0x707fU 
                                                                 & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                               & ((0x1033U 
                                                                   == 
                                                                   (0xfe00707fU 
                                                                    & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                  | ((0x1013U 
                                                                      != 
                                                                      (0xfe00707fU 
                                                                       & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                     & ((0x5033U 
                                                                         == 
                                                                         (0xfe00707fU 
                                                                          & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                        | ((0x5013U 
                                                                            != 
                                                                            (0xfe00707fU 
                                                                             & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                           & ((0x40005033U 
                                                                               == 
                                                                               (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                              | ((0x40005013U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                                & ((0x63U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                                | ((0x1063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                                | ((0x4063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                                | (IData)(vlSelf->Core__DOT__ID__DOT___T_229))))))))))))))))));
    vlSelf->Core__DOT__ID__DOT___T_188 = ((0x6033U 
                                           == (0xfe00707fU 
                                               & vlSelf->Core__DOT__ID__DOT__inst)) 
                                          | ((0x6013U 
                                              == (0x707fU 
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
                                                                        | ((0x5013U 
                                                                            == 
                                                                            (0xfe00707fU 
                                                                             & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                           | ((0x40005033U 
                                                                               == 
                                                                               (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                              | ((0x40005013U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                                | ((0x63U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                                | ((0x1063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                                | ((0x4063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                                                | (IData)(vlSelf->Core__DOT__ID__DOT___T_171))))))))))))))))));
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
    vlSelf->Core__DOT__ID__DOT__csrActOp = ((3U == (IData)(vlSelf->Core__DOT__ID__DOT__csrOp))
                                             ? ((0U 
                                                 == (IData)(vlSelf->Core__DOT__ID__DOT__rd))
                                                 ? 2U
                                                 : 3U)
                                             : ((4U 
                                                 == (IData)(vlSelf->Core__DOT__ID__DOT__csrOp))
                                                 ? 
                                                ((0U 
                                                  == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                  ? 1U
                                                  : 4U)
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSelf->Core__DOT__ID__DOT__csrOp))
                                                  ? 
                                                 ((0U 
                                                   == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                   ? 1U
                                                   : 5U)
                                                  : 0U)));
    vlSelf->Core__DOT__ID_io_read2_en = ((0x33U == 
                                          (0xfe00707fU 
                                           & vlSelf->Core__DOT__ID__DOT__inst)) 
                                         | ((0x13U 
                                             != (0x707fU 
                                                 & vlSelf->Core__DOT__ID__DOT__inst)) 
                                            & ((0x40000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->Core__DOT__ID__DOT__inst)) 
                                               | ((0x37U 
                                                   != 
                                                   (0x7fU 
                                                    & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                  & ((0x17U 
                                                      != 
                                                      (0x7fU 
                                                       & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                     & ((0x4033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                        | ((0x4013U 
                                                            != 
                                                            (0x707fU 
                                                             & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                           & (IData)(vlSelf->Core__DOT__ID__DOT___T_246))))))));
    vlSelf->Core__DOT__ID__DOT__regEn1 = ((0x33U == 
                                           (0xfe00707fU 
                                            & vlSelf->Core__DOT__ID__DOT__inst)) 
                                          | ((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->Core__DOT__ID__DOT__inst)) 
                                             | ((0x40000033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                | ((0x37U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                   & ((0x17U 
                                                       != 
                                                       (0x7fU 
                                                        & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                      & ((0x4033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                         | ((0x4013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Core__DOT__ID__DOT__inst)) 
                                                            | (IData)(vlSelf->Core__DOT__ID__DOT___T_188))))))));
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
    vlSelf->Core__DOT__MEM_WB__DOT___T_3 = ((IData)(vlSelf->Core__DOT__ID_EX_io_flush) 
                                            | (IData)(vlSelf->Core__DOT__MEM_WB__DOT___T_2));
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
    vlSelf->Core__DOT__ID__DOT___T_841 = ((0U != (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                           ? (IData)(vlSelf->Core__DOT__ID__DOT__immI)
                                           : 0U);
    vlSelf->Core__DOT__ID_io_read2_data = (((IData)(vlSelf->Core__DOT__ID_io_read2_en) 
                                            & (0U != (IData)(vlSelf->Core__DOT__ID__DOT__rs2)))
                                            ? (((IData)(vlSelf->Core__DOT__ID_EX__DOT__ff_regWen) 
                                                & (IData)(vlSelf->Core__DOT__resoler__DOT___T_10))
                                                ? (IData)(vlSelf->Core__DOT__EX__DOT__result)
                                                : (
                                                   ((IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_en) 
                                                    & ((IData)(vlSelf->Core__DOT__ID__DOT__rs2) 
                                                       == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_addr)))
                                                    ? vlSelf->Core__DOT__MEM_io_mem_o_reg_data
                                                    : 
                                                   (((IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_reg_en) 
                                                     & ((IData)(vlSelf->Core__DOT__ID__DOT__rs2) 
                                                        == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_reg_addr)))
                                                     ? vlSelf->Core__DOT__MEM_WB__DOT__ff_reg_data
                                                     : 
                                                    ((IData)(vlSelf->Core__DOT__ID_io_read2_en)
                                                      ? 
                                                     ((0x1fU 
                                                       == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                       ? vlSelf->Core__DOT__regfile__DOT__regfile_31
                                                       : 
                                                      ((0x1eU 
                                                        == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                        ? vlSelf->Core__DOT__regfile__DOT__regfile_30
                                                        : 
                                                       ((0x1dU 
                                                         == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                         ? vlSelf->Core__DOT__regfile__DOT__regfile_29
                                                         : 
                                                        ((0x1cU 
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
                                                      : 0U))))
                                            : 0U);
    vlSelf->Core__DOT__resoler_io_loadflag = (((IData)(vlSelf->Core__DOT__ID__DOT__regEn1) 
                                               & ((IData)(vlSelf->Core__DOT__EX_io_ex_o_load) 
                                                  & (IData)(vlSelf->Core__DOT__resoler__DOT___T_2))) 
                                              | ((IData)(vlSelf->Core__DOT__ID_io_read2_en) 
                                                 & ((IData)(vlSelf->Core__DOT__EX_io_ex_o_load) 
                                                    & (IData)(vlSelf->Core__DOT__resoler__DOT___T_10))));
    vlSelf->Core__DOT__ID_io_read1_data = (((IData)(vlSelf->Core__DOT__ID__DOT__regEn1) 
                                            & (0U != (IData)(vlSelf->Core__DOT__ID__DOT__rs1)))
                                            ? (((IData)(vlSelf->Core__DOT__ID_EX__DOT__ff_regWen) 
                                                & (IData)(vlSelf->Core__DOT__resoler__DOT___T_2))
                                                ? (IData)(vlSelf->Core__DOT__EX__DOT__result)
                                                : (
                                                   ((IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_en) 
                                                    & ((IData)(vlSelf->Core__DOT__ID__DOT__rs1) 
                                                       == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_addr)))
                                                    ? vlSelf->Core__DOT__MEM_io_mem_o_reg_data
                                                    : 
                                                   (((IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_reg_en) 
                                                     & ((IData)(vlSelf->Core__DOT__ID__DOT__rs1) 
                                                        == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_reg_addr)))
                                                     ? vlSelf->Core__DOT__MEM_WB__DOT__ff_reg_data
                                                     : 
                                                    ((IData)(vlSelf->Core__DOT__ID__DOT__regEn1)
                                                      ? 
                                                     ((0x1fU 
                                                       == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                       ? vlSelf->Core__DOT__regfile__DOT__regfile_31
                                                       : 
                                                      ((0x1eU 
                                                        == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                        ? vlSelf->Core__DOT__regfile__DOT__regfile_30
                                                        : 
                                                       ((0x1dU 
                                                         == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                         ? vlSelf->Core__DOT__regfile__DOT__regfile_29
                                                         : 
                                                        ((0x1cU 
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
                                                      : 0U))))
                                            : 0U);
    vlSelf->Core__DOT__csr__DOT___T_605 = ((IData)(vlSelf->Core__DOT__csr__DOT__handIntS) 
                                           | (IData)(vlSelf->Core__DOT__csr__DOT__handExcS));
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
    vlSelf->Core__DOT__csr__DOT___T_267 = ((0x300U 
                                            == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                           | ((0x301U 
                                               == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                              | ((0x302U 
                                                  == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                 | ((0x303U 
                                                     == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                    | ((0x304U 
                                                        == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                       | ((0x305U 
                                                           == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                          | ((0x306U 
                                                              == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                             | ((0x340U 
                                                                 == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                | ((0x341U 
                                                                    == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                   | ((0x342U 
                                                                       == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                      | ((0x343U 
                                                                          == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                         | ((0x344U 
                                                                             == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                            | ((0xb00U 
                                                                                == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                               | ((0xb02U 
                                                                                == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                                | ((0xb80U 
                                                                                == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                                | ((0xb82U 
                                                                                == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                                | (0x320U 
                                                                                == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))))))))))))))))));
    vlSelf->Core__DOT__resoler_io_csrflag = (((0U != (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp)) 
                                              & (2U 
                                                 != (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))) 
                                             & (((((0U 
                                                    != (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_csr_op)) 
                                                   & (1U 
                                                      != (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_csr_op))) 
                                                  & ((IData)(vlSelf->Core__DOT__ID__DOT___T_841) 
                                                     == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_csr_addr))) 
                                                 | ((IData)(vlSelf->Core__DOT__resoler__DOT___T_35) 
                                                    & ((IData)(vlSelf->Core__DOT__ID__DOT___T_841) 
                                                       == (IData)(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr)))) 
                                                | (((0U 
                                                     != (IData)(vlSelf->Core__DOT__ID_EX__DOT__ff_csrOp)) 
                                                    & (1U 
                                                       != (IData)(vlSelf->Core__DOT__ID_EX__DOT__ff_csrOp))) 
                                                   & ((IData)(vlSelf->Core__DOT__ID__DOT___T_841) 
                                                      == (IData)(vlSelf->Core__DOT__ID_EX__DOT__ff_csrAddr)))));
    vlSelf->Core__DOT__ID__DOT__branchteke = ((1U == (IData)(vlSelf->Core__DOT__ID__DOT__branchOp)) 
                                              | ((2U 
                                                  == (IData)(vlSelf->Core__DOT__ID__DOT__branchOp))
                                                  ? 
                                                 (vlSelf->Core__DOT__ID_io_read1_data 
                                                  == vlSelf->Core__DOT__ID_io_read2_data)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->Core__DOT__ID__DOT__branchOp))
                                                   ? 
                                                  (vlSelf->Core__DOT__ID_io_read1_data 
                                                   != vlSelf->Core__DOT__ID_io_read2_data)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->Core__DOT__ID__DOT__branchOp))
                                                    ? 
                                                   VL_LTS_III(32, vlSelf->Core__DOT__ID_io_read1_data, vlSelf->Core__DOT__ID_io_read2_data)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->Core__DOT__ID__DOT__branchOp))
                                                     ? 
                                                    VL_GTES_III(32, vlSelf->Core__DOT__ID_io_read1_data, vlSelf->Core__DOT__ID_io_read2_data)
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->Core__DOT__ID__DOT__branchOp))
                                                      ? 
                                                     (vlSelf->Core__DOT__ID_io_read1_data 
                                                      < vlSelf->Core__DOT__ID_io_read2_data)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->Core__DOT__ID__DOT__branchOp)) 
                                                      & (vlSelf->Core__DOT__ID_io_read1_data 
                                                         >= vlSelf->Core__DOT__ID_io_read2_data))))))));
    vlSelf->Core__DOT__ID__DOT___T_791 = ((1U == (IData)(vlSelf->Core__DOT__ID__DOT__branchOp))
                                           ? ((IData)(vlSelf->Core__DOT__ID__DOT__regEn1)
                                               ? (0xfffffffeU 
                                                  & (vlSelf->Core__DOT__ID_io_read1_data 
                                                     + vlSelf->Core__DOT__ID__DOT___GEN_2))
                                               : (vlSelf->Core__DOT__IF_ID__DOT__ff_pc 
                                                  + 
                                                  (((- (IData)((IData)(vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0))) 
                                                    << 0x15U) 
                                                   | (((IData)(vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0) 
                                                       << 0x14U) 
                                                      | ((((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                                                            ? 
                                                           (0xffU 
                                                            & (vlSelf->Core__DOT__ID__DOT___GEN_0 
                                                               >> 0xcU))
                                                            : 0U) 
                                                          << 0xcU) 
                                                         | ((0x7ff800U 
                                                             & (((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid) 
                                                                 << 0xbU) 
                                                                & (vlSelf->Core__DOT__ID__DOT___GEN_0 
                                                                   >> 9U))) 
                                                            | (((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                                                                 ? 
                                                                (0x3ffU 
                                                                 & (vlSelf->Core__DOT__ID__DOT___GEN_0 
                                                                    >> 0x15U))
                                                                 : 0U) 
                                                               << 1U)))))))
                                           : (vlSelf->Core__DOT__IF_ID__DOT__ff_pc 
                                              + (((- (IData)((IData)(vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0))) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0) 
                                                     << 0xcU) 
                                                    | ((0xfffff800U 
                                                        & (((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid) 
                                                            << 0xbU) 
                                                           & (vlSelf->Core__DOT__ID__DOT___GEN_0 
                                                              << 4U))) 
                                                       | ((((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                                                             ? 
                                                            (0x3fU 
                                                             & (vlSelf->Core__DOT__ID__DOT___GEN_0 
                                                                >> 0x19U))
                                                             : 0U) 
                                                           << 5U) 
                                                          | (((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                                                               ? 
                                                              (0xfU 
                                                               & (vlSelf->Core__DOT__ID__DOT___GEN_0 
                                                                  >> 8U))
                                                               : 0U) 
                                                             << 1U)))))));
    vlSelf->Core__DOT__csr__DOT___GEN_67 = ((IData)(vlSelf->Core__DOT__csr__DOT___T_605) 
                                            & (IData)(vlSelf->Core__DOT__csr__DOT__mstatus_mie));
    vlSelf->Core__DOT__csr__DOT__readable = ((0xc00U 
                                              == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                             | ((0xc02U 
                                                 == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                | ((0xc80U 
                                                    == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                   | ((0xc82U 
                                                       == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                      | ((0x100U 
                                                          == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                         | ((0x104U 
                                                             == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                            | ((0x105U 
                                                                == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                               | ((0x106U 
                                                                   == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                  | ((0x140U 
                                                                      == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                     | ((0x141U 
                                                                         == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                        | ((0x142U 
                                                                            == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                           | ((0x143U 
                                                                               == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                              | ((0x144U 
                                                                                == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                                | ((0x180U 
                                                                                == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                                | ((0xf11U 
                                                                                == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                                | ((0xf12U 
                                                                                == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                                | ((0xf13U 
                                                                                == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                                | ((0xf14U 
                                                                                == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                                | (IData)(vlSelf->Core__DOT__csr__DOT___T_267)))))))))))))))))));
    vlSelf->Core__DOT__csr__DOT__writable = ((0xc00U 
                                              != (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                             & ((0xc02U 
                                                 != (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                & ((0xc80U 
                                                    != (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                   & ((0xc82U 
                                                       != (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                      & ((0x100U 
                                                          == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                         | ((0x104U 
                                                             == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                            | ((0x105U 
                                                                == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                               | ((0x106U 
                                                                   == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                  | ((0x140U 
                                                                      == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                     | ((0x141U 
                                                                         == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                        | ((0x142U 
                                                                            == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                           | ((0x143U 
                                                                               == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                              | ((0x144U 
                                                                                == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                                | ((0x180U 
                                                                                == (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                                | ((0xf11U 
                                                                                != (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                                & ((0xf12U 
                                                                                != (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                                & ((0xf13U 
                                                                                != (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                                & ((0xf14U 
                                                                                != (IData)(vlSelf->Core__DOT__ID__DOT___T_841)) 
                                                                                & (IData)(vlSelf->Core__DOT__csr__DOT___T_267)))))))))))))))))));
    vlSelf->io_stall = ((IData)(vlSelf->Core__DOT__MEM_WB__DOT___T_2) 
                        | ((IData)(vlSelf->Core__DOT__resoler_io_csrflag) 
                           | (IData)(vlSelf->Core__DOT__resoler_io_loadflag)));
    vlSelf->Core__DOT__ID_EX_io_stallNext = ((IData)(vlSelf->Core__DOT__resoler_io_csrflag) 
                                             | (IData)(vlSelf->Core__DOT__MEM_WB__DOT___T_2));
    vlSelf->Core__DOT__ID__DOT__addrFault = ((IData)(vlSelf->Core__DOT__ID__DOT__branchteke) 
                                             & (0U 
                                                != 
                                                ((0U 
                                                  == (IData)(vlSelf->Core__DOT__ID__DOT__branchOp))
                                                  ? 0U
                                                  : 
                                                 (3U 
                                                  & vlSelf->Core__DOT__ID__DOT___T_791))));
    vlSelf->Core__DOT__ID__DOT__takepc = ((0U == (IData)(vlSelf->Core__DOT__ID__DOT__branchOp))
                                           ? 0U : vlSelf->Core__DOT__ID__DOT___T_791);
    vlSelf->Core__DOT__csr__DOT___T_319 = ((IData)(vlSelf->Core__DOT__csr__DOT__readable) 
                                           & (IData)(vlSelf->Core__DOT__csr__DOT__writable));
    vlSelf->Core__DOT__IF_ID__DOT___GEN_4 = (1U & (
                                                   (~ (IData)(vlSelf->io_stall)) 
                                                   | (IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)));
    vlSelf->Core__DOT__ID_EX__DOT___T_3 = ((IData)(vlSelf->Core__DOT__ID_EX_io_flush) 
                                           | ((~ (IData)(vlSelf->Core__DOT__ID_EX_io_stallNext)) 
                                              & (IData)(vlSelf->io_stall)));
    vlSelf->Core__DOT__EX_MEM__DOT___T_3 = ((IData)(vlSelf->Core__DOT__ID_EX_io_flush) 
                                            | ((~ (IData)(vlSelf->Core__DOT__MEM_WB__DOT___T_2)) 
                                               & (IData)(vlSelf->Core__DOT__ID_EX_io_stallNext)));
    vlSelf->Core__DOT__ID__DOT__branchmiss = ((0U != (IData)(vlSelf->Core__DOT__ID__DOT__branchOp)) 
                                              & (((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_bpu_take) 
                                                  != (IData)(vlSelf->Core__DOT__ID__DOT__branchteke)) 
                                                 | (vlSelf->Core__DOT__IF_ID__DOT__ff_bpu_takepc 
                                                    != vlSelf->Core__DOT__ID__DOT__takepc)));
    vlSelf->io_flush = ((IData)(vlSelf->Core__DOT__ID_EX_io_flush) 
                        | (IData)(vlSelf->Core__DOT__ID__DOT__branchmiss));
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
