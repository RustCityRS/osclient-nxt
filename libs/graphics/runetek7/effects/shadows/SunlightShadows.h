// libs/graphics/runetek7/effects/shadows/SunlightShadows.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class SunlightShadows {
    public:
        // virtual methods in vtable order
        virtual ~SunlightShadows();
        virtual uint8_t Initialise();
        virtual void RenderDebug(const render::Viewport& viewport) const;
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        virtual void BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const;
        virtual uint64_t CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        virtual void InitialiseTweakVars(tweak::ContainerGroup& containerGroup, EffectManager& effectManager);
        virtual uint64_t OnQualityChange(GraphicsQuality graphicsQuality);
        uint8_t* GetSunlightCsmManager();
        uint8_t* GetSunlightCsmManager() const;
        uint64_t* GetSunlightViewTransform() const;
        SunlightShadows(RT7Core& rt7Core, int arg2, int arg3);
        void Update();
        void SetSunlightViewTransform(const math::Matrix44T<float>& matrix44);
        void UpdateShaderConstants();
        void PushConfig(DirLightCsmManager::Config& config);
        void GetCurrentConfig();
        void PopConfig();
        void SetShaderConstantsDirect(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                      const render::ShaderProgram& shaderProgram) const;
        void SetSunlightShadowStrength(float arg1, long long arg2, unsigned long long arg3);

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
        uint8_t _unknown_24[660];
        float field_684;
        uint8_t _unknown_688[72];
        unsigned int field_760;
        uint8_t _unknown_764[1172];
        uint64_t m_sunlightViewTransform;
        uint64_t field_1944;
        uint64_t field_1952;
        uint64_t field_1960;
        uint64_t field_1968;
        uint64_t field_1976;
        uint64_t field_1984;
        uint64_t field_1992;
        unsigned int field_2000;
        unsigned int field_2004;
        uint32_t field_2008;
        uint8_t _unknown_2012[76];
        unsigned int field_2088;
        uint8_t _unknown_2092[6514804];
    };

    // 0x1001d0810
    uint8_t* SunlightShadows::GetSunlightCsmManager() {
        return &field_1056;
    }

    // 0x1007a5640
    uint64_t* SunlightShadows::GetSunlightViewTransform() const {
        return &m_sunlightViewTransform;
    }

    // 0x100919830
    void SunlightShadows::GetCurrentConfig() {
        eastl::stack<DirLightCsmManager::Config, eastl::fixed_vector<DirLightCsmManager::Config, 2ul>>::top();
    }

    // 0x100923600
    SunlightShadows::~SunlightShadows() {
        field_2016.~TypedShaderConstBuffer();
        field_1056.~DirLightCsmManager();
        field_768.~fixed_stack();
        field_688.~TypedShaderConstBuffer();
        destruct<oldscape::highlight::NpcUID*>();
    }

} // namespace jag::graphics
