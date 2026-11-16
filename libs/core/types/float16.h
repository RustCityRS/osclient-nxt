// libs/core/types/float16.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::types {
    class float16 {
    public:
        float16();
        float16* FromBits(unsigned short);
        static /* 16 bytes */ ZERO;

        // data members, from how the methods use this: 2 bytes
        ushort field_0; // offset 0
    };

    // 0x100cc5af0, 32 bytes, inline, placed by class name and debug map
    // float16::FromBits(unsigned short)
    float16* float16::FromBits(ushort param_1) {
        new (this) math::Vector2T<unsigned char>();
        field_0 = param_1;
        return this;
    }

} // namespace jag::types
