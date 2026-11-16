// libs/game/runetek5/scene/World.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class World {
    public:
        // virtual methods in vtable order
        virtual void DestroyRenderingResources();
        virtual ~World();
        GetSceneManager() const;
        GetDynamicPointLightManager();
        GetWorldRenderer();
        void GetRootNode();
        GetDetachedParticleSystems();
        void GetLastFrustum() const;
        uint GetBuildMode() const;
        void GetLoadingIncludesTextures() const;
        void GetLoadingIncludesShaders() const;
        RT7Core* GetRT7Core();
        GetLODSettings();
        GetLODSettings() const;
        HaveAllMapSquaresFinishedHighPriorityZones() const;
        GetBuiltZones() const;
        void AddPointLight(unsigned int, shared_ptr<LightSource> const&);
        GetHeightMap() const;
        GetLinkMap() const;
        void GetLastCameraProjectionMatrix() const;
        void GetLastViewProjectionMatrix() const;
        void GetLastCameraViewMatrix() const;
        GetRemoveRoof();
        IsRemoveRoofSelective() const;
        int GetMaxRenderLevel() const;
        GetMainSceneDrawn() const;
        World(SceneManager*, graphics::RT7Core*, Js5ResourceProvider*, ConfigProvider*, PlayerVarDomain*, AssetBuilder*,
              shared_ptr<WorldAreaType> const&, BuildMode, int, int, int, int,
              shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul,
                                             true, eastl::allocator>> const&);
        void CreateWorld();
        void ClearPickables();
        void Clear();
        void DestructAllMapSquares();
        void Reset();
        void GetEffectManager() const;
        GetMapSquare(int, int) const;
        GetMapSquareStatus(int, int) const;
        void GetClosestMapSquare(math::Vector3T<float> const&) const;
        void GetClosestMapSquare(int, int, int, int, int, int);
        ulong IsTerrainBuilt();
        void SetTerrainBlending(bool);
        void OnAllMapSquares(std::function<void(shared_ptr<MapSquare>&)>);
        void RebuildArea(int, int, int, int);
        GetTargetMapSquarePriority(int, int) const;
        GetIrradianceCache();
        RebuildExistingRegion(
            shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul,
                                           true, eastl::allocator>> const&,
            BuildMode, bool);
        BuildClientCompositeData(
            shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul,
                                           true, eastl::allocator>> const&,
            int, int);
        BuildNonRegionComposite(shared_ptr<MapSquareWorldAreaCompositeInner>&, int, int);
        void MainLogic(unsigned int);
        void ApplyPointLightAABBChanges();
        void MapSquareMainLogic(unsigned int);
        void UpdateLightFlicker();
        void RemoveUnusedPointLights(int);
        void OnRingMapSquares(int, std::function<void(shared_ptr<MapSquare>&)>);
        void MapSquareMainDraw(unsigned int);
        void GetPointLight(unsigned int);
        void AddPickableEntities(unsigned int, graphics::GraphNode*, int);
        MainDraw(render::RenderTargets*, unsigned int, ViewTransforms const&, float, float, render::Viewport const&,
                 CoordFine const&, int, int, unsigned int);
        void UpdateLightProbeSH();
        GetCentreSquare() const;
        GetCurrentEnvironmentSettings() const;
        void CheckEnvironmentParameters(CoordFine const&, float, float);
        void RenderDebug(render::Viewport const&);
        void UpdatePickableEntities(unsigned int, CoordFine const&);
        void RenderLightProbeEnvMaps(unsigned int, unsigned int, int, LoadingState);
        void SetNewEnvironmentParameters(MapEnvironmentSettings const&, bool, long long, float, float);
        void GetLightProbeManager();
        void UpdateFogEffect(float, float, unsigned int);
        void GetLastCameraPosition() const;
        GetLastCameraFocusPosition() const;
        GetDefaultEnvironmentMap() const;
        void Preload(unsigned int, math::Vector3T<float> const&, eastl::bitset<6ul, unsigned long long> const&);
        int Build(unsigned int, math::Vector3T<float> const&, eastl::bitset<6ul, unsigned long long> const&,
                  LoadingState);
        void CalculateTargetBuildAreaAndPriority(math::Vector3T<float> const&);
        BuildMapSquare(TargetMapSquare const&, math::Vector3T<float> const&, bool, unsigned int,
                       eastl::bitset<6ul, unsigned long long> const&, LoadingState);
        void RemoveExcessMapSquares();
        void SetEntityLoadMetrics(eastl::bitset<6ul, unsigned long long> const&);
        void GetNumMapSquaresLoaded(LoadingState) const;
        ulong HighPriorityMapSquaresConstructed();
        void ResetMapSquare(MapSquareStatus&);
        void DestructMapSquare(shared_ptr<MapSquare>&);
        GetEntityLoadImportance(EntityType) const;
        void DestructImpostorMapSquares();
        void NotifyPickableEntities();
        GetPickableEntities() const;
        void TestPickableEntity(eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>&,
                                eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>&, int&, int&,
                                shared_ptr<Entity> const&, math::Point<int> const&, int, unsigned int);
        void AddPickableEntity(shared_ptr<Entity> const&);
        void RemoveRoofSelective(unsigned int, CoordGrid const&);
        void PaintRemoveRoofArea(CoordGrid const&);
        void AddBuiltZone(CoordGrid const&, int, int);
        void AddBuiltZone(LocationContainer const&);
        ChangeLocation(int, int, int, int, LocData const&);
        void HideLocations(LocShape);
        void UnhideLocations(LocShape);
        void HideWalls();
        void ShowWalls();
        void HideWallDecor();
        void ShowWallDecor();
        void HideGroundDecor();
        void ShowGroundDecor();
        void HideSceneryRoofing();
        void ShowSceneryRoofing();
        void SetMultiLocState(int, int);
        void IncrementMultiLocState(int);
        void IncrementAllMultiLocStates();
        void RebuildLightIndices();
        GetPointLightsByScriptID(unsigned int) const;
        void SetBrightnessOffset(option::EnumBrightness);
        IsGroundDecorHidden() const;
        GetTemporaryMap() const;
        GetWorldArea();
        GetClearColour() const;
        GetSceneGraphRoot();
        GetPlayerCameraOffsetScale() const;
        GetMapSquares() const;
        int GetMapSquareWidth() const;
        int GetMapSquareLength() const;
        void GetMapSquare(MapSquare::MapSquarePos const&) const;
        uint GetMapSquareMinX() const;
        int GetMapSquareMaxX() const;
        int GetMapSquareMinZ() const;
        int GetMapSquareMaxZ() const;
        uint GetWorldFocusLevel();
        GetSkyBox();
        void DebugSetPickingCounts(unsigned int, unsigned int);
        GetCentreSquarePosition() const;
        bool IsTargetMapSquare(int, int) const;
        static /* 4 bytes */ m_gammaCorrectEnvInputs; // = 1
        static float /* 4 bytes */ m_showMaxLevel;    // = 3.0f
        static /* 1 bytes */ m_enableImpostors;       // = 1
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullWorld;
        static /* 1 bytes */ m_showPointLights;
        static /* 1 bytes */ m_showOccludedPointLights;
        static /* 1 bytes */ m_showFloorGrid;
        static /* 1 bytes */ m_showFloorGridUseWaterHeight;
        static /* 1 bytes */ m_showHeightMap;
        static /* 1 bytes */ m_showHeightMapRest;
        static /* 1 bytes */ m_showWaterHeights;
        static /* 1 bytes */ m_showUnderworldMap;
        static /* 1 bytes */ m_showCurrentSkyBoxMap;
        static /* 1 bytes */ m_showDefaultEnvironmentMap;
        static /* 1 bytes */ m_showCurrentEnvironmentMap;
        static /* 1 bytes */ m_debugPicking;
        static /* 1 bytes */ m_debugRemoveRoof;
        static /* 3 bytes */ m_debugRemoveRoofLabels;
        static /* 4 bytes */ m_showMinLevel;

        // data members, from how the methods use this: 6596224 bytes
        undefined** field_0;                          // offset 0, vtable pointer
        shared_ptr<oldscape::dash3d::Decor>* field_8; // offset 8
        char _unknown_16[8];
        SceneManager* field_24;                                                          // offset 24
        RT7Core* m_pRT7Core;                                                             // offset 32
        Js5ResourceProvider* field_40;                                                   // offset 40
        ConfigProvider* field_48;                                                        // offset 48
        AssetBuilder* field_56;                                                          // offset 56
        unique_ptr<LightProbeManager, std::default_delete<LightProbeManager>>* field_64; // offset 64
        char _unknown_72[88];
        undefined1 field_160; // offset 160
        char _unknown_161[65567];
        shared_ptr m_worldArea; // offset 65728
        char _unknown_65744[80];
        shared_ptr m_skyBox; // offset 65824
        char _unknown_65840[16];
        SceneRenderManager m_worldRenderer; // offset 65856
        char _unknown_80920[664];
        undefined1 field_81584; // offset 81584
        char _unknown_81585[3];
        uint m_mapSquareMinX;   // offset 81588
        int m_mapSquareMinZ;    // offset 81592
        int m_mapSquareMaxX;    // offset 81596
        int m_mapSquareMaxZ;    // offset 81600
        int field_81604;        // offset 81604
        int field_81608;        // offset 81608
        int field_81612;        // offset 81612
        int field_81616;        // offset 81616
        undefined1 field_81620; // offset 81620
        char _unknown_81621[35];
        int m_mapSquareWidth;  // offset 81656
        int m_mapSquareLength; // offset 81660
        int field_81664;       // offset 81664
        char _unknown_81668[36];
        shared_ptr m_centreSquare; // offset 81704
        char _unknown_81720[8];
        undefined8 field_81728; // offset 81728
        char _unknown_81736[8];
        AABB m_linkMap; // offset 81744
        char _unknown_81768[589984];
        undefined1 m_removeRoofSelective; // offset 671752
        undefined1 m_groundDecorHidden;   // offset 671753
        bool field_671754;                // offset 671754
        char _unknown_671755[5];
        shared_ptr field_671760;   // offset 671760
        uint m_buildMode;          // offset 671776
        undefined1 m_temporaryMap; // offset 671780
        char _unknown_671781[81963];
        bool field_753744; // offset 753744
        char _unknown_753745[7];
        undefined8 field_753752;       // offset 753752
        uint field_753760;             // offset 753760
        uint field_753764;             // offset 753764
        shared_ptr m_pickableEntities; // offset 753768
        char _unknown_753784[32792];
        undefined4 field_786576; // offset 786576
        char _unknown_786580[4];
        shared_ptr m_currentEnvironmentSettings; // offset 786584
        shared_ptr field_786600;                 // offset 786600
        char _unknown_786616[164032];
        shared_ptr field_950648;            // offset 950648
        shared_ptr m_defaultEnvironmentMap; // offset 950664
        char _unknown_950680[56];
        int field_950736; // offset 950736
        char _unknown_950740[24];
        undefined1 field_950764; // offset 950764
        char _unknown_950765[3];
        float field_950768;          // offset 950768
        undefined1 m_mainSceneDrawn; // offset 950772
        char _unknown_950773[15];
        int m_maxRenderLevel;                 // offset 950788
        uint m_worldFocusLevel;               // offset 950792
        undefined4 m_playerCameraOffsetScale; // offset 950796
        undefined8 field_950800;              // offset 950800
        char _unknown_950808[5645416];
    };

    // 0x1003c11f0, 16 bytes, inline, placed by class name and debug map
    // World::GetWorldRenderer()
    undefined1* World::GetWorldRenderer() {
        return m_worldRenderer;
    }

    // 0x1003edd00, 32 bytes, inline, placed by class name
    // World::GetRootNode()
    void World::GetRootNode() {
        (&field_65744)->GetRoot();
    }

    // 0x1003f2fe0, 16 bytes, inline, placed by class name
    // World::GetDetachedParticleSystems()
    undefined1* World::GetDetachedParticleSystems() {
        return &field_80976;
    }

    // 0x1003fa230, 32 bytes, inline, placed by class name
    // World::GetLastFrustum() const
    void World::GetLastFrustum() {
        m_worldRenderer->GetPrevViewFrustum();
    }

    // 0x10040e6e0, 16 bytes, inline, placed by class name
    // World::GetBuildMode() const
    uint World::GetBuildMode() {
        return m_buildMode;
    }

    // 0x100410f10, 32 bytes, inline, placed by class name
    // World::GetLoadingIncludesTextures() const
    void World::GetLoadingIncludesTextures() {
        (&field_753752, 3)->test();
    }

    // 0x100410f30, 32 bytes, inline, placed by class name
    // World::GetLoadingIncludesShaders() const
    void World::GetLoadingIncludesShaders() {
        (&field_753752, 4)->test();
    }

    // 0x100411380, 64 bytes, inline, placed by class name
    // World::GetRT7Core()
    RT7Core* World::GetRT7Core() {
        if (m_pRT7Core == (RT7Core*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_rt7Core != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/World.h",
                544, (char*)0);
        }
        return m_pRT7Core;
    }

    // 0x100411c00, 16 bytes, inline, placed by class name
    // World::GetLODSettings()
    /* World::GetLODSettings() const */

    undefined1* World::GetLODSettings() {
        return &field_950740;
    }

    // 0x100414af0, 16 bytes, inline, placed by class name
    // World::HaveAllMapSquaresFinishedHighPriorityZones() const
    undefined1 World::HaveAllMapSquaresFinishedHighPriorityZones() {
        return field_81620;
    }

    // 0x100414b30, 16 bytes, inline, placed by class name
    // World::GetBuiltZones() const
    undefined1* World::GetBuiltZones() {
        return &field_671784;
    }

    // 0x1004150e0, 112 bytes, inline, placed by class name
    // World::AddPointLight(unsigned int, shared_ptr<LightSource> const&)
    void World::AddPointLight(uint param_1, shared_ptr* param_2) {
        shared_ptr* psVar2;
        shared_ptr<LightSource>* this_00;
        uint local_1c;

        local_1c = param_1;
        psVar2 = (shared_ptr*)GetPointLight(this, param_1);
        if (!operator==(psVar2, (_func_decltype_nullptr*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "GetPointLight(id) == nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/World.h",
                297, (char*)0);
        }
        this_00 = (shared_ptr<LightSource>*)eastl::hash_map<
            unsigned int, shared_ptr<LightSource>, eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
            eastl::fixed_hashtable_allocator<4098ul, 32ul, 4096ul, 8ul, 0ul, true, eastl::allocator>, false>::
        operator[](
            (hash_map<unsigned int, shared_ptr<LightSource>, eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                      eastl::fixed_hashtable_allocator<4098ul, 32ul, 4096ul, 8ul, 0ul, true, eastl::allocator>,
                      false>*)&field_786616,
            &local_1c);
        shared_ptr<LightSource>::operator=(this_00, param_2);
    }

    // 0x10042d490, 16 bytes, inline, placed by class name
    // World::GetHeightMap() const
    undefined1* World::GetHeightMap() {
        return &field_81736;
    }

    // 0x10042d520, 16 bytes, inline, placed by class name
    // World::GetLinkMap() const
    undefined1* World::GetLinkMap() {
        return m_linkMap;
    }

    // 0x100430480, 32 bytes, inline, placed by class name
    // World::GetLastCameraProjectionMatrix() const
    void World::GetLastCameraProjectionMatrix() {
        WorldmapAreaMetadata* this_00;

        this_00 = (WorldmapAreaMetadata*)m_worldRenderer->GetPrevViewTransforms();
        this_00->GetOrigin();
    }

    // 0x1004304a0, 32 bytes, inline, placed by class name
    // World::GetLastViewProjectionMatrix() const
    void World::GetLastViewProjectionMatrix() {
        RT7Core* this_00;

        this_00 = (RT7Core*)m_worldRenderer->GetPrevViewTransforms();
        this_00->GetImmediateThreadPool();
    }

    // 0x1004304c0, 32 bytes, inline, placed by class name
    // World::GetLastCameraViewMatrix() const
    void World::GetLastCameraViewMatrix() {
        NXTPixToolkit* this_00;

        this_00 = (NXTPixToolkit*)m_worldRenderer->GetPrevViewTransforms();
        this_00->GetScreen();
    }

    // 0x100430690, 16 bytes, inline, placed by class name
    // World::GetRemoveRoof()
    undefined1* World::GetRemoveRoof() {
        return &field_81768;
    }

    // 0x1004306b0, 16 bytes, inline, placed by class name
    // World::IsRemoveRoofSelective() const
    undefined1 World::IsRemoveRoofSelective() {
        return m_removeRoofSelective;
    }

    // 0x100430b00, 16 bytes, inline, placed by class name
    // World::GetMaxRenderLevel() const
    int World::GetMaxRenderLevel() {
        return m_maxRenderLevel;
    }

    // 0x100430db0, 16 bytes, inline, placed by class name
    // World::GetMainSceneDrawn() const
    undefined1 World::GetMainSceneDrawn() {
        return m_mainSceneDrawn;
    }

    // 0x10043ed70, 48 bytes, inline, placed by class name
    // World::GetPointLight(unsigned int)
    void World::GetPointLight(uint param_1) {
        uint local_c;

        local_c = param_1;
        eastl::hash_map<unsigned int, shared_ptr<LightSource>, eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                        eastl::fixed_hashtable_allocator<4098ul, 32ul, 4096ul, 8ul, 0ul, true, eastl::allocator>,
                        false>::
        operator[](
            (hash_map<unsigned int, shared_ptr<LightSource>, eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                      eastl::fixed_hashtable_allocator<4098ul, 32ul, 4096ul, 8ul, 0ul, true, eastl::allocator>,
                      false>*)&field_786616,
            &local_c);
    }

    // 0x10043f1a0, 16 bytes, inline, placed by class name
    // World::GetCentreSquare() const
    undefined1* World::GetCentreSquare() {
        return m_centreSquare;
    }

    // 0x10043f1b0, 16 bytes, inline, placed by class name
    // World::GetCurrentEnvironmentSettings() const
    undefined1* World::GetCurrentEnvironmentSettings() {
        return m_currentEnvironmentSettings;
    }

    // 0x100441a60, 16 bytes, inline, placed by class name
    // World::GetLightProbeManager()
    void World::GetLightProbeManager() {
        (&field_72)->get();
    }

    // 0x100441b70, 32 bytes, inline, placed by class name
    // World::GetLastCameraPosition() const
    void World::GetLastCameraPosition() {
        Layout* this_00;
        type* in_RSI;

        this_00 = (Layout*)m_worldRenderer->GetPrevViewTransforms();
        eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
    }

    // 0x100441e40, 16 bytes, inline, placed by class name
    // World::GetLastCameraFocusPosition() const
    undefined1* World::GetLastCameraFocusPosition() {
        return &field_950776;
    }

    // 0x100441e60, 16 bytes, inline, placed by class name
    // World::GetDefaultEnvironmentMap() const
    undefined1* World::GetDefaultEnvironmentMap() {
        return m_defaultEnvironmentMap;
    }

    // 0x1004430f0, 16 bytes, inline, placed by class name
    // World::SetEntityLoadMetrics(eastl::bitset<6ul, unsigned long long> const&)
    void World::SetEntityLoadMetrics(bitset* param_1) {
        field_753752 = *(undefined8*)param_1;
    }

    // 0x100443910, 16 bytes, inline, placed by class name
    // World::GetPickableEntities() const
    undefined1* World::GetPickableEntities() {
        return m_pickableEntities;
    }

    // 0x100449390, 16 bytes, inline, placed by class name
    // World::IsGroundDecorHidden() const
    undefined1 World::IsGroundDecorHidden() {
        return m_groundDecorHidden;
    }

    // 0x100450fa0, 48 bytes, inline, placed by class name
    // World::SetTerrainBlending(bool)::$_1::operator()(shared_ptr<MapSquare>&) const
    /* World::SetTerrainBlending(bool)::$_1::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<MapSquare>&)
   const */

    void World::SetTerrainBlending(bool)::$_1::operator()(shared_ptr* param_1) {
        MapSquare* this_00;

        this_00 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)param_1);
        this_00->SetTerrainBlending(*(bool*)*(undefined8*)this);
    }

    // 0x100453410, 80 bytes, inline, placed by class name
    // World::MapSquareMainLogic(unsigned int)::$_4::operator()(shared_ptr<MapSquare>&) const
    /* World::MapSquareMainLogic(unsigned
   int)::$_4::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<MapSquare>&) const */

    void World::MapSquareMainLogic(unsigned int)::$_4::operator()(shared_ptr* param_1) {
        long lVar1;
        MapSquare* pMVar2;
        MapSquarePointLights* this_00;

        lVar1 = *(long*)this;
        pMVar2 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)param_1);
        this_00 = (MapSquarePointLights*)pMVar2->GetMapSquarePointLights();
        pMVar2 = (MapSquare*)param_1->end();
        this_00->MainLogic(pMVar2, *(ConfigProvider**)(lVar1 + 48), *(uint*)(this + 8));
    }

    // 0x100453d50, 48 bytes, inline, placed by class name
    // World::MapSquareMainDraw(unsigned int)::$_5::operator()(shared_ptr<MapSquare>&) const
    /* World::MapSquareMainDraw(unsigned
   int)::$_5::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<MapSquare>&) const */

    void World::MapSquareMainDraw(unsigned int)::$_5::operator()(shared_ptr* param_1) {
        uint uVar1;
        MapSquare* this_00;

        this_00 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)param_1);
        uVar1 = this_00->GetMapSquarePointLights();
        MapSquarePointLights::MainDraw(uVar1);
    }

    // 0x100455b40, 16 bytes, inline, placed by class name
    // World::CalculateTargetBuildAreaAndPriority(math::Vector3T<float> const&)::$_6::operator()(TargetMapSquare const&, TargetMapSquare const&) const
    /* World::CalculateTargetBuildAreaAndPriority(math::Vector3T<float>
   const&)::$_6::TEMPNAMEPLACEHOLDERVALUE(TargetMapSquare const&,
   TargetMapSquare const&) const */

    undefined4 World::CalculateTargetBuildAreaAndPriority(math::Vector3T<float> const&)::$_6::operator()(
        TargetMapSquare* param_1, TargetMapSquare* param_2) {
        return CONCAT31((int3)((uint) * (int*)(param_1 + 8) >> 8), *(int*)(param_1 + 8) < *(int*)(param_2 + 8));
    }

    // 0x100457920, 48 bytes, inline, placed by class name
    // World::HideLocations(LocShape)::$_8::operator()(shared_ptr<MapSquare>&) const
    /* World::HideLocations(LocShape)::$_8::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<MapSquare>&)
   const */

    void World::HideLocations(LocShape)::$_8::operator()(shared_ptr* param_1) {
        MapSquare* pMVar1;

        pMVar1 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)param_1);
        pMVar1->HideLocations(**(undefined1**)this);
    }

    // 0x100458240, 48 bytes, inline, placed by class name
    // World::UnhideLocations(LocShape)::$_9::operator()(shared_ptr<MapSquare>&) const
    /* World::UnhideLocations(LocShape)::$_9::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<MapSquare>&)
   const */

    void World::UnhideLocations(LocShape)::$_9::operator()(shared_ptr* param_1) {
        MapSquare* pMVar1;

        pMVar1 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)param_1);
        pMVar1->UnhideLocations(**(undefined1**)this);
    }

    // 0x100458b60, 48 bytes, inline, placed by class name
    // World::SetMultiLocState(int, int)::$_10::operator()(shared_ptr<MapSquare>&) const
    /* World::SetMultiLocState(int,
   int)::$_10::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<MapSquare>&) const */

    void World::SetMultiLocState(int, int)::$_10::operator()(shared_ptr* param_1) {
        MapSquare* this_00;

        this_00 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)param_1);
        this_00->SetMultiLocState(*(int*)this, *(int*)(this + 4));
    }

    // 0x100459480, 48 bytes, inline, placed by class name
    // World::IncrementMultiLocState(int)::$_11::operator()(shared_ptr<MapSquare>&) const
    /* World::IncrementMultiLocState(int)::$_11::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<MapSquare>&)
   const */

    void World::IncrementMultiLocState(int)::$_11::operator()(shared_ptr* param_1) {
        MapSquare* this_00;

        this_00 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)param_1);
        this_00->IncrementMultiLocState(*(int*)this);
    }

    // 0x100459c20, 32 bytes, inline, placed by class name
    // World::IncrementAllMultiLocStates()::$_12::operator()(shared_ptr<MapSquare>&) const
    /* World::IncrementAllMultiLocStates()::$_12::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<MapSquare>&)
   const */

    void World::IncrementAllMultiLocStates()::$_12::operator()(shared_ptr* param_1) {
        MapSquare* this_00;

        this_00 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this);
        this_00->IncrementAllMultiLocStates();
    }

    // 0x10045a3c0, 32 bytes, inline, placed by class name
    // World::RebuildLightIndices()::$_13::operator()(shared_ptr<MapSquare>&) const
    /* World::RebuildLightIndices()::$_13::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<MapSquare>&)
   const */

    void World::RebuildLightIndices()::$_13::operator()(shared_ptr* param_1) {
        MapSquare* this_00;
        MapSquarePointLights* this_01;

        this_00 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this);
        this_01 = (MapSquarePointLights*)this_00->GetMapSquarePointLights();
        this_01->RequestFullRebuild();
    }

    // 0x10045acd0, 128 bytes, inline, placed by class name
    // World::ApplyPointLightAABBChanges()::$_14::operator()(shared_ptr<MapSquare>&) const
    /* World::ApplyPointLightAABBChanges()::$_14::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<MapSquare>&)
   const */

    void World::ApplyPointLightAABBChanges()::$_14::operator()(shared_ptr* param_1) {
        Layout* this_00;
        Entity* this_01;
        AABB* this_02;
        MapSquare* this_03;
        MapSquarePointLights* this_04;
        AABB* pAVar2;
        AABB* pAVar3;

        this_00 = *(Layout**)this;
        pAVar3 = (AABB*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        pAVar2 = (AABB*)this_00->end();
        while (true) {
            if (pAVar3 == pAVar2) {
                return;
            }
            this_01 = (Entity*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)param_1);
            this_02 = (AABB*)this_01->GetWorldAABB();
            if (this_02->TestIntersection(pAVar3) != '\0')
                break;
            pAVar3 = (AABB*)&pAVar3->field_32;
        }
        this_03 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)param_1);
        this_04 = (MapSquarePointLights*)this_03->GetMapSquarePointLights();
        this_04->RequestDynamicLightSourceUpdate();
    }

    // 0x100461bf0, 16 bytes, inline, placed by class name
    // World::GetTemporaryMap() const
    undefined1 World::GetTemporaryMap() {
        return m_temporaryMap;
    }

    // 0x100462d10, 16 bytes, inline, placed by class name
    // World::GetWorldArea()
    undefined1* World::GetWorldArea() {
        return m_worldArea;
    }

    // 0x100465220, 16 bytes, inline, placed by class name
    // World::GetClearColour() const
    undefined1* World::GetClearColour() {
        return &field_65840;
    }

    // 0x1004654b0, 16 bytes, inline, placed by class name
    // World::GetSceneGraphRoot()
    undefined1* World::GetSceneGraphRoot() {
        return &field_65744;
    }

    // 0x100465ef0, 16 bytes, inline, placed by class name
    // World::GetPlayerCameraOffsetScale() const
    undefined4 World::GetPlayerCameraOffsetScale() {
        return m_playerCameraOffsetScale;
    }

    // 0x1004688b0, 16 bytes, inline, placed by class name
    // World::GetMapSquares() const
    undefined1* World::GetMapSquares() {
        return &field_81672;
    }

    // 0x1004688d0, 16 bytes, inline, placed by class name
    // World::GetMapSquareWidth() const
    int World::GetMapSquareWidth() {
        return m_mapSquareWidth;
    }

    // 0x1004688e0, 16 bytes, inline, placed by class name
    // World::GetMapSquareLength() const
    int World::GetMapSquareLength() {
        return m_mapSquareLength;
    }

    // 0x1004784a0, 32 bytes, inline, placed by class name
    // World::GetMapSquare(MapSquare::MapSquarePos const&) const
    void World::GetMapSquare(MapSquarePos* param_1) {
        GetMapSquare(this, (uint)(byte)param_1->field_0, (uint)param_1->field_1);
    }

    // 0x100478ac0, 16 bytes, inline, placed by class name
    // World::GetMapSquareMinX() const
    uint World::GetMapSquareMinX() {
        return m_mapSquareMinX;
    }

    // 0x100478ad0, 16 bytes, inline, placed by class name
    // World::GetMapSquareMaxX() const
    int World::GetMapSquareMaxX() {
        return m_mapSquareMaxX;
    }

    // 0x100478ae0, 16 bytes, inline, placed by class name
    // World::GetMapSquareMinZ() const
    int World::GetMapSquareMinZ() {
        return m_mapSquareMinZ;
    }

    // 0x100478af0, 16 bytes, inline, placed by class name
    // World::GetMapSquareMaxZ() const
    int World::GetMapSquareMaxZ() {
        return m_mapSquareMaxZ;
    }

    // 0x1004797c0, 16 bytes, inline, placed by class name
    // World::GetWorldFocusLevel()
    uint World::GetWorldFocusLevel() {
        return m_worldFocusLevel;
    }

    // 0x100479800, 16 bytes, inline, placed by class name
    // World::GetSkyBox()
    undefined1* World::GetSkyBox() {
        return m_skyBox;
    }

    // 0x10047c8b0, 32 bytes, inline, placed by class name
    // World::DebugSetPickingCounts(unsigned int, unsigned int)
    void World::DebugSetPickingCounts(uint param_1, uint param_2) {
        field_753760 = param_1;
        field_753764 = param_2;
    }

    // 0x10047e3d0, 16 bytes, inline, placed by class name
    // World::GetCentreSquarePosition() const
    undefined1* World::GetCentreSquarePosition() {
        return &field_81720;
    }

    // 0x1004918c0, 32 bytes, inline, placed by class name
    // World::IsTargetMapSquare(int, int) const
    bool World::IsTargetMapSquare(int param_1, int param_2) {
        return GetTargetMapSquarePriority(this, param_1, param_2) != 2147483647;
    }

} // namespace jag::game
