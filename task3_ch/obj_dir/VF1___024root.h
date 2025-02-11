// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VF1.h for the primary calling header

#ifndef VERILATED_VF1___024ROOT_H_
#define VERILATED_VF1___024ROOT_H_  // guard

#include "verilated.h"

class VF1__Syms;

class VF1___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(data_out,7,0);
    CData/*0:0*/ F1__DOT__tick;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN16(N,15,0);
    SData/*15:0*/ F1__DOT__BPS_modified__DOT__count;
    IData/*31:0*/ F1__DOT__Light__DOT__current_state;
    IData/*31:0*/ F1__DOT__Light__DOT__next_state;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VF1__Syms* const vlSymsp;

    // CONSTRUCTORS
    VF1___024root(VF1__Syms* symsp, const char* name);
    ~VF1___024root();
    VL_UNCOPYABLE(VF1___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
