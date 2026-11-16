// libs/core/types/float16.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::types {
    class float16 {
    public:
        float16();
        math::Vector2T<unsigned char> FromBits(unsigned short arg1);
        static uint8_t ZERO[16];
    };

    // 0x100cc5af0
    math::Vector2T<unsigned char> float16::FromBits(unsigned short arg1) {
        math::Vector2T<unsigned char> result;
        result = arg1;
        return result;
    }

} // namespace jag::types
