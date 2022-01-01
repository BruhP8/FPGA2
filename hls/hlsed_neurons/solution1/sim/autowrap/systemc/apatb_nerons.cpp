// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "Layer2_Neurons_CPU"
#define AUTOTB_TVIN_Layer2_Neurons_CPU  "../tv/cdatafile/c.nerons.autotvin_Layer2_Neurons_CPU.dat"
// wrapc file define: "Layer5_Neurons_CPU"
#define AUTOTB_TVOUT_Layer5_Neurons_CPU  "../tv/cdatafile/c.nerons.autotvout_Layer5_Neurons_CPU.dat"
#define AUTOTB_TVIN_Layer5_Neurons_CPU  "../tv/cdatafile/c.nerons.autotvin_Layer5_Neurons_CPU.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "Layer5_Neurons_CPU"
#define AUTOTB_TVOUT_PC_Layer5_Neurons_CPU  "../tv/rtldatafile/rtl.nerons.autotvout_Layer5_Neurons_CPU.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			Layer2_Neurons_CPU_depth = 0;
			Layer5_Neurons_CPU_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{Layer2_Neurons_CPU " << Layer2_Neurons_CPU_depth << "}\n";
			total_list << "{Layer5_Neurons_CPU " << Layer5_Neurons_CPU_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int Layer2_Neurons_CPU_depth;
		int Layer5_Neurons_CPU_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void nerons (
half Layer2_Neurons_CPU[1014],
double Layer5_Neurons_CPU[10]);

void AESL_WRAP_nerons (
half Layer2_Neurons_CPU[1014],
double Layer5_Neurons_CPU[10])
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "Layer5_Neurons_CPU"
		aesl_fh.read(AUTOTB_TVOUT_PC_Layer5_Neurons_CPU, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_Layer5_Neurons_CPU, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_Layer5_Neurons_CPU, AESL_token); // data

			sc_bv<64> *Layer5_Neurons_CPU_pc_buffer = new sc_bv<64>[10];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'Layer5_Neurons_CPU', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'Layer5_Neurons_CPU', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					Layer5_Neurons_CPU_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_Layer5_Neurons_CPU, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_Layer5_Neurons_CPU))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: Layer5_Neurons_CPU
				{
					// bitslice(63, 0)
					// {
						// celement: Layer5_Neurons_CPU(63, 0)
						// {
							sc_lv<64>* Layer5_Neurons_CPU_lv0_0_9_1 = new sc_lv<64>[10];
						// }
					// }

					// bitslice(63, 0)
					{
						int hls_map_index = 0;
						// celement: Layer5_Neurons_CPU(63, 0)
						{
							// carray: (0) => (9) @ (1)
							for (int i_0 = 0; i_0 <= 9; i_0 += 1)
							{
								if (&(Layer5_Neurons_CPU[0]) != NULL) // check the null address if the c port is array or others
								{
									Layer5_Neurons_CPU_lv0_0_9_1[hls_map_index].range(63, 0) = sc_bv<64>(Layer5_Neurons_CPU_pc_buffer[hls_map_index].range(63, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(63, 0)
					{
						int hls_map_index = 0;
						// celement: Layer5_Neurons_CPU(63, 0)
						{
							// carray: (0) => (9) @ (1)
							for (int i_0 = 0; i_0 <= 9; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : Layer5_Neurons_CPU[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : Layer5_Neurons_CPU[0]
								// output_left_conversion : *(long long*)&Layer5_Neurons_CPU[i_0]
								// output_type_conversion : (Layer5_Neurons_CPU_lv0_0_9_1[hls_map_index]).to_uint64()
								if (&(Layer5_Neurons_CPU[0]) != NULL) // check the null address if the c port is array or others
								{
									*(long long*)&Layer5_Neurons_CPU[i_0] = (Layer5_Neurons_CPU_lv0_0_9_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] Layer5_Neurons_CPU_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "Layer2_Neurons_CPU"
		char* tvin_Layer2_Neurons_CPU = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_Layer2_Neurons_CPU);

		// "Layer5_Neurons_CPU"
		char* tvin_Layer5_Neurons_CPU = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_Layer5_Neurons_CPU);
		char* tvout_Layer5_Neurons_CPU = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_Layer5_Neurons_CPU);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_Layer2_Neurons_CPU, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_Layer2_Neurons_CPU, tvin_Layer2_Neurons_CPU);

		sc_bv<16>* Layer2_Neurons_CPU_tvin_wrapc_buffer = new sc_bv<16>[1014];

		// RTL Name: Layer2_Neurons_CPU
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: Layer2_Neurons_CPU(15, 0)
				{
					// carray: (0) => (1013) @ (1)
					for (int i_0 = 0; i_0 <= 1013; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : Layer2_Neurons_CPU[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : Layer2_Neurons_CPU[0]
						// regulate_c_name       : Layer2_Neurons_CPU
						// input_type_conversion : *(short*)&Layer2_Neurons_CPU[i_0]
						if (&(Layer2_Neurons_CPU[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> Layer2_Neurons_CPU_tmp_mem;
							Layer2_Neurons_CPU_tmp_mem = *(short*)&Layer2_Neurons_CPU[i_0];
							Layer2_Neurons_CPU_tvin_wrapc_buffer[hls_map_index].range(15, 0) = Layer2_Neurons_CPU_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1014; i++)
		{
			sprintf(tvin_Layer2_Neurons_CPU, "%s\n", (Layer2_Neurons_CPU_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_Layer2_Neurons_CPU, tvin_Layer2_Neurons_CPU);
		}

		tcl_file.set_num(1014, &tcl_file.Layer2_Neurons_CPU_depth);
		sprintf(tvin_Layer2_Neurons_CPU, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_Layer2_Neurons_CPU, tvin_Layer2_Neurons_CPU);

		// release memory allocation
		delete [] Layer2_Neurons_CPU_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_Layer5_Neurons_CPU, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_Layer5_Neurons_CPU, tvin_Layer5_Neurons_CPU);

		sc_bv<64>* Layer5_Neurons_CPU_tvin_wrapc_buffer = new sc_bv<64>[10];

		// RTL Name: Layer5_Neurons_CPU
		{
			// bitslice(63, 0)
			{
				int hls_map_index = 0;
				// celement: Layer5_Neurons_CPU(63, 0)
				{
					// carray: (0) => (9) @ (1)
					for (int i_0 = 0; i_0 <= 9; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : Layer5_Neurons_CPU[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : Layer5_Neurons_CPU[0]
						// regulate_c_name       : Layer5_Neurons_CPU
						// input_type_conversion : *(long long*)&Layer5_Neurons_CPU[i_0]
						if (&(Layer5_Neurons_CPU[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<64> Layer5_Neurons_CPU_tmp_mem;
							Layer5_Neurons_CPU_tmp_mem = *(long long*)&Layer5_Neurons_CPU[i_0];
							Layer5_Neurons_CPU_tvin_wrapc_buffer[hls_map_index].range(63, 0) = Layer5_Neurons_CPU_tmp_mem.range(63, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 10; i++)
		{
			sprintf(tvin_Layer5_Neurons_CPU, "%s\n", (Layer5_Neurons_CPU_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_Layer5_Neurons_CPU, tvin_Layer5_Neurons_CPU);
		}

		tcl_file.set_num(10, &tcl_file.Layer5_Neurons_CPU_depth);
		sprintf(tvin_Layer5_Neurons_CPU, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_Layer5_Neurons_CPU, tvin_Layer5_Neurons_CPU);

		// release memory allocation
		delete [] Layer5_Neurons_CPU_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		nerons(Layer2_Neurons_CPU, Layer5_Neurons_CPU);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_Layer5_Neurons_CPU, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_Layer5_Neurons_CPU, tvout_Layer5_Neurons_CPU);

		sc_bv<64>* Layer5_Neurons_CPU_tvout_wrapc_buffer = new sc_bv<64>[10];

		// RTL Name: Layer5_Neurons_CPU
		{
			// bitslice(63, 0)
			{
				int hls_map_index = 0;
				// celement: Layer5_Neurons_CPU(63, 0)
				{
					// carray: (0) => (9) @ (1)
					for (int i_0 = 0; i_0 <= 9; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : Layer5_Neurons_CPU[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : Layer5_Neurons_CPU[0]
						// regulate_c_name       : Layer5_Neurons_CPU
						// input_type_conversion : *(long long*)&Layer5_Neurons_CPU[i_0]
						if (&(Layer5_Neurons_CPU[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<64> Layer5_Neurons_CPU_tmp_mem;
							Layer5_Neurons_CPU_tmp_mem = *(long long*)&Layer5_Neurons_CPU[i_0];
							Layer5_Neurons_CPU_tvout_wrapc_buffer[hls_map_index].range(63, 0) = Layer5_Neurons_CPU_tmp_mem.range(63, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 10; i++)
		{
			sprintf(tvout_Layer5_Neurons_CPU, "%s\n", (Layer5_Neurons_CPU_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_Layer5_Neurons_CPU, tvout_Layer5_Neurons_CPU);
		}

		tcl_file.set_num(10, &tcl_file.Layer5_Neurons_CPU_depth);
		sprintf(tvout_Layer5_Neurons_CPU, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_Layer5_Neurons_CPU, tvout_Layer5_Neurons_CPU);

		// release memory allocation
		delete [] Layer5_Neurons_CPU_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "Layer2_Neurons_CPU"
		delete [] tvin_Layer2_Neurons_CPU;
		// release memory allocation: "Layer5_Neurons_CPU"
		delete [] tvout_Layer5_Neurons_CPU;
		delete [] tvin_Layer5_Neurons_CPU;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

