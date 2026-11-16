// libs/oldscape/osrendercore/rseven/SceneRenderManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rseven {
    class SceneRenderManager {
    public:
        SceneRenderManager(jag::graphics::RT7Core*, unsigned long, unsigned long);
        ~SceneRenderManager();
        void RenderView(Scene*, render::RenderTargets*, shared_ptr<render::RenderTargets> const&, int,
                        ViewTransforms const&, render::Viewport const&, jag::graphics::EffectManager&);
        void ProcessOverlayUpdates(RenderState::OverlayRSeven*, RenderState::OverlayRSeven*);
        void Clear();
        void UpdateSunlightShadows(jag::graphics::EffectManager&, jag::graphics::SceneViewData const&, float);
        void RenderSunlightShadows(unsigned int, int, jag::graphics::EffectManager&,
                                   jag::graphics::SceneViewData const&, jag::graphics::GraphRoot*);
        void RenderPointLightShadows(eastl::vector<game::VisibleShadowCastingLightInfo, eastl::allocator>&,
                                     unsigned int, int, jag::graphics::EffectManager&,
                                     jag::graphics::SceneViewData const&, jag::graphics::GraphRoot*);

        // data members, from how the methods use this: 6516336 bytes
        RT7Core* field_0; // offset 0
        char _unknown_8[8];
        undefined1 field_16; // offset 16
        char _unknown_17[47];
        undefined1 field_64; // offset 64
        char _unknown_65[271];
        undefined1 field_336; // offset 336
        char _unknown_337[135];
        bool field_472; // offset 472
        char _unknown_473[23];
        NXTPixToolkit field_496; // offset 496
    };

    // 0x1001cc680, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // SceneRenderManager::~SceneRenderManager(): jumps straight to the base-object destructor

    // 0x1001df0c0, 112 bytes, base-object destructor, inline, placed by class name
    // SceneRenderManager::~SceneRenderManager()
    void SceneRenderManager::~SceneRenderManager() {
        (&field_480)->~unique_ptr();
        (&field_400)->~vector();
        (&field_392)->~unique_ptr();
        (&field_384)->~unique_ptr();
        std::function<bool(std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                           jag::math::Frustum_const&, int, jag::math::AABB_const&, jag::math::OBB_const&)>::
            ~function((function<bool(std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                                     jag::math::Frustum_const&, int, jag::math::AABB_const&,
                                     jag::math::OBB_const&)>*)&field_336);
        std::function<bool(std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                           jag::math::Frustum_const&, int, jag::math::AABB_const&, jag::math::OBB_const&)>::
            ~function((function<bool(std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                                     jag::math::Frustum_const&, int, jag::math::AABB_const&,
                                     jag::math::OBB_const&)>*)&field_64);
        std::function<bool(std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                           jag::math::Frustum_const&, int, jag::math::AABB_const&, jag::math::OBB_const&)>::
            ~function((function<bool(std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                                     jag::math::Frustum_const&, int, jag::math::AABB_const&,
                                     jag::math::OBB_const&)>*)&field_16);
    }

} // namespace jag::oldscape::rseven
