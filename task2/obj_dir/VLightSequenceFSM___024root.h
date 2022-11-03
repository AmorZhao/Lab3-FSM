// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VLightSequenceFSM.h for the primary calling header

#ifndef VERILATED_VLIGHTSEQUENCEFSM___024ROOT_H_
#define VERILATED_VLIGHTSEQUENCEFSM___024ROOT_H_  // guard

#include "verilated.h"

class VLightSequenceFSM__Syms;

class VLightSequenceFSM___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(data_out,7,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ LightSequenceFSM__DOT__current_state;
    IData/*31:0*/ LightSequenceFSM__DOT__next_state;

    // INTERNAL VARIABLES
    VLightSequenceFSM__Syms* const vlSymsp;

    // CONSTRUCTORS
    VLightSequenceFSM___024root(VLightSequenceFSM__Syms* symsp, const char* name);
    ~VLightSequenceFSM___024root();
    VL_UNCOPYABLE(VLightSequenceFSM___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
