// libs/graphics/runetek7/lighting/shadowmapping/DirLightCsmManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "DirLightCsmManager.h"

namespace jag::graphics {
    // 0x1000b9950: DirLightCsmManager::GetLightViewMat() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x100102fc0: DirLightCsmManager::GetCamViewMat() const has the same machine code as oldscape::rs2lib::InputField::GetPlaceholderContents() const

    // 0x1008a7260
    void DirLightCsmManager::GetShadowMapCascade(unsigned int arg1) const {
        uint32_t in_EAX;

        uint64_t local_18 = (((uint64_t)arg1 << 32) | (uint32_t)in_EAX);
        if (3 < arg1) {
            LogAssert("iCascade < MAX_ATLAS_CASCADES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/DirLightCsmManager.cpp",
                      382, nullptr);
        }
        local_18 = (unsigned long)arg1 << 32;
        unsigned int uVar1 =
            math::Clamp<unsigned int>(*((unsigned int*)((long)&local_18 + 4)), local_18, MAX_ATLAS_CASCADES);
        local_18 = (((uint64_t)uVar1 << 32) | (uint32_t)((unsigned int)local_18));
        ((unique_ptr<ShadowMapCascade>*)field_696[(unsigned long)uVar1])->get();
    }

    // 0x1008aa5f0
    DirLightCsmManager::DirLightCsmManager(render::RenderTargetsManager* renderTargetsManager, ThreadPool* threadPool) {
        unique_ptr<ShadowMapCascade>* this_00;
        ReturnValue local_78;

        new (m_lightViewMat) math::Matrix44T<float>();
        new ((m_lightViewMat + 64)) math::Matrix44T<float>();
        new (&field_144) std::array<math::Matrix44T<float>, 4ul>();
        new (&field_400) std::array<render::RasteriserState, 4ul>();
        uint8_t* local_60 = &field_400;
        new (&field_544) render::SamplerState();
        uint8_t* local_58 = &field_544;
        new (&field_608) render::SamplerState();
        uint8_t* local_50 = &field_608;
        new (field_672) shared_ptr();
        field_688 = 2048;
        field_692 = 0.0;
        uint8_t* local_48 = field_672;
        new (&field_696) std::array<std::unique_ptr<ShadowMapCascade>, 4ul>();
        new (&m_config) Config();
        field_864 = renderTargetsManager;
        field_872 = false;
        field_873 = false;
        field_874 = 0;
        field_875 = false;
        field_876 = false;
        field_877 = false;
        unsigned int local_34 = 0;
        do {
            local_78 = std::make_unique<ShadowMapCascade, int&, DirLightCsmManager*, render::RenderTargetsManager*&,
                                        ThreadPool*&>(local_34, this, renderTargetsManager, threadPool);
            this_00 = &field_696[(long)(int)local_34];
            *this_00 = local_78;
            local_34 = local_34 + 1;
        } while (local_34 < 4);
    }

    // 0x1008aa8a0
    DirLightCsmManager::~DirLightCsmManager() {
        Destroy();
        field_696.~array();
        field_672->~shared_ptr();
        field_400.~array();
    }

    // 0x1008aa950
    void DirLightCsmManager::Destroy() {
        DestroyRenderingResources();
    }

    // 0x1008aa990
    uint8_t DirLightCsmManager::Initialise(const DirLightCsmManager::Config& config) {
        float arg1;
        uint64_t uVar1;
        uint64_t uVar2;
        uint64_t uVar3;
        uint64_t uVar4;
        uint64_t uVar5;
        uint64_t uVar6;
        uint64_t uVar7;
        uint32_t uVar8;
        int iVar9;
        float* pfVar12;

        CreateRasterizerStates();
        uint8_t bVar10 = CreateSamplerStates();
        uint8_t bVar11 = SetShadowMapCascadeRes(config.field_4, *(unsigned int*)config);
        if ((bVar11 & bVar10) == 1) {
            ApplyConfig(config);
            pfVar12 = &config.field_72[0];
            arg1 = *pfVar12;
            pfVar12 = &config.field_72[1];
            SetSlopeBias(arg1, *pfVar12);
            *(uint64_t*)&field_853 = *(uint64_t*)((long)&config.field_108 + 1);
            uVar1._0_4_ = config.field_104;
            uVar1._4_2_ = config.field_108;
            uVar1._6_2_ = *(uint16_t*)&config.field_110;
            field_840 = config.field_96;
            field_848 = (float)(uint32_t)uVar1;
            field_852 = (bool)(char)((unsigned long)uVar1 >> 32);
            field_853 = (char)((unsigned long)uVar1 >> 40);
            *(short*)&field_854 = (short)((unsigned long)uVar1 >> 48);
            uVar1 = *(uint64_t*)&config.field_88;
            field_824 = *(uint64_t*)&config.field_80;
            field_832 = uVar1;
            uVar1 = config.field_72;
            field_808 = *(uint64_t*)&config.field_64;
            field_816 = uVar1;
            uVar8 = *(uint32_t*)&config.field_0;
            iVar9 = config.field_4;
            uVar1 = *(uint64_t*)&config.field_8;
            uVar2 = *(uint64_t*)((long)&config.field_12 + 4);
            uVar3 = *(uint64_t*)((long)&config.field_20 + 4);
            uVar4 = *(uint64_t*)((long)&config.field_28 + 4);
            uVar5 = *(uint64_t*)((long)&config.field_36 + 4);
            uVar6 = *(uint64_t*)((long)&config.field_44 + 4);
            uVar7 = *(uint64_t*)&config.field_56;
            m_cascadeFadeRangeScale = (float)(int)uVar6;
            m_lightCamNearClipOffset = (float)(int)((unsigned long)uVar6 >> 32);
            field_800 = uVar7;
            m_cascadeSplitWeight = (float)(int)uVar4;
            m_cascadeNearClip = (float)(int)((unsigned long)uVar4 >> 32);
            m_maxShadowDistance = (float)(int)uVar5;
            field_788 = (float)(int)((unsigned long)uVar5 >> 32);
            field_760 = uVar2;
            field_768 = uVar3;
            m_config = uVar8;
            field_748 = iVar9;
            *(uint64_t*)&field_752 = uVar1;
        } else {
            DestroyRenderingResources();
        }
        return bVar11 & bVar10;
    }

    // 0x1008aaa90
    uint32_t DirLightCsmManager::CreateRasterizerStates() {
        RasteriserState* this_00;

        Desc local_48;
        unsigned long arg1 = 0;
        do {
            this_00 = &field_400[arg1];
            this_00->Destroy();
            local_48.field_4 = render::GetCullMode((int)arg1);
            local_48.field_22 = '\0';
            this_00->Create(local_48);
            arg1 = arg1 + 1;
        } while (arg1 != 4);
        return 1;
    }

    // 0x1008aab10
    void DirLightCsmManager::CreateSamplerStates() {
        render::SamplerState::Destroy();
        Singleton<render::BuiltinStates>* this_01 = (Singleton<render::BuiltinStates>*)&field_608;
        render::SamplerState::Destroy();
        ((BuiltinStates*)this_01->Instance())->CreateShadowSamplerState(field_544);
        Desc local_68;
        local_68.field_0 = 7;
        local_68.field_4 = 33071;
        local_68.field_8 = 33071;
        local_68.field_12 = 33071;
        local_68.field_16 = 0.0;
        local_68.field_20 = 1.0;
        local_68.field_48 = 0.0;
        local_68.field_52 = 0.0;
        field_608.Create(local_68);
    }

    // 0x1008aabb0
    uint32_t DirLightCsmManager::SetShadowMapCascadeRes(unsigned int arg1, unsigned int arg2) {
        uint32_t uVar2;

        unsigned int local_1c = arg1;
        if (8192 < arg1) {
            LogAssert("shadowMapCascadeRes <= MAX_SHADOW_MAP_CASCADE_RES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/DirLightCsmManager.cpp",
                      340, nullptr);
        }
        unsigned int uVar1 = math::Clamp<unsigned int>(local_1c, 256, MAX_SHADOW_MAP_CASCADE_RES);
        unsigned int arg1_00 = uVar1 * 2;
        field_748 = uVar1;
        field_688 = arg1_00;
        field_692 = 1.0 / (float)(int)arg1_00;
        local_1c = local_1c | uVar1;
        if ((local_1c == 0) && (arg2 = arg2 | m_config, arg2 == 0)) {
            uVar2 = 1;
        } else {
            uVar2 = CreateRenderTargets(arg1_00, arg2);
        }
        UpdateCascadeRenderTargetData();
        return uVar2;
    }

    // 0x1008aac70
    void DirLightCsmManager::ApplyConfig(const DirLightCsmManager::Config& config) {
        float* pfVar1;
        LightProjectionFit* pLVar2;

        SetCascadeCount(config.field_8);
        SetCascadeSplitWeight(*(float*)((long)&config.field_28 + 4));
        SetCascadeNearClip(*(float*)&config.field_36);
        SetCascadeFarClip(*(float*)((long)&config.field_36 + 4));
        SetCascadeFadeRangeScale(*(float*)((long)&config.field_44 + 4));
        SetLightCamNearClipOffset((float)config.field_52);
        unsigned long arg1 = 0;
        do {
            pfVar1 = &config.field_56[arg1];
            SetCascadeBias((unsigned int)arg1, *pfVar1);
            pLVar2 = &config.field_80[arg1];
            SetCascadeLightProjFit((unsigned int)arg1, *pLVar2);
            arg1 = arg1 + 1;
        } while (arg1 != 4);
        SetShadowStrength((float)config.field_104);
    }

    // 0x1008aad40
    void DirLightCsmManager::SetSlopeBias(float arg1, float arg2) {
        float* pfVar1 = &field_816[0];
        *pfVar1 = arg1;
        pfVar1 = &field_816[1];
        *pfVar1 = arg2;
        CreateRasterizerStates();
    }

    // 0x1008aadb0
    void DirLightCsmManager::DestroyRenderingResources() {
        RasteriserState* this_00 = (RasteriserState*)std::array<render::RasteriserState, 4ul>::begin();
        RasteriserState* pRVar1 = (RasteriserState*)std::array<render::RasteriserState, 4ul>::end();
        for (; this_00 != pRVar1; this_00 = (RasteriserState*)((long)&this_00[1].field_0 + 3)) {
            this_00->Destroy();
        }
        field_864->Unregister(*field_672);
        render::SamplerState::Destroy();
        render::SamplerState::Destroy();
    }

    // 0x1008aae30
    void DirLightCsmManager::SetCascadeCount(unsigned int arg1) {
        uint32_t in_EAX;
        unsigned int local_18;
        unsigned int local_14;

        _local_18 = (((uint64_t)arg1 << 32) | (uint32_t)in_EAX);
        if (4 < arg1) {
            LogAssert("cascadeCount <= MAX_ATLAS_CASCADES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/DirLightCsmManager.cpp",
                      361, nullptr);
        }
        _local_18 = (((uint64_t)arg1 << 32) | (uint32_t)1);
        field_752 = math::Clamp<unsigned int>(local_14, local_18, MAX_ATLAS_CASCADES);
    }

    // 0x1008aaed0
    void DirLightCsmManager::SetCascadeBias(unsigned int arg1, float arg2) {
        float* pfVar1 = &field_800[(unsigned long)arg1];
        *pfVar1 = arg2;
        UpdateShadowMapClip2TexMat(field_800);
    }

    // 0x1008aafa0
    void DirLightCsmManager::Update(const ViewTransforms& viewTransforms, const math::Vector3T<float>& vector3,
                                    std::array<unsigned int, 4ul>& arg3, bool arg4) {
        uint8_t* arg1;
        float arg3_00;
        unsigned int uVar1;
        Vector3T<float>* vector32;
        Matrix44T<float>* matrix44;
        unsigned int* puVar2;
        unsigned int* puVar3;
        float* pfVar4;
        unique_ptr<ShadowMapCascade>* puVar5;
        ShadowMapCascade* pSVar6;
        unsigned long arg1_00;
        float local_34;

        if (field_877 == false) {
            vector32 = (Vector3T<float>*)viewTransforms.SSOBeginPtr();
            UpdateLightViewMat(vector3, *vector32);
            UpdateShadowMapClip2TexMat(field_800);
            matrix44 = (Matrix44T<float>*)viewTransforms.GetScreen();
            (*((m_lightViewMat + 64))) = *matrix44;
            arg1 = &field_728;
            CalcPracticalCascadeSplitDistances((array<float, _4ul>*)arg1, field_752, m_cascadeNearClip,
                                               m_maxShadowDistance, m_cascadeSplitWeight);
            if (field_752 != 0) {
                arg1_00 = 0;
                do {
                    puVar2 = &arg3[arg1_00];
                    uVar1 = *puVar2;
                    *puVar2 = uVar1 + 1;
                    arg4 = (bool)(arg4 & field_853);
                    puVar3 = &field_756[arg1_00];
                    if ((uVar1 + 1 < *puVar3) && (arg4 != false)) {
                        puVar5 = &field_696[arg1_00];
                        pSVar6 = (ShadowMapCascade*)(*puVar5).operator->();
                        pSVar6->SetCanRender(false);
                    } else {
                        if (arg1_00 == 0) {
                            local_34 = 0.0;
                        } else {
                            pfVar4 = (float*)(*arg1)[arg1_00 - 1];
                            local_34 = *pfVar4;
                        }
                        pfVar4 = (float*)(*arg1)[arg1_00];
                        arg3_00 = *pfVar4;
                        puVar5 = &field_696[arg1_00];
                        pSVar6 = (ShadowMapCascade*)(*puVar5).operator->();
                        pSVar6->SetFrustum(viewTransforms, local_34, arg3_00, *m_lightViewMat);
                        pSVar6 = (ShadowMapCascade*)(*puVar5).operator->();
                        pSVar6->SetCanRender(true);
                        *puVar2 = 0;
                    }
                    arg1_00 = arg1_00 + 1;
                } while (arg1_00 < field_752);
            }
        }
    }

    // 0x1008ab190
    void DirLightCsmManager::UpdateLightViewMat(const math::Vector3T<float>& vector31,
                                                const math::Vector3T<float>& vector32) {
        uint32_t local_28 = *(uint32_t*)(PTR_UP_100ee66d0 + 8);
        uint64_t local_30 = *(uint64_t*)PTR_UP_100ee66d0;
        float fVar1 = math::Vector3Dot<float>(local_30, vector31);
        fVar1 = (float)::abs(fVar1);
        if (1.0 < fVar1 + 1.1920929e-07) {
            local_30.SetXYZ(*PTR_RIGHT_100ee66f0);
        }
        math::Matrix44LookAtLH<float>(*m_lightViewMat, vector32, vector31, local_30, 500.0);
    }

    // 0x1008ab220
    void DirLightCsmManager::UpdateShadowMapClip2TexMat(const std::array<float, 4ul>& arg1) {
        Matrix44T<float>* this_00;
        float* pfVar1;
        float arg1_01;

        field_692 = 1.0 / (float)(int)field_688;
        unsigned long arg1_00 = 0;
        do {
            arg1_01 = 0.25 - field_692;
            this_00 = &field_144[arg1_00];
            pfVar1 = &arg1[arg1_00];
            this_00->Set(arg1_01, 0.0, 0.0, 0.0, 0.0, arg1_01, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
                         (float)((unsigned int)arg1_00 & 1) * 0.5 + 0.25,
                         (float)((unsigned int)(arg1_00 >> 1) & 2147483647) * 0.5 + 0.25, *pfVar1, 1.0);
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 4);
    }

    // 0x1008abac0
    math::AABB DirLightCsmManager::GetCascadesWorldSpaceAABB() const {
        unique_ptr<ShadowMapCascade>* this_00;
        SunlightShadows* this_01;
        OBB* this_02;
        AABB* aabb;
        unsigned long arg1;
        AABB local_58;

        math::AABB result;
        if (field_752 != 0) {
            arg1 = 0;
            do {
                local_58 = math::AABB();
                this_00 = &field_696[arg1];
                this_01 = (SunlightShadows*)(*this_00).operator->();
                this_02 = (OBB*)this_01->GetSunlightCsmManager();
                aabb = (AABB*)this_02->GetMinimumEnclosingAABB(local_58);
                result.AddAABB(*aabb);
                arg1 = arg1 + 1;
            } while (arg1 < field_752);
        }
        return result;
    }

    // 0x1008abb70
    void DirLightCsmManager::GetShadowMapAtlasRenderTargetData(render::RenderTargetData& renderTargetData) {
        renderTargetData.field_0 = (RenderTargets*)field_672->end();
        renderTargetData.field_48 = 2;
        ImVec4 local_28(1.0, 0.0, 0.0, 0.0);
        Rect<float>* this_00 = &renderTargetData.field_16[(unsigned long)renderTargetData];
        *this_00 = local_28;
        renderTargetData.field_52 = 1.0;
    }

    // 0x1008abbf0
    void DirLightCsmManager::GetShaderConsts(DirLightCsmManager::ShaderConsts& shaderConsts) const {
        DirLightCsmManager* pDVar1;
        unique_ptr<ShadowMapCascade>* this_01;
        ShadowMapCascade* pSVar4;
        WorldmapAreaMetadata* this_02;
        Matrix44T<float>* pMVar5;
        RT7Core* this_03;
        Layout* this_04;
        Sphere* this_05;
        ShaderConsts* pSVar6;
        Matrix44T<float>* this_06;
        unsigned long arg1;
        float fVar10;
        float fVar11;
        uint64_t local_a8;
        float fStack_a0;
        uint32_t uStack_9c;
        array<std::unique_ptr<ShadowMapCascade>, 4ul>* local_60;
        ShaderConsts* local_58;
        ShaderConsts* local_50;
        DirLightCsmManager* local_48;
        unique_ptr<ShadowMapCascade>* local_40;

        uint8_t* this_00 = &field_728;
        Vector3T<float>* local_38 = (Vector3T<float>*)(*this_00)[0];
        local_48 = (DirLightCsmManager*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)(*(float*)local_38));
        uint32_t* puVar2 = (uint32_t*)(*this_00)[1];
        local_50 = (ShaderConsts*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)(*puVar2));
        float* pfVar3 = (float*)(*this_00)[2];
        local_40._0_4_ = *pfVar3;
        pfVar3 = (float*)(*this_00)[3];
        ImVec4 local_e8(local_48._0_4_, local_50._0_4_, local_40._0_4_, *pfVar3);
        shaderConsts = local_e8;
        local_e8 = ImVec4(1.0 / (float)(int)field_688, 1.0 / ((float)field_748 - (field_692 + field_692)), field_848,
                          (float)field_752);
        (*((shaderConsts + 16))) = local_e8;
        local_48 = (DirLightCsmManager*)&m_maxShadowDistance;
        float fVar8 = m_maxShadowDistance;
        unsigned int uVar7 = field_752;
        if (uVar7 < 2) {
            fVar10 = m_cascadeFadeRangeScale * *(float*)local_38;
        } else {
            local_50 = (ShaderConsts*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)fVar8);
            local_40._0_4_ = m_cascadeFadeRangeScale;
            puVar2 = (uint32_t*)(*this_00)[(unsigned long)(uVar7 - 1)];
            local_38 = (Vector3T<float>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)(*puVar2));
            pfVar3 = (float*)(*this_00)[(unsigned long)(uVar7 - 2)];
            fVar10 = (local_38._0_4_ - *pfVar3) * local_40._0_4_ + *pfVar3;
            fVar8 = local_50._0_4_;
        }
        uint32_t uVar9 = 0;
        local_e8 = ImVec4(fVar10, fVar8, 1.0 / (fVar8 - fVar10), field_692);
        (*((shaderConsts + 32))) = local_e8;
        fVar10 = math::Lerp<float, float>(m_cascadeNearClip, *local_48, field_788);
        *(float*)(shaderConsts + 652) = fVar10;
        uVar7 = 0;
        if (field_752 != 0) {
            local_60 = (array<std::unique_ptr<ShadowMapCascade>, 4ul>*)&field_696;
            pSVar6 = shaderConsts + 432;
            this_06 = (Matrix44T<float>*)(shaderConsts + 176);
            arg1 = 0;
            local_58 = shaderConsts;
            local_48 = this;
            do {
                local_50 = pSVar6;
                local_40 = (unique_ptr<ShadowMapCascade>*)(*local_60)[arg1];
                pSVar4 = (ShadowMapCascade*)(*local_40).operator->();
                this_02 = (WorldmapAreaMetadata*)pSVar4->GetLightViewTransforms();
                pMVar5 = (Matrix44T<float>*)this_02->GetOrigin();
                uVar7 = (unsigned int)arg1;
                GetShadowMapClip2TexMat(local_48, uVar7);
                local_e8** pMVar5;
                local_a8 = local_e8.GetDiagonal();
                fStack_a0 = fVar8;
                uStack_9c = uVar9;
                ((pSVar6 - 384))->Set(local_a8);
                local_a8 = local_e8.GetPos();
                fStack_a0 = fVar8;
                ((pSVar6 - 320))->Set(local_a8, 0.0);
                this_01 = local_40;
                pSVar4 = (ShadowMapCascade*)(*local_40).operator->();
                this_03 = (RT7Core*)pSVar4->GetLightViewTransforms();
                pMVar5 = (Matrix44T<float>*)this_03->GetImmediateThreadPool();
                pDVar1 = local_48;
                GetShadowMapClip2TexMat(local_48, uVar7);
                local_a8** pMVar5;
                *this_06 = local_a8;
                pSVar6 = local_50;
                pSVar4 = (ShadowMapCascade*)(*this_01).operator->();
                this_04 = (Layout*)pSVar4->GetFrustumWorldBoundingSphere();
                local_38 = (Vector3T<float>*)this_04->SSOBeginPtr();
                pSVar4 = (ShadowMapCascade*)(*this_01).operator->();
                this_05 = (Sphere*)pSVar4->GetFrustumWorldBoundingSphere();
                fVar8 = (float)this_05->GetRadiusSq();
                pSVar6->Set(*local_38, fVar8);
                fVar8 = pDVar1->field_692;
                fVar10 = (float)(uVar7 & 1) * 0.5;
                fVar11 = (float)((unsigned int)(arg1 >> 1) & 2147483647) * 0.5;
                local_38 = (Vector3T<float>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)fVar11);
                local_40._0_4_ = fVar10;
                ((pSVar6 + 64))->Set(fVar8 + fVar10, fVar8 + fVar11, (0.5 - fVar8) + fVar10, (0.5 - fVar8) + fVar11);
                uVar9 = 0;
                fVar8 = local_38._0_4_;
                ((pSVar6 + 128))->Set(local_40._0_4_, local_38._0_4_, local_40._0_4_ + 0.5, local_38._0_4_ + 0.5);
                arg1 = arg1 + 1;
                uVar7 = pDVar1->field_752;
                pSVar6 = pSVar6 + 16;
                this_06 = this_06 + 64;
            } while (arg1 < uVar7);
            shaderConsts = local_58;
        }
        fVar10 = 1.0;
        fVar8 = 1.0;
        if (uVar7 == 0) {
            fVar8 = 0.0;
        }
        fVar11 = 1.0;
        if (uVar7 < 2) {
            fVar11 = 0.0;
        }
        float arg3 = 1.0;
        if (uVar7 < 3) {
            arg3 = 0.0;
        }
        if (uVar7 < 4) {
            fVar10 = 0.0;
        }
        ((shaderConsts + 624))->Set(fVar8, fVar11, arg3, fVar10);
    }

    // 0x1008ac120
    void DirLightCsmManager::RenderDebug() const {
        int iVar2;
        RenderTargets* pRVar3;
        long* plVar4;
        float* pfVar5;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_01;
        uint64_t* puVar6;
        TextureManager* this_02;
        Vector4T<float>* pVVar7;
        ShadowMapCascade* pSVar8;
        NXTPixToolkit* this_03;
        Matrix44T<float>* matrix442;
        QuaternionT<float>* pQVar9;
        uint64_t uVar10;
        unsigned long uVar11;
        unsigned int uVar12;
        uint8_t local_168[64];
        AABB local_e8;
        uint8_t local_b8[16];
        uint8_t local_a8[12];
        float local_9c;
        float local_98;
        float local_94;
        float local_90;
        float local_8c;
        OBB local_88;

        if (field_872 != false) {
            pRVar3 = (RenderTargets*)(*field_672).operator->();
            local_b8._8_8_ = pRVar3->GetDepthStencilTargetTexture();
            if (field_752 != 0) {
                uVar12 = 0;
                do {
                    local_128 = math::Point(0.0, 0.2);
                    plVar4 = DebugPrimitiveCollectorBasic::GetCollector("");
                    if (plVar4 != nullptr) {
                        local_8c = (float)(uVar12 & 1);
                        local_98 = (float)(uVar12 >> 1);
                        local_9c = local_8c * 0.5;
                        local_a8._8_4_ = local_98 * 0.5;
                        local_94 = (float)local_a8._8_4_ + 0.5;
                        local_90 = local_9c + 0.5;
                        pfVar5 = (float*)local_128.SSOBeginPtr();
                        local_8c = local_8c * 0.2 + *pfVar5;
                        pfVar5 = (float*)local_128.y();
                        local_88 = ImVec4(local_8c, local_98 * 0.2 + *pfVar5, 0.2, 0.2);
                        new (local_168) math::Point(local_9c, (float)local_a8._8_4_);
                        local_e8 = math::Point(local_90, local_94);
                        new (local_a8) math::ColourStorage8888(255, 255, 255, 255);
                        iVar2 = local_a8->GetX();
                        new (local_b8) oldscape::sidebars::SideBarData(iVar2, 0);
                        this = this;
                        (**(void (**)(...))(*plVar4 + 112))(plVar4, local_b8._8_8_, &local_88, local_168, &local_e8, 0,
                                                            1, 0, (SideBarData*)local_b8);
                    }
                    uVar12 = uVar12 + 1;
                } while (uVar12 < field_752);
            }
        }
        if (field_873 != false) {
            pRVar3 = (RenderTargets*)(*field_672).operator->();
            if (((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)
                     pRVar3->GetColourTargetTextures())
                    ->empty() == '\0') {
                pRVar3 = (RenderTargets*)(*field_672).operator->();
                this_01 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                              pRVar3->GetColourTargetTextures();
                uVar12 = 0;
                puVar6 = (uint64_t*)(*this_01)[0];
                if (field_752 != 0) {
                    local_b8._8_8_ = *puVar6;
                    do {
                        local_128 = math::Point(0.0, 0.2);
                        plVar4 = DebugPrimitiveCollectorBasic::GetCollector("");
                        if (plVar4 != nullptr) {
                            local_8c = (float)(uVar12 & 1);
                            local_98 = (float)(uVar12 >> 1);
                            local_9c = local_8c * 0.5;
                            local_a8._8_4_ = local_98 * 0.5;
                            local_94 = (float)local_a8._8_4_ + 0.5;
                            local_90 = local_9c + 0.5;
                            pfVar5 = (float*)local_128.SSOBeginPtr();
                            local_8c = local_8c * 0.2 + *pfVar5;
                            pfVar5 = (float*)local_128.y();
                            local_88 = ImVec4(local_8c, local_98 * 0.2 + *pfVar5, 0.2, 0.2);
                            new (local_168) math::Point(local_9c, (float)local_a8._8_4_);
                            local_e8 = math::Point(local_90, local_94);
                            new (local_a8) math::ColourStorage8888(255, 255, 255, 255);
                            iVar2 = local_a8->GetX();
                            new (local_b8) oldscape::sidebars::SideBarData(iVar2, 0);
                            (**(void (**)(...))(*plVar4 + 112))(plVar4, local_b8._8_8_, &local_88, local_168, &local_e8,
                                                                0, 0, 0, (SideBarData*)local_b8);
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < field_752);
                }
            }
        }
        Point<float> local_128(1.5, 0.0, 0.0, 1.0);
        ImVec4 local_118(0.0, 1.5, 0.0, 1.0);
        ImVec4 local_108(0.0, 1.0, 5.5, 1.0);
        float fVar13 = 0.0;
        ImVec4 local_f8(1.5, 0.0, 5.5, 1.0);
        if ((field_875 != false) && (field_752 != 0)) {
            uVar11 = 0;
            do {
                uVar12 = (unsigned int)uVar11;
                this_02 = (TextureManager*)GetShadowMapCascade(uVar12);
                pVVar7 = (Vector4T<float>*)this_02->GetTextureAtlasManager();
                local_88._0_8_ = pVVar7->GetXYZ();
                local_88.field_8 = fVar13;
                pSVar8 = (ShadowMapCascade*)GetShadowMapCascade(uVar12);
                pVVar7 = (Vector4T<float>*)pSVar8->GetLightOrthProjMax();
                local_168._0_8_ = pVVar7->GetXYZ();
                local_168._8_4_ = fVar13;
                local_e8 = math::AABB(&local_88, local_168);
                local_88 = math::OBB(local_e8);
                new (local_168) math::Matrix44T<float>();
                pSVar8 = (ShadowMapCascade*)GetShadowMapCascade(uVar12);
                this_03 = (NXTPixToolkit*)pSVar8->GetLightViewTransforms();
                matrix442 = (Matrix44T<float>*)this_03->GetScreen();
                math::Matrix44Inverse<float>(*local_168, nullptr, *matrix442);
                local_88.Transform(*local_168);
                local_88.GetMinimumEnclosingAABB(local_e8);
                plVar4 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar4 != nullptr) {
                    pQVar9 = &local_128[uVar11];
                    pfVar5 = (float*)pQVar9->qw();
                    local_8c = *pfVar5;
                    pfVar5 = (float*)pQVar9->SSOBeginPtr();
                    local_94 = *pfVar5;
                    pfVar5 = (float*)pQVar9->y();
                    local_90 = *pfVar5;
                    pfVar5 = (float*)pQVar9->second();
                    fVar13 = local_94;
                    new (local_a8) math::ColourStorage8888(local_8c, local_94, local_90, *pfVar5);
                    iVar2 = local_a8->GetX();
                    new (local_b8) oldscape::sidebars::SideBarData(iVar2, 3);
                    (**(void (**)(...))(*plVar4 + 80))(plVar4, &local_88, (SideBarData*)local_b8);
                }
                uVar11 = uVar11 + 1;
            } while (uVar11 < field_752);
        }
        if ((field_876 != false) && (field_752 != 0)) {
            uVar11 = 0;
            do {
                pSVar8 = (ShadowMapCascade*)GetShadowMapCascade((unsigned int)uVar11);
                uVar10 = pSVar8->GetFrustumWorldBoundingSphere();
                plVar4 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar4 != nullptr) {
                    pQVar9 = &local_128[uVar11];
                    pfVar5 = (float*)pQVar9->qw();
                    local_8c = *pfVar5;
                    pfVar5 = (float*)pQVar9->SSOBeginPtr();
                    local_94 = *pfVar5;
                    pfVar5 = (float*)pQVar9->y();
                    local_90 = *pfVar5;
                    pfVar5 = (float*)pQVar9->second();
                    new (local_168) math::ColourStorage8888(local_8c, local_94, local_90, *pfVar5);
                    iVar2 = local_168->GetX();
                    local_88 = oldscape::sidebars::SideBarData(iVar2, 2);
                    (**(void (**)(...))(*plVar4 + 32))(plVar4, uVar10, &local_88);
                }
                uVar11 = uVar11 + 1;
            } while (uVar11 < field_752);
        }
    }

    // 0x1008ac930
    void DirLightCsmManager::CreateRenderTargets(unsigned int arg1, unsigned int arg2) {
        RenderTargets* pRVar2;
        long* plVar3;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_03;
        uint64_t* puVar4;
        uint8_t local_f8[68];
        uint8_t local_78[80];

        Desc* this_05 = (Desc*)local_78;
        new (this_05) render::Texture::Desc();
        local_78._12_4_ = 0;
        auto this_01 = this_05->Instance();
        local_78._12_4_ = render::GetAlpha8TextureFormat(*((RenderDeviceCaps*)this_01->GetOrigin()));
        local_78._0_4_ = arg1;
        local_78._4_4_ = arg1;
        new ((local_f8 + 64)) render::Texture::Desc();
        uint32_t local_ac = render::GetFormatFromDepthStencilBits(arg2, 0, false);
        RenderTargetsManager* str = field_864;
        uint64_t local_138 = (((uint64_t)local_78._4_4_ << 32) | (uint32_t)local_78._0_4_);
        uint64_t uStack_130 = (((uint64_t)local_78._12_4_ << 32) | (uint32_t)local_78._8_4_);
        uint64_t local_108 = local_78._48_8_;
        char cStack_100 = local_78[56];
        uint32_t uStack_ff = local_78._57_3_;
        uint32_t uStack_fc = local_78._60_4_;
        uint8_t local_118 = local_78[32];
        uint32_t uStack_117 = local_78._33_3_;
        uint32_t uStack_114 = local_78._36_4_;
        uint64_t uStack_110 = local_78._40_8_;
        uint32_t local_128 = local_78._16_4_;
        int iStack_124 = local_78._20_4_;
        int iStack_120 = local_78._24_4_;
        int iStack_11c = local_78._28_4_;
        local_f8._64_4_ = arg1;
        unsigned int local_b4 = arg1;
        new (local_f8) render::Texture::Desc();
        ((local_78 + 64))
            ->Register(str, 14731730, *3553, (int)&local_138, DAT_00000001, (unsigned int)(Desc*)(local_f8 + 64), true);
        uint8_t* this_00 = field_672;
        *this_00 = (*((local_78 + 64)));
        ((local_78 + 64))->~shared_ptr();
        if (this_00->operator_cast_to_bool()) {
            pRVar2 = (RenderTargets*)(*this_00).operator->();
            plVar3 = (long*)pRVar2->GetDepthStencilTargetTexture();
            (**(void (**)(...))(*plVar3 + 24))(plVar3, &field_544, 1);
            pRVar2 = (RenderTargets*)(*this_00).operator->();
            if (!(((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)
                       pRVar2->GetColourTargetTextures())
                      ->empty())) {
                pRVar2 = (RenderTargets*)(*this_00).operator->();
                this_03 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                              pRVar2->GetColourTargetTextures();
                puVar4 = (uint64_t*)(*this_03)[0];
                (**(void (**)(...))(*(long*)*puVar4 + 24))((long*)*puVar4, &field_608, 1);
            }
            UpdateCascadeRenderTargetData();
        }
        if (!(this_00->operator_cast_to_bool())) {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/DirLightCsmManager.cpp",
                      461, "Failed to create shadow map atlas depth stencil target textures");
        }
        m_config = arg2;
        *this_00 != nullptr;
    }

    // 0x1008acb30
    void DirLightCsmManager::UpdateCascadeRenderTargetData() {
        unique_ptr<ShadowMapCascade>* this_00;
        int local_48;
        int local_44;
        int local_40;
        int local_3c;

        unsigned long arg1 = 0;
        new (&local_48) render::Viewport(0, 0, 0, 0, 0.0, 1.0);
        do {
            local_48 = ((unsigned int)arg1 & 1) * field_748 + 1;
            local_44 = ((unsigned int)(arg1 >> 1) & 2147483647) * field_748 + 1;
            local_40 = m_config.GetUseableCascadeResolution();
            local_3c = m_config.GetUseableCascadeResolution();
            this_00 = &field_696[arg1];
            ((ShadowMapCascade*)(*this_00).operator->())->SetShadowMapViewport(local_48);
            arg1 = arg1 + 1;
        } while (arg1 != 4);
    }

    // 0x1008acc10
    void DirLightCsmManager::GetShadowDepthMapAtlas() const {
        ((RenderTargets*)(*field_672).operator->())->GetDepthStencilTargetTexture();
    }

    // 0x1008acc30
    uint64_t DirLightCsmManager::GetShadowTranslucencyMapAtlas() const {
        uint64_t uVar3;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_01;
        uint64_t* puVar4;

        RenderTargets* pRVar2 = (RenderTargets*)(*field_672).operator->();
        if (((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)pRVar2->GetColourTargetTextures())
                ->empty() == '\0') {
            pRVar2 = (RenderTargets*)(*field_672).operator->();
            this_01 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          pRVar2->GetColourTargetTextures();
            puVar4 = (uint64_t*)(*this_01)[0];
            uVar3 = *puVar4;
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x1008acc90
    uint8_t DirLightCsmManager::CreateRenderingResources(unsigned int arg1, unsigned int arg2) {
        CreateRasterizerStates();
        uint8_t bVar1 = CreateSamplerStates();
        return CreateRenderTargets(arg1, arg2) & bVar1;
    }

    // 0x1008acfa0
    void DirLightCsmManager::RegisterTweaks(tweak::ContainerGroup& containerGroup, const eastl::string& str) {
        shared_ptr<tweak::Container> local_78;

        char* pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::string local_68(pcVar2);
        (containerGroup._vptr[7].Clear)(&local_78, containerGroup, &local_68);
        pcVar2 = (char*)local_78.operator->();
        local_68.AddGroup(pcVar2);
        auto pCVar3 = local_68.operator->();
        pCVar3->AddCheckBox("Show Shadow Map Depth", field_872);
        pCVar3 = (Container*)local_68.operator->();
        pCVar3->AddCheckBox("Show Shadow Map Translucency", field_873);
        pCVar3 = (Container*)local_68.operator->();
        pCVar3->AddCheckBox("Show Cascade Projections", field_875);
        pCVar3 = (Container*)local_68.operator->();
        pCVar3->AddCheckBox("Show Cascade Bounding Sphere", field_876);
        pCVar3 = (Container*)local_68.operator->();
        pCVar3->AddCheckBox("Pause Update", field_877);
        pcVar2 = (char*)local_78.operator->();
        local_48.AddGroup(pcVar2);
        pCVar3 = (Container*)local_48.operator->();
        uint64_t* puVar1 = &field_824;
        int* piVar4 = (int*)(*puVar1)[0];
        pCVar3->AddEnum("Cascade 0 Frustum Fit", &gOrthoFrustumFitNames, piVar4);
        pCVar3 = (Container*)local_48.operator->();
        piVar4 = (int*)(*puVar1)[1];
        pCVar3->AddEnum("Cascade 1 Frustum Fit", &gOrthoFrustumFitNames, piVar4);
        pCVar3 = (Container*)local_48.operator->();
        piVar4 = (int*)(*puVar1)[2];
        pCVar3->AddEnum("Cascade 2 Frustum Fit", &gOrthoFrustumFitNames, piVar4);
        pCVar3 = (Container*)local_48.operator->();
        piVar4 = (int*)(*puVar1)[3];
        pCVar3->AddEnum("Cascade 3 Frustum Fit", &gOrthoFrustumFitNames, piVar4);
        pCVar3 = (Container*)local_48.operator->();
        pCVar3->AddCheckBox("Use Texture-based Cascade Selection", field_852);
        pCVar3 = (Container*)local_48.operator->();
        float* local_38 = (float*)&field_752;
        pCVar3->AddSlider<unsigned int>("Cascade Count", 0.0, 4.0, 1.0, local_38);
        pCVar3 = (Container*)local_48.operator->();
        local_38 = (float*)((long)&field_768 + 4);
        pCVar3->AddSlider<float>("Cascade Base Split Weight", 0.0, 1.0, 0.01, local_38);
        pCVar3 = (Container*)local_48.operator->();
        local_38 = &m_cascadeNearClip;
        pCVar3->AddSlider<float>("NearClip Plane", 0.0, 1000.0, 1.0, local_38);
        pCVar3 = (Container*)local_48.operator->();
        local_38 = &m_maxShadowDistance;
        pCVar3->AddSlider<float>("FarClip Plane", 0.0, 25000.0, 1.0, local_38);
        pCVar3 = (Container*)local_48.operator->();
        local_38 = &field_788;
        pCVar3->AddSlider<float>("Low Quality Depth Ratio", 0.0, 1.0, 0.01, local_38);
        pCVar3 = (Container*)local_48.operator->();
        puVar1 = &field_800;
        local_38 = (float*)(*puVar1)[0];
        pCVar3->AddSlider<float>("Cascade 0 Bias", -1.0, 0.0, 0.0001, local_38);
        pCVar3 = (Container*)local_48.operator->();
        local_38 = (float*)(*puVar1)[1];
        pCVar3->AddSlider<float>("Cascade 1 Bias", -1.0, 0.0, 0.0001, local_38);
        pCVar3 = (Container*)local_48.operator->();
        local_38 = (float*)(*puVar1)[2];
        pCVar3->AddSlider<float>("Cascade 2 Bias", -1.0, 0.0, 0.0001, local_38);
        pCVar3 = (Container*)local_48.operator->();
        local_38 = (float*)(*puVar1)[3];
        pCVar3->AddSlider<float>("Cascade 3 Bias", -1.0, 0.0, 0.0001, local_38);
        pCVar3 = (Container*)local_48.operator->();
        local_38 = &m_lightCamNearClipOffset;
        pCVar3->AddSlider<float>("Light Camera Near Clip Offset", -150000.0, 0.0, 10.0, local_38);
        pCVar3 = (Container*)local_48.operator->();
        local_38 = &field_848;
        pCVar3->AddSlider<float>("Shadow Strength", 0.0, 1.0, 0.0001, local_38);
        pCVar3 = (Container*)local_48.operator->();
        local_38 = &m_cascadeFadeRangeScale;
        pCVar3->AddSlider<float>("Shader Fade Range Scale", 0.0, 1.0, 0.001, local_38);
    }

} // namespace jag::graphics

// 0x1008acd10
unsigned long abs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}
