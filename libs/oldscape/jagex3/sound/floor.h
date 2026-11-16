// libs/oldscape/jagex3/sound/floor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::sound {
    class Floor {
    public:
        class FloorDecoder;
        unsigned long LowNeighbour(const Array<int>& arg1, int arg2);
        unsigned long HighNeighbour(const Array<int>& arg1, int arg2);
        int RenderPoint(int arg1, int arg2, int arg3, int arg4, int arg5) const;
        void RenderLine(int arg1, int arg2, int arg3, int arg4, Array<float>& arg5, int arg6) const;
        Floor();
        Floor* PacketDecode(const JagVorbis& jagVorbis, BitUnpacker& bitUnpacker) const;
        ~Floor();
        Floor(Floor&& floor);
        static int32_t m_inverseDBTable[256]; // initialised in its definition
        static int32_t m_rangeVector[1028];   // initialised in its definition

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        unsigned int* field_16;
        int field_24;
        uint8_t _unknown_28[108];
    };

    class Floor::FloorDecoder {
    public:
        void QuickSort(int arg1, int arg2);
        FloorDecoder(const Floor& floor, bool arg2, Array<int> arg3, Array<int> arg4, Array<bool> arg5);
        FloorDecoder(FloorDecoder&& floorDecoder);
        ~FloorDecoder();
        void SynthMul(Array<float>& arg1, int arg2);
        bool HasResidue() const;

    private:
        Floor* field_0;
        bool m_hasResidue;
        uint8_t _unknown_9[63];
    };

    // 0x1002a7b50
    Floor::FloorDecoder::FloorDecoder(const Floor& floor, bool arg2, Array<int> arg3, Array<int> arg4, Array<bool> arg5)
        : field_0(floor), m_hasResidue(arg2), field_16(arg3), field_40(arg4), field_64(arg5) {}

    // 0x1002a7bd0
    Floor::FloorDecoder::FloorDecoder(Floor::FloorDecoder&& floorDecoder)
        : m_hasResidue(floorDecoder.m_hasResidue), field_0(floorDecoder.field_0), field_16(&floorDecoder.field_16),
          field_40(&floorDecoder.field_40), field_64(&floorDecoder.field_64) {}

    // 0x1002a7c80
    Floor::FloorDecoder::~FloorDecoder() {
        field_64.~Array();
        field_40.~Array();
        field_16.~Array();
    }

    // 0x1002aa3e0
    Floor::~Floor() {
        field_128.~Array();
        field_104.~Array();
        field_80.~Array();
        field_56.~Array();
        field_32.~Array();
    }

    // 0x1002aa830
    Floor::Floor(Floor&& floor)
        : Array<int>(floor), field_24(floor.field_24), field_32(&floor.field_32), field_56(&floor.field_56),
          field_80(&floor.field_80), field_104(&floor.field_104), field_128(&floor.field_128) {}

} // namespace jag::oldscape::sound
