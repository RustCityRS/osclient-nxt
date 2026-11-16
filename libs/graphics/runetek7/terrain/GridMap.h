// libs/graphics/runetek7/terrain/GridMap.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class GridTile {
    public:
        GridTile();

    private:
        uint32_t field_0;
        uint16_t field_4;
        uint8_t _unknown_6[2];
        uint32_t field_8;
        uint64_t field_12;
        uint64_t field_20;
        uint8_t field_28;
        uint8_t _unknown_29[3];
        uint64_t field_32;
        uint8_t field_40;
        uint8_t _unknown_41[3];
        uint64_t field_44;
        uint64_t field_52;
        uint8_t field_60;
        uint8_t _unknown_61[3];
        uint64_t field_64;
        uint64_t field_72;
    };

    // 0x10062dcb0
    uint8_t* GridGroup::GetGridTileWater() {
        uint8_t* puVar1 = nullptr;
        if (field_280 != '\0') {
            puVar1 = &field_240;
        }
        return puVar1;
    }

} // namespace jag::graphics
