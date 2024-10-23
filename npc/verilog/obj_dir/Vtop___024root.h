// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;
class Vtop___024unit;


class Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_timer,0,0);
        VL_IN8(io_soft,0,0);
        VL_IN8(io_extern,0,0);
        CData/*0:0*/ Core__DOT__IF_ID_io_flush;
        CData/*0:0*/ Core__DOT__IF_ID_io_stallPrev;
        CData/*0:0*/ Core__DOT__ID_io_read2_en;
        CData/*0:0*/ Core__DOT__EX_io_ex_o_load;
        CData/*0:0*/ Core__DOT__EX_MEM_io_stallPrev;
        CData/*0:0*/ Core__DOT__MEM_io_stallReq;
        CData/*0:0*/ Core__DOT__resoler_io_loadflag;
        CData/*0:0*/ Core__DOT__resoler_io_csrflag;
        CData/*0:0*/ Core__DOT__fetch__DOT__bpu_io_prdt_taken_o;
        CData/*0:0*/ Core__DOT__IF_ID__DOT__ff_valid;
        CData/*0:0*/ Core__DOT__IF_ID__DOT__ff_bpu_take;
        CData/*0:0*/ Core__DOT__IF_ID__DOT__ff_misaligned;
        CData/*0:0*/ Core__DOT__IF_ID__DOT___GEN_4;
        CData/*0:0*/ Core__DOT__ID__DOT__stall;
        CData/*4:0*/ Core__DOT__ID__DOT__rd;
        CData/*4:0*/ Core__DOT__ID__DOT__rs1;
        CData/*4:0*/ Core__DOT__ID__DOT__rs2;
        CData/*0:0*/ Core__DOT__ID__DOT___T_153;
        CData/*0:0*/ Core__DOT__ID__DOT___T_171;
        CData/*0:0*/ Core__DOT__ID__DOT___T_188;
        CData/*0:0*/ Core__DOT__ID__DOT__regEn1;
        CData/*0:0*/ Core__DOT__ID__DOT___T_229;
        CData/*0:0*/ Core__DOT__ID__DOT___T_246;
        CData/*0:0*/ Core__DOT__ID__DOT___T_276;
        CData/*0:0*/ Core__DOT__ID__DOT___T_293;
        CData/*3:0*/ Core__DOT__ID__DOT___T_326;
        CData/*3:0*/ Core__DOT__ID__DOT___T_341;
        CData/*3:0*/ Core__DOT__ID__DOT___T_356;
        CData/*3:0*/ Core__DOT__ID__DOT__aluSrc1;
        CData/*3:0*/ Core__DOT__ID__DOT___T_389;
        CData/*3:0*/ Core__DOT__ID__DOT___T_404;
        CData/*3:0*/ Core__DOT__ID__DOT___T_419;
        CData/*3:0*/ Core__DOT__ID__DOT__aluSrc2;
        CData/*3:0*/ Core__DOT__ID__DOT___T_442;
        CData/*3:0*/ Core__DOT__ID__DOT___T_457;
        CData/*3:0*/ Core__DOT__ID__DOT___T_472;
        CData/*2:0*/ Core__DOT__ID__DOT___T_529;
        CData/*2:0*/ Core__DOT__ID__DOT__branchOp;
        CData/*3:0*/ Core__DOT__ID__DOT___T_558;
        CData/*3:0*/ Core__DOT__ID__DOT___T_573;
        CData/*3:0*/ Core__DOT__ID__DOT___T_588;
        CData/*2:0*/ Core__DOT__ID__DOT___T_629;
        CData/*2:0*/ Core__DOT__ID__DOT___T_644;
        CData/*2:0*/ Core__DOT__ID__DOT__csrOp;
        CData/*3:0*/ Core__DOT__ID__DOT___T_732;
        CData/*3:0*/ Core__DOT__ID__DOT___T_747;
        CData/*3:0*/ Core__DOT__ID__DOT___T_762;
        CData/*0:0*/ Core__DOT__ID__DOT__branchteke;
        CData/*0:0*/ Core__DOT__ID__DOT__branchmiss;
        CData/*0:0*/ Core__DOT__ID__DOT__addrFault;
        CData/*2:0*/ Core__DOT__ID__DOT__csrActOp;
        CData/*0:0*/ Core__DOT__ID__DOT____VdfgTmp_h8afae4a5__0;
        CData/*3:0*/ Core__DOT__ID_EX__DOT__ff_aluOp;
        CData/*3:0*/ Core__DOT__ID_EX__DOT__ff_lsuOp;
        CData/*0:0*/ Core__DOT__ID_EX__DOT__ff_regWen;
        CData/*4:0*/ Core__DOT__ID_EX__DOT__ff_regWaddr;
        CData/*2:0*/ Core__DOT__ID_EX__DOT__ff_csrOp;
        CData/*0:0*/ Core__DOT__ID_EX__DOT__ff_csren;
        CData/*3:0*/ Core__DOT__ID_EX__DOT__ff_excType;
    };
    struct {
        CData/*3:0*/ Core__DOT__EX_MEM__DOT__ff_lsuOp;
        CData/*0:0*/ Core__DOT__EX_MEM__DOT__ff_reg_en;
        CData/*4:0*/ Core__DOT__EX_MEM__DOT__ff_reg_addr;
        CData/*0:0*/ Core__DOT__EX_MEM__DOT__ff_load;
        CData/*2:0*/ Core__DOT__EX_MEM__DOT__ff_csr_op;
        CData/*0:0*/ Core__DOT__EX_MEM__DOT__ff_csr_retired;
        CData/*3:0*/ Core__DOT__EX_MEM__DOT__ff_excType;
        CData/*0:0*/ Core__DOT__MEM__DOT__mem_wen;
        CData/*0:0*/ Core__DOT__MEM__DOT__mem_ren;
        CData/*0:0*/ Core__DOT__MEM__DOT__ren;
        CData/*1:0*/ Core__DOT__MEM__DOT__width;
        CData/*6:0*/ Core__DOT__MEM__DOT__writeEn;
        CData/*0:0*/ Core__DOT__MEM__DOT__memAddr;
        CData/*0:0*/ Core__DOT__MEM_WB__DOT__ff_reg_en;
        CData/*4:0*/ Core__DOT__MEM_WB__DOT__ff_reg_addr;
        CData/*2:0*/ Core__DOT__MEM_WB__DOT__ff_csr_op;
        CData/*0:0*/ Core__DOT__MEM_WB__DOT__ff_csr_retired;
        CData/*0:0*/ Core__DOT__regfile__DOT___T_4;
        CData/*0:0*/ Core__DOT__resoler__DOT___T_2;
        CData/*0:0*/ Core__DOT__resoler__DOT___T_10;
        CData/*0:0*/ Core__DOT__resoler__DOT___T_35;
        CData/*1:0*/ Core__DOT__csr__DOT__mode;
        CData/*0:0*/ Core__DOT__csr__DOT__mstatus_sum;
        CData/*1:0*/ Core__DOT__csr__DOT__mstatus_mpp;
        CData/*0:0*/ Core__DOT__csr__DOT__mstatus_spp;
        CData/*0:0*/ Core__DOT__csr__DOT__mstatus_mpie;
        CData/*0:0*/ Core__DOT__csr__DOT__mstatus_spie;
        CData/*0:0*/ Core__DOT__csr__DOT__mstatus_mie;
        CData/*0:0*/ Core__DOT__csr__DOT__mstatus_sie;
        CData/*0:0*/ Core__DOT__csr__DOT__mie_meie;
        CData/*0:0*/ Core__DOT__csr__DOT__mie_seie;
        CData/*0:0*/ Core__DOT__csr__DOT__mie_mtie;
        CData/*0:0*/ Core__DOT__csr__DOT__mie_stie;
        CData/*0:0*/ Core__DOT__csr__DOT__mie_msie;
        CData/*0:0*/ Core__DOT__csr__DOT__mie_ssie;
        CData/*1:0*/ Core__DOT__csr__DOT__mtvec_mode;
        CData/*0:0*/ Core__DOT__csr__DOT__mcause_int;
        CData/*0:0*/ Core__DOT__csr__DOT__mipReal_seip;
        CData/*0:0*/ Core__DOT__csr__DOT__mipReal_stip;
        CData/*0:0*/ Core__DOT__csr__DOT__mipReal_ssip;
        CData/*1:0*/ Core__DOT__csr__DOT__stvec_mode;
        CData/*0:0*/ Core__DOT__csr__DOT__scause_int;
        CData/*0:0*/ Core__DOT__csr__DOT__satp_mode;
        CData/*0:0*/ Core__DOT__csr__DOT__mip_ssip;
        CData/*0:0*/ Core__DOT__csr__DOT__mip_stip;
        CData/*0:0*/ Core__DOT__csr__DOT__mip_seip;
        CData/*0:0*/ Core__DOT__csr__DOT___T_267;
        CData/*0:0*/ Core__DOT__csr__DOT__readable;
        CData/*0:0*/ Core__DOT__csr__DOT__writable;
        CData/*0:0*/ Core__DOT__csr__DOT___T_319;
        CData/*0:0*/ Core__DOT__csr__DOT__hasIntM;
        CData/*0:0*/ Core__DOT__csr__DOT__hasInt;
        CData/*0:0*/ Core__DOT__csr__DOT__handIntS;
        CData/*0:0*/ Core__DOT__csr__DOT__handExcS;
        CData/*0:0*/ Core__DOT__csr__DOT___T_605;
        CData/*0:0*/ Core__DOT__csr__DOT___GEN_67;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ Core__DOT__ID__DOT__immI;
        SData/*11:0*/ Core__DOT__ID__DOT___T_839;
        SData/*11:0*/ Core__DOT__ID_EX__DOT__ff_csrAddr;
        SData/*11:0*/ Core__DOT__EX_MEM__DOT__ff_csr_addr;
        SData/*11:0*/ Core__DOT__MEM_WB__DOT__ff_csr_addr;
        VL_OUT(io_inst,31,0);
    };
    struct {
        VL_OUT(io_pc,31,0);
        VL_OUT(io_npc,31,0);
        IData/*31:0*/ Core__DOT__ID_io_read1_data;
        IData/*31:0*/ Core__DOT__ID_io_read2_data;
        IData/*31:0*/ Core__DOT__MEM_io_except_excValue;
        IData/*31:0*/ Core__DOT__MEM_io_mem_o_reg_data;
        IData/*31:0*/ Core__DOT__fetch__DOT__bpu_io_prdt_addr_o;
        IData/*31:0*/ Core__DOT__fetch__DOT__pc;
        IData/*31:0*/ Core__DOT__fetch__DOT___T_2;
        IData/*31:0*/ Core__DOT__fetch__DOT__read__DOT__fetched_data;
        IData/*31:0*/ Core__DOT__fetch__DOT__bpu__DOT__inst_b_type_imm;
        IData/*31:0*/ Core__DOT__IF_ID__DOT__ff_pc;
        IData/*31:0*/ Core__DOT__IF_ID__DOT__ff_inst;
        IData/*31:0*/ Core__DOT__IF_ID__DOT__ff_bpu_takepc;
        IData/*31:0*/ Core__DOT__ID__DOT__lastinst;
        IData/*31:0*/ Core__DOT__ID__DOT___T_1;
        IData/*31:0*/ Core__DOT__ID__DOT__inst;
        IData/*31:0*/ Core__DOT__ID__DOT___GEN_2;
        IData/*31:0*/ Core__DOT__ID__DOT___T_848;
        IData/*31:0*/ Core__DOT__ID__DOT____VdfgTmp_h7417a8e6__0;
        IData/*31:0*/ Core__DOT__ID_EX__DOT__ff_opr1;
        IData/*31:0*/ Core__DOT__ID_EX__DOT__ff_opr2;
        IData/*31:0*/ Core__DOT__ID_EX__DOT__ff_lsuData;
        IData/*31:0*/ Core__DOT__ID_EX__DOT__ff_csrrData;
        IData/*31:0*/ Core__DOT__ID_EX__DOT__ff_csrwData;
        IData/*31:0*/ Core__DOT__ID_EX__DOT__ff_excValue;
        IData/*31:0*/ Core__DOT__ID_EX__DOT__ff_inst;
        IData/*31:0*/ Core__DOT__ID_EX__DOT__ff_currentPc;
        IData/*31:0*/ Core__DOT__EX_MEM__DOT__ff_lsuData;
        IData/*31:0*/ Core__DOT__EX_MEM__DOT__ff_reg_data;
        IData/*31:0*/ Core__DOT__EX_MEM__DOT__ff_csr_data;
        IData/*31:0*/ Core__DOT__EX_MEM__DOT__ff_excValue;
        IData/*31:0*/ Core__DOT__EX_MEM__DOT__ff_inst;
        IData/*31:0*/ Core__DOT__EX_MEM__DOT__ff_currentPc;
        IData/*31:0*/ Core__DOT__MEM__DOT__mem_rdata;
        IData/*31:0*/ Core__DOT__MEM_WB__DOT__ff_reg_data;
        IData/*31:0*/ Core__DOT__MEM_WB__DOT__ff_csr_data;
        IData/*31:0*/ Core__DOT__MEM_WB__DOT__ff_currentPc;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_0;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_1;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_2;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_3;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_4;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_5;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_6;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_7;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_8;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_9;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_10;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_11;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_12;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_13;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_14;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_15;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_16;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_17;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_18;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_19;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_20;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_21;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_22;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_23;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_24;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_25;
    };
    struct {
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_26;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_27;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_28;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_29;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_30;
        IData/*31:0*/ Core__DOT__regfile__DOT__regfile_31;
        IData/*31:0*/ Core__DOT__regfile__DOT___GEN_21;
        IData/*31:0*/ Core__DOT__regfile__DOT___GEN_53;
        IData/*31:0*/ Core__DOT__csr__DOT__medeleg_data;
        IData/*31:0*/ Core__DOT__csr__DOT__mideleg_data;
        IData/*29:0*/ Core__DOT__csr__DOT__mtvec_base;
        IData/*31:0*/ Core__DOT__csr__DOT__mscratch_data;
        IData/*31:0*/ Core__DOT__csr__DOT__mepc_data;
        IData/*30:0*/ Core__DOT__csr__DOT__mcause_code;
        IData/*31:0*/ Core__DOT__csr__DOT__mtval_data;
        IData/*31:0*/ Core__DOT__csr__DOT___T_31;
        IData/*31:0*/ Core__DOT__csr__DOT___T_47;
        IData/*29:0*/ Core__DOT__csr__DOT__stvec_base;
        IData/*31:0*/ Core__DOT__csr__DOT__sscratch_data;
        IData/*31:0*/ Core__DOT__csr__DOT__sepc_data;
        IData/*30:0*/ Core__DOT__csr__DOT__scause_code;
        IData/*31:0*/ Core__DOT__csr__DOT__stval_data;
        IData/*21:0*/ Core__DOT__csr__DOT__satp_ppn;
        IData/*31:0*/ Core__DOT__csr__DOT___T_74;
        IData/*31:0*/ Core__DOT__csr__DOT___T_82;
        IData/*31:0*/ Core__DOT__csr__DOT___T_83;
        IData/*31:0*/ Core__DOT__csr__DOT___T_84;
        IData/*31:0*/ Core__DOT__csr__DOT___T_92;
        IData/*31:0*/ Core__DOT__csr__DOT___T_94;
        IData/*31:0*/ Core__DOT__csr__DOT___T_129;
        IData/*31:0*/ Core__DOT__csr__DOT___T_130;
        IData/*31:0*/ Core__DOT__csr__DOT___T_142;
        IData/*31:0*/ Core__DOT__csr__DOT___T_235;
        IData/*31:0*/ Core__DOT__csr__DOT___T_422;
        IData/*31:0*/ Core__DOT__csr__DOT__csrData;
        IData/*31:0*/ Core__DOT__csr__DOT___T_510;
        IData/*31:0*/ Core__DOT__csr__DOT___T_512;
        IData/*31:0*/ Core__DOT__csr__DOT__writeData;
        IData/*31:0*/ Core__DOT__csr__DOT__flagIntS;
        IData/*31:0*/ Core__DOT__csr__DOT__flagIntM;
        IData/*30:0*/ Core__DOT__csr__DOT__intCauseS;
        IData/*31:0*/ Core__DOT__csr__DOT__cause;
        IData/*31:0*/ Core__DOT__csr__DOT___T_675;
        IData/*31:0*/ Core__DOT__csr__DOT___T_717;
        IData/*31:0*/ Core__DOT__csr__DOT___T_756;
        IData/*31:0*/ __Vfunc_vaddr_read__3__Vfuncout;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ Core__DOT__ID__DOT___T_791;
        QData/*32:0*/ Core__DOT__ID__DOT__takepc;
        QData/*62:0*/ Core__DOT__EX__DOT__result;
        QData/*63:0*/ Core__DOT__csr__DOT__mcycle_data;
        QData/*63:0*/ Core__DOT__csr__DOT__minstret_data;
        QData/*63:0*/ Core__DOT__csr__DOT___T_617;
        QData/*63:0*/ Core__DOT__csr__DOT___T_619;
        QData/*63:0*/ Core__DOT__csr__DOT___T_762;
        QData/*63:0*/ Core__DOT__csr__DOT___T_765;
        QData/*63:0*/ Core__DOT__csr__DOT___T_768;
        QData/*63:0*/ Core__DOT__csr__DOT___T_771;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
