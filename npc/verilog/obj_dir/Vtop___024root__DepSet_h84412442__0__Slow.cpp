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
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h2a10a086__0;
    VlWide<3>/*95:0*/ __Vtemp_hbd43e986__0;
    VlWide<3>/*95:0*/ __Vtemp_hcfbd1472__0;
    VlWide<3>/*95:0*/ __Vtemp_h42400dad__0;
    VlWide<3>/*95:0*/ __Vtemp_h2a10a086__1;
    VlWide<3>/*95:0*/ __Vtemp_hbece8cfe__0;
    VlWide<3>/*95:0*/ __Vtemp_h2a10a086__2;
    VlWide<3>/*95:0*/ __Vtemp_h969d025d__0;
    // Body
    vlSelf->io_npc = vlSelf->top__DOT__core__DOT__fetch__DOT__pc;
    vlSelf->io_idpc = vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_pc;
    vlSelf->io_idinst = vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_inst;
    vlSelf->io_meminst = vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_inst;
    vlSelf->io_result = vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_reg_data;
    vlSelf->io_waddr = vlSelf->top__DOT__core__DOT__MEM__DOT__state;
    vlSelf->io_state = vlSelf->top__DOT__ram__DOT__state;
    vlSelf->top__DOT__core__DOT__fetch__DOT___T_8 = 
        ((IData)(4U) + vlSelf->top__DOT__core__DOT__fetch__DOT__pc);
    vlSelf->top__DOT__core__DOT__fetch__DOT___T_3 = 
        (0U == (IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__state));
    vlSelf->top__DOT__core__DOT__fetch__DOT___T_1 = 
        (2U == (IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__state));
    vlSelf->top__DOT__core__DOT__fetch__DOT___T_5 = 
        (1U == (IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__state));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___T_3 
        = (0U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__state));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___T_9 
        = (1U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__state));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___T_33 
        = (2U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__state));
    vlSelf->top__DOT__core__DOT__MEM__DOT___T_49 = 
        (0U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state));
    vlSelf->top__DOT__core__DOT__MEM__DOT___T_53 = 
        (1U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state));
    vlSelf->top__DOT__core__DOT__MEM__DOT___T_54 = 
        (2U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state));
    vlSelf->top__DOT__core__DOT__MEM__DOT___T_55 = 
        (3U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state));
    vlSelf->top__DOT__core__DOT__MEM__DOT___T_56 = 
        (4U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state));
    vlSelf->top__DOT__core__DOT__MEM__DOT___T_57 = 
        (5U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state));
    vlSelf->top__DOT__core__DOT__csr__DOT___T_617 = 
        (1ULL + vlSelf->top__DOT__core__DOT__csr__DOT__mcycle_data);
    vlSelf->top__DOT__core__DOT__csr__DOT___T_619 = 
        (1ULL + vlSelf->top__DOT__core__DOT__csr__DOT__minstret_data);
    vlSelf->top__DOT__rom__DOT___T_1 = (1U & (~ (IData)(vlSelf->top__DOT__rom__DOT__state)));
    vlSelf->top__DOT__ram__DOT___T_1 = (1U == (IData)(vlSelf->top__DOT__ram__DOT__state));
    vlSelf->top__DOT__ram__DOT___T_3 = (4U == (IData)(vlSelf->top__DOT__ram__DOT__state));
    vlSelf->io_pc = vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_currentPc;
    vlSelf->io_wbinst = vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_inst;
    vlSelf->io_expc = vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_currentPc;
    vlSelf->io_exinst = vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_inst;
    vlSelf->io_mempc = vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_currentPc;
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___T_31 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__counter)));
    vlSelf->top__DOT__core__DOT__ID__DOT___T_849 = 
        (((IData)(vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_valid)
           ? (vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_inst 
              >> 0xcU) : 0U) << 0xcU);
    vlSelf->top__DOT__core__DOT__regfile__DOT___T_4 
        = ((IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_reg_en) 
           & (0U != (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_reg_addr)));
    vlSelf->top__DOT__core__DOT__arbiter__DOT___GEN_0 
        = (((4U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state)) 
            | (1U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state))) 
           | (IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant));
    vlSelf->io_ifaddrvalid = ((IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant) 
                              & (1U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state)));
    vlSelf->io_ifdatavalid = ((IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant) 
                              & (2U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state)));
    VL_SHIFTR_WWI(65,65,32, __Vtemp_h2a10a086__0, vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__divisor, 1U);
    VL_ADD_W(3, __Vtemp_hbd43e986__0, vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__divisor, __Vtemp_h2a10a086__0);
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__maxDivisor[0U] 
        = __Vtemp_hbd43e986__0[0U];
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__maxDivisor[1U] 
        = __Vtemp_hbd43e986__0[1U];
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__maxDivisor[2U] 
        = (1U & __Vtemp_hbd43e986__0[2U]);
    vlSelf->io_romdataready = (3U == (IData)(vlSelf->top__DOT__ram__DOT__state));
    vlSelf->top__DOT__core__DOT__EX_io_ex_o_load = 
        ((0U != (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_lsuOp)) 
         & (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_regWen));
    if (vlSelf->top__DOT__core__DOT__arbiter__DOT__grant) {
        vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_arvalid 
            = (4U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state));
        vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_rready 
            = (5U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state));
    } else {
        vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_arvalid 
            = (1U == (IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__state));
        vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_rready 
            = (2U == (IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__state));
    }
    Vtop___024unit____Vdpiimwrap_set_gpr_ptr_TOP____024unit(vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_0, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_1, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_2, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_3, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_4, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_5, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_6, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_7, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_8, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_9, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_10, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_11, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_12, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_13, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_14, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_15, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_16, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_17, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_18, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_19, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_20, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_21, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_22, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_23, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_24, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_25, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_26, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_27, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_28, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_29, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_30, vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_31);
    Vtop___024unit____Vdpiimwrap_get_diff_commit_TOP____024unit(0U);
    if (vlSelf->top__DOT__core__DOT__arbiter__DOT__grant) {
        vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_awaddr 
            = vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_reg_data;
        vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_araddr 
            = vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_reg_data;
    } else {
        vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_awaddr = 0U;
        vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_araddr 
            = vlSelf->top__DOT__core__DOT__fetch__DOT__pc;
    }
    vlSelf->top__DOT__core__DOT__MEM__DOT__wen = ((1U 
                                                   != (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                                  & ((2U 
                                                      != (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                                     & ((3U 
                                                         != (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                                        & ((4U 
                                                            != (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                                           & ((5U 
                                                               != (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                                              & ((6U 
                                                                  == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                                                 | ((7U 
                                                                     == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                                                    | (8U 
                                                                       == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuOp)))))))));
    vlSelf->top__DOT__core__DOT__resoler__DOT___T_35 
        = ((0U != (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_op)) 
           & (1U != (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_op)));
    vlSelf->top__DOT__core__DOT__csr__DOT___T_83 = 
        ((vlSelf->top__DOT__core__DOT__csr__DOT__stvec_base 
          << 2U) | (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__stvec_mode));
    vlSelf->top__DOT__core__DOT__csr__DOT___T_84 = 
        (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__scause_int) 
          << 0x1fU) | vlSelf->top__DOT__core__DOT__csr__DOT__scause_code);
    vlSelf->top__DOT__core__DOT__csr__DOT___T_94 = 
        (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__satp_mode) 
          << 0x1fU) | vlSelf->top__DOT__core__DOT__csr__DOT__satp_ppn);
    vlSelf->top__DOT__core__DOT__csr__DOT___T_74 = 
        (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mstatus_sum) 
          << 0x12U) | (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mstatus_spp) 
                        << 8U) | (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mstatus_spie) 
                                   << 5U) | ((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mstatus_sie) 
                                             << 1U))));
    vlSelf->top__DOT__core__DOT__ID__DOT____VdfgTmp_hc515ad56__0 
        = ((IData)(vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_valid) 
           & (vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_inst 
              >> 0x1fU));
    vlSelf->top__DOT__core__DOT__csr__DOT___T_129 = 
        ((vlSelf->top__DOT__core__DOT__csr__DOT__mtvec_base 
          << 2U) | (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mtvec_mode));
    vlSelf->top__DOT__core__DOT__csr__DOT___T_130 = 
        (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mcause_int) 
          << 0x1fU) | vlSelf->top__DOT__core__DOT__csr__DOT__mcause_code);
    vlSelf->top__DOT__core__DOT__csr__DOT___T_31 = 
        (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mstatus_sum) 
          << 0x12U) | (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mstatus_mpp) 
                        << 0xbU) | (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mstatus_spp) 
                                     << 8U) | (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mstatus_mpie) 
                                                << 7U) 
                                               | (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mstatus_spie) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mstatus_mie) 
                                                      << 3U) 
                                                     | ((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mstatus_sie) 
                                                        << 1U)))))));
    if (vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_valid) {
        vlSelf->top__DOT__core__DOT__ID__DOT__rd = 
            (0x1fU & (vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_inst 
                      >> 7U));
        vlSelf->top__DOT__core__DOT__ID__DOT__immI 
            = (vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_inst 
               >> 0x14U);
        vlSelf->top__DOT__core__DOT__ID__DOT__rs2 = 
            (0x1fU & (vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_inst 
                      >> 0x14U));
        vlSelf->top__DOT__core__DOT__ID__DOT__rs1 = 
            (0x1fU & (vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_inst 
                      >> 0xfU));
        vlSelf->top__DOT__core__DOT__ID__DOT__inst 
            = vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_inst;
    } else {
        vlSelf->top__DOT__core__DOT__ID__DOT__rd = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT__immI = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT__rs2 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT__rs1 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT__inst = 0x13U;
    }
    vlSelf->top__DOT__core__DOT__MEM__DOT__ren = ((1U 
                                                   == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                                  | ((2U 
                                                      == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                                     | ((3U 
                                                         == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                                        | ((4U 
                                                            == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                                           | (5U 
                                                              == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuOp))))));
    vlSelf->io_romaddrready = (0U == (IData)(vlSelf->top__DOT__ram__DOT__state));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT___T_24 
        = ((7U == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
           | (8U == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)));
    vlSelf->top__DOT__core__DOT__csr__DOT___T_82 = 
        (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mie_seie) 
          << 9U) | (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mie_stie) 
                     << 5U) | ((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mie_ssie) 
                               << 1U)));
    vlSelf->top__DOT__core__DOT__csr__DOT___T_47 = 
        (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mie_meie) 
          << 0xbU) | (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mie_seie) 
                       << 9U) | (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mie_mtie) 
                                  << 7U) | (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mie_stie) 
                                             << 5U) 
                                            | (((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mie_msie) 
                                                << 3U) 
                                               | ((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mie_ssie) 
                                                  << 1U))))));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mulEn 
        = ((1U == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
           | ((2U == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
              | ((3U == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
                 | (4U == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)))));
    vlSelf->top__DOT__core__DOT__MEM__DOT__width = 
        ((1U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuOp))
          ? 0U : ((2U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuOp))
                   ? 1U : ((3U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuOp))
                            ? 2U : ((4U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuOp))
                                     ? 0U : ((5U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuOp))
                                              ? 1U : 
                                             ((6U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuOp))
                                               ? 0U
                                               : ((7U 
                                                   == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuOp))
                                                   ? 1U
                                                   : 
                                                  ((8U 
                                                    == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuOp))
                                                    ? 2U
                                                    : 0U))))))));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT___T_41 
        = ((4U != (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
           & ((5U == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
              | ((6U != (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
                 & (7U == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)))));
    vlSelf->top__DOT__core__DOT__csr__DOT__mip_ssip 
        = ((IData)(vlSelf->io_soft) | (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mipReal_ssip));
    vlSelf->top__DOT__core__DOT__csr__DOT__mip_stip 
        = ((IData)(vlSelf->io_timer) | (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mipReal_stip));
    vlSelf->top__DOT__core__DOT__csr__DOT__mip_seip 
        = ((IData)(vlSelf->io_extern) | (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__mipReal_seip));
    VL_SUB_W(3, __Vtemp_hcfbd1472__0, vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result, vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__maxDivisor);
    VL_SUB_W(3, __Vtemp_h42400dad__0, vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result, vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__divisor);
    VL_SHIFTR_WWI(65,65,32, __Vtemp_h2a10a086__1, vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__divisor, 1U);
    __Vtemp_hbece8cfe__0[0U] = __Vtemp_h2a10a086__1[0U];
    __Vtemp_hbece8cfe__0[1U] = __Vtemp_h2a10a086__1[1U];
    __Vtemp_hbece8cfe__0[2U] = (1U & __Vtemp_h2a10a086__1[2U]);
    VL_SHIFTR_WWI(65,65,32, __Vtemp_h2a10a086__2, vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__divisor, 1U);
    VL_SUB_W(3, __Vtemp_h969d025d__0, vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result, __Vtemp_h2a10a086__2);
    if ((1U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__state))) {
        if (VL_GTE_W(3, vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result, vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__maxDivisor)) {
            vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_24[0U] 
                = (3U | (__Vtemp_hcfbd1472__0[0U] << 2U));
            vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_24[1U] 
                = ((__Vtemp_hcfbd1472__0[0U] >> 0x1eU) 
                   | (__Vtemp_hcfbd1472__0[1U] << 2U));
            vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_24[2U] 
                = ((__Vtemp_hcfbd1472__0[1U] >> 0x1eU) 
                   | (4U & (__Vtemp_hcfbd1472__0[2U] 
                            << 2U)));
        } else if ((VL_LT_W(3, vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result, vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__maxDivisor) 
                    & VL_GTE_W(3, vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result, vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__divisor))) {
            vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_24[0U] 
                = (2U | (__Vtemp_h42400dad__0[0U] << 2U));
            vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_24[1U] 
                = ((__Vtemp_h42400dad__0[0U] >> 0x1eU) 
                   | (__Vtemp_h42400dad__0[1U] << 2U));
            vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_24[2U] 
                = ((__Vtemp_h42400dad__0[1U] >> 0x1eU) 
                   | (4U & (__Vtemp_h42400dad__0[2U] 
                            << 2U)));
        } else if ((VL_LT_W(3, vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result, vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__divisor) 
                    & VL_GTE_W(3, vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result, __Vtemp_hbece8cfe__0))) {
            vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_24[0U] 
                = (1U | (__Vtemp_h969d025d__0[0U] << 2U));
            vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_24[1U] 
                = ((__Vtemp_h969d025d__0[0U] >> 0x1eU) 
                   | (__Vtemp_h969d025d__0[1U] << 2U));
            vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_24[2U] 
                = ((__Vtemp_h969d025d__0[1U] >> 0x1eU) 
                   | (4U & (__Vtemp_h969d025d__0[2U] 
                            << 2U)));
        } else {
            vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_24[0U] 
                = (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[0U] 
                   << 2U);
            vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_24[1U] 
                = ((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[0U] 
                    >> 0x1eU) | (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[1U] 
                                 << 2U));
            vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_24[2U] 
                = ((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[1U] 
                    >> 0x1eU) | (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U] 
                                 << 2U));
        }
    } else {
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_24[0U] 
            = vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[0U];
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_24[1U] 
            = vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[1U];
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_24[2U] 
            = vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U];
    }
    vlSelf->top__DOT__core__DOT__ID__DOT____VdfgTmp_h6e65807c__0 
        = (((- (IData)((IData)(vlSelf->top__DOT__core__DOT__ID__DOT____VdfgTmp_hc515ad56__0))) 
            << 0xcU) | ((((IData)(vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_valid)
                           ? (vlSelf->top__DOT__core__DOT__IF_ID__DOT__ff_inst 
                              >> 0x19U) : 0U) << 5U) 
                        | (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rd)));
    vlSelf->top__DOT__core__DOT__ID__DOT___GEN_1 = 
        (((- (IData)((IData)(vlSelf->top__DOT__core__DOT__ID__DOT____VdfgTmp_hc515ad56__0))) 
          << 0xcU) | (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__immI));
    vlSelf->top__DOT__core__DOT__regfile__DOT___GEN_53 
        = ((0x15U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
            ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_21
            : ((0x14U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_20
                : ((0x13U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                    ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_19
                    : ((0x12U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                        ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_18
                        : ((0x11U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                            ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_17
                            : ((0x10U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                                ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_16
                                : ((0xfU == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                                    ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_15
                                    : ((0xeU == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                                        ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_14
                                        : ((0xdU == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                                            ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_13
                                            : ((0xcU 
                                                == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                                                ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_12
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                                                    ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_11
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                                                     ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_10
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                                                      ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_9
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                                                       ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_8
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                                                        ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_7
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                                                         ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_6
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                                                          ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_5
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                                                           ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_4
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                                                            ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_3
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                                                             ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_2
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2))
                                                              ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_1
                                                              : vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_0)))))))))))))))))))));
    vlSelf->top__DOT__core__DOT__resoler__DOT___T_10 
        = ((IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_regWaddr) 
           == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs2));
    vlSelf->top__DOT__xbar__DOT___T_9 = ((0x80000000U 
                                          <= vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_awaddr) 
                                         & (0x800ff000U 
                                            > vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_awaddr));
    vlSelf->top__DOT__xbar__DOT___T_12 = ((0x800ff000U 
                                           <= vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_awaddr) 
                                          & (0x8fffffffU 
                                             > vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_awaddr));
    vlSelf->top__DOT__core__DOT__regfile__DOT___GEN_21 
        = ((0x15U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
            ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_21
            : ((0x14U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_20
                : ((0x13U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                    ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_19
                    : ((0x12U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                        ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_18
                        : ((0x11U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                            ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_17
                            : ((0x10U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_16
                                : ((0xfU == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                    ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_15
                                    : ((0xeU == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                        ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_14
                                        : ((0xdU == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                            ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_13
                                            : ((0xcU 
                                                == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                                ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_12
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                                    ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_11
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                                     ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_10
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                                      ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_9
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                                       ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_8
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                                        ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_7
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                                         ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_6
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                                          ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_5
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                                           ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_4
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                                            ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_3
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                                             ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_2
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                                              ? vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_1
                                                              : vlSelf->top__DOT__core__DOT__regfile__DOT__regfile_0)))))))))))))))))))));
    vlSelf->top__DOT__core__DOT__resoler__DOT___T_2 
        = ((IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_regWaddr) 
           == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__hiRem 
        = ((1U != (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
           & ((2U == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
              | ((3U == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
                 | ((4U == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
                    | ((5U != (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
                       & ((6U != (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
                          & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT___T_24)))))));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_en 
        = ((1U != (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
           & ((2U != (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
              & ((3U != (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
                 & ((4U != (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
                    & ((5U == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
                       | ((6U == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
                          | (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT___T_24)))))));
    vlSelf->top__DOT__xbar__DOT___T_2 = ((0x80000000U 
                                          <= vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_araddr) 
                                         & (0x800ff000U 
                                            > vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_araddr));
    vlSelf->top__DOT__xbar__DOT___T_5 = ((0x800ff000U 
                                          <= vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_araddr) 
                                         & (0x8fffffffU 
                                            > vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_araddr));
    vlSelf->top__DOT__core__DOT__ID__DOT___T_275 = 
        ((0x1023U != (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
         & ((0x2023U != (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
            & ((0xfU != (0xf00fffffU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
               & ((0x100fU != vlSelf->top__DOT__core__DOT__ID__DOT__inst) 
                  & ((0x1073U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                     | ((0x2073U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                        | ((0x3073U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                           | ((0x5073U == (0x707fU 
                                           & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                              | ((0x6073U == (0x707fU 
                                              & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                 | ((0x7073U == (0x707fU 
                                                 & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                    | ((0x2000033U 
                                        == (0xfe00707fU 
                                            & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                       | ((0x2001033U 
                                           == (0xfe00707fU 
                                               & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                          | ((0x2002033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                             | ((0x2003033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                | ((0x2004033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                   | ((0x2005033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                      | ((0x2006033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                         | (0x2007033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->top__DOT__core__DOT__ID__DOT__inst)))))))))))))))))));
    if ((0x6073U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_441 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_557 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_731 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_325 = 0U;
    } else if ((0x7073U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_441 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_557 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_731 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_325 = 0U;
    } else if ((0x2000033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_441 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_557 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_731 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_325 = 1U;
    } else if ((0x2001033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_441 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_557 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_731 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_325 = 1U;
    } else if ((0x2002033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_441 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_557 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_731 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_325 = 1U;
    } else if ((0x2003033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_441 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_557 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_731 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_325 = 1U;
    } else if ((0x2004033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_441 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_557 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_731 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_325 = 1U;
    } else if ((0x2005033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_441 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_557 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_731 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_325 = 1U;
    } else if ((0x2006033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_441 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_557 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_731 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_325 = 1U;
    } else if ((0x2007033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_441 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_557 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_731 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_325 = 1U;
    } else if ((0x73U == vlSelf->top__DOT__core__DOT__ID__DOT__inst)) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_441 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_557 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_731 = 1U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_325 = 0U;
    } else if ((0x100073U == vlSelf->top__DOT__core__DOT__ID__DOT__inst)) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_441 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_557 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_731 = 2U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_325 = 0U;
    } else if ((0x10200073U == vlSelf->top__DOT__core__DOT__ID__DOT__inst)) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_441 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_557 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_731 = 3U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_325 = 0U;
    } else if ((0x30200073U == vlSelf->top__DOT__core__DOT__ID__DOT__inst)) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_441 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_557 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_731 = 4U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_325 = 0U;
    } else if ((0x10500073U == vlSelf->top__DOT__core__DOT__ID__DOT__inst)) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_441 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_557 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_731 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_325 = 0U;
    } else if ((0x12000073U == (0xfe007fffU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_441 = 3U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_557 = 0xbU;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_731 = 0xaU;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_325 = 1U;
    } else {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_441 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_557 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_731 = 5U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_325 = 0U;
    }
    if ((0x100fU == vlSelf->top__DOT__core__DOT__ID__DOT__inst)) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_678 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_388 = 0U;
    } else if ((0x1073U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_678 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_388 = 0U;
    } else if ((0x2073U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_678 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_388 = 0U;
    } else if ((0x3073U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_678 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_388 = 0U;
    } else if ((0x5073U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_678 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_388 = 0U;
    } else if ((0x6073U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_678 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_388 = 0U;
    } else if ((0x7073U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_678 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_388 = 0U;
    } else if ((0x2000033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_678 = 1U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_388 = 2U;
    } else if ((0x2001033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_678 = 2U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_388 = 2U;
    } else if ((0x2002033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_678 = 3U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_388 = 2U;
    } else if ((0x2003033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_678 = 4U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_388 = 2U;
    } else if ((0x2004033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_678 = 5U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_388 = 2U;
    } else if ((0x2005033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_678 = 6U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_388 = 2U;
    } else if ((0x2006033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_678 = 7U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_388 = 2U;
    } else if ((0x2007033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_678 = 8U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_388 = 2U;
    } else {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_678 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_388 = 0U;
    }
    vlSelf->top__DOT__core__DOT__ID__DOT___T_528 = 
        ((0x3013U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
          ? 0U : ((0x1033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                   ? 0U : ((0x1013U == (0xfe00707fU 
                                        & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                            ? 0U : ((0x5033U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                     ? 0U : ((0x5013U 
                                              == (0xfe00707fU 
                                                  & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                              ? 0U : 
                                             ((0x40005033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                               ? 0U
                                               : ((0x40005013U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                   ? 0U
                                                   : 
                                                  ((0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                    ? 2U
                                                    : 
                                                   ((0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                     ? 3U
                                                     : 
                                                    ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                      ? 4U
                                                      : 
                                                     ((0x5063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                       ? 5U
                                                       : 
                                                      ((0x6063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                        ? 6U
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                         ? 7U
                                                         : 
                                                        ((0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                          ? 1U
                                                          : 
                                                         ((0x67U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                           ? 1U
                                                           : 0U)))))))))))))));
    vlSelf->top__DOT__core__DOT__ID__DOT___T_628 = 
        ((0x1003U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
          ? 0U : ((0x2003U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                   ? 0U : ((0x4003U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                            ? 0U : ((0x5003U == (0x707fU 
                                                 & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                     ? 0U : ((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                              ? 0U : 
                                             ((0x1023U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                               ? 0U
                                               : ((0x2023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                   ? 0U
                                                   : 
                                                  ((0xfU 
                                                    == 
                                                    (0xf00fffffU 
                                                     & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x100fU 
                                                     == vlSelf->top__DOT__core__DOT__ID__DOT__inst)
                                                     ? 0U
                                                     : 
                                                    ((0x1073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                      ? 3U
                                                      : 
                                                     ((0x2073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                       ? 4U
                                                       : 
                                                      ((0x3073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                        ? 5U
                                                        : 
                                                       ((0x5073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                         ? 3U
                                                         : 
                                                        ((0x6073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                          ? 4U
                                                          : 
                                                         ((0x7073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                           ? 5U
                                                           : 0U)))))))))))))));
    vlSelf->top__DOT__core__DOT__ID__DOT___T_152 = 
        ((0x5073U != (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
         & ((0x6073U != (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
            & ((0x7073U != (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
               & ((0x2000033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                  | ((0x2001033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                     | ((0x2002033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                        | ((0x2003033U == (0xfe00707fU 
                                           & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                           | ((0x2004033U == (0xfe00707fU 
                                              & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                              | ((0x2005033U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                 | ((0x2006033U == 
                                     (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                    | ((0x2007033U 
                                        == (0xfe00707fU 
                                            & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                       | ((0x73U != vlSelf->top__DOT__core__DOT__ID__DOT__inst) 
                                          & ((0x100073U 
                                              != vlSelf->top__DOT__core__DOT__ID__DOT__inst) 
                                             & ((0x10200073U 
                                                 != vlSelf->top__DOT__core__DOT__ID__DOT__inst) 
                                                & ((0x30200073U 
                                                    != vlSelf->top__DOT__core__DOT__ID__DOT__inst) 
                                                   & ((0x10500073U 
                                                       != vlSelf->top__DOT__core__DOT__ID__DOT__inst) 
                                                      & (0x12000073U 
                                                         == 
                                                         (0xfe007fffU 
                                                          & vlSelf->top__DOT__core__DOT__ID__DOT__inst))))))))))))))))));
    if (((~ (IData)(vlSelf->io_romaddrready)) & (1U 
                                                 == (IData)(vlSelf->top__DOT__ram__DOT__state)))) {
        Vtop___024unit____Vdpiimwrap_vaddr_read_TOP____024unit(0U, 
                                                               ((1U 
                                                                 == (IData)(vlSelf->top__DOT__ram__DOT__state))
                                                                 ? vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_araddr
                                                                 : vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_awaddr), 
                                                               ((IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant)
                                                                 ? 
                                                                ((0U 
                                                                  == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__width))
                                                                  ? 1U
                                                                  : 
                                                                 ((1U 
                                                                   == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__width))
                                                                   ? 3U
                                                                   : 
                                                                  ((2U 
                                                                    == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__width))
                                                                    ? 0xfU
                                                                    : 0U)))
                                                                 : 0U), vlSelf->__Vfunc_vaddr_read__4__Vfuncout);
        vlSelf->top__DOT__ram__DOT__awrite_rdata = vlSelf->__Vfunc_vaddr_read__4__Vfuncout;
    } else {
        vlSelf->top__DOT__ram__DOT__awrite_rdata = 0U;
    }
    vlSelf->top__DOT__core__DOT__MEM__DOT__memAddr 
        = ((0U != (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__width)) 
           & ((1U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__width))
               ? vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_reg_data
               : ((2U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__width)) 
                  & (0U != (3U & vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_reg_data)))));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__isOpr2Neg 
        = (((1U != (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
            & ((2U == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
               | ((3U != (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
                  & (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT___T_41)))) 
           & (vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr2 
              >> 0x1fU));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__lhsSigned 
        = ((1U != (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
           & ((2U == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
              | ((3U == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_mduOp)) 
                 | (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT___T_41))));
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
    vlSelf->top__DOT__xbar__DOT__selectedWriteSlave 
        = ((IData)(vlSelf->top__DOT__xbar__DOT___T_9)
            ? 0U : ((IData)(vlSelf->top__DOT__xbar__DOT___T_12)
                     ? 1U : 2U));
    vlSelf->top__DOT__xbar__DOT____VdfgTmp_hca0e4086__0 
        = ((~ (IData)(vlSelf->top__DOT__xbar__DOT___T_9)) 
           & (IData)(vlSelf->top__DOT__xbar__DOT___T_12));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu_io_valid 
        = (1U & ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__mulEn) 
                 | ((~ (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_en)) 
                    | (2U == (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__state)))));
    vlSelf->top__DOT__xbar__DOT__selectedReadSlave 
        = ((IData)(vlSelf->top__DOT__xbar__DOT___T_2)
            ? 0U : ((IData)(vlSelf->top__DOT__xbar__DOT___T_5)
                     ? 1U : 2U));
    vlSelf->top__DOT__xbar__DOT____VdfgTmp_h777f794a__0 
        = ((~ (IData)(vlSelf->top__DOT__xbar__DOT___T_2)) 
           & (IData)(vlSelf->top__DOT__xbar__DOT___T_5));
    vlSelf->top__DOT__core__DOT__ID__DOT___T_292 = 
        ((0x5013U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
         | ((0x40005033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
            | ((0x40005013U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
               | ((0x63U != (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                  & ((0x1063U != (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                     & ((0x4063U != (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                        & ((0x5063U != (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                           & ((0x6063U != (0x707fU 
                                           & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                              & ((0x7063U != (0x707fU 
                                              & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                 & ((0x6fU == (0x7fU 
                                               & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                    | ((0x67U == (0x707fU 
                                                  & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                       | ((3U == (0x707fU 
                                                  & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                          | ((0x1003U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                             | ((0x2003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                | ((0x4003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                   | ((0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                      | ((0x23U 
                                                          != 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                         & (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_275))))))))))))))))));
    if ((0x67U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_456 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_572 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_746 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_340 = 7U;
    } else if ((3U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_456 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_572 = 1U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_746 = 8U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_340 = 1U;
    } else if ((0x1003U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_456 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_572 = 2U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_746 = 8U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_340 = 1U;
    } else if ((0x2003U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_456 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_572 = 3U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_746 = 8U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_340 = 1U;
    } else if ((0x4003U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_456 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_572 = 4U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_746 = 8U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_340 = 1U;
    } else if ((0x5003U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_456 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_572 = 5U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_746 = 8U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_340 = 1U;
    } else if ((0x23U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_456 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_572 = 6U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_746 = 8U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_340 = 1U;
    } else if ((0x1023U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_456 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_572 = 7U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_746 = 8U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_340 = 1U;
    } else if ((0x2023U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_456 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_572 = 8U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_746 = 8U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_340 = 1U;
    } else if ((0xfU == (0xf00fffffU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_456 = 3U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_572 = 9U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_746 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_340 = 0U;
    } else if ((0x100fU == vlSelf->top__DOT__core__DOT__ID__DOT__inst)) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_456 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_572 = 0xaU;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_746 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_340 = 0U;
    } else if ((0x1073U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_456 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_572 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_746 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_340 = 0U;
    } else if ((0x2073U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_456 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_572 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_746 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_340 = 0U;
    } else if ((0x3073U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_456 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_572 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_746 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_340 = 0U;
    } else if ((0x5073U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_456 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_572 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_746 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_340 = 0U;
    } else {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_456 
            = vlSelf->top__DOT__core__DOT__ID__DOT___T_441;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_572 
            = vlSelf->top__DOT__core__DOT__ID__DOT___T_557;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_746 
            = vlSelf->top__DOT__core__DOT__ID__DOT___T_731;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_340 
            = vlSelf->top__DOT__core__DOT__ID__DOT___T_325;
    }
    if ((0x4063U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_693 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_403 = 0U;
    } else if ((0x5063U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_693 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_403 = 0U;
    } else if ((0x6063U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_693 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_403 = 0U;
    } else if ((0x7063U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_693 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_403 = 0U;
    } else if ((0x6fU == (0x7fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_693 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_403 = 8U;
    } else if ((0x67U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_693 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_403 = 8U;
    } else if ((3U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_693 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_403 = 3U;
    } else if ((0x1003U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_693 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_403 = 3U;
    } else if ((0x2003U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_693 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_403 = 3U;
    } else if ((0x4003U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_693 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_403 = 3U;
    } else if ((0x5003U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_693 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_403 = 3U;
    } else if ((0x23U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_693 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_403 = 4U;
    } else if ((0x1023U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_693 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_403 = 4U;
    } else if ((0x2023U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_693 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_403 = 4U;
    } else if ((0xfU == (0xf00fffffU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_693 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_403 = 3U;
    } else {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_693 
            = vlSelf->top__DOT__core__DOT__ID__DOT___T_678;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_403 
            = vlSelf->top__DOT__core__DOT__ID__DOT___T_388;
    }
    vlSelf->top__DOT__core__DOT__ID__DOT___T_643 = 
        ((0x1033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
          ? 0U : ((0x1013U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                   ? 0U : ((0x5033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                            ? 0U : ((0x5013U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                     ? 0U : ((0x40005033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                              ? 0U : 
                                             ((0x40005013U 
                                               == (0xfe00707fU 
                                                   & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                               ? 0U
                                               : ((0x63U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                   ? 0U
                                                   : 
                                                  ((0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x4063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x5063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x6063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x7063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                         ? 0U
                                                         : 
                                                        ((0x67U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                          ? 0U
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                                                           ? 0U
                                                           : (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_628))))))))))))))));
    vlSelf->top__DOT__core__DOT__ID__DOT___T_228 = 
        ((0x5063U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
         | ((0x6063U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
            | ((0x7063U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
               | ((0x6fU != (0x7fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                  & ((0x67U != (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                     & ((3U != (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                        & ((0x1003U != (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                           & ((0x2003U != (0x707fU 
                                           & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                              & ((0x4003U != (0x707fU 
                                              & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                 & ((0x5003U != (0x707fU 
                                                 & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                    & ((0x23U == (0x707fU 
                                                  & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                       | ((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                          | ((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                             | ((0xfU 
                                                 != 
                                                 (0xf00fffffU 
                                                  & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                & ((0x100fU 
                                                    != vlSelf->top__DOT__core__DOT__ID__DOT__inst) 
                                                   & ((0x1073U 
                                                       != 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                      & ((0x2073U 
                                                          != 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                         & ((0x3073U 
                                                             != 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                            & (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_152)))))))))))))))))));
    vlSelf->top__DOT__core__DOT__ID__DOT___T_170 = 
        ((0x5063U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
         | ((0x6063U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
            | ((0x7063U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
               | ((0x6fU != (0x7fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                  & ((0x67U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                     | ((3U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                        | ((0x1003U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                           | ((0x2003U == (0x707fU 
                                           & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                              | ((0x4003U == (0x707fU 
                                              & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                 | ((0x5003U == (0x707fU 
                                                 & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                    | ((0x23U == (0x707fU 
                                                  & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                       | ((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                          | ((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                             | ((0xfU 
                                                 != 
                                                 (0xf00fffffU 
                                                  & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                & ((0x100fU 
                                                    != vlSelf->top__DOT__core__DOT__ID__DOT__inst) 
                                                   & ((0x1073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                      | ((0x2073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                         | ((0x3073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                            | (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_152)))))))))))))))))));
    vlSelf->top__DOT__core__DOT__MEM_io_except_excValue 
        = ((5U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excType))
            ? vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_inst
            : ((IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__memAddr)
                ? vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_reg_data
                : vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_excValue));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divisor 
        = ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__isOpr2Neg)
            ? (- vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr2)
            : vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr2);
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__isOpr1Neg 
        = ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__lhsSigned) 
           & (vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr1 
              >> 0x1fU));
    vlSelf->top__DOT__core__DOT__csr__DOT__flagIntS 
        = (vlSelf->top__DOT__core__DOT__csr__DOT___T_92 
           & vlSelf->top__DOT__core__DOT__csr__DOT___T_82);
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
    vlSelf->io_romaddrvalid = ((1U == (IData)(vlSelf->top__DOT__xbar__DOT__selectedWriteSlave)) 
                               & (IData)(vlSelf->io_ifaddrvalid));
    vlSelf->io_romdatavalid = ((1U == (IData)(vlSelf->top__DOT__xbar__DOT__selectedWriteSlave)) 
                               & (IData)(vlSelf->io_ifdatavalid));
    vlSelf->top__DOT__ram__DOT__bHandshake = ((4U == (IData)(vlSelf->top__DOT__ram__DOT__state)) 
                                              & ((1U 
                                                  == (IData)(vlSelf->top__DOT__xbar__DOT__selectedWriteSlave)) 
                                                 & ((IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant) 
                                                    & (3U 
                                                       == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state)))));
    vlSelf->io_ifaddrready = ((IData)(vlSelf->top__DOT__xbar__DOT____VdfgTmp_hca0e4086__0) 
                              & (IData)(vlSelf->io_romaddrready));
    vlSelf->io_ifdataready = ((IData)(vlSelf->top__DOT__xbar__DOT____VdfgTmp_hca0e4086__0) 
                              & (IData)(vlSelf->io_romdataready));
    vlSelf->top__DOT__core__DOT__MEM__DOT__b_hs = (
                                                   ((IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant) 
                                                    & ((IData)(vlSelf->top__DOT__xbar__DOT____VdfgTmp_hca0e4086__0) 
                                                       & (4U 
                                                          == (IData)(vlSelf->top__DOT__ram__DOT__state)))) 
                                                   & (3U 
                                                      == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state)));
    vlSelf->top__DOT__rom__DOT___GEN_0 = (((0U == (IData)(vlSelf->top__DOT__xbar__DOT__selectedReadSlave)) 
                                           & (IData)(vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_arvalid)) 
                                          | (IData)(vlSelf->top__DOT__rom__DOT__state));
    vlSelf->top__DOT__rom__DOT__r_hs = (((0U == (IData)(vlSelf->top__DOT__xbar__DOT__selectedReadSlave)) 
                                         & (IData)(vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_rready)) 
                                        & (IData)(vlSelf->top__DOT__rom__DOT__state));
    vlSelf->top__DOT__ram__DOT__rHandshake = ((1U == (IData)(vlSelf->top__DOT__ram__DOT__state)) 
                                              & ((1U 
                                                  == (IData)(vlSelf->top__DOT__xbar__DOT__selectedReadSlave)) 
                                                 & (IData)(vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_rready)));
    vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_arready 
        = (1U & ((~ (IData)(vlSelf->top__DOT__xbar__DOT____VdfgTmp_h777f794a__0)) 
                 | (IData)(vlSelf->io_romaddrready)));
    if (vlSelf->top__DOT__xbar__DOT____VdfgTmp_h777f794a__0) {
        vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_rvalid 
            = (1U == (IData)(vlSelf->top__DOT__ram__DOT__state));
        vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata 
            = ((IData)(vlSelf->io_romaddrready) ? 0U
                : ((1U == (IData)(vlSelf->top__DOT__ram__DOT__state))
                    ? vlSelf->top__DOT__ram__DOT__awrite_rdata
                    : 0U));
    } else if (vlSelf->top__DOT__rom__DOT__state) {
        vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_rvalid = 1U;
        vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata 
            = ((IData)(vlSelf->top__DOT__rom__DOT__state)
                ? vlSelf->top__DOT__rom__DOT__readModule__DOT__fetched_data
                : 0U);
    } else {
        vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_rvalid = 0U;
        vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata = 0U;
    }
    if ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_471 = 6U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_587 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_761 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_355 = 1U;
    } else if ((0x3013U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_471 = 6U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_587 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_761 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_355 = 1U;
    } else if ((0x1033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_471 = 7U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_587 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_761 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_355 = 1U;
    } else if ((0x1013U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_471 = 7U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_587 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_761 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_355 = 1U;
    } else if ((0x5033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_471 = 8U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_587 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_761 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_355 = 1U;
    } else if ((0x5013U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_471 = 8U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_587 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_761 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_355 = 1U;
    } else if ((0x40005033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_471 = 9U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_587 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_761 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_355 = 1U;
    } else if ((0x40005013U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_471 = 9U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_587 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_761 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_355 = 1U;
    } else if ((0x63U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_471 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_587 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_761 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_355 = 0U;
    } else if ((0x1063U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_471 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_587 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_761 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_355 = 0U;
    } else if ((0x4063U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_471 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_587 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_761 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_355 = 0U;
    } else if ((0x5063U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_471 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_587 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_761 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_355 = 0U;
    } else if ((0x6063U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_471 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_587 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_761 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_355 = 0U;
    } else if ((0x7063U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_471 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_587 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_761 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_355 = 0U;
    } else if ((0x6fU == (0x7fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_471 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_587 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_761 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_355 = 7U;
    } else {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_471 
            = vlSelf->top__DOT__core__DOT__ID__DOT___T_456;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_587 
            = vlSelf->top__DOT__core__DOT__ID__DOT___T_572;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_761 
            = vlSelf->top__DOT__core__DOT__ID__DOT___T_746;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_355 
            = vlSelf->top__DOT__core__DOT__ID__DOT___T_340;
    }
    if ((0x6013U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_708 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_418 = 3U;
    } else if ((0x7033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_708 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_418 = 2U;
    } else if ((0x7013U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_708 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_418 = 3U;
    } else if ((0x2033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_708 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_418 = 2U;
    } else if ((0x2013U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_708 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_418 = 3U;
    } else if ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_708 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_418 = 2U;
    } else if ((0x3013U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_708 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_418 = 3U;
    } else if ((0x1033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_708 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_418 = 2U;
    } else if ((0x1013U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_708 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_418 = 6U;
    } else if ((0x5033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_708 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_418 = 2U;
    } else if ((0x5013U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_708 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_418 = 6U;
    } else if ((0x40005033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_708 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_418 = 2U;
    } else if ((0x40005013U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_708 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_418 = 6U;
    } else if ((0x63U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_708 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_418 = 0U;
    } else if ((0x1063U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_708 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_418 = 0U;
    } else {
        vlSelf->top__DOT__core__DOT__ID__DOT___T_708 
            = vlSelf->top__DOT__core__DOT__ID__DOT___T_693;
        vlSelf->top__DOT__core__DOT__ID__DOT___T_418 
            = vlSelf->top__DOT__core__DOT__ID__DOT___T_403;
    }
    if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT__branchOp = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT__csrOp = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc1 = 1U;
        vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc2 = 2U;
    } else if ((0x13U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT__branchOp = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT__csrOp = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc1 = 1U;
        vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc2 = 3U;
    } else if ((0x40000033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT__branchOp = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT__csrOp = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc1 = 1U;
        vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc2 = 2U;
    } else if ((0x37U == (0x7fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT__branchOp = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT__csrOp = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc1 = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc2 = 5U;
    } else if ((0x17U == (0x7fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT__branchOp = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT__csrOp = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc1 = 7U;
        vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc2 = 5U;
    } else if ((0x4033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT__branchOp = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT__csrOp = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc1 = 1U;
        vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc2 = 2U;
    } else if ((0x4013U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT__branchOp = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT__csrOp = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc1 = 1U;
        vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc2 = 3U;
    } else if ((0x6033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
        vlSelf->top__DOT__core__DOT__ID__DOT__branchOp = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT__csrOp = 0U;
        vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc1 = 1U;
        vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc2 = 2U;
    } else {
        if ((0x6013U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
            vlSelf->top__DOT__core__DOT__ID__DOT__branchOp = 0U;
            vlSelf->top__DOT__core__DOT__ID__DOT__csrOp = 0U;
            vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc1 = 1U;
        } else if ((0x7033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
            vlSelf->top__DOT__core__DOT__ID__DOT__branchOp = 0U;
            vlSelf->top__DOT__core__DOT__ID__DOT__csrOp = 0U;
            vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc1 = 1U;
        } else if ((0x7013U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
            vlSelf->top__DOT__core__DOT__ID__DOT__branchOp = 0U;
            vlSelf->top__DOT__core__DOT__ID__DOT__csrOp = 0U;
            vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc1 = 1U;
        } else if ((0x2033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
            vlSelf->top__DOT__core__DOT__ID__DOT__branchOp = 0U;
            vlSelf->top__DOT__core__DOT__ID__DOT__csrOp = 0U;
            vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc1 = 1U;
        } else if ((0x2013U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
            vlSelf->top__DOT__core__DOT__ID__DOT__branchOp = 0U;
            vlSelf->top__DOT__core__DOT__ID__DOT__csrOp = 0U;
            vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc1 = 1U;
        } else {
            if ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))) {
                vlSelf->top__DOT__core__DOT__ID__DOT__branchOp = 0U;
                vlSelf->top__DOT__core__DOT__ID__DOT__csrOp = 0U;
            } else {
                vlSelf->top__DOT__core__DOT__ID__DOT__branchOp 
                    = vlSelf->top__DOT__core__DOT__ID__DOT___T_528;
                vlSelf->top__DOT__core__DOT__ID__DOT__csrOp 
                    = ((0x3013U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst))
                        ? 0U : (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_643));
            }
            vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc1 
                = vlSelf->top__DOT__core__DOT__ID__DOT___T_355;
        }
        vlSelf->top__DOT__core__DOT__ID__DOT__aluSrc2 
            = vlSelf->top__DOT__core__DOT__ID__DOT___T_418;
    }
    vlSelf->top__DOT__core__DOT__ID__DOT___T_245 = 
        ((0x6033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
         | ((0x6013U != (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
            & ((0x7033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
               | ((0x7013U != (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                  & ((0x2033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                     | ((0x2013U != (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                        & ((0x3033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                           | ((0x3013U != (0x707fU 
                                           & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                              & ((0x1033U == (0xfe00707fU 
                                              & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                 | ((0x1013U != (0xfe00707fU 
                                                 & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                    & ((0x5033U == 
                                        (0xfe00707fU 
                                         & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                       | ((0x5013U 
                                           != (0xfe00707fU 
                                               & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                          & ((0x40005033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                             | ((0x40005013U 
                                                 != 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                & ((0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                   | ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                      | ((0x4063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                         | (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_228))))))))))))))))));
    vlSelf->top__DOT__core__DOT__ID__DOT___T_187 = 
        ((0x6033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
         | ((0x6013U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
            | ((0x7033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
               | ((0x7013U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                  | ((0x2033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                     | ((0x2013U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                        | ((0x3033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                           | ((0x3013U == (0x707fU 
                                           & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                              | ((0x1033U == (0xfe00707fU 
                                              & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                 | ((0x1013U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                    | ((0x5033U == 
                                        (0xfe00707fU 
                                         & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                       | ((0x5013U 
                                           == (0xfe00707fU 
                                               & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                          | ((0x40005033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                             | ((0x40005013U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                | ((0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                   | ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                      | ((0x4063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                         | (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_170))))))))))))))))));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__isAnsNeg 
        = ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__isOpr1Neg) 
           ^ (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__isOpr2Neg));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divident 
        = ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__isOpr1Neg)
            ? (- vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr1)
            : vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_opr1);
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
    vlSelf->top__DOT__core__DOT__MEM__DOT__aw_hs = 
        ((1U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state)) 
         & ((IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant) 
            & (IData)(vlSelf->io_ifaddrready)));
    vlSelf->top__DOT__core__DOT__MEM__DOT__w_hs = (
                                                   (2U 
                                                    == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state)) 
                                                   & ((IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant) 
                                                      & (IData)(vlSelf->io_ifdataready)));
    vlSelf->top__DOT__core__DOT__fetch__DOT__ar_hs 
        = ((1U == (IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__state)) 
           & ((~ (IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant)) 
              & (IData)(vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_arready)));
    vlSelf->top__DOT__core__DOT__MEM__DOT__ar_hs = 
        ((4U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state)) 
         & ((IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant) 
            & (IData)(vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_arready)));
    vlSelf->top__DOT__core__DOT__MEM__DOT__r_hs = (
                                                   ((IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant) 
                                                    & (IData)(vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_rvalid)) 
                                                   & (5U 
                                                      == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__state)));
    vlSelf->top__DOT__core__DOT__fetch__DOT__r_hs = 
        (((~ (IData)(vlSelf->top__DOT__core__DOT__arbiter__DOT__grant)) 
          & (IData)(vlSelf->top__DOT__core__DOT__arbiter_io_selectedMaster_master_rvalid)) 
         & (2U == (IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__state)));
    vlSelf->top__DOT__core__DOT__MEM_io_mem_o_reg_data 
        = ((IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__ren)
            ? (((1U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                | (2U == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_lsuOp)))
                ? ((0U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__width))
                    ? ((((0x80U & vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata)
                          ? 0xffffffU : 0U) << 8U) 
                       | (0xffU & vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata))
                    : ((1U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__width))
                        ? ((((0x8000U & vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata)
                              ? 0xffffU : 0U) << 0x10U) 
                           | (0xffffU & vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata))
                        : ((2U == (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__width))
                            ? vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata
                            : 0U))) : vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata)
            : vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_reg_data);
    vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp 
        = ((3U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrOp))
            ? ((0U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rd))
                ? 2U : 3U) : ((4U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrOp))
                               ? ((0U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                   ? 1U : 4U) : ((5U 
                                                  == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrOp))
                                                  ? 
                                                 ((0U 
                                                   == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__rs1))
                                                   ? 1U
                                                   : 5U)
                                                  : 0U)));
    vlSelf->top__DOT__core__DOT__ID_io_read2_en = (
                                                   (0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                   | ((0x13U 
                                                       != 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                      & ((0x40000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                         | ((0x37U 
                                                             != 
                                                             (0x7fU 
                                                              & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                            & ((0x17U 
                                                                != 
                                                                (0x7fU 
                                                                 & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                               & ((0x4033U 
                                                                   == 
                                                                   (0xfe00707fU 
                                                                    & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                                  | ((0x4013U 
                                                                      != 
                                                                      (0x707fU 
                                                                       & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                                                                     & (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_245))))))));
    vlSelf->top__DOT__core__DOT__ID__DOT__regEn1 = 
        ((0x33U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
         | ((0x13U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
            | ((0x40000033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
               | ((0x37U != (0x7fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                  & ((0x17U != (0x7fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                     & ((0x4033U == (0xfe00707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                        | ((0x4013U == (0x707fU & vlSelf->top__DOT__core__DOT__ID__DOT__inst)) 
                           | (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_187))))))));
    vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__startFlag 
        = ((vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__lastDivident 
            != vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divident) 
           | (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__lastDivisor 
              != vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divisor));
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
    vlSelf->top__DOT__core__DOT__MEM_WB__DOT___T_2 
        = ((~ ((IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__b_hs) 
               | (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__r_hs))) 
           & (((IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__ren) 
               | (IData)(vlSelf->top__DOT__core__DOT__MEM__DOT__wen)) 
              | (IData)(vlSelf->top__DOT__core__DOT__resoler__DOT___T_35)));
    if (vlSelf->top__DOT__core__DOT__fetch__DOT__r_hs) {
        vlSelf->io_inst = vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata;
        vlSelf->top__DOT__core__DOT__fetch__DOT__bpu__DOT__opcode 
            = (0x7fU & vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata);
        vlSelf->top__DOT__core__DOT__fetch__DOT__bpu_io_inst_valid_i 
            = (2U == (IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__state));
        vlSelf->top__DOT__core__DOT__fetch__DOT__bpu__DOT____VdfgTmp_hfc59af28__0 
            = (vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata 
               >> 0x1fU);
    } else {
        vlSelf->io_inst = 0x13U;
        vlSelf->top__DOT__core__DOT__fetch__DOT__bpu__DOT__opcode = 0x13U;
        vlSelf->top__DOT__core__DOT__fetch__DOT__bpu_io_inst_valid_i = 0U;
        vlSelf->top__DOT__core__DOT__fetch__DOT__bpu__DOT____VdfgTmp_hfc59af28__0 = 0U;
    }
    vlSelf->top__DOT__core__DOT__ID__DOT___T_840 = 
        ((0U != (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp))
          ? (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__immI)
          : 0U);
    vlSelf->top__DOT__core__DOT__resoler_io_loadflag 
        = (((IData)(vlSelf->top__DOT__core__DOT__ID__DOT__regEn1) 
            & ((IData)(vlSelf->top__DOT__core__DOT__EX_io_ex_o_load) 
               & (IData)(vlSelf->top__DOT__core__DOT__resoler__DOT___T_2))) 
           | ((IData)(vlSelf->top__DOT__core__DOT__ID_io_read2_en) 
              & ((IData)(vlSelf->top__DOT__core__DOT__EX_io_ex_o_load) 
                 & (IData)(vlSelf->top__DOT__core__DOT__resoler__DOT___T_10))));
    if (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_en) {
        if (vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__startFlag) {
            if ((0U == vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divisor)) {
                vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_16[0U] 
                    = vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[0U];
                vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_16[1U] 
                    = vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[1U];
                vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_16[2U] 
                    = vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U];
            } else {
                vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_16[0U] 
                    = ((IData)((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divident))) 
                       << 1U);
                vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_16[1U] 
                    = (((IData)((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divident))) 
                        >> 0x1fU) | ((IData)(((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divident)) 
                                              >> 0x20U)) 
                                     << 1U));
                vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_16[2U] 
                    = ((IData)(((QData)((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_divident)) 
                                >> 0x20U)) >> 0x1fU);
            }
        } else {
            vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_16[0U] 
                = vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[0U];
            vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_16[1U] 
                = vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[1U];
            vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_16[2U] 
                = vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U];
        }
    } else {
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_16[0U] 
            = vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[0U];
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_16[1U] 
            = vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[1U];
        vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT___GEN_16[2U] 
            = vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U];
    }
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
    vlSelf->io_bputake = ((IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__bpu_io_inst_valid_i) 
                          & (((0x63U == (IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__bpu__DOT__opcode)) 
                              & (IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__bpu__DOT____VdfgTmp_hfc59af28__0)) 
                             | (0x6fU == (IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__bpu__DOT__opcode))));
    vlSelf->io_bpuaddr = (vlSelf->top__DOT__core__DOT__fetch__DOT__pc 
                          + ((0x63U == (IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__bpu__DOT__opcode))
                              ? ((((IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__bpu__DOT____VdfgTmp_hfc59af28__0)
                                    ? 0xfffffU : 0U) 
                                  << 0xcU) | ((0xfffff800U 
                                               & (((IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__r_hs) 
                                                   << 0xbU) 
                                                  & (vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata 
                                                     << 4U))) 
                                              | ((((IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__r_hs)
                                                    ? 
                                                   (0x3fU 
                                                    & (vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata 
                                                       >> 0x19U))
                                                    : 0U) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__r_hs)
                                                      ? 
                                                     (0xfU 
                                                      & (vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata 
                                                         >> 8U))
                                                      : 0U) 
                                                    << 1U))))
                              : ((0x6fU == (IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__bpu__DOT__opcode))
                                  ? ((((IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__bpu__DOT____VdfgTmp_hfc59af28__0)
                                        ? 0xfffU : 0U) 
                                      << 0x14U) | (
                                                   (((IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__r_hs)
                                                      ? 
                                                     (0xffU 
                                                      & (vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata 
                                                         >> 0xcU))
                                                      : 0U) 
                                                    << 0xcU) 
                                                   | ((0x7ff800U 
                                                       & (((IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__r_hs) 
                                                           << 0xbU) 
                                                          & (vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata 
                                                             >> 9U))) 
                                                      | (((IData)(vlSelf->top__DOT__core__DOT__fetch__DOT__r_hs)
                                                           ? 
                                                          (0x3ffU 
                                                           & (vlSelf->top__DOT__core__DOT__fetch_io_axi_master_rdata 
                                                              >> 0x15U))
                                                           : 0U) 
                                                         << 1U))))
                                  : 0U)));
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
    vlSelf->top__DOT__core__DOT__csr__DOT___T_267 = 
        ((0x300U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
         | ((0x301U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
            | ((0x302U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
               | ((0x303U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                  | ((0x304U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                     | ((0x305U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                        | ((0x306U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                           | ((0x340U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                              | ((0x341U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                 | ((0x342U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                    | ((0x343U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                       | ((0x344U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                          | ((0xb00U 
                                              == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                             | ((0xb02U 
                                                 == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                                | ((0xb80U 
                                                    == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                                   | ((0xb82U 
                                                       == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                                      | (0x320U 
                                                         == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840))))))))))))))))));
    vlSelf->top__DOT__core__DOT__ctrl__DOT___T = (1U 
                                                  & ((~ (IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu_io_valid)) 
                                                     | (((0U 
                                                          != (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp)) 
                                                         & (2U 
                                                            != (IData)(vlSelf->top__DOT__core__DOT__ID__DOT__csrActOp))) 
                                                        & (((((0U 
                                                               != (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_csr_op)) 
                                                              & (1U 
                                                                 != (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_csr_op))) 
                                                             & ((IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840) 
                                                                == (IData)(vlSelf->top__DOT__core__DOT__EX_MEM__DOT__ff_csr_addr))) 
                                                            | ((IData)(vlSelf->top__DOT__core__DOT__resoler__DOT___T_35) 
                                                               & ((IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840) 
                                                                  == (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT__ff_csr_addr)))) 
                                                           | (((0U 
                                                                != (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_csrOp)) 
                                                               & (1U 
                                                                  != (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_csrOp))) 
                                                              & ((IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840) 
                                                                 == (IData)(vlSelf->top__DOT__core__DOT__ID_EX__DOT__ff_csrAddr)))))));
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
    vlSelf->top__DOT__core__DOT__csr__DOT__readable 
        = ((0xc00U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
           | ((0xc02U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
              | ((0xc80U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                 | ((0xc82U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                    | ((0x100U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                       | ((0x104U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                          | ((0x105U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                             | ((0x106U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                | ((0x140U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                   | ((0x141U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                      | ((0x142U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                         | ((0x143U 
                                             == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                            | ((0x144U 
                                                == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                               | ((0x180U 
                                                   == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                                  | ((0xf11U 
                                                      == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                                     | ((0xf12U 
                                                         == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                                        | ((0xf13U 
                                                            == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                                           | ((0xf14U 
                                                               == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                                              | (IData)(vlSelf->top__DOT__core__DOT__csr__DOT___T_267)))))))))))))))))));
    vlSelf->top__DOT__core__DOT__csr__DOT__writable 
        = ((0xc00U != (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
           & ((0xc02U != (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
              & ((0xc80U != (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                 & ((0xc82U != (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                    & ((0x100U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                       | ((0x104U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                          | ((0x105U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                             | ((0x106U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                | ((0x140U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                   | ((0x141U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                      | ((0x142U == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                         | ((0x143U 
                                             == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                            | ((0x144U 
                                                == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                               | ((0x180U 
                                                   == (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                                  | ((0xf11U 
                                                      != (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                                     & ((0xf12U 
                                                         != (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                                        & ((0xf13U 
                                                            != (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                                           & ((0xf14U 
                                                               != (IData)(vlSelf->top__DOT__core__DOT__ID__DOT___T_840)) 
                                                              & (IData)(vlSelf->top__DOT__core__DOT__csr__DOT___T_267)))))))))))))))))));
    vlSelf->top__DOT__core__DOT__ID_EX_io_stallNext 
        = ((IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT___T_2) 
           | (IData)(vlSelf->top__DOT__core__DOT__ctrl__DOT___T));
    vlSelf->io_stall = ((IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT___T_2) 
                        | ((IData)(vlSelf->top__DOT__core__DOT__ctrl__DOT___T) 
                           | (IData)(vlSelf->top__DOT__core__DOT__resoler_io_loadflag)));
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
    vlSelf->top__DOT__core__DOT__csr__DOT___T_319 = 
        ((IData)(vlSelf->top__DOT__core__DOT__csr__DOT__readable) 
         & (IData)(vlSelf->top__DOT__core__DOT__csr__DOT__writable));
    vlSelf->top__DOT__core__DOT__EX_MEM__DOT___T_3 
        = ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_flush) 
           | ((~ (IData)(vlSelf->top__DOT__core__DOT__MEM_WB__DOT___T_2)) 
              & (IData)(vlSelf->top__DOT__core__DOT__ID_EX_io_stallNext)));
    vlSelf->top__DOT__core__DOT__ID_EX__DOT___T_3 = 
        ((IData)(vlSelf->top__DOT__core__DOT__EX__DOT__mdu__DOT__div_io_flush) 
         | ((~ (IData)(vlSelf->top__DOT__core__DOT__ID_EX_io_stallNext)) 
            & (IData)(vlSelf->io_stall)));
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

void Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5__0(Vtop_CarrySaveAdder* vlSelf);
void Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder__0(Vtop_CarrySaveAdder* vlSelf);
void Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1__0(Vtop_CarrySaveAdder* vlSelf);
void Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2__0(Vtop_CarrySaveAdder* vlSelf);
void Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3__0(Vtop_CarrySaveAdder* vlSelf);
void Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4__0(Vtop_CarrySaveAdder* vlSelf);
void Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8__0(Vtop_CarrySaveAdder* vlSelf);
void Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6__0(Vtop_CarrySaveAdder* vlSelf);
void Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9__0(Vtop_CarrySaveAdder* vlSelf);
void Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7__0(Vtop_CarrySaveAdder* vlSelf);
void Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12__0(Vtop_CarrySaveAdder* vlSelf);
void Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11__0(Vtop_CarrySaveAdder* vlSelf);
void Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10__0(Vtop_CarrySaveAdder* vlSelf);
void Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13__0(Vtop_CarrySaveAdder* vlSelf);
void Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14__0(Vtop_CarrySaveAdder* vlSelf);
void Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15__0(Vtop_CarrySaveAdder* vlSelf);
void Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16__0(Vtop_CarrySaveAdder* vlSelf);
void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf);

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
        Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5__0((&vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5));
        Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder__0((&vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder));
        Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1__0((&vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1));
        Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2__0((&vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2));
        Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3__0((&vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3));
        Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4__0((&vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4));
        Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8__0((&vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8));
        Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6__0((&vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6));
        Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9__0((&vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9));
        Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7__0((&vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7));
        Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12__0((&vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12));
        Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11__0((&vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11));
        Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10__0((&vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10));
        Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13__0((&vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13));
        Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14__0((&vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14));
        Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15__0((&vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15));
        Vtop_CarrySaveAdder___ico_sequent__TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16__0((&vlSymsp->TOP__top__DOT__core__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16));
        Vtop___024root___ico_sequent__TOP__1(vlSelf);
    }
}
