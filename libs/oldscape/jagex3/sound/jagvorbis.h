// libs/oldscape/jagex3/sound/jagvorbis.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::sound {
    class JagVorbis {
    public:
        ToWaveMultistep(Array<int, eastl::allocator>&);
        Float32Unpack(int);
        void DecodeJagVorbis(Array<unsigned char, eastl::allocator>&);
        void ProcessHeaders(Array<unsigned char, eastl::allocator>&);
        DecodeAudioPacket(int);
        GetHeaders(jagex3::Js5&);
        Js5* Load(jagex3::Js5&, eastl::string&, eastl::string&);
        Js5* Load(jagex3::Js5&, eastl::string&);
        JagVorbis* Load(jagex3::Js5&, int, int);
        JagVorbis* Load(jagex3::Js5&, int);
        JagVorbis(Array<unsigned char, eastl::allocator>&);
        ToWave();
        ~JagVorbis();
        static PacketT<Array<unsigned char, eastl::allocator>> /* 32 bytes */
            m_staticUnpacker;                                  // = PacketT<Array<unsigned char,eastl::allocator>>()
        static Array<CodeBook, eastl::allocator> /* 24 bytes */ m_codebook; // = Array<CodeBook,eastl::allocator>()
        static Array<float, eastl::allocator> /* 24 bytes */ m_A0;          // = Array<float,eastl::allocator>()
        static Array<float, eastl::allocator> /* 24 bytes */ m_B0;          // = Array<float,eastl::allocator>()
        static Array<float, eastl::allocator> /* 24 bytes */ m_C0;          // = Array<float,eastl::allocator>()
        static Array<float, eastl::allocator> /* 24 bytes */ m_A1;          // = Array<float,eastl::allocator>()
        static Array<float, eastl::allocator> /* 24 bytes */ m_B1;          // = Array<float,eastl::allocator>()
        static Array<float, eastl::allocator> /* 24 bytes */ m_C1;          // = Array<float,eastl::allocator>()
        static Array<int, eastl::allocator> /* 24 bytes */ m_bitrev0;       // = Array<int,eastl::allocator>()
        static Array<int, eastl::allocator> /* 24 bytes */ m_bitrev1;       // = Array<int,eastl::allocator>()
        static /* 4 bytes */ m_blocksize0;
        static /* 4 bytes */ m_blocksize1;
        static Array<Floor, eastl::allocator> /* 24 bytes */ m_floor;        // = Array<Floor,eastl::allocator>()
        static Array<Residue, eastl::allocator> /* 24 bytes */ m_residue;    // = Array<Residue,eastl::allocator>()
        static Array<Mapping, eastl::allocator> /* 24 bytes */ m_mapping;    // = Array<Mapping,eastl::allocator>()
        static Array<bool, eastl::allocator> /* 24 bytes */ m_modeBlockflag; // = Array<bool,eastl::allocator>()
        static Array<int, eastl::allocator> /* 24 bytes */ m_modeMapping;    // = Array<int,eastl::allocator>()
        static /* 1 bytes */ m_gotHeaders;

        // data members, from how the methods use this: 144 bytes
        char _unknown_0[24];
        undefined8 field_24; // offset 24
        undefined1 field_32; // offset 32
        char _unknown_33[55];
        undefined4 field_88;  // offset 88
        undefined4 field_92;  // offset 92
        undefined4 field_96;  // offset 96
        uint field_100;       // offset 100
        undefined1 field_104; // offset 104
        char _unknown_105[31];
        undefined8 field_136; // offset 136
    };

    // 0x1002aab70, 16 bytes, complete-object destructor, inline, placed by class name
    // JagVorbis::~JagVorbis(): jumps straight to the base-object destructor

    // 0x1002aab80, 64 bytes, base-object destructor, inline, placed by class name
    // JagVorbis::~JagVorbis()
    void JagVorbis::~JagVorbis() {
        (&field_112)->~Array();
        (&field_64)->~Array();
        (&field_40)->~Array();
        ~Array();
    }

} // namespace jag::oldscape::sound
