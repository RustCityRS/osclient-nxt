// libs/graphics/runetek7/animation/asm/DebugHelpers.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics::debug_helpers {
    // 0x100954da0, 80 bytes, inline, placed by class name and debug map
    // GetTabbedSpaces(unsigned int)
    debug_helpers* GetTabbedSpaces(uint param_1) {
        allocator local_28[8];

        eastl::allocator::allocator(local_28, "EASTL basic_string");
        new (this) eastl::string((ulong)(param_1 << 2), ' ', local_28);
        return this;
    }

} // namespace jag::graphics::debug_helpers
