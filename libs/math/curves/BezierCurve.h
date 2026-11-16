// libs/math/curves/BezierCurve.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::math {
    // 0x1003e9d00
    Vector2T<float> QuadraticBezier<float>(const Vector2T<float>& vector21, const Vector2T<float>& vector22,
                                           const Vector2T<float>& vector23, float arg4) {
        float fVar1;
        float fVar2;
        Vector2T<int> local_28;

        if ((0.0 <= arg4) && (arg4 <= 1.0)) {
            local_28 = Vector2T();
            fVar1 = 1.0 - arg4;
            fVar2 = (fVar1 + fVar1) * arg4;
            return (((uint64_t)(arg4 * arg4 * *(float*)(vector23 + 4) + fVar1 * fVar1 * *(float*)(vector21 + 4) +
                                fVar2 * *(float*)(vector22 + 4))
                     << 32) |
                    (uint32_t)(*(float*)vector23 * arg4 * arg4 + *(float*)vector21 * fVar1 * fVar1 +
                               *(float*)vector22 * fVar2));
        }
        LogAssert("(t >= 0.f) && (t <= 1.f)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/curves/BezierCurve.h", 20,
                  nullptr);
    }

} // namespace jag::math
