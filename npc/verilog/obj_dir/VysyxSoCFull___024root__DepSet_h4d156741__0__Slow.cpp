// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__stl(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VysyxSoCFull___024root___eval_triggers__stl(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VysyxSoCFull___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void VysyxSoCFull___024unit____Vdpiimwrap_set_gpr_ptr_TOP____024unit(IData/*31:0*/ dut_x0, IData/*31:0*/ dut_x1, IData/*31:0*/ dut_x2, IData/*31:0*/ dut_x3, IData/*31:0*/ dut_x4, IData/*31:0*/ dut_x5, IData/*31:0*/ dut_x6, IData/*31:0*/ dut_x7, IData/*31:0*/ dut_x8, IData/*31:0*/ dut_x9, IData/*31:0*/ dut_x10, IData/*31:0*/ dut_x11, IData/*31:0*/ dut_x12, IData/*31:0*/ dut_x13, IData/*31:0*/ dut_x14, IData/*31:0*/ dut_x15, IData/*31:0*/ dut_x16, IData/*31:0*/ dut_x17, IData/*31:0*/ dut_x18, IData/*31:0*/ dut_x19, IData/*31:0*/ dut_x20, IData/*31:0*/ dut_x21, IData/*31:0*/ dut_x22, IData/*31:0*/ dut_x23, IData/*31:0*/ dut_x24, IData/*31:0*/ dut_x25, IData/*31:0*/ dut_x26, IData/*31:0*/ dut_x27, IData/*31:0*/ dut_x28, IData/*31:0*/ dut_x29, IData/*31:0*/ dut_x30, IData/*31:0*/ dut_x31, IData/*31:0*/ inst, IData/*31:0*/ pc, IData/*31:0*/ npc, IData/*31:0*/ flushpc, IData/*31:0*/ flush, IData/*31:0*/ stall, IData/*31:0*/ wbinst, IData/*31:0*/ bputake, IData/*31:0*/ bpuaddr, IData/*31:0*/ idpc, IData/*31:0*/ idinst, IData/*31:0*/ expc, IData/*31:0*/ exinst, IData/*31:0*/ mempc, IData/*31:0*/ meminst, IData/*31:0*/ result, IData/*31:0*/ waddr, IData/*31:0*/ state);
void VysyxSoCFull___024unit____Vdpiimwrap_get_diff_commit_TOP____024unit(CData/*0:0*/ commit);

VL_ATTR_COLD void VysyxSoCFull___024root___stl_sequent__TOP__1(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___stl_sequent__TOP__1\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul_io_result 
        = ((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16.__PVT___T_316)) 
             << 0x21U) | ((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16.__PVT___T_285)) 
                          << 1U)) + (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16.__PVT___T_253)) 
                                      << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16.__PVT___T_222))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mulOut 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__isAnsNeg)
            ? (- vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul_io_result)
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul_io_result);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__result 
        = (0x7fffffffffffffffULL & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_csren)
                                     ? (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_csrrData))
                                     : ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_mduOp))
                                         ? (QData)((IData)(
                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu_io_valid)
                                                             ? (IData)(
                                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mulEn)
                                                                         ? (QData)((IData)(
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__hiRem)
                                                                                 ? (IData)(
                                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mulOut 
                                                                                >> 0x20U))
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mulOut))))
                                                                         : 
                                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div_io_en)
                                                                          ? 
                                                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__hiRem)
                                                                           ? (QData)((IData)(
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__isDiv0)
                                                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr1
                                                                                 : 
                                                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__lhsSigned) 
                                                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr1 
                                                                                >> 0x1fU) 
                                                                                ^ 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U]))
                                                                                 ? 
                                                                                (- 
                                                                                ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[1U] 
                                                                                >> 1U)))
                                                                                 : 
                                                                                ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[1U] 
                                                                                >> 1U))))))
                                                                           : 
                                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__isDiv0)
                                                                            ? 0xffffffffULL
                                                                            : (QData)((IData)(
                                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__isAnsNeg)
                                                                                 ? 
                                                                                (- 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[0U])
                                                                                 : 
                                                                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[0U])))))
                                                                          : 0ULL)))
                                                             : 0U)))
                                         : ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_aluOp))
                                             ? (QData)((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr1 
                                                                + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr2)))
                                             : ((1U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_aluOp))
                                                 ? (QData)((IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr1 
                                                                    - vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr2)))
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_aluOp))
                                                  ? (QData)((IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr1 
                                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr2)))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_aluOp))
                                                   ? (QData)((IData)(
                                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr1 
                                                                      | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr2)))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_aluOp))
                                                    ? (QData)((IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr1 
                                                                       ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr2)))
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_aluOp))
                                                     ? 
                                                    ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr1)) 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr2))
                                                     : (QData)((IData)(
                                                                       ((9U 
                                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_aluOp))
                                                                         ? 
                                                                        VL_SHIFTRS_III(32,32,5, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr1, 
                                                                                (0x1fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr2))
                                                                         : 
                                                                        ((8U 
                                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_aluOp))
                                                                          ? 
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr1 
                                                                          >> 
                                                                          (0x1fU 
                                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr2))
                                                                          : 
                                                                         ((5U 
                                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_aluOp))
                                                                           ? 
                                                                          VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr2)
                                                                           : 
                                                                          ((6U 
                                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_aluOp)) 
                                                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr1 
                                                                              < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr2))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_read2_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_read2_en) 
            & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs2)))
            ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_regWen) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__resoler__DOT___T_10))
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__result)
                : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_reg_en) 
                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs2) 
                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_reg_addr)))
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_mem_o_reg_data
                    : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_WB__DOT__ff_reg_en) 
                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs2) 
                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_WB__DOT__ff_reg_addr)))
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_WB__DOT__ff_reg_data
                        : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_read2_en)
                            ? ((0x1fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs2))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_31
                                : ((0x1eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs2))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_30
                                    : ((0x1dU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs2))
                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_29
                                        : ((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs2))
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_28
                                            : ((0x1bU 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs2))
                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_27
                                                : (
                                                   (0x1aU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs2))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_26
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs2))
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_25
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs2))
                                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_24
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs2))
                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_23
                                                       : 
                                                      ((0x16U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs2))
                                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_22
                                                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT___GEN_53))))))))))
                            : 0U)))) : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_read1_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__regEn1) 
            & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs1)))
            ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_regWen) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__resoler__DOT___T_2))
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__result)
                : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_reg_en) 
                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs1) 
                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_reg_addr)))
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_mem_o_reg_data
                    : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_WB__DOT__ff_reg_en) 
                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs1) 
                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_WB__DOT__ff_reg_addr)))
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_WB__DOT__ff_reg_data
                        : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__regEn1)
                            ? ((0x1fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs1))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_31
                                : ((0x1eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs1))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_30
                                    : ((0x1dU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs1))
                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_29
                                        : ((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs1))
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_28
                                            : ((0x1bU 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs1))
                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_27
                                                : (
                                                   (0x1aU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs1))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_26
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs1))
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_25
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs1))
                                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_24
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs1))
                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_23
                                                       : 
                                                      ((0x16U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs1))
                                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_22
                                                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT___GEN_21))))))))))
                            : 0U)))) : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__branchteke 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__branchOp)) 
           | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__branchOp))
               ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_read1_data 
                  == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_read2_data)
               : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__branchOp))
                   ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_read1_data 
                      != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_read2_data)
                   : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__branchOp))
                       ? VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_read1_data, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_read2_data)
                       : ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__branchOp))
                           ? VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_read1_data, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_read2_data)
                           : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__branchOp))
                               ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_read1_data 
                                  < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_read2_data)
                               : ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__branchOp)) 
                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_read1_data 
                                     >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_read2_data))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_790 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__branchOp))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__regEn1)
                ? (0xfffffffeU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_read1_data 
                                  + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___GEN_1))
                : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_pc 
                   + (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hc515ad56__0))) 
                       << 0x15U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hc515ad56__0) 
                                     << 0x14U) | ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_valid)
                                                     ? 
                                                    (0xffU 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_inst 
                                                        >> 0xcU))
                                                     : 0U) 
                                                   << 0xcU) 
                                                  | ((0x7ff800U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_valid) 
                                                          << 0xbU) 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_inst 
                                                            >> 9U))) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_valid)
                                                          ? 
                                                         (0x3ffU 
                                                          & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_inst 
                                                             >> 0x15U))
                                                          : 0U) 
                                                        << 1U)))))))
            : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_pc 
               + (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hc515ad56__0))) 
                   << 0xdU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hc515ad56__0) 
                                << 0xcU) | ((0xfffff800U 
                                             & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_valid) 
                                                 << 0xbU) 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_inst 
                                                   << 4U))) 
                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_valid)
                                                  ? 
                                                 (0x3fU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_inst 
                                                     >> 0x19U))
                                                  : 0U) 
                                                << 5U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_valid)
                                                    ? 
                                                   (0xfU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_inst 
                                                       >> 8U))
                                                    : 0U) 
                                                  << 1U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__addrFault 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__branchteke) 
           & (0U != ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__branchOp))
                      ? 0U : (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_790))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__takepc 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__branchOp))
            ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_790);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT___T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div_io_flush) 
           | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_io_stall)) 
               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__addrFault))) 
              & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__branchOp)) 
                 & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_bpu_take) 
                     != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__branchteke)) 
                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_bpu_takepc 
                       != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__takepc)))));
    VysyxSoCFull___024unit____Vdpiimwrap_set_gpr_ptr_TOP____024unit(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_0, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_2, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_3, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_4, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_5, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_6, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_7, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_8, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_9, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_10, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_11, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_12, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_13, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_14, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_15, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_16, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_17, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_18, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_19, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_20, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_21, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_22, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_23, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_24, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_25, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_26, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_27, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_28, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_29, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_30, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_31, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_io_axi_master_rdata, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_WB__DOT__ff_currentPc, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch__DOT__pc, 
                                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div_io_flush)
                                                                      ? 
                                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT___T_605)
                                                                       ? 
                                                                      ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__stvec_base 
                                                                        + 
                                                                        (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__stvec_mode) 
                                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__hasInt))
                                                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__cause
                                                                          : 0U)) 
                                                                       << 2U)
                                                                       : 
                                                                      ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mtvec_base 
                                                                        + 
                                                                        (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mtvec_mode) 
                                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__hasInt))
                                                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__cause
                                                                          : 0U)) 
                                                                       << 2U))
                                                                      : 
                                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__branchteke)
                                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__takepc
                                                                       : 
                                                                      ((IData)(4U) 
                                                                       + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_pc))), 
                                                                    (1U 
                                                                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full))), 
                                                                    (1U 
                                                                     & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__grant)) 
                                                                        & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))), vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_WB__DOT__ff_inst, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__grant), vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch__DOT__bpu_io_prdt_addr_o, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_pc, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_inst, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_currentPc, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_inst, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_currentPc, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_inst, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_WB__DOT__ff_reg_data, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_WB__DOT__ff_reg_addr), vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch__DOT__state);
    VysyxSoCFull___024unit____Vdpiimwrap_get_diff_commit_TOP____024unit(0U);
}

VL_ATTR_COLD void VysyxSoCFull___024root___stl_sequent__TOP__0(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5__0(VysyxSoCFull_CarrySaveAdder* vlSelf);
void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder__0(VysyxSoCFull_CarrySaveAdder* vlSelf);
void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1__0(VysyxSoCFull_CarrySaveAdder* vlSelf);
void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2__0(VysyxSoCFull_CarrySaveAdder* vlSelf);
void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3__0(VysyxSoCFull_CarrySaveAdder* vlSelf);
void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4__0(VysyxSoCFull_CarrySaveAdder* vlSelf);
void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8__0(VysyxSoCFull_CarrySaveAdder* vlSelf);
void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6__0(VysyxSoCFull_CarrySaveAdder* vlSelf);
void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9__0(VysyxSoCFull_CarrySaveAdder* vlSelf);
void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7__0(VysyxSoCFull_CarrySaveAdder* vlSelf);
void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12__0(VysyxSoCFull_CarrySaveAdder* vlSelf);
void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11__0(VysyxSoCFull_CarrySaveAdder* vlSelf);
void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10__0(VysyxSoCFull_CarrySaveAdder* vlSelf);
void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13__0(VysyxSoCFull_CarrySaveAdder* vlSelf);
void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14__0(VysyxSoCFull_CarrySaveAdder* vlSelf);
void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15__0(VysyxSoCFull_CarrySaveAdder* vlSelf);
void VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16__0(VysyxSoCFull_CarrySaveAdder* vlSelf);

VL_ATTR_COLD void VysyxSoCFull___024root___eval_stl(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VysyxSoCFull___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5));
        VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder));
        VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1));
        VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2));
        VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3));
        VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4));
        VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8));
        VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6));
        VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9));
        VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7));
        VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12));
        VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11));
        VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10));
        VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13));
        VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14));
        VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15));
        VysyxSoCFull_CarrySaveAdder___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16));
        VysyxSoCFull___024root___stl_sequent__TOP__1(vlSelf);
    }
}
