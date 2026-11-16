// libs/oldscape/jagex3/sound/floor.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::sound {
    class Floor {
    public:
        class FloorDecoder;
        ulong LowNeighbour(Array<int, eastl::allocator> const&, int);
        ulong HighNeighbour(Array<int, eastl::allocator> const&, int);
        int RenderPoint(int, int, int, int, int) const;
        void RenderLine(int, int, int, int, Array<float, eastl::allocator>&, int) const;
        Floor();
        PacketDecode(JagVorbis const&, BitUnpacker&) const;
        ~Floor();
        Floor(Floor&&);
        static /* 1024 bytes */ m_inverseDBTable; // initialised in its definition
        static /* 4112 bytes */ m_rangeVector;    // initialised in its definition

        // data members, from how the methods use this: 136 bytes
        char _unknown_0[8];
        ulong field_8;      // offset 8
        ScriptOp* field_16; // offset 16
        int field_24;       // offset 24
        char _unknown_28[108];
    };

    class Floor::FloorDecoder {
    public:
        void QuickSort(int, int);
        FloorDecoder(Floor const&, bool, Array<int, eastl::allocator>, Array<int, eastl::allocator>,
                     Array<bool, eastl::allocator>);
        FloorDecoder(FloorDecoder&&);
        ~FloorDecoder();
        void SynthMul(Array<float, eastl::allocator>&, int);
        HasResidue() const;

        // data members, from how the methods use this: 72 bytes
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* field_0; // offset 0
        undefined1 m_hasResidue;                                         // offset 8
        char _unknown_9[63];
    };

    // 0x100297aa0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // Floor::FloorDecoder::FloorDecoder(Floor const&, bool, Array<int, eastl::allocator>, Array<int, eastl::allocator>, Array<bool, eastl::allocator>): jumps straight to the base-object constructor

    // 0x100297b90, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // Floor::FloorDecoder::FloorDecoder(Floor::FloorDecoder&&): jumps straight to the base-object constructor

    // 0x100297ba0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Floor::FloorDecoder::~FloorDecoder(): jumps straight to the base-object destructor

    // 0x1002a7b50, 128 bytes, base-object constructor, inline, placed by class name
    // Floor::FloorDecoder::FloorDecoder(Floor const&, bool, Array<int, eastl::allocator>, Array<int, eastl::allocator>, Array<bool, eastl::allocator>)
    void Floor::FloorDecoder::FloorDecoder(vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* param_1,
                                           undefined1 param_2, Array* param_4, Array* param_5, Array* param_6) {
        field_0 = param_1;
        m_hasResidue = param_2;
        new (&field_16, param_4) Array<int, eastl::allocator>();
        new (&field_40, param_5) Array<int, eastl::allocator>();
        new (&field_64, param_6) Array<bool, eastl::allocator>();
    }

    // 0x1002a7bd0, 80 bytes, base-object constructor, inline, placed by class name
    // Floor::FloorDecoder::FloorDecoder(Floor::FloorDecoder&&)
    void Floor::FloorDecoder::FloorDecoder(FloorDecoder* param_1) {
        m_hasResidue = param_1->m_hasResidue;
        field_0 = param_1->field_0;
        new (&field_16, (Array*)&param_1->field_16) Array<int, eastl::allocator>();
        new (&field_40, (Array*)&param_1->field_40) Array<int, eastl::allocator>();
        new (&field_64, (Array*)&param_1->field_64) Array<bool, eastl::allocator>();
    }

    // 0x1002a7c80, 48 bytes, base-object destructor, inline, placed by class name
    // Floor::FloorDecoder::~FloorDecoder()
    void Floor::FloorDecoder::~FloorDecoder() {
        (&field_64)->~Array();
        (&field_40)->~Array();
        (&field_16)->~Array();
    }

    // 0x1002aa3d0, 16 bytes, complete-object destructor, inline, placed by class name
    // Floor::~Floor(): jumps straight to the base-object destructor

    // 0x1002aa3e0, 80 bytes, base-object destructor, inline, placed by class name
    // Floor::~Floor()
    void Floor::~Floor() {
        (&field_128)->~Array();
        (&field_104)->~Array();
        (&field_80)->~Array();
        (&field_56)->~Array();
        (&field_32)->~Array();
        ~Array();
    }

    // 0x1002aa820, 16 bytes, complete-object constructor, inline, placed by class name
    // Floor::Floor(Floor&&): jumps straight to the base-object constructor

    // 0x1002aa830, 112 bytes, base-object constructor, inline, placed by class name
    // Floor::Floor(Floor&&)
    void Floor::Floor(Floor* param_1) {
        new (this) Array<int, eastl::allocator>(param_1);
        field_24 = param_1->field_24;
        new (&field_32, (Array*)&param_1->field_32) Array<int, eastl::allocator>();
        new (&field_56, (Array*)&param_1->field_56) Array<int, eastl::allocator>();
        new (&field_80, (Array*)&param_1->field_80) Array<int, eastl::allocator>();
        new (&field_104, (Array*)&param_1->field_104) Array<int, eastl::allocator>();
        new (&field_128, (Array*)&param_1->field_128) Array<Array<int, eastl::allocator>, eastl::allocator>();
    }

} // namespace jag::oldscape::sound
