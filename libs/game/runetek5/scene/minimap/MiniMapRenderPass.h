// libs/game/runetek5/scene/minimap/MiniMapRenderPass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class MiniMapRenderPass {
    public:
        // virtual methods in vtable order
        virtual ~MiniMapRenderPass();
        virtual BeginPass(render::DrawCallState&, render::RenderContext&, graphics::EffectManager&,
                          graphics::SceneViewData const&, graphics::DrawableQueue const&);
        virtual void Render(graphics::RT7Core&, render::DrawCallState const&, graphics::EffectManager&,
                            graphics::SceneViewData const&, graphics::DrawableQueue&);
        virtual void RenderDebug(graphics::EffectManager&, graphics::DrawableQueue&);
        GetStartingRenderLevel() const;
        MiniMapRenderPass();
        void SetStartingRenderLevel(int);

        // data members, from how the methods use this: 20 bytes
        undefined** field_0;       // offset 0, vtable pointer
        uint field_8;              // offset 8
        int m_startingRenderLevel; // offset 12
        char _unknown_16[4];
    };

    // 0x1003bcb00, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // MiniMapRenderPass::~MiniMapRenderPass(): jumps straight to the base-object destructor

    // 0x1003c1210, 64 bytes, inline, placed by class name
    // MiniMapRenderPass::SetStartingRenderLevel(int)
    void MiniMapRenderPass::SetStartingRenderLevel(int param_1) {
        if (3 < (uint)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("start >= 0 && start <= 3",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "minimap/MiniMapRenderPass.h",
                      32, (char*)0);
        }
        m_startingRenderLevel = param_1;
    }

    // 0x1003d04c0, 32 bytes, deleting destructor, inline, placed by class name
    // MiniMapRenderPass::~MiniMapRenderPass()
    void MiniMapRenderPass::~MiniMapRenderPass() {
        ~MiniMapRenderPass(this);
        operator_delete(this);
    }

    // 0x1003d0680, 16 bytes, base-object destructor, inline, placed by class name
    // MiniMapRenderPass::~MiniMapRenderPass()
    void MiniMapRenderPass::~MiniMapRenderPass() {
        ~RenderPass();
    }

} // namespace jag
