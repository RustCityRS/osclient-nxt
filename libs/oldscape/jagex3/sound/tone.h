// libs/oldscape/jagex3/sound/tone.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape {
    class TonemappingParams {
    public:
        TonemappingParams();

    private:
        uint8_t field_0;
        uint8_t _unknown_1[3];
        uint64_t field_4;
        uint32_t field_12;
    };

    // 0x100085e30
    TonemappingParams::TonemappingParams() : field_0(0), field_4(4575657221408423936), field_12(0) {}

} // namespace jag::oldscape

namespace jag::oldscape::sound {
    class Tone {
    public:
        ~Tone();
        void Load(PacketJ<Array<unsigned char>>& packetJ);
        void LoadUncompressed(PacketJ<Array<unsigned char>>& packetJ, int arg2);
        auto Generate(int arg1, int arg2);
        void StaticInit();
        Tone();
        int WaveFunc(int arg1, int arg2, int arg3);
        auto FromUncompressedTone(const Array<unsigned char>& arg1);
        static int64_t m_deciSemitone; // = 4607208507887251972
        static int64_t m_initDone;
        static Array<int> m_buf;   // = Array<int>()
        static Array<int> m_noise; // = Array<int>()
        static Array<int> m_sine;  // = Array<int>()
        static std::array<int, 5ul> m_fPos;
        static std::array<int, 5ul> m_fDel;
        static std::array<int, 5ul> m_fAmp;
        static std::array<int, 5ul> m_fMulti;
        static std::array<int, 5ul> m_fOffset;

    private:
        bool field_0;
        uint8_t _unknown_1[3];
        unsigned int field_4;
        unsigned int field_8;
        uint8_t _unknown_12[68];
        uint64_t field_80;
        uint64_t field_88;
        uint64_t field_96;
        uint64_t field_104;
        uint64_t field_112;
        uint64_t field_120;
        uint64_t field_128;
        uint8_t _unknown_136[4];
        unsigned int field_140;
        unsigned int field_144;
        uint8_t _unknown_148[20];
    };

    // 0x100137e60
    Tone::~Tone() {
        field_160.~unique_ptr();
        field_152.~unique_ptr();
        field_72.~unique_ptr();
        field_64.~unique_ptr();
        field_56.~unique_ptr();
        field_48.~unique_ptr();
        field_40.~unique_ptr();
        field_32.~unique_ptr();
        field_24.~unique_ptr();
        field_16.~unique_ptr();
    }

} // namespace jag::oldscape::sound
