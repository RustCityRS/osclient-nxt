// libs/graphics/postprocess/effects/ColourGradingBloomEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::postprocess {
    class ColourGradingBloomEffect {
    public:
        // virtual methods in vtable order
        virtual ~ColourGradingBloomEffect();
        virtual void Render(render::RenderContext& renderContext, const render::RenderTargets* renderTargets,
                            const render::Texture* texture1, const render::Texture* texture2,
                            const render::Viewport& viewport, graphics::ViewRenderTargets* viewRenderTargets,
                            PostProcessManager& postProcessManager);
        virtual void RenderDebug(const render::Viewport& viewport);
        virtual uint64_t Init();
        virtual void Destroy();
        virtual uint8_t GetRequirements() const;
        void GetConfig();
        ColourGradingBloomEffect(render::RenderTargetsManager& renderTargetsManager,
                                 const AvgLuminanceFilter* avgLuminanceFilter, int arg3, int arg4);
        uint8_t CreateRenderingResources();
        void DestroyRenderTargets();
        void DestroyRenderingResources();
        void CreateIdentityLUT(bool arg1);
        uint64_t CreateRenderTargets(const render::Texture::Desc& desc);
        float RenderDebugLUT(const render::Texture* texture, const math::Vector2T<float>& vector2, const char* str,
                             const render::Viewport& viewport);
        void SetConfig(const ColourGradingBloomEffectConfig& colourGradingBloomEffectConfig);

    private:
        uint8_t field_8;
        uint8_t _unknown_9[3];
        int field_12;
        int field_16;
        char field_20;
        char field_21;
        uint8_t field_22;
        uint8_t _unknown_23[1];
        ColourGradingBloomEffectConfig field_24;
        uint8_t _unknown_348[4];
        RenderTargetsManager* field_352;
        shared_ptr field_360;
        shared_ptr field_376;
        uint8_t _unknown_392[6120];
        InputAssemblerState field_6512;
    };

    class ColourGradingBloomEffectConfig {
    public:
        ColourGradingBloomEffectConfig();
        ~ColourGradingBloomEffectConfig();
        ColourGradingBloomEffectConfig* operator=(const ColourGradingBloomEffectConfig& colourGradingBloomEffectConfig);
        ColourGradingBloomEffectConfig(ColourGradingBloomEffectConfig&& colourGradingBloomEffectConfig);
        void SetBloomQuality(BloomQuality bloomQuality);
        void DoTransition(unsigned long long arg1);
        bool operator==(const ColourGradingBloomEffectConfig& colourGradingBloomEffectConfig) const;
        ColourGradingBloomEffectConfig(const ColourGradingBloomEffectConfig& colourGradingBloomEffectConfig);
        unsigned long hash() const;
        static int32_t m_blurMethodNames__[12]; // = { 0, 0, 14779048, 1, 1, 0, 14779057, 1, 2, 0, 14779064, 1 }
        static StringEnum m_blurMethodNames;    // = StringEnum((StringEnumEntry *) &m_blurMethodNames__, 3)

    private:
        uint8_t _unknown_0[4];
        BloomQuality field_4;
        BloomQuality field_8;
        bool field_12;
        uint8_t _unknown_13[3];
        ColourCorrectionConfig field_16;
        float field_168;
        uint8_t _unknown_172[36];
        float field_208;
        uint8_t _unknown_212[36];
        uint64_t field_248;
        uint32_t field_256;
        bool field_260;
        uint8_t _unknown_261[3];
        BloomQuality field_264;
        float field_268;
        uint8_t _unknown_272[32];
        uint32_t field_304;
        uint32_t field_308;
        bool field_312;
        uint8_t _unknown_313[3];
        int field_316;
        uint8_t _unknown_320[4];
    };

} // namespace jag::postprocess
