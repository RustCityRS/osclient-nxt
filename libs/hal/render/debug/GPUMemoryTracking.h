// libs/hal/render/debug/GPUMemoryTracking.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    // 0x100c13150
    GPUMemoryTrackingEntry* GPUMemoryTrackingEntry::operator=(GPUMemoryTrackingEntry&& gpuMemoryTrackingEntry) {
        std::swap<GPUMemoryAllocatorZone*>(field_0, gpuMemoryTrackingEntry.field_0);
        std::swap<char const*>(field_8, gpuMemoryTrackingEntry.field_8);
        std::swap<unsigned int>(field_16, gpuMemoryTrackingEntry.field_16);
        return this;
    }

} // namespace jag::render
