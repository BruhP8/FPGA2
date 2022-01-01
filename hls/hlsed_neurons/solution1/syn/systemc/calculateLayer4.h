// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _calculateLayer4_HH_
#define _calculateLayer4_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "generic_tanh_double_s.h"
#include "nerons_dmul_64ns_64ns_64_6_max_dsp_1.h"
#include "nerons_hadd_16ns_16ns_16_5_full_dsp_1.h"
#include "nerons_hmul_16ns_16ns_16_4_max_dsp_1.h"
#include "nerons_hptodp_16ns_64_2_1.h"
#include "nerons_dptohp_64ns_16_2_1.h"
#include "calculateLayer4_Layer3_Weights_CPU.h"

namespace ap_rtl {

struct calculateLayer4 : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<11> > Layer3_Neurons_CPU_address0;
    sc_out< sc_logic > Layer3_Neurons_CPU_ce0;
    sc_in< sc_lv<16> > Layer3_Neurons_CPU_q0;
    sc_out< sc_lv<7> > Layer4_Neurons_CPU_address0;
    sc_out< sc_logic > Layer4_Neurons_CPU_ce0;
    sc_out< sc_logic > Layer4_Neurons_CPU_we0;
    sc_out< sc_lv<16> > Layer4_Neurons_CPU_d0;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    calculateLayer4(sc_module_name name);
    SC_HAS_PROCESS(calculateLayer4);

    ~calculateLayer4();

    sc_trace_file* mVcdFile;

    calculateLayer4_Layer3_Weights_CPU* Layer3_Weights_CPU_U;
    generic_tanh_double_s* grp_generic_tanh_double_s_fu_208;
    nerons_dmul_64ns_64ns_64_6_max_dsp_1<1,6,64,64,64>* nerons_dmul_64ns_64ns_64_6_max_dsp_1_U38;
    nerons_hadd_16ns_16ns_16_5_full_dsp_1<1,5,16,16,16>* nerons_hadd_16ns_16ns_16_5_full_dsp_1_U39;
    nerons_hmul_16ns_16ns_16_4_max_dsp_1<1,4,16,16,16>* nerons_hmul_16ns_16ns_16_4_max_dsp_1_U40;
    nerons_hptodp_16ns_64_2_1<1,2,16,64>* nerons_hptodp_16ns_64_2_1_U41;
    nerons_dptohp_64ns_16_2_1<1,2,64,16>* nerons_dptohp_64ns_16_2_1_U42;
    sc_signal< sc_lv<35> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<17> > Layer3_Weights_CPU_address0;
    sc_signal< sc_logic > Layer3_Weights_CPU_ce0;
    sc_signal< sc_lv<16> > Layer3_Weights_CPU_q0;
    sc_signal< sc_lv<64> > grp_fu_219_p2;
    sc_signal< sc_lv<64> > reg_241;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_logic > ap_CS_fsm_state32;
    sc_signal< sc_lv<17> > add_ln42_fu_247_p2;
    sc_signal< sc_lv<17> > add_ln42_reg_390;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<7> > i_fu_259_p2;
    sc_signal< sc_lv<7> > i_reg_398;
    sc_signal< sc_lv<1> > icmp_ln42_fu_253_p2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<11> > add_ln44_fu_270_p2;
    sc_signal< sc_lv<11> > add_ln44_reg_413;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<6> > j_fu_282_p2;
    sc_signal< sc_lv<6> > j_reg_421;
    sc_signal< sc_lv<17> > add_ln47_1_fu_292_p2;
    sc_signal< sc_lv<17> > add_ln47_1_reg_426;
    sc_signal< sc_lv<1> > icmp_ln44_fu_276_p2;
    sc_signal< sc_lv<3> > k_fu_308_p2;
    sc_signal< sc_lv<3> > k_reg_434;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<5> > add_ln47_fu_322_p2;
    sc_signal< sc_lv<5> > add_ln47_reg_439;
    sc_signal< sc_lv<1> > icmp_ln45_fu_302_p2;
    sc_signal< sc_lv<3> > m_fu_338_p2;
    sc_signal< sc_lv<3> > m_reg_448;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<17> > add_ln47_3_fu_357_p2;
    sc_signal< sc_lv<17> > add_ln47_3_reg_453;
    sc_signal< sc_lv<1> > icmp_ln46_fu_332_p2;
    sc_signal< sc_lv<11> > add_ln47_5_fu_371_p2;
    sc_signal< sc_lv<11> > add_ln47_5_reg_458;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<16> > Layer3_Weights_CPU_l_reg_473;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<16> > Layer3_Neurons_CPU_l_reg_478;
    sc_signal< sc_lv<16> > grp_fu_230_p2;
    sc_signal< sc_lv<16> > tmp_7_reg_483;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<16> > grp_fu_225_p2;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<64> > grp_fu_234_p1;
    sc_signal< sc_lv<64> > tmp_reg_493;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<64> > grp_generic_tanh_double_s_fu_208_ap_return;
    sc_signal< sc_lv<64> > tmp_i_reg_498;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_logic > grp_generic_tanh_double_s_fu_208_ap_ready;
    sc_signal< sc_logic > grp_generic_tanh_double_s_fu_208_ap_done;
    sc_signal< sc_lv<16> > grp_fu_238_p1;
    sc_signal< sc_lv<16> > tmp_6_reg_503;
    sc_signal< sc_logic > ap_CS_fsm_state34;
    sc_signal< sc_logic > grp_generic_tanh_double_s_fu_208_ap_start;
    sc_signal< sc_logic > grp_generic_tanh_double_s_fu_208_ap_idle;
    sc_signal< sc_lv<7> > i_0_reg_105;
    sc_signal< sc_logic > ap_CS_fsm_state35;
    sc_signal< sc_lv<17> > phi_mul1_reg_117;
    sc_signal< sc_lv<16> > somme_0_reg_129;
    sc_signal< sc_lv<6> > j_0_reg_139;
    sc_signal< sc_lv<11> > phi_mul_reg_150;
    sc_signal< sc_lv<16> > somme_1_reg_162;
    sc_signal< sc_lv<3> > k_0_reg_174;
    sc_signal< sc_lv<16> > somme_2_reg_185;
    sc_signal< sc_lv<3> > m_0_reg_197;
    sc_signal< sc_logic > grp_generic_tanh_double_s_fu_208_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< sc_lv<64> > zext_ln43_fu_265_p1;
    sc_signal< sc_lv<64> > zext_ln47_fu_377_p1;
    sc_signal< sc_lv<64> > zext_ln47_1_fu_381_p1;
    sc_signal< sc_lv<64> > zext_ln49_fu_385_p1;
    sc_signal< sc_lv<64> > grp_fu_219_p0;
    sc_signal< sc_lv<64> > grp_fu_219_p1;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_logic > ap_CS_fsm_state33;
    sc_signal< sc_lv<17> > zext_ln47_2_fu_288_p1;
    sc_signal< sc_lv<5> > zext_ln45_fu_298_p1;
    sc_signal< sc_lv<5> > shl_ln_fu_314_p3;
    sc_signal< sc_lv<5> > zext_ln47_3_fu_344_p1;
    sc_signal< sc_lv<5> > add_ln47_4_fu_348_p2;
    sc_signal< sc_lv<17> > zext_ln47_4_fu_353_p1;
    sc_signal< sc_lv<5> > zext_ln46_fu_328_p1;
    sc_signal< sc_lv<5> > add_ln47_6_fu_362_p2;
    sc_signal< sc_lv<11> > zext_ln47_5_fu_367_p1;
    sc_signal< sc_lv<35> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<35> ap_ST_fsm_state1;
    static const sc_lv<35> ap_ST_fsm_state2;
    static const sc_lv<35> ap_ST_fsm_state3;
    static const sc_lv<35> ap_ST_fsm_state4;
    static const sc_lv<35> ap_ST_fsm_state5;
    static const sc_lv<35> ap_ST_fsm_state6;
    static const sc_lv<35> ap_ST_fsm_state7;
    static const sc_lv<35> ap_ST_fsm_state8;
    static const sc_lv<35> ap_ST_fsm_state9;
    static const sc_lv<35> ap_ST_fsm_state10;
    static const sc_lv<35> ap_ST_fsm_state11;
    static const sc_lv<35> ap_ST_fsm_state12;
    static const sc_lv<35> ap_ST_fsm_state13;
    static const sc_lv<35> ap_ST_fsm_state14;
    static const sc_lv<35> ap_ST_fsm_state15;
    static const sc_lv<35> ap_ST_fsm_state16;
    static const sc_lv<35> ap_ST_fsm_state17;
    static const sc_lv<35> ap_ST_fsm_state18;
    static const sc_lv<35> ap_ST_fsm_state19;
    static const sc_lv<35> ap_ST_fsm_state20;
    static const sc_lv<35> ap_ST_fsm_state21;
    static const sc_lv<35> ap_ST_fsm_state22;
    static const sc_lv<35> ap_ST_fsm_state23;
    static const sc_lv<35> ap_ST_fsm_state24;
    static const sc_lv<35> ap_ST_fsm_state25;
    static const sc_lv<35> ap_ST_fsm_state26;
    static const sc_lv<35> ap_ST_fsm_state27;
    static const sc_lv<35> ap_ST_fsm_state28;
    static const sc_lv<35> ap_ST_fsm_state29;
    static const sc_lv<35> ap_ST_fsm_state30;
    static const sc_lv<35> ap_ST_fsm_state31;
    static const sc_lv<35> ap_ST_fsm_state32;
    static const sc_lv<35> ap_ST_fsm_state33;
    static const sc_lv<35> ap_ST_fsm_state34;
    static const sc_lv<35> ap_ST_fsm_state35;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_21;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_22;
    static const sc_lv<17> ap_const_lv17_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<64> ap_const_lv64_3FE55555571F7693;
    static const sc_lv<64> ap_const_lv64_3FFB74538EF34D6A;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<17> ap_const_lv17_4E3;
    static const sc_lv<7> ap_const_lv7_64;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<11> ap_const_lv11_19;
    static const sc_lv<6> ap_const_lv6_32;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_Layer3_Neurons_CPU_address0();
    void thread_Layer3_Neurons_CPU_ce0();
    void thread_Layer3_Weights_CPU_address0();
    void thread_Layer3_Weights_CPU_ce0();
    void thread_Layer4_Neurons_CPU_address0();
    void thread_Layer4_Neurons_CPU_ce0();
    void thread_Layer4_Neurons_CPU_d0();
    void thread_Layer4_Neurons_CPU_we0();
    void thread_add_ln42_fu_247_p2();
    void thread_add_ln44_fu_270_p2();
    void thread_add_ln47_1_fu_292_p2();
    void thread_add_ln47_3_fu_357_p2();
    void thread_add_ln47_4_fu_348_p2();
    void thread_add_ln47_5_fu_371_p2();
    void thread_add_ln47_6_fu_362_p2();
    void thread_add_ln47_fu_322_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state25();
    void thread_ap_CS_fsm_state26();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state32();
    void thread_ap_CS_fsm_state33();
    void thread_ap_CS_fsm_state34();
    void thread_ap_CS_fsm_state35();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_grp_fu_219_p0();
    void thread_grp_fu_219_p1();
    void thread_grp_generic_tanh_double_s_fu_208_ap_start();
    void thread_i_fu_259_p2();
    void thread_icmp_ln42_fu_253_p2();
    void thread_icmp_ln44_fu_276_p2();
    void thread_icmp_ln45_fu_302_p2();
    void thread_icmp_ln46_fu_332_p2();
    void thread_j_fu_282_p2();
    void thread_k_fu_308_p2();
    void thread_m_fu_338_p2();
    void thread_shl_ln_fu_314_p3();
    void thread_zext_ln43_fu_265_p1();
    void thread_zext_ln45_fu_298_p1();
    void thread_zext_ln46_fu_328_p1();
    void thread_zext_ln47_1_fu_381_p1();
    void thread_zext_ln47_2_fu_288_p1();
    void thread_zext_ln47_3_fu_344_p1();
    void thread_zext_ln47_4_fu_353_p1();
    void thread_zext_ln47_5_fu_367_p1();
    void thread_zext_ln47_fu_377_p1();
    void thread_zext_ln49_fu_385_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif