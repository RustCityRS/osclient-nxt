// _unplaced/classes/jag/math/Float4.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::math {
    class Float4 {
    public:
        Float4();
        Float4(const Vector4T<float>& rect);

    private:
        uint32_t field_0;
        uint32_t field_4;
        uint32_t field_8;
        uint32_t field_12;
        uint8_t _unknown_16[4];
    };

} // namespace jag::math
