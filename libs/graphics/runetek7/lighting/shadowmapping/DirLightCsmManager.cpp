// libs/graphics/runetek7/lighting/shadowmapping/DirLightCsmManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "DirLightCsmManager.h"

namespace jag::graphics {
    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    math DirLightCsmManager::GetLightViewMat() const;

    // 0x100102fc0: the linker folded this into oldscape::rs2lib::InputField::GetPlaceholderContents() const, which has identical code
    DirLightCsmManager::GetCamViewMat() const;

    // 0x1008a7260, 112 bytes, placed by class name and debug map
    // DirLightCsmManager::GetShadowMapCascade(unsigned int) const
    void DirLightCsmManager::GetShadowMapCascade(uint param_1) {
        undefined4 in_EAX;
        uint uVar1;
        unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>* this_00;
        undefined8 local_18;

        local_18 = CONCAT44(param_1, in_EAX);
        if (3 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("iCascade < MAX_ATLAS_CASCADES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/DirLightCsmManager.cpp",
                      382, (char*)0);
        }
        local_18 = (ulong)param_1 << 32;
        uVar1 = math::Clamp<unsigned int>((uint*)((long)&local_18 + 4), (uint*)&local_18, (uint*)&MAX_ATLAS_CASCADES);
        local_18 = CONCAT44(uVar1, (uint)local_18);
        this_00 = (unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>*)
            std::array<std::unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>, 4ul>::operator[](
                (array<std::unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>, 4ul>*)&field_696,
                (ulong)uVar1);
        std::unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>::get(this_00);
    }

    // 0x1008aa5f0, 400 bytes, base-object constructor, placed by class name
    // DirLightCsmManager::DirLightCsmManager(render::RenderTargetsManager*, ThreadPool*)
    void DirLightCsmManager::DirLightCsmManager(RenderTargetsManager* param_1, ThreadPool* param_2) {
        unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>* this_00;
        unique_ptr local_78[8];
        ThreadPool* local_70;
        DirLightCsmManager* local_68;
        undefined1* local_60;
        undefined1* local_58;
        undefined1* local_50;
        undefined1* local_48;
        ThreadPool* local_40;
        uint local_34;

        field_0 = &PTR__DirLightCsmManager_100f18390;
        local_70 = param_2;
        local_40 = (ThreadPool*)param_1;
        new (m_lightViewMat) math::Matrix44T<float>();
        new ((m_lightViewMat + 64)) math::Matrix44T<float>();
        new (&field_144) std::array<math::Matrix44T<float>, 4ul>();
        new (&field_400) std::array<render::RasteriserState, 4ul>();
        local_60 = &field_400;
        new (&field_544) render::SamplerState();
        local_58 = &field_544;
        new (&field_608) render::SamplerState();
        local_50 = &field_608;
        new (field_672, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_688 = 2048;
        field_692 = 0.0;
        local_48 = field_672;
        new (&field_696) std::array<std::unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>, 4ul>();
        new (&m_config) Config();
        field_864 = local_40;
        field_872 = '\0';
        field_873 = '\0';
        field_874 = 0;
        field_875 = '\0';
        field_876 = 0;
        field_877 = '\0';
        local_34 = 0;
        do {
            local_68 = this;
            std::make_unique<ShadowMapCascade, int&, DirLightCsmManager*, render::RenderTargetsManager*&, ThreadPool*&>(
                (int*)local_78, (DirLightCsmManager**)&local_34, (RenderTargetsManager**)&local_68, &local_40);
            this_00 = (unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>*)
                std::array<std::unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>, 4ul>::operator[](
                    (array<std::unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>, 4ul>*)&field_696,
                    (long)(int)local_34);
            std::unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>::operator=(this_00, local_78);
            local_78->~unique_ptr();
            local_34 = local_34 + 1;
        } while (local_34 < 4);
    }

    // 0x1008aa890, 16 bytes, complete-object constructor, placed by class name
    // DirLightCsmManager::DirLightCsmManager(render::RenderTargetsManager*, ThreadPool*): jumps straight to the base-object constructor

    // 0x1008aa8a0, 176 bytes, base-object destructor, placed by class name
    // DirLightCsmManager::~DirLightCsmManager()
    void DirLightCsmManager::~DirLightCsmManager() {
        field_0 = &PTR__DirLightCsmManager_100f18390;
        Destroy(this);
        (&field_696)->~array();
        field_672->~shared_ptr();
        (&field_608)->~SamplerState();
        (&field_544)->~SamplerState();
        (&field_400)->~array();
    }

    // 0x1008aa950, 16 bytes, placed by class name
    // DirLightCsmManager::Destroy()
    void DirLightCsmManager::Destroy() {
        DestroyRenderingResources(this);
    }

    // 0x1008aa960, 16 bytes, complete-object destructor, placed by class name
    // DirLightCsmManager::~DirLightCsmManager(): jumps straight to the base-object destructor

    // 0x1008aa970, 32 bytes, deleting destructor, placed by class name
    // DirLightCsmManager::~DirLightCsmManager()
    void DirLightCsmManager::~DirLightCsmManager() {
        ~DirLightCsmManager(this);
        operator_delete(this);
    }

    // 0x1008aa990, 256 bytes, placed by class name
    // DirLightCsmManager::Initialise(DirLightCsmManager::Config const&)
    byte DirLightCsmManager::Initialise(Config* param_1) {
        float fVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        undefined4 uVar9;
        int iVar10;
        byte bVar11;
        byte bVar12;
        float* pfVar13;

        CreateRasterizerStates(this);
        bVar11 = CreateSamplerStates(this);
        bVar12 = SetShadowMapCascadeRes(this, param_1->field_4, *(uint*)param_1);
        if ((bVar12 & bVar11) == 1) {
            ApplyConfig(this, param_1);
            pfVar13 = (float*)std::array<float, 2ul>::operator[]((array<float, 2ul>*)&param_1->field_72, 0);
            fVar1 = *pfVar13;
            pfVar13 = (float*)std::array<float, 2ul>::operator[]((array<float, 2ul>*)&param_1->field_72, 1);
            SetSlopeBias(this, fVar1, *pfVar13);
            *(undefined8*)&field_853 = *(undefined8*)((long)&param_1->field_108 + 1);
            uVar2._0_4_ = param_1->field_104;
            uVar2._4_2_ = param_1->field_108;
            uVar2._6_2_ = *(undefined2*)&param_1->field_110;
            field_840 = param_1->field_96;
            field_848 = (float)(undefined4)uVar2;
            field_852 = (char)((ulong)uVar2 >> 32);
            field_853 = (char)((ulong)uVar2 >> 40);
            *(short*)&field_854 = (short)((ulong)uVar2 >> 48);
            uVar2 = *(undefined8*)&param_1->field_88;
            field_824 = *(undefined8*)&param_1->field_80;
            field_832 = uVar2;
            uVar2 = param_1->field_72;
            field_808 = *(undefined8*)&param_1->field_64;
            field_816 = uVar2;
            uVar9 = *(undefined4*)&param_1->field_0;
            iVar10 = param_1->field_4;
            uVar2 = *(undefined8*)&param_1->field_8;
            uVar3 = *(undefined8*)((long)&param_1->field_12 + 4);
            uVar4 = *(undefined8*)((long)&param_1->field_20 + 4);
            uVar5 = *(undefined8*)((long)&param_1->field_28 + 4);
            uVar6 = *(undefined8*)((long)&param_1->field_36 + 4);
            uVar7 = *(undefined8*)((long)&param_1->field_44 + 4);
            uVar8 = *(undefined8*)&param_1->field_56;
            m_cascadeFadeRangeScale = (float)(int)uVar7;
            m_lightCamNearClipOffset = (float)(int)((ulong)uVar7 >> 32);
            field_800 = uVar8;
            m_cascadeSplitWeight = (float)(int)uVar5;
            m_cascadeNearClip = (float)(int)((ulong)uVar5 >> 32);
            m_maxShadowDistance = (float)(int)uVar6;
            field_788 = (float)(int)((ulong)uVar6 >> 32);
            field_760 = uVar3;
            field_768 = uVar4;
            m_config = uVar9;
            field_748 = iVar10;
            *(undefined8*)&field_752 = uVar2;
        } else {
            DestroyRenderingResources(this);
        }
        return bVar12 & bVar11;
    }

    // 0x1008aaa90, 128 bytes, placed by class name
    // DirLightCsmManager::CreateRasterizerStates()
    undefined4 DirLightCsmManager::CreateRasterizerStates() {
        RasteriserState* this_00;
        ulong uVar1;
        Desc local_48;

        new (&local_48) render::RasteriserState::Desc();
        uVar1 = 0;
        do {
            this_00 = (RasteriserState*)std::array<render::RasteriserState, 4ul>::operator[](
                (array<render::RasteriserState, 4ul>*)&field_400, uVar1);
            this_00->Destroy();
            local_48.field_4 = render::GetCullMode((int)uVar1);
            local_48.field_22 = '\0';
            this_00->Create(&local_48);
            uVar1 = uVar1 + 1;
        } while (uVar1 != 4);
        return 1;
    }

    // 0x1008aab10, 160 bytes, placed by class name
    // DirLightCsmManager::CreateSamplerStates()
    void DirLightCsmManager::CreateSamplerStates() {
        BuiltinStates* this_00;
        Singleton<render::BuiltinStates>* this_01;
        Desc local_68;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        render::SamplerState::Destroy();
        this_01 = (Singleton<render::BuiltinStates>*)&field_608;
        render::SamplerState::Destroy();
        this_00 = (BuiltinStates*)this_01->Instance();
        this_00->CreateShadowSamplerState((SamplerState*)&field_544);
        new (&local_68) render::SamplerState::Desc();
        local_68.field_0 = 7;
        local_68.field_4 = 33071;
        local_68.field_8 = 33071;
        local_68.field_12 = 33071;
        local_68.field_16 = 0.0;
        local_68.field_20 = 1.0;
        local_68.field_48 = 0.0;
        local_68.field_52 = 0.0;
        (&field_608, &local_68)->Create();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008aabb0, 192 bytes, placed by class name
    // DirLightCsmManager::SetShadowMapCascadeRes(unsigned int, unsigned int)
    undefined4 DirLightCsmManager::SetShadowMapCascadeRes(uint param_1, uint param_2) {
        uint uVar1;
        uint uVar2;
        undefined4 uVar3;
        uint local_20;
        uint local_1c;

        local_1c = param_1;
        if (8192 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("shadowMapCascadeRes <= MAX_SHADOW_MAP_CASCADE_RES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/DirLightCsmManager.cpp",
                      340, (char*)0);
        }
        local_20 = 256;
        uVar2 = math::Clamp<unsigned int>(&local_1c, &local_20, &MAX_SHADOW_MAP_CASCADE_RES);
        uVar1 = uVar2 * 2;
        field_748 = uVar2;
        field_688 = uVar1;
        field_692 = 1.0 / (float)(int)uVar1;
        local_1c = local_1c | uVar2;
        if ((local_1c == 0) && (param_2 = param_2 | m_config, param_2 == 0)) {
            uVar3 = 1;
        } else {
            uVar3 = CreateRenderTargets(this, uVar1, param_2);
        }
        UpdateCascadeRenderTargetData(this);
        return uVar3;
    }

    // 0x1008aac70, 208 bytes, placed by class name
    // DirLightCsmManager::ApplyConfig(DirLightCsmManager::Config const&)
    void DirLightCsmManager::ApplyConfig(Config* param_1) {
        float* pfVar1;
        undefined4* puVar2;
        ulong uVar3;

        SetCascadeCount(this, param_1->field_8);
        SetCascadeSplitWeight(this, *(float*)((long)&param_1->field_28 + 4));
        SetCascadeNearClip(this, *(float*)&param_1->field_36);
        SetCascadeFarClip(this, *(float*)((long)&param_1->field_36 + 4));
        SetCascadeFadeRangeScale(this, *(float*)((long)&param_1->field_44 + 4));
        SetLightCamNearClipOffset(this, (float)param_1->field_52);
        uVar3 = 0;
        do {
            pfVar1 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)&param_1->field_56, uVar3);
            SetCascadeBias(this, (uint)uVar3, *pfVar1);
            puVar2 = (undefined4*)std::array<LightProjectionFit, 4ul>::operator[](
                (array<LightProjectionFit, 4ul>*)&param_1->field_80, uVar3);
            SetCascadeLightProjFit(this, uVar3 & 4294967295, *puVar2);
            uVar3 = uVar3 + 1;
        } while (uVar3 != 4);
        SetShadowStrength(this, (float)param_1->field_104);
    }

    // 0x1008aad40, 96 bytes, placed by class name
    // DirLightCsmManager::SetSlopeBias(float, float)
    void DirLightCsmManager::SetSlopeBias(float param_1, float param_2) {
        float* pfVar1;

        pfVar1 = (float*)std::array<float, 2ul>::operator[]((array<float, 2ul>*)&field_816, 0);
        *pfVar1 = param_1;
        pfVar1 = (float*)std::array<float, 2ul>::operator[]((array<float, 2ul>*)&field_816, 1);
        *pfVar1 = param_2;
        CreateRasterizerStates(this);
    }

    // 0x1008aadb0, 128 bytes, placed by class name
    // DirLightCsmManager::DestroyRenderingResources()
    void DirLightCsmManager::DestroyRenderingResources() {
        RasteriserState* this_00;
        RasteriserState* pRVar1;

        this_00 = (RasteriserState*)(&field_400)->begin();
        pRVar1 = (RasteriserState*)(&field_400)->end();
        for (; this_00 != pRVar1; this_00 = (RasteriserState*)((long)&this_00[1].field_0 + 3)) {
            this_00->Destroy();
        }
        (field_864, (shared_ptr*)field_672)->Unregister();
        render::SamplerState::Destroy();
        render::SamplerState::Destroy();
    }

    // 0x1008aae30, 96 bytes, placed by class name
    // DirLightCsmManager::SetCascadeCount(unsigned int)
    void DirLightCsmManager::SetCascadeCount(uint param_1) {
        undefined4 in_EAX;
        uint local_18;
        uint local_14;

        _local_18 = CONCAT44(param_1, in_EAX);
        if (4 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("cascadeCount <= MAX_ATLAS_CASCADES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/DirLightCsmManager.cpp",
                      361, (char*)0);
        }
        _local_18 = CONCAT44(param_1, 1);
        field_752 = math::Clamp<unsigned int>(&local_14, &local_18, (uint*)&MAX_ATLAS_CASCADES);
    }

    // 0x1008aaed0, 80 bytes, placed by class name
    // DirLightCsmManager::SetCascadeBias(unsigned int, float)
    void DirLightCsmManager::SetCascadeBias(uint param_1, float param_2) {
        float* pfVar1;

        pfVar1 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)&field_800, (ulong)param_1);
        *pfVar1 = param_2;
        UpdateShadowMapClip2TexMat(this, (array*)&field_800);
    }

    // 0x1008aafa0, 496 bytes, placed by class name
    // DirLightCsmManager::Update(ViewTransforms const&, math::Vector3T<float> const&, std::array<unsigned int, 4ul>&, bool)
    /* DirLightCsmManager::Update(ViewTransforms const&, math::Vector3T<float>
   const&, std::array<unsigned int, 4ul>&, bool) */

    void DirLightCsmManager::Update(ViewTransforms* param_1, Vector3T* param_2, array* param_3, bool param_4) {
        undefined1* this_00;
        float fVar1;
        uint uVar2;
        vector* pvVar3;
        Matrix44T* pMVar4;
        uint* puVar5;
        uint* puVar6;
        float* pfVar7;
        unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>* puVar8;
        ShadowMapCascade* pSVar9;
        ulong uVar10;
        float local_34;

        if (field_877 == '\0') {
            pvVar3 = param_1->SSOBeginPtr(param_1);
            UpdateLightViewMat(this, param_2, (Vector3T*)pvVar3);
            UpdateShadowMapClip2TexMat(this, (array*)&field_800);
            pMVar4 = (Matrix44T*)param_1->GetScreen();
            math::Matrix44T<float>::operator=((Matrix44T<float>*)(m_lightViewMat + 64), pMVar4);
            this_00 = &field_728;
            CalcPracticalCascadeSplitDistances((array*)this_00, field_752, m_cascadeNearClip, m_maxShadowDistance,
                                               m_cascadeSplitWeight);
            if (field_752 != 0) {
                uVar10 = 0;
                do {
                    puVar5 =
                        (uint*)std::array<unsigned int, 4ul>::operator[]((array<unsigned int, 4ul>*)param_3, uVar10);
                    uVar2 = *puVar5;
                    *puVar5 = uVar2 + 1;
                    param_4 = (bool)(param_4 & field_853);
                    puVar6 =
                        (uint*)std::array<unsigned int, 4ul>::operator[]((array<unsigned int, 4ul>*)&field_756, uVar10);
                    if ((uVar2 + 1 < *puVar6) && (param_4 != false)) {
                        puVar8 = (unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>*)
                            std::array<std::unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>, 4ul>::
                            operator[]((array<std::unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>,
                                              4ul>*)&field_696,
                                       uVar10);
                        pSVar9 =
                            (ShadowMapCascade*)
                                std::unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>::operator->(
                                    puVar8);
                        pSVar9->SetCanRender(false);
                    } else {
                        if (uVar10 == 0) {
                            local_34 = 0.0;
                        } else {
                            pfVar7 =
                                (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)this_00, uVar10 - 1);
                            local_34 = *pfVar7;
                        }
                        pfVar7 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)this_00, uVar10);
                        fVar1 = *pfVar7;
                        puVar8 = (unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>*)
                            std::array<std::unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>, 4ul>::
                            operator[]((array<std::unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>,
                                              4ul>*)&field_696,
                                       uVar10);
                        pSVar9 =
                            (ShadowMapCascade*)
                                std::unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>::operator->(
                                    puVar8);
                        pSVar9->SetFrustum(param_1, local_34, fVar1, m_lightViewMat);
                        pSVar9 =
                            (ShadowMapCascade*)
                                std::unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>::operator->(
                                    puVar8);
                        pSVar9->SetCanRender(true);
                        *puVar5 = 0;
                    }
                    uVar10 = uVar10 + 1;
                } while (uVar10 < field_752);
            }
        }
    }

    // 0x1008ab190, 144 bytes, placed by class name
    // DirLightCsmManager::UpdateLightViewMat(math::Vector3T<float> const&, math::Vector3T<float> const&)
    void DirLightCsmManager::UpdateLightViewMat(Vector3T* param_1, Vector3T* param_2) {
        Vector3T* in_R8;
        float fVar1;
        undefined8 local_30;
        undefined4 local_28;

        local_28 = *(undefined4*)(PTR_UP_100ee66d0 + 8);
        local_30 = *(undefined8*)PTR_UP_100ee66d0;
        fVar1 = math::Vector3Dot<float>((Vector3T*)&local_30, param_1);
        fVar1 = (float)::abs(fVar1);
        if (1.0 < fVar1 + 1.1920929e-07) {
            local_30.SetXYZ(PTR_RIGHT_100ee66f0);
        }
        math::Matrix44LookAtLH<float>((math*)m_lightViewMat, (Matrix44T*)param_2, param_1, (Vector3T*)&local_30, in_R8,
                                      500.0);
    }

    // 0x1008ab220, 320 bytes, placed by class name
    // DirLightCsmManager::UpdateShadowMapClip2TexMat(std::array<float, 4ul> const&)
    /* DirLightCsmManager::UpdateShadowMapClip2TexMat(std::array<float, 4ul> const&) */

    void DirLightCsmManager::UpdateShadowMapClip2TexMat(array* param_1) {
        Matrix44T<float>* this_00;
        float* pfVar1;
        ulong uVar2;
        float fVar3;

        field_692 = 1.0 / (float)(int)field_688;
        uVar2 = 0;
        do {
            fVar3 = 0.25 - field_692;
            this_00 = (Matrix44T<float>*)std::array<math::Matrix44T<float>, 4ul>::operator[](
                (array<math::Matrix44T<float>, 4ul>*)&field_144, uVar2);
            pfVar1 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)param_1, uVar2);
            this_00->Set(fVar3, 0.0, 0.0, 0.0, 0.0, fVar3, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
                         (float)((uint)uVar2 & 1) * 0.5 + 0.25, (float)((uint)(uVar2 >> 1) & 2147483647) * 0.5 + 0.25,
                         *pfVar1, 1.0);
            uVar2 = uVar2 + 1;
        } while (uVar2 != 4);
    }

    // 0x1008abac0, 160 bytes, placed by class name
    // DirLightCsmManager::GetCascadesWorldSpaceAABB() const
    DirLightCsmManager* DirLightCsmManager::GetCascadesWorldSpaceAABB() {
        unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>* this_00;
        SunlightShadows* this_01;
        OBB* this_02;
        AABB* pAVar1;
        ulong uVar2;
        long in_RSI;
        AABB local_58;

        new (this) math::AABB();
        if (*(int*)(in_RSI + 752) != 0) {
            uVar2 = 0;
            do {
                new (&local_58) math::AABB();
                this_00 = (unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>*)std::
                    array<std::unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>, 4ul>::operator[](
                        (array<std::unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>, 4ul>*)(in_RSI +
                                                                                                                696),
                        uVar2);
                this_01 =
                    (SunlightShadows*)
                        std::unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>::operator->(this_00);
                this_02 = (OBB*)this_01->GetSunlightCsmManager();
                pAVar1 = (AABB*)this_02->GetMinimumEnclosingAABB(&local_58);
                AddAABB(pAVar1);
                uVar2 = uVar2 + 1;
            } while (uVar2 < *(uint*)(in_RSI + 752));
        }
        return this;
    }

    // 0x1008abb70, 112 bytes, placed by class name
    // DirLightCsmManager::GetShadowMapAtlasRenderTargetData(render::RenderTargetData&)
    void DirLightCsmManager::GetShadowMapAtlasRenderTargetData(RenderTargetData* param_1) {
        RenderTargets* pRVar1;
        Rect<float>* this_00;
        ImVec4 local_28[16];

        pRVar1 = (RenderTargets*)field_672->end();
        param_1->field_0 = pRVar1;
        param_1->field_48 = 2;
        ImVec4::ImVec4(local_28, 1.0, 0.0, 0.0, 0.0);
        this_00 = (Rect<float>*)std::array<math::Vector4T<float>, 2ul>::operator[]((ulong)&param_1->field_16);
        math::Rect<float>::operator=(this_00, (Rect*)local_28);
        param_1->field_52 = 1.0;
    }

    // 0x1008abbf0, 1136 bytes, placed by class name
    // DirLightCsmManager::GetShaderConsts(DirLightCsmManager::ShaderConsts&) const
    void DirLightCsmManager::GetShaderConsts(ShaderConsts* param_1) {
        undefined1* this_00;
        DirLightCsmManager* pDVar1;
        unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>* this_01;
        undefined4* puVar2;
        float* pfVar3;
        ShadowMapCascade* pSVar4;
        WorldmapAreaMetadata* this_02;
        Matrix44T* pMVar5;
        Matrix44T* pMVar6;
        RT7Core* this_03;
        Layout* this_04;
        Sphere* this_05;
        ShaderConsts* pSVar7;
        Matrix44T<float>* this_06;
        uint uVar8;
        ulong uVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        undefined1 local_e8[64];
        undefined1 local_a8[88];
        ShaderConsts* local_50;
        DirLightCsmManager* local_48;
        unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>* local_40;
        vector* local_38;

        this_00 = &field_728;
        local_38 = (vector*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)this_00, 0);
        local_48 = (DirLightCsmManager*)CONCAT44(local_48._4_4_, *(float*)local_38);
        puVar2 = (undefined4*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)this_00, 1);
        local_50 = (ShaderConsts*)CONCAT44(local_50._4_4_, *puVar2);
        pfVar3 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)this_00, 2);
        local_40._0_4_ = *pfVar3;
        pfVar3 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)this_00, 3);
        new (local_e8) ImVec4(local_48._0_4_, local_50._0_4_, local_40._0_4_, *pfVar3);
        math::Rect<float>::operator=((Rect<float>*)param_1, (Rect*)local_e8);
        new (local_e8) ImVec4(1.0 / (float)(int)field_688, 1.0 / ((float)field_748 - (field_692 + field_692)),
                              field_848, (float)field_752);
        math::Rect<float>::operator=((Rect<float>*)(param_1 + 16), (Rect*)local_e8);
        local_48 = (DirLightCsmManager*)&m_maxShadowDistance;
        fVar10 = m_maxShadowDistance;
        uVar8 = field_752;
        if (uVar8 < 2) {
            fVar11 = m_cascadeFadeRangeScale * *(float*)local_38;
        } else {
            local_50 = (ShaderConsts*)CONCAT44(local_50._4_4_, fVar10);
            local_40._0_4_ = m_cascadeFadeRangeScale;
            puVar2 = (undefined4*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)this_00, (ulong)(uVar8 - 1));
            local_38 = (vector*)CONCAT44(local_38._4_4_, *puVar2);
            pfVar3 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)this_00, (ulong)(uVar8 - 2));
            fVar11 = (local_38._0_4_ - *pfVar3) * local_40._0_4_ + *pfVar3;
            fVar10 = local_50._0_4_;
        }
        fVar13 = 0.0;
        new (local_e8) ImVec4(fVar11, fVar10, 1.0 / (fVar10 - fVar11), field_692);
        math::Rect<float>::operator=((Rect<float>*)(param_1 + 32), (Rect*)local_e8);
        fVar11 = math::Lerp<float, float>(&m_cascadeNearClip, (float*)local_48, field_788);
        *(float*)(param_1 + 652) = fVar11;
        uVar8 = 0;
        if (field_752 != 0) {
            local_a8._72_8_ = &field_696;
            pSVar7 = param_1 + 432;
            this_06 = (Matrix44T<float>*)(param_1 + 176);
            uVar9 = 0;
            local_a8._80_8_ = param_1;
            local_48 = this;
            do {
                local_50 = pSVar7;
                local_40 = (unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>*)std::
                    array<std::unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>, 4ul>::operator[](
                        (array<std::unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>, 4ul>*)
                            local_a8._72_8_,
                        uVar9);
                pSVar4 =
                    (ShadowMapCascade*)
                        std::unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>::operator->(local_40);
                this_02 = (WorldmapAreaMetadata*)pSVar4->GetLightViewTransforms();
                pMVar5 = (Matrix44T*)this_02->GetOrigin();
                uVar8 = (uint)uVar9;
                pMVar6 = (Matrix44T*)GetShadowMapClip2TexMat(local_48, uVar8);
                math::operator*((math*)local_e8, pMVar5, pMVar6);
                local_a8._0_8_ = local_e8->GetDiagonal();
                local_a8._8_4_ = fVar10;
                local_a8._12_4_ = fVar13;
                ((pSVar7 + -384))->Set(local_a8);
                local_a8._0_8_ = local_e8->GetPos();
                local_a8._8_4_ = fVar10;
                ((pSVar7 + -320))->Set(local_a8, 0.0);
                this_01 = local_40;
                pSVar4 =
                    (ShadowMapCascade*)
                        std::unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>::operator->(local_40);
                this_03 = (RT7Core*)pSVar4->GetLightViewTransforms();
                pMVar5 = (Matrix44T*)this_03->GetImmediateThreadPool();
                pDVar1 = local_48;
                pMVar6 = (Matrix44T*)GetShadowMapClip2TexMat(local_48, uVar8);
                math::operator*((math*)local_a8, pMVar5, pMVar6);
                pMVar5 = (Matrix44T*)local_a8;
                math::Matrix44T<float>::operator=(this_06, pMVar5);
                pSVar7 = local_50;
                pSVar4 =
                    (ShadowMapCascade*)
                        std::unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>::operator->(this_01);
                this_04 = (Layout*)pSVar4->GetFrustumWorldBoundingSphere();
                local_38 = eastl::string::Layout::SSOBeginPtr(this_04, (type*)pMVar5);
                pSVar4 =
                    (ShadowMapCascade*)
                        std::unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>::operator->(this_01);
                this_05 = (Sphere*)pSVar4->GetFrustumWorldBoundingSphere();
                fVar10 = (float)this_05->GetRadiusSq();
                pSVar7->Set(local_38, fVar10);
                fVar10 = pDVar1->field_692;
                fVar11 = (float)(uVar8 & 1) * 0.5;
                fVar13 = (float)((uint)(uVar9 >> 1) & 2147483647) * 0.5;
                local_38 = (vector*)CONCAT44(local_38._4_4_, fVar13);
                local_40._0_4_ = fVar11;
                ((pSVar7 + 64))
                    ->Set(fVar10 + fVar11, fVar10 + fVar13, (0.5 - fVar10) + fVar11, (0.5 - fVar10) + fVar13);
                fVar13 = 0.0;
                fVar10 = local_38._0_4_;
                ((pSVar7 + 128))->Set(local_40._0_4_, local_38._0_4_, local_40._0_4_ + 0.5, local_38._0_4_ + 0.5);
                uVar9 = uVar9 + 1;
                uVar8 = pDVar1->field_752;
                pSVar7 = pSVar7 + 16;
                this_06 = this_06 + 64;
            } while (uVar9 < uVar8);
            param_1 = (ShaderConsts*)local_a8._80_8_;
        }
        fVar11 = 1.0;
        fVar10 = 1.0;
        if (uVar8 == 0) {
            fVar10 = 0.0;
        }
        fVar13 = 1.0;
        if (uVar8 < 2) {
            fVar13 = 0.0;
        }
        fVar12 = 1.0;
        if (uVar8 < 3) {
            fVar12 = 0.0;
        }
        if (uVar8 < 4) {
            fVar11 = 0.0;
        }
        ((param_1 + 624))->Set(fVar10, fVar13, fVar12, fVar11);
    }

    // 0x1008ac120, 2032 bytes, placed by class name
    // DirLightCsmManager::RenderDebug() const
    void DirLightCsmManager::RenderDebug() {
        char cVar1;
        int iVar2;
        RenderTargets* pRVar3;
        long* plVar4;
        vector* pvVar5;
        float* pfVar6;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_01;
        undefined8* puVar7;
        TextureManager* this_02;
        Vector4T<float>* pVVar8;
        ShadowMapCascade* pSVar9;
        NXTPixToolkit* this_03;
        Matrix44T* pMVar10;
        QuaternionT<float>* pQVar11;
        undefined8 uVar12;
        type* ptVar13;
        type* in_RSI;
        type* ptVar14;
        uint uVar15;
        float fVar16;
        undefined1 local_168[64];
        Point<float> local_128[16];
        ImVec4 local_118[16];
        ImVec4 local_108[16];
        ImVec4 local_f8[16];
        AABB local_e8;
        DirLightCsmManager* local_c0;
        undefined1 local_b8[16];
        undefined1 local_a8[12];
        float local_9c;
        float local_98;
        float local_94;
        float local_90;
        float local_8c;
        OBB local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (field_872 != '\0') {
            pRVar3 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)field_672);
            local_b8._8_8_ = pRVar3->GetDepthStencilTargetTexture();
            if (field_752 != 0) {
                uVar15 = 0;
                local_c0 = this;
                do {
                    math::Point<float>::Point(local_128, 0.0, 0.2);
                    plVar4 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                    if (plVar4 != (long*)0) {
                        local_8c = (float)(uVar15 & 1);
                        local_98 = (float)(uVar15 >> 1);
                        local_9c = local_8c * 0.5;
                        local_a8._8_4_ = local_98 * 0.5;
                        local_94 = (float)local_a8._8_4_ + 0.5;
                        local_90 = local_9c + 0.5;
                        pvVar5 = local_128->SSOBeginPtr(in_RSI);
                        local_8c = local_8c * 0.2 + *(float*)pvVar5;
                        pfVar6 = (float*)local_128->y();
                        new (&local_88) ImVec4(local_8c, local_98 * 0.2 + *pfVar6, 0.2, 0.2);
                        new (local_168) math::Point<float>(local_9c, (float)local_a8._8_4_);
                        new (&local_e8) math::Point<float>(local_90, local_94);
                        new (local_a8) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 255, 255);
                        iVar2 = local_a8->GetX();
                        new (local_b8) oldscape::sidebars::SideBarData(iVar2, 0);
                        this = local_c0;
                        in_RSI = (type*)local_b8._8_8_;
                        (**(code**)(*plVar4 + 112))(plVar4, local_b8._8_8_, &local_88, local_168, &local_e8, 0, 1, 0,
                                                    (SideBarData*)local_b8);
                    }
                    uVar15 = uVar15 + 1;
                } while (uVar15 < field_752);
            }
        }
        if (field_873 != '\0') {
            pRVar3 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)field_672);
            this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                          pRVar3->GetColourTargetTextures();
            cVar1 =
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    this_00);
            if (cVar1 == '\0') {
                pRVar3 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)field_672);
                this_01 = (vector<render::Texture*,
                                  eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                              pRVar3->GetColourTargetTextures();
                uVar15 = 0;
                ptVar13 = (type*)0;
                puVar7 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_01, 0);
                if (field_752 != 0) {
                    local_b8._8_8_ = *puVar7;
                    do {
                        math::Point<float>::Point(local_128, 0.0, 0.2);
                        plVar4 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                        if (plVar4 != (long*)0) {
                            local_8c = (float)(uVar15 & 1);
                            local_98 = (float)(uVar15 >> 1);
                            local_9c = local_8c * 0.5;
                            local_a8._8_4_ = local_98 * 0.5;
                            local_94 = (float)local_a8._8_4_ + 0.5;
                            local_90 = local_9c + 0.5;
                            pvVar5 = local_128->SSOBeginPtr(ptVar13);
                            local_8c = local_8c * 0.2 + *(float*)pvVar5;
                            pfVar6 = (float*)local_128->y();
                            new (&local_88) ImVec4(local_8c, local_98 * 0.2 + *pfVar6, 0.2, 0.2);
                            new (local_168) math::Point<float>(local_9c, (float)local_a8._8_4_);
                            new (&local_e8) math::Point<float>(local_90, local_94);
                            new (local_a8) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 255, 255);
                            iVar2 = local_a8->GetX();
                            new (local_b8) oldscape::sidebars::SideBarData(iVar2, 0);
                            ptVar13 = (type*)local_b8._8_8_;
                            (**(code**)(*plVar4 + 112))(plVar4, local_b8._8_8_, &local_88, local_168, &local_e8, 0, 0,
                                                        0, (SideBarData*)local_b8);
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < field_752);
                }
            }
        }
        new (local_128) ImVec4(1.5, 0.0, 0.0, 1.0);
        ImVec4::ImVec4(local_118, 0.0, 1.5, 0.0, 1.0);
        ImVec4::ImVec4(local_108, 0.0, 1.0, 5.5, 1.0);
        fVar16 = 0.0;
        ImVec4::ImVec4(local_f8, 1.5, 0.0, 5.5, 1.0);
        if ((field_875 != '\0') && (field_752 != 0)) {
            ptVar13 = (type*)0;
            do {
                uVar15 = (uint)ptVar13;
                this_02 = (TextureManager*)GetShadowMapCascade(this, uVar15);
                pVVar8 = (Vector4T<float>*)this_02->GetTextureAtlasManager();
                local_88._0_8_ = pVVar8->GetXYZ();
                local_88.field_8 = fVar16;
                pSVar9 = (ShadowMapCascade*)GetShadowMapCascade(this, uVar15);
                pVVar8 = (Vector4T<float>*)pSVar9->GetLightOrthProjMax();
                local_168._0_8_ = pVVar8->GetXYZ();
                local_168._8_4_ = fVar16;
                new (&local_e8) math::AABB((Vector3T*)&local_88, local_168);
                new (&local_88) math::OBB(&local_e8);
                new (local_168) math::Matrix44T<float>();
                pSVar9 = (ShadowMapCascade*)GetShadowMapCascade(this, uVar15);
                this_03 = (NXTPixToolkit*)pSVar9->GetLightViewTransforms();
                pMVar10 = (Matrix44T*)this_03->GetScreen();
                math::Matrix44Inverse<float>((Matrix44T*)local_168, (float*)0, pMVar10);
                local_88.Transform(local_168);
                local_88.GetMinimumEnclosingAABB(&local_e8);
                plVar4 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar4 != (long*)0) {
                    ptVar14 = ptVar13;
                    pQVar11 = (QuaternionT<float>*)std::array<math::Vector4T<float>, 4ul>::operator[](
                        (array<math::Vector4T<float>, 4ul>*)local_128, (ulong)ptVar13);
                    pfVar6 = (float*)math::QuaternionT<float>::qw(pQVar11);
                    local_8c = *pfVar6;
                    pvVar5 = pQVar11->SSOBeginPtr(ptVar14);
                    local_94 = *(float*)pvVar5;
                    pfVar6 = (float*)pQVar11->y();
                    local_90 = *pfVar6;
                    pfVar6 = (float*)pQVar11->second();
                    fVar16 = local_94;
                    new (local_a8)
                        math::ColourStorage8888<math::ARGB8StorageLayout>(local_8c, local_94, local_90, *pfVar6);
                    iVar2 = local_a8->GetX();
                    new (local_b8) oldscape::sidebars::SideBarData(iVar2, 3);
                    (**(code**)(*plVar4 + 80))(plVar4, &local_88, (SideBarData*)local_b8);
                }
                ptVar13 = ptVar13 + 1;
            } while (ptVar13 < (type*)(ulong)field_752);
        }
        if ((field_876 != '\0') && (field_752 != 0)) {
            ptVar13 = (type*)0;
            do {
                pSVar9 = (ShadowMapCascade*)GetShadowMapCascade(this, (uint)ptVar13);
                uVar12 = pSVar9->GetFrustumWorldBoundingSphere();
                plVar4 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar4 != (long*)0) {
                    ptVar14 = ptVar13;
                    pQVar11 = (QuaternionT<float>*)std::array<math::Vector4T<float>, 4ul>::operator[](
                        (array<math::Vector4T<float>, 4ul>*)local_128, (ulong)ptVar13);
                    pfVar6 = (float*)math::QuaternionT<float>::qw(pQVar11);
                    local_8c = *pfVar6;
                    pvVar5 = pQVar11->SSOBeginPtr(ptVar14);
                    local_94 = *(float*)pvVar5;
                    pfVar6 = (float*)pQVar11->y();
                    local_90 = *pfVar6;
                    pfVar6 = (float*)pQVar11->second();
                    new (local_168)
                        math::ColourStorage8888<math::ARGB8StorageLayout>(local_8c, local_94, local_90, *pfVar6);
                    iVar2 = local_168->GetX();
                    new (&local_88) oldscape::sidebars::SideBarData(iVar2, 2);
                    (**(code**)(*plVar4 + 32))(plVar4, uVar12, &local_88);
                }
                ptVar13 = ptVar13 + 1;
            } while (ptVar13 < (type*)(ulong)field_752);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008ac930, 512 bytes, placed by class name
    // DirLightCsmManager::CreateRenderTargets(unsigned int, unsigned int)
    void DirLightCsmManager::CreateRenderTargets(uint param_1, uint param_2) {
        undefined1* this_00;
        ThreadPool* pTVar1;
        bool bVar2;
        char cVar3;
        MapArea* this_01;
        RenderDeviceCaps* pRVar4;
        RenderTargets* pRVar5;
        long* plVar6;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_02;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_03;
        undefined8* puVar7;
        undefined8 uVar8;
        Desc* this_04;
        undefined8 local_138;
        undefined8 uStack_130;
        undefined4 local_128;
        int iStack_124;
        int iStack_120;
        int iStack_11c;
        undefined1 local_118;
        undefined3 uStack_117;
        undefined4 uStack_114;
        undefined8 uStack_110;
        undefined8 local_108;
        char cStack_100;
        undefined3 uStack_ff;
        undefined4 uStack_fc;
        undefined1 local_f8[68];
        uint local_b4;
        undefined4 local_ac;
        undefined1 local_78[80];

        this_04 = (Desc*)local_78;
        render::Texture::Desc::Desc(this_04);
        local_78._12_4_ = 0;
        this_01 = (MapArea*)this_04->Instance();
        pRVar4 = (RenderDeviceCaps*)this_01->GetOrigin();
        local_78._12_4_ = render::GetAlpha8TextureFormat(pRVar4);
        local_78._0_4_ = param_1;
        local_78._4_4_ = param_1;
        new ((local_f8 + 64)) render::Texture::Desc();
        local_ac = render::GetFormatFromDepthStencilBits(param_2, 0, false);
        pTVar1 = field_864;
        local_138 = CONCAT44(local_78._4_4_, local_78._0_4_);
        uStack_130 = CONCAT44(local_78._12_4_, local_78._8_4_);
        local_108 = local_78._48_8_;
        cStack_100 = local_78[56];
        uStack_ff = local_78._57_3_;
        uStack_fc = local_78._60_4_;
        local_118 = local_78[32];
        uStack_117 = local_78._33_3_;
        uStack_114 = local_78._36_4_;
        uStack_110 = local_78._40_8_;
        local_128 = local_78._16_4_;
        iStack_124 = local_78._20_4_;
        iStack_120 = local_78._24_4_;
        iStack_11c = local_78._28_4_;
        local_f8._64_4_ = param_1;
        local_b4 = param_1;
        new (local_f8) render::Texture::Desc();
        ((local_78 + 64))
            ->Register(pTVar1, "DirLightShadowMapAtlas", 3553, &local_138, 1, (Desc*)(local_f8 + 64), 1, 1);
        this_00 = field_672;
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)this_00,
                                                     (shared_ptr*)(local_78 + 64));
        ((local_78 + 64))->~shared_ptr();
        bVar2 = this_00->operator_cast_to_bool();
        if (bVar2) {
            pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_00);
            plVar6 = (long*)pRVar5->GetDepthStencilTargetTexture();
            (**(code**)(*plVar6 + 24))(plVar6, &field_544, 1);
            pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_00);
            this_02 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                          pRVar5->GetColourTargetTextures();
            cVar3 =
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    this_02);
            if (cVar3 == '\0') {
                pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)this_00);
                this_03 = (vector<render::Texture*,
                                  eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                              pRVar5->GetColourTargetTextures();
                puVar7 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_03, 0);
                (**(code**)(*(long*)*puVar7 + 24))((long*)*puVar7, &field_608, 1);
            }
            UpdateCascadeRenderTargetData(this);
        }
        bVar2 = this_00->operator_cast_to_bool();
        if (!bVar2) {
            uVar8 = logger::default_logger();
            logger::Logger::Log(uVar8, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/lighting/shadowmapping/DirLightCsmManager.cpp",
                                461, "Failed to create shadow map atlas depth stencil target textures");
        }
        m_config = param_2;
        operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
    }

    // 0x1008acb30, 192 bytes, placed by class name
    // DirLightCsmManager::UpdateCascadeRenderTargetData()
    void DirLightCsmManager::UpdateCascadeRenderTargetData() {
        unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>* this_00;
        ShadowMapCascade* this_01;
        ulong uVar1;
        int local_48;
        int local_44;
        int local_40;
        int local_3c;

        uVar1 = 0;
        new (&local_48) render::Viewport(0, 0, 0, 0, 0.0, 1.0);
        do {
            local_48 = ((uint)uVar1 & 1) * field_748 + 1;
            local_44 = ((uint)(uVar1 >> 1) & 2147483647) * field_748 + 1;
            local_40 = (&m_config)->GetUseableCascadeResolution();
            local_3c = (&m_config)->GetUseableCascadeResolution();
            this_00 = (unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>*)
                std::array<std::unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>, 4ul>::operator[](
                    (array<std::unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>, 4ul>*)&field_696,
                    uVar1);
            this_01 =
                (ShadowMapCascade*)std::unique_ptr<ShadowMapCascade, std::default_delete<ShadowMapCascade>>::operator->(
                    this_00);
            this_01->SetShadowMapViewport((Viewport*)&local_48);
            uVar1 = uVar1 + 1;
        } while (uVar1 != 4);
    }

    // 0x1008acc10, 32 bytes, placed by class name
    // DirLightCsmManager::GetShadowDepthMapAtlas() const
    void DirLightCsmManager::GetShadowDepthMapAtlas() {
        RenderTargets* this_00;

        this_00 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)field_672);
        this_00->GetDepthStencilTargetTexture();
    }

    // 0x1008acc30, 96 bytes, placed by class name
    // DirLightCsmManager::GetShadowTranslucencyMapAtlas() const
    undefined8 DirLightCsmManager::GetShadowTranslucencyMapAtlas() {
        char cVar1;
        RenderTargets* pRVar2;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        undefined8 uVar3;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_01;
        undefined8* puVar4;

        pRVar2 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)field_672);
        this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                      pRVar2->GetColourTargetTextures();
        cVar1 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            this_00);
        if (cVar1 == '\0') {
            pRVar2 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)field_672);
            this_01 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar2->GetColourTargetTextures();
            puVar4 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_01, 0);
            uVar3 = *puVar4;
        } else {
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x1008acc90, 64 bytes, placed by class name
    // DirLightCsmManager::CreateRenderingResources(unsigned int, unsigned int)
    byte DirLightCsmManager::CreateRenderingResources(uint param_1, uint param_2) {
        byte bVar1;

        CreateRasterizerStates(this);
        bVar1 = CreateSamplerStates(this);
        return CreateRenderTargets(this, param_1, param_2) & bVar1;
    }

    // 0x1008acfa0, 1424 bytes, placed by class name
    // DirLightCsmManager::RegisterTweaks(tweak::ContainerGroup&, eastl::string const&)
    void DirLightCsmManager::RegisterTweaks(ContainerGroup* param_1, basic_string* param_2) {
        undefined1* this;
        bool* this_00;
        char* pcVar1;
        Container* pCVar2;
        int* piVar3;
        shared_ptr<tweak::Container> local_78[16];
        eastl::string local_68[32];
        allocator local_48[16];
        float* local_38;

        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::allocator::allocator(local_48, "EASTL basic_string");
        eastl::string::basic_string(local_68, pcVar1, local_48);
        (**(code**)(*(long*)param_2 + 240))(local_78, param_2, local_68);
        eastl::string::~basic_string(local_68);
        pcVar1 = (char*)shared_ptr<tweak::Container>::operator->(local_78);
        local_68->AddGroup(pcVar1);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_68);
        pCVar2->AddCheckBox("Show Shadow Map Depth", (bool*)&param_1[2].field_280);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_68);
        pCVar2->AddCheckBox("Show Shadow Map Translucency", (bool*)((long)&param_1[2].field_280 + 1));
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_68);
        pCVar2->AddCheckBox("Show Cascade Projections", (bool*)((long)&param_1[2].field_280 + 3));
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_68);
        pCVar2->AddCheckBox("Show Cascade Bounding Sphere", (bool*)&param_1[2].field_284);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_68);
        pCVar2->AddCheckBox("Pause Update", (bool*)&param_1[2].field_285);
        pcVar1 = (char*)shared_ptr<tweak::Container>::operator->(local_78);
        local_48->AddGroup(pcVar1);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_48);
        this = &param_1[2].field_232;
        piVar3 = (int*)std::array<LightProjectionFit, 4ul>::operator[]((array<LightProjectionFit, 4ul>*)this, 0);
        pCVar2->AddEnum("Cascade 0 Frustum Fit", (StringEnum*)&gOrthoFrustumFitNames, piVar3);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_48);
        piVar3 = (int*)std::array<LightProjectionFit, 4ul>::operator[]((array<LightProjectionFit, 4ul>*)this, 1);
        pCVar2->AddEnum("Cascade 1 Frustum Fit", (StringEnum*)&gOrthoFrustumFitNames, piVar3);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_48);
        piVar3 = (int*)std::array<LightProjectionFit, 4ul>::operator[]((array<LightProjectionFit, 4ul>*)this, 2);
        pCVar2->AddEnum("Cascade 2 Frustum Fit", (StringEnum*)&gOrthoFrustumFitNames, piVar3);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_48);
        piVar3 = (int*)std::array<LightProjectionFit, 4ul>::operator[]((array<LightProjectionFit, 4ul>*)this, 3);
        pCVar2->AddEnum("Cascade 3 Frustum Fit", (StringEnum*)&gOrthoFrustumFitNames, piVar3);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_48);
        pCVar2->AddCheckBox("Use Texture-based Cascade Selection", (bool*)&param_1[2].field_260);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_48);
        local_38 = (float*)param_1[2].field_160;
        tweak::Container::AddSlider<unsigned int>(pCVar2, "Cascade Count", 0.0, 4.0, 1.0, (uint**)&local_38);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_48);
        local_38 = (float*)(param_1[2].field_160 + 20);
        tweak::Container::AddSlider<float>(pCVar2, "Cascade Base Split Weight", 0.0, 1.0, 0.01, &local_38);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_48);
        local_38 = (float*)&param_1[2].field_188;
        tweak::Container::AddSlider<float>(pCVar2, "NearClip Plane", 0.0, 1000.0, 1.0, &local_38);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_48);
        local_38 = (float*)&param_1[2].field_192;
        tweak::Container::AddSlider<float>(pCVar2, "FarClip Plane", 0.0, 25000.0, 1.0, &local_38);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_48);
        local_38 = (float*)&param_1[2].field_196;
        tweak::Container::AddSlider<float>(pCVar2, "Low Quality Depth Ratio", 0.0, 1.0, 0.01, &local_38);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_48);
        this_00 = &param_1[2].field_208;
        local_38 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)this_00, 0);
        tweak::Container::AddSlider<float>(pCVar2, "Cascade 0 Bias", -1.0, 0.0, 0.0001, &local_38);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_48);
        local_38 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)this_00, 1);
        tweak::Container::AddSlider<float>(pCVar2, "Cascade 1 Bias", -1.0, 0.0, 0.0001, &local_38);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_48);
        local_38 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)this_00, 2);
        tweak::Container::AddSlider<float>(pCVar2, "Cascade 2 Bias", -1.0, 0.0, 0.0001, &local_38);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_48);
        local_38 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)this_00, 3);
        tweak::Container::AddSlider<float>(pCVar2, "Cascade 3 Bias", -1.0, 0.0, 0.0001, &local_38);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_48);
        local_38 = (float*)&param_1[2].field_204;
        tweak::Container::AddSlider<float>(pCVar2, "Light Camera Near Clip Offset", -150000.0, 0.0, 10.0, &local_38);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_48);
        local_38 = (float*)&param_1[2].field_256;
        tweak::Container::AddSlider<float>(pCVar2, "Shadow Strength", 0.0, 1.0, 0.0001, &local_38);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_48);
        local_38 = (float*)&param_1[2].field_200;
        tweak::Container::AddSlider<float>(pCVar2, "Shader Fade Range Scale", 0.0, 1.0, 0.001, &local_38);
        local_48->~shared_ptr();
        local_68->~shared_ptr();
        local_78->~shared_ptr();
    }

} // namespace jag::graphics

// 0x1008acd10, 16 bytes, placed by neighbouring functions
// abs(float)
ulong abs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}
