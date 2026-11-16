// libs/oldscape/osrendercore/rseven/Scene.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class Cutscene2D::Scene {
    public:
        float GetPlaybackStart() const;
        ~Scene();
        Scene(Scene&& scene);
        Scene* operator=(Scene&& scene);
        void PrepareResourceRequests(Cutscene2DResources* cutscene2DResources) const;
        void Play(graphics::GUIManager* guiManager, const math::Rect<int>& rect, const math::Vector2T<float>& vector2,
                  float arg4, const Cutscene2DResources& cutscene2DResources) const;
        bool IsSceneActive(float arg1) const;
        void DrawSubtitles(graphics::GUIManager* guiManager, graphics::FontManager* fontManager,
                           graphics::FontHelpers* fontHelpers, const math::Rect<int>& rect, float arg5,
                           const Cutscene2DResources& cutscene2DResources,
                           const GlobalCutscene2DResources& globalCutscene2DResources) const;
        uint64_t LoadFromPacket(PacketT<Array<unsigned char>>& arg1, int arg2);
        float GetPlaybackEnd() const;
        VarAny* GetName() const;
        Scene();

    private:
        uint8_t _unknown_0[72];
        float m_playbackStart;
        float m_playbackEnd;
        uint8_t _unknown_80[456];
    };

    // 0x10052a120
    Cutscene2D::Scene::~Scene() {
        field_528.~fixed_vector();
        field_408.~fixed_vector();
        field_80.~fixed_vector();
    }

    // 0x10052df40
    Cutscene2D::Scene::Scene(Cutscene2D::Scene&& scene) : eastl::fixed_string<char, 32>(scene) {
        float fVar1 = scene.m_playbackEnd;
        m_playbackStart = scene.m_playbackStart;
        m_playbackEnd = fVar1;
        new (&field_80) eastl::fixed_vector<Cutscene2DImageElement, 1ul>(scene.field_80);
        new (&field_408) eastl::fixed_vector<Cutscene2DAudioElement, 1ul>(scene.field_408);
        new (&field_528) eastl::fixed_vector<Cutscene2DSubtitleElement, 1ul>(scene.field_528);
    }

    // 0x1005308c0
    Scene* Cutscene2D::Scene::operator=(Cutscene2D::Scene&& scene) {
        *this = scene;
        float fVar1 = scene.m_playbackEnd;
        m_playbackStart = scene.m_playbackStart;
        m_playbackEnd = fVar1;
        field_80 = scene.field_80;
        field_408 = scene.field_408;
        field_528 = scene.field_528;
        return this;
    }

    // 0x10053acc0
    bool Cutscene2D::Scene::IsSceneActive(float arg1) const {
        if (arg1 < m_playbackStart) {
            return false;
        }
        return arg1 < m_playbackEnd;
    }

    // 0x10053c040
    float Cutscene2D::Scene::GetPlaybackEnd() const {
        return m_defaultNonMetalSpecular;
    }

    // 0x10053c140
    VarAny* Cutscene2D::Scene::GetName() const {
        basic_string<char, BucketAllocatorEASTL>* in_RSI;

        StringView<eastl::fixed_string<char, 40>>(*in_RSI);
        return this;
    }

    // 0x100542e00
    Cutscene2D::Scene::Scene() : eastl::fixed_string<char, 32>() {}

} // namespace jag::game

namespace jag::oldscape::rseven {
    class Scene {
    public:
        GraphRoot* GetSceneGraphRoot() const;
        GraphRoot* GetSceneGraphRoot();
        void ProcessOverlayUpdates(RenderState::OverlayRSeven* overlayRSeven1,
                                   RenderState::OverlayRSeven* overlayRSeven2);
        void HandleRebuild(MapRebuildResults& mapRebuildResults);
        void ProcessModelUpdates(const shared_ptr<RenderState::ModelSubmissionRSeven>* modelSubmissionRSeven1,
                                 const shared_ptr<RenderState::ModelSubmissionRSeven>* modelSubmissionRSeven2);
        void ProcessLightUpdates(const RenderState::LightSubmissionRSeven* lightSubmissionRSeven1,
                                 const RenderState::LightSubmissionRSeven* lightSubmissionRSeven2);
        void RenderThread_Render(render::RenderTargets* renderTargets, int arg2, const ViewTransforms& viewTransforms,
                                 const render::Viewport& viewport);
        Scene(jag::graphics::RT7Core* rt7Core);
        void GenerateMapSquarePointLightLists();
        ~Scene();
        void SetSceneGraphRootPosition(MapRebuildResults& mapRebuildResults);
        void UpdatePointLight(game::LightSource& lightSource, const jag::graphics::PointLight& pointLight);
        void UpdateMapSquareLightSources(eastl::vector<shared_ptr<game::LightSource>>& lightSources);
        Scene* GatherLightsForSquare(const std::unique_ptr<game::MapSquarePointLights>& mapSquarePointLights,
                                     eastl::vector<shared_ptr<game::LightSource>>& lightSources);
        Scene* CreateAABBForSquare(const std::unique_ptr<game::MapSquarePointLights>& mapSquarePointLights);
        vector<game::VisibleShadowCastingLightInfo>*
        GetShadowCastingLights(const jag::graphics::SceneViewData& sceneViewData);
        void UpdateLightingLogic(int arg1);

    private:
        RT7Core* field_0;
        uint8_t _unknown_8[1320];
        CoordGrid field_1328;
    };

    // 0x1001c0a40
    GraphRoot* Scene::GetSceneGraphRoot() const {
        return (GraphRoot*)&field_944;
    }

} // namespace jag::oldscape::rseven
