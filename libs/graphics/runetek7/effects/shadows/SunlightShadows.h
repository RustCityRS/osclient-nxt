// libs/graphics/runetek7/effects/shadows/SunlightShadows.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class SunlightShadows {
    public:
        // virtual methods in vtable order
        virtual ~SunlightShadows();
        virtual Initialise();
        virtual void RenderDebug(render::Viewport const&) const;
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        virtual void BindConstBufferToShader(render::ShaderProgram const&) const;
        virtual CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void OnEndFrame();
        virtual void InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&);
        virtual OnQualityChange(GraphicsQuality);
        GetSunlightCsmManager();
        GetSunlightCsmManager() const;
        GetSunlightViewTransform() const;
        SunlightShadows(RT7Core&, int, int);
        void Update();
        void SetSunlightViewTransform(math::Matrix44T<float> const&);
        void UpdateShaderConstants();
        void PushConfig(DirLightCsmManager::Config&);
        void GetCurrentConfig();
        void PopConfig();
        void SetShaderConstantsDirect(render::DrawCallState&, render::RenderContext&,
                                      render::ShaderProgram const&) const;
        void SetSunlightShadowStrength(float, long long, unsigned long long);

        // data members, from how the methods use this: 6516896 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        RT7Core* field_16; // offset 16
        char _unknown_24[660];
        float field_684; // offset 684
        char _unknown_688[72];
        uint field_760; // offset 760
        char _unknown_764[1172];
        undefined8 m_sunlightViewTransform; // offset 1936
        undefined8 field_1944;              // offset 1944
        undefined8 field_1952;              // offset 1952
        undefined8 field_1960;              // offset 1960
        undefined8 field_1968;              // offset 1968
        undefined8 field_1976;              // offset 1976
        undefined8 field_1984;              // offset 1984
        undefined8 field_1992;              // offset 1992
        uint field_2000;                    // offset 2000
        uint field_2004;                    // offset 2004
        undefined4 field_2008;              // offset 2008
        char _unknown_2012[76];
        uint field_2088; // offset 2088
        char _unknown_2092[6514804];
    };

    // 0x1001d0810, 16 bytes, inline, placed by class name and debug map
    // SunlightShadows::GetSunlightCsmManager()
    /* SunlightShadows::GetSunlightCsmManager() const */

    undefined1* SunlightShadows::GetSunlightCsmManager() {
        return &field_1056;
    }

    // 0x1007a5640, 16 bytes, inline, placed by class name
    // SunlightShadows::GetSunlightViewTransform() const
    undefined8* SunlightShadows::GetSunlightViewTransform() {
        return &m_sunlightViewTransform;
    }

    // 0x100919830, 32 bytes, inline, placed by class name
    // SunlightShadows::GetCurrentConfig()
    void SunlightShadows::GetCurrentConfig() {
        (&field_768)->top();
    }

    // 0x100921f40, 16 bytes, complete-object destructor, inline, placed by class name
    // SunlightShadows::~SunlightShadows(): jumps straight to the base-object destructor

    // 0x100921f50, 32 bytes, deleting destructor, inline, placed by class name
    // SunlightShadows::~SunlightShadows()
    void SunlightShadows::~SunlightShadows() {
        ~SunlightShadows(this);
        operator_delete(this);
    }

    // 0x100923600, 96 bytes, base-object destructor, inline, placed by class name
    // SunlightShadows::~SunlightShadows()
    void SunlightShadows::~SunlightShadows() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__SunlightShadows_100f19370;
        (&field_2016)->~TypedShaderConstBuffer();
        (&field_1056)->~DirLightCsmManager();
        (&field_768)->~fixed_stack();
        (&field_688)->~TypedShaderConstBuffer();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

} // namespace jag::graphics
