#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/iamgron/Documents/Fac/M2/FPGA2/projet/FPGA2/hls/hlsed_neurons/solution1/.autopilot/db/a.g.bc ${1+"$@"}
