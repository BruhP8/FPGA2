############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project hlsed_neurons
set_top nerons
add_files hlsed_neurons/solution1/.tcls/345.h
add_files hlsed_neurons/solution1/.tcls/345.cpp
add_files -tb hlsed_neurons/solution1/testbench.cpp -cflags "-B/usr/lib/x86_64-linux-gnu -Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7z020-clg484-1} -tool vivado
create_clock -period 10 -name default
#source "./hlsed_neurons/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
