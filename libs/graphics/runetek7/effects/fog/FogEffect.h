// libs/graphics/runetek7/effects/fog/FogEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class FogEffect {
    public:
        // virtual methods in vtable order
        virtual ~FogEffect();
        virtual Initialise();
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        virtual void BindConstBufferToShader(render::ShaderProgram const&) const;
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        virtual void InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&);
        void SetFogConstantAngleFalloff(float, long long, unsigned long long);
        void SetFogDepthAngleFalloff(float, long long, unsigned long long);
        void SetFogAngleOffset(float, long long, unsigned long long);
        void UpdateShaderConstants();
        void Update();
        GetShaderConsts() const;
        void SetTweakValues(math::Vector3T<float> const&, bool);
        void SetFogColour(math::Vector4T<float> const&, long long, unsigned long long);
        void SetFogIntensity(float);
        void SetFogDistance(eastl::pair<float, float> const&, long long, unsigned long long);
        bool WithinFoggedArea(float) const;
        void CalculateFogNearFarPlane(float&, float&, float, float, float);
        FogEffect(RT7Core&, int);
        static float /* 4 bytes */ FOGCONSTANT_ANGLE_FALLOFF_DEFAULT; // = 32.0f
        static float /* 4 bytes */ FOGDEPTH_ANGLE_FALLOFF_DEFAULT;    // = 8.0f
        static /* 4 bytes */ FOG_ANGLE_OFFSET_DEFAULT;                // = 0
        static ImVec4 /* 16 bytes */ FOGCOLOUR_DEFAULT;               // = ImVec4(0.0, 0.0, 0.0, 1.0)
        static math::Point<float> /* 8 bytes */ FOGDISTANCE_DEFAULT;  // = Point<float>(100000.0, 100000.0)

        // data members, from how the methods use this: 361 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        RT7Core* field_16; // offset 16
        char _unknown_24[112];
        uint field_136; // offset 136
        char _unknown_140[100];
        float field_240; // offset 240
        float field_244; // offset 244
        char _unknown_248[96];
        float m_fogIntensity; // offset 344
        char _unknown_348[12];
        bool field_360; // offset 360
    };

    // 0x10048ffe0, 48 bytes, inline, placed by class name and debug map
    // FogEffect::SetFogConstantAngleFalloff(float, long long, unsigned long long)
    void FogEffect::SetFogConstantAngleFalloff(float param_1, longlong param_2, ulonglong param_3) {
        float local_c;

        local_c = param_1;
        (&field_248, &local_c, param_2, param_3)->SetValue();
    }

    // 0x100490010, 48 bytes, inline, placed by class name and debug map
    // FogEffect::SetFogDepthAngleFalloff(float, long long, unsigned long long)
    void FogEffect::SetFogDepthAngleFalloff(float param_1, longlong param_2, ulonglong param_3) {
        float local_c;

        local_c = param_1;
        (&field_280, &local_c, param_2, param_3)->SetValue();
    }

    // 0x100490040, 48 bytes, inline, placed by class name and debug map
    // FogEffect::SetFogAngleOffset(float, long long, unsigned long long)
    void FogEffect::SetFogAngleOffset(float param_1, longlong param_2, ulonglong param_3) {
        float local_c;

        local_c = param_1;
        (&field_312, &local_c, param_2, param_3)->SetValue();
    }

    // 0x100937e00, 16 bytes, complete-object destructor, inline, placed by class name
    // FogEffect::~FogEffect(): jumps straight to the base-object destructor

    // 0x100937e10, 32 bytes, deleting destructor, inline, placed by class name
    // FogEffect::~FogEffect()
    void FogEffect::~FogEffect() {
        ~FogEffect(this);
        operator_delete(this);
    }

    // 0x1009394c0, 48 bytes, base-object destructor, inline, placed by class name
    // FogEffect::~FogEffect()
    void FogEffect::~FogEffect() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__FogEffect_100f1a240;
        (&field_64)->~TypedShaderConstBuffer();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

    // 0x10093bf70, 16 bytes, complete-object constructor, inline, placed by class name
    // FogEffect::FogEffect(RT7Core&, int): jumps straight to the base-object constructor

    // 0x10093bf90, 240 bytes, base-object constructor, inline, placed by class name
    // FogEffect::FogEffect(RT7Core&, int)
    void FogEffect::FogEffect(RT7Core* param_1, int param_2) {
        undefined4 uVar1;

        new (this) ShaderEffect(param_1);
        field_0 = &PTR__FogEffect_100f1a240;
        new (&field_32) tweak::Gradient();
        new (&field_64) render::TypedShaderConstBuffer<DirLightCsmManager::ShaderConsts>();
        field_136 = param_2;
        new (&field_144, (Vector4T*)&FOGCOLOUR_DEFAULT) math::Transitionable<math::Vector4T<float>>();
        new (&field_208, (Vector2T*)&FOGDISTANCE_DEFAULT) math::Transitionable<math::Vector2T<float>>();
        uVar1 = FOGDISTANCE_DEFAULT._4_4_;
        field_240 = (float)(undefined4)FOGDISTANCE_DEFAULT;
        field_244 = (float)uVar1;
        new (&field_248, (float*)&FOGCONSTANT_ANGLE_FALLOFF_DEFAULT) math::Transitionable<float>();
        new (&field_280, (float*)&FOGDEPTH_ANGLE_FALLOFF_DEFAULT) math::Transitionable<float>();
        new (&field_312, (float*)&FOG_ANGLE_OFFSET_DEFAULT) math::Transitionable<float>();
        m_fogIntensity = 0.5;
        new (&field_348) math::Vector3T<int>();
        field_360 = true;
    }

} // namespace jag::graphics

namespace jag::game {
    // 0x100490070, 16 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // EnvFogSettings::GetFogAngleOffset() const
    /* jag::Camera::GetRightClip() const */

    undefined4 jag::Camera::GetRightClip() {
        return *(undefined4*)((long)&m_leftClip + 4);
    }

} // namespace jag::game
