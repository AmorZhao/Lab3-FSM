#!/bin/sh

# cleanup
rm -rf obj_dir
rm -f F1.vcd

# run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall --cc --trace F1.sv --exe F1_tb.cpp


# build C++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f VF1.mk VF1

# run executable simulation file
echo "\nRunning simulation"
obj_dir/VF1
echo "\nSimulation completed"

