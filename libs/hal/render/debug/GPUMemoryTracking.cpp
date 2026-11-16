// libs/hal/render/debug/GPUMemoryTracking.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "GPUMemoryTracking.h"

namespace jag::render {
    // 0x100c13790
    void GPUMemoryTrackingEntry::Register(const char* str, unsigned int arg2) {
        Unregister();
        field_8 = str;
        field_16 = arg2;
        auto this_00 = Instance();
        field_0 = (GPUMemoryAllocatorZone*)this_00->RegisterObjectGPUMemory(field_8, field_16);
    }

} // namespace jag::render
