set moduleName nerons
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {nerons}
set C_modelType { void 0 }
set C_modelArgList {
	{ Layer2_Neurons_CPU float 32 regular {array 1014 { 1 1 } 1 1 }  }
	{ Layer5_Neurons_CPU double 64 regular {array 10 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "Layer2_Neurons_CPU", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "Layer2_Neurons_CPU","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1013,"step" : 1}]}]}]} , 
 	{ "Name" : "Layer5_Neurons_CPU", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "Layer5_Neurons_CPU","cData": "double","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 9,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 16
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ Layer2_Neurons_CPU_address0 sc_out sc_lv 10 signal 0 } 
	{ Layer2_Neurons_CPU_ce0 sc_out sc_logic 1 signal 0 } 
	{ Layer2_Neurons_CPU_q0 sc_in sc_lv 32 signal 0 } 
	{ Layer2_Neurons_CPU_address1 sc_out sc_lv 10 signal 0 } 
	{ Layer2_Neurons_CPU_ce1 sc_out sc_logic 1 signal 0 } 
	{ Layer2_Neurons_CPU_q1 sc_in sc_lv 32 signal 0 } 
	{ Layer5_Neurons_CPU_address0 sc_out sc_lv 4 signal 1 } 
	{ Layer5_Neurons_CPU_ce0 sc_out sc_logic 1 signal 1 } 
	{ Layer5_Neurons_CPU_we0 sc_out sc_logic 1 signal 1 } 
	{ Layer5_Neurons_CPU_d0 sc_out sc_lv 64 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "Layer2_Neurons_CPU_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "Layer2_Neurons_CPU", "role": "address0" }} , 
 	{ "name": "Layer2_Neurons_CPU_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Layer2_Neurons_CPU", "role": "ce0" }} , 
 	{ "name": "Layer2_Neurons_CPU_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Layer2_Neurons_CPU", "role": "q0" }} , 
 	{ "name": "Layer2_Neurons_CPU_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "Layer2_Neurons_CPU", "role": "address1" }} , 
 	{ "name": "Layer2_Neurons_CPU_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Layer2_Neurons_CPU", "role": "ce1" }} , 
 	{ "name": "Layer2_Neurons_CPU_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Layer2_Neurons_CPU", "role": "q1" }} , 
 	{ "name": "Layer5_Neurons_CPU_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Layer5_Neurons_CPU", "role": "address0" }} , 
 	{ "name": "Layer5_Neurons_CPU_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Layer5_Neurons_CPU", "role": "ce0" }} , 
 	{ "name": "Layer5_Neurons_CPU_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Layer5_Neurons_CPU", "role": "we0" }} , 
 	{ "name": "Layer5_Neurons_CPU_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "Layer5_Neurons_CPU", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "26", "47", "61", "62", "63", "64"],
		"CDFG" : "nerons",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2832706", "EstimateLatencyMax" : "2933346",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_calculateLayer3_fu_157"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_calculateLayer4_fu_173"},
			{"State" : "ap_ST_fsm_state26", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_generic_tanh_double_s_fu_187"}],
		"Port" : [
			{"Name" : "Layer2_Neurons_CPU", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_calculateLayer3_fu_157", "Port" : "Layer2_Neurons_CPU"}]},
			{"Name" : "Layer5_Neurons_CPU", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "Layer2_Weights_CPU", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_calculateLayer3_fu_157", "Port" : "Layer2_Weights_CPU"}]},
			{"Name" : "table_exp_Z1_array_s", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_calculateLayer4_fu_173", "Port" : "table_exp_Z1_array_s"},
					{"ID" : "4", "SubInstance" : "grp_calculateLayer3_fu_157", "Port" : "table_exp_Z1_array_s"},
					{"ID" : "47", "SubInstance" : "grp_generic_tanh_double_s_fu_187", "Port" : "table_exp_Z1_array_s"}]},
			{"Name" : "table_f_Z3_array_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_calculateLayer4_fu_173", "Port" : "table_f_Z3_array_V"},
					{"ID" : "4", "SubInstance" : "grp_calculateLayer3_fu_157", "Port" : "table_f_Z3_array_V"},
					{"ID" : "47", "SubInstance" : "grp_generic_tanh_double_s_fu_187", "Port" : "table_f_Z3_array_V"}]},
			{"Name" : "table_f_Z2_array_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_calculateLayer4_fu_173", "Port" : "table_f_Z2_array_V"},
					{"ID" : "4", "SubInstance" : "grp_calculateLayer3_fu_157", "Port" : "table_f_Z2_array_V"},
					{"ID" : "47", "SubInstance" : "grp_generic_tanh_double_s_fu_187", "Port" : "table_f_Z2_array_V"}]},
			{"Name" : "Layer3_Weights_CPU", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_calculateLayer4_fu_173", "Port" : "Layer3_Weights_CPU"}]},
			{"Name" : "Layer4_Weights_CPU", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Layer4_Weights_CPU_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Layer3_Neurons_CPU_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Layer4_Neurons_CPU_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer3_fu_157", "Parent" : "0", "Child" : ["5", "6", "20", "21", "22", "23", "24", "25"],
		"CDFG" : "calculateLayer3",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1194401", "EstimateLatencyMax" : "1286901",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state52", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_generic_tanh_double_s_fu_318"}],
		"Port" : [
			{"Name" : "Layer2_Neurons_CPU", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Layer3_Neurons_CPU", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "Layer2_Weights_CPU", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "table_exp_Z1_array_s", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_generic_tanh_double_s_fu_318", "Port" : "table_exp_Z1_array_s"}]},
			{"Name" : "table_f_Z3_array_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_generic_tanh_double_s_fu_318", "Port" : "table_f_Z3_array_V"}]},
			{"Name" : "table_f_Z2_array_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_generic_tanh_double_s_fu_318", "Port" : "table_f_Z2_array_V"}]}]},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer3_fu_157.Layer2_Weights_CPU_U", "Parent" : "4"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer3_fu_157.grp_generic_tanh_double_s_fu_318", "Parent" : "4", "Child" : ["7", "16", "17", "18", "19"],
		"CDFG" : "generic_tanh_double_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "75",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "t_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "table_exp_Z1_array_s", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "grp_exp_generic_double_s_fu_87", "Port" : "table_exp_Z1_array_s"}]},
			{"Name" : "table_f_Z3_array_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "grp_exp_generic_double_s_fu_87", "Port" : "table_f_Z3_array_V"}]},
			{"Name" : "table_f_Z2_array_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "grp_exp_generic_double_s_fu_87", "Port" : "table_f_Z2_array_V"}]}]},
	{"ID" : "7", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer3_fu_157.grp_generic_tanh_double_s_fu_318.grp_exp_generic_double_s_fu_87", "Parent" : "6", "Child" : ["8", "9", "10", "11", "12", "13", "14", "15"],
		"CDFG" : "exp_generic_double_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "19", "EstimateLatencyMin" : "19", "EstimateLatencyMax" : "19",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "table_exp_Z1_array_s", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "table_f_Z3_array_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "table_f_Z2_array_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "8", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer3_fu_157.grp_generic_tanh_double_s_fu_318.grp_exp_generic_double_s_fu_87.table_exp_Z1_array_s_U", "Parent" : "7"},
	{"ID" : "9", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer3_fu_157.grp_generic_tanh_double_s_fu_318.grp_exp_generic_double_s_fu_87.table_f_Z3_array_V_U", "Parent" : "7"},
	{"ID" : "10", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer3_fu_157.grp_generic_tanh_double_s_fu_318.grp_exp_generic_double_s_fu_87.table_f_Z2_array_V_U", "Parent" : "7"},
	{"ID" : "11", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer3_fu_157.grp_generic_tanh_double_s_fu_318.grp_exp_generic_double_s_fu_87.nerons_mul_72ns_13s_84_5_1_U1", "Parent" : "7"},
	{"ID" : "12", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer3_fu_157.grp_generic_tanh_double_s_fu_318.grp_exp_generic_double_s_fu_87.nerons_mul_36ns_43ns_79_2_1_U2", "Parent" : "7"},
	{"ID" : "13", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer3_fu_157.grp_generic_tanh_double_s_fu_318.grp_exp_generic_double_s_fu_87.nerons_mul_44ns_49ns_93_2_1_U3", "Parent" : "7"},
	{"ID" : "14", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer3_fu_157.grp_generic_tanh_double_s_fu_318.grp_exp_generic_double_s_fu_87.nerons_mul_50ns_50ns_100_2_1_U4", "Parent" : "7"},
	{"ID" : "15", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer3_fu_157.grp_generic_tanh_double_s_fu_318.grp_exp_generic_double_s_fu_87.nerons_mac_muladd_16ns_16s_19s_31_1_1_U5", "Parent" : "7"},
	{"ID" : "16", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer3_fu_157.grp_generic_tanh_double_s_fu_318.nerons_dadddsub_64ns_64ns_64_5_full_dsp_1_U15", "Parent" : "6"},
	{"ID" : "17", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer3_fu_157.grp_generic_tanh_double_s_fu_318.nerons_dmul_64ns_64ns_64_6_max_dsp_1_U16", "Parent" : "6"},
	{"ID" : "18", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer3_fu_157.grp_generic_tanh_double_s_fu_318.nerons_ddiv_64ns_64ns_64_31_1_U17", "Parent" : "6"},
	{"ID" : "19", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer3_fu_157.grp_generic_tanh_double_s_fu_318.nerons_dcmp_64ns_64ns_1_2_1_U18", "Parent" : "6"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer3_fu_157.nerons_fadd_32ns_32ns_32_5_full_dsp_1_U24", "Parent" : "4"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer3_fu_157.nerons_fmul_32ns_32ns_32_4_max_dsp_1_U25", "Parent" : "4"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer3_fu_157.nerons_fmul_32ns_32ns_32_4_max_dsp_1_U26", "Parent" : "4"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer3_fu_157.nerons_fptrunc_64ns_32_2_1_U27", "Parent" : "4"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer3_fu_157.nerons_fpext_32ns_64_2_1_U28", "Parent" : "4"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer3_fu_157.nerons_dmul_64ns_64ns_64_6_max_dsp_1_U29", "Parent" : "4"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer4_fu_173", "Parent" : "0", "Child" : ["27", "28", "42", "43", "44", "45", "46"],
		"CDFG" : "calculateLayer4",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1627101", "EstimateLatencyMax" : "1634501",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state25", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_generic_tanh_double_s_fu_200"}],
		"Port" : [
			{"Name" : "Layer3_Neurons_CPU", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Layer4_Neurons_CPU", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "Layer3_Weights_CPU", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "table_exp_Z1_array_s", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_generic_tanh_double_s_fu_200", "Port" : "table_exp_Z1_array_s"}]},
			{"Name" : "table_f_Z3_array_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_generic_tanh_double_s_fu_200", "Port" : "table_f_Z3_array_V"}]},
			{"Name" : "table_f_Z2_array_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_generic_tanh_double_s_fu_200", "Port" : "table_f_Z2_array_V"}]}]},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer4_fu_173.Layer3_Weights_CPU_U", "Parent" : "26"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer4_fu_173.grp_generic_tanh_double_s_fu_200", "Parent" : "26", "Child" : ["29", "38", "39", "40", "41"],
		"CDFG" : "generic_tanh_double_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "75",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "t_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "table_exp_Z1_array_s", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "29", "SubInstance" : "grp_exp_generic_double_s_fu_87", "Port" : "table_exp_Z1_array_s"}]},
			{"Name" : "table_f_Z3_array_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "29", "SubInstance" : "grp_exp_generic_double_s_fu_87", "Port" : "table_f_Z3_array_V"}]},
			{"Name" : "table_f_Z2_array_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "29", "SubInstance" : "grp_exp_generic_double_s_fu_87", "Port" : "table_f_Z2_array_V"}]}]},
	{"ID" : "29", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer4_fu_173.grp_generic_tanh_double_s_fu_200.grp_exp_generic_double_s_fu_87", "Parent" : "28", "Child" : ["30", "31", "32", "33", "34", "35", "36", "37"],
		"CDFG" : "exp_generic_double_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "19", "EstimateLatencyMin" : "19", "EstimateLatencyMax" : "19",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "table_exp_Z1_array_s", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "table_f_Z3_array_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "table_f_Z2_array_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "30", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer4_fu_173.grp_generic_tanh_double_s_fu_200.grp_exp_generic_double_s_fu_87.table_exp_Z1_array_s_U", "Parent" : "29"},
	{"ID" : "31", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer4_fu_173.grp_generic_tanh_double_s_fu_200.grp_exp_generic_double_s_fu_87.table_f_Z3_array_V_U", "Parent" : "29"},
	{"ID" : "32", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer4_fu_173.grp_generic_tanh_double_s_fu_200.grp_exp_generic_double_s_fu_87.table_f_Z2_array_V_U", "Parent" : "29"},
	{"ID" : "33", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer4_fu_173.grp_generic_tanh_double_s_fu_200.grp_exp_generic_double_s_fu_87.nerons_mul_72ns_13s_84_5_1_U1", "Parent" : "29"},
	{"ID" : "34", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer4_fu_173.grp_generic_tanh_double_s_fu_200.grp_exp_generic_double_s_fu_87.nerons_mul_36ns_43ns_79_2_1_U2", "Parent" : "29"},
	{"ID" : "35", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer4_fu_173.grp_generic_tanh_double_s_fu_200.grp_exp_generic_double_s_fu_87.nerons_mul_44ns_49ns_93_2_1_U3", "Parent" : "29"},
	{"ID" : "36", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer4_fu_173.grp_generic_tanh_double_s_fu_200.grp_exp_generic_double_s_fu_87.nerons_mul_50ns_50ns_100_2_1_U4", "Parent" : "29"},
	{"ID" : "37", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer4_fu_173.grp_generic_tanh_double_s_fu_200.grp_exp_generic_double_s_fu_87.nerons_mac_muladd_16ns_16s_19s_31_1_1_U5", "Parent" : "29"},
	{"ID" : "38", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer4_fu_173.grp_generic_tanh_double_s_fu_200.nerons_dadddsub_64ns_64ns_64_5_full_dsp_1_U15", "Parent" : "28"},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer4_fu_173.grp_generic_tanh_double_s_fu_200.nerons_dmul_64ns_64ns_64_6_max_dsp_1_U16", "Parent" : "28"},
	{"ID" : "40", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer4_fu_173.grp_generic_tanh_double_s_fu_200.nerons_ddiv_64ns_64ns_64_31_1_U17", "Parent" : "28"},
	{"ID" : "41", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer4_fu_173.grp_generic_tanh_double_s_fu_200.nerons_dcmp_64ns_64ns_1_2_1_U18", "Parent" : "28"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer4_fu_173.nerons_fadd_32ns_32ns_32_5_full_dsp_1_U37", "Parent" : "26"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer4_fu_173.nerons_fmul_32ns_32ns_32_4_max_dsp_1_U38", "Parent" : "26"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer4_fu_173.nerons_fptrunc_64ns_32_2_1_U39", "Parent" : "26"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer4_fu_173.nerons_fpext_32ns_64_2_1_U40", "Parent" : "26"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_calculateLayer4_fu_173.nerons_dmul_64ns_64ns_64_6_max_dsp_1_U41", "Parent" : "26"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_generic_tanh_double_s_fu_187", "Parent" : "0", "Child" : ["48", "57", "58", "59", "60"],
		"CDFG" : "generic_tanh_double_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "75",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "t_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "table_exp_Z1_array_s", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "48", "SubInstance" : "grp_exp_generic_double_s_fu_87", "Port" : "table_exp_Z1_array_s"}]},
			{"Name" : "table_f_Z3_array_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "48", "SubInstance" : "grp_exp_generic_double_s_fu_87", "Port" : "table_f_Z3_array_V"}]},
			{"Name" : "table_f_Z2_array_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "48", "SubInstance" : "grp_exp_generic_double_s_fu_87", "Port" : "table_f_Z2_array_V"}]}]},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_generic_tanh_double_s_fu_187.grp_exp_generic_double_s_fu_87", "Parent" : "47", "Child" : ["49", "50", "51", "52", "53", "54", "55", "56"],
		"CDFG" : "exp_generic_double_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "19", "EstimateLatencyMin" : "19", "EstimateLatencyMax" : "19",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "table_exp_Z1_array_s", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "table_f_Z3_array_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "table_f_Z2_array_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "49", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_generic_tanh_double_s_fu_187.grp_exp_generic_double_s_fu_87.table_exp_Z1_array_s_U", "Parent" : "48"},
	{"ID" : "50", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_generic_tanh_double_s_fu_187.grp_exp_generic_double_s_fu_87.table_f_Z3_array_V_U", "Parent" : "48"},
	{"ID" : "51", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_generic_tanh_double_s_fu_187.grp_exp_generic_double_s_fu_87.table_f_Z2_array_V_U", "Parent" : "48"},
	{"ID" : "52", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_generic_tanh_double_s_fu_187.grp_exp_generic_double_s_fu_87.nerons_mul_72ns_13s_84_5_1_U1", "Parent" : "48"},
	{"ID" : "53", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_generic_tanh_double_s_fu_187.grp_exp_generic_double_s_fu_87.nerons_mul_36ns_43ns_79_2_1_U2", "Parent" : "48"},
	{"ID" : "54", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_generic_tanh_double_s_fu_187.grp_exp_generic_double_s_fu_87.nerons_mul_44ns_49ns_93_2_1_U3", "Parent" : "48"},
	{"ID" : "55", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_generic_tanh_double_s_fu_187.grp_exp_generic_double_s_fu_87.nerons_mul_50ns_50ns_100_2_1_U4", "Parent" : "48"},
	{"ID" : "56", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_generic_tanh_double_s_fu_187.grp_exp_generic_double_s_fu_87.nerons_mac_muladd_16ns_16s_19s_31_1_1_U5", "Parent" : "48"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_generic_tanh_double_s_fu_187.nerons_dadddsub_64ns_64ns_64_5_full_dsp_1_U15", "Parent" : "47"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_generic_tanh_double_s_fu_187.nerons_dmul_64ns_64ns_64_6_max_dsp_1_U16", "Parent" : "47"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_generic_tanh_double_s_fu_187.nerons_ddiv_64ns_64ns_64_31_1_U17", "Parent" : "47"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_generic_tanh_double_s_fu_187.nerons_dcmp_64ns_64ns_1_2_1_U18", "Parent" : "47"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nerons_fadd_32ns_32ns_32_5_full_dsp_1_U45", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nerons_fmul_32ns_32ns_32_4_max_dsp_1_U46", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nerons_fpext_32ns_64_2_1_U47", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.nerons_dmul_64ns_64ns_64_6_max_dsp_1_U48", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	nerons {
		Layer2_Neurons_CPU {Type I LastRead 32 FirstWrite -1}
		Layer5_Neurons_CPU {Type O LastRead -1 FirstWrite 22}
		Layer2_Weights_CPU {Type I LastRead -1 FirstWrite -1}
		table_exp_Z1_array_s {Type I LastRead -1 FirstWrite -1}
		table_f_Z3_array_V {Type I LastRead -1 FirstWrite -1}
		table_f_Z2_array_V {Type I LastRead -1 FirstWrite -1}
		Layer3_Weights_CPU {Type I LastRead -1 FirstWrite -1}
		Layer4_Weights_CPU {Type I LastRead -1 FirstWrite -1}}
	calculateLayer3 {
		Layer2_Neurons_CPU {Type I LastRead 32 FirstWrite -1}
		Layer3_Neurons_CPU {Type O LastRead -1 FirstWrite 22}
		Layer2_Weights_CPU {Type I LastRead -1 FirstWrite -1}
		table_exp_Z1_array_s {Type I LastRead -1 FirstWrite -1}
		table_f_Z3_array_V {Type I LastRead -1 FirstWrite -1}
		table_f_Z2_array_V {Type I LastRead -1 FirstWrite -1}}
	generic_tanh_double_s {
		t_in {Type I LastRead 0 FirstWrite -1}
		table_exp_Z1_array_s {Type I LastRead -1 FirstWrite -1}
		table_f_Z3_array_V {Type I LastRead -1 FirstWrite -1}
		table_f_Z2_array_V {Type I LastRead -1 FirstWrite -1}}
	exp_generic_double_s {
		x {Type I LastRead 0 FirstWrite -1}
		table_exp_Z1_array_s {Type I LastRead -1 FirstWrite -1}
		table_f_Z3_array_V {Type I LastRead -1 FirstWrite -1}
		table_f_Z2_array_V {Type I LastRead -1 FirstWrite -1}}
	calculateLayer4 {
		Layer3_Neurons_CPU {Type I LastRead 5 FirstWrite -1}
		Layer4_Neurons_CPU {Type O LastRead -1 FirstWrite 20}
		Layer3_Weights_CPU {Type I LastRead -1 FirstWrite -1}
		table_exp_Z1_array_s {Type I LastRead -1 FirstWrite -1}
		table_f_Z3_array_V {Type I LastRead -1 FirstWrite -1}
		table_f_Z2_array_V {Type I LastRead -1 FirstWrite -1}}
	generic_tanh_double_s {
		t_in {Type I LastRead 0 FirstWrite -1}
		table_exp_Z1_array_s {Type I LastRead -1 FirstWrite -1}
		table_f_Z3_array_V {Type I LastRead -1 FirstWrite -1}
		table_f_Z2_array_V {Type I LastRead -1 FirstWrite -1}}
	exp_generic_double_s {
		x {Type I LastRead 0 FirstWrite -1}
		table_exp_Z1_array_s {Type I LastRead -1 FirstWrite -1}
		table_f_Z3_array_V {Type I LastRead -1 FirstWrite -1}
		table_f_Z2_array_V {Type I LastRead -1 FirstWrite -1}}
	generic_tanh_double_s {
		t_in {Type I LastRead 0 FirstWrite -1}
		table_exp_Z1_array_s {Type I LastRead -1 FirstWrite -1}
		table_f_Z3_array_V {Type I LastRead -1 FirstWrite -1}
		table_f_Z2_array_V {Type I LastRead -1 FirstWrite -1}}
	exp_generic_double_s {
		x {Type I LastRead 0 FirstWrite -1}
		table_exp_Z1_array_s {Type I LastRead -1 FirstWrite -1}
		table_f_Z3_array_V {Type I LastRead -1 FirstWrite -1}
		table_f_Z2_array_V {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "2832706", "Max" : "2933346"}
	, {"Name" : "Interval", "Min" : "2832707", "Max" : "2933347"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	Layer2_Neurons_CPU { ap_memory {  { Layer2_Neurons_CPU_address0 mem_address 1 10 }  { Layer2_Neurons_CPU_ce0 mem_ce 1 1 }  { Layer2_Neurons_CPU_q0 mem_dout 0 32 }  { Layer2_Neurons_CPU_address1 MemPortADDR2 1 10 }  { Layer2_Neurons_CPU_ce1 MemPortCE2 1 1 }  { Layer2_Neurons_CPU_q1 MemPortDOUT2 0 32 } } }
	Layer5_Neurons_CPU { ap_memory {  { Layer5_Neurons_CPU_address0 mem_address 1 4 }  { Layer5_Neurons_CPU_ce0 mem_ce 1 1 }  { Layer5_Neurons_CPU_we0 mem_we 1 1 }  { Layer5_Neurons_CPU_d0 mem_din 1 64 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
