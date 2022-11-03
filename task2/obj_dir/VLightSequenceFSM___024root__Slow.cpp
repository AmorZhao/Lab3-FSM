// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLightSequenceFSM.h for the primary calling header

#include "verilated.h"

#include "VLightSequenceFSM__Syms.h"
#include "VLightSequenceFSM___024root.h"

void VLightSequenceFSM___024root___ctor_var_reset(VLightSequenceFSM___024root* vlSelf);

VLightSequenceFSM___024root::VLightSequenceFSM___024root(VLightSequenceFSM__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VLightSequenceFSM___024root___ctor_var_reset(this);
}

void VLightSequenceFSM___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VLightSequenceFSM___024root::~VLightSequenceFSM___024root() {
}
