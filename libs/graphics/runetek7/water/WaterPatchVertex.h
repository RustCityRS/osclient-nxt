// libs/graphics/runetek7/water/WaterPatchVertex.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class WaterPatchVertex {
    public:
        WaterPatchVertex();

    private:
        uint8_t _unknown_0[31];
        uint8_t field_31;
    };

    // 0x1007c86d0
    WaterPatchVertex::WaterPatchVertex() : field_31(0) {}

} // namespace jag::graphics
