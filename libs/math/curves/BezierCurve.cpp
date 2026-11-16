// libs/math/curves/BezierCurve.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.math

#include "BezierCurve.h"

namespace jag::math {
    // 0x100c62f20
    float CubicBezierCalcInterpolator(float arg1, float arg2, float arg3, float arg4, float arg5) {
        float fVar1;
        float fVar2;
        float local_34;

        float local_2c = 0.0;
        float local_68 = 1.0;
        float local_44 = arg1;
        float local_40 = arg2;
        float local_3c = arg3;
        float local_38 = arg4;
        while (true) {
            fVar1 = (local_2c + local_68) * 0.5;
            local_34 =
                (float)__ZN3jag4math15CubicBezierGetYIfEEDaRKT_S5_S5_S5_f(&local_44, &local_40, &local_3c, &local_38);
            fVar2 = fVar1;
            if (arg5 <= local_34) {
                fVar2 = local_2c;
            }
            local_68 = (float)((unsigned int)local_68 & -(unsigned int)(local_34 < arg5) |
                               ~-(unsigned int)(local_34 < arg5) & (unsigned int)fVar1);
            local_2c = fVar2;
            fVar2 = (float)::abs(local_68 - fVar2);
            if (fVar2 <= 0.005)
                break;
            fVar2 = (float)::abs(local_34 - arg5);
            if (fVar2 <= 0.005) {
                return fVar1;
            }
        }
        return fVar1;
    }

    // 0x100c63080
    void CubicBezierCalcInterpolatorReference(float arg1, float arg2, float arg3, float arg4, float arg5) {
        bool bVar1;
        float* pfVar3;
        unsigned long arg1_00;
        uint64_t uVar5;
        unsigned int uVar6;
        uint64_t extraout_XMM0_Qb;
        unsigned int uVar7;
        array<float, _3ul> local_78;
        uint8_t local_68[16];
        uint8_t local_58[16];

        float local_38 = arg1 - arg5;
        local_68._0_4_ = arg2;
        float local_30 = (arg2 - arg5) * 3.0;
        float fVar4 = (arg3 - arg5) * 3.0;
        float local_34 = (arg2 - arg5) * -6.0 + local_38 * 3.0 + fVar4;
        local_58._0_4_ = arg4;
        float local_2c = (arg4 - (fVar4 + arg1)) + local_30;
        local_30 = local_30 - local_38 * 3.0;
        float local_28 = arg3;
        unsigned int uVar2 = polynomial::FindCubicRoots(&local_78, local_2c, local_34, local_30, local_38);
        if (uVar2 == 0) {
            (logger::default_logger())
                ->Log(
                    false, 2,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/curves/BezierCurve.cpp",
                    57,
                    "Could not solve cubic bezier polynomial a=%.2f b=%.2f c=%.2f d=%.2f | x0=%.2f x1=%.2f x2=%.2f "
                    "x3=%.2f",
                    (double)local_2c, (double)local_34, (double)local_30, (uint32_t)((double)local_38), (double)arg1,
                    (double)(float)local_68._0_4_, (double)local_28, (double)(float)local_58._0_4_);
        } else {
            pfVar3 = &local_78[0];
            local_58 = (unsigned __int128)((unsigned int)*pfVar3);
            if (1 < (int)uVar2) {
                local_28 = (float)fabs(*pfVar3 - arg5);
                arg1_00 = 1;
                do {
                    pfVar3 = &local_78[arg1_00];
                    local_68 = (unsigned __int128)((unsigned int)*pfVar3);
                    uVar5 = fabs(*pfVar3 - arg5);
                    fVar4 = (float)uVar5;
                    bVar1 = fVar4 < local_28;
                    uVar6 = (unsigned int)((unsigned long)uVar5 >> 32);
                    uVar7 = (unsigned int)((unsigned long)extraout_XMM0_Qb >> 32);
                    if (fVar4 <= local_28) {
                        local_28 = fVar4;
                    }
                    arg1_00 = arg1_00 + 1;
                    local_58._4_4_ = ~uVar6 & local_58._4_4_ | local_68._4_4_ & uVar6;
                    local_58._0_4_ = ~-(unsigned int)bVar1 & local_58._0_4_ | local_68._0_4_ & -(unsigned int)bVar1;
                    local_58._8_4_ = ~(unsigned int)extraout_XMM0_Qb & local_58._8_4_ |
                                     local_68._8_4_ & (unsigned int)extraout_XMM0_Qb;
                    local_58._12_4_ = ~uVar7 & local_58._12_4_ | local_68._12_4_ & uVar7;
                } while (uVar2 != arg1_00);
            }
        }
    }

} // namespace jag::math

// 0x100c63020
float __ZN3jag4math15CubicBezierGetYIfEEDaRKT_S5_S5_S5_f(float param_1, float* param_2, float* param_3, float* param_4,
                                                         float* param_5) {
    float fVar1 = 1.0 - param_1;
    return (param_1 * *param_5 + fVar1 * 3.0 * *param_4) * param_1 * param_1 +
           (param_1 * 3.0 * *param_3 + *param_2 * fVar1) * fVar1 * fVar1;
}
