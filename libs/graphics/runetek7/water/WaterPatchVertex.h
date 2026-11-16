// libs/graphics/runetek7/water/WaterPatchVertex.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class WaterPatchVertex {
    public:
        WaterPatchVertex();

        // data members, from how the methods use this: 32 bytes
        char _unknown_0[31];
        undefined1 field_31; // offset 31
    };

    // 0x1007c86c0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // WaterPatchVertex::WaterPatchVertex(): jumps straight to the base-object constructor

    // 0x1007c86d0, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // WaterPatchVertex::WaterPatchVertex()
    void WaterPatchVertex::WaterPatchVertex() {
        new (&field_12) std::array<math::Vector2T<short>, 3ul>();
        new (&field_24) std::array<math::Vector2T<signed char>, 3ul>();
        field_31 = 0;
    }

} // namespace jag::graphics
