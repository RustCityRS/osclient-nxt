// libs/graphics/runetek7/lighting/shadowmapping/PointLightSM.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "PointLightSM.h"

namespace jag::graphics {
    // 0x10000b2a0: the linker folded this into eastl::string::Layout::GetHeapSize() const, which has identical code
    PointLightSM::GetParentPointLightSMManager();

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    PointLightSM::GetShadowCubeMapLodAtlasData() const;

    // 0x1008ad620, 720 bytes, base-object constructor, placed by class name and debug map
    // PointLightSM::PointLightSM(Array<std::array<graphicutils::TextureAtlasSlot2D, 6ul>, BucketAllocatorEASTL> const&, PointLightSMManager*, unsigned long)
    /* PointLightSM::PointLightSM(Array<std::array<graphicutils::TextureAtlasSlot2D,
   6ul>, BucketAllocatorEASTL> const&, PointLightSMManager*, unsigned long) */

    void PointLightSM::PointLightSM(Array* param_1, PointLightSMManager* param_2, ulong param_3) {
        undefined1* puVar1;
        ushort uVar2;
        unique_ptr* this_00;
        bool bVar3;
        uint uVar4;
        ulong uVar5;
        array<graphicutils::TextureAtlasSlot2D, 6ul>* this_01;
        array<graphicutils::TextureAtlasSlot2D, 6ul>* paVar6;
        TextureAtlasSlotPacker* pTVar7;
        ushort* puVar8;
        long lVar9;
        Material* pMVar10;
        ShadowCubeMapAtlasData local_158;
        undefined1* local_58;
        uint local_4c;
        TextureAtlasSlotPacker* local_48;
        vector<ShadowCubeMapAtlasData, eastl::allocator>* local_40;
        unique_ptr* local_38;

        field_0 = &PTR__PointLightSM_100f183b0;
        field_8 = param_2;
        local_40 = (vector<ShadowCubeMapAtlasData, eastl::allocator>*)&field_16;
        local_48 = (TextureAtlasSlotPacker*)param_1;
        local_38 = (unique_ptr*)param_3;
        eastl::vector<ShadowCubeMapAtlasData, eastl::allocator>::vector(local_40);
        puVar1 = &field_48;
        new (puVar1) PointLightSMPass(this, 34069);
        new (&field_1184, this, 34070) PointLightSMPass();
        new (&field_2320, this, 34071) PointLightSMPass();
        new (&field_3456, this, 34072) PointLightSMPass();
        new (&field_4592, this, 34073) PointLightSMPass();
        new (&field_5728, this, 34074) PointLightSMPass();
        m_lODLevel = -1;
        m_iD = (int)local_38;
        new (&m_shadowParams) LightShadowParams();
        local_38 = (unique_ptr*)param_2->GetPixelBuffer();
        bVar3 = std::unique_ptr::operator_cast_to_bool(local_38);
        pTVar7 = local_48;
        local_58 = puVar1;
        if (!bVar3) {
            /* WARNING: Subroutine does not return */
            LogAssert("atlasPacker",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSM.cpp",
                      33, (char*)0);
        }
        uVar5 = local_48->end();
        eastl::vector<ShadowCubeMapAtlasData, eastl::allocator>::reserve(local_40, uVar5);
        this_01 = (array<graphicutils::TextureAtlasSlot2D, 6ul>*)pTVar7->data();
        paVar6 = (array<graphicutils::TextureAtlasSlot2D, 6ul>*)pTVar7->end();
        this_00 = local_38;
        if (this_01 != paVar6) {
            do {
                pTVar7 =
                    (TextureAtlasSlotPacker*)
                        std::unique_ptr<graphicutils::TextureAtlasSlotPacker,
                                        std::default_delete<graphicutils::TextureAtlasSlotPacker>>::
                        operator->((unique_ptr<graphicutils::TextureAtlasSlotPacker,
                                               std::default_delete<graphicutils::TextureAtlasSlotPacker>>*)local_38);
                puVar8 = (ushort*)std::array<graphicutils::TextureAtlasSlot2D, 6ul>::operator[](this_01, 0);
                lVar9 = pTVar7->GetSlot((uint)*puVar8, (uint)puVar8[1]);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("faceAtlasSlot",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "lighting/shadowmapping/PointLightSM.cpp",
                              40, (char*)0);
                }
                local_48 = (TextureAtlasSlotPacker*)std::unique_ptr<
                    graphicutils::TextureAtlasSlotPacker, std::default_delete<graphicutils::TextureAtlasSlotPacker>>::
                operator*((unique_ptr<graphicutils::TextureAtlasSlotPacker,
                                      std::default_delete<graphicutils::TextureAtlasSlotPacker>>*)this_00);
                uVar2 = *(ushort*)(lVar9 + 4);
                pMVar10 = (Material*)std::unique_ptr<graphicutils::TextureAtlasSlotPacker,
                                                     std::default_delete<graphicutils::TextureAtlasSlotPacker>>::
                          operator->((unique_ptr<graphicutils::TextureAtlasSlotPacker,
                                                 std::default_delete<graphicutils::TextureAtlasSlotPacker>>*)this_00);
                local_4c = pMVar10->GetNormalEmissiveMapID();
                pMVar10 = (Material*)std::unique_ptr<graphicutils::TextureAtlasSlotPacker,
                                                     std::default_delete<graphicutils::TextureAtlasSlotPacker>>::
                          operator->((unique_ptr<graphicutils::TextureAtlasSlotPacker,
                                                 std::default_delete<graphicutils::TextureAtlasSlotPacker>>*)this_00);
                uVar4 = pMVar10->GetNormalEmissiveMapID();
                new (&local_158) ShadowCubeMapAtlasData(local_48, this_01, (uint)uVar2, (uint)uVar2, local_4c, uVar4);
                eastl::vector<ShadowCubeMapAtlasData, eastl::allocator>::emplace_back<ShadowCubeMapAtlasData>(
                    local_40, &local_158);
                this_01 = this_01 + 36;
            } while (this_01 != paVar6);
        }
    }

    // 0x1008adab0, 16 bytes, complete-object constructor, placed by class name
    // PointLightSM::PointLightSM(Array<std::array<graphicutils::TextureAtlasSlot2D, 6ul>, BucketAllocatorEASTL> const&, PointLightSMManager*, unsigned long): jumps straight to the base-object constructor

    // 0x1008adac0, 176 bytes, base-object destructor, placed by class name
    // PointLightSM::~PointLightSM()
    void PointLightSM::~PointLightSM() {
        field_0 = &PTR__PointLightSM_100f183b0;
        if (field_8 == (PointLightSMManager*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pParentPointLightSMManager != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSM.cpp",
                      55, (char*)0);
        }
        if (field_8 != (PointLightSMManager*)0) {
            if ((field_8, this)->IsActive() != '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("!m_pParentPointLightSMManager->IsActive(this)",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "lighting/shadowmapping/PointLightSM.cpp",
                          58, (char*)0);
            }
        }
        (&field_48)->~array();
        (&field_16)->~vector();
    }

    // 0x1008adbd0, 16 bytes, complete-object destructor, placed by class name
    // PointLightSM::~PointLightSM(): jumps straight to the base-object destructor

    // 0x1008adbe0, 32 bytes, deleting destructor, placed by class name
    // PointLightSM::~PointLightSM()
    void PointLightSM::~PointLightSM() {
        ~PointLightSM(this);
        operator_delete(this);
    }

    // 0x1008adc00, 80 bytes, placed by class name
    // PointLightSM::Destroy()
    void PointLightSM::Destroy() {
        if (field_8 == (PointLightSMManager*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pParentPointLightSMManager != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSM.cpp",
                      66, (char*)0);
        }
        if (field_8 != (PointLightSMManager*)0) {
            (field_8, this)->FreePointLightSM();
        }
    }

    // 0x1008ade80, 272 bytes, placed by class name
    // PointLightSM::ComputeLinearLightLODLevel(math::Sphere const&, ViewTransforms const&, float)
    void PointLightSM::ComputeLinearLightLODLevel(Sphere* param_1, ViewTransforms* param_2, float param_3) {
        vector* pvVar2;
        Matrix44T* pMVar3;
        Matrix44T* pMVar4;
        long lVar5;
        float fVar6;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;
        float local_2c;

        pvVar2 = param_2->SSOBeginPtr(param_1);
        if (param_1->IsInside(pvVar2) == '\0') {
            pMVar3 = (Matrix44T*)param_2->GetScreen();
            pMVar4 = (Matrix44T*)param_2->GetOrigin();
            fVar6 = (float)math::NDCProjectGetSphericalNDCRadius(param_1, pMVar3, pMVar4);
            local_2c = (float)::sqrt(fVar6);
            local_2c = local_2c + local_2c;
        } else {
            local_2c = 1.0;
        }
        local_44 = 0.0;
        lVar5 = GetLODLevels(this);
        local_40 = (float)(lVar5 - 1);
        local_3c = local_2c + param_3;
        local_38 = 0.0;
        local_34 = 1.0;
        fVar6 = math::Clamp<float>(&local_3c, &local_38, &local_34);
        fVar6 = math::Lerp<float, float>(&local_44, &local_40, 1.0 - fVar6);
        math::RoundFloatToInt(fVar6);
    }

    // 0x1008ae030, 96 bytes, placed by class name
    // PointLightSM::SetLODLevel(int)
    void PointLightSM::SetLODLevel(int param_1) {
        int iVar1;

        if (-1 < param_1) {
            iVar1 = (&field_16)->size();
            if (param_1 < iVar1) {
                if (m_lODLevel != param_1) {
                    m_lODLevel = param_1;
                    ResetPasses(this);
                }
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("lodLevel >= 0 && lodLevel < static_cast<int>(m_shadowCubeMapLodAtlasData.size())",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/lighting/"
                  "shadowmapping/PointLightSM.cpp",
                  93, (char*)0);
    }

    // 0x1008ae0b0, 80 bytes, placed by class name
    // PointLightSM::ResetPasses()
    void PointLightSM::ResetPasses() {
        PointLightSMPass* this_00;
        PointLightSMPass* pPVar1;

        this_00 = (PointLightSMPass*)(&field_48)->begin();
        pPVar1 = (PointLightSMPass*)(&field_48)->end();
        for (; this_00 != pPVar1; this_00 = (PointLightSMPass*)&this_00->field_1136) {
            this_00->Reset();
        }
    }

    // 0x1008ae100, 48 bytes, placed by class name
    // PointLightSM::SetShadowParams(LightShadowParams const&)
    void PointLightSM::SetShadowParams(LightShadowParams* param_1) {
        undefined8 uVar1;
        undefined3 uVar2;
        undefined4 uVar3;

        if (field_6876 != param_1->field_4) {
            ResetPasses(this);
        }
        uVar2 = *(undefined3*)&param_1->field_1;
        uVar3 = param_1->field_4;
        uVar1 = param_1->field_8;
        m_shadowParams = param_1->field_0;
        *(undefined3*)&field_6873 = uVar2;
        field_6876 = uVar3;
        *(undefined8*)&field_6880 = uVar1;
    }

    // 0x1008ae130, 464 bytes, placed by class name
    // PointLightSM::GetShaderConsts(PointLightSM::ShaderConsts&, float, float) const
    void PointLightSM::GetShaderConsts(ShaderConsts* param_1, float param_2, float param_3) {
        undefined1* this_00;
        int iVar1;
        vector* pvVar2;
        float* pfVar3;
        long lVar4;
        ShaderConsts* pSVar5;
        float fVar6;

        if (((m_lODLevel == -1) || (3 < m_lODLevel)) || (m_iD == -1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_LODLevel != -1 && (m_LODLevel < MAX_POINT_LIGHT_SHADOWS_LODS) && m_id != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSM.cpp",
                      116, (char*)0);
        }
        if (1.0 < field_6884) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_shadowParams.m_shadowStrength <= 1.0f",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSM.cpp",
                      117, (char*)0);
        }
        if (param_3 - param_2 < 0.0) {
            /* WARNING: Subroutine does not return */
            LogAssert("fadeRange >= 0.0f",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/PointLightSM.cpp",
                      119, "Shadow fade distance must be <= max shadow view distance");
        }
        fVar6 = 1.0;
        if (m_shadowParams == '\0') {
            fVar6 = 0.0;
        }
        pSVar5 = param_1;
        param_1->Set(fVar6, param_2, param_3, 1.0 / (param_3 - param_2));
        pvVar2 = (field_8, (type*)pSVar5)->SSOBeginPtr();
        iVar1 = *(int*)(pvVar2 + 68);
        pvVar2 = (field_8, (type*)pSVar5)->SSOBeginPtr();
        fVar6 = *(float*)(pvVar2 + 32);
        pvVar2 = (field_8, (type*)pSVar5)->SSOBeginPtr();
        pfVar3 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)(pvVar2 + 36), (long)m_lODLevel);
        (&param_1->field_16, (float)iVar1, fVar6, *pfVar3, field_6884)->Set();
        this_00 = &field_16;
        lVar4 = eastl::vector<ShadowCubeMapAtlasData, eastl::allocator>::operator[](
            (vector<ShadowCubeMapAtlasData, eastl::allocator>*)this_00, (long)m_lODLevel);
        math::Vector2T<float>::operator=((Vector2T<float>*)&param_1->field_32, (Vector2T*)(lVar4 + 44));
        lVar4 = eastl::vector<ShadowCubeMapAtlasData, eastl::allocator>::operator[](
            (vector<ShadowCubeMapAtlasData, eastl::allocator>*)this_00, (long)m_lODLevel);
        math::Vector2T<float>::operator=((Vector2T<float>*)&param_1->field_40, (Vector2T*)(lVar4 + 52));
        lVar4 = eastl::vector<ShadowCubeMapAtlasData, eastl::allocator>::operator[](
            (vector<ShadowCubeMapAtlasData, eastl::allocator>*)this_00, (long)m_lODLevel);
        std::array<math::Vector4T<float>, 6ul>::operator=((array<math::Vector4T<float>, 6ul>*)&param_1->field_48,
                                                          (array*)(lVar4 + 160));
    }

} // namespace jag::graphics

// 0x1008adfe0, 64 bytes, placed by neighbouring functions
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
