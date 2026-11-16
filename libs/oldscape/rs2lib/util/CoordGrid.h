// libs/oldscape/rs2lib/util/CoordGrid.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::rs2lib {
    class CoordGrid {
    public:
        unsigned int GetZ() const;
        unsigned int GetX() const;
        void IsSet() const;
        unsigned int BitPack(int arg1, int arg2, int arg3);
        unsigned int GetLevel() const;
        void InRegion() const;
        int GetZoneX() const;
        int GetZoneZ() const;
        void SetZoneX(int arg1);
        void SetZoneZ(int arg1);
        unsigned int GetZoneTileX() const;
        unsigned int GetZoneTileZ() const;
        void SetZoneTileX(int arg1);
        void SetZoneTileZ(int arg1);
        void Unset();
        uint8_t operator!=(const CoordGrid& coordGrid) const;
        uint32_t operator==(const CoordGrid& coordGrid) const;
        void SetX(int arg1);
        void SetZ(int arg1);
        void SetLevel(int arg1);
        CoordGrid(int arg1, int arg2, int arg3);
        CoordGrid();
        CoordGrid(const CoordGrid& coordGrid);
        CoordGrid(int arg1);
        CoordGrid(int arg1, const CoordMapSquare& coordMapSquare);
        CoordGrid(eastl::string str);
        CoordGrid(eastl::string str, char arg2);
        void Set(int arg1);
        void Set(int arg1, int arg2, int arg3);
        void Set(CoordGrid coordGrid);
        auto ToString() const;
        auto ToString(eastl::string str) const;
        int GetMapSquareX() const;
        int GetMapSquareZ() const;
        void ToBitPacked() const;
        unsigned int GetMapSquareTileX() const;
        unsigned int GetMapSquareTileZ() const;
        static CoordGrid CoordGridNull; // = CoordGrid(-1, -1, -1)

    private:
        unsigned int m_level;
        unsigned int m_x;
        unsigned int m_z;
        uint8_t _unknown_12[4];
    };

    // 0x1000b7710
    void CoordGrid::IsSet() const {
        *this != CoordGridNull;
    }

    // 0x1000b7b00
    unsigned int CoordGrid::BitPack(int arg1, int arg2, int arg3) {
        return arg2 << 14 | arg1 << 28 | arg3;
    }

    // 0x1000e5ce0
    void CoordGrid::InRegion() const {
        constants::MapConstants::IsRegionCoord(m_x);
    }

    // 0x1000e5cf0
    int CoordGrid::GetZoneX() const {
        return (int)m_zoneZ >> 3;
    }

    // 0x1000e5d00
    int CoordGrid::GetZoneZ() const {
        return (int)m_z >> 3;
    }

    // 0x1000e5d10
    void CoordGrid::SetZoneX(int arg1) {
        m_x = (m_x & 7) + (arg1 & 2047U) * 8;
    }

    // 0x1000e5d30
    void CoordGrid::SetZoneZ(int arg1) {
        m_z = (m_z & 7) + (arg1 & 2047U) * 8;
    }

    // 0x1000e5d60
    unsigned int CoordGrid::GetZoneTileX() const {
        return m_x & 7;
    }

    // 0x1000e5d70
    unsigned int CoordGrid::GetZoneTileZ() const {
        return m_z & 7;
    }

    // 0x1000e5d80
    void CoordGrid::SetZoneTileX(int arg1) {
        m_x = arg1 & 7U | m_x & 4294967288;
    }

    // 0x1000e5da0
    void CoordGrid::SetZoneTileZ(int arg1) {
        m_z = arg1 & 7U | m_z & 4294967288;
    }

    // 0x10011c9c0
    void CoordGrid::Unset() {
        m_z = CoordGridNull.m_z;
        uint32_t uVar1 = CoordGridNull._4_4_;
        m_level = (uint32_t)CoordGridNull;
        m_x = uVar1;
    }

    // 0x100124fd0
    uint8_t CoordGrid::operator!=(const CoordGrid& coordGrid) const {
        return *this == coordGrid ^ 1;
    }

    // 0x100124fe0
    uint32_t CoordGrid::operator==(const CoordGrid& coordGrid) const {
        if ((field_0 == coordGrid.m_level) && (field_4 == coordGrid.m_x)) {
            return field_8 == coordGrid.m_z;
        }
        return 0;
    }

    // 0x10015ecc0
    void CoordGrid::SetX(int arg1) {
        m_x = arg1 & 7;
    }

    // 0x10015ecd0
    void CoordGrid::SetZ(int arg1) {
        m_z = arg1 & 7;
    }

    // 0x10016e270
    void CoordGrid::SetLevel(int arg1) {
        m_level = arg1 & 3;
    }

    // 0x1001fc300
    int CoordGrid::GetMapSquareX() const {
        return (int)m_x >> 6;
    }

    // 0x1001fc310
    int CoordGrid::GetMapSquareZ() const {
        return (int)m_z >> 6;
    }

    // 0x100213700
    void CoordGrid::ToBitPacked() const {
        BitPack(m_level, m_x, m_z);
    }

    // 0x100214c40
    unsigned int CoordGrid::GetMapSquareTileX() const {
        return field_4 & 63;
    }

    // 0x100214c50
    unsigned int CoordGrid::GetMapSquareTileZ() const {
        return field_8 & 63;
    }

} // namespace jag::oldscape::rs2lib
