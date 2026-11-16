// libs/graphics/runetek7/effects/shadows/SunlightShadows.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "SunlightShadows.h"

namespace jag::graphics {
    // 0x1001d0810: the linker folded this into SunlightShadows::GetSunlightCsmManager(), which has identical code
    SunlightShadows::GetSunlightCsmManager() const;

    // 0x1009193d0, 640 bytes, base-object constructor, placed by class name and debug map
    // SunlightShadows::SunlightShadows(RT7Core&, int, int)
    void SunlightShadows::SunlightShadows(RT7Core* param_1, int param_2, int param_3) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        RenderTargetsManager* pRVar8;
        ThreadPool* pTVar9;
        long lVar10;
        float local_38;

        new (this) ShaderEffect(param_1);
        field_0 = &PTR__SunlightShadows_100f19370;
        new (&field_32) math::Vector4T<float>();
        new (&field_48) math::Vector4T<float>();
        new (&field_64) math::Vector4T<float>();
        lVar10 = 0;
        do {
            new ((&field_80 + lVar10)) math::Vector4T<float>();
            lVar10 = lVar10 + 16;
        } while (lVar10 != 64);
        lVar10 = 0;
        do {
            new ((&field_144 + lVar10)) math::Vector4T<float>();
            lVar10 = lVar10 + 16;
        } while (lVar10 != 64);
        lVar10 = 0;
        do {
            new ((&field_208 + lVar10)) math::Matrix44T<float>();
            lVar10 = lVar10 + 64;
        } while (lVar10 != 256);
        lVar10 = 0;
        do {
            new ((&field_464 + lVar10)) math::Vector4T<float>();
            lVar10 = lVar10 + 16;
        } while (lVar10 != 64);
        lVar10 = 0;
        do {
            new ((&field_528 + lVar10)) math::Vector4T<float>();
            lVar10 = lVar10 + 16;
        } while (lVar10 != 64);
        lVar10 = 0;
        do {
            new ((&field_592 + lVar10)) math::Vector4T<float>();
            lVar10 = lVar10 + 16;
        } while (lVar10 != 64);
        new (&field_656) math::Vector4T<float>();
        new (&field_672) math::Vector3T<int>();
        field_684 = 0.0;
        new (&field_688) render::TypedShaderConstBuffer<DirLightCsmManager::ShaderConsts>();
        field_760 = param_2;
        new (&field_768) eastl::fixed_stack<DirLightCsmManager::Config, 2ul, true>();
        pRVar8 = (RenderTargetsManager*)param_1->GetRenderTargetsManager();
        pTVar9 = (ThreadPool*)param_1->GetImmediateThreadPool();
        new (&field_1056, pRVar8, pTVar9) DirLightCsmManager();
        uVar1 = *(undefined8*)PTR_IDENTITY_100ee6730;
        uVar2 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 8);
        uVar3 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 16);
        uVar4 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 24);
        uVar5 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 32);
        uVar6 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 40);
        uVar7 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 56);
        field_1984 = *(undefined8*)(PTR_IDENTITY_100ee6730 + 48);
        field_1992 = uVar7;
        field_1968 = uVar5;
        field_1976 = uVar6;
        field_1952 = uVar3;
        field_1960 = uVar4;
        m_sunlightViewTransform = uVar1;
        field_1944 = uVar2;
        field_2000 = 4294967295;
        field_2004 = 4294967295;
        field_2008 = 4294967295;
        new (&field_2016) render::TypedShaderConstBuffer<DirLightCsmManager::ShaderConsts>();
        field_2088 = (uint)param_3;
        local_38 = 1.0;
        new (&field_2096, &local_38) math::Transitionable<float>();
    }

    // 0x100919670, 16 bytes, complete-object constructor, placed by class name and debug map
    // SunlightShadows::SunlightShadows(RT7Core&, int, int): jumps straight to the base-object constructor

    // 0x100919680, 112 bytes, placed by class name and debug map
    // SunlightShadows::Initialise()
    undefined8 SunlightShadows::Initialise() {
        uint uVar1;
        undefined8 uVar2;

        uVar1 = field_16->GetPSTextureSlotManager();
        uVar1 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_2000 = uVar1;
        uVar1 = field_16->GetPSTextureSlotManager();
        uVar1 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_2004 = uVar1;
        uVar2 = 0;
        if ((field_2000 != 4294967295) && (uVar1 != 4294967295)) {
            uVar2 = (*(code*)field_0[9])(this);
        }
        return uVar2;
    }

    // 0x1009196f0, 112 bytes, placed by class name and debug map
    // SunlightShadows::Update()
    void SunlightShadows::Update() {
        ulonglong uVar1;
        EffectManager* pEVar2;
        Matrix44T* pMVar3;
        char cVar4;
        ulonglong uVar5;
        float fVar6;

        uVar1 = FrameTime::GetCurrentTimeMS();
        pEVar2 = (EffectManager*)field_16->GetEffectManager();
        cVar4 = pEVar2->IsEnabled(94);
        uVar5 = 18446744073709551615;
        if (cVar4 != '\0') {
            uVar5 = uVar1;
        }
        fVar6 = (float)(&field_2096, uVar5)->GetValue();
        (&field_1056, fVar6)->SetShadowStrength();
        pMVar3 = (Matrix44T*)(&field_1056)->GetScreen();
        SetSunlightViewTransform(this, pMVar3);
        UpdateShaderConstants(this);
    }

    // 0x100919760, 64 bytes, placed by class name and debug map
    // SunlightShadows::SetSunlightViewTransform(math::Matrix44T<float> const&)
    void SunlightShadows::SetSunlightViewTransform(Matrix44T* param_1) {
        math::Matrix44T<float>::operator=((Matrix44T<float>*)&m_sunlightViewTransform, param_1);
        (&field_2016, 0, (SimpleScatteringParams*)&m_sunlightViewTransform)->Update();
    }

    // 0x1009197a0, 64 bytes, placed by class name and debug map
    // SunlightShadows::UpdateShaderConstants()
    void SunlightShadows::UpdateShaderConstants() {
        (&field_1056, (ShaderConsts*)&field_32)->GetShaderConsts();
        (&field_688, 0, (ShaderConsts*)&field_32)->Update();
    }

    // 0x1009197e0, 64 bytes, placed by class name and debug map
    // SunlightShadows::PushConfig(DirLightCsmManager::Config&)
    void SunlightShadows::PushConfig(Config* param_1) {
        Config* pCVar1;

        eastl::stack<DirLightCsmManager::Config,
                     eastl::fixed_vector<DirLightCsmManager::Config, 2ul, true,
                                         eastl::allocator>>::push((Config*)((long)&param_1[6].field_44 + 4));
        pCVar1 = (Config*)GetCurrentConfig((SunlightShadows*)param_1);
        param_1[8].field_96.ApplyConfig(pCVar1);
    }

    // 0x100919850, 80 bytes, placed by class name and debug map
    // SunlightShadows::PopConfig()
    void SunlightShadows::PopConfig() {
        ulong uVar1;
        Config* pCVar2;

        uVar1 = (&field_768)->size();
        if (1 < uVar1) {
            (&field_768)->pop();
            pCVar2 = (Config*)GetCurrentConfig(this);
            (&field_1056, pCVar2)->ApplyConfig();
        }
    }

    // 0x1009198e0, 96 bytes, placed by class name and debug map
    // SunlightShadows::SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const
    void SunlightShadows::SetShaderConstants(DrawCallState* param_1, RenderContext* param_2, Shader* param_3) {
        char cVar1;
        Layout* this_00;
        vector* this_01;
        undefined1 auVar3[16];

        this_00 = (Layout*)param_3->second();
        this_01 = eastl::string::Layout::SSOBeginPtr(this_00, (type*)param_1);
        cVar1 = this_01->test(28);
        if (cVar1 == '\0') {
            auVar3 = param_3->GetProgram();
            SetShaderConstantsDirect(this, param_1, auVar3._8_8_, auVar3._0_8_);
        }
    }

    // 0x100919940, 832 bytes, placed by class name and debug map
    // SunlightShadows::SetShaderConstantsDirect(render::DrawCallState&, render::RenderContext&, render::ShaderProgram const&) const
    void SunlightShadows::SetShaderConstantsDirect(DrawCallState* param_1, RenderContext* param_2,
                                                   ShaderProgram* param_3) {
        undefined1* this_00;
        uint uVar1;
        int iVar2;
        MapArea* this_01;
        long lVar3;
        RenderPipelineState* pRVar4;
        ShaderConstBuffer* pSVar5;
        HashedString* pHVar6;
        vector* pvVar7;
        HashedString* pHVar8;
        Texture* pTVar9;

        this_01 = (MapArea*)Instance();
        lVar3 = this_01->GetOrigin();
        if (*(char*)(lVar3 + 120) == '\0') {
            pHVar8 = (HashedString*)graphics::operator*((graphics*)31);
            param_3->SetShaderConstVector4(pHVar8, (Vector4T*)&field_32);
            pHVar8 = (HashedString*)graphics::operator*((graphics*)32);
            param_3->SetShaderConstVector4(pHVar8, (Vector4T*)&field_48);
            pHVar8 = (HashedString*)graphics::operator*((graphics*)33);
            param_3->SetShaderConstVector4(pHVar8, (Vector4T*)&field_64);
            pHVar6 = (HashedString*)graphics::operator*((graphics*)34);
            pvVar7 = (&field_80, (type*)pHVar8)->SSOBeginPtr();
            param_3->SetShaderConstFloat4Array(pHVar6, 4, pvVar7, 1);
            pHVar8 = (HashedString*)graphics::operator*((graphics*)35);
            pvVar7 = (&field_144, (type*)pHVar6)->SSOBeginPtr();
            param_3->SetShaderConstFloat4Array(pHVar8, 4, pvVar7, 1);
            pHVar8 = (HashedString*)graphics::operator*((graphics*)36);
            param_3->SetShaderConstMatrix4(pHVar8, 4, (Matrix44T*)&field_208, 1);
            pHVar6 = (HashedString*)graphics::operator*((graphics*)37);
            pvVar7 = (&field_464, (type*)pHVar8)->SSOBeginPtr();
            param_3->SetShaderConstFloat4Array(pHVar6, 4, pvVar7, 1);
            pHVar8 = (HashedString*)graphics::operator*((graphics*)38);
            pvVar7 = (&field_528, (type*)pHVar6)->SSOBeginPtr();
            param_3->SetShaderConstFloat4Array(pHVar8, 4, pvVar7, 1);
            pHVar6 = (HashedString*)graphics::operator*((graphics*)39);
            pvVar7 = (&field_592, (type*)pHVar8)->SSOBeginPtr();
            param_3->SetShaderConstFloat4Array(pHVar6, 4, pvVar7, 1);
            pHVar8 = (HashedString*)graphics::operator*((graphics*)40);
            param_3->SetShaderConstVector4(pHVar8, (Vector4T*)&field_656);
            pHVar8 = (HashedString*)graphics::operator*((graphics*)41);
            param_3->SetShaderConstFloat1(pHVar8, field_684);
            pHVar8 = (HashedString*)graphics::operator*((graphics*)30);
            param_3->SetShaderConstMatrix4(pHVar8, 1, (Matrix44T*)&m_sunlightViewTransform, 1);
        } else {
            pRVar4 = (RenderPipelineState*)param_1->GetRenderPipelineState();
            uVar1 = field_2088;
            pSVar5 = (ShaderConstBuffer*)(&field_2016)->CurrentBuffer();
            pRVar4->SetVSShaderConstBuffer(uVar1, pSVar5);
            pRVar4 = (RenderPipelineState*)param_1->GetRenderPipelineState();
            uVar1 = field_760;
            pSVar5 = (ShaderConstBuffer*)(&field_688)->CurrentBuffer();
            pRVar4->SetPSShaderConstBuffer(uVar1, pSVar5);
        }
        this_00 = &field_1056;
        lVar3 = this_00->GetShadowDepthMapAtlas();
        if (lVar3 != 0) {
            pHVar8 = (HashedString*)graphics::operator*((graphics*)44);
            iVar2 = param_3->GetConstIndex(pHVar8);
            pRVar4 = (RenderPipelineState*)param_1->GetRenderPipelineState();
            uVar1 = field_2000;
            pTVar9 = (Texture*)this_00->GetShadowDepthMapAtlas();
            pRVar4->SetPSTextureSamplerPair(uVar1, pTVar9, iVar2, 0, true);
        }
        lVar3 = this_00->GetShadowTranslucencyMapAtlas();
        if (lVar3 != 0) {
            pHVar8 = (HashedString*)graphics::operator*((graphics*)45);
            iVar2 = param_3->GetConstIndex(pHVar8);
            pRVar4 = (RenderPipelineState*)param_1->GetRenderPipelineState();
            uVar1 = field_2004;
            pTVar9 = (Texture*)this_00->GetShadowTranslucencyMapAtlas();
            pRVar4->SetPSTextureSamplerPair(uVar1, pTVar9, iVar2, 0, true);
        }
    }

    // 0x100919c80, 272 bytes, placed by class name and debug map
    // SunlightShadows::BindConstBufferToShader(render::ShaderProgram const&) const
    void SunlightShadows::BindConstBufferToShader(ShaderProgram* param_1) {
        uint uVar1;
        uint uVar2;
        int iVar3;

        if (BindConstBufferToShader(render::ShaderProgram_const&)::sunlightShadowsConstBlockName == '\0') {
            iVar3 = ___cxa_guard_acquire(
                &BindConstBufferToShader(render::ShaderProgram_const&)::sunlightShadowsConstBlockName);
            if (iVar3 != 0) {
                new (&BindConstBufferToShader(render::ShaderProgram_const&)::sunlightShadowsConstBlockName)
                    HashedString("SunlightShadows");
                ___cxa_guard_release(
                    &BindConstBufferToShader(render::ShaderProgram_const&)::sunlightShadowsConstBlockName);
            }
        }
        uVar1 = field_760;
        uVar2 = (&field_688)->GetAmplitude();
        param_1->BindConstBufferSlot(
            uVar1, (HashedString*)&BindConstBufferToShader(render::ShaderProgram_const&)::sunlightShadowsConstBlockName,
            uVar2);
        if (BindConstBufferToShader(render::ShaderProgram_const&)::sunlightViewTransformConstBlockName == '\0') {
            iVar3 = ___cxa_guard_acquire(
                &BindConstBufferToShader(render::ShaderProgram_const&)::sunlightViewTransformConstBlockName);
            if (iVar3 != 0) {
                new (&BindConstBufferToShader(render::ShaderProgram_const&)::sunlightViewTransformConstBlockName)
                    HashedString("SunlightViewTransform");
                ___cxa_guard_release(
                    &BindConstBufferToShader(render::ShaderProgram_const&)::sunlightViewTransformConstBlockName);
            }
        }
        uVar1 = field_2088;
        uVar2 = (&field_2016)->GetAmplitude();
        param_1->BindConstBufferSlot(
            uVar1,
            (HashedString*)&BindConstBufferToShader(render::ShaderProgram_const&)::sunlightViewTransformConstBlockName,
            uVar2);
    }

    // 0x100919d90, 96 bytes, placed by class name and debug map
    // SunlightShadows::SetSunlightShadowStrength(float, long long, unsigned long long)
    void SunlightShadows::SetSunlightShadowStrength(float param_1, longlong param_2, ulonglong param_3) {
        float fVar1;
        float local_24;

        (&field_2096, &local_24, param_2, param_3)->SetValue();
        fVar1 = (float)(&field_2096, param_3)->GetValue();
        (&field_1056, fVar1)->SetShadowStrength();
    }

    // 0x100919df0, 128 bytes, placed by class name and debug map
    // SunlightShadows::InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&)
    void SunlightShadows::InitialiseTweakVars(ContainerGroup* param_1, EffectManager* param_2) {
        eastl::string local_50[32];
        allocator local_30[8];

        eastl::allocator::allocator(local_30, "EASTL basic_string");
        eastl::string::basic_string(local_50, "Sunlight Shadows", local_30);
        DirLightCsmManager::RegisterTweaks((ContainerGroup*)&field_1056, (basic_string*)param_1);
        eastl::string::~basic_string(local_50);
    }

    // 0x100919e90, 80 bytes, placed by class name and debug map
    // SunlightShadows::CreateRenderingResources()
    undefined8 SunlightShadows::CreateRenderingResources() {
        char cVar1;
        undefined8 uVar2;

        cVar1 = (&field_688, 1, (ShaderConsts*)&field_32)->Create();
        if (cVar1 == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = (&field_2016, 1, (SimpleScatteringParams*)&m_sunlightViewTransform)->Create();
        }
        return uVar2;
    }

    // 0x100919f20, 48 bytes, placed by class name and debug map
    // SunlightShadows::DestroyRenderingResources()
    void SunlightShadows::DestroyRenderingResources() {
        (&field_688)->Destroy();
        (&field_2016)->Destroy();
    }

    // 0x100919f50, 48 bytes, placed by class name and debug map
    // SunlightShadows::OnEndFrame()
    void SunlightShadows::OnEndFrame() {
        (&field_688)->RotateBuffers();
        (&field_2016)->RotateBuffers();
    }

    // 0x100919f80, 720 bytes, placed by class name and debug map
    // SunlightShadows::OnQualityChange(GraphicsQuality)
    undefined8 SunlightShadows::OnQualityChange(undefined4 param_2) {
        array<float, 4ul>* this_00;
        undefined1* this_01;
        char cVar1;
        MapArea* pMVar2;
        RenderDeviceCaps* pRVar3;
        undefined4* puVar4;
        SceneRenderPass* this_02;
        uint uVar5;
        char* pcVar6;
        Config* this_03;
        undefined1 local_a8[80];
        array<LightProjectionFit, 4ul> local_58[24];
        undefined4 local_40;
        AutoSingleton<ShaderThreadPoolSingleton> local_30[4];
        undefined4 local_2c;

        pcVar6 = "Sunlight_Shadows";
        local_30->~AutoSingleton();
        cVar1 = (*(code*)field_0[5])(this);
        if (cVar1 == '\0') {
            return 0;
        }
        (&field_768, (type*)pcVar6)->SSOBeginPtr();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        this_03 = (Config*)local_a8;
        DirLightCsmManager::Config::Config(this_03);
        switch (param_2) {
        case 0:
            pMVar2 = (MapArea*)this_03->Instance();
            pRVar3 = (RenderDeviceCaps*)pMVar2->GetOrigin();
            local_a8._0_4_ = render::GetMaxDepthBufferBits(pRVar3, 16);
            local_a8._4_4_ = 1024;
            local_a8._8_4_ = 2;
            local_a8._40_4_ = 1176256512;
            break;
        case 1:
            pMVar2 = (MapArea*)this_03->Instance();
            pRVar3 = (RenderDeviceCaps*)pMVar2->GetOrigin();
            local_a8._0_4_ = render::GetMaxDepthBufferBits(pRVar3, 16);
            local_a8._4_4_ = 1024;
            local_a8._8_4_ = 3;
            local_a8._40_4_ = 1178816512;
            break;
        case 2:
            pMVar2 = (MapArea*)this_03->Instance();
            pRVar3 = (RenderDeviceCaps*)pMVar2->GetOrigin();
            local_a8._0_4_ = render::GetMaxDepthBufferBits(pRVar3, 16);
            local_a8._4_4_ = 1024;
            local_a8._8_4_ = 4;
            local_a8._40_4_ = 1183365120;
            goto LAB_10091a101;
        case 3:
            pMVar2 = (MapArea*)this_03->Instance();
            pRVar3 = (RenderDeviceCaps*)pMVar2->GetOrigin();
            local_a8._0_4_ = render::GetMaxDepthBufferBits(pRVar3, 24);
            local_a8._40_4_ = 1187205120;
            local_a8._4_4_ = 2048;
            local_a8._8_4_ = 4;
        LAB_10091a101:
            local_2c = 0;
            goto LAB_10091a10c;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "effects/shadows/SunlightShadows.cpp",
                            239, (char*)0);
        }
        local_2c = 2;
    LAB_10091a10c:
        std::array<LightProjectionFit, 4ul>::fill(local_58, (LightProjectionFit*)&local_2c);
        this_00 = (array<float, 4ul>*)(local_a8 + 56);
        puVar4 = (undefined4*)std::array<float, 4ul>::operator[](this_00, 0);
        *puVar4 = 3151298036;
        puVar4 = (undefined4*)std::array<float, 4ul>::operator[](this_00, 1);
        *puVar4 = 3149150552;
        puVar4 = (undefined4*)std::array<float, 4ul>::operator[](this_00, 2);
        *puVar4 = 3148076810;
        puVar4 = (undefined4*)std::array<float, 4ul>::operator[](this_00, 3);
        *puVar4 = 3147003068;
        local_a8._36_4_ = 1084227584;
        local_a8._52_4_ = 3323740160;
        local_a8._28_8_ = 4543231306008153293;
        local_40 = 1065353216;
        local_a8._12_8_ = 4294967297;
        local_a8._20_8_ = 12884901890;
        eastl::stack<DirLightCsmManager::Config, eastl::fixed_vector<DirLightCsmManager::Config, 2ul, true,
                                                                     eastl::allocator>>::push((Config*)&field_768);
        this_01 = &field_1056;
        this_01->Destroy();
        cVar1 = this_01->Initialise(local_a8);
        if (cVar1 != '\0') {
            if (local_a8._8_4_ != 0) {
                uVar5 = 0;
                do {
                    this_02 = (SceneRenderPass*)this_01->GetShadowMapCascade(uVar5);
                    this_02->SetOcclusionTestEnabled(true);
                    uVar5 = uVar5 + 1;
                } while (uVar5 < (uint)local_a8._8_4_);
            }
            (&field_2016, 0, (SimpleScatteringParams*)PTR_IDENTITY_100ee6730)->Update();
            if (cVar1 != '\0') {
                return 1;
            }
        }
        return 0;
    }

    // 0x10091a280, 32 bytes, placed by class name and debug map
    // SunlightShadows::RenderDebug(render::Viewport const&) const
    void SunlightShadows::RenderDebug(Viewport* param_1) {
        (&field_1056)->RenderDebug();
    }

} // namespace jag::graphics
