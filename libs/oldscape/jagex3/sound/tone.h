// libs/oldscape/jagex3/sound/tone.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape {
    class TonemappingParams {
    public:
        TonemappingParams();

        // data members, from how the methods use this: 16 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[3];
        undefined8 field_4;  // offset 4
        undefined4 field_12; // offset 12
    };

    // 0x100085da0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // TonemappingParams::TonemappingParams(): jumps straight to the base-object constructor

    // 0x100085e30, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // TonemappingParams::TonemappingParams()
    void TonemappingParams::TonemappingParams() {
        field_0 = 0;
        field_4 = 4575657221408423936;
        field_12 = 0;
    }

} // namespace jag::oldscape

namespace jag::oldscape::sound {
    class Tone {
    public:
        ~Tone();
        void Load(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void LoadUncompressed(PacketJ<Array<unsigned char, eastl::allocator>>&, int);
        Generate(int, int);
        void StaticInit();
        Tone();
        int WaveFunc(int, int, int);
        Tone* FromUncompressedTone(Array<unsigned char, eastl::allocator> const&);
        static /* 8 bytes */ m_deciSemitone; // = 4607208507887251972
        static /* 8 bytes */ m_initDone;
        static Array<int, eastl::allocator> /* 24 bytes */ m_buf;   // = Array<int,eastl::allocator>()
        static Array<int, eastl::allocator> /* 24 bytes */ m_noise; // = Array<int,eastl::allocator>()
        static Array<int, eastl::allocator> /* 24 bytes */ m_sine;  // = Array<int,eastl::allocator>()
        static /* 20 bytes */ m_fPos;
        static /* 20 bytes */ m_fDel;
        static /* 20 bytes */ m_fAmp;
        static /* 20 bytes */ m_fMulti;
        static /* 24 bytes */ m_fOffset;

        // data members, from how the methods use this: 168 bytes
        bool field_0; // offset 0
        char _unknown_1[3];
        uint field_4; // offset 4
        uint field_8; // offset 8
        char _unknown_12[68];
        undefined8 field_80;  // offset 80
        undefined8 field_88;  // offset 88
        undefined8 field_96;  // offset 96
        undefined8 field_104; // offset 104
        undefined8 field_112; // offset 112
        undefined8 field_120; // offset 120
        undefined8 field_128; // offset 128
        char _unknown_136[4];
        uint field_140; // offset 140
        uint field_144; // offset 144
        char _unknown_148[20];
    };

    // 0x100137e50, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Tone::~Tone(): jumps straight to the base-object destructor

    // 0x100137e60, 128 bytes, base-object destructor, inline, placed by class name and debug map
    // Tone::~Tone()
    void Tone::~Tone() {
        (&field_160)->~unique_ptr();
        (&field_152)->~unique_ptr();
        (&field_72)->~unique_ptr();
        (&field_64)->~unique_ptr();
        (&field_56)->~unique_ptr();
        (&field_48)->~unique_ptr();
        (&field_40)->~unique_ptr();
        (&field_32)->~unique_ptr();
        (&field_24)->~unique_ptr();
        (&field_16)->~unique_ptr();
    }

} // namespace jag::oldscape::sound
