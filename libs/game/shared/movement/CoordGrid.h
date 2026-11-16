// libs/game/shared/movement/CoordGrid.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class CoordGrid {
    public:
        CoordGrid(int, unsigned int, unsigned int);
        byte operator!=(CoordGrid const&) const;
        operator==(CoordGrid const&) const;
        uint GetLocalX() const;
        uint GetLocalZ() const;
        CoordGrid(CoordFine const&);
        CoordGrid(int, math::Vector3T<float> const&);
        uint GetMapSquareX() const;
        uint GetMapSquareZ() const;
        CoordGrid();
        ulong FromString(StringView);
        CoordGrid(int);
        ToFine(bool) const;
        bool operator<(CoordGrid const&) const;
        uint ToBitPacked() const;
        CoordGrid(int, unsigned int, unsigned int, unsigned int, unsigned int);

        // data members, from how the methods use this: 16 bytes
        uint field_0; // offset 0
        uint field_4; // offset 4
        uint field_8; // offset 8
        char _unknown_12[4];
    };

    class CoordGridSize {
    public:
        CoordGridSize(CoordGrid const&, int, int);
    };

    // 0x1003ef3b0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // CoordGrid::CoordGrid(CoordFine const&): jumps straight to the base-object constructor

    // 0x1003fddf0, 96 bytes, base-object constructor, inline, placed by class name
    // CoordGrid::CoordGrid(CoordFine const&)
    void CoordGrid::CoordGrid(CoordFine* param_1) {
        float* pfVar1;

        field_0 = param_1->field_0;
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&param_1->field_4, 0);
        field_4 = (uint)(long)(*pfVar1 * 0.0078125);
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&param_1->field_4, 2);
        field_8 = (uint)(long)(*pfVar1 * 0.0078125);
    }

    // 0x1004989d0, 16 bytes, complete-object constructor, inline, placed by class name
    // CoordGrid::CoordGrid(int, math::Vector3T<float> const&): jumps straight to the base-object constructor

    // 0x100499660, 96 bytes, base-object constructor, inline, placed by class name
    // CoordGrid::CoordGrid(int, math::Vector3T<float> const&)
    void CoordGrid::CoordGrid(int param_1, Vector3T* param_2) {
        float* pfVar1;

        field_0 = param_1;
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)param_2, 0);
        field_4 = (uint)(long)(*pfVar1 * 0.0078125);
        pfVar1 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)param_2, 2);
        field_8 = (uint)(long)(*pfVar1 * 0.0078125);
    }

    // 0x1004c7d30, 16 bytes, inline, placed by class name
    // CoordGrid::GetMapSquareX() const
    uint CoordGrid::GetMapSquareX() {
        return field_4 >> 6;
    }

    // 0x1004c7d40, 16 bytes, inline, placed by class name
    // CoordGrid::GetMapSquareZ() const
    uint CoordGrid::GetMapSquareZ() {
        return field_8 >> 6;
    }

    // 0x1004cc500, 16 bytes, complete-object constructor, inline, placed by class name
    // CoordGrid::CoordGrid(): jumps straight to the base-object constructor

    // 0x1004cc510, 32 bytes, base-object constructor, inline, placed by class name
    // CoordGrid::CoordGrid()
    void CoordGrid::CoordGrid() {
        field_0 = 4294967295;
        field_4 = 0;
        field_8 = 0;
    }

    // 0x1006e67f0, 16 bytes, complete-object constructor, inline, placed by class name
    // CoordGrid::CoordGrid(int, unsigned int, unsigned int, unsigned int, unsigned int): jumps straight to the base-object constructor

    // 0x1006e9a50, 48 bytes, base-object constructor, inline, placed by class name
    // CoordGrid::CoordGrid(int, unsigned int, unsigned int, unsigned int, unsigned int)
    void CoordGrid::CoordGrid(int param_1, uint param_2, uint param_3, uint param_4, uint param_5) {
        field_0 = param_1;
        field_4 = param_4 & 63 | param_2 << 6;
        field_8 = param_5 & 63 | param_3 << 6;
    }

} // namespace jag::game
