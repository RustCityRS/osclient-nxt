// libs/math/matrix/Matrix22.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::math {
    template <typename...> // 1 instantiations, e.g. <float>
    class Matrix22T {
    public:
        Matrix22T();
        Matrix22T<float>* operator[](unsigned int arg1);
        Matrix22T(float arg1, float arg2, float arg3, float arg4);
        Matrix22T<float>* operator[](unsigned int arg1) const;
        Matrix22T<float>* operator=(const Matrix22T<float>& matrix22);
    };

} // namespace jag::math
