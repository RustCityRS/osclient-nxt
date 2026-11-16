// libs/graphics/runetek7/effects/lighting/SunlightDirectLighting.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class SunlightDirectLighting {
    public:
        // virtual methods in vtable order
        virtual ~SunlightDirectLighting();
        virtual Initialise();
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        virtual void BindConstBufferToShader(render::ShaderProgram const&) const;
        virtual CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        virtual void InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&);
        GetSunlight() const;
        void GetDirection(unsigned long long) const;
        GetShaderConsts() const;
        void SetDirection(math::Vector3T<float> const&, long long, unsigned long long);
        void SetAmbientColour(math::Vector3T<float> const&, long long, unsigned long long);
        void GetAmbientColour(unsigned long long) const;
        void SetColour(math::Vector3T<float> const&, long long, unsigned long long);
        void GetColour(unsigned long long) const;
        void Update();
        void SetShaderConstants(render::DrawCallState&, render::RenderContext&, render::ShaderProgram const&) const;
        void SetSunlight(DirectionalLight const&);
        void SetAntiColour(math::Vector3T<float> const&, long long, unsigned long long);
        void CreateTweakDirectionSlider(tweak::Container&, char const*, float*);
        void SetTweakValues(math::Vector3T<float> const&, math::Vector3T<float> const&, float, float, float, bool);
        void UseGammaCorrection(bool);
        void SetBrightnessOffset(float);
        SunlightDirectLighting(RT7Core&, int);
        static /* 8 bytes */ m_ambientScale; // = 1065353216

        // data members, from how the methods use this: 388 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        RT7Core* field_16; // offset 16
        char _unknown_24[320];
        uint field_344; // offset 344
        char _unknown_348[12];
        float field_360;          // offset 360
        float field_364;          // offset 364
        float field_368;          // offset 368
        float field_372;          // offset 372
        float field_376;          // offset 376
        float m_brightnessOffset; // offset 380
        bool field_384;           // offset 384
        char _unknown_385[3];
    };

    // 0x1001d0820, 16 bytes, inline, placed by class name and debug map
    // SunlightDirectLighting::GetDirection(unsigned long long) const
    void SunlightDirectLighting::GetDirection(ulonglong param_1) {
        (&field_32, param_1)->GetDirection();
    }

    // 0x1007a5650, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SunlightDirectLighting::GetShaderConsts() const
    /* BillboardBatch::GetBillboardLabelIDMap() const */

    undefined1* BillboardBatch::GetBillboardLabelIDMap() {
        return &field_224;
    }

    // 0x1009177f0, 16 bytes, inline, placed by class name
    // SunlightDirectLighting::GetAmbientColour(unsigned long long) const
    void SunlightDirectLighting::GetAmbientColour(ulonglong param_1) {
        (&field_32, param_1)->GetAmbientColour();
    }

    // 0x100917830, 16 bytes, inline, placed by class name
    // SunlightDirectLighting::GetColour(unsigned long long) const
    void SunlightDirectLighting::GetColour(ulonglong param_1) {
        (&field_32, param_1)->GetColour();
    }

    // 0x100921e10, 16 bytes, complete-object destructor, inline, placed by class name
    // SunlightDirectLighting::~SunlightDirectLighting(): jumps straight to the base-object destructor

    // 0x100921e20, 32 bytes, deleting destructor, inline, placed by class name
    // SunlightDirectLighting::~SunlightDirectLighting()
    void SunlightDirectLighting::~SunlightDirectLighting() {
        ~SunlightDirectLighting(this);
        operator_delete(this);
    }

    // 0x1009232f0, 48 bytes, base-object destructor, inline, placed by class name
    // SunlightDirectLighting::~SunlightDirectLighting()
    void SunlightDirectLighting::~SunlightDirectLighting() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__SunlightDirectLighting_100f194d0;
        (&field_272)->~TypedShaderConstBuffer();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

    // 0x10093ad00, 16 bytes, complete-object constructor, inline, placed by class name
    // SunlightDirectLighting::SunlightDirectLighting(RT7Core&, int): jumps straight to the base-object constructor

    // 0x10093ad20, 160 bytes, base-object constructor, inline, placed by class name
    // SunlightDirectLighting::SunlightDirectLighting(RT7Core&, int)
    void SunlightDirectLighting::SunlightDirectLighting(RT7Core* param_1, int param_2) {
        new (this) ShaderEffect(param_1);
        field_0 = &PTR__SunlightDirectLighting_100f194d0;
        new (&field_32) DirectionalLight();
        new (&field_224) DirectionalLight::ShaderConsts();
        new (&field_272) render::TypedShaderConstBuffer<DirLightCsmManager::ShaderConsts>();
        field_344 = param_2;
        new (&field_348) math::Vector3T<int>();
        new (&field_360) math::Vector3T<int>();
        field_384 = true;
    }

} // namespace jag::graphics
