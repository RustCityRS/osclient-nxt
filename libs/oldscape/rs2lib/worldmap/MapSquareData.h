// libs/oldscape/rs2lib/worldmap/MapSquareData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100225fc0
    oldscape::rs2lib::worldmap::MapZoneData* placement_new<oldscape::rs2lib::worldmap::MapZoneData>(void* arg1) {
        new (arg1) oldscape::rs2lib::worldmap::MapZoneData();
        return arg1;
    }

    // 0x100225fe0
    ref_counter_shared<oldscape::rs2lib::worldmap::MapZoneData>*
    placement_new<ref_counter_shared<oldscape::rs2lib::worldmap::MapZoneData>, int,
                  oldscape::rs2lib::worldmap::MapZoneData*&>(void* arg1, int&& arg2,
                                                             oldscape::rs2lib::worldmap::MapZoneData*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::worldmap::MapZoneData>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100226010
    ref_counter_shared<oldscape::rs2lib::worldmap::MapZoneData>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::worldmap::MapZoneData* mapZoneData)
        : ref_counter_base() {}

    // 0x100226050
    void ref_counter_shared<oldscape::rs2lib::worldmap::MapZoneData>::DeleteData() {
        ref_counter_shared<oldscape::rs2lib::worldmap::MapZoneData> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((MapZoneData*)((long)&(this[3]._vptr)->_dtor + lVar2))->~MapZoneData();
                    prVar1 =
                        (ref_counter_shared<oldscape::rs2lib::worldmap::MapZoneData> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 208;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1002260a0
    oldscape::rs2lib::worldmap::StaticMapElement*
    placement_new<oldscape::rs2lib::worldmap::StaticMapElement, oldscape::rs2lib::CoordGrid const&,
                  oldscape::rs2lib::CoordGrid&, int&, decltype(nullptr)>(void* arg1,
                                                                         const oldscape::rs2lib::CoordGrid& coordGrid1,
                                                                         oldscape::rs2lib::CoordGrid& coordGrid2,
                                                                         int& arg4, decltype(nullptr)&& arg5) {
        new (arg1) oldscape::rs2lib::worldmap::StaticMapElement(coordGrid1, coordGrid2, arg4, nullptr);
        return arg1;
    }

} // namespace jag

namespace jag::oldscape::rs2lib::worldmap {
    class MapSquareData {
    public:
        // virtual methods in vtable order
        virtual void DeserialiseCompositeMetaData(PacketJ<Array<unsigned char>>& packetJ, ErrorCapture& errorCapture);
        virtual void DeserialiseAreaGeography(PacketJ<Array<unsigned char>>& packetJ, ErrorCapture& errorCapture);
        virtual uint64_t GetZoneX();
        virtual uint64_t GetZoneZ();
        virtual void SerialiseCompositeMetaData(PacketJ<Array<unsigned char>>& packetJ);
        virtual void SerialiseAreaGeography(PacketJ<Array<unsigned char>>& packetJ);
        virtual uint64_t GeneratePreviewInner(Array<Array<int>> arg1, int arg2, int arg3);
        MapSquareData();
        MapSquareData(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
        unsigned int HashCode();
        ~MapSquareData();

    private:
        uint8_t _unknown_8[120];
        int field_128;
        int field_132;
        uint8_t _unknown_136[24];
        unsigned int field_160;
        unsigned int field_164;
        unsigned int field_168;
        char field_172;
        uint8_t field_173;
        uint8_t _unknown_174[2];
        unsigned int field_176;
        unsigned int field_180;
        unsigned int field_184;
        int field_188;
    };

    // 0x100225e90
    MapSquareData::~MapSquareData() {}

} // namespace jag::oldscape::rs2lib::worldmap
