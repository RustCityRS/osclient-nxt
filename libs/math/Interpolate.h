// libs/math/Interpolate.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.math

namespace jag::math {
    // 0x10012add0
    Vector4T<float> Lerp<Vector4T<float>, float>(const Vector4T<float>& vector41, const Vector4T<float>& vector42,
                                                 float arg3) {
        uint64_t in_XMM1_Qa;

        uint64_t local_28 = vector42 - vector41;
        uint32_t uStack_20 = (uint32_t)in_XMM1_Qa;
        uint32_t uStack_1c = (uint32_t)((unsigned long)in_XMM1_Qa >> 32);
        uint64_t local_38 = &local_28 * arg3;
        uint32_t uStack_30 = (uint32_t)in_XMM1_Qa;
        uint32_t uStack_2c = (uint32_t)((unsigned long)in_XMM1_Qa >> 32);
        vector41 + local_38;
    }

    // 0x100c64610
    float Lerp<float, float>(const float& arg1, const float& arg2, float arg3) {
        return arg3 * (arg2 - arg1) + arg1;
    }

    // 0x100c64630
    void GetRandomPointSphereSlice(Random& random, float arg2, bool arg3, float arg4, float arg5) {
        uint32_t in_register_00000031;
        uint64_t uVar2;
        uint8_t local_38[16];

        float local_20 = arg5;
        float local_1c = arg2;
        float fVar1 = (float)random.FRand(arg4);
        local_20 = fVar1 + local_20;
        float local_28 = (float)random.FRand(6.2831855f);
        if ((((uint32_t)in_register_00000031 << 8) | (uint8_t)arg3) == 0) {
            fVar1 = (float)random.FRand(1.0);
            fVar1 = (float)::sqrt(fVar1);
            local_1c = local_1c * fVar1;
        }
        float local_24 = (float)::sin(local_20);
        local_24 = local_24 * local_1c;
        local_38._12_4_ = ::cos(local_28);
        local_38._12_4_ = (float)local_38._12_4_ * local_24;
        fVar1 = (float)::cos(local_20);
        local_1c = local_1c * fVar1;
        fVar1 = (float)::sin(local_28);
        new (local_38) ColourHSL((float)local_38._12_4_, local_1c, local_24 * fVar1);
        uVar2._0_4_ = (float)local_38._0_4_;
        uVar2._4_4_ = (float)local_38._4_4_;
        return uVar2;
    }

    // 0x100c64720
    void GetRandomPointSphere(Random& random, float arg2, bool arg3) {
        GetRandomPointSphereSlice(random, arg2, arg3, 3.1415927f, 0.0);
    }

    // 0x100c64740
    void GetRandomPointHemisphere(Random& random, float arg2, bool arg3) {
        GetRandomPointSphereSlice(random, arg2, arg3, 1.5707964f, 1.5707964f);
    }

} // namespace jag::math
