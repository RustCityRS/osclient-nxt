// libs/oldscape/jagex3/midi2/patch.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::midi2 {
    class Patch {
    public:
        auto Load(jagex3::Js5& js5, int arg2);
        unsigned int LoadWaves(sound::WaveCache& waveCache, std::bitset<128ul>& bitset, ErrorCapture& errorCapture);
        void DropWaveIds();
        void CountBitsetTrailingZeros(std::bitset<128ul>& bitset);
        Patch();
        Patch(Array<unsigned char>& arg1);
        int GetWaveId(int arg1);
        bool IsJagFX(int arg1);
        bool IsVorbis(int arg1);
        unsigned long NoteWillStop(int arg1);
        ~Patch();

    private:
        uint32_t field_0;
        uint8_t _unknown_4[324];
    };

    // 0x1002e6820
    Patch::~Patch() {
        field_320.~Array();
        field_152.~fixed_vector();
        field_128.~Array();
        field_104.~Array();
        field_80.~Array();
        field_56.~Array();
        field_32.~Array();
        field_8.~Array();
    }

} // namespace jag::oldscape::midi2
