// libs/graphics/postprocess/effects/DepthOfFieldEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::postprocess {
    class DepthOfFieldEffect {
    public:
        // virtual methods in vtable order
        virtual ~DepthOfFieldEffect();
        virtual void Render(render::RenderContext&, render::RenderTargets const*, render::Texture const*,
                            render::Texture const*, render::Viewport const&, graphics::ViewRenderTargets*,
                            PostProcessManager&);
        virtual void RenderDebug(render::Viewport const&);
        virtual IsReady();
        virtual Init();
        virtual void Destroy();
        virtual byte GetRequirements() const;
        void SetConfig(DepthOfFieldEffectConfig const&);
        DepthOfFieldEffect(int, int);
        void CreateRenderTargets(render::RenderTargetsManager&, render::Texture const*, render::Texture const*,
                                 render::Texture const*);
        void DestroyRenderTargets(render::RenderTargetsManager&);
        void SetSharedState(render::ShaderProgram const&, ViewTransforms const&);

        // data members, from how the methods use this: 432 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined1 field_8;  // offset 8
        char _unknown_9[3];
        int field_12;  // offset 12
        int field_16;  // offset 16
        char field_20; // offset 20
        char field_21; // offset 21
        char _unknown_22[2];
        DepthOfFieldEffectConfig field_24; // offset 24
        shared_ptr field_96;               // offset 96
        shared_ptr field_112;              // offset 112
        shared_ptr field_128;              // offset 128
        shared_ptr field_144;              // offset 144
        shared_ptr field_160;              // offset 160
        shared_ptr field_176;              // offset 176
        shared_ptr field_192;              // offset 192
        shared_ptr field_208;              // offset 208
        shared_ptr field_224;              // offset 224
        InputAssemblerState field_240;     // offset 240
    };

    class DepthOfFieldEffectConfig {
    public:
        DepthOfFieldEffectConfig();

        // data members, from how the methods use this: 72 bytes
        undefined8 field_0;  // offset 0
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        undefined8 field_40; // offset 40
        undefined8 field_48; // offset 48
        undefined8 field_56; // offset 56
        undefined4 field_64; // offset 64
        char _unknown_68[4];
    };

    // 0x1001d4b60, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DepthOfFieldEffectConfig::DepthOfFieldEffectConfig(): jumps straight to the base-object constructor

    // 0x1001d4b70, 128 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PostProcessParams::PostProcessParams()
    void PostProcessParams::PostProcessParams() {
        new (this) math::Transitionable<float>((float*)&DEF_MIN_BLACK_LUM);
        new (&field_32, (float*)&DEF_MAX_WHITE_LUM) math::Transitionable<float>();
        new (&field_64, (float*)&DEF_EXPOSURE_KEY) math::Transitionable<float>();
        new (&field_96, (float*)&DEF_MIN_AUTO_EXPOSURE) math::Transitionable<float>();
        new (&field_128, (float*)&DEF_MAX_AUTO_EXPOSURE) math::Transitionable<float>();
        new (&field_160, (float*)&DEF_EXPOSURE_SPEED_MUL) math::Transitionable<float>();
        field_192 = true;
    }

    // 0x1001d4c20, 240 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ColourGradingBloomEffectConfig::ColourGradingBloomEffectConfig()
    void ColourGradingBloomEffectConfig::ColourGradingBloomEffectConfig() {
        *(undefined8*)this = 12884901889;
        field_8 = 1;
        field_12 = true;
        new (field_16) ColourCorrectionConfig();
        field_168 = 1.35;
        new (&field_176, &field_168) math::Transitionable<float>();
        field_208 = 5.25;
        new (&field_216, &field_208) math::Transitionable<float>();
        field_248 = 9674162176;
        field_256 = 0;
        field_260 = true;
        field_264 = 1;
        field_268 = 1.0;
        new (&field_272, &field_268) math::Transitionable<float>();
        field_304 = 0;
        field_308 = 0;
        field_312 = true;
        field_316 = 0;
    }

    // 0x1007e0970, 48 bytes, inline, placed by class name
    // DepthOfFieldEffect::SetConfig(DepthOfFieldEffectConfig const&)
    void DepthOfFieldEffect::SetConfig(DepthOfFieldEffectConfig* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        *(undefined4*)(field_24 + 64) = param_1->field_64;
        uVar1 = param_1->field_0;
        uVar2 = param_1->field_8;
        uVar3 = param_1->field_16;
        uVar4 = param_1->field_24;
        uVar5 = param_1->field_32;
        uVar6 = param_1->field_40;
        uVar7 = param_1->field_56;
        *(undefined8*)(field_24 + 48) = param_1->field_48;
        *(undefined8*)(field_24 + 56) = uVar7;
        *(undefined8*)(field_24 + 32) = uVar5;
        *(undefined8*)(field_24 + 40) = uVar6;
        *(undefined8*)(field_24 + 16) = uVar3;
        *(undefined8*)(field_24 + 24) = uVar4;
        *(undefined8*)field_24 = uVar1;
        *(undefined8*)(field_24 + 8) = uVar2;
    }

    // 0x1009b9780, 64 bytes, inline, placed by class name
    // DepthOfFieldEffect::IsReady()
    undefined8 DepthOfFieldEffect::IsReady() {
        undefined8 uVar2;

        if ((field_128->operator_cast_to_bool()) && ((field_24[55] != '\0' || (field_24[54] != '\0')))) {
            uVar2 = IsValid();
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

} // namespace jag::postprocess
