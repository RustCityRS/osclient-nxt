// libs/graphics/postprocess/effects/OutlineAndShadowEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::postprocess {
    class OutlineAndShadowEffect {
    public:
        // virtual methods in vtable order
        virtual ~OutlineAndShadowEffect();
        virtual void Render(render::RenderContext& renderContext, const render::RenderTargets* renderTargets,
                            const render::Texture* texture1, const render::Texture* texture2,
                            const render::Viewport& viewport, graphics::ViewRenderTargets* viewRenderTargets,
                            PostProcessManager& postProcessManager);
        virtual void Init();
        virtual void Destroy();
        void SetConfig(const OutlineAndShadowEffectConfig& outlineAndShadowEffectConfig);
        OutlineAndShadowEffect(int arg1, int arg2);

    private:
        uint8_t field_8;
        uint8_t _unknown_9[3];
        int field_12;
        int field_16;
        OutlineAndShadowEffectConfig field_20;
        uint8_t _unknown_36[4];
    };

    class OutlineAndShadowEffectConfig {
    public:
        OutlineAndShadowEffectConfig();

    private:
        uint64_t field_0;
        uint32_t field_8;
        uint8_t _unknown_12[4];
    };

    // 0x1007e0950
    void OutlineAndShadowEffect::SetConfig(const OutlineAndShadowEffectConfig& outlineAndShadowEffectConfig) {
        *(uint32_t*)(field_20 + 8) = outlineAndShadowEffectConfig.field_8;
        *(uint64_t*)field_20 = outlineAndShadowEffectConfig.field_0;
    }

} // namespace jag::postprocess
