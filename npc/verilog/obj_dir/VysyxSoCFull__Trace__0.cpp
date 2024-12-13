// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VysyxSoCFull__Syms.h"


void VysyxSoCFull___024root__trace_chg_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedFst::Buffer* bufp);
void VysyxSoCFull___024root__trace_chg_sub_1(VysyxSoCFull___024root* vlSelf, VerilatedFst::Buffer* bufp);
void VysyxSoCFull___024root__trace_chg_sub_2(VysyxSoCFull___024root* vlSelf, VerilatedFst::Buffer* bufp);
void VysyxSoCFull___024root__trace_chg_sub_3(VysyxSoCFull___024root* vlSelf, VerilatedFst::Buffer* bufp);
void VysyxSoCFull___024root__trace_chg_sub_4(VysyxSoCFull___024root* vlSelf, VerilatedFst::Buffer* bufp);
void VysyxSoCFull___024root__trace_chg_sub_5(VysyxSoCFull___024root* vlSelf, VerilatedFst::Buffer* bufp);

void VysyxSoCFull___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_chg_top_0\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VysyxSoCFull___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
    VysyxSoCFull___024root__trace_chg_sub_1((&vlSymsp->TOP), bufp);
    VysyxSoCFull___024root__trace_chg_sub_2((&vlSymsp->TOP), bufp);
    VysyxSoCFull___024root__trace_chg_sub_3((&vlSymsp->TOP), bufp);
    VysyxSoCFull___024root__trace_chg_sub_4((&vlSymsp->TOP), bufp);
    VysyxSoCFull___024root__trace_chg_sub_5((&vlSymsp->TOP), bufp);
}

void VysyxSoCFull___024root__trace_chg_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_h552a7665__0;
    VlWide<3>/*95:0*/ __Vtemp_h28d67335__0;
    VlWide<3>/*95:0*/ __Vtemp_h5c557fd7__0;
    VlWide<3>/*95:0*/ __Vtemp_h3a21bcba__0;
    VlWide<3>/*95:0*/ __Vtemp_h2b9c32ac__0;
    VlWide<3>/*95:0*/ __Vtemp_h83fb9b63__0;
    VlWide<3>/*95:0*/ __Vtemp_h7fecc316__0;
    VlWide<3>/*95:0*/ __Vtemp_h56f417cd__0;
    VlWide<3>/*95:0*/ __Vtemp_h2813c899__0;
    VlWide<3>/*95:0*/ __Vtemp_h233f0761__0;
    VlWide<3>/*95:0*/ __Vtemp_hbdc4ec62__0;
    VlWide<3>/*95:0*/ __Vtemp_hbd472a88__0;
    VlWide<3>/*95:0*/ __Vtemp_hb447c34e__0;
    VlWide<3>/*95:0*/ __Vtemp_he6809d2b__0;
    VlWide<3>/*95:0*/ __Vtemp_hff3f0fb4__0;
    VlWide<3>/*95:0*/ __Vtemp_hb4f8b17a__0;
    VlWide<3>/*95:0*/ __Vtemp_hcf9470b3__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
        bufp->chgBit(oldp+1,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
        bufp->chgBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
        bufp->chgBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
        bufp->chgBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
        bufp->chgBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
        bufp->chgBit(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
        bufp->chgBit(oldp+9,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 3U))));
        bufp->chgBit(oldp+10,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                     >> 2U))));
        bufp->chgBit(oldp+11,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                     >> 1U))));
        bufp->chgBit(oldp+12,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
        bufp->chgSData(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
        bufp->chgCData(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
        bufp->chgCData(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
        bufp->chgSData(oldp+16,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : 0xffffU) 
                                  & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                        ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                          ? 0U : 0xffffU)) 
                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                         ? 0U : 0xffffU))) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))),16);
        bufp->chgIData(oldp+17,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                  << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
        bufp->chgBit(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
        bufp->chgBit(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
        bufp->chgBit(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
        bufp->chgBit(oldp+21,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
        bufp->chgBit(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
        bufp->chgBit(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
        bufp->chgIData(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
        bufp->chgBit(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
        bufp->chgCData(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
        bufp->chgIData(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
        bufp->chgBit(oldp+28,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
        bufp->chgSData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
        bufp->chgCData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
        bufp->chgBit(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
        bufp->chgSData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
        bufp->chgCData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
        bufp->chgBit(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
        bufp->chgCData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
        bufp->chgSData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
        bufp->chgSData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
        bufp->chgSData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
        bufp->chgSData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
        bufp->chgCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
        bufp->chgCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
        bufp->chgCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
        bufp->chgIData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
        bufp->chgSData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
        bufp->chgSData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
        bufp->chgIData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
        bufp->chgBit(oldp+47,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                        >> 1U)))));
        bufp->chgBit(oldp+48,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
        bufp->chgBit(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
        bufp->chgBit(oldp+50,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                     >> 1U))));
        bufp->chgBit(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
        bufp->chgCData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
        bufp->chgCData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
        bufp->chgCData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
        bufp->chgCData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
        bufp->chgCData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
        bufp->chgCData(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
        bufp->chgBit(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
        bufp->chgBit(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
        bufp->chgBit(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
        bufp->chgCData(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
        bufp->chgBit(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
        bufp->chgBit(oldp+63,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                     >> 4U))));
        bufp->chgBit(oldp+64,((IData)((0x10U != (0x12U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+65,((IData)((0x11U == (0x11U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+66,((IData)((0x14U == (0x14U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgBit(oldp+67,((IData)((0x18U == (0x18U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
        bufp->chgCData(oldp+68,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                  << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                             << 6U) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                                << 5U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
        bufp->chgBit(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
        bufp->chgBit(oldp+70,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                     >> 1U))));
        bufp->chgBit(oldp+71,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
        bufp->chgBit(oldp+72,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                     >> 2U))));
        bufp->chgBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
        bufp->chgBit(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
        bufp->chgBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
        bufp->chgBit(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
        bufp->chgBit(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
        bufp->chgBit(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
        bufp->chgBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
        bufp->chgBit(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
        bufp->chgBit(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
        bufp->chgBit(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
        bufp->chgBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
        bufp->chgBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
        bufp->chgBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
        bufp->chgBit(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
        bufp->chgBit(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
        bufp->chgBit(oldp+88,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                      [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [1U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [2U] 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [3U] 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [4U] 
                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [5U] 
                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [6U] 
                                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [7U] 
                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [8U] 
                                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [9U] 
                                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0xaU] 
                                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0xbU] 
                                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xcU] 
                                                                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xdU] 
                                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU]))))))))))))))))));
        bufp->chgCData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
        bufp->chgSData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
        bufp->chgBit(oldp+91,((1U & (~ (IData)((0U 
                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
        bufp->chgCData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
        bufp->chgCData(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
        bufp->chgBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
        bufp->chgBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
        bufp->chgBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
        bufp->chgBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
        bufp->chgBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
        bufp->chgBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
        bufp->chgBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
        bufp->chgBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
        bufp->chgBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
        bufp->chgBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
        bufp->chgBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
        bufp->chgBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
        bufp->chgBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
        bufp->chgBit(oldp+107,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
        bufp->chgBit(oldp+108,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
        bufp->chgBit(oldp+109,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
        bufp->chgBit(oldp+110,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
        bufp->chgBit(oldp+111,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
        bufp->chgBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
        bufp->chgBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
        bufp->chgBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
        bufp->chgBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
        bufp->chgBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
        bufp->chgBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
        bufp->chgBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
        bufp->chgBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
        bufp->chgCData(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
        bufp->chgCData(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
        bufp->chgCData(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
        bufp->chgCData(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
        bufp->chgCData(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
        bufp->chgCData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
        bufp->chgCData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
        bufp->chgCData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
        bufp->chgCData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
        bufp->chgCData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
        bufp->chgCData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
        bufp->chgCData(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
        bufp->chgCData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
        bufp->chgCData(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
        bufp->chgCData(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
        bufp->chgCData(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
        bufp->chgCData(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
        bufp->chgCData(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0U]),3);
        bufp->chgCData(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [1U]),3);
        bufp->chgCData(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [2U]),3);
        bufp->chgCData(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [3U]),3);
        bufp->chgCData(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [4U]),3);
        bufp->chgCData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [5U]),3);
        bufp->chgCData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [6U]),3);
        bufp->chgCData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [7U]),3);
        bufp->chgCData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [8U]),3);
        bufp->chgCData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [9U]),3);
        bufp->chgCData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xaU]),3);
        bufp->chgCData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xbU]),3);
        bufp->chgCData(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xcU]),3);
        bufp->chgCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xdU]),3);
        bufp->chgCData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xeU]),3);
        bufp->chgCData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                 [0xfU]),3);
        bufp->chgBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
        bufp->chgBit(oldp+155,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
        bufp->chgBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
        bufp->chgIData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
        bufp->chgCData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
        bufp->chgIData(oldp+159,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                   [3U] << 0x18U) | 
                                  ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                    [2U] << 0x10U) 
                                   | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                       [1U] << 8U) 
                                      | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                      [0U])))),32);
        bufp->chgIData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),32);
        bufp->chgBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
        bufp->chgBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
        bufp->chgCData(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
        bufp->chgIData(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
        bufp->chgCData(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
        bufp->chgBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
        bufp->chgIData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
        bufp->chgCData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
        bufp->chgCData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
        bufp->chgBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
        bufp->chgBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
        bufp->chgCData(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
        bufp->chgIData(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
        bufp->chgCData(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
        bufp->chgCData(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
        bufp->chgCData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
        bufp->chgBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
        bufp->chgIData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
        bufp->chgIData(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
        bufp->chgIData(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
        bufp->chgCData(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
        bufp->chgCData(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
        bufp->chgIData(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
        bufp->chgBit(oldp+184,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
        bufp->chgBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter_io_selectedMaster_master_awvalid));
        bufp->chgIData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter_io_selectedMaster_master_awaddr),32);
        bufp->chgCData(oldp+187,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__grant)
                                   ? 2U : 0U)),3);
        bufp->chgCData(oldp+188,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__grant)
                                   ? 1U : 0U)),2);
        bufp->chgBit(oldp+189,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
        bufp->chgBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter_io_selectedMaster_master_wvalid));
        bufp->chgIData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter_io_selectedMaster_master_wdata),32);
        bufp->chgCData(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter_io_selectedMaster_master_wstrb),4);
        bufp->chgBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__grant));
        bufp->chgBit(oldp+194,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__grant) 
                                & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__state)))));
        bufp->chgBit(oldp+195,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
        bufp->chgBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter_io_selectedMaster_master_arvalid));
        bufp->chgIData(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter_io_selectedMaster_master_araddr),32);
        bufp->chgBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter_io_selectedMaster_master_rready));
        bufp->chgBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
        bufp->chgBit(oldp+200,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
        bufp->chgBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
        bufp->chgBit(oldp+202,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
        bufp->chgBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+204,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
        bufp->chgBit(oldp+205,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
        bufp->chgBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
        bufp->chgIData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
        bufp->chgCData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
        bufp->chgCData(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
        bufp->chgIData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
        bufp->chgBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
        bufp->chgIData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
        bufp->chgCData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
        bufp->chgCData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
        bufp->chgIData(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
        bufp->chgBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
        bufp->chgBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
        bufp->chgSData(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
        bufp->chgSData(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
        bufp->chgCData(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
        bufp->chgCData(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
        bufp->chgCData(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
        bufp->chgCData(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
        bufp->chgCData(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
        bufp->chgCData(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
        bufp->chgCData(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
        bufp->chgCData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
        bufp->chgCData(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
        bufp->chgCData(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
        bufp->chgCData(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
        bufp->chgCData(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
        bufp->chgCData(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
        bufp->chgCData(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
        bufp->chgCData(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
        bufp->chgCData(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
        bufp->chgIData(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
        bufp->chgCData(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
        bufp->chgCData(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
        bufp->chgQData(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
        bufp->chgBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
        bufp->chgBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
        bufp->chgIData(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
        bufp->chgCData(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
        bufp->chgCData(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
        bufp->chgQData(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
        bufp->chgBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
        bufp->chgBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
        bufp->chgBit(oldp+250,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                       ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                                  >> 0x24U))
                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__grant)))));
        bufp->chgQData(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
        bufp->chgBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
        bufp->chgBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
        bufp->chgIData(oldp+255,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
        bufp->chgBit(oldp+256,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                   >> 2U))));
        bufp->chgBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
        bufp->chgCData(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
        bufp->chgCData(oldp+259,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                   ? 0U : 3U)),2);
        bufp->chgBit(oldp+260,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
        bufp->chgIData(oldp+261,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
        bufp->chgBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
        bufp->chgCData(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
        bufp->chgIData(oldp+264,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                         ? (vlSelf->__VdfgTmp_hf132a334__0 
                                            >> 0x18U)
                                         : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                   << 0x18U) | ((0xff0000U 
                                                 & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      (vlSelf->__VdfgTmp_hf132a334__0 
                                                       >> 0x10U)
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                         ? 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                          ? 
                                                         (vlSelf->__VdfgTmp_hf132a334__0 
                                                          >> 8U)
                                                          : 0U)
                                                         : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                          ? 
                                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? vlSelf->__VdfgTmp_hf132a334__0
                                                           : 0U)
                                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
        bufp->chgCData(oldp+265,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                   ? 0U : 3U)),2);
        bufp->chgBit(oldp+266,((0x7800U == (0x7fffU 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
        bufp->chgBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
        bufp->chgBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
        bufp->chgCData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
        bufp->chgCData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
        bufp->chgCData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
        bufp->chgCData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
        bufp->chgSData(oldp+274,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                            >> 2U))),11);
        bufp->chgIData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
        bufp->chgSData(oldp+276,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                            >> 2U))),11);
        bufp->chgBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
        bufp->chgBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
        bufp->chgBit(oldp+279,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                                & (0U == ((0x10U & 
                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                            >> 0x1bU)) 
                                          | ((0xcU 
                                              & (8U 
                                                 ^ 
                                                 (0x3cU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                     >> 0x1aU)))) 
                                             | ((2U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                    >> 0x17U)) 
                                                | (1U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0xcU)))))))));
        bufp->chgBit(oldp+280,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                   >> 1U))));
        bufp->chgBit(oldp+281,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
        bufp->chgBit(oldp+282,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
        bufp->chgIData(oldp+283,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
        bufp->chgBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
        bufp->chgCData(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
        bufp->chgIData(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
        bufp->chgBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
        bufp->chgBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
        bufp->chgBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
        bufp->chgBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
        bufp->chgBit(oldp+291,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x1bU)) 
                                       | ((0xcU & (8U 
                                                   ^ 
                                                   (0x3cU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                       >> 0x1aU)))) 
                                          | ((2U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x17U)) 
                                             | (1U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
        bufp->chgBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
        bufp->chgBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
        bufp->chgBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
        bufp->chgBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
        bufp->chgBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
        bufp->chgBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
        bufp->chgBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
        bufp->chgBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
        bufp->chgBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
        bufp->chgBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
        bufp->chgBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
        bufp->chgBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
        bufp->chgBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
        bufp->chgBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
        bufp->chgBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
        bufp->chgBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
        bufp->chgBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
        bufp->chgBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
        bufp->chgBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
        bufp->chgBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
        bufp->chgBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
        bufp->chgBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
        bufp->chgBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
        bufp->chgBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
        bufp->chgBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
        bufp->chgBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
        bufp->chgBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
        bufp->chgBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
        bufp->chgBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
        bufp->chgBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
        bufp->chgBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
        bufp->chgBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
        bufp->chgBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
        bufp->chgBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
        bufp->chgBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
        bufp->chgBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
        bufp->chgBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
        bufp->chgBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
        bufp->chgCData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
        bufp->chgBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
        bufp->chgBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
        bufp->chgBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
        bufp->chgBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
        bufp->chgCData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
        bufp->chgBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
        bufp->chgBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
        bufp->chgBit(oldp+338,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
        bufp->chgCData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
        bufp->chgBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
        bufp->chgCData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
        bufp->chgBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
        bufp->chgBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
        bufp->chgBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
        bufp->chgBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
        bufp->chgBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
        bufp->chgBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
        bufp->chgCData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
        bufp->chgCData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
        bufp->chgCData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
        bufp->chgBit(oldp+351,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
        bufp->chgBit(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
        bufp->chgBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
        bufp->chgBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+355,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
        bufp->chgBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
        bufp->chgBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
        bufp->chgBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+359,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
        bufp->chgBit(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
        bufp->chgBit(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
        bufp->chgBit(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+363,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
        bufp->chgBit(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
        bufp->chgBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
        bufp->chgBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+367,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
        bufp->chgBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
        bufp->chgBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
        bufp->chgBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+371,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
        bufp->chgBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
        bufp->chgBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
        bufp->chgBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+375,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
        bufp->chgBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
        bufp->chgBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
        bufp->chgBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+379,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
        bufp->chgBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
        bufp->chgBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
        bufp->chgBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+383,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
        bufp->chgBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
        bufp->chgBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
        bufp->chgBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+387,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
        bufp->chgBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
        bufp->chgBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
        bufp->chgBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+391,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
        bufp->chgBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
        bufp->chgBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
        bufp->chgBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+395,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
        bufp->chgBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
        bufp->chgBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
        bufp->chgBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+399,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
        bufp->chgBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
        bufp->chgBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
        bufp->chgBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+403,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
        bufp->chgBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
        bufp->chgBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
        bufp->chgBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+407,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
        bufp->chgBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
        bufp->chgBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
        bufp->chgBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+411,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
        bufp->chgBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
        bufp->chgBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
        bufp->chgBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+415,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
        bufp->chgBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
        bufp->chgBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
        bufp->chgBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+419,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
        bufp->chgBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
        bufp->chgBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
        bufp->chgBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+423,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
        bufp->chgBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
        bufp->chgBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
        bufp->chgBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+427,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
        bufp->chgBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
        bufp->chgBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
        bufp->chgBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+431,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
        bufp->chgBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
        bufp->chgBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
        bufp->chgBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+435,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
        bufp->chgBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
        bufp->chgBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
        bufp->chgBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+439,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
        bufp->chgBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
        bufp->chgBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
        bufp->chgBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+443,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
        bufp->chgBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
        bufp->chgBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
        bufp->chgBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+447,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
        bufp->chgBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
        bufp->chgBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
        bufp->chgBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+451,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
        bufp->chgBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
        bufp->chgBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
        bufp->chgBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+455,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
        bufp->chgBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
        bufp->chgBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
        bufp->chgBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+459,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
        bufp->chgBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
        bufp->chgBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
        bufp->chgBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+463,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
        bufp->chgBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
        bufp->chgBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
        bufp->chgBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+467,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
        bufp->chgBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
        bufp->chgBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
        bufp->chgBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+471,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
        bufp->chgBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
        bufp->chgBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
        bufp->chgBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+475,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
        bufp->chgBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
        bufp->chgBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
        bufp->chgBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
        bufp->chgBit(oldp+479,((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__grant)) 
                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full))))));
        bufp->chgBit(oldp+480,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch__DOT__state))));
        bufp->chgIData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch__DOT__pc),32);
        bufp->chgBit(oldp+482,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch__DOT__state))));
        bufp->chgBit(oldp+483,((0U != (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch__DOT__pc))));
        bufp->chgIData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch__DOT__state),32);
        bufp->chgIData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_pc),32);
        bufp->chgBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_valid));
        bufp->chgIData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_inst),32);
        bufp->chgBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_bpu_take));
        bufp->chgIData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_bpu_takepc),32);
        bufp->chgBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_misaligned));
        bufp->chgBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__regEn1));
        bufp->chgCData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs1),5);
        bufp->chgBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_read2_en));
        bufp->chgCData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs2),5);
        bufp->chgIData(oldp+495,(((0xc00U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_840))
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mcycle_data)
                                   : ((0xc02U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_840))
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__minstret_data)
                                       : ((0xc80U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_840))
                                           ? (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mcycle_data 
                                                      >> 0x20U))
                                           : ((0xc82U 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_840))
                                               ? (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__minstret_data 
                                                          >> 0x20U))
                                               : ((0x100U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_840))
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT___T_74
                                                   : 
                                                  ((0x104U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_840))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT___T_82
                                                    : 
                                                   ((0x105U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_840))
                                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT___T_83
                                                     : 
                                                    ((0x106U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_840))
                                                      ? 0U
                                                      : 
                                                     ((0x140U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_840))
                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__sscratch_data
                                                       : 
                                                      ((0x141U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_840))
                                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__sepc_data
                                                        : 
                                                       ((0x142U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_840))
                                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT___T_84
                                                         : 
                                                        ((0x143U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_840))
                                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__stval_data
                                                          : 
                                                         ((0x144U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_840))
                                                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT___T_92
                                                           : 
                                                          ((0x180U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_840))
                                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT___T_94
                                                            : 
                                                           ((0xf11U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_840))
                                                             ? 0U
                                                             : 
                                                            ((0xf12U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_840))
                                                              ? 0U
                                                              : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT___T_235))))))))))))))))),32);
        bufp->chgIData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_840),32);
        bufp->chgCData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__csrActOp),3);
        bufp->chgBit(oldp+498,((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__csrActOp))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__readable)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__csrActOp))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__writable)
                                      : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__csrActOp))
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT___T_319)
                                          : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__csrActOp))
                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT___T_319)
                                              : ((5U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__csrActOp)) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT___T_319)))))) 
                                & (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__csrActOp))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_valid)
                                         ? (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_inst 
                                                  >> 0x1cU))
                                         : 0U) : 0U) 
                                   <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mode)))));
        bufp->chgCData(oldp+499,(((0x33U == (0xfe00707fU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                   ? 0U : ((0x13U == 
                                            (0x707fU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                            ? 0U : 
                                           ((0x40000033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                             ? 1U : 
                                            ((0x37U 
                                              == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                              ? 3U : 
                                             ((0x17U 
                                               == (0x7fU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                               ? 0U
                                               : ((0x4033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                   ? 2U
                                                   : 
                                                  ((0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                    ? 2U
                                                    : 
                                                   ((0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                     ? 3U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                      ? 3U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                       ? 4U
                                                       : 
                                                      ((0x7013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                        ? 4U
                                                        : 
                                                       ((0x2033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                         ? 5U
                                                         : 
                                                        ((0x2013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                          ? 5U
                                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_471))))))))))))))),4);
        bufp->chgCData(oldp+500,(((0x33U == (0xfe00707fU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                   ? 0U : ((0x13U == 
                                            (0x707fU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                            ? 0U : 
                                           ((0x40000033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                             ? 0U : 
                                            ((0x37U 
                                              == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                              ? 0U : 
                                             ((0x17U 
                                               == (0x7fU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                               ? 0U
                                               : ((0x4033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                   ? 0U
                                                   : 
                                                  ((0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                     ? 0U
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_708)))))))))),4);
        bufp->chgCData(oldp+501,(((0x33U == (0xfe00707fU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                   ? 0U : ((0x13U == 
                                            (0x707fU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                            ? 0U : 
                                           ((0x40000033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                             ? 0U : 
                                            ((0x37U 
                                              == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                              ? 0U : 
                                             ((0x17U 
                                               == (0x7fU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                               ? 0U
                                               : ((0x4033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                   ? 0U
                                                   : 
                                                  ((0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x7013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x2033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                         ? 0U
                                                         : 
                                                        ((0x2013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                          ? 0U
                                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_587))))))))))))))),4);
        bufp->chgBit(oldp+502,(((0x33U == (0xfe00707fU 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst)) 
                                | ((0x13U == (0x707fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst)) 
                                   | ((0x40000033U 
                                       == (0xfe00707fU 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst)) 
                                      | ((0x37U == 
                                          (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst)) 
                                         | ((0x17U 
                                             == (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst)) 
                                            | ((0x4033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst)) 
                                               | ((0x4013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst)) 
                                                  | ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst)) 
                                                     | ((0x6013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst)) 
                                                        | ((0x7033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst)) 
                                                           | ((0x7013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst)) 
                                                              | ((0x2033U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst)) 
                                                                 | ((0x2013U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst)) 
                                                                    | ((0x3033U 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst)) 
                                                                       | ((0x3013U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst)) 
                                                                          | ((0x1033U 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst)) 
                                                                             | ((0x1013U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst)) 
                                                                                | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst)) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_292)))))))))))))))))))));
        bufp->chgCData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rd),5);
        bufp->chgSData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__immI),12);
        bufp->chgBit(oldp+505,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__csrActOp))));
        bufp->chgIData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst),32);
        bufp->chgBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div_io_flush));
        bufp->chgCData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_aluOp),4);
        bufp->chgIData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr1),32);
        bufp->chgIData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr2),32);
        bufp->chgCData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_mduOp),4);
        bufp->chgCData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_lsuOp),4);
        bufp->chgIData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_lsuData),32);
        bufp->chgBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_regWen));
        bufp->chgCData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_regWaddr),5);
        bufp->chgCData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_csrOp),3);
        bufp->chgSData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_csrAddr),12);
        bufp->chgBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_csren));
        bufp->chgIData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_csrrData),32);
        bufp->chgIData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_csrwData),32);
        bufp->chgCData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_excType),4);
        bufp->chgIData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_excValue),32);
        bufp->chgIData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_inst),32);
        bufp->chgIData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_currentPc),32);
        bufp->chgBit(oldp+525,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu_io_valid)))));
        bufp->chgIData(oldp+526,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__result)),32);
        bufp->chgBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ex_o_load));
        bufp->chgBit(oldp+528,((0x13U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_inst)));
        bufp->chgCData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_lsuOp),4);
        bufp->chgIData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_lsuData),32);
        bufp->chgBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_reg_en));
        bufp->chgCData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_reg_addr),5);
        bufp->chgIData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_reg_data),32);
        bufp->chgCData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_csr_op),3);
        bufp->chgSData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_csr_addr),12);
        bufp->chgIData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_csr_data),32);
        bufp->chgBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_csr_retired));
        bufp->chgCData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_excType),4);
        bufp->chgIData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_excValue),32);
        bufp->chgIData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_inst),32);
        bufp->chgIData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_currentPc),32);
        bufp->chgIData(oldp+542,(((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_excType))
                                   ? 2U : ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_excType))
                                            ? 0U : 
                                           ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_excType))
                                             ? 0xbU
                                             : ((8U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_excType))
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__memAddr)
                                                  ? 4U
                                                  : 0xdU)
                                                 : 0U))))),31);
        bufp->chgIData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_io_except_excValue),32);
        bufp->chgBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__hasInt));
        bufp->chgBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__resoler__DOT___T_35));
        bufp->chgBit(oldp+546,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__grant))));
        bufp->chgBit(oldp+547,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__state))));
        bufp->chgBit(oldp+548,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__grant))));
        bufp->chgBit(oldp+549,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__state))));
        bufp->chgCData(oldp+550,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__width))
                                   ? 1U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__width))
                                            ? 3U : 
                                           ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__width))
                                             ? 0xfU
                                             : 0U)))),4);
        bufp->chgBit(oldp+551,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__state))));
        bufp->chgBit(oldp+552,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__grant))));
        bufp->chgBit(oldp+553,((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__state))));
        bufp->chgBit(oldp+554,((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__state))));
        bufp->chgBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_WB__DOT__ff_reg_en));
        bufp->chgCData(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_WB__DOT__ff_reg_addr),5);
        bufp->chgIData(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_WB__DOT__ff_reg_data),32);
        bufp->chgCData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_WB__DOT__ff_csr_op),3);
        bufp->chgSData(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_WB__DOT__ff_csr_addr),12);
        bufp->chgIData(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_WB__DOT__ff_csr_data),32);
        bufp->chgBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_WB__DOT__ff_csr_retired));
        bufp->chgIData(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_WB__DOT__ff_currentPc),32);
        bufp->chgIData(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_WB__DOT__ff_inst),32);
        bufp->chgIData(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_0),32);
        bufp->chgIData(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_1),32);
        bufp->chgIData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_2),32);
        bufp->chgIData(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_3),32);
        bufp->chgIData(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_4),32);
        bufp->chgIData(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_5),32);
        bufp->chgIData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_6),32);
        bufp->chgIData(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_7),32);
        bufp->chgIData(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_8),32);
        bufp->chgIData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_9),32);
        bufp->chgIData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_10),32);
        bufp->chgIData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_11),32);
        bufp->chgIData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_12),32);
        bufp->chgIData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_13),32);
        bufp->chgIData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_14),32);
        bufp->chgIData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_15),32);
        bufp->chgIData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_16),32);
        bufp->chgIData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_17),32);
        bufp->chgIData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_18),32);
        bufp->chgIData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_19),32);
        bufp->chgIData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_20),32);
        bufp->chgIData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_21),32);
        bufp->chgIData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_22),32);
        bufp->chgIData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_23),32);
        bufp->chgIData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_24),32);
        bufp->chgIData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_25),32);
        bufp->chgIData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_26),32);
        bufp->chgIData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_27),32);
        bufp->chgIData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_28),32);
        bufp->chgIData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_29),32);
        bufp->chgIData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_30),32);
        bufp->chgIData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_31),32);
        bufp->chgIData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_WB__DOT__ff_reg_addr),32);
        bufp->chgIData(oldp+597,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__regEn1)
                                   ? ((0x1fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs1))
                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_31
                                       : ((0x1eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs1))
                                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_30
                                           : ((0x1dU 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs1))
                                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_29
                                               : ((0x1cU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs1))
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_28
                                                   : 
                                                  ((0x1bU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs1))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_27
                                                    : 
                                                   ((0x1aU 
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
                                   : 0U)),32);
        bufp->chgIData(oldp+598,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_read2_en)
                                   ? ((0x1fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs2))
                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_31
                                       : ((0x1eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs2))
                                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_30
                                           : ((0x1dU 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs2))
                                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_29
                                               : ((0x1cU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs2))
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_28
                                                   : 
                                                  ((0x1bU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__rs2))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__regfile__DOT__regfile_27
                                                    : 
                                                   ((0x1aU 
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
                                   : 0U)),32);
        bufp->chgBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__resoler_io_loadflag));
        bufp->chgBit(oldp+600,((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__csrActOp)) 
                                 & (2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__csrActOp))) 
                                & (((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_csr_op)) 
                                      & (1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_csr_op))) 
                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_840) 
                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_csr_addr))) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__resoler__DOT___T_35) 
                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_840) 
                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM_WB__DOT__ff_csr_addr)))) 
                                   | (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_csrOp)) 
                                       & (1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_csrOp))) 
                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_840) 
                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_csrAddr)))))));
        bufp->chgIData(oldp+601,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT___T_605)
                                   ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__stvec_base 
                                       + (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__stvec_mode) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__hasInt))
                                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__cause
                                           : 0U)) << 2U)
                                   : ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mtvec_base 
                                       + (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mtvec_mode) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__hasInt))
                                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__cause
                                           : 0U)) << 2U))),32);
        bufp->chgBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu_io_valid));
        bufp->chgIData(oldp+603,((IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mulEn)
                                           ? (QData)((IData)(
                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__hiRem)
                                                               ? (IData)(
                                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mulOut 
                                                                          >> 0x20U))
                                                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mulOut))))
                                           : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div_io_en)
                                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__hiRem)
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
                                               : 0ULL)))),32);
        bufp->chgQData(oldp+604,((0x7fffffffffffffffULL 
                                  & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_aluOp))
                                      ? (QData)((IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr1 
                                                         + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr2)))
                                      : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_aluOp))
                                          ? (QData)((IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr1 
                                                             - vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr2)))
                                          : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_aluOp))
                                              ? (QData)((IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr1 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr2)))
                                              : ((3U 
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
                                                                             < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr2))))))))))))))),63);
        bufp->chgIData(oldp+606,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu_io_valid)
                                   ? (IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mulEn)
                                               ? (QData)((IData)(
                                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__hiRem)
                                                                   ? (IData)(
                                                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mulOut 
                                                                              >> 0x20U))
                                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mulOut))))
                                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div_io_en)
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
                                   : 0U)),32);
        bufp->chgQData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__result),63);
        bufp->chgIData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul_io_mul1),32);
        bufp->chgIData(oldp+610,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT___T_62)
                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div_io_divisor
                                   : 0U)),32);
        bufp->chgQData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul_io_result),64);
        bufp->chgBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div_io_en));
        bufp->chgBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__isDiv0));
        bufp->chgBit(oldp+615,((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__state))));
        bufp->chgIData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div_io_divident),32);
        bufp->chgIData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div_io_divisor),32);
        bufp->chgIData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[0U]),32);
        bufp->chgIData(oldp+619,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U] 
                                   << 0x1fU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[1U] 
                                                >> 1U))),32);
        bufp->chgBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mulEn));
        bufp->chgBit(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__hiRem));
        bufp->chgBit(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__lhsSigned));
        bufp->chgBit(oldp+623,(((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_mduOp)) 
                                & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_mduOp)) 
                                   | ((3U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_mduOp)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT___T_41))))));
        bufp->chgBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__isOpr1Neg));
        bufp->chgBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__isOpr2Neg));
        bufp->chgBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__isAnsNeg));
        bufp->chgQData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mulOut),64);
        bufp->chgIData(oldp+629,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__hiRem)
                                   ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mulOut 
                                              >> 0x20U))
                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mulOut))),32);
        bufp->chgBit(oldp+630,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__lhsSigned) 
                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr1 
                                    >> 0x1fU) ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U]))));
        bufp->chgIData(oldp+631,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__isAnsNeg)
                                   ? (- vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[0U])
                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[0U])),32);
        bufp->chgQData(oldp+632,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__isDiv0)
                                   ? 0xffffffffULL : (QData)((IData)(
                                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__isAnsNeg)
                                                                       ? 
                                                                      (- 
                                                                       vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[0U])
                                                                       : 
                                                                      vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[0U]))))),33);
        bufp->chgIData(oldp+634,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__lhsSigned) 
                                   & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr1 
                                       >> 0x1fU) ^ 
                                      vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U]))
                                   ? (- ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U] 
                                          << 0x1fU) 
                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[1U] 
                                            >> 1U)))
                                   : ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U] 
                                       << 0x1fU) | 
                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[1U] 
                                       >> 1U)))),32);
        bufp->chgIData(oldp+635,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__isDiv0)
                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr1
                                   : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__lhsSigned) 
                                       & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_EX__DOT__ff_opr1 
                                           >> 0x1fU) 
                                          ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U]))
                                       ? (- ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U] 
                                              << 0x1fU) 
                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[1U] 
                                                >> 1U)))
                                       : ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[2U] 
                                           << 0x1fU) 
                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[1U] 
                                             >> 1U))))),32);
        bufp->chgQData(oldp+636,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__hiRem)
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
                                   : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__isDiv0)
                                       ? 0xffffffffULL
                                       : (QData)((IData)(
                                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__isAnsNeg)
                                                           ? 
                                                          (- 
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[0U])
                                                           : 
                                                          vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result[0U])))))),33);
        bufp->chgCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__state),2);
        bufp->chgWData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__result),65);
        bufp->chgCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__counter),4);
        bufp->chgIData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__lastDivident),32);
        bufp->chgIData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__lastDivisor),32);
        bufp->chgWData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__divisor),65);
        bufp->chgQData(oldp+648,((((QData)((IData)(
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__divisor[2U])) 
                                   << 0x3fU) | (((QData)((IData)(
                                                                 vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__divisor[1U])) 
                                                 << 0x1fU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__divisor[0U])) 
                                                   >> 1U)))),64);
        bufp->chgWData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__maxDivisor),65);
        bufp->chgBit(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div__DOT__startFlag));
        bufp->chgQData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A),64);
        bufp->chgQData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B),64);
        bufp->chgQData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin),64);
        bufp->chgQData(oldp+660,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.io_Sum),64);
        bufp->chgQData(oldp+662,((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                  << 1U)),64);
        bufp->chgQData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A),64);
        bufp->chgQData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B),64);
        bufp->chgQData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin),64);
        bufp->chgQData(oldp+670,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.io_Sum),64);
        bufp->chgQData(oldp+672,((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                  << 1U)),64);
        bufp->chgQData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A),64);
        bufp->chgQData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B),64);
        bufp->chgQData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin),64);
        bufp->chgQData(oldp+680,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.io_Sum),64);
        bufp->chgQData(oldp+682,((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                  << 1U)),64);
        bufp->chgQData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_A),64);
        bufp->chgQData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_B),64);
        bufp->chgQData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3_io_Cin),64);
        bufp->chgQData(oldp+690,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.io_Sum),64);
        bufp->chgQData(oldp+692,((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                  << 1U)),64);
        bufp->chgQData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_A),64);
        bufp->chgQData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_B),64);
        bufp->chgQData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4_io_Cin),64);
        bufp->chgQData(oldp+700,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.io_Sum),64);
        bufp->chgQData(oldp+702,((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                  << 1U)),64);
        bufp->chgQData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_A),64);
        bufp->chgQData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5_io_B),64);
        bufp->chgQData(oldp+708,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.io_Sum),64);
        bufp->chgQData(oldp+710,((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                  << 1U)),64);
        bufp->chgQData(oldp+712,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.io_Sum),64);
        bufp->chgQData(oldp+714,((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                  << 1U)),64);
        bufp->chgQData(oldp+716,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.io_Sum),64);
        bufp->chgQData(oldp+718,((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                  << 1U)),64);
        bufp->chgQData(oldp+720,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.io_Sum),64);
        bufp->chgQData(oldp+722,((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                  << 1U)),64);
        bufp->chgQData(oldp+724,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.io_Sum),64);
        bufp->chgQData(oldp+726,((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                  << 1U)),64);
        bufp->chgQData(oldp+728,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.io_Sum),64);
        bufp->chgQData(oldp+730,((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                  << 1U)),64);
        bufp->chgQData(oldp+732,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.io_Sum),64);
        bufp->chgQData(oldp+734,((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                  << 1U)),64);
        bufp->chgQData(oldp+736,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.io_Sum),64);
        bufp->chgQData(oldp+738,((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                  << 1U)),64);
        bufp->chgQData(oldp+740,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.io_Sum),64);
        bufp->chgQData(oldp+742,((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                  << 1U)),64);
        bufp->chgQData(oldp+744,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.io_Sum),64);
        bufp->chgQData(oldp+746,((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                  << 1U)),64);
        bufp->chgQData(oldp+748,(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.io_Sum),64);
        bufp->chgQData(oldp+750,((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                  << 1U)),64);
        bufp->chgQData(oldp+752,((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16.__PVT___T_253)) 
                                   << 0x20U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16.__PVT___T_222)))),64);
        bufp->chgQData(oldp+754,((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16.__PVT___T_316)) 
                                   << 0x21U) | ((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16.__PVT___T_285)) 
                                                << 1U))),64);
        bufp->chgQData(oldp+756,(((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                  << 1U)),33);
        bufp->chgIData(oldp+758,((- vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul_io_mul1)),32);
        bufp->chgQData(oldp+759,((0x1ffffffffULL & 
                                  (- ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul_io_mul1)) 
                                      << 1U)))),33);
        bufp->chgCData(oldp+761,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT____VdfgTmp_h78cd338f__0) 
                                  << 1U)),3);
        bufp->chgCData(oldp+762,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT___T_62) 
                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div_io_divisor 
                                     >> 0x1fU))),3);
        bufp->chgCData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_1),3);
        bufp->chgCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_2),3);
        bufp->chgCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_3),3);
        bufp->chgCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_4),3);
        bufp->chgCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_5),3);
        bufp->chgCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_6),3);
        bufp->chgCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_7),3);
        bufp->chgCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_8),3);
        bufp->chgCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_9),3);
        bufp->chgCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_10),3);
        bufp->chgCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_11),3);
        bufp->chgCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_12),3);
        bufp->chgCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_13),3);
        bufp->chgCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_14),3);
        bufp->chgCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__boothCode_15),3);
        __Vtemp_h552a7665__0[0U] = (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                            << 1U));
        __Vtemp_h552a7665__0[1U] = (IData)(((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_h552a7665__0[2U] = 0U;
        bufp->chgWData(oldp+778,(__Vtemp_h552a7665__0),65);
        __Vtemp_h28d67335__0[0U] = (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                            << 1U));
        __Vtemp_h28d67335__0[1U] = (IData)(((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_h28d67335__0[2U] = 0U;
        bufp->chgWData(oldp+781,(__Vtemp_h28d67335__0),65);
        __Vtemp_h5c557fd7__0[0U] = (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                            << 1U));
        __Vtemp_h5c557fd7__0[1U] = (IData)(((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_h5c557fd7__0[2U] = 0U;
        bufp->chgWData(oldp+784,(__Vtemp_h5c557fd7__0),65);
        __Vtemp_h3a21bcba__0[0U] = (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                            << 1U));
        __Vtemp_h3a21bcba__0[1U] = (IData)(((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_3.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_h3a21bcba__0[2U] = 0U;
        bufp->chgWData(oldp+787,(__Vtemp_h3a21bcba__0),65);
        __Vtemp_h2b9c32ac__0[0U] = (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                            << 1U));
        __Vtemp_h2b9c32ac__0[1U] = (IData)(((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_4.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_h2b9c32ac__0[2U] = 0U;
        bufp->chgWData(oldp+790,(__Vtemp_h2b9c32ac__0),65);
        __Vtemp_h83fb9b63__0[0U] = (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                            << 1U));
        __Vtemp_h83fb9b63__0[1U] = (IData)(((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_5.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_h83fb9b63__0[2U] = 0U;
        bufp->chgWData(oldp+793,(__Vtemp_h83fb9b63__0),65);
        __Vtemp_h7fecc316__0[0U] = (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                            << 1U));
        __Vtemp_h7fecc316__0[1U] = (IData)(((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_6.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_h7fecc316__0[2U] = 0U;
        bufp->chgWData(oldp+796,(__Vtemp_h7fecc316__0),65);
        __Vtemp_h56f417cd__0[0U] = (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                            << 1U));
        __Vtemp_h56f417cd__0[1U] = (IData)(((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_7.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_h56f417cd__0[2U] = 0U;
        bufp->chgWData(oldp+799,(__Vtemp_h56f417cd__0),65);
        __Vtemp_h2813c899__0[0U] = (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                            << 1U));
        __Vtemp_h2813c899__0[1U] = (IData)(((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_8.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_h2813c899__0[2U] = 0U;
        bufp->chgWData(oldp+802,(__Vtemp_h2813c899__0),65);
        __Vtemp_h233f0761__0[0U] = (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                            << 1U));
        __Vtemp_h233f0761__0[1U] = (IData)(((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_9.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_h233f0761__0[2U] = 0U;
        bufp->chgWData(oldp+805,(__Vtemp_h233f0761__0),65);
        __Vtemp_hbdc4ec62__0[0U] = (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                            << 1U));
        __Vtemp_hbdc4ec62__0[1U] = (IData)(((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_10.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_hbdc4ec62__0[2U] = 0U;
        bufp->chgWData(oldp+808,(__Vtemp_hbdc4ec62__0),65);
        __Vtemp_hbd472a88__0[0U] = (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                            << 1U));
        __Vtemp_hbd472a88__0[1U] = (IData)(((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_11.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_hbd472a88__0[2U] = 0U;
        bufp->chgWData(oldp+811,(__Vtemp_hbd472a88__0),65);
        __Vtemp_hb447c34e__0[0U] = (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                            << 1U));
        __Vtemp_hb447c34e__0[1U] = (IData)(((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_12.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_hb447c34e__0[2U] = 0U;
        bufp->chgWData(oldp+814,(__Vtemp_hb447c34e__0),65);
        __Vtemp_he6809d2b__0[0U] = (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                            << 1U));
        __Vtemp_he6809d2b__0[1U] = (IData)(((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_13.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_he6809d2b__0[2U] = 0U;
        bufp->chgWData(oldp+817,(__Vtemp_he6809d2b__0),65);
        __Vtemp_hff3f0fb4__0[0U] = (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                            << 1U));
        __Vtemp_hff3f0fb4__0[1U] = (IData)(((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_14.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_hff3f0fb4__0[2U] = 0U;
        bufp->chgWData(oldp+820,(__Vtemp_hff3f0fb4__0),65);
        __Vtemp_hb4f8b17a__0[0U] = (IData)((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                            << 1U));
        __Vtemp_hb4f8b17a__0[1U] = (IData)(((vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_15.__PVT___T_317 
                                             << 1U) 
                                            >> 0x20U));
        __Vtemp_hb4f8b17a__0[2U] = 0U;
        bufp->chgWData(oldp+823,(__Vtemp_hb4f8b17a__0),65);
        __Vtemp_hcf9470b3__0[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16.__PVT___T_316)) 
                                             << 0x21U) 
                                            | ((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16.__PVT___T_285)) 
                                               << 1U)));
        __Vtemp_hcf9470b3__0[1U] = (IData)(((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16.__PVT___T_316)) 
                                              << 0x21U) 
                                             | ((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_16.__PVT___T_285)) 
                                                << 1U)) 
                                            >> 0x20U));
        __Vtemp_hcf9470b3__0[2U] = 0U;
        bufp->chgWData(oldp+826,(__Vtemp_hcf9470b3__0),65);
        bufp->chgCData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__aluSrc1),4);
        bufp->chgCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__aluSrc2),4);
        bufp->chgCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__branchOp),3);
        bufp->chgCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__csrOp),3);
        bufp->chgCData(oldp+833,(((0x33U == (0xfe00707fU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                   ? 0U : ((0x13U == 
                                            (0x707fU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                            ? 0U : 
                                           ((0x40000033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                             ? 0U : 
                                            ((0x37U 
                                              == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                              ? 0U : 
                                             ((0x17U 
                                               == (0x7fU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                               ? 0U
                                               : ((0x4033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                   ? 0U
                                                   : 
                                                  ((0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                    ? 0U
                                                    : 
                                                   ((0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                     ? 0U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                      ? 0U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                       ? 0U
                                                       : 
                                                      ((0x7013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                        ? 0U
                                                        : 
                                                       ((0x2033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                         ? 0U
                                                         : 
                                                        ((0x2013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__inst))
                                                          ? 0U
                                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT___T_761))))))))))))))),4);
        bufp->chgBit(oldp+834,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__branchOp))));
        bufp->chgIData(oldp+835,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_pc 
                                  + (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hc515ad56__0))) 
                                      << 0x15U) | (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hc515ad56__0) 
                                                    << 0x14U) 
                                                   | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_valid)
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
                                                            << 1U))))))),32);
        bufp->chgIData(oldp+836,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_pc 
                                  + (((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hc515ad56__0))) 
                                      << 0xdU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT____VdfgTmp_hc515ad56__0) 
                                                   << 0xcU) 
                                                  | ((0xfffff800U 
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
                                                           << 1U))))))),32);
        bufp->chgBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__wen));
        bufp->chgBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__ren));
        bufp->chgCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__width),2);
        bufp->chgBit(oldp+840,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_lsuOp)) 
                                | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_lsuOp)))));
        bufp->chgCData(oldp+841,((3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_reg_data)),2);
        bufp->chgBit(oldp+842,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__state)) 
                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__grant)))));
        bufp->chgBit(oldp+843,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__state)) 
                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__grant)))));
        bufp->chgBit(oldp+844,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__state)) 
                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__grant)))));
        bufp->chgCData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__state),3);
        bufp->chgBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__memAddr));
        bufp->chgBit(oldp+847,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_excType))));
        bufp->chgBit(oldp+848,((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_excType))));
        bufp->chgBit(oldp+849,(((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_excType)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__memAddr))));
        bufp->chgBit(oldp+850,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_excType))));
        bufp->chgIData(oldp+851,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_excType))
                                   ? 0xbU : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_excType))
                                              ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__memAddr)
                                                  ? 4U
                                                  : 0xdU)
                                              : 0U))),31);
        bufp->chgBit(oldp+852,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__state)) 
                                | (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__state)))));
        bufp->chgCData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mode),2);
        bufp->chgBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mstatus_sum));
        bufp->chgCData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mstatus_mpp),2);
        bufp->chgBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mstatus_spp));
        bufp->chgBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mstatus_mpie));
        bufp->chgBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mstatus_spie));
        bufp->chgBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mstatus_mie));
        bufp->chgBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mstatus_sie));
        bufp->chgIData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__medeleg_data),32);
        bufp->chgIData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mideleg_data),32);
        bufp->chgBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mie_meie));
        bufp->chgBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mie_seie));
        bufp->chgBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mie_mtie));
        bufp->chgBit(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mie_stie));
        bufp->chgBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mie_msie));
        bufp->chgBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mie_ssie));
        bufp->chgIData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mtvec_base),30);
        bufp->chgCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mtvec_mode),2);
        bufp->chgIData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mscratch_data),32);
        bufp->chgIData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mepc_data),32);
        bufp->chgBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mcause_int));
        bufp->chgIData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mcause_code),31);
        bufp->chgIData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mtval_data),32);
        bufp->chgBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mipReal_seip));
        bufp->chgBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mipReal_stip));
        bufp->chgBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mipReal_ssip));
        bufp->chgQData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mcycle_data),64);
        bufp->chgQData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__minstret_data),64);
        bufp->chgIData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__stvec_base),30);
        bufp->chgCData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__stvec_mode),2);
        bufp->chgIData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__sscratch_data),32);
        bufp->chgIData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__sepc_data),32);
        bufp->chgBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__scause_int));
        bufp->chgIData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__scause_code),31);
        bufp->chgIData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__stval_data),32);
        bufp->chgBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__satp_mode));
        bufp->chgIData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__satp_ppn),22);
        bufp->chgBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__readable));
        bufp->chgBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__writable));
        bufp->chgBit(oldp+894,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__csrActOp))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__readable)
                                 : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__csrActOp))
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__writable)
                                     : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__csrActOp))
                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT___T_319)
                                         : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__csrActOp))
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT___T_319)
                                             : ((5U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__csrActOp)) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT___T_319))))))));
        bufp->chgBit(oldp+895,((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__csrActOp))
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_valid)
                                      ? (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID__DOT__ff_inst 
                                               >> 0x1cU))
                                      : 0U) : 0U) <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mode))));
        bufp->chgIData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__csrData),32);
        bufp->chgIData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__writeData),32);
        bufp->chgIData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__flagIntS),32);
        bufp->chgIData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__flagIntM),32);
        bufp->chgBit(oldp+900,((((1U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mode)) 
                                 | ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mode)) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mstatus_sie))) 
                                & (0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__flagIntS 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mideleg_data)))));
        bufp->chgBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__hasIntM));
        bufp->chgBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__handIntS));
        bufp->chgBit(oldp+903,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__hasInt)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div_io_flush))));
        bufp->chgBit(oldp+904,((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__hasInt)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__div_io_flush)) 
                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__medeleg_data 
                                   >> ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_excType))
                                        ? 2U : ((7U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_excType))
                                                 ? 0U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_excType))
                                                  ? 0xbU
                                                  : 
                                                 ((8U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_MEM__DOT__ff_excType))
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__MEM__DOT__memAddr)
                                                    ? 4U
                                                    : 0xdU)
                                                   : 0U))))))));
        bufp->chgBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__handExcS));
        bufp->chgIData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__intCauseS),31);
        bufp->chgIData(oldp+907,(((0x800U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__flagIntM)
                                   ? 0xbU : ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__flagIntM)
                                              ? 3U : 
                                             ((0x80U 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__flagIntM)
                                               ? 7U
                                               : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__intCauseS)))),31);
        bufp->chgIData(oldp+908,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__handIntS)
                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__intCauseS
                                   : ((0x800U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__flagIntM)
                                       ? 0xbU : ((8U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__flagIntM)
                                                  ? 3U
                                                  : 
                                                 ((0x80U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__flagIntM)
                                                   ? 7U
                                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__intCauseS))))),31);
        bufp->chgIData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__cause),32);
        bufp->chgIData(oldp+910,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__stvec_base 
                                   + (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__stvec_mode) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__hasInt))
                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__cause
                                       : 0U)) << 2U)),32);
        bufp->chgIData(oldp+911,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mtvec_base 
                                   + (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mtvec_mode) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__hasInt))
                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__cause
                                       : 0U)) << 2U)),32);
        bufp->chgCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch__DOT__state),2);
        bufp->chgBit(oldp+913,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch__DOT__state)) 
                                & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__grant)) 
                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full))))));
        bufp->chgBit(oldp+914,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID__DOT__regEn1) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ex_o_load) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__resoler__DOT___T_2)))));
        bufp->chgBit(oldp+915,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ID_io_read2_en) 
                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_io_ex_o_load) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__resoler__DOT___T_10)))));
        bufp->chgBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
        bufp->chgBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
        bufp->chgBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
        bufp->chgBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
        bufp->chgBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
        bufp->chgBit(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
        bufp->chgBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
        bufp->chgBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
        bufp->chgBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
        bufp->chgBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
        bufp->chgIData(oldp+926,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
        bufp->chgBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
        bufp->chgIData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
        bufp->chgCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
        bufp->chgCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
        bufp->chgCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
        bufp->chgCData(oldp+932,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+933,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                  >> 0x18U)),8);
        bufp->chgIData(oldp+934,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                      << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
        bufp->chgCData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
        bufp->chgCData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
        bufp->chgCData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
        bufp->chgCData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
        bufp->chgCData(oldp+939,((0xffU & ((IData)(0xdU) 
                                           + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                              << 1U)))),8);
        bufp->chgCData(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
        bufp->chgCData(oldp+941,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                   ? 0U : 3U)),8);
        bufp->chgCData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
        bufp->chgCData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
        bufp->chgCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
        bufp->chgCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
        bufp->chgCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
        bufp->chgCData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
        bufp->chgCData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
        bufp->chgCData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
        bufp->chgCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
        bufp->chgCData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
        bufp->chgCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
        bufp->chgCData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
        bufp->chgCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
        bufp->chgCData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
        bufp->chgBit(oldp+975,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A))));
        bufp->chgBit(oldp+976,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B))));
        bufp->chgBit(oldp+977,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin))));
        bufp->chgBit(oldp+978,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A) 
                                       ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B)) 
                                      ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin)))));
        bufp->chgBit(oldp+979,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A) 
                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B)) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin))) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin))))));
        bufp->chgBit(oldp+980,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 1U)))));
        bufp->chgBit(oldp+981,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 1U)))));
        bufp->chgBit(oldp+982,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 1U)))));
        bufp->chgBit(oldp+983,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 1U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 1U))) 
                                      ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 1U))))));
        bufp->chgBit(oldp+984,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 1U)) 
                                        & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 1U))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 1U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 1U)))) 
                                      | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 1U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 1U)))))));
        bufp->chgBit(oldp+985,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 2U)))));
        bufp->chgBit(oldp+986,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 2U)))));
        bufp->chgBit(oldp+987,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 2U)))));
        bufp->chgBit(oldp+988,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 2U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 2U))) 
                                      ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 2U))))));
        bufp->chgBit(oldp+989,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 2U)) 
                                        & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 2U))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 2U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 2U)))) 
                                      | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 2U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 2U)))))));
        bufp->chgBit(oldp+990,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 3U)))));
        bufp->chgBit(oldp+991,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 3U)))));
        bufp->chgBit(oldp+992,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 3U)))));
        bufp->chgBit(oldp+993,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 3U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 3U))) 
                                      ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 3U))))));
        bufp->chgBit(oldp+994,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 3U)) 
                                        & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 3U))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 3U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 3U)))) 
                                      | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 3U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 3U)))))));
        bufp->chgBit(oldp+995,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                              >> 4U)))));
        bufp->chgBit(oldp+996,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                              >> 4U)))));
        bufp->chgBit(oldp+997,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                              >> 4U)))));
        bufp->chgBit(oldp+998,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 4U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 4U))) 
                                      ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                 >> 4U))))));
        bufp->chgBit(oldp+999,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 4U)) 
                                        & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 4U))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 4U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 4U)))) 
                                      | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 4U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                    >> 4U)))))));
        bufp->chgBit(oldp+1000,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 5U)))));
        bufp->chgBit(oldp+1001,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 5U)))));
        bufp->chgBit(oldp+1002,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 5U)))));
        bufp->chgBit(oldp+1003,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 5U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 5U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1004,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 5U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 5U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 5U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 5U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 5U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1005,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 6U)))));
        bufp->chgBit(oldp+1006,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 6U)))));
        bufp->chgBit(oldp+1007,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 6U)))));
        bufp->chgBit(oldp+1008,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 6U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 6U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1009,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 6U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 6U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 6U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 6U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 6U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1010,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 7U)))));
        bufp->chgBit(oldp+1011,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 7U)))));
        bufp->chgBit(oldp+1012,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 7U)))));
        bufp->chgBit(oldp+1013,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 7U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 7U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1014,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 7U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 7U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 7U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 7U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 7U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1015,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 8U)))));
        bufp->chgBit(oldp+1016,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 8U)))));
        bufp->chgBit(oldp+1017,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 8U)))));
        bufp->chgBit(oldp+1018,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 8U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 8U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 8U))))));
        bufp->chgBit(oldp+1019,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 8U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 8U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 8U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 8U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 8U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1020,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 9U)))));
        bufp->chgBit(oldp+1021,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 9U)))));
        bufp->chgBit(oldp+1022,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 9U)))));
        bufp->chgBit(oldp+1023,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 9U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 9U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 9U))))));
        bufp->chgBit(oldp+1024,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 9U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 9U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 9U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 9U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 9U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+1025,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1026,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1027,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1028,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0xaU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0xaU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1029,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0xaU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0xaU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0xaU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0xaU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0xaU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1030,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1031,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1032,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1033,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0xbU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0xbU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1034,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0xbU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0xbU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0xbU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0xbU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0xbU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1035,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1036,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1037,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1038,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0xcU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0xcU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1039,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0xcU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0xcU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0xcU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0xcU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0xcU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1040,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1041,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1042,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1043,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0xdU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0xdU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1044,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0xdU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0xdU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0xdU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0xdU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0xdU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1045,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1046,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1047,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1048,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0xeU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0xeU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1049,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0xeU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0xeU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0xeU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0xeU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0xeU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1050,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1051,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1052,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1053,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0xfU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0xfU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1054,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0xfU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0xfU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0xfU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0xfU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0xfU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1055,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1056,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1057,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1058,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x10U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x10U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1059,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x10U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x10U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x10U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x10U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x10U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1060,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1061,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1062,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1063,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x11U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x11U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1064,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x11U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x11U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x11U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x11U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x11U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1065,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1066,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1067,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1068,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x12U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x12U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1069,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x12U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x12U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x12U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x12U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x12U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1070,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1071,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1072,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1073,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x13U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x13U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1074,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x13U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x13U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x13U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x13U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x13U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1075,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1076,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1077,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1078,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x14U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x14U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1079,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x14U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x14U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x14U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x14U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x14U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1080,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1081,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1082,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1083,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x15U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x15U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1084,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x15U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x15U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x15U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x15U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x15U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1085,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1086,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1087,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1088,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x16U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x16U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1089,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x16U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x16U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x16U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x16U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x16U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1090,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1091,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1092,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1093,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x17U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x17U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1094,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x17U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x17U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x17U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x17U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x17U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1095,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1096,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1097,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1098,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x18U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x18U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1099,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x18U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x18U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x18U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x18U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x18U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1100,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1101,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1102,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1103,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x19U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x19U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1104,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x19U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x19U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x19U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x19U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x19U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1105,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1106,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1107,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1108,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x1aU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x1aU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1109,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x1aU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x1aU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x1aU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x1aU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x1aU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1110,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1111,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1112,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1113,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x1bU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x1bU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1114,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x1bU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x1bU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x1bU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x1bU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x1bU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1115,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1116,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1117,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1118,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x1cU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x1cU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1119,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x1cU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x1cU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x1cU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x1cU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x1cU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1120,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1121,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1122,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1123,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x1dU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x1dU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1124,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x1dU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x1dU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x1dU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x1dU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x1dU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1125,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1126,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1127,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1128,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x1eU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x1eU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1129,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x1eU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x1eU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x1eU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x1eU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x1eU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1130,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1131,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1132,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1133,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x1fU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x1fU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1134,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x1fU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x1fU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x1fU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x1fU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x1fU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1135,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1136,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1137,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1138,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x20U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x20U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1139,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x20U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x20U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x20U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x20U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x20U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1140,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1141,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1142,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1143,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x21U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x21U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1144,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x21U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x21U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x21U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x21U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x21U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1145,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1146,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1147,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1148,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x22U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x22U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1149,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x22U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x22U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x22U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x22U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x22U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1150,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1151,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1152,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1153,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x23U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x23U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1154,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x23U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x23U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x23U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x23U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x23U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1155,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1156,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1157,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1158,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x24U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x24U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1159,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x24U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x24U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x24U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x24U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x24U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1160,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1161,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1162,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1163,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x25U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x25U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1164,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x25U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x25U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x25U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x25U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x25U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1165,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1166,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1167,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1168,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x26U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x26U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+1169,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x26U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x26U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x26U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x26U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x26U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1170,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1171,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1172,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1173,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x27U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x27U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+1174,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x27U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x27U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x27U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x27U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x27U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1175,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1176,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1177,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1178,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x28U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x28U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+1179,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x28U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x28U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x28U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x28U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x28U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1180,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1181,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1182,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1183,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x29U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x29U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+1184,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x29U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x29U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x29U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x29U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x29U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1185,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1186,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1187,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1188,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x2aU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x2aU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+1189,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x2aU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x2aU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x2aU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x2aU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x2aU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1190,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1191,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1192,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1193,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x2bU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x2bU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+1194,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x2bU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x2bU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x2bU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x2bU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x2bU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1195,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1196,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1197,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1198,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x2cU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x2cU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+1199,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x2cU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x2cU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x2cU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x2cU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x2cU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1200,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1201,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1202,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1203,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x2dU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x2dU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+1204,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x2dU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x2dU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x2dU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x2dU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x2dU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1205,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1206,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1207,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1208,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x2eU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x2eU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+1209,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x2eU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x2eU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x2eU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x2eU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x2eU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1210,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1211,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1212,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1213,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x2fU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x2fU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+1214,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x2fU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x2fU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x2fU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x2fU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x2fU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1215,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1216,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1217,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1218,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x30U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x30U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+1219,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x30U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x30U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x30U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x30U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x30U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+1220,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1221,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1222,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1223,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x31U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x31U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+1224,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x31U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x31U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x31U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x31U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x31U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+1225,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1226,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1227,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1228,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x32U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x32U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+1229,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x32U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x32U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x32U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x32U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x32U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+1230,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1231,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1232,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1233,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x33U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x33U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+1234,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x33U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x33U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x33U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x33U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x33U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+1235,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1236,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1237,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1238,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x34U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x34U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+1239,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x34U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x34U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x34U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x34U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x34U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+1240,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1241,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1242,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1243,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x35U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x35U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+1244,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x35U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x35U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x35U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x35U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x35U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+1245,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1246,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1247,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1248,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x36U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x36U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+1249,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x36U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x36U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x36U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x36U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x36U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x36U)))))));
        bufp->chgBit(oldp+1250,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1251,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1252,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1253,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x37U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x37U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+1254,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x37U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x37U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x37U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x37U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x37U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+1255,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1256,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1257,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1258,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x38U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x38U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+1259,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x38U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x38U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x38U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x38U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x38U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x38U)))))));
        bufp->chgBit(oldp+1260,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1261,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1262,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1263,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x39U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x39U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+1264,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x39U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x39U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x39U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x39U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x39U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x39U)))))));
        bufp->chgBit(oldp+1265,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1266,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1267,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1268,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x3aU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x3aU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+1269,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x3aU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x3aU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x3aU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x3aU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x3aU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x3aU)))))));
        bufp->chgBit(oldp+1270,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1271,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1272,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1273,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x3bU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x3bU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+1274,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x3bU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x3bU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x3bU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x3bU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x3bU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x3bU)))))));
        bufp->chgBit(oldp+1275,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1276,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1277,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1278,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x3cU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x3cU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x3cU))))));
        bufp->chgBit(oldp+1279,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x3cU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x3cU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x3cU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x3cU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x3cU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x3cU)))))));
        bufp->chgBit(oldp+1280,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1281,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1282,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1283,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x3dU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x3dU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x3dU))))));
        bufp->chgBit(oldp+1284,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x3dU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x3dU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x3dU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x3dU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x3dU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x3dU)))))));
        bufp->chgBit(oldp+1285,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1286,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1287,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1288,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                 >> 0x3eU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                   >> 0x3eU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x3eU))))));
        bufp->chgBit(oldp+1289,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x3eU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x3eU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x3eU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x3eU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x3eU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x3eU)))))));
        bufp->chgBit(oldp+1290,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1291,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1292,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1293,((IData)((((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                           ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B) 
                                          ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin) 
                                         >> 0x3fU))));
        bufp->chgBit(oldp+1294,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                  >> 0x3fU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x3fU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                    >> 0x3fU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                      >> 0x3fU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                   >> 0x3fU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                     >> 0x3fU)))))));
        bufp->chgBit(oldp+1295,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A) 
                                       ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B)))));
        bufp->chgBit(oldp+1296,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B)))));
        bufp->chgBit(oldp+1297,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin)))));
        bufp->chgBit(oldp+1298,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin)))));
        bufp->chgBit(oldp+1299,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 1U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1300,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 1U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1301,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 1U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1302,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 1U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1303,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0xaU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1304,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0xaU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1305,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0xaU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1306,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0xaU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1307,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0xbU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1308,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0xbU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1309,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0xbU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1310,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0xbU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1311,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0xcU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1312,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0xcU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1313,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0xcU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1314,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0xcU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1315,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0xdU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1316,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0xdU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1317,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0xdU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1318,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0xdU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1319,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0xeU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1320,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0xeU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1321,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0xeU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1322,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0xeU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1323,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0xfU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1324,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0xfU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1325,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0xfU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1326,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0xfU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1327,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x10U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1328,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x10U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1329,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x10U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1330,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x10U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1331,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x11U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1332,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x11U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1333,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x11U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1334,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x11U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1335,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x12U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1336,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x12U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1337,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x12U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1338,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x12U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1339,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x13U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1340,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x13U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1341,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x13U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1342,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x13U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1343,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 2U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1344,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 2U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1345,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 2U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1346,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 2U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1347,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x14U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1348,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x14U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1349,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x14U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1350,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x14U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1351,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x15U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1352,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x15U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1353,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x15U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1354,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x15U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1355,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x16U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1356,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x16U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1357,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x16U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1358,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x16U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1359,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x17U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1360,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x17U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1361,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x17U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1362,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x17U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1363,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x18U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1364,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x18U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1365,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x18U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1366,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x18U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1367,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x19U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1368,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x19U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1369,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x19U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1370,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x19U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1371,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x1aU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1372,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x1aU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1373,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x1aU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1374,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x1aU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1375,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x1bU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1376,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x1bU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1377,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x1bU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1378,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x1bU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1379,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x1cU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1380,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x1cU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1381,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x1cU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1382,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x1cU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1383,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x1dU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1384,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x1dU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1385,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x1dU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1386,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x1dU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1387,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 3U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1388,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 3U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1389,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 3U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1390,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 3U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1391,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x1eU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1392,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x1eU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1393,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x1eU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1394,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x1eU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1395,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x1fU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1396,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x1fU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1397,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x1fU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1398,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x1fU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1399,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x20U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1400,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x20U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1401,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x20U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1402,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x20U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1403,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x21U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1404,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x21U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1405,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x21U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1406,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x21U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1407,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x22U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1408,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x22U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1409,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x22U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1410,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x22U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1411,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x23U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1412,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x23U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1413,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x23U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1414,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x23U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1415,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x24U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1416,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x24U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1417,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x24U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1418,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x24U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1419,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x25U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1420,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x25U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1421,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x25U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1422,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x25U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1423,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x26U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+1424,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x26U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+1425,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x26U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+1426,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x26U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+1427,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x27U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+1428,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x27U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+1429,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x27U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+1430,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x27U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+1431,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 4U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1432,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 4U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1433,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 4U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1434,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 4U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1435,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x28U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+1436,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x28U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+1437,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x28U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+1438,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x28U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+1439,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x29U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+1440,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x29U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+1441,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x29U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+1442,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x29U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+1443,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x2aU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+1444,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x2aU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+1445,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x2aU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+1446,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x2aU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+1447,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x2bU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+1448,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x2bU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+1449,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x2bU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+1450,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x2bU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+1451,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x2cU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+1452,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x2cU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+1453,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x2cU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+1454,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x2cU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+1455,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x2dU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+1456,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x2dU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+1457,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x2dU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+1458,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x2dU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+1459,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x2eU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+1460,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x2eU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+1461,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x2eU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+1462,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x2eU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+1463,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x2fU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+1464,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x2fU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+1465,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x2fU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+1466,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x2fU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+1467,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x30U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+1468,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x30U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+1469,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x30U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+1470,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x30U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+1471,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x31U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+1472,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x31U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+1473,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x31U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+1474,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x31U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+1475,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 5U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1476,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 5U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1477,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 5U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1478,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 5U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1479,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x32U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+1480,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x32U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+1481,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x32U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+1482,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x32U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+1483,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x33U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+1484,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x33U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+1485,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x33U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+1486,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x33U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+1487,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x34U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+1488,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x34U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+1489,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x34U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+1490,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x34U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+1491,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x35U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+1492,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x35U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+1493,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x35U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+1494,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x35U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+1495,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x36U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+1496,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x36U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+1497,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x36U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+1498,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x36U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+1499,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x37U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+1500,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x37U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+1501,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x37U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+1502,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x37U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+1503,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x38U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+1504,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x38U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+1505,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x38U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+1506,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x38U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+1507,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x39U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+1508,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x39U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+1509,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x39U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+1510,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x39U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+1511,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x3aU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+1512,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x3aU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+1513,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x3aU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+1514,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x3aU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+1515,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x3bU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+1516,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x3bU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+1517,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x3bU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+1518,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x3bU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+1519,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 6U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1520,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 6U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1521,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 6U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1522,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 6U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1523,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x3cU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x3cU))))));
        bufp->chgBit(oldp+1524,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x3cU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x3cU))))));
        bufp->chgBit(oldp+1525,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x3cU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x3cU))))));
        bufp->chgBit(oldp+1526,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x3cU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x3cU))))));
        bufp->chgBit(oldp+1527,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x3dU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x3dU))))));
        bufp->chgBit(oldp+1528,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x3dU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x3dU))))));
        bufp->chgBit(oldp+1529,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x3dU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x3dU))))));
        bufp->chgBit(oldp+1530,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x3dU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x3dU))))));
        bufp->chgBit(oldp+1531,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x3eU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x3eU))))));
        bufp->chgBit(oldp+1532,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x3eU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 0x3eU))))));
        bufp->chgBit(oldp+1533,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 0x3eU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x3eU))))));
        bufp->chgBit(oldp+1534,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 0x3eU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 0x3eU))))));
        bufp->chgBit(oldp+1535,((IData)(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                          ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B) 
                                         >> 0x3fU))));
        bufp->chgBit(oldp+1536,((IData)(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B) 
                                         >> 0x3fU))));
        bufp->chgBit(oldp+1537,((IData)(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin) 
                                         >> 0x3fU))));
        bufp->chgBit(oldp+1538,((IData)(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin) 
                                         >> 0x3fU))));
        bufp->chgBit(oldp+1539,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 7U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1540,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 7U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1541,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 7U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1542,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 7U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1543,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 8U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 8U))))));
        bufp->chgBit(oldp+1544,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 8U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 8U))))));
        bufp->chgBit(oldp+1545,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 8U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 8U))))));
        bufp->chgBit(oldp+1546,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 8U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 8U))))));
        bufp->chgBit(oldp+1547,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 9U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 9U))))));
        bufp->chgBit(oldp+1548,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 9U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                  >> 9U))))));
        bufp->chgBit(oldp+1549,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_B 
                                                >> 9U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 9U))))));
        bufp->chgBit(oldp+1550,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_A 
                                                >> 9U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_io_Cin 
                                                  >> 9U))))));
        bufp->chgBit(oldp+1551,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A))));
        bufp->chgBit(oldp+1552,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B))));
        bufp->chgBit(oldp+1553,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin))));
        bufp->chgBit(oldp+1554,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A) 
                                        ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B)) 
                                       ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin)))));
        bufp->chgBit(oldp+1555,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B)) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin))) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin))))));
        bufp->chgBit(oldp+1556,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 1U)))));
        bufp->chgBit(oldp+1557,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 1U)))));
        bufp->chgBit(oldp+1558,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 1U)))));
        bufp->chgBit(oldp+1559,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 1U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 1U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1560,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 1U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 1U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 1U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 1U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 1U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+1561,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 2U)))));
        bufp->chgBit(oldp+1562,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 2U)))));
        bufp->chgBit(oldp+1563,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 2U)))));
        bufp->chgBit(oldp+1564,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 2U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 2U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1565,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 2U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 2U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 2U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 2U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 2U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+1566,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 3U)))));
        bufp->chgBit(oldp+1567,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 3U)))));
        bufp->chgBit(oldp+1568,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 3U)))));
        bufp->chgBit(oldp+1569,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 3U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 3U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1570,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 3U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 3U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 3U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 3U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 3U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+1571,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 4U)))));
        bufp->chgBit(oldp+1572,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 4U)))));
        bufp->chgBit(oldp+1573,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 4U)))));
        bufp->chgBit(oldp+1574,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 4U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 4U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 4U))))));
        bufp->chgBit(oldp+1575,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 4U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 4U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 4U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 4U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 4U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+1576,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 5U)))));
        bufp->chgBit(oldp+1577,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 5U)))));
        bufp->chgBit(oldp+1578,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 5U)))));
        bufp->chgBit(oldp+1579,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 5U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 5U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 5U))))));
        bufp->chgBit(oldp+1580,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 5U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 5U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 5U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 5U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 5U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+1581,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 6U)))));
        bufp->chgBit(oldp+1582,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 6U)))));
        bufp->chgBit(oldp+1583,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 6U)))));
        bufp->chgBit(oldp+1584,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 6U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 6U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 6U))))));
        bufp->chgBit(oldp+1585,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 6U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 6U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 6U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 6U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 6U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+1586,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 7U)))));
        bufp->chgBit(oldp+1587,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 7U)))));
        bufp->chgBit(oldp+1588,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 7U)))));
        bufp->chgBit(oldp+1589,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 7U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 7U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 7U))))));
        bufp->chgBit(oldp+1590,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 7U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 7U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 7U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 7U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 7U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+1591,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 8U)))));
        bufp->chgBit(oldp+1592,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 8U)))));
        bufp->chgBit(oldp+1593,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 8U)))));
        bufp->chgBit(oldp+1594,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 8U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 8U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 8U))))));
        bufp->chgBit(oldp+1595,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 8U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 8U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 8U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 8U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 8U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+1596,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 9U)))));
        bufp->chgBit(oldp+1597,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 9U)))));
        bufp->chgBit(oldp+1598,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 9U)))));
        bufp->chgBit(oldp+1599,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 9U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 9U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 9U))))));
        bufp->chgBit(oldp+1600,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 9U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 9U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 9U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 9U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 9U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+1601,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1602,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1603,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1604,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0xaU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0xaU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1605,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0xaU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0xaU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0xaU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0xaU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0xaU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+1606,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1607,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1608,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1609,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0xbU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0xbU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1610,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0xbU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0xbU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0xbU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0xbU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0xbU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+1611,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1612,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1613,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1614,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0xcU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0xcU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1615,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0xcU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0xcU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0xcU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0xcU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0xcU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+1616,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1617,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1618,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1619,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0xdU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0xdU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1620,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0xdU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0xdU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0xdU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0xdU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0xdU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+1621,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1622,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1623,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1624,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0xeU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0xeU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1625,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0xeU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0xeU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0xeU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0xeU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0xeU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+1626,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1627,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1628,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1629,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0xfU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0xfU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1630,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0xfU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0xfU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0xfU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0xfU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0xfU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+1631,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1632,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1633,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1634,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x10U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x10U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1635,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x10U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x10U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x10U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x10U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x10U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+1636,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1637,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1638,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1639,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x11U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x11U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1640,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x11U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x11U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x11U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x11U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x11U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+1641,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1642,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1643,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1644,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x12U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x12U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1645,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x12U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x12U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x12U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x12U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x12U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+1646,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1647,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1648,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1649,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x13U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x13U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1650,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x13U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x13U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x13U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x13U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x13U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+1651,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1652,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1653,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1654,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x14U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x14U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1655,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x14U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x14U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x14U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x14U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x14U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+1656,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1657,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1658,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1659,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x15U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x15U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1660,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x15U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x15U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x15U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x15U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x15U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+1661,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1662,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1663,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1664,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x16U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x16U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1665,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x16U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x16U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x16U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x16U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x16U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+1666,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1667,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1668,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1669,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x17U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x17U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1670,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x17U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x17U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x17U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x17U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x17U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+1671,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1672,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1673,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1674,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x18U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x18U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1675,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x18U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x18U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x18U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x18U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x18U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+1676,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1677,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1678,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1679,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x19U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x19U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1680,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x19U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x19U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x19U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x19U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x19U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+1681,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1682,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1683,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1684,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x1aU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x1aU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1685,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x1aU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x1aU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x1aU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x1aU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x1aU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+1686,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1687,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1688,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1689,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x1bU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x1bU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1690,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x1bU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x1bU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x1bU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x1bU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x1bU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+1691,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1692,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1693,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1694,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x1cU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x1cU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1695,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x1cU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x1cU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x1cU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x1cU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x1cU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+1696,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1697,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1698,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1699,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x1dU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x1dU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1700,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x1dU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x1dU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x1dU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x1dU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x1dU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+1701,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1702,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1703,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1704,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x1eU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x1eU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1705,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x1eU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x1eU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x1eU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x1eU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x1eU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+1706,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1707,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1708,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1709,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x1fU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x1fU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1710,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x1fU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x1fU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x1fU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x1fU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x1fU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+1711,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1712,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1713,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1714,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x20U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x20U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1715,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x20U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x20U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x20U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x20U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x20U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+1716,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1717,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1718,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1719,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x21U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x21U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1720,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x21U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x21U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x21U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x21U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x21U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+1721,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1722,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1723,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1724,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x22U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x22U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1725,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x22U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x22U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x22U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x22U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x22U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+1726,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1727,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1728,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1729,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x23U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x23U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1730,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x23U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x23U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x23U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x23U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x23U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+1731,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1732,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1733,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1734,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x24U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x24U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1735,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x24U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x24U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x24U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x24U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x24U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+1736,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1737,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1738,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+1739,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x25U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x25U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1740,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x25U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x25U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x25U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x25U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x25U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+1741,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1742,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1743,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+1744,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x26U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x26U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+1745,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x26U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x26U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x26U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x26U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x26U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+1746,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1747,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1748,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+1749,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x27U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x27U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+1750,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x27U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x27U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x27U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x27U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x27U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+1751,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1752,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1753,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+1754,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x28U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x28U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+1755,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x28U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x28U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x28U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x28U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x28U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+1756,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1757,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1758,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+1759,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x29U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x29U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+1760,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x29U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x29U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x29U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x29U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x29U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+1761,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1762,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1763,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+1764,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x2aU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x2aU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+1765,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x2aU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x2aU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x2aU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x2aU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x2aU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+1766,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1767,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1768,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+1769,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x2bU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x2bU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+1770,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x2bU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x2bU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x2bU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x2bU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x2bU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+1771,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1772,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1773,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+1774,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x2cU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x2cU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+1775,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x2cU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x2cU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x2cU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x2cU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x2cU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+1776,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1777,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1778,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+1779,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x2dU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x2dU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+1780,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x2dU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x2dU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x2dU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x2dU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x2dU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+1781,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1782,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1783,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+1784,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x2eU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x2eU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+1785,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x2eU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x2eU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x2eU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x2eU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x2eU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+1786,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1787,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1788,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+1789,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x2fU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x2fU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+1790,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x2fU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x2fU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x2fU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x2fU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x2fU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+1791,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1792,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1793,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+1794,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x30U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x30U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+1795,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x30U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x30U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x30U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x30U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x30U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+1796,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1797,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1798,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+1799,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x31U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x31U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+1800,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x31U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x31U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x31U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x31U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x31U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+1801,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1802,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1803,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+1804,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x32U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x32U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+1805,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x32U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x32U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x32U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x32U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x32U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+1806,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1807,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1808,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+1809,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x33U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x33U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+1810,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x33U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x33U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x33U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x33U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x33U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+1811,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1812,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1813,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+1814,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x34U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x34U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+1815,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x34U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x34U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x34U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x34U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x34U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+1816,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1817,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1818,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+1819,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x35U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x35U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+1820,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x35U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x35U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x35U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x35U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x35U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+1821,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1822,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1823,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+1824,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x36U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x36U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+1825,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x36U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x36U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x36U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x36U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x36U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x36U)))))));
        bufp->chgBit(oldp+1826,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1827,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1828,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+1829,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x37U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x37U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+1830,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x37U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x37U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x37U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x37U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x37U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+1831,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1832,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1833,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+1834,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x38U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x38U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+1835,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x38U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x38U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x38U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x38U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x38U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x38U)))))));
        bufp->chgBit(oldp+1836,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1837,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1838,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+1839,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x39U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x39U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+1840,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x39U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x39U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x39U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x39U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x39U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x39U)))))));
        bufp->chgBit(oldp+1841,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1842,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1843,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+1844,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x3aU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x3aU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+1845,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x3aU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x3aU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x3aU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x3aU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x3aU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x3aU)))))));
        bufp->chgBit(oldp+1846,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1847,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1848,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x3bU)))));
        bufp->chgBit(oldp+1849,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x3bU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x3bU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+1850,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x3bU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x3bU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x3bU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x3bU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x3bU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x3bU)))))));
        bufp->chgBit(oldp+1851,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1852,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1853,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x3cU)))));
        bufp->chgBit(oldp+1854,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x3cU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x3cU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3cU))))));
        bufp->chgBit(oldp+1855,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x3cU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x3cU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x3cU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x3cU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x3cU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x3cU)))))));
        bufp->chgBit(oldp+1856,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1857,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1858,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x3dU)))));
        bufp->chgBit(oldp+1859,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x3dU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x3dU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3dU))))));
        bufp->chgBit(oldp+1860,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x3dU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x3dU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x3dU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x3dU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x3dU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x3dU)))))));
        bufp->chgBit(oldp+1861,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1862,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1863,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x3eU)))));
        bufp->chgBit(oldp+1864,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                 >> 0x3eU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                   >> 0x3eU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3eU))))));
        bufp->chgBit(oldp+1865,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x3eU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x3eU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x3eU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x3eU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x3eU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x3eU)))))));
        bufp->chgBit(oldp+1866,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1867,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1868,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                               >> 0x3fU)))));
        bufp->chgBit(oldp+1869,((IData)((((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                           ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B) 
                                          ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin) 
                                         >> 0x3fU))));
        bufp->chgBit(oldp+1870,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                  >> 0x3fU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x3fU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                    >> 0x3fU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                      >> 0x3fU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                   >> 0x3fU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                     >> 0x3fU)))))));
        bufp->chgBit(oldp+1871,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A) 
                                       ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B)))));
        bufp->chgBit(oldp+1872,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B)))));
        bufp->chgBit(oldp+1873,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin)))));
        bufp->chgBit(oldp+1874,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A) 
                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin)))));
        bufp->chgBit(oldp+1875,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 1U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1876,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 1U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1877,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 1U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1878,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 1U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 1U))))));
        bufp->chgBit(oldp+1879,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xaU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1880,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xaU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1881,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0xaU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1882,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xaU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+1883,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xbU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1884,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xbU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1885,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0xbU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1886,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xbU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+1887,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xcU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1888,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xcU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1889,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0xcU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1890,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xcU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+1891,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xdU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1892,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xdU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1893,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0xdU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1894,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xdU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+1895,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xeU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1896,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xeU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1897,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0xeU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1898,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xeU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+1899,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xfU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1900,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xfU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1901,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0xfU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1902,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0xfU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+1903,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x10U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1904,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x10U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1905,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x10U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1906,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x10U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+1907,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x11U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1908,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x11U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1909,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x11U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1910,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x11U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+1911,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x12U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1912,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x12U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1913,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x12U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1914,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x12U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+1915,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x13U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1916,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x13U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1917,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x13U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1918,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x13U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+1919,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 2U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1920,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 2U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1921,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 2U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1922,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 2U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 2U))))));
        bufp->chgBit(oldp+1923,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x14U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1924,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x14U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1925,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x14U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1926,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x14U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+1927,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x15U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1928,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x15U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1929,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x15U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1930,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x15U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+1931,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x16U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1932,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x16U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1933,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x16U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1934,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x16U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+1935,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x17U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1936,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x17U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1937,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x17U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1938,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x17U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+1939,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x18U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1940,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x18U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1941,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x18U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1942,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x18U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+1943,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x19U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1944,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x19U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1945,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x19U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1946,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x19U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+1947,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1aU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1948,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1aU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1949,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x1aU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1950,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1aU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+1951,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1bU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1952,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1bU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1953,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x1bU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1954,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1bU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+1955,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1cU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1956,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1cU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1957,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x1cU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1958,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1cU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+1959,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1dU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1960,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1dU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1961,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x1dU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1962,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1dU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+1963,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 3U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1964,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 3U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1965,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 3U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1966,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 3U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 3U))))));
        bufp->chgBit(oldp+1967,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1eU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1968,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1eU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1969,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x1eU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1970,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1eU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+1971,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1fU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1972,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1fU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1973,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x1fU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1974,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x1fU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+1975,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x20U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1976,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x20U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1977,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x20U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1978,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x20U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+1979,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x21U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1980,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x21U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1981,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x21U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1982,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x21U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+1983,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x22U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1984,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x22U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1985,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x22U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1986,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x22U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+1987,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x23U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1988,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x23U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1989,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x23U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1990,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x23U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+1991,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x24U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1992,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x24U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1993,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x24U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1994,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x24U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+1995,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x25U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1996,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x25U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1997,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x25U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1998,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x25U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+1999,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x26U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+2000,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x26U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+2001,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x26U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+2002,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x26U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+2003,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x27U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+2004,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x27U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+2005,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x27U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+2006,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x27U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+2007,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 4U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 4U))))));
        bufp->chgBit(oldp+2008,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 4U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 4U))))));
        bufp->chgBit(oldp+2009,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 4U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 4U))))));
        bufp->chgBit(oldp+2010,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 4U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 4U))))));
        bufp->chgBit(oldp+2011,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x28U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+2012,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x28U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+2013,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x28U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+2014,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x28U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+2015,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x29U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+2016,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x29U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+2017,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x29U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+2018,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x29U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+2019,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2aU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+2020,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2aU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+2021,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x2aU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+2022,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2aU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+2023,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2bU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+2024,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2bU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+2025,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x2bU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+2026,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2bU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+2027,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2cU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+2028,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2cU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+2029,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x2cU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+2030,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2cU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+2031,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2dU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+2032,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2dU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+2033,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x2dU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+2034,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2dU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+2035,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2eU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+2036,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2eU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+2037,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x2eU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+2038,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2eU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+2039,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2fU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+2040,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2fU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+2041,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x2fU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+2042,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x2fU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+2043,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x30U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+2044,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x30U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+2045,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x30U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+2046,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x30U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+2047,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x31U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+2048,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x31U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+2049,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x31U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+2050,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x31U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+2051,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 5U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 5U))))));
        bufp->chgBit(oldp+2052,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 5U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 5U))))));
        bufp->chgBit(oldp+2053,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 5U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 5U))))));
        bufp->chgBit(oldp+2054,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 5U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 5U))))));
        bufp->chgBit(oldp+2055,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x32U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+2056,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x32U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+2057,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x32U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+2058,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x32U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+2059,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x33U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+2060,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x33U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+2061,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x33U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+2062,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x33U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+2063,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x34U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+2064,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x34U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+2065,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x34U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+2066,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x34U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+2067,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x35U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+2068,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x35U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+2069,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x35U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+2070,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x35U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+2071,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x36U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+2072,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x36U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+2073,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x36U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+2074,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x36U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+2075,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x37U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+2076,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x37U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+2077,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x37U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+2078,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x37U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+2079,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x38U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+2080,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x38U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+2081,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x38U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+2082,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x38U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+2083,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x39U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+2084,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x39U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+2085,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x39U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+2086,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x39U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+2087,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3aU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+2088,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3aU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+2089,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x3aU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+2090,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3aU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3aU))))));
        bufp->chgBit(oldp+2091,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3bU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+2092,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3bU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+2093,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x3bU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+2094,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3bU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3bU))))));
        bufp->chgBit(oldp+2095,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 6U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 6U))))));
        bufp->chgBit(oldp+2096,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 6U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 6U))))));
        bufp->chgBit(oldp+2097,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 6U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 6U))))));
        bufp->chgBit(oldp+2098,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 6U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 6U))))));
        bufp->chgBit(oldp+2099,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3cU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x3cU))))));
        bufp->chgBit(oldp+2100,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3cU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x3cU))))));
        bufp->chgBit(oldp+2101,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x3cU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3cU))))));
        bufp->chgBit(oldp+2102,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3cU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3cU))))));
        bufp->chgBit(oldp+2103,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3dU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x3dU))))));
        bufp->chgBit(oldp+2104,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3dU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x3dU))))));
        bufp->chgBit(oldp+2105,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x3dU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3dU))))));
        bufp->chgBit(oldp+2106,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3dU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3dU))))));
        bufp->chgBit(oldp+2107,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3eU)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x3eU))))));
        bufp->chgBit(oldp+2108,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3eU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 0x3eU))))));
        bufp->chgBit(oldp+2109,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 0x3eU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3eU))))));
        bufp->chgBit(oldp+2110,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 0x3eU)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 0x3eU))))));
        bufp->chgBit(oldp+2111,((IData)(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                          ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B) 
                                         >> 0x3fU))));
        bufp->chgBit(oldp+2112,((IData)(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B) 
                                         >> 0x3fU))));
        bufp->chgBit(oldp+2113,((IData)(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin) 
                                         >> 0x3fU))));
        bufp->chgBit(oldp+2114,((IData)(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin) 
                                         >> 0x3fU))));
        bufp->chgBit(oldp+2115,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 7U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 7U))))));
        bufp->chgBit(oldp+2116,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 7U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 7U))))));
        bufp->chgBit(oldp+2117,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 7U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 7U))))));
        bufp->chgBit(oldp+2118,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 7U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 7U))))));
        bufp->chgBit(oldp+2119,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 8U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 8U))))));
        bufp->chgBit(oldp+2120,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 8U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 8U))))));
        bufp->chgBit(oldp+2121,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 8U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 8U))))));
        bufp->chgBit(oldp+2122,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 8U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 8U))))));
        bufp->chgBit(oldp+2123,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 9U)) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 9U))))));
        bufp->chgBit(oldp+2124,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 9U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                  >> 9U))))));
        bufp->chgBit(oldp+2125,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_B 
                                                >> 9U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 9U))))));
        bufp->chgBit(oldp+2126,((1U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_A 
                                                >> 9U)) 
                                       & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_1_io_Cin 
                                                  >> 9U))))));
        bufp->chgBit(oldp+2127,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A))));
        bufp->chgBit(oldp+2128,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B))));
        bufp->chgBit(oldp+2129,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin))));
        bufp->chgBit(oldp+2130,((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A) 
                                        ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B)) 
                                       ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin)))));
        bufp->chgBit(oldp+2131,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B)) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin))) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin))))));
        bufp->chgBit(oldp+2132,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 1U)))));
        bufp->chgBit(oldp+2133,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 1U)))));
        bufp->chgBit(oldp+2134,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 1U)))));
        bufp->chgBit(oldp+2135,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 1U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 1U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 1U))))));
        bufp->chgBit(oldp+2136,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 1U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 1U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 1U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 1U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 1U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+2137,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 2U)))));
        bufp->chgBit(oldp+2138,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 2U)))));
        bufp->chgBit(oldp+2139,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 2U)))));
        bufp->chgBit(oldp+2140,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 2U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 2U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 2U))))));
        bufp->chgBit(oldp+2141,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 2U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 2U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 2U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 2U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 2U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+2142,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 3U)))));
        bufp->chgBit(oldp+2143,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 3U)))));
        bufp->chgBit(oldp+2144,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 3U)))));
        bufp->chgBit(oldp+2145,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 3U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 3U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 3U))))));
        bufp->chgBit(oldp+2146,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 3U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 3U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 3U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 3U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 3U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+2147,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 4U)))));
        bufp->chgBit(oldp+2148,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 4U)))));
        bufp->chgBit(oldp+2149,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 4U)))));
        bufp->chgBit(oldp+2150,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 4U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 4U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 4U))))));
        bufp->chgBit(oldp+2151,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 4U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 4U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 4U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 4U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 4U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+2152,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 5U)))));
        bufp->chgBit(oldp+2153,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 5U)))));
        bufp->chgBit(oldp+2154,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 5U)))));
        bufp->chgBit(oldp+2155,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 5U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 5U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 5U))))));
        bufp->chgBit(oldp+2156,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 5U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 5U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 5U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 5U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 5U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+2157,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 6U)))));
        bufp->chgBit(oldp+2158,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 6U)))));
        bufp->chgBit(oldp+2159,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 6U)))));
        bufp->chgBit(oldp+2160,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 6U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 6U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 6U))))));
        bufp->chgBit(oldp+2161,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 6U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 6U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 6U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 6U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 6U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+2162,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 7U)))));
        bufp->chgBit(oldp+2163,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 7U)))));
        bufp->chgBit(oldp+2164,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 7U)))));
        bufp->chgBit(oldp+2165,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 7U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 7U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 7U))))));
        bufp->chgBit(oldp+2166,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 7U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 7U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 7U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 7U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 7U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+2167,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 8U)))));
        bufp->chgBit(oldp+2168,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 8U)))));
        bufp->chgBit(oldp+2169,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 8U)))));
        bufp->chgBit(oldp+2170,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 8U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 8U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 8U))))));
        bufp->chgBit(oldp+2171,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 8U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 8U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 8U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 8U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 8U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+2172,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 9U)))));
        bufp->chgBit(oldp+2173,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 9U)))));
        bufp->chgBit(oldp+2174,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 9U)))));
        bufp->chgBit(oldp+2175,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 9U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 9U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 9U))))));
        bufp->chgBit(oldp+2176,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 9U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 9U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 9U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 9U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 9U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+2177,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+2178,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+2179,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+2180,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0xaU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0xaU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0xaU))))));
        bufp->chgBit(oldp+2181,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0xaU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0xaU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0xaU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0xaU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0xaU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0xaU)))))));
        bufp->chgBit(oldp+2182,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+2183,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+2184,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+2185,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0xbU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0xbU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0xbU))))));
        bufp->chgBit(oldp+2186,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0xbU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0xbU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0xbU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0xbU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0xbU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0xbU)))))));
        bufp->chgBit(oldp+2187,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+2188,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+2189,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+2190,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0xcU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0xcU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0xcU))))));
        bufp->chgBit(oldp+2191,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0xcU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0xcU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0xcU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0xcU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0xcU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0xcU)))))));
        bufp->chgBit(oldp+2192,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+2193,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+2194,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+2195,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0xdU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0xdU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0xdU))))));
        bufp->chgBit(oldp+2196,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0xdU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0xdU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0xdU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0xdU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0xdU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0xdU)))))));
        bufp->chgBit(oldp+2197,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+2198,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+2199,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+2200,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0xeU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0xeU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0xeU))))));
        bufp->chgBit(oldp+2201,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0xeU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0xeU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0xeU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0xeU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0xeU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0xeU)))))));
        bufp->chgBit(oldp+2202,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+2203,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+2204,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+2205,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0xfU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0xfU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0xfU))))));
        bufp->chgBit(oldp+2206,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0xfU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0xfU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0xfU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0xfU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0xfU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0xfU)))))));
        bufp->chgBit(oldp+2207,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+2208,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+2209,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+2210,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x10U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x10U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+2211,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x10U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x10U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x10U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x10U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x10U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x10U)))))));
        bufp->chgBit(oldp+2212,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+2213,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+2214,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+2215,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x11U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x11U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+2216,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x11U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x11U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x11U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x11U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x11U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x11U)))))));
        bufp->chgBit(oldp+2217,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+2218,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+2219,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+2220,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x12U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x12U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+2221,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x12U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x12U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x12U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x12U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x12U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x12U)))))));
        bufp->chgBit(oldp+2222,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+2223,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+2224,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+2225,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x13U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x13U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+2226,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x13U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x13U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x13U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x13U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x13U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x13U)))))));
        bufp->chgBit(oldp+2227,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+2228,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+2229,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+2230,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x14U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x14U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+2231,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x14U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x14U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x14U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x14U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x14U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x14U)))))));
        bufp->chgBit(oldp+2232,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+2233,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+2234,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+2235,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x15U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x15U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+2236,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x15U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x15U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x15U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x15U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x15U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x15U)))))));
        bufp->chgBit(oldp+2237,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+2238,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+2239,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+2240,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x16U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x16U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+2241,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x16U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x16U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x16U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x16U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x16U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x16U)))))));
        bufp->chgBit(oldp+2242,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+2243,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+2244,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+2245,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x17U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x17U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+2246,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x17U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x17U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x17U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x17U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x17U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x17U)))))));
        bufp->chgBit(oldp+2247,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+2248,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+2249,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+2250,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x18U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x18U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+2251,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x18U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x18U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x18U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x18U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x18U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x18U)))))));
        bufp->chgBit(oldp+2252,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+2253,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+2254,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+2255,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x19U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x19U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+2256,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x19U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x19U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x19U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x19U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x19U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x19U)))))));
        bufp->chgBit(oldp+2257,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+2258,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+2259,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+2260,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x1aU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x1aU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+2261,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x1aU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x1aU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x1aU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x1aU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x1aU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x1aU)))))));
        bufp->chgBit(oldp+2262,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+2263,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+2264,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+2265,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x1bU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x1bU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+2266,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x1bU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x1bU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x1bU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x1bU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x1bU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x1bU)))))));
        bufp->chgBit(oldp+2267,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+2268,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+2269,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+2270,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x1cU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x1cU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+2271,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x1cU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x1cU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x1cU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x1cU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x1cU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x1cU)))))));
        bufp->chgBit(oldp+2272,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+2273,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+2274,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+2275,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x1dU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x1dU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+2276,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x1dU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x1dU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x1dU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x1dU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x1dU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x1dU)))))));
        bufp->chgBit(oldp+2277,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+2278,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+2279,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+2280,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x1eU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x1eU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+2281,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x1eU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x1eU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x1eU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x1eU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x1eU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x1eU)))))));
        bufp->chgBit(oldp+2282,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+2283,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+2284,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+2285,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x1fU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x1fU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+2286,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x1fU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x1fU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x1fU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x1fU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x1fU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+2287,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+2288,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+2289,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+2290,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x20U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x20U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+2291,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x20U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x20U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x20U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x20U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x20U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+2292,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+2293,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+2294,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+2295,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x21U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x21U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x21U))))));
        bufp->chgBit(oldp+2296,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x21U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x21U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x21U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x21U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x21U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x21U)))))));
        bufp->chgBit(oldp+2297,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+2298,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+2299,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+2300,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x22U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x22U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+2301,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x22U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x22U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x22U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x22U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x22U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x22U)))))));
        bufp->chgBit(oldp+2302,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2303,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2304,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2305,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x23U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x23U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x23U))))));
        bufp->chgBit(oldp+2306,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x23U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x23U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x23U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x23U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x23U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x23U)))))));
        bufp->chgBit(oldp+2307,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+2308,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+2309,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+2310,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x24U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x24U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x24U))))));
        bufp->chgBit(oldp+2311,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x24U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x24U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x24U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x24U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x24U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x24U)))))));
        bufp->chgBit(oldp+2312,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+2313,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+2314,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+2315,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x25U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x25U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x25U))))));
        bufp->chgBit(oldp+2316,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x25U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x25U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x25U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x25U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x25U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x25U)))))));
        bufp->chgBit(oldp+2317,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+2318,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+2319,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+2320,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x26U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x26U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x26U))))));
        bufp->chgBit(oldp+2321,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x26U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x26U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x26U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x26U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x26U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x26U)))))));
        bufp->chgBit(oldp+2322,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+2323,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+2324,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+2325,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x27U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x27U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x27U))))));
        bufp->chgBit(oldp+2326,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x27U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x27U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x27U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x27U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x27U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x27U)))))));
        bufp->chgBit(oldp+2327,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+2328,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+2329,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+2330,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x28U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x28U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x28U))))));
        bufp->chgBit(oldp+2331,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x28U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x28U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x28U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x28U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x28U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x28U)))))));
        bufp->chgBit(oldp+2332,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+2333,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+2334,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+2335,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x29U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x29U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x29U))))));
        bufp->chgBit(oldp+2336,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x29U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x29U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x29U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x29U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x29U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x29U)))))));
        bufp->chgBit(oldp+2337,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+2338,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+2339,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+2340,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x2aU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x2aU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x2aU))))));
        bufp->chgBit(oldp+2341,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x2aU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x2aU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x2aU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x2aU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x2aU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x2aU)))))));
        bufp->chgBit(oldp+2342,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+2343,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+2344,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+2345,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x2bU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x2bU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x2bU))))));
        bufp->chgBit(oldp+2346,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x2bU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x2bU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x2bU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x2bU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x2bU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x2bU)))))));
        bufp->chgBit(oldp+2347,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+2348,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+2349,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+2350,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x2cU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x2cU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x2cU))))));
        bufp->chgBit(oldp+2351,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x2cU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x2cU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x2cU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x2cU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x2cU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x2cU)))))));
        bufp->chgBit(oldp+2352,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+2353,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+2354,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+2355,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x2dU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x2dU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x2dU))))));
        bufp->chgBit(oldp+2356,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x2dU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x2dU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x2dU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x2dU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x2dU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x2dU)))))));
        bufp->chgBit(oldp+2357,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+2358,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+2359,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+2360,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x2eU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x2eU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x2eU))))));
        bufp->chgBit(oldp+2361,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x2eU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x2eU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x2eU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x2eU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x2eU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x2eU)))))));
        bufp->chgBit(oldp+2362,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+2363,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+2364,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+2365,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x2fU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x2fU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x2fU))))));
        bufp->chgBit(oldp+2366,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x2fU)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x2fU))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x2fU)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x2fU)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x2fU)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x2fU)))))));
        bufp->chgBit(oldp+2367,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+2368,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+2369,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x30U)))));
        bufp->chgBit(oldp+2370,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x30U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x30U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x30U))))));
        bufp->chgBit(oldp+2371,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x30U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x30U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x30U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x30U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x30U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x30U)))))));
        bufp->chgBit(oldp+2372,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+2373,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+2374,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x31U)))));
        bufp->chgBit(oldp+2375,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x31U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x31U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x31U))))));
        bufp->chgBit(oldp+2376,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x31U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x31U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x31U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x31U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x31U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x31U)))))));
        bufp->chgBit(oldp+2377,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+2378,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+2379,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x32U)))));
        bufp->chgBit(oldp+2380,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x32U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x32U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x32U))))));
        bufp->chgBit(oldp+2381,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x32U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x32U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x32U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x32U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x32U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x32U)))))));
        bufp->chgBit(oldp+2382,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+2383,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+2384,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x33U)))));
        bufp->chgBit(oldp+2385,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x33U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x33U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x33U))))));
        bufp->chgBit(oldp+2386,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x33U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x33U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x33U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x33U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x33U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x33U)))))));
        bufp->chgBit(oldp+2387,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+2388,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+2389,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x34U)))));
        bufp->chgBit(oldp+2390,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x34U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x34U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x34U))))));
        bufp->chgBit(oldp+2391,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x34U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x34U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x34U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x34U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x34U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x34U)))))));
        bufp->chgBit(oldp+2392,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+2393,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+2394,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x35U)))));
        bufp->chgBit(oldp+2395,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x35U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x35U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x35U))))));
        bufp->chgBit(oldp+2396,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x35U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x35U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x35U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x35U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x35U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x35U)))))));
        bufp->chgBit(oldp+2397,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+2398,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+2399,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x36U)))));
        bufp->chgBit(oldp+2400,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x36U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x36U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x36U))))));
        bufp->chgBit(oldp+2401,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x36U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x36U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x36U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x36U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x36U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x36U)))))));
        bufp->chgBit(oldp+2402,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+2403,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+2404,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x37U)))));
        bufp->chgBit(oldp+2405,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x37U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x37U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x37U))))));
        bufp->chgBit(oldp+2406,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x37U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x37U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x37U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x37U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x37U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x37U)))))));
        bufp->chgBit(oldp+2407,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+2408,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+2409,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x38U)))));
        bufp->chgBit(oldp+2410,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x38U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x38U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x38U))))));
        bufp->chgBit(oldp+2411,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x38U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x38U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x38U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x38U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x38U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x38U)))))));
        bufp->chgBit(oldp+2412,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+2413,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+2414,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x39U)))));
        bufp->chgBit(oldp+2415,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x39U)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x39U))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x39U))))));
        bufp->chgBit(oldp+2416,((1U & ((((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                  >> 0x39U)) 
                                         & (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x39U))) 
                                        | ((IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                    >> 0x39U)) 
                                           & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                      >> 0x39U)))) 
                                       | ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                   >> 0x39U)) 
                                          & (IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                     >> 0x39U)))))));
        bufp->chgBit(oldp+2417,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+2418,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+2419,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                               >> 0x3aU)))));
        bufp->chgBit(oldp+2420,((1U & (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_A 
                                                 >> 0x3aU)) 
                                        ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_B 
                                                   >> 0x3aU))) 
                                       ^ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX__DOT__mdu__DOT__mul__DOT__CarrySaveAdder_2_io_Cin 
                                                  >> 0x3aU))))));
    }
}
