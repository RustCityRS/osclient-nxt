// libs/math/curves/BezierCurve.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.math

#include "BezierCurve.h"

namespace jag::math {
    // 0x100c62f20, 256 bytes, placed by debug map only (low confidence)
    // CubicBezierCalcInterpolator(float, float, float, float, float)
    float CubicBezierCalcInterpolator(float param_1, float param_2, float param_3, float param_4, float param_5) {
        float fVar1;
        float fVar2;
        float local_68;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;
        float local_2c;

        local_2c = 0.0;
        local_68 = 1.0;
        local_44 = param_1;
        local_40 = param_2;
        local_3c = param_3;
        local_38 = param_4;
        while (true) {
            fVar1 = (local_2c + local_68) * 0.5;
            local_34 =
                (float)__ZN3jag4math15CubicBezierGetYIfEEDaRKT_S5_S5_S5_f(&local_44, &local_40, &local_3c, &local_38);
            fVar2 = fVar1;
            if (param_5 <= local_34) {
                fVar2 = local_2c;
            }
            local_68 =
                (float)((uint)local_68 & -(uint)(local_34 < param_5) | ~-(uint)(local_34 < param_5) & (uint)fVar1);
            local_2c = fVar2;
            fVar2 = (float)::abs(local_68 - fVar2);
            if (fVar2 <= 0.005)
                break;
            fVar2 = (float)::abs(local_34 - param_5);
            if (fVar2 <= 0.005) {
                return fVar1;
            }
        }
        return fVar1;
    }

    // 0x100c63080, 448 bytes, placed by debug map only (low confidence)
    // CubicBezierCalcInterpolatorReference(float, float, float, float, float)
    void CubicBezierCalcInterpolatorReference(float param_1, float param_2, float param_3, float param_4,
                                              float param_5) {
        bool bVar1;
        float* pfVar2;
        uint uVar3;
        ulong uVar4;
        float fVar5;
        undefined8 uVar6;
        uint uVar7;
        undefined8 extraout_XMM0_Qb;
        uint uVar8;
        array local_78[16];
        undefined1 local_68[16];
        undefined1 local_58[16];
        float local_38;
        float local_34;
        float local_30;
        float local_2c;
        float local_28;

        local_38 = param_1 - param_5;
        local_68._0_4_ = param_2;
        local_30 = (param_2 - param_5) * 3.0;
        fVar5 = (param_3 - param_5) * 3.0;
        local_34 = (param_2 - param_5) * -6.0 + local_38 * 3.0 + fVar5;
        local_58._0_4_ = param_4;
        local_2c = (param_4 - (fVar5 + param_1)) + local_30;
        local_30 = local_30 - local_38 * 3.0;
        local_28 = param_3;
        uVar3 = polynomial::FindCubicRoots(local_78, local_2c, local_34, local_30, local_38);
        if (uVar3 == 0) {
            uVar6 = logger::default_logger();
            logger::Logger::Log(
                (double)local_2c, (double)local_34, (double)local_30, SUB84((double)local_38, 0), (double)param_1,
                (double)(float)local_68._0_4_, (double)local_28, (double)(float)local_58._0_4_, uVar6, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/curves/BezierCurve.cpp", 57,
                "Could not solve cubic bezier polynomial a=%.2f b=%.2f c=%.2f d=%.2f | x0=%.2f x1=%.2f x2=%.2f "
                "x3=%.2f");
        } else {
            pfVar2 = (float*)std::array<float, 3ul>::operator[]((array<float, 3ul>*)local_78, 0);
            local_58 = ZEXT416((uint)*pfVar2);
            if (1 < (int)uVar3) {
                local_28 = (float)fabs(*pfVar2 - param_5);
                uVar4 = 1;
                do {
                    pfVar2 = (float*)std::array<float, 3ul>::operator[]((array<float, 3ul>*)local_78, uVar4);
                    local_68 = ZEXT416((uint)*pfVar2);
                    uVar6 = fabs(*pfVar2 - param_5);
                    fVar5 = (float)uVar6;
                    bVar1 = fVar5 < local_28;
                    uVar7 = (uint)((ulong)uVar6 >> 32);
                    uVar8 = (uint)((ulong)extraout_XMM0_Qb >> 32);
                    if (fVar5 <= local_28) {
                        local_28 = fVar5;
                    }
                    uVar4 = uVar4 + 1;
                    local_58._4_4_ = ~uVar7 & local_58._4_4_ | local_68._4_4_ & uVar7;
                    local_58._0_4_ = ~-(uint)bVar1 & local_58._0_4_ | local_68._0_4_ & -(uint)bVar1;
                    local_58._8_4_ = ~(uint)extraout_XMM0_Qb & local_58._8_4_ | local_68._8_4_ & (uint)extraout_XMM0_Qb;
                    local_58._12_4_ = ~uVar8 & local_58._12_4_ | local_68._12_4_ & uVar8;
                } while (uVar3 != uVar4);
            }
        }
    }

} // namespace jag::math

// 0x100c63020, 96 bytes, inline, placed by debug map only (low confidence)
// _ZN3jag4math15CubicBezierGetYIfEEDaRKT_S5_S5_S5_f
float __ZN3jag4math15CubicBezierGetYIfEEDaRKT_S5_S5_S5_f(float param_1, float* param_2, float* param_3, float* param_4,
                                                         float* param_5) {
    float fVar1;

    fVar1 = 1.0 - param_1;
    return (param_1 * *param_5 + fVar1 * 3.0 * *param_4) * param_1 * param_1 +
           (param_1 * 3.0 * *param_3 + *param_2 * fVar1) * fVar1 * fVar1;
}
