// libs/oldscape/osrendercore/rseven/SceneRenderManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::rseven {
    class SceneRenderManager {
    public:
        SceneRenderManager(jag::graphics::RT7Core* rt7Core, unsigned long arg2, unsigned long arg3);
        ~SceneRenderManager();
        void RenderView(Scene* scene, render::RenderTargets* renderTargets1,
                        const shared_ptr<render::RenderTargets>& renderTargets2, int arg4,
                        const ViewTransforms& viewTransforms, const render::Viewport& viewport,
                        jag::graphics::EffectManager& effectManager);
        void ProcessOverlayUpdates(RenderState::OverlayRSeven* overlayRSeven1,
                                   RenderState::OverlayRSeven* overlayRSeven2);
        void Clear();
        void UpdateSunlightShadows(jag::graphics::EffectManager& effectManager,
                                   const jag::graphics::SceneViewData& sceneViewData, float arg3);
        void RenderSunlightShadows(unsigned int arg1, int arg2, jag::graphics::EffectManager& effectManager,
                                   const jag::graphics::SceneViewData& sceneViewData,
                                   jag::graphics::GraphRoot* graphRoot);
        void RenderPointLightShadows(eastl::vector<game::VisibleShadowCastingLightInfo>& visibleShadowCastingLightInfos,
                                     unsigned int arg2, int arg3, jag::graphics::EffectManager& effectManager,
                                     const jag::graphics::SceneViewData& sceneViewData,
                                     jag::graphics::GraphRoot* graphRoot);

    private:
        RT7Core* field_0;
        uint8_t _unknown_8[464];
        bool field_472;
        uint8_t _unknown_473[23];
        NXTPixToolkit field_496;
    };

    // 0x1001df0c0
    SceneRenderManager::~SceneRenderManager() {
        field_480.~unique_ptr();
        field_400.~vector();
        field_392.~unique_ptr();
        field_384.~unique_ptr();
        field_336.~function();
        field_64.~function();
        field_16.~function();
    }

} // namespace jag::oldscape::rseven
