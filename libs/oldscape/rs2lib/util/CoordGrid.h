// libs/oldscape/rs2lib/util/CoordGrid.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rs2lib {
    class CoordGrid {
    public:
        uint GetZ() const;
        uint GetX() const;
        void IsSet() const;
        uint BitPack(int, int, int);
        uint GetLevel() const;
        void InRegion() const;
        GetZoneX() const;
        int GetZoneZ() const;
        void SetZoneX(int);
        void SetZoneZ(int);
        uint GetZoneTileX() const;
        uint GetZoneTileZ() const;
        void SetZoneTileX(int);
        void SetZoneTileZ(int);
        void Unset();
        byte operator!=(CoordGrid const&) const;
        operator==(CoordGrid const&) const;
        void SetX(int);
        void SetZ(int);
        void SetLevel(int);
        CoordGrid(int, int, int);
        CoordGrid();
        CoordGrid(CoordGrid const&);
        CoordGrid(int);
        CoordGrid(int, CoordMapSquare const&);
        CoordGrid(eastl::string);
        CoordGrid(eastl::string, char);
        void Set(int);
        void Set(int, int, int);
        void Set(CoordGrid);
        ToString() const;
        CoordGrid* ToString(eastl::string) const;
        int GetMapSquareX() const;
        int GetMapSquareZ() const;
        void ToBitPacked() const;
        GetMapSquareTileX() const;
        GetMapSquareTileZ() const;
        static CoordGrid /* 16 bytes */ CoordGridNull; // = CoordGrid(-1, -1, -1)

        // data members, from how the methods use this: 16 bytes
        uint m_level; // offset 0
        uint m_x;     // offset 4
        uint m_z;     // offset 8
        char _unknown_12[4];
    };

    // 0x1000b7710, 32 bytes, inline, placed by class name and debug map
    // CoordGrid::IsSet() const
    void CoordGrid::IsSet() {
        game::CoordGrid::operator!=((CoordGrid*)this, (CoordGrid*)&CoordGridNull);
    }

    // 0x1000b7b00, 32 bytes, inline, placed by class name
    // CoordGrid::BitPack(int, int, int)
    uint CoordGrid::BitPack(int param_1, int param_2, int param_3) {
        return param_2 << 14 | param_1 << 28 | param_3;
    }

    // 0x1000e5ce0, 16 bytes, inline, placed by class name
    // CoordGrid::InRegion() const
    void CoordGrid::InRegion() {
        constants::MapConstants::IsRegionCoord(m_x);
    }

    // 0x1000e5cf0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // CoordGrid::GetZoneX() const
    /* CoordZoneSource::GetMapSquareZ() const */

    int CoordZoneSource::GetMapSquareZ() {
        return (int)m_zoneZ >> 3;
    }

    // 0x1000e5d00, 16 bytes, inline, placed by class name
    // CoordGrid::GetZoneZ() const
    int CoordGrid::GetZoneZ() {
        return (int)m_z >> 3;
    }

    // 0x1000e5d10, 32 bytes, inline, placed by class name
    // CoordGrid::SetZoneX(int)
    void CoordGrid::SetZoneX(int param_1) {
        m_x = (m_x & 7) + (param_1 & 2047U) * 8;
    }

    // 0x1000e5d30, 32 bytes, inline, placed by class name
    // CoordGrid::SetZoneZ(int)
    void CoordGrid::SetZoneZ(int param_1) {
        m_z = (m_z & 7) + (param_1 & 2047U) * 8;
    }

    // 0x1000e5d60, 16 bytes, inline, placed by class name
    // CoordGrid::GetZoneTileX() const
    uint CoordGrid::GetZoneTileX() {
        return m_x & 7;
    }

    // 0x1000e5d70, 16 bytes, inline, placed by class name
    // CoordGrid::GetZoneTileZ() const
    uint CoordGrid::GetZoneTileZ() {
        return m_z & 7;
    }

    // 0x1000e5d80, 32 bytes, inline, placed by class name
    // CoordGrid::SetZoneTileX(int)
    void CoordGrid::SetZoneTileX(int param_1) {
        m_x = param_1 & 7U | m_x & 4294967288;
    }

    // 0x1000e5da0, 32 bytes, inline, placed by class name
    // CoordGrid::SetZoneTileZ(int)
    void CoordGrid::SetZoneTileZ(int param_1) {
        m_z = param_1 & 7U | m_z & 4294967288;
    }

    // 0x10011c9c0, 32 bytes, inline, placed by class name
    // CoordGrid::Unset()
    void CoordGrid::Unset() {
        undefined4 uVar1;

        m_z = DAT_100fc9248;
        uVar1 = CoordGridNull._4_4_;
        m_level = (undefined4)CoordGridNull;
        m_x = uVar1;
    }

    // 0x100124fd0, 16 bytes, inline, placed by class name
    // CoordGrid::operator!=(CoordGrid const&) const
    /* game::CoordGrid::TEMPNAMEPLACEHOLDERVALUE(game::CoordGrid const&) const */

    byte game::CoordGrid::operator!=(CoordGrid* param_1) {
        return operator==(this, param_1) ^ 1;
    }

    // 0x100124fe0, 48 bytes, inline, placed by class name
    // CoordGrid::operator==(CoordGrid const&) const
    /* game::CoordGrid::TEMPNAMEPLACEHOLDERVALUE(game::CoordGrid const&) const */

    undefined4 game::CoordGrid::operator==(CoordGrid* param_1) {
        if ((field_0 == param_1->field_0) && (field_4 == param_1->field_4)) {
            return CONCAT31((int3)(field_8 >> 8), field_8 == param_1->field_8);
        }
        return 0;
    }

    // 0x10015ecc0, 16 bytes, inline, placed by class name
    // CoordGrid::SetX(int)
    void CoordGrid::SetX(int param_1) {
        m_x = param_1 & 7;
    }

    // 0x10015ecd0, 16 bytes, inline, placed by class name
    // CoordGrid::SetZ(int)
    void CoordGrid::SetZ(int param_1) {
        m_z = param_1 & 7;
    }

    // 0x10016e270, 16 bytes, inline, placed by class name
    // CoordGrid::SetLevel(int)
    void CoordGrid::SetLevel(int param_1) {
        m_level = param_1 & 3;
    }

    // 0x1001fc300, 16 bytes, inline, placed by class name
    // CoordGrid::GetMapSquareX() const
    int CoordGrid::GetMapSquareX() {
        return (int)m_x >> 6;
    }

    // 0x1001fc310, 16 bytes, inline, placed by class name
    // CoordGrid::GetMapSquareZ() const
    int CoordGrid::GetMapSquareZ() {
        return (int)m_z >> 6;
    }

    // 0x100213700, 32 bytes, inline, placed by class name
    // CoordGrid::ToBitPacked() const
    void CoordGrid::ToBitPacked() {
        BitPack(m_level, m_x, m_z);
    }

    // 0x100214c40, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // CoordGrid::GetMapSquareTileX() const
    /* game::CoordGrid::GetLocalX() const */

    uint game::CoordGrid::GetLocalX() {
        return field_4 & 63;
    }

    // 0x100214c50, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // CoordGrid::GetMapSquareTileZ() const
    /* game::CoordGrid::GetLocalZ() const */

    uint game::CoordGrid::GetLocalZ() {
        return field_8 & 63;
    }

} // namespace jag::oldscape::rs2lib
