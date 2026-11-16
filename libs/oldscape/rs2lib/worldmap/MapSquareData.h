// libs/oldscape/rs2lib/worldmap/MapSquareData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100225fc0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rs2lib::worldmap::MapZoneData* placement_new<oldscape::rs2lib::worldmap::MapZoneData>(void*)
    MapZoneData* placement_new<oldscape::rs2lib::worldmap::MapZoneData>(void* param_1) {
        oldscape::rs2lib::worldmap::MapZoneData::MapZoneData(param_1);
        return param_1;
    }

    // 0x100225fe0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::worldmap::MapZoneData>* placement_new<ref_counter_shared<oldscape::rs2lib::worldmap::MapZoneData>, int, oldscape::rs2lib::worldmap::MapZoneData*&>(void*, int&&, oldscape::rs2lib::worldmap::MapZoneData*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::rs2lib::worldmap::MapZoneData>, int,
                                           oldscape::rs2lib::worldmap::MapZoneData*&>(void* param_1, int* param_2,
                                                                                      MapZoneData** param_3) {
        ref_counter_shared<oldscape::rs2lib::worldmap::MapZoneData>::ref_counter_shared(param_1, (long)*param_2,
                                                                                        *param_3);
        return param_1;
    }

    // 0x100226000, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::worldmap::MapZoneData>::ref_counter_shared(unsigned long, oldscape::rs2lib::worldmap::MapZoneData*): jumps straight to the base-object constructor

    // 0x100226010, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::worldmap::MapZoneData>::ref_counter_shared(unsigned long, oldscape::rs2lib::worldmap::MapZoneData*)
    void ref_counter_shared<oldscape::rs2lib::worldmap::MapZoneData>::ref_counter_shared(ulong param_1,
                                                                                         MapZoneData* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7900 + 16;
        *(ulong*)(this + 16) = param_1;
        *(MapZoneData**)(this + 24) = param_2;
    }

    // 0x100226050, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::worldmap::MapZoneData>::DeleteData()
    void ref_counter_shared<oldscape::rs2lib::worldmap::MapZoneData>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~MapZoneData();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 208;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1002260a0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rs2lib::worldmap::StaticMapElement* placement_new<oldscape::rs2lib::worldmap::StaticMapElement, oldscape::rs2lib::CoordGrid const&, oldscape::rs2lib::CoordGrid&, int&, decltype(nullptr)>(void*, oldscape::rs2lib::CoordGrid const&, oldscape::rs2lib::CoordGrid&, int&, decltype(nullptr)&&)
    StaticMapElement*
    jag::placement_new<oldscape::rs2lib::worldmap::StaticMapElement, oldscape::rs2lib::CoordGrid_const&,
                       oldscape::rs2lib::CoordGrid&, int&, decltype(nullptr)>(void* param_1, CoordGrid* param_2,
                                                                              CoordGrid* param_3, int* param_4,
                                                                              _func_decltype_nullptr** param_5) {
        oldscape::rs2lib::worldmap::StaticMapElement::StaticMapElement(param_1, param_2, param_3, *param_4,
                                                                       (MapTextLabel*)0);
        return param_1;
    }

} // namespace jag

namespace jag::oldscape::rs2lib::worldmap {
    class MapSquareData {
    public:
        // virtual methods in vtable order
        virtual void DeserialiseCompositeMetaData(PacketJ<Array<unsigned char, eastl::allocator>>&, ErrorCapture&);
        virtual void DeserialiseAreaGeography(PacketJ<Array<unsigned char, eastl::allocator>>&, ErrorCapture&);
        virtual GetZoneX();
        virtual GetZoneZ();
        virtual void SerialiseCompositeMetaData(PacketJ<Array<unsigned char, eastl::allocator>>&);
        virtual void SerialiseAreaGeography(PacketJ<Array<unsigned char, eastl::allocator>>&);
        virtual GeneratePreviewInner(Array<Array<int, eastl::allocator>, eastl::allocator>, int, int);
        MapSquareData();
        MapSquareData(int, int, int, int, int, int);
        uint HashCode();
        ~MapSquareData();

        // data members, from how the methods use this: 192 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[120];
        int field_128;  // offset 128
        uint field_132; // offset 132
        char _unknown_136[24];
        uint field_160;       // offset 160
        uint field_164;       // offset 164
        uint field_168;       // offset 168
        char field_172;       // offset 172
        undefined1 field_173; // offset 173
        char _unknown_174[2];
        uint field_176; // offset 176
        uint field_180; // offset 180
        uint field_184; // offset 184
        int field_188;  // offset 188
    };

    // 0x100225e80, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // MapSquareData::~MapSquareData(): jumps straight to the base-object destructor

    // 0x100225e90, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // MapSquareData::~MapSquareData()
    /* MapZoneData::~MapZoneData() */

    void MapZoneData::~MapZoneData() {
        ~PackableArea();
    }

} // namespace jag::oldscape::rs2lib::worldmap
