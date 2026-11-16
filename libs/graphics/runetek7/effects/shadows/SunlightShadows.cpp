// libs/graphics/runetek7/effects/shadows/SunlightShadows.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "SunlightShadows.h"

namespace jag::graphics {
    // 0x1001d0810: SunlightShadows::GetSunlightCsmManager() const has the same machine code as SunlightShadows::GetSunlightCsmManager()

    // 0x1009193d0
    SunlightShadows::SunlightShadows(RT7Core& rt7Core, int arg2, int arg3) : ShaderEffect(rt7Core) {
        long lVar8 = 0;
        do {
            new ((&field_80 + lVar8)) math::Vector4T();
            lVar8 = lVar8 + 16;
        } while (lVar8 != 64);
        lVar8 = 0;
        do {
            new ((&field_144 + lVar8)) math::Vector4T();
            lVar8 = lVar8 + 16;
        } while (lVar8 != 64);
        lVar8 = 0;
        do {
            new ((&field_208 + lVar8)) math::Matrix44T<float>();
            lVar8 = lVar8 + 64;
        } while (lVar8 != 256);
        lVar8 = 0;
        do {
            new ((&field_464 + lVar8)) math::Vector4T();
            lVar8 = lVar8 + 16;
        } while (lVar8 != 64);
        lVar8 = 0;
        do {
            new ((&field_528 + lVar8)) math::Vector4T();
            lVar8 = lVar8 + 16;
        } while (lVar8 != 64);
        lVar8 = 0;
        do {
            new ((&field_592 + lVar8)) math::Vector4T();
            lVar8 = lVar8 + 16;
        } while (lVar8 != 64);
        new (&field_656) math::Vector4T();
        new (&field_672) math::Vector3T();
        field_684 = 0.0;
        new (&field_688) render::TypedShaderConstBuffer();
        field_760 = arg2;
        new (&field_768) eastl::fixed_stack<DirLightCsmManager::Config, 2ul, true>();
        auto renderTargetsManager = rt7Core.GetRenderTargetsManager();
        auto threadPool = rt7Core.GetImmediateThreadPool();
        new (&field_1056) DirLightCsmManager(renderTargetsManager, threadPool);
        uint64_t uVar1 = *(uint64_t*)PTR_IDENTITY_100ee6730;
        uint64_t uVar2 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 8);
        uint64_t uVar3 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 16);
        uint64_t uVar4 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 24);
        uint64_t uVar5 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 32);
        uint64_t uVar6 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 40);
        uint64_t uVar7 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 56);
        field_1984 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 48);
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
        new (&field_2016) render::TypedShaderConstBuffer();
        field_2088 = (unsigned int)arg3;
        new (&field_2096) math::Transitionable<float>(1.0);
    }

    // 0x100919680
    uint8_t SunlightShadows::Initialise() {
        unsigned int uVar2 = field_16->GetPSTextureSlotManager();
        uVar2 = ShaderResourceSlotManager::RegisterSlotID(uVar2);
        field_2000 = uVar2;
        uVar2 = field_16->GetPSTextureSlotManager();
        uVar2 = ShaderResourceSlotManager::RegisterSlotID(uVar2);
        field_2004 = uVar2;
        uint8_t uVar1 = 0;
        if ((field_2000 != 4294967295) && (uVar2 != 4294967295)) {
            uVar1 = CreateRenderingResources();
        }
        return uVar1;
    }

    // 0x1009196f0
    void SunlightShadows::Update() {
        unsigned long long uVar2 = FrameTime::GetCurrentTimeMS();
        bool cVar1 = field_16->GetEffectManager()->IsEnabled(94);
        unsigned long long arg1 = 18446744073709551615;
        if (cVar1) {
            arg1 = uVar2;
        }
        field_1056.SetShadowStrength((float)field_2096.GetValue(arg1));
        auto matrix44 = field_1056.GetScreen();
        SetSunlightViewTransform(*matrix44);
        UpdateShaderConstants();
    }

    // 0x100919760
    void SunlightShadows::SetSunlightViewTransform(const math::Matrix44T<float>& matrix44) {
        m_sunlightViewTransform = matrix44;
        field_2016.Update(0, &m_sunlightViewTransform);
    }

    // 0x1009197a0
    void SunlightShadows::UpdateShaderConstants() {
        field_1056.GetShaderConsts(field_32);
        field_688.Update(0, &field_32);
    }

    // 0x1009197e0
    void SunlightShadows::PushConfig(DirLightCsmManager::Config& config) {
        field_768.push(config);
        auto config_00 = GetCurrentConfig();
        field_1056.ApplyConfig(*config_00);
    }

    // 0x100919850
    void SunlightShadows::PopConfig() {
        Config* config;

        unsigned long uVar1 = field_768.size();
        if (1 < uVar1) {
            eastl::stack<DirLightCsmManager::Config, eastl::fixed_vector<DirLightCsmManager::Config, 2ul>>::pop();
            config = (Config*)GetCurrentConfig();
            field_1056.ApplyConfig(*config);
        }
    }

    // 0x1009198e0
    void SunlightShadows::SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                             Shader& shader) const {
        ShaderProgram* shaderProgram;
        RenderContext* renderContext_00;

        auto this_00 = shader.second();
        if (((bitset<121ul, unsigned long long>*)this_00->SSOBeginPtr())->test(28) == '\0') {
            shaderProgram = shader.GetProgram();
            SetShaderConstantsDirect(drawCallState, *renderContext_00, *shaderProgram);
        }
    }

    // 0x100919940
    void SunlightShadows::SetShaderConstantsDirect(render::DrawCallState& drawCallState,
                                                   render::RenderContext& renderContext,
                                                   const render::ShaderProgram& shaderProgram) const {
        unsigned int uVar1;
        RenderPipelineState* pRVar3;
        ShaderConstBuffer* pSVar4;
        HashedString* pHVar5;
        Texture* pTVar6;
        float* pfVar7;
        int iVar8;

        long lVar2 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar2 + 120) == '\0') {
            pHVar5 = (HashedString*)graphics::operator*(31);
            shaderProgram.SetShaderConstVector4(pHVar5, &field_32);
            pHVar5 = (HashedString*)graphics::operator*(32);
            shaderProgram.SetShaderConstVector4(pHVar5, &field_48);
            pHVar5 = (HashedString*)graphics::operator*(33);
            shaderProgram.SetShaderConstVector4(pHVar5, &field_64);
            pHVar5 = (HashedString*)graphics::operator*(34);
            pfVar7 = (float*)field_80.SSOBeginPtr();
            shaderProgram.SetShaderConstFloat4Array(pHVar5, 4, pfVar7, 1);
            pHVar5 = (HashedString*)graphics::operator*(35);
            pfVar7 = (float*)field_144.SSOBeginPtr();
            shaderProgram.SetShaderConstFloat4Array(pHVar5, 4, pfVar7, 1);
            pHVar5 = (HashedString*)graphics::operator*(36);
            shaderProgram.SetShaderConstMatrix4(pHVar5, 4, &field_208, 1);
            pHVar5 = (HashedString*)graphics::operator*(37);
            pfVar7 = (float*)field_464.SSOBeginPtr();
            shaderProgram.SetShaderConstFloat4Array(pHVar5, 4, pfVar7, 1);
            pHVar5 = (HashedString*)graphics::operator*(38);
            pfVar7 = (float*)field_528.SSOBeginPtr();
            shaderProgram.SetShaderConstFloat4Array(pHVar5, 4, pfVar7, 1);
            pHVar5 = (HashedString*)graphics::operator*(39);
            pfVar7 = (float*)field_592.SSOBeginPtr();
            shaderProgram.SetShaderConstFloat4Array(pHVar5, 4, pfVar7, 1);
            pHVar5 = (HashedString*)graphics::operator*(40);
            shaderProgram.SetShaderConstVector4(pHVar5, &field_656);
            pHVar5 = (HashedString*)graphics::operator*(41);
            shaderProgram.SetShaderConstFloat1(pHVar5, field_684);
            pHVar5 = (HashedString*)graphics::operator*(30);
            shaderProgram.SetShaderConstMatrix4(pHVar5, 1, &m_sunlightViewTransform, 1);
        } else {
            pRVar3 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
            uVar1 = field_2088;
            pSVar4 = (ShaderConstBuffer*)field_2016.CurrentBuffer();
            pRVar3->SetVSShaderConstBuffer(uVar1, pSVar4);
            pRVar3 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
            uVar1 = field_760;
            pSVar4 = (ShaderConstBuffer*)field_688.CurrentBuffer();
            pRVar3->SetPSShaderConstBuffer(uVar1, pSVar4);
        }
        uint8_t* this_00 = &field_1056;
        lVar2 = this_00->GetShadowDepthMapAtlas();
        if (lVar2 != 0) {
            pHVar5 = (HashedString*)graphics::operator*(44);
            iVar8 = shaderProgram.GetConstIndex(*pHVar5);
            pRVar3 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
            uVar1 = field_2000;
            pTVar6 = (Texture*)this_00->GetShadowDepthMapAtlas();
            pRVar3->SetPSTextureSamplerPair(uVar1, pTVar6, iVar8, nullptr, true);
        }
        lVar2 = this_00->GetShadowTranslucencyMapAtlas();
        if (lVar2 != 0) {
            pHVar5 = (HashedString*)graphics::operator*(45);
            iVar8 = shaderProgram.GetConstIndex(*pHVar5);
            pRVar3 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
            uVar1 = field_2004;
            pTVar6 = (Texture*)this_00->GetShadowTranslucencyMapAtlas();
            pRVar3->SetPSTextureSamplerPair(uVar1, pTVar6, iVar8, nullptr, true);
        }
    }

    // 0x100919c80
    void SunlightShadows::BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const {
        int iVar3;

        if (BindConstBufferToShader(render::ShaderProgram const&)::sunlightShadowsConstBlockName == '\0') {
            iVar3 = ___cxa_guard_acquire(
                &BindConstBufferToShader(render::ShaderProgram const&)::sunlightShadowsConstBlockName);
            if (iVar3 != 0) {
                new ((HashedString*)&BindConstBufferToShader(
                    render::ShaderProgram const&)::sunlightShadowsConstBlockName) HashedString("SunlightShadows");
                ___cxa_guard_release(
                    &BindConstBufferToShader(render::ShaderProgram const&)::sunlightShadowsConstBlockName);
            }
        }
        unsigned int uVar1 = field_760;
        unsigned int uVar2 = field_688.GetAmplitude();
        shaderProgram.BindConstBufferSlot(
            uVar1,
            *((HashedString*)&BindConstBufferToShader(render::ShaderProgram const&)::sunlightShadowsConstBlockName),
            uVar2);
        if (BindConstBufferToShader(render::ShaderProgram const&)::sunlightViewTransformConstBlockName == '\0') {
            iVar3 = ___cxa_guard_acquire(
                &BindConstBufferToShader(render::ShaderProgram const&)::sunlightViewTransformConstBlockName);
            if (iVar3 != 0) {
                new ((HashedString*)&BindConstBufferToShader(
                    render::ShaderProgram const&)::sunlightViewTransformConstBlockName)
                    HashedString("SunlightViewTransform");
                ___cxa_guard_release(
                    &BindConstBufferToShader(render::ShaderProgram const&)::sunlightViewTransformConstBlockName);
            }
        }
        uVar1 = field_2088;
        uVar2 = field_2016.GetAmplitude();
        shaderProgram.BindConstBufferSlot(uVar1,
                                          *((HashedString*)&BindConstBufferToShader(
                                              render::ShaderProgram const&)::sunlightViewTransformConstBlockName),
                                          uVar2);
    }

    // 0x100919d90
    void SunlightShadows::SetSunlightShadowStrength(float arg1, long long arg2, unsigned long long arg3) {
        float local_24;

        field_2096.SetValue(local_24, arg2, arg3);
        field_1056.SetShadowStrength((float)field_2096.GetValue(arg3));
    }

    // 0x100919df0
    void SunlightShadows::InitialiseTweakVars(tweak::ContainerGroup& containerGroup, EffectManager& effectManager) {

        eastl::string local_50("Sunlight Shadows");
        field_1056.RegisterTweaks(containerGroup, local_50);
    }

    // 0x100919e90
    uint64_t SunlightShadows::CreateRenderingResources() {
        uint64_t uVar2;

        if (field_688.Create(1, &field_32) == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = field_2016.Create(1, &m_sunlightViewTransform);
        }
        return uVar2;
    }

    // 0x100919f20
    void SunlightShadows::DestroyRenderingResources() {
        field_688.Destroy();
        field_2016.Destroy();
    }

    // 0x100919f50
    void SunlightShadows::OnEndFrame() {
        field_688.RotateBuffers();
        field_2016.RotateBuffers();
    }

    // 0x100919f80
    uint64_t SunlightShadows::OnQualityChange(GraphicsQuality graphicsQuality) {
        MapArea* pMVar2;
        RenderDeviceCaps* pRVar3;
        unsigned int arg1;
        uint8_t local_a8[80];
        array<LightProjectionFit, 4ul> local_58;
        AutoSingleton<ShaderThreadPoolSingleton> local_30;

        bool cVar1 = IsValidValue();
        if (!cVar1) {
            return 0;
        }
        ((vector<eastl::pair<int, int>>*)field_768.SSOBeginPtr())->clear();
        Config* this_04 = (Config*)local_a8;
        new (this_04) DirLightCsmManager::Config();
        switch (graphicsQuality) {
        case 0:
            pMVar2 = (MapArea*)this_04->Instance();
            pRVar3 = (RenderDeviceCaps*)pMVar2->GetOrigin();
            local_a8._0_4_ = render::GetMaxDepthBufferBits(*pRVar3, 16);
            local_a8._4_4_ = 1024;
            local_a8._8_4_ = 2;
            local_a8._40_4_ = 1176256512;
            break;
        case 1:
            pMVar2 = (MapArea*)this_04->Instance();
            pRVar3 = (RenderDeviceCaps*)pMVar2->GetOrigin();
            local_a8._0_4_ = render::GetMaxDepthBufferBits(*pRVar3, 16);
            local_a8._4_4_ = 1024;
            local_a8._8_4_ = 3;
            local_a8._40_4_ = 1178816512;
            break;
        case 2:
            pMVar2 = (MapArea*)this_04->Instance();
            pRVar3 = (RenderDeviceCaps*)pMVar2->GetOrigin();
            local_a8._0_4_ = render::GetMaxDepthBufferBits(*pRVar3, 16);
            local_a8._4_4_ = 1024;
            local_a8._8_4_ = 4;
            local_a8._40_4_ = 1183365120;
            goto LAB_10091a101;
        case 3:
            pMVar2 = (MapArea*)this_04->Instance();
            pRVar3 = (RenderDeviceCaps*)pMVar2->GetOrigin();
            local_a8._0_4_ = render::GetMaxDepthBufferBits(*pRVar3, 24);
            local_a8._40_4_ = 1187205120;
            local_a8._4_4_ = 2048;
            local_a8._8_4_ = 4;
        LAB_10091a101:
            local_2c = 0;
            goto LAB_10091a10c;
        default:
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "effects/shadows/SunlightShadows.cpp",
                            239, nullptr);
        }
        LightProjectionFit local_2c = 2;
    LAB_10091a10c:
        local_58.fill(local_2c);
        array<float, 4ul>* this_00 = (array<float, 4ul>*)(local_a8 + 56);
        uint32_t* puVar4 = (uint32_t*)(*this_00)[0];
        *puVar4 = 3151298036;
        puVar4 = (uint32_t*)(*this_00)[1];
        *puVar4 = 3149150552;
        puVar4 = (uint32_t*)(*this_00)[2];
        *puVar4 = 3148076810;
        puVar4 = (uint32_t*)(*this_00)[3];
        *puVar4 = 3147003068;
        local_a8._36_4_ = 1084227584;
        local_a8._52_4_ = 3323740160;
        local_a8._28_8_ = 4543231306008153293;
        uint32_t local_40 = 1065353216;
        local_a8._12_8_ = 4294967297;
        local_a8._20_8_ = 12884901890;
        field_768.push(*local_a8);
        uint8_t* this_01 = &field_1056;
        this_01->Destroy();
        cVar1 = this_01->Initialise(*local_a8);
        if (cVar1) {
            if (local_a8._8_4_ != 0) {
                arg1 = 0;
                do {
                    ((SceneRenderPass*)this_01->GetShadowMapCascade(arg1))->SetOcclusionTestEnabled(true);
                    arg1 = arg1 + 1;
                } while (arg1 < (unsigned int)local_a8._8_4_);
            }
            field_2016.Update(0, PTR_IDENTITY_100ee6730);
            if (cVar1) {
                return 1;
            }
        }
        return 0;
    }

    // 0x10091a280
    void SunlightShadows::RenderDebug(const render::Viewport& viewport) const {
        field_1056.RenderDebug();
    }

} // namespace jag::graphics
