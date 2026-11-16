// libs/graphics/runetek7/animation/asm/DebugHelpers.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics::debug_helpers {
    // 0x100954da0
    auto GetTabbedSpaces(unsigned int arg1) {

        return auto((unsigned long)(arg1 << 2), ' ');
    }

} // namespace jag::graphics::debug_helpers
