// libs/graphics/postprocess/effects/ColourGradingBloomEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::postprocess {
    class ColourGradingBloomEffect {
    public:
        // virtual methods in vtable order
        virtual ~ColourGradingBloomEffect();
        virtual void Render(render::RenderContext&, render::RenderTargets const*, render::Texture const*,
                            render::Texture const*, render::Viewport const&, graphics::ViewRenderTargets*,
                            PostProcessManager&);
        virtual void RenderDebug(render::Viewport const&);
        virtual Init();
        virtual void Destroy();
        virtual byte GetRequirements() const;
        GetConfig();
        ColourGradingBloomEffect(render::RenderTargetsManager&, AvgLuminanceFilter const*, int, int);
        CreateRenderingResources();
        void DestroyRenderTargets();
        void DestroyRenderingResources();
        void CreateIdentityLUT(bool);
        bool CreateRenderTargets(render::Texture::Desc const&);
        float RenderDebugLUT(render::Texture const*, math::Vector2T<float> const&, char const*,
                             render::Viewport const&);
        void SetConfig(ColourGradingBloomEffectConfig const&);

        // data members, from how the methods use this: 6704 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined1 field_8;  // offset 8
        char _unknown_9[3];
        int field_12;        // offset 12
        int field_16;        // offset 16
        char field_20;       // offset 20
        char field_21;       // offset 21
        undefined1 field_22; // offset 22
        char _unknown_23[1];
        ColourGradingBloomEffectConfig field_24; // offset 24
        char _unknown_348[4];
        RenderTargetsManager* field_352; // offset 352
        shared_ptr field_360;            // offset 360
        shared_ptr field_376;            // offset 376
        shared_ptr field_392;            // offset 392
        char _unknown_408[6104];
        InputAssemblerState field_6512; // offset 6512
    };

    class ColourGradingBloomEffectConfig {
    public:
        ColourGradingBloomEffectConfig();
        ~ColourGradingBloomEffectConfig();
        ColourGradingBloomEffectConfig* operator=(ColourGradingBloomEffectConfig const&);
        ColourGradingBloomEffectConfig(ColourGradingBloomEffectConfig&&);
        void SetBloomQuality(BloomQuality);
        void DoTransition(unsigned long long);
        bool operator==(ColourGradingBloomEffectConfig const&) const;
        ColourGradingBloomEffectConfig(ColourGradingBloomEffectConfig const&);
        ulong hash() const;
        static /* 48 bytes */ m_blurMethodNames__; // = { 0, 0, 14779048, 1, 1, 0, 14779057, 1, 2, 0, 14779064, 1 }
        static StringEnum /* 16 bytes */ m_blurMethodNames; // = StringEnum((StringEnumEntry *) &m_blurMethodNames__, 3)

        // data members, from how the methods use this: 324 bytes
        char _unknown_0[4];
        uint field_4;  // offset 4
        uint field_8;  // offset 8
        bool field_12; // offset 12
        char _unknown_13[3];
        ColourCorrectionConfig field_16; // offset 16
        float field_168;                 // offset 168
        char _unknown_172[36];
        float field_208; // offset 208
        char _unknown_212[36];
        undefined8 field_248; // offset 248
        undefined4 field_256; // offset 256
        bool field_260;       // offset 260
        char _unknown_261[3];
        uint field_264;  // offset 264
        float field_268; // offset 268
        char _unknown_272[32];
        undefined4 field_304; // offset 304
        undefined4 field_308; // offset 308
        bool field_312;       // offset 312
        char _unknown_313[3];
        int field_316; // offset 316
        char _unknown_320[4];
    };

    // 0x1001d4b40, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ColourGradingBloomEffectConfig::ColourGradingBloomEffectConfig(): jumps straight to the base-object constructor

} // namespace jag::postprocess
