// libs/graphics/runetek7/effects/skybox/SkyBoxDE.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class SkyBox_DE {
    public:
        // virtual methods in vtable order
        virtual ~SkyBox_DE();
        virtual void Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                            const SceneViewData& sceneViewData, RenderPassType renderPassType,
                            EffectManager& effectManager);
        virtual void GetRenderer(RT7Core& rt7Core);
        void RenderSkyModel(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                            const SceneViewData& sceneViewData, RenderPassType renderPassType,
                            EffectManager& effectManager, Model& model,
                            const Array<eastl::pair<unsigned char, int>>& pairs);
        SkyBox_DE();

    private:
        uint8_t _unknown_8[96];
        fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true>* field_104;
        float field_112;
        uint8_t _unknown_116[12];
    };

    // 0x100921fc0
    void SkyBox_DE::GetRenderer(RT7Core& rt7Core) {
        rt7Core.GetSkyBoxRenderer();
    }

    // 0x1009228e0
    SkyBox_DE::SkyBox_DE() : DrawableElementPool<SkyBox_DE>() {
        field_104 = nullptr;
        field_112 = 0.0;
    }

} // namespace jag::graphics
