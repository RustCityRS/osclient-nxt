// libs/oldscape/jagex3/sound/envelope.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::sound {
    class Envelope {
    public:
        ~Envelope();
        Envelope();
        void Load(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void LoadPoints(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void LoadUncompressed(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void SaveUncompressed(PacketJ<Array<unsigned char, eastl::allocator>>&);
        void GenInit();
        int GenNext(int);

        // data members, from how the methods use this: 72 bytes
        undefined4 field_0; // offset 0
        undefined4 field_4; // offset 4
        uint field_8;       // offset 8
        bool field_12;      // offset 12
        char _unknown_13[3];
        int field_16;  // offset 16
        uint field_20; // offset 20
        int field_24;  // offset 24
        int field_28;  // offset 28
        int field_32;  // offset 32
        uint field_36; // offset 36
        char _unknown_40[32];
    };

    // 0x100137f80, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Envelope::~Envelope(): jumps straight to the base-object destructor

    // 0x100137f90, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // Envelope::~Envelope()
    void Envelope::~Envelope() {
        (&field_64)->~Array();
        (&field_40)->~Array();
    }

} // namespace jag::oldscape::sound
