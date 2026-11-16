// libs/game/runetek5/scene/entities/MapSquare.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "MapSquare.h"

namespace jag::game {
    // 0x1039b4df8, set at startup by ___cxx_global_var_init.21
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> MapSquare::NullMapSquare =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x1039b4e08, set at startup by ___cxx_global_var_init.22
    eastl::vector<shared_ptr<LightSource>> MapSquare::NullLightList = vector<shared_ptr<LightSource>>();

    // 0x1039b4e28, set at startup by ___cxx_global_var_init.23
    eastl::vector<shared_ptr<graphics::WaterPatch>> MapSquare::NullWaterPatchList =
        vector<shared_ptr<graphics::WaterPatch>>();

    // 0x100029ea0: MapSquare::IsVisibleEntity() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100159b80: MapSquare::GetMapSquareX() const has the same machine code as oldscape::rs2lib::InputField::GetFilter() const

    // 0x10016ea80: MapSquare::GetTerrain() const has the same machine code as oldscape::minimenu::Minimenu::GetPlayerOps() const

    // 0x1003c2110: MapSquare::GetLocations() has the same machine code as MapSquare::GetLocations() const

    // 0x100411040
    MapSquare::MapSquare(graphics::GraphNode* graphNode, const shared_ptr<World>& world, int arg3, int arg4,
                         const shared_ptr<ClientCompositeData>& clientCompositeData)
        : Entity(graphNode, world, 10, -1), MakeSharedPool<MapSquare, 32>() {
        field_8 = &PTR__MapSquare_100eff598;
        m_mapSquareX = arg3;
        m_mapSquareZ = arg4;
        uint8_t* local_80 = m_clientCompositeData;
        new (local_80) shared_ptr(clientCompositeData);
        m_prioritySquare = '\0';
        m_hasBuiltPriorityZones = 0;
        field_220 = 0;
        field_224 = 0;
        field_228 = 0;
        field_232 = 0;
        field_236 = 1;
        &field_240->unique_ptr<true, void>();
        m_terrainBlending = true;
        RT7Core* rt7Core = ((World*)world.operator->())->GetRT7Core();
        uint8_t* local_70 = m_mapSquarePointLights;
        new (local_70) MapSquarePointLights(*rt7Core, arg3, arg4);
        &field_704->unique_ptr<true, void>();
        uint8_t* local_60 = &field_712;
        new (local_60) eastl::vector<shared_ptr<MapSquareLocation>>();
        field_744 = 0;
        uint8_t* local_58 = &field_752;
        new (local_58) eastl::vector<eastl::vector<std::unique_ptr<LocationContainer>>>();
        &field_784->unique_ptr<true, void>();
        &field_792->unique_ptr<true, void>();
        uint8_t* local_40 = &field_800;
        new (local_40) eastl::vector<shared_ptr<LightSource>>();
        uint8_t* local_38 = &field_832;
        new (local_38) shared_ptr();
        new (&field_848) math::Transitionable<graphics::IrradianceSHCoefConsts>();
        m_partialMapBuild = false;
        field_1108 = 0;
        m_initialLightProbeSubmitted = 0;
        new (field_1120) WaterLoader(arg3, arg4, clientCompositeData);
        ColourHSL local_a0(0.0, 0.0, 0.0);
        ColourHSL local_90(8192.0, 8192.0, 8192.0);
        AABB local_c8(&local_a0, &local_90);
        SetAABB(local_c8);
        SetDefaultIrradianceSHConsts();
        auto this_01 = field_56.operator->();
        if (((AABB*)this_01->GetCursorMutex())->IsValid() == '\0') {
            LogAssert("m_node->GetAABB().IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/MapSquare.cpp",
                      53, nullptr);
        }
    }

    // 0x1004113f0
    void MapSquare::SetDefaultIrradianceSHConsts() {
        array<float, _9ul> local_a8;
        array<float, _9ul> local_80;
        array<float, _9ul> local_58;

        IrradianceSHCoefConsts local_118;
        graphics::GetDefaultIrradianceSHCoefs(local_a8, local_80, local_58);
        auto arg3 = local_a8.data();
        auto arg4 = local_80.data();
        auto arg5 = local_58.data();
        graphics::ComputeIrradianceSHCoefs(local_118, 3, arg3, arg4, arg5, 1.0, 1.0, 1.0);
        field_848.SetValue(local_118, 0, 0);
    }

    // 0x100411500
    MapSquare::~MapSquare() {
        field_8 = &PTR__MapSquare_100eff598;
        field_1120->~WaterLoader();
        field_832.~shared_ptr();
        field_800.~vector();
        field_792.~unique_ptr();
        field_784.~unique_ptr();
        field_752.~vector();
        field_712.~vector();
        field_704.~unique_ptr();
        m_mapSquarePointLights->~MapSquarePointLights();
        field_240.~unique_ptr();
        m_clientCompositeData->~shared_ptr();
    }

    // 0x100411610
    unsigned int MapSquare::Build(graphics::RT7Core* rt7Core, Js5ResourceProvider* js5ResourceProvider,
                                  ConfigProvider* configProvider, PlayerVarDomain* playerVarDomain,
                                  AssetBuilder* assetBuilder, const math::Vector3T<float>& vector3, int arg7, int arg8,
                                  unsigned int arg9, bool arg10, bool arg11) {
        uint8_t bVar4;
        bool cVar5;
        shared_ptr<World>* this_00;
        LODSettings* lodSettings;
        GraphNode* this_03;

        auto plVar8 = GraphicsApp::Instance();
        bool cVar1 = (**(void (**)(...))(*plVar8 + 224))(plVar8);
        if (!cVar1) {
            LogAssert("GraphicsApp::Instance()->IsInsideMainLogic()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/MapSquare.cpp",
                      76, nullptr);
        }
        uint8_t uVar2 = GetTargetLOD();
        uint8_t local_31 = uVar2;
        uint8_t bVar3 = LoadEnvironment(js5ResourceProvider);
        int iVar6 = LoadWaterPatches(js5ResourceProvider, configProvider);
        unsigned int uVar7 = 1;
        if ((iVar6 != 1) &&
            (uVar7 = LoadTerrain(configProvider, local_31, rt7Core, assetBuilder, arg8), (uVar7 & 4294967293) != 0)) {
            this_00 = (shared_ptr<World>*)GetWorld();
            lodSettings = ((World*)(*this_00).operator->())->GetLODSettings();
            bVar4 = m_mapSquarePointLights->LoadStaticPointLights(*this, js5ResourceProvider, configProvider, local_31,
                                                                  *lodSettings);
            cVar1 = LoadLocations(rt7Core, js5ResourceProvider, configProvider, playerVarDomain, assetBuilder, vector3,
                                  arg7, arg9, arg10, arg11, local_31, *lodSettings);
            cVar5 = ((Entity*)field_240.operator->())->IsAtTargetLOD();
            if (((bVar3 & bVar4) == 1) && ((cVar1 && (cVar5)))) {
                SetCurrentLOD((unsigned int)(uint8_t)uVar2);
                this_03 = GetNode();
                uVar7 = 0;
                this_03->UnionAABBWithChildren(false);
            } else {
                cVar1 = IsAtTargetLOD();
                uVar7 = 3;
                if (cVar1) {
                    bVar3 = ((unsigned int)(uint8_t)uVar2) + 1;
                    SetCurrentLOD((unsigned int)bVar3);
                    uVar7 = 2;
                }
            }
        }
        return uVar7;
    }

    // 0x1004117e0
    unsigned long MapSquare::LoadEnvironment(Js5ResourceProvider* js5ResourceProvider) {
        uint8_t* puVar3;
        unique_ptr<EnvironmentLoader, MakeUniquePool<EnvironmentLoader, _48>::UniquePoolDeleter>* unaff_R12;
        unique_ptr<EnvironmentLoader, MakeUniquePool<EnvironmentLoader, _48>::UniquePoolDeleter> local_30;

        uint8_t* this_00 = &field_704;
        bool cVar1 = this_00->operator_cast_to_bool();
        if (!cVar1) {
            unaff_R12 = &local_30;
            MakeUniquePool<EnvironmentLoader, 48>::MakeUnique<unsigned int&, unsigned int&,
                                                              shared_ptr<ClientCompositeData>&>(
                (unsigned int*)unaff_R12, &m_mapSquareX, (shared_ptr<ClientCompositeData>*)&m_mapSquareZ);
            *this_00 = *unaff_R12;
            unaff_R12->~unique_ptr();
        }
        EnvironmentLoader* pEVar2 = (EnvironmentLoader*)(*this_00).operator->();
        cVar1 = pEVar2->IsLoaded();
        uint64_t uVar5 = (uint64_t)((unsigned long)unaff_R12 >> 8);
        unsigned long uVar4 = (((uint64_t)uVar5 << 8) | (uint8_t)1);
        if (!cVar1) {
            pEVar2 = (EnvironmentLoader*)(*this_00).operator->();
            puVar3 = (uint8_t*)pEVar2->Load(js5ResourceProvider);
            uVar4 = (((uint64_t)uVar5 << 8) | (uint8_t)(puVar3 == DataStatus::READY));
        }
        pEVar2 = (EnvironmentLoader*)(*this_00).operator->();
        cVar1 = pEVar2->IsLoaded();
        if (cVar1) {
            cVar1 = (&field_784)->operator_cast_to_bool();
            if (cVar1) {
                field_784.reset(nullptr);
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x1004118c0
    uint64_t MapSquare::LoadWaterPatches(Js5ResourceProvider* js5ResourceProvider, ConfigProvider* configProvider) {
        uint8_t* puVar2;

        if ((field_1120->IsLoaded() == '\0') &&
            (puVar2 = (uint8_t*)field_1120->Load(js5ResourceProvider, configProvider),
             puVar2 == DataStatus::NOTLOADED)) {
            return 1;
        }
        return 3;
    }

    // 0x100411920
    uint32_t MapSquare::LoadTerrain(ConfigProvider* configProvider, const LODLevel& lodLevel,
                                    graphics::RT7Core* rt7Core, AssetBuilder* assetBuilder, int arg5) {
        bool bVar2;
        int arg1;
        Terrain* pTVar5;
        Terrain* terrain;
        TerrainInputData* terrainInputData;
        GraphNode* pGVar6;
        uint32_t uVar7;
        unique_ptr<Terrain, MakeUniquePool<Terrain, _32>::UniquePoolDeleter> local_98;
        uint64_t local_90;
        uint8_t local_88;
        uint8_t* local_80;
        uint64_t local_78;
        uint64_t local_70;
        uint8_t local_68;
        LODLevel* local_50;
        int local_44;
        GraphNode* local_40;

        uint8_t* this_00 = &field_240;
        RT7Core* local_60 = rt7Core;
        bool cVar1 = this_00->operator_cast_to_bool();
        if (!cVar1) {
            local_44 = arg5;
            arg1 = configProvider->GetMapDefaults()->GetZ();
            cVar1 = (configProvider->GetConfig<WaterType>(arg1, nullptr))->operator_cast_to_bool();
            if (!cVar1) {
                return 1;
            }
            local_90._0_4_ = 0;
            local_40 = graphics::GraphNode::Create<int>(local_90);
            local_90._0_4_ = m_mapSquareX;
            local_90._4_4_ = m_mapSquareZ;
            local_88 = (uint8_t)*lodLevel;
            local_80 = m_clientCompositeData;
            local_50 = lodLevel;
            local_78 = field_1120->GetOrigin();
            local_70 = field_1120->GetCursorMutex();
            local_68 = m_terrainBlending;
            terrainInputData = (TerrainInputData*)GetWorld();
            MakeUniquePool<Terrain, 32>::MakeUnique<graphics::GraphNode*&, shared_ptr<World> const&, TerrainInputData&,
                                                    graphics::RT7Core*&>(
                (GraphNode**)&local_98, (shared_ptr<World>*)&local_40, terrainInputData, (RT7Core**)&local_90);
            *this_00 = local_98;
            pGVar6 = local_40;
            pGVar6->SetEntity((GraphEntity*)this_00->get());
            pGVar6 = GetNode();
            pGVar6->AddChild(local_40);
            if ((&field_792)->operator_cast_to_bool() != '\0') {
                pTVar5 = (Terrain*)(*this_00).operator->();
                pTVar5->PreventFadeIn();
            }
            lodLevel = local_50;
            arg5 = local_44;
            if (!cVar1) {
                return 1;
            }
        }
        Entity* pEVar4 = (Entity*)(*this_00).operator->();
        pEVar4->SetTargetLOD((unsigned int)(uint8_t)(char)*lodLevel);
        pEVar4 = (Entity*)(*this_00).operator->();
        cVar1 = pEVar4->IsAtTargetLOD();
        if (!cVar1) {
            pTVar5 = (Terrain*)(*this_00).operator->();
            pTVar5->Build(assetBuilder, arg5, configProvider);
            pEVar4 = (Entity*)(*this_00).operator->();
            cVar1 = pEVar4->IsAtTargetLOD();
            if (!cVar1) {
                return 2;
            }
            bVar2 = &field_792 != assetBuilder;
            if (bVar2) {
                pTVar5 = (Terrain*)(*this_00).operator->();
                terrain = (Terrain*)*field_792;
                pTVar5->ImportHeightAdjustments(*terrain);
                DestroyOldTerrain();
                pTVar5 = (Terrain*)(*this_00).operator->();
                pTVar5->PreventFadeIn();
            }
            pTVar5 = (Terrain*)(*this_00).operator->();
            cVar1 = pTVar5->HasWater();
            if (cVar1) {
                cVar1 = field_1120->HasWaterPatches();
                if (!cVar1) {
                    field_1120->SetDefaultWaterPatch(*configProvider);
                }
            }
        }
        bVar2 = m_partialMapBuild;
        if (bVar2 == false) {
            pTVar5 = (Terrain*)(*this_00).operator->();
            cVar1 = pTVar5->IsReadyToRender();
            uVar7 = 3;
            if (!cVar1) {
                return 2;
            }
        } else {
            SetCurrentLOD((unsigned int)(uint8_t)(char)*lodLevel);
            uVar7 = 0;
        }
        pTVar5 = (Terrain*)(*this_00).operator->();
        pTVar5->SetHideTerrain(bVar2);
        return uVar7;
    }

    // 0x100412120
    uint8_t MapSquare::LoadLocations(graphics::RT7Core* rt7Core, Js5ResourceProvider* js5ResourceProvider,
                                     ConfigProvider* configProvider, PlayerVarDomain* playerVarDomain,
                                     AssetBuilder* assetBuilder, const math::Vector3T<float>& vector3, int arg7,
                                     unsigned int arg8, bool arg9, bool arg10, const LODLevel& lodLevel,
                                     const LODSettings& lodSettings) {
        MapSquare* pMVar2;
        unsigned long uVar3;
        uint8_t uVar4;
        bool cVar5;
        uint8_t bVar6;
        unsigned int uVar7;
        ClientCompositeData* clientCompositeData;
        shared_ptr<World>* this_00;
        LinkMap* linkMap;
        vector<std::unique_ptr<LocationContainer>>* pvVar8;
        unsigned int* arg5;
        unique_ptr<LocationContainer>* puVar9;
        GraphNode* pGVar10;
        unsigned long uVar11;
        unsigned long uVar12;
        unsigned long arg1;
        int iVar13;
        int iVar14;
        LocationLoader local_168;
        ColourHSL local_d8;
        unsigned int* local_c8;
        int* local_c0;
        unsigned long local_b8;
        RT7Core* local_b0;
        AssetBuilder* local_a8;
        unsigned long local_a0;
        Js5ResourceProvider* local_98;
        int local_8c;
        int local_88;
        int local_84;
        int local_80;
        int local_7c;
        int local_78;
        float local_74;
        unsigned long local_68;
        unsigned long local_60;
        GraphNode* local_58;
        unsigned long local_50;
        MapSquare* local_48;
        shared_ptr* local_40;

        return local_31 = true;
        if ((4 < (uint8_t)(char)(LODLevel)lodLevel) ||
            (uVar4 = lodSettings.GetLowestUsableLOD(), (uint8_t)uVar4 < (uint8_t)(char)(LODLevel)lodLevel)) {
            if (!arg9) {
                DestroyLocations();
            }
            return local_31;
        }
        if ((field_744 == '\0') || (cVar5 = field_752.empty(), cVar5)) {
            local_b0 = rt7Core;
            local_98 = js5ResourceProvider;
            field_712.clear();
            uVar7 = m_mapSquareX;
            iVar13 = m_mapSquareZ;
            local_40 = (shared_ptr*)m_clientCompositeData;
            clientCompositeData = (ClientCompositeData*)local_40->end();
            local_168 = LocationLoader(uVar7, iVar13, clientCompositeData);
            local_48 = this;
            this_00 = (shared_ptr<World>*)GetWorld();
            linkMap = ((World*)(*this_00).operator->())->GetLinkMap();
            cVar5 = local_168.Load(field_712, *local_98, *(PlayerVarDomain*)configProvider, *linkMap);
            if (!cVar5) {
                local_31 = false;
            } else {
                local_a8 = assetBuilder;
                uVar7 = shared_ptr::operator_cast_to_bool(local_40);
                pMVar2 = local_48;
                uVar11 = (unsigned long)((uVar7 & 255) * 4 + 4);
                local_40 = (shared_ptr*)&local_48->field_752;
                cVar5 = local_40->empty();
                local_50 = uVar11;
                if (cVar5) {
                    local_40->resize(uVar11);
                    uVar11 = local_50;
                    uVar12 = 0;
                    do {
                        pvVar8 = (vector<std::unique_ptr<LocationContainer>>*)(*local_40)[uVar12];
                        pvVar8->resize(uVar11);
                        uVar12 = uVar12 + 1;
                    } while (uVar11 != uVar12);
                }
                local_c8 = &pMVar2->m_mapSquareX;
                local_c0 = &pMVar2->m_mapSquareZ;
                iVar13 = ((uVar7 ^ 1) & 255) * 8;
                uVar7 = iVar13 + 8;
                local_68 = (unsigned long)uVar7;
                local_7c = uVar7 * 128;
                local_b8 = (unsigned long)(iVar13 + 7);
                local_a0 = 0;
                uVar11 = local_50;
                do {
                    local_78 = (int)local_68 * (int)local_a0;
                    local_74 = (float)(local_78 * 128);
                    iVar13 = 0;
                    iVar14 = 0;
                    arg1 = 0;
                    uVar12 = local_a0;
                    uVar3 = local_a0 + 1;
                    local_60 = local_a0;
                    do {
                        local_a0 = uVar3;
                        pvVar8 = (vector<std::unique_ptr<LocationContainer>>*)(*local_40)[uVar12];
                        cVar5 = ((*pvVar8)[arg1])->operator_cast_to_bool();
                        if (!cVar5) {
                            local_58 = graphics::GraphNode::Create<>();
                            pMVar2 = local_48;
                            arg5 = (unsigned int*)local_48->GetWorld();
                            local_8c = local_78;
                            local_84 = (int)local_68 * (int)local_a0 - 1;
                            local_80 = (int)local_b8 + iVar14;
                            local_88 = iVar14;
                            GetLocations(pMVar2);
                            std::make_unique<LocationContainer, ConfigProvider*&, PlayerVarDomain*&,
                                             graphics::GraphNode*&, shared_ptr<World> const&, unsigned int&,
                                             unsigned int&, int, int, int, int,
                                             eastl::vector<shared_ptr<MapSquareLocation>>&>(
                                local_d8, (PlayerVarDomain*)configProvider, playerVarDomain, local_58, *arg5, *local_c8,
                                *local_c0, local_8c, local_88, local_84, local_80);
                            pvVar8 = (vector<std::unique_ptr<LocationContainer>>*)(*local_40)[local_60];
                            puVar9 = (unique_ptr<LocationContainer>*)(*pvVar8)[arg1];
                            *puVar9 = local_d8;
                            pGVar10 = local_58;
                            pvVar8 = (vector<std::unique_ptr<LocationContainer>>*)(*local_40)[local_60];
                            puVar9 = (unique_ptr<LocationContainer>*)(*pvVar8)[arg1];
                            pGVar10->SetEntity((GraphEntity*)puVar9->get());
                            pGVar10 = local_58;
                            local_d8 = math::ColourHSL(local_74, 0.0, (float)iVar13);
                            pGVar10->Translate(local_d8);
                            pGVar10 = local_48->GetNode();
                            pGVar10->AddChild(local_58);
                            uVar11 = local_50;
                            uVar12 = local_60;
                        }
                        arg1 = arg1 + 1;
                        iVar14 = iVar14 + (int)local_68;
                        iVar13 = iVar13 + local_7c;
                        uVar3 = local_a0;
                    } while (uVar11 != arg1);
                } while (local_a0 != uVar11);
                local_48->field_744 = 1;
                local_48->field_236 = 1;
                assetBuilder = local_a8;
            }
            this = local_48;
            rt7Core = local_b0;
            js5ResourceProvider = local_98;
        }
        if (field_744 == '\0') {
            return local_31;
        }
        cVar5 = field_752.empty();
        if (!cVar5) {
            bVar6 = m_clientCompositeData->operator_cast_to_bool();
            PrioritiseLocations((unsigned int)bVar6 * 4 + 4, vector3, arg7, arg9, lodSettings);
            BuildLocations(local_31, rt7Core, js5ResourceProvider, (PlayerVarDomain*)configProvider, assetBuilder, arg8,
                           arg9, arg10);
            return local_31;
        }
        return local_31;
    }

    // 0x100412620
    void MapSquare::Destruct() {
        DestroyEnvironmentLoader();
        DestroyTerrain();
        DestroyLocations();
        DestroyPointLighting();
        SetCurrentLOD(6);
        ResetWorld();
    }

    // 0x100412670
    void MapSquare::DestroyEnvironmentLoader() {
        field_704.reset(nullptr);
        DestroyOldEnvironmentLoader();
    }

    // 0x1004126a0
    void MapSquare::DestroyTerrain() {
        long* plVar2;

        uint8_t* this_00 = &field_240;
        if (this_00->operator_cast_to_bool() != '\0') {
            plVar2 = (long*)(*this_00).operator->();
            (**(void (**)(...))(*plVar2 + 200))(plVar2);
            GetNode()->RemoveChild(((Entity*)(*this_00).operator->())->GetNode());
            this_00->reset(nullptr);
            m_initialLightProbeSubmitted = 0;
        }
        DestroyOldTerrain();
    }

    // 0x100412720
    void MapSquare::DestroyLocations() {
        bool bVar1;
        long lVar3;
        vector<eastl::pair<int, int>>* pvVar4;
        unsigned long uVar5;
        vector<std::unique_ptr<LocationContainer>>* pvVar6;
        unique_ptr* this_01;
        long* plVar7;
        unsigned long arg1;
        unsigned long uVar8;

        uint8_t* this_00 = &field_752;
        if (!(this_00->empty())) {
            lVar3 = this_00->size();
            if (lVar3 != 0) {
                arg1 = 0;
                do {
                    pvVar4 = (vector<eastl::pair<int, int>>*)(*this_00)[arg1];
                    lVar3 = pvVar4->size();
                    if (lVar3 != 0) {
                        uVar5 = 0;
                        uVar8 = 1;
                        do {
                            pvVar6 = (vector<std::unique_ptr<LocationContainer>>*)(*this_00)[arg1];
                            this_01 = (unique_ptr*)(*pvVar6)[uVar5];
                            if (std::unique_ptr::operator_cast_to_bool(this_01)) {
                                plVar7 = (long*)(*this_01).operator->();
                                (**(void (**)(...))(*plVar7 + 200))(plVar7);
                                GetNode()->RemoveChild(((Entity*)(*this_01).operator->())->GetNode());
                                pvVar6 = (vector<std::unique_ptr<LocationContainer>>*)(*this_00)[arg1];
                                ((unique_ptr<LocationContainer>*)(*pvVar6)[uVar5])->reset(nullptr);
                            }
                            pvVar4 = (vector<eastl::pair<int, int>>*)(*this_00)[arg1];
                            uVar5 = pvVar4->size();
                            bVar1 = uVar8 < uVar5;
                            uVar5 = uVar8;
                            uVar8 = (unsigned long)((int)uVar8 + 1);
                        } while (bVar1);
                    }
                    arg1 = (unsigned long)((int)arg1 + 1);
                    uVar5 = this_00->size();
                } while (arg1 < uVar5);
            }
            this_00->clear();
            field_712.clear();
            m_prioritySquare = '\0';
            m_hasBuiltPriorityZones = 0;
            field_744 = 0;
        }
    }

    // 0x100412890
    void MapSquare::DestroyPointLighting() {
        ((PointLightGridTexture*)m_mapSquarePointLights->GetLinearLookatAcceleration())
            ->Destroy(m_mapSquareX, m_mapSquareZ);
        PrepareForNewPointLights();
    }

    // 0x100412910
    void MapSquare::DestroyOldEnvironmentLoader() {
        field_784.reset(nullptr);
    }

    // 0x100412930
    void MapSquare::PrepareForNewEnvironmentLoader() {
        uint8_t* this_00 = &field_704;
        if (this_00->operator_cast_to_bool() != '\0') {
            field_784.swap(*this_00);
            this_00->reset(nullptr);
        }
    }

    // 0x100412a00
    void MapSquare::DestroyOldTerrain() {
        long* plVar2;

        uint8_t* this_00 = &field_792;
        if (this_00->operator_cast_to_bool() != '\0') {
            plVar2 = (long*)(*this_00).operator->();
            (**(void (**)(...))(*plVar2 + 200))(plVar2);
            GetNode()->RemoveChild(((Entity*)(*this_00).operator->())->GetNode());
            this_00->reset(nullptr);
        }
    }

    // 0x100412a70
    void MapSquare::PrepareForNewTerrain() {
        uint8_t* this_00 = &field_240;
        if (this_00->operator_cast_to_bool() != '\0') {
            field_792.swap(*this_00);
            this_00->reset(nullptr);
            m_initialLightProbeSubmitted = 0;
        }
    }

    // 0x100412ad0
    void MapSquare::RebuildTerrain() {
        PrepareForNewTerrain();
        SetCurrentLOD(6);
    }

    // 0x100412b00
    void MapSquare::SetTerrainBlending(bool arg1) {
        m_terrainBlending = arg1;
        RebuildTerrain();
    }

    // 0x100412b20
    void MapSquare::RebuildArea(int arg1, int arg2, int arg3, int arg4) {
        long lVar2;
        unsigned long uVar3;
        vector<eastl::pair<int, int>>* pvVar4;
        unsigned long uVar5;
        vector<std::unique_ptr<LocationContainer>>* pvVar6;
        unique_ptr<LocationContainer>* puVar7;
        long* plVar8;
        GraphNode* this_03;
        unsigned int uVar9;
        unsigned long arg1_00;

        if ((arg3 < arg1) || (arg4 < arg2)) {
            LogAssert("tileMinX <= tileMaxX && tileMinZ <= tileMaxZ",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/MapSquare.cpp",
                      231, "Min and max coords reversed");
        }
        PrepareForNewEnvironmentLoader();
        PrepareForNewPointLights();
        uint8_t* this_00 = &field_752;
        if (!(this_00->empty())) {
            lVar2 = this_00->size();
            if (lVar2 != 0) {
                arg1_00 = 0;
                do {
                    pvVar4 = (vector<eastl::pair<int, int>>*)(*this_00)[arg1_00];
                    lVar2 = pvVar4->size();
                    if (lVar2 != 0) {
                        uVar9 = 1;
                        uVar3 = 0;
                        do {
                            pvVar6 = (vector<std::unique_ptr<LocationContainer>>*)(*this_00)[arg1_00];
                            if (((*pvVar6)[uVar3])->operator_cast_to_bool()) {
                                pvVar6 = (vector<std::unique_ptr<LocationContainer>>*)(*this_00)[arg1_00];
                                puVar7 = (unique_ptr<LocationContainer>*)(*pvVar6)[uVar3];
                                if (((LocationContainer*)(*puVar7).operator->())
                                        ->OverlapsArea(arg1, arg2, arg3, arg4)) {
                                    pvVar6 = (vector<std::unique_ptr<LocationContainer>>*)(*this_00)[arg1_00];
                                    puVar7 = (unique_ptr<LocationContainer>*)(*pvVar6)[uVar3];
                                    plVar8 = (long*)(*puVar7).operator->();
                                    (**(void (**)(...))(*plVar8 + 200))(plVar8);
                                    this_03 = GetNode();
                                    pvVar6 = (vector<std::unique_ptr<LocationContainer>>*)(*this_00)[arg1_00];
                                    puVar7 = (unique_ptr<LocationContainer>*)(*pvVar6)[uVar3];
                                    this_03->RemoveChild(((Entity*)(*puVar7).operator->())->GetNode());
                                    pvVar6 = (vector<std::unique_ptr<LocationContainer>>*)(*this_00)[arg1_00];
                                    puVar7 = (unique_ptr<LocationContainer>*)(*pvVar6)[uVar3];
                                    puVar7->reset(nullptr);
                                }
                            }
                            uVar3 = (unsigned long)uVar9;
                            pvVar4 = (vector<eastl::pair<int, int>>*)(*this_00)[arg1_00];
                            uVar5 = pvVar4->size();
                            uVar9 = uVar9 + 1;
                        } while (uVar3 < uVar5);
                    }
                    arg1_00 = (unsigned long)((int)arg1_00 + 1);
                    uVar3 = this_00->size();
                } while (arg1_00 < uVar3);
            }
        }
        field_236 = 1;
        field_744 = 0;
        PrepareForNewTerrain();
        SetCurrentLOD(6);
    }

    // 0x100412d40
    void MapSquare::PrepareForNewPointLights() {
        m_mapSquarePointLights->ClearExistingLights(GetNode());
    }

    // 0x100413090
    uint8_t* MapSquare::GetTileHeight(int& arg1, int arg2, int arg3, int arg4, bool arg5,
                                      HeightOffsetType heightOffsetType) const {
        Entity* pEVar2;
        Terrain* pTVar3;
        uint8_t* puVar4;

        uint8_t* puVar5 = &field_240;
        if (puVar5->operator_cast_to_bool()) {
            pEVar2 = (Entity*)(*puVar5).operator->();
            if (pEVar2->IsAtTargetLOD()) {
                pTVar3 = (Terrain*)(*puVar5).operator->();
                puVar4 = (uint8_t*)pTVar3->GetTileHeight(arg1, arg2, arg3, arg4, arg5, heightOffsetType);
                return puVar4;
            }
        }
        puVar5 = &field_792;
        if (puVar5->operator_cast_to_bool()) {
            pEVar2 = (Entity*)(*puVar5).operator->();
            if (pEVar2->IsAtTargetLOD()) {
                pTVar3 = (Terrain*)(*puVar5).operator->();
                puVar4 = (uint8_t*)pTVar3->GetTileHeight(arg1, arg2, arg3, arg4, arg5, heightOffsetType);
                if (arg1 == -1) {
                    return DataStatus::NOTLOADED;
                }
                return puVar4;
            }
        }
        arg1 = -1;
        return DataStatus::NOTLOADED;
    }

    // 0x100413180
    uint8_t* MapSquare::GetFineHeight(int& arg1, int arg2, int arg3, int arg4, bool arg5,
                                      HeightOffsetType heightOffsetType) const {
        Entity* pEVar2;
        Terrain* pTVar3;
        uint8_t* puVar4;

        uint8_t* puVar5 = &field_240;
        if (puVar5->operator_cast_to_bool()) {
            pEVar2 = (Entity*)(*puVar5).operator->();
            if (pEVar2->IsAtTargetLOD()) {
                pTVar3 = (Terrain*)(*puVar5).operator->();
                puVar4 = (uint8_t*)pTVar3->GetFineHeight(arg1, arg2, arg3, arg4, arg5, heightOffsetType);
                return puVar4;
            }
        }
        puVar5 = &field_792;
        if (puVar5->operator_cast_to_bool()) {
            pEVar2 = (Entity*)(*puVar5).operator->();
            if (pEVar2->IsAtTargetLOD()) {
                pTVar3 = (Terrain*)(*puVar5).operator->();
                puVar4 = (uint8_t*)pTVar3->GetFineHeight(arg1, arg2, arg3, arg4, arg5, heightOffsetType);
                if (arg1 == -1) {
                    return DataStatus::NOTLOADED;
                }
                return puVar4;
            }
        }
        arg1 = -1;
        return DataStatus::NOTLOADED;
    }

    // 0x100413270
    uint32_t MapSquare::GetFineWaterDepth(int arg1, int arg2, int arg3) const {
        Entity* pEVar3;

        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* this_01 =
            (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_240;
        bool cVar1 = this_01->operator_cast_to_bool();
        if (cVar1) {
            pEVar3 = (Entity*)(*this_01).operator->();
            cVar1 = pEVar3->IsAtTargetLOD();
            if (cVar1)
                goto LAB_1004132e1;
        }
        this_01 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_792;
        cVar1 = this_01->operator_cast_to_bool();
        if (!cVar1) {
            return 4294967295;
        }
        pEVar3 = (Entity*)(*this_01).operator->();
        cVar1 = pEVar3->IsAtTargetLOD();
        if (!cVar1) {
            return 4294967295;
        }
    LAB_1004132e1:
        return ((Terrain*)(*this_01).operator->())->GetFineWaterDepth(arg1, arg2, arg3);
    }

    // 0x100413310
    uint32_t MapSquare::GetTileLink(int arg1, int arg2, int arg3) const {
        Entity* pEVar3;

        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* this_01 =
            (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_240;
        bool cVar1 = this_01->operator_cast_to_bool();
        if (cVar1) {
            pEVar3 = (Entity*)(*this_01).operator->();
            cVar1 = pEVar3->IsAtTargetLOD();
            if (cVar1)
                goto LAB_10041337e;
        }
        this_01 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_792;
        cVar1 = this_01->operator_cast_to_bool();
        if (!cVar1) {
            return 0;
        }
        pEVar3 = (Entity*)(*this_01).operator->();
        cVar1 = pEVar3->IsAtTargetLOD();
        if (!cVar1) {
            return 0;
        }
    LAB_10041337e:
        return ((Terrain*)(*this_01).operator->())->GetTileLink(arg1, arg2, arg3);
    }

    // 0x1004133d0
    uint32_t MapSquare::GetRemoveRoofID(int arg1, int arg2, int arg3) const {
        Entity* pEVar3;

        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* this_01 =
            (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_240;
        bool cVar1 = this_01->operator_cast_to_bool();
        if (cVar1) {
            pEVar3 = (Entity*)(*this_01).operator->();
            cVar1 = pEVar3->IsAtTargetLOD();
            if (cVar1)
                goto LAB_10041343e;
        }
        this_01 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_792;
        cVar1 = this_01->operator_cast_to_bool();
        if (!cVar1) {
            return 0;
        }
        pEVar3 = (Entity*)(*this_01).operator->();
        cVar1 = pEVar3->IsAtTargetLOD();
        if (!cVar1) {
            return 0;
        }
    LAB_10041343e:
        return ((Terrain*)(*this_01).operator->())->GetRemoveRoofID(arg1, arg2, arg3);
    }

    // 0x100413490
    uint8_t MapSquare::GetUnderworldData(int arg1, int arg2) const {
        uint8_t uVar2;
        Entity* pEVar3;

        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* this_01 =
            (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_240;
        bool cVar1 = this_01->operator_cast_to_bool();
        if (!cVar1) {
        LAB_1004134cb:
            this_01 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_792;
            cVar1 = this_01->operator_cast_to_bool();
            if (cVar1) {
                pEVar3 = (Entity*)(*this_01).operator->();
                cVar1 = pEVar3->IsAtTargetLOD();
                if (cVar1)
                    goto LAB_1004134f5;
            }
            uVar2 = 0;
        } else {
            pEVar3 = (Entity*)(*this_01).operator->();
            cVar1 = pEVar3->IsAtTargetLOD();
            if (!cVar1)
                goto LAB_1004134cb;
        LAB_1004134f5:
            uVar2 = ((Terrain*)(*this_01).operator->())->GetUnderworldData(arg1, arg2);
        }
        return uVar2;
    }

    // 0x100413560
    shared_ptr* MapSquare::GetHeightMap(int arg1) const {
        Entity* pEVar2;

        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* this_01 =
            (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_240;
        bool cVar1 = this_01->operator_cast_to_bool();
        if (cVar1) {
            pEVar2 = (Entity*)(*this_01).operator->();
            cVar1 = pEVar2->IsAtTargetLOD();
            if (cVar1)
                goto LAB_1004135c9;
        }
        this_01 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_792;
        cVar1 = this_01->operator_cast_to_bool();
        if (!cVar1) {
            return (shared_ptr*)&NullRawHeightMap;
        }
        pEVar2 = (Entity*)(*this_01).operator->();
        cVar1 = pEVar2->IsAtTargetLOD();
        if (!cVar1) {
            return (shared_ptr*)&NullRawHeightMap;
        }
    LAB_1004135c9:
        Terrain* this_00 = (Terrain*)(*this_01).operator->();
        return (shared_ptr*)this_00->GetHeightMap(arg1);
    }

    // 0x100413640
    shared_ptr* MapSquare::GetWaterHeights() const {
        Entity* pEVar2;

        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* this_01 =
            (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_240;
        bool cVar1 = this_01->operator_cast_to_bool();
        if (cVar1) {
            pEVar2 = (Entity*)(*this_01).operator->();
            cVar1 = pEVar2->IsAtTargetLOD();
            if (cVar1)
                goto LAB_1004136a5;
        }
        this_01 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_792;
        cVar1 = this_01->operator_cast_to_bool();
        if (!cVar1) {
            return (shared_ptr*)&NullRawWaterHeights;
        }
        pEVar2 = (Entity*)(*this_01).operator->();
        cVar1 = pEVar2->IsAtTargetLOD();
        if (!cVar1) {
            return (shared_ptr*)&NullRawWaterHeights;
        }
    LAB_1004136a5:
        Terrain* this_00 = (Terrain*)(*this_01).operator->();
        return (shared_ptr*)this_00->GetWaterHeights();
    }

    // 0x1004136d0
    void MapSquare::AddLocationHeightOffset(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7) {
        if ((&field_240)->operator_cast_to_bool() != '\0') {
            ((Terrain*)field_240.operator->())->AddLocationHeightOffset(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
        }
    }

    // 0x100413740
    void MapSquare::RemoveLocationHeightOffset(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7) {
        if ((&field_240)->operator_cast_to_bool() != '\0') {
            ((Terrain*)field_240.operator->())->RemoveLocationHeightOffset(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
        }
    }

    // 0x1004137b0
    uint64_t* MapSquare::GetLocationContainer(int arg1, int arg2) const {
        uint8_t bVar2;
        int iVar3;
        vector<eastl::pair<int, int>>* this_01;
        int iVar5;
        int iVar6;

        uint8_t* this_00 = &field_752;
        if (this_00->empty() == '\0') {
            bVar2 = m_clientCompositeData->operator_cast_to_bool();
            iVar5 = (unsigned int)(bVar2 ^ 1) * 8 + 8;
            iVar6 = arg1 / iVar5;
            iVar5 = arg2 / iVar5;
            iVar3 = this_00->size();
            if (iVar6 < iVar3) {
                this_01 = (vector<eastl::pair<int, int>>*)(*this_00)[(long)iVar6];
                iVar3 = this_01->size();
                if (iVar5 < iVar3) {
                    return (uint64_t*)(*this_01)[(long)iVar5];
                }
            }
        }
        return &LocationContainer::NullContainer;
    }

    // 0x1004138e0
    bool MapSquare::ZoneMapSame(const shared_ptr<ClientCompositeData>& clientCompositeData) const {
        unsigned int uVar1;
        bool cVar2;
        int iVar3;
        unsigned int uVar5;
        int arg4;

        long lVar4 = clientCompositeData.end();
        if (lVar4 == 0) {
            LogAssert("compositeData.get() != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/MapSquare.cpp",
                      457, "%s: no new region data supplied", "ZoneMapSame");
        }
        lVar4 = m_clientCompositeData->end();
        if (lVar4 == 0) {
            LogAssert("m_compositeData.get() != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/MapSquare.cpp",
                      458, "%s: map square has no region data to compare to.", "ZoneMapSame");
        }
        int arg3 = 0;
        do {
            arg4 = 0;
            do {
                arg4 = arg4 + 1;
                uVar1 = 0;
                do {
                    uVar5 = uVar1;
                    if (uVar5 == 8)
                        goto LAB_1004139db;
                    cVar2 = ZoneLevelsEqual((shared_ptr<ClientCompositeData>*)m_clientCompositeData,
                                            clientCompositeData, arg3, arg4, uVar5 + 1);
                    uVar1 = uVar5 + 1;
                } while (cVar2);
                iVar3 = 1;
                if (uVar5 < 8)
                    goto LAB_1004139e6;
            LAB_1004139db:
            } while (arg4 != 8);
            iVar3 = 5;
        LAB_1004139e6:
            if (iVar3 != 5)
                goto LAB_1004139fe;
            arg3 = arg3 + 1;
        } while (arg3 != 4);
        iVar3 = 2;
    LAB_1004139fe:
        return iVar3 == 2;
    }

    // 0x100413a20
    unsigned long MapSquare::ZoneLevelsEqual(const shared_ptr<ClientCompositeData>& clientCompositeData1,
                                             const shared_ptr<ClientCompositeData>& clientCompositeData2, int arg3,
                                             int arg4, int arg5) {
        bool bVar1;
        bool cVar2;
        int iVar3;
        vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul>, 10ul>,
               eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true>>* pvVar4;
        vector<eastl::fixed_vector<ClientCompositeZone, 10ul>,
               eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true>>* vector;
        vector<eastl::fixed_vector<ClientCompositeZone, 10ul>,
               eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true>>* this_00;
        vector<WorldMap::PendingLocationType>* this_01;
        vector<WorldMap::PendingLocationType>* this_02;
        ClientCompositeZone* this_03;
        ClientCompositeZone* this_04;
        uint64_t uVar5;
        unsigned long uVar6;
        bool bVar7;
        uint32_t uVar8;
        uint64_t extraout_RDX;
        uint64_t extraout_RDX_00;

        if (arg3 < 0) {
            uVar5 = 0;
            uVar8 = 0;
            if (arg3 < 0)
                goto LAB_100413a7e;
        LAB_100413a5a:
            bVar7 = (uint8_t)uVar8;
            pvVar4 =
                (vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul>, 10ul>,
                        eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true>>*)clientCompositeData2.operator->();
            iVar3 = pvVar4->size();
            bVar1 = arg3 < iVar3;
            uVar6 = (unsigned long)(((uint32_t)((int32_t)((unsigned int)uVar8 >> 8)) << 8) | (uint8_t)bVar1);
        } else {
            pvVar4 =
                (vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul>, 10ul>,
                        eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true>>*)clientCompositeData1.operator->();
            iVar3 = pvVar4->size();
            uVar5 = (((uint64_t)((int64_t)((unsigned long)extraout_RDX >> 8)) << 8) | (uint8_t)(arg3 < iVar3));
            uVar8 = (uint32_t)uVar5;
            if (-1 < arg3)
                goto LAB_100413a5a;
        LAB_100413a7e:
            bVar7 = (uint8_t)uVar5;
            uVar6 = 0;
            bVar1 = false;
        }
        if ((bVar7 & bVar1) == 1) {
            pvVar4 =
                (vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul>, 10ul>,
                        eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true>>*)clientCompositeData1.operator->();
            vector = (vector<eastl::fixed_vector<ClientCompositeZone, 10ul>,
                             eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true>>*)(*pvVar4)[(long)arg3];
            pvVar4 =
                (vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul>, 10ul>,
                        eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true>>*)clientCompositeData2.operator->();
            this_00 = (vector<eastl::fixed_vector<ClientCompositeZone, 10ul>,
                              eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true>>*)(*pvVar4)[(long)arg3];
            if (arg4 < 0) {
                bVar7 = false;
                bVar1 = false;
                if (arg4 < 0)
                    goto LAB_100413af1;
            LAB_100413ad5:
                bVar7 = bVar1;
                iVar3 = this_00->size();
                bVar1 = arg4 < iVar3;
                uVar6 = (((uint64_t)((int64_t)(uVar6 >> 8)) << 8) | (uint8_t)bVar1);
            } else {
                iVar3 = vector->size();
                bVar7 = arg4 < iVar3;
                bVar1 = bVar7;
                if (-1 < arg4)
                    goto LAB_100413ad5;
            LAB_100413af1:
                uVar6 = 0;
                bVar1 = false;
            }
            if ((bVar7 & bVar1)) {
                this_01 = (vector<WorldMap::PendingLocationType>*)(*vector)[(long)arg4];
                this_02 = (vector<WorldMap::PendingLocationType>*)(*this_00)[(long)arg4];
                if (arg5 < 0) {
                    bVar7 = false;
                    uVar8 = 0;
                    bVar1 = false;
                    if (arg5 < 0)
                        goto LAB_100413b55;
                LAB_100413b39:
                    bVar7 = bVar1;
                    iVar3 = this_02->size();
                    bVar1 = arg5 < iVar3;
                    uVar6 = (unsigned long)(((uint32_t)((int32_t)((unsigned int)uVar8 >> 8)) << 8) | (uint8_t)bVar1);
                } else {
                    iVar3 = this_01->size();
                    bVar7 = arg5 < iVar3;
                    uVar8 =
                        (uint32_t)(((uint64_t)((int64_t)((unsigned long)extraout_RDX_00 >> 8)) << 8) | (uint8_t)bVar7);
                    bVar1 = bVar7;
                    if (-1 < arg5)
                        goto LAB_100413b39;
                LAB_100413b55:
                    uVar6 = 0;
                    bVar1 = false;
                }
                if ((bVar7 & bVar1) == 1) {
                    this_03 = (ClientCompositeZone*)(*this_01)[(long)arg5];
                    this_04 = (ClientCompositeZone*)(*this_02)[(long)arg5];
                    cVar2 = this_03->IsValid();
                    if ((!cVar2) && (uVar5 = this_04->IsValid(), (char)uVar5 == '\0')) {
                        uVar6 = (((uint64_t)((int64_t)((unsigned long)uVar5 >> 8)) << 8) | (uint8_t)1);
                    } else {
                        cVar2 = this_03->IsValid();
                        if ((!cVar2) || (cVar2 = this_04->IsValid(), !cVar2)) {
                            uVar6 = 0;
                        } else {
                            uVar6 = *this_03 == *this_04;
                        }
                    }
                    goto LAB_100413bed;
                }
            }
        }
        uVar6 = (((uint64_t)((int64_t)(uVar6 >> 8)) << 8) | (uint8_t)(bVar1 ^ bVar7)) ^ 1;
    LAB_100413bed:
        return uVar6 & 18446744073709551361;
    }

    // 0x100413d40
    void MapSquare::RebuildRegion(const shared_ptr<ClientCompositeData>& clientCompositeData, bool arg2) {
        unsigned long uVar1;
        uint8_t* puVar2;
        Layout* this_00;
        Layout* pLVar4;
        unique_ptr<LocationContainer>* puVar5;
        unsigned long arg1;
        vector<std::unique_ptr<LocationContainer>>* pvVar6;
        unique_ptr<LocationContainer>* puVar7;
        long* plVar8;
        GraphNode* pGVar9;
        Entity* pEVar10;
        GraphNode* pGVar11;
        uint64_t in_register_00000011;
        int arg3;
        unsigned long arg1_00;
        unsigned long uVar12;

        PrepareForNewEnvironmentLoader();
        PrepareForNewPointLights();
        field_236 = 1;
        field_744 = 0;
        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) != 0) {
            puVar2 = &field_752;
            this_00 = (Layout*)puVar2->HeapBeginPtr();
            pLVar4 = (Layout*)puVar2->end();
            for (; this_00 != pLVar4; this_00 = this_00 + 32) {
                puVar7 = (unique_ptr<LocationContainer>*)this_00->HeapBeginPtr();
                puVar5 = (unique_ptr<LocationContainer>*)this_00->end();
                for (; puVar7 != puVar5; puVar7 = puVar7 + 8) {
                    plVar8 = (long*)(*puVar7).operator->();
                    (**(void (**)(...))(*plVar8 + 200))(plVar8);
                    pGVar9 = GetNode();
                    pEVar10 = (Entity*)(*puVar7).operator->();
                    pGVar11 = pEVar10->GetNode();
                    pGVar9->RemoveChild(pGVar11);
                }
            }
            puVar2->clear();
        }
        puVar2 = &field_752;
        if (!(puVar2->empty())) {
            arg1 = 0;
            do {
                uVar1 = arg1 + 1;
                arg1_00 = 0;
                do {
                    uVar12 = arg1_00 + 1;
                    arg3 = 0;
                    do {
                        if (!(ZoneLevelsEqual((shared_ptr<ClientCompositeData>*)m_clientCompositeData,
                                              clientCompositeData, arg3, (int)uVar1, (int)uVar12))) {
                            pvVar6 = (vector<std::unique_ptr<LocationContainer>>*)(*puVar2)[arg1];
                            if (((*pvVar6)[arg1_00])->operator_cast_to_bool()) {
                                pvVar6 = (vector<std::unique_ptr<LocationContainer>>*)(*puVar2)[arg1];
                                puVar7 = (unique_ptr<LocationContainer>*)(*pvVar6)[arg1_00];
                                plVar8 = (long*)(*puVar7).operator->();
                                (**(void (**)(...))(*plVar8 + 200))(plVar8);
                                pGVar9 = GetNode();
                                pvVar6 = (vector<std::unique_ptr<LocationContainer>>*)(*puVar2)[arg1];
                                puVar7 = (unique_ptr<LocationContainer>*)(*pvVar6)[arg1_00];
                                pEVar10 = (Entity*)(*puVar7).operator->();
                                pGVar11 = pEVar10->GetNode();
                                pGVar9->RemoveChild(pGVar11);
                                pvVar6 = (vector<std::unique_ptr<LocationContainer>>*)(*puVar2)[arg1];
                                puVar7 = (unique_ptr<LocationContainer>*)(*pvVar6)[arg1_00];
                                puVar7->reset(nullptr);
                            }
                            break;
                        }
                        arg3 = arg3 + 1;
                    } while (arg3 != 4);
                    arg1_00 = uVar12;
                } while (uVar12 != 8);
                arg1 = uVar1;
            } while (uVar1 != 8);
        }
        PrepareForNewTerrain();
        *m_clientCompositeData = clientCompositeData;
        SetCurrentLOD(6);
    }

    // 0x100414000
    void MapSquare::HideLocations(LocShape locShape) {
        unique_ptr<LocationContainer>* puVar3;
        unique_ptr<LocationContainer>* this_01;
        Layout* this_02;

        auto pLVar2 = GetParticleEffectors();
        if (pLVar2->empty() == '\0') {
            this_02 = (Layout*)pLVar2->HeapBeginPtr();
            pLVar2 = (Layout*)pLVar2->end();
            if (this_02 != pLVar2) {
                do {
                    this_01 = (unique_ptr<LocationContainer>*)this_02->HeapBeginPtr();
                    puVar3 = (unique_ptr<LocationContainer>*)this_02->end();
                    for (; this_01 != puVar3; this_01 = this_01 + 8) {
                        ((LocationContainer*)(*this_01).operator->())->HideLocations(locShape & 255);
                    }
                    this_02 = this_02 + 32;
                } while (this_02 != pLVar2);
            }
        }
    }

    // 0x1004140c0
    void MapSquare::UnhideLocations(LocShape locShape) {
        unique_ptr<LocationContainer>* puVar3;
        unique_ptr<LocationContainer>* this_01;
        Layout* this_02;

        auto pLVar2 = GetParticleEffectors();
        if (pLVar2->empty() == '\0') {
            this_02 = (Layout*)pLVar2->HeapBeginPtr();
            pLVar2 = (Layout*)pLVar2->end();
            if (this_02 != pLVar2) {
                do {
                    this_01 = (unique_ptr<LocationContainer>*)this_02->HeapBeginPtr();
                    puVar3 = (unique_ptr<LocationContainer>*)this_02->end();
                    for (; this_01 != puVar3; this_01 = this_01 + 8) {
                        ((LocationContainer*)(*this_01).operator->())->UnhideLocations(locShape & 255);
                    }
                    this_02 = this_02 + 32;
                } while (this_02 != pLVar2);
            }
        }
    }

    // 0x1004146c0
    void MapSquare::PrioritiseLocations(int arg1, const math::Vector3T<float>& vector3, int arg3, bool arg4,
                                        const LODSettings& lodSettings) {
        uint8_t bVar1;
        uint8_t bVar2;
        vector<std::unique_ptr<LocationContainer>>* this_00;
        unique_ptr<LocationContainer>* this_01;
        Entity* pEVar3;
        GraphNode* this_02;
        AABB* this_03;
        long* plVar4;
        unsigned long arg1_00;
        unsigned long arg1_01;
        float fVar5;

        if (field_236 != '\0') {
            field_220 = 0;
            field_224 = 0;
            field_228 = arg1;
            field_232 = arg1;
            if (arg3 != 0) {
                if ((arg3 & 1U) != 0) {
                    field_232 = arg1 - 1;
                }
                if ((arg3 & 4U) != 0) {
                    field_224 = 1;
                }
                if ((arg3 & 2U) != 0) {
                    field_228 = arg1 - 1;
                }
                if ((arg3 & 8U) != 0) {
                    field_220 = 1;
                }
            }
            m_prioritySquare = '\0';
            m_hasBuiltPriorityZones = 0;
            arg1_00 = (unsigned long)field_220;
            if (field_220 < field_228) {
                do {
                    arg1_01 = (unsigned long)field_224;
                    if (field_224 < field_232) {
                        do {
                            this_00 = &field_752[arg1_00];
                            this_01 = (unique_ptr<LocationContainer>*)(*this_00)[arg1_01];
                            pEVar3 = (Entity*)(*this_01).operator->();
                            this_02 = pEVar3->GetNode();
                            this_03 = (AABB*)this_02->GetWorldAABB();
                            fVar5 = (float)this_03->GetDistanceToPointXZ(vector3);
                            bVar1 = lodSettings.GetLOD((unsigned int)(long)fVar5);
                            if ((bVar1 < 5) && (bVar2 = lodSettings.GetLowestUsableLOD(), bVar1 <= bVar2)) {
                                if (bVar1 == 0) {
                                    m_prioritySquare = '\x01';
                                }
                                pEVar3 = (Entity*)(*this_01).operator->();
                                pEVar3->SetTargetLOD((unsigned int)bVar1);
                            } else if (!arg4) {
                                plVar4 = (long*)(*this_01).operator->();
                                (**(void (**)(...))(*plVar4 + 200))(plVar4);
                            }
                            arg1_01 = arg1_01 + 1;
                        } while ((long)arg1_01 < (long)field_232);
                    }
                    arg1_00 = arg1_00 + 1;
                } while ((long)arg1_00 < (long)field_228);
            }
            field_236 = 0;
        }
    }

    // 0x1004148b0
    void MapSquare::BuildLocations(bool& arg1, graphics::RT7Core* rt7Core, Js5ResourceProvider* js5ResourceProvider,
                                   ConfigProvider* configProvider, AssetBuilder* assetBuilder, unsigned int arg6,
                                   bool arg7, bool arg8) {
        bool cVar2;
        vector<std::unique_ptr<LocationContainer>>* this_00;
        unique_ptr<LocationContainer>* this_01;
        Entity* pEVar3;
        shared_ptr<World>* psVar4;
        World* pWVar5;
        LocationContainer* pLVar6;
        unsigned long arg1_00;

        unsigned long local_40 = (unsigned long)field_220;
        bool bVar1 = true;
        if (field_220 < field_228) {
            bVar1 = true;
            do {
                arg1_00 = (unsigned long)field_224;
                if (field_224 < field_232) {
                    do {
                        this_00 = &field_752[local_40];
                        this_01 = (unique_ptr<LocationContainer>*)(*this_00)[arg1_00];
                        pEVar3 = (Entity*)(*this_01).operator->();
                        cVar2 = pEVar3->GetTargetLOD();
                        if (!cVar2) {
                        LAB_1004149a1:
                            pLVar6 = (LocationContainer*)(*this_01).operator->();
                            cVar2 = pLVar6->HasStartedBuild();
                            if (!cVar2) {
                                ((Location*)(*this_01).operator->())->SetLocationLOD(true);
                                psVar4 = (shared_ptr<World>*)GetWorld();
                                pWVar5 = (World*)(*psVar4).operator->();
                                pLVar6 = (LocationContainer*)**this_01;
                                pWVar5->AddBuiltZone(*pLVar6);
                            }
                            pEVar3 = (Entity*)(*this_01).operator->();
                            cVar2 = pEVar3->IsAtTargetLOD();
                            if (!cVar2) {
                                pLVar6 = (LocationContainer*)(*this_01).operator->();
                                pLVar6->Build(*rt7Core, *js5ResourceProvider, *configProvider, *assetBuilder, arg6,
                                              arg7, arg8);
                                pEVar3 = (Entity*)(*this_01).operator->();
                                cVar2 = pEVar3->IsAtTargetLOD();
                                if (cVar2) {
                                    psVar4 = (shared_ptr<World>*)GetWorld();
                                    pWVar5 = (World*)(*psVar4).operator->();
                                    cVar2 = ((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)
                                                 pWVar5->GetBuiltZones())
                                                ->empty();
                                    if (cVar2)
                                        goto LAB_100414a7d;
                                }
                                arg1 = false;
                            }
                        LAB_100414a7d:
                            pEVar3 = (Entity*)(*this_01).operator->();
                            cVar2 = pEVar3->GetTargetLOD();
                            if (!cVar2) {
                                pEVar3 = (Entity*)(*this_01).operator->();
                                cVar2 = pEVar3->IsAtTargetLOD();
                                if (!cVar2) {
                                    bVar1 = false;
                                }
                            }
                        } else {
                            psVar4 = (shared_ptr<World>*)GetWorld();
                            pWVar5 = (World*)(*psVar4).operator->();
                            cVar2 = pWVar5->HaveAllMapSquaresFinishedHighPriorityZones();
                            if (cVar2)
                                goto LAB_1004149a1;
                            arg1 = false;
                        }
                        arg1_00 = arg1_00 + 1;
                    } while ((long)arg1_00 < (long)field_232);
                }
                local_40 = local_40 + 1;
            } while ((long)local_40 < (long)field_228);
        }
        if ((bVar1) && (m_prioritySquare != '\0')) {
            m_hasBuiltPriorityZones = 1;
        }
    }

    // 0x100414be0
    void MapSquare::SetIrradianceSHConsts(const graphics::IrradianceSHCoefConsts& irradianceSHCoefConsts,
                                          unsigned long long arg2) {
        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* this_01;
        Terrain* this_02;
        Option<float>* this_03;

        unsigned long long arg3 = FrameTime::GetCurrentTimeMS();
        field_848.SetValue(irradianceSHCoefConsts, arg2, arg3);
        if ((GetParentLocationType())->operator_cast_to_bool() != '\0') {
            this_01 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)GetParentLocationType();
            this_02 = (Terrain*)(*this_01).operator->();
            this_03 = (Option<float>*)this_02->GetLightProbe();
            ((LightProbeMaterial*)this_03->GetDefaultValue())->SetIrradianceSHConsts(irradianceSHCoefConsts);
        }
    }

    // 0x100414c80
    void MapSquare::SkipIrradianceSHConstTransition() {
        IrradianceSHCoefConsts* irradianceSHCoefConsts;

        irradianceSHCoefConsts = (IrradianceSHCoefConsts*)field_848.GetImmediateThreadPool();
        field_848.SetValue(*irradianceSHCoefConsts, 0, 0);
    }

    // 0x100414cc0
    void MapSquare::SetMultiLocState(int arg1, int arg2) {
        unique_ptr<LocationContainer>* this_01;
        unique_ptr<LocationContainer>* puVar2;

        auto this_00 = field_752.HeapBeginPtr();
        auto pLVar1 = field_752.end();
        for (; this_00 != pLVar1; this_00 = this_00 + 32) {
            this_01 = (unique_ptr<LocationContainer>*)this_00->HeapBeginPtr();
            puVar2 = (unique_ptr<LocationContainer>*)this_00->end();
            for (; this_01 != puVar2; this_01 = this_01 + 8) {
                ((LocationContainer*)(*this_01).operator->())->SetMultiLocState(arg1, arg2);
            }
        }
    }

    // 0x100414d70
    void MapSquare::IncrementMultiLocState(int arg1) {
        unique_ptr<LocationContainer>* this_01;
        unique_ptr<LocationContainer>* puVar2;

        auto this_00 = field_752.HeapBeginPtr();
        auto pLVar1 = field_752.end();
        for (; this_00 != pLVar1; this_00 = this_00 + 32) {
            this_01 = (unique_ptr<LocationContainer>*)this_00->HeapBeginPtr();
            puVar2 = (unique_ptr<LocationContainer>*)this_00->end();
            for (; this_01 != puVar2; this_01 = this_01 + 8) {
                ((LocationContainer*)(*this_01).operator->())->IncrementMultiLocState(arg1);
            }
        }
    }

    // 0x100414e10
    void MapSquare::IncrementAllMultiLocStates() {
        unique_ptr<LocationContainer>* this_01;
        unique_ptr<LocationContainer>* puVar2;

        auto this_00 = field_752.HeapBeginPtr();
        auto pLVar1 = field_752.end();
        for (; this_00 != pLVar1; this_00 = this_00 + 32) {
            this_01 = (unique_ptr<LocationContainer>*)this_00->HeapBeginPtr();
            puVar2 = (unique_ptr<LocationContainer>*)this_00->end();
            for (; this_01 != puVar2; this_01 = this_01 + 8) {
                ((LocationContainer*)(*this_01).operator->())->IncrementAllMultiLocStates();
            }
        }
    }

    // 0x1004198f0: MapSquare::GetMapSquareZ() const has the same machine code as GraphicsDefaults::GetNpcChatTimeout() const

    // 0x100431760: MapSquare::GetMapSquarePointLights() has the same machine code as Location::GetLocationType() const

} // namespace jag::game
