// libs/math/matrix/Matrix22.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::math {
    template <typename...> // 1 instantiations, e.g. <float>
    class Matrix22T {
    public:
        Matrix22T();
        Matrix22T<float>* operator[](unsigned int);
        Matrix22T(float, float, float, float);
        Matrix22T<float>* operator[](unsigned int) const;
        Matrix22T<float>* operator=(Matrix22T<float> const&);
    };

    // 0x1008eefe0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Matrix22T<float>::Matrix22T(): jumps straight to the base-object constructor

    // 0x100921a90, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Matrix22T<float>::Matrix22T(float, float, float, float): jumps straight to the base-object constructor

} // namespace jag::math
