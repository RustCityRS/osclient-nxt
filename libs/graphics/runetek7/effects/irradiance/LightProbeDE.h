// libs/graphics/runetek7/effects/irradiance/LightProbeDE.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class LightProbe_DE {
    public:
        // virtual methods in vtable order
        virtual ~LightProbe_DE();
        virtual void Render(RT7Core&, render::DrawCallState const&, SceneViewData const&, RenderPassType,
                            EffectManager&);
        virtual void GetRenderer(RT7Core&);
        LightProbe_DE();

        // data members, from how the methods use this: 112 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[96];
        PointLightShadows* field_104; // offset 104
    };

    // 0x10093f050, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // LightProbe_DE::LightProbe_DE(): jumps straight to the base-object constructor

    // 0x10093f0c0, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // LightProbe_DE::LightProbe_DE()
    void LightProbe_DE::LightProbe_DE() {
        new (this) DrawableElementPool<LightProbe_DE>();
        field_0 = PTR_vtable_100ee8748 + 16;
        field_104 = (PointLightShadows*)0;
    }

    // 0x10093f0f0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DrawableElementPool<LightProbe_DE>::DrawableElementPool()
    void DrawableElementPool<LightProbe_DE>::DrawableElementPool() {
        new (this) DrawableElement();
        *(undefined**)this = PTR_vtable_100ee87d0 + 16;
    }

    // 0x10093f120, 80 bytes, inline, placed by debug map only (low confidence)
    // DrawableElementPool<LightProbe_DE>::Release()
    void DrawableElementPool<LightProbe_DE>::Release() {
        char cVar1;

        GetDrawableElementPool();
        cVar1 = (&GetDrawableElementPool()::pool)->is_owner(this);
        if (cVar1 == '\0') {
            if (this != (DrawableElementPool<LightProbe_DE>*)0) {
                (**(code**)(*(long*)this + 8))(this);
            }
        } else {
            (&GetDrawableElementPool()::pool)->Destroy(this);
        }
    }

    // 0x10093f170, 96 bytes, inline, placed by class name and debug map
    // LightProbe_DE::Render(RT7Core&, render::DrawCallState const&, SceneViewData const&, RenderPassType, EffectManager&)
    void LightProbe_DE::Render(RT7Core* param_1, undefined8 param_2, undefined8 param_3) {
        LightProbeRenderer* pLVar1;
        undefined8 uVar2;

        pLVar1 = (LightProbeRenderer*)param_1->GetLightProbeRenderer();
        uVar2 = param_1->GetRenderContext();
        pLVar1->Render(this, uVar2, param_2, param_3);
    }

    // 0x10093f1d0, 16 bytes, inline, placed by class name and debug map
    // LightProbe_DE::GetRenderer(RT7Core&)
    void LightProbe_DE::GetRenderer(RT7Core* param_1) {
        param_1->GetLightProbeRenderer();
    }

} // namespace jag::graphics

namespace jag {
    // 0x10093fa70, 48 bytes, inline, placed by debug map only (low confidence)
    // render::BufferedRenderTargets* placement_new<render::BufferedRenderTargets, int, int const&, int const&, render::Format&, char const (&) [11]>(void*, int&&, int const&, int const&, render::Format&, char const (&) [11])
    BufferedRenderTargets*
    jag::placement_new<render::BufferedRenderTargets, int, int const&, int const&, render::Format&, char const (&)[11]>(
        void* param_1, int* param_2, int* param_3, int* param_4, Format* param_5, char* param_6) {
        render::BufferedRenderTargets::BufferedRenderTargets(param_1, *param_2, *param_3, *param_4,
                                                             *(undefined4*)param_5);
        return param_1;
    }

    // 0x10093faa0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::BufferedRenderTargets>* placement_new<ref_counter_shared<render::BufferedRenderTargets>, int, render::BufferedRenderTargets*&>(void*, int&&, render::BufferedRenderTargets*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<render::BufferedRenderTargets>, int, render::BufferedRenderTargets*&>(
        void* param_1, int* param_2, BufferedRenderTargets** param_3) {
        ref_counter_shared<render::BufferedRenderTargets>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10093fac0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::BufferedRenderTargets>::ref_counter_shared(unsigned long, render::BufferedRenderTargets*): jumps straight to the base-object constructor

    // 0x10093fad0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::BufferedRenderTargets>::ref_counter_shared(unsigned long, render::BufferedRenderTargets*)
    void ref_counter_shared<render::BufferedRenderTargets>::ref_counter_shared(ulong param_1,
                                                                               BufferedRenderTargets* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee74d8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(BufferedRenderTargets**)(this + 24) = param_2;
    }

    // 0x10093fb10, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<render::BufferedRenderTargets>::DeleteData()
    void ref_counter_shared<render::BufferedRenderTargets>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 528;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag
