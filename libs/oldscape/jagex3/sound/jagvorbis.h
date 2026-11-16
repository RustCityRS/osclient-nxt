// libs/oldscape/jagex3/sound/jagvorbis.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::sound {
    class JagVorbis {
    public:
        auto ToWaveMultistep(Array<int>& arg1);
        uint64_t Float32Unpack(int arg1);
        void DecodeJagVorbis(Array<unsigned char>& arg1);
        void ProcessHeaders(Array<unsigned char>& arg1);
        JagVorbis* DecodeAudioPacket(int arg1);
        void GetHeaders(jagex3::Js5& js5);
        auto Load(jagex3::Js5& js5, eastl::string& str1, eastl::string& str2);
        auto Load(jagex3::Js5& js5, eastl::string& str);
        auto Load(jagex3::Js5& js5, int arg2, int arg3);
        auto Load(jagex3::Js5& js5, int arg2);
        JagVorbis(Array<unsigned char>& arg1);
        JagVorbis* ToWave();
        ~JagVorbis();
        static PacketT<Array<unsigned char>> m_staticUnpacker; // = PacketT<Array<unsigned char>>()
        static Array<CodeBook> m_codebook;                     // = Array<CodeBook>()
        static Array<float> m_A0;                              // = Array<float>()
        static Array<float> m_B0;                              // = Array<float>()
        static Array<float> m_C0;                              // = Array<float>()
        static Array<float> m_A1;                              // = Array<float>()
        static Array<float> m_B1;                              // = Array<float>()
        static Array<float> m_C1;                              // = Array<float>()
        static Array<int> m_bitrev0;                           // = Array<int>()
        static Array<int> m_bitrev1;                           // = Array<int>()
        static uint m_blocksize0;
        static uint m_blocksize1;
        static Array<Floor> m_floor;        // = Array<Floor>()
        static Array<Residue> m_residue;    // = Array<Residue>()
        static Array<Mapping> m_mapping;    // = Array<Mapping>()
        static Array<bool> m_modeBlockflag; // = Array<bool>()
        static Array<int> m_modeMapping;    // = Array<int>()
        static bool m_gotHeaders;

    private:
        uint8_t _unknown_0[24];
        uint32_t field_24;
        uint8_t _unknown_28[4];
        uint8_t field_32;
        uint8_t _unknown_33[55];
        uint32_t field_88;
        int field_92;
        uint32_t field_96;
        unsigned int field_100;
        Array<unsigned char> field_104;
        uint8_t _unknown_105[31];
        int field_136;
        int field_140;
    };

    // 0x1002aab80
    JagVorbis::~JagVorbis() {
        field_112.~Array();
        field_64.~Array();
        field_40.~Array();
    }

} // namespace jag::oldscape::sound
