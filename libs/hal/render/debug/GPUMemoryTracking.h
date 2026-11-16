// libs/hal/render/debug/GPUMemoryTracking.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    // 0x100c13150, 64 bytes, inline, placed by debug map only (low confidence)
    // GPUMemoryTrackingEntry::operator=(GPUMemoryTrackingEntry&&)
    /* GPUMemoryTrackingEntry::TEMPNAMEPLACEHOLDERVALUE(GPUMemoryTrackingEntry&&)
    */

    GPUMemoryTrackingEntry* GPUMemoryTrackingEntry::operator=(GPUMemoryTrackingEntry* param_1) {
        std::swap<GPUMemoryAllocatorZone*>(&field_0, &param_1->field_0);
        std::swap<char const*>(&field_8, &param_1->field_8);
        std::swap<unsigned int>(&field_16, &param_1->field_16);
        return this;
    }

    // 0x100c13190, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // GPUMemoryTrackingEntry::~GPUMemoryTrackingEntry(): jumps straight to the base-object destructor

} // namespace jag::render
