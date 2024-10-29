// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+230,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+232,"io_timer",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+233,"io_soft",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+234,"io_extern",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+235,"io_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+236,"io_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+237,"io_npc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+238,"io_next",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+239,"io_flushpc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+240,"io_flush",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"io_stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+242,"io_wbinst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+243,"io_bputake",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+244,"io_bpuaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+245,"io_idpc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+246,"io_idinst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+247,"io_expc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+248,"io_exinst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+249,"io_mempc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+250,"io_meminst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+251,"io_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("Core ");
    tracep->declBit(c+230,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+232,"io_timer",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+233,"io_soft",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+234,"io_extern",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+235,"io_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+236,"io_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+237,"io_npc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+238,"io_next",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+239,"io_flushpc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+240,"io_flush",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"io_stall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+242,"io_wbinst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+243,"io_bputake",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+244,"io_bpuaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+245,"io_idpc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+246,"io_idinst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+247,"io_expc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+248,"io_exinst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+249,"io_mempc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+250,"io_meminst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+251,"io_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+230,"fetch_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"fetch_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"fetch_io_flush",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+239,"fetch_io_flush_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+241,"fetch_io_stall",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+237,"fetch_io_IF_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+235,"fetch_io_IF_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+243,"fetch_io_IF_bpu_take",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+244,"fetch_io_IF_bpu_takepc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+24,"fetch_io_IF_misaligned",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+243,"fetch_io_prdt_taken_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+244,"fetch_io_prdt_addr_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+230,"IF_ID_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"IF_ID_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"IF_ID_io_flush",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"IF_ID_io_stallPrev",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"IF_ID_io_stallNext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+237,"IF_ID_io_prev_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+235,"IF_ID_io_prev_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+243,"IF_ID_io_prev_bpu_take",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+244,"IF_ID_io_prev_bpu_takepc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+24,"IF_ID_io_prev_misaligned",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+245,"IF_ID_io_next_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+25,"IF_ID_io_next_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+246,"IF_ID_io_next_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+26,"IF_ID_io_next_bpu_take",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+27,"IF_ID_io_next_bpu_takepc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+28,"IF_ID_io_next_misaligned",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+230,"ID_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"ID_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+245,"ID_io_if_i_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+25,"ID_io_if_i_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+246,"ID_io_if_i_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+26,"ID_io_if_i_bpu_take",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+27,"ID_io_if_i_bpu_takepc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+28,"ID_io_if_i_misaligned",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"ID_io_read1_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+30,"ID_io_read1_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+31,"ID_io_read1_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+32,"ID_io_read2_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"ID_io_read2_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+34,"ID_io_read2_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+241,"ID_io_stallid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"ID_io_csrread_csr_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+35,"ID_io_csrread_csr_raddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"ID_io_csrread_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+37,"ID_io_csrread_csr_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"ID_io_flush",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+39,"ID_io_flushpc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+40,"ID_io_id_o_aluOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+41,"ID_io_id_o_opr1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"ID_io_id_o_opr2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"ID_io_id_o_lsuOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+34,"ID_io_id_o_lsuData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+44,"ID_io_id_o_regWen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+45,"ID_io_id_o_regWaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+36,"ID_io_id_o_csrOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+46,"ID_io_id_o_csrAddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+47,"ID_io_id_o_csren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"ID_io_id_o_csrrData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"ID_io_id_o_csrwData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"ID_io_id_o_excType",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+50,"ID_io_id_o_excValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+51,"ID_io_id_o_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+245,"ID_io_id_o_currentPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+230,"ID_EX_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"ID_EX_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"ID_EX_io_flush",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"ID_EX_io_stallPrev",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"ID_EX_io_stallNext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+40,"ID_EX_io_prev_aluOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+41,"ID_EX_io_prev_opr1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"ID_EX_io_prev_opr2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"ID_EX_io_prev_lsuOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+34,"ID_EX_io_prev_lsuData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+44,"ID_EX_io_prev_regWen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+45,"ID_EX_io_prev_regWaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+36,"ID_EX_io_prev_csrOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+46,"ID_EX_io_prev_csrAddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+47,"ID_EX_io_prev_csren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"ID_EX_io_prev_csrrData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"ID_EX_io_prev_csrwData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"ID_EX_io_prev_excType",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+50,"ID_EX_io_prev_excValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+51,"ID_EX_io_prev_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+245,"ID_EX_io_prev_currentPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+53,"ID_EX_io_next_aluOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+54,"ID_EX_io_next_opr1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+55,"ID_EX_io_next_opr2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+56,"ID_EX_io_next_lsuOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+57,"ID_EX_io_next_lsuData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+58,"ID_EX_io_next_regWen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+59,"ID_EX_io_next_regWaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+60,"ID_EX_io_next_csrOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+61,"ID_EX_io_next_csrAddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+62,"ID_EX_io_next_csren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+63,"ID_EX_io_next_csrrData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+64,"ID_EX_io_next_csrwData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+65,"ID_EX_io_next_excType",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+66,"ID_EX_io_next_excValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+248,"ID_EX_io_next_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+247,"ID_EX_io_next_currentPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+53,"EX_io_id_i_aluOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+54,"EX_io_id_i_opr1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+55,"EX_io_id_i_opr2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+56,"EX_io_id_i_lsuOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+57,"EX_io_id_i_lsuData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+58,"EX_io_id_i_regWen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+59,"EX_io_id_i_regWaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+60,"EX_io_id_i_csrOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+61,"EX_io_id_i_csrAddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+62,"EX_io_id_i_csren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+63,"EX_io_id_i_csrrData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+64,"EX_io_id_i_csrwData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+65,"EX_io_id_i_excType",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+66,"EX_io_id_i_excValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+248,"EX_io_id_i_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+247,"EX_io_id_i_currentPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+56,"EX_io_ex_o_lsuOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+57,"EX_io_ex_o_lsuData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+58,"EX_io_ex_o_reg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+59,"EX_io_ex_o_reg_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+67,"EX_io_ex_o_reg_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+68,"EX_io_ex_o_load",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+60,"EX_io_ex_o_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+61,"EX_io_ex_o_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+64,"EX_io_ex_o_csr_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+69,"EX_io_ex_o_csr_retired",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+65,"EX_io_ex_o_excType",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+66,"EX_io_ex_o_excValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+248,"EX_io_ex_o_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+247,"EX_io_ex_o_currentPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+230,"EX_MEM_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"EX_MEM_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"EX_MEM_io_flush",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"EX_MEM_io_stallPrev",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"EX_MEM_io_stallNext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+56,"EX_MEM_io_prev_lsuOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+57,"EX_MEM_io_prev_lsuData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+58,"EX_MEM_io_prev_reg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+59,"EX_MEM_io_prev_reg_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+67,"EX_MEM_io_prev_reg_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+60,"EX_MEM_io_prev_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+61,"EX_MEM_io_prev_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+64,"EX_MEM_io_prev_csr_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+69,"EX_MEM_io_prev_csr_retired",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+65,"EX_MEM_io_prev_excType",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+66,"EX_MEM_io_prev_excValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+248,"EX_MEM_io_prev_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+247,"EX_MEM_io_prev_currentPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"EX_MEM_io_next_lsuOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+72,"EX_MEM_io_next_lsuData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+73,"EX_MEM_io_next_reg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+74,"EX_MEM_io_next_reg_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+75,"EX_MEM_io_next_reg_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"EX_MEM_io_next_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+77,"EX_MEM_io_next_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+78,"EX_MEM_io_next_csr_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+79,"EX_MEM_io_next_csr_retired",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+80,"EX_MEM_io_next_excType",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+81,"EX_MEM_io_next_excValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+250,"EX_MEM_io_next_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+249,"EX_MEM_io_next_currentPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+230,"MEM_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+71,"MEM_io_ex_i_lsuOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+72,"MEM_io_ex_i_lsuData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+73,"MEM_io_ex_i_reg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+74,"MEM_io_ex_i_reg_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+75,"MEM_io_ex_i_reg_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"MEM_io_ex_i_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+77,"MEM_io_ex_i_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+78,"MEM_io_ex_i_csr_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+79,"MEM_io_ex_i_csr_retired",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+80,"MEM_io_ex_i_excType",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+81,"MEM_io_ex_i_excValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+250,"MEM_io_ex_i_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+249,"MEM_io_ex_i_currentPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+70,"MEM_io_stallReq",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"MEM_io_except_hasTrap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+82,"MEM_io_except_excCause",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 30,0);
    tracep->declBus(c+249,"MEM_io_except_excPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+83,"MEM_io_except_excValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3,"MEM_io_csrHasInt",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+84,"MEM_io_csrBusy",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+73,"MEM_io_mem_o_reg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+74,"MEM_io_mem_o_reg_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+85,"MEM_io_mem_o_reg_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"MEM_io_mem_o_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+77,"MEM_io_mem_o_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+78,"MEM_io_mem_o_csr_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+79,"MEM_io_mem_o_csr_retired",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+249,"MEM_io_mem_o_currentPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+250,"MEM_io_mem_o_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+230,"MEM_WB_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"MEM_WB_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"MEM_WB_io_flush",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"MEM_WB_io_stallPrev",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+253,"MEM_WB_io_stallNext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+73,"MEM_WB_io_prev_reg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+74,"MEM_WB_io_prev_reg_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+85,"MEM_WB_io_prev_reg_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"MEM_WB_io_prev_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+77,"MEM_WB_io_prev_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+78,"MEM_WB_io_prev_csr_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+79,"MEM_WB_io_prev_csr_retired",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+249,"MEM_WB_io_prev_currentPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+250,"MEM_WB_io_prev_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+86,"MEM_WB_io_next_reg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+87,"MEM_WB_io_next_reg_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+251,"MEM_WB_io_next_reg_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+88,"MEM_WB_io_next_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+89,"MEM_WB_io_next_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+90,"MEM_WB_io_next_csr_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+91,"MEM_WB_io_next_csr_retired",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+236,"MEM_WB_io_next_currentPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+242,"MEM_WB_io_next_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+86,"WB_io_mem_i_reg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+87,"WB_io_mem_i_reg_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+251,"WB_io_mem_i_reg_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+88,"WB_io_mem_i_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+89,"WB_io_mem_i_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+90,"WB_io_mem_i_csr_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+91,"WB_io_mem_i_csr_retired",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+236,"WB_io_mem_i_currentPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+242,"WB_io_mem_i_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+86,"WB_io_regen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+87,"WB_io_regaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+251,"WB_io_regdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+88,"WB_io_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+89,"WB_io_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+90,"WB_io_csr_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+91,"WB_io_csr_retired",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+236,"WB_io_wb_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+242,"WB_io_wbinst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+253,"dpic_wb_commit",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+92,"dpic_s_regs_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+93,"dpic_s_regs_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+94,"dpic_s_regs_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+95,"dpic_s_regs_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"dpic_s_regs_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+97,"dpic_s_regs_5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+98,"dpic_s_regs_6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+99,"dpic_s_regs_7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+100,"dpic_s_regs_8",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+101,"dpic_s_regs_9",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+102,"dpic_s_regs_10",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+103,"dpic_s_regs_11",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+104,"dpic_s_regs_12",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+105,"dpic_s_regs_13",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+106,"dpic_s_regs_14",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+107,"dpic_s_regs_15",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+108,"dpic_s_regs_16",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+109,"dpic_s_regs_17",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+110,"dpic_s_regs_18",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+111,"dpic_s_regs_19",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+112,"dpic_s_regs_20",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+113,"dpic_s_regs_21",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+114,"dpic_s_regs_22",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+115,"dpic_s_regs_23",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+116,"dpic_s_regs_24",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+117,"dpic_s_regs_25",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+118,"dpic_s_regs_26",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+119,"dpic_s_regs_27",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+120,"dpic_s_regs_28",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+121,"dpic_s_regs_29",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+122,"dpic_s_regs_30",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+123,"dpic_s_regs_31",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+230,"regfile_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"regfile_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"regfile_io_read1_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+30,"regfile_io_read1_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+124,"regfile_io_read1_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+32,"regfile_io_read2_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"regfile_io_read2_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+125,"regfile_io_read2_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+86,"regfile_io_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+87,"regfile_io_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+251,"regfile_io_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+92,"regfile_io_s_regs_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+93,"regfile_io_s_regs_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+94,"regfile_io_s_regs_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+95,"regfile_io_s_regs_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"regfile_io_s_regs_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+97,"regfile_io_s_regs_5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+98,"regfile_io_s_regs_6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+99,"regfile_io_s_regs_7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+100,"regfile_io_s_regs_8",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+101,"regfile_io_s_regs_9",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+102,"regfile_io_s_regs_10",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+103,"regfile_io_s_regs_11",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+104,"regfile_io_s_regs_12",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+105,"regfile_io_s_regs_13",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+106,"regfile_io_s_regs_14",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+107,"regfile_io_s_regs_15",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+108,"regfile_io_s_regs_16",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+109,"regfile_io_s_regs_17",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+110,"regfile_io_s_regs_18",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+111,"regfile_io_s_regs_19",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+112,"regfile_io_s_regs_20",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+113,"regfile_io_s_regs_21",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+114,"regfile_io_s_regs_22",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+115,"regfile_io_s_regs_23",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+116,"regfile_io_s_regs_24",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+117,"regfile_io_s_regs_25",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+118,"regfile_io_s_regs_26",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+119,"regfile_io_s_regs_27",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+120,"regfile_io_s_regs_28",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+121,"regfile_io_s_regs_29",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+122,"regfile_io_s_regs_30",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+123,"regfile_io_s_regs_31",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+29,"resoler_io_id_read1_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+30,"resoler_io_id_read1_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+31,"resoler_io_id_read1_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+32,"resoler_io_id_read2_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"resoler_io_id_read2_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+34,"resoler_io_id_read2_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1,"resoler_io_csrRead_csr_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+35,"resoler_io_csrRead_csr_raddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"resoler_io_csrRead_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+37,"resoler_io_csrRead_csr_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"resoler_io_rs1_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+30,"resoler_io_rs1_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+124,"resoler_io_rs1_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+32,"resoler_io_rs2_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"resoler_io_rs2_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+125,"resoler_io_rs2_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1,"resoler_io_csr_csr_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+35,"resoler_io_csr_csr_raddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"resoler_io_csr_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+37,"resoler_io_csr_csr_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+68,"resoler_io_load",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"resoler_io_ex_reg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+59,"resoler_io_ex_reg_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+67,"resoler_io_ex_reg_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+60,"resoler_io_ex_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+61,"resoler_io_ex_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+73,"resoler_io_mem_reg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+74,"resoler_io_mem_reg_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+85,"resoler_io_mem_reg_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"resoler_io_mem_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+77,"resoler_io_mem_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+86,"resoler_io_wb_reg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+87,"resoler_io_wb_reg_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+251,"resoler_io_wb_reg_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+88,"resoler_io_wb_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+89,"resoler_io_wb_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+126,"resoler_io_loadflag",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+127,"resoler_io_csrflag",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"ctrl_io_id_flush",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+39,"ctrl_io_id_flushpc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+70,"ctrl_io_mem_stall",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+126,"ctrl_io_loadflag",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+127,"ctrl_io_csrflag",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"ctrl_io_except_hasTrap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4,"ctrl_io_csrTvec",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+241,"ctrl_io_stallIf",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"ctrl_io_stallId",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"ctrl_io_stallEx",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"ctrl_io_stallMm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+253,"ctrl_io_stallWb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"ctrl_io_flush",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"ctrl_io_flushIf",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+239,"ctrl_io_flushPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+230,"csr_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"csr_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"csr_io_read_csr_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+35,"csr_io_read_csr_raddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"csr_io_read_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+37,"csr_io_read_csr_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+88,"csr_io_write_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+89,"csr_io_write_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+90,"csr_io_write_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+91,"csr_io_write_retired",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"csr_io_except_hasTrap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+82,"csr_io_except_excCause",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 30,0);
    tracep->declBus(c+249,"csr_io_except_excPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+83,"csr_io_except_excValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+232,"csr_io_timer",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+233,"csr_io_soft",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+234,"csr_io_extern",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"csr_io_hasInt",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+84,"csr_io_busy",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4,"csr_io_trapVec",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("EX ");
    tracep->declBus(c+53,"io_id_i_aluOp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+54,"io_id_i_opr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+55,"io_id_i_opr2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+56,"io_id_i_lsuOp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+57,"io_id_i_lsuData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+58,"io_id_i_regWen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+59,"io_id_i_regWaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+60,"io_id_i_csrOp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+61,"io_id_i_csrAddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+62,"io_id_i_csren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+63,"io_id_i_csrrData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+64,"io_id_i_csrwData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+65,"io_id_i_excType",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+66,"io_id_i_excValue",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+248,"io_id_i_inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+247,"io_id_i_currentPc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+56,"io_ex_o_lsuOp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+57,"io_ex_o_lsuData",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+58,"io_ex_o_reg_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+59,"io_ex_o_reg_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+67,"io_ex_o_reg_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+68,"io_ex_o_load",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+60,"io_ex_o_csr_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+61,"io_ex_o_csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+64,"io_ex_o_csr_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+69,"io_ex_o_csr_retired",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+65,"io_ex_o_excType",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+66,"io_ex_o_excValue",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+248,"io_ex_o_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+247,"io_ex_o_currentPc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declQuad(c+128,"Aluresult",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 62,0);
    tracep->declQuad(c+130,"result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 62,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX_MEM ");
    tracep->declBit(c+230,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"io_stallPrev",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"io_stallNext",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+56,"io_prev_lsuOp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+57,"io_prev_lsuData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+58,"io_prev_reg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+59,"io_prev_reg_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+67,"io_prev_reg_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+60,"io_prev_csr_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+61,"io_prev_csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+64,"io_prev_csr_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+69,"io_prev_csr_retired",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+65,"io_prev_excType",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+66,"io_prev_excValue",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+248,"io_prev_inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+247,"io_prev_currentPc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"io_next_lsuOp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+72,"io_next_lsuData",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+73,"io_next_reg_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+74,"io_next_reg_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+75,"io_next_reg_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"io_next_csr_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+77,"io_next_csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+78,"io_next_csr_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+79,"io_next_csr_retired",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+80,"io_next_excType",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+81,"io_next_excValue",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+250,"io_next_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+249,"io_next_currentPc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"ff_lsuOp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+72,"ff_lsuData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+73,"ff_reg_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+74,"ff_reg_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+75,"ff_reg_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,"ff_csr_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+77,"ff_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+78,"ff_csr_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+79,"ff_csr_retired",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+80,"ff_excType",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+81,"ff_excValue",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,"ff_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,"ff_currentPc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+230,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+245,"io_if_i_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+25,"io_if_i_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+246,"io_if_i_inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+26,"io_if_i_bpu_take",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+27,"io_if_i_bpu_takepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+28,"io_if_i_misaligned",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"io_read1_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+30,"io_read1_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+31,"io_read1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+32,"io_read2_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"io_read2_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+34,"io_read2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+241,"io_stallid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"io_csrread_csr_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+35,"io_csrread_csr_raddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"io_csrread_csr_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+37,"io_csrread_csr_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"io_flush",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+39,"io_flushpc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+40,"io_id_o_aluOp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+41,"io_id_o_opr1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"io_id_o_opr2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"io_id_o_lsuOp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+34,"io_id_o_lsuData",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+44,"io_id_o_regWen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+45,"io_id_o_regWaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+36,"io_id_o_csrOp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+46,"io_id_o_csrAddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+47,"io_id_o_csren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"io_id_o_csrrData",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"io_id_o_csrwData",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"io_id_o_excType",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+50,"io_id_o_excValue",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+51,"io_id_o_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+245,"io_id_o_currentPc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+134,"stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+135,"lastinst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,"inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+45,"rd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+30,"rs1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+33,"rs2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+46,"immI",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+29,"regEn1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+136,"aluSrc1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+137,"aluSrc2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+138,"branchOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+139,"csrOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+140,"excType",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+141,"all_jump",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+142,"jal_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+143,"imm_jalr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+144,"jalr_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+145,"pc_j",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+146,"pc_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+147,"takepc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+148,"branchteke",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"branchmiss",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"addrFault",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"csrActOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+47,"csren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID_EX ");
    tracep->declBit(c+230,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"io_stallPrev",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"io_stallNext",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+40,"io_prev_aluOp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+41,"io_prev_opr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"io_prev_opr2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"io_prev_lsuOp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+34,"io_prev_lsuData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+44,"io_prev_regWen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+45,"io_prev_regWaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+36,"io_prev_csrOp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+46,"io_prev_csrAddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+47,"io_prev_csren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"io_prev_csrrData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"io_prev_csrwData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"io_prev_excType",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+50,"io_prev_excValue",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+51,"io_prev_inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+245,"io_prev_currentPc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+53,"io_next_aluOp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+54,"io_next_opr1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+55,"io_next_opr2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+56,"io_next_lsuOp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+57,"io_next_lsuData",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+58,"io_next_regWen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+59,"io_next_regWaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+60,"io_next_csrOp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+61,"io_next_csrAddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+62,"io_next_csren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+63,"io_next_csrrData",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+64,"io_next_csrwData",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+65,"io_next_excType",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+66,"io_next_excValue",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+248,"io_next_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+247,"io_next_currentPc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+53,"ff_aluOp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+54,"ff_opr1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,"ff_opr2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,"ff_lsuOp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+57,"ff_lsuData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+58,"ff_regWen",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+59,"ff_regWaddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+60,"ff_csrOp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+61,"ff_csrAddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBit(c+62,"ff_csren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+63,"ff_csrrData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,"ff_csrwData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,"ff_excType",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+66,"ff_excValue",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,"ff_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,"ff_currentPc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_ID ");
    tracep->declBit(c+230,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"io_stallPrev",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"io_stallNext",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+237,"io_prev_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+235,"io_prev_inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+243,"io_prev_bpu_take",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+244,"io_prev_bpu_takepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+24,"io_prev_misaligned",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+245,"io_next_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+25,"io_next_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+246,"io_next_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+26,"io_next_bpu_take",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+27,"io_next_bpu_takepc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+28,"io_next_misaligned",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+152,"ff_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,"ff_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+153,"ff_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+26,"ff_bpu_take",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+27,"ff_bpu_takepc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,"ff_misaligned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+230,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+71,"io_ex_i_lsuOp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+72,"io_ex_i_lsuData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+73,"io_ex_i_reg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+74,"io_ex_i_reg_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+75,"io_ex_i_reg_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"io_ex_i_csr_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+77,"io_ex_i_csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+78,"io_ex_i_csr_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+79,"io_ex_i_csr_retired",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+80,"io_ex_i_excType",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+81,"io_ex_i_excValue",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+250,"io_ex_i_inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+249,"io_ex_i_currentPc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+70,"io_stallReq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"io_except_hasTrap",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+82,"io_except_excCause",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 30,0);
    tracep->declBus(c+249,"io_except_excPc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+83,"io_except_excValue",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+3,"io_csrHasInt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+84,"io_csrBusy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+73,"io_mem_o_reg_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+74,"io_mem_o_reg_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+85,"io_mem_o_reg_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"io_mem_o_csr_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+77,"io_mem_o_csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+78,"io_mem_o_csr_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+79,"io_mem_o_csr_retired",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+249,"io_mem_o_currentPc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+250,"io_mem_o_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+230,"mem_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+154,"mem_wen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+155,"mem_ren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+156,"mem_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+157,"mem_mask",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+158,"mem_sign",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+159,"mem_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+160,"mem_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+154,"wen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+161,"ren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+162,"width",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+163,"sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declQuad(c+164,"lsuData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 55,0);
    tracep->declBit(c+166,"memAddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+167,"instAddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+168,"instIllg",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+169,"excMem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+170,"excOther",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+171,"cause",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 30,0);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+230,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+154,"wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+155,"ren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+156,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+157,"mask",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+158,"sign",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+159,"wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+160,"rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("MEM_WB ");
    tracep->declBit(c+230,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"io_stallPrev",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+253,"io_stallNext",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+73,"io_prev_reg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+74,"io_prev_reg_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+85,"io_prev_reg_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"io_prev_csr_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+77,"io_prev_csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+78,"io_prev_csr_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+79,"io_prev_csr_retired",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+249,"io_prev_currentPc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+250,"io_prev_inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+86,"io_next_reg_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+87,"io_next_reg_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+251,"io_next_reg_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+88,"io_next_csr_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+89,"io_next_csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+90,"io_next_csr_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+91,"io_next_csr_retired",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+236,"io_next_currentPc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+242,"io_next_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+86,"ff_reg_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+87,"ff_reg_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+172,"ff_reg_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,"ff_csr_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+89,"ff_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+90,"ff_csr_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+91,"ff_csr_retired",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+173,"ff_currentPc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,"ff_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+86,"io_mem_i_reg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+87,"io_mem_i_reg_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+251,"io_mem_i_reg_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+88,"io_mem_i_csr_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+89,"io_mem_i_csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+90,"io_mem_i_csr_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+91,"io_mem_i_csr_retired",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+236,"io_mem_i_currentPc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+242,"io_mem_i_inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+86,"io_regen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+87,"io_regaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+251,"io_regdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+88,"io_csr_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+89,"io_csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+90,"io_csr_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+91,"io_csr_retired",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+236,"io_wb_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+242,"io_wbinst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+230,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"io_read_csr_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+35,"io_read_csr_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"io_read_csr_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+37,"io_read_csr_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+88,"io_write_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+89,"io_write_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+90,"io_write_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+91,"io_write_retired",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"io_except_hasTrap",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+82,"io_except_excCause",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 30,0);
    tracep->declBus(c+249,"io_except_excPc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+83,"io_except_excValue",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+232,"io_timer",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+233,"io_soft",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+234,"io_extern",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"io_hasInt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+84,"io_busy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4,"io_trapVec",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+175,"mode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+176,"mstatus_sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+177,"mstatus_mpp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+178,"mstatus_spp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+179,"mstatus_mpie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+180,"mstatus_spie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+181,"mstatus_mie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+182,"mstatus_sie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+183,"medeleg_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,"mideleg_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+185,"mie_meie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+186,"mie_seie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+187,"mie_mtie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+188,"mie_stie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+189,"mie_msie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+190,"mie_ssie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+191,"mtvec_base",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 29,0);
    tracep->declBus(c+192,"mtvec_mode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+193,"mscratch_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,"mepc_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+195,"mcause_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+196,"mcause_code",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 30,0);
    tracep->declBus(c+197,"mtval_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+198,"mipReal_seip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+199,"mipReal_stip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+200,"mipReal_ssip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+201,"mcycle_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+203,"minstret_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBit(c+176,"sstatus_sum",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"sstatus_spp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+180,"sstatus_spie",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+182,"sstatus_sie",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+186,"sie_seie",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+188,"sie_stie",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"sie_ssie",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+205,"stvec_base",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 29,0);
    tracep->declBus(c+206,"stvec_mode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+207,"sscratch_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,"sepc_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,"scause_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+210,"scause_code",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 30,0);
    tracep->declBus(c+211,"stval_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+212,"satp_mode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+213,"satp_ppn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 21,0);
    tracep->declBit(c+5,"mip_ssip",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"mip_stip",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"mip_seip",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+214,"readable",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+215,"writable",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+216,"readValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+217,"modeValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"csrData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+84,"writeEn",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+9,"writeData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"flagIntS",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+11,"flagIntM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+12,"hasIntS",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+13,"hasIntM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"hasInt",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"handIntS",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"hasExc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"hasExcS",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"handExcS",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+18,"intCauseS",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 30,0);
    tracep->declBus(c+19,"intCauseM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 30,0);
    tracep->declBus(c+20,"intCause",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 30,0);
    tracep->declBus(c+21,"cause",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+22,"trapVecS",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+23,"trapVecM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ctrl ");
    tracep->declBit(c+38,"io_id_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+39,"io_id_flushpc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+70,"io_mem_stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+126,"io_loadflag",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+127,"io_csrflag",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"io_except_hasTrap",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4,"io_csrTvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+241,"io_stallIf",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"io_stallId",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"io_stallEx",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"io_stallMm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+253,"io_stallWb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"io_flush",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"io_flushIf",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+239,"io_flushPc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+218,"stall",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dpic ");
    tracep->declBit(c+253,"wb_commit",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+92,"s_regs_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+93,"s_regs_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+94,"s_regs_2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+95,"s_regs_3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"s_regs_4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+97,"s_regs_5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+98,"s_regs_6",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+99,"s_regs_7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+100,"s_regs_8",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+101,"s_regs_9",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+102,"s_regs_10",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+103,"s_regs_11",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+104,"s_regs_12",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+105,"s_regs_13",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+106,"s_regs_14",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+107,"s_regs_15",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+108,"s_regs_16",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+109,"s_regs_17",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+110,"s_regs_18",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+111,"s_regs_19",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+112,"s_regs_20",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+113,"s_regs_21",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+114,"s_regs_22",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+115,"s_regs_23",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+116,"s_regs_24",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+117,"s_regs_25",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+118,"s_regs_26",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+119,"s_regs_27",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+120,"s_regs_28",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+121,"s_regs_29",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+122,"s_regs_30",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+123,"s_regs_31",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+230,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+239,"io_flush_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+241,"io_stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+237,"io_IF_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+235,"io_IF_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+243,"io_IF_bpu_take",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+244,"io_IF_bpu_takepc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+24,"io_IF_misaligned",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+243,"io_prdt_taken_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+244,"io_prdt_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+252,"read_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+235,"read_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+230,"read_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"read_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+235,"bpu_io_inst_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+237,"bpu_io_pc_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+243,"bpu_io_prdt_taken_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+244,"bpu_io_prdt_addr_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+219,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("bpu ");
    tracep->declBus(c+235,"io_inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+237,"io_pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+243,"io_prdt_taken_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+244,"io_prdt_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+220,"opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+221,"inst_type_branch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+222,"inst_jal",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+223,"inst_b_type_imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+224,"inst_j_type_imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+225,"prdt_imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+226,"prdt_taken",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("read ");
    tracep->declBus(c+252,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+230,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+235,"data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+227,"fetched_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+230,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"io_read1_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+30,"io_read1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+124,"io_read1_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+32,"io_read2_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"io_read2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+125,"io_read2_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+86,"io_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+87,"io_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+251,"io_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+92,"io_s_regs_0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+93,"io_s_regs_1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+94,"io_s_regs_2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+95,"io_s_regs_3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"io_s_regs_4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+97,"io_s_regs_5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+98,"io_s_regs_6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+99,"io_s_regs_7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+100,"io_s_regs_8",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+101,"io_s_regs_9",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+102,"io_s_regs_10",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+103,"io_s_regs_11",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+104,"io_s_regs_12",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+105,"io_s_regs_13",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+106,"io_s_regs_14",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+107,"io_s_regs_15",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+108,"io_s_regs_16",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+109,"io_s_regs_17",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+110,"io_s_regs_18",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+111,"io_s_regs_19",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+112,"io_s_regs_20",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+113,"io_s_regs_21",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+114,"io_s_regs_22",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+115,"io_s_regs_23",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+116,"io_s_regs_24",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+117,"io_s_regs_25",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+118,"io_s_regs_26",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+119,"io_s_regs_27",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+120,"io_s_regs_28",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+121,"io_s_regs_29",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+122,"io_s_regs_30",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+123,"io_s_regs_31",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+92,"regfile_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,"regfile_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,"regfile_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,"regfile_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,"regfile_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,"regfile_5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,"regfile_6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,"regfile_7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,"regfile_8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,"regfile_9",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,"regfile_10",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,"regfile_11",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,"regfile_12",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,"regfile_13",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,"regfile_14",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,"regfile_15",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,"regfile_16",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,"regfile_17",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,"regfile_18",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,"regfile_19",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,"regfile_20",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,"regfile_21",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,"regfile_22",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,"regfile_23",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,"regfile_24",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,"regfile_25",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,"regfile_26",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,"regfile_27",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,"regfile_28",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,"regfile_29",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,"regfile_30",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,"regfile_31",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("resoler ");
    tracep->declBit(c+29,"io_id_read1_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+30,"io_id_read1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+31,"io_id_read1_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+32,"io_id_read2_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"io_id_read2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+34,"io_id_read2_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1,"io_csrRead_csr_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+35,"io_csrRead_csr_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"io_csrRead_csr_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+37,"io_csrRead_csr_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"io_rs1_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+30,"io_rs1_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+124,"io_rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+32,"io_rs2_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"io_rs2_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+125,"io_rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1,"io_csr_csr_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+35,"io_csr_csr_raddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"io_csr_csr_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+37,"io_csr_csr_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+68,"io_load",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"io_ex_reg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+59,"io_ex_reg_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+67,"io_ex_reg_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+60,"io_ex_csr_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+61,"io_ex_csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+73,"io_mem_reg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+74,"io_mem_reg_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+85,"io_mem_reg_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"io_mem_csr_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+77,"io_mem_csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+86,"io_wb_reg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+87,"io_wb_reg_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+251,"io_wb_reg_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+88,"io_wb_csr_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+89,"io_wb_csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+126,"io_loadflag",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+127,"io_csrflag",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+228,"load1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+229,"load2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(((0xc00U == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                              ? (IData)(vlSelf->Core__DOT__csr__DOT__mcycle_data)
                              : ((0xc02U == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                  ? (IData)(vlSelf->Core__DOT__csr__DOT__minstret_data)
                                  : ((0xc80U == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                      ? (IData)((vlSelf->Core__DOT__csr__DOT__mcycle_data 
                                                 >> 0x20U))
                                      : ((0xc82U == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                          ? (IData)(
                                                    (vlSelf->Core__DOT__csr__DOT__minstret_data 
                                                     >> 0x20U))
                                          : ((0x100U 
                                              == (IData)(vlSelf->Core__DOT__ID__DOT___T_841))
                                              ? vlSelf->Core__DOT__csr__DOT___T_74
                                              : ((0x104U 
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
    bufp->fullBit(oldp+2,(vlSelf->Core__DOT__ID_EX_io_flush));
    bufp->fullBit(oldp+3,(vlSelf->Core__DOT__csr__DOT__hasInt));
    bufp->fullIData(oldp+4,(((IData)(vlSelf->Core__DOT__csr__DOT___T_605)
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
    bufp->fullBit(oldp+5,(vlSelf->Core__DOT__csr__DOT__mip_ssip));
    bufp->fullBit(oldp+6,(vlSelf->Core__DOT__csr__DOT__mip_stip));
    bufp->fullBit(oldp+7,(vlSelf->Core__DOT__csr__DOT__mip_seip));
    bufp->fullIData(oldp+8,(vlSelf->Core__DOT__csr__DOT__csrData),32);
    bufp->fullIData(oldp+9,(vlSelf->Core__DOT__csr__DOT__writeData),32);
    bufp->fullIData(oldp+10,(vlSelf->Core__DOT__csr__DOT__flagIntS),32);
    bufp->fullIData(oldp+11,(vlSelf->Core__DOT__csr__DOT__flagIntM),32);
    bufp->fullBit(oldp+12,((((1U > (IData)(vlSelf->Core__DOT__csr__DOT__mode)) 
                             | ((1U == (IData)(vlSelf->Core__DOT__csr__DOT__mode)) 
                                & (IData)(vlSelf->Core__DOT__csr__DOT__mstatus_sie))) 
                            & (0U != (vlSelf->Core__DOT__csr__DOT__flagIntS 
                                      & vlSelf->Core__DOT__csr__DOT__mideleg_data)))));
    bufp->fullBit(oldp+13,(vlSelf->Core__DOT__csr__DOT__hasIntM));
    bufp->fullBit(oldp+14,(vlSelf->Core__DOT__csr__DOT__handIntS));
    bufp->fullBit(oldp+15,(((~ (IData)(vlSelf->Core__DOT__csr__DOT__hasInt)) 
                            & (IData)(vlSelf->Core__DOT__ID_EX_io_flush))));
    bufp->fullBit(oldp+16,((((~ (IData)(vlSelf->Core__DOT__csr__DOT__hasInt)) 
                             & (IData)(vlSelf->Core__DOT__ID_EX_io_flush)) 
                            & (vlSelf->Core__DOT__csr__DOT__medeleg_data 
                               >> ((5U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                    ? 2U : ((7U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                             ? 0U : 
                                            ((1U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                              ? 0xbU
                                              : ((8U 
                                                  == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                                  ? 
                                                 ((IData)(vlSelf->Core__DOT__MEM__DOT__memAddr)
                                                   ? 4U
                                                   : 0xdU)
                                                  : 0U))))))));
    bufp->fullBit(oldp+17,(vlSelf->Core__DOT__csr__DOT__handExcS));
    bufp->fullIData(oldp+18,(vlSelf->Core__DOT__csr__DOT__intCauseS),31);
    bufp->fullIData(oldp+19,(((0x800U & vlSelf->Core__DOT__csr__DOT__flagIntM)
                               ? 0xbU : ((8U & vlSelf->Core__DOT__csr__DOT__flagIntM)
                                          ? 3U : ((0x80U 
                                                   & vlSelf->Core__DOT__csr__DOT__flagIntM)
                                                   ? 7U
                                                   : vlSelf->Core__DOT__csr__DOT__intCauseS)))),31);
    bufp->fullIData(oldp+20,(((IData)(vlSelf->Core__DOT__csr__DOT__handIntS)
                               ? vlSelf->Core__DOT__csr__DOT__intCauseS
                               : ((0x800U & vlSelf->Core__DOT__csr__DOT__flagIntM)
                                   ? 0xbU : ((8U & vlSelf->Core__DOT__csr__DOT__flagIntM)
                                              ? 3U : 
                                             ((0x80U 
                                               & vlSelf->Core__DOT__csr__DOT__flagIntM)
                                               ? 7U
                                               : vlSelf->Core__DOT__csr__DOT__intCauseS))))),31);
    bufp->fullIData(oldp+21,(vlSelf->Core__DOT__csr__DOT__cause),32);
    bufp->fullIData(oldp+22,(((vlSelf->Core__DOT__csr__DOT__stvec_base 
                               + (((IData)(vlSelf->Core__DOT__csr__DOT__stvec_mode) 
                                   & (IData)(vlSelf->Core__DOT__csr__DOT__hasInt))
                                   ? vlSelf->Core__DOT__csr__DOT__cause
                                   : 0U)) << 2U)),32);
    bufp->fullIData(oldp+23,(((vlSelf->Core__DOT__csr__DOT__mtvec_base 
                               + (((IData)(vlSelf->Core__DOT__csr__DOT__mtvec_mode) 
                                   & (IData)(vlSelf->Core__DOT__csr__DOT__hasInt))
                                   ? vlSelf->Core__DOT__csr__DOT__cause
                                   : 0U)) << 2U)),32);
    bufp->fullBit(oldp+24,((0U != (3U & vlSelf->Core__DOT__fetch__DOT__pc))));
    bufp->fullBit(oldp+25,(vlSelf->Core__DOT__IF_ID__DOT__ff_valid));
    bufp->fullBit(oldp+26,(vlSelf->Core__DOT__IF_ID__DOT__ff_bpu_take));
    bufp->fullIData(oldp+27,(vlSelf->Core__DOT__IF_ID__DOT__ff_bpu_takepc),32);
    bufp->fullBit(oldp+28,(vlSelf->Core__DOT__IF_ID__DOT__ff_misaligned));
    bufp->fullBit(oldp+29,(vlSelf->Core__DOT__ID__DOT__regEn1));
    bufp->fullCData(oldp+30,(vlSelf->Core__DOT__ID__DOT__rs1),5);
    bufp->fullIData(oldp+31,(vlSelf->Core__DOT__ID_io_read1_data),32);
    bufp->fullBit(oldp+32,(vlSelf->Core__DOT__ID_io_read2_en));
    bufp->fullCData(oldp+33,(vlSelf->Core__DOT__ID__DOT__rs2),5);
    bufp->fullIData(oldp+34,(vlSelf->Core__DOT__ID_io_read2_data),32);
    bufp->fullIData(oldp+35,(vlSelf->Core__DOT__ID__DOT___T_841),32);
    bufp->fullCData(oldp+36,(vlSelf->Core__DOT__ID__DOT__csrActOp),3);
    bufp->fullBit(oldp+37,((((1U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                              ? (IData)(vlSelf->Core__DOT__csr__DOT__readable)
                              : ((2U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                  ? (IData)(vlSelf->Core__DOT__csr__DOT__writable)
                                  : ((3U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                      ? (IData)(vlSelf->Core__DOT__csr__DOT___T_319)
                                      : ((4U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                          ? (IData)(vlSelf->Core__DOT__csr__DOT___T_319)
                                          : ((5U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp)) 
                                             & (IData)(vlSelf->Core__DOT__csr__DOT___T_319)))))) 
                            & (((0U != (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                 ? ((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                                     ? (3U & (vlSelf->Core__DOT__ID__DOT___GEN_0 
                                              >> 0x1cU))
                                     : 0U) : 0U) <= (IData)(vlSelf->Core__DOT__csr__DOT__mode)))));
    bufp->fullBit(oldp+38,(vlSelf->Core__DOT__ID__DOT__branchmiss));
    bufp->fullIData(oldp+39,(((IData)(vlSelf->Core__DOT__ID__DOT__branchmiss)
                               ? vlSelf->Core__DOT__ID__DOT__takepc
                               : ((IData)(4U) + vlSelf->Core__DOT__IF_ID__DOT__ff_pc))),32);
    bufp->fullCData(oldp+40,(((0x33U == (0xfe00707fU 
                                         & vlSelf->Core__DOT__ID__DOT__inst))
                               ? 0U : ((0x13U == (0x707fU 
                                                  & vlSelf->Core__DOT__ID__DOT__inst))
                                        ? 0U : ((0x40000033U 
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
    bufp->fullIData(oldp+41,(((1U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc1))
                               ? vlSelf->Core__DOT__ID_io_read1_data
                               : ((2U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc1))
                                   ? vlSelf->Core__DOT__ID_io_read2_data
                                   : ((3U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc1))
                                       ? vlSelf->Core__DOT__ID__DOT___GEN_2
                                       : ((4U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc1))
                                           ? vlSelf->Core__DOT__ID__DOT____VdfgTmp_h7417a8e6__0
                                           : ((5U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc1))
                                               ? vlSelf->Core__DOT__ID__DOT___T_850
                                               : ((6U 
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
    bufp->fullIData(oldp+42,(((1U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc2))
                               ? vlSelf->Core__DOT__ID_io_read1_data
                               : ((2U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc2))
                                   ? vlSelf->Core__DOT__ID_io_read2_data
                                   : ((3U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc2))
                                       ? vlSelf->Core__DOT__ID__DOT___GEN_2
                                       : ((4U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc2))
                                           ? vlSelf->Core__DOT__ID__DOT____VdfgTmp_h7417a8e6__0
                                           : ((5U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc2))
                                               ? vlSelf->Core__DOT__ID__DOT___T_850
                                               : ((6U 
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
    bufp->fullCData(oldp+43,(((0x33U == (0xfe00707fU 
                                         & vlSelf->Core__DOT__ID__DOT__inst))
                               ? 0U : ((0x13U == (0x707fU 
                                                  & vlSelf->Core__DOT__ID__DOT__inst))
                                        ? 0U : ((0x40000033U 
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
    bufp->fullBit(oldp+44,(((0x33U == (0xfe00707fU 
                                       & vlSelf->Core__DOT__ID__DOT__inst)) 
                            | ((0x13U == (0x707fU & vlSelf->Core__DOT__ID__DOT__inst)) 
                               | ((0x40000033U == (0xfe00707fU 
                                                   & vlSelf->Core__DOT__ID__DOT__inst)) 
                                  | ((0x37U == (0x7fU 
                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                     | ((0x17U == (0x7fU 
                                                   & vlSelf->Core__DOT__ID__DOT__inst)) 
                                        | ((0x4033U 
                                            == (0xfe00707fU 
                                                & vlSelf->Core__DOT__ID__DOT__inst)) 
                                           | ((0x4013U 
                                               == (0x707fU 
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
    bufp->fullCData(oldp+45,(vlSelf->Core__DOT__ID__DOT__rd),5);
    bufp->fullSData(oldp+46,(vlSelf->Core__DOT__ID__DOT__immI),12);
    bufp->fullBit(oldp+47,((0U != (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))));
    bufp->fullIData(oldp+48,(((0U != (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                               ? ((IData)(vlSelf->Core__DOT__ID__DOT__regEn1)
                                   ? vlSelf->Core__DOT__ID_io_read1_data
                                   : (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                               : 0U)),32);
    bufp->fullCData(oldp+49,((((~ (((1U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                     ? (IData)(vlSelf->Core__DOT__csr__DOT__readable)
                                     : ((2U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                         ? (IData)(vlSelf->Core__DOT__csr__DOT__writable)
                                         : ((3U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                             ? (IData)(vlSelf->Core__DOT__csr__DOT___T_319)
                                             : ((4U 
                                                 == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                                 ? (IData)(vlSelf->Core__DOT__csr__DOT___T_319)
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp)) 
                                                 & (IData)(vlSelf->Core__DOT__csr__DOT___T_319)))))) 
                                   & (((0U != (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                        ? ((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                                            ? (3U & 
                                               (vlSelf->Core__DOT__ID__DOT___GEN_0 
                                                >> 0x1cU))
                                            : 0U) : 0U) 
                                      <= (IData)(vlSelf->Core__DOT__csr__DOT__mode)))) 
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
    bufp->fullIData(oldp+50,(((IData)(vlSelf->Core__DOT__ID__DOT__addrFault)
                               ? vlSelf->Core__DOT__ID__DOT__takepc
                               : 0U)),32);
    bufp->fullIData(oldp+51,(vlSelf->Core__DOT__ID__DOT__inst),32);
    bufp->fullBit(oldp+52,(vlSelf->Core__DOT__ID_EX_io_stallNext));
    bufp->fullCData(oldp+53,(vlSelf->Core__DOT__ID_EX__DOT__ff_aluOp),4);
    bufp->fullIData(oldp+54,(vlSelf->Core__DOT__ID_EX__DOT__ff_opr1),32);
    bufp->fullIData(oldp+55,(vlSelf->Core__DOT__ID_EX__DOT__ff_opr2),32);
    bufp->fullCData(oldp+56,(vlSelf->Core__DOT__ID_EX__DOT__ff_lsuOp),4);
    bufp->fullIData(oldp+57,(vlSelf->Core__DOT__ID_EX__DOT__ff_lsuData),32);
    bufp->fullBit(oldp+58,(vlSelf->Core__DOT__ID_EX__DOT__ff_regWen));
    bufp->fullCData(oldp+59,(vlSelf->Core__DOT__ID_EX__DOT__ff_regWaddr),5);
    bufp->fullCData(oldp+60,(vlSelf->Core__DOT__ID_EX__DOT__ff_csrOp),3);
    bufp->fullSData(oldp+61,(vlSelf->Core__DOT__ID_EX__DOT__ff_csrAddr),12);
    bufp->fullBit(oldp+62,(vlSelf->Core__DOT__ID_EX__DOT__ff_csren));
    bufp->fullIData(oldp+63,(vlSelf->Core__DOT__ID_EX__DOT__ff_csrrData),32);
    bufp->fullIData(oldp+64,(vlSelf->Core__DOT__ID_EX__DOT__ff_csrwData),32);
    bufp->fullCData(oldp+65,(vlSelf->Core__DOT__ID_EX__DOT__ff_excType),4);
    bufp->fullIData(oldp+66,(vlSelf->Core__DOT__ID_EX__DOT__ff_excValue),32);
    bufp->fullIData(oldp+67,((IData)(vlSelf->Core__DOT__EX__DOT__result)),32);
    bufp->fullBit(oldp+68,(vlSelf->Core__DOT__EX_io_ex_o_load));
    bufp->fullBit(oldp+69,((0x13U != vlSelf->Core__DOT__ID_EX__DOT__ff_inst)));
    bufp->fullBit(oldp+70,(vlSelf->Core__DOT__MEM_WB__DOT___T_2));
    bufp->fullCData(oldp+71,(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp),4);
    bufp->fullIData(oldp+72,(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuData),32);
    bufp->fullBit(oldp+73,(vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_en));
    bufp->fullCData(oldp+74,(vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_addr),5);
    bufp->fullIData(oldp+75,(vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data),32);
    bufp->fullCData(oldp+76,(vlSelf->Core__DOT__EX_MEM__DOT__ff_csr_op),3);
    bufp->fullSData(oldp+77,(vlSelf->Core__DOT__EX_MEM__DOT__ff_csr_addr),12);
    bufp->fullIData(oldp+78,(vlSelf->Core__DOT__EX_MEM__DOT__ff_csr_data),32);
    bufp->fullBit(oldp+79,(vlSelf->Core__DOT__EX_MEM__DOT__ff_csr_retired));
    bufp->fullCData(oldp+80,(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType),4);
    bufp->fullIData(oldp+81,(vlSelf->Core__DOT__EX_MEM__DOT__ff_excValue),32);
    bufp->fullIData(oldp+82,(((5U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                               ? 2U : ((7U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                        ? 0U : ((1U 
                                                 == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                                 ? 0xbU
                                                 : 
                                                ((8U 
                                                  == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                                  ? 
                                                 ((IData)(vlSelf->Core__DOT__MEM__DOT__memAddr)
                                                   ? 4U
                                                   : 0xdU)
                                                  : 0U))))),31);
    bufp->fullIData(oldp+83,(vlSelf->Core__DOT__MEM_io_except_excValue),32);
    bufp->fullBit(oldp+84,(vlSelf->Core__DOT__resoler__DOT___T_35));
    bufp->fullIData(oldp+85,(vlSelf->Core__DOT__MEM_io_mem_o_reg_data),32);
    bufp->fullBit(oldp+86,(vlSelf->Core__DOT__MEM_WB__DOT__ff_reg_en));
    bufp->fullCData(oldp+87,(vlSelf->Core__DOT__MEM_WB__DOT__ff_reg_addr),5);
    bufp->fullCData(oldp+88,(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_op),3);
    bufp->fullSData(oldp+89,(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr),12);
    bufp->fullIData(oldp+90,(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_data),32);
    bufp->fullBit(oldp+91,(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_retired));
    bufp->fullIData(oldp+92,(vlSelf->Core__DOT__regfile__DOT__regfile_0),32);
    bufp->fullIData(oldp+93,(vlSelf->Core__DOT__regfile__DOT__regfile_1),32);
    bufp->fullIData(oldp+94,(vlSelf->Core__DOT__regfile__DOT__regfile_2),32);
    bufp->fullIData(oldp+95,(vlSelf->Core__DOT__regfile__DOT__regfile_3),32);
    bufp->fullIData(oldp+96,(vlSelf->Core__DOT__regfile__DOT__regfile_4),32);
    bufp->fullIData(oldp+97,(vlSelf->Core__DOT__regfile__DOT__regfile_5),32);
    bufp->fullIData(oldp+98,(vlSelf->Core__DOT__regfile__DOT__regfile_6),32);
    bufp->fullIData(oldp+99,(vlSelf->Core__DOT__regfile__DOT__regfile_7),32);
    bufp->fullIData(oldp+100,(vlSelf->Core__DOT__regfile__DOT__regfile_8),32);
    bufp->fullIData(oldp+101,(vlSelf->Core__DOT__regfile__DOT__regfile_9),32);
    bufp->fullIData(oldp+102,(vlSelf->Core__DOT__regfile__DOT__regfile_10),32);
    bufp->fullIData(oldp+103,(vlSelf->Core__DOT__regfile__DOT__regfile_11),32);
    bufp->fullIData(oldp+104,(vlSelf->Core__DOT__regfile__DOT__regfile_12),32);
    bufp->fullIData(oldp+105,(vlSelf->Core__DOT__regfile__DOT__regfile_13),32);
    bufp->fullIData(oldp+106,(vlSelf->Core__DOT__regfile__DOT__regfile_14),32);
    bufp->fullIData(oldp+107,(vlSelf->Core__DOT__regfile__DOT__regfile_15),32);
    bufp->fullIData(oldp+108,(vlSelf->Core__DOT__regfile__DOT__regfile_16),32);
    bufp->fullIData(oldp+109,(vlSelf->Core__DOT__regfile__DOT__regfile_17),32);
    bufp->fullIData(oldp+110,(vlSelf->Core__DOT__regfile__DOT__regfile_18),32);
    bufp->fullIData(oldp+111,(vlSelf->Core__DOT__regfile__DOT__regfile_19),32);
    bufp->fullIData(oldp+112,(vlSelf->Core__DOT__regfile__DOT__regfile_20),32);
    bufp->fullIData(oldp+113,(vlSelf->Core__DOT__regfile__DOT__regfile_21),32);
    bufp->fullIData(oldp+114,(vlSelf->Core__DOT__regfile__DOT__regfile_22),32);
    bufp->fullIData(oldp+115,(vlSelf->Core__DOT__regfile__DOT__regfile_23),32);
    bufp->fullIData(oldp+116,(vlSelf->Core__DOT__regfile__DOT__regfile_24),32);
    bufp->fullIData(oldp+117,(vlSelf->Core__DOT__regfile__DOT__regfile_25),32);
    bufp->fullIData(oldp+118,(vlSelf->Core__DOT__regfile__DOT__regfile_26),32);
    bufp->fullIData(oldp+119,(vlSelf->Core__DOT__regfile__DOT__regfile_27),32);
    bufp->fullIData(oldp+120,(vlSelf->Core__DOT__regfile__DOT__regfile_28),32);
    bufp->fullIData(oldp+121,(vlSelf->Core__DOT__regfile__DOT__regfile_29),32);
    bufp->fullIData(oldp+122,(vlSelf->Core__DOT__regfile__DOT__regfile_30),32);
    bufp->fullIData(oldp+123,(vlSelf->Core__DOT__regfile__DOT__regfile_31),32);
    bufp->fullIData(oldp+124,(((IData)(vlSelf->Core__DOT__ID__DOT__regEn1)
                                ? ((0x1fU == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                    ? vlSelf->Core__DOT__regfile__DOT__regfile_31
                                    : ((0x1eU == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                        ? vlSelf->Core__DOT__regfile__DOT__regfile_30
                                        : ((0x1dU == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                            ? vlSelf->Core__DOT__regfile__DOT__regfile_29
                                            : ((0x1cU 
                                                == (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                                                ? vlSelf->Core__DOT__regfile__DOT__regfile_28
                                                : (
                                                   (0x1bU 
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
    bufp->fullIData(oldp+125,(((IData)(vlSelf->Core__DOT__ID_io_read2_en)
                                ? ((0x1fU == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                    ? vlSelf->Core__DOT__regfile__DOT__regfile_31
                                    : ((0x1eU == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                        ? vlSelf->Core__DOT__regfile__DOT__regfile_30
                                        : ((0x1dU == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                            ? vlSelf->Core__DOT__regfile__DOT__regfile_29
                                            : ((0x1cU 
                                                == (IData)(vlSelf->Core__DOT__ID__DOT__rs2))
                                                ? vlSelf->Core__DOT__regfile__DOT__regfile_28
                                                : (
                                                   (0x1bU 
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
    bufp->fullBit(oldp+126,(vlSelf->Core__DOT__resoler_io_loadflag));
    bufp->fullBit(oldp+127,(vlSelf->Core__DOT__resoler_io_csrflag));
    bufp->fullQData(oldp+128,((0x7fffffffffffffffULL 
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
                                           : ((3U == (IData)(vlSelf->Core__DOT__ID_EX__DOT__ff_aluOp))
                                               ? (QData)((IData)(
                                                                 (vlSelf->Core__DOT__ID_EX__DOT__ff_opr1 
                                                                  | vlSelf->Core__DOT__ID_EX__DOT__ff_opr2)))
                                               : ((2U 
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
                                                                             < vlSelf->Core__DOT__ID_EX__DOT__ff_opr2))))))))))))))),63);
    bufp->fullQData(oldp+130,(vlSelf->Core__DOT__EX__DOT__result),63);
    bufp->fullIData(oldp+132,(vlSelf->Core__DOT__EX_MEM__DOT__ff_inst),32);
    bufp->fullIData(oldp+133,(vlSelf->Core__DOT__EX_MEM__DOT__ff_currentPc),32);
    bufp->fullBit(oldp+134,(vlSelf->Core__DOT__ID__DOT__stall));
    bufp->fullIData(oldp+135,(vlSelf->Core__DOT__ID__DOT__lastinst),32);
    bufp->fullCData(oldp+136,(vlSelf->Core__DOT__ID__DOT__aluSrc1),4);
    bufp->fullCData(oldp+137,(vlSelf->Core__DOT__ID__DOT__aluSrc2),4);
    bufp->fullCData(oldp+138,(vlSelf->Core__DOT__ID__DOT__branchOp),3);
    bufp->fullCData(oldp+139,(vlSelf->Core__DOT__ID__DOT__csrOp),3);
    bufp->fullCData(oldp+140,(((0x33U == (0xfe00707fU 
                                          & vlSelf->Core__DOT__ID__DOT__inst))
                                ? 0U : ((0x13U == (0x707fU 
                                                   & vlSelf->Core__DOT__ID__DOT__inst))
                                         ? 0U : ((0x40000033U 
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
                                                            : (IData)(vlSelf->Core__DOT__ID__DOT___T_762))))))))))))))),4);
    bufp->fullBit(oldp+141,((1U == (IData)(vlSelf->Core__DOT__ID__DOT__branchOp))));
    bufp->fullIData(oldp+142,((vlSelf->Core__DOT__IF_ID__DOT__ff_pc 
                               + (((- (IData)((IData)(vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0))) 
                                   << 0x15U) | (((IData)(vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0) 
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
                                                         << 1U))))))),32);
    bufp->fullIData(oldp+143,((vlSelf->Core__DOT__ID_io_read1_data 
                               + vlSelf->Core__DOT__ID__DOT___GEN_2)),32);
    bufp->fullIData(oldp+144,((0xfffffffeU & (vlSelf->Core__DOT__ID_io_read1_data 
                                              + vlSelf->Core__DOT__ID__DOT___GEN_2))),32);
    bufp->fullIData(oldp+145,(((IData)(vlSelf->Core__DOT__ID__DOT__regEn1)
                                ? (0xfffffffeU & (vlSelf->Core__DOT__ID_io_read1_data 
                                                  + vlSelf->Core__DOT__ID__DOT___GEN_2))
                                : (vlSelf->Core__DOT__IF_ID__DOT__ff_pc 
                                   + (((- (IData)((IData)(vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0))) 
                                       << 0x15U) | 
                                      (((IData)(vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0) 
                                        << 0x14U) | 
                                       ((((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                                           ? (0xffU 
                                              & (vlSelf->Core__DOT__ID__DOT___GEN_0 
                                                 >> 0xcU))
                                           : 0U) << 0xcU) 
                                        | ((0x7ff800U 
                                            & (((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid) 
                                                << 0xbU) 
                                               & (vlSelf->Core__DOT__ID__DOT___GEN_0 
                                                  >> 9U))) 
                                           | (((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                                                ? (0x3ffU 
                                                   & (vlSelf->Core__DOT__ID__DOT___GEN_0 
                                                      >> 0x15U))
                                                : 0U) 
                                              << 1U)))))))),32);
    bufp->fullIData(oldp+146,((vlSelf->Core__DOT__IF_ID__DOT__ff_pc 
                               + (((- (IData)((IData)(vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0))) 
                                   << 0xdU) | (((IData)(vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0) 
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
                                                        << 1U))))))),32);
    bufp->fullIData(oldp+147,(vlSelf->Core__DOT__ID__DOT__takepc),32);
    bufp->fullBit(oldp+148,(vlSelf->Core__DOT__ID__DOT__branchteke));
    bufp->fullBit(oldp+149,(vlSelf->Core__DOT__ID__DOT__addrFault));
    bufp->fullIData(oldp+150,(vlSelf->Core__DOT__ID_EX__DOT__ff_inst),32);
    bufp->fullIData(oldp+151,(vlSelf->Core__DOT__ID_EX__DOT__ff_currentPc),32);
    bufp->fullIData(oldp+152,(vlSelf->Core__DOT__IF_ID__DOT__ff_pc),32);
    bufp->fullIData(oldp+153,(vlSelf->Core__DOT__IF_ID__DOT__ff_inst),32);
    bufp->fullBit(oldp+154,(((1U != (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                             & ((2U != (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                & ((3U != (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                   & ((4U != (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                      & ((5U != (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                         & ((6U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                            | ((7U 
                                                == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                               | (8U 
                                                  == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)))))))))));
    bufp->fullBit(oldp+155,(vlSelf->Core__DOT__MEM__DOT__mem_ren));
    bufp->fullIData(oldp+156,((0xfffffffcU & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data)),32);
    bufp->fullCData(oldp+157,(((0U == (IData)(vlSelf->Core__DOT__MEM__DOT__width))
                                ? 1U : ((1U == (IData)(vlSelf->Core__DOT__MEM__DOT__width))
                                         ? 3U : ((2U 
                                                  == (IData)(vlSelf->Core__DOT__MEM__DOT__width))
                                                  ? 0xfU
                                                  : 0U)))),4);
    bufp->fullBit(oldp+158,(((1U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                             | (2U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)))));
    bufp->fullIData(oldp+159,((IData)(((0U == (IData)(vlSelf->Core__DOT__MEM__DOT__width))
                                        ? ((0U == (3U 
                                                   & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data))
                                            ? (QData)((IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuData))
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data))
                                                ? ((QData)((IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuData)) 
                                                   << 8U)
                                                : (
                                                   (2U 
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
                                                : (
                                                   (2U 
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
    bufp->fullIData(oldp+160,(vlSelf->Core__DOT__MEM__DOT__mem_rdata),32);
    bufp->fullBit(oldp+161,(vlSelf->Core__DOT__MEM__DOT__ren));
    bufp->fullCData(oldp+162,(vlSelf->Core__DOT__MEM__DOT__width),2);
    bufp->fullCData(oldp+163,((3U & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data)),2);
    bufp->fullQData(oldp+164,(((0U == (IData)(vlSelf->Core__DOT__MEM__DOT__width))
                                ? ((0U == (3U & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data))
                                    ? (QData)((IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuData))
                                    : ((1U == (3U & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data))
                                        ? ((QData)((IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuData)) 
                                           << 8U) : 
                                       ((2U == (3U 
                                                & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data))
                                         ? ((QData)((IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuData)) 
                                            << 0x10U)
                                         : ((3U == 
                                             (3U & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data))
                                             ? ((QData)((IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuData)) 
                                                << 0x18U)
                                             : 0ULL))))
                                : ((1U == (IData)(vlSelf->Core__DOT__MEM__DOT__width))
                                    ? ((0U == (3U & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data))
                                        ? (QData)((IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuData))
                                        : ((2U == (3U 
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
    bufp->fullBit(oldp+166,(vlSelf->Core__DOT__MEM__DOT__memAddr));
    bufp->fullBit(oldp+167,((7U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))));
    bufp->fullBit(oldp+168,((5U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))));
    bufp->fullBit(oldp+169,(((8U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType)) 
                             & (IData)(vlSelf->Core__DOT__MEM__DOT__memAddr))));
    bufp->fullBit(oldp+170,((1U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))));
    bufp->fullIData(oldp+171,(((1U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                ? 0xbU : ((8U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                           ? ((IData)(vlSelf->Core__DOT__MEM__DOT__memAddr)
                                               ? 4U
                                               : 0xdU)
                                           : 0U))),31);
    bufp->fullIData(oldp+172,(vlSelf->Core__DOT__MEM_WB__DOT__ff_reg_data),32);
    bufp->fullIData(oldp+173,(vlSelf->Core__DOT__MEM_WB__DOT__ff_currentPc),32);
    bufp->fullIData(oldp+174,(vlSelf->Core__DOT__MEM_WB__DOT__ff_inst),32);
    bufp->fullCData(oldp+175,(vlSelf->Core__DOT__csr__DOT__mode),2);
    bufp->fullBit(oldp+176,(vlSelf->Core__DOT__csr__DOT__mstatus_sum));
    bufp->fullCData(oldp+177,(vlSelf->Core__DOT__csr__DOT__mstatus_mpp),2);
    bufp->fullBit(oldp+178,(vlSelf->Core__DOT__csr__DOT__mstatus_spp));
    bufp->fullBit(oldp+179,(vlSelf->Core__DOT__csr__DOT__mstatus_mpie));
    bufp->fullBit(oldp+180,(vlSelf->Core__DOT__csr__DOT__mstatus_spie));
    bufp->fullBit(oldp+181,(vlSelf->Core__DOT__csr__DOT__mstatus_mie));
    bufp->fullBit(oldp+182,(vlSelf->Core__DOT__csr__DOT__mstatus_sie));
    bufp->fullIData(oldp+183,(vlSelf->Core__DOT__csr__DOT__medeleg_data),32);
    bufp->fullIData(oldp+184,(vlSelf->Core__DOT__csr__DOT__mideleg_data),32);
    bufp->fullBit(oldp+185,(vlSelf->Core__DOT__csr__DOT__mie_meie));
    bufp->fullBit(oldp+186,(vlSelf->Core__DOT__csr__DOT__mie_seie));
    bufp->fullBit(oldp+187,(vlSelf->Core__DOT__csr__DOT__mie_mtie));
    bufp->fullBit(oldp+188,(vlSelf->Core__DOT__csr__DOT__mie_stie));
    bufp->fullBit(oldp+189,(vlSelf->Core__DOT__csr__DOT__mie_msie));
    bufp->fullBit(oldp+190,(vlSelf->Core__DOT__csr__DOT__mie_ssie));
    bufp->fullIData(oldp+191,(vlSelf->Core__DOT__csr__DOT__mtvec_base),30);
    bufp->fullCData(oldp+192,(vlSelf->Core__DOT__csr__DOT__mtvec_mode),2);
    bufp->fullIData(oldp+193,(vlSelf->Core__DOT__csr__DOT__mscratch_data),32);
    bufp->fullIData(oldp+194,(vlSelf->Core__DOT__csr__DOT__mepc_data),32);
    bufp->fullBit(oldp+195,(vlSelf->Core__DOT__csr__DOT__mcause_int));
    bufp->fullIData(oldp+196,(vlSelf->Core__DOT__csr__DOT__mcause_code),31);
    bufp->fullIData(oldp+197,(vlSelf->Core__DOT__csr__DOT__mtval_data),32);
    bufp->fullBit(oldp+198,(vlSelf->Core__DOT__csr__DOT__mipReal_seip));
    bufp->fullBit(oldp+199,(vlSelf->Core__DOT__csr__DOT__mipReal_stip));
    bufp->fullBit(oldp+200,(vlSelf->Core__DOT__csr__DOT__mipReal_ssip));
    bufp->fullQData(oldp+201,(vlSelf->Core__DOT__csr__DOT__mcycle_data),64);
    bufp->fullQData(oldp+203,(vlSelf->Core__DOT__csr__DOT__minstret_data),64);
    bufp->fullIData(oldp+205,(vlSelf->Core__DOT__csr__DOT__stvec_base),30);
    bufp->fullCData(oldp+206,(vlSelf->Core__DOT__csr__DOT__stvec_mode),2);
    bufp->fullIData(oldp+207,(vlSelf->Core__DOT__csr__DOT__sscratch_data),32);
    bufp->fullIData(oldp+208,(vlSelf->Core__DOT__csr__DOT__sepc_data),32);
    bufp->fullBit(oldp+209,(vlSelf->Core__DOT__csr__DOT__scause_int));
    bufp->fullIData(oldp+210,(vlSelf->Core__DOT__csr__DOT__scause_code),31);
    bufp->fullIData(oldp+211,(vlSelf->Core__DOT__csr__DOT__stval_data),32);
    bufp->fullBit(oldp+212,(vlSelf->Core__DOT__csr__DOT__satp_mode));
    bufp->fullIData(oldp+213,(vlSelf->Core__DOT__csr__DOT__satp_ppn),22);
    bufp->fullBit(oldp+214,(vlSelf->Core__DOT__csr__DOT__readable));
    bufp->fullBit(oldp+215,(vlSelf->Core__DOT__csr__DOT__writable));
    bufp->fullBit(oldp+216,(((1U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                              ? (IData)(vlSelf->Core__DOT__csr__DOT__readable)
                              : ((2U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                  ? (IData)(vlSelf->Core__DOT__csr__DOT__writable)
                                  : ((3U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                      ? (IData)(vlSelf->Core__DOT__csr__DOT___T_319)
                                      : ((4U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                          ? (IData)(vlSelf->Core__DOT__csr__DOT___T_319)
                                          : ((5U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp)) 
                                             & (IData)(vlSelf->Core__DOT__csr__DOT___T_319))))))));
    bufp->fullBit(oldp+217,((((0U != (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                               ? ((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                                   ? (3U & (vlSelf->Core__DOT__ID__DOT___GEN_0 
                                            >> 0x1cU))
                                   : 0U) : 0U) <= (IData)(vlSelf->Core__DOT__csr__DOT__mode))));
    bufp->fullCData(oldp+218,(((IData)(vlSelf->Core__DOT__MEM_WB__DOT___T_2)
                                ? 0x1eU : ((IData)(vlSelf->Core__DOT__resoler_io_csrflag)
                                            ? 0x1cU
                                            : ((IData)(vlSelf->Core__DOT__resoler_io_loadflag)
                                                ? 0x18U
                                                : 0U)))),5);
    bufp->fullIData(oldp+219,(vlSelf->Core__DOT__fetch__DOT__pc),32);
    bufp->fullCData(oldp+220,((0x7fU & vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data)),7);
    bufp->fullBit(oldp+221,((0x63U == (0x7fU & vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data))));
    bufp->fullBit(oldp+222,((0x6fU == (0x7fU & vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data))));
    bufp->fullIData(oldp+223,(vlSelf->Core__DOT__fetch__DOT__bpu__DOT__inst_b_type_imm),32);
    bufp->fullIData(oldp+224,(((((vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data 
                                  >> 0x1fU) ? 0xfffU
                                  : 0U) << 0x14U) | 
                               ((0xff000U & vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data) 
                                | ((0x800U & (vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data 
                                              >> 9U)) 
                                   | (0x7feU & (vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data 
                                                >> 0x14U)))))),32);
    bufp->fullIData(oldp+225,(((0x63U == (0x7fU & vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data))
                                ? vlSelf->Core__DOT__fetch__DOT__bpu__DOT__inst_b_type_imm
                                : ((0x6fU == (0x7fU 
                                              & vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data))
                                    ? ((((vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data 
                                          >> 0x1fU)
                                          ? 0xfffU : 0U) 
                                        << 0x14U) | 
                                       ((0xff000U & vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data) 
                                        | ((0x800U 
                                            & (vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data 
                                                 >> 0x14U)))))
                                    : 0U))),32);
    bufp->fullIData(oldp+226,(((0x63U == (0x7fU & vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data))
                                ? vlSelf->Core__DOT__fetch__DOT__bpu__DOT__inst_b_type_imm
                                : (0x6fU == (0x7fU 
                                             & vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data)))),32);
    bufp->fullIData(oldp+227,(vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data),32);
    bufp->fullBit(oldp+228,(((IData)(vlSelf->Core__DOT__ID__DOT__regEn1) 
                             & ((IData)(vlSelf->Core__DOT__EX_io_ex_o_load) 
                                & (IData)(vlSelf->Core__DOT__resoler__DOT___T_2)))));
    bufp->fullBit(oldp+229,(((IData)(vlSelf->Core__DOT__ID_io_read2_en) 
                             & ((IData)(vlSelf->Core__DOT__EX_io_ex_o_load) 
                                & (IData)(vlSelf->Core__DOT__resoler__DOT___T_10)))));
    bufp->fullBit(oldp+230,(vlSelf->clock));
    bufp->fullBit(oldp+231,(vlSelf->reset));
    bufp->fullBit(oldp+232,(vlSelf->io_timer));
    bufp->fullBit(oldp+233,(vlSelf->io_soft));
    bufp->fullBit(oldp+234,(vlSelf->io_extern));
    bufp->fullIData(oldp+235,(vlSelf->io_inst),32);
    bufp->fullIData(oldp+236,(vlSelf->io_pc),32);
    bufp->fullIData(oldp+237,(vlSelf->io_npc),32);
    bufp->fullIData(oldp+238,(vlSelf->io_next),32);
    bufp->fullIData(oldp+239,(vlSelf->io_flushpc),32);
    bufp->fullBit(oldp+240,(vlSelf->io_flush));
    bufp->fullBit(oldp+241,(vlSelf->io_stall));
    bufp->fullIData(oldp+242,(vlSelf->io_wbinst),32);
    bufp->fullBit(oldp+243,(vlSelf->io_bputake));
    bufp->fullIData(oldp+244,(vlSelf->io_bpuaddr),32);
    bufp->fullIData(oldp+245,(vlSelf->io_idpc),32);
    bufp->fullIData(oldp+246,(vlSelf->io_idinst),32);
    bufp->fullIData(oldp+247,(vlSelf->io_expc),32);
    bufp->fullIData(oldp+248,(vlSelf->io_exinst),32);
    bufp->fullIData(oldp+249,(vlSelf->io_mempc),32);
    bufp->fullIData(oldp+250,(vlSelf->io_meminst),32);
    bufp->fullIData(oldp+251,(vlSelf->io_result),32);
    bufp->fullIData(oldp+252,(((IData)(vlSelf->io_flush)
                                ? vlSelf->io_flushpc
                                : ((IData)(vlSelf->io_stall)
                                    ? vlSelf->Core__DOT__fetch__DOT__pc
                                    : ((IData)(vlSelf->io_bputake)
                                        ? vlSelf->io_bpuaddr
                                        : ((IData)(4U) 
                                           + vlSelf->Core__DOT__fetch__DOT__pc))))),32);
    bufp->fullBit(oldp+253,(0U));
}
