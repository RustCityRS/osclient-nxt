// libs/graphics/runetek7/GraphicsQuality.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100064290, 32 bytes, inline, placed by debug map only (low confidence)
    // WrapArray<char const* const> GetEnumValueNames<graphics::GraphicsQuality>()
    jag* GetEnumValueNames<graphics::GraphicsQuality>() {
        WrapArray<char const* const>::WrapArray<std::array<char const*, 4ul>>((WrapArray<char const* const>*)this,
                                                                              (array*)PTR_VALUE_NAMES_100ee9d20);
        return this;
    }

} // namespace jag
