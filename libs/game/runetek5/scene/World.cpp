// libs/game/runetek5/scene/World.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "World.h"

namespace jag::game {
    // 0x100f38f28
    int32_t World::m_gammaCorrectEnvInputs = 1;

    // 0x100f38f2c
    float World::m_showMaxLevel = 3.0f;

    // 0x100f38f30
    bool World::m_enableImpostors = 1;

    // 0x1039b4ea0, set at startup by ___cxx_global_var_init.17
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> World::NullWorld =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x1039b4eb0
    bool World::m_showPointLights;

    // 0x1039b4eb1
    bool World::m_showOccludedPointLights;

    // 0x1039b4eb2
    bool World::m_showFloorGrid;

    // 0x1039b4eb3
    bool World::m_showFloorGridUseWaterHeight;

    // 0x1039b4eb4
    bool World::m_showHeightMap;

    // 0x1039b4eb5
    bool World::m_showHeightMapRest;

    // 0x1039b4eb6
    bool World::m_showWaterHeights;

    // 0x1039b4eb7
    bool World::m_showUnderworldMap;

    // 0x1039b4eb8
    bool World::m_showCurrentSkyBoxMap;

    // 0x1039b4eb9
    bool World::m_showDefaultEnvironmentMap;

    // 0x1039b4eba
    bool World::m_showCurrentEnvironmentMap;

    // 0x1039b4ebb
    bool World::m_debugPicking;

    // 0x1039b4ebc
    bool World::m_debugRemoveRoof;

    // 0x1039b4ebd
    bool World::m_debugRemoveRoofLabels;

    // 0x1039b4ec0
    float World::m_showMinLevel;

    // 0x100016cf0: World::GetSceneManager() const has the same machine code as eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator, eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::size() const

    // 0x100102fc0: World::GetDynamicPointLightManager() has the same machine code as oldscape::rs2lib::InputField::GetPlaceholderContents() const

    // 0x100411c00: World::GetLODSettings() const has the same machine code as World::GetLODSettings()

    // 0x10043c800
    World::World(SceneManager* sceneManager, graphics::RT7Core* rt7Core, Js5ResourceProvider* js5ResourceProvider,
                 ConfigProvider* configProvider, PlayerVarDomain* playerVarDomain, AssetBuilder* assetBuilder,
                 const shared_ptr<WorldAreaType>& worldAreaType, BuildMode buildMode, int arg9, int arg10, int arg11,
                 int arg12, const shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>& arg13) {
        hash<unsigned int> local_40;
        equal_to<unsigned int> local_38;

        uint8_t* local_e8 = &field_8;
        PlayerVarDomain* local_48 = playerVarDomain;
        new (local_e8) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        new (this) render::RenderResourceHolder();
        field_24 = sceneManager;
        m_pRT7Core = rt7Core;
        field_40 = js5ResourceProvider;
        field_48 = configProvider;
        field_56 = assetBuilder;
        field_64 = local_48;
        local_48 = (PlayerVarDomain*)&field_72;
        local_48->unique_ptr<true, void>();
        new (&field_80) DynamicPointLightManager();
        uint8_t* local_e0 = &field_80;
        new (&field_160) RemoveRoofPaintingProgress();
        uint8_t* local_d8 = &field_65712;
        new (local_d8) SkyBoxLoader(*rt7Core);
        uint8_t* local_d0 = m_worldArea;
        new (local_d0) shared_ptr(worldAreaType);
        uint8_t* local_c8 = &field_65744;
        new (local_c8) graphics::GraphRoot();
        uint8_t* local_c0 = m_skyBox;
        new (local_c0) shared_ptr();
        new (&field_65840) math::Vector4T();
        uint8_t* local_b8 = m_worldRenderer;
        new (local_b8) SceneRenderManager(rt7Core, 2048, 0);
        uint8_t* local_b0 = &field_80976;
        new (local_b0) graphics::DetachedParticleSystemsDrawable();
        field_81584 = 1;
        m_mapSquareMinX = arg9;
        m_mapSquareMinZ = arg10;
        m_mapSquareMaxX = arg11;
        m_mapSquareMaxZ = arg12;
        field_81620 = 0;
        uint8_t* local_a8 = &field_81624;
        new (local_a8) eastl::vector<TargetMapSquare>();
        uint8_t* local_a0 = &field_81672;
        new (local_a0) eastl::vector<eastl::vector<MapSquareStatus>>();
        uint8_t* local_98 = m_centreSquare;
        new (local_98) shared_ptr();
        new (&field_81720) math::Vector2T();
        field_81728 = -1;
        field_81732 = -1;
        new (&field_81736) HeightMap(*this);
        new (m_linkMap) oldscape::dash3d::ModelLit::AABB();
        uint8_t* local_90 = m_removeRoof;
        new (local_90) RemoveRoof();
        m_removeRoofSelective = 0;
        m_groundDecorHidden = 0;
        field_671754[0] = 1;
        uint8_t* local_88 = &field_671760;
        new (local_88) shared_ptr(arg13);
        m_buildMode = buildMode;
        *(uint16_t*)&m_temporaryMap = 0;
        new (&field_671784) eastl::fixed_vector<CoordGridSize, 4096ul>();
        field_753744[0] = 1;
        uint8_t* local_80 = &field_671784;
        new (&field_753752) eastl::bitset();
        field_753760 = 0;
        field_753764 = 0;
        new (m_pickableEntities) eastl::fixed_vector<shared_ptr<Entity>, 2048ul>();
        field_786576 = 4294967295;
        uint8_t* local_70 = m_currentEnvironmentSettings;
        uint8_t* local_78 = m_pickableEntities;
        new (local_70) shared_ptr();
        uint8_t* local_68 = field_786600;
        new (local_68) shared_ptr();
        uint8_t* local_60 = &field_786616;
        new (local_60)
            eastl::fixed_hash_map<unsigned int, shared_ptr<LightSource>, 4096ul, 4097ul, true,
                                  eastl::hash<unsigned int>, eastl::equal_to<unsigned int>, false>(local_40, local_38);
        uint8_t* local_58 = &field_950616;
        new (local_58) eastl::vector<shared_ptr<LightSource>>();
        uint8_t* local_50 = field_950648;
        new (local_50) shared_ptr();
        new (m_defaultEnvironmentMap) shared_ptr();
        new (&field_950680) eastl::hash_multimap<unsigned long, MapSquareEnvIrradianceInfo>(local_110);
        field_950736 = -1;
        new (&field_950740) LODSettings();
        field_950764[0] = 0;
        field_950768 = 0.0;
        m_mainSceneDrawn = 0;
        new (&field_950776) math::Vector3T();
        m_maxRenderLevel = 4;
        m_worldFocusLevel = 0;
        m_playerCameraOffsetScale = 1065353216;
        field_950800 = 0;
        if (((sceneManager == nullptr) || (js5ResourceProvider == nullptr)) || (configProvider == nullptr)) {
            LogAssert(
                "sceneManager && rt7Core && resourceProvider && configProvider",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/World.cpp",
                109, nullptr);
        }
        LightProbeManager* this_00 = (LightProbeManager*)operator new(1008);
        auto effectManager = field_24->GetEffectManager();
        new (this_00) LightProbeManager(rt7Core, *effectManager, this);
        local_48->reset(this_00);
        CreateWorld();
    }

    // 0x10043cec0
    void World::CreateWorld() {
        long lVar4 = (long)(int)m_mapSquareMaxX - (long)(int)m_mapSquareMinX;
        int iVar3 = (int)lVar4;
        m_mapSquareWidth = iVar3;
        int iVar1 = m_mapSquareMaxZ - m_mapSquareMinZ;
        m_mapSquareLength = iVar1;
        if (iVar1 < iVar3) {
            iVar1 = iVar3;
        }
        field_81664 = iVar1;
        uint8_t* this_00 = &field_81672;
        this_00->resize(lVar4 + 1);
        auto this_01 = this_00->HeapBeginPtr();
        auto pvVar2 = this_00->end();
        for (; this_01 != pvVar2; this_01 = this_01 + 32) {
            this_01->resize((long)m_mapSquareLength + 1);
        }
        m_linkMap->Setup(this_00, m_mapSquareMinX, m_mapSquareMaxX, m_mapSquareMinZ, m_mapSquareMaxZ);
        auto local_38 = m_pRT7Core->GetSkyBoxManager()->RegisterSkyBox(-1);
        *m_skyBox = local_38;
        m_worldRenderer->AddDrawable((Drawable*)m_skyBox->end());
        m_worldRenderer->AddDrawable(&field_80976);
    }

    // 0x10043d110
    World::~World() {
        DestroyRenderingResources();
        field_950680.~hash_multimap();
        m_defaultEnvironmentMap->~shared_ptr();
        field_950648->~shared_ptr();
        field_950616.~vector();
        field_786616.~fixed_hash_map();
        field_786600->~shared_ptr();
        m_currentEnvironmentSettings->~shared_ptr();
        m_pickableEntities->~fixed_vector();
        field_671784.~fixed_vector();
        field_671760.~shared_ptr();
        m_removeRoof->~RemoveRoof();
        m_centreSquare->~shared_ptr();
        field_81672.~vector();
        field_81624.~vector();
        field_80976.~DetachedParticleSystemsDrawable();
        m_worldRenderer->~SceneRenderManager();
        m_skyBox->~shared_ptr();
        field_65744.~GraphRoot();
        m_worldArea->~shared_ptr();
        field_65712.~SkyBoxLoader();
        field_80.~DynamicPointLightManager();
        field_72.~unique_ptr();
        field_8.~enable_shared_from_this();
    }

    // 0x10043d390
    void World::DestroyRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_18;

        char* arg1 = "World_Resources";
        auto this_00 = field_65744.GetRoot();
        graphics::GraphNode::OnRecursive<World::DestroyRenderingResources()::__0>(this_00, (__0*)arg1);
        field_950648->reset();
        m_defaultEnvironmentMap->reset();
        ((SkyBox*)(*m_skyBox).operator->())->DestroyRenderingResources();
        m_currentEnvironmentSettings->reset();
        field_786600->reset();
    }

    // 0x10043d5b0
    void World::ClearPickables() {
        m_pickableEntities->clear();
    }

    // 0x10043d5d0
    void World::Clear() {
        long* plVar2;

        ClearPickables();
        uint8_t* this_00 = m_worldRenderer;
        this_00->Clear();
        DestructAllMapSquares();
        field_81672.clear();
        field_65744.Reset();
        field_950648->reset();
        field_671760.reset();
        uint8_t* this_01 = m_centreSquare;
        if (this_01->operator_cast_to_bool() != '\0') {
            plVar2 = (long*)(*this_01).operator->();
            (**(void (**)(...))(*plVar2 + 200))(plVar2);
            this_01->reset();
        }
        ((LightProbeManager*)field_72.operator->())->Clear();
        field_786616.clear();
        field_80.ClearLights();
        this_00->RemoveDrawable((Drawable*)m_skyBox->end());
        auto this_03 = m_pRT7Core->GetSkyBoxManager();
        shared_ptr<oldscape::dash3d::Decor> local_40(m_skyBox);
        this_03->DestroySkyBox(&local_40);
        this_00->RemoveDrawable(&field_80976);
    }

    // 0x10043d710
    void World::DestructAllMapSquares() {
        MapSquareStatus* mapSquareStatus;
        MapSquareStatus* pMVar2;

        auto this_00 = field_81672.HeapBeginPtr();
        auto pLVar1 = field_81672.end();
        for (; this_00 != pLVar1; this_00 = this_00 + 32) {
            mapSquareStatus = (MapSquareStatus*)this_00->HeapBeginPtr();
            pMVar2 = (MapSquareStatus*)this_00->end();
            for (; mapSquareStatus != pMVar2; mapSquareStatus = mapSquareStatus + 1) {
                ResetMapSquare(*mapSquareStatus);
            }
        }
    }

    // 0x10043d870
    void World::Reset() {
        Clear();
        CreateWorld();
    }

    // 0x10043d890
    void World::GetEffectManager() const {
        field_24->GetEffectManager();
    }

    // 0x10043d8a0
    uint8_t* World::GetMapSquare(int arg1, int arg2) const {
        int iVar1;
        vector<MapSquareStatus>* this_01;
        int iVar2;
        unsigned long arg1_01;
        uint8_t* this_02;

        unsigned long arg1_00 = (long)arg1 - (long)(int)m_mapSquareMinX;
        uint8_t* puVar3 = &MapSquare::NullMapSquare;
        if (-1 < (int)arg1_00) {
            arg1_01 = (long)arg2 - (long)(int)m_mapSquareMinZ;
            iVar2 = (int)arg1_01;
            if (-1 < iVar2) {
                this_02 = &field_81672;
                iVar1 = this_02->size();
                if ((int)arg1_00 < iVar1) {
                    iVar1 =
                        ((vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>>*)(*this_02)[arg1_00])
                            ->size();
                    if (iVar2 < iVar1) {
                        this_01 = (vector<MapSquareStatus>*)(*this_02)[arg1_00];
                        puVar3 = (uint8_t*)(*this_01)[arg1_01];
                    }
                }
            }
        }
        return puVar3;
    }

    // 0x10043d9c0
    uint8_t* World::GetMapSquareStatus(int arg1, int arg2) const {
        int iVar1;
        vector<MapSquareStatus>* this_01;
        long lVar2;
        int iVar3;
        unsigned long arg1_01;
        uint8_t* this_02;

        unsigned long arg1_00 = (long)arg1 - (long)(int)m_mapSquareMinX;
        uint8_t** ppuVar4 = &DataStatus::MISSING;
        if (-1 < (int)arg1_00) {
            arg1_01 = (long)arg2 - (long)(int)m_mapSquareMinZ;
            iVar3 = (int)arg1_01;
            if (-1 < iVar3) {
                this_02 = &field_81672;
                iVar1 = this_02->size();
                if ((int)arg1_00 < iVar1) {
                    iVar1 =
                        ((vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>>*)(*this_02)[arg1_00])
                            ->size();
                    if (iVar3 < iVar1) {
                        this_01 = (vector<MapSquareStatus>*)(*this_02)[arg1_00];
                        lVar2 = (*this_01)[arg1_01];
                        ppuVar4 = (uint8_t**)(lVar2 + 16);
                    }
                }
            }
        }
        return *ppuVar4;
    }

    // 0x10043da50
    void World::GetClosestMapSquare(const math::Vector3T<float>& vector3) const {
        float* pfVar2 = &vector3[0];
        float fVar1 = *pfVar2;
        pfVar2 = &vector3[2];
        GetMapSquare((int)fVar1 >> 15, (int)*pfVar2 >> 15);
    }

    // 0x10043daa0
    void World::GetClosestMapSquare(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
        uint32_t in_register_0000003c;
        int in_stack_00000008;
        uint8_t local_50[32];

        new ((local_50 + 16))
            math::ColourHSL((float)(arg2 * 64 + arg4 * 128), (float)in_stack_00000008, (float)(arg3 * 64 + arg5 * 128));
        new (local_50) CoordFine(arg6, (local_50 + 16));
        int arg1_00 = local_50->GetMapSquareX();
        int arg2_00 = local_50->GetMapSquareZ();
        GetMapSquare((World*)(((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1), arg1_00, arg2_00);
    }

    // 0x10043db30
    unsigned long World::IsTerrainBuilt() {
        bool cVar1;
        vector<MapSquareStatus>* this_01;
        shared_ptr* this_02;

        uint8_t* this_00 = &field_81624;
        auto piVar2 = this_00->HeapBeginPtr();
        auto piVar3 = this_00->end();
        bool bVar4 = piVar2 == piVar3;
        if (!bVar4) {
            do {
                this_01 = &field_81672[(long)*piVar2 - (long)(int)m_mapSquareMinX];
                this_02 = (shared_ptr*)(*this_01)[(long)piVar2[1] - (long)(int)m_mapSquareMinZ];
                cVar1 = shared_ptr::operator_cast_to_bool(this_02);
                if (!cVar1)
                    break;
                cVar1 = shared_ptr::operator_cast_to_bool(this_02);
                if (cVar1) {
                    cVar1 = ((MapSquare*)(*this_02).operator->())->IsTerrainBuilt();
                    if (!cVar1)
                        break;
                }
                piVar2 = piVar2 + 4;
                bVar4 = piVar2 == piVar3;
            } while (!bVar4);
        }
        return bVar4 & 4294967295;
    }

    // 0x10043dcd0
    void World::SetTerrainBlending(bool arg1) {
        uint64_t local_59;

        local_59._0_1_ = arg1;
        if (field_671754[0] != arg1) {
            field_671754[0] = arg1;
            std::function<void(shared_ptr<MapSquare>&)>::function<World::SetTerrainBlending(bool)::__1, void>(
                (function<void(shared_ptr<MapSquare>&)>*)((long)&local_59 + 1), (__1*)&local_59);
            OnAllMapSquares((function<void_(shared_ptr<MapSquare>&)>*)((long)&local_59 + 1));
            ((function<void(shared_ptr<MapSquare>&)>*)((long)&local_59 + 1))->~function();
        }
    }

    // 0x10043dd60
    void World::OnAllMapSquares(std::function<void(shared_ptr<MapSquare>&)> callback) {
        shared_ptr* psVar3;
        shared_ptr* this_00;

        auto this_01 = field_81672.HeapBeginPtr();
        auto pLVar2 = field_81672.end();
        for (; this_01 != pLVar2; this_01 = this_01 + 32) {
            this_00 = (shared_ptr*)this_01->HeapBeginPtr();
            psVar3 = (shared_ptr*)this_01->end();
            for (; this_00 != psVar3; this_00 = (shared_ptr*)&this_00[1].field_8) {
                if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                    std::function<void(shared_ptr<MapSquare>&)>::operator()(
                        (function<void(shared_ptr<MapSquare>&)>*)callback, (shared_ptr<MapSquare>*)this_00);
                }
            }
        }
    }

    // 0x10043de30
    void World::RebuildArea(int arg1, int arg2, int arg3, int arg4) {
        vector<MapSquareStatus>* this_00;
        shared_ptr* this_01;
        int iVar6;
        bool bVar7;

        if ((arg3 < arg1) || (arg4 < arg2)) {
            LogAssert(
                "tileMinX <= tileMaxX && tileMinZ <= tileMaxZ",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/World.cpp",
                302, "Min and max coords reversed");
        }
        int iVar2 = eastl::max<int>(m_mapSquareMinX, arg1 >> 6);
        int iVar3 = eastl::max<int>(m_mapSquareMinZ, arg2 >> 6);
        int iVar4 = eastl::min<graphics::GraphicsQuality>(m_mapSquareMaxX, arg3 >> 6);
        int iVar5 = eastl::min<graphics::GraphicsQuality>(m_mapSquareMaxZ, arg4 >> 6);
        if (iVar2 <= iVar4) {
            do {
                this_00 = (vector<MapSquareStatus>*)field_81672[(long)iVar2 - (long)(int)m_mapSquareMinX];
                if (iVar3 <= iVar5) {
                    iVar6 = iVar3;
                    do {
                        this_01 = (shared_ptr*)(*this_00)[(long)(int)(iVar6 - m_mapSquareMinZ)];
                        if (shared_ptr::operator_cast_to_bool(this_01) != '\0') {
                            ((MapSquare*)(*this_01).operator->())->RebuildArea(arg1, arg2, arg3, arg4);
                        }
                        iVar6 = iVar6 + 1;
                    } while (iVar5 + 1 != iVar6);
                }
                bVar7 = iVar2 != iVar4;
                iVar2 = iVar2 + 1;
            } while (bVar7);
        }
    }

    // 0x10043dfa0
    uint32_t World::GetTargetMapSquarePriority(int arg1, int arg2) const {
        uint32_t uVar1;

        uint8_t* this_00 = &field_81624;
        auto pTVar2 = this_00->HeapBeginPtr();
        auto pTVar3 = this_00->end();
        pTVar2 = eastl::find_if<TargetMapSquare const*, int->GetTargetMapSquarePriority(int) const ::__2>(
            pTVar2, pTVar3, (__2*)(((uint64_t)arg2 << 32) | (uint32_t)arg1));
        pTVar3 = (TargetMapSquare*)this_00->end();
        if (pTVar2 == pTVar3) {
            uVar1 = 2147483647;
        } else {
            uVar1 = *(uint32_t*)(pTVar2 + 8);
        }
        return uVar1;
    }

    // 0x10043e060
    auto World::GetIrradianceCache() {
        auto result;
        Location* location;
        ReturnValue* pRVar2;

        if (((&result + 83970))->operator_cast_to_bool() == '\0') {
            location = (Location*)result.size();
            pRVar2 = (ReturnValue*)location->GetParentLocationType();
        } else {
            pRVar2 = &result + 118835;
        }
        return pRVar2;
    }

    // 0x10043e0a0
    uint64_t
    World::RebuildExistingRegion(const shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>& arg1,
                                 BuildMode buildMode, bool arg3) {
        int arg3_00;
        bool cVar2;
        vector<MapSquareStatus>* this_00;
        shared_ptr* this_01;
        MapSquare* pMVar3;
        uint64_t in_register_00000009;
        ShaderVariablePrecision arg2;
        long lVar4;
        uint64_t uVar5;
        ReturnValue local_50;

        uint32_t local_34 = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
        bool bVar1 = arg1 != nullptr;
        if (!bVar1) {
            LogAssert(
                "compositeMap != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/World.cpp",
                344, "%s: no composite map supplied.", "RebuildExistingRegion");
        }
        bVar1 = field_671760 != nullptr;
        if (!bVar1) {
            LogAssert(
                "m_compositeMap != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/World.cpp",
                345, "%s: world has no previous composite map. This should mean it isn\'t a region-built world.",
                "RebuildExistingRegion");
        }
        field_671760 = arg1;
        m_buildMode = buildMode;
        if ((int)m_mapSquareMaxX < (int)m_mapSquareMinX) {
            uVar5 = 0;
        } else {
            uVar5 = 0;
            arg2 = m_mapSquareMinX;
            do {
                lVar4 = (long)(int)m_mapSquareMinZ;
                if ((int)m_mapSquareMinZ <= (int)m_mapSquareMaxZ) {
                    do {
                        this_00 = &field_81672[(long)(int)arg2 - (long)(int)m_mapSquareMinX];
                        this_01 = (shared_ptr*)(*this_00)[lVar4 - (int)m_mapSquareMinZ];
                        cVar2 = shared_ptr::operator_cast_to_bool(this_01);
                        arg3_00 = (int)lVar4;
                        if (cVar2) {
                            BuildClientCompositeData(&local_50, this, arg1, arg2, arg3_00);
                            if ((char)local_34 == '\0') {
                                pMVar3 = (MapSquare*)(*this_01).operator->();
                                cVar2 = pMVar3->ZoneMapSame(local_50);
                                if (!cVar2)
                                    goto LAB_10043e24b;
                            } else {
                            LAB_10043e24b:
                                pMVar3 = (MapSquare*)(*this_01).operator->();
                                uVar5 = 1;
                                pMVar3->RebuildRegion(local_50, (bool)(char)local_34);
                            }
                        }
                        lVar4 = lVar4 + 1;
                    } while (arg3_00 < (int)m_mapSquareMaxZ);
                }
                bVar1 = (int)arg2 < (int)m_mapSquareMaxX;
                arg2 = arg2 + 1;
            } while (bVar1);
        }
        return uVar5;
    }

    // 0x10043e2c0
    auto
    World::BuildClientCompositeData(const shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>& arg1,
                                    int arg2, int arg3) {
        ClientCompositeData* this_00;
        fixed_vector<eastl::vector<eastl::vector<int>>, _4ul>* arg1_00;
        shared_ptr<ClientCompositeData> local_48;

        if (arg1 == nullptr) {
            auto result;
        } else {
            MakeSharedPool<ClientCompositeData, 8>::MakeShared<>();
            this_00 = (ClientCompositeData*)local_48.operator->();
            arg1_00 = (fixed_vector<eastl::vector<eastl::vector<int>>, _4ul>*)*arg1;
            this_00->DecodeFromRegionData(*arg1_00, m_mapSquareMinX << 3, m_mapSquareMinZ << 3, arg2, arg3);
            result.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_48);
        }
        return result;
    }

    // 0x10043e4f0
    auto World::BuildNonRegionComposite(shared_ptr<MapSquareWorldAreaCompositeInner>& mapSquareWorldAreaCompositeInner,
                                        int arg2, int arg3) {
        shared_ptr<ClientCompositeData> local_48;

        MakeSharedPool<ClientCompositeData, 8>::MakeShared<>();
        if (((ClientCompositeData*)local_48.operator->())
                ->DecodeFromWorldArea(*m_worldArea, mapSquareWorldAreaCompositeInner, arg2, arg3,
                                      (bool)*PTR_m_enableImpostors_100ee6648) == '\0') {
            auto result;
        } else {
            result.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_48);
        }
        return result;
    }

    // 0x10043e5a0
    void World::MainLogic(unsigned int arg1) {
        eastl local_20;

        eastl::destruct<oldscape::highlight::NpcUID*>(&local_20);
        ApplyPointLightAABBChanges();
        MapSquareMainLogic(arg1);
        UpdateLightFlicker();
        RemoveUnusedPointLights(arg1);
        auto this_00 = field_65744.GetRoot();
        World* local_30 = this;
        unsigned int local_28 = arg1;
        graphics::GraphNode::OnRecursive<World::MainLogic(unsigned int)::__3>(this_00, (__3*)&local_30);
        field_65712.MainLogic(field_48, field_56);
        field_80976.GarbageCollect();
    }

    // 0x10043e640
    void World::ApplyPointLightAABBChanges() {
        function<void(shared_ptr<MapSquare>&)> local_58[56];
        long local_20;

        auto this_00 = GetOrigin();
        auto arg1 = this_00->get_overflow_allocator();
        std::function<void(shared_ptr<MapSquare>&)>::function<World::ApplyPointLightAABBChanges()::__14, void>(local_58,
                                                                                                               arg1);
        OnAllMapSquares(local_58);
        auto this_01 = GetOrigin();
        this_01->ClearAffectedAABBs();
    }

    // 0x10043e6d0
    void World::MapSquareMainLogic(unsigned int arg1) {
        function<void(shared_ptr<MapSquare>&)> local_58[56];
        long local_20;

        std::function<void(shared_ptr<MapSquare>&)>::function<World::MapSquareMainLogic(unsigned int)::__4, void>(
            local_58, (__4*)this);
        OnRingMapSquares(1, local_58);
    }

    // 0x10043e750
    void World::UpdateLightFlicker() {
        auto this_00 = GetEffectManager();
        LightSource::SuppressFlicker((bool)this_00->IsEnabled(41));
    }

    // 0x10043e770
    void World::RemoveUnusedPointLights(int arg1) {
        bool cVar2;
        int iVar3;
        uint32_t uVar5;
        unsigned int* puVar6;
        Entity* pEVar7;
        LightSource* pLVar9;
        shared_ptr* psVar11;
        Logger* pLVar12;
        LogStream* this_01;
        LogStream local_158;
        LogStream local_c8;

        vector<unsigned int, BucketAllocatorEASTL> local_178;
        uint8_t* puVar1 = &field_786616;
        World* local_160 = this;
        auto local_1a0 = puVar1->begin();
        hashtable<unsigned int, eastl::pair<unsigned int const, shared_ptr<LightSource>>,
                  eastl::fixed_hashtable_allocator<4098ul, 32ul, 4096ul, 8ul, 0ul, true>,
                  eastl::use_first<eastl::pair<unsigned int const, shared_ptr<LightSource>>>,
                  eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>* local_180 =
            (hashtable<unsigned int, eastl::pair<unsigned int const, shared_ptr<LightSource>>,
                       eastl::fixed_hashtable_allocator<4098ul, 32ul, 4096ul, 8ul, 0ul, true>,
                       eastl::use_first<eastl::pair<unsigned int const, shared_ptr<LightSource>>>,
                       eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                       eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)puVar1;
        auto local_190 = puVar1->end();
        while (true) {
            cVar2 = local_1a0 != local_190;
            if (!cVar2)
                break;
            puVar6 = (unsigned int*)local_1a0.HeapBeginPtr();
            psVar11 = (shared_ptr*)(puVar6 + 2);
            cVar2 = shared_ptr::operator_cast_to_bool(psVar11);
            if (cVar2) {
                pEVar7 = (Entity*)(*psVar11).operator->();
                if (pEVar7->GetNode()->GetParent() == 0) {
                    pLVar9 = (LightSource*)(*psVar11).operator->();
                    cVar2 = pLVar9->HasRemoteMapSquareReferences();
                    if (!cVar2) {
                        pLVar9 = (LightSource*)(*psVar11).operator->();
                        iVar3 = pLVar9->GetLastUpdateTick();
                        if (0 < iVar3) {
                            pLVar9 = (LightSource*)(*psVar11).operator->();
                            iVar3 = pLVar9->GetLastUpdateTick();
                            if (5 < arg1 - iVar3) {
                                local_178.push_back(*puVar6);
                            }
                        }
                    }
                }
            }
            ++local_1a0;
        }
        puVar6 = (unsigned int*)local_178.HeapBeginPtr();
        auto puVar10 = local_178.end();
        if (puVar6 == puVar10) {
            iVar3 = 0;
        } else {
            puVar1 = &local_160->field_950616;
            iVar3 = 0;
            do {
                psVar11 = GetPointLight(local_160, *puVar6);
                if (psVar11->use_count() == 1) {
                    pEVar7 = (Entity*)(*psVar11).operator->();
                    pEVar7->ResetWorld();
                    puVar1->push_back(*psVar11);
                    local_180->erase(*puVar6);
                } else {
                    iVar3 = iVar3 + 1;
                }
                puVar6 = puVar6 + 1;
            } while (puVar6 != puVar10);
        }
        cVar2 = local_178.empty();
        if (!cVar2) {
            if (iVar3 == 0) {
                pLVar12 = logger::default_logger();
                this_01 = &local_158;
                new (this_01) logger::LogStream(LOGGER_SCENE);
                uVar5 = local_178.size();
                ((uint8_t)pLVar12)
                    ->Log(nullptr, (LogLevel)this_01, 8, 14431618, 501, "World removing %d orphaned point lights",
                          uVar5);
            } else {
                pLVar12 = logger::default_logger();
                this_01 = &local_c8;
                new (this_01) logger::LogStream(LOGGER_SCENE);
                uVar5 = local_178.size();
                ((uint8_t)pLVar12)
                    ->Log(nullptr, (LogLevel)this_01, 8, 14431618, 497,
                          "World removing %d orphaned point lights (%u were still in use and were skipped)", uVar5,
                          iVar3);
            }
            this_01->~LogStream();
        }
    }

    // 0x10043eaf0
    void World::OnRingMapSquares(int arg1, std::function<void(shared_ptr<MapSquare>&)> callback) {
        ShaderVariablePrecision SVar1;
        EnumOptionToggle EVar2;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        MapSquare* pMVar9;
        vector<MapSquareStatus>* this_00;
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread_00;
        int iVar10;

        uint8_t* midiPlayerMainThread = m_centreSquare;
        bool bVar3 = *midiPlayerMainThread != nullptr;
        if (bVar3) {
            SVar1 = m_mapSquareMinX;
            pMVar9 = (MapSquare*)(*midiPlayerMainThread).operator->();
            iVar5 = pMVar9->GetMapSquareX();
            iVar5 = eastl::max<int>(SVar1, iVar5 - arg1);
            EVar2 = m_mapSquareMaxX;
            pMVar9 = (MapSquare*)(*midiPlayerMainThread).operator->();
            iVar6 = pMVar9->GetMapSquareX();
            iVar6 = eastl::min<graphics::GraphicsQuality>(EVar2, iVar6 + arg1);
            SVar1 = m_mapSquareMinZ;
            pMVar9 = (MapSquare*)(*midiPlayerMainThread).operator->();
            iVar7 = pMVar9->GetMapSquareZ();
            iVar7 = eastl::max<int>(SVar1, iVar7 - arg1);
            EVar2 = m_mapSquareMaxZ;
            pMVar9 = (MapSquare*)(*midiPlayerMainThread).operator->();
            iVar8 = pMVar9->GetMapSquareZ();
            iVar8 = eastl::min<graphics::GraphicsQuality>(EVar2, arg1 + iVar8);
            if (iVar5 <= iVar6) {
                do {
                    iVar10 = iVar7;
                    if (iVar7 <= iVar8) {
                        do {
                            this_00 = &field_81672[(long)iVar5 - (long)(int)m_mapSquareMinX];
                            midiPlayerMainThread_00 = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)(*this_00)[(
                                long)(int)(iVar10 - m_mapSquareMinZ)];
                            if ((*(uint8_t**)(midiPlayerMainThread_00 + 16) != DataStatus::MISSING) &&
                                (bVar3 = *midiPlayerMainThread_00 != nullptr, bVar3)) {
                                if (((Entity*)(*midiPlayerMainThread_00).operator->())->IsAtTargetLOD() != '\0') {
                                    std::function<void(shared_ptr<MapSquare>&)>::operator()(
                                        (function<void(shared_ptr<MapSquare>&)>*)callback,
                                        (shared_ptr<MapSquare>*)midiPlayerMainThread_00);
                                }
                            }
                            iVar10 = iVar10 + 1;
                        } while (iVar8 + 1 != iVar10);
                    }
                    bVar3 = iVar5 != iVar6;
                    iVar5 = iVar5 + 1;
                } while (bVar3);
            }
        }
    }

    // 0x10043ecb0
    void World::MapSquareMainDraw(unsigned int arg1) {
        uint32_t in_register_00000034;
        function<void(shared_ptr<MapSquare>&)> local_58[56];
        long local_20;

        std::function<void(shared_ptr<MapSquare>&)>::function<World::MapSquareMainDraw(unsigned int)::__5, void>(
            local_58, (__5*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1));
        OnRingMapSquares(1, local_58);
    }

    // 0x10043eee0
    void World::AddPickableEntities(unsigned int arg1, graphics::GraphNode* graphNode, int arg3) {
        unsigned int uVar1;
        long* plVar2;
        Matrix44T<float>* pMVar3;
        Layout* this_00;
        uint64_t* puVar4;
        uint64_t* puVar5;

        if ((graphNode != nullptr) && (uVar1 = graphNode->GetVisibleFrame(arg3), uVar1 == arg1)) {
            plVar2 = (long*)graphNode->GetLinkObjCount();
            if (plVar2 != nullptr) {
                pMVar3 = graphNode->GetWorldTransformationMatrix();
                (**(void (**)(...))(*plVar2 + 176))(plVar2, this, pMVar3);
            }
            this_00 = (Layout*)graphNode->GetChildren();
            puVar4 = (uint64_t*)this_00->HeapBeginPtr();
            puVar5 = (uint64_t*)this_00->end();
            for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
                AddPickableEntities(arg1, *puVar4, arg3);
            }
        }
    }

    // 0x10043efa0
    uint64_t World::MainDraw(render::RenderTargets* renderTargets, unsigned int arg2,
                             const ViewTransforms& viewTransforms, float arg4, float arg5,
                             const render::Viewport& viewport, const CoordFine& coordFine, int arg8, int arg9,
                             unsigned int arg10) {
        EffectManager* pEVar3;
        FogEffect* this_01;
        shared_ptr<render::RenderTargets>* psVar4;
        uint64_t uVar5;
        eastl local_38;

        if (m_pRT7Core == nullptr) {
            return 0;
        }
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        UpdateLightProbeSH();
        MapSquareMainDraw(arg2);
        auto psVar2 = GetCentreSquare();
        bool cVar1 = shared_ptr::operator_cast_to_bool(psVar2);
        if (!cVar1) {
            return 0;
        }
        m_mainSceneDrawn = 1;
        m_maxRenderLevel = arg8;
        m_worldFocusLevel = coordFine.field_0;
        if ((arg10 & 32) != 0) {
            psVar2 = (shared_ptr*)GetCurrentEnvironmentSettings();
            cVar1 = shared_ptr::operator_cast_to_bool(psVar2);
            if (cVar1)
                goto LAB_10043f069;
        }
        CheckEnvironmentParameters(coordFine, arg4, arg5);
    LAB_10043f069:
        psVar2 = (shared_ptr*)GetCurrentEnvironmentSettings();
        cVar1 = shared_ptr::operator_cast_to_bool(psVar2);
        if (cVar1) {
            cVar1 = ((SkyBox*)(*m_skyBox).operator->())->IsReady();
            if (cVar1) {
                pEVar3 = (EffectManager*)GetEffectManager();
                cVar1 = pEVar3->IsEnabled(110);
                if (cVar1) {
                    pEVar3 = (EffectManager*)GetEffectManager();
                    this_01 = pEVar3->GetEffect<graphics::SunlightDirectLighting>(110);
                    psVar4 = m_pRT7Core->GetSSAORT();
                    this_01->SetSSAORT(*psVar4);
                }
                psVar4 = m_pRT7Core->GetGBufferRT();
                pEVar3 = (EffectManager*)GetEffectManager();
                m_worldRenderer->RenderView(renderTargets, *psVar4, *this, arg2, arg9, *pEVar3, viewTransforms,
                                            viewport, arg10);
                uVar5 = (((uint64_t)((uint64_t)(uint32_t)(arg10 >> 8)) << 8) | (uint8_t)1);
                if ((arg10 & 2) == 0) {
                    return uVar5;
                }
                RenderDebug(viewport);
                return uVar5;
            }
        }
        return 0;
    }

    // 0x10043f160
    void World::UpdateLightProbeSH() {
        if (((EffectManager*)GetEffectManager())->IsEnabled(21) != '\0') {
            ((LightProbeManager*)field_72.operator->())->UpdatePendingLightProbeSHAsync();
        }
    }

    // 0x10043f1c0
    void World::CheckEnvironmentParameters(const CoordFine& coordFine, float arg2, float arg3) {
        uint8_t* puVar1;
        uint8_t* puVar2;
        RT7Core* rt7Core;
        uint8_t bVar5;
        unsigned int uVar6;
        int iVar7;
        MapEnvironmentSettings* mapEnvironmentSettings;
        EnvironmentOverride* this_03;
        FogEffect* this_04;
        QuaternionT<float>* quaternion;
        GlobalEnvironmentMapping* this_05;
        CoordMapSquare* pCVar10;
        MapEnvironmentSettings* pMVar11;
        SkyBox* pSVar12;
        SkyBox* pSVar13;
        unsigned long long uVar14;
        unsigned long arg3_00;
        ReturnValue local_58;
        unsigned long long local_48;

        local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)arg2);
        auto this_00 = GetEffectManager();
        bool cVar4 = m_centreSquare->operator_cast_to_bool();
        if (!cVar4)
            goto LAB_10043f404;
        EnvironmentLoader* this_02 = ((MapSquare*)(*m_centreSquare).operator->())->GetEnvironmentLoader();
        if (this_02 == nullptr)
            goto LAB_10043f404;
        shared_ptr local_40;
        float* pfVar8 = &coordFine.field_4[0];
        float fVar3 = *pfVar8;
        pfVar8 = &coordFine.field_4[2];
        auto puVar9 = this_02->GetEnvironmentSettings(local_40, (unsigned int)(long)fVar3, (unsigned int)(long)*pfVar8,
                                                      m_worldFocusLevel);
        if (puVar9 == DataStatus::READY) {
            puVar1 = field_786600;
            cVar4 = puVar1->operator_cast_to_bool();
            if ((!cVar4) || (cVar4 = shared_ptr::operator_cast_to_bool(&local_40), !cVar4)) {
            LAB_10043f311:
                *puVar1 = local_40;
                this_03 = field_24->GetEnvironmentOverride();
                arg3_00 = 5000;
                if (this_03 != nullptr) {
                    cVar4 = this_03->HasAnyOverrides();
                    if (cVar4) {
                        pMVar11 = (MapEnvironmentSettings*)*local_40;
                        make_shared<MapEnvironmentSettings, MapEnvironmentSettings&>(&local_58, pMVar11);
                        pMVar11 = (MapEnvironmentSettings*)local_58.operator->();
                        pMVar11->ApplyOverride(*this_03);
                        local_40 = local_58;
                    }
                    cVar4 = field_24->IsFreshEnvironmentOverride();
                    if (cVar4) {
                        uVar6 = this_03->GetTransitionTime();
                        arg3_00 = (unsigned long)uVar6;
                    }
                }
                pMVar11 = (MapEnvironmentSettings*)*local_40;
                bVar5 = true;
                if (field_81584 == '\0') {
                    bVar5 = m_currentEnvironmentSettings->operator_cast_to_bool();
                    bVar5 = bVar5 ^ 1;
                }
                SetNewEnvironmentParameters(*pMVar11, (bool)bVar5, arg3_00, (float)local_48, arg3);
                *m_currentEnvironmentSettings = local_40;
                field_24->SetFreshEnvironmentOverride(false);
            } else {
                pMVar11 = (MapEnvironmentSettings*)*local_40;
                mapEnvironmentSettings = (MapEnvironmentSettings*)**puVar1;
                cVar4 = *pMVar11 != *mapEnvironmentSettings;
                if ((cVar4) || (cVar4 = field_24->IsFreshEnvironmentOverride(), cVar4))
                    goto LAB_10043f311;
            }
            field_81584 = 0;
        } else if (puVar9 == DataStatus::MISSING) {
            cVar4 = m_currentEnvironmentSettings->operator_cast_to_bool();
            if (!cVar4) {
                make_shared<MapEnvironmentSettings>(&local_58);
                *m_currentEnvironmentSettings = local_58;
            }
        }
    LAB_10043f404:
        puVar1 = m_currentEnvironmentSettings;
        cVar4 = puVar1->operator_cast_to_bool();
        if (!cVar4) {
            return;
        }
        local_48 = FrameTime::GetCurrentTimeMS();
        cVar4 = this_00->IsEnabled(57);
        if (cVar4) {
            this_04 = this_00->GetEffect<graphics::SunlightDirectLighting>(57);
            cVar4 = this_00->IsEnabled(57);
            if (cVar4) {
                this_04->Update();
            }
            quaternion = (QuaternionT<float>*)this_04->GetShaderConsts();
            field_65840 = *quaternion;
        }
        cVar4 = this_00->IsEnabled(51);
        if (cVar4) {
            this_05 = (GlobalEnvironmentMapping*)this_00->GetEffect<graphics::SunlightDirectLighting>(51);
            pCVar10 = field_48->GetMapDefaults();
            if (pCVar10 != nullptr) {
                cVar4 = m_defaultEnvironmentMap->operator_cast_to_bool();
                if (!cVar4) {
                    pMVar11 = (MapEnvironmentSettings*)(*puVar1).operator->();
                    rt7Core = m_pRT7Core;
                    iVar7 = pCVar10->GetX();
                    pMVar11->GetEnvironmentCubeMap(*m_defaultEnvironmentMap, rt7Core, iVar7);
                }
            }
            pMVar11 = (MapEnvironmentSettings*)(*puVar1).operator->();
            iVar7 = pMVar11->GetReflectionSettings()->GetZ();
            if (iVar7 == -1) {
                if (pCVar10 == nullptr) {
                    iVar7 = -1;
                } else {
                    iVar7 = pCVar10->GetX();
                }
            } else {
                pMVar11 = (MapEnvironmentSettings*)(*puVar1).operator->();
                pCVar10 = pMVar11->GetReflectionSettings();
                iVar7 = pCVar10->GetZ();
            }
            puVar2 = field_950648;
            cVar4 = puVar2->operator_cast_to_bool();
            if ((!cVar4) || (field_950736 != iVar7)) {
                puVar2->reset();
                field_950736 = iVar7;
                pMVar11 = (MapEnvironmentSettings*)(*puVar1).operator->();
                pMVar11->GetEnvironmentCubeMap(*puVar2, m_pRT7Core, iVar7);
                this_05->SetTexture(*puVar2, 5000, local_48);
            }
            this_05->SetClearColour(field_65840);
            this_05->MainLogic(local_48, *this_00);
        }
        if (graphics::SkyBox::m_UseModels != '\0') {
            puVar2 = m_skyBox;
            pSVar12 = (SkyBox*)(*puVar2).operator->();
            iVar7 = pSVar12->GetPendingSkyID();
            if (-1 < iVar7) {
                local_40 = shared_ptr();
                pMVar11 = (MapEnvironmentSettings*)(*puVar1).operator->();
                puVar9 = (uint8_t*)pMVar11->GetSkyBoxModel(local_40, m_pRT7Core, field_48, *field_56);
                if (puVar9 == DataStatus::READY) {
                    cVar4 = shared_ptr::operator_cast_to_bool(&local_40);
                    if (!cVar4) {
                        LogAssert("currentSkyModel",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "scene/World.cpp",
                                  761, nullptr);
                    }
                    pSVar12 = (SkyBox*)(*puVar2).operator->();
                    pSVar13 = (SkyBox*)(*puVar2).operator->();
                    uVar14 = pSVar13->GetPendingSkyTransitionTime();
                    pSVar12->SetModel(local_40, uVar14, local_48);
                    ((LightProbeManager*)field_72.operator->())->AddAllExistingMapSquaresToUpdateList();
                } else if (puVar9 == DataStatus::MISSING) {
                    pSVar12 = (SkyBox*)(*puVar2).operator->();
                    local_58 = shared_ptr();
                    pSVar13 = (SkyBox*)(*puVar2).operator->();
                    uVar14 = pSVar13->GetPendingSkyTransitionTime();
                    pSVar12->SetModel(local_58, uVar14, local_48);
                }
            }
        }
        if (graphics::SkyBox::m_UseModels == '\0') {
            puVar2 = m_skyBox;
            pSVar12 = (SkyBox*)(*puVar2).operator->();
            iVar7 = pSVar12->GetPendingSkyID();
            if (-1 < iVar7) {
                local_40 = shared_ptr();
                pMVar11 = (MapEnvironmentSettings*)(*puVar1).operator->();
                puVar9 = (uint8_t*)pMVar11->GetSkyBoxCubeMap(local_40, m_pRT7Core, field_48);
                if (puVar9 == DataStatus::READY) {
                    cVar4 = shared_ptr::operator_cast_to_bool(&local_40);
                    if (!cVar4) {
                        LogAssert("currentSkyMap",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "scene/World.cpp",
                                  777, nullptr);
                    }
                    pSVar12 = (SkyBox*)(*puVar2).operator->();
                    pSVar13 = (SkyBox*)(*puVar2).operator->();
                    uVar14 = pSVar13->GetPendingSkyTransitionTime();
                    pSVar12->SetCubeMap(local_40, uVar14, local_48);
                } else if (puVar9 == DataStatus::MISSING) {
                    pSVar12 = (SkyBox*)(*puVar2).operator->();
                    local_58 = shared_ptr();
                    pSVar13 = (SkyBox*)(*puVar2).operator->();
                    uVar14 = pSVar13->GetPendingSkyTransitionTime();
                    pSVar12->SetCubeMap(local_58, uVar14, local_48);
                }
            }
        }
        cVar4 = this_00->IsEnabled(29);
        if (cVar4) {
            ((SunlightDirectLighting*)this_00->GetEffect<graphics::SunlightDirectLighting>(29))->Update();
        }
        cVar4 = this_00->IsEnabled(48);
        if (cVar4) {
            ((LightScatteringEffect*)this_00->GetEffect<graphics::SunlightDirectLighting>(48))->Update();
        }
        cVar4 = m_skyBox->operator_cast_to_bool();
        if (cVar4) {
            pSVar12 = (SkyBox*)(*m_skyBox).operator->();
            pSVar12->SetClearColour(field_65840);
        }
    }

    // 0x10043f970
    void World::RenderDebug(const render::Viewport& viewport) {
        float fVar1;
        World* pWVar2;
        bool cVar3;
        int iVar4;
        uint32_t uVar5;
        int iVar6;
        int iVar7;
        uint32_t uVar8;
        unsigned int uVar9;
        unsigned int uVar10;
        unsigned int uVar11;
        Vector3T<float>* pVVar12;
        shared_ptr* psVar13;
        MapSquare* pMVar14;
        shared_ptr* this_00;
        Layout* this_01;
        LightSource* pLVar15;
        Entity* pEVar16;
        Layout* this_02;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_03;
        int* piVar17;
        Vector2T<int>* pVVar18;
        uint32_t* puVar19;
        long* plVar20;
        uint64_t uVar21;
        uint64_t uVar22;
        unsigned int* puVar23;
        float* pfVar24;
        Location* this_04;
        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* this_05;
        ModelMaterial* this_07;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar25;
        vector<unsigned int>* pvVar26;
        char* pcVar27;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>* pvVar28;
        unsigned int arg2;
        long lVar29;
        unsigned long uVar30;
        float fVar31;
        float arg2_00;
        float fVar32;
        uint8_t local_2d0[16];
        unsigned long local_2c0;
        uint64_t local_2b0;
        float local_2a8;
        uint8_t local_2a0[16];
        uint8_t local_290[16];
        ColourHSL local_280;
        long local_260;
        unsigned long local_258;
        ColourHSL local_250;
        vector<int>* local_240;
        ColourHSL local_238;
        uint8_t local_228[16];
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>* local_218;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>* local_210;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>* local_208;
        ColourHSL local_200;
        vector<unsigned int>* local_1e8;
        vector<unsigned int>* local_1e0;
        unsigned long local_1d8;
        shared_ptr* local_1d0;
        SideBarData local_1c8;
        Sphere local_160;

        if (m_showPointLights != '\0') {
            local_280 = math::ColourHSL(0.0, 28.9, 0.0);
            local_238 = math::ColourHSL(0.0, -14.4, 28.9);
            local_200 = math::ColourHSL(-25.0, -14.4, -14.4);
            uVar21 = 3244713574;
            local_250 = math::ColourHSL(25.0, -14.4, -14.4);
            pWVar2 = this;
            pVVar12 = (Vector3T<float>*)GetLastCameraPosition();
            psVar13 = (shared_ptr*)GetClosestMapSquare(pWVar2, pVVar12);
            cVar3 = shared_ptr::operator_cast_to_bool(psVar13);
            if (cVar3) {
                pMVar14 = (MapSquare*)(*psVar13).operator->();
                iVar4 = pMVar14->GetMapSquareX();
                pMVar14 = (MapSquare*)(*psVar13).operator->();
                uVar5 = pMVar14->GetMapSquareZ();
                local_260 = (((uint64_t)local_260._4_4_ << 32) | (uint32_t)uVar5);
                pMVar14 = (MapSquare*)(*psVar13).operator->();
                iVar6 = pMVar14->GetMapSquareX();
                pMVar14 = (MapSquare*)(*psVar13).operator->();
                iVar7 = pMVar14->GetMapSquareZ();
                local_240 = (vector<int>*)(((uint64_t)local_240._4_4_ << 32) | (uint32_t)iVar7);
                local_210 =
                    (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                            eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)(((uint64_t)local_210._4_4_
                                                                                          << 32) |
                                                                                         (uint32_t)(iVar4 - 1U));
                local_258 = (((uint64_t)local_258._4_4_ << 32) | (uint32_t)(iVar6 + 1U));
                if (iVar4 - 1U <= iVar6 + 1U) {
                    local_260 = (((uint64_t)local_260._4_4_ << 32) | (uint32_t)((unsigned int)local_260 - 1));
                    local_240 = (vector<int>*)(((uint64_t)local_240._4_4_ << 32) | (uint32_t)(iVar7 + 1));
                    do {
                        uVar9 = (unsigned int)local_260;
                        if ((unsigned int)local_260 <= (unsigned int)local_240) {
                            do {
                                local_218 =
                                    (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                                            eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul,
                                                                          true>>*)(((uint64_t)local_218._4_4_ << 32) |
                                                                                   (uint32_t)uVar9);
                                psVar13 = (shared_ptr*)GetMapSquare((int)local_210, uVar9);
                                cVar3 = shared_ptr::operator_cast_to_bool(psVar13);
                                if (cVar3) {
                                    pMVar14 = (MapSquare*)(*psVar13).operator->();
                                    this_01 = (Layout*)pMVar14->GetLightSourcesLocal();
                                    psVar13 = (shared_ptr*)this_01->HeapBeginPtr();
                                    local_1d0 = (shared_ptr*)this_01->end();
                                    if (psVar13 != local_1d0) {
                                        local_1d8 = local_1d8 & 18446744069414584320;
                                        do {
                                            if (-1 < (int)m_showMaxLevel) {
                                                iVar4 = -1;
                                                do {
                                                    iVar4 = iVar4 + 1;
                                                    pLVar15 = (LightSource*)(*psVar13).operator->();
                                                    cVar3 = pLVar15->AffectsLevel(iVar4);
                                                    fVar32 = (float)uVar21;
                                                    if (cVar3) {
                                                        plVar20 = DebugPrimitiveCollectorBasic::GetCollector("");
                                                        if (plVar20 != nullptr) {
                                                            pEVar16 = (Entity*)(*psVar13).operator->();
                                                            pVVar12 = (Vector3T<float>*)pEVar16->GetWorldPosition();
                                                            lVar29 = (*psVar13).operator->();
                                                            puVar23 = (unsigned int*)((lVar29 + 192))->SSOBeginPtr();
                                                            local_160 = math::Sphere(*pVVar12, (float)*puVar23);
                                                            lVar29 = (*psVar13).operator->();
                                                            uVar9 = ((lVar29 + 192))->GetPos();
                                                            local_1c8 =
                                                                oldscape::sidebars::SideBarData(uVar9 | 4278190080, 2);
                                                            (**(void (**)(...))(*plVar20 + 32))(plVar20, &local_160,
                                                                                                &local_1c8);
                                                        }
                                                        pEVar16 = (Entity*)(*psVar13).operator->();
                                                        pVVar12 = (Vector3T<float>*)pEVar16->GetWorldPosition();
                                                        local_290._0_8_ = *pVVar12 + local_280;
                                                        local_290._8_4_ = fVar32;
                                                        pEVar16 = (Entity*)(*psVar13).operator->();
                                                        pVVar12 = (Vector3T<float>*)pEVar16->GetWorldPosition();
                                                        local_2a0._0_8_ = *pVVar12 + local_238;
                                                        local_2a0._8_4_ = fVar32;
                                                        pEVar16 = (Entity*)(*psVar13).operator->();
                                                        pVVar12 = (Vector3T<float>*)pEVar16->GetWorldPosition();
                                                        local_228._0_8_ = *pVVar12 + local_200;
                                                        local_228._8_4_ = fVar32;
                                                        pEVar16 = (Entity*)(*psVar13).operator->();
                                                        pVVar12 = (Vector3T<float>*)pEVar16->GetWorldPosition();
                                                        local_2b0 = *pVVar12 + local_250;
                                                        local_2a8 = fVar32;
                                                        plVar20 = DebugPrimitiveCollectorBasic::GetCollector("");
                                                        if (plVar20 != nullptr) {
                                                            local_160 = oldscape::sidebars::SideBarData(-65536, 0);
                                                            (**(void (**)(...))(*plVar20 + 16))(
                                                                plVar20, local_290, local_228, local_2a0, &local_160);
                                                        }
                                                        plVar20 = DebugPrimitiveCollectorBasic::GetCollector("");
                                                        if (plVar20 != nullptr) {
                                                            local_160 = oldscape::sidebars::SideBarData(-16711936, 0);
                                                            (**(void (**)(...))(*plVar20 + 16))(
                                                                plVar20, local_290, &local_2b0, local_228, &local_160);
                                                        }
                                                        plVar20 = DebugPrimitiveCollectorBasic::GetCollector("");
                                                        if (plVar20 != nullptr) {
                                                            local_160 = oldscape::sidebars::SideBarData(-16776961, 0);
                                                            (**(void (**)(...))(*plVar20 + 16))(
                                                                plVar20, local_290, local_2a0, &local_2b0, &local_160);
                                                        }
                                                        plVar20 = DebugPrimitiveCollectorBasic::GetCollector("");
                                                        if (plVar20 != nullptr) {
                                                            local_160 = oldscape::sidebars::SideBarData(-1, 0);
                                                            (**(void (**)(...))(*plVar20 + 16))(
                                                                plVar20, local_2a0, local_228, &local_2b0, &local_160);
                                                        }
                                                        pLVar15 = (LightSource*)(*psVar13).operator->();
                                                        local_160[0]._0_8_ = pLVar15->GetLocalPosition();
                                                        local_160[0].field_8 = fVar32;
                                                        pfVar24 = (float*)local_160.SSOBeginPtr();
                                                        fVar1 = *pfVar24;
                                                        pLVar15 = (LightSource*)(*psVar13).operator->();
                                                        local_160[0]._0_8_ = pLVar15->GetLocalPosition();
                                                        local_160[0].field_8 = fVar32;
                                                        pfVar24 = (float*)local_160.second();
                                                        fVar32 = *pfVar24;
                                                        local_160 = eastl::fixed_string<char, 256>();
                                                        pLVar15 = (LightSource*)(*psVar13).operator->();
                                                        uVar8 = pLVar15->GetWorldPointLightID();
                                                        lVar29 = (*psVar13).operator->();
                                                        puVar19 = (uint32_t*)((lVar29 + 192))->SSOBeginPtr();
                                                        uVar5 = *puVar19;
                                                        pEVar16 = (Entity*)(*psVar13).operator->();
                                                        this_02 = (Layout*)pEVar16->GetWorldPosition();
                                                        puVar19 = (uint32_t*)this_02->SSOBeginPtr();
                                                        local_1e0 =
                                                            (vector<unsigned int>*)(((uint64_t)local_1e0._4_4_ << 32) |
                                                                                    (uint32_t)(*puVar19));
                                                        pEVar16 = (Entity*)(*psVar13).operator->();
                                                        pVVar18 = (Vector2T<int>*)pEVar16->GetWorldPosition();
                                                        puVar19 = (uint32_t*)pVVar18->y();
                                                        local_1e8 =
                                                            (vector<unsigned int>*)(((uint64_t)local_1e8._4_4_ << 32) |
                                                                                    (uint32_t)(*puVar19));
                                                        pEVar16 = (Entity*)(*psVar13).operator->();
                                                        this_03 =
                                                            (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*,
                                                                                 eastl::allocator, 0>*)
                                                                pEVar16->GetWorldPosition();
                                                        puVar19 = (uint32_t*)this_03->second();
                                                        local_208 =
                                                            (vector<
                                                                Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                                                                eastl::fixed_vector_allocator<
                                                                    32ul, 64ul, 8ul, 0ul,
                                                                    true>>*)(((uint64_t)local_208._4_4_ << 32) |
                                                                             (uint32_t)(*puVar19));
                                                        pLVar15 = (LightSource*)(*psVar13).operator->();
                                                        local_1e0 = (vector<unsigned int>*)(double)local_1e0._0_4_;
                                                        local_1e8 = (vector<unsigned int>*)(double)local_1e8._0_4_;
                                                        local_208 =
                                                            (vector<
                                                                Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                                                                eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul,
                                                                                              true>>*)(double)
                                                                local_208._0_4_;
                                                        fVar31 = (float)pLVar15->GetCurrentIntensity();
                                                        local_160.sprintf(
                                                            "Light[%u, %u, %d, %d, %d, %u, "
                                                            "%u]\n%0.3f,%0.3f,%0.3f\n%0.3f",
                                                            (int)local_1e0, local_1e8, local_208, (double)fVar31,
                                                            (unsigned long)local_210 & 4294967295,
                                                            (unsigned long)local_218 & 4294967295,
                                                            (unsigned long)(unsigned int)((int)fVar1 >> 7),
                                                            (unsigned long)(unsigned int)((int)fVar32 >> 7), uVar8,
                                                            (float)local_1d8, uVar5);
                                                        plVar20 = DebugPrimitiveCollectorBasic::GetCollector("");
                                                        if (plVar20 != nullptr) {
                                                            pEVar16 = (Entity*)(*psVar13).operator->();
                                                            uVar21 = pEVar16->GetWorldPosition();
                                                            pcVar27 = (char*)eastl::basic_string<
                                                                char, BucketAllocatorEASTL>::begin();
                                                            local_1c8 = eastl::string(pcVar27);
                                                            new (local_2d0) oldscape::sidebars::SideBarData(-1, 0);
                                                            (**(void (**)(...))(*plVar20 + 136))(
                                                                plVar20, uVar21, &local_1c8, (SideBarData*)local_2d0);
                                                        }
                                                        local_1d8 = (((uint64_t)local_1d8._4_4_ << 32) |
                                                                     (uint32_t)((int)(float)local_1d8 + 1));
                                                    }
                                                } while (iVar4 < (int)m_showMaxLevel);
                                            }
                                            psVar13 = psVar13 + 1;
                                        } while (psVar13 != local_1d0);
                                    }
                                }
                                uVar9 = (int)local_218 + 1;
                            } while (uVar9 <= (unsigned int)local_240);
                        }
                        uVar9 = (int)local_210 + 1;
                        local_210 =
                            (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                                    eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)(((uint64_t)
                                                                                                      local_210._4_4_
                                                                                                  << 32) |
                                                                                                 (uint32_t)uVar9);
                    } while (uVar9 <= (unsigned int)local_258);
                }
            }
        }
        pWVar2 = this;
        if (m_showFloorGrid != '\0') {
            pVVar12 = (Vector3T<float>*)GetLastCameraPosition();
            psVar13 = (shared_ptr*)GetClosestMapSquare(pWVar2, pVVar12);
            cVar3 = shared_ptr::operator_cast_to_bool(psVar13);
            if (cVar3) {
                if ((m_showFloorGridUseWaterHeight == '\0') || (m_worldFocusLevel != 0)) {
                    pMVar14 = (MapSquare*)(*psVar13).operator->();
                    this_00 = pMVar14->GetHeightMap(m_worldFocusLevel);
                } else {
                    pMVar14 = (MapSquare*)(*psVar13).operator->();
                    this_00 = pMVar14->GetWaterHeights();
                }
                cVar3 = shared_ptr::operator_cast_to_bool(this_00);
                if (cVar3) {
                    local_208 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                                        eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)**this_00;
                    local_160 = Array<math::Vector3T<float>>(4225);
                    pvVar26 = nullptr;
                    local_1d8 = 0;
                    do {
                        lVar29 = 0;
                        local_1e0 = pvVar26;
                        do {
                            pVVar12 = &local_160[(unsigned long)pvVar26];
                            pMVar14 = (MapSquare*)(*psVar13).operator->();
                            iVar4 = pMVar14->GetMapSquareX();
                            pMVar14 = (MapSquare*)(*psVar13).operator->();
                            local_1d0 = (shared_ptr*)(((uint64_t)local_1d0._4_4_ << 32) |
                                                      (uint32_t)((float)(unsigned int)(iVar4 * 8192 + (int)lVar29)));
                            iVar4 = pMVar14->GetMapSquareZ();
                            pVVar12->Set(local_1d0._0_4_, 0.0,
                                         (float)(unsigned int)((iVar4 * 64 + (int)local_1d8) * 128));
                            lVar29 = lVar29 + 128;
                            pvVar26 = pvVar26 + 1;
                        } while (lVar29 != 8320);
                        local_1d8 = local_1d8 + 1;
                        pvVar26 = local_1e0 + 65;
                    } while (local_1d8 != 65);
                    uVar9 = local_208->size();
                    if (0 < (int)uVar9) {
                        local_218 =
                            (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                                    eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)(unsigned long)uVar9;
                        local_1e8 = (vector<unsigned int>*)18446743790241710080;
                        pvVar28 = nullptr;
                        do {
                            local_1e0 = (vector<unsigned int>*)(*local_208)[(unsigned long)pvVar28];
                            uVar9 = local_1e0->size();
                            if (0 < (int)uVar9) {
                                local_1d0 = (shared_ptr*)(unsigned long)uVar9;
                                uVar30 = 0;
                                pvVar26 = local_1e8;
                                do {
                                    if ((((int)uVar30 - 1U < 65) && (pvVar28 != nullptr)) &&
                                        (pvVar28 <
                                         (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                                                 eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)66)) {
                                        piVar17 = (int*)(*local_1e0)[uVar30];
                                        iVar4 = *piVar17;
                                        pVVar18 = &local_160[(long)pvVar26 >> 32];
                                        local_1d8 = (((uint64_t)local_1d8._4_4_ << 32) | (uint32_t)((float)iVar4));
                                        puVar19 = (uint32_t*)pVVar18->y();
                                        *puVar19 = (float)local_1d8;
                                    }
                                    uVar30 = uVar30 + 1;
                                    pvVar26 = pvVar26 + 279172874240;
                                } while (local_1d0 != (shared_ptr*)uVar30);
                            }
                            pvVar28 = pvVar28 + 1;
                            local_1e8 = local_1e8 + 4294967296;
                        } while (pvVar28 != local_218);
                    }
                    local_1e0 = (vector<unsigned int>*)1;
                    local_1d8 = 0;
                    local_1d0 = nullptr;
                    do {
                        uVar30 = 0;
                        do {
                            if ((local_1d0 < 64) &&
                                (plVar20 = DebugPrimitiveCollectorBasic::GetCollector(""), plVar20 != nullptr)) {
                                uVar21 = local_160[local_1d8 + uVar30];
                                uVar22 = local_160[local_1d8 + uVar30 + 65];
                                local_1c8 = oldscape::sidebars::SideBarData(-10420225, 1);
                                (**(void (**)(...))(*plVar20 + 24))(plVar20, uVar21, uVar22, &local_1c8);
                            }
                            if ((uVar30 < 64) &&
                                (plVar20 = DebugPrimitiveCollectorBasic::GetCollector(""), plVar20 != nullptr)) {
                                uVar21 = local_160[local_1d8 + uVar30];
                                uVar22 = local_160[(long)local_1e0 + uVar30];
                                local_1c8 = oldscape::sidebars::SideBarData(-10420225, 1);
                                (**(void (**)(...))(*plVar20 + 24))(plVar20, uVar21, uVar22, &local_1c8);
                            }
                            uVar30 = uVar30 + 1;
                        } while (uVar30 != 65);
                        local_1d0 = (shared_ptr*)((long)local_1d0 + 1);
                        local_1e0 = (vector<unsigned int>*)((long)local_1e0 + 65);
                        local_1d8 = local_1d8 + 65;
                    } while (local_1d0 != (shared_ptr*)65);
                }
            }
        }
        pWVar2 = this;
        if (m_showHeightMap != '\0' || m_showHeightMapRest != '\0') {
            local_238.field_0 = -2.9907628e+38;
            local_238.field_4 = -2.565371e+38;
            local_238.field_8 = -NAN;
            local_238._12_4_ = 4294934656;
            pVVar12 = (Vector3T<float>*)GetLastCameraPosition();
            local_1d0 = (shared_ptr*)GetClosestMapSquare(pWVar2, pVVar12);
            cVar3 = shared_ptr::operator_cast_to_bool(local_1d0);
            if ((cVar3) && (m_showHeightMap != '\0')) {
                fVar32 = m_showMinLevel;
                if (m_showHeightMapRest != '\0') {
                    fVar32 = m_showMaxLevel;
                }
                if ((float)(int)m_showMinLevel < fVar32 + 1.0) {
                    uVar30 = (unsigned long)(int)m_showMinLevel;
                    do {
                        pMVar14 = (MapSquare*)(*local_1d0).operator->();
                        local_1e0 = (vector<unsigned int>*)uVar30;
                        psVar13 = pMVar14->GetHeightMap((int)uVar30);
                        cVar3 = shared_ptr::operator_cast_to_bool(psVar13);
                        if (cVar3) {
                            local_2d0._8_8_ = **psVar13;
                            uVar9 = local_2d0._8_8_->size();
                            if (0 < (int)uVar9) {
                                local_2c0 = (unsigned long)uVar9;
                                uVar30 = 0;
                                do {
                                    local_258 = uVar30;
                                    local_240 = (vector<int>*)(*local_2d0._8_8_)[uVar30];
                                    uVar9 = local_240->size();
                                    if (0 < (int)uVar9) {
                                        pvVar28 =
                                            (vector<
                                                Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                                                eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)(local_258 -
                                                                                                             1);
                                        local_260 = -(unsigned long)uVar9;
                                        local_208 = nullptr;
                                        local_210 = pvVar28;
                                        puVar23 = (unsigned int*)(*local_240)[0];
                                        uVar9 = *puVar23;
                                        local_160 = eastl::fixed_string<char, 128>();
                                        pMVar14 = (MapSquare*)(*local_1d0).operator->();
                                        arg2 = (unsigned int)pvVar28;
                                        uVar10 = pMVar14->GetTileLink((int)local_1e0, arg2, -1);
                                        local_1d8 = 18446744073709551615;
                                        pMVar14 = (MapSquare*)(*local_1d0).operator->();
                                        uVar11 = pMVar14->GetRemoveRoofID((int)local_1e0 + 1, arg2, (int)local_1d8);
                                        if (uVar10 != 4294967295) {
                                            pcVar27 = ":";
                                            if ((uVar10 & 4) != 0) {
                                                if ((int)uVar11 < 1) {
                                                    local_160 += ":";
                                                    local_160 += "roof";
                                                    pcVar27 = ",";
                                                } else {
                                                    local_160.append_sprintf("%sroof(%d)", ":", (unsigned long)uVar11);
                                                    pcVar27 = ",";
                                                }
                                            }
                                            if ((uVar10 & 2) != 0) {
                                                local_160 += pcVar27;
                                                local_160 += "link";
                                                pcVar27 = ",";
                                            }
                                            if ((uVar10 & 8) != 0) {
                                                local_160 += pcVar27;
                                                local_160 += "visbelow";
                                            }
                                        }
                                        local_1c8 = eastl::fixed_string<char, 64>();
                                        uVar30 = local_1d8;
                                        uVar10 = (unsigned int)local_1d8;
                                        uVar21 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                        if (((arg2 | uVar10) & 7) == 0) {
                                            local_1c8.sprintf("[%d,%d] %d%s", (unsigned long)pvVar28 & 4294967295,
                                                              uVar30 & 4294967295, (unsigned long)uVar9, uVar21);
                                        } else {
                                            local_1c8.sprintf("%d%s", (unsigned long)uVar9, uVar21);
                                        }
                                        local_200 = math::Vector3T();
                                        pMVar14 = (MapSquare*)(*local_1d0).operator->();
                                        iVar4 = pMVar14->GetMapSquareX();
                                        local_1e8._0_4_ = (float)((iVar4 * 64 + arg2) * 128);
                                        pfVar24 = (float*)local_200.SSOBeginPtr();
                                        *pfVar24 = local_1e8._0_4_;
                                        pMVar14 = (MapSquare*)(*local_1d0).operator->();
                                        iVar4 = pMVar14->GetMapSquareZ();
                                        local_218 =
                                            (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                                                    eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul,
                                                                                  true>>*)(((uint64_t)local_218._4_4_
                                                                                            << 32) |
                                                                                           (uint32_t)4294967168);
                                        local_1e8._0_4_ = (float)(iVar4 * 8192 - 128);
                                        pfVar24 = (float*)local_200.second();
                                        *pfVar24 = local_1e8._0_4_;
                                        local_1e8 = (vector<unsigned int>*)(((uint64_t)local_1e8._4_4_ << 32) |
                                                                            (uint32_t)((float)(int)uVar9));
                                        puVar19 = (uint32_t*)local_200.y();
                                        *puVar19 = local_1e8._0_4_;
                                        plVar20 = DebugPrimitiveCollectorBasic::GetCollector("");
                                        if (plVar20 != nullptr) {
                                            pcVar27 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                            local_280 = eastl::string(pcVar27);
                                            piVar17 = &local_238[(unsigned long)local_1e0];
                                            new (local_290) oldscape::sidebars::SideBarData(*piVar17, 0);
                                            (**(void (**)(...))(*plVar20 + 136))(plVar20, &local_200, &local_280,
                                                                                 (SideBarData*)local_290);
                                            pvVar28 = local_210;
                                        }
                                        this_04 = (Location*)(*local_1d0).operator->();
                                        uVar30 = local_1d8;
                                        this_05 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                                      this_04->GetParentLocationType();
                                        uVar9 =
                                            ((Terrain*)(*this_05).operator->())
                                                ->GetLocationHeightOffset((int)local_1e0, (int)pvVar28, (int)uVar30, 2);
                                        if (uVar9 != 0) {
                                            pfVar24 = (float*)local_200.SSOBeginPtr();
                                            *pfVar24 = *pfVar24 + 64.0;
                                            pfVar24 = (float*)local_200.second();
                                            *pfVar24 = *pfVar24 + 64.0;
                                            local_250.field_8 = local_200.field_8;
                                            local_250.field_0 = local_200.field_0;
                                            local_250.field_4 = local_200.field_4;
                                            local_1e8 = (vector<unsigned int>*)(((uint64_t)local_1e8._4_4_ << 32) |
                                                                                (uint32_t)((float)(int)uVar9));
                                            pfVar24 = (float*)local_250.y();
                                            *pfVar24 = local_1e8._0_4_ + *pfVar24;
                                            local_1c8.sprintf("^%d", (unsigned long)uVar9);
                                            puVar23 = &local_238[(unsigned long)local_1e0];
                                            new (local_228) math::ColourStorage8888(*puVar23);
                                            uVar5 = (*((local_228._0_8_ & 4294967295))) * *arg2_00;
                                            local_228._0_4_ = uVar5;
                                            plVar20 = DebugPrimitiveCollectorBasic::GetCollector("");
                                            if (plVar20 != nullptr) {
                                                pcVar27 =
                                                    (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                                new (local_290) eastl::allocator("EASTL basic_string");
                                                local_280 = eastl::string(pcVar27, local_290);
                                                iVar4 = local_228->GetX();
                                                new (local_2a0) oldscape::sidebars::SideBarData(iVar4, 0);
                                                (**(void (**)(...))(*plVar20 + 136))(plVar20, &local_250, &local_280,
                                                                                     (SideBarData*)local_2a0);
                                            }
                                            plVar20 = DebugPrimitiveCollectorBasic::GetCollector("");
                                            if (plVar20 != nullptr) {
                                                iVar4 = local_228->GetX();
                                                new (&local_280) oldscape::sidebars::SideBarData(iVar4, 3);
                                                (**(void (**)(...))(*plVar20 + 24))(plVar20, &local_200, &local_250);
                                            }
                                        }
                                    }
                                    uVar30 = local_258 + 1;
                                } while (uVar30 != local_2c0);
                            }
                        }
                        uVar30 = (long)local_1e0 + 1;
                        pfVar24 = &m_showMaxLevel;
                        if (m_showHeightMapRest == '\0') {
                            pfVar24 = &m_showMinLevel;
                        }
                    } while ((float)(int)uVar30 < *pfVar24 + 1.0);
                }
            }
        }
        pWVar2 = this;
        if (m_showWaterHeights != '\0') {
            pVVar12 = GetLastCameraFocusPosition();
            local_1d0 = (shared_ptr*)GetClosestMapSquare(pWVar2, pVVar12);
            cVar3 = shared_ptr::operator_cast_to_bool(local_1d0);
            if (cVar3) {
                pMVar14 = (MapSquare*)(*local_1d0).operator->();
                psVar13 = pMVar14->GetWaterHeights();
                cVar3 = shared_ptr::operator_cast_to_bool(psVar13);
                if (cVar3) {
                    local_218 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                                        eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)**psVar13;
                    uVar9 = local_218->size();
                    if (0 < (int)uVar9) {
                        local_210 =
                            (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                                    eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)(unsigned long)uVar9;
                        pvVar28 = nullptr;
                        do {
                            local_1e8 = (vector<unsigned int>*)(*local_218)[(unsigned long)pvVar28];
                            uVar9 = local_1e8->size();
                            if (0 < (int)uVar9) {
                                local_1e0 = (vector<unsigned int>*)(unsigned long)uVar9;
                                iVar4 = -128;
                                uVar30 = 0;
                                local_208 = pvVar28;
                                do {
                                    pMVar14 = (MapSquare*)(*local_1d0).operator->();
                                    iVar6 = (int)pvVar28 - 1;
                                    cVar3 = pMVar14->GetUnderworldData(iVar6, (int)uVar30 - 1);
                                    if (cVar3) {
                                        puVar23 = (unsigned int*)(*local_1e8)[uVar30];
                                        uVar9 = *puVar23;
                                        local_160 = eastl::fixed_string<char, 64>();
                                        local_160.sprintf("%d", (unsigned long)uVar9);
                                        local_280 = math::Vector3T();
                                        pMVar14 = (MapSquare*)(*local_1d0).operator->();
                                        iVar7 = pMVar14->GetMapSquareX();
                                        local_1d8._0_4_ = (float)(unsigned int)((iVar7 * 64 + iVar6) * 128);
                                        pfVar24 = (float*)local_280.SSOBeginPtr();
                                        *pfVar24 = (float)local_1d8;
                                        pMVar14 = (MapSquare*)(*local_1d0).operator->();
                                        iVar6 = pMVar14->GetMapSquareZ();
                                        local_1d8._0_4_ = (float)(unsigned int)(iVar6 * 8192 + iVar4);
                                        pfVar24 = (float*)local_280.second();
                                        *pfVar24 = (float)local_1d8;
                                        local_1d8 = (((uint64_t)local_1d8._4_4_ << 32) | (uint32_t)((float)(int)uVar9));
                                        puVar19 = (uint32_t*)local_280.y();
                                        *puVar19 = (float)local_1d8;
                                        plVar20 = DebugPrimitiveCollectorBasic::GetCollector("");
                                        if (plVar20 != nullptr) {
                                            pcVar27 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                            local_1c8 = eastl::string(pcVar27);
                                            local_200 = oldscape::sidebars::SideBarData(-11184641, 0);
                                            (**(void (**)(...))(*plVar20 + 136))(plVar20, &local_280, &local_1c8,
                                                                                 &local_200);
                                        }
                                    }
                                    uVar30 = uVar30 + 1;
                                    iVar4 = iVar4 + 128;
                                } while (local_1e0 != (vector<unsigned int>*)uVar30);
                            }
                            pvVar28 = pvVar28 + 1;
                        } while (pvVar28 != local_210);
                    }
                }
            }
        }
        if (m_showCurrentSkyBoxMap == '\0') {
            fVar32 = 1.0;
        } else {
            this_07 = (ModelMaterial*)(*m_skyBox).operator->();
            pvVar25 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_07->GetRefractionParams();
            lVar29 = pvVar25->end();
            plVar20 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (lVar29 == 0) {
                if (plVar20 != nullptr) {
                    local_1c8 = math::Point(0.01, 0.95);
                    local_160 = eastl::string("No current sky box map set!");
                    local_200 = math::ColourStorage8888(255, 255, 64, 64);
                    iVar4 = local_200.GetX();
                    local_238 = oldscape::sidebars::SideBarData(iVar4, 0);
                    (**(void (**)(...))(*plVar20 + 144))(plVar20, &local_1c8, &local_160);
                }
                fVar32 = 0.95;
            } else {
                if (plVar20 != nullptr) {
                    local_160 = ImVec4(0.01, 0.725, 0.25, 0.25);
                    local_280 = math::ColourStorage8888(255, 255, 255, 255);
                    iVar4 = local_280.GetX();
                    local_1c8 = oldscape::sidebars::SideBarData(iVar4, 0);
                    (**(void (**)(...))(*plVar20 + 120))(plVar20, lVar29, &local_160, 0, 0, &local_1c8);
                }
                fVar32 = 0.725;
            }
        }
        local_1d0._0_4_ = fVar32;
        if (m_showDefaultEnvironmentMap != '\0') {
            pvVar25 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)GetDefaultEnvironmentMap();
            lVar29 = pvVar25->end();
            if (lVar29 == 0) {
                local_1d0._0_4_ = local_1d0._0_4_ - 0.05;
                plVar20 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar20 != nullptr) {
                    local_1c8 = math::Point(0.01, local_1d0._0_4_);
                    local_160 = eastl::string("No default environment map set!");
                    local_200 = math::ColourStorage8888(255, 255, 64, 64);
                    iVar4 = local_200.GetX();
                    local_238 = oldscape::sidebars::SideBarData(iVar4, 0);
                    (**(void (**)(...))(*plVar20 + 144))(plVar20, &local_1c8, &local_160);
                }
            } else {
                local_1d0._0_4_ = local_1d0._0_4_ - 0.275;
                plVar20 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar20 != nullptr) {
                    local_160 = ImVec4(0.01, local_1d0._0_4_, 0.25, 0.25);
                    local_280 = math::ColourStorage8888(255, 255, 255, 255);
                    iVar4 = local_280.GetX();
                    local_1c8 = oldscape::sidebars::SideBarData(iVar4, 0);
                    (**(void (**)(...))(*plVar20 + 120))(plVar20, lVar29, &local_160, 0, 0, &local_1c8);
                }
            }
        }
        if (m_showCurrentEnvironmentMap != '\0') {
            lVar29 = field_950648->end();
            plVar20 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (lVar29 == 0) {
                if (plVar20 != nullptr) {
                    local_1c8 = math::Point(0.01, local_1d0._0_4_ - 0.05);
                    local_160 = eastl::string("No current environment map set!");
                    local_200 = math::ColourStorage8888(255, 255, 64, 64);
                    iVar4 = local_200.GetX();
                    local_238 = oldscape::sidebars::SideBarData(iVar4, 0);
                    (**(void (**)(...))(*plVar20 + 144))(plVar20, &local_1c8, &local_160);
                }
            } else if (plVar20 != nullptr) {
                local_160 = ImVec4(0.01, local_1d0._0_4_ - 0.275, 0.25, 0.25);
                local_280 = math::ColourStorage8888(255, 255, 255, 255);
                iVar4 = local_280.GetX();
                local_1c8 = oldscape::sidebars::SideBarData(iVar4, 0);
                (**(void (**)(...))(*plVar20 + 120))(plVar20, lVar29, &local_160, 0, 0, &local_1c8);
            }
        }
        pWVar2 = this;
        SceneRenderManager::RenderDebug(*m_worldRenderer);
        pWVar2->field_24->GetEffectManager()->RenderDebug(viewport);
    }

    // 0x1004414f0
    void World::UpdatePickableEntities(unsigned int arg1, const CoordFine& coordFine) {
        GraphNode* graphNode;

        m_pickableEntities->clear();
        auto psVar1 = GetCentreSquare();
        if (shared_ptr::operator_cast_to_bool(psVar1)) {
            psVar1 = (shared_ptr*)GetCurrentEnvironmentSettings();
            if (shared_ptr::operator_cast_to_bool(psVar1)) {
                if (((SkyBox*)(*m_skyBox).operator->())->IsReady()) {
                    field_950776.SetXYZ(coordFine.field_4);
                    graphNode = (GraphNode*)field_65744.GetRoot();
                    AddPickableEntities(arg1, graphNode, 1);
                }
            }
        }
    }

    // 0x100441590
    void World::RenderLightProbeEnvMaps(unsigned int arg1, unsigned int arg2, int arg3,
                                        World::LoadingState loadingState) {
        if (((EffectManager*)GetEffectManager())->IsEnabled(21) != '\0') {
            ((LightProbeManager*)field_72.operator->())->RenderPendingEnvMaps(arg1, arg2, arg3, loadingState != 2);
        }
    }

    // 0x1004417f0
    void World::SetNewEnvironmentParameters(const MapEnvironmentSettings& mapEnvironmentSettings, bool arg2,
                                            long long arg3, float arg4, float arg5) {
        uint64_t in_register_00000011;

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) != 0) {
            arg3 = 0;
        }
        auto pEVar3 = GetEffectManager();
        uint8_t bVar1 = pEVar3->IsEnabled(7);
        bool arg5_00 = (bool)(bVar1 & (uint8_t)m_gammaCorrectEnvInputs);
        SetLightingFromEnv(pEVar3, mapEnvironmentSettings, arg3, field_950768, arg5_00);
        SetFogScatteringFromEnv(pEVar3, mapEnvironmentSettings, arg3, arg5_00, (LODSettings*)&field_950740, arg4, arg5);
        SetVolumetricsFromEnv(pEVar3, mapEnvironmentSettings, arg3);
        auto this_00 = m_pRT7Core->GetPostProcessController();
        SetPostProcessingFromEnv((Config*)this_00->GetCurrentConfig(), pEVar3, mapEnvironmentSettings, arg3, arg5_00);
        ((SkyBox*)(*m_skyBox).operator->())
            ->SetPendingSkyID(((CoordMapSquare*)mapEnvironmentSettings.GetDynamicChildren())->GetX(), arg3);
        pEVar3 = (EffectManager*)GetEffectManager();
        if (pEVar3->IsEnabled(21) != '\0') {
            ((LightProbeManager*)GetLightProbeManager())->AddAllExistingMapSquaresToUpdateList();
        }
    }

    // 0x100441a70
    void World::UpdateFogEffect(float arg1, float arg2, unsigned int arg3) {
        FogEffect* this_01;
        fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true>* pfVar2;
        EntityHighlightGlobalState* this_02;
        unsigned long long arg3_00;
        float arg5;
        uint64_t local_40;

        uint8_t* midiPlayerMainThread = m_currentEnvironmentSettings;
        if (*midiPlayerMainThread != nullptr) {
            this_01 = ((EffectManager*)GetEffectManager())->GetEffect<graphics::SunlightDirectLighting>(57);
            pfVar2 =
                (fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true>*)(*midiPlayerMainThread).operator->();
            this_02 = (EntityHighlightGlobalState*)pfVar2->get_overflow_allocator();
            arg5 = (float)this_02->GetOutlineRadiusAdjustment();
            graphics::FogEffect::CalculateFogNearFarPlane(0.0, 0.0, arg1, arg2, arg5);
            pfVar2 =
                (fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true>*)(*midiPlayerMainThread).operator->();
            local_40 = field_950740.GetFogRange(((CommandLine*)pfVar2->get_overflow_allocator())->GetPos(), 0.0, 0.0);
            arg3_00 = FrameTime::GetCurrentTimeMS();
            this_01->SetFogDistance(local_40, (unsigned long)arg3, arg3_00);
            this_01->Update();
        }
    }

    // 0x100441e70
    void World::Preload(unsigned int arg1, const math::Vector3T<float>& vector3,
                        const eastl::bitset<6ul, unsigned long long>& bitset) {
        Build(arg1, vector3, bitset, 0);
    }

    // 0x100441e80
    int World::Build(unsigned int arg1, const math::Vector3T<float>& vector3,
                     const eastl::bitset<6ul, unsigned long long>& bitset, World::LoadingState loadingState) {
        vector<MapSquareStatus>* pvVar5;
        shared_ptr* psVar6;
        uint64_t uVar7;
        MapSquare* pMVar8;
        shared_ptr<MapSquare>* psVar9;
        unsigned long uVar10;
        LightProbeManager* pLVar11;
        int* piVar12;
        int* piVar13;
        GraphNode* this_02;
        LoadingState in_R9D;
        unsigned int local_5c;
        uint64_t local_38;

        float local_3c = (float)arg1;
        bool cVar1 = field_950616.empty();
        if (!cVar1) {
            field_950616.clear();
        }
        if (((*(float*)vector3 == 0.0) && (*(float*)(vector3 + 4) == 0.0)) && (*(float*)(vector3 + 8) == 0.0)) {
            return 0;
        }
        float* pfVar3 = &vector3[0];
        float fVar15 = (float)::floor(*pfVar3 * 0.0009765625f);
        pfVar3 = &vector3[2];
        float fVar16 = (float)::floor(*pfVar3 * 0.0009765625f);
        if ((field_81728 == (int)fVar15) && (field_81732 == (int)fVar16)) {
            local_5c = 0;
        } else {
            local_5c = (unsigned int)(((uint64_t)((int64_t)((unsigned long)bitset >> 8)) << 8) | (uint8_t)1);
        }
        field_81728 = (int)fVar15;
        field_81732 = (int)fVar16;
        if (((char)local_5c != '\0') || (field_950764[0] != '\0')) {
            CalculateTargetBuildAreaAndPriority(vector3);
        }
        uint8_t* this_00 = &field_81624;
        auto vector3_00 = this_00->HeapBeginPtr();
        auto pVVar4 = this_00->end();
        unsigned int uVar2 = local_5c;
        vector<eastl::vector<MapSquareStatus>>* local_48 = (vector<eastl::vector<MapSquareStatus>>*)&field_81672;
        uint32_t local_4c = (uint32_t)(((uint64_t)((int64_t)((unsigned long)local_48 >> 8)) << 8) | (uint8_t)1);
        if (vector3_00 != pVVar4) {
            do {
                pvVar5 = (vector<MapSquareStatus>*)(*local_48)[(long)*(int*)vector3_00 - (long)(int)m_mapSquareMinX];
                psVar6 = (shared_ptr*)(*pvVar5)[(long)*(int*)(vector3_00 + 4) - (long)(int)m_mapSquareMinZ];
                uVar7 = BuildMapSquare((TargetMapSquare*)this, vector3_00, (uint8_t)vector3, uVar2 & 255,
                                       (bitset<6ul, unsigned long long>*)(unsigned long)(unsigned int)local_3c, in_R9D);
                *(uint64_t*)(psVar6 + 1) = uVar7;
                cVar1 = shared_ptr::operator_cast_to_bool(psVar6);
                if (!cVar1) {
                LAB_100441fd0:
                    local_4c = 0;
                } else {
                    cVar1 = shared_ptr::operator_cast_to_bool(psVar6);
                    if (cVar1) {
                        pMVar8 = (MapSquare*)(*psVar6).operator->();
                        cVar1 = pMVar8->HasBuiltPriorityZones();
                        if (!cVar1) {
                            pMVar8 = (MapSquare*)(*psVar6).operator->();
                            cVar1 = pMVar8->IsPrioritySquare();
                            if (cVar1)
                                goto LAB_100441fd0;
                        }
                    }
                }
                vector3_00 = vector3_00 + 16;
            } while (vector3_00 != pVVar4);
        }
        field_81620 = (uint8_t)local_4c & 1;
        pfVar3 = &vector3[0];
        fVar15 = (float)::floor(*pfVar3 * 0.00012207031f);
        int local_58 = (int)fVar15;
        pfVar3 = &vector3[2];
        fVar15 = (float)::floor(*pfVar3 * 0.00012207031f);
        int local_54 = (int)fVar15;
        if (((((int)m_mapSquareMinX <= local_58) && (local_58 <= (int)m_mapSquareMaxX)) &&
             ((int)m_mapSquareMinZ <= local_54)) &&
            (local_54 <= (int)m_mapSquareMaxZ)) {
            pvVar5 = (vector<MapSquareStatus>*)(*local_48)[(long)(int)(local_58 - m_mapSquareMinX)];
            psVar6 = (shared_ptr*)(*pvVar5)[(long)local_54 - (long)(int)m_mapSquareMinZ];
            cVar1 = shared_ptr::operator_cast_to_bool(psVar6);
            if (cVar1) {
                pvVar5 = (vector<MapSquareStatus>*)(*local_48)[(long)local_58 - (long)(int)m_mapSquareMinX];
                psVar9 = (shared_ptr<MapSquare>*)(*pvVar5)[(long)local_54 - (long)(int)m_mapSquareMinZ];
                *m_centreSquare = *psVar9;
                local_38 = eastl::make_pair<int, int&>(local_58, local_54);
                field_81720 = local_38;
            }
        }
        if (((char)local_5c != '\0') || (field_950764[0] != '\0')) {
            RemoveExcessMapSquares();
        }
        SetEntityLoadMetrics(bitset);
        local_38._0_4_ = 1.0;
        cVar1 = this_00->empty();
        if (!cVar1) {
            uVar2 = GetNumMapSquaresLoaded(loadingState);
            local_3c = (float)uVar2;
            uVar10 = this_00->size();
            local_38._0_4_ = local_3c / (float)uVar10;
        }
        cVar1 = bitset.test(5);
        if ((cVar1) && (loadingState != 0)) {
            pLVar11 = (LightProbeManager*)field_72.operator->();
            cVar1 = pLVar11->IsAnyMapSquareUpdating();
            if (cVar1) {
                pLVar11 = (LightProbeManager*)field_72.operator->();
                uVar2 = pLVar11->GetNumMapSquaresUpdating();
                local_48 = (vector<eastl::vector<MapSquareStatus>>*)(((uint64_t)local_48._4_4_ << 32) |
                                                                     (uint32_t)((float)uVar2));
                uVar10 = this_00->size();
                local_38 = (((uint64_t)local_38._4_4_ << 32) |
                            (uint32_t)((1.0 - local_48._0_4_ / (float)uVar10) * (float)local_38));
                pfVar3 = std::min<float>(local_38, 0.75);
                local_38._0_4_ = *pfVar3;
                goto LAB_1004423aa;
            }
        }
        cVar1 = HighPriorityMapSquaresConstructed();
        if (!cVar1) {
            local_38._0_4_ = 0.0;
        } else {
            piVar12 = (int*)this_00->HeapBeginPtr();
            piVar13 = (int*)this_00->end();
            for (; piVar12 != piVar13; piVar12 = piVar12 + 4) {
                if (piVar12[2] == 0) {
                    pvVar5 = (vector<MapSquareStatus>*)(*local_48)[(long)*piVar12 - (long)(int)m_mapSquareMinX];
                    psVar9 = (shared_ptr<MapSquare>*)(*pvVar5)[(long)piVar12[1] - (long)(int)m_mapSquareMinZ];
                    this_02 = ((Entity*)(*psVar9).operator->())->GetNode();
                    fVar15 = (float)this_02->GetEntityLoadPercentage();
                    local_38._0_4_ = fVar15 * 0.01 * (float)local_38;
                }
            }
        }
    LAB_1004423aa:
        field_950764[0] = 0;
        return (int)((float)local_38 * 100.0);
    }

    // 0x1004423e0
    void World::CalculateTargetBuildAreaAndPriority(const math::Vector3T<float>& vector3) {
        bool bVar1;
        int iVar4;
        int iVar5;
        int iVar6;
        TargetMapSquare* targetMapSquare1;
        int iVar9;
        int iVar10;
        int iVar11;
        int iVar13;
        int iVar14;
        int iVar16;
        uint8_t auVar19[16];
        int local_3c;
        int local_38;
        int local_34;

        uint8_t bVar2 = field_950740.GetLowestUsableLOD();
        unsigned int uVar3 = field_950740.GetLODDistance((unsigned int)bVar2);
        float fVar18 = (float)ceil((float)uVar3 * 0.00012207031f);
        int iVar15 = 1;
        if (0 < (int)fVar18) {
            iVar15 = (int)fVar18;
        }
        float* pfVar7 = &vector3[0];
        fVar18 = (float)::floor(*pfVar7 * 0.00012207031f);
        int iVar17 = (int)fVar18;
        pfVar7 = &vector3[2];
        fVar18 = (float)::floor(*pfVar7 * 0.00012207031f);
        int iVar12 = (int)fVar18;
        int local_40 = iVar17 - iVar15;
        auto piVar8 = std::max<int>(local_40, m_mapSquareMinX);
        field_81604 = *piVar8;
        local_40 = iVar15 + iVar17;
        piVar8 = std::min<int>(local_40, m_mapSquareMaxX);
        field_81612 = *piVar8;
        local_40 = iVar12 - iVar15;
        piVar8 = std::max<int>(local_40, m_mapSquareMinZ);
        field_81608 = *piVar8;
        local_40 = iVar15 + iVar12;
        piVar8 = std::min<int>(local_40, m_mapSquareMaxZ);
        field_81616 = *piVar8;
        uint8_t* this_00 = &field_81624;
        this_00->clear();
        field_81620 = 0;
        if (field_81604 <= field_81612) {
            iVar4 = (int)(*(float*)vector3 * 0.00012207031f + 0.5);
            iVar5 = (int)(*(float*)vector3 * 0.00012207031f - 0.5);
            iVar14 = (int)(*(float*)(vector3 + 8) * 0.00012207031f + 0.5);
            iVar6 = (int)(*(float*)(vector3 + 8) * 0.00012207031f - 0.5);
            iVar15 = field_81604;
            do {
                iVar16 = field_81608;
                iVar9 = field_81616;
                iVar10 = -(iVar17 - iVar15);
                if (iVar10 < 0) {
                    iVar10 = iVar17 - iVar15;
                }
                if (iVar16 <= iVar9) {
                    iVar13 = iVar12 - iVar16;
                    do {
                        local_34 = 0;
                        if ((iVar12 != iVar16) && (iVar15 != iVar17)) {
                            uVar3 = (unsigned int)(iVar16 == field_81608);
                            iVar11 = (iVar16 == iVar9) + 8 + uVar3 * 4;
                            if (iVar15 != field_81604) {
                                iVar11 = (unsigned int)(iVar16 == iVar9) + uVar3 * 4;
                            }
                            local_34 = iVar11 + 2;
                            if (iVar15 != field_81612) {
                                local_34 = iVar11;
                            }
                        }
                        local_38 = -iVar13;
                        if (-iVar13 < 0) {
                            local_38 = iVar13;
                        }
                        if (((((iVar15 == iVar4) && (iVar14 == iVar16)) || ((iVar15 == iVar5 && (iVar14 == iVar16)))) ||
                             ((iVar15 == iVar5 && (iVar6 == iVar16)))) ||
                            ((local_38 = local_38 + iVar10, iVar15 == iVar4 && (iVar6 == iVar16)))) {
                            local_38 = 0;
                        }
                        local_40 = iVar15;
                        local_3c = iVar16;
                        this_00->push_back(local_40);
                        iVar9 = field_81616;
                        iVar13 = iVar13 - 1;
                        bVar1 = iVar16 < iVar9;
                        iVar16 = iVar16 + 1;
                    } while (bVar1);
                }
                bVar1 = iVar15 < field_81612;
                iVar15 = iVar15 + 1;
            } while (bVar1);
        }
        targetMapSquare1 = (TargetMapSquare*)this_00->HeapBeginPtr();
        auVar19 = this_00->end();
        eastl::insertion_sort<TargetMapSquare*,
                              (math::Vector3T<float> const&)->CalculateTargetBuildAreaAndPriority()::__6>(
            targetMapSquare1, auVar19._0_8_, auVar19._8_8_);
    }

    // 0x100442870
    void World::BuildMapSquare(const TargetMapSquare& targetMapSquare, const math::Vector3T<float>& vector3, bool arg3,
                               unsigned int arg4, const eastl::bitset<6ul, unsigned long long>& bitset,
                               World::LoadingState loadingState) {
        uint8_t* puVar2;
        bool bVar4;
        uint8_t bVar5;
        int iVar6;
        int iVar8;
        MapSquare* pMVar9;
        WorldAreaTypeList* this_02;
        uint8_t* puVar10;
        long lVar11;
        WorldAreaType* pWVar12;
        GraphNode* pGVar13;
        Logger* pLVar14;
        LightProbeManager* this_05;
        uint8_t** ppuVar16;
        uint64_t in_register_00000011;
        int in_stack_00000008;
        uint8_t* local_118;
        GraphNode* local_110;
        shared_ptr local_108;
        ReturnValue local_f0;
        ColourHSL local_e0;
        LogStream local_c8;

        unsigned int local_d0 = *(unsigned int*)vector3;
        unsigned int local_cc = *(unsigned int*)(vector3 + 4);
        auto effectManager = GetEffectManager((World*)targetMapSquare);
        vector<MapSquareStatus>* this_00 = (vector<MapSquareStatus>*)(*(
            (targetMapSquare + 81672)))[(long)(int)local_d0 - (long)*(int*)(targetMapSquare + 81588)];
        shared_ptr* this_01 = (shared_ptr*)(*this_00)[(long)(int)local_cc - (long)*(int*)(targetMapSquare + 81592)];
        bool cVar3 = shared_ptr::operator_cast_to_bool(this_01);
        if (!cVar3) {
        LAB_100442933:
            local_108 = shared_ptr();
            bVar4 = (*((targetMapSquare + 671760))) != nullptr;
            if (bVar4) {
                BuildClientCompositeData(
                    (ReturnValue*)&local_e0, (World*)targetMapSquare,
                    (shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, _4ul> _>*)(targetMapSquare +
                                                                                                  671760),
                    local_d0, local_cc);
                local_108 = local_e0;
                bVar5 = false;
            LAB_100442b41:
                if (bVar5 != false) {
                    cVar3 = shared_ptr::operator_cast_to_bool(this_01);
                    if (cVar3) {
                        pMVar9 = (MapSquare*)(*this_01).operator->();
                        cVar3 = pMVar9->IsPartialMapBuild();
                        if (!cVar3) {
                            DestructMapSquare((World*)targetMapSquare, (shared_ptr<MapSquare>*)this_01);
                        }
                    }
                }
                cVar3 = shared_ptr::operator_cast_to_bool(this_01);
                if (!cVar3) {
                    local_110 = graphics::GraphNode::Create<>();
                    local_f0.shared_from_this();
                    MakeSharedPool<MapSquare, 32>::MakeShared<graphics::GraphNode*&, shared_ptr<World>, int&, int&,
                                                              shared_ptr<ClientCompositeData>&>(
                        (GraphNode**)&local_e0, (shared_ptr<World>*)&local_110, &local_f0, (int*)&local_d0,
                        (shared_ptr<ClientCompositeData>*)&local_cc);
                    *this_01 = local_e0;
                    pGVar13 = local_110;
                    pGVar13->SetEntity((GraphEntity*)this_01->end());
                    pGVar13 = local_110;
                    local_e0 = math::ColourHSL((float)(int)(local_d0 << 13), 0.0, (float)(int)(local_cc << 13));
                    pGVar13->SetTranslation(local_e0);
                    pGVar13 = (GraphNode*)((targetMapSquare + 65744))->GetRoot();
                    pGVar13->AddChild(local_110);
                    pLVar14 = logger::default_logger();
                    local_c8 = logger::LogStream(LOGGER_SCENE);
                    ((uint8_t)pLVar14)
                        ->Log(nullptr, (LogLevel)&local_c8, 8, 14431618, 1559,
                              "World: Constructed new map square: %i, %i", local_d0, local_cc);
                }
                pMVar9 = (MapSquare*)(*this_01).operator->();
                pMVar9->SetTerrainBlending((bool)targetMapSquare[671754]);
                pMVar9 = (MapSquare*)(*this_01).operator->();
                pMVar9->SetIsPartialMapBuild((bool)bVar5);
                bVar4 = true;
            } else {
                local_e0 = shared_ptr();
                this_02 =
                    (*(ConfigProvider**)(targetMapSquare + 48))->GetConfigList<WorldAreaType, WorldAreaTypeList>();
                puVar10 = (uint8_t*)this_02->GetAreaColoursForMapSquare(local_e0, local_d0, local_cc);
                puVar2 = DataStatus::NOTLOADED;
                local_118 = DataStatus::NOTLOADED;
                if (puVar10 == DataStatus::NOTLOADED) {
                LAB_100442b25:
                    bVar5 = 0;
                } else {
                    if (puVar10 == DataStatus::MISSING) {
                        pWVar12 = (WorldAreaType*)(*((targetMapSquare + 65728))).operator->();
                        cVar3 = pWVar12->HasImpostorsForMapSquare(local_d0, local_cc);
                        if (cVar3) {
                            BuildNonRegionComposite(&local_f0, (World*)targetMapSquare,
                                                    (shared_ptr<MapSquareWorldAreaCompositeInner>*)&local_e0, local_d0,
                                                    local_cc);
                            local_108 = local_f0;
                        LAB_100442b14:
                            bVar5 = 0;
                            goto LAB_100442b28;
                        }
                        goto LAB_100442b25;
                    }
                    if (puVar10 != DataStatus::READY)
                        goto LAB_100442b25;
                    lVar11 = local_e0.operator->();
                    if (*(int*)(lVar11 + 256) < 0) {
                        BuildNonRegionComposite(&local_f0, (World*)targetMapSquare,
                                                (shared_ptr<MapSquareWorldAreaCompositeInner>*)&local_e0, local_d0,
                                                local_cc);
                        local_108 = local_f0;
                        bVar5 = shared_ptr::operator_cast_to_bool(&local_108);
                        bVar5 = bVar5 ^ 1;
                    } else {
                        lVar11 = local_e0.operator->();
                        iVar8 = *(int*)(lVar11 + 256);
                        iVar6 = ((MSIType*)(*((targetMapSquare + 65728))).operator->())->GetSpriteID();
                        if (iVar8 == iVar6)
                            goto LAB_100442b25;
                        pWVar12 = (WorldAreaType*)(*((targetMapSquare + 65728))).operator->();
                        cVar3 = pWVar12->HasImpostorsForMapSquare(local_d0, local_cc);
                        bVar5 = 1;
                        if (cVar3) {
                            BuildNonRegionComposite(&local_f0, (World*)targetMapSquare,
                                                    (shared_ptr<MapSquareWorldAreaCompositeInner>*)&local_e0, local_d0,
                                                    local_cc);
                            local_108 = local_f0;
                            goto LAB_100442b14;
                        }
                    }
                }
            LAB_100442b28:
                if (puVar10 != puVar2)
                    goto LAB_100442b41;
                bVar4 = false;
            }
            if (!bVar4)
                goto LAB_100442e8b;
        } else {
            pMVar9 = (MapSquare*)(*this_01).operator->();
            cVar3 = pMVar9->IsPartialMapBuild();
            if ((cVar3) && ((char)arg4 != '\0'))
                goto LAB_100442933;
        }
        Entity* pEVar15 = (Entity*)(*this_01).operator->();
        pGVar13 = pEVar15->GetNode();
        auto this_04 = pGVar13->GetWorldAABB();
        float fVar17 = (float)this_04->GetDistanceToPointXZ(
            *((Vector3T<float>*)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg3)));
        LODLevel LVar7 = ((targetMapSquare + 950740))->GetLOD((int)fVar17);
        pEVar15 = (Entity*)(*this_01).operator->();
        pEVar15->SetTargetLOD(LVar7 & 255);
        if (((char)arg4 != '\0') || (targetMapSquare[950764] != (TargetMapSquare)0)) {
            pMVar9 = (MapSquare*)(*this_01).operator->();
            pMVar9->RecheckLocationContainers();
        }
        unsigned int uVar1 = *(unsigned int*)(targetMapSquare + 671776);
        pMVar9 = (MapSquare*)(*this_01).operator->();
        iVar8 = pMVar9->Build(*(RT7Core**)(targetMapSquare + 32), *(Js5ResourceProvider**)(targetMapSquare + 40),
                              *(ConfigProvider**)(targetMapSquare + 48), *(PlayerVarDomain**)(targetMapSquare + 64),
                              *(AssetBuilder**)(targetMapSquare + 56),
                              *((Vector3T<float>*)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg3)),
                              *(int*)(vector3 + 12), *(int*)(vector3 + 8), (unsigned int)bitset,
                              (uVar1 & 4294967294) == 6, (bool)targetMapSquare[753744]);
        pMVar9 = (MapSquare*)(*this_01).operator->();
        cVar3 = pMVar9->IsInitialLightProbeSubmitted();
        if (((!cVar3) && (iVar8 == 0)) && (in_stack_00000008 != 0)) {
            cVar3 = effectManager->IsEnabled(21);
            if (cVar3) {
                this_05 = (LightProbeManager*)(*((targetMapSquare + 72))).operator->();
                pMVar9 = (MapSquare*)(*this_01).operator->();
                local_108._0_2_ = pMVar9->GetMapSquarePosition();
                this_05->AddMapSquareToUpdateList(local_108);
            }
            pMVar9 = (MapSquare*)(*this_01).operator->();
            pMVar9->InitialLightProbeSubmitted();
        }
        if (iVar8 == 0) {
            ppuVar16 = &DataStatus::READY;
        } else {
            ppuVar16 = &DataStatus::NOTLOADED;
        }
        return local_118 = *ppuVar16;
    LAB_100442e8b:
    }

    // 0x100443010
    void World::RemoveExcessMapSquares() {
        bool bVar1;
        vector<MapSquareStatus>* this_00;
        MapSquareStatus* mapSquareStatus;
        int iVar2;
        long lVar3;
        ShaderVariablePrecision SVar4;

        if ((int)m_mapSquareMinX <= (int)m_mapSquareMaxX) {
            SVar4 = m_mapSquareMinX;
            do {
                lVar3 = (long)(int)m_mapSquareMinZ;
                if ((int)m_mapSquareMinZ <= (int)m_mapSquareMaxZ) {
                    do {
                        iVar2 = (int)lVar3;
                        if (((((int)SVar4 < field_81604) || (field_81612 < (int)SVar4)) || (iVar2 < field_81608)) ||
                            (field_81616 < iVar2)) {
                            this_00 = &field_81672[(long)(int)SVar4 - (long)(int)m_mapSquareMinX];
                            mapSquareStatus = (MapSquareStatus*)(*this_00)[lVar3 - (int)m_mapSquareMinZ];
                            ResetMapSquare(*mapSquareStatus);
                        }
                        lVar3 = lVar3 + 1;
                    } while (iVar2 < (int)m_mapSquareMaxZ);
                }
                bVar1 = (int)SVar4 < (int)m_mapSquareMaxX;
                SVar4 = SVar4 + 1;
            } while (bVar1);
        }
    }

    // 0x100443100
    void World::GetNumMapSquaresLoaded(World::LoadingState loadingState) const {
        TargetMapSquare* targetMapSquare1;
        TargetMapSquare* targetMapSquare2;

        targetMapSquare1 = (TargetMapSquare*)field_81624.HeapBeginPtr();
        targetMapSquare2 = (TargetMapSquare*)field_81624.end();
        eastl::count_if<TargetMapSquare const*, (World::LoadingState)->GetNumMapSquaresLoaded() const ::__7>(
            targetMapSquare1, targetMapSquare2, (__7*)this);
    }

    // 0x1004431e0
    unsigned long World::HighPriorityMapSquaresConstructed() {
        bool cVar1;
        vector<MapSquareStatus>* this_01;
        shared_ptr* this_02;

        uint8_t* this_00 = &field_81624;
        auto piVar2 = this_00->HeapBeginPtr();
        auto piVar3 = this_00->end();
        bool bVar4 = piVar2 == piVar3;
        if (!bVar4) {
            do {
                if (piVar2[2] == 0) {
                    this_01 = &field_81672[(long)*piVar2 - (long)(int)m_mapSquareMinX];
                    this_02 = (shared_ptr*)(*this_01)[(long)piVar2[1] - (long)(int)m_mapSquareMinZ];
                    cVar1 = shared_ptr::operator_cast_to_bool(this_02);
                    if (!cVar1)
                        break;
                    cVar1 = ((MapSquare*)(*this_02).operator->())->IsTerrainBuilt();
                    if (!cVar1)
                        break;
                }
                piVar2 = piVar2 + 4;
                bVar4 = piVar2 == piVar3;
            } while (!bVar4);
        }
        return bVar4 & 4294967295;
    }

    // 0x1004432b0
    void World::ResetMapSquare(MapSquareStatus& mapSquareStatus) {
        DestructMapSquare(mapSquareStatus);
        mapSquareStatus.field_16 = DataStatus::MISSING;
    }

    // 0x1004432e0
    void World::DestructMapSquare(shared_ptr<MapSquare>& mapSquare) {
        long* plVar3;
        GraphNode* graphNode;

        if (mapSquare.operator_cast_to_bool() != '\0') {
            plVar3 = (long*)mapSquare.operator->();
            (**(void (**)(...))(*plVar3 + 200))(plVar3);
            graphNode = ((Entity*)mapSquare.operator->())->GetNode();
            ((GraphNode*)field_65744.GetRoot())->RemoveChild(graphNode);
            if (*m_centreSquare == mapSquare) {
                m_centreSquare->reset();
            }
            mapSquare.reset();
        }
    }

    // 0x1004433d0
    uint32_t World::GetEntityLoadImportance(EntityType entityType) const {
        unsigned long arg1;
        uint32_t local_c;

        char cVar1 = (char)entityType;
        if (cVar1 == '\t') {
            local_c = 1092616192;
            arg1 = 2;
        } else if (cVar1 == '\x02') {
            local_c = 1065353216;
            arg1 = 0;
        } else {
            if (cVar1 != '\x01') {
                return 0;
            }
            local_c = 1065353216;
            arg1 = 1;
        }
        cVar1 = field_753752.test(arg1);
        if (!cVar1) {
            local_c = 0;
        }
        return local_c;
    }

    // 0x1004436c0
    void World::DestructImpostorMapSquares() {
        int arg1;
        int arg2;
        MapSquareStatus* mapSquareStatus;
        MapSquareStatus* pMVar3;
        WorldAreaType* this_01;
        MapSquare* pMVar4;

        auto this_00 = field_81672.HeapBeginPtr();
        auto pLVar2 = field_81672.end();
        if (this_00 != pLVar2) {
            do {
                mapSquareStatus = (MapSquareStatus*)this_00->HeapBeginPtr();
                pMVar3 = (MapSquareStatus*)this_00->end();
                for (; mapSquareStatus != pMVar3; mapSquareStatus = mapSquareStatus + 1) {
                    if (mapSquareStatus->operator_cast_to_bool()) {
                        this_01 = (WorldAreaType*)(*m_worldArea).operator->();
                        pMVar4 = (MapSquare*)(*mapSquareStatus).operator->();
                        arg1 = pMVar4->GetMapSquareX();
                        pMVar4 = (MapSquare*)(*mapSquareStatus).operator->();
                        arg2 = pMVar4->GetMapSquareZ();
                        if (this_01->HasImpostorsForMapSquare(arg1, arg2)) {
                            ResetMapSquare(*mapSquareStatus);
                        }
                    }
                }
                this_00 = this_00 + 32;
            } while (this_00 != pLVar2);
        }
    }

    // 0x1004437d0
    void World::NotifyPickableEntities() {
        float fVar1;
        float fVar2;
        float fVar3;
        long* plVar7;
        Vector3T<float>* pVVar8;
        float* pfVar9;
        Entity* pEVar10;
        Layout* this_03;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_04;
        float local_34;

        auto this_00 = GetPickableEntities();
        uint32_t uVar5 = ((GraphicsApp*)GraphicsApp::Instance())->GetLogicTick();
        bool cVar4 = field_24->RefreshPickablesRequired();
        auto this_02 = this_00->HeapBeginPtr();
        auto psVar6 = this_00->end();
        for (; this_02 != psVar6; this_02 = this_02 + 16) {
            local_34 = -1.0;
            if (cVar4) {
                pVVar8 = GetLastCameraFocusPosition();
                pfVar9 = (float*)pVVar8->SSOBeginPtr();
                fVar1 = *pfVar9;
                pEVar10 = (Entity*)(*this_02).operator->();
                this_03 = (Layout*)pEVar10->GetWorldPosition();
                pfVar9 = (float*)this_03->SSOBeginPtr();
                fVar2 = *pfVar9;
                pVVar8 = GetLastCameraFocusPosition();
                pfVar9 = (float*)pVVar8->second();
                fVar3 = *pfVar9;
                pEVar10 = (Entity*)(*this_02).operator->();
                this_04 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)
                              pEVar10->GetWorldPosition();
                pfVar9 = (float*)this_04->second();
                local_34 = (fVar3 - *pfVar9) * (fVar3 - *pfVar9) + (fVar1 - fVar2) * (fVar1 - fVar2);
            }
            plVar7 = (long*)(*this_02).operator->();
            (**(void (**)(...))(*plVar7 + 272))(local_34, plVar7, uVar5, 0);
        }
    }

    // 0x100443920
    void World::TestPickableEntity(eastl::fixed_vector<shared_ptr<Entity>, 128ul>& entitys1,
                                   eastl::fixed_vector<shared_ptr<Entity>, 128ul>& entitys2, int& arg3, int& arg4,
                                   const shared_ptr<Entity>& entity, const math::Point<int>& point, int arg7,
                                   unsigned int arg8) {
        bool cVar3;
        int iVar5;
        uint32_t uVar6;
        TextRun* this_03;
        long* plVar9;
        CommandLine* this_04;
        unsigned long uVar10;
        unsigned long uVar11;
        shared_ptr<postprocess::PostProcessEffect>* psVar12;
        shared_ptr<postprocess::PostProcessEffect>* psVar13;
        Logger* pLVar14;
        LogStream* this_05;
        LogStream local_158;
        LogStream local_c8;

        auto pfVar7 = field_950776.SSOBeginPtr();
        float fVar15 = *pfVar7;
        auto pEVar8 = entity.operator->();
        auto this_00 = pEVar8->GetWorldPosition();
        pfVar7 = (float*)this_00->SSOBeginPtr();
        float fVar1 = *pfVar7;
        pfVar7 = (float*)field_950776.second();
        float fVar2 = *pfVar7;
        pEVar8 = (Entity*)entity.operator->();
        auto this_01 = pEVar8->GetWorldPosition();
        pfVar7 = (float*)this_01->second();
        fVar15 = (fVar2 - *pfVar7) * (fVar2 - *pfVar7) + (fVar15 - fVar1) * (fVar15 - fVar1);
        pEVar8 = (Entity*)entity.operator->();
        int iVar4 = pEVar8->GetPickingPrepassType();
        auto this_02 = entity.operator->();
        if (iVar4 == 0) {
            this_04 = (CommandLine*)this_02->GetBoundingSphere();
            iVar4 = this_04->GetPos();
            iVar5 = this_04->GetPos();
            if (((float)iVar5 + 3328.0) * ((float)iVar4 + 3328.0) <= fVar15)
                goto LAB_100443ce8;
            plVar9 = (long*)entity.operator->();
            (**(void (**)(...))(*plVar9 + 272))(fVar15, plVar9, arg8, 1);
            iVar4 = point.GetX();
            iVar5 = point.GetZ();
            cVar3 = this_04->PointInside(iVar4, iVar5, arg7);
        } else {
            this_03 = (TextRun*)this_02->GetFogOverrides();
            iVar4 = this_03->GetMaxLineWidth();
            iVar5 = this_03->GetMaxLineWidth();
            if (((float)iVar5 + 3328.0) * ((float)iVar4 + 3328.0) <= fVar15)
                goto LAB_100443ce8;
            plVar9 = (long*)entity.operator->();
            (**(void (**)(...))(*plVar9 + 272))(fVar15, plVar9, arg8, 1);
            iVar4 = point.GetX();
            iVar5 = point.GetZ();
            cVar3 = this_03->PointInside(iVar4, iVar5, arg7);
        }
        if (!cVar3)
            goto LAB_100443ce8;
        arg3 = arg3 + 1;
        plVar9 = (long*)entity.operator->();
        cVar3 = (**(void (**)(...))(*plVar9 + 120))(plVar9);
        if (!cVar3) {
            arg4 = arg4 + 1;
            uVar10 = entitys1.size();
            uVar11 = entitys1.capacity();
            if (uVar11 <= uVar10) {
                pLVar14 = logger::default_logger();
                local_c8 = logger::LogStream(LOGGER_SCENE);
                uVar6 = entitys1.capacity();
                ((uint8_t)pLVar14)
                    ->Log(nullptr, (LogLevel)&local_c8, 3, 14431618, 1742,
                          "Picked entities vector exceeded capacity, Capacity: %d", uVar6);
                this_05 = &local_c8;
                goto LAB_100443ce3;
            }
            psVar12 = (shared_ptr<postprocess::PostProcessEffect>*)entitys1.HeapBeginPtr();
            psVar13 = (shared_ptr<postprocess::PostProcessEffect>*)entitys1.end();
            psVar12 = eastl::find<shared_ptr<Entity>*, shared_ptr<Entity>>(psVar12, psVar13, entity);
            psVar13 = (shared_ptr<postprocess::PostProcessEffect>*)entitys1.end();
            if (psVar12 != psVar13)
                goto LAB_100443ce8;
            entitys2 = entitys1;
        } else {
            uVar10 = entitys2.size();
            uVar11 = entitys2.capacity();
            if (uVar11 <= uVar10) {
                pLVar14 = logger::default_logger();
                local_158 = logger::LogStream(LOGGER_SCENE);
                uVar6 = entitys2.capacity();
                ((uint8_t)pLVar14)
                    ->Log(nullptr, (LogLevel)&local_158, 3, 14431618, 1755,
                          "Triangle test entities vector exceeded capacity, Capacity: %d", uVar6);
                this_05 = &local_158;
            LAB_100443ce3:
                this_05->~LogStream();
                goto LAB_100443ce8;
            }
        }
        entitys2.push_back(entity);
    LAB_100443ce8:
    }

    // 0x100443d60
    void World::AddPickableEntity(const shared_ptr<Entity>& entity) {
        uint32_t uVar2;
        unsigned long uVar3;
        unsigned long uVar4;
        Logger* pLVar5;
        uint8_t* this_01;
        LogStream local_b8;

        if ((((HitmarkType*)entity.operator->())->GetDuration() == field_786576) || (field_786576 == -1)) {
            this_01 = m_pickableEntities;
            uVar3 = this_01->size();
            uVar4 = this_01->capacity();
            if (uVar3 < uVar4) {
                this_01->push_back(entity);
            } else {
                pLVar5 = logger::default_logger();
                local_b8 = logger::LogStream(LOGGER_SCENE);
                uVar2 = this_01->capacity();
                ((uint8_t)pLVar5)
                    ->Log(nullptr, (LogLevel)&local_b8, 3, 14431618, 1780,
                          "Attempting to add too many pickable entities to active World pickable list, maximum is %d",
                          uVar2);
            }
        }
    }

    // 0x100443e80
    void World::RemoveRoofSelective(unsigned int arg1, const CoordGrid& coordGrid) {
        RemoveRoofPaintingProgress aRStack_10038;

        if (m_removeRoofSelective != '\0') {
            if (m_removeRoof->SetCurrentTick(*m_linkMap, arg1, this)) {
                aRStack_10038 = RemoveRoofPaintingProgress(coordGrid.field_4 - 128, coordGrid.field_8 - 128,
                                                           coordGrid.field_4 + 127, coordGrid.field_8 + 127);
                _memcpy(&field_160, &aRStack_10038, 65552);
            }
            if (m_linkMap->IsRemoveRoof(coordGrid)) {
                PaintRemoveRoofArea(coordGrid);
            }
        }
    }

    // 0x100443f50
    void World::PaintRemoveRoofArea(const CoordGrid& coordGrid) {
        uint8_t* this_00;
        uint8_t bVar3;
        unsigned int uVar4;
        int* piVar5;
        int iVar6;
        uint8_t* this_01;
        int iStack_180c4;
        uint64_t uStack_180c0;
        int iStack_180b4;
        unsigned int uStack_180a4;

        unsigned int arg1 = coordGrid.field_0;
        fixed_queue<eastl::pair<int, int>, 4096ul, true> afStack_180a0;
        uint64_t uStack_180b0 =
            eastl::make_pair<unsigned int const&, unsigned int const&>(coordGrid.field_4, coordGrid.field_8);
        uStack_180c0.pair<unsigned int, unsigned int, void>(uStack_180b0);
        afStack_180a0.push(uStack_180c0);
        bool cVar2 = afStack_180a0.empty();
        if (!cVar2) {
            this_00 = m_linkMap;
            this_01 = &field_160;
            do {
                piVar5 = (int*)
                    eastl::queue<eastl::pair<int, int>, eastl::fixed_list<eastl::pair<int, int>, 4096ul>>::front();
                iVar6 = *piVar5;
                uVar4 = piVar5[1];
                eastl::queue<eastl::pair<int, int>, eastl::fixed_list<eastl::pair<int, int>, 4096ul>>::pop();
                uStack_180b0 = (((uint64_t)uStack_180b0._4_4_ << 32) | (uint32_t)iVar6);
                uStack_180a4 = uVar4;
                bVar3 = this_00->IsRemoveRoof(arg1, iVar6, uVar4);
                if ((int)arg1 < 3) {
                    iVar6 = arg1 + 1;
                    do {
                        cVar2 = this_01->IsSet(iVar6, (unsigned int)uStack_180b0, uStack_180a4);
                        if (!cVar2) {
                            uVar4 = this_00->GetTileLink(iVar6, (unsigned int)uStack_180b0, uStack_180a4);
                            if ((uVar4 == 4294967295) || ((uVar4 & 8) == 0)) {
                                m_removeRoof->SetRoofRemoved(iVar6, (unsigned int)uStack_180b0, uStack_180a4,
                                                             (unsigned int)(bVar3 ^ 1));
                                this_01->Set(iVar6, (unsigned int)uStack_180b0, uStack_180a4);
                            }
                        }
                        iVar6 = iVar6 + 1;
                    } while (iVar6 != 4);
                }
                if (bVar3 != 0) {
                    cVar2 = this_01->IsSet(arg1, (unsigned int)uStack_180b0 - 1, uStack_180a4);
                    if (!cVar2) {
                        iStack_180b4 = (unsigned int)uStack_180b0 - 1;
                        uStack_180c0 = eastl::make_pair<int, int&>(iStack_180b4, uStack_180a4);
                        afStack_180a0.push(uStack_180c0);
                        this_01->Set(arg1, (unsigned int)uStack_180b0 - 1, uStack_180a4);
                    }
                    cVar2 = this_01->IsSet(arg1, (unsigned int)uStack_180b0 - 1, uStack_180a4 + 1);
                    if (!cVar2) {
                        cVar2 = this_00->IsRemoveRoof(arg1, (unsigned int)uStack_180b0, uStack_180a4 + 1);
                        if (!cVar2) {
                            cVar2 = this_00->IsRemoveRoof(arg1, (unsigned int)uStack_180b0 - 1, uStack_180a4);
                            if (!cVar2) {
                                iStack_180b4 = (unsigned int)uStack_180b0 - 1;
                                iStack_180c4 = uStack_180a4 + 1;
                                uStack_180c0 = eastl::make_pair<int, int&>(iStack_180b4, iStack_180c4);
                                afStack_180a0.push(uStack_180c0);
                                this_01->Set(arg1, (unsigned int)uStack_180b0 - 1, uStack_180a4 + 1);
                            }
                        }
                    }
                    cVar2 = this_01->IsSet(arg1, (unsigned int)uStack_180b0, uStack_180a4 + 1);
                    if (!cVar2) {
                        iStack_180b4 = uStack_180a4 + 1;
                        uStack_180c0 = eastl::make_pair<int, int&>(uStack_180b0, iStack_180b4);
                        afStack_180a0.push(uStack_180c0);
                        this_01->Set(arg1, (unsigned int)uStack_180b0, uStack_180a4 + 1);
                    }
                    cVar2 = this_01->IsSet(arg1, (unsigned int)uStack_180b0 + 1, uStack_180a4 + 1);
                    if (!cVar2) {
                        cVar2 = this_00->IsRemoveRoof(arg1, (unsigned int)uStack_180b0, uStack_180a4 + 1);
                        if (!cVar2) {
                            cVar2 = this_00->IsRemoveRoof(arg1, (unsigned int)uStack_180b0 + 1, uStack_180a4);
                            if (!cVar2) {
                                iStack_180b4 = (unsigned int)uStack_180b0 + 1;
                                iStack_180c4 = uStack_180a4 + 1;
                                uStack_180c0 = eastl::make_pair<int, int&>(iStack_180b4, iStack_180c4);
                                afStack_180a0.push(uStack_180c0);
                                this_01->Set(arg1, (unsigned int)uStack_180b0 + 1, uStack_180a4 + 1);
                            }
                        }
                    }
                    cVar2 = this_01->IsSet(arg1, (unsigned int)uStack_180b0 + 1, uStack_180a4);
                    if (!cVar2) {
                        iStack_180b4 = (unsigned int)uStack_180b0 + 1;
                        uStack_180c0 = eastl::make_pair<int, int&>(iStack_180b4, uStack_180a4);
                        afStack_180a0.push(uStack_180c0);
                        this_01->Set(arg1, (unsigned int)uStack_180b0 + 1, uStack_180a4);
                    }
                    cVar2 = this_01->IsSet(arg1, (unsigned int)uStack_180b0 - 1, uStack_180a4 - 1);
                    if (!cVar2) {
                        cVar2 = this_00->IsRemoveRoof(arg1, (unsigned int)uStack_180b0, uStack_180a4 - 1);
                        if (!cVar2) {
                            cVar2 = this_00->IsRemoveRoof(arg1, (unsigned int)uStack_180b0 - 1, uStack_180a4);
                            if (!cVar2) {
                                iStack_180b4 = (unsigned int)uStack_180b0 - 1;
                                iStack_180c4 = uStack_180a4 - 1;
                                uStack_180c0 = eastl::make_pair<int, int&>(iStack_180b4, iStack_180c4);
                                afStack_180a0.push(uStack_180c0);
                                this_01->Set(arg1, (unsigned int)uStack_180b0 - 1, uStack_180a4 - 1);
                            }
                        }
                    }
                    cVar2 = this_01->IsSet(arg1, (unsigned int)uStack_180b0, uStack_180a4 - 1);
                    if (!cVar2) {
                        iStack_180b4 = uStack_180a4 - 1;
                        uStack_180c0 = eastl::make_pair<int, int&>(uStack_180b0, iStack_180b4);
                        afStack_180a0.push(uStack_180c0);
                        this_01->Set(arg1, (unsigned int)uStack_180b0, uStack_180a4 - 1);
                    }
                    cVar2 = this_01->IsSet(arg1, (unsigned int)uStack_180b0 + 1, uStack_180a4 - 1);
                    if (!cVar2) {
                        cVar2 = this_00->IsRemoveRoof(arg1, (unsigned int)uStack_180b0, uStack_180a4 - 1);
                        if (!cVar2) {
                            cVar2 = this_00->IsRemoveRoof(arg1, (unsigned int)uStack_180b0 + 1, uStack_180a4);
                            if (!cVar2) {
                                iStack_180b4 = (unsigned int)uStack_180b0 + 1;
                                iStack_180c4 = uStack_180a4 - 1;
                                uStack_180c0 = eastl::make_pair<int, int&>(iStack_180b4, iStack_180c4);
                                afStack_180a0.push(uStack_180c0);
                                this_01->Set(arg1, (unsigned int)uStack_180b0 + 1, uStack_180a4 - 1);
                            }
                        }
                    }
                }
                cVar2 = afStack_180a0.empty();
            } while (!cVar2);
        }
    }

    // 0x1004447a0
    void World::AddBuiltZone(const CoordGrid& coordGrid, int arg2, int arg3) {
        field_671784.emplace_back<CoordGrid const&, int, int>(coordGrid, arg2, arg3);
    }

    // 0x100444880
    void World::AddBuiltZone(const LocationContainer& locationContainer) {
        int iVar1 = locationContainer.GetObjStackColourUnits();
        int iVar2 = locationContainer.GetEffectAnimID();
        int iVar3 = locationContainer.GetObjStackColourThousands();
        int iVar4 = locationContainer.GetMinGridZ();
        CoordGrid local_48(0, iVar1 * 64 + iVar2, iVar3 * 64 + iVar4);
        int local_38 = locationContainer.GetGridSizeX();
        int local_34 = locationContainer.GetGridSizeZ();
        field_671784.emplace_back<CoordGrid const&, int, int>(local_48, local_38, local_34);
    }

    // 0x100444980
    uint64_t World::ChangeLocation(int arg1, int arg2, int arg3, int arg4, const LocData& locData) {
        MapSquare* this_01;
        unique_ptr* this_02;
        LocationContainer* locationContainer;
        ChangeLocationRequest local_c0;

        auto this_00 = GetMapSquare(arg2 >> 6, arg3 >> 6);
        bool cVar2 = shared_ptr::operator_cast_to_bool(this_00);
        if (cVar2) {
            this_01 = (MapSquare*)(*this_00).operator->();
            this_02 = (unique_ptr*)this_01->GetLocationContainer(arg2 % 64, arg3 % 64);
            cVar2 = std::unique_ptr::operator_cast_to_bool(this_02);
            if (cVar2) {
                local_c0 = ChangeLocationRequest(2, arg4, 4294967295, arg1, arg2, arg3, locData);
                locationContainer = (LocationContainer*)**this_02;
                field_950800 = local_c0.ActionRequest(*locationContainer);
                if (cVar2) {
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x100444b00
    void World::HideLocations(LocShape locShape) {
        uint64_t local_59;

        local_59._0_1_ = (uint8_t)locShape;
        std::function<void(shared_ptr<MapSquare>&)>::function<World::HideLocations(LocShape)::__8, void>(
            (function<void(shared_ptr<MapSquare>&)>*)((long)&local_59 + 1), (__8*)&local_59);
        OnAllMapSquares((function<void_(shared_ptr<MapSquare>&)>*)((long)&local_59 + 1));
        ((function<void(shared_ptr<MapSquare>&)>*)((long)&local_59 + 1))->~function();
    }

    // 0x100444b90
    void World::UnhideLocations(LocShape locShape) {
        uint64_t local_59;

        local_59._0_1_ = (uint8_t)locShape;
        std::function<void(shared_ptr<MapSquare>&)>::function<World::UnhideLocations(LocShape)::__9, void>(
            (function<void(shared_ptr<MapSquare>&)>*)((long)&local_59 + 1), (__9*)&local_59);
        OnAllMapSquares((function<void_(shared_ptr<MapSquare>&)>*)((long)&local_59 + 1));
        ((function<void(shared_ptr<MapSquare>&)>*)((long)&local_59 + 1))->~function();
    }

    // 0x100444c20
    void World::HideWalls() {
        HideLocations(0);
        HideLocations(1);
        HideLocations(2);
        HideLocations(3);
        HideLocations(9);
        HideLocations(23);
    }

    // 0x100444c80
    void World::ShowWalls() {
        UnhideLocations(0);
        UnhideLocations(1);
        UnhideLocations(2);
        UnhideLocations(3);
        UnhideLocations(9);
        UnhideLocations(23);
    }

    // 0x100444ce0
    void World::HideWallDecor() {
        HideLocations(4);
        HideLocations(5);
        HideLocations(6);
        HideLocations(7);
        HideLocations(8);
        HideLocations(24);
    }

    // 0x100444d40
    void World::ShowWallDecor() {
        UnhideLocations(4);
        UnhideLocations(5);
        UnhideLocations(6);
        UnhideLocations(7);
        UnhideLocations(8);
        UnhideLocations(24);
    }

    // 0x100444da0
    void World::HideGroundDecor() {
        HideLocations(22);
    }

    // 0x100444db0
    void World::ShowGroundDecor() {
        UnhideLocations(22);
    }

    // 0x100444dc0
    void World::HideSceneryRoofing() {
        HideLocations(12);
        HideLocations(13);
        HideLocations(14);
        HideLocations(15);
        HideLocations(16);
        HideLocations(17);
        HideLocations(18);
        HideLocations(19);
        HideLocations(20);
        HideLocations(21);
    }

    // 0x100444e50
    void World::ShowSceneryRoofing() {
        UnhideLocations(12);
        UnhideLocations(13);
        UnhideLocations(14);
        UnhideLocations(15);
        UnhideLocations(16);
        UnhideLocations(17);
        UnhideLocations(18);
        UnhideLocations(19);
        UnhideLocations(20);
        UnhideLocations(21);
        UnhideLocations(10);
        UnhideLocations(11);
    }

    // 0x100444f00
    void World::SetMultiLocState(int arg1, int arg2) {
        function<void(shared_ptr<MapSquare>&)> local_58[56];
        long local_20;

        std::function<void(shared_ptr<MapSquare>&)>::function<World::SetMultiLocState(int, int)::__10, void>(
            local_58, (__10*)(((uint64_t)arg2 << 32) | (uint32_t)arg1));
        OnAllMapSquares(local_58);
    }

    // 0x100444f90
    void World::IncrementMultiLocState(int arg1) {
        uint32_t in_register_00000034;
        function<void(shared_ptr<MapSquare>&)> local_58[56];
        long local_20;

        std::function<void(shared_ptr<MapSquare>&)>::function<World::IncrementMultiLocState(int)::__11, void>(
            local_58, (__11*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1));
        OnAllMapSquares(local_58);
    }

    // 0x100445010
    void World::IncrementAllMultiLocStates() {
        __12* in_RSI;
        function<void(shared_ptr<MapSquare>&)> local_58[56];
        long local_20;

        std::function<void(shared_ptr<MapSquare>&)>::function<World::IncrementAllMultiLocStates()::__12, void>(local_58,
                                                                                                               in_RSI);
        OnAllMapSquares(local_58);
    }

    // 0x1004450c0
    void World::RebuildLightIndices() {
        __13* in_RSI;
        function<void(shared_ptr<MapSquare>&)> local_58[56];
        long local_20;

        std::function<void(shared_ptr<MapSquare>&)>::function<World::RebuildLightIndices()::__13, void>(local_58,
                                                                                                        in_RSI);
        OnAllMapSquares(local_58);
    }

    // 0x100445160
    auto World::GetPointLightsByScriptID(unsigned int arg1) const {
        long lVar3;
        uint32_t extraout_EDX;
        uint32_t extraout_EDX_00;
        uint32_t extraout_var;
        uint32_t extraout_var_00;

        auto result;
        result.reserve(4);
        uint64_t local_50 = field_786616.begin();
        uint64_t local_48 = (((uint64_t)extraout_var << 32) | (uint32_t)extraout_EDX);
        uint64_t local_40 = field_786616.end();
        uint64_t local_38 = (((uint64_t)extraout_var_00 << 32) | (uint32_t)extraout_EDX_00);
        bool cVar1 = local_50 != local_40;
        if (cVar1) {
            do {
                lVar3 = local_50.HeapBeginPtr();
                if ((((*((lVar3 + 8))).operator->() + 192))->GetSpriteID() == arg1) {
                    result.push_back(*((lVar3 + 8)));
                }
                ++local_50;
                cVar1 = local_50 != local_40;
            } while (cVar1);
        }
        return result;
    }

    // 0x100445290
    void World::SetBrightnessOffset(option::EnumBrightness enumBrightness) {
        field_950768 = (float)(int)(enumBrightness - 2) * 0.25;
        field_24->SetFreshEnvironmentOverride(true);
        m_currentEnvironmentSettings->reset();
    }

    // 0x10044fcc0
    void World::DestroyRenderingResources()::$_0::operator()(graphics::GraphNode* graphNode,
                                                             graphics::GraphEntity* graphEntity) const {
        (**(void (**)(...))(field_0 + 64))();
    }

    // 0x100451030
    uint32_t
    World::GetTargetMapSquarePriority(int, int) const ::$_2::operator()(const TargetMapSquare& targetMapSquare) const {
        if (*(int*)targetMapSquare == *(int*)this) {
            return *(int*)(targetMapSquare + 4) == *(int*)(this + 4);
        }
        return 0;
    }

    // 0x100452a70
    void World::MainLogic(unsigned int)::$_3::operator()(graphics::GraphNode* graphNode,
                                                         graphics::GraphEntity* graphEntity) const {
        long lVar1;
        Matrix44T<float>* pMVar2;

        if (graphEntity != nullptr) {
            lVar1 = field_0;
            pMVar2 = graphNode->GetWorldTransformationMatrix();
            (*graphEntity->_vptr[1].GetLoadImportance)(graphEntity, *(uint64_t*)(lVar1 + 32),
                                                       (unsigned long)(unsigned int)field_8, pMVar2);
        }
    }

    // 0x100455b50
    uint64_t World::GetNumMapSquaresLoaded(World::LoadingState) const ::$_7::operator()(
        const TargetMapSquare& targetMapSquare) const {
        bool cVar2;
        MapSquare* pMVar3;

        long lVar1 = *(long*)this;
        vector<MapSquareStatus>* this_00 =
            (vector<MapSquareStatus>*)(*((lVar1 + 81672)))[(long)*(int*)targetMapSquare - (long)*(int*)(lVar1 + 81588)];
        shared_ptr* this_01 =
            (shared_ptr*)(*this_00)[(long)*(int*)(targetMapSquare + 4) - (long)*(int*)(lVar1 + 81592)];
        if ((*(uint8_t**)(this_01 + 1) == DataStatus::READY) &&
            (cVar2 = shared_ptr::operator_cast_to_bool(this_01), cVar2)) {
            pMVar3 = (MapSquare*)(*this_01).operator->();
            cVar2 = pMVar3->IsTerrainBuilt();
            if (cVar2) {
                if (**(int**)(this + 8) != 0) {
                    pMVar3 = (MapSquare*)(*this_01).operator->();
                    cVar2 = pMVar3->IsInitialLightProbeSubmitted();
                    if (!cVar2) {
                        return 0;
                    }
                }
                return 1;
            }
        }
        return 0;
    }

} // namespace jag::game
