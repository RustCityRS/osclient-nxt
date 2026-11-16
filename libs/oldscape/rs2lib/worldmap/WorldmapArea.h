// libs/oldscape/rs2lib/worldmap/WorldmapArea.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::rs2lib::worldmap {
    class WorldmapArea {
    public:
        ~WorldmapArea();
        WorldmapArea();
        void Unpack(PacketJ<Array<unsigned char>>& packetJ1, PacketJ<Array<unsigned char>>& packetJ2, int arg3,
                    bool arg4, ErrorCapture& errorCapture);
        void UnpackStaticMapElements(PacketJ<Array<unsigned char>>& packetJ, bool arg2);

    private:
        int field_0;
        uint8_t _unknown_4[68];
        uint32_t field_72;
        unsigned int field_76;
        CoordGrid field_80;
        int field_96;
        int field_100;
        int field_104;
        PacketJ<Array<unsigned char>> field_108;
        PacketJ<Array<unsigned char>> field_109;
        uint8_t _unknown_110[106];
    };

    // 0x10012c3f0
    WorldmapArea::~WorldmapArea() {
        field_208.~list();
        field_176.~list();
        field_144.~list();
    }

    // 0x1001f9900
    WorldmapArea::WorldmapArea() : WorldmapAreaMetadata() {}

} // namespace jag::oldscape::rs2lib::worldmap
