// libs/game/runetek5/scene/minimap/MiniMapRenderPass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class MiniMapRenderPass {
    public:
        // virtual methods in vtable order
        virtual ~MiniMapRenderPass();
        virtual uint64_t BeginPass(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                   graphics::EffectManager& effectManager, const graphics::SceneViewData& sceneViewData,
                                   const graphics::DrawableQueue& drawableQueue);
        virtual void Render(graphics::RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                            graphics::EffectManager& effectManager, const graphics::SceneViewData& sceneViewData,
                            graphics::DrawableQueue& drawableQueue);
        virtual void RenderDebug(graphics::EffectManager& effectManager, graphics::DrawableQueue& drawableQueue);
        int GetStartingRenderLevel() const;
        MiniMapRenderPass();
        void SetStartingRenderLevel(int arg1);

    private:
        RenderPassType field_8;
        int m_startingRenderLevel;
        uint8_t _unknown_16[4];
    };

    // 0x1003c1210
    void MiniMapRenderPass::SetStartingRenderLevel(int arg1) {
        if (3 < (unsigned int)arg1) {
            LogAssert("start >= 0 && start <= 3",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "minimap/MiniMapRenderPass.h",
                      32, nullptr);
        }
        m_startingRenderLevel = arg1;
    }

    // 0x1003d0680
    MiniMapRenderPass::~MiniMapRenderPass() {}

} // namespace jag
