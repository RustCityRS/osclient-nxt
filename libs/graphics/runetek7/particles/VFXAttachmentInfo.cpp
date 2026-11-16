// libs/graphics/runetek7/particles/VFXAttachmentInfo.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "VFXAttachmentInfo.h"

namespace jag::graphics {
    // 0x1000b9960: VFXAttachmentInfo::GetTemplateID() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x10014e180: VFXAttachmentInfo::GetBonePositions() const has the same machine code as math::Vector2T<float>::y() const

    // 0x1001cdf70: VFXAttachmentInfo::SetSourceModelExternalID(int) has the same machine code as game::StaticPointLight::SetRGB(unsigned int)

    // 0x100429b10: VFXAttachmentInfo::GetSourceModelExternalID() const has the same machine code as game::StaticPointLight::GetRGB() const

    // 0x1004900d0: VFXAttachmentInfo::GetWorldTransform() const has the same machine code as game::MapEnvironmentSettings::GetVolumetricSettings() const

    // 0x1007d7030
    void VFXAttachmentInfo::RawData::Decode(PacketT<Array<unsigned char>>& arg1) {
        float local_38;
        float local_34;
        float local_30;

        field_0 = arg1.g2();
        uint8_t bVar1 = arg1.g1();
        field_80.from_uint32((unsigned int)bVar1);
        Vector3T<float> local_60(arg1, false);
        field_16.SetPos(local_60);
        new (&local_38) math::Vector3T(arg1, false);
        float local_28 = (float)math::Deg2Rad(local_34);
        float local_24 = (float)math::Deg2Rad(local_38);
        float arg3 = (float)math::Deg2Rad(local_30);
        math::Matrix33RotationYawPitchRoll<float>(local_28, local_24, arg3);
        field_16.SetRot(local_60);
    }

    // 0x1007d7110
    VFXAttachmentInfo::VertexBonePos::VertexBonePos() : math::Vector3T(), field_12(0), field_16(0) {}

    // 0x1007d7140
    VFXAttachmentInfo::VertexBonePos::VertexBonePos(const math::Vector3T<float>& vector3, int arg2, int arg3) {
        field_8 = *(uint32_t*)(vector3 + 8);
        field_0 = *(uint64_t*)vector3;
        field_12 = arg2;
        field_16 = arg3;
    }

    // 0x1007d7170
    VFXAttachmentInfo::VFXAttachmentInfo(const VFXAttachmentInfo::RawData& rawData,
                                         const math::Matrix44T<float>& matrix44)
        : MakeSharedPool<VFXAttachmentInfo, 768>() {
        m_templateID = (unsigned int)(unsigned short)rawData.field_0;
        new (&field_4) std::array<VFXAttachmentInfo::VertexBonePos, 3ul>();
        m_sourceModelExternalID = 0;
        new (&field_72) eastl::vector_map<unsigned short, unsigned short>();
        new (&field_112) eastl::vector_map<unsigned short, unsigned short>();
        uint64_t uVar1 = *(uint64_t*)PTR_IDENTITY_100ee6730;
        uint64_t uVar2 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 8);
        uint64_t uVar3 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 16);
        uint64_t uVar4 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 24);
        uint64_t uVar5 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 32);
        uint64_t uVar6 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 40);
        uint64_t uVar7 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 56);
        field_208 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 48);
        field_216 = uVar7;
        field_192 = uVar5;
        field_200 = uVar6;
        field_176 = uVar3;
        field_184 = uVar4;
        m_worldTransform = uVar1;
        field_168 = uVar2;
        Update(rawData, matrix44);
    }

    // 0x1007d72a0
    void VFXAttachmentInfo::Update(const VFXAttachmentInfo::RawData& rawData, const math::Matrix44T<float>& matrix44) {
        Matrix44T<float> local_a8;
        uint64_t local_80[5];
        uint64_t local_58[5];

        local_80[0] = rawData.field_16.GetPos();
        local_58[0] = matrix44.TransformPoint(*local_80);
        m_worldTransform.SetPos(*local_58);
        if (rawData.field_80.test(0) == '\0') {
            local_80->GetRot();
            local_a8.GetRot();
            *local_58** local_80;
        } else {
            local_58->GetRot();
        }
        m_worldTransform.SetRot(*local_58);
    }

    // 0x1007d7380
    VFXAttachmentInfo::VFXAttachmentInfo(unsigned int arg1, const VFXAttachmentInfo::VertexBonePos& vertexBonePos1,
                                         const VFXAttachmentInfo::VertexBonePos& vertexBonePos2,
                                         const VFXAttachmentInfo::VertexBonePos& vertexBonePos3)
        : MakeSharedPool<VFXAttachmentInfo, 768>(), m_templateID(arg1), field_20(vertexBonePos1.field_16) {
        uint64_t uVar1 = *(uint64_t*)&vertexBonePos1.field_8;
        field_4 = vertexBonePos1.field_0;
        field_12 = uVar1;
        uVar1 = *(uint64_t*)&vertexBonePos2.field_8;
        field_24 = vertexBonePos2.field_0;
        field_32 = uVar1;
        field_40 = vertexBonePos2.field_16;
        field_60 = vertexBonePos3.field_16;
        uVar1 = *(uint64_t*)&vertexBonePos3.field_8;
        field_44 = vertexBonePos3.field_0;
        field_52 = uVar1;
        m_sourceModelExternalID = 0;
        new (&field_72) eastl::vector_map<unsigned short, unsigned short>();
        new (&field_112) eastl::vector_map<unsigned short, unsigned short>();
        uVar1 = *(uint64_t*)PTR_IDENTITY_100ee6730;
        uint64_t uVar2 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 8);
        uint64_t uVar3 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 16);
        uint64_t uVar4 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 24);
        uint64_t uVar5 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 32);
        uint64_t uVar6 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 40);
        uint64_t uVar7 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 56);
        field_208 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 48);
        field_216 = uVar7;
        field_192 = uVar5;
        field_200 = uVar6;
        field_176 = uVar3;
        field_184 = uVar4;
        m_worldTransform = uVar1;
        field_168 = uVar2;
    }

    // 0x1007d7460
    VFXAttachmentInfo::VFXAttachmentInfo(unsigned int arg1, const VFXAttachmentInfo::VertexBonePos& vertexBonePos)
        : MakeSharedPool<VFXAttachmentInfo, 768>(), m_templateID(arg1), field_20(vertexBonePos.field_16) {
        uint64_t uVar1 = *(uint64_t*)&vertexBonePos.field_8;
        field_4 = vertexBonePos.field_0;
        field_12 = uVar1;
        uVar1 = *(uint64_t*)&vertexBonePos.field_8;
        field_24 = vertexBonePos.field_0;
        field_32 = uVar1;
        field_40 = vertexBonePos.field_16;
        field_60 = vertexBonePos.field_16;
        uVar1 = *(uint64_t*)&vertexBonePos.field_8;
        field_44 = vertexBonePos.field_0;
        field_52 = uVar1;
        m_sourceModelExternalID = 0;
        new (&field_72) eastl::vector_map<unsigned short, unsigned short>();
        new (&field_112) eastl::vector_map<unsigned short, unsigned short>();
        uVar1 = *(uint64_t*)PTR_IDENTITY_100ee6730;
        uint64_t uVar2 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 8);
        uint64_t uVar3 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 16);
        uint64_t uVar4 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 24);
        uint64_t uVar5 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 32);
        uint64_t uVar6 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 40);
        uint64_t uVar7 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 56);
        field_208 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 48);
        field_216 = uVar7;
        field_192 = uVar5;
        field_200 = uVar6;
        field_176 = uVar3;
        field_184 = uVar4;
        m_worldTransform = uVar1;
        field_168 = uVar2;
    }

    // 0x1007d7560
    bool VFXAttachmentInfo::Update(AnimationStateProvider* animationStateProvider,
                                   const math::Matrix44T<float>& matrix44) {
        vector<eastl::pair<int, int>>* this_00;
        uint8_t* this_01;
        long lVar3;
        uint16_t* puVar4;
        ReturnValue* vector3;
        unsigned long arg1;
        float extraout_XMM0_Da;
        Matrix33T<float> local_160;
        uint64_t local_138[8];
        uint64_t local_e8[2];
        uint64_t local_d8[2];
        uint64_t local_c8[2];
        uint8_t* local_b0;
        vector<eastl::pair<int, int>>* local_a0;
        uint64_t local_90[2];
        ReturnValue local_80;

        uint64_t* puVar2 = &field_4;
        VFXAttachmentInfo* local_98 = this;
        uint64_t* puVar1 = (uint64_t*)(*puVar2)[0];
        uint64_t local_68 = *puVar1;
        uint32_t local_60 = *(uint32_t*)(puVar1 + 1);
        puVar1 = (uint64_t*)(*puVar2)[1];
        uint64_t local_5c = *puVar1;
        uint32_t local_54 = *(uint32_t*)(puVar1 + 1);
        array<VFXAttachmentInfo::VertexBonePos, 3ul>* local_70 = (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)puVar2;
        puVar2 = (uint64_t*)(*puVar2)[2];
        uint64_t local_50 = *puVar2;
        uint32_t local_48 = *(uint32_t*)(puVar2 + 1);
        if (animationStateProvider != nullptr) {
            local_a0 = (vector<eastl::pair<int, int>>*)&local_98->field_112;
            this_01 = &local_98->field_72;
            puVar2 = &local_68;
            arg1 = 0;
            local_b0 = this_01;
            do {
                lVar3 = (*local_70)[arg1];
                this_00 = local_a0;
                if ((*(int*)(lVar3 + 12) != -1) || (*(int*)(lVar3 + 16) != -1)) {
                    local_a0->clear();
                    this_01->clear();
                    local_138[0]._0_2_ = *(unsigned short*)(lVar3 + 16);
                    puVar4 = (uint16_t*)(*this_00)[*local_138];
                    *puVar4 = 0;
                    local_138[0] = (((uint64_t)local_138[0]._2_6_ << 16) | (uint16_t)(*(uint16_t*)(lVar3 + 12)));
                    puVar4 = (uint16_t*)(*this_01)[*local_138];
                    *puVar4 = 0;
                    (*animationStateProvider->_vptr[1]._x7e___2)(animationStateProvider, puVar2, this_01, local_a0,
                                                                 PTR_IDENTITY_100ee6730);
                }
                arg1 = arg1 + 1;
                puVar2 = (uint64_t*)((long)puVar2 + 12);
            } while (arg1 != 3);
        }
        Vector3T<float> local_f8(0.0);
        lVar3 = 0;
        do {
            (*((Vector3T<float>*)((long)&local_68 + lVar3))) *= matrix44;
            local_f8 += (*((Vector3T<float>*)((long)&local_68 + lVar3)));
            lVar3 = lVar3 + 12;
        } while (lVar3 != 36);
        local_f8 /= 3.0;
        local_e8[0] = local_5c - local_68;
        local_d8[0] = local_50 - local_68;
        local_80[0] = (ReturnValue)math::Vector3Cross<float>(*local_e8, *local_d8);
        local_80.LengthSq();
        float fVar5 = extraout_XMM0_Da;
        if (1.1920929e-07 < extraout_XMM0_Da) {
            local_70 = (array<VFXAttachmentInfo::VertexBonePos, 3ul>*)(((uint64_t)local_70._4_4_ << 32) |
                                                                       (uint32_t)extraout_XMM0_Da);
            vector3 = local_80 = math::Vector3T<float>::Normalize();
            local_80.SetXYZ(*vector3);
            local_90[0] = math::Vector3Cross<float>(*PTR_RIGHT_100ee66f0, local_80);
            fVar5 = (float)local_90->LengthSq();
            if (fVar5 < 1.1920929e-07) {
                local_138[0] = math::Vector3Cross<float>(*PTR_UP_100ee66d0, local_80);
                local_90->SetXYZ(*local_138);
            }
            math::Vector3Normalize<float>(*local_90);
            local_c8[0] = math::Vector3Cross<float>(local_80, *local_90);
            local_160 = math::Matrix33T<float>(*local_c8, local_80, *local_90);
            new (local_138) math::Matrix44T<float>(local_160, local_f8);
            local_98->m_worldTransform = *local_138;
            fVar5 = local_70._0_4_;
        }
        return 1.1920929e-07 < fVar5;
    }

    // 0x1007d7920
    void VFXAttachmentInfo::Transform(const math::Matrix44T<float>& matrix44) {
        uint64_t* this_00 = &field_4;
        Vector3T<float>* pVVar1 = (Vector3T<float>*)(*this_00)[0];
        *pVVar1 *= matrix44;
        pVVar1 = (Vector3T<float>*)(*this_00)[1];
        *pVVar1 *= matrix44;
        pVVar1 = (Vector3T<float>*)(*this_00)[2];
        *pVVar1 *= matrix44;
    }

    // 0x1007d7980
    void VFXAttachmentInfo::Translate(const math::Vector3T<float>& vector3) {
        uint64_t* this_00 = &field_4;
        Vector3T<float>* pVVar1 = (Vector3T<float>*)(*this_00)[0];
        *pVVar1 += vector3;
        pVVar1 = (Vector3T<float>*)(*this_00)[1];
        *pVVar1 += vector3;
        pVVar1 = (Vector3T<float>*)(*this_00)[2];
        *pVVar1 += vector3;
    }

    // 0x1007d79e0
    void VFXAttachmentInfo::Rotate(const math::QuaternionT<float>& quaternion) {
        uint64_t* this_00 = &field_4;
        Vector3T<float>* pVVar1 = (Vector3T<float>*)(*this_00)[0];
        *pVVar1 *= quaternion;
        pVVar1 = (Vector3T<float>*)(*this_00)[1];
        *pVVar1 *= quaternion;
        pVVar1 = (Vector3T<float>*)(*this_00)[2];
        *pVVar1 *= quaternion;
    }

    // 0x1007d7a40
    void VFXAttachmentInfo::Rotate90(Rotation90 rotation90) {
        unsigned int uVar1;
        Layout* this_00;
        Layout* pLVar2;
        unsigned int* puVar3;
        float* pfVar4;
        float* pfVar5;
        unsigned int local_38;

        if (rotation90 != 0) {
            this_00 = (Layout*)std::array<VFXAttachmentInfo::VertexBonePos, 3ul>::begin();
            pLVar2 = (Layout*)std::array<VFXAttachmentInfo::VertexBonePos, 3ul>::end();
            for (; this_00 != pLVar2; this_00 = this_00 + 20) {
                if ((char)rotation90 == '\x03') {
                    pfVar4 = (float*)this_00->SSOBeginPtr();
                    pfVar5 = (float*)this_00->second();
                    eastl::swap<float>(*pfVar4, *pfVar5);
                    puVar3 = (unsigned int*)this_00->SSOBeginPtr();
                    local_38 = *puVar3;
                    puVar3 = (unsigned int*)this_00->SSOBeginPtr();
                LAB_1007d7ad9:
                    local_38 = local_38 ^ 2147483648;
                    *puVar3 = local_38;
                } else {
                    if ((char)rotation90 == '\x02') {
                        puVar3 = (unsigned int*)this_00->SSOBeginPtr();
                        uVar1 = *puVar3;
                        puVar3 = (unsigned int*)this_00->SSOBeginPtr();
                        *puVar3 = uVar1 ^ 2147483648;
                    LAB_1007d7aba:
                        puVar3 = (unsigned int*)this_00->second();
                        local_38 = *puVar3;
                        puVar3 = (unsigned int*)this_00->second();
                        goto LAB_1007d7ad9;
                    }
                    if ((char)rotation90 == '\x01') {
                        pfVar4 = (float*)this_00->SSOBeginPtr();
                        pfVar5 = (float*)this_00->second();
                        eastl::swap<float>(*pfVar4, *pfVar5);
                        goto LAB_1007d7aba;
                    }
                }
            }
        }
    }

    // 0x1007d7b90
    void VFXAttachmentInfo::Scale(const math::Vector3T<float>& vector3) {
        uint64_t* this_00 = &field_4;
        Vector3T<float>* pVVar1 = (Vector3T<float>*)(*this_00)[0];
        *pVVar1 *= vector3;
        pVVar1 = (Vector3T<float>*)(*this_00)[1];
        *pVVar1 *= vector3;
        pVVar1 = (Vector3T<float>*)(*this_00)[2];
        *pVVar1 *= vector3;
    }

    // 0x1007d7bf0
    void VFXAttachmentInfo::MirrorZ() {
        uint64_t* this_00 = &field_4;
        long lVar1 = (*this_00)[0];
        *(unsigned int*)(lVar1 + 8) = *(unsigned int*)(lVar1 + 8) ^ 2147483648;
        lVar1 = (*this_00)[1];
        *(unsigned int*)(lVar1 + 8) = *(unsigned int*)(lVar1 + 8) ^ 2147483648;
        lVar1 = (*this_00)[2];
        *(unsigned int*)(lVar1 + 8) = *(unsigned int*)(lVar1 + 8) ^ 2147483648;
    }

    // 0x1007d7c60
    void VFXAttachmentInfo::HillChange(HillChange arg1, int arg2,
                                       const Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>& arg3,
                                       const Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>& arg4,
                                       const LocationHelpers::LocationHillChangeData& arg5) {
        uint64_t* this_00 = &field_4;
        Vector2T<int>* pVVar3 = (Vector2T<int>*)(*this_00)[0];
        int iVar2 = LocationHelpers::HillChangeVertex(param_2, param_3, *param_6, *param_4, *param_5, *pVVar3);
        auto pfVar1 = pVVar3->y();
        *pfVar1 = (float)iVar2;
        pVVar3 = (Vector2T<int>*)(*this_00)[1];
        iVar2 = LocationHelpers::HillChangeVertex(param_2, param_3, *param_6, *param_4, *param_5, *pVVar3);
        pfVar1 = (float*)pVVar3->y();
        *pfVar1 = (float)iVar2;
        pVVar3 = (Vector2T<int>*)(*this_00)[2];
        iVar2 = LocationHelpers::HillChangeVertex(param_2, param_3, *param_6, *param_4, *param_5, *pVVar3);
        pfVar1 = (float*)pVVar3->y();
        *pfVar1 = (float)iVar2;
    }

} // namespace jag::graphics
