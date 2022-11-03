// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLightSequenceFSM__Syms.h"


void VLightSequenceFSM___024root__trace_chg_sub_0(VLightSequenceFSM___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VLightSequenceFSM___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLightSequenceFSM___024root__trace_chg_top_0\n"); );
    // Init
    VLightSequenceFSM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLightSequenceFSM___024root*>(voidSelf);
    VLightSequenceFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VLightSequenceFSM___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VLightSequenceFSM___024root__trace_chg_sub_0(VLightSequenceFSM___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VLightSequenceFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLightSequenceFSM___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst));
    bufp->chgBit(oldp+2,(vlSelf->en));
    bufp->chgCData(oldp+3,(vlSelf->data_out),8);
    bufp->chgIData(oldp+4,(vlSelf->LightSequenceFSM__DOT__current_state),32);
    bufp->chgIData(oldp+5,(vlSelf->LightSequenceFSM__DOT__next_state),32);
}

void VLightSequenceFSM___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLightSequenceFSM___024root__trace_cleanup\n"); );
    // Init
    VLightSequenceFSM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLightSequenceFSM___024root*>(voidSelf);
    VLightSequenceFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
