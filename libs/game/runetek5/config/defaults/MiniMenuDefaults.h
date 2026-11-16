// libs/game/runetek5/config/defaults/MiniMenuDefaults.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class MiniMenuDefaults {
    public:
        MiniMenuDefaults(PacketT<Array<unsigned char, eastl::allocator>>&);
        ~MiniMenuDefaults();

        // data members, from how the methods use this: 68 bytes
        char _unknown_0[56];
        undefined8 field_56; // offset 56
        undefined1 field_64; // offset 64
        char _unknown_65[3];
    };

    // 0x100570000, 16 bytes, complete-object destructor, inline, placed by class name
    // MiniMenuDefaults::~MiniMenuDefaults(): jumps straight to the base-object destructor

    // 0x100570010, 80 bytes, base-object destructor, inline, placed by class name
    // MiniMenuDefaults::~MiniMenuDefaults()
    void MiniMenuDefaults::~MiniMenuDefaults() {
        (&field_48)->~unique_ptr();
        (&field_40)->~unique_ptr();
        (&field_32)->~unique_ptr();
        (&field_24)->~unique_ptr();
        (&field_16)->~unique_ptr();
        (&field_8)->~unique_ptr();
        ~unique_ptr();
    }

} // namespace jag::game
