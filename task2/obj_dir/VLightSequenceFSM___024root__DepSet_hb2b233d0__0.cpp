// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLightSequenceFSM.h for the primary calling header

#include "verilated.h"

#include "VLightSequenceFSM___024root.h"

VL_INLINE_OPT void VLightSequenceFSM___024root___sequent__TOP__0(VLightSequenceFSM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLightSequenceFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLightSequenceFSM___024root___sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->LightSequenceFSM__DOT__current_state = 0U;
    } else if (vlSelf->en) {
        vlSelf->LightSequenceFSM__DOT__current_state 
            = vlSelf->LightSequenceFSM__DOT__next_state;
    }
    if (((((((((0U == vlSelf->LightSequenceFSM__DOT__current_state) 
               | (1U == vlSelf->LightSequenceFSM__DOT__current_state)) 
              | (2U == vlSelf->LightSequenceFSM__DOT__current_state)) 
             | (3U == vlSelf->LightSequenceFSM__DOT__current_state)) 
            | (4U == vlSelf->LightSequenceFSM__DOT__current_state)) 
           | (5U == vlSelf->LightSequenceFSM__DOT__current_state)) 
          | (6U == vlSelf->LightSequenceFSM__DOT__current_state)) 
         | (7U == vlSelf->LightSequenceFSM__DOT__current_state))) {
        if ((0U == vlSelf->LightSequenceFSM__DOT__current_state)) {
            vlSelf->LightSequenceFSM__DOT__next_state = 1U;
            vlSelf->data_out = 0U;
        } else if ((1U == vlSelf->LightSequenceFSM__DOT__current_state)) {
            vlSelf->LightSequenceFSM__DOT__next_state = 2U;
            vlSelf->data_out = 1U;
        } else if ((2U == vlSelf->LightSequenceFSM__DOT__current_state)) {
            vlSelf->LightSequenceFSM__DOT__next_state = 3U;
            vlSelf->data_out = 3U;
        } else if ((3U == vlSelf->LightSequenceFSM__DOT__current_state)) {
            vlSelf->LightSequenceFSM__DOT__next_state = 4U;
            vlSelf->data_out = 7U;
        } else if ((4U == vlSelf->LightSequenceFSM__DOT__current_state)) {
            vlSelf->LightSequenceFSM__DOT__next_state = 5U;
            vlSelf->data_out = 0xfU;
        } else if ((5U == vlSelf->LightSequenceFSM__DOT__current_state)) {
            vlSelf->LightSequenceFSM__DOT__next_state = 6U;
            vlSelf->data_out = 0x1fU;
        } else if ((6U == vlSelf->LightSequenceFSM__DOT__current_state)) {
            vlSelf->LightSequenceFSM__DOT__next_state = 7U;
            vlSelf->data_out = 0x3fU;
        } else {
            vlSelf->LightSequenceFSM__DOT__next_state = 8U;
            vlSelf->data_out = 0x7fU;
        }
    } else if ((8U == vlSelf->LightSequenceFSM__DOT__current_state)) {
        vlSelf->LightSequenceFSM__DOT__next_state = 0U;
        vlSelf->data_out = 0xffU;
    }
}

void VLightSequenceFSM___024root___eval(VLightSequenceFSM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLightSequenceFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLightSequenceFSM___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VLightSequenceFSM___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void VLightSequenceFSM___024root___eval_debug_assertions(VLightSequenceFSM___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLightSequenceFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLightSequenceFSM___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
