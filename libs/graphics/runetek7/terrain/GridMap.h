// libs/graphics/runetek7/terrain/GridMap.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class GridTile {
    public:
        GridTile();

        // data members, from how the methods use this: 80 bytes
        undefined4 field_0; // offset 0
        undefined2 field_4; // offset 4
        char _unknown_6[2];
        undefined4 field_8;  // offset 8
        undefined8 field_12; // offset 12
        undefined8 field_20; // offset 20
        undefined1 field_28; // offset 28
        char _unknown_29[3];
        undefined8 field_32; // offset 32
        undefined1 field_40; // offset 40
        char _unknown_41[3];
        undefined8 field_44; // offset 44
        undefined8 field_52; // offset 52
        undefined1 field_60; // offset 60
        char _unknown_61[3];
        undefined8 field_64; // offset 64
        undefined8 field_72; // offset 72
    };

    // 0x10062dcb0, 32 bytes, inline, placed by debug map only (low confidence)
    // GridGroup::GetGridTileWater()
    undefined1* GridGroup::GetGridTileWater() {
        undefined1* puVar1;

        puVar1 = (undefined1*)0;
        if (field_280 != '\0') {
            puVar1 = &field_240;
        }
        return puVar1;
    }

} // namespace jag::graphics
