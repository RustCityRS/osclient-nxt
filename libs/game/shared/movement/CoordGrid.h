// libs/game/shared/movement/CoordGrid.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class CoordGrid {
    public:
        CoordGrid(int arg1, unsigned int arg2, unsigned int arg3);
        uint8_t operator!=(const CoordGrid& coordGrid) const;
        uint32_t operator==(const CoordGrid& coordGrid) const;
        CoordGrid(int waterNormalParamsEncoding, unsigned int waterNormalParamGroup, unsigned int arg3);
        unsigned int GetLocalX() const;
        unsigned int GetLocalZ() const;
        CoordGrid(const CoordFine& coordFine);
        CoordGrid(int arg1, const math::Vector3T<float>& vector3);
        unsigned int GetMapSquareX() const;
        unsigned int GetMapSquareZ() const;
        CoordGrid();
        unsigned long FromString(StringView stringView);
        CoordGrid(int arg1);
        uint64_t ToFine(bool arg1) const;
        bool operator<(const CoordGrid& coordGrid) const;
        unsigned int ToBitPacked() const;
        CoordGrid(int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4, unsigned int arg5);

    private:
        unsigned int field_0;
        unsigned int field_4;
        unsigned int field_8;
        uint8_t _unknown_12[4];
    };

    class CoordGridSize {
    public:
        CoordGridSize(const CoordGrid& coordGrid, int arg2, int arg3);
    };

    // 0x1003fddf0
    CoordGrid::CoordGrid(const CoordFine& coordFine) : field_0(coordFine.field_0) {
        float* pfVar1 = &coordFine.field_4[0];
        field_4 = (unsigned int)(long)(*pfVar1 * 0.0078125f);
        pfVar1 = &coordFine.field_4[2];
        field_8 = (unsigned int)(long)(*pfVar1 * 0.0078125f);
    }

    // 0x100499660
    CoordGrid::CoordGrid(int arg1, const math::Vector3T<float>& vector3) : field_0(arg1) {
        float* pfVar1 = &vector3[0];
        field_4 = (unsigned int)(long)(*pfVar1 * 0.0078125f);
        pfVar1 = &vector3[2];
        field_8 = (unsigned int)(long)(*pfVar1 * 0.0078125f);
    }

    // 0x1004c7d30
    unsigned int CoordGrid::GetMapSquareX() const {
        return field_4 >> 6;
    }

    // 0x1004c7d40
    unsigned int CoordGrid::GetMapSquareZ() const {
        return field_8 >> 6;
    }

    // 0x1004cc510
    CoordGrid::CoordGrid() : field_0(4294967295), field_4(0), field_8(0) {}

    // 0x1006e9a50
    CoordGrid::CoordGrid(int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4, unsigned int arg5)
        : field_0(arg1) {
        field_4 = arg4 & 63 | arg2 << 6;
        field_8 = arg5 & 63 | arg3 << 6;
    }

} // namespace jag::game
