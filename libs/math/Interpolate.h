// libs/math/Interpolate.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.math

namespace jag::math {
    // 0x10012add0, 80 bytes, inline, placed by debug map only (low confidence)
    // Vector4T<float> Lerp<Vector4T<float>, float>(Vector4T<float> const&, Vector4T<float> const&, float)
    void Lerp<Vector4T<float>, float>(Vector4T* param_1, Vector4T* param_2, float param_3) {
        undefined8 in_XMM1_Qa;
        undefined8 local_38;
        undefined4 uStack_30;
        undefined4 uStack_2c;
        undefined8 local_28;
        undefined4 uStack_20;
        undefined4 uStack_1c;

        local_28 = operator-(param_1, (Vector4T*)this);
        uStack_20 = (undefined4)in_XMM1_Qa;
        uStack_1c = (undefined4)((ulong)in_XMM1_Qa >> 32);
        local_38 = operator*((Vector4T*)&local_28, param_3);
        uStack_30 = (undefined4)in_XMM1_Qa;
        uStack_2c = (undefined4)((ulong)in_XMM1_Qa >> 32);
        operator+((Vector4T*)this, (Vector4T*)&local_38);
    }

    // 0x100c64610, 32 bytes, inline, placed by debug map only (low confidence)
    // float Lerp<float, float>(float const&, float const&, float)
    float Lerp<float, float>(float* param_1, float* param_2, float param_3) {
        return param_3 * (*param_2 - *param_1) + *param_1;
    }

    // 0x100c64630, 240 bytes, placed by debug map only (low confidence)
    // GetRandomPointSphereSlice(Random&, float, bool, float, float)
    undefined8 GetRandomPointSphereSlice(Random* param_1, float param_2, bool param_3, float param_4, float param_5) {
        undefined3 in_register_00000031;
        float fVar1;
        undefined8 uVar2;
        undefined1 local_38[16];
        float local_28;
        float local_24;
        float local_20;
        float local_1c;

        local_20 = param_5;
        local_1c = param_2;
        fVar1 = (float)param_1->FRand(param_4);
        local_20 = fVar1 + local_20;
        local_28 = (float)param_1->FRand(6.2831855);
        if (CONCAT31(in_register_00000031, param_3) == 0) {
            fVar1 = (float)param_1->FRand(1.0);
            fVar1 = (float)::sqrt(fVar1);
            local_1c = local_1c * fVar1;
        }
        local_24 = (float)::sin(local_20);
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

    // 0x100c64720, 32 bytes, placed by debug map only (low confidence)
    // GetRandomPointSphere(Random&, float, bool)
    void GetRandomPointSphere(Random* param_1, float param_2, bool param_3) {
        GetRandomPointSphereSlice(param_1, param_2, param_3, 3.1415927, 0.0);
    }

    // 0x100c64740, 32 bytes, placed by debug map only (low confidence)
    // GetRandomPointHemisphere(Random&, float, bool)
    void GetRandomPointHemisphere(Random* param_1, float param_2, bool param_3) {
        GetRandomPointSphereSlice(param_1, param_2, param_3, 1.5707964, 1.5707964);
    }

} // namespace jag::math
