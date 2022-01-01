create_project prj -part xc7z020-clg484-1 -force
set_property target_language verilog [current_project]
set vivado_ver [version -short]
set COE_DIR "../../syn/verilog"
source "/home/iamgron/Documents/Fac/M2/FPGA2/projet/FPGA2/hls/hlsed_neurons/solution1/syn/verilog/nerons_ap_hptodp_0_no_dsp_16_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips nerons_ap_hptodp_0_no_dsp_16]]
}
source "/home/iamgron/Documents/Fac/M2/FPGA2/projet/FPGA2/hls/hlsed_neurons/solution1/syn/verilog/nerons_ap_dadddsub_3_full_dsp_64_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips nerons_ap_dadddsub_3_full_dsp_64]]
}
source "/home/iamgron/Documents/Fac/M2/FPGA2/projet/FPGA2/hls/hlsed_neurons/solution1/syn/verilog/nerons_ap_dcmp_0_no_dsp_64_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips nerons_ap_dcmp_0_no_dsp_64]]
}
source "/home/iamgron/Documents/Fac/M2/FPGA2/projet/FPGA2/hls/hlsed_neurons/solution1/syn/verilog/nerons_ap_dmul_4_max_dsp_64_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips nerons_ap_dmul_4_max_dsp_64]]
}
source "/home/iamgron/Documents/Fac/M2/FPGA2/projet/FPGA2/hls/hlsed_neurons/solution1/syn/verilog/nerons_ap_hmul_2_max_dsp_16_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips nerons_ap_hmul_2_max_dsp_16]]
}
source "/home/iamgron/Documents/Fac/M2/FPGA2/projet/FPGA2/hls/hlsed_neurons/solution1/syn/verilog/nerons_ap_hadd_3_full_dsp_16_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips nerons_ap_hadd_3_full_dsp_16]]
}
source "/home/iamgron/Documents/Fac/M2/FPGA2/projet/FPGA2/hls/hlsed_neurons/solution1/syn/verilog/nerons_ap_ddiv_29_no_dsp_64_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips nerons_ap_ddiv_29_no_dsp_64]]
}
source "/home/iamgron/Documents/Fac/M2/FPGA2/projet/FPGA2/hls/hlsed_neurons/solution1/syn/verilog/nerons_ap_dptohp_0_no_dsp_64_ip.tcl"
if {[regexp -nocase {2015\.3.*} $vivado_ver match] || [regexp -nocase {2016\.1.*} $vivado_ver match]} {
    extract_files -base_dir "./prjsrcs/sources_1/ip" [get_files -all -of [get_ips nerons_ap_dptohp_0_no_dsp_64]]
}
