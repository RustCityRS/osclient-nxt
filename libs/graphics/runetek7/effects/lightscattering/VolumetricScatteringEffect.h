// libs/graphics/runetek7/effects/lightscattering/VolumetricScatteringEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class VolumetricScatteringEffect : public Effect // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~VolumetricScatteringEffect();
        virtual void Initialise();
        virtual void IsSupported() const;
        virtual void RenderDebug(render::Viewport const&) const;
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        virtual CreateRenderingResources();
        virtual void DestroyRenderingResources();
        virtual void InitialiseTweakVars(tweak::ContainerGroup&, EffectManager&);
        virtual OnQualityChange(GraphicsQuality);
        float* GetParams();
        void GetResolvedRT();
        VolumetricScatteringEffect(RT7Core&);
        void Update(EffectManager const&, SceneViewData const&);
        void UpdateParams();
        ulong CreateRenderTargets(render::Texture::Desc, render::Texture::Desc, unsigned int, unsigned int);
        CreateShaders();
        CreateNoiseTexture();
        void CreateBayesianDitherTexture();
        void DestroyShaders();
        void DestroyRenderTargets();
        void SetParams(VolumetricScatteringParams const&, long long, unsigned long long);
        ulong CreateRaymarchShader(bool, int, bool, GraphicsQuality);
        void CreateDepthDownsampleShader(bool);
        ulong CreateBilateralBlurShader(bool);
        ulong CreateBilateralUpsampleShader(bool);
        SetDitherTexture(unsigned char const*, int, int);
        void CreateBlueNoiseDitherTexture();
        bool IsReady() const;
        void UsePostProcessShader(render::DrawCallState&, graphicutils::RenderToTextureHelper const&,
                                  render::ShaderProgram const&);
        ulong CanSkip(EffectManager const&) const;
        void Render(render::RenderContext&, render::RenderTargets const*, render::Texture const*,
                    render::Viewport const&, graphicutils::RenderToTextureHelper const&);
        void SetSharedShaderConstants(render::DrawCallState&, render::ShaderProgram const&) const;
        void RenderDebugImage(render::Texture const*, math::Vector2T<float> const&, char const*,
                              render::Viewport const&, bool) const;

        // data members, from how the methods use this: 1032 bytes, the first 8 are Effect
        uint field_8; // offset 8
        char _unknown_12[4];
        RT7Core* field_16; // offset 16
        bool field_24;     // offset 24
        char _unknown_25[1];
        bool field_26; // offset 26
        bool field_27; // offset 27
        bool field_28; // offset 28
        bool field_29; // offset 29
        char _unknown_30[2];
        undefined4 field_32; // offset 32
        bool field_36;       // offset 36
        char field_37;       // offset 37
        char _unknown_38[2];
        undefined4 field_40; // offset 40
        char _unknown_44[164];
        RT7Core* field_208;              // offset 208
        RenderTargetsManager* field_216; // offset 216
        shared_ptr field_224;            // offset 224
        shared_ptr field_240;            // offset 240
        shared_ptr field_256;            // offset 256
        bool field_272;                  // offset 272
        undefined1 field_273;            // offset 273
        char _unknown_274[6];
        shared_ptr field_280; // offset 280
        shared_ptr field_296; // offset 296
        shared_ptr field_312; // offset 312
        shared_ptr field_328; // offset 328
        char _unknown_344[200];
        int field_544; // offset 544
        char _unknown_548[364];
        float m_params;  // offset 912
        float field_916; // offset 916
        float field_920; // offset 920
        float field_924; // offset 924
        float field_928; // offset 928
        float field_932; // offset 932
        float field_936; // offset 936
        float field_940; // offset 940
        char _unknown_944[28];
        float field_972; // offset 972
        float field_976; // offset 976
        char _unknown_980[52];
    };

    // 0x1001c2260, 16 bytes, inline, placed by class name
    // VolumetricScatteringEffect::GetParams()
    float* VolumetricScatteringEffect::GetParams() {
        return &m_params;
    }

    // 0x1007a7df0, 32 bytes, inline, placed by class name
    // VolumetricScatteringEffect::GetResolvedRT()
    void VolumetricScatteringEffect::GetResolvedRT() {
        field_280->end();
    }

} // namespace jag::graphics
