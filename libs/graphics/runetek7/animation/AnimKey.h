// libs/graphics/runetek7/animation/AnimKey.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class AnimKey {
    public:
        void LoadFromPacket(PacketT<Array<unsigned char>>& arg1);
        AnimKey();

    private:
        uint16_t field_0;
        uint8_t _unknown_2[2];
        uint32_t field_4;
        float field_8;
        uint32_t field_12;
        float field_16;
        uint32_t field_20;
        uint8_t _unknown_24[4];
    };

    // 0x100991460
    AnimKey::AnimKey() : field_0(0), field_4(0) {
        field_8 = 3.4028235e+38;
        field_12 = 2139095039;
        field_16 = 3.4028235e+38;
        field_20 = 2139095039;
    }

} // namespace jag::graphics
