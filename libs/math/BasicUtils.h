// libs/math/BasicUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::math {
    template <typename...> // 2 instantiations, e.g. <float>, <unsigned char>
    class Range {
    public:
        Range(float arg1, float arg2);
        float GetMin() const;
        float GetMax() const;
        Range(unsigned char arg1, unsigned char arg2);
    };

    // 0x100c61670
    float Clamp<float>(const float& arg1, const float& arg2, const float& arg3) {
        auto pfVar1 = std::max<float>(arg2, arg1);
        pfVar1 = std::min<float>(arg3, *pfVar1);
        return *pfVar1;
    }

} // namespace jag::math
