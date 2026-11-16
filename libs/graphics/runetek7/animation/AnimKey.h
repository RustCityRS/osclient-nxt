// libs/graphics/runetek7/animation/AnimKey.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class AnimKey {
    public:
        void LoadFromPacket(PacketT<Array<unsigned char, eastl::allocator>>&);
        AnimKey();

        // data members, from how the methods use this: 28 bytes
        undefined2 field_0; // offset 0
        char _unknown_2[2];
        undefined4 field_4;  // offset 4
        float field_8;       // offset 8
        undefined4 field_12; // offset 12
        float field_16;      // offset 16
        undefined4 field_20; // offset 20
        char _unknown_24[4];
    };

    // 0x100982210, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // AnimKey::AnimKey(): jumps straight to the base-object constructor

    // 0x100991460, 32 bytes, base-object constructor, inline, placed by class name
    // AnimKey::AnimKey()
    void AnimKey::AnimKey() {
        field_0 = 0;
        field_4 = 0;
        field_8 = 3.4028235e+38;
        field_12 = 2139095039;
        field_16 = 3.4028235e+38;
        field_20 = 2139095039;
    }

} // namespace jag::graphics
