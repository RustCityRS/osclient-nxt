// libs/oldscape/jagex3/sound/jagfx.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::sound {
    class JagFX {
    public:
        ~JagFX();
        auto Load(jagex3::Js5& js5, const char* str1, const char* str2);
        auto Load(jagex3::Js5& js5, const char* str);
        auto Load(jagex3::Js5& js5, int arg2, int arg3);
        auto Load(jagex3::Js5& js5, int arg2);
        JagFX(PacketJ<Array<unsigned char>>& packetJ);
        auto FromUncompressedSynth(Array<unsigned char>& arg1);
        auto ToWave();
        void MakeSound(Array<signed char>& arg1);
        int OptimiseStart();
        JagFX();

    private:
        uint8_t _unknown_0[80];
        unsigned int field_80;
        unsigned int field_84;
        uint8_t _unknown_88[4];
    };

    // 0x100137d70
    JagFX::~JagFX() {}

    // 0x1002aa0e0
    JagFX::JagFX() : std::array<std::unique_ptr<Tone>, 10ul>(), field_80(0), field_84(0) {}

} // namespace jag::oldscape::sound
