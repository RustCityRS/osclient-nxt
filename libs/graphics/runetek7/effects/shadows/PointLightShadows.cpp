// libs/graphics/runetek7/effects/shadows/PointLightShadows.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "PointLightShadows.h"

namespace jag::graphics {
    // 0x10047dbc0, the same machine code as PointLightShadows::GetPointLightSMManager()
    SceneManager PointLightShadows::GetPointLightSMManager() const {
        return m_pointLightSMManager;
    }

    // 0x100918c20
    PointLightShadows::PointLightShadows(RT7Core& rt7Core, int arg2) : ShaderEffect(rt7Core) {
        long lVar2;

        Vector4T<float>* this_00 = (Vector4T<float>*)&field_32;
        ___bzero(this_00, 576);
        uint8_t* puVar1 = &field_80;
        do {
            new (this_00) math::Vector4T();
            new (this_00 + 16) math::Vector4T();
            new ((this_00 + 32)) math::Vector2T();
            new ((this_00 + 40)) math::Vector2T();
            lVar2 = 0;
            do {
                new ((puVar1 + lVar2)) math::Vector4T();
                lVar2 = lVar2 + 16;
            } while (lVar2 != 96);
            this_00 = this_00 + 144;
            puVar1 = puVar1 + 144;
        } while (this_00 != (Vector4T<float>*)&field_608);
        new (&field_608) render::TypedShaderConstBuffer();
        field_680 = arg2;
        field_684 = -1;
        auto renderTargetsManager = rt7Core.GetRenderTargetsManager();
        auto renderToTextureHelper = rt7Core.GetRenderToTexture();
        new (m_pointLightSMManager) PointLightSMManager(renderTargetsManager, renderToTextureHelper);
    }

    // 0x100918d80
    uint8_t PointLightShadows::Initialise() {
        int iVar2 = ShaderResourceSlotManager::RegisterSlotID(field_16->GetPSTextureSlotManager());
        field_684 = iVar2;
        return CreateRenderingResources() & iVar2 != -1;
    }

    // 0x100918dc0
    void PointLightShadows::OnEnabled() {}

    // 0x100918dd0
    void PointLightShadows::OnDisabled() {}

    // 0x100918de0
    void PointLightShadows::Update() {
        UpdateShaderConstants();
    }

    // 0x100918df0
    void PointLightShadows::UpdateShaderConstants() {
        uint8_t* this_00;
        float fVar1;
        float fVar2;
        PointLightSM* this_01;
        unsigned int uVar3;
        Layout* this_03;
        long* plVar5;
        long* plVar6;
        ShaderConsts* shaderConsts;

        long lVar4 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar4 + 120) != '\0') {
            this_00 = m_pointLightSMManager;
            this_03 = (Layout*)this_00->GetEntityHighlightGlobalState();
            plVar5 = (long*)this_03->HeapBeginPtr();
            plVar6 = (long*)this_03->end();
            for (; plVar5 != plVar6; plVar5 = plVar5 + 1) {
                if (*plVar5 == 0) {
                    LogAssert("pointLightSM != nullptr",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "effects/shadows/PointLightShadows.cpp",
                              57, nullptr);
                }
                this_01 = (PointLightSM*)*plVar5;
                uVar3 = this_01->GetID();
                shaderConsts = &field_32[(unsigned long)uVar3];
                lVar4 = this_00->SSOBeginPtr();
                fVar1 = *(float*)(lVar4 + 20);
                lVar4 = this_00->SSOBeginPtr();
                fVar2 = *(float*)(lVar4 + 16);
                lVar4 = this_00->SSOBeginPtr();
                this_01->GetShaderConsts(*shaderConsts, fVar1 * fVar2, *(float*)(lVar4 + 20));
            }
            field_608.Update(0, &field_32);
        }
    }

    // 0x100918f60
    void PointLightShadows::SetShaderConstants(render::DrawCallState& drawCallState,
                                               render::RenderContext& renderContext, Shader& shader) const {
        RenderContext* renderContext_00;

        auto shaderProgram = shader.GetProgram();
        SetShaderConstantsDirect(drawCallState, *renderContext_00, *shaderProgram);
    }

    // 0x100918f90
    void PointLightShadows::SetShaderConstantsDirect(render::DrawCallState& drawCallState,
                                                     render::RenderContext& renderContext,
                                                     const render::ShaderProgram& shaderProgram) const {
        unsigned int arg1;
        RenderPipelineState* pRVar2;
        ShaderConstBuffer* shaderConstBuffer;
        HashedString* hashedString;
        int arg3;

        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        if (*(char*)(lVar1 + 120) != '\0') {
            pRVar2 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
            arg1 = field_680;
            shaderConstBuffer = (ShaderConstBuffer*)field_608.CurrentBuffer();
            pRVar2->SetPSShaderConstBuffer(arg1, shaderConstBuffer);
        }
        auto this_01 = m_pointLightSMManager->GetCursorMutex();
        RenderTargets* this_02 = (RenderTargets*)(*this_01).operator->();
        auto texture = this_02->GetDepthStencilTargetTexture();
        if (texture != nullptr) {
            hashedString = (HashedString*)graphics::operator*(47);
            arg3 = shaderProgram.GetConstIndex(*hashedString);
            pRVar2 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
            pRVar2->SetPSTextureSamplerPair(field_684, texture, arg3, nullptr, true);
        }
    }

    // 0x100919060
    void PointLightShadows::BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const {
        if (BindConstBufferToShader(render::ShaderProgram const&)::pointLightShadowsConstBlockName == '\0') {
            if (___cxa_guard_acquire(
                    &BindConstBufferToShader(render::ShaderProgram const&)::pointLightShadowsConstBlockName) != 0) {
                new ((HashedString*)&BindConstBufferToShader(
                    render::ShaderProgram const&)::pointLightShadowsConstBlockName) HashedString("PointLightShadows");
                ___cxa_guard_release(
                    &BindConstBufferToShader(render::ShaderProgram const&)::pointLightShadowsConstBlockName);
            }
        }
        unsigned int arg1 = field_680;
        unsigned int arg3 = field_608.GetAmplitude();
        shaderProgram.BindConstBufferSlot(
            arg1,
            *((HashedString*)&BindConstBufferToShader(render::ShaderProgram const&)::pointLightShadowsConstBlockName),
            arg3);
    }

    // 0x100919100
    void PointLightShadows::InitialiseTweakVars(tweak::ContainerGroup& containerGroup, EffectManager& effectManager) {

        eastl::string local_50("Pointlight Shadows");
        m_pointLightSMManager->RegisterTweaks(containerGroup, local_50);
    }

    // 0x100919180
    void PointLightShadows::CreateRenderingResources() {
        field_608.Create(1, &field_32);
    }

    // 0x1009191c0
    void PointLightShadows::DestroyRenderingResources() {
        field_608.Destroy();
    }

    // 0x1009191e0
    void PointLightShadows::OnEndFrame() {
        field_608.RotateBuffers();
    }

    // 0x100919200
    uint64_t PointLightShadows::OnQualityChange(GraphicsQuality graphicsQuality) {

        if (IsSupported() == '\0') {
            return 0;
        }
        Config local_68;
        switch (graphicsQuality) {
        case 0:
            local_68.field_16._4_4_ = 1176256512;
            local_68.field_0 = 2;
            local_68.field_4 = 2;
            break;
        case 1:
            local_68.field_16._4_4_ = 1178816512;
            local_68.field_0 = 2;
            local_68.field_4 = 3;
            break;
        case 2:
            local_68.field_16._4_4_ = 1182938453;
            local_68.field_0 = 3;
            local_68.field_4 = 3;
            goto LAB_1009192b9;
        case 3:
            local_68.field_16._4_4_ = 1187205120;
            local_68.field_0 = 4;
            local_68.field_4 = 4;
        LAB_1009192b9:
            local_68.field_8 = 512;
            local_68.field_68._0_4_ = 5;
            goto LAB_1009192cb;
        default:
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "effects/shadows/PointLightShadows.cpp",
                            167, nullptr);
        }
        local_68.field_8 = 256;
        local_68.field_68._0_4_ = 4;
    LAB_1009192cb:
        PointLightShadowMapping::SetDiskFilter((ShadowMapFilter)local_68.field_68);
        field_32.Clear();
        m_pointLightSMManager->Destroy();
        return m_pointLightSMManager->Init(local_68);
    }

    // 0x100919370
    bool PointLightShadows::IsSupported() const {
        auto this_00 = Instance();
        long lVar1 = this_00->GetOrigin();
        uint64_t uVar2 = 0;
        if ((*(char*)(lVar1 + 120) != '\0') && (*(char*)(lVar1 + 182) != '\0')) {
            uVar2 = ((RenderDevice*)this_00->Instance())->GetGpuMemoryProfile() >= 2;
        }
        return uVar2;
    }

    // 0x1009193b0
    void PointLightShadows::RenderDebug(const render::Viewport& viewport) const {
        m_pointLightSMManager->RenderDebug();
    }

} // namespace jag::graphics
