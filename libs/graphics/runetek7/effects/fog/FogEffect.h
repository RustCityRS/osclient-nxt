// libs/graphics/runetek7/effects/fog/FogEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class FogEffect {
    public:
        // virtual methods in vtable order
        virtual ~FogEffect();
        virtual unsigned long Initialise();
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        virtual void BindConstBufferToShader(const render::ShaderProgram& shaderProgram) const;
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        virtual void InitialiseTweakVars(tweak::ContainerGroup& containerGroup, EffectManager& effectManager);
        void SetFogConstantAngleFalloff(float arg1, long long arg2, unsigned long long arg3);
        void SetFogDepthAngleFalloff(float arg1, long long arg2, unsigned long long arg3);
        void SetFogAngleOffset(float arg1, long long arg2, unsigned long long arg3);
        void UpdateShaderConstants();
        void Update();
        uint8_t* GetShaderConsts() const;
        void SetTweakValues(const math::Vector3T<float>& vector3, bool arg2);
        void SetFogColour(const math::Vector4T<float>& vector4, long long arg2, unsigned long long arg3);
        void SetFogIntensity(float arg1);
        void SetFogDistance(const eastl::pair<float, float>& arg1, long long arg2, unsigned long long arg3);
        bool WithinFoggedArea(float arg1) const;
        void CalculateFogNearFarPlane(float& arg1, float& arg2, float arg3, float arg4, float arg5);
        FogEffect(RT7Core& rt7Core, int arg2);
        static float FOGCONSTANT_ANGLE_FALLOFF_DEFAULT; // = 32.0f
        static float FOGDEPTH_ANGLE_FALLOFF_DEFAULT;    // = 8.0f
        static int32_t FOG_ANGLE_OFFSET_DEFAULT;        // = 0
        static ImVec4 FOGCOLOUR_DEFAULT;                // = ImVec4(0.0, 0.0, 0.0, 1.0)
        static math::Point<float> FOGDISTANCE_DEFAULT;  // = Point<float>(100000.0, 100000.0)

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
        uint8_t _unknown_24[112];
        unsigned int field_136;
        uint8_t _unknown_140[100];
        float field_240;
        float field_244;
        uint8_t _unknown_248[96];
        float m_fogIntensity;
        uint8_t _unknown_348[12];
        bool field_360;
    };

    // 0x10048ffe0
    void FogEffect::SetFogConstantAngleFalloff(float arg1, long long arg2, unsigned long long arg3) {
        field_248.SetValue(arg1, arg2, arg3);
    }

    // 0x100490010
    void FogEffect::SetFogDepthAngleFalloff(float arg1, long long arg2, unsigned long long arg3) {
        field_280.SetValue(arg1, arg2, arg3);
    }

    // 0x100490040
    void FogEffect::SetFogAngleOffset(float arg1, long long arg2, unsigned long long arg3) {
        field_312.SetValue(arg1, arg2, arg3);
    }

    // 0x1009394c0
    FogEffect::~FogEffect() {
        field_64.~TypedShaderConstBuffer();
        destruct<oldscape::highlight::NpcUID*>();
    }

    // 0x10093bf90
    FogEffect::FogEffect(RT7Core& rt7Core, int arg2)
        : ShaderEffect(rt7Core), field_136(arg2), field_144(FOGCOLOUR_DEFAULT), field_208(FOGDISTANCE_DEFAULT) {
        uint32_t uVar1 = FOGDISTANCE_DEFAULT._4_4_;
        field_240 = (float)(uint32_t)FOGDISTANCE_DEFAULT;
        field_244 = (float)uVar1;
        new (&field_248) math::Transitionable<float>(FOGCONSTANT_ANGLE_FALLOFF_DEFAULT);
        new (&field_280) math::Transitionable<float>(FOGDEPTH_ANGLE_FALLOFF_DEFAULT);
        new (&field_312) math::Transitionable<float>(FOG_ANGLE_OFFSET_DEFAULT);
        m_fogIntensity = 0.5;
        new (&field_348) math::Vector3T();
        field_360 = true;
    }

} // namespace jag::graphics

namespace jag::game {
    // 0x100490070
    uint32_t EnvFogSettings::GetFogAngleOffset() const {
        return *(uint32_t*)((long)&m_leftClip + 4);
    }

} // namespace jag::game
