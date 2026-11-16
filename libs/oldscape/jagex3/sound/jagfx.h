// libs/oldscape/jagex3/sound/jagfx.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::sound {
    class JagFX {
    public:
        ~JagFX();
        JagFX* Load(jagex3::Js5&, char const*, char const*);
        JagFX* Load(jagex3::Js5&, char const*);
        JagFX* Load(jagex3::Js5&, int, int);
        JagFX* Load(jagex3::Js5&, int);
        JagFX(PacketJ<Array<unsigned char, eastl::allocator>>&);
        JagFX* FromUncompressedSynth(Array<unsigned char, eastl::allocator>&);
        ToWave();
        void MakeSound(Array<signed char, eastl::allocator>&);
        int OptimiseStart();
        JagFX();

        // data members, from how the methods use this: 92 bytes
        char _unknown_0[80];
        uint field_80; // offset 80
        uint field_84; // offset 84
        char _unknown_88[4];
    };

    // 0x100137d60, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // JagFX::~JagFX(): jumps straight to the base-object destructor

    // 0x100137d70, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // JagFX::~JagFX()
    void JagFX::~JagFX() {
        ~array();
    }

    // 0x1002aa0d0, 16 bytes, complete-object constructor, inline, placed by class name
    // JagFX::JagFX(): jumps straight to the base-object constructor

    // 0x1002aa0e0, 32 bytes, base-object constructor, inline, placed by class name
    // JagFX::JagFX()
    void JagFX::JagFX() {
        new (this) std::array<std::unique_ptr<Tone, std::default_delete<Tone>>, 10ul>();
        field_80 = 0;
        field_84 = 0;
    }

} // namespace jag::oldscape::sound
