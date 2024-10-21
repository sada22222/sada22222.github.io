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
    tracep->declBit(c+236,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+238,"io_if_axi_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"io_if_axi_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"io_if_axi_fault",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+241,"io_if_axi_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+242,"io_if_axi_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+243,"io_if_axi_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+244,"io_if_axi_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+245,"io_timer",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+246,"io_soft",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+247,"io_extern",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+248,"io_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+249,"io_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+250,"io_npc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("Core ");
    tracep->declBit(c+236,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+238,"io_if_axi_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"io_if_axi_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"io_if_axi_fault",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+241,"io_if_axi_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+242,"io_if_axi_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+243,"io_if_axi_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+244,"io_if_axi_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+245,"io_timer",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+246,"io_soft",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+247,"io_extern",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+248,"io_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+249,"io_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+242,"io_npc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+236,"fetch_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"fetch_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"fetch_io_rom_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+242,"fetch_io_rom_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+243,"fetch_io_rom_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1,"fetch_io_flush",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"fetch_io_flush_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+251,"fetch_io_stall",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"fetch_io_stallreq",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+242,"fetch_io_IF_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+239,"fetch_io_IF_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+248,"fetch_io_IF_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+252,"fetch_io_IF_bpu_take",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"fetch_io_IF_bpu_takepc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+28,"fetch_io_IF_misaligned",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+236,"IF_ID_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"IF_ID_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"IF_ID_io_flush",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"IF_ID_io_stallPrev",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+242,"IF_ID_io_prev_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+239,"IF_ID_io_prev_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+248,"IF_ID_io_prev_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+252,"IF_ID_io_prev_bpu_take",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"IF_ID_io_prev_bpu_takepc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+28,"IF_ID_io_prev_misaligned",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"IF_ID_io_next_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+30,"IF_ID_io_next_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+31,"IF_ID_io_next_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+32,"IF_ID_io_next_bpu_take",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"IF_ID_io_next_bpu_takepc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+34,"IF_ID_io_next_misaligned",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+236,"ID_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"ID_io_if_i_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+30,"ID_io_if_i_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+31,"ID_io_if_i_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+32,"ID_io_if_i_bpu_take",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"ID_io_if_i_bpu_takepc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+34,"ID_io_if_i_misaligned",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"ID_io_read1_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"ID_io_read1_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+37,"ID_io_read1_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+38,"ID_io_read2_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+39,"ID_io_read2_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+40,"ID_io_read2_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+41,"ID_io_stallid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+6,"ID_io_csrread_csr_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"ID_io_csrread_csr_raddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"ID_io_csrread_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+44,"ID_io_csrread_csr_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"ID_io_flush",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"ID_io_flushpc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"ID_io_id_o_aluOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+48,"ID_io_id_o_opr1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"ID_io_id_o_opr2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"ID_io_id_o_lsuOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+40,"ID_io_id_o_lsuData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+51,"ID_io_id_o_regWen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+52,"ID_io_id_o_regWaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+43,"ID_io_id_o_csrOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+53,"ID_io_id_o_csrAddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+54,"ID_io_id_o_csren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+6,"ID_io_id_o_csrrData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+55,"ID_io_id_o_csrwData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+56,"ID_io_id_o_excType",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+57,"ID_io_id_o_excValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+31,"ID_io_id_o_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+29,"ID_io_id_o_currentPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+236,"ID_EX_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"ID_EX_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"ID_EX_io_flush",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"ID_EX_io_stallPrev",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+47,"ID_EX_io_prev_aluOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+48,"ID_EX_io_prev_opr1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"ID_EX_io_prev_opr2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"ID_EX_io_prev_lsuOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+40,"ID_EX_io_prev_lsuData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+51,"ID_EX_io_prev_regWen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+52,"ID_EX_io_prev_regWaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+43,"ID_EX_io_prev_csrOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+53,"ID_EX_io_prev_csrAddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+54,"ID_EX_io_prev_csren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+6,"ID_EX_io_prev_csrrData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+55,"ID_EX_io_prev_csrwData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+56,"ID_EX_io_prev_excType",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+57,"ID_EX_io_prev_excValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+31,"ID_EX_io_prev_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+29,"ID_EX_io_prev_currentPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+58,"ID_EX_io_next_aluOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+59,"ID_EX_io_next_opr1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+60,"ID_EX_io_next_opr2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+61,"ID_EX_io_next_lsuOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+62,"ID_EX_io_next_lsuData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+63,"ID_EX_io_next_regWen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+64,"ID_EX_io_next_regWaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+65,"ID_EX_io_next_csrOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+66,"ID_EX_io_next_csrAddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+67,"ID_EX_io_next_csren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+68,"ID_EX_io_next_csrrData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+69,"ID_EX_io_next_csrwData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+70,"ID_EX_io_next_excType",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+71,"ID_EX_io_next_excValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"ID_EX_io_next_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"ID_EX_io_next_currentPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+58,"EX_io_id_i_aluOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+59,"EX_io_id_i_opr1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+60,"EX_io_id_i_opr2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+61,"EX_io_id_i_lsuOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+62,"EX_io_id_i_lsuData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+63,"EX_io_id_i_regWen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+64,"EX_io_id_i_regWaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+65,"EX_io_id_i_csrOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+66,"EX_io_id_i_csrAddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+67,"EX_io_id_i_csren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+68,"EX_io_id_i_csrrData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+69,"EX_io_id_i_csrwData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+70,"EX_io_id_i_excType",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+71,"EX_io_id_i_excValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"EX_io_id_i_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"EX_io_id_i_currentPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+61,"EX_io_ex_o_lsuOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+62,"EX_io_ex_o_lsuData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+63,"EX_io_ex_o_reg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+64,"EX_io_ex_o_reg_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+74,"EX_io_ex_o_reg_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+75,"EX_io_ex_o_load",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+65,"EX_io_ex_o_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+66,"EX_io_ex_o_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+69,"EX_io_ex_o_csr_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+76,"EX_io_ex_o_csr_retired",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+70,"EX_io_ex_o_excType",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+71,"EX_io_ex_o_excValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"EX_io_ex_o_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"EX_io_ex_o_currentPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+236,"EX_MEM_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"EX_MEM_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"EX_MEM_io_flush",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"EX_MEM_io_stallPrev",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+61,"EX_MEM_io_prev_lsuOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+62,"EX_MEM_io_prev_lsuData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+63,"EX_MEM_io_prev_reg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+64,"EX_MEM_io_prev_reg_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+74,"EX_MEM_io_prev_reg_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+75,"EX_MEM_io_prev_load",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+65,"EX_MEM_io_prev_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+66,"EX_MEM_io_prev_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+69,"EX_MEM_io_prev_csr_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+76,"EX_MEM_io_prev_csr_retired",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+70,"EX_MEM_io_prev_excType",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+71,"EX_MEM_io_prev_excValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"EX_MEM_io_prev_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"EX_MEM_io_prev_currentPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"EX_MEM_io_next_lsuOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+79,"EX_MEM_io_next_lsuData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+80,"EX_MEM_io_next_reg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+81,"EX_MEM_io_next_reg_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+82,"EX_MEM_io_next_reg_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+83,"EX_MEM_io_next_load",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+84,"EX_MEM_io_next_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+85,"EX_MEM_io_next_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+86,"EX_MEM_io_next_csr_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+87,"EX_MEM_io_next_csr_retired",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+88,"EX_MEM_io_next_excType",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+89,"EX_MEM_io_next_excValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+90,"EX_MEM_io_next_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+91,"EX_MEM_io_next_currentPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+236,"MEM_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+78,"MEM_io_ex_i_lsuOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+79,"MEM_io_ex_i_lsuData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+80,"MEM_io_ex_i_reg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+81,"MEM_io_ex_i_reg_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+82,"MEM_io_ex_i_reg_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+83,"MEM_io_ex_i_load",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+84,"MEM_io_ex_i_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+85,"MEM_io_ex_i_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+86,"MEM_io_ex_i_csr_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+87,"MEM_io_ex_i_csr_retired",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+88,"MEM_io_ex_i_excType",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+89,"MEM_io_ex_i_excValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+90,"MEM_io_ex_i_inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+91,"MEM_io_ex_i_currentPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+92,"MEM_io_stallReq",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"MEM_io_except_hasTrap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+93,"MEM_io_except_excCause",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 30,0);
    tracep->declBus(c+91,"MEM_io_except_excPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+94,"MEM_io_except_excValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+7,"MEM_io_csrHasInt",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+95,"MEM_io_csrBusy",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"MEM_io_mem_o_reg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+81,"MEM_io_mem_o_reg_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+96,"MEM_io_mem_o_reg_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+84,"MEM_io_mem_o_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+85,"MEM_io_mem_o_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+86,"MEM_io_mem_o_csr_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+87,"MEM_io_mem_o_csr_retired",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+91,"MEM_io_mem_o_currentPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+236,"MEM_WB_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"MEM_WB_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"MEM_WB_io_flush",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"MEM_WB_io_stallPrev",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"MEM_WB_io_prev_reg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+81,"MEM_WB_io_prev_reg_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+96,"MEM_WB_io_prev_reg_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+84,"MEM_WB_io_prev_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+85,"MEM_WB_io_prev_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+86,"MEM_WB_io_prev_csr_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+87,"MEM_WB_io_prev_csr_retired",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+91,"MEM_WB_io_prev_currentPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+97,"MEM_WB_io_next_reg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+98,"MEM_WB_io_next_reg_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+99,"MEM_WB_io_next_reg_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+100,"MEM_WB_io_next_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+101,"MEM_WB_io_next_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+102,"MEM_WB_io_next_csr_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+103,"MEM_WB_io_next_csr_retired",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+249,"MEM_WB_io_next_currentPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+97,"WB_io_mem_i_reg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+98,"WB_io_mem_i_reg_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+99,"WB_io_mem_i_reg_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+100,"WB_io_mem_i_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+101,"WB_io_mem_i_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+102,"WB_io_mem_i_csr_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+103,"WB_io_mem_i_csr_retired",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+249,"WB_io_mem_i_currentPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+97,"WB_io_regen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+98,"WB_io_regaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+99,"WB_io_regdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+100,"WB_io_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+101,"WB_io_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+102,"WB_io_csr_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+103,"WB_io_csr_retired",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+249,"WB_io_wb_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+104,"dpic_s_regs_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+105,"dpic_s_regs_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+106,"dpic_s_regs_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+107,"dpic_s_regs_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+108,"dpic_s_regs_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+109,"dpic_s_regs_5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+110,"dpic_s_regs_6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+111,"dpic_s_regs_7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+112,"dpic_s_regs_8",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+113,"dpic_s_regs_9",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+114,"dpic_s_regs_10",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+115,"dpic_s_regs_11",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+116,"dpic_s_regs_12",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+117,"dpic_s_regs_13",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+118,"dpic_s_regs_14",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+119,"dpic_s_regs_15",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+120,"dpic_s_regs_16",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+121,"dpic_s_regs_17",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+122,"dpic_s_regs_18",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+123,"dpic_s_regs_19",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+124,"dpic_s_regs_20",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"dpic_s_regs_21",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+126,"dpic_s_regs_22",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+127,"dpic_s_regs_23",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+128,"dpic_s_regs_24",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+129,"dpic_s_regs_25",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+130,"dpic_s_regs_26",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+131,"dpic_s_regs_27",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+132,"dpic_s_regs_28",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+133,"dpic_s_regs_29",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"dpic_s_regs_30",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+135,"dpic_s_regs_31",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+236,"regfile_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"regfile_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"regfile_io_read1_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"regfile_io_read1_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+136,"regfile_io_read1_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+38,"regfile_io_read2_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+39,"regfile_io_read2_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+137,"regfile_io_read2_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+97,"regfile_io_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+98,"regfile_io_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+99,"regfile_io_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+104,"regfile_io_s_regs_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+105,"regfile_io_s_regs_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+106,"regfile_io_s_regs_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+107,"regfile_io_s_regs_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+108,"regfile_io_s_regs_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+109,"regfile_io_s_regs_5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+110,"regfile_io_s_regs_6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+111,"regfile_io_s_regs_7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+112,"regfile_io_s_regs_8",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+113,"regfile_io_s_regs_9",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+114,"regfile_io_s_regs_10",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+115,"regfile_io_s_regs_11",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+116,"regfile_io_s_regs_12",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+117,"regfile_io_s_regs_13",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+118,"regfile_io_s_regs_14",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+119,"regfile_io_s_regs_15",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+120,"regfile_io_s_regs_16",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+121,"regfile_io_s_regs_17",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+122,"regfile_io_s_regs_18",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+123,"regfile_io_s_regs_19",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+124,"regfile_io_s_regs_20",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"regfile_io_s_regs_21",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+126,"regfile_io_s_regs_22",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+127,"regfile_io_s_regs_23",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+128,"regfile_io_s_regs_24",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+129,"regfile_io_s_regs_25",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+130,"regfile_io_s_regs_26",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+131,"regfile_io_s_regs_27",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+132,"regfile_io_s_regs_28",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+133,"regfile_io_s_regs_29",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"regfile_io_s_regs_30",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+135,"regfile_io_s_regs_31",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+35,"resoler_io_id_read1_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"resoler_io_id_read1_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+37,"resoler_io_id_read1_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+38,"resoler_io_id_read2_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+39,"resoler_io_id_read2_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+40,"resoler_io_id_read2_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+6,"resoler_io_csrRead_csr_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"resoler_io_csrRead_csr_raddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"resoler_io_csrRead_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+44,"resoler_io_csrRead_csr_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"resoler_io_rs1_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"resoler_io_rs1_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+136,"resoler_io_rs1_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+38,"resoler_io_rs2_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+39,"resoler_io_rs2_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+137,"resoler_io_rs2_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+6,"resoler_io_csr_csr_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"resoler_io_csr_csr_raddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"resoler_io_csr_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+44,"resoler_io_csr_csr_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"resoler_io_load",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"resoler_io_ex_reg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+64,"resoler_io_ex_reg_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+74,"resoler_io_ex_reg_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+65,"resoler_io_ex_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+66,"resoler_io_ex_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+80,"resoler_io_mem_reg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+81,"resoler_io_mem_reg_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+96,"resoler_io_mem_reg_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+84,"resoler_io_mem_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+85,"resoler_io_mem_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+97,"resoler_io_wb_reg_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+98,"resoler_io_wb_reg_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+99,"resoler_io_wb_reg_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+100,"resoler_io_wb_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+101,"resoler_io_wb_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+138,"resoler_io_loadflag",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"resoler_io_csrflag",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"ctrl_io_if_stall",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"ctrl_io_id_flush",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"ctrl_io_id_flushpc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+92,"ctrl_io_mem_stall",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+138,"ctrl_io_loadflag",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"ctrl_io_csrflag",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"ctrl_io_except_hasTrap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"ctrl_io_csrTvec",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5,"ctrl_io_stallIf",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"ctrl_io_stallId",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"ctrl_io_stallEx",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"ctrl_io_stallMm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"ctrl_io_flush",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"ctrl_io_flushIf",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"ctrl_io_flushPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+236,"csr_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"csr_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+6,"csr_io_read_csr_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"csr_io_read_csr_raddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"csr_io_read_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+44,"csr_io_read_csr_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+100,"csr_io_write_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+101,"csr_io_write_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+102,"csr_io_write_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+103,"csr_io_write_retired",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"csr_io_except_hasTrap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+93,"csr_io_except_excCause",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 30,0);
    tracep->declBus(c+91,"csr_io_except_excPc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+94,"csr_io_except_excValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+245,"csr_io_timer",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+246,"csr_io_soft",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+247,"csr_io_extern",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"csr_io_hasInt",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+95,"csr_io_busy",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"csr_io_trapVec",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("EX ");
    tracep->declBus(c+58,"io_id_i_aluOp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+59,"io_id_i_opr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+60,"io_id_i_opr2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+61,"io_id_i_lsuOp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+62,"io_id_i_lsuData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+63,"io_id_i_regWen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+64,"io_id_i_regWaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+65,"io_id_i_csrOp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+66,"io_id_i_csrAddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+67,"io_id_i_csren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+68,"io_id_i_csrrData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+69,"io_id_i_csrwData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+70,"io_id_i_excType",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+71,"io_id_i_excValue",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"io_id_i_inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"io_id_i_currentPc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+61,"io_ex_o_lsuOp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+62,"io_ex_o_lsuData",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+63,"io_ex_o_reg_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+64,"io_ex_o_reg_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+74,"io_ex_o_reg_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+75,"io_ex_o_load",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+65,"io_ex_o_csr_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+66,"io_ex_o_csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+69,"io_ex_o_csr_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+76,"io_ex_o_csr_retired",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+70,"io_ex_o_excType",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+71,"io_ex_o_excValue",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"io_ex_o_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"io_ex_o_currentPc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declQuad(c+140,"Aluresult",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 62,0);
    tracep->declQuad(c+142,"result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 62,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX_MEM ");
    tracep->declBit(c+236,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"io_stallPrev",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+61,"io_prev_lsuOp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+62,"io_prev_lsuData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+63,"io_prev_reg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+64,"io_prev_reg_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+74,"io_prev_reg_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+75,"io_prev_load",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+65,"io_prev_csr_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+66,"io_prev_csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+69,"io_prev_csr_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+76,"io_prev_csr_retired",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+70,"io_prev_excType",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+71,"io_prev_excValue",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"io_prev_inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"io_prev_currentPc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"io_next_lsuOp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+79,"io_next_lsuData",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+80,"io_next_reg_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+81,"io_next_reg_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+82,"io_next_reg_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+83,"io_next_load",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+84,"io_next_csr_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+85,"io_next_csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+86,"io_next_csr_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+87,"io_next_csr_retired",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+88,"io_next_excType",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+89,"io_next_excValue",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+90,"io_next_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+91,"io_next_currentPc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"ff_lsuOp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+79,"ff_lsuData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+80,"ff_reg_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+81,"ff_reg_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+82,"ff_reg_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+83,"ff_load",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+84,"ff_csr_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+85,"ff_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+86,"ff_csr_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+87,"ff_csr_retired",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+88,"ff_excType",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+89,"ff_excValue",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,"ff_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,"ff_currentPc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+236,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"io_if_i_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+30,"io_if_i_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+31,"io_if_i_inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+32,"io_if_i_bpu_take",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"io_if_i_bpu_takepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+34,"io_if_i_misaligned",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"io_read1_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"io_read1_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+37,"io_read1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+38,"io_read2_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+39,"io_read2_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+40,"io_read2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+41,"io_stallid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+6,"io_csrread_csr_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"io_csrread_csr_raddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"io_csrread_csr_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+44,"io_csrread_csr_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"io_flush",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"io_flushpc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"io_id_o_aluOp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+48,"io_id_o_opr1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"io_id_o_opr2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"io_id_o_lsuOp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+40,"io_id_o_lsuData",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+51,"io_id_o_regWen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+52,"io_id_o_regWaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+43,"io_id_o_csrOp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+53,"io_id_o_csrAddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+54,"io_id_o_csren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+6,"io_id_o_csrrData",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+55,"io_id_o_csrwData",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+56,"io_id_o_excType",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+57,"io_id_o_excValue",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+31,"io_id_o_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+29,"io_id_o_currentPc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+144,"stall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+145,"lastinst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,"inst",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+52,"rd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+36,"rs1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+39,"rs2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+53,"immI",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+35,"regEn1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+147,"aluSrc1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+148,"aluSrc2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+149,"branchOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+150,"csrOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+151,"excType",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+152,"all_jump",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+153,"jal_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+154,"imm_jalr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declQuad(c+155,"jalr_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 32,0);
    tracep->declQuad(c+157,"pc_j",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 32,0);
    tracep->declBus(c+159,"pc_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declQuad(c+160,"takepc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 32,0);
    tracep->declBit(c+162,"branchteke",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"branchmiss",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+163,"flushpc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 32,0);
    tracep->declBit(c+165,"addrFault",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+43,"csrActOp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+54,"csren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+166,"exceptValue",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 32,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID_EX ");
    tracep->declBit(c+236,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"io_stallPrev",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+47,"io_prev_aluOp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+48,"io_prev_opr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"io_prev_opr2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"io_prev_lsuOp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+40,"io_prev_lsuData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+51,"io_prev_regWen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+52,"io_prev_regWaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+43,"io_prev_csrOp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+53,"io_prev_csrAddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+54,"io_prev_csren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+6,"io_prev_csrrData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+55,"io_prev_csrwData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+56,"io_prev_excType",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+57,"io_prev_excValue",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+31,"io_prev_inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+29,"io_prev_currentPc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+58,"io_next_aluOp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+59,"io_next_opr1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+60,"io_next_opr2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+61,"io_next_lsuOp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+62,"io_next_lsuData",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+63,"io_next_regWen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+64,"io_next_regWaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+65,"io_next_csrOp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+66,"io_next_csrAddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+67,"io_next_csren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+68,"io_next_csrrData",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+69,"io_next_csrwData",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+70,"io_next_excType",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+71,"io_next_excValue",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"io_next_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"io_next_currentPc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+58,"ff_aluOp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+59,"ff_opr1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,"ff_opr2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,"ff_lsuOp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+62,"ff_lsuData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+63,"ff_regWen",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+64,"ff_regWaddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+65,"ff_csrOp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+66,"ff_csrAddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBit(c+67,"ff_csren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+68,"ff_csrrData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,"ff_csrwData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,"ff_excType",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+71,"ff_excValue",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,"ff_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,"ff_currentPc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_ID ");
    tracep->declBit(c+236,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"io_stallPrev",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+242,"io_prev_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+239,"io_prev_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+248,"io_prev_inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+252,"io_prev_bpu_take",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"io_prev_bpu_takepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+28,"io_prev_misaligned",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"io_next_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+30,"io_next_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+31,"io_next_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+32,"io_next_bpu_take",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"io_next_bpu_takepc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+34,"io_next_misaligned",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"ff_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,"ff_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+31,"ff_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,"ff_bpu_take",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+33,"ff_bpu_takepc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,"ff_misaligned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+236,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+78,"io_ex_i_lsuOp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+79,"io_ex_i_lsuData",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+80,"io_ex_i_reg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+81,"io_ex_i_reg_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+82,"io_ex_i_reg_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+83,"io_ex_i_load",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+84,"io_ex_i_csr_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+85,"io_ex_i_csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+86,"io_ex_i_csr_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+87,"io_ex_i_csr_retired",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+88,"io_ex_i_excType",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+89,"io_ex_i_excValue",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+90,"io_ex_i_inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+91,"io_ex_i_currentPc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+92,"io_stallReq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"io_except_hasTrap",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+93,"io_except_excCause",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 30,0);
    tracep->declBus(c+91,"io_except_excPc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+94,"io_except_excValue",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+7,"io_csrHasInt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+95,"io_csrBusy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"io_mem_o_reg_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+81,"io_mem_o_reg_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+96,"io_mem_o_reg_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+84,"io_mem_o_csr_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+85,"io_mem_o_csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+86,"io_mem_o_csr_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+87,"io_mem_o_csr_retired",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+91,"io_mem_o_currentPc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+236,"mem_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+168,"mem_wen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+169,"mem_ren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+170,"mem_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+171,"mem_mask",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+172,"mem_sign",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+173,"mem_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+174,"mem_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+168,"wen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+175,"ren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+176,"width",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+177,"sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+178,"writeEn",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+179,"ramWen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declQuad(c+180,"lsuData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 55,0);
    tracep->declBit(c+182,"memAddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+183,"instAddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+184,"instIllg",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+185,"excMem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+186,"excOther",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+187,"cause",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 30,0);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+236,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+168,"wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+169,"ren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+170,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+171,"mask",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+172,"sign",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+173,"wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+174,"rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("MEM_WB ");
    tracep->declBit(c+236,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"io_stallPrev",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"io_prev_reg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+81,"io_prev_reg_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+96,"io_prev_reg_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+84,"io_prev_csr_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+85,"io_prev_csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+86,"io_prev_csr_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+87,"io_prev_csr_retired",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+91,"io_prev_currentPc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+97,"io_next_reg_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+98,"io_next_reg_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+99,"io_next_reg_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+100,"io_next_csr_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+101,"io_next_csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+102,"io_next_csr_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+103,"io_next_csr_retired",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+249,"io_next_currentPc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+97,"ff_reg_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+98,"ff_reg_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+99,"ff_reg_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,"ff_csr_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+101,"ff_csr_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+102,"ff_csr_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+103,"ff_csr_retired",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+188,"ff_currentPc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+97,"io_mem_i_reg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+98,"io_mem_i_reg_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+99,"io_mem_i_reg_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+100,"io_mem_i_csr_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+101,"io_mem_i_csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+102,"io_mem_i_csr_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+103,"io_mem_i_csr_retired",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+249,"io_mem_i_currentPc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+97,"io_regen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+98,"io_regaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+99,"io_regdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+100,"io_csr_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+101,"io_csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+102,"io_csr_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+103,"io_csr_retired",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+249,"io_wb_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+236,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+6,"io_read_csr_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"io_read_csr_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"io_read_csr_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+44,"io_read_csr_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+100,"io_write_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+101,"io_write_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+102,"io_write_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+103,"io_write_retired",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"io_except_hasTrap",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+93,"io_except_excCause",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 30,0);
    tracep->declBus(c+91,"io_except_excPc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+94,"io_except_excValue",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+245,"io_timer",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+246,"io_soft",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+247,"io_extern",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"io_hasInt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+95,"io_busy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"io_trapVec",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+189,"mode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+190,"mstatus_sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+191,"mstatus_mpp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+192,"mstatus_spp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+193,"mstatus_mpie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+194,"mstatus_spie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+195,"mstatus_mie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+196,"mstatus_sie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+197,"medeleg_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+198,"mideleg_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+199,"mie_meie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+200,"mie_seie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+201,"mie_mtie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+202,"mie_stie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+203,"mie_msie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+204,"mie_ssie",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+205,"mtvec_base",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 29,0);
    tracep->declBus(c+206,"mtvec_mode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+207,"mscratch_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,"mepc_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+209,"mcause_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+210,"mcause_code",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 30,0);
    tracep->declBus(c+211,"mtval_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+212,"mipReal_seip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+213,"mipReal_stip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+214,"mipReal_ssip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+215,"mcycle_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+217,"minstret_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBit(c+190,"sstatus_sum",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+192,"sstatus_spp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+194,"sstatus_spie",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+196,"sstatus_sie",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+200,"sie_seie",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+202,"sie_stie",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+204,"sie_ssie",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+219,"stvec_base",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 29,0);
    tracep->declBus(c+220,"stvec_mode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+221,"sscratch_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,"sepc_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+223,"scause_int",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+224,"scause_code",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 30,0);
    tracep->declBus(c+225,"stval_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+226,"satp_mode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+227,"satp_ppn",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 21,0);
    tracep->declBit(c+9,"mip_ssip",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"mip_stip",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"mip_seip",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+228,"readable",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+229,"writable",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+230,"readValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"modeValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+12,"csrData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+95,"writeEn",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+13,"writeData",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+14,"flagIntS",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+15,"flagIntM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+16,"hasIntS",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"hasIntM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"hasInt",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"handIntS",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"hasExc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"hasExcS",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"handExcS",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+22,"intCauseS",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 30,0);
    tracep->declBus(c+23,"intCauseM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 30,0);
    tracep->declBus(c+24,"intCause",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 30,0);
    tracep->declBus(c+25,"cause",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+26,"trapVecS",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+27,"trapVecM",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ctrl ");
    tracep->declBit(c+251,"io_if_stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"io_id_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"io_id_flushpc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+92,"io_mem_stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+138,"io_loadflag",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"io_csrflag",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"io_except_hasTrap",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"io_csrTvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5,"io_stallIf",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"io_stallId",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"io_stallEx",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"io_stallMm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"io_flush",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"io_flushIf",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"io_flushPc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+253,"stall",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dpic ");
    tracep->declBus(c+104,"s_regs_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+105,"s_regs_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+106,"s_regs_2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+107,"s_regs_3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+108,"s_regs_4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+109,"s_regs_5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+110,"s_regs_6",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+111,"s_regs_7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+112,"s_regs_8",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+113,"s_regs_9",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+114,"s_regs_10",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+115,"s_regs_11",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+116,"s_regs_12",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+117,"s_regs_13",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+118,"s_regs_14",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+119,"s_regs_15",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+120,"s_regs_16",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+121,"s_regs_17",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+122,"s_regs_18",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+123,"s_regs_19",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+124,"s_regs_20",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"s_regs_21",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+126,"s_regs_22",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+127,"s_regs_23",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+128,"s_regs_24",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+129,"s_regs_25",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+130,"s_regs_26",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+131,"s_regs_27",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+132,"s_regs_28",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+133,"s_regs_29",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"s_regs_30",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+135,"s_regs_31",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+236,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"io_rom_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+242,"io_rom_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+243,"io_rom_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1,"io_flush",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"io_flush_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+251,"io_stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"io_stallreq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+242,"io_IF_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+239,"io_IF_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+248,"io_IF_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+252,"io_IF_bpu_take",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"io_IF_bpu_takepc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+28,"io_IF_misaligned",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+243,"bpu_io_inst_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+239,"bpu_io_inst_valid_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+242,"bpu_io_pc_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+252,"bpu_io_prdt_taken_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"bpu_io_prdt_addr_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+242,"read_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+248,"read_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+236,"read_clock",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"read_reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+232,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("bpu ");
    tracep->declBus(c+243,"io_inst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+239,"io_inst_valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+242,"io_pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+252,"io_prdt_taken_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"io_prdt_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+254,"opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+255,"inst_type_branch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+256,"inst_jal",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+257,"inst_b_type_imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+258,"inst_j_type_imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+259,"prdt_taken",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+260,"prdt_imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("read ");
    tracep->declBus(c+242,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+236,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+248,"data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+233,"fetched_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+236,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"io_read1_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"io_read1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+136,"io_read1_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+38,"io_read2_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+39,"io_read2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+137,"io_read2_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+97,"io_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+98,"io_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+99,"io_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+104,"io_s_regs_0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+105,"io_s_regs_1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+106,"io_s_regs_2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+107,"io_s_regs_3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+108,"io_s_regs_4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+109,"io_s_regs_5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+110,"io_s_regs_6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+111,"io_s_regs_7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+112,"io_s_regs_8",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+113,"io_s_regs_9",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+114,"io_s_regs_10",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+115,"io_s_regs_11",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+116,"io_s_regs_12",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+117,"io_s_regs_13",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+118,"io_s_regs_14",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+119,"io_s_regs_15",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+120,"io_s_regs_16",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+121,"io_s_regs_17",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+122,"io_s_regs_18",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+123,"io_s_regs_19",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+124,"io_s_regs_20",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"io_s_regs_21",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+126,"io_s_regs_22",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+127,"io_s_regs_23",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+128,"io_s_regs_24",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+129,"io_s_regs_25",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+130,"io_s_regs_26",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+131,"io_s_regs_27",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+132,"io_s_regs_28",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+133,"io_s_regs_29",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+134,"io_s_regs_30",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+135,"io_s_regs_31",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+104,"regfile_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,"regfile_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,"regfile_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,"regfile_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,"regfile_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,"regfile_5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,"regfile_6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,"regfile_7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,"regfile_8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,"regfile_9",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,"regfile_10",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,"regfile_11",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,"regfile_12",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,"regfile_13",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,"regfile_14",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,"regfile_15",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,"regfile_16",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,"regfile_17",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,"regfile_18",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,"regfile_19",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,"regfile_20",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,"regfile_21",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,"regfile_22",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,"regfile_23",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,"regfile_24",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,"regfile_25",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,"regfile_26",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,"regfile_27",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,"regfile_28",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,"regfile_29",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,"regfile_30",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,"regfile_31",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("resoler ");
    tracep->declBit(c+35,"io_id_read1_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"io_id_read1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+37,"io_id_read1_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+38,"io_id_read2_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+39,"io_id_read2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+40,"io_id_read2_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+6,"io_csrRead_csr_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"io_csrRead_csr_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"io_csrRead_csr_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+44,"io_csrRead_csr_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"io_rs1_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"io_rs1_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+136,"io_rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+38,"io_rs2_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+39,"io_rs2_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+137,"io_rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+6,"io_csr_csr_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"io_csr_csr_raddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"io_csr_csr_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+44,"io_csr_csr_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"io_load",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"io_ex_reg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+64,"io_ex_reg_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+74,"io_ex_reg_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+65,"io_ex_csr_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+66,"io_ex_csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+80,"io_mem_reg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+81,"io_mem_reg_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+96,"io_mem_reg_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+84,"io_mem_csr_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+85,"io_mem_csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+97,"io_wb_reg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+98,"io_wb_reg_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+99,"io_wb_reg_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+100,"io_wb_csr_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+101,"io_wb_csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+138,"io_loadflag",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"io_csrflag",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+234,"load1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+235,"load2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
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
    bufp->fullBit(oldp+1,(((IData)(vlSelf->Core__DOT__IF_ID_io_flush) 
                           | (IData)(vlSelf->Core__DOT__ID__DOT__branchmiss))));
    bufp->fullIData(oldp+2,(((IData)(vlSelf->Core__DOT__IF_ID_io_flush)
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
                              : (IData)(((IData)(vlSelf->Core__DOT__ID__DOT__branchmiss)
                                          ? vlSelf->Core__DOT__ID__DOT__takepc
                                          : (QData)((IData)(
                                                            ((IData)(4U) 
                                                             + vlSelf->Core__DOT__IF_ID__DOT__ff_pc))))))),32);
    bufp->fullIData(oldp+3,(vlSelf->Core__DOT__fetch__DOT__bpu_io_prdt_addr_o),32);
    bufp->fullBit(oldp+4,(vlSelf->Core__DOT__IF_ID_io_flush));
    bufp->fullBit(oldp+5,(vlSelf->Core__DOT__IF_ID_io_stallPrev));
    bufp->fullIData(oldp+6,(((0xc00U == (IData)(vlSelf->Core__DOT__ID__DOT___T_839))
                              ? (IData)(vlSelf->Core__DOT__csr__DOT__mcycle_data)
                              : ((0xc02U == (IData)(vlSelf->Core__DOT__ID__DOT___T_839))
                                  ? (IData)(vlSelf->Core__DOT__csr__DOT__minstret_data)
                                  : ((0xc80U == (IData)(vlSelf->Core__DOT__ID__DOT___T_839))
                                      ? (IData)((vlSelf->Core__DOT__csr__DOT__mcycle_data 
                                                 >> 0x20U))
                                      : ((0xc82U == (IData)(vlSelf->Core__DOT__ID__DOT___T_839))
                                          ? (IData)(
                                                    (vlSelf->Core__DOT__csr__DOT__minstret_data 
                                                     >> 0x20U))
                                          : ((0x100U 
                                              == (IData)(vlSelf->Core__DOT__ID__DOT___T_839))
                                              ? vlSelf->Core__DOT__csr__DOT___T_74
                                              : ((0x104U 
                                                  == (IData)(vlSelf->Core__DOT__ID__DOT___T_839))
                                                  ? vlSelf->Core__DOT__csr__DOT___T_82
                                                  : 
                                                 ((0x105U 
                                                   == (IData)(vlSelf->Core__DOT__ID__DOT___T_839))
                                                   ? vlSelf->Core__DOT__csr__DOT___T_83
                                                   : 
                                                  ((0x106U 
                                                    == (IData)(vlSelf->Core__DOT__ID__DOT___T_839))
                                                    ? 0U
                                                    : 
                                                   ((0x140U 
                                                     == (IData)(vlSelf->Core__DOT__ID__DOT___T_839))
                                                     ? vlSelf->Core__DOT__csr__DOT__sscratch_data
                                                     : 
                                                    ((0x141U 
                                                      == (IData)(vlSelf->Core__DOT__ID__DOT___T_839))
                                                      ? vlSelf->Core__DOT__csr__DOT__sepc_data
                                                      : 
                                                     ((0x142U 
                                                       == (IData)(vlSelf->Core__DOT__ID__DOT___T_839))
                                                       ? vlSelf->Core__DOT__csr__DOT___T_84
                                                       : 
                                                      ((0x143U 
                                                        == (IData)(vlSelf->Core__DOT__ID__DOT___T_839))
                                                        ? vlSelf->Core__DOT__csr__DOT__stval_data
                                                        : 
                                                       ((0x144U 
                                                         == (IData)(vlSelf->Core__DOT__ID__DOT___T_839))
                                                         ? vlSelf->Core__DOT__csr__DOT___T_92
                                                         : 
                                                        ((0x180U 
                                                          == (IData)(vlSelf->Core__DOT__ID__DOT___T_839))
                                                          ? vlSelf->Core__DOT__csr__DOT___T_94
                                                          : 
                                                         ((0xf11U 
                                                           == (IData)(vlSelf->Core__DOT__ID__DOT___T_839))
                                                           ? 0U
                                                           : 
                                                          ((0xf12U 
                                                            == (IData)(vlSelf->Core__DOT__ID__DOT___T_839))
                                                            ? 0U
                                                            : vlSelf->Core__DOT__csr__DOT___T_235))))))))))))))))),32);
    bufp->fullBit(oldp+7,(vlSelf->Core__DOT__csr__DOT__hasInt));
    bufp->fullIData(oldp+8,(((IData)(vlSelf->Core__DOT__csr__DOT___T_605)
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
    bufp->fullBit(oldp+9,(vlSelf->Core__DOT__csr__DOT__mip_ssip));
    bufp->fullBit(oldp+10,(vlSelf->Core__DOT__csr__DOT__mip_stip));
    bufp->fullBit(oldp+11,(vlSelf->Core__DOT__csr__DOT__mip_seip));
    bufp->fullIData(oldp+12,(vlSelf->Core__DOT__csr__DOT__csrData),32);
    bufp->fullIData(oldp+13,(vlSelf->Core__DOT__csr__DOT__writeData),32);
    bufp->fullIData(oldp+14,(vlSelf->Core__DOT__csr__DOT__flagIntS),32);
    bufp->fullIData(oldp+15,(vlSelf->Core__DOT__csr__DOT__flagIntM),32);
    bufp->fullBit(oldp+16,((((1U > (IData)(vlSelf->Core__DOT__csr__DOT__mode)) 
                             | ((1U == (IData)(vlSelf->Core__DOT__csr__DOT__mode)) 
                                & (IData)(vlSelf->Core__DOT__csr__DOT__mstatus_sie))) 
                            & (0U != (vlSelf->Core__DOT__csr__DOT__flagIntS 
                                      & vlSelf->Core__DOT__csr__DOT__mideleg_data)))));
    bufp->fullBit(oldp+17,(vlSelf->Core__DOT__csr__DOT__hasIntM));
    bufp->fullBit(oldp+18,(vlSelf->Core__DOT__csr__DOT__handIntS));
    bufp->fullBit(oldp+19,(((~ (IData)(vlSelf->Core__DOT__csr__DOT__hasInt)) 
                            & (IData)(vlSelf->Core__DOT__IF_ID_io_flush))));
    bufp->fullBit(oldp+20,((((~ (IData)(vlSelf->Core__DOT__csr__DOT__hasInt)) 
                             & (IData)(vlSelf->Core__DOT__IF_ID_io_flush)) 
                            & (vlSelf->Core__DOT__csr__DOT__medeleg_data 
                               >> ((5U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                    ? 2U : ((7U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                             ? 0U : 
                                            ((1U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                              ? 0xbU
                                              : ((2U 
                                                  == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                                  ? 3U
                                                  : 
                                                 ((8U 
                                                   == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                                   ? 
                                                  ((IData)(vlSelf->Core__DOT__MEM__DOT__memAddr)
                                                    ? 4U
                                                    : 0xdU)
                                                   : 0U)))))))));
    bufp->fullBit(oldp+21,(vlSelf->Core__DOT__csr__DOT__handExcS));
    bufp->fullIData(oldp+22,(vlSelf->Core__DOT__csr__DOT__intCauseS),31);
    bufp->fullIData(oldp+23,(((0x800U & vlSelf->Core__DOT__csr__DOT__flagIntM)
                               ? 0xbU : ((8U & vlSelf->Core__DOT__csr__DOT__flagIntM)
                                          ? 3U : ((0x80U 
                                                   & vlSelf->Core__DOT__csr__DOT__flagIntM)
                                                   ? 7U
                                                   : vlSelf->Core__DOT__csr__DOT__intCauseS)))),31);
    bufp->fullIData(oldp+24,(((IData)(vlSelf->Core__DOT__csr__DOT__handIntS)
                               ? vlSelf->Core__DOT__csr__DOT__intCauseS
                               : ((0x800U & vlSelf->Core__DOT__csr__DOT__flagIntM)
                                   ? 0xbU : ((8U & vlSelf->Core__DOT__csr__DOT__flagIntM)
                                              ? 3U : 
                                             ((0x80U 
                                               & vlSelf->Core__DOT__csr__DOT__flagIntM)
                                               ? 7U
                                               : vlSelf->Core__DOT__csr__DOT__intCauseS))))),31);
    bufp->fullIData(oldp+25,(vlSelf->Core__DOT__csr__DOT__cause),32);
    bufp->fullIData(oldp+26,(((vlSelf->Core__DOT__csr__DOT__stvec_base 
                               + (((IData)(vlSelf->Core__DOT__csr__DOT__stvec_mode) 
                                   & (IData)(vlSelf->Core__DOT__csr__DOT__hasInt))
                                   ? vlSelf->Core__DOT__csr__DOT__cause
                                   : 0U)) << 2U)),32);
    bufp->fullIData(oldp+27,(((vlSelf->Core__DOT__csr__DOT__mtvec_base 
                               + (((IData)(vlSelf->Core__DOT__csr__DOT__mtvec_mode) 
                                   & (IData)(vlSelf->Core__DOT__csr__DOT__hasInt))
                                   ? vlSelf->Core__DOT__csr__DOT__cause
                                   : 0U)) << 2U)),32);
    bufp->fullBit(oldp+28,((0U != (3U & vlSelf->Core__DOT__fetch__DOT__pc))));
    bufp->fullIData(oldp+29,(vlSelf->Core__DOT__IF_ID__DOT__ff_pc),32);
    bufp->fullBit(oldp+30,(vlSelf->Core__DOT__IF_ID__DOT__ff_valid));
    bufp->fullIData(oldp+31,(vlSelf->Core__DOT__IF_ID__DOT__ff_inst),32);
    bufp->fullBit(oldp+32,(vlSelf->Core__DOT__IF_ID__DOT__ff_bpu_take));
    bufp->fullIData(oldp+33,(vlSelf->Core__DOT__IF_ID__DOT__ff_bpu_takepc),32);
    bufp->fullBit(oldp+34,(vlSelf->Core__DOT__IF_ID__DOT__ff_misaligned));
    bufp->fullBit(oldp+35,(vlSelf->Core__DOT__ID__DOT__regEn1));
    bufp->fullCData(oldp+36,(vlSelf->Core__DOT__ID__DOT__rs1),5);
    bufp->fullIData(oldp+37,(vlSelf->Core__DOT__ID_io_read1_data),32);
    bufp->fullBit(oldp+38,(vlSelf->Core__DOT__ID_io_read2_en));
    bufp->fullCData(oldp+39,(vlSelf->Core__DOT__ID__DOT__rs2),5);
    bufp->fullIData(oldp+40,(vlSelf->Core__DOT__ID_io_read2_data),32);
    bufp->fullBit(oldp+41,(vlSelf->Core__DOT__ID_io_stallid));
    bufp->fullIData(oldp+42,(vlSelf->Core__DOT__ID__DOT___T_839),32);
    bufp->fullCData(oldp+43,(vlSelf->Core__DOT__ID__DOT__csrActOp),3);
    bufp->fullBit(oldp+44,((((1U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
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
                                     ? (3U & (vlSelf->Core__DOT__ID__DOT___T_1 
                                              >> 0x1cU))
                                     : 0U) : 0U) <= (IData)(vlSelf->Core__DOT__csr__DOT__mode)))));
    bufp->fullBit(oldp+45,(vlSelf->Core__DOT__ID__DOT__branchmiss));
    bufp->fullIData(oldp+46,((IData)(((IData)(vlSelf->Core__DOT__ID__DOT__branchmiss)
                                       ? vlSelf->Core__DOT__ID__DOT__takepc
                                       : (QData)((IData)(
                                                         ((IData)(4U) 
                                                          + vlSelf->Core__DOT__IF_ID__DOT__ff_pc)))))),32);
    bufp->fullCData(oldp+47,(((0x33U == (0xfe00707fU 
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
    bufp->fullIData(oldp+48,(((1U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc1))
                               ? vlSelf->Core__DOT__ID_io_read1_data
                               : ((2U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc1))
                                   ? vlSelf->Core__DOT__ID_io_read2_data
                                   : ((3U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc1))
                                       ? vlSelf->Core__DOT__ID__DOT___GEN_2
                                       : ((4U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc1))
                                           ? vlSelf->Core__DOT__ID__DOT____VdfgTmp_h7417a8e6__0
                                           : ((5U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc1))
                                               ? vlSelf->Core__DOT__ID__DOT___T_848
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
    bufp->fullIData(oldp+49,(((1U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc2))
                               ? vlSelf->Core__DOT__ID_io_read1_data
                               : ((2U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc2))
                                   ? vlSelf->Core__DOT__ID_io_read2_data
                                   : ((3U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc2))
                                       ? vlSelf->Core__DOT__ID__DOT___GEN_2
                                       : ((4U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc2))
                                           ? vlSelf->Core__DOT__ID__DOT____VdfgTmp_h7417a8e6__0
                                           : ((5U == (IData)(vlSelf->Core__DOT__ID__DOT__aluSrc2))
                                               ? vlSelf->Core__DOT__ID__DOT___T_848
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
    bufp->fullCData(oldp+50,(((0x33U == (0xfe00707fU 
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
    bufp->fullBit(oldp+51,(((0x33U == (0xfe00707fU 
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
    bufp->fullCData(oldp+52,(vlSelf->Core__DOT__ID__DOT__rd),5);
    bufp->fullSData(oldp+53,(vlSelf->Core__DOT__ID__DOT__immI),12);
    bufp->fullBit(oldp+54,((0U != (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))));
    bufp->fullIData(oldp+55,(((0U != (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                               ? ((IData)(vlSelf->Core__DOT__ID__DOT__regEn1)
                                   ? vlSelf->Core__DOT__ID_io_read1_data
                                   : (IData)(vlSelf->Core__DOT__ID__DOT__rs1))
                               : 0U)),32);
    bufp->fullCData(oldp+56,((((~ (((1U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
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
                                               (vlSelf->Core__DOT__ID__DOT___T_1 
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
    bufp->fullIData(oldp+57,(((IData)(vlSelf->Core__DOT__ID__DOT__addrFault)
                               ? ((0U == (IData)(vlSelf->Core__DOT__ID__DOT__branchOp))
                                   ? 0U : (IData)(vlSelf->Core__DOT__ID__DOT___T_791))
                               : 0U)),32);
    bufp->fullCData(oldp+58,(vlSelf->Core__DOT__ID_EX__DOT__ff_aluOp),4);
    bufp->fullIData(oldp+59,(vlSelf->Core__DOT__ID_EX__DOT__ff_opr1),32);
    bufp->fullIData(oldp+60,(vlSelf->Core__DOT__ID_EX__DOT__ff_opr2),32);
    bufp->fullCData(oldp+61,(vlSelf->Core__DOT__ID_EX__DOT__ff_lsuOp),4);
    bufp->fullIData(oldp+62,(vlSelf->Core__DOT__ID_EX__DOT__ff_lsuData),32);
    bufp->fullBit(oldp+63,(vlSelf->Core__DOT__ID_EX__DOT__ff_regWen));
    bufp->fullCData(oldp+64,(vlSelf->Core__DOT__ID_EX__DOT__ff_regWaddr),5);
    bufp->fullCData(oldp+65,(vlSelf->Core__DOT__ID_EX__DOT__ff_csrOp),3);
    bufp->fullSData(oldp+66,(vlSelf->Core__DOT__ID_EX__DOT__ff_csrAddr),12);
    bufp->fullBit(oldp+67,(vlSelf->Core__DOT__ID_EX__DOT__ff_csren));
    bufp->fullIData(oldp+68,(vlSelf->Core__DOT__ID_EX__DOT__ff_csrrData),32);
    bufp->fullIData(oldp+69,(vlSelf->Core__DOT__ID_EX__DOT__ff_csrwData),32);
    bufp->fullCData(oldp+70,(vlSelf->Core__DOT__ID_EX__DOT__ff_excType),4);
    bufp->fullIData(oldp+71,(vlSelf->Core__DOT__ID_EX__DOT__ff_excValue),32);
    bufp->fullIData(oldp+72,(vlSelf->Core__DOT__ID_EX__DOT__ff_inst),32);
    bufp->fullIData(oldp+73,(vlSelf->Core__DOT__ID_EX__DOT__ff_currentPc),32);
    bufp->fullIData(oldp+74,((IData)(vlSelf->Core__DOT__EX__DOT__result)),32);
    bufp->fullBit(oldp+75,(vlSelf->Core__DOT__EX_io_ex_o_load));
    bufp->fullBit(oldp+76,((0x13U != vlSelf->Core__DOT__ID_EX__DOT__ff_inst)));
    bufp->fullBit(oldp+77,(vlSelf->Core__DOT__EX_MEM_io_stallPrev));
    bufp->fullCData(oldp+78,(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp),4);
    bufp->fullIData(oldp+79,(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuData),32);
    bufp->fullBit(oldp+80,(vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_en));
    bufp->fullCData(oldp+81,(vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_addr),5);
    bufp->fullIData(oldp+82,(vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data),32);
    bufp->fullBit(oldp+83,(vlSelf->Core__DOT__EX_MEM__DOT__ff_load));
    bufp->fullCData(oldp+84,(vlSelf->Core__DOT__EX_MEM__DOT__ff_csr_op),3);
    bufp->fullSData(oldp+85,(vlSelf->Core__DOT__EX_MEM__DOT__ff_csr_addr),12);
    bufp->fullIData(oldp+86,(vlSelf->Core__DOT__EX_MEM__DOT__ff_csr_data),32);
    bufp->fullBit(oldp+87,(vlSelf->Core__DOT__EX_MEM__DOT__ff_csr_retired));
    bufp->fullCData(oldp+88,(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType),4);
    bufp->fullIData(oldp+89,(vlSelf->Core__DOT__EX_MEM__DOT__ff_excValue),32);
    bufp->fullIData(oldp+90,(vlSelf->Core__DOT__EX_MEM__DOT__ff_inst),32);
    bufp->fullIData(oldp+91,(vlSelf->Core__DOT__EX_MEM__DOT__ff_currentPc),32);
    bufp->fullBit(oldp+92,(vlSelf->Core__DOT__MEM_io_stallReq));
    bufp->fullIData(oldp+93,(((5U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                               ? 2U : ((7U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                        ? 0U : ((1U 
                                                 == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                                 ? 0xbU
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                                  ? 3U
                                                  : 
                                                 ((8U 
                                                   == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                                   ? 
                                                  ((IData)(vlSelf->Core__DOT__MEM__DOT__memAddr)
                                                    ? 4U
                                                    : 0xdU)
                                                   : 0U)))))),31);
    bufp->fullIData(oldp+94,(vlSelf->Core__DOT__MEM_io_except_excValue),32);
    bufp->fullBit(oldp+95,(vlSelf->Core__DOT__resoler__DOT___T_35));
    bufp->fullIData(oldp+96,(vlSelf->Core__DOT__MEM_io_mem_o_reg_data),32);
    bufp->fullBit(oldp+97,(vlSelf->Core__DOT__MEM_WB__DOT__ff_reg_en));
    bufp->fullCData(oldp+98,(vlSelf->Core__DOT__MEM_WB__DOT__ff_reg_addr),5);
    bufp->fullIData(oldp+99,(vlSelf->Core__DOT__MEM_WB__DOT__ff_reg_data),32);
    bufp->fullCData(oldp+100,(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_op),3);
    bufp->fullSData(oldp+101,(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_addr),12);
    bufp->fullIData(oldp+102,(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_data),32);
    bufp->fullBit(oldp+103,(vlSelf->Core__DOT__MEM_WB__DOT__ff_csr_retired));
    bufp->fullIData(oldp+104,(vlSelf->Core__DOT__regfile__DOT__regfile_0),32);
    bufp->fullIData(oldp+105,(vlSelf->Core__DOT__regfile__DOT__regfile_1),32);
    bufp->fullIData(oldp+106,(vlSelf->Core__DOT__regfile__DOT__regfile_2),32);
    bufp->fullIData(oldp+107,(vlSelf->Core__DOT__regfile__DOT__regfile_3),32);
    bufp->fullIData(oldp+108,(vlSelf->Core__DOT__regfile__DOT__regfile_4),32);
    bufp->fullIData(oldp+109,(vlSelf->Core__DOT__regfile__DOT__regfile_5),32);
    bufp->fullIData(oldp+110,(vlSelf->Core__DOT__regfile__DOT__regfile_6),32);
    bufp->fullIData(oldp+111,(vlSelf->Core__DOT__regfile__DOT__regfile_7),32);
    bufp->fullIData(oldp+112,(vlSelf->Core__DOT__regfile__DOT__regfile_8),32);
    bufp->fullIData(oldp+113,(vlSelf->Core__DOT__regfile__DOT__regfile_9),32);
    bufp->fullIData(oldp+114,(vlSelf->Core__DOT__regfile__DOT__regfile_10),32);
    bufp->fullIData(oldp+115,(vlSelf->Core__DOT__regfile__DOT__regfile_11),32);
    bufp->fullIData(oldp+116,(vlSelf->Core__DOT__regfile__DOT__regfile_12),32);
    bufp->fullIData(oldp+117,(vlSelf->Core__DOT__regfile__DOT__regfile_13),32);
    bufp->fullIData(oldp+118,(vlSelf->Core__DOT__regfile__DOT__regfile_14),32);
    bufp->fullIData(oldp+119,(vlSelf->Core__DOT__regfile__DOT__regfile_15),32);
    bufp->fullIData(oldp+120,(vlSelf->Core__DOT__regfile__DOT__regfile_16),32);
    bufp->fullIData(oldp+121,(vlSelf->Core__DOT__regfile__DOT__regfile_17),32);
    bufp->fullIData(oldp+122,(vlSelf->Core__DOT__regfile__DOT__regfile_18),32);
    bufp->fullIData(oldp+123,(vlSelf->Core__DOT__regfile__DOT__regfile_19),32);
    bufp->fullIData(oldp+124,(vlSelf->Core__DOT__regfile__DOT__regfile_20),32);
    bufp->fullIData(oldp+125,(vlSelf->Core__DOT__regfile__DOT__regfile_21),32);
    bufp->fullIData(oldp+126,(vlSelf->Core__DOT__regfile__DOT__regfile_22),32);
    bufp->fullIData(oldp+127,(vlSelf->Core__DOT__regfile__DOT__regfile_23),32);
    bufp->fullIData(oldp+128,(vlSelf->Core__DOT__regfile__DOT__regfile_24),32);
    bufp->fullIData(oldp+129,(vlSelf->Core__DOT__regfile__DOT__regfile_25),32);
    bufp->fullIData(oldp+130,(vlSelf->Core__DOT__regfile__DOT__regfile_26),32);
    bufp->fullIData(oldp+131,(vlSelf->Core__DOT__regfile__DOT__regfile_27),32);
    bufp->fullIData(oldp+132,(vlSelf->Core__DOT__regfile__DOT__regfile_28),32);
    bufp->fullIData(oldp+133,(vlSelf->Core__DOT__regfile__DOT__regfile_29),32);
    bufp->fullIData(oldp+134,(vlSelf->Core__DOT__regfile__DOT__regfile_30),32);
    bufp->fullIData(oldp+135,(vlSelf->Core__DOT__regfile__DOT__regfile_31),32);
    bufp->fullIData(oldp+136,(((IData)(vlSelf->Core__DOT__ID__DOT__regEn1)
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
    bufp->fullIData(oldp+137,(((IData)(vlSelf->Core__DOT__ID_io_read2_en)
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
    bufp->fullBit(oldp+138,(vlSelf->Core__DOT__resoler_io_loadflag));
    bufp->fullBit(oldp+139,(vlSelf->Core__DOT__resoler_io_csrflag));
    bufp->fullQData(oldp+140,((0x7fffffffffffffffULL 
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
                                                                             > vlSelf->Core__DOT__ID_EX__DOT__ff_opr2))))))))))))))),63);
    bufp->fullQData(oldp+142,(vlSelf->Core__DOT__EX__DOT__result),63);
    bufp->fullBit(oldp+144,(vlSelf->Core__DOT__ID__DOT__stall));
    bufp->fullIData(oldp+145,(vlSelf->Core__DOT__ID__DOT__lastinst),32);
    bufp->fullIData(oldp+146,(vlSelf->Core__DOT__ID__DOT__inst),32);
    bufp->fullCData(oldp+147,(vlSelf->Core__DOT__ID__DOT__aluSrc1),4);
    bufp->fullCData(oldp+148,(vlSelf->Core__DOT__ID__DOT__aluSrc2),4);
    bufp->fullCData(oldp+149,(vlSelf->Core__DOT__ID__DOT__branchOp),3);
    bufp->fullCData(oldp+150,(vlSelf->Core__DOT__ID__DOT__csrOp),3);
    bufp->fullCData(oldp+151,(((0x33U == (0xfe00707fU 
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
    bufp->fullBit(oldp+152,((1U == (IData)(vlSelf->Core__DOT__ID__DOT__branchOp))));
    bufp->fullIData(oldp+153,((vlSelf->Core__DOT__IF_ID__DOT__ff_pc 
                               + (((- (IData)((IData)(vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0))) 
                                   << 0x15U) | (((IData)(vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0) 
                                                 << 0x14U) 
                                                | ((((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                                                      ? 
                                                     (0xffU 
                                                      & (vlSelf->Core__DOT__ID__DOT___T_1 
                                                         >> 0xcU))
                                                      : 0U) 
                                                    << 0xcU) 
                                                   | ((0x7ff800U 
                                                       & (((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid) 
                                                           << 0xbU) 
                                                          & (vlSelf->Core__DOT__ID__DOT___T_1 
                                                             >> 9U))) 
                                                      | (((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                                                           ? 
                                                          (0x3ffU 
                                                           & (vlSelf->Core__DOT__ID__DOT___T_1 
                                                              >> 0x15U))
                                                           : 0U) 
                                                         << 1U))))))),32);
    bufp->fullIData(oldp+154,((vlSelf->Core__DOT__ID_io_read1_data 
                               + vlSelf->Core__DOT__ID__DOT___GEN_2)),32);
    bufp->fullQData(oldp+155,(((QData)((IData)((vlSelf->Core__DOT__ID_io_read1_data 
                                                + vlSelf->Core__DOT__ID__DOT___GEN_2))) 
                               << 1U)),33);
    bufp->fullQData(oldp+157,(((IData)(vlSelf->Core__DOT__ID__DOT__regEn1)
                                ? ((QData)((IData)(
                                                   (vlSelf->Core__DOT__ID_io_read1_data 
                                                    + vlSelf->Core__DOT__ID__DOT___GEN_2))) 
                                   << 1U) : (QData)((IData)(
                                                            (vlSelf->Core__DOT__IF_ID__DOT__ff_pc 
                                                             + 
                                                             (((- (IData)((IData)(vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0))) 
                                                               << 0x15U) 
                                                              | (((IData)(vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0) 
                                                                  << 0x14U) 
                                                                 | ((((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                                                                       ? 
                                                                      (0xffU 
                                                                       & (vlSelf->Core__DOT__ID__DOT___T_1 
                                                                          >> 0xcU))
                                                                       : 0U) 
                                                                     << 0xcU) 
                                                                    | ((0x7ff800U 
                                                                        & (((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid) 
                                                                            << 0xbU) 
                                                                           & (vlSelf->Core__DOT__ID__DOT___T_1 
                                                                              >> 9U))) 
                                                                       | (((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                                                                            ? 
                                                                           (0x3ffU 
                                                                            & (vlSelf->Core__DOT__ID__DOT___T_1 
                                                                               >> 0x15U))
                                                                            : 0U) 
                                                                          << 1U)))))))))),33);
    bufp->fullIData(oldp+159,((vlSelf->Core__DOT__IF_ID__DOT__ff_pc 
                               + (((- (IData)((IData)(vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0))) 
                                   << 0xdU) | (((IData)(vlSelf->Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0) 
                                                << 0xcU) 
                                               | ((0xfffff800U 
                                                   & (((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid) 
                                                       << 0xbU) 
                                                      & (vlSelf->Core__DOT__ID__DOT___T_1 
                                                         << 4U))) 
                                                  | ((((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                                                        ? 
                                                       (0x3fU 
                                                        & (vlSelf->Core__DOT__ID__DOT___T_1 
                                                           >> 0x19U))
                                                        : 0U) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                                                          ? 
                                                         (0xfU 
                                                          & (vlSelf->Core__DOT__ID__DOT___T_1 
                                                             >> 8U))
                                                          : 0U) 
                                                        << 1U))))))),32);
    bufp->fullQData(oldp+160,(vlSelf->Core__DOT__ID__DOT__takepc),33);
    bufp->fullBit(oldp+162,(vlSelf->Core__DOT__ID__DOT__branchteke));
    bufp->fullQData(oldp+163,(((IData)(vlSelf->Core__DOT__ID__DOT__branchmiss)
                                ? vlSelf->Core__DOT__ID__DOT__takepc
                                : (QData)((IData)(((IData)(4U) 
                                                   + vlSelf->Core__DOT__IF_ID__DOT__ff_pc))))),33);
    bufp->fullBit(oldp+165,(vlSelf->Core__DOT__ID__DOT__addrFault));
    bufp->fullQData(oldp+166,(((IData)(vlSelf->Core__DOT__ID__DOT__addrFault)
                                ? vlSelf->Core__DOT__ID__DOT__takepc
                                : 0ULL)),33);
    bufp->fullBit(oldp+168,(vlSelf->Core__DOT__MEM__DOT__mem_wen));
    bufp->fullBit(oldp+169,(vlSelf->Core__DOT__MEM__DOT__mem_ren));
    bufp->fullIData(oldp+170,((0xfffffffcU & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data)),32);
    bufp->fullCData(oldp+171,(((IData)(vlSelf->Core__DOT__MEM__DOT__mem_wen)
                                ? (0xfU & (IData)(vlSelf->Core__DOT__MEM__DOT__writeEn))
                                : 0xfU)),4);
    bufp->fullBit(oldp+172,(((1U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)) 
                             | (2U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_lsuOp)))));
    bufp->fullIData(oldp+173,((IData)(((0U == (IData)(vlSelf->Core__DOT__MEM__DOT__width))
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
    bufp->fullIData(oldp+174,(vlSelf->Core__DOT__MEM__DOT__mem_rdata),32);
    bufp->fullBit(oldp+175,(vlSelf->Core__DOT__MEM__DOT__ren));
    bufp->fullCData(oldp+176,(vlSelf->Core__DOT__MEM__DOT__width),2);
    bufp->fullCData(oldp+177,((3U & vlSelf->Core__DOT__EX_MEM__DOT__ff_reg_data)),2);
    bufp->fullCData(oldp+178,(vlSelf->Core__DOT__MEM__DOT__writeEn),7);
    bufp->fullCData(oldp+179,(((IData)(vlSelf->Core__DOT__MEM__DOT__mem_wen)
                                ? (IData)(vlSelf->Core__DOT__MEM__DOT__writeEn)
                                : 0xfU)),7);
    bufp->fullQData(oldp+180,(((0U == (IData)(vlSelf->Core__DOT__MEM__DOT__width))
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
    bufp->fullBit(oldp+182,(vlSelf->Core__DOT__MEM__DOT__memAddr));
    bufp->fullBit(oldp+183,((7U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))));
    bufp->fullBit(oldp+184,((5U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))));
    bufp->fullBit(oldp+185,(((8U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType)) 
                             & (IData)(vlSelf->Core__DOT__MEM__DOT__memAddr))));
    bufp->fullBit(oldp+186,(((1U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType)) 
                             | (2U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType)))));
    bufp->fullIData(oldp+187,(((1U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                ? 0xbU : ((2U == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                           ? 3U : (
                                                   (8U 
                                                    == (IData)(vlSelf->Core__DOT__EX_MEM__DOT__ff_excType))
                                                    ? 
                                                   ((IData)(vlSelf->Core__DOT__MEM__DOT__memAddr)
                                                     ? 4U
                                                     : 0xdU)
                                                    : 0U)))),31);
    bufp->fullIData(oldp+188,(vlSelf->Core__DOT__MEM_WB__DOT__ff_currentPc),32);
    bufp->fullCData(oldp+189,(vlSelf->Core__DOT__csr__DOT__mode),2);
    bufp->fullBit(oldp+190,(vlSelf->Core__DOT__csr__DOT__mstatus_sum));
    bufp->fullCData(oldp+191,(vlSelf->Core__DOT__csr__DOT__mstatus_mpp),2);
    bufp->fullBit(oldp+192,(vlSelf->Core__DOT__csr__DOT__mstatus_spp));
    bufp->fullBit(oldp+193,(vlSelf->Core__DOT__csr__DOT__mstatus_mpie));
    bufp->fullBit(oldp+194,(vlSelf->Core__DOT__csr__DOT__mstatus_spie));
    bufp->fullBit(oldp+195,(vlSelf->Core__DOT__csr__DOT__mstatus_mie));
    bufp->fullBit(oldp+196,(vlSelf->Core__DOT__csr__DOT__mstatus_sie));
    bufp->fullIData(oldp+197,(vlSelf->Core__DOT__csr__DOT__medeleg_data),32);
    bufp->fullIData(oldp+198,(vlSelf->Core__DOT__csr__DOT__mideleg_data),32);
    bufp->fullBit(oldp+199,(vlSelf->Core__DOT__csr__DOT__mie_meie));
    bufp->fullBit(oldp+200,(vlSelf->Core__DOT__csr__DOT__mie_seie));
    bufp->fullBit(oldp+201,(vlSelf->Core__DOT__csr__DOT__mie_mtie));
    bufp->fullBit(oldp+202,(vlSelf->Core__DOT__csr__DOT__mie_stie));
    bufp->fullBit(oldp+203,(vlSelf->Core__DOT__csr__DOT__mie_msie));
    bufp->fullBit(oldp+204,(vlSelf->Core__DOT__csr__DOT__mie_ssie));
    bufp->fullIData(oldp+205,(vlSelf->Core__DOT__csr__DOT__mtvec_base),30);
    bufp->fullCData(oldp+206,(vlSelf->Core__DOT__csr__DOT__mtvec_mode),2);
    bufp->fullIData(oldp+207,(vlSelf->Core__DOT__csr__DOT__mscratch_data),32);
    bufp->fullIData(oldp+208,(vlSelf->Core__DOT__csr__DOT__mepc_data),32);
    bufp->fullBit(oldp+209,(vlSelf->Core__DOT__csr__DOT__mcause_int));
    bufp->fullIData(oldp+210,(vlSelf->Core__DOT__csr__DOT__mcause_code),31);
    bufp->fullIData(oldp+211,(vlSelf->Core__DOT__csr__DOT__mtval_data),32);
    bufp->fullBit(oldp+212,(vlSelf->Core__DOT__csr__DOT__mipReal_seip));
    bufp->fullBit(oldp+213,(vlSelf->Core__DOT__csr__DOT__mipReal_stip));
    bufp->fullBit(oldp+214,(vlSelf->Core__DOT__csr__DOT__mipReal_ssip));
    bufp->fullQData(oldp+215,(vlSelf->Core__DOT__csr__DOT__mcycle_data),64);
    bufp->fullQData(oldp+217,(vlSelf->Core__DOT__csr__DOT__minstret_data),64);
    bufp->fullIData(oldp+219,(vlSelf->Core__DOT__csr__DOT__stvec_base),30);
    bufp->fullCData(oldp+220,(vlSelf->Core__DOT__csr__DOT__stvec_mode),2);
    bufp->fullIData(oldp+221,(vlSelf->Core__DOT__csr__DOT__sscratch_data),32);
    bufp->fullIData(oldp+222,(vlSelf->Core__DOT__csr__DOT__sepc_data),32);
    bufp->fullBit(oldp+223,(vlSelf->Core__DOT__csr__DOT__scause_int));
    bufp->fullIData(oldp+224,(vlSelf->Core__DOT__csr__DOT__scause_code),31);
    bufp->fullIData(oldp+225,(vlSelf->Core__DOT__csr__DOT__stval_data),32);
    bufp->fullBit(oldp+226,(vlSelf->Core__DOT__csr__DOT__satp_mode));
    bufp->fullIData(oldp+227,(vlSelf->Core__DOT__csr__DOT__satp_ppn),22);
    bufp->fullBit(oldp+228,(vlSelf->Core__DOT__csr__DOT__readable));
    bufp->fullBit(oldp+229,(vlSelf->Core__DOT__csr__DOT__writable));
    bufp->fullBit(oldp+230,(((1U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                              ? (IData)(vlSelf->Core__DOT__csr__DOT__readable)
                              : ((2U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                  ? (IData)(vlSelf->Core__DOT__csr__DOT__writable)
                                  : ((3U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                      ? (IData)(vlSelf->Core__DOT__csr__DOT___T_319)
                                      : ((4U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                                          ? (IData)(vlSelf->Core__DOT__csr__DOT___T_319)
                                          : ((5U == (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp)) 
                                             & (IData)(vlSelf->Core__DOT__csr__DOT___T_319))))))));
    bufp->fullBit(oldp+231,((((0U != (IData)(vlSelf->Core__DOT__ID__DOT__csrActOp))
                               ? ((IData)(vlSelf->Core__DOT__IF_ID__DOT__ff_valid)
                                   ? (3U & (vlSelf->Core__DOT__ID__DOT___T_1 
                                            >> 0x1cU))
                                   : 0U) : 0U) <= (IData)(vlSelf->Core__DOT__csr__DOT__mode))));
    bufp->fullIData(oldp+232,(vlSelf->Core__DOT__fetch__DOT__pc),32);
    bufp->fullIData(oldp+233,(vlSelf->Core__DOT__fetch__DOT__read__DOT__fetched_data),32);
    bufp->fullBit(oldp+234,(((IData)(vlSelf->Core__DOT__ID__DOT__regEn1) 
                             & ((IData)(vlSelf->Core__DOT__EX_io_ex_o_load) 
                                & (IData)(vlSelf->Core__DOT__resoler__DOT___T_2)))));
    bufp->fullBit(oldp+235,(((IData)(vlSelf->Core__DOT__ID_io_read2_en) 
                             & ((IData)(vlSelf->Core__DOT__EX_io_ex_o_load) 
                                & (IData)(vlSelf->Core__DOT__resoler__DOT___T_10)))));
    bufp->fullBit(oldp+236,(vlSelf->clock));
    bufp->fullBit(oldp+237,(vlSelf->reset));
    bufp->fullBit(oldp+238,(vlSelf->io_if_axi_en));
    bufp->fullBit(oldp+239,(vlSelf->io_if_axi_valid));
    bufp->fullBit(oldp+240,(vlSelf->io_if_axi_fault));
    bufp->fullCData(oldp+241,(vlSelf->io_if_axi_wen),4);
    bufp->fullIData(oldp+242,(vlSelf->io_if_axi_addr),32);
    bufp->fullIData(oldp+243,(vlSelf->io_if_axi_rdata),32);
    bufp->fullIData(oldp+244,(vlSelf->io_if_axi_wdata),32);
    bufp->fullBit(oldp+245,(vlSelf->io_timer));
    bufp->fullBit(oldp+246,(vlSelf->io_soft));
    bufp->fullBit(oldp+247,(vlSelf->io_extern));
    bufp->fullIData(oldp+248,(vlSelf->io_inst),32);
    bufp->fullIData(oldp+249,(vlSelf->io_pc),32);
    bufp->fullIData(oldp+250,(vlSelf->io_npc),32);
    bufp->fullBit(oldp+251,((1U & (~ (IData)(vlSelf->io_if_axi_valid)))));
    bufp->fullBit(oldp+252,(vlSelf->Core__DOT__fetch__DOT__bpu_io_prdt_taken_o));
    bufp->fullCData(oldp+253,(((IData)(vlSelf->Core__DOT__MEM_io_stallReq)
                                ? 0x1eU : ((IData)(vlSelf->Core__DOT__resoler_io_csrflag)
                                            ? 0x1cU
                                            : ((IData)(vlSelf->Core__DOT__resoler_io_loadflag)
                                                ? 0x18U
                                                : ((IData)(vlSelf->io_if_axi_valid)
                                                    ? 0U
                                                    : 0x10U))))),5);
    bufp->fullCData(oldp+254,((0x7fU & vlSelf->io_if_axi_rdata)),7);
    bufp->fullBit(oldp+255,((0x63U == (0x7fU & vlSelf->io_if_axi_rdata))));
    bufp->fullBit(oldp+256,((0x6fU == (0x7fU & vlSelf->io_if_axi_rdata))));
    bufp->fullIData(oldp+257,(vlSelf->Core__DOT__fetch__DOT__bpu__DOT__inst_b_type_imm),32);
    bufp->fullIData(oldp+258,(((((vlSelf->io_if_axi_rdata 
                                  >> 0x1fU) ? 0xfffU
                                  : 0U) << 0x14U) | 
                               ((0xff000U & vlSelf->io_if_axi_rdata) 
                                | ((0x800U & (vlSelf->io_if_axi_rdata 
                                              >> 9U)) 
                                   | (0x7feU & (vlSelf->io_if_axi_rdata 
                                                >> 0x14U)))))),32);
    bufp->fullBit(oldp+259,(((IData)((0x80000063U == 
                                      (0x8000007fU 
                                       & vlSelf->io_if_axi_rdata))) 
                             | (0x6fU == (0x7fU & vlSelf->io_if_axi_rdata)))));
    bufp->fullIData(oldp+260,(((0x63U == (0x7fU & vlSelf->io_if_axi_rdata))
                                ? vlSelf->Core__DOT__fetch__DOT__bpu__DOT__inst_b_type_imm
                                : ((0x6fU == (0x7fU 
                                              & vlSelf->io_if_axi_rdata))
                                    ? ((((vlSelf->io_if_axi_rdata 
                                          >> 0x1fU)
                                          ? 0xfffU : 0U) 
                                        << 0x14U) | 
                                       ((0xff000U & vlSelf->io_if_axi_rdata) 
                                        | ((0x800U 
                                            & (vlSelf->io_if_axi_rdata 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->io_if_axi_rdata 
                                                 >> 0x14U)))))
                                    : vlSelf->Core__DOT__fetch__DOT__bpu__DOT__inst_b_type_imm))),32);
}
