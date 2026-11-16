// libs/game/runetek5/scene/World.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "World.h"

namespace jag::game {
    // 0x100f38f28, 4 bytes, __data
    World::m_gammaCorrectEnvInputs = 1;

    // 0x100f38f2c, 4 bytes, __data
    float World::m_showMaxLevel = 3.0f;

    // 0x100f38f30, 1 bytes, __data
    World::m_enableImpostors = 1;

    // 0x1039b4ea0, 16 bytes, __common; set at startup by ___cxx_global_var_init.17
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> World::NullWorld;

    // 0x1039b4eb0, 1 bytes, __common; zero-initialised
    World::m_showPointLights;

    // 0x1039b4eb1, 1 bytes, __common; zero-initialised
    World::m_showOccludedPointLights;

    // 0x1039b4eb2, 1 bytes, __common; zero-initialised
    World::m_showFloorGrid;

    // 0x1039b4eb3, 1 bytes, __common; zero-initialised
    World::m_showFloorGridUseWaterHeight;

    // 0x1039b4eb4, 1 bytes, __common; zero-initialised
    World::m_showHeightMap;

    // 0x1039b4eb5, 1 bytes, __common; zero-initialised
    World::m_showHeightMapRest;

    // 0x1039b4eb6, 1 bytes, __common; zero-initialised
    World::m_showWaterHeights;

    // 0x1039b4eb7, 1 bytes, __common; zero-initialised
    World::m_showUnderworldMap;

    // 0x1039b4eb8, 1 bytes, __common; zero-initialised
    World::m_showCurrentSkyBoxMap;

    // 0x1039b4eb9, 1 bytes, __common; zero-initialised
    World::m_showDefaultEnvironmentMap;

    // 0x1039b4eba, 1 bytes, __common; zero-initialised
    World::m_showCurrentEnvironmentMap;

    // 0x1039b4ebb, 1 bytes, __common; zero-initialised
    World::m_debugPicking;

    // 0x1039b4ebc, 1 bytes, __common; zero-initialised
    World::m_debugRemoveRoof;

    // 0x1039b4ebd, 3 bytes, __common; zero-initialised
    World::m_debugRemoveRoofLabels;

    // 0x1039b4ec0, 4 bytes, __common; zero-initialised
    World::m_showMinLevel;

    // 0x100016cf0: the linker folded this into eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator, eastl::use_first<eastl::pair<int const, unsigned int> >, eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::size() const, which has identical code
    World::GetSceneManager() const;

    // 0x100102fc0: the linker folded this into oldscape::rs2lib::InputField::GetPlaceholderContents() const, which has identical code
    World::GetDynamicPointLightManager();

    // 0x100411c00: the linker folded this into World::GetLODSettings(), which has identical code
    World::GetLODSettings() const;

    // 0x10043c800, 1456 bytes, base-object constructor, placed by class name and debug map
    // World::World(SceneManager*, graphics::RT7Core*, Js5ResourceProvider*, ConfigProvider*, PlayerVarDomain*, AssetBuilder*, shared_ptr<WorldAreaType> const&, BuildMode, int, int, int, int, shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true, eastl::allocator> > const&)
    void World::World(SceneManager* param_1, RT7Core* param_2, Js5ResourceProvider* param_3, ConfigProvider* param_4,
                      unique_ptr<LightProbeManager, std::default_delete<LightProbeManager>>* param_5,
                      AssetBuilder* param_6, shared_ptr* param_7, uint param_9, uint param_10, int param_11,
                      int param_12, int param_13, shared_ptr* param_14) {
        RT7Core* pRVar1;
        LightProbeManager* this_00;
        EffectManager* pEVar2;
        _func_decltype_nullptr* p_Var3;
        hash* phVar4;
        allocator local_110[8];
        RT7Core* local_108;
        SceneManager* local_100;
        Js5ResourceProvider* local_f8;
        ConfigProvider* local_f0;
        shared_ptr<oldscape::dash3d::Decor>** local_e8;
        undefined1* local_e0;
        undefined1* local_d8;
        undefined1* local_d0;
        undefined1* local_c8;
        undefined1* local_c0;
        undefined1* local_b8;
        undefined1* local_b0;
        undefined1* local_a8;
        undefined1* local_a0;
        undefined1* local_98;
        undefined1* local_90;
        undefined1* local_88;
        undefined1* local_80;
        undefined1* local_78;
        undefined1* local_70;
        undefined1* local_68;
        undefined1* local_60;
        undefined1* local_58;
        undefined1* local_50;
        unique_ptr<LightProbeManager, std::default_delete<LightProbeManager>>* local_48;
        hash local_40[8];
        equal_to local_38[8];

        local_e8 = &field_8;
        local_48 = param_5;
        new (local_e8) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new (this) render::RenderResourceHolder();
        field_0 = &PTR__AutoSingleton_100f00218;
        field_24 = param_1;
        m_pRT7Core = param_2;
        field_40 = param_3;
        field_48 = param_4;
        field_56 = param_6;
        field_64 = local_48;
        local_48 = (unique_ptr<LightProbeManager, std::default_delete<LightProbeManager>>*)&field_72;
        local_108 = param_2;
        local_100 = param_1;
        local_f8 = param_3;
        local_f0 = param_4;
        std::unique_ptr<LightProbeManager, std::default_delete<LightProbeManager>>::unique_ptr<true, void>(local_48);
        new (&field_80) DynamicPointLightManager();
        local_e0 = &field_80;
        new (&field_160) RemoveRoofPaintingProgress();
        pRVar1 = local_108;
        local_d8 = &field_65712;
        new (local_d8) SkyBoxLoader(local_108);
        local_d0 = m_worldArea;
        new (local_d0) shared_ptr<oldscape::dash3d::Decor>(param_7);
        local_c8 = &field_65744;
        new (local_c8) graphics::GraphRoot();
        local_c0 = m_skyBox;
        new (local_c0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_7);
        new (&field_65840) math::Vector4T<float>();
        local_b8 = m_worldRenderer;
        new (local_b8) SceneRenderManager(pRVar1, 2048, 0);
        local_b0 = &field_80976;
        new (local_b0) graphics::DetachedParticleSystemsDrawable();
        p_Var3 = (_func_decltype_nullptr*)(ulong)param_10;
        field_81584 = 1;
        m_mapSquareMinX = param_10;
        m_mapSquareMinZ = param_11;
        m_mapSquareMaxX = param_12;
        m_mapSquareMaxZ = param_13;
        field_81620 = 0;
        local_a8 = &field_81624;
        new (local_a8) eastl::vector<TargetMapSquare, eastl::allocator>();
        local_a0 = &field_81672;
        new (local_a0) eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>();
        local_98 = m_centreSquare;
        new (local_98) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var3);
        new (&field_81720) math::Vector2T<int>();
        field_81728 = 18446744073709551615;
        new (&field_81736, this) HeightMap();
        new (m_linkMap) oldscape::dash3d::ModelLit::AABB();
        local_90 = &field_81768;
        new (local_90) RemoveRoof();
        m_removeRoofSelective = 0;
        m_groundDecorHidden = 0;
        field_671754 = true;
        local_88 = field_671760;
        new (local_88) shared_ptr<oldscape::dash3d::Decor>(param_14);
        m_buildMode = param_9;
        *(undefined2*)&m_temporaryMap = 0;
        new (&field_671784) eastl::fixed_vector<CoordGridSize, 4096ul, true, eastl::allocator>();
        field_753744 = true;
        local_80 = &field_671784;
        new (&field_753752) eastl::bitset<56ul, unsigned long long>();
        field_753760 = 0;
        field_753764 = 0;
        new (m_pickableEntities) eastl::fixed_vector<shared_ptr<Entity>, 2048ul, true, eastl::allocator>();
        field_786576 = 4294967295;
        local_70 = m_currentEnvironmentSettings;
        local_78 = m_pickableEntities;
        new (local_70) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_14);
        local_68 = field_786600;
        new (local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_14);
        local_60 = &field_786616;
        phVar4 = local_40;
        new (local_60)
            eastl::fixed_hash_map<unsigned int, shared_ptr<LightSource>, 4096ul, 4097ul, true,
                                  eastl::hash<unsigned int>, eastl::equal_to<unsigned int>, false, eastl::allocator>(
                phVar4, local_38);
        local_58 = &field_950616;
        new (local_58) eastl::vector<shared_ptr<LightSource>, eastl::allocator>();
        local_50 = field_950648;
        new (local_50) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(phVar4);
        new (m_defaultEnvironmentMap, (_func_decltype_nullptr*)phVar4)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        eastl::allocator::allocator(local_110, "EASTL hash_multimap");
        new (&field_950680, local_110)
            eastl::hash_multimap<unsigned long, MapSquareEnvIrradianceInfo, eastl::hash<unsigned long>,
                                 eastl::equal_to<unsigned long>, eastl::allocator, false>();
        field_950736 = -1;
        new (&field_950740) LODSettings();
        field_950764 = 0;
        field_950768 = 0.0;
        m_mainSceneDrawn = 0;
        new (&field_950776) math::Vector3T<int>();
        m_maxRenderLevel = 4;
        m_worldFocusLevel = 0;
        m_playerCameraOffsetScale = 1065353216;
        field_950800 = 0;
        if (((local_100 == (SceneManager*)0) || (local_f8 == (Js5ResourceProvider*)0)) ||
            (local_f0 == (ConfigProvider*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "sceneManager && rt7Core && resourceProvider && configProvider",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/World.cpp",
                109, (char*)0);
        }
        this_00 = operator_new(1008);
        pEVar2 = (EffectManager*)field_24->GetEffectManager();
        LightProbeManager::LightProbeManager(this_00, pRVar1, pEVar2, this);
        std::unique_ptr<LightProbeManager, std::default_delete<LightProbeManager>>::reset(local_48, this_00);
        CreateWorld(this);
    }

    // 0x10043cec0, 336 bytes, placed by class name
    // World::CreateWorld()
    void World::CreateWorld() {
        undefined1* this_00;
        int iVar1;
        vector<MapSquareStatus, eastl::allocator>* this_01;
        vector<MapSquareStatus, eastl::allocator>* pvVar2;
        Drawable* pDVar3;
        int iVar4;
        long lVar5;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_38[16];

        lVar5 = (long)m_mapSquareMaxX - (long)(int)m_mapSquareMinX;
        iVar4 = (int)lVar5;
        m_mapSquareWidth = iVar4;
        iVar1 = m_mapSquareMaxZ - m_mapSquareMinZ;
        m_mapSquareLength = iVar1;
        if (iVar1 < iVar4) {
            iVar1 = iVar4;
        }
        field_81664 = iVar1;
        this_00 = &field_81672;
        this_00->resize(lVar5 + 1);
        this_01 = (vector<MapSquareStatus, eastl::allocator>*)this_00->HeapBeginPtr();
        pvVar2 = (vector<MapSquareStatus, eastl::allocator>*)this_00->end();
        for (; this_01 != pvVar2; this_01 = this_01 + 32) {
            eastl::vector<MapSquareStatus, eastl::allocator>::resize(this_01, (long)m_mapSquareLength + 1);
        }
        (m_linkMap, (vector*)this_00, m_mapSquareMinX, m_mapSquareMaxX, m_mapSquareMinZ, m_mapSquareMaxZ)->Setup();
        iVar1 = m_pRT7Core->GetSkyBoxManager();
        local_38->RegisterSkyBox(iVar1);
        shared_ptr<graphics::SkyBox>::operator=((shared_ptr<graphics::SkyBox>*)m_skyBox, (shared_ptr*)local_38);
        local_38->~shared_ptr();
        pDVar3 = (Drawable*)m_skyBox->end();
        (m_worldRenderer, pDVar3)->AddDrawable();
        (m_worldRenderer, (Drawable*)&field_80976)->AddDrawable();
    }

    // 0x10043d0b0, 96 bytes, complete-object constructor, placed by class name
    // World::World(SceneManager*, graphics::RT7Core*, Js5ResourceProvider*, ConfigProvider*, PlayerVarDomain*, AssetBuilder*, shared_ptr<WorldAreaType> const&, BuildMode, int, int, int, int, shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true, eastl::allocator> > const&)
    void World::World() {
        World();
    }

    // 0x10043d110, 592 bytes, base-object destructor, placed by class name
    // World::~World()
    void World::~World() {
        field_0 = &PTR__AutoSingleton_100f00218;
        DestroyRenderingResources(this);
        (&field_950680)->~hash_multimap();
        m_defaultEnvironmentMap->~shared_ptr();
        field_950648->~shared_ptr();
        (&field_950616)->~vector();
        (&field_786616)->~fixed_hash_map();
        field_786600->~shared_ptr();
        m_currentEnvironmentSettings->~shared_ptr();
        m_pickableEntities->~fixed_vector();
        (&field_671784)->~fixed_vector();
        field_671760->~shared_ptr();
        (&field_81768)->~RemoveRoof();
        m_centreSquare->~shared_ptr();
        (&field_81672)->~vector();
        (&field_81624)->~vector();
        (&field_80976)->~DetachedParticleSystemsDrawable();
        m_worldRenderer->~SceneRenderManager();
        m_skyBox->~shared_ptr();
        (&field_65744)->~GraphRoot();
        m_worldArea->~shared_ptr();
        (&field_65712)->~SkyBoxLoader();
        (&field_80)->~DynamicPointLightManager();
        (&field_72)->~unique_ptr();
        (&field_8)->~enable_shared_from_this();
    }

    // 0x10043d360, 16 bytes, complete-object destructor, placed by class name
    // World::~World(): jumps straight to the base-object destructor

    // 0x10043d370, 32 bytes, deleting destructor, placed by class name
    // World::~World()
    void World::~World() {
        ~World(this);
        operator_delete(this);
    }

    // 0x10043d390, 128 bytes, placed by class name
    // World::DestroyRenderingResources()
    void World::DestroyRenderingResources() {
        GraphNode* this_00;
        SkyBox* this_01;
        char* pcVar1;
        AutoSingleton<ShaderThreadPoolSingleton> local_18[8];

        pcVar1 = "World_Resources";
        local_18->~AutoSingleton();
        this_00 = (GraphNode*)(&field_65744)->GetRoot();
        graphics::GraphNode::OnRecursive<World::DestroyRenderingResources()::__0>(this_00, (__0*)pcVar1);
        shared_ptr<render::TextureCube>::reset();
        shared_ptr<render::TextureCube>::reset();
        this_01 = (SkyBox*)shared_ptr<graphics::SkyBox>::operator->((shared_ptr<graphics::SkyBox>*)m_skyBox);
        this_01->DestroyRenderingResources();
        shared_ptr<MapEnvironmentSettings>::reset();
        shared_ptr<MapEnvironmentSettings>::reset();
    }

    // 0x10043d5b0, 32 bytes, placed by class name
    // World::ClearPickables()
    void World::ClearPickables() {
        m_pickableEntities->clear();
    }

    // 0x10043d5d0, 320 bytes, placed by class name
    // World::Clear()
    void World::Clear() {
        undefined1* this_00;
        LightProbeManager* this_01;
        Drawable* pDVar1;
        SkyBoxManager* this_02;
        long* plVar3;
        shared_ptr in_stack_ffffffffffffffb8;
        shared_ptr<oldscape::dash3d::Decor> asStack_36[6];

        ClearPickables(this);
        this_00 = m_worldRenderer;
        this_00->Clear();
        DestructAllMapSquares(this);
        (&field_81672)->clear();
        (&field_65744)->Reset();
        shared_ptr<render::TextureCube>::reset();
        shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true,
                                       eastl::allocator>>::reset();
        if (m_centreSquare->operator_cast_to_bool()) {
            plVar3 = (long*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)m_centreSquare);
            (**(code**)(*plVar3 + 200))(plVar3);
            shared_ptr<MapSquare>::reset();
        }
        this_01 =
            (LightProbeManager*)std::unique_ptr<LightProbeManager, std::default_delete<LightProbeManager>>::operator->(
                (unique_ptr<LightProbeManager, std::default_delete<LightProbeManager>>*)&field_72);
        this_01->Clear();
        (&field_786616)->clear();
        (&field_80)->ClearLights();
        pDVar1 = (Drawable*)m_skyBox->end();
        this_00->RemoveDrawable(pDVar1);
        this_02 = (SkyBoxManager*)m_pRT7Core->GetSkyBoxManager();
        shared_ptr<oldscape::dash3d::Decor>::shared_ptr(asStack_36 + -10, (shared_ptr*)m_skyBox);
        this_02->DestroySkyBox(in_stack_ffffffffffffffb8);
        ((asStack_36 + -10))->~shared_ptr();
        this_00->RemoveDrawable((Drawable*)&field_80976);
    }

    // 0x10043d710, 160 bytes, placed by class name
    // World::DestructAllMapSquares()
    void World::DestructAllMapSquares() {
        Layout* this_00;
        Layout* pLVar1;
        MapSquareStatus* pMVar2;
        MapSquareStatus* pMVar3;

        this_00 = (Layout*)(&field_81672)->HeapBeginPtr();
        pLVar1 = (Layout*)(&field_81672)->end();
        for (; this_00 != pLVar1; this_00 = this_00 + 32) {
            pMVar2 = (MapSquareStatus*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_00);
            pMVar3 = (MapSquareStatus*)this_00->end();
            for (; pMVar2 != pMVar3; pMVar2 = pMVar2 + 1) {
                ResetMapSquare(this, pMVar2);
            }
        }
    }

    // 0x10043d870, 32 bytes, placed by class name
    // World::Reset()
    void World::Reset() {
        Clear(this);
        CreateWorld(this);
    }

    // 0x10043d890, 16 bytes, placed by class name
    // World::GetEffectManager() const
    void World::GetEffectManager() {
        field_24->GetEffectManager();
    }

    // 0x10043d8a0, 144 bytes, placed by class name
    // World::GetMapSquare(int, int) const
    undefined1* World::GetMapSquare(int param_1, int param_2) {
        int iVar1;
        vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>* this_00;
        vector<MapSquareStatus, eastl::allocator>* this_01;
        ulong uVar2;
        int iVar3;
        ulong uVar4;
        undefined1* puVar5;
        undefined1* this_02;

        uVar2 = (long)param_1 - (long)(int)m_mapSquareMinX;
        puVar5 = &MapSquare::NullMapSquare;
        if (-1 < (int)uVar2) {
            uVar4 = (long)param_2 - (long)m_mapSquareMinZ;
            iVar3 = (int)uVar4;
            if (-1 < iVar3) {
                this_02 = &field_81672;
                iVar1 = this_02->size();
                if ((int)uVar2 < iVar1) {
                    this_00 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>*)
                        eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                            (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)this_02,
                            uVar2);
                    iVar1 = eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>,
                                          eastl::allocator>::size(this_00);
                    if (iVar3 < iVar1) {
                        this_01 = (vector<MapSquareStatus, eastl::allocator>*)eastl::
                            vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                                (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)this_02,
                                uVar2);
                        puVar5 =
                            (undefined1*)eastl::vector<MapSquareStatus, eastl::allocator>::operator[](this_01, uVar4);
                    }
                }
            }
        }
        return puVar5;
    }

    // 0x10043d9c0, 144 bytes, placed by class name
    // World::GetMapSquareStatus(int, int) const
    undefined* World::GetMapSquareStatus(int param_1, int param_2) {
        int iVar1;
        vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>* this_00;
        vector<MapSquareStatus, eastl::allocator>* this_01;
        long lVar2;
        ulong uVar3;
        int iVar4;
        ulong uVar5;
        undefined** ppuVar6;
        undefined1* this_02;

        uVar3 = (long)param_1 - (long)(int)m_mapSquareMinX;
        ppuVar6 = &DataStatus::MISSING;
        if (-1 < (int)uVar3) {
            uVar5 = (long)param_2 - (long)m_mapSquareMinZ;
            iVar4 = (int)uVar5;
            if (-1 < iVar4) {
                this_02 = &field_81672;
                iVar1 = this_02->size();
                if ((int)uVar3 < iVar1) {
                    this_00 = (vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>, eastl::allocator>*)
                        eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                            (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)this_02,
                            uVar3);
                    iVar1 = eastl::vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>,
                                          eastl::allocator>::size(this_00);
                    if (iVar4 < iVar1) {
                        this_01 = (vector<MapSquareStatus, eastl::allocator>*)eastl::
                            vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                                (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)this_02,
                                uVar3);
                        lVar2 = eastl::vector<MapSquareStatus, eastl::allocator>::operator[](this_01, uVar5);
                        ppuVar6 = (undefined**)(lVar2 + 16);
                    }
                }
            }
        }
        return *ppuVar6;
    }

    // 0x10043da50, 80 bytes, placed by class name
    // World::GetClosestMapSquare(math::Vector3T<float> const&) const
    void World::GetClosestMapSquare(Vector3T* param_1) {
        float fVar1;
        float* pfVar2;

        pfVar2 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)param_1, 0);
        fVar1 = *pfVar2;
        pfVar2 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)param_1, 2);
        GetMapSquare(this, (int)fVar1 >> 15, (int)*pfVar2 >> 15);
    }

    // 0x10043daa0, 144 bytes, placed by class name
    // World::GetClosestMapSquare(int, int, int, int, int, int)
    void World::GetClosestMapSquare(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        int iVar1;
        int iVar2;
        undefined1 local_50[32];

        new ((local_50 + 16)) math::ColourHSL((float)(param_1 * 64 + param_3 * 128), (float)param_6,
                                              (float)(param_2 * 64 + param_4 * 128));
        new (local_50) CoordFine(param_5, (Vector3T*)(local_50 + 16));
        iVar1 = local_50->GetMapSquareX();
        iVar2 = local_50->GetMapSquareZ();
        GetMapSquare(this, iVar1, iVar2);
    }

    // 0x10043db30, 208 bytes, placed by class name
    // World::IsTerrainBuilt()
    ulong World::IsTerrainBuilt() {
        undefined1* this_00;
        bool bVar1;
        int* piVar3;
        int* piVar4;
        vector<MapSquareStatus, eastl::allocator>* this_01;
        shared_ptr* this_02;
        MapSquare* this_03;
        bool bVar5;

        this_00 = &field_81624;
        piVar3 = (int*)this_00->HeapBeginPtr();
        piVar4 = (int*)this_00->end();
        bVar5 = piVar3 == piVar4;
        if (!bVar5) {
            do {
                this_01 = (vector<MapSquareStatus, eastl::allocator>*)
                    eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                        (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)&field_81672,
                        (long)*piVar3 - (long)(int)m_mapSquareMinX);
                this_02 = (shared_ptr*)eastl::vector<MapSquareStatus, eastl::allocator>::operator[](
                    this_01, (long)piVar3[1] - (long)m_mapSquareMinZ);
                bVar1 = shared_ptr::operator_cast_to_bool(this_02);
                if (!bVar1)
                    break;
                bVar1 = shared_ptr::operator_cast_to_bool(this_02);
                if (bVar1) {
                    this_03 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_02);
                    if (this_03->IsTerrainBuilt() == '\0')
                        break;
                }
                piVar3 = piVar3 + 4;
                bVar5 = piVar3 == piVar4;
            } while (!bVar5);
        }
        return CONCAT71((int7)((ulong)this_00 >> 8), bVar5) & 4294967295;
    }

    // 0x10043dcd0, 144 bytes, placed by class name
    // World::SetTerrainBlending(bool)
    void World::SetTerrainBlending(bool param_1) {
        undefined1 local_59;
        function<void(shared_ptr<MapSquare>&)> local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_59 = param_1;
        if (field_671754 != param_1) {
            field_671754 = param_1;
            std::function<void(shared_ptr<MapSquare>&)>::function<World::SetTerrainBlending(bool)::__1, void>(
                local_58, &local_59);
            OnAllMapSquares(this, local_58);
            std::function<void(shared_ptr<MapSquare>&)>::~function(local_58);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10043dd60, 176 bytes, placed by class name
    // World::OnAllMapSquares(std::function<void (shared_ptr<MapSquare>&)>)
    /* World::OnAllMapSquares(std::function<void (shared_ptr<MapSquare>&)>)
    */

    void World::OnAllMapSquares(function<void(shared_ptr<MapSquare>&)>* param_2) {
        Layout* pLVar2;
        shared_ptr* psVar3;
        shared_ptr* this_00;
        Layout* this_01;

        this_01 = (Layout*)(&field_81672)->HeapBeginPtr();
        pLVar2 = (Layout*)(&field_81672)->end();
        for (; this_01 != pLVar2; this_01 = this_01 + 32) {
            this_00 = (shared_ptr*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_01);
            psVar3 = (shared_ptr*)this_01->end();
            for (; this_00 != psVar3; this_00 = (shared_ptr*)&this_00[1].field_8) {
                if (shared_ptr::operator_cast_to_bool(this_00)) {
                    std::function<void(shared_ptr<MapSquare>&)>::operator()(param_2, this_00);
                }
            }
        }
    }

    // 0x10043de30, 368 bytes, placed by class name
    // World::RebuildArea(int, int, int, int)
    void World::RebuildArea(int param_1, int param_2, int param_3, int param_4) {
        bool bVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        vector<MapSquareStatus, eastl::allocator>* this_00;
        shared_ptr* this_01;
        MapSquare* this_02;
        int iVar6;

        if ((param_3 < param_1) || (param_4 < param_2)) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "tileMinX <= tileMaxX && tileMinZ <= tileMaxZ",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/World.cpp",
                302, "Min and max coords reversed");
        }
        iVar2 = eastl::max<int>(m_mapSquareMinX, param_1 >> 6);
        iVar3 = eastl::max<int>(m_mapSquareMinZ, param_2 >> 6);
        iVar4 = eastl::min<graphics::GraphicsQuality>(m_mapSquareMaxX, param_3 >> 6);
        iVar5 = eastl::min<graphics::GraphicsQuality>(m_mapSquareMaxZ, param_4 >> 6);
        if (iVar2 <= iVar4) {
            do {
                this_00 = (vector<MapSquareStatus, eastl::allocator>*)
                    eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                        (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)&field_81672,
                        (long)iVar2 - (long)(int)m_mapSquareMinX);
                if (iVar3 <= iVar5) {
                    iVar6 = iVar3;
                    do {
                        this_01 = (shared_ptr*)eastl::vector<MapSquareStatus, eastl::allocator>::operator[](
                            this_00, (long)(iVar6 - m_mapSquareMinZ));
                        bVar1 = shared_ptr::operator_cast_to_bool(this_01);
                        if (bVar1) {
                            this_02 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
                            this_02->RebuildArea(param_1, param_2, param_3, param_4);
                        }
                        iVar6 = iVar6 + 1;
                    } while (iVar5 + 1 != iVar6);
                }
                bVar1 = iVar2 != iVar4;
                iVar2 = iVar2 + 1;
            } while (bVar1);
        }
    }

    // 0x10043dfa0, 112 bytes, placed by class name
    // World::GetTargetMapSquarePriority(int, int) const
    undefined4 World::GetTargetMapSquarePriority(int param_1, int param_2) {
        undefined4 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        TargetMapSquare* pTVar4;
        TargetMapSquare* pTVar5;
        undefined1* this_00;

        this_00 = &field_81624;
        uVar2 = this_00->HeapBeginPtr();
        uVar3 = this_00->end();
        pTVar4 = eastl::find_if<TargetMapSquare_const*, int->GetTargetMapSquarePriority(int) const ::__2>(
            uVar2, uVar3, CONCAT44(param_2, param_1));
        pTVar5 = (TargetMapSquare*)this_00->end();
        if (pTVar4 == pTVar5) {
            uVar1 = 2147483647;
        } else {
            uVar1 = *(undefined4*)(pTVar4 + 8);
        }
        return uVar1;
    }

    // 0x10043e060, 64 bytes, placed by class name
    // World::GetIrradianceCache()
    undefined1* World::GetIrradianceCache() {
        Location* this_00;
        undefined1* puVar2;

        if (field_671760->operator_cast_to_bool()) {
            puVar2 = &field_950680;
        } else {
            this_00 = (Location*)size();
            puVar2 = (undefined1*)this_00->GetParentLocationType();
        }
        return puVar2;
    }

    // 0x10043e0a0, 480 bytes, placed by class name
    // World::RebuildExistingRegion(shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true, eastl::allocator> > const&, BuildMode, bool)
    undefined8 World::RebuildExistingRegion(shared_ptr* param_1, uint param_3, undefined4 param_4) {
        int iVar1;
        bool bVar2;
        vector<MapSquareStatus, eastl::allocator>* this_00;
        shared_ptr* this_01;
        MapSquare* pMVar4;
        uint uVar5;
        long lVar6;
        undefined8 uVar7;
        shared_ptr local_50;

        bVar2 = operator!=(param_1, (_func_decltype_nullptr*)0);
        if (!bVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "compositeMap != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/World.cpp",
                344, "%s: no composite map supplied.", "RebuildExistingRegion");
        }
        bVar2 = operator!=((shared_ptr*)field_671760, (_func_decltype_nullptr*)0);
        if (!bVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_compositeMap != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/World.cpp",
                345, "%s: world has no previous composite map. This should mean it isn\'t a region-built world.",
                "RebuildExistingRegion");
        }
        shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true,
                                       eastl::allocator>>::
        operator=((shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
                                                  4ul, true, eastl::allocator>>*)field_671760,
                  param_1);
        m_buildMode = param_3;
        if (m_mapSquareMaxX < (int)m_mapSquareMinX) {
            uVar7 = 0;
        } else {
            uVar7 = 0;
            uVar5 = m_mapSquareMinX;
            do {
                lVar6 = (long)m_mapSquareMinZ;
                if (m_mapSquareMinZ <= m_mapSquareMaxZ) {
                    do {
                        this_00 = (vector<MapSquareStatus, eastl::allocator>*)eastl::
                            vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                                (vector<eastl::vector<MapSquareStatus, eastl::allocator>,
                                        eastl::allocator>*)&field_81672,
                                (long)(int)uVar5 - (long)(int)m_mapSquareMinX);
                        this_01 = (shared_ptr*)eastl::vector<MapSquareStatus, eastl::allocator>::operator[](
                            this_00, lVar6 - m_mapSquareMinZ);
                        bVar2 = shared_ptr::operator_cast_to_bool(this_01);
                        if (bVar2) {
                            BuildClientCompositeData((World*)&local_50, (shared_ptr*)this, (int)param_1, uVar5);
                            if ((char)param_4 == '\0') {
                                pMVar4 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
                                if (pMVar4->ZoneMapSame(&local_50) == '\0')
                                    goto LAB_10043e24b;
                            } else {
                            LAB_10043e24b:
                                pMVar4 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
                                uVar7 = 1;
                                pMVar4->RebuildRegion(&local_50, (bool)(char)param_4);
                            }
                            local_50.~shared_ptr();
                        }
                        iVar1 = (int)lVar6;
                        lVar6 = lVar6 + 1;
                    } while (iVar1 < m_mapSquareMaxZ);
                }
                bVar2 = (int)uVar5 < m_mapSquareMaxX;
                uVar5 = uVar5 + 1;
            } while (bVar2);
        }
        return uVar7;
    }

    // 0x10043e2c0, 192 bytes, placed by class name
    // World::BuildClientCompositeData(shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true, eastl::allocator> > const&, int, int)
    World* World::BuildClientCompositeData(shared_ptr* param_1, int param_2, int param_3) {
        bool bVar1;
        ClientCompositeData* this_00;
        fixed_vector* pfVar2;
        undefined4 in_register_00000014;
        int in_R8D;
        shared_ptr local_48;
        int local_34;

        bVar1 = operator==((shared_ptr*)CONCAT44(in_register_00000014, param_2), (_func_decltype_nullptr*)0);
        if (bVar1) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_34 = in_R8D;
            MakeSharedPool<ClientCompositeData, 8>::MakeShared<>(&local_48, (MakeSharedPool<ClientCompositeData, 8>*)0);
            this_00 = (ClientCompositeData*)shared_ptr<ClientCompositeData>::operator->(
                (shared_ptr<ClientCompositeData>*)&local_48);
            pfVar2 = (fixed_vector*)shared_ptr<eastl::fixed_vector<
                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true, eastl::allocator>>::
            operator*(
                (shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
                                                4ul, true, eastl::allocator>>*)CONCAT44(in_register_00000014, param_2));
            this_00->DecodeFromRegionData(pfVar2, *(int*)&param_1[5099].field_4 << 3, (int)param_1[5099].field_8 << 3,
                                          param_3, local_34);
            shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
                (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, &local_48);
            local_48.~shared_ptr();
        }
        return this;
    }

    // 0x10043e4f0, 176 bytes, placed by class name
    // World::BuildNonRegionComposite(shared_ptr<MapSquareWorldAreaCompositeInner>&, int, int)
    World* World::BuildNonRegionComposite(shared_ptr* param_1, int param_2, int param_3) {
        char cVar1;
        ClientCompositeData* this_00;
        undefined4 in_register_00000014;
        int in_R8D;
        shared_ptr local_48;
        int local_34;

        local_34 = in_R8D;
        MakeSharedPool<ClientCompositeData, 8>::MakeShared<>(&local_48,
                                                             (MakeSharedPool<ClientCompositeData, 8>*)param_1);
        this_00 = (ClientCompositeData*)shared_ptr<ClientCompositeData>::operator->(
            (shared_ptr<ClientCompositeData>*)&local_48);
        cVar1 = this_00->DecodeFromWorldArea(param_1 + 4108, (shared_ptr*)CONCAT44(in_register_00000014, param_2),
                                             param_3, local_34, (bool)*PTR_m_enableImpostors_100ee6648);
        if (cVar1 == '\0') {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
                (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, &local_48);
        }
        local_48.~shared_ptr();
        return this;
    }

    // 0x10043e5a0, 160 bytes, placed by class name
    // World::MainLogic(unsigned int)
    void World::MainLogic(uint param_1) {
        GraphNode* this_00;
        NpcUID* in_RDX;
        __3 local_30;
        eastl local_20[8];

        eastl::destruct<oldscape::highlight::NpcUID*>(local_20, (NpcUID*)"MainLogic", in_RDX);
        ApplyPointLightAABBChanges(this);
        MapSquareMainLogic(this, param_1);
        UpdateLightFlicker(this);
        RemoveUnusedPointLights(this, param_1);
        this_00 = (GraphNode*)(&field_65744)->GetRoot();
        local_30.field_0 = (long)this;
        local_30.field_8 = param_1;
        graphics::GraphNode::OnRecursive<World::MainLogic(unsigned int)::__3>(this_00, &local_30);
        (&field_65712, field_48, field_56)->MainLogic();
        (&field_80976)->GarbageCollect();
    }

    // 0x10043e640, 144 bytes, placed by class name
    // World::ApplyPointLightAABBChanges()
    void World::ApplyPointLightAABBChanges() {
        fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>* this_00;
        undefined8 uVar1;
        function<void(shared_ptr<MapSquare>&)> local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>*)GetOrigin();
        uVar1 = eastl::fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true,
                                                 eastl::allocator>::get_overflow_allocator(this_00);
        std::function<void(shared_ptr<MapSquare>&)>::function<World::ApplyPointLightAABBChanges()::__14, void>(local_58,
                                                                                                               uVar1);
        OnAllMapSquares(this, local_58);
        std::function<void(shared_ptr<MapSquare>&)>::~function(local_58);
        GetOrigin();
        DynamicPointLightManager::ClearAffectedAABBs();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10043e6d0, 128 bytes, placed by class name
    // World::MapSquareMainLogic(unsigned int)
    void World::MapSquareMainLogic(uint param_1) {
        function<void(shared_ptr<MapSquare>&)> local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::function<void(shared_ptr<MapSquare>&)>::function<World::MapSquareMainLogic(unsigned int)::__4, void>(
            local_58, this, param_1);
        OnRingMapSquares(this, 1, local_58);
        std::function<void(shared_ptr<MapSquare>&)>::~function(local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10043e750, 32 bytes, placed by class name
    // World::UpdateLightFlicker()
    void World::UpdateLightFlicker() {
        EffectManager* pEVar1;
        bool bVar2;

        pEVar1 = (EffectManager*)GetEffectManager(this);
        bVar2 = (bool)pEVar1->IsEnabled(41);
        LightSource::SuppressFlicker(bVar2);
    }

    // 0x10043e770, 784 bytes, placed by class name
    // World::RemoveUnusedPointLights(int)
    void World::RemoveUnusedPointLights(int param_1) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        undefined4 uVar5;
        uint* puVar6;
        Entity* pEVar7;
        GraphNode* this_01;
        long lVar8;
        LightSource* pLVar9;
        uint* puVar10;
        shared_ptr* psVar11;
        undefined8 uVar12;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* phVar13;
        LogStream* this_02;
        hashtable_iterator<
            eastl::pair<int const, shared_ptr<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>>, true, false>
            local_1a0[16];
        hashtable_iterator_base local_190[16];
        hashtable<unsigned int, eastl::pair<unsigned int const, shared_ptr<LightSource>>,
                  eastl::fixed_hashtable_allocator<4098ul, 32ul, 4096ul, 8ul, 0ul, true, eastl::allocator>,
                  eastl::use_first<eastl::pair<unsigned int const, shared_ptr<LightSource>>>,
                  eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* local_180;
        vector<unsigned int, BucketAllocatorEASTL> local_178[24];
        World* local_160;
        LogStream local_158;
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::vector<unsigned int, BucketAllocatorEASTL>::vector();
        local_160 = this;
        eastl::hashtable<eastl::string, eastl::pair<eastl::stringconst, unsigned int>, eastl::allocator,
                         eastl::use_first<eastl::pair<eastl::stringconst, unsigned int>>,
                         eastl::equal_to<eastl::string>, eastl::hash<eastl::string>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::begin();
        local_180 =
            (hashtable<unsigned int, eastl::pair<unsigned int const, shared_ptr<LightSource>>,
                       eastl::fixed_hashtable_allocator<4098ul, 32ul, 4096ul, 8ul, 0ul, true, eastl::allocator>,
                       eastl::use_first<eastl::pair<unsigned int const, shared_ptr<LightSource>>>,
                       eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                       eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)&field_786616;
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        phVar13 = extraout_RDX;
        while (true) {
            bVar1 = eastl::operator!=((eastl*)local_1a0, local_190, phVar13);
            if (!bVar1)
                break;
            puVar6 = (uint*)local_1a0->HeapBeginPtr();
            psVar11 = (shared_ptr*)(puVar6 + 2);
            bVar1 = shared_ptr::operator_cast_to_bool(psVar11);
            if (bVar1) {
                pEVar7 = (Entity*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)psVar11);
                this_01 = (GraphNode*)pEVar7->GetNode();
                lVar8 = this_01->GetParent();
                if (lVar8 == 0) {
                    pLVar9 = (LightSource*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)psVar11);
                    cVar2 = pLVar9->HasRemoteMapSquareReferences();
                    if (cVar2 == '\0') {
                        pLVar9 = (LightSource*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)psVar11);
                        iVar3 = pLVar9->GetLastUpdateTick();
                        if (0 < iVar3) {
                            pLVar9 =
                                (LightSource*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)psVar11);
                            iVar3 = pLVar9->GetLastUpdateTick();
                            if (5 < param_1 - iVar3) {
                                eastl::vector<unsigned int, BucketAllocatorEASTL>::push_back(local_178, puVar6);
                            }
                        }
                    }
                }
            }
            eastl::hashtable_iterator<
                eastl::pair<int const, shared_ptr<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>>, true,
                false>::operator++(local_1a0);
            phVar13 = extraout_RDX_00;
        }
        puVar6 = (uint*)local_178->HeapBeginPtr();
        puVar10 = (uint*)local_178->end();
        if (puVar6 == puVar10) {
            iVar3 = 0;
        } else {
            this_00 = &local_160->field_950616;
            iVar3 = 0;
            do {
                psVar11 = (shared_ptr*)GetPointLight(local_160, *puVar6);
                iVar4 = psVar11->use_count();
                if (iVar4 == 1) {
                    pEVar7 = (Entity*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)psVar11);
                    pEVar7->ResetWorld();
                    this_00->push_back(psVar11);
                    eastl::hashtable<
                        unsigned int, eastl::pair<unsigned int const, shared_ptr<LightSource>>,
                        eastl::fixed_hashtable_allocator<4098ul, 32ul, 4096ul, 8ul, 0ul, true, eastl::allocator>,
                        eastl::use_first<eastl::pair<unsigned int const, shared_ptr<LightSource>>>,
                        eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                        eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::erase(local_180,
                                                                                                          puVar6);
                } else {
                    iVar3 = iVar3 + 1;
                }
                puVar6 = puVar6 + 1;
            } while (puVar6 != puVar10);
        }
        cVar2 = local_178->empty();
        if (cVar2 == '\0') {
            if (iVar3 == 0) {
                uVar12 = logger::default_logger();
                this_02 = &local_158;
                logger::LogStream::LogStream(this_02, (LogStream*)&LOGGER_SCENE);
                uVar5 = local_178->size();
                logger::Logger::Log(uVar12, 0, this_02, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/World.cpp",
                                    501, "World removing %d orphaned point lights", uVar5);
            } else {
                uVar12 = logger::default_logger();
                this_02 = &local_c8;
                logger::LogStream::LogStream(this_02, (LogStream*)&LOGGER_SCENE);
                uVar5 = local_178->size();
                logger::Logger::Log(uVar12, 0, this_02, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/World.cpp",
                                    497,
                                    "World removing %d orphaned point lights (%u were still in use and were skipped)",
                                    uVar5, iVar3);
            }
            this_02->~LogStream();
        }
        eastl::vector<unsigned int, BucketAllocatorEASTL>::~vector(local_178);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10043eaf0, 432 bytes, placed by class name
    // World::OnRingMapSquares(int, std::function<void (shared_ptr<MapSquare>&)>)
    /* World::OnRingMapSquares(int, std::function<void
   (shared_ptr<MapSquare>&)>) */

    void World::OnRingMapSquares(int param_1, function<void(shared_ptr<MapSquare>&)>* param_3) {
        undefined1* this_00;
        uint uVar1;
        bool bVar2;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        MapSquare* pMVar9;
        vector<MapSquareStatus, eastl::allocator>* this_01;
        shared_ptr* this_02;
        Entity* this_03;

        this_00 = m_centreSquare;
        bVar2 = operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
        if (bVar2) {
            uVar1 = m_mapSquareMinX;
            pMVar9 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_00);
            iVar4 = pMVar9->GetMapSquareX();
            iVar5 = eastl::max<int>(uVar1, iVar4 - param_1);
            iVar4 = m_mapSquareMaxX;
            pMVar9 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_00);
            iVar6 = pMVar9->GetMapSquareX();
            iVar6 = eastl::min<graphics::GraphicsQuality>(iVar4, iVar6 + param_1);
            iVar4 = m_mapSquareMinZ;
            pMVar9 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_00);
            iVar7 = pMVar9->GetMapSquareZ();
            iVar7 = eastl::max<int>(iVar4, iVar7 - param_1);
            iVar4 = m_mapSquareMaxZ;
            pMVar9 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_00);
            iVar8 = pMVar9->GetMapSquareZ();
            iVar4 = eastl::min<graphics::GraphicsQuality>(iVar4, param_1 + iVar8);
            if (iVar5 <= iVar6) {
                do {
                    iVar8 = iVar7;
                    if (iVar7 <= iVar4) {
                        do {
                            this_01 = (vector<MapSquareStatus, eastl::allocator>*)eastl::
                                vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                                    (vector<eastl::vector<MapSquareStatus, eastl::allocator>,
                                            eastl::allocator>*)&field_81672,
                                    (long)iVar5 - (long)(int)m_mapSquareMinX);
                            this_02 = (shared_ptr*)eastl::vector<MapSquareStatus, eastl::allocator>::operator[](
                                this_01, (long)(iVar8 - m_mapSquareMinZ));
                            if ((*(undefined**)(this_02 + 1) != DataStatus::MISSING) &&
                                (bVar2 = operator!=(this_02, (_func_decltype_nullptr*)0), bVar2)) {
                                this_03 = (Entity*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_02);
                                if (this_03->IsAtTargetLOD() != '\0') {
                                    std::function<void(shared_ptr<MapSquare>&)>::operator()(param_3, this_02);
                                }
                            }
                            iVar8 = iVar8 + 1;
                        } while (iVar4 + 1 != iVar8);
                    }
                    bVar2 = iVar5 != iVar6;
                    iVar5 = iVar5 + 1;
                } while (bVar2);
            }
        }
    }

    // 0x10043ecb0, 128 bytes, placed by class name
    // World::MapSquareMainDraw(unsigned int)
    void World::MapSquareMainDraw(uint param_1) {
        undefined4 in_register_0000003c;
        function<void(shared_ptr<MapSquare>&)> local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::function<void(shared_ptr<MapSquare>&)>::function<World::MapSquareMainDraw(unsigned int)::__5, void>(
            local_58);
        OnRingMapSquares((World*)CONCAT44(in_register_0000003c, param_1), 1, local_58);
        std::function<void(shared_ptr<MapSquare>&)>::~function(local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10043eee0, 192 bytes, placed by class name
    // World::AddPickableEntities(unsigned int, graphics::GraphNode*, int)
    void World::AddPickableEntities(uint param_1, GraphNode* param_2, int param_3) {
        undefined8 uVar1;
        uint uVar2;
        long* plVar3;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        undefined8* puVar4;
        undefined8* puVar5;

        if ((param_2 != (GraphNode*)0) && (uVar2 = param_2->GetVisibleFrame(param_3), uVar2 == param_1)) {
            plVar3 = (long*)param_2->GetLinkObjCount();
            if (plVar3 != (long*)0) {
                uVar1 = param_2->GetWorldTransformationMatrix();
                (**(code**)(*plVar3 + 176))(plVar3, this, uVar1);
            }
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)param_2->GetChildren();
            puVar5 = (undefined8*)this_00->HeapBeginPtr();
            puVar4 = (undefined8*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
            for (; puVar5 != puVar4; puVar5 = puVar5 + 1) {
                AddPickableEntities(this, param_1, (GraphNode*)*puVar5, param_3);
            }
        }
    }

    // 0x10043efa0, 448 bytes, placed by class name
    // World::MainDraw(render::RenderTargets*, unsigned int, ViewTransforms const&, float, float, render::Viewport const&, CoordFine const&, int, int, unsigned int)
    undefined8 World::MainDraw(RenderTargets* param_1, uint param_2, ViewTransforms* param_3, float param_4,
                               float param_5, Viewport* param_6, CoordFine* param_7, int param_8, int param_9,
                               uint param_10) {
        bool bVar1;
        char cVar2;
        shared_ptr* psVar3;
        SkyBox* this_00;
        EffectManager* pEVar4;
        SunlightDirectLighting* this_01;
        undefined4 in_register_00000014;
        undefined8 uVar5;
        eastl local_38[8];

        if (m_pRT7Core == (RT7Core*)0) {
            return 0;
        }
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"MainDraw",
                                                      (NpcUID*)CONCAT44(in_register_00000014, param_2));
        UpdateLightProbeSH(this);
        MapSquareMainDraw((uint)this);
        psVar3 = (shared_ptr*)GetCentreSquare(this);
        bVar1 = shared_ptr::operator_cast_to_bool(psVar3);
        if (!bVar1) {
            return 0;
        }
        m_mainSceneDrawn = 1;
        m_maxRenderLevel = param_8;
        m_worldFocusLevel = param_7->field_0;
        if ((param_10 & 32) != 0) {
            psVar3 = (shared_ptr*)GetCurrentEnvironmentSettings(this);
            bVar1 = shared_ptr::operator_cast_to_bool(psVar3);
            if (bVar1)
                goto LAB_10043f069;
        }
        CheckEnvironmentParameters(this, param_7, param_4, param_5);
    LAB_10043f069:
        psVar3 = (shared_ptr*)GetCurrentEnvironmentSettings(this);
        bVar1 = shared_ptr::operator_cast_to_bool(psVar3);
        if (bVar1) {
            this_00 = (SkyBox*)shared_ptr<graphics::SkyBox>::operator->((shared_ptr<graphics::SkyBox>*)m_skyBox);
            cVar2 = this_00->IsReady();
            if (cVar2 != '\0') {
                pEVar4 = (EffectManager*)GetEffectManager(this);
                cVar2 = pEVar4->IsEnabled(110);
                if (cVar2 != '\0') {
                    pEVar4 = (EffectManager*)GetEffectManager(this);
                    this_01 = graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(pEVar4, 110);
                    psVar3 = (shared_ptr*)m_pRT7Core->GetSSAORT();
                    this_01->SetSSAORT(psVar3);
                }
                psVar3 = (shared_ptr*)m_pRT7Core->GetGBufferRT();
                pEVar4 = (EffectManager*)GetEffectManager(this);
                (m_worldRenderer, param_1, psVar3, this, param_2, param_9, pEVar4, param_3, param_6, param_10)
                    ->RenderView();
                uVar5 = CONCAT71((uint7)(uint3)(param_10 >> 8), 1);
                if ((param_10 & 2) == 0) {
                    return uVar5;
                }
                RenderDebug(this, param_6);
                return uVar5;
            }
        }
        return 0;
    }

    // 0x10043f160, 64 bytes, placed by class name
    // World::UpdateLightProbeSH()
    void World::UpdateLightProbeSH() {
        EffectManager* pEVar1;
        LightProbeManager* this_00;

        pEVar1 = (EffectManager*)GetEffectManager(this);
        if (pEVar1->IsEnabled(21) != '\0') {
            this_00 = (LightProbeManager*)
                          std::unique_ptr<LightProbeManager, std::default_delete<LightProbeManager>>::operator->(
                              (unique_ptr<LightProbeManager, std::default_delete<LightProbeManager>>*)&field_72);
            this_00->UpdatePendingLightProbeSHAsync();
        }
    }

    // 0x10043f1c0, 1856 bytes, placed by class name
    // World::CheckEnvironmentParameters(CoordFine const&, float, float)
    void World::CheckEnvironmentParameters(CoordFine* param_1, float param_2, float param_3) {
        undefined1* puVar1;
        undefined1* puVar2;
        float fVar3;
        RT7Core* pRVar4;
        bool bVar5;
        char cVar6;
        uint uVar7;
        int iVar8;
        EffectManager* pEVar9;
        MapSquare* this_00;
        EnvironmentLoader* this_01;
        float* pfVar10;
        undefined* puVar11;
        MapEnvironmentSettings* pMVar12;
        EnvironmentOverride* this_02;
        SunlightDirectLighting* pSVar13;
        Rect* pRVar14;
        GlobalEnvironmentMapping* this_03;
        CoordMapSquare* pCVar15;
        MapEnvironmentSettings* pMVar16;
        CoordMapSquare* this_04;
        SkyBox* pSVar17;
        SkyBox* pSVar18;
        ulonglong uVar19;
        LightProbeManager* this_05;
        LightScatteringEffect* this_06;
        CoordFine* pCVar20;
        shared_ptr* psVar21;
        ulong uVar22;
        shared_ptr local_58;
        shared_ptr* local_48;
        shared_ptr local_40;

        local_48 = (shared_ptr*)CONCAT44(local_48._4_4_, param_2);
        pCVar20 = param_1;
        pEVar9 = (EffectManager*)GetEffectManager(this);
        bVar5 = m_centreSquare->operator_cast_to_bool();
        if (!bVar5)
            goto LAB_10043f404;
        this_00 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)m_centreSquare);
        this_01 = (EnvironmentLoader*)this_00->GetEnvironmentLoader();
        if (this_01 == (EnvironmentLoader*)0)
            goto LAB_10043f404;
        new (&local_40) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(pCVar20);
        pfVar10 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&param_1->field_4, 0);
        fVar3 = *pfVar10;
        pfVar10 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&param_1->field_4, 2);
        puVar11 = (undefined*)this_01->GetEnvironmentSettings(&local_40, (uint)(long)fVar3, (uint)(long)*pfVar10,
                                                              m_worldFocusLevel);
        if (puVar11 == DataStatus::READY) {
            puVar1 = field_786600;
            bVar5 = puVar1->operator_cast_to_bool();
            if ((!bVar5) || (bVar5 = shared_ptr::operator_cast_to_bool(&local_40), !bVar5)) {
            LAB_10043f311:
                shared_ptr<MapEnvironmentSettings>::operator=((shared_ptr<MapEnvironmentSettings>*)puVar1, &local_40);
                this_02 = (EnvironmentOverride*)field_24->GetEnvironmentOverride();
                uVar22 = 5000;
                if (this_02 != (EnvironmentOverride*)0) {
                    cVar6 = this_02->HasAnyOverrides();
                    if (cVar6 != '\0') {
                        pMVar16 = (MapEnvironmentSettings*)shared_ptr<MapEnvironmentSettings>::operator*(
                            (shared_ptr<MapEnvironmentSettings>*)&local_40);
                        make_shared<MapEnvironmentSettings, MapEnvironmentSettings&>((jag*)&local_58, pMVar16);
                        pMVar16 = (MapEnvironmentSettings*)shared_ptr<MapEnvironmentSettings>::operator->(
                            (shared_ptr<MapEnvironmentSettings>*)&local_58);
                        pMVar16->ApplyOverride(this_02);
                        shared_ptr<MapEnvironmentSettings>::operator=((shared_ptr<MapEnvironmentSettings>*)&local_40,
                                                                      &local_58);
                        local_58.~shared_ptr();
                    }
                    cVar6 = field_24->IsFreshEnvironmentOverride();
                    if (cVar6 != '\0') {
                        uVar7 = this_02->GetTransitionTime();
                        uVar22 = (ulong)uVar7;
                    }
                }
                pMVar16 = (MapEnvironmentSettings*)shared_ptr<MapEnvironmentSettings>::operator*(
                    (shared_ptr<MapEnvironmentSettings>*)&local_40);
                bVar5 = true;
                if (field_81584 == '\0') {
                    bVar5 = m_currentEnvironmentSettings->operator_cast_to_bool();
                    bVar5 = !bVar5;
                }
                SetNewEnvironmentParameters(this, pMVar16, bVar5, uVar22, local_48._0_4_, param_3);
                shared_ptr<MapEnvironmentSettings>::operator=(
                    (shared_ptr<MapEnvironmentSettings>*)m_currentEnvironmentSettings, &local_40);
                (field_24, false)->SetFreshEnvironmentOverride();
            } else {
                pMVar16 = (MapEnvironmentSettings*)shared_ptr<MapEnvironmentSettings>::operator*(
                    (shared_ptr<MapEnvironmentSettings>*)&local_40);
                pMVar12 = (MapEnvironmentSettings*)shared_ptr<MapEnvironmentSettings>::operator*(
                    (shared_ptr<MapEnvironmentSettings>*)puVar1);
                cVar6 = MapEnvironmentSettings::operator!=(pMVar16, pMVar12);
                if ((cVar6 != '\0') || (cVar6 = field_24->IsFreshEnvironmentOverride(), cVar6 != '\0'))
                    goto LAB_10043f311;
            }
            field_81584 = 0;
        } else if (puVar11 == DataStatus::MISSING) {
            bVar5 = m_currentEnvironmentSettings->operator_cast_to_bool();
            if (!bVar5) {
                make_shared<MapEnvironmentSettings>((jag*)&local_58);
                shared_ptr<MapEnvironmentSettings>::operator=(
                    (shared_ptr<MapEnvironmentSettings>*)m_currentEnvironmentSettings, &local_58);
                local_58.~shared_ptr();
            }
        }
        local_40.~shared_ptr();
    LAB_10043f404:
        puVar1 = m_currentEnvironmentSettings;
        bVar5 = puVar1->operator_cast_to_bool();
        if (!bVar5) {
            return;
        }
        local_48 = (shared_ptr*)FrameTime::GetCurrentTimeMS();
        cVar6 = pEVar9->IsEnabled(57);
        if (cVar6 != '\0') {
            pSVar13 = graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(pEVar9, 57);
            cVar6 = pEVar9->IsEnabled(57);
            if (cVar6 != '\0') {
                pSVar13->Update();
            }
            pRVar14 = (Rect*)pSVar13->GetShaderConsts();
            math::Rect<float>::operator=((Rect<float>*)&field_65840, pRVar14);
        }
        psVar21 = (shared_ptr*)51;
        cVar6 = pEVar9->IsEnabled();
        if (cVar6 != '\0') {
            this_03 = (GlobalEnvironmentMapping*)graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(
                pEVar9, 51);
            pCVar15 = (CoordMapSquare*)field_48->GetMapDefaults();
            if (pCVar15 != (CoordMapSquare*)0) {
                bVar5 = m_defaultEnvironmentMap->operator_cast_to_bool();
                if (!bVar5) {
                    pMVar16 = (MapEnvironmentSettings*)shared_ptr<MapEnvironmentSettings>::operator->(
                        (shared_ptr<MapEnvironmentSettings>*)puVar1);
                    pRVar4 = m_pRT7Core;
                    iVar8 = pCVar15->GetX();
                    pMVar16->GetEnvironmentCubeMap((shared_ptr*)m_defaultEnvironmentMap, pRVar4, iVar8);
                }
            }
            pMVar16 = (MapEnvironmentSettings*)shared_ptr<MapEnvironmentSettings>::operator->(
                (shared_ptr<MapEnvironmentSettings>*)puVar1);
            this_04 = (CoordMapSquare*)pMVar16->GetReflectionSettings();
            iVar8 = this_04->GetZ();
            if (iVar8 == -1) {
                if (pCVar15 == (CoordMapSquare*)0) {
                    iVar8 = -1;
                } else {
                    iVar8 = pCVar15->GetX();
                }
            } else {
                pMVar16 = (MapEnvironmentSettings*)shared_ptr<MapEnvironmentSettings>::operator->(
                    (shared_ptr<MapEnvironmentSettings>*)puVar1);
                pCVar15 = (CoordMapSquare*)pMVar16->GetReflectionSettings();
                iVar8 = pCVar15->GetZ();
            }
            puVar2 = field_950648;
            bVar5 = puVar2->operator_cast_to_bool();
            if ((!bVar5) || (field_950736 != iVar8)) {
                shared_ptr<render::TextureCube>::reset();
                field_950736 = iVar8;
                pMVar16 = (MapEnvironmentSettings*)shared_ptr<MapEnvironmentSettings>::operator->(
                    (shared_ptr<MapEnvironmentSettings>*)puVar1);
                pMVar16->GetEnvironmentCubeMap(puVar2, m_pRT7Core, iVar8);
                this_03->SetTexture(puVar2, 5000, (ulonglong)local_48);
            }
            this_03->SetClearColour((Vector4T*)&field_65840);
            psVar21 = local_48;
            this_03->MainLogic((ulonglong)local_48, pEVar9);
        }
        if (graphics::SkyBox::m_UseModels != '\0') {
            puVar2 = m_skyBox;
            pSVar17 = (SkyBox*)shared_ptr<graphics::SkyBox>::operator->((shared_ptr<graphics::SkyBox>*)puVar2);
            iVar8 = pSVar17->GetPendingSkyID();
            if (-1 < iVar8) {
                new (&local_40) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(psVar21);
                pMVar16 = (MapEnvironmentSettings*)shared_ptr<MapEnvironmentSettings>::operator->(
                    (shared_ptr<MapEnvironmentSettings>*)puVar1);
                psVar21 = &local_40;
                puVar11 = (undefined*)pMVar16->GetSkyBoxModel(psVar21, m_pRT7Core, field_48, field_56);
                if (puVar11 == DataStatus::READY) {
                    bVar5 = shared_ptr::operator_cast_to_bool(&local_40);
                    if (!bVar5) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("currentSkyModel",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "scene/World.cpp",
                                  761, (char*)0);
                    }
                    pSVar17 = (SkyBox*)shared_ptr<graphics::SkyBox>::operator->((shared_ptr<graphics::SkyBox>*)puVar2);
                    pSVar18 = (SkyBox*)shared_ptr<graphics::SkyBox>::operator->((shared_ptr<graphics::SkyBox>*)puVar2);
                    uVar19 = pSVar18->GetPendingSkyTransitionTime();
                    psVar21 = &local_40;
                    pSVar17->SetModel(psVar21, uVar19, (ulonglong)local_48);
                    this_05 =
                        (LightProbeManager*)
                            std::unique_ptr<LightProbeManager, std::default_delete<LightProbeManager>>::operator->(
                                (unique_ptr<LightProbeManager, std::default_delete<LightProbeManager>>*)&field_72);
                    this_05->AddAllExistingMapSquaresToUpdateList();
                } else if (puVar11 == DataStatus::MISSING) {
                    pSVar17 = (SkyBox*)shared_ptr<graphics::SkyBox>::operator->((shared_ptr<graphics::SkyBox>*)puVar2);
                    new (&local_58) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    pSVar18 = (SkyBox*)shared_ptr<graphics::SkyBox>::operator->((shared_ptr<graphics::SkyBox>*)puVar2);
                    uVar19 = pSVar18->GetPendingSkyTransitionTime();
                    psVar21 = &local_58;
                    pSVar17->SetModel(psVar21, uVar19, (ulonglong)local_48);
                    local_58.~shared_ptr();
                }
                local_40.~shared_ptr();
            }
        }
        if (graphics::SkyBox::m_UseModels == '\0') {
            puVar2 = m_skyBox;
            pSVar17 = (SkyBox*)shared_ptr<graphics::SkyBox>::operator->((shared_ptr<graphics::SkyBox>*)puVar2);
            iVar8 = pSVar17->GetPendingSkyID();
            if (-1 < iVar8) {
                new (&local_40) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(psVar21);
                pMVar16 = (MapEnvironmentSettings*)shared_ptr<MapEnvironmentSettings>::operator->(
                    (shared_ptr<MapEnvironmentSettings>*)puVar1);
                puVar11 = (undefined*)pMVar16->GetSkyBoxCubeMap(&local_40, m_pRT7Core, field_48);
                if (puVar11 == DataStatus::READY) {
                    bVar5 = shared_ptr::operator_cast_to_bool(&local_40);
                    if (!bVar5) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("currentSkyMap",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "scene/World.cpp",
                                  777, (char*)0);
                    }
                    pSVar17 = (SkyBox*)shared_ptr<graphics::SkyBox>::operator->((shared_ptr<graphics::SkyBox>*)puVar2);
                    pSVar18 = (SkyBox*)shared_ptr<graphics::SkyBox>::operator->((shared_ptr<graphics::SkyBox>*)puVar2);
                    uVar19 = pSVar18->GetPendingSkyTransitionTime();
                    pSVar17->SetCubeMap(&local_40, uVar19, (ulonglong)local_48);
                } else if (puVar11 == DataStatus::MISSING) {
                    pSVar17 = (SkyBox*)shared_ptr<graphics::SkyBox>::operator->((shared_ptr<graphics::SkyBox>*)puVar2);
                    new (&local_58) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
                    pSVar18 = (SkyBox*)shared_ptr<graphics::SkyBox>::operator->((shared_ptr<graphics::SkyBox>*)puVar2);
                    uVar19 = pSVar18->GetPendingSkyTransitionTime();
                    pSVar17->SetCubeMap(&local_58, uVar19, (ulonglong)local_48);
                    local_58.~shared_ptr();
                }
                local_40.~shared_ptr();
            }
        }
        cVar6 = pEVar9->IsEnabled(29);
        if (cVar6 != '\0') {
            pSVar13 = graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(pEVar9, 29);
            pSVar13->Update();
        }
        cVar6 = pEVar9->IsEnabled(48);
        if (cVar6 != '\0') {
            this_06 = (LightScatteringEffect*)graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(
                pEVar9, 48);
            this_06->Update();
        }
        bVar5 = m_skyBox->operator_cast_to_bool();
        if (bVar5) {
            pSVar17 = (SkyBox*)shared_ptr<graphics::SkyBox>::operator->((shared_ptr<graphics::SkyBox>*)m_skyBox);
            pSVar17->SetClearColour((Vector4T*)&field_65840);
        }
    }

    // 0x10043f970, 7040 bytes, placed by class name
    // World::RenderDebug(render::Viewport const&)
    void World::RenderDebug(Viewport* param_1) {
        float fVar1;
        Viewport* pVVar2;
        World* pWVar3;
        bool bVar4;
        char cVar5;
        int iVar6;
        undefined4 uVar7;
        int iVar8;
        int iVar9;
        undefined4 uVar10;
        uint uVar11;
        uint uVar12;
        uint uVar13;
        Vector3T* pVVar14;
        shared_ptr* psVar15;
        MapSquare* pMVar16;
        shared_ptr* this_00;
        Layout* this_01;
        LightSource* pLVar17;
        Entity* pEVar18;
        Layout* this_02;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_03;
        Vector3T<float>* this_04;
        int* piVar19;
        Vector2T<int>* pVVar20;
        undefined4* puVar21;
        long* plVar22;
        undefined8 uVar23;
        undefined8 uVar24;
        uint* puVar25;
        vector* pvVar26;
        float* pfVar27;
        Location* this_05;
        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* this_06;
        Terrain* pTVar28;
        ModelMaterial* this_07;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar29;
        EffectManager* this_08;
        vector<unsigned int, eastl::allocator>* pvVar30;
        ColourHSL* pCVar31;
        char* pcVar32;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* pvVar33;
        uint uVar34;
        type* ptVar35;
        long lVar36;
        ulong uVar37;
        float fVar38;
        float fVar39;
        allocator local_2d8[8];
        undefined1 local_2d0[16];
        ulong local_2c0;
        Viewport* local_2b8;
        undefined8 local_2b0;
        float local_2a8;
        ColourHSL local_2a0;
        ColourHSL local_290;
        ColourHSL local_280[2];
        long local_260;
        ulong local_258;
        ColourHSL local_250;
        vector<int, eastl::allocator>* local_240;
        ColourHSL local_238;
        undefined1 local_228[16];
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* local_218;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* local_210;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* local_208;
        ColourHSL local_200;
        World* local_1f0;
        vector<unsigned int, eastl::allocator>* local_1e8;
        vector<unsigned int, eastl::allocator>* local_1e0;
        ulong local_1d8;
        shared_ptr* local_1d0;
        SideBarData local_1c8[8];
        Sphere local_160[14];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_2b8 = param_1;
        local_1f0 = this;
        if (m_showPointLights != '\0') {
            math::ColourHSL::ColourHSL(local_280, 0.0, 28.9, 0.0);
            new (&local_238) math::ColourHSL(0.0, -14.4, 28.9);
            new (&local_200) math::ColourHSL(-25.0, -14.4, -14.4);
            uVar23 = 3244713574;
            new (&local_250) math::ColourHSL(25.0, -14.4, -14.4);
            pWVar3 = local_1f0;
            pVVar14 = (Vector3T*)GetLastCameraPosition(local_1f0);
            psVar15 = (shared_ptr*)GetClosestMapSquare(pWVar3, pVVar14);
            bVar4 = shared_ptr::operator_cast_to_bool(psVar15);
            if (bVar4) {
                pMVar16 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)psVar15);
                iVar6 = pMVar16->GetMapSquareX();
                pMVar16 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)psVar15);
                uVar7 = pMVar16->GetMapSquareZ();
                local_260 = CONCAT44(local_260._4_4_, uVar7);
                pMVar16 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)psVar15);
                iVar8 = pMVar16->GetMapSquareX();
                pMVar16 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)psVar15);
                iVar9 = pMVar16->GetMapSquareZ();
                local_240 = (vector<int, eastl::allocator>*)CONCAT44(local_240._4_4_, iVar9);
                local_210 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                    eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
                    CONCAT44(local_210._4_4_, iVar6 - 1U);
                local_258 = CONCAT44(local_258._4_4_, iVar8 + 1U);
                if (iVar6 - 1U <= iVar8 + 1U) {
                    local_260 = CONCAT44(local_260._4_4_, (uint)local_260 + -1);
                    local_240 = (vector<int, eastl::allocator>*)CONCAT44(local_240._4_4_, iVar9 + 1);
                    do {
                        uVar11 = (uint)local_260;
                        if ((uint)local_260 <= (uint)local_240) {
                            do {
                                local_218 =
                                    (vector<
                                        Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                        eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
                                        CONCAT44(local_218._4_4_, uVar11);
                                psVar15 = (shared_ptr*)GetMapSquare(local_1f0, (int)local_210, uVar11);
                                bVar4 = shared_ptr::operator_cast_to_bool(psVar15);
                                if (bVar4) {
                                    pMVar16 =
                                        (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)psVar15);
                                    this_01 = (Layout*)pMVar16->GetLightSourcesLocal();
                                    psVar15 = (shared_ptr*)eastl::basic_string<
                                        char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(this_01);
                                    local_1d0 = (shared_ptr*)this_01->end();
                                    if (psVar15 != local_1d0) {
                                        local_1d8 = local_1d8 & 18446744069414584320;
                                        do {
                                            if (-1 < (int)m_showMaxLevel) {
                                                uVar11 = 4294967295;
                                                do {
                                                    uVar11 = uVar11 + 1;
                                                    pLVar17 = (LightSource*)shared_ptr<LightSource>::operator->(
                                                        (shared_ptr<LightSource>*)psVar15);
                                                    ptVar35 = (type*)(ulong)uVar11;
                                                    cVar5 = pLVar17->AffectsLevel(uVar11);
                                                    fVar39 = (float)uVar23;
                                                    if (cVar5 != '\0') {
                                                        plVar22 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                                                        if (plVar22 != (long*)0) {
                                                            pEVar18 = (Entity*)shared_ptr<LightSource>::operator->(
                                                                (shared_ptr<LightSource>*)psVar15);
                                                            pVVar14 = (Vector3T*)pEVar18->GetWorldPosition();
                                                            lVar36 = shared_ptr<LightSource>::operator->(
                                                                (shared_ptr<LightSource>*)psVar15);
                                                            pvVar26 = ((lVar36 + 192))->SSOBeginPtr(ptVar35);
                                                            math::Sphere::Sphere(local_160, pVVar14,
                                                                                 (float)*(uint*)pvVar26);
                                                            lVar36 = shared_ptr<LightSource>::operator->(
                                                                (shared_ptr<LightSource>*)psVar15);
                                                            uVar11 = ((lVar36 + 192))->GetPos();
                                                            oldscape::sidebars::SideBarData::SideBarData(
                                                                local_1c8, uVar11 | 4278190080, 2);
                                                            (**(code**)(*plVar22 + 32))(plVar22, local_160, local_1c8);
                                                        }
                                                        pEVar18 = (Entity*)shared_ptr<LightSource>::operator->(
                                                            (shared_ptr<LightSource>*)psVar15);
                                                        pVVar14 = (Vector3T*)pEVar18->GetWorldPosition();
                                                        local_290._0_8_ =
                                                            math::operator+(pVVar14, (Vector3T*)local_280);
                                                        local_290.field_8 = fVar39;
                                                        pEVar18 = (Entity*)shared_ptr<LightSource>::operator->(
                                                            (shared_ptr<LightSource>*)psVar15);
                                                        pVVar14 = (Vector3T*)pEVar18->GetWorldPosition();
                                                        local_2a0._0_8_ =
                                                            math::operator+(pVVar14, (Vector3T*)&local_238);
                                                        local_2a0.field_8 = fVar39;
                                                        pEVar18 = (Entity*)shared_ptr<LightSource>::operator->(
                                                            (shared_ptr<LightSource>*)psVar15);
                                                        pVVar14 = (Vector3T*)pEVar18->GetWorldPosition();
                                                        local_228._0_8_ =
                                                            math::operator+(pVVar14, (Vector3T*)&local_200);
                                                        local_228._8_4_ = fVar39;
                                                        pEVar18 = (Entity*)shared_ptr<LightSource>::operator->(
                                                            (shared_ptr<LightSource>*)psVar15);
                                                        pVVar14 = (Vector3T*)pEVar18->GetWorldPosition();
                                                        pCVar31 = &local_250;
                                                        local_2b0 = math::operator+(pVVar14, (Vector3T*)pCVar31);
                                                        local_2a8 = fVar39;
                                                        plVar22 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                                                        if (plVar22 != (long*)0) {
                                                            new (local_160) oldscape::sidebars::SideBarData(-65536, 0);
                                                            pCVar31 = &local_290;
                                                            (**(code**)(*plVar22 + 16))(plVar22, pCVar31, local_228,
                                                                                        &local_2a0, local_160);
                                                        }
                                                        plVar22 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                                                        if (plVar22 != (long*)0) {
                                                            new (local_160)
                                                                oldscape::sidebars::SideBarData(-16711936, 0);
                                                            pCVar31 = &local_290;
                                                            (**(code**)(*plVar22 + 16))(plVar22, pCVar31, &local_2b0,
                                                                                        local_228, local_160);
                                                        }
                                                        plVar22 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                                                        if (plVar22 != (long*)0) {
                                                            new (local_160)
                                                                oldscape::sidebars::SideBarData(-16776961, 0);
                                                            pCVar31 = &local_290;
                                                            (**(code**)(*plVar22 + 16))(plVar22, pCVar31, &local_2a0,
                                                                                        &local_2b0, local_160);
                                                        }
                                                        plVar22 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                                                        if (plVar22 != (long*)0) {
                                                            new (local_160) oldscape::sidebars::SideBarData(-1, 0);
                                                            pCVar31 = &local_2a0;
                                                            (**(code**)(*plVar22 + 16))(plVar22, pCVar31, local_228,
                                                                                        &local_2b0, local_160);
                                                        }
                                                        pLVar17 = (LightSource*)shared_ptr<LightSource>::operator->(
                                                            (shared_ptr<LightSource>*)psVar15);
                                                        local_160[0]._0_8_ = pLVar17->GetLocalPosition();
                                                        local_160[0].field_8 = fVar39;
                                                        pvVar26 = local_160->SSOBeginPtr(pCVar31);
                                                        fVar1 = *(float*)pvVar26;
                                                        pLVar17 = (LightSource*)shared_ptr<LightSource>::operator->(
                                                            (shared_ptr<LightSource>*)psVar15);
                                                        local_160[0]._0_8_ = pLVar17->GetLocalPosition();
                                                        local_160[0].field_8 = fVar39;
                                                        pfVar27 = (float*)local_160->second();
                                                        fVar39 = *pfVar27;
                                                        new (local_160)
                                                            eastl::fixed_string<char, 256, true, eastl::allocator>();
                                                        pLVar17 = (LightSource*)shared_ptr<LightSource>::operator->(
                                                            (shared_ptr<LightSource>*)psVar15);
                                                        uVar10 = pLVar17->GetWorldPointLightID();
                                                        lVar36 = shared_ptr<LightSource>::operator->(
                                                            (shared_ptr<LightSource>*)psVar15);
                                                        pvVar26 = ((lVar36 + 192))->SSOBeginPtr(pCVar31);
                                                        uVar7 = *(undefined4*)pvVar26;
                                                        pEVar18 = (Entity*)shared_ptr<LightSource>::operator->(
                                                            (shared_ptr<LightSource>*)psVar15);
                                                        this_02 = (Layout*)pEVar18->GetWorldPosition();
                                                        pvVar26 =
                                                            eastl::string::Layout::SSOBeginPtr(this_02, (type*)pCVar31);
                                                        local_1e0 = (vector<unsigned int, eastl::allocator>*)CONCAT44(
                                                            local_1e0._4_4_, *(undefined4*)pvVar26);
                                                        pEVar18 = (Entity*)shared_ptr<LightSource>::operator->(
                                                            (shared_ptr<LightSource>*)psVar15);
                                                        pVVar20 = (Vector2T<int>*)pEVar18->GetWorldPosition();
                                                        puVar21 = (undefined4*)pVVar20->y();
                                                        local_1e8 = (vector<unsigned int, eastl::allocator>*)CONCAT44(
                                                            local_1e8._4_4_, *puVar21);
                                                        pEVar18 = (Entity*)shared_ptr<LightSource>::operator->(
                                                            (shared_ptr<LightSource>*)psVar15);
                                                        this_03 = (compressed_pair_imp<
                                                                   std::deque<ThreadPool::TaskInfo,
                                                                              std::allocator<ThreadPool::TaskInfo>>*,
                                                                   eastl::allocator, 0>*)pEVar18->GetWorldPosition();
                                                        puVar21 = (undefined4*)eastl::compressed_pair_imp<
                                                            std::deque<ThreadPool::TaskInfo,
                                                                       std::allocator<ThreadPool::TaskInfo>>*,
                                                            eastl::allocator, 0>::second(this_03);
                                                        local_208 =
                                                            (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>,
                                                                                   eastl::allocator>>,
                                                                    eastl::fixed_vector_allocator<
                                                                        32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
                                                                CONCAT44(local_208._4_4_, *puVar21);
                                                        pLVar17 = (LightSource*)shared_ptr<LightSource>::operator->(
                                                            (shared_ptr<LightSource>*)psVar15);
                                                        local_1e0 = (vector<unsigned int, eastl::allocator>*)(double)
                                                                        local_1e0._0_4_;
                                                        local_1e8 = (vector<unsigned int, eastl::allocator>*)(double)
                                                                        local_1e8._0_4_;
                                                        local_208 =
                                                            (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>,
                                                                                   eastl::allocator>>,
                                                                    eastl::fixed_vector_allocator<
                                                                        32ul, 64ul, 8ul, 0ul, true,
                                                                        eastl::allocator>>*)(double)local_208._0_4_;
                                                        fVar38 = (float)pLVar17->GetCurrentIntensity();
                                                        eastl::basic_string<
                                                            char, eastl::fixed_vector_allocator<
                                                                      1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                                                            sprintf((char*)local_160, (int)local_1e0, local_1e8,
                                                                    local_208, (double)fVar38,
                                                                    "Light[%u, %u, %d, %d, %d, %u, "
                                                                    "%u]\n%0.3f,%0.3f,%0.3f\n%0.3f",
                                                                    (ulong)local_210 & 4294967295,
                                                                    (ulong)local_218 & 4294967295,
                                                                    (ulong)(uint)((int)fVar1 >> 7),
                                                                    (ulong)(uint)((int)fVar39 >> 7), uVar10,
                                                                    (float)local_1d8, uVar7);
                                                        plVar22 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                                                        if (plVar22 != (long*)0) {
                                                            pEVar18 = (Entity*)shared_ptr<LightSource>::operator->(
                                                                (shared_ptr<LightSource>*)psVar15);
                                                            uVar23 = pEVar18->GetWorldPosition();
                                                            pcVar32 = (char*)eastl::basic_string<
                                                                char, BucketAllocatorEASTL>::begin();
                                                            eastl::allocator::allocator(local_2d8,
                                                                                        "EASTL basic_string");
                                                            new (local_1c8) eastl::string(pcVar32, local_2d8);
                                                            new (local_2d0) oldscape::sidebars::SideBarData(-1, 0);
                                                            (**(code**)(*plVar22 + 136))(plVar22, uVar23, local_1c8,
                                                                                         (SideBarData*)local_2d0);
                                                            local_1c8->~basic_string();
                                                        }
                                                        local_1d8 =
                                                            CONCAT44(local_1d8._4_4_, (int)(float)local_1d8 + 1);
                                                        /* WARNING: Subroutine does not return */
                                                        local_160->~fixed_string();
                                                    }
                                                } while ((int)uVar11 < (int)m_showMaxLevel);
                                            }
                                            psVar15 = psVar15 + 1;
                                        } while (psVar15 != local_1d0);
                                    }
                                }
                                uVar11 = (int)local_218 + 1;
                            } while (uVar11 <= (uint)local_240);
                        }
                        uVar11 = (int)local_210 + 1;
                        local_210 =
                            (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                    eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
                                CONCAT44(local_210._4_4_, uVar11);
                    } while (uVar11 <= (uint)local_258);
                }
            }
        }
        pWVar3 = local_1f0;
        if (m_showFloorGrid != '\0') {
            pVVar14 = (Vector3T*)GetLastCameraPosition(local_1f0);
            psVar15 = (shared_ptr*)GetClosestMapSquare(pWVar3, pVVar14);
            bVar4 = shared_ptr::operator_cast_to_bool(psVar15);
            if (bVar4) {
                if ((m_showFloorGridUseWaterHeight == '\0') || (local_1f0->m_worldFocusLevel != 0)) {
                    pMVar16 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)psVar15);
                    this_00 = (shared_ptr*)pMVar16->GetHeightMap(local_1f0->m_worldFocusLevel);
                } else {
                    pMVar16 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)psVar15);
                    this_00 = (shared_ptr*)pMVar16->GetWaterHeights();
                }
                bVar4 = shared_ptr::operator_cast_to_bool(this_00);
                if (bVar4) {
                    local_208 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                        eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
                        shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::operator*((
                            shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>*)this_00);
                    new (local_160) Array<math::Vector3T<float>, eastl::allocator>(4225);
                    pvVar30 = (vector<unsigned int, eastl::allocator>*)0;
                    local_1d8 = 0;
                    do {
                        lVar36 = 0;
                        local_1e0 = pvVar30;
                        do {
                            this_04 = (Vector3T<float>*)Array<math::Vector3T<float>, eastl::allocator>::operator[](
                                (Array<math::Vector3T<float>, eastl::allocator>*)local_160, (ulong)pvVar30);
                            pMVar16 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)psVar15);
                            iVar6 = pMVar16->GetMapSquareX();
                            pMVar16 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)psVar15);
                            local_1d0 =
                                (shared_ptr*)CONCAT44(local_1d0._4_4_, (float)(uint)(iVar6 * 8192 + (int)lVar36));
                            iVar6 = pMVar16->GetMapSquareZ();
                            this_04->Set(local_1d0._0_4_, 0.0, (float)(uint)((iVar6 * 64 + (int)local_1d8) * 128));
                            lVar36 = lVar36 + 128;
                            pvVar30 = pvVar30 + 1;
                        } while (lVar36 != 8320);
                        local_1d8 = local_1d8 + 1;
                        pvVar30 = local_1e0 + 65;
                    } while (local_1d8 != 65);
                    uVar11 = eastl::vector<
                        Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                        eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(local_208);
                    if (0 < (int)uVar11) {
                        local_218 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                            eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>*)(ulong)uVar11;
                        local_1e8 = (vector<unsigned int, eastl::allocator>*)18446743790241710080;
                        pvVar33 =
                            (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                    eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)0;
                        do {
                            local_1e0 = (vector<unsigned int, eastl::allocator>*)
                                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)local_208,
                                    (ulong)pvVar33);
                            uVar11 = eastl::vector<unsigned int, eastl::allocator>::size(local_1e0);
                            if (0 < (int)uVar11) {
                                local_1d0 = (shared_ptr*)(ulong)uVar11;
                                uVar37 = 0;
                                pvVar30 = local_1e8;
                                do {
                                    if ((((int)uVar37 - 1U < 65) &&
                                         (pvVar33 !=
                                          (vector<
                                              Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                              eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>*)0)) &&
                                        (pvVar33 <
                                         (vector<
                                             Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                             eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true,
                                                                           eastl::allocator>>*)66)) {
                                        piVar19 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                            (vector<int, eastl::allocator>*)local_1e0, uVar37);
                                        iVar6 = *piVar19;
                                        pVVar20 =
                                            (Vector2T<int>*)Array<math::Vector3T<float>, eastl::allocator>::operator[](
                                                (Array<math::Vector3T<float>, eastl::allocator>*)local_160,
                                                (long)pvVar30 >> 32);
                                        local_1d8 = CONCAT44(local_1d8._4_4_, (float)iVar6);
                                        puVar21 = (undefined4*)pVVar20->y();
                                        *puVar21 = (float)local_1d8;
                                    }
                                    uVar37 = uVar37 + 1;
                                    pvVar30 = pvVar30 + 279172874240;
                                } while (local_1d0 != (shared_ptr*)uVar37);
                            }
                            pvVar33 = pvVar33 + 1;
                            local_1e8 = local_1e8 + 4294967296;
                        } while (pvVar33 != local_218);
                    }
                    local_1e0 = (vector<unsigned int, eastl::allocator>*)&DAT_00000001;
                    local_1d8 = 0;
                    local_1d0 = (shared_ptr*)0;
                    do {
                        uVar37 = 0;
                        do {
                            if ((local_1d0 < 64) && (plVar22 = (long*)DebugPrimitiveCollectorBasic::GetCollector(""),
                                                     plVar22 != (long*)0)) {
                                uVar23 = Array<math::Vector3T<float>, eastl::allocator>::operator[](
                                    (Array<math::Vector3T<float>, eastl::allocator>*)local_160, local_1d8 + uVar37);
                                uVar24 = Array<math::Vector3T<float>, eastl::allocator>::operator[](
                                    (Array<math::Vector3T<float>, eastl::allocator>*)local_160,
                                    local_1d8 + uVar37 + 65);
                                oldscape::sidebars::SideBarData::SideBarData(local_1c8, -10420225, 1);
                                (**(code**)(*plVar22 + 24))(plVar22, uVar23, uVar24, local_1c8);
                            }
                            if ((uVar37 < 64) && (plVar22 = (long*)DebugPrimitiveCollectorBasic::GetCollector(""),
                                                  plVar22 != (long*)0)) {
                                uVar23 = Array<math::Vector3T<float>, eastl::allocator>::operator[](
                                    (Array<math::Vector3T<float>, eastl::allocator>*)local_160, local_1d8 + uVar37);
                                uVar24 = Array<math::Vector3T<float>, eastl::allocator>::operator[](
                                    (Array<math::Vector3T<float>, eastl::allocator>*)local_160,
                                    (ulong)(local_1e0 + uVar37));
                                oldscape::sidebars::SideBarData::SideBarData(local_1c8, -10420225, 1);
                                (**(code**)(*plVar22 + 24))(plVar22, uVar23, uVar24, local_1c8);
                            }
                            uVar37 = uVar37 + 1;
                        } while (uVar37 != 65);
                        local_1d0 = (shared_ptr*)((long)local_1d0 + 1);
                        local_1e0 = local_1e0 + 65;
                        local_1d8 = local_1d8 + 65;
                    } while (local_1d0 != (shared_ptr*)65);
                    local_160->~Array();
                }
            }
        }
        pWVar3 = local_1f0;
        if (m_showHeightMap != '\0' || m_showHeightMapRest != '\0') {
            local_238.field_0 = -2.9907628e+38;
            local_238.field_4 = -2.565371e+38;
            local_238.field_8 = -NAN;
            local_238._12_4_ = 4294934656;
            pVVar14 = (Vector3T*)GetLastCameraPosition(local_1f0);
            local_1d0 = (shared_ptr*)GetClosestMapSquare(pWVar3, pVVar14);
            bVar4 = shared_ptr::operator_cast_to_bool(local_1d0);
            if ((bVar4) && (m_showHeightMap != '\0')) {
                fVar39 = m_showMinLevel;
                if (m_showHeightMapRest != '\0') {
                    fVar39 = m_showMaxLevel;
                }
                if ((float)(int)m_showMinLevel < fVar39 + 1.0) {
                    ptVar35 = (type*)(long)(int)m_showMinLevel;
                    do {
                        pMVar16 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)local_1d0);
                        local_1e0 = (vector<unsigned int, eastl::allocator>*)ptVar35;
                        psVar15 = (shared_ptr*)pMVar16->GetHeightMap((int)ptVar35);
                        bVar4 = shared_ptr::operator_cast_to_bool(psVar15);
                        if (bVar4) {
                            local_2d0._8_8_ =
                                shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::
                                operator*(
                                    (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>*)
                                        psVar15);
                            uVar11 = local_2d0._8_8_->size();
                            if (0 < (int)uVar11) {
                                local_2c0 = (ulong)uVar11;
                                uVar37 = 0;
                                do {
                                    local_258 = uVar37;
                                    local_240 = (vector<int, eastl::allocator>*)eastl::
                                        vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                                            (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)
                                                local_2d0._8_8_,
                                            uVar37);
                                    uVar11 = local_240->size();
                                    if (0 < (int)uVar11) {
                                        pvVar33 =
                                            (vector<
                                                Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                                eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>*)(local_258 - 1);
                                        local_260 = -(ulong)uVar11;
                                        local_208 =
                                            (vector<
                                                Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                                eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>*)0;
                                        local_210 = pvVar33;
                                        puVar25 = (uint*)eastl::vector<int, eastl::allocator>::operator[](local_240, 0);
                                        uVar11 = *puVar25;
                                        new (local_160) eastl::fixed_string<char, 128, true, eastl::allocator>();
                                        pMVar16 = (MapSquare*)shared_ptr<MapSquare>::operator->(
                                            (shared_ptr<MapSquare>*)local_1d0);
                                        uVar34 = (uint)pvVar33;
                                        uVar12 = pMVar16->GetTileLink((int)local_1e0, uVar34, -1);
                                        local_1d8 = 18446744073709551615;
                                        pMVar16 = (MapSquare*)shared_ptr<MapSquare>::operator->(
                                            (shared_ptr<MapSquare>*)local_1d0);
                                        uVar13 = pMVar16->GetRemoveRoofID((int)local_1e0 + 1, uVar34, (int)local_1d8);
                                        if (uVar12 != 4294967295) {
                                            pcVar32 = ":";
                                            if ((uVar12 & 4) != 0) {
                                                if ((int)uVar13 < 1) {
                                                    eastl::basic_string<
                                                        char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::
                                                    operator+=((basic_string<char, eastl::fixed_vector_allocator<
                                                                                       1ul, 4096ul, 1ul, 0ul, true,
                                                                                       eastl::allocator>>*)local_160,
                                                               ":");
                                                    eastl::basic_string<
                                                        char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::
                                                    operator+=((basic_string<char, eastl::fixed_vector_allocator<
                                                                                       1ul, 4096ul, 1ul, 0ul, true,
                                                                                       eastl::allocator>>*)local_160,
                                                               "roof");
                                                    pcVar32 = ",";
                                                } else {
                                                    eastl::basic_string<
                                                        char, eastl::fixed_vector_allocator<1ul, 128ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::
                                                        append_sprintf((char*)local_160, "%sroof(%d)", ":",
                                                                       (ulong)uVar13);
                                                    pcVar32 = ",";
                                                }
                                            }
                                            if ((uVar12 & 2) != 0) {
                                                eastl::basic_string<
                                                    char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true,
                                                                                        eastl::allocator>>::
                                                operator+=(
                                                    (basic_string<
                                                        char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>*)
                                                        local_160,
                                                    pcVar32);
                                                eastl::basic_string<
                                                    char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true,
                                                                                        eastl::allocator>>::
                                                operator+=(
                                                    (basic_string<
                                                        char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>*)
                                                        local_160,
                                                    "link");
                                                pcVar32 = ",";
                                            }
                                            if ((uVar12 & 8) != 0) {
                                                eastl::basic_string<
                                                    char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true,
                                                                                        eastl::allocator>>::
                                                operator+=(
                                                    (basic_string<
                                                        char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>*)
                                                        local_160,
                                                    pcVar32);
                                                eastl::basic_string<
                                                    char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true,
                                                                                        eastl::allocator>>::
                                                operator+=(
                                                    (basic_string<
                                                        char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>*)
                                                        local_160,
                                                    "visbelow");
                                            }
                                        }
                                        new (local_1c8) eastl::fixed_string<char, 64, true, eastl::allocator>();
                                        uVar37 = local_1d8;
                                        uVar12 = (uint)local_1d8;
                                        uVar23 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                        if (((uVar34 | uVar12) & 7) == 0) {
                                            pcVar32 = "[%d,%d] %d%s";
                                            eastl::basic_string<char,
                                                                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                              eastl::allocator>>::
                                                sprintf((char*)local_1c8, "[%d,%d] %d%s", (ulong)pvVar33 & 4294967295,
                                                        uVar37 & 4294967295, (ulong)uVar11, uVar23);
                                        } else {
                                            pcVar32 = "%d%s";
                                            eastl::basic_string<char, eastl::fixed_vector_allocator<
                                                                          1ul, 64ul, 1ul, 0ul, true,
                                                                          eastl::allocator>>::sprintf((char*)local_1c8,
                                                                                                      "%d%s",
                                                                                                      (ulong)uVar11,
                                                                                                      uVar23);
                                        }
                                        new (&local_200) math::Vector3T<int>();
                                        pMVar16 = (MapSquare*)shared_ptr<MapSquare>::operator->(
                                            (shared_ptr<MapSquare>*)local_1d0);
                                        iVar6 = pMVar16->GetMapSquareX();
                                        local_1e8._0_4_ = (float)((iVar6 * 64 + uVar34) * 128);
                                        pvVar26 = local_200.SSOBeginPtr(pcVar32);
                                        *(float*)pvVar26 = local_1e8._0_4_;
                                        pMVar16 = (MapSquare*)shared_ptr<MapSquare>::operator->(
                                            (shared_ptr<MapSquare>*)local_1d0);
                                        iVar6 = pMVar16->GetMapSquareZ();
                                        local_218 =
                                            (vector<
                                                Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                                eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>*)
                                                CONCAT44(local_218._4_4_, 4294967168);
                                        local_1e8._0_4_ = (float)(iVar6 * 8192 - 128);
                                        pfVar27 = (float*)local_200.second();
                                        *pfVar27 = local_1e8._0_4_;
                                        local_1e8 = (vector<unsigned int, eastl::allocator>*)CONCAT44(
                                            local_1e8._4_4_, (float)(int)uVar11);
                                        puVar21 = (undefined4*)local_200.y();
                                        *puVar21 = local_1e8._0_4_;
                                        plVar22 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                                        if (plVar22 != (long*)0) {
                                            pcVar32 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                            new (&local_250) eastl::allocator("EASTL basic_string");
                                            new (local_280) eastl::string(pcVar32, (allocator*)&local_250);
                                            piVar19 = (int*)std::array<unsigned int, 4ul>::operator[](
                                                (array<unsigned int, 4ul>*)&local_238, (ulong)local_1e0);
                                            new (&local_290) oldscape::sidebars::SideBarData(*piVar19, 0);
                                            (**(code**)(*plVar22 + 136))(plVar22, &local_200, local_280, &local_290);
                                            local_280->~basic_string();
                                            pvVar33 = local_210;
                                        }
                                        this_05 = (Location*)shared_ptr<MapSquare>::operator->(
                                            (shared_ptr<MapSquare>*)local_1d0);
                                        uVar37 = local_1d8;
                                        this_06 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                                      this_05->GetParentLocationType();
                                        pTVar28 =
                                            (Terrain*)std::unique_ptr<
                                                Terrain,
                                                MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(this_06);
                                        pvVar30 = local_1e0;
                                        uVar11 = pTVar28->GetLocationHeightOffset(
                                            local_1e0, (ulong)pvVar33 & 4294967295, uVar37 & 4294967295, 2);
                                        if (uVar11 != 0) {
                                            pvVar26 = local_200.SSOBeginPtr(pvVar30);
                                            *(float*)pvVar26 = *(float*)pvVar26 + 64.0;
                                            pfVar27 = (float*)local_200.second();
                                            *pfVar27 = *pfVar27 + 64.0;
                                            local_250.field_8 = local_200.field_8;
                                            local_250.field_0 = local_200.field_0;
                                            local_250.field_4 = local_200.field_4;
                                            local_1e8 = (vector<unsigned int, eastl::allocator>*)CONCAT44(
                                                local_1e8._4_4_, (float)(int)uVar11);
                                            pfVar27 = (float*)local_250.y();
                                            *pfVar27 = local_1e8._0_4_ + *pfVar27;
                                            eastl::basic_string<char, eastl::fixed_vector_allocator<
                                                                          1ul, 64ul, 1ul, 0ul, true,
                                                                          eastl::allocator>>::sprintf((char*)local_1c8,
                                                                                                      "^%d",
                                                                                                      (ulong)uVar11);
                                            puVar25 = (uint*)std::array<unsigned int, 4ul>::operator[](
                                                (array<unsigned int, 4ul>*)&local_238, (ulong)local_1e0);
                                            new (local_228) math::ColourStorage8888<math::ARGB8StorageLayout>(*puVar25);
                                            uVar7 = math::operator*(local_228._0_8_ & 4294967295);
                                            local_228._0_4_ = uVar7;
                                            plVar22 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                                            if (plVar22 != (long*)0) {
                                                pcVar32 =
                                                    (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                                new (&local_290) eastl::allocator("EASTL basic_string");
                                                new (local_280) eastl::string(pcVar32, (allocator*)&local_290);
                                                iVar6 = local_228->GetX();
                                                new (&local_2a0) oldscape::sidebars::SideBarData(iVar6, 0);
                                                (**(code**)(*plVar22 + 136))(plVar22, &local_250, local_280,
                                                                             &local_2a0);
                                                local_280->~basic_string();
                                            }
                                            plVar22 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                                            if (plVar22 != (long*)0) {
                                                iVar6 = local_228->GetX();
                                                new (local_280) oldscape::sidebars::SideBarData(iVar6, 3);
                                                (**(code**)(*plVar22 + 24))(plVar22, &local_200, &local_250, local_280);
                                            }
                                        }
                                        /* WARNING: Subroutine does not return */
                                        local_1c8->~fixed_string();
                                    }
                                    uVar37 = local_258 + 1;
                                } while (uVar37 != local_2c0);
                            }
                        }
                        ptVar35 = (type*)(local_1e0 + 1);
                        pfVar27 = &m_showMaxLevel;
                        if (m_showHeightMapRest == '\0') {
                            pfVar27 = &m_showMinLevel;
                        }
                    } while ((float)(int)ptVar35 < *pfVar27 + 1.0);
                }
            }
        }
        pWVar3 = local_1f0;
        if (m_showWaterHeights != '\0') {
            pVVar14 = (Vector3T*)GetLastCameraFocusPosition(local_1f0);
            local_1d0 = (shared_ptr*)GetClosestMapSquare(pWVar3, pVVar14);
            bVar4 = shared_ptr::operator_cast_to_bool(local_1d0);
            if (bVar4) {
                pMVar16 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)local_1d0);
                psVar15 = (shared_ptr*)pMVar16->GetWaterHeights();
                bVar4 = shared_ptr::operator_cast_to_bool(psVar15);
                if (bVar4) {
                    local_218 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                        eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
                        shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::operator*((
                            shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>*)psVar15);
                    uVar11 = eastl::vector<
                        Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                        eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(local_218);
                    if (0 < (int)uVar11) {
                        local_210 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                            eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>*)(ulong)uVar11;
                        pvVar33 =
                            (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                    eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)0;
                        do {
                            local_1e8 = (vector<unsigned int, eastl::allocator>*)
                                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)local_218,
                                    (ulong)pvVar33);
                            uVar11 = eastl::vector<unsigned int, eastl::allocator>::size(local_1e8);
                            if (0 < (int)uVar11) {
                                local_1e0 = (vector<unsigned int, eastl::allocator>*)(ulong)uVar11;
                                iVar6 = -128;
                                ptVar35 = (type*)0;
                                local_208 = pvVar33;
                                do {
                                    pMVar16 = (MapSquare*)shared_ptr<MapSquare>::operator->(
                                        (shared_ptr<MapSquare>*)local_1d0);
                                    iVar8 = (int)pvVar33 + -1;
                                    cVar5 = pMVar16->GetUnderworldData(iVar8, (int)ptVar35 + -1);
                                    if (cVar5 != '\0') {
                                        puVar25 = (uint*)eastl::vector<int, eastl::allocator>::operator[](
                                            (vector<int, eastl::allocator>*)local_1e8, (ulong)ptVar35);
                                        uVar11 = *puVar25;
                                        new (local_160) eastl::fixed_string<char, 64, true, eastl::allocator>();
                                        pcVar32 = "%d";
                                        eastl::basic_string<char, eastl::fixed_vector_allocator<
                                                                      1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                                            sprintf((char*)local_160, "%d", (ulong)uVar11);
                                        new (local_280) math::Vector3T<int>();
                                        pMVar16 = (MapSquare*)shared_ptr<MapSquare>::operator->(
                                            (shared_ptr<MapSquare>*)local_1d0);
                                        iVar9 = pMVar16->GetMapSquareX();
                                        local_1d8._0_4_ = (float)(uint)((iVar9 * 64 + iVar8) * 128);
                                        pvVar26 = local_280->SSOBeginPtr(pcVar32);
                                        *(float*)pvVar26 = (float)local_1d8;
                                        pMVar16 = (MapSquare*)shared_ptr<MapSquare>::operator->(
                                            (shared_ptr<MapSquare>*)local_1d0);
                                        iVar8 = pMVar16->GetMapSquareZ();
                                        local_1d8._0_4_ = (float)(uint)(iVar8 * 8192 + iVar6);
                                        pfVar27 = (float*)local_280->second();
                                        *pfVar27 = (float)local_1d8;
                                        local_1d8 = CONCAT44(local_1d8._4_4_, (float)(int)uVar11);
                                        puVar21 = (undefined4*)local_280->y();
                                        *puVar21 = (float)local_1d8;
                                        plVar22 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                                        if (plVar22 != (long*)0) {
                                            pcVar32 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                            new (&local_238) eastl::allocator("EASTL basic_string");
                                            new (local_1c8) eastl::string(pcVar32, (allocator*)&local_238);
                                            new (&local_200) oldscape::sidebars::SideBarData(-11184641, 0);
                                            (**(code**)(*plVar22 + 136))(plVar22, local_280, local_1c8, &local_200);
                                            local_1c8->~basic_string();
                                        }
                                        /* WARNING: Subroutine does not return */
                                        local_160->~fixed_string();
                                    }
                                    ptVar35 = ptVar35 + 1;
                                    iVar6 = iVar6 + 128;
                                } while (local_1e0 != (vector<unsigned int, eastl::allocator>*)ptVar35);
                            }
                            pvVar33 = pvVar33 + 1;
                        } while (pvVar33 != local_210);
                    }
                }
            }
        }
        if (m_showCurrentSkyBoxMap == '\0') {
            fVar39 = 1.0;
        } else {
            this_07 = (ModelMaterial*)shared_ptr<graphics::SkyBox>::operator->(
                (shared_ptr<graphics::SkyBox>*)local_1f0->m_skyBox);
            pvVar29 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_07->GetRefractionParams();
            lVar36 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar29);
            plVar22 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (lVar36 == 0) {
                if (plVar22 != (long*)0) {
                    new (local_1c8) math::Point<float>(0.01, 0.95);
                    new (local_280) eastl::allocator("EASTL basic_string");
                    new (local_160) eastl::string("No current sky box map set!", local_280);
                    new (&local_200) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 64, 64);
                    iVar6 = local_200.GetX();
                    new (&local_238) oldscape::sidebars::SideBarData(iVar6, 0);
                    (**(code**)(*plVar22 + 144))(plVar22, local_1c8, local_160, &local_238);
                    local_160->~basic_string();
                }
                fVar39 = 0.95;
            } else {
                if (plVar22 != (long*)0) {
                    new (local_160) ImVec4(0.01, 0.725, 0.25, 0.25);
                    new (local_280) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 255, 255);
                    iVar6 = local_280->GetX();
                    oldscape::sidebars::SideBarData::SideBarData(local_1c8, iVar6, 0);
                    (**(code**)(*plVar22 + 120))(plVar22, lVar36, local_160, 0, 0, local_1c8);
                }
                fVar39 = 0.725;
            }
        }
        local_1d0._0_4_ = fVar39;
        if (m_showDefaultEnvironmentMap != '\0') {
            pvVar29 =
                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)GetDefaultEnvironmentMap(local_1f0);
            lVar36 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar29);
            if (lVar36 == 0) {
                local_1d0._0_4_ = local_1d0._0_4_ + -0.05;
                plVar22 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar22 != (long*)0) {
                    new (local_1c8) math::Point<float>(0.01, local_1d0._0_4_);
                    new (local_280) eastl::allocator("EASTL basic_string");
                    new (local_160) eastl::string("No default environment map set!", local_280);
                    new (&local_200) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 64, 64);
                    iVar6 = local_200.GetX();
                    new (&local_238) oldscape::sidebars::SideBarData(iVar6, 0);
                    (**(code**)(*plVar22 + 144))(plVar22, local_1c8, local_160, &local_238);
                    local_160->~basic_string();
                }
            } else {
                local_1d0._0_4_ = local_1d0._0_4_ + -0.275;
                plVar22 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar22 != (long*)0) {
                    new (local_160) ImVec4(0.01, local_1d0._0_4_, 0.25, 0.25);
                    new (local_280) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 255, 255);
                    iVar6 = local_280->GetX();
                    oldscape::sidebars::SideBarData::SideBarData(local_1c8, iVar6, 0);
                    (**(code**)(*plVar22 + 120))(plVar22, lVar36, local_160, 0, 0, local_1c8);
                }
            }
        }
        if (m_showCurrentEnvironmentMap != '\0') {
            lVar36 = local_1f0->field_950648->end();
            plVar22 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (lVar36 == 0) {
                if (plVar22 != (long*)0) {
                    new (local_1c8) math::Point<float>(0.01, local_1d0._0_4_ + -0.05);
                    new (local_280) eastl::allocator("EASTL basic_string");
                    new (local_160) eastl::string("No current environment map set!", local_280);
                    new (&local_200) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 64, 64);
                    iVar6 = local_200.GetX();
                    new (&local_238) oldscape::sidebars::SideBarData(iVar6, 0);
                    (**(code**)(*plVar22 + 144))(plVar22, local_1c8, local_160, &local_238);
                    local_160->~basic_string();
                }
            } else if (plVar22 != (long*)0) {
                new (local_160) ImVec4(0.01, local_1d0._0_4_ + -0.275, 0.25, 0.25);
                new (local_280) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 255, 255);
                iVar6 = local_280->GetX();
                oldscape::sidebars::SideBarData::SideBarData(local_1c8, iVar6, 0);
                (**(code**)(*plVar22 + 120))(plVar22, lVar36, local_160, 0, 0, local_1c8);
            }
        }
        pWVar3 = local_1f0;
        pVVar2 = local_2b8;
        SceneRenderManager::RenderDebug((Viewport*)local_1f0->m_worldRenderer);
        this_08 = (EffectManager*)pWVar3->field_24->GetEffectManager();
        this_08->RenderDebug(pVVar2);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1004414f0, 160 bytes, placed by class name
    // World::UpdatePickableEntities(unsigned int, CoordFine const&)
    void World::UpdatePickableEntities(uint param_1, CoordFine* param_2) {
        shared_ptr* psVar1;
        SkyBox* this_00;
        GraphNode* pGVar2;
        bool bVar3;

        m_pickableEntities->clear();
        psVar1 = (shared_ptr*)GetCentreSquare(this);
        bVar3 = shared_ptr::operator_cast_to_bool(psVar1);
        if (bVar3) {
            psVar1 = (shared_ptr*)GetCurrentEnvironmentSettings(this);
            bVar3 = shared_ptr::operator_cast_to_bool(psVar1);
            if (bVar3) {
                this_00 = (SkyBox*)shared_ptr<graphics::SkyBox>::operator->((shared_ptr<graphics::SkyBox>*)m_skyBox);
                if (this_00->IsReady() != '\0') {
                    (&field_950776, (Vector3T*)&param_2->field_4)->SetXYZ();
                    pGVar2 = (GraphNode*)(&field_65744)->GetRoot();
                    AddPickableEntities(this, param_1, pGVar2, 1);
                }
            }
        }
    }

    // 0x100441590, 112 bytes, placed by class name
    // World::RenderLightProbeEnvMaps(unsigned int, unsigned int, int, World::LoadingState)
    void World::RenderLightProbeEnvMaps(World* param_1, uint param_2, uint param_3, int param_4, int param_5) {
        EffectManager* pEVar1;
        LightProbeManager* this;

        pEVar1 = (EffectManager*)GetEffectManager(param_1);
        if (pEVar1->IsEnabled(21) != '\0') {
            this = (LightProbeManager*)
                       std::unique_ptr<LightProbeManager, std::default_delete<LightProbeManager>>::operator->(
                           (unique_ptr<LightProbeManager, std::default_delete<LightProbeManager>>*)&param_1->field_72);
            RenderPendingEnvMaps(param_2, param_3, param_4, param_5 != 2);
        }
    }

    // 0x1004417f0, 288 bytes, placed by class name
    // World::SetNewEnvironmentParameters(MapEnvironmentSettings const&, bool, long long, float, float)
    void World::SetNewEnvironmentParameters(MapEnvironmentSettings* param_1, bool param_2, longlong param_3,
                                            float param_4, float param_5) {
        byte bVar1;
        bool bVar2;
        int iVar4;
        EffectManager* pEVar5;
        PostProcessController* this_00;
        Config* pCVar6;
        SkyBox* this_01;
        CoordMapSquare* this_02;
        LightProbeManager* this_03;
        undefined7 in_register_00000011;

        if ((int)CONCAT71(in_register_00000011, param_2) != 0) {
            param_3 = 0;
        }
        pEVar5 = (EffectManager*)GetEffectManager(this);
        bVar1 = pEVar5->IsEnabled(7);
        bVar2 = (bool)(bVar1 & (byte)m_gammaCorrectEnvInputs);
        SetLightingFromEnv(pEVar5, param_1, param_3, field_950768, bVar2);
        SetFogScatteringFromEnv(pEVar5, param_1, param_3, bVar2, (LODSettings*)&field_950740, param_4, param_5);
        SetVolumetricsFromEnv(pEVar5, param_1, param_3);
        this_00 = (PostProcessController*)m_pRT7Core->GetPostProcessController();
        pCVar6 = (Config*)this_00->GetCurrentConfig();
        SetPostProcessingFromEnv(pCVar6, pEVar5, param_1, param_3, bVar2);
        this_01 = (SkyBox*)shared_ptr<graphics::SkyBox>::operator->((shared_ptr<graphics::SkyBox>*)m_skyBox);
        this_02 = (CoordMapSquare*)param_1->GetDynamicChildren();
        iVar4 = this_02->GetX();
        this_01->SetPendingSkyID(iVar4, param_3);
        pEVar5 = (EffectManager*)GetEffectManager(this);
        if (pEVar5->IsEnabled(21) != '\0') {
            this_03 = (LightProbeManager*)GetLightProbeManager(this);
            this_03->AddAllExistingMapSquaresToUpdateList();
        }
    }

    // 0x100441a70, 256 bytes, placed by class name
    // World::UpdateFogEffect(float, float, unsigned int)
    void World::UpdateFogEffect(float param_1, float param_2, uint param_3) {
        undefined1* this_00;
        uint uVar2;
        EffectManager* pEVar3;
        SunlightDirectLighting* this_01;
        fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>* pfVar4;
        EntityHighlightGlobalState* this_02;
        CommandLine* this_03;
        ulonglong uVar5;
        float fVar6;
        undefined8 local_40;
        float local_30;
        float local_2c;

        this_00 = m_currentEnvironmentSettings;
        if (operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0)) {
            pEVar3 = (EffectManager*)GetEffectManager(this);
            this_01 = graphics::EffectManager::GetEffect<graphics::SunlightDirectLighting>(pEVar3, 57);
            local_30 = 0.0;
            local_2c = 0.0;
            pfVar4 = (fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>*)
                         shared_ptr<MapEnvironmentSettings>::operator->((shared_ptr<MapEnvironmentSettings>*)this_00);
            this_02 = (EntityHighlightGlobalState*)eastl::fixed_hashtable_allocator<
                10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>::get_overflow_allocator(pfVar4);
            fVar6 = (float)this_02->GetOutlineRadiusAdjustment();
            graphics::FogEffect::CalculateFogNearFarPlane(&local_30, &local_2c, param_1, param_2, fVar6);
            pfVar4 = (fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>*)
                         shared_ptr<MapEnvironmentSettings>::operator->((shared_ptr<MapEnvironmentSettings>*)this_00);
            this_03 = (CommandLine*)eastl::fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true,
                                                                     eastl::allocator>::get_overflow_allocator(pfVar4);
            uVar2 = this_03->GetPos();
            local_40 = (&field_950740, uVar2, local_30, local_2c)->GetFogRange();
            uVar5 = FrameTime::GetCurrentTimeMS();
            this_01->SetFogDistance((pair*)&local_40, (ulong)param_3, uVar5);
            this_01->Update();
        }
    }

    // 0x100441e70, 16 bytes, placed by class name
    // World::Preload(unsigned int, math::Vector3T<float> const&, eastl::bitset<6ul, unsigned long long> const&)
    void World::Preload(uint param_1, Vector3T* param_2, bitset* param_3) {
        Build();
    }

    // 0x100441e80, 1376 bytes, placed by class name
    // World::Build(unsigned int, math::Vector3T<float> const&, eastl::bitset<6ul, unsigned long long> const&, World::LoadingState)
    int World::Build(World* param_1, float param_2, Vector3T<float>* param_3, bitset* param_4, int param_5,
                     undefined8 param_6) {
        undefined1* this;
        undefined1 uVar1;
        char cVar2;
        bool bVar3;
        uint uVar4;
        float* pfVar5;
        int* piVar6;
        int* piVar7;
        vector<MapSquareStatus, eastl::allocator>* pvVar8;
        shared_ptr* psVar9;
        undefined8 uVar10;
        MapSquare* pMVar11;
        ulong uVar12;
        LightProbeManager* pLVar13;
        shared_ptr<MapSquare>* this_00;
        Entity* this_01;
        GraphNode* this_02;
        float fVar15;
        float fVar16;
        float local_60;
        undefined4 local_5c;
        int local_58;
        int local_54;
        undefined4 local_4c;
        vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>* local_48;
        float local_3c;
        undefined8 local_38;

        local_3c = param_2;
        cVar2 = (&param_1->field_950616)->empty();
        if (cVar2 == '\0') {
            (&param_1->field_950616)->clear();
        }
        if (((*(float*)param_3 == 0.0) && (*(float*)(param_3 + 4) == 0.0)) && (*(float*)(param_3 + 8) == 0.0)) {
            return 0;
        }
        pfVar5 = (float*)math::Vector3T<float>::operator[](param_3, 0);
        fVar15 = (float)floor(*pfVar5 * 0.0009765625);
        pfVar5 = (float*)math::Vector3T<float>::operator[](param_3, 2);
        fVar16 = (float)floor(*pfVar5 * 0.0009765625);
        if ((*(int*)&param_1->field_81728 == (int)fVar15) &&
            (*(int*)((long)&param_1->field_81728 + 4) == (int)fVar16)) {
            local_5c = 0;
        } else {
            local_5c = (undefined4)CONCAT71((int7)((ulong)param_4 >> 8), 1);
        }
        *(int*)&param_1->field_81728 = (int)fVar15;
        *(int*)((long)&param_1->field_81728 + 4) = (int)fVar16;
        if (((char)local_5c != '\0') || (param_1->field_950764 != '\0')) {
            CalculateTargetBuildAreaAndPriority(param_1, (Vector3T*)param_3);
        }
        this = &param_1->field_81624;
        piVar6 = (int*)HeapBeginPtr();
        piVar7 = (int*)end();
        local_48 = (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)&param_1->field_81672;
        local_4c = (undefined4)CONCAT71((int7)((ulong)local_48 >> 8), 1);
        if (piVar6 != piVar7) {
            uVar1 = (char)local_5c;
            do {
                pvVar8 = (vector<MapSquareStatus, eastl::allocator>*)
                    eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                        local_48, (long)*piVar6 - (long)(int)param_1->m_mapSquareMinX);
                psVar9 = (shared_ptr*)eastl::vector<MapSquareStatus, eastl::allocator>::operator[](
                    pvVar8, (long)piVar6[1] - (long)param_1->m_mapSquareMinZ);
                uVar10 = BuildMapSquare(param_1, piVar6, param_3, uVar1, local_3c, param_6, param_5);
                *(undefined8*)(psVar9 + 1) = uVar10;
                bVar3 = shared_ptr::operator_cast_to_bool(psVar9);
                if (bVar3) {
                    bVar3 = shared_ptr::operator_cast_to_bool(psVar9);
                    if (bVar3) {
                        pMVar11 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)psVar9);
                        cVar2 = pMVar11->HasBuiltPriorityZones();
                        if (cVar2 == '\0') {
                            pMVar11 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)psVar9);
                            cVar2 = pMVar11->IsPrioritySquare();
                            if (cVar2 != '\0')
                                goto LAB_100441fd0;
                        }
                    }
                } else {
                LAB_100441fd0:
                    local_4c = 0;
                }
                piVar6 = piVar6 + 4;
            } while (piVar6 != piVar7);
        }
        param_1->field_81620 = (byte)local_4c & 1;
        pfVar5 = (float*)math::Vector3T<float>::operator[](param_3, 0);
        fVar15 = (float)floor(*pfVar5 * 0.00012207031);
        local_58 = (int)fVar15;
        pfVar5 = (float*)math::Vector3T<float>::operator[](param_3, 2);
        fVar15 = (float)floor(*pfVar5 * 0.00012207031);
        local_54 = (int)fVar15;
        if (((((int)param_1->m_mapSquareMinX <= local_58) && (local_58 <= param_1->m_mapSquareMaxX)) &&
             (param_1->m_mapSquareMinZ <= local_54)) &&
            (local_54 <= param_1->m_mapSquareMaxZ)) {
            pvVar8 = (vector<MapSquareStatus, eastl::allocator>*)
                eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                    local_48, (long)(int)(local_58 - param_1->m_mapSquareMinX));
            psVar9 = (shared_ptr*)eastl::vector<MapSquareStatus, eastl::allocator>::operator[](
                pvVar8, (long)local_54 - (long)param_1->m_mapSquareMinZ);
            bVar3 = shared_ptr::operator_cast_to_bool(psVar9);
            if (bVar3) {
                pvVar8 = (vector<MapSquareStatus, eastl::allocator>*)
                    eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                        local_48, (long)local_58 - (long)(int)param_1->m_mapSquareMinX);
                psVar9 = (shared_ptr*)eastl::vector<MapSquareStatus, eastl::allocator>::operator[](
                    pvVar8, (long)local_54 - (long)param_1->m_mapSquareMinZ);
                shared_ptr<MapSquare>::operator=((shared_ptr<MapSquare>*)param_1->m_centreSquare, psVar9);
                local_38 = eastl::make_pair<int, int&>(&local_58, &local_54);
                eastl::pair<unsigned int, unsigned int>::operator=(
                    (pair<unsigned int, unsigned int>*)&param_1->field_81720, (pair*)&local_38);
            }
        }
        if (((char)local_5c != '\0') || (param_1->field_950764 != '\0')) {
            RemoveExcessMapSquares(param_1);
        }
        SetEntityLoadMetrics(param_1, param_4);
        local_38._0_4_ = 1.0;
        cVar2 = empty();
        if (cVar2 == '\0') {
            uVar4 = GetNumMapSquaresLoaded(param_1, param_5);
            local_3c = (float)uVar4;
            uVar12 = size();
            local_38._0_4_ = local_3c / (float)uVar12;
        }
        cVar2 = param_4->test(5);
        if ((cVar2 != '\0') && (param_5 != 0)) {
            pLVar13 =
                (LightProbeManager*)
                    std::unique_ptr<LightProbeManager, std::default_delete<LightProbeManager>>::operator->(
                        (unique_ptr<LightProbeManager, std::default_delete<LightProbeManager>>*)&param_1->field_72);
            cVar2 = pLVar13->IsAnyMapSquareUpdating();
            if (cVar2 != '\0') {
                pLVar13 =
                    (LightProbeManager*)
                        std::unique_ptr<LightProbeManager, std::default_delete<LightProbeManager>>::operator->(
                            (unique_ptr<LightProbeManager, std::default_delete<LightProbeManager>>*)&param_1->field_72);
                uVar4 = pLVar13->GetNumMapSquaresUpdating();
                local_48 = (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)CONCAT44(
                    local_48._4_4_, (float)uVar4);
                uVar12 = size();
                local_38 = CONCAT44(local_38._4_4_, (1.0 - local_48._0_4_ / (float)uVar12) * (float)local_38);
                local_60 = 0.75;
                pfVar5 = std::min<float>((float*)&local_38, &local_60);
                local_38._0_4_ = *pfVar5;
                goto LAB_1004423aa;
            }
        }
        cVar2 = HighPriorityMapSquaresConstructed(param_1);
        if (cVar2 == '\0') {
            local_38._0_4_ = 0.0;
        } else {
            piVar6 = (int*)HeapBeginPtr();
            piVar7 = (int*)end();
            for (; piVar6 != piVar7; piVar6 = piVar6 + 4) {
                if (piVar6[2] == 0) {
                    pvVar8 = (vector<MapSquareStatus, eastl::allocator>*)
                        eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                            local_48, (long)*piVar6 - (long)(int)param_1->m_mapSquareMinX);
                    this_00 = (shared_ptr<MapSquare>*)eastl::vector<MapSquareStatus, eastl::allocator>::operator[](
                        pvVar8, (long)piVar6[1] - (long)param_1->m_mapSquareMinZ);
                    this_01 = (Entity*)shared_ptr<MapSquare>::operator->(this_00);
                    this_02 = (GraphNode*)this_01->GetNode();
                    fVar15 = (float)this_02->GetEntityLoadPercentage();
                    local_38._0_4_ = fVar15 * 0.01 * (float)local_38;
                }
            }
        }
    LAB_1004423aa:
        param_1->field_950764 = 0;
        return (int)((float)local_38 * 100.0);
    }

    // 0x1004423e0, 720 bytes, placed by class name
    // World::CalculateTargetBuildAreaAndPriority(math::Vector3T<float> const&)
    void World::CalculateTargetBuildAreaAndPriority(Vector3T* param_1) {
        undefined1* this_00;
        bool bVar1;
        uint uVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        float* pfVar6;
        int* piVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        int iVar10;
        int iVar11;
        int iVar12;
        int iVar13;
        int iVar14;
        int iVar15;
        int iVar16;
        int iVar17;
        int iVar18;
        float fVar19;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        (&field_950740)->GetLowestUsableLOD();
        uVar2 = (&field_950740)->GetLODDistance();
        fVar19 = (float)ceil((float)uVar2 * 0.00012207031);
        iVar16 = 1;
        if (0 < (int)fVar19) {
            iVar16 = (int)fVar19;
        }
        pfVar6 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)param_1, 0);
        fVar19 = (float)floor(*pfVar6 * 0.00012207031);
        iVar18 = (int)fVar19;
        pfVar6 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)param_1, 2);
        fVar19 = (float)floor(*pfVar6 * 0.00012207031);
        iVar13 = (int)fVar19;
        local_40 = iVar18 - iVar16;
        piVar7 = std::max<int>(&local_40, (int*)&m_mapSquareMinX);
        field_81604 = *piVar7;
        local_40 = iVar16 + iVar18;
        piVar7 = std::min<int>(&local_40, &m_mapSquareMaxX);
        field_81612 = *piVar7;
        local_40 = iVar13 - iVar16;
        piVar7 = std::max<int>(&local_40, &m_mapSquareMinZ);
        field_81608 = *piVar7;
        local_40 = iVar16 + iVar13;
        piVar7 = std::min<int>(&local_40, &m_mapSquareMaxZ);
        field_81616 = *piVar7;
        this_00 = &field_81624;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        field_81620 = 0;
        if (field_81604 <= field_81612) {
            iVar3 = (int)(*(float*)param_1 * 0.00012207031 + 0.5);
            iVar4 = (int)(*(float*)param_1 * 0.00012207031 + -0.5);
            iVar15 = (int)(*(float*)(param_1 + 8) * 0.00012207031 + 0.5);
            iVar5 = (int)(*(float*)(param_1 + 8) * 0.00012207031 + -0.5);
            iVar16 = field_81604;
            do {
                iVar17 = field_81608;
                iVar10 = field_81616;
                iVar11 = -(iVar18 - iVar16);
                if (iVar11 < 0) {
                    iVar11 = iVar18 - iVar16;
                }
                if (iVar17 <= iVar10) {
                    iVar14 = iVar13 - iVar17;
                    do {
                        local_34 = 0;
                        if ((iVar13 != iVar17) && (iVar16 != iVar18)) {
                            uVar2 = (uint)(iVar17 == field_81608);
                            iVar12 = (iVar17 == iVar10) + 8 + uVar2 * 4;
                            if (iVar16 != field_81604) {
                                iVar12 = (uint)(iVar17 == iVar10) + uVar2 * 4;
                            }
                            local_34 = iVar12 + 2;
                            if (iVar16 != field_81612) {
                                local_34 = iVar12;
                            }
                        }
                        local_38 = -iVar14;
                        if (-iVar14 < 0) {
                            local_38 = iVar14;
                        }
                        if (((((iVar16 == iVar3) && (iVar15 == iVar17)) || ((iVar16 == iVar4 && (iVar15 == iVar17)))) ||
                             ((iVar16 == iVar4 && (iVar5 == iVar17)))) ||
                            ((local_38 = local_38 + iVar11, iVar16 == iVar3 && (iVar5 == iVar17)))) {
                            local_38 = 0;
                        }
                        local_40 = iVar16;
                        local_3c = iVar17;
                        this_00->push_back((TargetMapSquare*)&local_40);
                        iVar10 = field_81616;
                        iVar14 = iVar14 + -1;
                        bVar1 = iVar17 < iVar10;
                        iVar17 = iVar17 + 1;
                    } while (bVar1);
                }
                bVar1 = iVar16 < field_81612;
                iVar16 = iVar16 + 1;
            } while (bVar1);
        }
        uVar8 = this_00->HeapBeginPtr();
        uVar9 = this_00->end();
        eastl::insertion_sort<TargetMapSquare*,
                              (math::Vector3T<float> const&)->CalculateTargetBuildAreaAndPriority()::__6>(uVar8, uVar9);
    }

    // 0x100442870, 1856 bytes, placed by class name
    // World::BuildMapSquare(TargetMapSquare const&, math::Vector3T<float> const&, bool, unsigned int, eastl::bitset<6ul, unsigned long long> const&, World::LoadingState)
    undefined* World::BuildMapSquare(uint* param_1, Vector3T* param_2, undefined4 param_4_00, uint param_4,
                                     undefined8 param_6, int param_7) {
        uint uVar1;
        undefined* puVar2;
        bool bVar3;
        char cVar4;
        bool bVar5;
        undefined1 uVar6;
        int iVar7;
        int iVar8;
        EffectManager* pEVar9;
        vector<MapSquareStatus, eastl::allocator>* this_00;
        GraphNode* this_01;
        MapSquare* pMVar10;
        WorldAreaTypeList* this_02;
        undefined* puVar11;
        long lVar12;
        MSIType* this_03;
        WorldAreaType* pWVar13;
        GraphEntity* pGVar14;
        GraphNode* pGVar15;
        undefined8 uVar16;
        Entity* pEVar17;
        AABB* this_04;
        LightProbeManager* this_05;
        undefined** ppuVar18;
        _func_decltype_nullptr* p_Var19;
        float fVar20;
        shared_ptr* in_stack_fffffffffffffe98;
        undefined* local_118;
        GraphNode* local_110;
        shared_ptr local_108;
        shared_ptr local_f0;
        ColourHSL local_e0;
        undefined1 local_d0[152];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_d0._0_4_ = *param_1;
        local_d0._4_4_ = param_1[1];
        pEVar9 = (EffectManager*)GetEffectManager(this);
        this_00 = (vector<MapSquareStatus, eastl::allocator>*)
            eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)&field_81672,
                (long)(int)local_d0._0_4_ - (long)(int)m_mapSquareMinX);
        p_Var19 = (_func_decltype_nullptr*)((long)(int)local_d0._4_4_ - (long)m_mapSquareMinZ);
        this_01 = (GraphNode*)eastl::vector<MapSquareStatus, eastl::allocator>::operator[](this_00, (ulong)p_Var19);
        bVar3 = this_01->operator_cast_to_bool();
        if (bVar3) {
            pMVar10 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
            cVar4 = pMVar10->IsPartialMapBuild();
            if ((cVar4 != '\0') && ((char)param_4_00 != '\0'))
                goto LAB_100442933;
        } else {
        LAB_100442933:
            new (&local_108) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var19);
            p_Var19 = (_func_decltype_nullptr*)0;
            bVar3 = operator!=((shared_ptr*)field_671760, (_func_decltype_nullptr*)0);
            if (bVar3) {
                BuildClientCompositeData((World*)&local_e0, (shared_ptr*)this, (int)field_671760, local_d0._0_4_);
                shared_ptr<ClientCompositeData>::operator=((shared_ptr<ClientCompositeData>*)&local_108,
                                                           (shared_ptr*)&local_e0);
                local_e0.~shared_ptr();
                bVar3 = false;
            LAB_100442b41:
                if (bVar3 != false) {
                    bVar5 = this_01->operator_cast_to_bool();
                    if (bVar5) {
                        pMVar10 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
                        cVar4 = pMVar10->IsPartialMapBuild();
                        if (cVar4 == '\0') {
                            DestructMapSquare(this, (shared_ptr*)this_01);
                        }
                    }
                }
                pGVar15 = this_01;
                bVar5 = this_01->operator_cast_to_bool();
                if (!bVar5) {
                    local_110 = graphics::GraphNode::Create<>(pGVar15);
                    local_f0.shared_from_this();
                    MakeSharedPool<MapSquare, 32>::MakeShared<graphics::GraphNode*&, shared_ptr<World>, int&, int&,
                                                              shared_ptr<ClientCompositeData>&>(
                        (shared_ptr*)&local_e0, (MakeSharedPool<MapSquare, 32>*)&local_110, (GraphNode**)&local_f0,
                        (shared_ptr*)local_d0, (int*)(local_d0 + 4), (int*)&local_108, in_stack_fffffffffffffe98);
                    shared_ptr<MapSquare>::operator=((shared_ptr<MapSquare>*)this_01, (shared_ptr*)&local_e0);
                    local_e0.~shared_ptr();
                    local_f0.~shared_ptr();
                    pGVar15 = local_110;
                    pGVar14 = (GraphEntity*)this_01->end();
                    pGVar15->SetEntity(pGVar14);
                    pGVar15 = local_110;
                    new (&local_e0)
                        math::ColourHSL((float)(int)(local_d0._0_4_ << 13), 0.0, (float)(int)(local_d0._4_4_ << 13));
                    pGVar15->SetTranslation((Vector3T*)&local_e0);
                    pGVar15 = (GraphNode*)(&field_65744)->GetRoot();
                    pGVar15->AddChild(local_110);
                    uVar16 = logger::default_logger();
                    new ((local_d0 + 8)) logger::LogStream((LogStream*)&LOGGER_SCENE);
                    logger::Logger::Log(uVar16, 0, local_d0 + 8, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/scene/World.cpp",
                                        1559, "World: Constructed new map square: %i, %i", local_d0._0_4_,
                                        local_d0._4_4_);
                    ((local_d0 + 8))->~LogStream();
                }
                pMVar10 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
                pMVar10->SetTerrainBlending(field_671754);
                pMVar10 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
                pMVar10->SetIsPartialMapBuild(bVar3);
                bVar3 = true;
            } else {
                new (&local_e0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var19);
                this_02 = ConfigProvider::GetConfigList<WorldAreaType, WorldAreaTypeList>(field_48);
                puVar11 = (undefined*)this_02->GetAreaColoursForMapSquare((shared_ptr*)&local_e0, local_d0._0_4_,
                                                                          local_d0._4_4_);
                puVar2 = DataStatus::NOTLOADED;
                local_118 = DataStatus::NOTLOADED;
                if (puVar11 == DataStatus::NOTLOADED) {
                LAB_100442b25:
                    bVar3 = false;
                } else {
                    if (puVar11 == DataStatus::MISSING) {
                        pWVar13 = (WorldAreaType*)shared_ptr<WorldAreaType>::operator->(
                            (shared_ptr<WorldAreaType>*)m_worldArea);
                        cVar4 = pWVar13->HasImpostorsForMapSquare(local_d0._0_4_, local_d0._4_4_);
                        if (cVar4 != '\0') {
                            BuildNonRegionComposite((World*)&local_f0, (shared_ptr*)this, (int)&local_e0,
                                                    local_d0._0_4_);
                            shared_ptr<ClientCompositeData>::operator=((shared_ptr<ClientCompositeData>*)&local_108,
                                                                       &local_f0);
                        LAB_100442b14:
                            local_f0.~shared_ptr();
                            bVar3 = false;
                            goto LAB_100442b28;
                        }
                        goto LAB_100442b25;
                    }
                    if (puVar11 != DataStatus::READY)
                        goto LAB_100442b25;
                    lVar12 = shared_ptr<MapSquareWorldAreaCompositeInner>::operator->(
                        (shared_ptr<MapSquareWorldAreaCompositeInner>*)&local_e0);
                    if (*(int*)(lVar12 + 256) < 0) {
                        BuildNonRegionComposite((World*)&local_f0, (shared_ptr*)this, (int)&local_e0, local_d0._0_4_);
                        shared_ptr<ClientCompositeData>::operator=((shared_ptr<ClientCompositeData>*)&local_108,
                                                                   &local_f0);
                        local_f0.~shared_ptr();
                        bVar3 = shared_ptr::operator_cast_to_bool(&local_108);
                        bVar3 = !bVar3;
                    } else {
                        lVar12 = shared_ptr<MapSquareWorldAreaCompositeInner>::operator->(
                            (shared_ptr<MapSquareWorldAreaCompositeInner>*)&local_e0);
                        iVar8 = *(int*)(lVar12 + 256);
                        this_03 =
                            (MSIType*)shared_ptr<WorldAreaType>::operator->((shared_ptr<WorldAreaType>*)m_worldArea);
                        iVar7 = this_03->GetSpriteID();
                        if (iVar8 == iVar7)
                            goto LAB_100442b25;
                        pWVar13 = (WorldAreaType*)shared_ptr<WorldAreaType>::operator->(
                            (shared_ptr<WorldAreaType>*)m_worldArea);
                        cVar4 = pWVar13->HasImpostorsForMapSquare(local_d0._0_4_, local_d0._4_4_);
                        bVar3 = true;
                        if (cVar4 != '\0') {
                            BuildNonRegionComposite((World*)&local_f0, (shared_ptr*)this, (int)&local_e0,
                                                    local_d0._0_4_);
                            shared_ptr<ClientCompositeData>::operator=((shared_ptr<ClientCompositeData>*)&local_108,
                                                                       &local_f0);
                            goto LAB_100442b14;
                        }
                    }
                }
            LAB_100442b28:
                local_e0.~shared_ptr();
                if (puVar11 != puVar2)
                    goto LAB_100442b41;
                bVar3 = false;
            }
            local_108.~shared_ptr();
            if (!bVar3)
                goto LAB_100442e8b;
        }
        pEVar17 = (Entity*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
        pGVar15 = (GraphNode*)pEVar17->GetNode();
        this_04 = (AABB*)pGVar15->GetWorldAABB();
        fVar20 = (float)this_04->GetDistanceToPointXZ(param_2);
        uVar6 = (&field_950740, (int)fVar20)->GetLOD();
        pEVar17 = (Entity*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
        pEVar17->SetTargetLOD(uVar6);
        if (((char)param_4_00 != '\0') || (field_950764 != '\0')) {
            pMVar10 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
            pMVar10->RecheckLocationContainers();
        }
        uVar1 = m_buildMode;
        pMVar10 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
        iVar8 = pMVar10->Build(m_pRT7Core, field_40, field_48, (PlayerVarDomain*)field_64, field_56, param_2,
                               param_1[3], param_1[2], param_4, (uVar1 & 4294967294) == 6, field_753744);
        pMVar10 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
        cVar4 = pMVar10->IsInitialLightProbeSubmitted();
        if (((cVar4 == '\0') && (iVar8 == 0)) && (param_7 != 0)) {
            cVar4 = pEVar9->IsEnabled(21);
            if (cVar4 != '\0') {
                this_05 = (LightProbeManager*)
                              std::unique_ptr<LightProbeManager, std::default_delete<LightProbeManager>>::operator->(
                                  (unique_ptr<LightProbeManager, std::default_delete<LightProbeManager>>*)&field_72);
                pMVar10 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
                local_108._0_2_ = pMVar10->GetMapSquarePosition();
                this_05->AddMapSquareToUpdateList((MapSquarePos*)&local_108);
            }
            pMVar10 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
            pMVar10->InitialLightProbeSubmitted();
        }
        if (iVar8 == 0) {
            ppuVar18 = &DataStatus::READY;
        } else {
            ppuVar18 = &DataStatus::NOTLOADED;
        }
        local_118 = *ppuVar18;
    LAB_100442e8b:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return local_118;
    }

    // 0x100443010, 224 bytes, placed by class name
    // World::RemoveExcessMapSquares()
    void World::RemoveExcessMapSquares() {
        bool bVar1;
        vector<MapSquareStatus, eastl::allocator>* this_00;
        MapSquareStatus* pMVar2;
        int iVar3;
        long lVar4;
        uint uVar5;

        if ((int)m_mapSquareMinX <= m_mapSquareMaxX) {
            uVar5 = m_mapSquareMinX;
            do {
                lVar4 = (long)m_mapSquareMinZ;
                if (m_mapSquareMinZ <= m_mapSquareMaxZ) {
                    do {
                        iVar3 = (int)lVar4;
                        if (((((int)uVar5 < field_81604) || (field_81612 < (int)uVar5)) || (iVar3 < field_81608)) ||
                            (field_81616 < iVar3)) {
                            this_00 = (vector<MapSquareStatus, eastl::allocator>*)eastl::
                                vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                                    (vector<eastl::vector<MapSquareStatus, eastl::allocator>,
                                            eastl::allocator>*)&field_81672,
                                    (long)(int)uVar5 - (long)(int)m_mapSquareMinX);
                            pMVar2 = (MapSquareStatus*)eastl::vector<MapSquareStatus, eastl::allocator>::operator[](
                                this_00, lVar4 - m_mapSquareMinZ);
                            ResetMapSquare(this, pMVar2);
                        }
                        lVar4 = lVar4 + 1;
                    } while (iVar3 < m_mapSquareMaxZ);
                }
                bVar1 = (int)uVar5 < m_mapSquareMaxX;
                uVar5 = uVar5 + 1;
            } while (bVar1);
        }
    }

    // 0x100443100, 80 bytes, placed by class name
    // World::GetNumMapSquaresLoaded(World::LoadingState) const
    void World::GetNumMapSquaresLoaded(undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
                                       undefined8 param_6) {
        undefined4 in_EAX;
        eastl* peVar1;
        undefined8 uVar2;
        undefined1 auStackY_a8[128];
        undefined8 uVar3;

        uVar3 = CONCAT44(param_2, in_EAX);
        peVar1 = (eastl*)(&field_81624)->HeapBeginPtr();
        uVar2 = (&field_81624)->end();
        eastl::count_if<TargetMapSquare_const*, (World::LoadingState)->GetNumMapSquaresLoaded() const ::__7>(
            peVar1, uVar2, this, auStackY_a8 + 132, param_5, param_6, uVar3);
    }

    // 0x1004431e0, 208 bytes, placed by class name
    // World::HighPriorityMapSquaresConstructed()
    ulong World::HighPriorityMapSquaresConstructed() {
        undefined1* this_00;
        int* piVar3;
        int* piVar4;
        vector<MapSquareStatus, eastl::allocator>* this_01;
        shared_ptr* this_02;
        MapSquare* this_03;
        bool bVar5;

        this_00 = &field_81624;
        piVar3 = (int*)this_00->HeapBeginPtr();
        piVar4 = (int*)this_00->end();
        bVar5 = piVar3 == piVar4;
        if (!bVar5) {
            do {
                if (piVar3[2] == 0) {
                    this_01 = (vector<MapSquareStatus, eastl::allocator>*)
                        eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                            (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)&field_81672,
                            (long)*piVar3 - (long)(int)m_mapSquareMinX);
                    this_02 = (shared_ptr*)eastl::vector<MapSquareStatus, eastl::allocator>::operator[](
                        this_01, (long)piVar3[1] - (long)m_mapSquareMinZ);
                    if (!shared_ptr::operator_cast_to_bool(this_02))
                        break;
                    this_03 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_02);
                    if (this_03->IsTerrainBuilt() == '\0')
                        break;
                }
                piVar3 = piVar3 + 4;
                bVar5 = piVar3 == piVar4;
            } while (!bVar5);
        }
        return CONCAT71((int7)((ulong)this_00 >> 8), bVar5) & 4294967295;
    }

    // 0x1004432b0, 48 bytes, placed by class name
    // World::ResetMapSquare(MapSquareStatus&)
    void World::ResetMapSquare(MapSquareStatus* param_1) {
        DestructMapSquare(this, (shared_ptr*)param_1);
        param_1->field_16 = DataStatus::MISSING;
    }

    // 0x1004432e0, 144 bytes, placed by class name
    // World::DestructMapSquare(shared_ptr<MapSquare>&)
    void World::DestructMapSquare(shared_ptr* param_1) {
        Entity* this_00;
        GraphNode* pGVar1;
        GraphNode* this_01;
        bool bVar2;
        long* plVar3;
        shared_ptr* extraout_RDX;

        bVar2 = shared_ptr::operator_cast_to_bool(param_1);
        if (bVar2) {
            plVar3 = (long*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)param_1);
            (**(code**)(*plVar3 + 200))(plVar3);
            this_00 = (Entity*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)param_1);
            pGVar1 = (GraphNode*)this_00->GetNode();
            this_01 = (GraphNode*)(&field_65744)->GetRoot();
            this_01->RemoveChild(pGVar1);
            bVar2 = operator==((jag*)m_centreSquare, param_1, extraout_RDX);
            if (bVar2) {
                shared_ptr<MapSquare>::reset();
            }
            shared_ptr<MapSquare>::reset();
        }
    }

    // 0x1004433d0, 112 bytes, placed by class name
    // World::GetEntityLoadImportance(EntityType) const
    undefined4 World::GetEntityLoadImportance(char param_2) {
        char cVar1;
        ulong uVar2;
        undefined4 local_c;

        if (param_2 == '\t') {
            local_c = 1092616192;
            uVar2 = 2;
        } else if (param_2 == '\x02') {
            local_c = 1065353216;
            uVar2 = 0;
        } else {
            if (param_2 != '\x01') {
                return 0;
            }
            local_c = 1065353216;
            uVar2 = 1;
        }
        cVar1 = (&field_753752, uVar2)->test();
        if (cVar1 == '\0') {
            local_c = 0;
        }
        return local_c;
    }

    // 0x1004436c0, 272 bytes, placed by class name
    // World::DestructImpostorMapSquares()
    void World::DestructImpostorMapSquares() {
        int iVar3;
        int iVar4;
        Layout* this_00;
        Layout* pLVar5;
        MapSquareStatus* this_01;
        MapSquareStatus* pMVar6;
        WorldAreaType* this_02;
        MapSquare* pMVar7;

        this_00 = (Layout*)(&field_81672)->HeapBeginPtr();
        pLVar5 = (Layout*)(&field_81672)->end();
        if (this_00 != pLVar5) {
            do {
                this_01 = (MapSquareStatus*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(this_00);
                pMVar6 = (MapSquareStatus*)this_00->end();
                for (; this_01 != pMVar6; this_01 = this_01 + 1) {
                    if (this_01->operator_cast_to_bool()) {
                        this_02 = (WorldAreaType*)shared_ptr<WorldAreaType>::operator->(
                            (shared_ptr<WorldAreaType>*)m_worldArea);
                        pMVar7 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
                        iVar3 = pMVar7->GetMapSquareX();
                        pMVar7 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
                        iVar4 = pMVar7->GetMapSquareZ();
                        if (this_02->HasImpostorsForMapSquare(iVar3, iVar4) != '\0') {
                            ResetMapSquare(this, this_01);
                        }
                    }
                }
                this_00 = this_00 + 32;
            } while (this_00 != pLVar5);
        }
    }

    // 0x1004437d0, 320 bytes, placed by class name
    // World::NotifyPickableEntities()
    void World::NotifyPickableEntities() {
        float fVar1;
        float fVar2;
        float fVar3;
        char cVar4;
        uint uVar5;
        Layout* this_00;
        GraphicsApp* this_01;
        shared_ptr<Entity>* this_02;
        shared_ptr<Entity>* psVar6;
        long* plVar7;
        Layout* pLVar8;
        vector* pvVar9;
        Entity* pEVar10;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar11;
        float* pfVar12;
        type* in_RSI;
        World* this_03;
        float local_34;

        this_03 = this;
        this_00 = (Layout*)GetPickableEntities(this);
        this_01 = (GraphicsApp*)this_03->Instance();
        uVar5 = this_01->GetLogicTick();
        cVar4 = field_24->RefreshPickablesRequired();
        this_02 = (shared_ptr<Entity>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_00);
        psVar6 = (shared_ptr<Entity>*)this_00->end();
        for (; this_02 != psVar6; this_02 = this_02 + 16) {
            local_34 = -1.0;
            if (cVar4 != '\0') {
                pLVar8 = (Layout*)GetLastCameraFocusPosition(this);
                pvVar9 = eastl::string::Layout::SSOBeginPtr(pLVar8, in_RSI);
                fVar1 = *(float*)pvVar9;
                pEVar10 = (Entity*)shared_ptr<Entity>::operator->(this_02);
                pLVar8 = (Layout*)pEVar10->GetWorldPosition();
                pvVar9 = eastl::string::Layout::SSOBeginPtr(pLVar8, in_RSI);
                fVar2 = *(float*)pvVar9;
                pcVar11 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)GetLastCameraFocusPosition(this);
                pfVar12 = (float*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(pcVar11);
                fVar3 = *pfVar12;
                pEVar10 = (Entity*)shared_ptr<Entity>::operator->(this_02);
                pcVar11 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)pEVar10->GetWorldPosition();
                pfVar12 = (float*)
                    eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(pcVar11);
                local_34 = (fVar3 - *pfVar12) * (fVar3 - *pfVar12) + (fVar1 - fVar2) * (fVar1 - fVar2);
            }
            plVar7 = (long*)shared_ptr<Entity>::operator->(this_02);
            in_RSI = (type*)(ulong)uVar5;
            (**(code**)(*plVar7 + 272))(local_34, plVar7, (type*)(ulong)uVar5, 0);
        }
    }

    // 0x100443920, 1040 bytes, placed by class name
    // World::TestPickableEntity(eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>&, eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>&, int&, int&, shared_ptr<Entity> const&, math::Point<int> const&, int, unsigned int)
    void World::TestPickableEntity(fixed_vector* param_1, fixed_vector* param_2, int* param_3, int* param_4,
                                   shared_ptr* param_5, Point* param_6, int param_7, uint param_8) {
        float fVar1;
        float fVar2;
        char cVar3;
        int iVar4;
        int iVar5;
        undefined4 uVar6;
        vector* pvVar7;
        Entity* pEVar8;
        Layout* this_00;
        float* pfVar9;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_01;
        EnvironmentOverride* this_02;
        TextRun* this_03;
        long* plVar10;
        CommandLine* this_04;
        ulong uVar11;
        ulong uVar12;
        shared_ptr* psVar13;
        shared_ptr* psVar14;
        undefined8 uVar15;
        fixed_vector* pfVar16;
        LogStream* this_05;
        float fVar17;
        LogStream local_158;
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pfVar16 = param_1;
        pvVar7 = (&field_950776, (type*)param_1)->SSOBeginPtr();
        fVar17 = *(float*)pvVar7;
        pEVar8 = (Entity*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)param_5);
        this_00 = (Layout*)pEVar8->GetWorldPosition();
        pvVar7 = eastl::string::Layout::SSOBeginPtr(this_00, (type*)pfVar16);
        fVar1 = *(float*)pvVar7;
        pfVar9 = (float*)(&field_950776)->second();
        fVar2 = *pfVar9;
        pEVar8 = (Entity*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)param_5);
        this_01 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)pEVar8->GetWorldPosition();
        pfVar9 =
            (float*)eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_01);
        fVar17 = (fVar2 - *pfVar9) * (fVar2 - *pfVar9) + (fVar17 - fVar1) * (fVar17 - fVar1);
        pEVar8 = (Entity*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)param_5);
        iVar4 = pEVar8->GetPickingPrepassType();
        this_02 = (EnvironmentOverride*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)param_5);
        if (iVar4 == 0) {
            this_04 = (CommandLine*)this_02->GetBoundingSphere();
            iVar4 = this_04->GetPos();
            iVar5 = this_04->GetPos();
            if (((float)iVar5 + 3328.0) * ((float)iVar4 + 3328.0) <= fVar17)
                goto LAB_100443ce8;
            plVar10 = (long*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)param_5);
            (**(code**)(*plVar10 + 272))(fVar17, plVar10, param_8, 1);
            iVar4 = param_6->GetX();
            iVar5 = param_6->GetZ();
            cVar3 = this_04->PointInside(iVar4, iVar5, param_7);
        } else {
            this_03 = (TextRun*)this_02->GetFogOverrides();
            iVar4 = this_03->GetMaxLineWidth();
            iVar5 = this_03->GetMaxLineWidth();
            if (((float)iVar5 + 3328.0) * ((float)iVar4 + 3328.0) <= fVar17)
                goto LAB_100443ce8;
            plVar10 = (long*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)param_5);
            (**(code**)(*plVar10 + 272))(fVar17, plVar10, param_8, 1);
            iVar4 = param_6->GetX();
            iVar5 = param_6->GetZ();
            cVar3 = this_03->PointInside(iVar4, iVar5, param_7);
        }
        if (cVar3 == '\0')
            goto LAB_100443ce8;
        *param_3 = *param_3 + 1;
        plVar10 = (long*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)param_5);
        cVar3 = (**(code**)(*plVar10 + 120))(plVar10);
        if (cVar3 == '\0') {
            *param_4 = *param_4 + 1;
            uVar11 = param_1->size();
            uVar12 = param_1->capacity();
            if (uVar12 <= uVar11) {
                uVar15 = logger::default_logger();
                new (&local_c8) logger::LogStream((LogStream*)&LOGGER_SCENE);
                uVar6 = param_1->capacity();
                logger::Logger::Log(uVar15, 0, &local_c8, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/World.cpp",
                                    1742, "Picked entities vector exceeded capacity, Capacity: %d", uVar6);
                this_05 = &local_c8;
                goto LAB_100443ce3;
            }
            psVar13 = (shared_ptr*)param_1->HeapBeginPtr();
            psVar14 = (shared_ptr*)param_1->end();
            psVar13 = eastl::find<shared_ptr<Entity>*, shared_ptr<Entity>>(psVar13, psVar14, param_5);
            psVar14 = (shared_ptr*)param_1->end();
            if (psVar13 != psVar14)
                goto LAB_100443ce8;
            param_2 = param_1;
        } else {
            uVar11 = param_2->size();
            uVar12 = param_2->capacity();
            if (uVar12 <= uVar11) {
                uVar15 = logger::default_logger();
                new (&local_158) logger::LogStream((LogStream*)&LOGGER_SCENE);
                uVar6 = param_2->capacity();
                logger::Logger::Log(uVar15, 0, &local_158, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/World.cpp",
                                    1755, "Triangle test entities vector exceeded capacity, Capacity: %d", uVar6);
                this_05 = &local_158;
            LAB_100443ce3:
                this_05->~LogStream();
                goto LAB_100443ce8;
            }
        }
        eastl::fixed_vector<shared_ptr<Entity>, 128ul, true, eastl::allocator>::push_back((shared_ptr*)param_2);
    LAB_100443ce8:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100443d60, 272 bytes, placed by class name
    // World::AddPickableEntity(shared_ptr<Entity> const&)
    void World::AddPickableEntity(shared_ptr* param_1) {
        undefined4 uVar2;
        HitmarkType* this_00;
        ulong uVar3;
        ulong uVar4;
        undefined8 uVar5;
        undefined1* this_01;
        LogStream local_b8;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (HitmarkType*)shared_ptr<Entity>::operator->((shared_ptr<Entity>*)param_1);
        if ((this_00->GetDuration() == field_786576) || (field_786576 == -1)) {
            this_01 = m_pickableEntities;
            uVar3 = this_01->size();
            uVar4 = this_01->capacity();
            if (uVar3 < uVar4) {
                eastl::fixed_vector<shared_ptr<Entity>, 2048ul, true, eastl::allocator>::push_back(
                    (shared_ptr*)this_01);
            } else {
                uVar5 = logger::default_logger();
                new (&local_b8) logger::LogStream((LogStream*)&LOGGER_SCENE);
                uVar2 = this_01->capacity();
                logger::Logger::Log(
                    uVar5, 0, &local_b8, 3,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                    "World.cpp",
                    1780, "Attempting to add too many pickable entities to active World pickable list, maximum is %d",
                    uVar2);
                local_b8.~LogStream();
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100443e80, 176 bytes, placed by class name
    // World::RemoveRoofSelective(unsigned int, CoordGrid const&)
    void World::RemoveRoofSelective(uint param_1, CoordGrid* param_2) {
        char cVar1;
        RemoveRoofPaintingProgress aRStack_10038[2731];

        if (m_removeRoofSelective != '\0') {
            cVar1 = (&field_81768, (LinkMap*)m_linkMap, param_1, this)->SetCurrentTick();
            if (cVar1 != '\0') {
                RemoveRoofPaintingProgress::RemoveRoofPaintingProgress(aRStack_10038, param_2->field_4 - 128,
                                                                       param_2->field_8 - 128, param_2->field_4 + 127,
                                                                       param_2->field_8 + 127);
                _memcpy(&field_160, aRStack_10038, 65552);
            }
            cVar1 = (m_linkMap, param_2)->IsRemoveRoof();
            if (cVar1 != '\0') {
                PaintRemoveRoofArea(this, param_2);
            }
        }
    }

    // 0x100443f50, 1920 bytes, placed by class name
    // World::PaintRemoveRoofArea(CoordGrid const&)
    void World::PaintRemoveRoofArea(CoordGrid* param_1) {
        undefined1* this_00;
        uint uVar1;
        int iVar2;
        long lVar3;
        char cVar4;
        byte bVar5;
        uint uVar6;
        int* piVar7;
        int iVar8;
        undefined1* this_01;
        int iStack_180c4;
        undefined8 uStack_180c0;
        int iStack_180b4;
        ulong uStack_180b0;
        int iStack_180a4;
        fixed_queue<eastl::pair<int, int>, 4096ul, true> afStack_180a0[98416];

        lVar3 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar1 = param_1->field_0;
        eastl::fixed_queue<eastl::pair<int, int>, 4096ul, true>::fixed_queue(afStack_180a0);
        uStack_180b0 = eastl::make_pair<unsigned int const&, unsigned int const&>(&param_1->field_4, &param_1->field_8);
        eastl::pair<int, int>::pair<unsigned int, unsigned int, void>((pair<int, int>*)&uStack_180c0,
                                                                      (pair*)&uStack_180b0);
        afStack_180a0->push((pair*)&uStack_180c0);
        cVar4 = afStack_180a0->empty();
        if (cVar4 == '\0') {
            this_00 = m_linkMap;
            this_01 = &field_160;
            do {
                piVar7 = (int*)
                    eastl::queue<eastl::pair<int, int>,
                                 eastl::fixed_list<eastl::pair<int, int>, 4096ul, true, eastl::allocator>>::front();
                iVar8 = *piVar7;
                iVar2 = piVar7[1];
                afStack_180a0->pop();
                uStack_180b0 = CONCAT44(uStack_180b0._4_4_, iVar8);
                iStack_180a4 = iVar2;
                bVar5 = this_00->IsRemoveRoof(uVar1, iVar8, iVar2);
                if ((int)uVar1 < 3) {
                    iVar8 = uVar1 + 1;
                    do {
                        cVar4 = this_01->IsSet(iVar8, (int)uStack_180b0, iStack_180a4);
                        if (cVar4 == '\0') {
                            uVar6 = this_00->GetTileLink(iVar8, (int)uStack_180b0, iStack_180a4);
                            if ((uVar6 == 4294967295) || ((uVar6 & 8) == 0)) {
                                (&field_81768, iVar8, uStack_180b0 & 4294967295, iStack_180a4, bVar5 ^ 1)
                                    ->SetRoofRemoved();
                                this_01->Set(iVar8, (int)uStack_180b0, iStack_180a4);
                            }
                        }
                        iVar8 = iVar8 + 1;
                    } while (iVar8 != 4);
                }
                if (bVar5 != 0) {
                    cVar4 = this_01->IsSet(uVar1, (int)uStack_180b0 + -1, iStack_180a4);
                    if (cVar4 == '\0') {
                        iStack_180b4 = (int)uStack_180b0 + -1;
                        uStack_180c0 = eastl::make_pair<int, int&>(&iStack_180b4, &iStack_180a4);
                        afStack_180a0->push((pair*)&uStack_180c0);
                        this_01->Set(uVar1, (int)uStack_180b0 + -1, iStack_180a4);
                    }
                    cVar4 = this_01->IsSet(uVar1, (int)uStack_180b0 + -1, iStack_180a4 + 1);
                    if (cVar4 == '\0') {
                        cVar4 = this_00->IsRemoveRoof(uVar1, (int)uStack_180b0, iStack_180a4 + 1);
                        if (cVar4 == '\0') {
                            cVar4 = this_00->IsRemoveRoof(uVar1, (int)uStack_180b0 + -1, iStack_180a4);
                            if (cVar4 == '\0') {
                                iStack_180b4 = (int)uStack_180b0 + -1;
                                iStack_180c4 = iStack_180a4 + 1;
                                uStack_180c0 = eastl::make_pair<int, int&>(&iStack_180b4, &iStack_180c4);
                                afStack_180a0->push((pair*)&uStack_180c0);
                                this_01->Set(uVar1, (int)uStack_180b0 + -1, iStack_180a4 + 1);
                            }
                        }
                    }
                    cVar4 = this_01->IsSet(uVar1, (int)uStack_180b0, iStack_180a4 + 1);
                    if (cVar4 == '\0') {
                        iStack_180b4 = iStack_180a4 + 1;
                        uStack_180c0 = eastl::make_pair<int, int&>((int*)&uStack_180b0, &iStack_180b4);
                        afStack_180a0->push((pair*)&uStack_180c0);
                        this_01->Set(uVar1, (int)uStack_180b0, iStack_180a4 + 1);
                    }
                    cVar4 = this_01->IsSet(uVar1, (int)uStack_180b0 + 1, iStack_180a4 + 1);
                    if (cVar4 == '\0') {
                        cVar4 = this_00->IsRemoveRoof(uVar1, (int)uStack_180b0, iStack_180a4 + 1);
                        if (cVar4 == '\0') {
                            cVar4 = this_00->IsRemoveRoof(uVar1, (int)uStack_180b0 + 1, iStack_180a4);
                            if (cVar4 == '\0') {
                                iStack_180b4 = (int)uStack_180b0 + 1;
                                iStack_180c4 = iStack_180a4 + 1;
                                uStack_180c0 = eastl::make_pair<int, int&>(&iStack_180b4, &iStack_180c4);
                                afStack_180a0->push((pair*)&uStack_180c0);
                                this_01->Set(uVar1, (int)uStack_180b0 + 1, iStack_180a4 + 1);
                            }
                        }
                    }
                    cVar4 = this_01->IsSet(uVar1, (int)uStack_180b0 + 1, iStack_180a4);
                    if (cVar4 == '\0') {
                        iStack_180b4 = (int)uStack_180b0 + 1;
                        uStack_180c0 = eastl::make_pair<int, int&>(&iStack_180b4, &iStack_180a4);
                        afStack_180a0->push((pair*)&uStack_180c0);
                        this_01->Set(uVar1, (int)uStack_180b0 + 1, iStack_180a4);
                    }
                    cVar4 = this_01->IsSet(uVar1, (int)uStack_180b0 + -1, iStack_180a4 + -1);
                    if (cVar4 == '\0') {
                        cVar4 = this_00->IsRemoveRoof(uVar1, (int)uStack_180b0, iStack_180a4 + -1);
                        if (cVar4 == '\0') {
                            cVar4 = this_00->IsRemoveRoof(uVar1, (int)uStack_180b0 + -1, iStack_180a4);
                            if (cVar4 == '\0') {
                                iStack_180b4 = (int)uStack_180b0 + -1;
                                iStack_180c4 = iStack_180a4 + -1;
                                uStack_180c0 = eastl::make_pair<int, int&>(&iStack_180b4, &iStack_180c4);
                                afStack_180a0->push((pair*)&uStack_180c0);
                                this_01->Set(uVar1, (int)uStack_180b0 + -1, iStack_180a4 + -1);
                            }
                        }
                    }
                    cVar4 = this_01->IsSet(uVar1, (int)uStack_180b0, iStack_180a4 + -1);
                    if (cVar4 == '\0') {
                        iStack_180b4 = iStack_180a4 + -1;
                        uStack_180c0 = eastl::make_pair<int, int&>((int*)&uStack_180b0, &iStack_180b4);
                        afStack_180a0->push((pair*)&uStack_180c0);
                        this_01->Set(uVar1, (int)uStack_180b0, iStack_180a4 + -1);
                    }
                    cVar4 = this_01->IsSet(uVar1, (int)uStack_180b0 + 1, iStack_180a4 + -1);
                    if (cVar4 == '\0') {
                        cVar4 = this_00->IsRemoveRoof(uVar1, (int)uStack_180b0, iStack_180a4 + -1);
                        if (cVar4 == '\0') {
                            cVar4 = this_00->IsRemoveRoof(uVar1, (int)uStack_180b0 + 1, iStack_180a4);
                            if (cVar4 == '\0') {
                                iStack_180b4 = (int)uStack_180b0 + 1;
                                iStack_180c4 = iStack_180a4 + -1;
                                uStack_180c0 = eastl::make_pair<int, int&>(&iStack_180b4, &iStack_180c4);
                                afStack_180a0->push((pair*)&uStack_180c0);
                                this_01->Set(uVar1, (int)uStack_180b0 + 1, iStack_180a4 + -1);
                            }
                        }
                    }
                }
                cVar4 = afStack_180a0->empty();
            } while (cVar4 == '\0');
        }
        afStack_180a0->~fixed_queue();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != lVar3) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1004447a0, 48 bytes, placed by class name
    // World::AddBuiltZone(CoordGrid const&, int, int)
    void World::AddBuiltZone(CoordGrid* param_1, int param_2, int param_3) {
        int local_10;
        int local_c;

        local_10 = param_2;
        local_c = param_3;
        eastl::vector<CoordGridSize, eastl::fixed_vector_allocator<20ul, 4096ul, 4ul, 0ul, true, eastl::allocator>>::
            emplace_back<CoordGrid_const&, int, int>(
                (vector<CoordGridSize,
                        eastl::fixed_vector_allocator<20ul, 4096ul, 4ul, 0ul, true, eastl::allocator>>*)&field_671784,
                param_1, &local_10, &local_c);
    }

    // 0x100444880, 160 bytes, placed by class name
    // World::AddBuiltZone(LocationContainer const&)
    void World::AddBuiltZone(LocationContainer* param_1) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        CoordGrid local_48;
        int local_38;
        int local_34;

        iVar1 = param_1->GetObjStackColourUnits();
        iVar2 = param_1->GetEffectAnimID();
        iVar3 = param_1->GetObjStackColourThousands();
        iVar4 = param_1->GetMinGridZ();
        new (&local_48) oldscape::rs2lib::worldmap::LocationData(0, iVar1 * 64 + iVar2, iVar3 * 64 + iVar4);
        local_38 = param_1->GetGridSizeX();
        local_34 = param_1->GetGridSizeZ();
        eastl::vector<CoordGridSize, eastl::fixed_vector_allocator<20ul, 4096ul, 4ul, 0ul, true, eastl::allocator>>::
            emplace_back<CoordGrid_const&, int, int>(
                (vector<CoordGridSize,
                        eastl::fixed_vector_allocator<20ul, 4096ul, 4ul, 0ul, true, eastl::allocator>>*)&field_671784,
                &local_48, &local_38, &local_34);
    }

    // 0x100444980, 304 bytes, placed by class name
    // World::ChangeLocation(int, int, int, int, LocData const&)
    undefined8 World::ChangeLocation(int param_1, int param_2, int param_3, int param_4, LocData* param_5) {
        bool bVar2;
        shared_ptr* this_00;
        MapSquare* this_01;
        unique_ptr* this_02;
        LocationContainer* pLVar3;
        ChangeLocationRequest local_c0;

        this_00 = (shared_ptr*)GetMapSquare(this, param_2 >> 6, param_3 >> 6);
        bVar2 = shared_ptr::operator_cast_to_bool(this_00);
        if (bVar2) {
            this_01 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_00);
            this_02 = (unique_ptr*)this_01->GetLocationContainer(param_2 % 64, param_3 % 64);
            bVar2 = std::unique_ptr::operator_cast_to_bool(this_02);
            if (bVar2) {
                new (&local_c0) ChangeLocationRequest(2, param_4, 4294967295, param_1, param_2, param_3, param_5);
                pLVar3 = (LocationContainer*)
                    std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>::operator*(
                        (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)this_02);
                ((World*)this)->field_950800 = local_c0.ActionRequest(pLVar3);
                local_c0.~ChangeLocationRequest();
                return 1;
            }
        }
        return 0;
    }

    // 0x100444b00, 128 bytes, placed by class name
    // World::HideLocations(LocShape)
    void World::HideLocations(undefined1 param_2) {
        undefined1 local_59;
        function<void(shared_ptr<MapSquare>&)> local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_59 = param_2;
        std::function<void(shared_ptr<MapSquare>&)>::function<World::HideLocations(LocShape)::__8, void>(local_58,
                                                                                                         &local_59);
        OnAllMapSquares(this, local_58);
        std::function<void(shared_ptr<MapSquare>&)>::~function(local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100444b90, 128 bytes, placed by class name
    // World::UnhideLocations(LocShape)
    void World::UnhideLocations(undefined1 param_2) {
        undefined1 local_59;
        function<void(shared_ptr<MapSquare>&)> local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_59 = param_2;
        std::function<void(shared_ptr<MapSquare>&)>::function<World::UnhideLocations(LocShape)::__9, void>(local_58,
                                                                                                           &local_59);
        OnAllMapSquares(this, local_58);
        std::function<void(shared_ptr<MapSquare>&)>::~function(local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100444c20, 96 bytes, placed by class name
    // World::HideWalls()
    void World::HideWalls() {
        HideLocations(this, 0);
        HideLocations(this, 1);
        HideLocations(this, 2);
        HideLocations(this, 3);
        HideLocations(this, 9);
        HideLocations(this, 23);
    }

    // 0x100444c80, 96 bytes, placed by class name
    // World::ShowWalls()
    void World::ShowWalls() {
        UnhideLocations(this, 0);
        UnhideLocations(this, 1);
        UnhideLocations(this, 2);
        UnhideLocations(this, 3);
        UnhideLocations(this, 9);
        UnhideLocations(this, 23);
    }

    // 0x100444ce0, 96 bytes, placed by class name
    // World::HideWallDecor()
    void World::HideWallDecor() {
        HideLocations(this, 4);
        HideLocations(this, 5);
        HideLocations(this, 6);
        HideLocations(this, 7);
        HideLocations(this, 8);
        HideLocations(this, 24);
    }

    // 0x100444d40, 96 bytes, placed by class name
    // World::ShowWallDecor()
    void World::ShowWallDecor() {
        UnhideLocations(this, 4);
        UnhideLocations(this, 5);
        UnhideLocations(this, 6);
        UnhideLocations(this, 7);
        UnhideLocations(this, 8);
        UnhideLocations(this, 24);
    }

    // 0x100444da0, 16 bytes, placed by class name
    // World::HideGroundDecor()
    void World::HideGroundDecor() {
        HideLocations(this, 22);
    }

    // 0x100444db0, 16 bytes, placed by class name
    // World::ShowGroundDecor()
    void World::ShowGroundDecor() {
        UnhideLocations(this, 22);
    }

    // 0x100444dc0, 144 bytes, placed by class name
    // World::HideSceneryRoofing()
    void World::HideSceneryRoofing() {
        HideLocations(this, 12);
        HideLocations(this, 13);
        HideLocations(this, 14);
        HideLocations(this, 15);
        HideLocations(this, 16);
        HideLocations(this, 17);
        HideLocations(this, 18);
        HideLocations(this, 19);
        HideLocations(this, 20);
        HideLocations(this, 21);
    }

    // 0x100444e50, 176 bytes, placed by class name
    // World::ShowSceneryRoofing()
    void World::ShowSceneryRoofing() {
        UnhideLocations(this, 12);
        UnhideLocations(this, 13);
        UnhideLocations(this, 14);
        UnhideLocations(this, 15);
        UnhideLocations(this, 16);
        UnhideLocations(this, 17);
        UnhideLocations(this, 18);
        UnhideLocations(this, 19);
        UnhideLocations(this, 20);
        UnhideLocations(this, 21);
        UnhideLocations(this, 10);
        UnhideLocations(this, 11);
    }

    // 0x100444f00, 128 bytes, placed by class name
    // World::SetMultiLocState(int, int)
    void World::SetMultiLocState(int param_1, int param_2) {
        function<void(shared_ptr<MapSquare>&)> local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::function<void(shared_ptr<MapSquare>&)>::function<World::SetMultiLocState(int, int)::__10, void>(
            local_58, CONCAT44(param_2, param_1));
        OnAllMapSquares(this, local_58);
        std::function<void(shared_ptr<MapSquare>&)>::~function(local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100444f90, 112 bytes, placed by class name
    // World::IncrementMultiLocState(int)
    void World::IncrementMultiLocState(int param_1) {
        undefined4 in_register_0000003c;
        function<void(shared_ptr<MapSquare>&)> local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::function<void(shared_ptr<MapSquare>&)>::function<World::IncrementMultiLocState(int)::__11, void>(local_58);
        OnAllMapSquares((World*)CONCAT44(in_register_0000003c, param_1), local_58);
        std::function<void(shared_ptr<MapSquare>&)>::~function(local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100445010, 112 bytes, placed by class name
    // World::IncrementAllMultiLocStates()
    void World::IncrementAllMultiLocStates() {
        function<void(shared_ptr<MapSquare>&)> local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::function<void(shared_ptr<MapSquare>&)>::function<World::IncrementAllMultiLocStates()::__12, void>(
            local_58);
        OnAllMapSquares(this, local_58);
        std::function<void(shared_ptr<MapSquare>&)>::~function(local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1004450c0, 112 bytes, placed by class name
    // World::RebuildLightIndices()
    void World::RebuildLightIndices() {
        function<void(shared_ptr<MapSquare>&)> local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::function<void(shared_ptr<MapSquare>&)>::function<World::RebuildLightIndices()::__13, void>(local_58);
        OnAllMapSquares(this, local_58);
        std::function<void(shared_ptr<MapSquare>&)>::~function(local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100445160, 240 bytes, placed by class name
    // World::GetPointLightsByScriptID(unsigned int) const
    World* World::GetPointLightsByScriptID(uint param_1) {
        bool bVar1;
        long lVar3;
        long lVar4;
        int in_EDX;
        undefined4 extraout_EDX;
        undefined4 extraout_EDX_00;
        undefined4 extraout_EDX_01;
        undefined4 extraout_var;
        undefined4 extraout_var_00;
        undefined4 extraout_var_01;
        undefined4 in_register_00000034;
        undefined8 local_50;
        undefined8 local_48;
        undefined8 local_40;
        undefined8 local_38;

        eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>::vector();
        reserve(4);
        local_50 = eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                    eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                    eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                    eastl::prime_rehash_policy, false, true, true>::begin();
        local_48 = CONCAT44(extraout_var, extraout_EDX);
        local_40 = ((CONCAT44(in_register_00000034, param_1) + 786616))->end();
        local_38 = CONCAT44(extraout_var_00, extraout_EDX_00);
        bVar1 = eastl::operator!=((eastl*)&local_50, (hashtable_iterator_base*)&local_40,
                                  (hashtable_iterator_base*)CONCAT44(extraout_var_00, extraout_EDX_00));
        if (bVar1) {
            do {
                lVar3 = local_50.HeapBeginPtr();
                lVar4 = shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)(lVar3 + 8));
                if (((lVar4 + 192))->GetSpriteID() == in_EDX) {
                    push_back((shared_ptr*)(lVar3 + 8));
                }
                eastl::hashtable_iterator<
                    eastl::pair<int const, shared_ptr<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>>, true,
                    false>::
                operator++(
                    (hashtable_iterator<
                        eastl::pair<int const, shared_ptr<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>>,
                        true, false>*)&local_50);
                bVar1 = eastl::operator!=((eastl*)&local_50, (hashtable_iterator_base*)&local_40,
                                          (hashtable_iterator_base*)CONCAT44(extraout_var_01, extraout_EDX_01));
            } while (bVar1);
        }
        return this;
    }

    // 0x100445290, 80 bytes, placed by class name
    // World::SetBrightnessOffset(option::EnumBrightness)
    void World::SetBrightnessOffset(int param_2) {
        field_950768 = (float)(param_2 + -2) * 0.25;
        (field_24, true)->SetFreshEnvironmentOverride();
        shared_ptr<MapEnvironmentSettings>::reset();
    }

    // 0x10044fcc0, 16 bytes, placed by class name
    // World::DestroyRenderingResources()::$_0::operator()(graphics::GraphNode*, graphics::GraphEntity*) const
    /* World::DestroyRenderingResources()::$_0::TEMPNAMEPLACEHOLDERVALUE(graphics::GraphNode*,
   graphics::GraphEntity*) const */

    void World::DestroyRenderingResources()::$_0::operator()(GraphNode* param_1, GraphEntity* param_2) {
        (**(code**)(*(long*)param_1 + 64))();
    }

    // 0x100451030, 32 bytes, placed by class name
    // World::GetTargetMapSquarePriority(int, int) const::$_2::operator()(TargetMapSquare const&) const
    /* World::GetTargetMapSquarePriority(int, int)
   const::$_2::TEMPNAMEPLACEHOLDERVALUE(TargetMapSquare const&) const */

    _func_GetTargetMapSquarePriority_int_int* const ::$_2::operator()(TargetMapSquare * param_1) {
        if (*(int*)param_1 == *(int*)this) {
            return (_func_GetTargetMapSquarePriority_int_int*)(ulong)CONCAT31(
                (int3)((uint) * (int*)(param_1 + 4) >> 8), *(int*)(param_1 + 4) == *(int*)(this + 4));
        }
        return (_func_GetTargetMapSquarePriority_int_int*)0;
    }

    // 0x100452a70, 80 bytes, placed by class name
    // World::MainLogic(unsigned int)::$_3::operator()(graphics::GraphNode*, graphics::GraphEntity*) const
    /* World::MainLogic(unsigned
   int)::$_3::TEMPNAMEPLACEHOLDERVALUE(graphics::GraphNode*, graphics::GraphEntity*) const
    */

    void World::MainLogic(unsigned int)::$_3::operator()(GraphNode* param_1, GraphEntity* param_2) {
        long lVar1;
        undefined8 uVar2;

        if (param_2 != (GraphEntity*)0) {
            lVar1 = field_0;
            uVar2 = param_1->GetWorldTransformationMatrix();
            (**(code**)(param_2->field_0 + 160))(param_2, *(undefined8*)(lVar1 + 32), field_8, uVar2);
        }
    }

    // 0x100455b50, 176 bytes, placed by class name
    // World::GetNumMapSquaresLoaded(World::LoadingState) const::$_7::operator()(TargetMapSquare const&) const
    /* World::GetNumMapSquaresLoaded(World::LoadingState)
   const::$_7::TEMPNAMEPLACEHOLDERVALUE(TargetMapSquare const&) const */

    _func_GetNumMapSquaresLoaded_LoadingState* const ::$_7::operator()(TargetMapSquare * param_1) {
        long lVar1;
        bool bVar2;
        vector<MapSquareStatus, eastl::allocator>* this_00;
        shared_ptr* this_01;
        MapSquare* pMVar4;
        int* piVar5;

        lVar1 = *(long*)this;
        this_00 = (vector<MapSquareStatus, eastl::allocator>*)
            eastl::vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>::operator[](
                (vector<eastl::vector<MapSquareStatus, eastl::allocator>, eastl::allocator>*)(lVar1 + 81672),
                (long)*(int*)param_1 - (long)*(int*)(lVar1 + 81588));
        this_01 = (shared_ptr*)eastl::vector<MapSquareStatus, eastl::allocator>::operator[](
            this_00, (long)*(int*)(param_1 + 4) - (long)*(int*)(lVar1 + 81592));
        if ((*(undefined**)(this_01 + 1) == DataStatus::READY) &&
            (bVar2 = shared_ptr::operator_cast_to_bool(this_01), bVar2)) {
            pMVar4 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
            if (pMVar4->IsTerrainBuilt() != '\0') {
                piVar5 = *(int**)(this + 8);
                if (*piVar5 != 0) {
                    pMVar4 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
                    piVar5 = (int*)pMVar4->IsInitialLightProbeSubmitted();
                    if ((char)piVar5 == '\0') {
                        return (_func_GetNumMapSquaresLoaded_LoadingState*)0;
                    }
                }
                return (_func_GetNumMapSquaresLoaded_LoadingState*)CONCAT71((int7)((ulong)piVar5 >> 8), 1);
            }
        }
        return (_func_GetNumMapSquaresLoaded_LoadingState*)0;
    }

    // 0x10045ff30, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.17
    void ___cxx_global_var_init_17(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&World::NullWorld) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5250, &World::NullWorld, 4294967296);
    }

} // namespace jag::game
