// libs/graphics/runetek7/effects/irradiance/LightProbeDE.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class LightProbe_DE {
    public:
        // virtual methods in vtable order
        virtual ~LightProbe_DE();
        virtual void Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                            const SceneViewData& sceneViewData, RenderPassType renderPassType,
                            EffectManager& effectManager);
        virtual void GetRenderer(RT7Core& rt7Core);
        LightProbe_DE();

    private:
        uint8_t _unknown_8[96];
        PointLightShadows* field_104;
    };

    // 0x10093f0c0
    LightProbe_DE::LightProbe_DE() : DrawableElementPool<LightProbe_DE>(), field_104(nullptr) {}

    // 0x10093f0f0
    DrawableElementPool<LightProbe_DE>::DrawableElementPool() : DrawableElement() {}

    // 0x10093f120
    void DrawableElementPool<LightProbe_DE>::Release() {
        GetDrawableElementPool();
        if (((FastPool<LightProbe_DE, int>*)&GetDrawableElementPool()::pool)->is_owner(this) == '\0') {
            if (this != nullptr) {
                ~();
            }
        } else {
            ((FastPool<LightProbe_DE, int>*)&GetDrawableElementPool()::pool)->Destroy(this);
        }
    }

    // 0x10093f170
    void LightProbe_DE::Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                               const SceneViewData& sceneViewData, RenderPassType renderPassType,
                               EffectManager& effectManager) {
        auto lightProbe_DE = rt7Core.GetLightProbeRenderer();
        auto drawCallState_00 = rt7Core.GetRenderContext();
        LightProbeRenderer::Render(*lightProbe_DE, *this, *drawCallState_00, drawCallState,
                                   (RenderPassType)sceneViewData, effectManager);
    }

    // 0x10093f1d0
    void LightProbe_DE::GetRenderer(RT7Core& rt7Core) {
        rt7Core.GetLightProbeRenderer();
    }

} // namespace jag::graphics

namespace jag {
    // 0x10093fa70
    render::BufferedRenderTargets*
    placement_new<render::BufferedRenderTargets, int, int const&, int const&, render::Format&, char const (&)[11]>(
        void* arg1, int&& arg2, const int& arg3, const int& arg4, render::Format& format, char const (&arg6)[11]) {
        new (arg1) render::BufferedRenderTargets(arg2, arg3, arg4, format, arg6);
        return arg1;
    }

    // 0x10093faa0
    ref_counter_shared<render::BufferedRenderTargets>*
    placement_new<ref_counter_shared<render::BufferedRenderTargets>, int, render::BufferedRenderTargets*&>(
        void* arg1, int&& arg2, render::BufferedRenderTargets*& arg3) {
        new (arg1) ref_counter_shared<render::BufferedRenderTargets>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10093fad0
    ref_counter_shared<render::BufferedRenderTargets>::ref_counter_shared(
        unsigned long arg1, render::BufferedRenderTargets* bufferedRenderTargets)
        : ref_counter_base() {}

    // 0x10093fb10
    void ref_counter_shared<render::BufferedRenderTargets>::DeleteData() {
        long lVar1;
        ref_counter_shared<render::BufferedRenderTargets> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<render::BufferedRenderTargets> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 528;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag
