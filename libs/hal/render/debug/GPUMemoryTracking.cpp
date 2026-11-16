// libs/hal/render/debug/GPUMemoryTracking.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "GPUMemoryTracking.h"

namespace jag::render {
    // 0x100c13790, 80 bytes, placed by debug map only (low confidence)
    // GPUMemoryTrackingEntry::Register(char const*, unsigned int)
    void GPUMemoryTrackingEntry::Register(char* param_1, uint param_2) {
        RenderDevice* this_00;
        GPUMemoryAllocatorZone* pGVar1;

        Unregister(this);
        field_8 = param_1;
        field_16 = param_2;
        this_00 = (RenderDevice*)((GPUMemoryTrackingEntry*)this)->Instance();
        pGVar1 = (GPUMemoryAllocatorZone*)this_00->RegisterObjectGPUMemory(field_8, field_16);
        field_0 = pGVar1;
    }

} // namespace jag::render
