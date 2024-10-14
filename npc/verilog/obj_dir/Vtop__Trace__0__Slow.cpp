// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+229,"clock", false,-1);
    tracep->declBit(c+230,"reset", false,-1);
    tracep->declBit(c+231,"io_rom_en", false,-1);
    tracep->declBit(c+232,"io_rom_valid", false,-1);
    tracep->declBit(c+233,"io_rom_fault", false,-1);
    tracep->declBus(c+234,"io_rom_wen", false,-1, 3,0);
    tracep->declBus(c+235,"io_rom_addr", false,-1, 31,0);
    tracep->declBus(c+236,"io_rom_rdata", false,-1, 31,0);
    tracep->declBus(c+237,"io_rom_wdata", false,-1, 31,0);
    tracep->declBit(c+238,"io_ram_en", false,-1);
    tracep->declBit(c+239,"io_ram_valid", false,-1);
    tracep->declBit(c+240,"io_ram_fault", false,-1);
    tracep->declBus(c+241,"io_ram_wen", false,-1, 3,0);
    tracep->declBus(c+242,"io_ram_addr", false,-1, 31,0);
    tracep->declBus(c+243,"io_ram_rdata", false,-1, 31,0);
    tracep->declBus(c+244,"io_ram_wdata", false,-1, 31,0);
    tracep->declBit(c+245,"io_timer", false,-1);
    tracep->declBit(c+246,"io_soft", false,-1);
    tracep->declBit(c+247,"io_extern", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+229,"clock", false,-1);
    tracep->declBit(c+230,"reset", false,-1);
    tracep->declBit(c+231,"io_rom_en", false,-1);
    tracep->declBit(c+232,"io_rom_valid", false,-1);
    tracep->declBit(c+233,"io_rom_fault", false,-1);
    tracep->declBus(c+234,"io_rom_wen", false,-1, 3,0);
    tracep->declBus(c+235,"io_rom_addr", false,-1, 31,0);
    tracep->declBus(c+236,"io_rom_rdata", false,-1, 31,0);
    tracep->declBus(c+237,"io_rom_wdata", false,-1, 31,0);
    tracep->declBit(c+238,"io_ram_en", false,-1);
    tracep->declBit(c+239,"io_ram_valid", false,-1);
    tracep->declBit(c+240,"io_ram_fault", false,-1);
    tracep->declBus(c+241,"io_ram_wen", false,-1, 3,0);
    tracep->declBus(c+242,"io_ram_addr", false,-1, 31,0);
    tracep->declBus(c+243,"io_ram_rdata", false,-1, 31,0);
    tracep->declBus(c+244,"io_ram_wdata", false,-1, 31,0);
    tracep->declBit(c+245,"io_timer", false,-1);
    tracep->declBit(c+246,"io_soft", false,-1);
    tracep->declBit(c+247,"io_extern", false,-1);
    tracep->declBit(c+229,"fetch_clock", false,-1);
    tracep->declBit(c+230,"fetch_reset", false,-1);
    tracep->declBit(c+232,"fetch_io_rom_valid", false,-1);
    tracep->declBus(c+235,"fetch_io_rom_addr", false,-1, 31,0);
    tracep->declBus(c+236,"fetch_io_rom_rdata", false,-1, 31,0);
    tracep->declBit(c+1,"fetch_io_flush", false,-1);
    tracep->declBus(c+2,"fetch_io_flush_pc", false,-1, 31,0);
    tracep->declBit(c+248,"fetch_io_stall", false,-1);
    tracep->declBit(c+248,"fetch_io_stallreq", false,-1);
    tracep->declBus(c+235,"fetch_io_IF_pc", false,-1, 31,0);
    tracep->declBit(c+232,"fetch_io_IF_valid", false,-1);
    tracep->declBus(c+236,"fetch_io_IF_inst", false,-1, 31,0);
    tracep->declBit(c+249,"fetch_io_IF_bpu_take", false,-1);
    tracep->declBus(c+3,"fetch_io_IF_bpu_takepc", false,-1, 31,0);
    tracep->declBit(c+56,"fetch_io_IF_misaligned", false,-1);
    tracep->declBit(c+229,"IF_ID_clock", false,-1);
    tracep->declBit(c+230,"IF_ID_reset", false,-1);
    tracep->declBit(c+4,"IF_ID_io_flush", false,-1);
    tracep->declBit(c+5,"IF_ID_io_stallPrev", false,-1);
    tracep->declBus(c+235,"IF_ID_io_prev_pc", false,-1, 31,0);
    tracep->declBit(c+232,"IF_ID_io_prev_valid", false,-1);
    tracep->declBus(c+236,"IF_ID_io_prev_inst", false,-1, 31,0);
    tracep->declBit(c+249,"IF_ID_io_prev_bpu_take", false,-1);
    tracep->declBus(c+3,"IF_ID_io_prev_bpu_takepc", false,-1, 31,0);
    tracep->declBit(c+56,"IF_ID_io_prev_misaligned", false,-1);
    tracep->declBus(c+57,"IF_ID_io_next_pc", false,-1, 31,0);
    tracep->declBit(c+58,"IF_ID_io_next_valid", false,-1);
    tracep->declBus(c+59,"IF_ID_io_next_inst", false,-1, 31,0);
    tracep->declBit(c+60,"IF_ID_io_next_bpu_take", false,-1);
    tracep->declBus(c+61,"IF_ID_io_next_bpu_takepc", false,-1, 31,0);
    tracep->declBit(c+62,"IF_ID_io_next_misaligned", false,-1);
    tracep->declBit(c+229,"ID_clock", false,-1);
    tracep->declBus(c+57,"ID_io_if_i_pc", false,-1, 31,0);
    tracep->declBit(c+58,"ID_io_if_i_valid", false,-1);
    tracep->declBus(c+59,"ID_io_if_i_inst", false,-1, 31,0);
    tracep->declBit(c+60,"ID_io_if_i_bpu_take", false,-1);
    tracep->declBus(c+61,"ID_io_if_i_bpu_takepc", false,-1, 31,0);
    tracep->declBit(c+62,"ID_io_if_i_misaligned", false,-1);
    tracep->declBit(c+63,"ID_io_read1_en", false,-1);
    tracep->declBus(c+64,"ID_io_read1_addr", false,-1, 4,0);
    tracep->declBus(c+6,"ID_io_read1_data", false,-1, 31,0);
    tracep->declBit(c+65,"ID_io_read2_en", false,-1);
    tracep->declBus(c+66,"ID_io_read2_addr", false,-1, 4,0);
    tracep->declBus(c+7,"ID_io_read2_data", false,-1, 31,0);
    tracep->declBit(c+8,"ID_io_stallid", false,-1);
    tracep->declBus(c+9,"ID_io_csrread_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+67,"ID_io_csrread_csr_raddr", false,-1, 31,0);
    tracep->declBus(c+68,"ID_io_csrread_csr_op", false,-1, 2,0);
    tracep->declBit(c+69,"ID_io_csrread_csr_valid", false,-1);
    tracep->declBit(c+10,"ID_io_flush", false,-1);
    tracep->declBus(c+11,"ID_io_flushpc", false,-1, 31,0);
    tracep->declBus(c+70,"ID_io_id_o_aluOp", false,-1, 3,0);
    tracep->declBus(c+12,"ID_io_id_o_opr1", false,-1, 31,0);
    tracep->declBus(c+13,"ID_io_id_o_opr2", false,-1, 31,0);
    tracep->declBus(c+71,"ID_io_id_o_lsuOp", false,-1, 3,0);
    tracep->declBus(c+7,"ID_io_id_o_lsuData", false,-1, 31,0);
    tracep->declBit(c+72,"ID_io_id_o_regWen", false,-1);
    tracep->declBus(c+73,"ID_io_id_o_regWaddr", false,-1, 4,0);
    tracep->declBus(c+68,"ID_io_id_o_csrOp", false,-1, 2,0);
    tracep->declBus(c+74,"ID_io_id_o_csrAddr", false,-1, 11,0);
    tracep->declBit(c+75,"ID_io_id_o_csren", false,-1);
    tracep->declBus(c+9,"ID_io_id_o_csrrData", false,-1, 31,0);
    tracep->declBus(c+14,"ID_io_id_o_csrwData", false,-1, 31,0);
    tracep->declBus(c+15,"ID_io_id_o_excType", false,-1, 3,0);
    tracep->declBus(c+16,"ID_io_id_o_excValue", false,-1, 31,0);
    tracep->declBus(c+59,"ID_io_id_o_inst", false,-1, 31,0);
    tracep->declBus(c+57,"ID_io_id_o_currentPc", false,-1, 31,0);
    tracep->declBit(c+229,"ID_EX_clock", false,-1);
    tracep->declBit(c+230,"ID_EX_reset", false,-1);
    tracep->declBit(c+4,"ID_EX_io_flush", false,-1);
    tracep->declBit(c+8,"ID_EX_io_stallPrev", false,-1);
    tracep->declBus(c+70,"ID_EX_io_prev_aluOp", false,-1, 3,0);
    tracep->declBus(c+12,"ID_EX_io_prev_opr1", false,-1, 31,0);
    tracep->declBus(c+13,"ID_EX_io_prev_opr2", false,-1, 31,0);
    tracep->declBus(c+71,"ID_EX_io_prev_lsuOp", false,-1, 3,0);
    tracep->declBus(c+7,"ID_EX_io_prev_lsuData", false,-1, 31,0);
    tracep->declBit(c+72,"ID_EX_io_prev_regWen", false,-1);
    tracep->declBus(c+73,"ID_EX_io_prev_regWaddr", false,-1, 4,0);
    tracep->declBus(c+68,"ID_EX_io_prev_csrOp", false,-1, 2,0);
    tracep->declBus(c+74,"ID_EX_io_prev_csrAddr", false,-1, 11,0);
    tracep->declBit(c+75,"ID_EX_io_prev_csren", false,-1);
    tracep->declBus(c+9,"ID_EX_io_prev_csrrData", false,-1, 31,0);
    tracep->declBus(c+14,"ID_EX_io_prev_csrwData", false,-1, 31,0);
    tracep->declBus(c+15,"ID_EX_io_prev_excType", false,-1, 3,0);
    tracep->declBus(c+16,"ID_EX_io_prev_excValue", false,-1, 31,0);
    tracep->declBus(c+59,"ID_EX_io_prev_inst", false,-1, 31,0);
    tracep->declBus(c+57,"ID_EX_io_prev_currentPc", false,-1, 31,0);
    tracep->declBus(c+76,"ID_EX_io_next_aluOp", false,-1, 3,0);
    tracep->declBus(c+77,"ID_EX_io_next_opr1", false,-1, 31,0);
    tracep->declBus(c+78,"ID_EX_io_next_opr2", false,-1, 31,0);
    tracep->declBus(c+79,"ID_EX_io_next_lsuOp", false,-1, 3,0);
    tracep->declBus(c+80,"ID_EX_io_next_lsuData", false,-1, 31,0);
    tracep->declBit(c+81,"ID_EX_io_next_regWen", false,-1);
    tracep->declBus(c+82,"ID_EX_io_next_regWaddr", false,-1, 4,0);
    tracep->declBus(c+83,"ID_EX_io_next_csrOp", false,-1, 2,0);
    tracep->declBus(c+84,"ID_EX_io_next_csrAddr", false,-1, 11,0);
    tracep->declBit(c+85,"ID_EX_io_next_csren", false,-1);
    tracep->declBus(c+86,"ID_EX_io_next_csrrData", false,-1, 31,0);
    tracep->declBus(c+87,"ID_EX_io_next_csrwData", false,-1, 31,0);
    tracep->declBus(c+88,"ID_EX_io_next_excType", false,-1, 3,0);
    tracep->declBus(c+89,"ID_EX_io_next_excValue", false,-1, 31,0);
    tracep->declBus(c+90,"ID_EX_io_next_inst", false,-1, 31,0);
    tracep->declBus(c+91,"ID_EX_io_next_currentPc", false,-1, 31,0);
    tracep->declBus(c+76,"EX_io_id_i_aluOp", false,-1, 3,0);
    tracep->declBus(c+77,"EX_io_id_i_opr1", false,-1, 31,0);
    tracep->declBus(c+78,"EX_io_id_i_opr2", false,-1, 31,0);
    tracep->declBus(c+79,"EX_io_id_i_lsuOp", false,-1, 3,0);
    tracep->declBus(c+80,"EX_io_id_i_lsuData", false,-1, 31,0);
    tracep->declBit(c+81,"EX_io_id_i_regWen", false,-1);
    tracep->declBus(c+82,"EX_io_id_i_regWaddr", false,-1, 4,0);
    tracep->declBus(c+83,"EX_io_id_i_csrOp", false,-1, 2,0);
    tracep->declBus(c+84,"EX_io_id_i_csrAddr", false,-1, 11,0);
    tracep->declBit(c+85,"EX_io_id_i_csren", false,-1);
    tracep->declBus(c+86,"EX_io_id_i_csrrData", false,-1, 31,0);
    tracep->declBus(c+87,"EX_io_id_i_csrwData", false,-1, 31,0);
    tracep->declBus(c+88,"EX_io_id_i_excType", false,-1, 3,0);
    tracep->declBus(c+89,"EX_io_id_i_excValue", false,-1, 31,0);
    tracep->declBus(c+90,"EX_io_id_i_inst", false,-1, 31,0);
    tracep->declBus(c+91,"EX_io_id_i_currentPc", false,-1, 31,0);
    tracep->declBus(c+79,"EX_io_ex_o_lsuOp", false,-1, 3,0);
    tracep->declBus(c+80,"EX_io_ex_o_lsuData", false,-1, 31,0);
    tracep->declBit(c+81,"EX_io_ex_o_reg_en", false,-1);
    tracep->declBus(c+82,"EX_io_ex_o_reg_addr", false,-1, 4,0);
    tracep->declBus(c+92,"EX_io_ex_o_reg_data", false,-1, 31,0);
    tracep->declBit(c+93,"EX_io_ex_o_load", false,-1);
    tracep->declBus(c+83,"EX_io_ex_o_csr_op", false,-1, 2,0);
    tracep->declBus(c+84,"EX_io_ex_o_csr_addr", false,-1, 11,0);
    tracep->declBus(c+87,"EX_io_ex_o_csr_data", false,-1, 31,0);
    tracep->declBit(c+94,"EX_io_ex_o_csr_retired", false,-1);
    tracep->declBus(c+88,"EX_io_ex_o_excType", false,-1, 3,0);
    tracep->declBus(c+89,"EX_io_ex_o_excValue", false,-1, 31,0);
    tracep->declBus(c+90,"EX_io_ex_o_inst", false,-1, 31,0);
    tracep->declBus(c+91,"EX_io_ex_o_currentPc", false,-1, 31,0);
    tracep->declBit(c+229,"EX_MEM_clock", false,-1);
    tracep->declBit(c+230,"EX_MEM_reset", false,-1);
    tracep->declBit(c+4,"EX_MEM_io_flush", false,-1);
    tracep->declBit(c+17,"EX_MEM_io_stallPrev", false,-1);
    tracep->declBus(c+79,"EX_MEM_io_prev_lsuOp", false,-1, 3,0);
    tracep->declBus(c+80,"EX_MEM_io_prev_lsuData", false,-1, 31,0);
    tracep->declBit(c+81,"EX_MEM_io_prev_reg_en", false,-1);
    tracep->declBus(c+82,"EX_MEM_io_prev_reg_addr", false,-1, 4,0);
    tracep->declBus(c+92,"EX_MEM_io_prev_reg_data", false,-1, 31,0);
    tracep->declBit(c+93,"EX_MEM_io_prev_load", false,-1);
    tracep->declBus(c+83,"EX_MEM_io_prev_csr_op", false,-1, 2,0);
    tracep->declBus(c+84,"EX_MEM_io_prev_csr_addr", false,-1, 11,0);
    tracep->declBus(c+87,"EX_MEM_io_prev_csr_data", false,-1, 31,0);
    tracep->declBit(c+94,"EX_MEM_io_prev_csr_retired", false,-1);
    tracep->declBus(c+88,"EX_MEM_io_prev_excType", false,-1, 3,0);
    tracep->declBus(c+89,"EX_MEM_io_prev_excValue", false,-1, 31,0);
    tracep->declBus(c+90,"EX_MEM_io_prev_inst", false,-1, 31,0);
    tracep->declBus(c+91,"EX_MEM_io_prev_currentPc", false,-1, 31,0);
    tracep->declBus(c+95,"EX_MEM_io_next_lsuOp", false,-1, 3,0);
    tracep->declBus(c+96,"EX_MEM_io_next_lsuData", false,-1, 31,0);
    tracep->declBit(c+97,"EX_MEM_io_next_reg_en", false,-1);
    tracep->declBus(c+98,"EX_MEM_io_next_reg_addr", false,-1, 4,0);
    tracep->declBus(c+99,"EX_MEM_io_next_reg_data", false,-1, 31,0);
    tracep->declBit(c+100,"EX_MEM_io_next_load", false,-1);
    tracep->declBus(c+101,"EX_MEM_io_next_csr_op", false,-1, 2,0);
    tracep->declBus(c+102,"EX_MEM_io_next_csr_addr", false,-1, 11,0);
    tracep->declBus(c+103,"EX_MEM_io_next_csr_data", false,-1, 31,0);
    tracep->declBit(c+104,"EX_MEM_io_next_csr_retired", false,-1);
    tracep->declBus(c+105,"EX_MEM_io_next_excType", false,-1, 3,0);
    tracep->declBus(c+106,"EX_MEM_io_next_excValue", false,-1, 31,0);
    tracep->declBus(c+107,"EX_MEM_io_next_inst", false,-1, 31,0);
    tracep->declBus(c+108,"EX_MEM_io_next_currentPc", false,-1, 31,0);
    tracep->declBus(c+95,"MEM_io_ex_i_lsuOp", false,-1, 3,0);
    tracep->declBus(c+96,"MEM_io_ex_i_lsuData", false,-1, 31,0);
    tracep->declBit(c+97,"MEM_io_ex_i_reg_en", false,-1);
    tracep->declBus(c+98,"MEM_io_ex_i_reg_addr", false,-1, 4,0);
    tracep->declBus(c+99,"MEM_io_ex_i_reg_data", false,-1, 31,0);
    tracep->declBit(c+100,"MEM_io_ex_i_load", false,-1);
    tracep->declBus(c+101,"MEM_io_ex_i_csr_op", false,-1, 2,0);
    tracep->declBus(c+102,"MEM_io_ex_i_csr_addr", false,-1, 11,0);
    tracep->declBus(c+103,"MEM_io_ex_i_csr_data", false,-1, 31,0);
    tracep->declBit(c+104,"MEM_io_ex_i_csr_retired", false,-1);
    tracep->declBus(c+105,"MEM_io_ex_i_excType", false,-1, 3,0);
    tracep->declBus(c+106,"MEM_io_ex_i_excValue", false,-1, 31,0);
    tracep->declBus(c+107,"MEM_io_ex_i_inst", false,-1, 31,0);
    tracep->declBus(c+108,"MEM_io_ex_i_currentPc", false,-1, 31,0);
    tracep->declBit(c+18,"MEM_io_stallReq", false,-1);
    tracep->declBit(c+238,"MEM_io_ram_en", false,-1);
    tracep->declBit(c+239,"MEM_io_ram_valid", false,-1);
    tracep->declBit(c+240,"MEM_io_ram_fault", false,-1);
    tracep->declBus(c+241,"MEM_io_ram_wen", false,-1, 3,0);
    tracep->declBus(c+242,"MEM_io_ram_addr", false,-1, 31,0);
    tracep->declBus(c+243,"MEM_io_ram_rdata", false,-1, 31,0);
    tracep->declBus(c+244,"MEM_io_ram_wdata", false,-1, 31,0);
    tracep->declBit(c+4,"MEM_io_except_hasTrap", false,-1);
    tracep->declBus(c+109,"MEM_io_except_excCause", false,-1, 30,0);
    tracep->declBus(c+108,"MEM_io_except_excPc", false,-1, 31,0);
    tracep->declBus(c+19,"MEM_io_except_excValue", false,-1, 31,0);
    tracep->declBit(c+20,"MEM_io_csrHasInt", false,-1);
    tracep->declBit(c+110,"MEM_io_csrBusy", false,-1);
    tracep->declBit(c+97,"MEM_io_mem_o_reg_en", false,-1);
    tracep->declBus(c+98,"MEM_io_mem_o_reg_addr", false,-1, 4,0);
    tracep->declBus(c+21,"MEM_io_mem_o_reg_data", false,-1, 31,0);
    tracep->declBus(c+101,"MEM_io_mem_o_csr_op", false,-1, 2,0);
    tracep->declBus(c+102,"MEM_io_mem_o_csr_addr", false,-1, 11,0);
    tracep->declBus(c+103,"MEM_io_mem_o_csr_data", false,-1, 31,0);
    tracep->declBit(c+104,"MEM_io_mem_o_csr_retired", false,-1);
    tracep->declBit(c+229,"MEM_WB_clock", false,-1);
    tracep->declBit(c+230,"MEM_WB_reset", false,-1);
    tracep->declBit(c+4,"MEM_WB_io_flush", false,-1);
    tracep->declBit(c+18,"MEM_WB_io_stallPrev", false,-1);
    tracep->declBit(c+97,"MEM_WB_io_prev_reg_en", false,-1);
    tracep->declBus(c+98,"MEM_WB_io_prev_reg_addr", false,-1, 4,0);
    tracep->declBus(c+21,"MEM_WB_io_prev_reg_data", false,-1, 31,0);
    tracep->declBus(c+101,"MEM_WB_io_prev_csr_op", false,-1, 2,0);
    tracep->declBus(c+102,"MEM_WB_io_prev_csr_addr", false,-1, 11,0);
    tracep->declBus(c+103,"MEM_WB_io_prev_csr_data", false,-1, 31,0);
    tracep->declBit(c+104,"MEM_WB_io_prev_csr_retired", false,-1);
    tracep->declBit(c+111,"MEM_WB_io_next_reg_en", false,-1);
    tracep->declBus(c+112,"MEM_WB_io_next_reg_addr", false,-1, 4,0);
    tracep->declBus(c+113,"MEM_WB_io_next_reg_data", false,-1, 31,0);
    tracep->declBus(c+114,"MEM_WB_io_next_csr_op", false,-1, 2,0);
    tracep->declBus(c+115,"MEM_WB_io_next_csr_addr", false,-1, 11,0);
    tracep->declBus(c+116,"MEM_WB_io_next_csr_data", false,-1, 31,0);
    tracep->declBit(c+117,"MEM_WB_io_next_csr_retired", false,-1);
    tracep->declBit(c+111,"WB_io_mem_i_reg_en", false,-1);
    tracep->declBus(c+112,"WB_io_mem_i_reg_addr", false,-1, 4,0);
    tracep->declBus(c+113,"WB_io_mem_i_reg_data", false,-1, 31,0);
    tracep->declBus(c+114,"WB_io_mem_i_csr_op", false,-1, 2,0);
    tracep->declBus(c+115,"WB_io_mem_i_csr_addr", false,-1, 11,0);
    tracep->declBus(c+116,"WB_io_mem_i_csr_data", false,-1, 31,0);
    tracep->declBit(c+117,"WB_io_mem_i_csr_retired", false,-1);
    tracep->declBit(c+111,"WB_io_regen", false,-1);
    tracep->declBus(c+112,"WB_io_regaddr", false,-1, 4,0);
    tracep->declBus(c+113,"WB_io_regdata", false,-1, 31,0);
    tracep->declBus(c+114,"WB_io_csr_op", false,-1, 2,0);
    tracep->declBus(c+115,"WB_io_csr_addr", false,-1, 11,0);
    tracep->declBus(c+116,"WB_io_csr_data", false,-1, 31,0);
    tracep->declBit(c+117,"WB_io_csr_retired", false,-1);
    tracep->declBit(c+229,"regfile_clock", false,-1);
    tracep->declBit(c+230,"regfile_reset", false,-1);
    tracep->declBit(c+63,"regfile_io_read1_en", false,-1);
    tracep->declBus(c+64,"regfile_io_read1_addr", false,-1, 4,0);
    tracep->declBus(c+118,"regfile_io_read1_data", false,-1, 31,0);
    tracep->declBit(c+65,"regfile_io_read2_en", false,-1);
    tracep->declBus(c+66,"regfile_io_read2_addr", false,-1, 4,0);
    tracep->declBus(c+119,"regfile_io_read2_data", false,-1, 31,0);
    tracep->declBit(c+111,"regfile_io_en", false,-1);
    tracep->declBus(c+112,"regfile_io_addr", false,-1, 4,0);
    tracep->declBus(c+113,"regfile_io_data", false,-1, 31,0);
    tracep->declBit(c+63,"resoler_io_id_read1_en", false,-1);
    tracep->declBus(c+64,"resoler_io_id_read1_addr", false,-1, 4,0);
    tracep->declBus(c+6,"resoler_io_id_read1_data", false,-1, 31,0);
    tracep->declBit(c+65,"resoler_io_id_read2_en", false,-1);
    tracep->declBus(c+66,"resoler_io_id_read2_addr", false,-1, 4,0);
    tracep->declBus(c+7,"resoler_io_id_read2_data", false,-1, 31,0);
    tracep->declBus(c+68,"resoler_io_csrRead_op", false,-1, 2,0);
    tracep->declBus(c+67,"resoler_io_csrRead_addr", false,-1, 31,0);
    tracep->declBit(c+63,"resoler_io_rs1_en", false,-1);
    tracep->declBus(c+64,"resoler_io_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+118,"resoler_io_rs1_data", false,-1, 31,0);
    tracep->declBit(c+65,"resoler_io_rs2_en", false,-1);
    tracep->declBus(c+66,"resoler_io_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+119,"resoler_io_rs2_data", false,-1, 31,0);
    tracep->declBit(c+93,"resoler_io_load", false,-1);
    tracep->declBit(c+81,"resoler_io_ex_reg_en", false,-1);
    tracep->declBus(c+82,"resoler_io_ex_reg_addr", false,-1, 4,0);
    tracep->declBus(c+92,"resoler_io_ex_reg_data", false,-1, 31,0);
    tracep->declBus(c+83,"resoler_io_ex_csr_op", false,-1, 2,0);
    tracep->declBus(c+84,"resoler_io_ex_csr_addr", false,-1, 11,0);
    tracep->declBit(c+97,"resoler_io_mem_reg_en", false,-1);
    tracep->declBus(c+98,"resoler_io_mem_reg_addr", false,-1, 4,0);
    tracep->declBus(c+21,"resoler_io_mem_reg_data", false,-1, 31,0);
    tracep->declBus(c+101,"resoler_io_mem_csr_op", false,-1, 2,0);
    tracep->declBus(c+102,"resoler_io_mem_csr_addr", false,-1, 11,0);
    tracep->declBit(c+111,"resoler_io_wb_reg_en", false,-1);
    tracep->declBus(c+112,"resoler_io_wb_reg_addr", false,-1, 4,0);
    tracep->declBus(c+113,"resoler_io_wb_reg_data", false,-1, 31,0);
    tracep->declBus(c+114,"resoler_io_wb_csr_op", false,-1, 2,0);
    tracep->declBus(c+115,"resoler_io_wb_csr_addr", false,-1, 11,0);
    tracep->declBit(c+120,"resoler_io_loadflag", false,-1);
    tracep->declBit(c+121,"resoler_io_csrflag", false,-1);
    tracep->declBit(c+248,"ctrl_io_if_stall", false,-1);
    tracep->declBit(c+10,"ctrl_io_id_flush", false,-1);
    tracep->declBus(c+11,"ctrl_io_id_flushpc", false,-1, 31,0);
    tracep->declBit(c+18,"ctrl_io_mem_stall", false,-1);
    tracep->declBit(c+120,"ctrl_io_loadflag", false,-1);
    tracep->declBit(c+121,"ctrl_io_csrflag", false,-1);
    tracep->declBit(c+4,"ctrl_io_except_hasTrap", false,-1);
    tracep->declBus(c+22,"ctrl_io_csrTvec", false,-1, 31,0);
    tracep->declBit(c+5,"ctrl_io_stallIf", false,-1);
    tracep->declBit(c+8,"ctrl_io_stallId", false,-1);
    tracep->declBit(c+17,"ctrl_io_stallEx", false,-1);
    tracep->declBit(c+18,"ctrl_io_stallMm", false,-1);
    tracep->declBit(c+4,"ctrl_io_flush", false,-1);
    tracep->declBit(c+1,"ctrl_io_flushIf", false,-1);
    tracep->declBus(c+2,"ctrl_io_flushPc", false,-1, 31,0);
    tracep->declBit(c+229,"csr_clock", false,-1);
    tracep->declBit(c+230,"csr_reset", false,-1);
    tracep->declBus(c+9,"csr_io_read_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+67,"csr_io_read_csr_raddr", false,-1, 31,0);
    tracep->declBus(c+68,"csr_io_read_csr_op", false,-1, 2,0);
    tracep->declBit(c+69,"csr_io_read_csr_valid", false,-1);
    tracep->declBus(c+114,"csr_io_write_op", false,-1, 2,0);
    tracep->declBus(c+115,"csr_io_write_addr", false,-1, 11,0);
    tracep->declBus(c+116,"csr_io_write_data", false,-1, 31,0);
    tracep->declBit(c+117,"csr_io_write_retired", false,-1);
    tracep->declBit(c+4,"csr_io_except_hasTrap", false,-1);
    tracep->declBus(c+109,"csr_io_except_excCause", false,-1, 30,0);
    tracep->declBus(c+108,"csr_io_except_excPc", false,-1, 31,0);
    tracep->declBus(c+19,"csr_io_except_excValue", false,-1, 31,0);
    tracep->declBit(c+245,"csr_io_timer", false,-1);
    tracep->declBit(c+246,"csr_io_soft", false,-1);
    tracep->declBit(c+247,"csr_io_extern", false,-1);
    tracep->declBit(c+20,"csr_io_hasInt", false,-1);
    tracep->declBit(c+110,"csr_io_busy", false,-1);
    tracep->declBus(c+22,"csr_io_trapVec", false,-1, 31,0);
    tracep->pushNamePrefix("EX ");
    tracep->declBus(c+76,"io_id_i_aluOp", false,-1, 3,0);
    tracep->declBus(c+77,"io_id_i_opr1", false,-1, 31,0);
    tracep->declBus(c+78,"io_id_i_opr2", false,-1, 31,0);
    tracep->declBus(c+79,"io_id_i_lsuOp", false,-1, 3,0);
    tracep->declBus(c+80,"io_id_i_lsuData", false,-1, 31,0);
    tracep->declBit(c+81,"io_id_i_regWen", false,-1);
    tracep->declBus(c+82,"io_id_i_regWaddr", false,-1, 4,0);
    tracep->declBus(c+83,"io_id_i_csrOp", false,-1, 2,0);
    tracep->declBus(c+84,"io_id_i_csrAddr", false,-1, 11,0);
    tracep->declBit(c+85,"io_id_i_csren", false,-1);
    tracep->declBus(c+86,"io_id_i_csrrData", false,-1, 31,0);
    tracep->declBus(c+87,"io_id_i_csrwData", false,-1, 31,0);
    tracep->declBus(c+88,"io_id_i_excType", false,-1, 3,0);
    tracep->declBus(c+89,"io_id_i_excValue", false,-1, 31,0);
    tracep->declBus(c+90,"io_id_i_inst", false,-1, 31,0);
    tracep->declBus(c+91,"io_id_i_currentPc", false,-1, 31,0);
    tracep->declBus(c+79,"io_ex_o_lsuOp", false,-1, 3,0);
    tracep->declBus(c+80,"io_ex_o_lsuData", false,-1, 31,0);
    tracep->declBit(c+81,"io_ex_o_reg_en", false,-1);
    tracep->declBus(c+82,"io_ex_o_reg_addr", false,-1, 4,0);
    tracep->declBus(c+92,"io_ex_o_reg_data", false,-1, 31,0);
    tracep->declBit(c+93,"io_ex_o_load", false,-1);
    tracep->declBus(c+83,"io_ex_o_csr_op", false,-1, 2,0);
    tracep->declBus(c+84,"io_ex_o_csr_addr", false,-1, 11,0);
    tracep->declBus(c+87,"io_ex_o_csr_data", false,-1, 31,0);
    tracep->declBit(c+94,"io_ex_o_csr_retired", false,-1);
    tracep->declBus(c+88,"io_ex_o_excType", false,-1, 3,0);
    tracep->declBus(c+89,"io_ex_o_excValue", false,-1, 31,0);
    tracep->declBus(c+90,"io_ex_o_inst", false,-1, 31,0);
    tracep->declBus(c+91,"io_ex_o_currentPc", false,-1, 31,0);
    tracep->declQuad(c+122,"Aluresult", false,-1, 62,0);
    tracep->declQuad(c+124,"result", false,-1, 62,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX_MEM ");
    tracep->declBit(c+229,"clock", false,-1);
    tracep->declBit(c+230,"reset", false,-1);
    tracep->declBit(c+4,"io_flush", false,-1);
    tracep->declBit(c+17,"io_stallPrev", false,-1);
    tracep->declBus(c+79,"io_prev_lsuOp", false,-1, 3,0);
    tracep->declBus(c+80,"io_prev_lsuData", false,-1, 31,0);
    tracep->declBit(c+81,"io_prev_reg_en", false,-1);
    tracep->declBus(c+82,"io_prev_reg_addr", false,-1, 4,0);
    tracep->declBus(c+92,"io_prev_reg_data", false,-1, 31,0);
    tracep->declBit(c+93,"io_prev_load", false,-1);
    tracep->declBus(c+83,"io_prev_csr_op", false,-1, 2,0);
    tracep->declBus(c+84,"io_prev_csr_addr", false,-1, 11,0);
    tracep->declBus(c+87,"io_prev_csr_data", false,-1, 31,0);
    tracep->declBit(c+94,"io_prev_csr_retired", false,-1);
    tracep->declBus(c+88,"io_prev_excType", false,-1, 3,0);
    tracep->declBus(c+89,"io_prev_excValue", false,-1, 31,0);
    tracep->declBus(c+90,"io_prev_inst", false,-1, 31,0);
    tracep->declBus(c+91,"io_prev_currentPc", false,-1, 31,0);
    tracep->declBus(c+95,"io_next_lsuOp", false,-1, 3,0);
    tracep->declBus(c+96,"io_next_lsuData", false,-1, 31,0);
    tracep->declBit(c+97,"io_next_reg_en", false,-1);
    tracep->declBus(c+98,"io_next_reg_addr", false,-1, 4,0);
    tracep->declBus(c+99,"io_next_reg_data", false,-1, 31,0);
    tracep->declBit(c+100,"io_next_load", false,-1);
    tracep->declBus(c+101,"io_next_csr_op", false,-1, 2,0);
    tracep->declBus(c+102,"io_next_csr_addr", false,-1, 11,0);
    tracep->declBus(c+103,"io_next_csr_data", false,-1, 31,0);
    tracep->declBit(c+104,"io_next_csr_retired", false,-1);
    tracep->declBus(c+105,"io_next_excType", false,-1, 3,0);
    tracep->declBus(c+106,"io_next_excValue", false,-1, 31,0);
    tracep->declBus(c+107,"io_next_inst", false,-1, 31,0);
    tracep->declBus(c+108,"io_next_currentPc", false,-1, 31,0);
    tracep->declBus(c+95,"ff_lsuOp", false,-1, 3,0);
    tracep->declBus(c+96,"ff_lsuData", false,-1, 31,0);
    tracep->declBit(c+97,"ff_reg_en", false,-1);
    tracep->declBus(c+98,"ff_reg_addr", false,-1, 4,0);
    tracep->declBus(c+99,"ff_reg_data", false,-1, 31,0);
    tracep->declBit(c+100,"ff_load", false,-1);
    tracep->declBus(c+101,"ff_csr_op", false,-1, 2,0);
    tracep->declBus(c+102,"ff_csr_addr", false,-1, 11,0);
    tracep->declBus(c+103,"ff_csr_data", false,-1, 31,0);
    tracep->declBit(c+104,"ff_csr_retired", false,-1);
    tracep->declBus(c+105,"ff_excType", false,-1, 3,0);
    tracep->declBus(c+106,"ff_excValue", false,-1, 31,0);
    tracep->declBus(c+107,"ff_inst", false,-1, 31,0);
    tracep->declBus(c+108,"ff_currentPc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+229,"clock", false,-1);
    tracep->declBus(c+57,"io_if_i_pc", false,-1, 31,0);
    tracep->declBit(c+58,"io_if_i_valid", false,-1);
    tracep->declBus(c+59,"io_if_i_inst", false,-1, 31,0);
    tracep->declBit(c+60,"io_if_i_bpu_take", false,-1);
    tracep->declBus(c+61,"io_if_i_bpu_takepc", false,-1, 31,0);
    tracep->declBit(c+62,"io_if_i_misaligned", false,-1);
    tracep->declBit(c+63,"io_read1_en", false,-1);
    tracep->declBus(c+64,"io_read1_addr", false,-1, 4,0);
    tracep->declBus(c+6,"io_read1_data", false,-1, 31,0);
    tracep->declBit(c+65,"io_read2_en", false,-1);
    tracep->declBus(c+66,"io_read2_addr", false,-1, 4,0);
    tracep->declBus(c+7,"io_read2_data", false,-1, 31,0);
    tracep->declBit(c+8,"io_stallid", false,-1);
    tracep->declBus(c+9,"io_csrread_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+67,"io_csrread_csr_raddr", false,-1, 31,0);
    tracep->declBus(c+68,"io_csrread_csr_op", false,-1, 2,0);
    tracep->declBit(c+69,"io_csrread_csr_valid", false,-1);
    tracep->declBit(c+10,"io_flush", false,-1);
    tracep->declBus(c+11,"io_flushpc", false,-1, 31,0);
    tracep->declBus(c+70,"io_id_o_aluOp", false,-1, 3,0);
    tracep->declBus(c+12,"io_id_o_opr1", false,-1, 31,0);
    tracep->declBus(c+13,"io_id_o_opr2", false,-1, 31,0);
    tracep->declBus(c+71,"io_id_o_lsuOp", false,-1, 3,0);
    tracep->declBus(c+7,"io_id_o_lsuData", false,-1, 31,0);
    tracep->declBit(c+72,"io_id_o_regWen", false,-1);
    tracep->declBus(c+73,"io_id_o_regWaddr", false,-1, 4,0);
    tracep->declBus(c+68,"io_id_o_csrOp", false,-1, 2,0);
    tracep->declBus(c+74,"io_id_o_csrAddr", false,-1, 11,0);
    tracep->declBit(c+75,"io_id_o_csren", false,-1);
    tracep->declBus(c+9,"io_id_o_csrrData", false,-1, 31,0);
    tracep->declBus(c+14,"io_id_o_csrwData", false,-1, 31,0);
    tracep->declBus(c+15,"io_id_o_excType", false,-1, 3,0);
    tracep->declBus(c+16,"io_id_o_excValue", false,-1, 31,0);
    tracep->declBus(c+59,"io_id_o_inst", false,-1, 31,0);
    tracep->declBus(c+57,"io_id_o_currentPc", false,-1, 31,0);
    tracep->declBit(c+126,"stall", false,-1);
    tracep->declBus(c+127,"lastinst", false,-1, 31,0);
    tracep->declBus(c+128,"inst", false,-1, 31,0);
    tracep->declBus(c+73,"rd", false,-1, 4,0);
    tracep->declBus(c+64,"rs1", false,-1, 4,0);
    tracep->declBus(c+66,"rs2", false,-1, 4,0);
    tracep->declBus(c+74,"immI", false,-1, 11,0);
    tracep->declBit(c+63,"regEn1", false,-1);
    tracep->declBus(c+129,"aluSrc1", false,-1, 3,0);
    tracep->declBus(c+130,"aluSrc2", false,-1, 3,0);
    tracep->declBus(c+131,"branchOp", false,-1, 2,0);
    tracep->declBus(c+132,"csrOp", false,-1, 2,0);
    tracep->declBus(c+133,"excType", false,-1, 3,0);
    tracep->declBit(c+134,"all_jump", false,-1);
    tracep->declBus(c+135,"jal_pc", false,-1, 31,0);
    tracep->declBus(c+23,"imm_jalr", false,-1, 31,0);
    tracep->declQuad(c+24,"jalr_pc", false,-1, 32,0);
    tracep->declQuad(c+26,"pc_j", false,-1, 32,0);
    tracep->declBus(c+136,"pc_b", false,-1, 31,0);
    tracep->declQuad(c+28,"takepc", false,-1, 32,0);
    tracep->declBit(c+30,"branchteke", false,-1);
    tracep->declBit(c+10,"branchmiss", false,-1);
    tracep->declQuad(c+31,"flushpc", false,-1, 32,0);
    tracep->declBit(c+33,"addrFault", false,-1);
    tracep->declBus(c+68,"csrActOp", false,-1, 2,0);
    tracep->declBit(c+75,"csren", false,-1);
    tracep->declQuad(c+34,"exceptValue", false,-1, 32,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID_EX ");
    tracep->declBit(c+229,"clock", false,-1);
    tracep->declBit(c+230,"reset", false,-1);
    tracep->declBit(c+4,"io_flush", false,-1);
    tracep->declBit(c+8,"io_stallPrev", false,-1);
    tracep->declBus(c+70,"io_prev_aluOp", false,-1, 3,0);
    tracep->declBus(c+12,"io_prev_opr1", false,-1, 31,0);
    tracep->declBus(c+13,"io_prev_opr2", false,-1, 31,0);
    tracep->declBus(c+71,"io_prev_lsuOp", false,-1, 3,0);
    tracep->declBus(c+7,"io_prev_lsuData", false,-1, 31,0);
    tracep->declBit(c+72,"io_prev_regWen", false,-1);
    tracep->declBus(c+73,"io_prev_regWaddr", false,-1, 4,0);
    tracep->declBus(c+68,"io_prev_csrOp", false,-1, 2,0);
    tracep->declBus(c+74,"io_prev_csrAddr", false,-1, 11,0);
    tracep->declBit(c+75,"io_prev_csren", false,-1);
    tracep->declBus(c+9,"io_prev_csrrData", false,-1, 31,0);
    tracep->declBus(c+14,"io_prev_csrwData", false,-1, 31,0);
    tracep->declBus(c+15,"io_prev_excType", false,-1, 3,0);
    tracep->declBus(c+16,"io_prev_excValue", false,-1, 31,0);
    tracep->declBus(c+59,"io_prev_inst", false,-1, 31,0);
    tracep->declBus(c+57,"io_prev_currentPc", false,-1, 31,0);
    tracep->declBus(c+76,"io_next_aluOp", false,-1, 3,0);
    tracep->declBus(c+77,"io_next_opr1", false,-1, 31,0);
    tracep->declBus(c+78,"io_next_opr2", false,-1, 31,0);
    tracep->declBus(c+79,"io_next_lsuOp", false,-1, 3,0);
    tracep->declBus(c+80,"io_next_lsuData", false,-1, 31,0);
    tracep->declBit(c+81,"io_next_regWen", false,-1);
    tracep->declBus(c+82,"io_next_regWaddr", false,-1, 4,0);
    tracep->declBus(c+83,"io_next_csrOp", false,-1, 2,0);
    tracep->declBus(c+84,"io_next_csrAddr", false,-1, 11,0);
    tracep->declBit(c+85,"io_next_csren", false,-1);
    tracep->declBus(c+86,"io_next_csrrData", false,-1, 31,0);
    tracep->declBus(c+87,"io_next_csrwData", false,-1, 31,0);
    tracep->declBus(c+88,"io_next_excType", false,-1, 3,0);
    tracep->declBus(c+89,"io_next_excValue", false,-1, 31,0);
    tracep->declBus(c+90,"io_next_inst", false,-1, 31,0);
    tracep->declBus(c+91,"io_next_currentPc", false,-1, 31,0);
    tracep->declBus(c+76,"ff_aluOp", false,-1, 3,0);
    tracep->declBus(c+77,"ff_opr1", false,-1, 31,0);
    tracep->declBus(c+78,"ff_opr2", false,-1, 31,0);
    tracep->declBus(c+79,"ff_lsuOp", false,-1, 3,0);
    tracep->declBus(c+80,"ff_lsuData", false,-1, 31,0);
    tracep->declBit(c+81,"ff_regWen", false,-1);
    tracep->declBus(c+82,"ff_regWaddr", false,-1, 4,0);
    tracep->declBus(c+83,"ff_csrOp", false,-1, 2,0);
    tracep->declBus(c+84,"ff_csrAddr", false,-1, 11,0);
    tracep->declBit(c+85,"ff_csren", false,-1);
    tracep->declBus(c+86,"ff_csrrData", false,-1, 31,0);
    tracep->declBus(c+87,"ff_csrwData", false,-1, 31,0);
    tracep->declBus(c+88,"ff_excType", false,-1, 3,0);
    tracep->declBus(c+89,"ff_excValue", false,-1, 31,0);
    tracep->declBus(c+90,"ff_inst", false,-1, 31,0);
    tracep->declBus(c+91,"ff_currentPc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_ID ");
    tracep->declBit(c+229,"clock", false,-1);
    tracep->declBit(c+230,"reset", false,-1);
    tracep->declBit(c+4,"io_flush", false,-1);
    tracep->declBit(c+5,"io_stallPrev", false,-1);
    tracep->declBus(c+235,"io_prev_pc", false,-1, 31,0);
    tracep->declBit(c+232,"io_prev_valid", false,-1);
    tracep->declBus(c+236,"io_prev_inst", false,-1, 31,0);
    tracep->declBit(c+249,"io_prev_bpu_take", false,-1);
    tracep->declBus(c+3,"io_prev_bpu_takepc", false,-1, 31,0);
    tracep->declBit(c+56,"io_prev_misaligned", false,-1);
    tracep->declBus(c+57,"io_next_pc", false,-1, 31,0);
    tracep->declBit(c+58,"io_next_valid", false,-1);
    tracep->declBus(c+59,"io_next_inst", false,-1, 31,0);
    tracep->declBit(c+60,"io_next_bpu_take", false,-1);
    tracep->declBus(c+61,"io_next_bpu_takepc", false,-1, 31,0);
    tracep->declBit(c+62,"io_next_misaligned", false,-1);
    tracep->declBus(c+57,"ff_pc", false,-1, 31,0);
    tracep->declBit(c+58,"ff_valid", false,-1);
    tracep->declBus(c+59,"ff_inst", false,-1, 31,0);
    tracep->declBit(c+60,"ff_bpu_take", false,-1);
    tracep->declBus(c+61,"ff_bpu_takepc", false,-1, 31,0);
    tracep->declBit(c+62,"ff_misaligned", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBus(c+95,"io_ex_i_lsuOp", false,-1, 3,0);
    tracep->declBus(c+96,"io_ex_i_lsuData", false,-1, 31,0);
    tracep->declBit(c+97,"io_ex_i_reg_en", false,-1);
    tracep->declBus(c+98,"io_ex_i_reg_addr", false,-1, 4,0);
    tracep->declBus(c+99,"io_ex_i_reg_data", false,-1, 31,0);
    tracep->declBit(c+100,"io_ex_i_load", false,-1);
    tracep->declBus(c+101,"io_ex_i_csr_op", false,-1, 2,0);
    tracep->declBus(c+102,"io_ex_i_csr_addr", false,-1, 11,0);
    tracep->declBus(c+103,"io_ex_i_csr_data", false,-1, 31,0);
    tracep->declBit(c+104,"io_ex_i_csr_retired", false,-1);
    tracep->declBus(c+105,"io_ex_i_excType", false,-1, 3,0);
    tracep->declBus(c+106,"io_ex_i_excValue", false,-1, 31,0);
    tracep->declBus(c+107,"io_ex_i_inst", false,-1, 31,0);
    tracep->declBus(c+108,"io_ex_i_currentPc", false,-1, 31,0);
    tracep->declBit(c+18,"io_stallReq", false,-1);
    tracep->declBit(c+238,"io_ram_en", false,-1);
    tracep->declBit(c+239,"io_ram_valid", false,-1);
    tracep->declBit(c+240,"io_ram_fault", false,-1);
    tracep->declBus(c+241,"io_ram_wen", false,-1, 3,0);
    tracep->declBus(c+242,"io_ram_addr", false,-1, 31,0);
    tracep->declBus(c+243,"io_ram_rdata", false,-1, 31,0);
    tracep->declBus(c+244,"io_ram_wdata", false,-1, 31,0);
    tracep->declBit(c+4,"io_except_hasTrap", false,-1);
    tracep->declBus(c+109,"io_except_excCause", false,-1, 30,0);
    tracep->declBus(c+108,"io_except_excPc", false,-1, 31,0);
    tracep->declBus(c+19,"io_except_excValue", false,-1, 31,0);
    tracep->declBit(c+20,"io_csrHasInt", false,-1);
    tracep->declBit(c+110,"io_csrBusy", false,-1);
    tracep->declBit(c+97,"io_mem_o_reg_en", false,-1);
    tracep->declBus(c+98,"io_mem_o_reg_addr", false,-1, 4,0);
    tracep->declBus(c+21,"io_mem_o_reg_data", false,-1, 31,0);
    tracep->declBus(c+101,"io_mem_o_csr_op", false,-1, 2,0);
    tracep->declBus(c+102,"io_mem_o_csr_addr", false,-1, 11,0);
    tracep->declBus(c+103,"io_mem_o_csr_data", false,-1, 31,0);
    tracep->declBit(c+104,"io_mem_o_csr_retired", false,-1);
    tracep->declBit(c+137,"wen", false,-1);
    tracep->declBus(c+138,"width", false,-1, 1,0);
    tracep->declBit(c+139,"signed_", false,-1);
    tracep->declBus(c+140,"sel", false,-1, 1,0);
    tracep->declBus(c+141,"writeEn", false,-1, 6,0);
    tracep->declBus(c+142,"ramWen", false,-1, 6,0);
    tracep->declQuad(c+143,"lsuData", false,-1, 55,0);
    tracep->declBus(c+250,"loadData", false,-1, 31,0);
    tracep->declBit(c+145,"memAddr", false,-1);
    tracep->declBit(c+36,"memExcept", false,-1);
    tracep->declBit(c+146,"instAddr", false,-1);
    tracep->declBit(c+147,"instIllg", false,-1);
    tracep->declBit(c+148,"excMem", false,-1);
    tracep->declBit(c+149,"excOther", false,-1);
    tracep->declBit(c+4,"hasTrap", false,-1);
    tracep->declBus(c+150,"cause", false,-1, 30,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM_WB ");
    tracep->declBit(c+229,"clock", false,-1);
    tracep->declBit(c+230,"reset", false,-1);
    tracep->declBit(c+4,"io_flush", false,-1);
    tracep->declBit(c+18,"io_stallPrev", false,-1);
    tracep->declBit(c+97,"io_prev_reg_en", false,-1);
    tracep->declBus(c+98,"io_prev_reg_addr", false,-1, 4,0);
    tracep->declBus(c+21,"io_prev_reg_data", false,-1, 31,0);
    tracep->declBus(c+101,"io_prev_csr_op", false,-1, 2,0);
    tracep->declBus(c+102,"io_prev_csr_addr", false,-1, 11,0);
    tracep->declBus(c+103,"io_prev_csr_data", false,-1, 31,0);
    tracep->declBit(c+104,"io_prev_csr_retired", false,-1);
    tracep->declBit(c+111,"io_next_reg_en", false,-1);
    tracep->declBus(c+112,"io_next_reg_addr", false,-1, 4,0);
    tracep->declBus(c+113,"io_next_reg_data", false,-1, 31,0);
    tracep->declBus(c+114,"io_next_csr_op", false,-1, 2,0);
    tracep->declBus(c+115,"io_next_csr_addr", false,-1, 11,0);
    tracep->declBus(c+116,"io_next_csr_data", false,-1, 31,0);
    tracep->declBit(c+117,"io_next_csr_retired", false,-1);
    tracep->declBit(c+111,"ff_reg_en", false,-1);
    tracep->declBus(c+112,"ff_reg_addr", false,-1, 4,0);
    tracep->declBus(c+113,"ff_reg_data", false,-1, 31,0);
    tracep->declBus(c+114,"ff_csr_op", false,-1, 2,0);
    tracep->declBus(c+115,"ff_csr_addr", false,-1, 11,0);
    tracep->declBus(c+116,"ff_csr_data", false,-1, 31,0);
    tracep->declBit(c+117,"ff_csr_retired", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+111,"io_mem_i_reg_en", false,-1);
    tracep->declBus(c+112,"io_mem_i_reg_addr", false,-1, 4,0);
    tracep->declBus(c+113,"io_mem_i_reg_data", false,-1, 31,0);
    tracep->declBus(c+114,"io_mem_i_csr_op", false,-1, 2,0);
    tracep->declBus(c+115,"io_mem_i_csr_addr", false,-1, 11,0);
    tracep->declBus(c+116,"io_mem_i_csr_data", false,-1, 31,0);
    tracep->declBit(c+117,"io_mem_i_csr_retired", false,-1);
    tracep->declBit(c+111,"io_regen", false,-1);
    tracep->declBus(c+112,"io_regaddr", false,-1, 4,0);
    tracep->declBus(c+113,"io_regdata", false,-1, 31,0);
    tracep->declBus(c+114,"io_csr_op", false,-1, 2,0);
    tracep->declBus(c+115,"io_csr_addr", false,-1, 11,0);
    tracep->declBus(c+116,"io_csr_data", false,-1, 31,0);
    tracep->declBit(c+117,"io_csr_retired", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+229,"clock", false,-1);
    tracep->declBit(c+230,"reset", false,-1);
    tracep->declBus(c+9,"io_read_csr_rdata", false,-1, 31,0);
    tracep->declBus(c+67,"io_read_csr_raddr", false,-1, 31,0);
    tracep->declBus(c+68,"io_read_csr_op", false,-1, 2,0);
    tracep->declBit(c+69,"io_read_csr_valid", false,-1);
    tracep->declBus(c+114,"io_write_op", false,-1, 2,0);
    tracep->declBus(c+115,"io_write_addr", false,-1, 11,0);
    tracep->declBus(c+116,"io_write_data", false,-1, 31,0);
    tracep->declBit(c+117,"io_write_retired", false,-1);
    tracep->declBit(c+4,"io_except_hasTrap", false,-1);
    tracep->declBus(c+109,"io_except_excCause", false,-1, 30,0);
    tracep->declBus(c+108,"io_except_excPc", false,-1, 31,0);
    tracep->declBus(c+19,"io_except_excValue", false,-1, 31,0);
    tracep->declBit(c+245,"io_timer", false,-1);
    tracep->declBit(c+246,"io_soft", false,-1);
    tracep->declBit(c+247,"io_extern", false,-1);
    tracep->declBit(c+20,"io_hasInt", false,-1);
    tracep->declBit(c+110,"io_busy", false,-1);
    tracep->declBus(c+22,"io_trapVec", false,-1, 31,0);
    tracep->declBus(c+151,"mode", false,-1, 1,0);
    tracep->declBit(c+152,"mstatus_sum", false,-1);
    tracep->declBus(c+153,"mstatus_mpp", false,-1, 1,0);
    tracep->declBit(c+154,"mstatus_spp", false,-1);
    tracep->declBit(c+155,"mstatus_mpie", false,-1);
    tracep->declBit(c+156,"mstatus_spie", false,-1);
    tracep->declBit(c+157,"mstatus_mie", false,-1);
    tracep->declBit(c+158,"mstatus_sie", false,-1);
    tracep->declBus(c+159,"medeleg_data", false,-1, 31,0);
    tracep->declBus(c+160,"mideleg_data", false,-1, 31,0);
    tracep->declBit(c+161,"mie_meie", false,-1);
    tracep->declBit(c+162,"mie_seie", false,-1);
    tracep->declBit(c+163,"mie_mtie", false,-1);
    tracep->declBit(c+164,"mie_stie", false,-1);
    tracep->declBit(c+165,"mie_msie", false,-1);
    tracep->declBit(c+166,"mie_ssie", false,-1);
    tracep->declBus(c+167,"mtvec_base", false,-1, 29,0);
    tracep->declBus(c+168,"mtvec_mode", false,-1, 1,0);
    tracep->declBus(c+169,"mscratch_data", false,-1, 31,0);
    tracep->declBus(c+170,"mepc_data", false,-1, 31,0);
    tracep->declBit(c+171,"mcause_int", false,-1);
    tracep->declBus(c+172,"mcause_code", false,-1, 30,0);
    tracep->declBus(c+173,"mtval_data", false,-1, 31,0);
    tracep->declBit(c+174,"mipReal_seip", false,-1);
    tracep->declBit(c+175,"mipReal_stip", false,-1);
    tracep->declBit(c+176,"mipReal_ssip", false,-1);
    tracep->declQuad(c+177,"mcycle_data", false,-1, 63,0);
    tracep->declQuad(c+179,"minstret_data", false,-1, 63,0);
    tracep->declBit(c+152,"sstatus_sum", false,-1);
    tracep->declBit(c+154,"sstatus_spp", false,-1);
    tracep->declBit(c+156,"sstatus_spie", false,-1);
    tracep->declBit(c+158,"sstatus_sie", false,-1);
    tracep->declBit(c+162,"sie_seie", false,-1);
    tracep->declBit(c+164,"sie_stie", false,-1);
    tracep->declBit(c+166,"sie_ssie", false,-1);
    tracep->declBus(c+181,"stvec_base", false,-1, 29,0);
    tracep->declBus(c+182,"stvec_mode", false,-1, 1,0);
    tracep->declBus(c+183,"sscratch_data", false,-1, 31,0);
    tracep->declBus(c+184,"sepc_data", false,-1, 31,0);
    tracep->declBit(c+185,"scause_int", false,-1);
    tracep->declBus(c+186,"scause_code", false,-1, 30,0);
    tracep->declBus(c+187,"stval_data", false,-1, 31,0);
    tracep->declBit(c+188,"satp_mode", false,-1);
    tracep->declBus(c+189,"satp_ppn", false,-1, 21,0);
    tracep->declBit(c+37,"mip_ssip", false,-1);
    tracep->declBit(c+38,"mip_stip", false,-1);
    tracep->declBit(c+39,"mip_seip", false,-1);
    tracep->declBit(c+190,"readable", false,-1);
    tracep->declBit(c+191,"writable", false,-1);
    tracep->declBit(c+192,"readValid", false,-1);
    tracep->declBit(c+193,"modeValid", false,-1);
    tracep->declBus(c+40,"csrData", false,-1, 31,0);
    tracep->declBit(c+110,"writeEn", false,-1);
    tracep->declBus(c+41,"writeData", false,-1, 31,0);
    tracep->declBus(c+42,"flagIntS", false,-1, 31,0);
    tracep->declBus(c+43,"flagIntM", false,-1, 31,0);
    tracep->declBit(c+44,"hasIntS", false,-1);
    tracep->declBit(c+45,"hasIntM", false,-1);
    tracep->declBit(c+20,"hasInt", false,-1);
    tracep->declBit(c+46,"handIntS", false,-1);
    tracep->declBit(c+47,"hasExc", false,-1);
    tracep->declBit(c+48,"hasExcS", false,-1);
    tracep->declBit(c+49,"handExcS", false,-1);
    tracep->declBus(c+50,"intCauseS", false,-1, 30,0);
    tracep->declBus(c+51,"intCauseM", false,-1, 30,0);
    tracep->declBus(c+52,"intCause", false,-1, 30,0);
    tracep->declBus(c+53,"cause", false,-1, 31,0);
    tracep->declBus(c+54,"trapVecS", false,-1, 31,0);
    tracep->declBus(c+55,"trapVecM", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ctrl ");
    tracep->declBit(c+248,"io_if_stall", false,-1);
    tracep->declBit(c+10,"io_id_flush", false,-1);
    tracep->declBus(c+11,"io_id_flushpc", false,-1, 31,0);
    tracep->declBit(c+18,"io_mem_stall", false,-1);
    tracep->declBit(c+120,"io_loadflag", false,-1);
    tracep->declBit(c+121,"io_csrflag", false,-1);
    tracep->declBit(c+4,"io_except_hasTrap", false,-1);
    tracep->declBus(c+22,"io_csrTvec", false,-1, 31,0);
    tracep->declBit(c+5,"io_stallIf", false,-1);
    tracep->declBit(c+8,"io_stallId", false,-1);
    tracep->declBit(c+17,"io_stallEx", false,-1);
    tracep->declBit(c+18,"io_stallMm", false,-1);
    tracep->declBit(c+4,"io_flush", false,-1);
    tracep->declBit(c+1,"io_flushIf", false,-1);
    tracep->declBus(c+2,"io_flushPc", false,-1, 31,0);
    tracep->declBus(c+251,"stall", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fetch ");
    tracep->declBit(c+229,"clock", false,-1);
    tracep->declBit(c+230,"reset", false,-1);
    tracep->declBit(c+232,"io_rom_valid", false,-1);
    tracep->declBus(c+235,"io_rom_addr", false,-1, 31,0);
    tracep->declBus(c+236,"io_rom_rdata", false,-1, 31,0);
    tracep->declBit(c+1,"io_flush", false,-1);
    tracep->declBus(c+2,"io_flush_pc", false,-1, 31,0);
    tracep->declBit(c+248,"io_stall", false,-1);
    tracep->declBit(c+248,"io_stallreq", false,-1);
    tracep->declBus(c+235,"io_IF_pc", false,-1, 31,0);
    tracep->declBit(c+232,"io_IF_valid", false,-1);
    tracep->declBus(c+236,"io_IF_inst", false,-1, 31,0);
    tracep->declBit(c+249,"io_IF_bpu_take", false,-1);
    tracep->declBus(c+3,"io_IF_bpu_takepc", false,-1, 31,0);
    tracep->declBit(c+56,"io_IF_misaligned", false,-1);
    tracep->declBus(c+236,"bpu_io_inst_i", false,-1, 31,0);
    tracep->declBit(c+232,"bpu_io_inst_valid_i", false,-1);
    tracep->declBus(c+235,"bpu_io_pc_i", false,-1, 31,0);
    tracep->declBit(c+249,"bpu_io_prdt_taken_o", false,-1);
    tracep->declBus(c+3,"bpu_io_prdt_addr_o", false,-1, 31,0);
    tracep->declBus(c+194,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("bpu ");
    tracep->declBus(c+236,"io_inst_i", false,-1, 31,0);
    tracep->declBit(c+232,"io_inst_valid_i", false,-1);
    tracep->declBus(c+235,"io_pc_i", false,-1, 31,0);
    tracep->declBit(c+249,"io_prdt_taken_o", false,-1);
    tracep->declBus(c+3,"io_prdt_addr_o", false,-1, 31,0);
    tracep->declBus(c+252,"opcode", false,-1, 6,0);
    tracep->declBit(c+253,"inst_type_branch", false,-1);
    tracep->declBit(c+254,"inst_jal", false,-1);
    tracep->declBus(c+255,"inst_b_type_imm", false,-1, 31,0);
    tracep->declBus(c+256,"inst_j_type_imm", false,-1, 31,0);
    tracep->declBit(c+257,"prdt_taken", false,-1);
    tracep->declBus(c+258,"prdt_imm", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+229,"clock", false,-1);
    tracep->declBit(c+230,"reset", false,-1);
    tracep->declBit(c+63,"io_read1_en", false,-1);
    tracep->declBus(c+64,"io_read1_addr", false,-1, 4,0);
    tracep->declBus(c+118,"io_read1_data", false,-1, 31,0);
    tracep->declBit(c+65,"io_read2_en", false,-1);
    tracep->declBus(c+66,"io_read2_addr", false,-1, 4,0);
    tracep->declBus(c+119,"io_read2_data", false,-1, 31,0);
    tracep->declBit(c+111,"io_en", false,-1);
    tracep->declBus(c+112,"io_addr", false,-1, 4,0);
    tracep->declBus(c+113,"io_data", false,-1, 31,0);
    tracep->declBus(c+195,"regfile_0", false,-1, 31,0);
    tracep->declBus(c+196,"regfile_1", false,-1, 31,0);
    tracep->declBus(c+197,"regfile_2", false,-1, 31,0);
    tracep->declBus(c+198,"regfile_3", false,-1, 31,0);
    tracep->declBus(c+199,"regfile_4", false,-1, 31,0);
    tracep->declBus(c+200,"regfile_5", false,-1, 31,0);
    tracep->declBus(c+201,"regfile_6", false,-1, 31,0);
    tracep->declBus(c+202,"regfile_7", false,-1, 31,0);
    tracep->declBus(c+203,"regfile_8", false,-1, 31,0);
    tracep->declBus(c+204,"regfile_9", false,-1, 31,0);
    tracep->declBus(c+205,"regfile_10", false,-1, 31,0);
    tracep->declBus(c+206,"regfile_11", false,-1, 31,0);
    tracep->declBus(c+207,"regfile_12", false,-1, 31,0);
    tracep->declBus(c+208,"regfile_13", false,-1, 31,0);
    tracep->declBus(c+209,"regfile_14", false,-1, 31,0);
    tracep->declBus(c+210,"regfile_15", false,-1, 31,0);
    tracep->declBus(c+211,"regfile_16", false,-1, 31,0);
    tracep->declBus(c+212,"regfile_17", false,-1, 31,0);
    tracep->declBus(c+213,"regfile_18", false,-1, 31,0);
    tracep->declBus(c+214,"regfile_19", false,-1, 31,0);
    tracep->declBus(c+215,"regfile_20", false,-1, 31,0);
    tracep->declBus(c+216,"regfile_21", false,-1, 31,0);
    tracep->declBus(c+217,"regfile_22", false,-1, 31,0);
    tracep->declBus(c+218,"regfile_23", false,-1, 31,0);
    tracep->declBus(c+219,"regfile_24", false,-1, 31,0);
    tracep->declBus(c+220,"regfile_25", false,-1, 31,0);
    tracep->declBus(c+221,"regfile_26", false,-1, 31,0);
    tracep->declBus(c+222,"regfile_27", false,-1, 31,0);
    tracep->declBus(c+223,"regfile_28", false,-1, 31,0);
    tracep->declBus(c+224,"regfile_29", false,-1, 31,0);
    tracep->declBus(c+225,"regfile_30", false,-1, 31,0);
    tracep->declBus(c+226,"regfile_31", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("resoler ");
    tracep->declBit(c+63,"io_id_read1_en", false,-1);
    tracep->declBus(c+64,"io_id_read1_addr", false,-1, 4,0);
    tracep->declBus(c+6,"io_id_read1_data", false,-1, 31,0);
    tracep->declBit(c+65,"io_id_read2_en", false,-1);
    tracep->declBus(c+66,"io_id_read2_addr", false,-1, 4,0);
    tracep->declBus(c+7,"io_id_read2_data", false,-1, 31,0);
    tracep->declBus(c+68,"io_csrRead_op", false,-1, 2,0);
    tracep->declBus(c+67,"io_csrRead_addr", false,-1, 31,0);
    tracep->declBit(c+63,"io_rs1_en", false,-1);
    tracep->declBus(c+64,"io_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+118,"io_rs1_data", false,-1, 31,0);
    tracep->declBit(c+65,"io_rs2_en", false,-1);
    tracep->declBus(c+66,"io_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+119,"io_rs2_data", false,-1, 31,0);
    tracep->declBit(c+93,"io_load", false,-1);
    tracep->declBit(c+81,"io_ex_reg_en", false,-1);
    tracep->declBus(c+82,"io_ex_reg_addr", false,-1, 4,0);
    tracep->declBus(c+92,"io_ex_reg_data", false,-1, 31,0);
    tracep->declBus(c+83,"io_ex_csr_op", false,-1, 2,0);
    tracep->declBus(c+84,"io_ex_csr_addr", false,-1, 11,0);
    tracep->declBit(c+97,"io_mem_reg_en", false,-1);
    tracep->declBus(c+98,"io_mem_reg_addr", false,-1, 4,0);
    tracep->declBus(c+21,"io_mem_reg_data", false,-1, 31,0);
    tracep->declBus(c+101,"io_mem_csr_op", false,-1, 2,0);
    tracep->declBus(c+102,"io_mem_csr_addr", false,-1, 11,0);
    tracep->declBit(c+111,"io_wb_reg_en", false,-1);
    tracep->declBus(c+112,"io_wb_reg_addr", false,-1, 4,0);
    tracep->declBus(c+113,"io_wb_reg_data", false,-1, 31,0);
    tracep->declBus(c+114,"io_wb_csr_op", false,-1, 2,0);
    tracep->declBus(c+115,"io_wb_csr_addr", false,-1, 11,0);
    tracep->declBit(c+120,"io_loadflag", false,-1);
    tracep->declBit(c+121,"io_csrflag", false,-1);
    tracep->declBit(c+227,"load1", false,-1);
    tracep->declBit(c+228,"load2", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(((IData)(vlSelf->top__DOT__MEM__DOT__hasTrap) 
                           | (IData)(vlSelf->top__DOT__ID__DOT__branchmiss))));
    bufp->fullIData(oldp+2,(((IData)(vlSelf->top__DOT__MEM__DOT__hasTrap)
                              ? ((IData)(vlSelf->top__DOT__csr__DOT___T_605)
                                  ? ((vlSelf->top__DOT__csr__DOT__stvec_base 
                                      + (((IData)(vlSelf->top__DOT__csr__DOT__stvec_mode) 
                                          & (IData)(vlSelf->top__DOT__csr__DOT__hasInt))
                                          ? vlSelf->top__DOT__csr__DOT__cause
                                          : 0U)) << 2U)
                                  : ((vlSelf->top__DOT__csr__DOT__mtvec_base 
                                      + (((IData)(vlSelf->top__DOT__csr__DOT__mtvec_mode) 
                                          & (IData)(vlSelf->top__DOT__csr__DOT__hasInt))
                                          ? vlSelf->top__DOT__csr__DOT__cause
                                          : 0U)) << 2U))
                              : (IData)(((IData)(vlSelf->top__DOT__ID__DOT__branchmiss)
                                          ? vlSelf->top__DOT__ID__DOT__takepc
                                          : (QData)((IData)(
                                                            ((IData)(4U) 
                                                             + vlSelf->top__DOT__IF_ID__DOT__ff_pc))))))),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__fetch__DOT__bpu_io_prdt_addr_o),32);
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__MEM__DOT__hasTrap));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__IF_ID_io_stallPrev));
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__ID_io_read1_data),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__ID_io_read2_data),32);
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__ID_io_stallid));
    bufp->fullIData(oldp+9,(((0xc00U == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                              ? (IData)(vlSelf->top__DOT__csr__DOT__mcycle_data)
                              : ((0xc02U == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                  ? (IData)(vlSelf->top__DOT__csr__DOT__minstret_data)
                                  : ((0xc80U == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                      ? (IData)((vlSelf->top__DOT__csr__DOT__mcycle_data 
                                                 >> 0x20U))
                                      : ((0xc82U == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                          ? (IData)(
                                                    (vlSelf->top__DOT__csr__DOT__minstret_data 
                                                     >> 0x20U))
                                          : ((0x100U 
                                              == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                              ? vlSelf->top__DOT__csr__DOT___T_74
                                              : ((0x104U 
                                                  == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                  ? vlSelf->top__DOT__csr__DOT___T_82
                                                  : 
                                                 ((0x105U 
                                                   == (IData)(vlSelf->top__DOT__ID__DOT___T_839))
                                                   ? vlSelf->top__DOT__csr__DOT___T_83
                                                   : 
                                                  ((0x106U 
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
                                                            : vlSelf->top__DOT__csr__DOT___T_235))))))))))))))))),32);
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__ID__DOT__branchmiss));
    bufp->fullIData(oldp+11,((IData)(((IData)(vlSelf->top__DOT__ID__DOT__branchmiss)
                                       ? vlSelf->top__DOT__ID__DOT__takepc
                                       : (QData)((IData)(
                                                         ((IData)(4U) 
                                                          + vlSelf->top__DOT__IF_ID__DOT__ff_pc)))))),32);
    bufp->fullIData(oldp+12,(((1U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc1))
                               ? vlSelf->top__DOT__ID_io_read1_data
                               : ((2U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc1))
                                   ? vlSelf->top__DOT__ID_io_read2_data
                                   : ((3U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc1))
                                       ? vlSelf->top__DOT__ID__DOT___GEN_2
                                       : ((4U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc1))
                                           ? vlSelf->top__DOT__ID__DOT____VdfgTmp_h7417a8e6__0
                                           : ((5U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc1))
                                               ? vlSelf->top__DOT__ID__DOT___T_848
                                               : ((6U 
                                                   == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc1))
                                                   ? (IData)(vlSelf->top__DOT__ID__DOT__rs2)
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc1))
                                                    ? vlSelf->top__DOT__IF_ID__DOT__ff_pc
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc1))
                                                     ? 4U
                                                     : 0U))))))))),32);
    bufp->fullIData(oldp+13,(((1U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc2))
                               ? vlSelf->top__DOT__ID_io_read1_data
                               : ((2U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc2))
                                   ? vlSelf->top__DOT__ID_io_read2_data
                                   : ((3U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc2))
                                       ? vlSelf->top__DOT__ID__DOT___GEN_2
                                       : ((4U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc2))
                                           ? vlSelf->top__DOT__ID__DOT____VdfgTmp_h7417a8e6__0
                                           : ((5U == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc2))
                                               ? vlSelf->top__DOT__ID__DOT___T_848
                                               : ((6U 
                                                   == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc2))
                                                   ? (IData)(vlSelf->top__DOT__ID__DOT__rs2)
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc2))
                                                    ? vlSelf->top__DOT__IF_ID__DOT__ff_pc
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->top__DOT__ID__DOT__aluSrc2))
                                                     ? 4U
                                                     : 0U))))))))),32);
    bufp->fullIData(oldp+14,(((0U != (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                               ? ((IData)(vlSelf->top__DOT__ID__DOT__regEn1)
                                   ? vlSelf->top__DOT__ID_io_read1_data
                                   : (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                               : 0U)),32);
    bufp->fullCData(oldp+15,((((~ (((1U == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                     ? (IData)(vlSelf->top__DOT__csr__DOT__readable)
                                     : ((2U == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                         ? (IData)(vlSelf->top__DOT__csr__DOT__writable)
                                         : ((3U == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                             ? (IData)(vlSelf->top__DOT__csr__DOT___T_319)
                                             : ((4U 
                                                 == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                                 ? (IData)(vlSelf->top__DOT__csr__DOT___T_319)
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp)) 
                                                 & (IData)(vlSelf->top__DOT__csr__DOT___T_319)))))) 
                                   & (((0U != (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                        ? ((IData)(vlSelf->top__DOT__IF_ID__DOT__ff_valid)
                                            ? (3U & 
                                               (vlSelf->top__DOT__ID__DOT___T_1 
                                                >> 0x1cU))
                                            : 0U) : 0U) 
                                      <= (IData)(vlSelf->top__DOT__csr__DOT__mode)))) 
                               & (0U != (IData)(vlSelf->top__DOT__ID__DOT__csrOp)))
                               ? 5U : ((IData)(vlSelf->top__DOT__IF_ID__DOT__ff_misaligned)
                                        ? 7U : ((IData)(vlSelf->top__DOT__ID__DOT__addrFault)
                                                 ? 7U
                                                 : 
                                                ((0x33U 
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
                                                              : (IData)(vlSelf->top__DOT__ID__DOT___T_762)))))))))))))))))),4);
    bufp->fullIData(oldp+16,(((IData)(vlSelf->top__DOT__ID__DOT__addrFault)
                               ? ((0U == (IData)(vlSelf->top__DOT__ID__DOT__branchOp))
                                   ? 0U : (IData)(vlSelf->top__DOT__ID__DOT___T_791))
                               : 0U)),32);
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__EX_MEM_io_stallPrev));
    bufp->fullBit(oldp+18,(vlSelf->top__DOT__MEM_io_stallReq));
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__MEM_io_except_excValue),32);
    bufp->fullBit(oldp+20,(vlSelf->top__DOT__csr__DOT__hasInt));
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__MEM_io_mem_o_reg_data),32);
    bufp->fullIData(oldp+22,(((IData)(vlSelf->top__DOT__csr__DOT___T_605)
                               ? ((vlSelf->top__DOT__csr__DOT__stvec_base 
                                   + (((IData)(vlSelf->top__DOT__csr__DOT__stvec_mode) 
                                       & (IData)(vlSelf->top__DOT__csr__DOT__hasInt))
                                       ? vlSelf->top__DOT__csr__DOT__cause
                                       : 0U)) << 2U)
                               : ((vlSelf->top__DOT__csr__DOT__mtvec_base 
                                   + (((IData)(vlSelf->top__DOT__csr__DOT__mtvec_mode) 
                                       & (IData)(vlSelf->top__DOT__csr__DOT__hasInt))
                                       ? vlSelf->top__DOT__csr__DOT__cause
                                       : 0U)) << 2U))),32);
    bufp->fullIData(oldp+23,((vlSelf->top__DOT__ID_io_read1_data 
                              + vlSelf->top__DOT__ID__DOT___GEN_2)),32);
    bufp->fullQData(oldp+24,(((QData)((IData)((vlSelf->top__DOT__ID_io_read1_data 
                                               + vlSelf->top__DOT__ID__DOT___GEN_2))) 
                              << 1U)),33);
    bufp->fullQData(oldp+26,(((IData)(vlSelf->top__DOT__ID__DOT__regEn1)
                               ? ((QData)((IData)((vlSelf->top__DOT__ID_io_read1_data 
                                                   + vlSelf->top__DOT__ID__DOT___GEN_2))) 
                                  << 1U) : (QData)((IData)(
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
                                                                         << 1U)))))))))),33);
    bufp->fullQData(oldp+28,(vlSelf->top__DOT__ID__DOT__takepc),33);
    bufp->fullBit(oldp+30,(vlSelf->top__DOT__ID__DOT__branchteke));
    bufp->fullQData(oldp+31,(((IData)(vlSelf->top__DOT__ID__DOT__branchmiss)
                               ? vlSelf->top__DOT__ID__DOT__takepc
                               : (QData)((IData)(((IData)(4U) 
                                                  + vlSelf->top__DOT__IF_ID__DOT__ff_pc))))),33);
    bufp->fullBit(oldp+33,(vlSelf->top__DOT__ID__DOT__addrFault));
    bufp->fullQData(oldp+34,(((IData)(vlSelf->top__DOT__ID__DOT__addrFault)
                               ? vlSelf->top__DOT__ID__DOT__takepc
                               : 0ULL)),33);
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__MEM__DOT__memExcept));
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__csr__DOT__mip_ssip));
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__csr__DOT__mip_stip));
    bufp->fullBit(oldp+39,(vlSelf->top__DOT__csr__DOT__mip_seip));
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__csr__DOT__csrData),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__csr__DOT__writeData),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__csr__DOT__flagIntS),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__csr__DOT__flagIntM),32);
    bufp->fullBit(oldp+44,((((1U > (IData)(vlSelf->top__DOT__csr__DOT__mode)) 
                             | ((1U == (IData)(vlSelf->top__DOT__csr__DOT__mode)) 
                                & (IData)(vlSelf->top__DOT__csr__DOT__mstatus_sie))) 
                            & (0U != (vlSelf->top__DOT__csr__DOT__flagIntS 
                                      & vlSelf->top__DOT__csr__DOT__mideleg_data)))));
    bufp->fullBit(oldp+45,(vlSelf->top__DOT__csr__DOT__hasIntM));
    bufp->fullBit(oldp+46,(vlSelf->top__DOT__csr__DOT__handIntS));
    bufp->fullBit(oldp+47,(((~ (IData)(vlSelf->top__DOT__csr__DOT__hasInt)) 
                            & (IData)(vlSelf->top__DOT__MEM__DOT__hasTrap))));
    bufp->fullBit(oldp+48,((((~ (IData)(vlSelf->top__DOT__csr__DOT__hasInt)) 
                             & (IData)(vlSelf->top__DOT__MEM__DOT__hasTrap)) 
                            & (vlSelf->top__DOT__csr__DOT__medeleg_data 
                               >> ((5U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                    ? 2U : ((7U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                             ? 0U : 
                                            ((1U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                              ? 0xbU
                                              : ((2U 
                                                  == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                                  ? 3U
                                                  : 
                                                 ((8U 
                                                   == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__MEM__DOT__memAddr)
                                                    ? 4U
                                                    : 0xdU)
                                                   : 0U)))))))));
    bufp->fullBit(oldp+49,(vlSelf->top__DOT__csr__DOT__handExcS));
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__csr__DOT__intCauseS),31);
    bufp->fullIData(oldp+51,(((0x800U & vlSelf->top__DOT__csr__DOT__flagIntM)
                               ? 0xbU : ((8U & vlSelf->top__DOT__csr__DOT__flagIntM)
                                          ? 3U : ((0x80U 
                                                   & vlSelf->top__DOT__csr__DOT__flagIntM)
                                                   ? 7U
                                                   : vlSelf->top__DOT__csr__DOT__intCauseS)))),31);
    bufp->fullIData(oldp+52,(((IData)(vlSelf->top__DOT__csr__DOT__handIntS)
                               ? vlSelf->top__DOT__csr__DOT__intCauseS
                               : ((0x800U & vlSelf->top__DOT__csr__DOT__flagIntM)
                                   ? 0xbU : ((8U & vlSelf->top__DOT__csr__DOT__flagIntM)
                                              ? 3U : 
                                             ((0x80U 
                                               & vlSelf->top__DOT__csr__DOT__flagIntM)
                                               ? 7U
                                               : vlSelf->top__DOT__csr__DOT__intCauseS))))),31);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__csr__DOT__cause),32);
    bufp->fullIData(oldp+54,(((vlSelf->top__DOT__csr__DOT__stvec_base 
                               + (((IData)(vlSelf->top__DOT__csr__DOT__stvec_mode) 
                                   & (IData)(vlSelf->top__DOT__csr__DOT__hasInt))
                                   ? vlSelf->top__DOT__csr__DOT__cause
                                   : 0U)) << 2U)),32);
    bufp->fullIData(oldp+55,(((vlSelf->top__DOT__csr__DOT__mtvec_base 
                               + (((IData)(vlSelf->top__DOT__csr__DOT__mtvec_mode) 
                                   & (IData)(vlSelf->top__DOT__csr__DOT__hasInt))
                                   ? vlSelf->top__DOT__csr__DOT__cause
                                   : 0U)) << 2U)),32);
    bufp->fullBit(oldp+56,((0U != (3U & vlSelf->top__DOT__fetch__DOT__pc))));
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__IF_ID__DOT__ff_pc),32);
    bufp->fullBit(oldp+58,(vlSelf->top__DOT__IF_ID__DOT__ff_valid));
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__IF_ID__DOT__ff_inst),32);
    bufp->fullBit(oldp+60,(vlSelf->top__DOT__IF_ID__DOT__ff_bpu_take));
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__IF_ID__DOT__ff_bpu_takepc),32);
    bufp->fullBit(oldp+62,(vlSelf->top__DOT__IF_ID__DOT__ff_misaligned));
    bufp->fullBit(oldp+63,(vlSelf->top__DOT__ID__DOT__regEn1));
    bufp->fullCData(oldp+64,(vlSelf->top__DOT__ID__DOT__rs1),5);
    bufp->fullBit(oldp+65,(vlSelf->top__DOT__ID_io_read2_en));
    bufp->fullCData(oldp+66,(vlSelf->top__DOT__ID__DOT__rs2),5);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__ID__DOT___T_839),32);
    bufp->fullCData(oldp+68,(vlSelf->top__DOT__ID__DOT__csrActOp),3);
    bufp->fullBit(oldp+69,((((1U == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
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
                                     : 0U) : 0U) <= (IData)(vlSelf->top__DOT__csr__DOT__mode)))));
    bufp->fullCData(oldp+70,(((0x33U == (0xfe00707fU 
                                         & vlSelf->top__DOT__ID__DOT__inst))
                               ? 0U : ((0x13U == (0x707fU 
                                                  & vlSelf->top__DOT__ID__DOT__inst))
                                        ? 0U : ((0x40000033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__ID__DOT__inst))
                                                 ? 1U
                                                 : 
                                                ((0x37U 
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
                                                           : (IData)(vlSelf->top__DOT__ID__DOT___T_472))))))))))))))),4);
    bufp->fullCData(oldp+71,(((0x33U == (0xfe00707fU 
                                         & vlSelf->top__DOT__ID__DOT__inst))
                               ? 0U : ((0x13U == (0x707fU 
                                                  & vlSelf->top__DOT__ID__DOT__inst))
                                        ? 0U : ((0x40000033U 
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
                                                           : (IData)(vlSelf->top__DOT__ID__DOT___T_588))))))))))))))),4);
    bufp->fullBit(oldp+72,(((0x33U == (0xfe00707fU 
                                       & vlSelf->top__DOT__ID__DOT__inst)) 
                            | ((0x13U == (0x707fU & vlSelf->top__DOT__ID__DOT__inst)) 
                               | ((0x40000033U == (0xfe00707fU 
                                                   & vlSelf->top__DOT__ID__DOT__inst)) 
                                  | ((0x37U == (0x7fU 
                                                & vlSelf->top__DOT__ID__DOT__inst)) 
                                     | ((0x17U == (0x7fU 
                                                   & vlSelf->top__DOT__ID__DOT__inst)) 
                                        | ((0x4033U 
                                            == (0xfe00707fU 
                                                & vlSelf->top__DOT__ID__DOT__inst)) 
                                           | ((0x4013U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__ID__DOT__inst)) 
                                              | ((0x6033U 
                                                  == 
                                                  (0xfe00707fU 
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
                                                                               | (IData)(vlSelf->top__DOT__ID__DOT___T_293)))))))))))))))))))));
    bufp->fullCData(oldp+73,(vlSelf->top__DOT__ID__DOT__rd),5);
    bufp->fullSData(oldp+74,(vlSelf->top__DOT__ID__DOT__immI),12);
    bufp->fullBit(oldp+75,((0U != (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))));
    bufp->fullCData(oldp+76,(vlSelf->top__DOT__ID_EX__DOT__ff_aluOp),4);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__ID_EX__DOT__ff_opr1),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__ID_EX__DOT__ff_opr2),32);
    bufp->fullCData(oldp+79,(vlSelf->top__DOT__ID_EX__DOT__ff_lsuOp),4);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__ID_EX__DOT__ff_lsuData),32);
    bufp->fullBit(oldp+81,(vlSelf->top__DOT__ID_EX__DOT__ff_regWen));
    bufp->fullCData(oldp+82,(vlSelf->top__DOT__ID_EX__DOT__ff_regWaddr),5);
    bufp->fullCData(oldp+83,(vlSelf->top__DOT__ID_EX__DOT__ff_csrOp),3);
    bufp->fullSData(oldp+84,(vlSelf->top__DOT__ID_EX__DOT__ff_csrAddr),12);
    bufp->fullBit(oldp+85,(vlSelf->top__DOT__ID_EX__DOT__ff_csren));
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__ID_EX__DOT__ff_csrrData),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__ID_EX__DOT__ff_csrwData),32);
    bufp->fullCData(oldp+88,(vlSelf->top__DOT__ID_EX__DOT__ff_excType),4);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__ID_EX__DOT__ff_excValue),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__ID_EX__DOT__ff_inst),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__ID_EX__DOT__ff_currentPc),32);
    bufp->fullIData(oldp+92,((IData)(vlSelf->top__DOT__EX__DOT__result)),32);
    bufp->fullBit(oldp+93,(vlSelf->top__DOT__EX_io_ex_o_load));
    bufp->fullBit(oldp+94,((0x13U != vlSelf->top__DOT__ID_EX__DOT__ff_inst)));
    bufp->fullCData(oldp+95,(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuOp),4);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuData),32);
    bufp->fullBit(oldp+97,(vlSelf->top__DOT__EX_MEM__DOT__ff_reg_en));
    bufp->fullCData(oldp+98,(vlSelf->top__DOT__EX_MEM__DOT__ff_reg_addr),5);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data),32);
    bufp->fullBit(oldp+100,(vlSelf->top__DOT__EX_MEM__DOT__ff_load));
    bufp->fullCData(oldp+101,(vlSelf->top__DOT__EX_MEM__DOT__ff_csr_op),3);
    bufp->fullSData(oldp+102,(vlSelf->top__DOT__EX_MEM__DOT__ff_csr_addr),12);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__EX_MEM__DOT__ff_csr_data),32);
    bufp->fullBit(oldp+104,(vlSelf->top__DOT__EX_MEM__DOT__ff_csr_retired));
    bufp->fullCData(oldp+105,(vlSelf->top__DOT__EX_MEM__DOT__ff_excType),4);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__EX_MEM__DOT__ff_excValue),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__EX_MEM__DOT__ff_inst),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__EX_MEM__DOT__ff_currentPc),32);
    bufp->fullIData(oldp+109,(((5U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                ? 2U : ((7U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                         ? 0U : ((1U 
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
                                                    : 0U)))))),31);
    bufp->fullBit(oldp+110,(vlSelf->top__DOT__resoler__DOT___T_35));
    bufp->fullBit(oldp+111,(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_en));
    bufp->fullCData(oldp+112,(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_addr),5);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__MEM_WB__DOT__ff_reg_data),32);
    bufp->fullCData(oldp+114,(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_op),3);
    bufp->fullSData(oldp+115,(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_addr),12);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_data),32);
    bufp->fullBit(oldp+117,(vlSelf->top__DOT__MEM_WB__DOT__ff_csr_retired));
    bufp->fullIData(oldp+118,(((IData)(vlSelf->top__DOT__ID__DOT__regEn1)
                                ? ((0x1fU == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                    ? vlSelf->top__DOT__regfile__DOT__regfile_31
                                    : ((0x1eU == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                        ? vlSelf->top__DOT__regfile__DOT__regfile_30
                                        : ((0x1dU == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                            ? vlSelf->top__DOT__regfile__DOT__regfile_29
                                            : ((0x1cU 
                                                == (IData)(vlSelf->top__DOT__ID__DOT__rs1))
                                                ? vlSelf->top__DOT__regfile__DOT__regfile_28
                                                : (
                                                   (0x1bU 
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
                                : 0U)),32);
    bufp->fullIData(oldp+119,(((IData)(vlSelf->top__DOT__ID_io_read2_en)
                                ? ((0x1fU == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                    ? vlSelf->top__DOT__regfile__DOT__regfile_31
                                    : ((0x1eU == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                        ? vlSelf->top__DOT__regfile__DOT__regfile_30
                                        : ((0x1dU == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                            ? vlSelf->top__DOT__regfile__DOT__regfile_29
                                            : ((0x1cU 
                                                == (IData)(vlSelf->top__DOT__ID__DOT__rs2))
                                                ? vlSelf->top__DOT__regfile__DOT__regfile_28
                                                : (
                                                   (0x1bU 
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
                                : 0U)),32);
    bufp->fullBit(oldp+120,(vlSelf->top__DOT__resoler_io_loadflag));
    bufp->fullBit(oldp+121,(vlSelf->top__DOT__resoler_io_csrflag));
    bufp->fullQData(oldp+122,((0x7fffffffffffffffULL 
                               & ((0U == (IData)(vlSelf->top__DOT__ID_EX__DOT__ff_aluOp))
                                   ? (QData)((IData)(
                                                     (vlSelf->top__DOT__ID_EX__DOT__ff_opr1 
                                                      + vlSelf->top__DOT__ID_EX__DOT__ff_opr2)))
                                   : ((1U == (IData)(vlSelf->top__DOT__ID_EX__DOT__ff_aluOp))
                                       ? (QData)((IData)(
                                                         (vlSelf->top__DOT__ID_EX__DOT__ff_opr1 
                                                          - vlSelf->top__DOT__ID_EX__DOT__ff_opr2)))
                                       : ((4U == (IData)(vlSelf->top__DOT__ID_EX__DOT__ff_aluOp))
                                           ? (QData)((IData)(
                                                             (vlSelf->top__DOT__ID_EX__DOT__ff_opr1 
                                                              & vlSelf->top__DOT__ID_EX__DOT__ff_opr2)))
                                           : ((3U == (IData)(vlSelf->top__DOT__ID_EX__DOT__ff_aluOp))
                                               ? (QData)((IData)(
                                                                 (vlSelf->top__DOT__ID_EX__DOT__ff_opr1 
                                                                  | vlSelf->top__DOT__ID_EX__DOT__ff_opr2)))
                                               : ((2U 
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
                                                                             > vlSelf->top__DOT__ID_EX__DOT__ff_opr2))))))))))))))),63);
    bufp->fullQData(oldp+124,(vlSelf->top__DOT__EX__DOT__result),63);
    bufp->fullBit(oldp+126,(vlSelf->top__DOT__ID__DOT__stall));
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__ID__DOT__lastinst),32);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__ID__DOT__inst),32);
    bufp->fullCData(oldp+129,(vlSelf->top__DOT__ID__DOT__aluSrc1),4);
    bufp->fullCData(oldp+130,(vlSelf->top__DOT__ID__DOT__aluSrc2),4);
    bufp->fullCData(oldp+131,(vlSelf->top__DOT__ID__DOT__branchOp),3);
    bufp->fullCData(oldp+132,(vlSelf->top__DOT__ID__DOT__csrOp),3);
    bufp->fullCData(oldp+133,(((0x33U == (0xfe00707fU 
                                          & vlSelf->top__DOT__ID__DOT__inst))
                                ? 0U : ((0x13U == (0x707fU 
                                                   & vlSelf->top__DOT__ID__DOT__inst))
                                         ? 0U : ((0x40000033U 
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
                                                            : (IData)(vlSelf->top__DOT__ID__DOT___T_762))))))))))))))),4);
    bufp->fullBit(oldp+134,((1U == (IData)(vlSelf->top__DOT__ID__DOT__branchOp))));
    bufp->fullIData(oldp+135,((vlSelf->top__DOT__IF_ID__DOT__ff_pc 
                               + (((- (IData)((IData)(vlSelf->top__DOT__ID__DOT____VdfgTmp_h8afae4a5__0))) 
                                   << 0x15U) | (((IData)(vlSelf->top__DOT__ID__DOT____VdfgTmp_h8afae4a5__0) 
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
                                                         << 1U))))))),32);
    bufp->fullIData(oldp+136,((vlSelf->top__DOT__IF_ID__DOT__ff_pc 
                               + (((- (IData)((IData)(vlSelf->top__DOT__ID__DOT____VdfgTmp_h8afae4a5__0))) 
                                   << 0xdU) | (((IData)(vlSelf->top__DOT__ID__DOT____VdfgTmp_h8afae4a5__0) 
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
                                                        << 1U))))))),32);
    bufp->fullBit(oldp+137,(vlSelf->top__DOT__MEM__DOT__wen));
    bufp->fullCData(oldp+138,(vlSelf->top__DOT__MEM__DOT__width),2);
    bufp->fullBit(oldp+139,(vlSelf->top__DOT__MEM__DOT__signed_));
    bufp->fullCData(oldp+140,((3U & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data)),2);
    bufp->fullCData(oldp+141,(vlSelf->top__DOT__MEM__DOT__writeEn),7);
    bufp->fullCData(oldp+142,(((IData)(vlSelf->top__DOT__MEM__DOT__wen)
                                ? (IData)(vlSelf->top__DOT__MEM__DOT__writeEn)
                                : 0xfU)),7);
    bufp->fullQData(oldp+143,(((0U == (IData)(vlSelf->top__DOT__MEM__DOT__width))
                                ? ((0U == (3U & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                    ? (QData)((IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuData))
                                    : ((1U == (3U & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                        ? ((QData)((IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuData)) 
                                           << 8U) : 
                                       ((2U == (3U 
                                                & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                         ? ((QData)((IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuData)) 
                                            << 0x10U)
                                         : ((3U == 
                                             (3U & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                             ? ((QData)((IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuData)) 
                                                << 0x18U)
                                             : 0ULL))))
                                : ((1U == (IData)(vlSelf->top__DOT__MEM__DOT__width))
                                    ? ((0U == (3U & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                        ? (QData)((IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuData))
                                        : ((2U == (3U 
                                                   & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                            ? ((QData)((IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_lsuData)) 
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
                                                        : 0U)))))),56);
    bufp->fullBit(oldp+145,(vlSelf->top__DOT__MEM__DOT__memAddr));
    bufp->fullBit(oldp+146,((7U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))));
    bufp->fullBit(oldp+147,((5U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))));
    bufp->fullBit(oldp+148,((8U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))));
    bufp->fullBit(oldp+149,(((1U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType)) 
                             | (2U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType)))));
    bufp->fullIData(oldp+150,(((1U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                ? 0xbU : ((2U == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                           ? 3U : (
                                                   (8U 
                                                    == (IData)(vlSelf->top__DOT__EX_MEM__DOT__ff_excType))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__MEM__DOT__memAddr)
                                                     ? 4U
                                                     : 0xdU)
                                                    : 0U)))),31);
    bufp->fullCData(oldp+151,(vlSelf->top__DOT__csr__DOT__mode),2);
    bufp->fullBit(oldp+152,(vlSelf->top__DOT__csr__DOT__mstatus_sum));
    bufp->fullCData(oldp+153,(vlSelf->top__DOT__csr__DOT__mstatus_mpp),2);
    bufp->fullBit(oldp+154,(vlSelf->top__DOT__csr__DOT__mstatus_spp));
    bufp->fullBit(oldp+155,(vlSelf->top__DOT__csr__DOT__mstatus_mpie));
    bufp->fullBit(oldp+156,(vlSelf->top__DOT__csr__DOT__mstatus_spie));
    bufp->fullBit(oldp+157,(vlSelf->top__DOT__csr__DOT__mstatus_mie));
    bufp->fullBit(oldp+158,(vlSelf->top__DOT__csr__DOT__mstatus_sie));
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__csr__DOT__medeleg_data),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT__csr__DOT__mideleg_data),32);
    bufp->fullBit(oldp+161,(vlSelf->top__DOT__csr__DOT__mie_meie));
    bufp->fullBit(oldp+162,(vlSelf->top__DOT__csr__DOT__mie_seie));
    bufp->fullBit(oldp+163,(vlSelf->top__DOT__csr__DOT__mie_mtie));
    bufp->fullBit(oldp+164,(vlSelf->top__DOT__csr__DOT__mie_stie));
    bufp->fullBit(oldp+165,(vlSelf->top__DOT__csr__DOT__mie_msie));
    bufp->fullBit(oldp+166,(vlSelf->top__DOT__csr__DOT__mie_ssie));
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__csr__DOT__mtvec_base),30);
    bufp->fullCData(oldp+168,(vlSelf->top__DOT__csr__DOT__mtvec_mode),2);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__csr__DOT__mscratch_data),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__csr__DOT__mepc_data),32);
    bufp->fullBit(oldp+171,(vlSelf->top__DOT__csr__DOT__mcause_int));
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__csr__DOT__mcause_code),31);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__csr__DOT__mtval_data),32);
    bufp->fullBit(oldp+174,(vlSelf->top__DOT__csr__DOT__mipReal_seip));
    bufp->fullBit(oldp+175,(vlSelf->top__DOT__csr__DOT__mipReal_stip));
    bufp->fullBit(oldp+176,(vlSelf->top__DOT__csr__DOT__mipReal_ssip));
    bufp->fullQData(oldp+177,(vlSelf->top__DOT__csr__DOT__mcycle_data),64);
    bufp->fullQData(oldp+179,(vlSelf->top__DOT__csr__DOT__minstret_data),64);
    bufp->fullIData(oldp+181,(vlSelf->top__DOT__csr__DOT__stvec_base),30);
    bufp->fullCData(oldp+182,(vlSelf->top__DOT__csr__DOT__stvec_mode),2);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT__csr__DOT__sscratch_data),32);
    bufp->fullIData(oldp+184,(vlSelf->top__DOT__csr__DOT__sepc_data),32);
    bufp->fullBit(oldp+185,(vlSelf->top__DOT__csr__DOT__scause_int));
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__csr__DOT__scause_code),31);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT__csr__DOT__stval_data),32);
    bufp->fullBit(oldp+188,(vlSelf->top__DOT__csr__DOT__satp_mode));
    bufp->fullIData(oldp+189,(vlSelf->top__DOT__csr__DOT__satp_ppn),22);
    bufp->fullBit(oldp+190,(vlSelf->top__DOT__csr__DOT__readable));
    bufp->fullBit(oldp+191,(vlSelf->top__DOT__csr__DOT__writable));
    bufp->fullBit(oldp+192,(((1U == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                              ? (IData)(vlSelf->top__DOT__csr__DOT__readable)
                              : ((2U == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                  ? (IData)(vlSelf->top__DOT__csr__DOT__writable)
                                  : ((3U == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                      ? (IData)(vlSelf->top__DOT__csr__DOT___T_319)
                                      : ((4U == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                                          ? (IData)(vlSelf->top__DOT__csr__DOT___T_319)
                                          : ((5U == (IData)(vlSelf->top__DOT__ID__DOT__csrActOp)) 
                                             & (IData)(vlSelf->top__DOT__csr__DOT___T_319))))))));
    bufp->fullBit(oldp+193,((((0U != (IData)(vlSelf->top__DOT__ID__DOT__csrActOp))
                               ? ((IData)(vlSelf->top__DOT__IF_ID__DOT__ff_valid)
                                   ? (3U & (vlSelf->top__DOT__ID__DOT___T_1 
                                            >> 0x1cU))
                                   : 0U) : 0U) <= (IData)(vlSelf->top__DOT__csr__DOT__mode))));
    bufp->fullIData(oldp+194,(vlSelf->top__DOT__fetch__DOT__pc),32);
    bufp->fullIData(oldp+195,(vlSelf->top__DOT__regfile__DOT__regfile_0),32);
    bufp->fullIData(oldp+196,(vlSelf->top__DOT__regfile__DOT__regfile_1),32);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__regfile__DOT__regfile_2),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__regfile__DOT__regfile_3),32);
    bufp->fullIData(oldp+199,(vlSelf->top__DOT__regfile__DOT__regfile_4),32);
    bufp->fullIData(oldp+200,(vlSelf->top__DOT__regfile__DOT__regfile_5),32);
    bufp->fullIData(oldp+201,(vlSelf->top__DOT__regfile__DOT__regfile_6),32);
    bufp->fullIData(oldp+202,(vlSelf->top__DOT__regfile__DOT__regfile_7),32);
    bufp->fullIData(oldp+203,(vlSelf->top__DOT__regfile__DOT__regfile_8),32);
    bufp->fullIData(oldp+204,(vlSelf->top__DOT__regfile__DOT__regfile_9),32);
    bufp->fullIData(oldp+205,(vlSelf->top__DOT__regfile__DOT__regfile_10),32);
    bufp->fullIData(oldp+206,(vlSelf->top__DOT__regfile__DOT__regfile_11),32);
    bufp->fullIData(oldp+207,(vlSelf->top__DOT__regfile__DOT__regfile_12),32);
    bufp->fullIData(oldp+208,(vlSelf->top__DOT__regfile__DOT__regfile_13),32);
    bufp->fullIData(oldp+209,(vlSelf->top__DOT__regfile__DOT__regfile_14),32);
    bufp->fullIData(oldp+210,(vlSelf->top__DOT__regfile__DOT__regfile_15),32);
    bufp->fullIData(oldp+211,(vlSelf->top__DOT__regfile__DOT__regfile_16),32);
    bufp->fullIData(oldp+212,(vlSelf->top__DOT__regfile__DOT__regfile_17),32);
    bufp->fullIData(oldp+213,(vlSelf->top__DOT__regfile__DOT__regfile_18),32);
    bufp->fullIData(oldp+214,(vlSelf->top__DOT__regfile__DOT__regfile_19),32);
    bufp->fullIData(oldp+215,(vlSelf->top__DOT__regfile__DOT__regfile_20),32);
    bufp->fullIData(oldp+216,(vlSelf->top__DOT__regfile__DOT__regfile_21),32);
    bufp->fullIData(oldp+217,(vlSelf->top__DOT__regfile__DOT__regfile_22),32);
    bufp->fullIData(oldp+218,(vlSelf->top__DOT__regfile__DOT__regfile_23),32);
    bufp->fullIData(oldp+219,(vlSelf->top__DOT__regfile__DOT__regfile_24),32);
    bufp->fullIData(oldp+220,(vlSelf->top__DOT__regfile__DOT__regfile_25),32);
    bufp->fullIData(oldp+221,(vlSelf->top__DOT__regfile__DOT__regfile_26),32);
    bufp->fullIData(oldp+222,(vlSelf->top__DOT__regfile__DOT__regfile_27),32);
    bufp->fullIData(oldp+223,(vlSelf->top__DOT__regfile__DOT__regfile_28),32);
    bufp->fullIData(oldp+224,(vlSelf->top__DOT__regfile__DOT__regfile_29),32);
    bufp->fullIData(oldp+225,(vlSelf->top__DOT__regfile__DOT__regfile_30),32);
    bufp->fullIData(oldp+226,(vlSelf->top__DOT__regfile__DOT__regfile_31),32);
    bufp->fullBit(oldp+227,(((IData)(vlSelf->top__DOT__ID__DOT__regEn1) 
                             & ((IData)(vlSelf->top__DOT__EX_io_ex_o_load) 
                                & (IData)(vlSelf->top__DOT__resoler__DOT___T_2)))));
    bufp->fullBit(oldp+228,(((IData)(vlSelf->top__DOT__ID_io_read2_en) 
                             & ((IData)(vlSelf->top__DOT__EX_io_ex_o_load) 
                                & (IData)(vlSelf->top__DOT__resoler__DOT___T_10)))));
    bufp->fullBit(oldp+229,(vlSelf->clock));
    bufp->fullBit(oldp+230,(vlSelf->reset));
    bufp->fullBit(oldp+231,(vlSelf->io_rom_en));
    bufp->fullBit(oldp+232,(vlSelf->io_rom_valid));
    bufp->fullBit(oldp+233,(vlSelf->io_rom_fault));
    bufp->fullCData(oldp+234,(vlSelf->io_rom_wen),4);
    bufp->fullIData(oldp+235,(vlSelf->io_rom_addr),32);
    bufp->fullIData(oldp+236,(vlSelf->io_rom_rdata),32);
    bufp->fullIData(oldp+237,(vlSelf->io_rom_wdata),32);
    bufp->fullBit(oldp+238,(vlSelf->io_ram_en));
    bufp->fullBit(oldp+239,(vlSelf->io_ram_valid));
    bufp->fullBit(oldp+240,(vlSelf->io_ram_fault));
    bufp->fullCData(oldp+241,(vlSelf->io_ram_wen),4);
    bufp->fullIData(oldp+242,(vlSelf->io_ram_addr),32);
    bufp->fullIData(oldp+243,(vlSelf->io_ram_rdata),32);
    bufp->fullIData(oldp+244,(vlSelf->io_ram_wdata),32);
    bufp->fullBit(oldp+245,(vlSelf->io_timer));
    bufp->fullBit(oldp+246,(vlSelf->io_soft));
    bufp->fullBit(oldp+247,(vlSelf->io_extern));
    bufp->fullBit(oldp+248,((1U & (~ (IData)(vlSelf->io_rom_valid)))));
    bufp->fullBit(oldp+249,(vlSelf->top__DOT__fetch__DOT__bpu_io_prdt_taken_o));
    bufp->fullIData(oldp+250,(((0U == (IData)(vlSelf->top__DOT__MEM__DOT__width))
                                ? ((0U == (3U & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                    ? ((IData)(vlSelf->top__DOT__MEM__DOT__signed_)
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->io_ram_rdata 
                                                           >> 7U)))) 
                                            << 8U) 
                                           | (0xffU 
                                              & vlSelf->io_ram_rdata))
                                        : (0xffU & vlSelf->io_ram_rdata))
                                    : ((1U == (3U & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                        ? ((IData)(vlSelf->top__DOT__MEM__DOT__signed_)
                                            ? (((- (IData)(
                                                           (1U 
                                                            & (vlSelf->io_ram_rdata 
                                                               >> 0xfU)))) 
                                                << 8U) 
                                               | (0xffU 
                                                  & (vlSelf->io_ram_rdata 
                                                     >> 8U)))
                                            : (0xffU 
                                               & (vlSelf->io_ram_rdata 
                                                  >> 8U)))
                                        : ((2U == (3U 
                                                   & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                            ? ((IData)(vlSelf->top__DOT__MEM__DOT__signed_)
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->io_ram_rdata 
                                                                   >> 0x17U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & (vlSelf->io_ram_rdata 
                                                         >> 0x10U)))
                                                : (0xffU 
                                                   & (vlSelf->io_ram_rdata 
                                                      >> 0x10U)))
                                            : ((3U 
                                                == 
                                                (3U 
                                                 & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                                ? ((IData)(vlSelf->top__DOT__MEM__DOT__signed_)
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
                                : ((1U == (IData)(vlSelf->top__DOT__MEM__DOT__width))
                                    ? ((0U == (3U & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                        ? ((IData)(vlSelf->top__DOT__MEM__DOT__signed_)
                                            ? (((- (IData)(
                                                           (1U 
                                                            & (vlSelf->io_ram_rdata 
                                                               >> 0xfU)))) 
                                                << 0x10U) 
                                               | (0xffffU 
                                                  & vlSelf->io_ram_rdata))
                                            : (0xffffU 
                                               & vlSelf->io_ram_rdata))
                                        : ((2U == (3U 
                                                   & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                            ? ((IData)(vlSelf->top__DOT__MEM__DOT__signed_)
                                                ? (
                                                   ((- (IData)(
                                                               (vlSelf->io_ram_rdata 
                                                                >> 0x1fU))) 
                                                    << 0x10U) 
                                                   | (vlSelf->io_ram_rdata 
                                                      >> 0x10U))
                                                : (vlSelf->io_ram_rdata 
                                                   >> 0x10U))
                                            : 0U)) : 
                                   ((2U == (IData)(vlSelf->top__DOT__MEM__DOT__width))
                                     ? ((0U == (3U 
                                                & vlSelf->top__DOT__EX_MEM__DOT__ff_reg_data))
                                         ? vlSelf->io_ram_rdata
                                         : 0U) : 0U)))),32);
    bufp->fullCData(oldp+251,(((IData)(vlSelf->top__DOT__MEM_io_stallReq)
                                ? 0x1eU : ((IData)(vlSelf->top__DOT__resoler_io_csrflag)
                                            ? 0x1cU
                                            : ((IData)(vlSelf->top__DOT__resoler_io_loadflag)
                                                ? 0x18U
                                                : ((IData)(vlSelf->io_rom_valid)
                                                    ? 0U
                                                    : 0x10U))))),5);
    bufp->fullCData(oldp+252,((0x7fU & vlSelf->io_rom_rdata)),7);
    bufp->fullBit(oldp+253,((0x63U == (0x7fU & vlSelf->io_rom_rdata))));
    bufp->fullBit(oldp+254,((0x6fU == (0x7fU & vlSelf->io_rom_rdata))));
    bufp->fullIData(oldp+255,(vlSelf->top__DOT__fetch__DOT__bpu__DOT__inst_b_type_imm),32);
    bufp->fullIData(oldp+256,(((((vlSelf->io_rom_rdata 
                                  >> 0x1fU) ? 0xfffU
                                  : 0U) << 0x14U) | 
                               ((0xff000U & vlSelf->io_rom_rdata) 
                                | ((0x800U & (vlSelf->io_rom_rdata 
                                              >> 9U)) 
                                   | (0x7feU & (vlSelf->io_rom_rdata 
                                                >> 0x14U)))))),32);
    bufp->fullBit(oldp+257,(((IData)((0x80000063U == 
                                      (0x8000007fU 
                                       & vlSelf->io_rom_rdata))) 
                             | (0x6fU == (0x7fU & vlSelf->io_rom_rdata)))));
    bufp->fullIData(oldp+258,(((0x63U == (0x7fU & vlSelf->io_rom_rdata))
                                ? vlSelf->top__DOT__fetch__DOT__bpu__DOT__inst_b_type_imm
                                : ((0x6fU == (0x7fU 
                                              & vlSelf->io_rom_rdata))
                                    ? ((((vlSelf->io_rom_rdata 
                                          >> 0x1fU)
                                          ? 0xfffU : 0U) 
                                        << 0x14U) | 
                                       ((0xff000U & vlSelf->io_rom_rdata) 
                                        | ((0x800U 
                                            & (vlSelf->io_rom_rdata 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->io_rom_rdata 
                                                 >> 0x14U)))))
                                    : vlSelf->top__DOT__fetch__DOT__bpu__DOT__inst_b_type_imm))),32);
}
