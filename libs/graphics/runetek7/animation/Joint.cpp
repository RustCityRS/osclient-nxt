// libs/graphics/runetek7/animation/Joint.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "Joint.h"

namespace jag::graphics {
    // 0x10094e3c0
    Joint::Joint(PacketT<Array<unsigned char>>& arg1, short arg2) : math::Matrix44T<float>() {
        auto result;
        ReturnValue result;
        uint32_t* puVar10;
        float local_34;

        uint8_t* puVar8 = PTR_ZERO_100ee6728;
        ReturnValue* local_48 = (ReturnValue*)field_64;
        uint64_t uVar1 = *(uint64_t*)PTR_ZERO_100ee6728;
        uint64_t uVar2 = *(uint64_t*)(PTR_ZERO_100ee6728 + 8);
        uint64_t uVar3 = *(uint64_t*)(PTR_ZERO_100ee6728 + 16);
        uint64_t uVar4 = *(uint64_t*)(PTR_ZERO_100ee6728 + 24);
        uint64_t uVar5 = *(uint64_t*)(PTR_ZERO_100ee6728 + 32);
        uint64_t uVar6 = *(uint64_t*)(PTR_ZERO_100ee6728 + 40);
        uint64_t uVar7 = *(uint64_t*)(PTR_ZERO_100ee6728 + 56);
        *(uint64_t*)field_112 = *(uint64_t*)(PTR_ZERO_100ee6728 + 48);
        *(uint64_t*)field_120 = uVar7;
        *(uint64_t*)field_96 = uVar5;
        *(uint64_t*)field_104 = uVar6;
        *(uint64_t*)field_80 = uVar3;
        *(uint64_t*)field_88 = uVar4;
        *(uint64_t*)field_64 = uVar1;
        *(uint64_t*)field_72 = uVar2;
        uVar1 = *(uint64_t*)(puVar8 + 8);
        uVar2 = *(uint64_t*)(puVar8 + 16);
        uVar3 = *(uint64_t*)(puVar8 + 24);
        uVar4 = *(uint64_t*)(puVar8 + 32);
        uVar5 = *(uint64_t*)(puVar8 + 40);
        uVar6 = *(uint64_t*)(puVar8 + 48);
        uVar7 = *(uint64_t*)(puVar8 + 56);
        *(uint64_t*)field_128 = *(uint64_t*)puVar8;
        *(uint64_t*)field_136 = uVar1;
        *(uint64_t*)field_144 = uVar2;
        *(uint64_t*)field_152 = uVar3;
        *(uint64_t*)field_160 = uVar4;
        *(uint64_t*)field_168 = uVar5;
        *(uint64_t*)field_176 = uVar6;
        *(uint64_t*)field_184 = uVar7;
        uVar1 = *(uint64_t*)(puVar8 + 8);
        uVar2 = *(uint64_t*)(puVar8 + 16);
        uVar3 = *(uint64_t*)(puVar8 + 24);
        uVar4 = *(uint64_t*)(puVar8 + 32);
        uVar5 = *(uint64_t*)(puVar8 + 40);
        uVar6 = *(uint64_t*)(puVar8 + 48);
        uVar7 = *(uint64_t*)(puVar8 + 56);
        *(uint64_t*)field_192 = *(uint64_t*)puVar8;
        *(uint64_t*)field_200 = uVar1;
        *(uint64_t*)field_208 = uVar2;
        *(uint64_t*)field_216 = uVar3;
        *(uint64_t*)field_224 = uVar4;
        *(uint64_t*)field_232 = uVar5;
        *(uint64_t*)field_240 = uVar6;
        *(uint64_t*)field_248 = uVar7;
        Vector4T<float>* local_40 = (Vector4T<float>*)&field_256;
        new (local_40) math::Vector3T();
        uint8_t* this_00 = &field_268;
        new (this_00) math::Vector3T();
        Vector4T<float>* local_50 = (Vector4T<float>*)&m_localBindTranslate;
        new (local_50) math::Vector3T();
        Vector4T<float>* local_58 = (Vector4T<float>*)&m_localBindScale;
        new (local_58) math::Vector3T();
        m_pParentJoint = nullptr;
        m_parentJointID = arg2;
        unsigned long arg1_00 = 0;
        do {
            local_34 = (float)arg1.gFloat();
            puVar10 = &local_98[arg1_00];
            *puVar10 = local_34;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 16);
        Matrix44T<float> local_d8(local_98);
        *this = local_d8;
        local_34 = (float)arg1.gFloat();
        float local_38 = (float)arg1.gFloat();
        float arg3 = (float)arg1.gFloat();
        float fVar11 = local_38;
        ColourHSL local_98(local_34, local_38, arg3);
        local_40->SetXYZ(local_98);
        &result = local_48;
        *local_48 = *this;
        result = math::Matrix44T<float>::Invert(nullptr);
        local_98[0]._0_8_ = result.ToEulerAnglesXYZ();
        local_98[0].field_8 = fVar11;
        this_00->SetXYZ(local_98);
        if (this_00->SloppyCompare(*((Vector3T<float>*)&graphics::WORLD_ORTHOGONAL), 0.001) != '\0') {
            field_272 = field_272 ^ 2147483648;
        }
        local_98[0]._0_8_ = field_48.GetXYZ();
        local_98[0].field_8 = fVar11;
        local_50->SetXYZ(local_98);
        local_98[0]._0_8_ = ExtractScale();
        local_98[0].field_8 = fVar11;
        local_58->SetXYZ(local_98);
    }

    // 0x10094e660
    void Joint::CalculateWorldBind() {
        ReturnValue local_68;

        uint8_t* matrix441 = field_128;
        if (*matrix441 == *PTR_ZERO_100ee6728) {
            *matrix441 = *this;
            if (m_parentJointID == -1) {
                local_68** matrix441;
                *matrix441 = local_68;
            } else {
                CalculateWorldBind((Joint*)m_pParentJoint);
                GetWorldBind(&local_68, (Joint*)m_pParentJoint);
                *matrix441 *= &local_68;
            }
            *field_192 = *matrix441;
            *field_192 = math::Matrix44T<float>::Invert(nullptr);
        }
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x10094e980
    QuaternionT<float> QuaternionLerpShortest<float>(const QuaternionT<float>& quaternion1,
                                                     const QuaternionT<float>& quaternion2, float arg3) {
        QuaternionT<float>* in_RDX;
        QuaternionT<float> local_40;

        if (QuaternionDot<float>(quaternion2, in_RDX) < 0.0) {
            operator-(&local_40);
        }
        Lerp<QuaternionT<float>, float>(quaternion1, quaternion2, arg3);
        return quaternion1;
    }

} // namespace jag::math
