// libs/oldscape/jagex3/midi2/patch.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::midi2 {
    class Patch {
    public:
        Patch* Load(jagex3::Js5&, int);
        uint LoadWaves(sound::WaveCache&, std::bitset<128ul>&, ErrorCapture&);
        void DropWaveIds();
        void CountBitsetTrailingZeros(std::bitset<128ul>&);
        Patch();
        Patch(Array<unsigned char, eastl::allocator>&);
        int GetWaveId(int);
        byte IsJagFX(int);
        bool IsVorbis(int);
        ulong NoteWillStop(int);
        ~Patch();

        // data members, from how the methods use this: 328 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[148];
        LazyWave field_152; // offset 152
        char _unknown_168[160];
    };

    // 0x1002e6810, 16 bytes, complete-object destructor, inline, placed by class name
    // Patch::~Patch(): jumps straight to the base-object destructor

    // 0x1002e6820, 112 bytes, base-object destructor, inline, placed by class name
    // Patch::~Patch()
    void Patch::~Patch() {
        (&field_320)->~Array();
        field_152->~fixed_vector();
        (&field_128)->~Array();
        (&field_104)->~Array();
        (&field_80)->~Array();
        (&field_56)->~Array();
        (&field_32)->~Array();
        (&field_8)->~Array();
    }

} // namespace jag::oldscape::midi2
