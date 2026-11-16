// libs/graphics/runetek7/lighting/shadowmapping/PointLightSM.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "PointLightSM.h"

namespace jag::graphics {
    // 0x10000b2a0: PointLightSM::GetParentPointLightSMManager() has the same machine code as eastl::string::Layout::GetHeapSize() const

    // 0x1000b9950: PointLightSM::GetShadowCubeMapLodAtlasData() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x1008ad620
    PointLightSM::PointLightSM(
        const Array<std::array<graphicutils::TextureAtlasSlot2D, 6ul>, BucketAllocatorEASTL>& textureAtlasSlot2Dss,
        PointLightSMManager* pointLightSMManager, unsigned long arg3)
        : field_8(pointLightSMManager) {
        unsigned short uVar1;
        unsigned int arg6;
        unsigned short* puVar5;
        long lVar6;
        Material* pMVar7;
        ShadowCubeMapAtlasData local_158;
        unsigned int local_4c;

        vector<ShadowCubeMapAtlasData>* local_40 = (vector<ShadowCubeMapAtlasData>*)&field_16;
        TextureAtlasSlotPacker* local_48 = (TextureAtlasSlotPacker*)textureAtlasSlot2Dss;
        unique_ptr* local_38 = (unique_ptr*)arg3;
        new (local_40) eastl::vector<ShadowCubeMapAtlasData>();
        uint8_t* this_00 = &field_48;
        new (this_00) PointLightSMPass(this, 34069, nullptr);
        new (&field_1184) PointLightSMPass(this, 34070, nullptr);
        new (&field_2320) PointLightSMPass(this, 34071, nullptr);
        new (&field_3456) PointLightSMPass(this, 34072, nullptr);
        new (&field_4592) PointLightSMPass(this, 34073, nullptr);
        new (&field_5728) PointLightSMPass(this, 34074, nullptr);
        m_lODLevel = -1;
        m_iD = (int)local_38;
        new (&m_shadowParams) LightShadowParams();
        local_38 = (unique_ptr*)pointLightSMManager->GetPixelBuffer();
        bool cVar2 = std::unique_ptr::operator_cast_to_bool(local_38);
        TextureAtlasSlotPacker* pTVar4 = local_48;
        uint8_t* local_58 = this_00;
        if (!cVar2) {
            LogAssert("atlasPacker",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSM.cpp",
                      33, nullptr);
        }
        local_40->reserve(local_48->end());
        auto this_02 = pTVar4->data();
        auto paVar3 = pTVar4->end();
        unique_ptr* this_01 = local_38;
        if (this_02 != paVar3) {
            do {
                pTVar4 = (TextureAtlasSlotPacker*)(*local_38).operator->();
                puVar5 = (unsigned short*)(*this_02)[0];
                lVar6 = pTVar4->GetSlot((unsigned int)*puVar5, (unsigned int)puVar5[1]);
                if (lVar6 == 0) {
                    LogAssert("faceAtlasSlot",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "lighting/shadowmapping/PointLightSM.cpp",
                              40, nullptr);
                }
                local_48 = (TextureAtlasSlotPacker*)**this_01;
                uVar1 = *(unsigned short*)(lVar6 + 4);
                pMVar7 = (Material*)(*this_01).operator->();
                local_4c = pMVar7->GetNormalEmissiveMapID();
                pMVar7 = (Material*)(*this_01).operator->();
                arg6 = pMVar7->GetNormalEmissiveMapID();
                local_158 = ShadowCubeMapAtlasData(*local_48, *this_02, (unsigned int)uVar1, (unsigned int)uVar1,
                                                   local_4c, arg6);
                local_40->emplace_back<ShadowCubeMapAtlasData>(local_158);
                this_02 = this_02 + 36;
            } while (this_02 != paVar3);
        }
    }

    // 0x1008adac0
    PointLightSM::~PointLightSM() {
        if (field_8 == nullptr) {
            LogAssert("m_pParentPointLightSMManager != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSM.cpp",
                      55, nullptr);
        }
        if (field_8 != nullptr) {
            if (field_8->IsActive(this) != '\0') {
                LogAssert("!m_pParentPointLightSMManager->IsActive(this)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "lighting/shadowmapping/PointLightSM.cpp",
                          58, nullptr);
            }
        }
        field_48.~array();
        field_16.~vector();
    }

    // 0x1008adc00
    void PointLightSM::Destroy() {
        if (field_8 == nullptr) {
            LogAssert("m_pParentPointLightSMManager != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSM.cpp",
                      66, nullptr);
        }
        if (field_8 != nullptr) {
            field_8->FreePointLightSM(this);
        }
    }

    // 0x1008ade80
    void PointLightSM::ComputeLinearLightLODLevel(const math::Sphere& sphere, const ViewTransforms& viewTransforms,
                                                  float arg3) {
        Matrix44T<float>* matrix441;
        Matrix44T<float>* matrix442;
        float fVar3;
        float local_2c;

        auto vector3 = viewTransforms.SSOBeginPtr();
        if (sphere.IsInside(*vector3) == '\0') {
            matrix441 = (Matrix44T<float>*)viewTransforms.GetScreen();
            matrix442 = (Matrix44T<float>*)viewTransforms.GetOrigin();
            fVar3 = (float)math::NDCProjectGetSphericalNDCRadius(sphere, *matrix441, *matrix442);
            local_2c = (float)::sqrt(fVar3);
            local_2c = local_2c + local_2c;
        } else {
            local_2c = 1.0;
        }
        long lVar2 = GetLODLevels();
        float local_40 = (float)(lVar2 - 1);
        float local_3c = local_2c + arg3;
        fVar3 = math::Clamp<float>(local_3c, 0.0, 1.0);
        fVar3 = math::Lerp<float, float>(0.0, local_40, 1.0 - fVar3);
        math::RoundFloatToInt(fVar3);
    }

    // 0x1008ae030
    void PointLightSM::SetLODLevel(int arg1) {
        int iVar1;

        if (-1 < arg1) {
            iVar1 = field_16.size();
            if (arg1 < iVar1) {
                if (m_lODLevel != arg1) {
                    m_lODLevel = arg1;
                    ResetPasses();
                }
                return;
            }
        }
        LogAssert("lodLevel >= 0 && lodLevel < static_cast<int>(m_shadowCubeMapLodAtlasData.size())",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/lighting/"
                  "shadowmapping/PointLightSM.cpp",
                  93, nullptr);
    }

    // 0x1008ae0b0
    void PointLightSM::ResetPasses() {
        PointLightSMPass* this_00 = (PointLightSMPass*)std::array<PointLightSMPass, 6ul>::begin();
        PointLightSMPass* pPVar1 = (PointLightSMPass*)std::array<PointLightSMPass, 6ul>::end();
        for (; this_00 != pPVar1; this_00 = (PointLightSMPass*)&this_00->field_1136) {
            this_00->Reset();
        }
    }

    // 0x1008ae100
    void PointLightSM::SetShadowParams(const LightShadowParams& lightShadowParams) {
        if (field_6876 != lightShadowParams.field_4) {
            ResetPasses();
        }
        uint32_t uVar2 = *(uint32_t*)&lightShadowParams.field_1;
        uint32_t uVar3 = lightShadowParams.field_4;
        uint64_t uVar1 = lightShadowParams.field_8;
        m_shadowParams = lightShadowParams.field_0;
        *(uint32_t*)&field_6873 = uVar2;
        field_6876 = uVar3;
        *(uint64_t*)&field_6880 = uVar1;
    }

    // 0x1008ae130
    void PointLightSM::GetShaderConsts(PointLightSM::ShaderConsts& shaderConsts, float arg2, float arg3) const {
        if (((m_lODLevel == -1) || (3 < m_lODLevel)) || (m_iD == -1)) {
            LogAssert("m_LODLevel != -1 && (m_LODLevel < MAX_POINT_LIGHT_SHADOWS_LODS) && m_id != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSM.cpp",
                      116, nullptr);
        }
        if (1.0 < field_6884) {
            LogAssert("m_shadowParams.m_shadowStrength <= 1.0f",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSM.cpp",
                      117, nullptr);
        }
        if (arg3 - arg2 < 0.0) {
            LogAssert("fadeRange >= 0.0f",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSM.cpp",
                      119, "Shadow fade distance must be <= max shadow view distance");
        }
        float fVar4 = 1.0;
        if (m_shadowParams == '\0') {
            fVar4 = 0.0;
        }
        shaderConsts.Set(fVar4, arg2, arg3, 1.0 / (arg3 - arg2));
        long lVar2 = field_8->SSOBeginPtr();
        int iVar1 = *(int*)(lVar2 + 68);
        lVar2 = field_8->SSOBeginPtr();
        fVar4 = *(float*)(lVar2 + 32);
        lVar2 = field_8->SSOBeginPtr();
        float* pfVar3 = (float*)(*((lVar2 + 36)))[(long)m_lODLevel];
        shaderConsts.field_16.Set((float)iVar1, fVar4, *pfVar3, field_6884);
        uint8_t* this_00 = &field_16;
        lVar2 = (*this_00)[(long)m_lODLevel];
        shaderConsts.field_32 = (*((lVar2 + 44)));
        lVar2 = (*this_00)[(long)m_lODLevel];
        shaderConsts.field_40 = (*((lVar2 + 52)));
        lVar2 = (*this_00)[(long)m_lODLevel];
        shaderConsts.field_48 = (*((lVar2 + 160)));
    }

} // namespace jag::graphics

// 0x1008adfe0
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
