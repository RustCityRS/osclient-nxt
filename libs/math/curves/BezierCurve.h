// libs/math/curves/BezierCurve.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::math {
    // 0x1003e9d00, 208 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<float> QuadraticBezier<float>(Vector2T<float> const&, Vector2T<float> const&, Vector2T<float> const&, float)
    undefined8 QuadraticBezier<float>(Vector2T* param_1, Vector2T* param_2, Vector2T* param_3, float param_4) {
        float fVar1;
        float fVar2;
        Vector2T<int> local_28[8];

        if ((0.0 <= param_4) && (param_4 <= 1.0)) {
            Vector2T<int>::Vector2T(local_28);
            fVar1 = 1.0 - param_4;
            fVar2 = (fVar1 + fVar1) * param_4;
            return CONCAT44(param_4 * param_4 * *(float*)(param_3 + 4) + fVar1 * fVar1 * *(float*)(param_1 + 4) +
                                fVar2 * *(float*)(param_2 + 4),
                            *(float*)param_3 * param_4 * param_4 + *(float*)param_1 * fVar1 * fVar1 +
                                *(float*)param_2 * fVar2);
        }
        /* WARNING: Subroutine does not return */
        LogAssert("(t >= 0.f) && (t <= 1.f)",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/curves/BezierCurve.h", 20,
                  (char*)0);
    }

} // namespace jag::math
