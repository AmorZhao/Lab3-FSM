// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VLIGHTSEQUENCEFSM__SYMS_H_
#define VERILATED_VLIGHTSEQUENCEFSM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VLightSequenceFSM.h"

// INCLUDE MODULE CLASSES
#include "VLightSequenceFSM___024root.h"

// SYMS CLASS (contains all model state)
class VLightSequenceFSM__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VLightSequenceFSM* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VLightSequenceFSM___024root    TOP;

    // CONSTRUCTORS
    VLightSequenceFSM__Syms(VerilatedContext* contextp, const char* namep, VLightSequenceFSM* modelp);
    ~VLightSequenceFSM__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
