// libs/graphics/runetek7/effects/shadows/PointLightShadows.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class PointLightShadows {
    public:
        class ShaderConsts;
        // virtual methods in vtable order
        virtual ~PointLightShadows();
        virtual uint8_t Initialise();
        virtual void OnEnabled();
        virtual void OnDisabled();
        virtual bool IsSupported() const;
        virtual void RenderDebug(const render::Viewport& viewport) const;
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        virtual void BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const;
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        virtual void InitialiseTweakVars(tweak::ContainerGroup& containerGroup, EffectManager& effectManager);
        virtual uint64_t OnQualityChange(GraphicsQuality graphicsQuality);
        SceneManager GetPointLightSMManager();
        SceneManager GetPointLightSMManager() const;
        PointLightShadows(RT7Core& rt7Core, int arg2);
        void Update();
        void UpdateShaderConstants();
        void SetShaderConstantsDirect(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                      const render::ShaderProgram& shaderProgram) const;

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
        uint8_t _unknown_24[656];
        unsigned int field_680;
        int field_684;
        SceneManager m_pointLightSMManager;
    };

    class PointLightShadows::ShaderConsts {
    public:
        void Clear();

        uint8_t _unknown_0[1];
    };

    // 0x10047dbc0
    SceneManager PointLightShadows::GetPointLightSMManager() {
        return m_pointLightSMManager;
    }

    // 0x100919320
    void PointLightShadows::ShaderConsts::Clear() {
        ShaderConsts* this_00 = (ShaderConsts*)std::array<PointLightSM::ShaderConsts, 4ul>::begin();
        ShaderConsts* pSVar1 = (ShaderConsts*)std::array<PointLightSM::ShaderConsts, 4ul>::end();
        for (; this_00 != pSVar1; this_00 = (ShaderConsts*)&this_00[2].field_32) {
            this_00->Clear();
        }
    }

    // 0x1009233e0
    PointLightShadows::~PointLightShadows() {
        m_pointLightSMManager->~PointLightSMManager();
        field_608.~TypedShaderConstBuffer();
        destruct<oldscape::highlight::NpcUID*>();
    }

} // namespace jag::graphics
