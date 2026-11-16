// libs/game/runetek5/scene/World.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class World {
    public:
        // virtual methods in vtable order
        virtual void DestroyRenderingResources();
        virtual ~World();
        void GetSceneManager() const;
        uint8_t* GetDynamicPointLightManager();
        SceneRenderManager* GetWorldRenderer();
        GraphNode* GetRootNode();
        DetachedParticleSystemsDrawable* GetDetachedParticleSystems();
        void GetLastFrustum() const;
        BuildMode GetBuildMode() const;
        void GetLoadingIncludesTextures() const;
        void GetLoadingIncludesShaders() const;
        RT7Core* GetRT7Core();
        LODSettings* GetLODSettings();
        LODSettings* GetLODSettings() const;
        uint8_t HaveAllMapSquaresFinishedHighPriorityZones() const;
        uint8_t* GetBuiltZones() const;
        void AddPointLight(unsigned int arg1, const shared_ptr<LightSource>& lightSource);
        HeightMap* GetHeightMap() const;
        LinkMap* GetLinkMap() const;
        Matrix44T<float>* GetLastCameraProjectionMatrix() const;
        Matrix44T<float>* GetLastViewProjectionMatrix() const;
        void GetLastCameraViewMatrix() const;
        RemoveRoof GetRemoveRoof();
        bool IsRemoveRoofSelective() const;
        int GetMaxRenderLevel() const;
        uint8_t GetMainSceneDrawn() const;
        World(SceneManager* sceneManager, graphics::RT7Core* rt7Core, Js5ResourceProvider* js5ResourceProvider,
              ConfigProvider* configProvider, PlayerVarDomain* playerVarDomain, AssetBuilder* assetBuilder,
              const shared_ptr<WorldAreaType>& worldAreaType, BuildMode buildMode, int arg9, int arg10, int arg11,
              int arg12, const shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>& arg13);
        void CreateWorld();
        void ClearPickables();
        void Clear();
        void DestructAllMapSquares();
        void Reset();
        void GetEffectManager() const;
        uint8_t* GetMapSquare(int arg1, int arg2) const;
        uint8_t* GetMapSquareStatus(int arg1, int arg2) const;
        void GetClosestMapSquare(const math::Vector3T<float>& vector3) const;
        void GetClosestMapSquare(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
        unsigned long IsTerrainBuilt();
        void SetTerrainBlending(bool arg1);
        void OnAllMapSquares(std::function<void(shared_ptr<MapSquare>&)> callback);
        void RebuildArea(int arg1, int arg2, int arg3, int arg4);
        uint32_t GetTargetMapSquarePriority(int arg1, int arg2) const;
        auto GetIrradianceCache();
        uint64_t
        RebuildExistingRegion(const shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>& arg1,
                              BuildMode buildMode, bool arg3);
        auto
        BuildClientCompositeData(const shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>& arg1,
                                 int arg2, int arg3);
        auto BuildNonRegionComposite(shared_ptr<MapSquareWorldAreaCompositeInner>& mapSquareWorldAreaCompositeInner,
                                     int arg2, int arg3);
        void MainLogic(unsigned int arg1);
        void ApplyPointLightAABBChanges();
        void MapSquareMainLogic(unsigned int arg1);
        void UpdateLightFlicker();
        void RemoveUnusedPointLights(int arg1);
        void OnRingMapSquares(int arg1, std::function<void(shared_ptr<MapSquare>&)> callback);
        void MapSquareMainDraw(unsigned int arg1);
        shared_ptr* GetPointLight(unsigned int arg1);
        void AddPickableEntities(unsigned int arg1, graphics::GraphNode* graphNode, int arg3);
        uint64_t MainDraw(render::RenderTargets* renderTargets, unsigned int arg2, const ViewTransforms& viewTransforms,
                          float arg4, float arg5, const render::Viewport& viewport, const CoordFine& coordFine,
                          int arg8, int arg9, unsigned int arg10);
        void UpdateLightProbeSH();
        shared_ptr GetCentreSquare() const;
        shared_ptr GetCurrentEnvironmentSettings() const;
        void CheckEnvironmentParameters(const CoordFine& coordFine, float arg2, float arg3);
        void RenderDebug(const render::Viewport& viewport);
        void UpdatePickableEntities(unsigned int arg1, const CoordFine& coordFine);
        void RenderLightProbeEnvMaps(unsigned int arg1, unsigned int arg2, int arg3, LoadingState loadingState);
        void SetNewEnvironmentParameters(const MapEnvironmentSettings& mapEnvironmentSettings, bool arg2,
                                         long long arg3, float arg4, float arg5);
        void GetLightProbeManager();
        void UpdateFogEffect(float arg1, float arg2, unsigned int arg3);
        void GetLastCameraPosition() const;
        Vector3T<float>* GetLastCameraFocusPosition() const;
        shared_ptr GetDefaultEnvironmentMap() const;
        void Preload(unsigned int arg1, const math::Vector3T<float>& vector3,
                     const eastl::bitset<6ul, unsigned long long>& bitset);
        int Build(unsigned int arg1, const math::Vector3T<float>& vector3,
                  const eastl::bitset<6ul, unsigned long long>& bitset, LoadingState loadingState);
        void CalculateTargetBuildAreaAndPriority(const math::Vector3T<float>& vector3);
        void BuildMapSquare(const TargetMapSquare& targetMapSquare, const math::Vector3T<float>& vector3, bool arg3,
                            unsigned int arg4, const eastl::bitset<6ul, unsigned long long>& bitset,
                            LoadingState loadingState);
        void RemoveExcessMapSquares();
        void SetEntityLoadMetrics(const eastl::bitset<6ul, unsigned long long>& bitset);
        void GetNumMapSquaresLoaded(LoadingState loadingState) const;
        unsigned long HighPriorityMapSquaresConstructed();
        void ResetMapSquare(MapSquareStatus& mapSquareStatus);
        void DestructMapSquare(shared_ptr<MapSquare>& mapSquare);
        uint32_t GetEntityLoadImportance(EntityType entityType) const;
        void DestructImpostorMapSquares();
        void NotifyPickableEntities();
        uint8_t* GetPickableEntities() const;
        void TestPickableEntity(eastl::fixed_vector<shared_ptr<Entity>, 128ul>& entitys1,
                                eastl::fixed_vector<shared_ptr<Entity>, 128ul>& entitys2, int& arg3, int& arg4,
                                const shared_ptr<Entity>& entity, const math::Point<int>& point, int arg7,
                                unsigned int arg8);
        void AddPickableEntity(const shared_ptr<Entity>& entity);
        void RemoveRoofSelective(unsigned int arg1, const CoordGrid& coordGrid);
        void PaintRemoveRoofArea(const CoordGrid& coordGrid);
        void AddBuiltZone(const CoordGrid& coordGrid, int arg2, int arg3);
        void AddBuiltZone(const LocationContainer& locationContainer);
        uint64_t ChangeLocation(int arg1, int arg2, int arg3, int arg4, const LocData& locData);
        void HideLocations(LocShape locShape);
        void UnhideLocations(LocShape locShape);
        void HideWalls();
        void ShowWalls();
        void HideWallDecor();
        void ShowWallDecor();
        void HideGroundDecor();
        void ShowGroundDecor();
        void HideSceneryRoofing();
        void ShowSceneryRoofing();
        void SetMultiLocState(int arg1, int arg2);
        void IncrementMultiLocState(int arg1);
        void IncrementAllMultiLocStates();
        void RebuildLightIndices();
        auto GetPointLightsByScriptID(unsigned int arg1) const;
        void SetBrightnessOffset(option::EnumBrightness enumBrightness);
        bool IsGroundDecorHidden() const;
        uint8_t GetTemporaryMap() const;
        uint8_t* GetWorldArea();
        uint8_t* GetClearColour() const;
        GraphRoot* GetSceneGraphRoot();
        uint32_t GetPlayerCameraOffsetScale() const;
        vector<eastl::vector<MapSquareStatus>>* GetMapSquares() const;
        int GetMapSquareWidth() const;
        int GetMapSquareLength() const;
        void GetMapSquare(const MapSquare::MapSquarePos& mapSquarePos) const;
        ShaderVariablePrecision GetMapSquareMinX() const;
        EnumOptionToggle GetMapSquareMaxX() const;
        ShaderVariablePrecision GetMapSquareMinZ() const;
        EnumOptionToggle GetMapSquareMaxZ() const;
        unsigned int GetWorldFocusLevel();
        shared_ptr<graphics::SkyBox>* GetSkyBox();
        void DebugSetPickingCounts(unsigned int arg1, unsigned int arg2);
        int* GetCentreSquarePosition() const;
        bool IsTargetMapSquare(int arg1, int arg2) const;
        static int32_t m_gammaCorrectEnvInputs; // = 1
        static float m_showMaxLevel;            // = 3.0f
        static bool m_enableImpostors;          // = 1
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullWorld; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static bool m_showPointLights;
        static bool m_showOccludedPointLights;
        static bool m_showFloorGrid;
        static bool m_showFloorGridUseWaterHeight;
        static bool m_showHeightMap;
        static bool m_showHeightMapRest;
        static bool m_showWaterHeights;
        static bool m_showUnderworldMap;
        static bool m_showCurrentSkyBoxMap;
        static bool m_showDefaultEnvironmentMap;
        static bool m_showCurrentEnvironmentMap;
        static bool m_debugPicking;
        static bool m_debugRemoveRoof;
        static bool m_debugRemoveRoofLabels;
        static float m_showMinLevel;

    private:
        uint8_t _unknown_8[16];
        SceneManager* field_24;
        RT7Core* m_pRT7Core;
        Js5ResourceProvider* field_40;
        ConfigProvider* field_48;
        AssetBuilder* field_56;
        PlayerVarDomain* field_64;
        uint8_t _unknown_72[88];
        uint8_t field_160;
        uint8_t _unknown_161[65567];
        uint8_t m_worldArea[16];
        uint8_t _unknown_65744[80];
        shared_ptr m_skyBox;
        uint8_t _unknown_65840[16];
        SceneRenderManager m_worldRenderer;
        uint8_t _unknown_80920[664];
        uint8_t field_81584;
        uint8_t _unknown_81585[3];
        ShaderVariablePrecision m_mapSquareMinX;
        ShaderVariablePrecision m_mapSquareMinZ;
        EnumOptionToggle m_mapSquareMaxX;
        EnumOptionToggle m_mapSquareMaxZ;
        int field_81604;
        int field_81608;
        int field_81612;
        int field_81616;
        uint8_t field_81620;
        uint8_t _unknown_81621[35];
        int m_mapSquareWidth;
        int m_mapSquareLength;
        int field_81664;
        uint8_t _unknown_81668[36];
        shared_ptr m_centreSquare;
        uint8_t _unknown_81720[8];
        int field_81728;
        int field_81732;
        uint8_t _unknown_81736[8];
        AABB m_linkMap;
        RemoveRoof m_removeRoof;
        uint8_t m_removeRoofSelective;
        uint8_t m_groundDecorHidden;
        TargetMapSquare field_671754;
        uint8_t _unknown_671755[21];
        BuildMode m_buildMode;
        uint8_t m_temporaryMap;
        uint8_t _unknown_671781[81963];
        TargetMapSquare field_753744;
        uint8_t _unknown_753745[7];
        uint64_t field_753752;
        unsigned int field_753760;
        unsigned int field_753764;
        uint8_t m_pickableEntities[16];
        uint8_t _unknown_753784[32792];
        uint32_t field_786576;
        uint8_t _unknown_786580[4];
        shared_ptr m_currentEnvironmentSettings;
        shared_ptr field_786600;
        uint8_t _unknown_786616[164032];
        shared_ptr field_950648;
        shared_ptr m_defaultEnvironmentMap;
        uint8_t _unknown_950680[56];
        int field_950736;
        uint8_t _unknown_950740[24];
        TargetMapSquare field_950764;
        uint8_t _unknown_950765[3];
        float field_950768;
        uint8_t m_mainSceneDrawn;
        uint8_t _unknown_950773[15];
        int m_maxRenderLevel;
        unsigned int m_worldFocusLevel;
        uint32_t m_playerCameraOffsetScale;
        uint64_t field_950800;
        uint8_t _unknown_950808[5645416];
    };

    // 0x1003c11f0
    SceneRenderManager* World::GetWorldRenderer() {
        return (SceneRenderManager*)m_worldRenderer;
    }

    // 0x1003edd00
    GraphNode* World::GetRootNode() {
        return (GraphNode*)field_65744.GetRoot();
    }

    // 0x1003f2fe0
    DetachedParticleSystemsDrawable* World::GetDetachedParticleSystems() {
        return (DetachedParticleSystemsDrawable*)&field_80976;
    }

    // 0x1003fa230
    void World::GetLastFrustum() const {
        m_worldRenderer->GetPrevViewFrustum();
    }

    // 0x10040e6e0
    BuildMode World::GetBuildMode() const {
        return m_buildMode;
    }

    // 0x100410f10
    void World::GetLoadingIncludesTextures() const {
        field_753752.test(3);
    }

    // 0x100410f30
    void World::GetLoadingIncludesShaders() const {
        field_753752.test(4);
    }

    // 0x100411380
    RT7Core* World::GetRT7Core() {
        if (m_pRT7Core == nullptr) {
            LogAssert(
                "m_rt7Core != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/World.h",
                544, nullptr);
        }
        return m_pRT7Core;
    }

    // 0x100411c00
    LODSettings* World::GetLODSettings() {
        return (LODSettings*)&field_950740;
    }

    // 0x100414af0
    uint8_t World::HaveAllMapSquaresFinishedHighPriorityZones() const {
        return field_81620;
    }

    // 0x100414b30
    uint8_t* World::GetBuiltZones() const {
        return &field_671784;
    }

    // 0x1004150e0
    void World::AddPointLight(unsigned int arg1, const shared_ptr<LightSource>& lightSource) {
        auto objType = GetPointLight(arg1);
        if (!*objType == nullptr) {
            LogAssert(
                "GetPointLight(id) == nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/World.h",
                297, nullptr);
        }
        shared_ptr<LightSource>* this_00 = &field_786616[arg1];
        *this_00 = lightSource;
    }

    // 0x10042d490
    HeightMap* World::GetHeightMap() const {
        return (HeightMap*)&field_81736;
    }

    // 0x10042d520
    LinkMap* World::GetLinkMap() const {
        return (LinkMap*)m_linkMap;
    }

    // 0x100430480
    Matrix44T<float>* World::GetLastCameraProjectionMatrix() const {
        auto this_00 = m_worldRenderer->GetPrevViewTransforms();
        return (Matrix44T<float>*)this_00->GetOrigin();
    }

    // 0x1004304a0
    Matrix44T<float>* World::GetLastViewProjectionMatrix() const {
        auto this_00 = m_worldRenderer->GetPrevViewTransforms();
        return (Matrix44T<float>*)this_00->GetImmediateThreadPool();
    }

    // 0x1004304c0
    void World::GetLastCameraViewMatrix() const {
        ((NXTPixToolkit*)m_worldRenderer->GetPrevViewTransforms())->GetScreen();
    }

    // 0x100430690
    RemoveRoof World::GetRemoveRoof() {
        return m_removeRoof;
    }

    // 0x1004306b0
    bool World::IsRemoveRoofSelective() const {
        return m_removeRoofSelective;
    }

    // 0x100430b00
    int World::GetMaxRenderLevel() const {
        return m_maxRenderLevel;
    }

    // 0x100430db0
    uint8_t World::GetMainSceneDrawn() const {
        return m_mainSceneDrawn;
    }

    // 0x10043ed70
    shared_ptr* World::GetPointLight(unsigned int arg1) {
        return (shared_ptr*)field_786616[arg1];
    }

    // 0x10043f1a0
    shared_ptr World::GetCentreSquare() const {
        return m_centreSquare;
    }

    // 0x10043f1b0
    shared_ptr World::GetCurrentEnvironmentSettings() const {
        return m_currentEnvironmentSettings;
    }

    // 0x100441a60
    void World::GetLightProbeManager() {
        field_72.get();
    }

    // 0x100441b70
    void World::GetLastCameraPosition() const {
        ((Layout*)m_worldRenderer->GetPrevViewTransforms())->SSOBeginPtr();
    }

    // 0x100441e40
    Vector3T<float>* World::GetLastCameraFocusPosition() const {
        return (Vector3T<float>*)&field_950776;
    }

    // 0x100441e60
    shared_ptr World::GetDefaultEnvironmentMap() const {
        return m_defaultEnvironmentMap;
    }

    // 0x1004430f0
    void World::SetEntityLoadMetrics(const eastl::bitset<6ul, unsigned long long>& bitset) {
        field_753752 = *(uint64_t*)bitset;
    }

    // 0x100443910
    uint8_t* World::GetPickableEntities() const {
        return m_pickableEntities;
    }

    // 0x100449390
    bool World::IsGroundDecorHidden() const {
        return m_groundDecorHidden;
    }

    // 0x100450fa0
    void World::SetTerrainBlending(bool)::$_1::operator()(shared_ptr<MapSquare>& mapSquare) const {
        ((MapSquare*)mapSquare.operator->())->SetTerrainBlending(*field_0);
    }

    // 0x100453410
    void World::MapSquareMainLogic(unsigned int)::$_4::operator()(shared_ptr<MapSquare>& mapSquare) const {
        long lVar1 = *(long*)this;
        auto pMVar2 = mapSquare.operator->();
        auto this_00 = pMVar2->GetMapSquarePointLights();
        pMVar2 = (MapSquare*)mapSquare.end();
        this_00->MainLogic(pMVar2, *(ConfigProvider**)(lVar1 + 48), *(unsigned int*)(this + 8));
    }

    // 0x100453d50
    void World::MapSquareMainDraw(unsigned int)::$_5::operator()(shared_ptr<MapSquare>& mapSquare) const {
        auto this_00 = mapSquare.operator->();
        ((MapSquarePointLights*)this_00->GetMapSquarePointLights())->MainDraw(*(unsigned int*)this);
    }

    // 0x100455b40
    uint32_t World::CalculateTargetBuildAreaAndPriority(math::Vector3T<float> const&)::$_6::operator()(
        const TargetMapSquare& targetMapSquare1, const TargetMapSquare& targetMapSquare2) const {
        return *(int*)(this + 8) < *(int*)(targetMapSquare1 + 8);
    }

    // 0x100457920
    void World::HideLocations(LocShape)::$_8::operator()(shared_ptr<MapSquare>& mapSquare) const {
        ((MapSquare*)mapSquare.operator->())->HideLocations((unsigned int)*field_0);
    }

    // 0x100458240
    void World::UnhideLocations(LocShape)::$_9::operator()(shared_ptr<MapSquare>& mapSquare) const {
        ((MapSquare*)mapSquare.operator->())->UnhideLocations((unsigned int)*field_0);
    }

    // 0x100458b60
    void World::SetMultiLocState(int, int)::$_10::operator()(shared_ptr<MapSquare>& mapSquare) const {
        ((MapSquare*)mapSquare.operator->())->SetMultiLocState(*(int*)this, *(int*)(this + 4));
    }

    // 0x100459480
    void World::IncrementMultiLocState(int)::$_11::operator()(shared_ptr<MapSquare>& mapSquare) const {
        ((MapSquare*)mapSquare.operator->())->IncrementMultiLocState(field_0);
    }

    // 0x100459c20
    void World::IncrementAllMultiLocStates()::$_12::operator()(shared_ptr<MapSquare>& mapSquare) const {
        ((MapSquare*)(*this).operator->())->IncrementAllMultiLocStates();
    }

    // 0x10045a3c0
    void World::RebuildLightIndices()::$_13::operator()(shared_ptr<MapSquare>& mapSquare) const {
        MapSquare* this_00 = (MapSquare*)(*this).operator->();
        ((MapSquarePointLights*)this_00->GetMapSquarePointLights())->RequestFullRebuild();
    }

    // 0x10045acd0
    void World::ApplyPointLightAABBChanges()::$_14::operator()(shared_ptr<MapSquare>& mapSquare) const {
        Entity* this_01;

        Layout* this_00 = field_0;
        auto aabb = this_00->HeapBeginPtr();
        auto pAVar2 = this_00->end();
        while (true) {
            if (aabb == pAVar2) {
                return;
            }
            this_01 = (Entity*)mapSquare.operator->();
            if (((AABB*)this_01->GetWorldAABB())->TestIntersection(*aabb) != '\0')
                break;
            aabb = (AABB*)&aabb->field_32;
        }
        auto this_03 = mapSquare.operator->();
        ((MapSquarePointLights*)this_03->GetMapSquarePointLights())->RequestDynamicLightSourceUpdate();
    }

    // 0x100461bf0
    uint8_t World::GetTemporaryMap() const {
        return m_temporaryMap;
    }

    // 0x100462d10
    uint8_t* World::GetWorldArea() {
        return m_worldArea;
    }

    // 0x100465220
    uint8_t* World::GetClearColour() const {
        return &field_65840;
    }

    // 0x1004654b0
    GraphRoot* World::GetSceneGraphRoot() {
        return (GraphRoot*)&field_65744;
    }

    // 0x100465ef0
    uint32_t World::GetPlayerCameraOffsetScale() const {
        return m_playerCameraOffsetScale;
    }

    // 0x1004688b0
    vector<eastl::vector<MapSquareStatus>>* World::GetMapSquares() const {
        return (vector<eastl::vector<MapSquareStatus>>*)&field_81672;
    }

    // 0x1004688d0
    int World::GetMapSquareWidth() const {
        return m_mapSquareWidth;
    }

    // 0x1004688e0
    int World::GetMapSquareLength() const {
        return m_mapSquareLength;
    }

    // 0x1004784a0
    void World::GetMapSquare(const MapSquare::MapSquarePos& mapSquarePos) const {
        GetMapSquare((unsigned int)(uint8_t)mapSquarePos.field_0, (unsigned int)mapSquarePos.field_1);
    }

    // 0x100478ac0
    ShaderVariablePrecision World::GetMapSquareMinX() const {
        return m_mapSquareMinX;
    }

    // 0x100478ad0
    EnumOptionToggle World::GetMapSquareMaxX() const {
        return m_mapSquareMaxX;
    }

    // 0x100478ae0
    ShaderVariablePrecision World::GetMapSquareMinZ() const {
        return m_mapSquareMinZ;
    }

    // 0x100478af0
    EnumOptionToggle World::GetMapSquareMaxZ() const {
        return m_mapSquareMaxZ;
    }

    // 0x1004797c0
    unsigned int World::GetWorldFocusLevel() {
        return m_worldFocusLevel;
    }

    // 0x100479800
    shared_ptr<graphics::SkyBox>* World::GetSkyBox() {
        return (shared_ptr<graphics::SkyBox>*)m_skyBox;
    }

    // 0x10047c8b0
    void World::DebugSetPickingCounts(unsigned int arg1, unsigned int arg2) {
        field_753760 = arg1;
        field_753764 = arg2;
    }

    // 0x10047e3d0
    int* World::GetCentreSquarePosition() const {
        return (int*)&field_81720;
    }

    // 0x1004918c0
    bool World::IsTargetMapSquare(int arg1, int arg2) const {
        return GetTargetMapSquarePriority(arg1, arg2) != 2147483647;
    }

} // namespace jag::game
