// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _calculateLayer3_HH_
#define _calculateLayer3_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "generic_tanh_double_s.h"
#include "nerons_dmul_64ns_64ns_64_6_max_dsp_1.h"
#include "nerons_hadd_16ns_16ns_16_5_full_dsp_1.h"
#include "nerons_hmul_16ns_16ns_16_4_max_dsp_1.h"
#include "nerons_hptodp_16ns_64_2_1.h"
#include "nerons_dptohp_64ns_16_2_1.h"
#include "calculateLayer3_Layer2_Weights_CPU.h"

namespace ap_rtl {

struct calculateLayer3 : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<10> > Layer2_Neurons_CPU_address0;
    sc_out< sc_logic > Layer2_Neurons_CPU_ce0;
    sc_in< sc_lv<16> > Layer2_Neurons_CPU_q0;
    sc_out< sc_lv<10> > Layer2_Neurons_CPU_address1;
    sc_out< sc_logic > Layer2_Neurons_CPU_ce1;
    sc_in< sc_lv<16> > Layer2_Neurons_CPU_q1;
    sc_out< sc_lv<11> > Layer3_Neurons_CPU_address0;
    sc_out< sc_logic > Layer3_Neurons_CPU_ce0;
    sc_out< sc_logic > Layer3_Neurons_CPU_we0;
    sc_out< sc_lv<16> > Layer3_Neurons_CPU_d0;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    calculateLayer3(sc_module_name name);
    SC_HAS_PROCESS(calculateLayer3);

    ~calculateLayer3();

    sc_trace_file* mVcdFile;

    calculateLayer3_Layer2_Weights_CPU* Layer2_Weights_CPU_U;
    generic_tanh_double_s* grp_generic_tanh_double_s_fu_322;
    nerons_dmul_64ns_64ns_64_6_max_dsp_1<1,6,64,64,64>* nerons_dmul_64ns_64ns_64_6_max_dsp_1_U24;
    nerons_hadd_16ns_16ns_16_5_full_dsp_1<1,5,16,16,16>* nerons_hadd_16ns_16ns_16_5_full_dsp_1_U25;
    nerons_hmul_16ns_16ns_16_4_max_dsp_1<1,4,16,16,16>* nerons_hmul_16ns_16ns_16_4_max_dsp_1_U26;
    nerons_hmul_16ns_16ns_16_4_max_dsp_1<1,4,16,16,16>* nerons_hmul_16ns_16ns_16_4_max_dsp_1_U27;
    nerons_hmul_16ns_16ns_16_4_max_dsp_1<1,4,16,16,16>* nerons_hmul_16ns_16ns_16_4_max_dsp_1_U28;
    nerons_hptodp_16ns_64_2_1<1,2,16,64>* nerons_hptodp_16ns_64_2_1_U29;
    nerons_dptohp_64ns_16_2_1<1,2,64,16>* nerons_dptohp_64ns_16_2_1_U30;
    sc_signal< sc_lv<61> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<13> > Layer2_Weights_CPU_address0;
    sc_signal< sc_logic > Layer2_Weights_CPU_ce0;
    sc_signal< sc_lv<16> > Layer2_Weights_CPU_q0;
    sc_signal< sc_lv<13> > Layer2_Weights_CPU_address1;
    sc_signal< sc_logic > Layer2_Weights_CPU_ce1;
    sc_signal< sc_lv<16> > Layer2_Weights_CPU_q1;
    sc_signal< sc_lv<13> > Layer2_Weights_CPU_address2;
    sc_signal< sc_logic > Layer2_Weights_CPU_ce2;
    sc_signal< sc_lv<16> > Layer2_Weights_CPU_q2;
    sc_signal< sc_lv<16> > grp_fu_339_p2;
    sc_signal< sc_lv<16> > reg_363;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_logic > ap_CS_fsm_state28;
    sc_signal< sc_logic > ap_CS_fsm_state33;
    sc_signal< sc_logic > ap_CS_fsm_state38;
    sc_signal< sc_lv<64> > grp_fu_333_p2;
    sc_signal< sc_lv<64> > reg_368;
    sc_signal< sc_logic > ap_CS_fsm_state50;
    sc_signal< sc_logic > ap_CS_fsm_state58;
    sc_signal< sc_lv<11> > add_ln35_3_fu_374_p2;
    sc_signal< sc_lv<11> > add_ln35_3_reg_857;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<13> > add_ln35_4_fu_380_p2;
    sc_signal< sc_lv<13> > add_ln35_4_reg_862;
    sc_signal< sc_lv<6> > i_fu_392_p2;
    sc_signal< sc_lv<6> > i_reg_870;
    sc_signal< sc_lv<1> > icmp_ln20_fu_386_p2;
    sc_signal< sc_lv<32> > zext_ln28_2_fu_409_p1;
    sc_signal< sc_lv<32> > zext_ln28_2_reg_880;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<15> > zext_ln28_3_fu_413_p1;
    sc_signal< sc_lv<15> > zext_ln28_3_reg_885;
    sc_signal< sc_lv<15> > zext_ln30_2_fu_423_p1;
    sc_signal< sc_lv<15> > zext_ln30_2_reg_893;
    sc_signal< sc_lv<16> > somme_reg_898;
    sc_signal< sc_lv<3> > j_fu_437_p2;
    sc_signal< sc_lv<3> > j_reg_906;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<4> > shl_ln28_1_fu_443_p3;
    sc_signal< sc_lv<4> > shl_ln28_1_reg_911;
    sc_signal< sc_lv<1> > icmp_ln21_fu_431_p2;
    sc_signal< sc_lv<11> > zext_ln35_1_fu_465_p1;
    sc_signal< sc_lv<11> > zext_ln35_1_reg_916;
    sc_signal< sc_lv<11> > zext_ln22_fu_469_p1;
    sc_signal< sc_lv<11> > zext_ln22_reg_921;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<3> > k_fu_479_p2;
    sc_signal< sc_lv<3> > k_reg_929;
    sc_signal< sc_lv<8> > zext_ln28_4_fu_493_p1;
    sc_signal< sc_lv<8> > zext_ln28_4_reg_934;
    sc_signal< sc_lv<1> > icmp_ln22_fu_473_p2;
    sc_signal< sc_lv<4> > zext_ln25_fu_497_p1;
    sc_signal< sc_lv<4> > zext_ln25_reg_940;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<3> > m_fu_507_p2;
    sc_signal< sc_lv<3> > m_reg_948;
    sc_signal< sc_lv<5> > shl_ln28_2_fu_513_p3;
    sc_signal< sc_lv<5> > shl_ln28_2_reg_953;
    sc_signal< sc_lv<1> > icmp_ln25_fu_501_p2;
    sc_signal< sc_lv<8> > mul_ln28_fu_530_p2;
    sc_signal< sc_lv<8> > mul_ln28_reg_958;
    sc_signal< sc_lv<9> > zext_ln29_2_fu_541_p1;
    sc_signal< sc_lv<9> > zext_ln29_2_reg_963;
    sc_signal< sc_lv<10> > zext_ln31_2_fu_545_p1;
    sc_signal< sc_lv<10> > zext_ln31_2_reg_970;
    sc_signal< sc_lv<11> > add_ln35_1_fu_554_p2;
    sc_signal< sc_lv<11> > add_ln35_1_reg_976;
    sc_signal< sc_lv<9> > zext_ln26_1_fu_563_p1;
    sc_signal< sc_lv<9> > zext_ln26_1_reg_981;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<8> > zext_ln26_3_fu_571_p1;
    sc_signal< sc_lv<8> > zext_ln26_3_reg_987;
    sc_signal< sc_lv<3> > n_fu_581_p2;
    sc_signal< sc_lv<3> > n_reg_995;
    sc_signal< sc_lv<5> > add_ln28_1_fu_596_p2;
    sc_signal< sc_lv<5> > add_ln28_1_reg_1000;
    sc_signal< sc_lv<1> > icmp_ln26_fu_575_p2;
    sc_signal< sc_lv<8> > add_ln28_4_fu_606_p2;
    sc_signal< sc_lv<8> > add_ln28_4_reg_1006;
    sc_signal< sc_lv<10> > add_ln31_3_fu_625_p2;
    sc_signal< sc_lv<10> > add_ln31_3_reg_1011;
    sc_signal< sc_lv<10> > add_ln32_3_fu_636_p2;
    sc_signal< sc_lv<10> > add_ln32_3_reg_1016;
    sc_signal< sc_lv<9> > sub_ln28_fu_663_p2;
    sc_signal< sc_lv<9> > sub_ln28_reg_1021;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<15> > add_ln30_fu_730_p2;
    sc_signal< sc_lv<15> > add_ln30_reg_1048;
    sc_signal< sc_lv<16> > Layer2_Weights_CPU_l_reg_1053;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<16> > Layer2_Neurons_CPU_l_reg_1058;
    sc_signal< sc_lv<16> > Layer2_Weights_CPU_l_1_reg_1063;
    sc_signal< sc_lv<16> > Layer2_Neurons_CPU_l_1_reg_1068;
    sc_signal< sc_lv<9> > add_ln33_3_fu_767_p2;
    sc_signal< sc_lv<9> > add_ln33_3_reg_1088;
    sc_signal< sc_lv<16> > Layer2_Weights_CPU_l_2_reg_1093;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<16> > Layer2_Neurons_CPU_l_2_reg_1098;
    sc_signal< sc_lv<16> > Layer2_Neurons_CPU_l_3_reg_1108;
    sc_signal< sc_lv<16> > Layer2_Weights_CPU_l_3_reg_1133;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<16> > Layer2_Weights_CPU_l_4_reg_1138;
    sc_signal< sc_lv<16> > Layer2_Neurons_CPU_l_4_reg_1143;
    sc_signal< sc_lv<16> > Layer2_Weights_CPU_l_5_reg_1148;
    sc_signal< sc_lv<16> > Layer2_Neurons_CPU_l_5_reg_1153;
    sc_signal< sc_lv<16> > grp_fu_344_p2;
    sc_signal< sc_lv<16> > tmp_1_reg_1158;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<16> > grp_fu_348_p2;
    sc_signal< sc_lv<16> > tmp_2_reg_1163;
    sc_signal< sc_lv<16> > tmp_3_reg_1168;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<16> > tmp_4_reg_1173;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<16> > tmp_5_reg_1178;
    sc_signal< sc_lv<16> > grp_fu_352_p2;
    sc_signal< sc_lv<16> > tmp_6_reg_1183;
    sc_signal< sc_logic > ap_CS_fsm_state43;
    sc_signal< sc_lv<64> > grp_fu_356_p1;
    sc_signal< sc_lv<64> > tmp_reg_1193;
    sc_signal< sc_logic > ap_CS_fsm_state44;
    sc_signal< sc_lv<64> > grp_generic_tanh_double_s_fu_322_ap_return;
    sc_signal< sc_lv<64> > tmp_i_reg_1198;
    sc_signal< sc_logic > ap_CS_fsm_state52;
    sc_signal< sc_logic > grp_generic_tanh_double_s_fu_322_ap_ready;
    sc_signal< sc_logic > grp_generic_tanh_double_s_fu_322_ap_done;
    sc_signal< sc_lv<16> > grp_fu_360_p1;
    sc_signal< sc_lv<16> > tmp_s_reg_1203;
    sc_signal< sc_logic > ap_CS_fsm_state60;
    sc_signal< sc_logic > grp_generic_tanh_double_s_fu_322_ap_start;
    sc_signal< sc_logic > grp_generic_tanh_double_s_fu_322_ap_idle;
    sc_signal< sc_lv<6> > i_0_reg_221;
    sc_signal< sc_lv<13> > phi_mul_reg_232;
    sc_signal< sc_lv<11> > phi_mul1_reg_244;
    sc_signal< sc_lv<3> > j_0_reg_256;
    sc_signal< sc_lv<3> > k_0_reg_267;
    sc_signal< sc_logic > ap_CS_fsm_state61;
    sc_signal< sc_lv<16> > somme_0_reg_278;
    sc_signal< sc_lv<3> > m_0_reg_288;
    sc_signal< sc_lv<16> > somme_1_reg_299;
    sc_signal< sc_lv<3> > n_0_reg_311;
    sc_signal< sc_logic > grp_generic_tanh_double_s_fu_322_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state51;
    sc_signal< sc_lv<64> > zext_ln23_fu_398_p1;
    sc_signal< sc_lv<64> > zext_ln28_fu_686_p1;
    sc_signal< sc_lv<64> > zext_ln28_1_fu_691_p1;
    sc_signal< sc_lv<64> > zext_ln29_fu_706_p1;
    sc_signal< sc_lv<64> > zext_ln29_1_fu_725_p1;
    sc_signal< sc_lv<64> > zext_ln30_fu_738_p1;
    sc_signal< sc_lv<64> > zext_ln30_1_fu_753_p1;
    sc_signal< sc_lv<64> > zext_ln31_1_fu_758_p1;
    sc_signal< sc_lv<64> > zext_ln31_fu_790_p1;
    sc_signal< sc_lv<64> > zext_ln32_fu_813_p1;
    sc_signal< sc_lv<64> > zext_ln32_1_fu_818_p1;
    sc_signal< sc_lv<64> > zext_ln33_fu_840_p1;
    sc_signal< sc_lv<64> > zext_ln33_1_fu_848_p1;
    sc_signal< sc_lv<64> > zext_ln35_fu_853_p1;
    sc_signal< sc_lv<64> > grp_fu_333_p0;
    sc_signal< sc_lv<64> > grp_fu_333_p1;
    sc_signal< sc_logic > ap_CS_fsm_state45;
    sc_signal< sc_logic > ap_CS_fsm_state53;
    sc_signal< sc_lv<16> > grp_fu_339_p0;
    sc_signal< sc_lv<16> > grp_fu_339_p1;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_logic > ap_CS_fsm_state29;
    sc_signal< sc_logic > ap_CS_fsm_state34;
    sc_signal< sc_logic > ap_CS_fsm_state39;
    sc_signal< sc_lv<16> > grp_fu_344_p0;
    sc_signal< sc_lv<16> > grp_fu_344_p1;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<16> > grp_fu_348_p0;
    sc_signal< sc_lv<16> > grp_fu_348_p1;
    sc_signal< sc_logic > ap_CS_fsm_state59;
    sc_signal< sc_lv<13> > or_ln28_fu_403_p2;
    sc_signal< sc_lv<13> > or_ln30_fu_417_p2;
    sc_signal< sc_lv<5> > zext_ln21_fu_427_p1;
    sc_signal< sc_lv<5> > shl_ln_fu_451_p3;
    sc_signal< sc_lv<5> > add_ln35_fu_459_p2;
    sc_signal< sc_lv<4> > shl_ln1_fu_485_p3;
    sc_signal< sc_lv<4> > add_ln28_fu_521_p2;
    sc_signal< sc_lv<4> > mul_ln28_fu_530_p0;
    sc_signal< sc_lv<8> > add_ln29_1_fu_536_p2;
    sc_signal< sc_lv<11> > add_ln35_2_fu_549_p2;
    sc_signal< sc_lv<4> > zext_ln26_2_fu_567_p1;
    sc_signal< sc_lv<4> > add_ln28_3_fu_587_p2;
    sc_signal< sc_lv<5> > zext_ln28_6_fu_592_p1;
    sc_signal< sc_lv<8> > add_ln28_5_fu_601_p2;
    sc_signal< sc_lv<4> > add_ln31_2_fu_611_p2;
    sc_signal< sc_lv<9> > sext_ln31_2_fu_617_p1;
    sc_signal< sc_lv<10> > zext_ln31_3_fu_621_p1;
    sc_signal< sc_lv<10> > zext_ln26_fu_559_p1;
    sc_signal< sc_lv<10> > add_ln32_2_fu_630_p2;
    sc_signal< sc_lv<8> > shl_ln28_3_fu_641_p3;
    sc_signal< sc_lv<6> > shl_ln28_4_fu_652_p3;
    sc_signal< sc_lv<9> > zext_ln28_7_fu_648_p1;
    sc_signal< sc_lv<9> > zext_ln28_8_fu_659_p1;
    sc_signal< sc_lv<15> > sext_ln28_1_fu_673_p1;
    sc_signal< sc_lv<15> > add_ln28_2_fu_677_p2;
    sc_signal< sc_lv<32> > sext_ln28_2_fu_682_p1;
    sc_signal< sc_lv<32> > sext_ln28_fu_669_p1;
    sc_signal< sc_lv<32> > or_ln29_fu_695_p2;
    sc_signal< sc_lv<32> > add_ln29_fu_701_p2;
    sc_signal< sc_lv<8> > add_ln29_2_fu_711_p2;
    sc_signal< sc_lv<9> > zext_ln29_3_fu_716_p1;
    sc_signal< sc_lv<9> > add_ln29_3_fu_720_p2;
    sc_signal< sc_lv<32> > sext_ln30_fu_735_p1;
    sc_signal< sc_lv<9> > add_ln30_1_fu_743_p2;
    sc_signal< sc_lv<9> > add_ln30_2_fu_748_p2;
    sc_signal< sc_lv<9> > add_ln33_2_fu_762_p2;
    sc_signal< sc_lv<9> > add_ln31_fu_772_p2;
    sc_signal< sc_lv<15> > sext_ln31_fu_777_p1;
    sc_signal< sc_lv<15> > add_ln31_1_fu_781_p2;
    sc_signal< sc_lv<32> > sext_ln31_1_fu_786_p1;
    sc_signal< sc_lv<9> > add_ln32_fu_795_p2;
    sc_signal< sc_lv<15> > sext_ln32_fu_800_p1;
    sc_signal< sc_lv<15> > add_ln32_1_fu_804_p2;
    sc_signal< sc_lv<32> > sext_ln32_1_fu_809_p1;
    sc_signal< sc_lv<9> > add_ln33_fu_822_p2;
    sc_signal< sc_lv<15> > sext_ln33_fu_827_p1;
    sc_signal< sc_lv<15> > add_ln33_1_fu_831_p2;
    sc_signal< sc_lv<32> > sext_ln33_1_fu_836_p1;
    sc_signal< sc_lv<10> > sext_ln33_2_fu_845_p1;
    sc_signal< sc_lv<61> > ap_NS_fsm;
    sc_signal< sc_lv<8> > mul_ln28_fu_530_p00;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<61> ap_ST_fsm_state1;
    static const sc_lv<61> ap_ST_fsm_state2;
    static const sc_lv<61> ap_ST_fsm_state3;
    static const sc_lv<61> ap_ST_fsm_state4;
    static const sc_lv<61> ap_ST_fsm_state5;
    static const sc_lv<61> ap_ST_fsm_state6;
    static const sc_lv<61> ap_ST_fsm_state7;
    static const sc_lv<61> ap_ST_fsm_state8;
    static const sc_lv<61> ap_ST_fsm_state9;
    static const sc_lv<61> ap_ST_fsm_state10;
    static const sc_lv<61> ap_ST_fsm_state11;
    static const sc_lv<61> ap_ST_fsm_state12;
    static const sc_lv<61> ap_ST_fsm_state13;
    static const sc_lv<61> ap_ST_fsm_state14;
    static const sc_lv<61> ap_ST_fsm_state15;
    static const sc_lv<61> ap_ST_fsm_state16;
    static const sc_lv<61> ap_ST_fsm_state17;
    static const sc_lv<61> ap_ST_fsm_state18;
    static const sc_lv<61> ap_ST_fsm_state19;
    static const sc_lv<61> ap_ST_fsm_state20;
    static const sc_lv<61> ap_ST_fsm_state21;
    static const sc_lv<61> ap_ST_fsm_state22;
    static const sc_lv<61> ap_ST_fsm_state23;
    static const sc_lv<61> ap_ST_fsm_state24;
    static const sc_lv<61> ap_ST_fsm_state25;
    static const sc_lv<61> ap_ST_fsm_state26;
    static const sc_lv<61> ap_ST_fsm_state27;
    static const sc_lv<61> ap_ST_fsm_state28;
    static const sc_lv<61> ap_ST_fsm_state29;
    static const sc_lv<61> ap_ST_fsm_state30;
    static const sc_lv<61> ap_ST_fsm_state31;
    static const sc_lv<61> ap_ST_fsm_state32;
    static const sc_lv<61> ap_ST_fsm_state33;
    static const sc_lv<61> ap_ST_fsm_state34;
    static const sc_lv<61> ap_ST_fsm_state35;
    static const sc_lv<61> ap_ST_fsm_state36;
    static const sc_lv<61> ap_ST_fsm_state37;
    static const sc_lv<61> ap_ST_fsm_state38;
    static const sc_lv<61> ap_ST_fsm_state39;
    static const sc_lv<61> ap_ST_fsm_state40;
    static const sc_lv<61> ap_ST_fsm_state41;
    static const sc_lv<61> ap_ST_fsm_state42;
    static const sc_lv<61> ap_ST_fsm_state43;
    static const sc_lv<61> ap_ST_fsm_state44;
    static const sc_lv<61> ap_ST_fsm_state45;
    static const sc_lv<61> ap_ST_fsm_state46;
    static const sc_lv<61> ap_ST_fsm_state47;
    static const sc_lv<61> ap_ST_fsm_state48;
    static const sc_lv<61> ap_ST_fsm_state49;
    static const sc_lv<61> ap_ST_fsm_state50;
    static const sc_lv<61> ap_ST_fsm_state51;
    static const sc_lv<61> ap_ST_fsm_state52;
    static const sc_lv<61> ap_ST_fsm_state53;
    static const sc_lv<61> ap_ST_fsm_state54;
    static const sc_lv<61> ap_ST_fsm_state55;
    static const sc_lv<61> ap_ST_fsm_state56;
    static const sc_lv<61> ap_ST_fsm_state57;
    static const sc_lv<61> ap_ST_fsm_state58;
    static const sc_lv<61> ap_ST_fsm_state59;
    static const sc_lv<61> ap_ST_fsm_state60;
    static const sc_lv<61> ap_ST_fsm_state61;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_25;
    static const sc_lv<32> ap_const_lv32_31;
    static const sc_lv<32> ap_const_lv32_39;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_2A;
    static const sc_lv<32> ap_const_lv32_2B;
    static const sc_lv<32> ap_const_lv32_33;
    static const sc_lv<32> ap_const_lv32_3B;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<13> ap_const_lv13_0;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_3C;
    static const sc_lv<32> ap_const_lv32_32;
    static const sc_lv<64> ap_const_lv64_3FE55555571F7693;
    static const sc_lv<64> ap_const_lv64_3FFB74538EF34D6A;
    static const sc_lv<32> ap_const_lv32_2C;
    static const sc_lv<32> ap_const_lv32_34;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_21;
    static const sc_lv<32> ap_const_lv32_26;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_3A;
    static const sc_lv<11> ap_const_lv11_19;
    static const sc_lv<13> ap_const_lv13_9C;
    static const sc_lv<6> ap_const_lv6_32;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<13> ap_const_lv13_1;
    static const sc_lv<13> ap_const_lv13_3;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<8> ap_const_lv8_D;
    static const sc_lv<4> ap_const_lv4_B;
    static const sc_lv<10> ap_const_lv10_2A4;
    static const sc_lv<8> ap_const_lv8_A9;
    static const sc_lv<9> ap_const_lv9_152;
    static const sc_lv<9> ap_const_lv9_14D;
    static const sc_lv<9> ap_const_lv9_3;
    static const sc_lv<9> ap_const_lv9_4;
    static const sc_lv<9> ap_const_lv9_5;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_Layer2_Neurons_CPU_address0();
    void thread_Layer2_Neurons_CPU_address1();
    void thread_Layer2_Neurons_CPU_ce0();
    void thread_Layer2_Neurons_CPU_ce1();
    void thread_Layer2_Weights_CPU_address0();
    void thread_Layer2_Weights_CPU_address1();
    void thread_Layer2_Weights_CPU_address2();
    void thread_Layer2_Weights_CPU_ce0();
    void thread_Layer2_Weights_CPU_ce1();
    void thread_Layer2_Weights_CPU_ce2();
    void thread_Layer3_Neurons_CPU_address0();
    void thread_Layer3_Neurons_CPU_ce0();
    void thread_Layer3_Neurons_CPU_d0();
    void thread_Layer3_Neurons_CPU_we0();
    void thread_add_ln28_1_fu_596_p2();
    void thread_add_ln28_2_fu_677_p2();
    void thread_add_ln28_3_fu_587_p2();
    void thread_add_ln28_4_fu_606_p2();
    void thread_add_ln28_5_fu_601_p2();
    void thread_add_ln28_fu_521_p2();
    void thread_add_ln29_1_fu_536_p2();
    void thread_add_ln29_2_fu_711_p2();
    void thread_add_ln29_3_fu_720_p2();
    void thread_add_ln29_fu_701_p2();
    void thread_add_ln30_1_fu_743_p2();
    void thread_add_ln30_2_fu_748_p2();
    void thread_add_ln30_fu_730_p2();
    void thread_add_ln31_1_fu_781_p2();
    void thread_add_ln31_2_fu_611_p2();
    void thread_add_ln31_3_fu_625_p2();
    void thread_add_ln31_fu_772_p2();
    void thread_add_ln32_1_fu_804_p2();
    void thread_add_ln32_2_fu_630_p2();
    void thread_add_ln32_3_fu_636_p2();
    void thread_add_ln32_fu_795_p2();
    void thread_add_ln33_1_fu_831_p2();
    void thread_add_ln33_2_fu_762_p2();
    void thread_add_ln33_3_fu_767_p2();
    void thread_add_ln33_fu_822_p2();
    void thread_add_ln35_1_fu_554_p2();
    void thread_add_ln35_2_fu_549_p2();
    void thread_add_ln35_3_fu_374_p2();
    void thread_add_ln35_4_fu_380_p2();
    void thread_add_ln35_fu_459_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state28();
    void thread_ap_CS_fsm_state29();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state33();
    void thread_ap_CS_fsm_state34();
    void thread_ap_CS_fsm_state38();
    void thread_ap_CS_fsm_state39();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state43();
    void thread_ap_CS_fsm_state44();
    void thread_ap_CS_fsm_state45();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state50();
    void thread_ap_CS_fsm_state51();
    void thread_ap_CS_fsm_state52();
    void thread_ap_CS_fsm_state53();
    void thread_ap_CS_fsm_state58();
    void thread_ap_CS_fsm_state59();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state60();
    void thread_ap_CS_fsm_state61();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_grp_fu_333_p0();
    void thread_grp_fu_333_p1();
    void thread_grp_fu_339_p0();
    void thread_grp_fu_339_p1();
    void thread_grp_fu_344_p0();
    void thread_grp_fu_344_p1();
    void thread_grp_fu_348_p0();
    void thread_grp_fu_348_p1();
    void thread_grp_generic_tanh_double_s_fu_322_ap_start();
    void thread_i_fu_392_p2();
    void thread_icmp_ln20_fu_386_p2();
    void thread_icmp_ln21_fu_431_p2();
    void thread_icmp_ln22_fu_473_p2();
    void thread_icmp_ln25_fu_501_p2();
    void thread_icmp_ln26_fu_575_p2();
    void thread_j_fu_437_p2();
    void thread_k_fu_479_p2();
    void thread_m_fu_507_p2();
    void thread_mul_ln28_fu_530_p0();
    void thread_mul_ln28_fu_530_p00();
    void thread_mul_ln28_fu_530_p2();
    void thread_n_fu_581_p2();
    void thread_or_ln28_fu_403_p2();
    void thread_or_ln29_fu_695_p2();
    void thread_or_ln30_fu_417_p2();
    void thread_sext_ln28_1_fu_673_p1();
    void thread_sext_ln28_2_fu_682_p1();
    void thread_sext_ln28_fu_669_p1();
    void thread_sext_ln30_fu_735_p1();
    void thread_sext_ln31_1_fu_786_p1();
    void thread_sext_ln31_2_fu_617_p1();
    void thread_sext_ln31_fu_777_p1();
    void thread_sext_ln32_1_fu_809_p1();
    void thread_sext_ln32_fu_800_p1();
    void thread_sext_ln33_1_fu_836_p1();
    void thread_sext_ln33_2_fu_845_p1();
    void thread_sext_ln33_fu_827_p1();
    void thread_shl_ln1_fu_485_p3();
    void thread_shl_ln28_1_fu_443_p3();
    void thread_shl_ln28_2_fu_513_p3();
    void thread_shl_ln28_3_fu_641_p3();
    void thread_shl_ln28_4_fu_652_p3();
    void thread_shl_ln_fu_451_p3();
    void thread_sub_ln28_fu_663_p2();
    void thread_zext_ln21_fu_427_p1();
    void thread_zext_ln22_fu_469_p1();
    void thread_zext_ln23_fu_398_p1();
    void thread_zext_ln25_fu_497_p1();
    void thread_zext_ln26_1_fu_563_p1();
    void thread_zext_ln26_2_fu_567_p1();
    void thread_zext_ln26_3_fu_571_p1();
    void thread_zext_ln26_fu_559_p1();
    void thread_zext_ln28_1_fu_691_p1();
    void thread_zext_ln28_2_fu_409_p1();
    void thread_zext_ln28_3_fu_413_p1();
    void thread_zext_ln28_4_fu_493_p1();
    void thread_zext_ln28_6_fu_592_p1();
    void thread_zext_ln28_7_fu_648_p1();
    void thread_zext_ln28_8_fu_659_p1();
    void thread_zext_ln28_fu_686_p1();
    void thread_zext_ln29_1_fu_725_p1();
    void thread_zext_ln29_2_fu_541_p1();
    void thread_zext_ln29_3_fu_716_p1();
    void thread_zext_ln29_fu_706_p1();
    void thread_zext_ln30_1_fu_753_p1();
    void thread_zext_ln30_2_fu_423_p1();
    void thread_zext_ln30_fu_738_p1();
    void thread_zext_ln31_1_fu_758_p1();
    void thread_zext_ln31_2_fu_545_p1();
    void thread_zext_ln31_3_fu_621_p1();
    void thread_zext_ln31_fu_790_p1();
    void thread_zext_ln32_1_fu_818_p1();
    void thread_zext_ln32_fu_813_p1();
    void thread_zext_ln33_1_fu_848_p1();
    void thread_zext_ln33_fu_840_p1();
    void thread_zext_ln35_1_fu_465_p1();
    void thread_zext_ln35_fu_853_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
