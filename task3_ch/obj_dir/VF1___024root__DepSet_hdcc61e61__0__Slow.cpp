// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VF1.h for the primary calling header

#include "verilated.h"

#include "VF1___024root.h"

VL_ATTR_COLD void VF1___024root___settle__TOP__0(VF1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1___024root___settle__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->F1__DOT__Light__DOT__current_state) 
               | (1U == vlSelf->F1__DOT__Light__DOT__current_state)) 
              | (2U == vlSelf->F1__DOT__Light__DOT__current_state)) 
             | (3U == vlSelf->F1__DOT__Light__DOT__current_state)) 
            | (4U == vlSelf->F1__DOT__Light__DOT__current_state)) 
           | (5U == vlSelf->F1__DOT__Light__DOT__current_state)) 
          | (6U == vlSelf->F1__DOT__Light__DOT__current_state)) 
         | (7U == vlSelf->F1__DOT__Light__DOT__current_state))) {
        if ((0U == vlSelf->F1__DOT__Light__DOT__current_state)) {
            vlSelf->F1__DOT__Light__DOT__next_state = 1U;
            vlSelf->data_out = 0U;
        } else if ((1U == vlSelf->F1__DOT__Light__DOT__current_state)) {
            vlSelf->F1__DOT__Light__DOT__next_state = 2U;
            vlSelf->data_out = 1U;
        } else if ((2U == vlSelf->F1__DOT__Light__DOT__current_state)) {
            vlSelf->F1__DOT__Light__DOT__next_state = 3U;
            vlSelf->data_out = 3U;
        } else if ((3U == vlSelf->F1__DOT__Light__DOT__current_state)) {
            vlSelf->F1__DOT__Light__DOT__next_state = 4U;
            vlSelf->data_out = 7U;
        } else if ((4U == vlSelf->F1__DOT__Light__DOT__current_state)) {
            vlSelf->F1__DOT__Light__DOT__next_state = 5U;
            vlSelf->data_out = 0xfU;
        } else if ((5U == vlSelf->F1__DOT__Light__DOT__current_state)) {
            vlSelf->F1__DOT__Light__DOT__next_state = 6U;
            vlSelf->data_out = 0x1fU;
        } else if ((6U == vlSelf->F1__DOT__Light__DOT__current_state)) {
            vlSelf->F1__DOT__Light__DOT__next_state = 7U;
            vlSelf->data_out = 0x3fU;
        } else {
            vlSelf->F1__DOT__Light__DOT__next_state = 8U;
            vlSelf->data_out = 0x7fU;
        }
    } else if ((8U == vlSelf->F1__DOT__Light__DOT__current_state)) {
        vlSelf->F1__DOT__Light__DOT__next_state = 0U;
        vlSelf->data_out = 0xffU;
    }
}

VL_ATTR_COLD void VF1___024root___eval_initial(VF1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VF1___024root___eval_settle(VF1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1___024root___eval_settle\n"); );
    // Body
    VF1___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VF1___024root___final(VF1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1___024root___final\n"); );
}

VL_ATTR_COLD void VF1___024root___ctor_var_reset(VF1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VF1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VF1___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->N = VL_RAND_RESET_I(16);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->F1__DOT__tick = VL_RAND_RESET_I(1);
    vlSelf->F1__DOT__BPS_modified__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->F1__DOT__Light__DOT__current_state = 0;
    vlSelf->F1__DOT__Light__DOT__next_state = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
