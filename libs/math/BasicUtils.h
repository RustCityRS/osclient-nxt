// libs/math/BasicUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::math {
    template <typename...> // 2 instantiations, e.g. <float>, <unsigned char>
    class Range {
    public:
        Range(float, float);
        GetMin() const;
        GetMax() const;
        Range(unsigned char, unsigned char);
    };

    // 0x100023b30, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Range<float>::Range(float, float): jumps straight to the base-object constructor

    // 0x100c61670, 48 bytes, inline, placed by debug map only (low confidence)
    // float Clamp<float>(float const&, float const&, float const&)
    float Clamp<float>(float* param_1, float* param_2, float* param_3) {
        float* pfVar1;

        pfVar1 = std::max<float>(param_2, param_1);
        pfVar1 = std::min<float>(param_3, pfVar1);
        return *pfVar1;
    }

} // namespace jag::math
