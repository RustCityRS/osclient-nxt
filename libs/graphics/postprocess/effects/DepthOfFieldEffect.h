// libs/graphics/postprocess/effects/DepthOfFieldEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::postprocess {
    class DepthOfFieldEffect {
    public:
        // virtual methods in vtable order
        virtual ~DepthOfFieldEffect();
        virtual void Render(render::RenderContext& renderContext, const render::RenderTargets* renderTargets,
                            const render::Texture* texture1, const render::Texture* texture2,
                            const render::Viewport& viewport, graphics::ViewRenderTargets* viewRenderTargets,
                            PostProcessManager& postProcessManager);
        virtual void RenderDebug(const render::Viewport& viewport);
        virtual bool IsReady();
        virtual uint64_t Init();
        virtual void Destroy();
        virtual uint8_t GetRequirements() const;
        void SetConfig(const DepthOfFieldEffectConfig& depthOfFieldEffectConfig);
        DepthOfFieldEffect(int arg1, int arg2);
        void CreateRenderTargets(render::RenderTargetsManager& renderTargetsManager, const render::Texture* texture1,
                                 const render::Texture* texture2, const render::Texture* texture3);
        void DestroyRenderTargets(render::RenderTargetsManager& renderTargetsManager);
        void SetSharedState(const render::ShaderProgram& shaderProgram, const ViewTransforms& viewTransforms);

    private:
        uint8_t field_8;
        uint8_t _unknown_9[3];
        int field_12;
        int field_16;
        char field_20;
        char field_21;
        uint8_t _unknown_22[2];
        DepthOfFieldEffectConfig field_24;
        uint8_t _unknown_96[32];
        shared_ptr field_128;
        uint8_t _unknown_144[32];
        shared_ptr field_176;
        shared_ptr field_192;
        uint8_t _unknown_208[32];
        InputAssemblerState field_240;
    };

    class DepthOfFieldEffectConfig {
    public:
        DepthOfFieldEffectConfig();

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint64_t field_40;
        uint64_t field_48;
        uint64_t field_56;
        uint32_t field_64;
        uint8_t _unknown_68[4];
    };

    // 0x1001d4b70
    PostProcessParams::PostProcessParams()
        : math::Transitionable<float>(DEF_MIN_BLACK_LUM), field_32(DEF_MAX_WHITE_LUM), field_64(DEF_EXPOSURE_KEY),
          field_96(DEF_MIN_AUTO_EXPOSURE), field_128(DEF_MAX_AUTO_EXPOSURE), field_160(DEF_EXPOSURE_SPEED_MUL),
          field_192(true) {}

    // 0x1001d4c20
    ColourGradingBloomEffectConfig::ColourGradingBloomEffectConfig() {
        *(uint64_t*)this = 12884901889;
        field_8 = 1;
        field_12 = true;
        new (field_16) ColourCorrectionConfig();
        field_168 = 1.35;
        new (&field_176) math::Transitionable<float>(field_168);
        field_208 = 5.25;
        new (&field_216) math::Transitionable<float>(field_208);
        field_248 = 9674162176;
        field_256 = 0;
        field_260 = true;
        field_264 = 1;
        field_268 = 1.0;
        new (&field_272) math::Transitionable<float>(field_268);
        field_304 = 0;
        field_308 = 0;
        field_312 = true;
        field_316 = 0;
    }

    // 0x1007e0970
    void DepthOfFieldEffect::SetConfig(const DepthOfFieldEffectConfig& depthOfFieldEffectConfig) {
        *(uint32_t*)(field_24 + 64) = depthOfFieldEffectConfig.field_64;
        uint64_t uVar1 = depthOfFieldEffectConfig.field_0;
        uint64_t uVar2 = depthOfFieldEffectConfig.field_8;
        uint64_t uVar3 = depthOfFieldEffectConfig.field_16;
        uint64_t uVar4 = depthOfFieldEffectConfig.field_24;
        uint64_t uVar5 = depthOfFieldEffectConfig.field_32;
        uint64_t uVar6 = depthOfFieldEffectConfig.field_40;
        uint64_t uVar7 = depthOfFieldEffectConfig.field_56;
        *(uint64_t*)(field_24 + 48) = depthOfFieldEffectConfig.field_48;
        *(uint64_t*)(field_24 + 56) = uVar7;
        *(uint64_t*)(field_24 + 32) = uVar5;
        *(uint64_t*)(field_24 + 40) = uVar6;
        *(uint64_t*)(field_24 + 16) = uVar3;
        *(uint64_t*)(field_24 + 24) = uVar4;
        *(uint64_t*)field_24 = uVar1;
        *(uint64_t*)(field_24 + 8) = uVar2;
    }

    // 0x1009b9780
    bool DepthOfFieldEffect::IsReady() {
        uint64_t uVar2;

        if ((field_128->operator_cast_to_bool() == '\0') || ((field_24[55] == '\0' && (field_24[54] == '\0')))) {
            uVar2 = 0;
        } else {
            uVar2 = IsValid();
        }
        return uVar2;
    }

} // namespace jag::postprocess
