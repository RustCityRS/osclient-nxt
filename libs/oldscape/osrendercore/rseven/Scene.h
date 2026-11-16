// libs/oldscape/osrendercore/rseven/Scene.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class Cutscene2D::Scene {
    public:
        float GetPlaybackStart() const;
        ~Scene();
        Scene(Scene&&);
        Scene* operator=(Scene&&);
        void PrepareResourceRequests(Cutscene2DResources*) const;
        void Play(graphics::GUIManager*, math::Rect<int> const&, math::Vector2T<float> const&, float,
                  Cutscene2DResources const&) const;
        bool IsSceneActive(float) const;
        void DrawSubtitles(graphics::GUIManager*, graphics::FontManager*, graphics::FontHelpers*,
                           math::Rect<int> const&, float, Cutscene2DResources const&,
                           GlobalCutscene2DResources const&) const;
        LoadFromPacket(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        float GetPlaybackEnd() const;
        GetName() const;
        Scene();

        // data members, from how the methods use this: 536 bytes
        char _unknown_0[72];
        float m_playbackStart; // offset 72
        float m_playbackEnd;   // offset 76
        char _unknown_80[456];
    };

    // 0x10052a110, 16 bytes, complete-object destructor, inline, placed by class name
    // Cutscene2D::Scene::~Scene(): jumps straight to the base-object destructor

    // 0x10052a120, 64 bytes, base-object destructor, inline, placed by class name
    // Cutscene2D::Scene::~Scene()
    void Cutscene2D::Scene::~Scene() {
        (&field_528)->~fixed_vector();
        (&field_408)->~fixed_vector();
        (&field_80)->~fixed_vector();
        /* WARNING: Subroutine does not return */
        ~fixed_string();
    }

    // 0x10052df00, 16 bytes, complete-object constructor, inline, placed by class name
    // Cutscene2D::Scene::Scene(Cutscene2D::Scene&&): jumps straight to the base-object constructor

    // 0x10052df40, 144 bytes, base-object constructor, inline, placed by class name
    // Cutscene2D::Scene::Scene(Cutscene2D::Scene&&)
    void Cutscene2D::Scene::Scene(Scene* param_1) {
        float fVar1;

        new (this) eastl::fixed_string<char, 32, true, eastl::allocator>(param_1);
        fVar1 = param_1->m_playbackEnd;
        m_playbackStart = param_1->m_playbackStart;
        m_playbackEnd = fVar1;
        new (&field_80, (fixed_vector*)&param_1->field_80)
            eastl::fixed_vector<Cutscene2DImageElement, 1ul, true, eastl::allocator>();
        new (&field_408, (fixed_vector*)&param_1->field_408)
            eastl::fixed_vector<Cutscene2DAudioElement, 1ul, true, eastl::allocator>();
        new (&field_528, (fixed_vector*)&param_1->field_528)
            eastl::fixed_vector<Cutscene2DSubtitleElement, 1ul, true, eastl::allocator>();
    }

    // 0x1005308c0, 96 bytes, inline, placed by class name
    // Cutscene2D::Scene::operator=(Cutscene2D::Scene&&)
    /* Cutscene2D::Scene::TEMPNAMEPLACEHOLDERVALUE(Cutscene2D::Scene&&) */

    Scene* Cutscene2D::Scene::operator=(Scene* param_1) {
        float fVar1;

        eastl::fixed_string<char, 4096, true, eastl::allocator>::operator=(
            (fixed_string<char, 4096, true, eastl::allocator>*)this, (fixed_string*)param_1);
        fVar1 = param_1->m_playbackEnd;
        m_playbackStart = param_1->m_playbackStart;
        m_playbackEnd = fVar1;
        eastl::fixed_vector<Cutscene2DImageElement, 1ul, true, eastl::allocator>::operator=(
            (fixed_vector<Cutscene2DImageElement, 1ul, true, eastl::allocator>*)&field_80,
            (fixed_vector*)&param_1->field_80);
        eastl::fixed_vector<Cutscene2DAudioElement, 1ul, true, eastl::allocator>::operator=(
            (fixed_vector<Cutscene2DAudioElement, 1ul, true, eastl::allocator>*)&field_408,
            (fixed_vector*)&param_1->field_408);
        eastl::fixed_vector<Cutscene2DSubtitleElement, 1ul, true, eastl::allocator>::operator=(
            (fixed_vector<Cutscene2DSubtitleElement, 1ul, true, eastl::allocator>*)&field_528,
            (fixed_vector*)&param_1->field_528);
        return this;
    }

    // 0x10053acc0, 32 bytes, inline, placed by class name
    // Cutscene2D::Scene::IsSceneActive(float) const
    bool Cutscene2D::Scene::IsSceneActive(float param_1) {
        if (param_1 < m_playbackStart) {
            return false;
        }
        return param_1 < m_playbackEnd;
    }

    // 0x10053c040, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Cutscene2D::Scene::GetPlaybackEnd() const
    /* graphics::Material::GetDefaultNonMetalSpecular() const */

    undefined4 graphics::Material::GetDefaultNonMetalSpecular() {
        return m_defaultNonMetalSpecular;
    }

    // 0x10053c140, 32 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Cutscene2D::Scene::GetName() const
    /* jag::console::VarAny::GetTypeName() const */

    VarAny* jag::console::VarAny::GetTypeName() {
        fixed_string* in_RSI;

        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>((StringView*)this, in_RSI);
        return this;
    }

    // 0x100542df0, 16 bytes, complete-object constructor, inline, placed by class name
    // Cutscene2D::Scene::Scene(): jumps straight to the base-object constructor

    // 0x100542e00, 112 bytes, base-object constructor, inline, placed by class name
    // Cutscene2D::Scene::Scene()
    void Cutscene2D::Scene::Scene() {
        new (this) eastl::fixed_string<char, 32, true, eastl::allocator>();
        new (&field_80) eastl::fixed_vector<Cutscene2DImageElement, 1ul, true, eastl::allocator>();
        new (&field_408) eastl::fixed_vector<Cutscene2DAudioElement, 1ul, true, eastl::allocator>();
        new (&field_528) eastl::fixed_vector<Cutscene2DSubtitleElement, 1ul, true, eastl::allocator>();
    }

} // namespace jag::game

namespace jag::oldscape::rseven {
    class Scene {
    public:
        GetSceneGraphRoot() const;
        GetSceneGraphRoot();
        void ProcessOverlayUpdates(RenderState::OverlayRSeven*, RenderState::OverlayRSeven*);
        void HandleRebuild(MapRebuildResults&);
        void ProcessModelUpdates(shared_ptr<RenderState::ModelSubmissionRSeven> const*,
                                 shared_ptr<RenderState::ModelSubmissionRSeven> const*);
        void ProcessLightUpdates(RenderState::LightSubmissionRSeven const*, RenderState::LightSubmissionRSeven const*);
        void RenderThread_Render(render::RenderTargets*, int, ViewTransforms const&, render::Viewport const&);
        Scene(jag::graphics::RT7Core*);
        void GenerateMapSquarePointLightLists();
        ~Scene();
        void SetSceneGraphRootPosition(MapRebuildResults&);
        void UpdatePointLight(game::LightSource&, jag::graphics::PointLight const&);
        void UpdateMapSquareLightSources(eastl::vector<shared_ptr<game::LightSource>, BucketAllocatorEASTL>&);
        GatherLightsForSquare(
            std::unique_ptr<game::MapSquarePointLights, std::default_delete<game::MapSquarePointLights>> const&,
            eastl::vector<shared_ptr<game::LightSource>, BucketAllocatorEASTL>&);
        CreateAABBForSquare(
            std::unique_ptr<game::MapSquarePointLights, std::default_delete<game::MapSquarePointLights>> const&);
        vector<game::VisibleShadowCastingLightInfo, eastl::allocator>*
        GetShadowCastingLights(jag::graphics::SceneViewData const&);
        void UpdateLightingLogic(int);

        // data members, from how the methods use this: 1344 bytes
        RT7Core* field_0; // offset 0
        char _unknown_8[1320];
        CoordGrid field_1328; // offset 1328
    };

    // 0x1001c0a40, 16 bytes, inline, placed by class name and debug map
    // Scene::GetSceneGraphRoot() const
    /* Scene::GetSceneGraphRoot() */

    undefined1* Scene::GetSceneGraphRoot() {
        return &field_944;
    }

} // namespace jag::oldscape::rseven
