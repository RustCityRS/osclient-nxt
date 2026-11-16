// libs/graphics/graphicutils/createprimitive/CreateCapsule.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.graphicutils

#include "CreateCapsule.h"

namespace jag::graphicutils {
    // 0x100bb5a50
    int GetCapsuleVertexCount(unsigned int arg1, unsigned int arg2) {
        return (arg1 + 1) * (arg2 + 1);
    }

    // 0x100bb5a60
    int GetCapsuleTriListIndexCount(unsigned int arg1, unsigned int arg2) {
        return (arg2 - 1) * arg1 * 6;
    }

    // 0x100bb5a80
    int GetCapsuleLineListIndexCount(unsigned int arg1, unsigned int arg2) {
        return (arg1 * 4 + 4) * (arg2 + 1);
    }

    // 0x100bb5aa0
    void CreateCapsuleVertices(math::Vector3T<float>* vector31, math::Vector3T<float>* vector32, unsigned int arg3,
                               unsigned int arg4, unsigned int arg5, float arg6, float arg7) {
        unsigned int uVar1;
        float fVar2;
        unsigned int in_XMM0_Db;
        uint64_t uVar3;
        unsigned int in_XMM0_Dc;
        unsigned int extraout_XMM0_Dc;
        unsigned int in_XMM0_Dd;
        unsigned int extraout_XMM0_Dd;
        ColourHSL local_c8;
        float local_b8;
        unsigned int uStack_b4;
        unsigned int uStack_b0;
        unsigned int uStack_ac;
        float local_a8;
        uint32_t uStack_a4;
        uint32_t uStack_a0;
        uint32_t uStack_9c;
        float local_68;
        unsigned int uStack_64;
        unsigned int uStack_60;
        unsigned int uStack_5c;
        float local_58;
        float local_3c;
        float local_38;
        float local_34;

        float local_88 = -arg6;
        unsigned int uStack_84 = in_XMM0_Db ^ 2147483648;
        unsigned int uStack_80 = in_XMM0_Dc ^ 2147483648;
        unsigned int uStack_7c = in_XMM0_Dd ^ 2147483648;
        float local_40 = (float)arg5 * 0.5;
        unsigned long local_70 = 0;
        do {
            local_38 = (float)local_70;
            local_34 = (local_38 * 3.1415927f) / (float)arg5;
            uVar3 = ::cos(local_34);
            uStack_64 = (unsigned int)((unsigned long)uVar3 >> 32);
            local_68 = (float)uVar3 * local_88;
            uStack_60 = extraout_XMM0_Dc;
            uStack_5c = extraout_XMM0_Dd;
            local_3c = (float)::sin(local_34);
            local_3c = local_3c * arg6;
            local_b8 = local_68 * local_68;
            uStack_b4 = uStack_64;
            uStack_b0 = uStack_60;
            uStack_ac = uStack_5c;
            local_a8 = -(*(float*)(&reinterpret_cast<const uint64_t*>(&lighting_brdf_VisFunc_inc_data)[160] +
                                   (unsigned long)(local_40 < local_38) * 4) *
                             arg7 +
                         local_68);
            uStack_a4 = 2147483648;
            uStack_a0 = 2147483648;
            uStack_9c = 2147483648;
            local_68 = -local_68;
            uStack_64 = uStack_64 ^ 2147483648;
            uStack_60 = uStack_60 ^ 2147483648;
            uStack_5c = uStack_5c ^ 2147483648;
            uVar1 = 0;
            do {
                local_34 = ((float)uVar1 * 6.2831855f) / (float)arg4;
                local_38 = (float)::cos(local_34);
                local_38 = local_38 * local_3c;
                local_34 = (float)::sin(local_34);
                local_34 = local_34 * local_3c;
                fVar2 = (float)::sqrt(local_38 * local_38 + local_b8 + local_34 * local_34);
                if (vector31 == nullptr) {
                    vector31 = nullptr;
                    if (vector32 == nullptr)
                        goto LAB_100bb5ccb;
                LAB_100bb5bd0:
                    fVar2 = 1.0 / fVar2;
                    local_c8 = math::ColourHSL(local_38 * fVar2, local_34 * fVar2, fVar2 * local_68);
                    vector32->SetXYZ(local_c8);
                    vector32 = vector32 + arg3;
                } else {
                    local_58 = fVar2;
                    local_c8 = math::ColourHSL(local_38, local_a8, local_34);
                    vector31->SetXYZ(local_c8);
                    vector31 = vector31 + arg3;
                    fVar2 = local_58;
                    if (vector32 != nullptr)
                        goto LAB_100bb5bd0;
                LAB_100bb5ccb:
                    vector32 = nullptr;
                }
                uVar1 = uVar1 + 1;
            } while (uVar1 <= arg4);
            uVar1 = (int)local_70 + 1;
            local_70 = (unsigned long)uVar1;
            if (arg5 < uVar1) {
                return;
            }
        } while (true);
    }

} // namespace jag::graphicutils

// 0x100bb5cf0
void cos(float arg1) {
    _cosf();
}

// 0x100bb5d00
void sin(float arg1) {
    _sinf();
}

// 0x100bb5d10
void sqrt(float arg1) {
    unsigned int in_XMM0_Db;
    uint32_t in_XMM0_Dc;
    uint32_t in_XMM0_Dd;
    uint8_t in_XMM1[16];
    uint8_t auVar1[16];

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = arg1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    float fVar2 = arg1 * auVar1._0_4_;
    return (((uint64_t)(~(in_XMM0_Db & 2147483647) & in_XMM0_Db) << 32) |
            (uint32_t)(~-(unsigned int)(ABS(arg1) < 1.1754944e-38) &
                       (unsigned int)((fVar2 * auVar1._0_4_ - 3.0) * fVar2 * -0.5)));
}
