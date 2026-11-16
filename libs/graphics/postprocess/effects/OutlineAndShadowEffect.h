// libs/graphics/postprocess/effects/OutlineAndShadowEffect.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::postprocess {
    class OutlineAndShadowEffect {
    public:
        // virtual methods in vtable order
        virtual ~OutlineAndShadowEffect();
        virtual void Render(render::RenderContext&, render::RenderTargets const*, render::Texture const*,
                            render::Texture const*, render::Viewport const&, graphics::ViewRenderTargets*,
                            PostProcessManager&);
        virtual void Init();
        virtual void Destroy();
        void SetConfig(OutlineAndShadowEffectConfig const&);
        OutlineAndShadowEffect(int, int);

        // data members, from how the methods use this: 48 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined1 field_8;  // offset 8
        char _unknown_9[3];
        int field_12;        // offset 12
        int field_16;        // offset 16
        int field_20;        // offset 20
        int field_24;        // offset 24
        int field_28;        // offset 28
        shared_ptr field_32; // offset 32
    };

    class OutlineAndShadowEffectConfig {
    public:
        OutlineAndShadowEffectConfig();

        // data members, from how the methods use this: 16 bytes
        undefined8 field_0; // offset 0
        undefined4 field_8; // offset 8
        char _unknown_12[4];
    };

    // 0x1001d4b50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // OutlineAndShadowEffectConfig::OutlineAndShadowEffectConfig(): jumps straight to the base-object constructor

    // 0x1007e0950, 32 bytes, inline, placed by class name
    // OutlineAndShadowEffect::SetConfig(OutlineAndShadowEffectConfig const&)
    void OutlineAndShadowEffect::SetConfig(OutlineAndShadowEffectConfig* param_1) {
        undefined4 uVar1;

        field_28 = param_1->field_8;
        uVar1 = *(undefined4*)((long)&param_1->field_0 + 4);
        field_20 = *(undefined4*)&param_1->field_0;
        field_24 = uVar1;
    }

} // namespace jag::postprocess
