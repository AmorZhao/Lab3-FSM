// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLightSequenceFSM__Syms.h"


VL_ATTR_COLD void VLightSequenceFSM___024root__trace_init_sub__TOP__0(VLightSequenceFSM___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLightSequenceFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLightSequenceFSM___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("LightSequenceFSM ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"data_out", false,-1, 7,0);
    tracep->declBus(c+5,"current_state", false,-1, 31,0);
    tracep->declBus(c+6,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VLightSequenceFSM___024root__trace_init_top(VLightSequenceFSM___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLightSequenceFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLightSequenceFSM___024root__trace_init_top\n"); );
    // Body
    VLightSequenceFSM___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VLightSequenceFSM___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VLightSequenceFSM___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VLightSequenceFSM___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VLightSequenceFSM___024root__trace_register(VLightSequenceFSM___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLightSequenceFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLightSequenceFSM___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VLightSequenceFSM___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VLightSequenceFSM___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VLightSequenceFSM___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VLightSequenceFSM___024root__trace_full_sub_0(VLightSequenceFSM___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VLightSequenceFSM___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLightSequenceFSM___024root__trace_full_top_0\n"); );
    // Init
    VLightSequenceFSM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLightSequenceFSM___024root*>(voidSelf);
    VLightSequenceFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VLightSequenceFSM___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VLightSequenceFSM___024root__trace_full_sub_0(VLightSequenceFSM___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VLightSequenceFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLightSequenceFSM___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullBit(oldp+3,(vlSelf->en));
    bufp->fullCData(oldp+4,(vlSelf->data_out),8);
    bufp->fullIData(oldp+5,(vlSelf->LightSequenceFSM__DOT__current_state),32);
    bufp->fullIData(oldp+6,(vlSelf->LightSequenceFSM__DOT__next_state),32);
}
