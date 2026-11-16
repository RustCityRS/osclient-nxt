// libs/oldscape/rs2lib/worldmap/WorldmapAreaMetadata.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::rs2lib::worldmap {
    class WorldmapAreaMetadata {
    public:
        int GetMaxMapX() const;
        void GetDebugName() const;
        bool IsDefaultMap() const;
        void GetOriginY() const;
        void GetOriginX() const;
        void GetOriginZ() const;
        WorldmapAreaMetadata();
        ~WorldmapAreaMetadata();
        void SetMinMapX(int arg1);
        void GetNiceName() const;
        int GetMaxMapZ() const;
        unsigned int GetId() const;
        int GetMinMapX() const;
        CoordMapSquare GetOrigin() const;
        TextWrapMode GetBackgroundColour() const;
        uint32_t GetMinMapZ() const;
        unsigned int GetAdvisedZoom() const;
        void SetMaxMapX(int arg1);
        void SetMinMapZ(int arg1);
        void SetMaxMapZ(int arg1);
        void Unpack(PacketJ<Array<unsigned char>>& packetJ, int arg2, ErrorCapture& errorCapture);
        auto UnpackSubarea(PacketJ<Array<unsigned char>>& packetJ, ErrorCapture& errorCapture);
        void CalcBounding();
        unsigned long ContainsSourceTile(int arg1, int arg2, int arg3);
        unsigned long ContainsTargetTile(int arg1, int arg2);
        auto SourceToTargetTile(int arg1, int arg2, int arg3);
        CoordGrid TargetToSourceTile(int arg1, int arg2);

    private:
        unsigned int m_id;
        uint8_t _unknown_4[68];
        uint64_t m_backgroundColour;
        CoordMapSquare m_origin;
        int m_minMapX;
        int m_maxMapX;
        int m_minMapZ;
        int m_maxMapZ;
        uint16_t field_108;
        uint8_t _unknown_110[294];
    };

    // 0x100026100
    bool WorldmapAreaMetadata::IsDefaultMap() const {
        return *(uint8_t*)((long)&field_108 + 1);
    }

    // 0x1000297a0
    void WorldmapAreaMetadata::GetOriginY() const {
        m_origin->GetX();
    }

    // 0x1000297b0
    void WorldmapAreaMetadata::GetOriginX() const {
        m_origin->GetZ();
    }

    // 0x1000297c0
    void WorldmapAreaMetadata::GetOriginZ() const {
        m_origin->GetPos();
    }

    // 0x100057a10
    WorldmapAreaMetadata::WorldmapAreaMetadata()
        : m_id(4294967295), m_backgroundColour(18446744073709551615),
          m_origin((CoordGrid*)&rs2lib::CoordGrid::CoordGridNull), m_minMapX(2147483647), m_maxMapX(0),
          m_minMapZ(2147483647), m_maxMapZ(0), field_108(1) {}

    // 0x10012c430
    WorldmapAreaMetadata::~WorldmapAreaMetadata() {
        field_112.~vector();
        field_40.~basic_string();
        field_8.~basic_string();
    }

    // 0x10016b490
    uint32_t WorldmapAreaMetadata::GetMinMapZ() const {
        return m_seqDelay;
    }

    // 0x10016b4a0
    unsigned int WorldmapAreaMetadata::GetAdvisedZoom() const {
        return m_stickTime;
    }

    // 0x1001f7250
    void WorldmapAreaMetadata::SetMaxMapX(int arg1) {
        m_maxMapX = arg1;
    }

    // 0x1001f7260
    void WorldmapAreaMetadata::SetMinMapZ(int arg1) {
        m_minMapZ = arg1;
    }

    // 0x1001f7270
    void WorldmapAreaMetadata::SetMaxMapZ(int arg1) {
        m_level = arg1;
    }

} // namespace jag::oldscape::rs2lib::worldmap
