// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
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
                VL_FATAL_MT("/home/hujun/ysyx-workbench/npc/verilog/vsrc/top.v", 3803, "", "Settle region did not converge.");
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

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

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
    vlSelf->io_timer = VL_RAND_RESET_I(1);
    vlSelf->io_soft = VL_RAND_RESET_I(1);
    vlSelf->io_extern = VL_RAND_RESET_I(1);
    vlSelf->io_inst = VL_RAND_RESET_I(32);
    vlSelf->io_pc = VL_RAND_RESET_I(32);
    vlSelf->io_npc = VL_RAND_RESET_I(32);
    vlSelf->io_next = VL_RAND_RESET_I(32);
    vlSelf->io_flushpc = VL_RAND_RESET_I(32);
    vlSelf->io_flush = VL_RAND_RESET_I(1);
    vlSelf->io_stall = VL_RAND_RESET_I(1);
    vlSelf->io_wbinst = VL_RAND_RESET_I(32);
    vlSelf->io_bputake = VL_RAND_RESET_I(1);
    vlSelf->io_bpuaddr = VL_RAND_RESET_I(32);
    vlSelf->io_idpc = VL_RAND_RESET_I(32);
    vlSelf->io_idinst = VL_RAND_RESET_I(32);
    vlSelf->io_expc = VL_RAND_RESET_I(32);
    vlSelf->io_exinst = VL_RAND_RESET_I(32);
    vlSelf->io_mempc = VL_RAND_RESET_I(32);
    vlSelf->io_meminst = VL_RAND_RESET_I(32);
    vlSelf->io_result = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__ID_io_read1_data = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__ID_io_read2_en = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__ID_io_read2_data = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__ID_EX_io_flush = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__ID_EX_io_stallNext = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__EX_io_ex_o_load = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__MEM_io_except_excValue = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__MEM_io_mem_o_reg_data = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__resoler_io_loadflag = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__resoler_io_csrflag = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__fetch__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__fetch__DOT___T_2 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__fetch__DOT__bpu__DOT__inst_b_type_imm = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__IF_ID__DOT__ff_pc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__IF_ID__DOT__ff_valid = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__IF_ID__DOT__ff_inst = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__IF_ID__DOT__ff_bpu_take = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__IF_ID__DOT__ff_bpu_takepc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__IF_ID__DOT__ff_misaligned = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__IF_ID__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__ID__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__ID__DOT__lastinst = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__ID__DOT___GEN_0 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__ID__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__ID__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->Core__DOT__ID__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->Core__DOT__ID__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->Core__DOT__ID__DOT__immI = VL_RAND_RESET_I(12);
    vlSelf->Core__DOT__ID__DOT___T_153 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__ID__DOT___T_171 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__ID__DOT___T_188 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__ID__DOT__regEn1 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__ID__DOT___T_229 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__ID__DOT___T_246 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__ID__DOT___T_276 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__ID__DOT___T_293 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__ID__DOT___T_326 = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__ID__DOT___T_341 = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__ID__DOT___T_356 = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__ID__DOT__aluSrc1 = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__ID__DOT___T_389 = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__ID__DOT___T_404 = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__ID__DOT___T_419 = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__ID__DOT__aluSrc2 = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__ID__DOT___T_442 = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__ID__DOT___T_457 = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__ID__DOT___T_472 = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__ID__DOT___T_529 = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__ID__DOT__branchOp = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__ID__DOT___T_558 = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__ID__DOT___T_573 = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__ID__DOT___T_588 = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__ID__DOT___T_629 = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__ID__DOT___T_644 = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__ID__DOT__csrOp = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__ID__DOT___T_732 = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__ID__DOT___T_747 = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__ID__DOT___T_762 = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__ID__DOT___GEN_2 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__ID__DOT___T_791 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__ID__DOT__takepc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__ID__DOT__branchteke = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__ID__DOT__addrFault = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__ID__DOT__csrActOp = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__ID__DOT___T_841 = VL_RAND_RESET_I(12);
    vlSelf->Core__DOT__ID__DOT___T_850 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0 = 0;
    vlSelf->Core__DOT__ID__DOT____VdfgTmp_h7417a8e6__0 = 0;
    vlSelf->Core__DOT__ID_EX__DOT__ff_aluOp = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__ID_EX__DOT__ff_opr1 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__ID_EX__DOT__ff_opr2 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__ID_EX__DOT__ff_lsuOp = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__ID_EX__DOT__ff_lsuData = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__ID_EX__DOT__ff_regWen = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__ID_EX__DOT__ff_regWaddr = VL_RAND_RESET_I(5);
    vlSelf->Core__DOT__ID_EX__DOT__ff_csrOp = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__ID_EX__DOT__ff_csrAddr = VL_RAND_RESET_I(12);
    vlSelf->Core__DOT__ID_EX__DOT__ff_csren = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__ID_EX__DOT__ff_csrrData = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__ID_EX__DOT__ff_csrwData = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__ID_EX__DOT__ff_excType = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__ID_EX__DOT__ff_excValue = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__ID_EX__DOT__ff_inst = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__ID_EX__DOT__ff_currentPc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__ID_EX__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__EX__DOT__result = VL_RAND_RESET_Q(63);
    vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuData = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_en = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_addr = VL_RAND_RESET_I(5);
    vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__EX_MEM__DOT__ff_csr_op = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__EX_MEM__DOT__ff_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->Core__DOT__EX_MEM__DOT__ff_csr_data = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__EX_MEM__DOT__ff_csr_retired = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__EX_MEM__DOT__ff_excType = VL_RAND_RESET_I(4);
    vlSelf->Core__DOT__EX_MEM__DOT__ff_excValue = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__EX_MEM__DOT__ff_inst = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__EX_MEM__DOT__ff_currentPc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__EX_MEM__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__MEM__DOT__mem_ren = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__MEM__DOT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__MEM__DOT__ren = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__MEM__DOT__width = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__MEM__DOT__memAddr = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__MEM_WB__DOT__ff_reg_en = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__MEM_WB__DOT__ff_reg_addr = VL_RAND_RESET_I(5);
    vlSelf->Core__DOT__MEM_WB__DOT__ff_reg_data = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_op = VL_RAND_RESET_I(3);
    vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_data = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_retired = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__MEM_WB__DOT__ff_currentPc = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__MEM_WB__DOT__ff_inst = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__MEM_WB__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__MEM_WB__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__regfile__DOT__regfile_0 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_1 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_2 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_3 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_4 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_5 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_6 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_7 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_8 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_9 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_10 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_11 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_12 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_13 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_14 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_15 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_16 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_17 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_18 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_19 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_20 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_21 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_22 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_23 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_24 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_25 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_26 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_27 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_28 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_29 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_30 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT__regfile_31 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT___GEN_21 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT___GEN_53 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__regfile__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__resoler__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__resoler__DOT___T_10 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__resoler__DOT___T_35 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__mode = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__csr__DOT__mstatus_sum = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__mstatus_mpp = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__csr__DOT__mstatus_spp = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__mstatus_mpie = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__mstatus_spie = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__mstatus_mie = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__mstatus_sie = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__medeleg_data = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT__mideleg_data = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT__mie_meie = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__mie_seie = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__mie_mtie = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__mie_stie = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__mie_msie = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__mie_ssie = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__mtvec_base = VL_RAND_RESET_I(30);
    vlSelf->Core__DOT__csr__DOT__mtvec_mode = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__csr__DOT__mscratch_data = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT__mepc_data = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT__mcause_int = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__mcause_code = VL_RAND_RESET_I(31);
    vlSelf->Core__DOT__csr__DOT__mtval_data = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT__mipReal_seip = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__mipReal_stip = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__mipReal_ssip = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__mcycle_data = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__csr__DOT__minstret_data = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__csr__DOT___T_31 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT___T_47 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT__stvec_base = VL_RAND_RESET_I(30);
    vlSelf->Core__DOT__csr__DOT__stvec_mode = VL_RAND_RESET_I(2);
    vlSelf->Core__DOT__csr__DOT__sscratch_data = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT__sepc_data = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT__scause_int = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__scause_code = VL_RAND_RESET_I(31);
    vlSelf->Core__DOT__csr__DOT__stval_data = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT__satp_mode = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__satp_ppn = VL_RAND_RESET_I(22);
    vlSelf->Core__DOT__csr__DOT___T_74 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT___T_82 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT___T_83 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT___T_84 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT__mip_ssip = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__mip_stip = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__mip_seip = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT___T_92 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT___T_94 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT___T_129 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT___T_130 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT___T_142 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT___T_235 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT___T_267 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__readable = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__writable = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT___T_319 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT___T_422 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT__csrData = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT___T_510 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT___T_512 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT__writeData = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT__flagIntS = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT__flagIntM = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT__hasIntM = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__hasInt = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__handIntS = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__handExcS = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT__intCauseS = VL_RAND_RESET_I(31);
    vlSelf->Core__DOT__csr__DOT__cause = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT___T_605 = VL_RAND_RESET_I(1);
    vlSelf->Core__DOT__csr__DOT___T_617 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__csr__DOT___T_619 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__csr__DOT___T_675 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT___T_717 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT___T_756 = VL_RAND_RESET_I(32);
    vlSelf->Core__DOT__csr__DOT___T_762 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__csr__DOT___T_765 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__csr__DOT___T_768 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__csr__DOT___T_771 = VL_RAND_RESET_Q(64);
    vlSelf->Core__DOT__csr__DOT___GEN_67 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_vaddr_read__2__Vfuncout = 0;
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
