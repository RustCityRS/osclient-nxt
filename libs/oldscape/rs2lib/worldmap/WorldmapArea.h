// libs/oldscape/rs2lib/worldmap/WorldmapArea.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rs2lib::worldmap {
    class WorldmapArea {
    public:
        ~WorldmapArea();
        WorldmapArea();
        void Unpack(PacketJ<Array<unsigned char, eastl::allocator>>&, PacketJ<Array<unsigned char, eastl::allocator>>&,
                    int, bool, ErrorCapture&);
        void UnpackStaticMapElements(PacketJ<Array<unsigned char, eastl::allocator>>&, bool);

        // data members, from how the methods use this: 216 bytes
        int field_0; // offset 0
        char _unknown_4[68];
        undefined4 field_72; // offset 72
        uint field_76;       // offset 76
        CoordGrid field_80;  // offset 80
        int field_96;        // offset 96
        int field_100;       // offset 100
        int field_104;       // offset 104
        PacketJ field_108;   // offset 108
        PacketJ field_109;   // offset 109
        char _unknown_110[106];
    };

    // 0x10012c3e0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // WorldmapArea::~WorldmapArea(): jumps straight to the base-object destructor

    // 0x10012c3f0, 64 bytes, base-object destructor, inline, placed by class name and debug map
    // WorldmapArea::~WorldmapArea()
    void WorldmapArea::~WorldmapArea() {
        (&field_208)->~list();
        (&field_176)->~list();
        (&field_144)->~list();
        ~WorldmapAreaMetadata();
    }

    // 0x1001f98e0, 16 bytes, complete-object constructor, inline, placed by class name
    // WorldmapArea::WorldmapArea(): jumps straight to the base-object constructor

    // 0x1001f9900, 128 bytes, base-object constructor, inline, placed by class name
    // WorldmapArea::WorldmapArea()
    void WorldmapArea::WorldmapArea() {
        new (this) WorldmapAreaMetadata();
        new (&field_144) eastl::list<shared_ptr<MapSquareData>, eastl::allocator>();
        new (&field_176) eastl::list<shared_ptr<MapZoneData>, eastl::allocator>();
        new (&field_208) eastl::list<shared_ptr<StaticMapElement>, eastl::allocator>();
    }

} // namespace jag::oldscape::rs2lib::worldmap
