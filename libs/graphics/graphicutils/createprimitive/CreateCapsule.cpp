// libs/graphics/graphicutils/createprimitive/CreateCapsule.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.graphicutils

#include "CreateCapsule.h"

namespace jag::graphicutils {
    // 0x100bb5a50, 16 bytes, placed by debug map only (low confidence)
    // GetCapsuleVertexCount(unsigned int, unsigned int)
    int GetCapsuleVertexCount(uint param_1, uint param_2) {
        return (param_1 + 1) * (param_2 + 1);
    }

    // 0x100bb5a60, 32 bytes, placed by debug map only (low confidence)
    // GetCapsuleTriListIndexCount(unsigned int, unsigned int)
    int GetCapsuleTriListIndexCount(uint param_1, uint param_2) {
        return (param_2 - 1) * param_1 * 6;
    }

    // 0x100bb5a80, 32 bytes, placed by debug map only (low confidence)
    // GetCapsuleLineListIndexCount(unsigned int, unsigned int)
    int GetCapsuleLineListIndexCount(uint param_1, uint param_2) {
        return (param_1 * 4 + 4) * (param_2 + 1);
    }

    // 0x100bb5aa0, 592 bytes, placed by debug map only (low confidence)
    // CreateCapsuleVertices(math::Vector3T<float>*, math::Vector3T<float>*, unsigned int, unsigned int, unsigned int, float, float)
    void CreateCapsuleVertices(Vector3T* param_1, Vector3T* param_2, uint param_3, uint param_4, uint param_5,
                               float param_6, float param_7) {
        uint uVar1;
        float fVar2;
        uint in_XMM0_Db;
        undefined8 uVar3;
        uint in_XMM0_Dc;
        uint extraout_XMM0_Dc;
        uint in_XMM0_Dd;
        uint extraout_XMM0_Dd;
        ColourHSL local_c8;
        float local_b8;
        uint uStack_b4;
        uint uStack_b0;
        uint uStack_ac;
        float local_a8;
        undefined4 uStack_a4;
        undefined4 uStack_a0;
        undefined4 uStack_9c;
        float local_88;
        uint uStack_84;
        uint uStack_80;
        uint uStack_7c;
        ulong local_70;
        float local_68;
        uint uStack_64;
        uint uStack_60;
        uint uStack_5c;
        float local_58;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        local_88 = -param_6;
        uStack_84 = in_XMM0_Db ^ 2147483648;
        uStack_80 = in_XMM0_Dc ^ 2147483648;
        uStack_7c = in_XMM0_Dd ^ 2147483648;
        local_40 = (float)param_5 * 0.5;
        local_70 = 0;
        do {
            local_38 = (float)local_70;
            local_34 = (local_38 * 3.1415927) / (float)param_5;
            uVar3 = ::cos(local_34);
            uStack_64 = (uint)((ulong)uVar3 >> 32);
            local_68 = (float)uVar3 * local_88;
            uStack_60 = extraout_XMM0_Dc;
            uStack_5c = extraout_XMM0_Dd;
            local_3c = (float)::sin(local_34);
            local_3c = local_3c * param_6;
            local_b8 = local_68 * local_68;
            uStack_b4 = uStack_64;
            uStack_b0 = uStack_60;
            uStack_ac = uStack_5c;
            local_a8 = -(*(float*)(&DAT_100d97a30 + (ulong)(local_40 < local_38) * 4) * param_7 + local_68);
            uStack_a4 = 2147483648;
            uStack_a0 = 2147483648;
            uStack_9c = 2147483648;
            local_68 = -local_68;
            uStack_64 = uStack_64 ^ 2147483648;
            uStack_60 = uStack_60 ^ 2147483648;
            uStack_5c = uStack_5c ^ 2147483648;
            uVar1 = 0;
            do {
                local_34 = ((float)uVar1 * 6.2831855) / (float)param_4;
                local_38 = (float)::cos(local_34);
                local_38 = local_38 * local_3c;
                local_34 = (float)::sin(local_34);
                local_34 = local_34 * local_3c;
                fVar2 = (float)::sqrt(local_38 * local_38 + local_b8 + local_34 * local_34);
                if (param_1 == (Vector3T*)0) {
                    param_1 = (Vector3T*)0;
                    if (param_2 == (Vector3T*)0)
                        goto LAB_100bb5ccb;
                LAB_100bb5bd0:
                    fVar2 = 1.0 / fVar2;
                    new (&local_c8) math::ColourHSL(local_38 * fVar2, local_34 * fVar2, fVar2 * local_68);
                    param_2->SetXYZ((Vector3T*)&local_c8);
                    param_2 = param_2 + param_3;
                } else {
                    local_58 = fVar2;
                    new (&local_c8) math::ColourHSL(local_38, local_a8, local_34);
                    param_1->SetXYZ((Vector3T*)&local_c8);
                    param_1 = param_1 + param_3;
                    fVar2 = local_58;
                    if (param_2 != (Vector3T*)0)
                        goto LAB_100bb5bd0;
                LAB_100bb5ccb:
                    param_2 = (Vector3T*)0;
                }
                uVar1 = uVar1 + 1;
            } while (uVar1 <= param_4);
            uVar1 = (int)local_70 + 1;
            local_70 = (ulong)uVar1;
            if (param_5 < uVar1) {
                return;
            }
        } while (true);
    }

} // namespace jag::graphicutils

// 0x100bb5cf0, 16 bytes, placed by debug map only (low confidence)
// cos(float)
void cos(float param_1) {
    _cosf();
}

// 0x100bb5d00, 16 bytes, placed by debug map only (low confidence)
// sin(float)
void sin(float param_1) {
    _sinf();
}

// 0x100bb5d10, 64 bytes, placed by debug map only (low confidence)
// sqrt(float)
undefined8 sqrt(float param_1) {
    uint in_XMM0_Db;
    undefined4 in_XMM0_Dc;
    undefined4 in_XMM0_Dd;
    undefined1 in_XMM1[16];
    undefined1 auVar1[16];
    float fVar2;

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = param_1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    fVar2 = param_1 * auVar1._0_4_;
    return CONCAT44(~(in_XMM0_Db & 2147483647) & in_XMM0_Db,
                    ~-(uint)(ABS(param_1) < 1.1754944e-38) & (uint)((fVar2 * auVar1._0_4_ + -3.0) * fVar2 * -0.5));
}
