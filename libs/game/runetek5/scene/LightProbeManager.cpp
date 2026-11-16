// libs/game/runetek5/scene/LightProbeManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "LightProbeManager.h"

namespace jag::game {
    // 0x1039b4ee4, set at startup by ___cxx_global_var_init.10
    int32_t LightProbeManager::m_skyBoxOverbrightDefaultValue = 1048576000;

    // 0x1039b4ee8
    bool LightProbeManager::m_skyBoxOverbrightDefaultOverrideAll;

    // 0x10012cca0: LightProbeManager::MapSquareUpdateInfo::MapSquareUpdateInfo(MapSquare::MapSquarePos, render::CubeFace) has the same machine code as oldscape::ClientEntityID::ClientEntityID(bool, int)

    // 0x100477d50
    LightProbeManager::LightProbeManager(graphics::RT7Core* rt7Core, graphics::EffectManager& effectManager,
                                         World* world)
        : field_0(rt7Core), field_8(effectManager), field_16(world) {
        field_968 = '\0';
        new (&field_976) eastl::vector<std::future<MapSquareEnvIrradianceInfo>>();
        field_24.reserve(192);
        field_928.reserve(32);
        field_976.reserve(192);
    }

    // 0x100477f50
    LightProbeManager::~LightProbeManager() {
        uint8_t* this_00 = &field_976;
        auto this_01 = this_00->HeapBeginPtr();
        auto pfVar1 = this_00->end();
        for (; this_01 != pfVar1; this_01 = this_01 + 8) {
            this_01->wait();
        }
        this_00->~vector();
        field_928.~vector_set();
        field_56.~fixed_queue();
        field_24.~vector();
    }

    // 0x100478020
    void LightProbeManager::AddMapSquareToUpdateList(const MapSquare::MapSquarePos& mapSquarePos) {
        uint8_t* this_00;
        uint8_t* this_01;
        uint8_t bVar1;
        uint8_t bVar2;
        unsigned short uVar3;
        MapSquarePos mapSquarePos_00;
        bool cVar5;
        Logger* pLVar6;
        shared_ptr<oldscape::ClientScript>* clientScript1;
        ReturnValue* this_02;
        MapSquare* this_04;
        long lVar7;
        unique_ptr* this_05;
        SceneManager* this_06;
        MapSquarePos* pMVar8;
        MapSquarePos* pMVar9;
        MapSquareUpdateInfo* mapSquareUpdateInfo1;
        MapSquareUpdateInfo* mapSquareUpdateInfo2;
        LogStream* this_08;
        uint8_t auVar10[16];
        uint64_t in_stack_fffffffffffffd98;
        uint8_t in_stack_fffffffffffffda0;
        MapSquareEnvInfo local_240;
        uint64_t local_228;
        MapSquarePos* local_220;
        uint8_t local_218[16];
        uint8_t local_208[16];
        __0* local_1f8;
        LogStream local_1e8;
        LogStream local_158;
        LogStream local_c8;

        if (field_968 == '\0') {
            clientScript1 = (shared_ptr<oldscape::ClientScript>*)field_16->GetMapSquare(mapSquarePos);
            if (!*clientScript1 != (*((shared_ptr<oldscape::ClientScript>*)&MapSquare::NullMapSquare)))
                goto LAB_1004782e3;
            this_02 = *field_16 = World::GetIrradianceCache();
            local_218 = this_02->end();
            cVar5 = (field_16->GetCurrentEnvironmentSettings())->operator_cast_to_bool();
            if (cVar5) {
                uVar3._0_1_ = mapSquarePos.field_0;
                uVar3._1_1_ = mapSquarePos.field_1;
                local_220 = mapSquarePos;
                field_16->GetCurrentEnvironmentSettings();
                mapSquarePos_00._8_1_ = in_stack_fffffffffffffda0;
                mapSquarePos_00.field_0 = (char)in_stack_fffffffffffffd98;
                mapSquarePos_00.field_1 = (char)((unsigned long)in_stack_fffffffffffffd98 >> 8);
                mapSquarePos_00._2_6_ = (int64_t)((unsigned long)in_stack_fffffffffffffd98 >> 16);
                local_240 =
                    MapSquareEnvInfo(mapSquarePos_00, *((shared_ptr<MapEnvironmentSettings>*)(unsigned long)uVar3));
                local_228 = local_240.hash();
                local_208->equal_range(*this_02);
                auVar10 = eastl::find_if<eastl::hashtable_iterator<
                                             eastl::pair<unsigned long const, MapSquareEnvIrradianceInfo>, true, false>,
                                         (MapSquare::MapSquarePos const&)->AddMapSquareToUpdateList()::__0>(
                    (hashtable_iterator<eastl::pair<unsigned long const, MapSquareEnvIrradianceInfo>, true, false>*)
                        local_208._0_8_,
                    (hashtable_iterator<eastl::pair<unsigned long const, MapSquareEnvIrradianceInfo>, true, false>*)
                        local_208._8_8_,
                    local_1f8);
                mapSquarePos = local_220;
                local_218 = auVar10;
            }
            local_208 = this_02->end();
            cVar5 = *local_218 != *local_208;
            this_04 = (MapSquare*)(*clientScript1).operator->();
            if (!cVar5) {
                this_05 = (unique_ptr*)this_04->GetParentLocationType();
                cVar5 = std::unique_ptr::operator_cast_to_bool(this_05);
                if (!cVar5)
                    goto LAB_1004782e3;
                this_06 = (SceneManager*)(*this_05).operator->();
                cVar5 = ((AABB*)this_06->GetEntityHighlightGlobalState())->IsValid();
                if (!cVar5)
                    goto LAB_1004782e3;
                this_01 = &field_928;
                pMVar8 = (MapSquarePos*)this_01->HeapBeginPtr();
                pMVar9 = (MapSquarePos*)this_01->end();
                pMVar8 = eastl::find<MapSquare::MapSquarePos*, MapSquare::MapSquarePos>(pMVar8, pMVar9, mapSquarePos);
                pMVar9 = (MapSquarePos*)this_01->end();
                if (pMVar8 != pMVar9)
                    goto LAB_1004782e3;
                this_00 = &field_24;
                local_208._0_4_ = 34069;
                this_00->emplace_back<MapSquare::MapSquarePos const&, render::CubeFace>(mapSquarePos, *local_208);
                local_208._0_4_ = 34070;
                this_00->emplace_back<MapSquare::MapSquarePos const&, render::CubeFace>(mapSquarePos, *local_208);
                local_208._0_4_ = 34071;
                this_00->emplace_back<MapSquare::MapSquarePos const&, render::CubeFace>(mapSquarePos, *local_208);
                local_208._0_4_ = 34072;
                this_00->emplace_back<MapSquare::MapSquarePos const&, render::CubeFace>(mapSquarePos, *local_208);
                local_208._0_4_ = 34073;
                this_00->emplace_back<MapSquare::MapSquarePos const&, render::CubeFace>(mapSquarePos, *local_208);
                local_208._0_4_ = 34074;
                this_00->emplace_back<MapSquare::MapSquarePos const&, render::CubeFace>(mapSquarePos, *local_208);
                this_01->insert(mapSquarePos);
                mapSquareUpdateInfo1 = (MapSquareUpdateInfo*)this_00->HeapBeginPtr();
                mapSquareUpdateInfo2 = (MapSquareUpdateInfo*)this_00->end();
                eastl::sort<LightProbeManager::MapSquareUpdateInfo*,
                            (MapSquare::MapSquarePos const&)->AddMapSquareToUpdateList()::__1>(
                    mapSquareUpdateInfo1, mapSquareUpdateInfo2, (__1*)this);
                pLVar6 = logger::default_logger();
                this_08 = &local_1e8;
                new (this_08) logger::LogStream(LOGGER_LIGHTPROBE);
                ((uint8_t)pLVar6)
                    ->Log(nullptr, (LogLevel)this_08, 5, 14438570, 113, "Recalculating irradiance for %u, %u",
                          (unsigned int)(uint8_t)mapSquarePos.field_0, (unsigned int)mapSquarePos.field_1);
            } else {
                lVar7 = local_218->HeapBeginPtr();
                this_04->SetIrradianceSHConsts(*((lVar7 + 64)), 750);
                pLVar6 = logger::default_logger();
                this_08 = &local_158;
                new (this_08) logger::LogStream(LOGGER_LIGHTPROBE);
                bVar1 = mapSquarePos.field_0;
                bVar2 = mapSquarePos.field_1;
                lVar7 = local_218->HeapBeginPtr();
                ((uint8_t)pLVar6)
                    ->Log(nullptr, (LogLevel)this_08, 5, 14438570, 86,
                          "Found irradiance for %u, %u in cache. Hash: %zu", (unsigned int)bVar1, (unsigned int)bVar2,
                          *(uint64_t*)(lVar7 + 48));
            }
        } else {
            pLVar6 = logger::default_logger();
            local_c8 = logger::LogStream(LOGGER_LIGHTPROBE);
            ((uint8_t)pLVar6)
                ->Log(nullptr, (LogLevel)&local_c8, 5, 14438570, 63,
                      "Called AddMapSquareToUpdateList while processing update requests - Ignoring call");
            this_08 = &local_c8;
        }
        this_08->~LogStream();
    LAB_1004782e3:
    }

    // 0x1004788b0
    void LightProbeManager::AddAllExistingMapSquaresToUpdateList() {
        bool bVar1;
        unsigned int arg1;
        int iVar3;
        unsigned int arg2;
        uint8_t local_160[152];
        LogStream local_c8;

        bool cVar2 = field_968;
        auto pLVar4 = logger::default_logger();
        if (!cVar2) {
            new ((local_160 + 8)) logger::LogStream(LOGGER_LIGHTPROBE);
            ((uint8_t)pLVar4)
                ->Log(nullptr, (LogLevel)(LogStream*)(local_160 + 8), 5, 14438570, 131,
                      "Requesting irradiance update for all mapsquares");
            ((local_160 + 8))->~LogStream();
            field_24.clear();
            field_928.clear();
            ((list<float, eastl::fixed_node_allocator<24ul, 4096ul, 8ul, 0ul, true>>*)field_56.SSOBeginPtr())->clear();
            arg1 = field_16->GetMapSquareMinX();
            iVar3 = field_16->GetMapSquareMaxX();
            if ((int)arg1 <= iVar3) {
                do {
                    arg2 = field_16->GetMapSquareMinZ();
                    iVar3 = field_16->GetMapSquareMaxZ();
                    if ((int)arg2 <= iVar3) {
                        do {
                            cVar2 = (field_16->GetMapSquare(arg1, arg2))->operator_cast_to_bool();
                            if (cVar2) {
                                new (local_160) MapSquare::MapSquarePos(arg1, arg2);
                                AddMapSquareToUpdateList(*local_160);
                            }
                            iVar3 = field_16->GetMapSquareMaxZ();
                            bVar1 = (int)arg2 < iVar3;
                            arg2 = arg2 + 1;
                        } while (bVar1);
                    }
                    iVar3 = field_16->GetMapSquareMaxX();
                    bVar1 = (int)arg1 < iVar3;
                    arg1 = arg1 + 1;
                } while (bVar1);
            }
        } else {
            local_c8 = logger::LogStream(LOGGER_LIGHTPROBE);
            ((uint8_t)pLVar4)
                ->Log(nullptr, (LogLevel)&local_c8, 5, 14438570, 127,
                      "Called AddAllExistingMapSquaresToUpdateList while processing update requests - Ignoring call");
        }
    }

    // 0x100478b00
    void LightProbeManager::RenderPendingEnvMaps(unsigned int arg1, unsigned int arg2, int arg3, bool arg4) {
        unsigned short uVar1;
        bool bVar3;
        uint8_t bVar4;
        int iVar5;
        uint32_t uVar6;
        unsigned int arg4_00;
        TextureManager* this_01;
        GUIManager* pGVar7;
        Logger* pLVar8;
        MapSquareUpdateInfo* mapSquareUpdateInfo;
        MapSquareUpdateInfo* pMVar9;
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        Location* pLVar10;
        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* puVar11;
        SceneManager* pSVar12;
        AABB* pAVar13;
        MapSquare* pMVar14;
        EnvironmentLoader* pEVar15;
        BufferedRenderTargets* pBVar16;
        Terrain* pTVar17;
        LightProbe* pLVar18;
        LightProbeRenderer* pLVar19;
        Entity* pEVar20;
        Vector3T<float>* pVVar21;
        uint32_t* puVar22;
        float* pfVar23;
        GraphNode* this_04;
        SceneViewData* pSVar25;
        Vector2T<int>* this_05;
        EnvLightProbeSettings* this_06;
        shared_ptr<World>* this_07;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_08;
        EnvironmentOverride* this_09;
        char* pcVar26;
        shared_ptr<graphics::SkyBox>* psVar27;
        SkyBox* pSVar28;
        uint8_t* puVar29;
        shared_ptr<render::BufferedRenderTargets>* this_10;
        MapSquareUpdateInfo* pMVar30;
        uint64_t in_register_00000081;
        float fVar31;
        float in_XMM1_Da;
        ColourHSL local_2ae0;
        MapSquarePos* local_2ad0;
        queue<MapSquare::MapSquarePos, eastl::fixed_list<MapSquare::MapSquarePos, 32ul>>* local_2ac8;
        Logger* local_2ac0;
        uint64_t local_2ab8;
        float local_2ab0;
        uint64_t local_2aa8;
        float local_2aa0;
        shared_ptr local_2a98;
        uint32_t local_2a80;
        unsigned int local_2a78;
        unsigned int local_2a74;
        uint64_t local_2a70;
        float local_2a68;
        unsigned int local_2a5c;
        PointLightShadows* local_2a58;
        AABB* local_2a50;
        AutoSingleton<ShaderThreadPoolSingleton> local_2a48;
        BufferedRenderTargets* local_2a40;
        LogStream local_2a38;
        LogStream local_29a8;
        LogStream local_2918;
        LogStream local_2888;
        AABB local_27f8;
        ColourHSL local_14a0;
        LogStream local_158;
        LogStream local_c8;

        uint8_t* this_00 = &field_24;
        bool cVar2 = this_00->empty();
        if (!cVar2) {
            this_01 = field_0->GetTextureManager();
            iVar5 = ((TextureAtlasManager*)this_01->GetTextureAtlasManager())->GetNumLoadingTextures();
            if (iVar5 == 0) {
                local_2a80 = (uint32_t)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4);
                field_968 = '\x01';
                pGVar7 = field_0->GetGUIManager();
                pGVar7->Render(nullptr);
                pLVar8 = logger::default_logger();
                local_c8 = logger::LogStream(LOGGER_LIGHTPROBE);
                uVar6 = this_00->size();
                ((uint8_t)pLVar8)
                    ->Log(nullptr, (LogLevel)&local_c8, 8, 14438570, 182, "Remaining light probes to render: %i",
                          uVar6);
                mapSquareUpdateInfo = (MapSquareUpdateInfo*)this_00->HeapBeginPtr();
                pMVar9 = (MapSquareUpdateInfo*)this_00->end();
                if ((mapSquareUpdateInfo != pMVar9) && (arg2 != 0)) {
                    local_2ac8 =
                        (queue<MapSquare::MapSquarePos, eastl::fixed_list<MapSquare::MapSquarePos, 32ul>>*)&field_56;
                    local_2ad0 = (MapSquarePos*)&field_928;
                    local_2a5c = 0;
                    do {
                        midiPlayerMainThread =
                            (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)field_16->GetMapSquare(
                                *mapSquareUpdateInfo);
                        bVar3 = *midiPlayerMainThread != nullptr;
                        if (bVar3) {
                            pLVar10 = (Location*)(*midiPlayerMainThread).operator->();
                            cVar2 = (pLVar10->GetParentLocationType())->operator_cast_to_bool();
                            if (!cVar2)
                                goto LAB_100479490;
                            pLVar10 = (Location*)(*midiPlayerMainThread).operator->();
                            puVar11 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                          pLVar10->GetParentLocationType();
                            pSVar12 = (SceneManager*)(*puVar11).operator->();
                            pAVar13 = (AABB*)pSVar12->GetEntityHighlightGlobalState();
                            cVar2 = pAVar13->IsValid();
                            if (!cVar2)
                                goto LAB_100479490;
                            pMVar14 = (MapSquare*)(*midiPlayerMainThread).operator->();
                            pEVar15 = pMVar14->GetEnvironmentLoader();
                            if (pEVar15 == nullptr)
                                goto LAB_100479490;
                            pMVar14 = (MapSquare*)(*midiPlayerMainThread).operator->();
                            pEVar15 = pMVar14->GetEnvironmentLoader();
                            cVar2 = pEVar15->IsLoaded();
                            if (!cVar2)
                                goto LAB_100479490;
                            pLVar10 = (Location*)(*midiPlayerMainThread).operator->();
                            pBVar16 = (BufferedRenderTargets*)pLVar10->GetParentLocationType();
                            pTVar17 = (Terrain*)(*pBVar16).operator->();
                            local_2a58 = (PointLightShadows*)pTVar17->GetLightProbe();
                            local_2a40 = pBVar16;
                            pSVar12 = (SceneManager*)(*pBVar16).operator->();
                            local_2a50 = (AABB*)pSVar12->GetEntityHighlightGlobalState();
                            pBVar16 = local_2a40;
                            bVar3 = field_0 == nullptr;
                            bVar4 = !bVar3;
                            if (bVar3) {
                            LAB_100478e55:
                                if (bVar4 != 0)
                                    goto LAB_100478e5d;
                            LAB_100479642:
                                mapSquareUpdateInfo = (MapSquareUpdateInfo*)&mapSquareUpdateInfo->field_8;
                            } else {
                                pTVar17 = (Terrain*)(*local_2a40).operator->();
                                pLVar18 = (LightProbe*)pTVar17->GetLightProbe();
                                cVar2 = pLVar18->IsInit();
                                if (!cVar2) {
                                    pTVar17 = (Terrain*)(*pBVar16).operator->();
                                    pLVar18 = (LightProbe*)pTVar17->GetLightProbe();
                                    pLVar19 = field_0->GetLightProbeRenderer();
                                    bVar4 = pLVar18->Initialise(*pLVar19);
                                    local_2ac0 = logger::default_logger();
                                    local_158 = logger::LogStream(LOGGER_LIGHTPROBE);
                                    local_2a78 = (unsigned int)(uint8_t)mapSquareUpdateInfo->field_0;
                                    local_2a74 = (unsigned int)*(uint8_t*)((long)&mapSquareUpdateInfo->field_0 + 1);
                                    pLVar19 = field_0->GetLightProbeRenderer();
                                    uVar6 = pLVar19->GetNumFreeLightProbeResources();
                                    ((uint8_t)local_2ac0)
                                        ->Log(nullptr, (LogLevel)&local_158, 5, 14438570, 204,
                                              "Initialise lightprobe %u, %u (result %i) (%u free)", local_2a78,
                                              local_2a74, (unsigned int)bVar4, uVar6);
                                    goto LAB_100478e55;
                                }
                            LAB_100478e5d:
                                pAVar13 = local_2a50;
                                local_27f8[0]._0_8_ = local_2a50->GetCentrePos();
                                local_27f8[0].field_8 = in_XMM1_Da;
                                fVar31 = (float)pAVar13->GetHeight();
                                fVar31 = fVar31 * 0.5 + 5000.0;
                                local_14a0 = math::ColourHSL(0.0, fVar31, 0.0);
                                local_2aa8 = local_27f8 + local_14a0;
                                local_2aa0 = fVar31;
                                pEVar20 = (Entity*)(*local_2a40).operator->();
                                pVVar21 = (Vector3T<float>*)pEVar20->GetWorldPosition();
                                local_2a70 = local_2aa8 + *pVVar21;
                                local_2a68 = fVar31;
                                local_2a98 = shared_ptr();
                                pMVar14 = (MapSquare*)(*midiPlayerMainThread).operator->();
                                pEVar15 = pMVar14->GetEnvironmentLoader();
                                puVar22 = &local_2a70[0];
                                local_2a40 =
                                    (BufferedRenderTargets*)(((uint64_t)local_2a40._4_4_ << 32) | (uint32_t)(*puVar22));
                                pfVar23 = &local_2a70[2];
                                local_2a40 = (BufferedRenderTargets*)(long)local_2a40._0_4_;
                                local_2a50 = (AABB*)(long)*pfVar23;
                                arg4_00 = field_16->GetWorldFocusLevel();
                                if ((uint8_t*)pEVar15->GetEnvironmentSettings(local_2a98, (unsigned int)local_2a40,
                                                                              (unsigned int)local_2a50,
                                                                              arg4_00) != DataStatus::READY) {
                                    LogAssert("status == DataStatus::READY",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "game/runetek5/scene/LightProbeManager.cpp",
                                              216, nullptr);
                                }
                                cVar2 = shared_ptr::operator_cast_to_bool(&local_2a98);
                                if (!cVar2) {
                                    LogAssert("environmentSettings",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "game/runetek5/scene/LightProbeManager.cpp",
                                              217, nullptr);
                                }
                                local_27f8 = math::AABB(&local_2a70, &local_2a70);
                                pEVar20 = (Entity*)(*midiPlayerMainThread).operator->();
                                this_04 = pEVar20->GetNode();
                                cVar2 = this_04->TestIntersection(local_27f8);
                                if (cVar2) {
                                    pAVar13 = (AABB*)this_04->GetCursorMutex();
                                    local_2ab8 = pAVar13->GetCentrePos();
                                    local_2ab0 = fVar31;
                                    pAVar13 = (AABB*)this_04->GetWorldAABB();
                                    fVar31 = (float)pAVar13->GetHeight();
                                    fVar31 = fVar31 * 0.5 + 5000.0;
                                    local_2ae0 = math::ColourHSL(0.0, fVar31, 0.0);
                                    local_14a0[0]._0_8_ = local_2ab8 + local_2ae0;
                                    local_14a0[0].field_8 = fVar31;
                                    local_2aa8.SetXYZ(local_14a0);
                                    pVVar21 = (Vector3T<float>*)this_04->GetWorldTranslation();
                                    local_14a0[0]._0_8_ = local_2aa8 + *pVVar21;
                                    local_14a0[0].field_8 = fVar31;
                                    local_2a70.SetXYZ(local_14a0);
                                }
                                pSVar25 = (SceneViewData*)local_2a98.operator->();
                                this_05 = (Vector2T<int>*)pSVar25->GetStippleFarClipParams();
                                pVVar21 = (Vector3T<float>*)this_05->y();
                                local_2a70 += *pVVar21;
                                local_2a70.y();
                                local_2a58->SetWorldPosition(local_2a70);
                                pSVar25 = (SceneViewData*)local_2a98.operator->();
                                this_06 = (EnvLightProbeSettings*)pSVar25->GetStippleFarClipParams();
                                fVar31 = (float)this_06->GetOverbright();
                                local_2a40._0_4_ = fVar31;
                                pEVar20 = (Entity*)(*midiPlayerMainThread).operator->();
                                this_07 = (shared_ptr<World>*)pEVar20->GetWorld();
                                this_08 =
                                    (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                               eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                               eastl::equal_to<long long>, eastl::hash<long long>,
                                               eastl::mod_range_hashing, eastl::default_ranged_hash,
                                               eastl::prime_rehash_policy, false, true, true>*)(*this_07)
                                        .operator->();
                                pSVar12 = (SceneManager*)this_08->size();
                                this_09 = pSVar12->GetEnvironmentOverride();
                                if (((this_09 != nullptr) && (cVar2 = this_09->HasAnyOverrides(), cVar2)) &&
                                    (pcVar26 = this_09->GetLightProbeOverrides(), *pcVar26 != '\0')) {
                                    pcVar26 = this_09->GetLightProbeOverrides();
                                    local_2a40._0_4_ = (float)((pcVar26 + 4))->GetOverbright();
                                }
                                cVar2 = m_skyBoxOverbrightDefaultOverrideAll;
                                local_2a50 = (AABB*)(((uint64_t)local_2a50._4_4_ << 32) |
                                                     (uint32_t)m_skyBoxOverbrightDefaultValue);
                                psVar27 = field_16->GetSkyBox();
                                pSVar28 = (SkyBox*)(*psVar27).operator->();
                                fVar31 = local_2a40._0_4_;
                                if (cVar2) {
                                    fVar31 = local_2a50._0_4_;
                                }
                                pSVar28->SetExposure(fVar31);
                                local_14a0 = eastl::fixed_map<graphics::EffectType, bool, 121ul>();
                                local_27f8[0].field_0._0_1_ = 94;
                                puVar29 = &local_14a0[local_27f8];
                                *puVar29 = 0;
                                local_27f8[0].field_0._0_1_ = 40;
                                puVar29 = &local_14a0[local_27f8];
                                *puVar29 = 1;
                                local_27f8[0].field_0._0_1_ = 95;
                                puVar29 = &local_14a0[local_27f8];
                                *puVar29 = 1;
                                local_27f8[0].field_0._0_1_ = 97;
                                puVar29 = &local_14a0[local_27f8];
                                *puVar29 = 1;
                                local_27f8 = graphics::EffectStateSaveRestore(*field_8, local_14a0);
                                new (&local_2ab8) math::QuaternionT<float>(0.0, -1.0, 0.0, 0.0);
                                this_10 =
                                    (shared_ptr<render::BufferedRenderTargets>*)local_2a58->GetPointLightSMManager();
                                local_2a40 = (BufferedRenderTargets*)**this_10;
                                bVar3 = true;
                                if ((char)local_2a80 != '\0') {
                                    iVar5 = ((NXTPixScreen*)this_10->Instance())->GetUIHeight();
                                    bVar3 = iVar5 == 4;
                                }
                                pSVar12 = (SceneManager*)field_16->size();
                                in_XMM1_Da = 16384.0;
                                cVar2 = pSVar12->RenderWorldEnvMap(*local_2a40, local_2a70, local_2ab8, 128.0, 16384.0,
                                                                   arg1, 4, arg3, mapSquareUpdateInfo->field_4,
                                                                   (unsigned int)bVar3 * 8 + 49);
                                local_2a58 = (PointLightShadows*)(((uint64_t)local_2a58._1_7_ << 8) | (uint8_t)cVar2);
                                if (!cVar2) {
                                    pLVar8 = logger::default_logger();
                                    local_29a8 = logger::LogStream(LOGGER_LIGHTPROBE);
                                    ((uint8_t)pLVar8)
                                        ->Log(nullptr, (LogLevel)&local_29a8, 5, 14438570, 323,
                                              "MapSquare LightProbe RenderWorldEnvMap returned false, retrying: %u, %u "
                                              "(%i)",
                                              (unsigned int)(uint8_t)mapSquareUpdateInfo->field_0,
                                              (unsigned int)*(uint8_t*)((long)&mapSquareUpdateInfo->field_0 + 1),
                                              mapSquareUpdateInfo->field_4);
                                    if (graphics::LightProbeRenderer::m_enableResourceRecycling != '\0') {
                                        pLVar19 = field_0->GetLightProbeRenderer();
                                        pLVar10 = (Location*)(*midiPlayerMainThread).operator->();
                                        puVar11 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                                      pLVar10->GetParentLocationType();
                                        pTVar17 = (Terrain*)(*puVar11).operator->();
                                        pLVar18 = (LightProbe*)pTVar17->GetLightProbe();
                                        pLVar19->RecycleRenderingResources(*pLVar18);
                                        local_2a40 = (BufferedRenderTargets*)logger::default_logger();
                                        local_2a38 = logger::LogStream(LOGGER_LIGHTPROBE);
                                        uVar1 = mapSquareUpdateInfo->field_0;
                                        bVar4 = *(uint8_t*)((long)&mapSquareUpdateInfo->field_0 + 1);
                                        pLVar19 = field_0->GetLightProbeRenderer();
                                        uVar6 = pLVar19->GetNumFreeLightProbeResources();
                                        ((uint8_t)local_2a40)
                                            ->Log(nullptr, (LogLevel)&local_2a38, 5, 14438570, 330,
                                                  "Recycle lightprobe A %u, %u (%u free)", (unsigned int)(uint8_t)uVar1,
                                                  (unsigned int)bVar4, uVar6);
                                    }
                                } else {
                                    pMVar9 = (MapSquareUpdateInfo*)this_00->HeapBeginPtr();
                                    pMVar30 = (MapSquareUpdateInfo*)this_00->end();
                                    pMVar9 = eastl::find_if<LightProbeManager::MapSquareUpdateInfo*,
                                                            unsigned int->RenderPendingEnvMaps(unsigned int, int,
                                                                                               bool)::__2>(
                                        pMVar9, pMVar30, (__2*)mapSquareUpdateInfo);
                                    pMVar30 = (MapSquareUpdateInfo*)this_00->end();
                                    if (pMVar9 == pMVar30) {
                                        local_2a40->WriteFinished();
                                        local_2ac8->push(*mapSquareUpdateInfo);
                                        pLVar8 = logger::default_logger();
                                        local_2888 = logger::LogStream(LOGGER_LIGHTPROBE);
                                        ((uint8_t)pLVar8)
                                            ->Log(nullptr, (LogLevel)&local_2888, 5, 14438570, 312,
                                                  "MapSquare LightProbe All Done: %u, %u",
                                                  (unsigned int)(uint8_t)mapSquareUpdateInfo->field_0,
                                                  (unsigned int)*(uint8_t*)((long)&mapSquareUpdateInfo->field_0 + 1));
                                    }
                                    pLVar8 = logger::default_logger();
                                    local_2918 = logger::LogStream(LOGGER_LIGHTPROBE);
                                    ((uint8_t)pLVar8)
                                        ->Log(nullptr, (LogLevel)&local_2918, 5, 14438570, 315,
                                              "MapSquare LightProbe Done: %u, %u (%i)",
                                              (unsigned int)(uint8_t)mapSquareUpdateInfo->field_0,
                                              (unsigned int)*(uint8_t*)((long)&mapSquareUpdateInfo->field_0 + 1),
                                              mapSquareUpdateInfo->field_4);
                                    mapSquareUpdateInfo = (MapSquareUpdateInfo*)this_00->erase(mapSquareUpdateInfo);
                                    local_2a5c = local_2a5c + 1;
                                }
                                if ((char)local_2a58 == '\0')
                                    goto LAB_100479642;
                            }
                        } else {
                        LAB_100479490:
                            eastl::vector_set<MapSquare::MapSquarePos, eastl::less<MapSquare::MapSquarePos>,
                                              eastl::allocator,
                                              eastl::vector<MapSquare::MapSquarePos>>::erase(*local_2ad0);
                            mapSquareUpdateInfo = (MapSquareUpdateInfo*)this_00->erase(mapSquareUpdateInfo);
                        }
                        pMVar9 = (MapSquareUpdateInfo*)this_00->end();
                    } while ((mapSquareUpdateInfo != pMVar9) && (local_2a5c < arg2));
                }
                field_968 = '\0';
                psVar27 = field_16->GetSkyBox();
                pSVar28 = (SkyBox*)(*psVar27).operator->();
                pSVar28->SetExposure(0.0);
                pGVar7 = field_0->GetGUIManager();
                pGVar7->ResetBatchState();
            }
        }
    }

    // 0x100479a10
    uint64_t LightProbeManager::GetProbeTextureData(graphics::LightProbe& lightProbe,
                                                    eastl::fixed_vector<render::ImageData, 6ul>& imageDatas) const {
        unsigned char* puVar1;
        uint32_t uVar4;
        int iVar5;
        int iVar6;
        long lVar7;
        long* plVar8;
        __3* arg3;
        unsigned long arg1;
        unsigned char* local_58[2];
        uint8_t local_48;
        int local_40;
        int local_3c;
        Format local_38;
        unsigned int local_34;

        auto this_00 = lightProbe.GetPointLightSMManager();
        BufferedRenderTargets* this_01 = (BufferedRenderTargets*)**this_00;
        bool cVar2 = this_01->IsReadyToRead();
        uint64_t uVar9 = 1;
        if (cVar2) {
            imageDatas.resize(6);
            new (local_58) render::ImageData();
            this_01->CopyColourTargetData(*local_58);
            if (local_58[0] == nullptr) {
                LogAssert("cubeImageData.m_pixelData.m_pData",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "LightProbeManager.cpp",
                          365, nullptr);
            }
            if (local_38 != 7) {
                LogAssert("cubeImageData.m_format == render::Format::FORMAT_R8G8B8A8_UNORM",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "LightProbeManager.cpp",
                          366, nullptr);
            }
            if (local_58[0] == nullptr) {
                uVar9 = 2;
            } else {
                if (std::all_of<unsigned char*, (graphics::LightProbe&)
                                                    ->GetProbeTextureData(eastl::fixed_vector<render::ImageData, 6ul>&)
                                                        const ::__3>(local_58[0], local_58[0] + local_34, arg3)) {
                    LogAssert("!isAllBlack",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/LightProbeManager.cpp",
                              372, nullptr);
                }
                lVar7 = imageDatas[0];
                *(uint8_t*)(lVar7 + 16) = 1;
                local_48 = 0;
                arg1 = 0;
                do {
                    plVar8 = &imageDatas[arg1];
                    *(Format*)(plVar8 + 4) = local_38;
                    *(int*)((long)plVar8 + 28) = local_3c;
                    *(int*)(plVar8 + 3) = local_3c;
                    uVar4 = render::GetImageByteSize(local_3c, local_3c, local_38, 0);
                    iVar6 = local_40;
                    *(uint32_t*)((long)plVar8 + 36) = uVar4;
                    iVar5 = render::GetFormatByteCount(*(Format*)(plVar8 + 4));
                    puVar1 = local_58[0];
                    *(int*)(plVar8 + 1) = iVar5 * iVar6;
                    lVar7 = plVar8[3];
                    iVar6 = render::GetFormatByteCount(*(Format*)(plVar8 + 4));
                    *plVar8 = (long)(puVar1 + (unsigned int)((int)lVar7 * (int)arg1 * iVar6));
                    arg1 = arg1 + 1;
                } while (arg1 != 6);
                uVar9 = 0;
            }
        }
        return uVar9;
    }

    // 0x100479cd0
    void LightProbeManager::UpdatePendingLightProbeSH(unsigned int arg1) {
        bool cVar1;
        int iVar2;
        MapSquarePos* mapSquarePos;
        shared_ptr* this_00;
        Location* pLVar3;
        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* puVar4;
        Terrain* pTVar5;
        float* arg4;
        float* arg5;
        MapSquare* pMVar6;
        LightProbeRenderer* pLVar7;
        unsigned long uVar8;
        array<float, 9ul> local_270;
        array<float, 9ul> local_248;
        array<float, 9ul> local_220;
        IrradianceSHCoefConsts local_1f8;
        LightProbe* local_178;
        float* local_170;
        MapSquarePos* local_168;
        uint16_t local_152;
        fixed_vector<render::ImageData, 6ul> local_150;

        LightProbeManager* local_160 = this;
        unsigned long local_188 = field_56.size();
        if (local_188 != 0) {
            local_168 = (MapSquarePos*)&local_160->field_928;
            uVar8 = 0;
            do {
                cVar1 = field_56.empty();
                if ((cVar1) || ((unsigned long)arg1 <= uVar8))
                    break;
                mapSquarePos = (MapSquarePos*)
                    eastl::queue<MapSquare::MapSquarePos, eastl::fixed_list<MapSquare::MapSquarePos, 32ul>>::front();
                this_00 = (shared_ptr*)local_160->field_16->GetMapSquare(*mapSquarePos);
                new (&local_150) eastl::fixed_vector<render::ImageData, 6ul>();
                cVar1 = shared_ptr::operator_cast_to_bool(this_00);
                if (!cVar1) {
                    eastl::vector_set<MapSquare::MapSquarePos, eastl::less<MapSquare::MapSquarePos>, eastl::allocator,
                                      eastl::vector<MapSquare::MapSquarePos>>::erase(*local_168);
                    eastl::queue<MapSquare::MapSquarePos, eastl::fixed_list<MapSquare::MapSquarePos, 32ul>>::pop();
                } else {
                    pLVar3 = (Location*)(*this_00).operator->();
                    cVar1 = (pLVar3->GetParentLocationType())->operator_cast_to_bool();
                    if (cVar1) {
                        pLVar3 = (Location*)(*this_00).operator->();
                        puVar4 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                     pLVar3->GetParentLocationType();
                        pTVar5 = (Terrain*)(*puVar4).operator->();
                        cVar1 = ((LightProbe*)pTVar5->GetLightProbe())->IsInit();
                        if (cVar1) {
                            pLVar3 = (Location*)(*this_00).operator->();
                            puVar4 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                         pLVar3->GetParentLocationType();
                            pTVar5 = (Terrain*)(*puVar4).operator->();
                            local_178 = (LightProbe*)pTVar5->GetLightProbe();
                            iVar2 = GetProbeTextureData((LightProbeManager*)pTVar5, local_178, &local_150);
                            if (iVar2 == 2) {
                                if (graphics::LightProbeRenderer::m_enableResourceRecycling != '\0') {
                                    pLVar7 = local_160->field_0->GetLightProbeRenderer();
                                    pLVar7->RecycleRenderingResources(*local_178);
                                }
                                pMVar6 = (MapSquare*)(*this_00).operator->();
                                local_1f8.field_0._0_2_ = pMVar6->GetMapSquarePosition();
                                eastl::vector_set<MapSquare::MapSquarePos, eastl::less<MapSquare::MapSquarePos>,
                                                  eastl::allocator,
                                                  eastl::vector<MapSquare::MapSquarePos>>::erase(*local_168);
                                eastl::queue<MapSquare::MapSquarePos,
                                             eastl::fixed_list<MapSquare::MapSquarePos, 32ul>>::pop();
                            } else if (iVar2 == 0) {
                                local_170 = local_270.data();
                                arg4 = local_248.data();
                                arg5 = local_220.data();
                                graphics::SHProjectCubeMap(3, local_150, local_170, arg4, arg5);
                                local_1f8 = graphics::IrradianceSHCoefConsts();
                                graphics::ComputeIrradianceSHCoefs(local_1f8, 3, local_170, arg4, arg5, 1.0, 1.0, 1.0);
                                pMVar6 = (MapSquare*)(*this_00).operator->();
                                pMVar6->SetIrradianceSHConsts(local_1f8, 750);
                                pMVar6 = (MapSquare*)(*this_00).operator->();
                                local_152 = pMVar6->GetMapSquarePosition();
                                eastl::vector_set<MapSquare::MapSquarePos, eastl::less<MapSquare::MapSquarePos>,
                                                  eastl::allocator,
                                                  eastl::vector<MapSquare::MapSquarePos>>::erase(*local_168);
                                if (graphics::LightProbeRenderer::m_enableResourceRecycling != '\0') {
                                    pLVar7 = local_160->field_0->GetLightProbeRenderer();
                                    pLVar7->RecycleRenderingResources(*local_178);
                                }
                                eastl::queue<MapSquare::MapSquarePos,
                                             eastl::fixed_list<MapSquare::MapSquarePos, 32ul>>::pop();
                            }
                        }
                    }
                }
                uVar8 = uVar8 + 1;
            } while (local_188 != uVar8);
        }
    }

    // 0x10047a060
    void LightProbeManager::AddSHCoefToCache(const MapSquareEnvIrradianceInfo& mapSquareEnvIrradianceInfo) {
        hashtable<unsigned long, eastl::pair<unsigned long const, MapSquareEnvIrradianceInfo>, eastl::allocator,
                  eastl::use_first<eastl::pair<unsigned long const, MapSquareEnvIrradianceInfo>>,
                  eastl::equal_to<unsigned long>, eastl::hash<unsigned long>, eastl::mod_range_hashing,
                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, false>
            local_1f0;
        hashtable_iterator<eastl::pair<int const, oldscape::highlight::HighlightedGroup>, false, false> local_1e0;
        hashtable_iterator<eastl::pair<unsigned long const, MapSquareEnvIrradianceInfo>, false, false> local_1d0;
        hashtable_iterator<eastl::pair<unsigned long const, MapSquareEnvIrradianceInfo>, true, false>* local_1c0[2];
        hashtable_iterator<eastl::pair<unsigned long const, MapSquareEnvIrradianceInfo>, true, false>* local_1b0;
        pair<unsigned long const, MapSquareEnvIrradianceInfo>* local_1a8;

        if (mapSquareEnvIrradianceInfo.field_0 == '\0') {
            LogAssert("irradianceInfo.m_isValid",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "LightProbeManager.cpp",
                      477, nullptr);
        }
        unsigned long local_1a0 = mapSquareEnvIrradianceInfo.field_8.hash();
        ReturnValue* this_00 = *field_16 = World::GetIrradianceCache();
        local_1f0.equal_range(*this_00);
        hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false> local_220(&local_1f0);
        hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false> local_210(&local_1e0);
        eastl::find_if<
            eastl::hashtable_iterator<eastl::pair<unsigned long const, MapSquareEnvIrradianceInfo>, false, false>,
            (MapSquareEnvIrradianceInfo const&)->AddSHCoefToCache()::__4>(&local_1d0, &local_220, &local_210);
        auto local_e8 = this_00->end();
        if (local_1d0 != local_e8 != '\0') {
            new (local_1c0) eastl::hashtable_iterator(&local_1d0);
            local_e8 = this_00->erase(local_1c0[0]);
        }
        new (&local_1b0) eastl::hashtable_iterator(&local_1e0);
        auto local_198 =
            eastl::make_pair<unsigned long&, MapSquareEnvIrradianceInfo const&>(local_1a0, mapSquareEnvIrradianceInfo);
        local_e8.pair<unsigned long, MapSquareEnvIrradianceInfo, void>(local_198);
        auto local_200 = this_00->insert(local_1b0, *local_1a8);
    }

    // 0x10047a580
    void LightProbeManager::UpdatePendingLightProbeSHAsync() {
        void result;
        ReturnValue result;
        int iVar2;
        uint32_t uVar3;
        uint32_t uVar4;
        MapSquarePos* mapSquarePos;
        shared_ptr* this_01;
        weak_ptr<oldscape::dash3d::GroundDecor>* groundDecor;
        Location* pLVar6;
        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* puVar7;
        Terrain* pTVar8;
        LightProbe* pLVar9;
        fixed_vector<render::ImageData, _6ul>* imageDatas;
        Layout* this_03;
        char* str;
        Logger* pLVar10;
        MapSquare* pMVar11;
        LightProbeManager* pLVar14;
        uint8_t local_5c0[40];
        weak_ptr<oldscape::dash3d::Decor> local_598;
        uint8_t local_588[32];
        LogStream local_550;
        LogStream local_4c0;
        LogStream local_430;

        fixed_queue<MapSquare::MapSquarePos, 32ul, true> local_3a0;
        queue<MapSquare::MapSquarePos, eastl::fixed_list<MapSquare::MapSquarePos, 32ul>>* local_560 =
            (queue<MapSquare::MapSquarePos, eastl::fixed_list<MapSquare::MapSquarePos, 32ul>>*)&field_56;
        long lVar5 = local_560->size();
        vector<std::future<MapSquareEnvIrradianceInfo>>* local_568 =
            (vector<std::future<MapSquareEnvIrradianceInfo>>*)&field_976;
        if (lVar5 != 0) {
            local_588._24_8_ = &field_928;
            do {
                mapSquarePos = (MapSquarePos*)
                    eastl::queue<MapSquare::MapSquarePos, eastl::fixed_list<MapSquare::MapSquarePos, 32ul>>::front();
                pLVar14 = this;
                this_01 = (shared_ptr*)field_16->GetMapSquare(*mapSquarePos);
                groundDecor =
                    (weak_ptr<oldscape::dash3d::GroundDecor>*)pLVar14->field_16->GetCurrentEnvironmentSettings();
                local_598 = weak_ptr(*groundDecor);
                if (!(shared_ptr::operator_cast_to_bool(this_01))) {
                    eastl::vector_set<MapSquare::MapSquarePos, eastl::less<MapSquare::MapSquarePos>, eastl::allocator,
                                      eastl::vector<MapSquare::MapSquarePos>>::erase(*local_588._24_8_);
                } else {
                    pLVar6 = (Location*)(*this_01).operator->();
                    if ((pLVar6->GetParentLocationType())->operator_cast_to_bool()) {
                        pLVar6 = (Location*)(*this_01).operator->();
                        puVar7 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                     pLVar6->GetParentLocationType();
                        pTVar8 = (Terrain*)(*puVar7).operator->();
                        pLVar9 = (LightProbe*)pTVar8->GetLightProbe();
                        if (pLVar9->IsInit()) {
                            pLVar6 = (Location*)(*this_01).operator->();
                            puVar7 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                         pLVar6->GetParentLocationType();
                            pTVar8 = (Terrain*)(*puVar7).operator->();
                            pLVar9 = (LightProbe*)pTVar8->GetLightProbe();
                            pLVar14 = (LightProbeManager*)local_588;
                            make_shared<eastl::fixed_vector<render::ImageData, 6ul>>((ReturnValue*)pLVar14);
                            imageDatas = (fixed_vector<render::ImageData, _6ul>*)**pLVar14;
                            iVar2 = GetProbeTextureData(pLVar14, pLVar9, imageDatas);
                            if (iVar2 == 1) {
                                local_3a0.push(*mapSquarePos);
                                pLVar10 = logger::default_logger();
                                local_430 = logger::LogStream(LOGGER_LIGHTPROBE);
                                pMVar11 = (MapSquare*)(*this_01).operator->();
                                uVar3 = pMVar11->GetMapSquareX();
                                pMVar11 = (MapSquare*)(*this_01).operator->();
                                uVar4 = pMVar11->GetMapSquareZ();
                                ((uint8_t)pLVar10)
                                    ->Log(nullptr, (LogLevel)&local_430, 5, 14438570, 548,
                                          "Retrying LightProbe Read (readback not ready): %u, %u", uVar3, uVar4);
                            } else if (iVar2 == 0) {
                                this_03 = (Layout*)pLVar14->Instance();
                                str = (char*)this_03->SSOBeginPtr();
                                new (local_5c0) shared_ptr(local_588);
                                local_5c0[16] = mapSquarePos->field_0;
                                local_5c0[17] = mapSquarePos->field_1;
                                new ((local_5c0 + 24)) weak_ptr(local_598);
                                &result = (ReturnValue*)(local_588 + 16);
                                ThreadPool::AddTask<LightProbeManager::UpdatePendingLightProbeSHAsync()::__5>(
                                    &result, str, (__5*)local_5c0);
                                local_568->push_back(result);
                                result.~future();
                                UpdatePendingLightProbeSHAsync()::$_5::~__5((__5*)local_5c0);
                            } else {
                                if (graphics::LightProbeRenderer::m_enableResourceRecycling != '\0') {
                                    field_0->GetLightProbeRenderer()->RecycleRenderingResources(*pLVar9);
                                }
                                pLVar10 = logger::default_logger();
                                local_4c0 = logger::LogStream(LOGGER_LIGHTPROBE);
                                pMVar11 = (MapSquare*)(*this_01).operator->();
                                uVar3 = pMVar11->GetMapSquareX();
                                pMVar11 = (MapSquare*)(*this_01).operator->();
                                uVar4 = pMVar11->GetMapSquareZ();
                                ((uint8_t)pLVar10)
                                    ->Log(nullptr, (LogLevel)&local_4c0, 5, 14438570, 558,
                                          "Nullptr returned for light probe texture data read back: %u, %u", uVar3,
                                          uVar4);
                                eastl::vector_set<MapSquare::MapSquarePos, eastl::less<MapSquare::MapSquarePos>,
                                                  eastl::allocator,
                                                  eastl::vector<MapSquare::MapSquarePos>>::erase(*local_588._24_8_);
                            }
                            goto LAB_10047a990;
                        }
                    }
                    local_3a0.push(*mapSquarePos);
                    pLVar10 = logger::default_logger();
                    local_550 = logger::LogStream(LOGGER_LIGHTPROBE);
                    pMVar11 = (MapSquare*)(*this_01).operator->();
                    uVar3 = pMVar11->GetMapSquareX();
                    pMVar11 = (MapSquare*)(*this_01).operator->();
                    uVar4 = pMVar11->GetMapSquareZ();
                    ((uint8_t)pLVar10)
                        ->Log(nullptr, (LogLevel)&local_550, 5, 14438570, 566,
                              "Retrying LightProbe Read (terrain/probe not ready): %u, %u", uVar3, uVar4);
                }
            LAB_10047a990:
                eastl::queue<MapSquare::MapSquarePos, eastl::fixed_list<MapSquare::MapSquarePos, 32ul>>::pop();
                lVar5 = lVar5 - 1;
            } while (lVar5 != 0);
        }
        if (!(local_3a0.empty())) {
            local_560->swap(local_3a0);
        }
        vector<std::future<MapSquareEnvIrradianceInfo>>* this_00 = local_568;
        auto pfVar12 = local_568->HeapBeginPtr();
        auto pfVar13 = this_00->end();
        pfVar12 =
            std::remove_if<std::future<MapSquareEnvIrradianceInfo>*,
                           LightProbeManager::UpdatePendingLightProbeSHAsync()::__6>(pfVar12, pfVar13, (__6*)this);
        pfVar13 = (future<MapSquareEnvIrradianceInfo>*)this_00->end();
        this_00->erase(pfVar12, pfVar13);
    }

    // 0x10047af20
    void LightProbeManager::Clear() {
        field_24.clear();
        while (true) {
            if (field_56.empty() != '\0')
                break;
            eastl::queue<MapSquare::MapSquarePos, eastl::fixed_list<MapSquare::MapSquarePos, 32ul>>::pop();
        }
        field_928.clear();
    }

    // 0x10047f730
    LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5::~$_5() {
        field_24.~weak_ptr();
    }

    // 0x100481820
    bool LightProbeManager::AddMapSquareToUpdateList(MapSquare::MapSquarePos const&)::$_1::operator()(
        const LightProbeManager::MapSquareUpdateInfo& mapSquareUpdateInfo1,
        const LightProbeManager::MapSquareUpdateInfo& mapSquareUpdateInfo2) const {
        long lVar1 = field_0;
        int iVar2 =
            (*(World**)(lVar1 + 16))
                ->GetTargetMapSquarePriority((unsigned int)(uint8_t)mapSquareUpdateInfo1.field_0,
                                             (unsigned int)*(uint8_t*)((long)&mapSquareUpdateInfo1.field_0 + 1));
        int iVar3 =
            (*(World**)(lVar1 + 16))
                ->GetTargetMapSquarePriority((unsigned int)(uint8_t)mapSquareUpdateInfo2.field_0,
                                             (unsigned int)*(uint8_t*)((long)&mapSquareUpdateInfo2.field_0 + 1));
        return iVar2 < iVar3;
    }

    // 0x100481c40
    uint32_t LightProbeManager::RenderPendingEnvMaps(unsigned int, unsigned int, int, bool)::$_2::operator()(
        const LightProbeManager::MapSquareUpdateInfo& mapSquareUpdateInfo) const {
        uint32_t uVar2;

        if (mapSquareUpdateInfo == (*(*(MapSquarePos**)this)) == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = (((uint32_t)((int32_t)((unsigned int)mapSquareUpdateInfo.field_4 >> 8)) << 8) |
                     (uint8_t)(mapSquareUpdateInfo.field_4 != *(int*)(*(long*)this + 4)));
        }
        return uVar2;
    }

    // 0x100483190
    LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5::$_5($_5&& arg1) {
        shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(arg1);
        field_16 = *(uint16_t*)(arg1 + 16);
        new (&field_24) weak_ptr(*((arg1 + 24)));
    }

    // 0x1004832f0
    MapSquareEnvIrradianceInfo* LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5::operator()() {
        shared_ptr<eastl::fixed_vector<render::ImageData, 6ul>>* in_RSI;
        IrradianceSHCoefConsts aIStackY_3548[128];
        MapSquarePos in_stack_fffffffffffffeb8;
        array<float, 9ul> local_d8;
        array<float, 9ul> local_b0;
        array<float, 9ul> local_88;

        fixed_vector<render::ImageData, _6ul>* imageDatas = (fixed_vector<render::ImageData, _6ul>*)**in_RSI;
        auto arg3 = local_d8.data();
        auto arg4 = local_b0.data();
        auto arg5 = local_88.data();
        graphics::SHProjectCubeMap(3, *imageDatas, arg3, arg4, arg5);
        new (aIStackY_3548 + 128) graphics::IrradianceSHCoefConsts();
        graphics::ComputeIrradianceSHCoefs(*(aIStackY_3548 + 128), 3, arg3, arg4, arg5, 1.0, 1.0, 1.0);
        auto local_60 = ((in_RSI + 24))->lock();
        MapSquareEnvInfo local_50(in_stack_fffffffffffffeb8,
                                  *((shared_ptr<MapEnvironmentSettings>*)(unsigned long)*(unsigned int*)(in_RSI + 16)));
        unsigned long arg2 = local_50.hash();
        new (this) MapSquareEnvIrradianceInfo(local_50, arg2, *(aIStackY_3548 + 128));
        return (MapSquareEnvIrradianceInfo*)this;
    }

} // namespace jag::game
