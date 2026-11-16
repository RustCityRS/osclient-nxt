// libs/graphics/runetek7/effects/lighting/SunlightDirectLighting.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class SunlightDirectLighting {
    public:
        // virtual methods in vtable order
        virtual ~SunlightDirectLighting();
        virtual unsigned long Initialise();
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        virtual void BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const;
        virtual uint32_t CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        virtual void InitialiseTweakVars(tweak::ContainerGroup& containerGroup, EffectManager& effectManager);
        Option<float>* GetSunlight() const;
        void GetDirection(unsigned long long arg1) const;
        unsigned short* GetShaderConsts() const;
        void SetDirection(const math::Vector3T<float>& vector3, long long arg2, unsigned long long arg3);
        void SetAmbientColour(const math::Vector3T<float>& vector3, long long arg2, unsigned long long arg3);
        void GetAmbientColour(unsigned long long arg1) const;
        void SetColour(const math::Vector3T<float>& vector3, long long arg2, unsigned long long arg3);
        void GetColour(unsigned long long arg1) const;
        void Update();
        void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                const render::ShaderProgram& shaderProgram) const;
        void SetSunlight(const DirectionalLight& directionalLight);
        void SetAntiColour(const math::Vector3T<float>& vector3, long long arg2, unsigned long long arg3);
        void CreateTweakDirectionSlider(tweak::Container& container, const char* str, float* arg3);
        void SetTweakValues(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32, float arg3,
                            float arg4, float arg5, bool arg6);
        void UseGammaCorrection(bool arg1);
        void SetBrightnessOffset(float arg1);
        SunlightDirectLighting(RT7Core& rt7Core, int arg2);
        static int64_t m_ambientScale; // = 1065353216

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
        uint8_t _unknown_24[320];
        unsigned int field_344;
        uint8_t _unknown_348[12];
        float field_360;
        float field_364;
        float field_368;
        float field_372;
        float field_376;
        float m_brightnessOffset;
        bool field_384;
        uint8_t _unknown_385[3];
    };

    // 0x1001d0820
    void SunlightDirectLighting::GetDirection(unsigned long long arg1) const {
        field_32.GetDirection(arg1);
    }

    // 0x1007a5650
    unsigned short* SunlightDirectLighting::GetShaderConsts() const {
        return &m_billboardLabelIDMap;
    }

    // 0x1009177f0
    void SunlightDirectLighting::GetAmbientColour(unsigned long long arg1) const {
        field_32.GetAmbientColour(arg1);
    }

    // 0x100917830
    void SunlightDirectLighting::GetColour(unsigned long long arg1) const {
        field_32.GetColour(arg1);
    }

    // 0x1009232f0
    SunlightDirectLighting::~SunlightDirectLighting() {
        field_272.~TypedShaderConstBuffer();
        destruct<oldscape::highlight::NpcUID*>();
    }

    // 0x10093ad20
    SunlightDirectLighting::SunlightDirectLighting(RT7Core& rt7Core, int arg2)
        : ShaderEffect(rt7Core), field_344(arg2), field_384(true) {}

} // namespace jag::graphics
