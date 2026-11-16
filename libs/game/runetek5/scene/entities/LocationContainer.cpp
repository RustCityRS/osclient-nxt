// libs/game/runetek5/scene/entities/LocationContainer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "LocationContainer.h"

namespace jag::game {
    // 0x1039b4df0
    int64_t LocationContainer::NullContainer;

    // 0x100029ea0: LocationContainer::IsVisibleEntity() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x1003f5190: LocationContainer::GetMinGridX() const has the same machine code as BASType::GetHillRotateWidth() const

    // 0x1003f51a0: LocationContainer::GetMinGridZ() const has the same machine code as BASType::GetHillRotateLength() const

    // 0x10040bfa0
    LocationContainer::LocationContainer(ConfigProvider* configProvider, PlayerVarDomain* playerVarDomain,
                                         graphics::GraphNode* graphNode, const shared_ptr<World>& world, int arg5,
                                         int arg6, int arg7, int arg8, int arg9, int arg10,
                                         const eastl::vector<shared_ptr<MapSquareLocation>>& mapSquareLocations)
        : Entity(graphNode, world, 9, -1) {
        uint8_t* pbVar1;
        StaticLocationLODContainer* this_00;
        uint8_t local_c8[40];
        uint64_t uStack_a0;
        uint64_t local_98;
        uint64_t uStack_90;
        uint64_t local_88;
        uint64_t uStack_80;
        uint64_t local_78;

        field_8 = &PTR__LocationContainer_100eff410;
        m_pConfigProvider = configProvider;
        field_200 = playerVarDomain;
        field_208 = 6;
        m_mapSquareX = arg5;
        m_mapSquareZ = arg6;
        m_minGridX = arg7;
        m_minGridZ = arg8;
        field_228 = arg9;
        field_232 = arg10;
        m_hasStartedBuild = 0;
        new (&field_240) eastl::vector<shared_ptr<MapSquareLocation>>();
        uint8_t* local_50 = &field_240;
        new (&field_272) shared_ptr();
        uint8_t* local_48 = &field_272;
        new (&field_288) eastl::vector<shared_ptr<Location>>();
        uint8_t* local_40 = &field_288;
        new (&field_320) eastl::vector<shared_ptr<Location>>();
        uint8_t* local_38 = &field_320;
        new (field_352) eastl::vector<shared_ptr<Location>>();
        new ((field_352 + 32)) std::array<StaticLocationLODContainer, 7ul>();
        array<LODLevel, 5ul>* this_01 = nullptr;
        do {
            local_88 = 0;
            uStack_80 = 0;
            local_98 = 0;
            uStack_90 = 0;
            local_c8._32_8_ = 0;
            uStack_a0 = 0;
            local_c8._16_8_ = 0;
            local_c8._24_8_ = 0;
            local_c8._0_8_ = 0;
            local_c8._8_8_ = 0;
            local_78 = 0;
            new (local_c8) StaticLocationLODContainer();
            pbVar1 = (uint8_t*)(*this_01)[(unsigned long)graphNode];
            this_00 = (StaticLocationLODContainer*)(*((field_352 + 32)))[(unsigned long)*pbVar1];
            graphNode = (GraphNode*)local_c8;
            *this_00 = *local_c8;
            this_01 = this_01 + 1;
        } while (this_01 != (array<LODLevel, 5ul>*)5);
        ColourHSL local_70(0.0, 0.0, 0.0);
        ColourHSL local_60((float)((field_228 - m_minGridX) + 1) * 128.0, 8192.0,
                           (float)((field_232 - m_minGridZ) + 1) * 128.0);
        new (local_c8) math::AABB(&local_70, &local_60);
        SetAABB(*local_c8);
        PrepareLocationLists(mapSquareLocations);
    }

    // 0x10040c2f0
    void
    LocationContainer::PrepareLocationLists(const eastl::vector<shared_ptr<MapSquareLocation>>& mapSquareLocations) {
        bool cVar1;
        int iVar2;
        int iVar3;
        bool cVar4;
        uint8_t bVar5;
        schar arg2;
        MapSquareLocation* pMVar7;
        long lVar8;
        LocationContainerLocation local_d0;
        LocType* local_60;
        array<StaticLocationLODContainer, 7ul>* local_50;
        shared_ptr* local_48;
        int local_38;
        uint8_t local_31;

        auto this_00 = GetWorld();
        LinkMap* local_40 = ((World*)(*this_00).operator->())->GetLinkMap();
        unsigned long arg1 = mapSquareLocations.size();
        vector<shared_ptr<MapSquareLocation>>* local_58 = (vector<shared_ptr<MapSquareLocation>>*)&field_240;
        field_240.reserve(arg1);
        auto this_02 = mapSquareLocations.HeapBeginPtr();
        auto psVar6 = mapSquareLocations.end();
        if (this_02 != psVar6) {
            local_50 = (array<StaticLocationLODContainer, 7ul>*)(field_352 + 32);
            local_48 = psVar6;
            do {
                cVar4 = shared_ptr::operator_cast_to_bool(this_02);
                if (cVar4) {
                    pMVar7 = (MapSquareLocation*)**this_02;
                    cVar4 = LocationNeedsProcessing(*pMVar7);
                    if (cVar4) {
                        lVar8 = (*this_02).operator->();
                        cVar4 = ((LocType*)(*((lVar8 + 72))).operator->())->IsMultiLoc();
                        if (!cVar4) {
                            pMVar7 = (MapSquareLocation*)**this_02;
                            bVar5 = CalculateLocationLOD(*pMVar7, *local_40);
                            local_31 = bVar5;
                            lVar8 = (*this_02).operator->();
                            *(uint8_t*)(lVar8 + 67) = bVar5;
                            lVar8 = (*this_02).operator->();
                            local_60 = (LocType*)(*((lVar8 + 72))).operator->();
                            lVar8 = (*this_02).operator->();
                            local_38 = (int)*(char*)(lVar8 + 4);
                            iVar2 = m_mapSquareX;
                            lVar8 = (*this_02).operator->();
                            cVar4 = *(char*)(lVar8 + 5);
                            iVar3 = m_mapSquareZ;
                            lVar8 = (*this_02).operator->();
                            cVar1 = *(char*)(lVar8 + 6);
                            lVar8 = (*this_02).operator->();
                            bVar5 = ((lVar8 + 8))->GetRot();
                            arg2 = local_60->GetMaxRemoveRoofLevel(*local_40, local_38, (int)cVar4 + iVar2 * 64,
                                                                   (int)cVar1 + iVar3 * 64, (unsigned int)bVar5);
                            local_d0 = LocationContainerLocation(*this_02, arg2);
                            ((vector<LocationContainerLocation>*)(*local_50)[(unsigned long)local_31])
                                ->push_back(local_d0);
                            psVar6 = local_48;
                        } else {
                            local_58->push_back(*this_02);
                        }
                    }
                }
                this_02 = this_02 + 1;
            } while (this_02 != psVar6);
        }
    }

    // 0x10040c560
    uint32_t LocationContainer::OverlapsArea(int arg1, int arg2, int arg3, int arg4) {
        uint32_t uVar2;
        int iVar3;

        if ((arg3 < arg1) || (arg4 < arg2)) {
            LogAssert("tileMinX <= tileMaxX && tileMinZ <= tileMaxZ",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/LocationContainer.cpp",
                      70, "Min and max coords reversed");
        }
        int iVar1 = m_mapSquareX * 64;
        if (field_228 + iVar1 < arg1) {
            uVar2 = 0;
        } else {
            iVar3 = m_mapSquareZ * 64;
            iVar1 = iVar1 + m_minGridX;
            uVar2 = (((uint32_t)((int32_t)((unsigned int)iVar1 >> 8)) << 8) |
                     (uint8_t)(iVar3 + m_minGridZ <= arg4 && (arg2 <= field_232 + iVar3 && iVar1 <= arg3)));
        }
        return uVar2;
    }

    // 0x10040c610
    uint32_t LocationContainer::LodLevelToPriority(LODLevel lodLevel) {
        if (4 < (uint8_t)lodLevel) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                            "entities/LocationContainer.cpp",
                            90, "LocationContainer: Unsupported lod level: %d", (unsigned long)(lodLevel & 255));
        }
        return *(uint32_t*)(&DAT_100d42c7c + (long)(char)(uint8_t)lodLevel * 4);
    }

    // 0x10040c6a0
    uint64_t LocationContainer::LocationNeedsProcessing(const MapSquareLocation& mapSquareLocation) const {
        bool cVar1;
        uint64_t uVar2;
        Logger* pLVar3;
        LogStream local_c0;

        if (((m_minGridX <= (int)mapSquareLocation.field_5) || (m_minGridX < 1)) &&
            ((int)mapSquareLocation.field_5 <= field_228)) {
            if (((m_minGridZ <= (int)mapSquareLocation.field_6) || (m_minGridZ < 1)) &&
                ((int)mapSquareLocation.field_6 <= field_232)) {
                cVar1 = (&mapSquareLocation.field_72)->operator_cast_to_bool();
                uVar2 = 1;
                if (cVar1)
                    goto LAB_10040c78f;
                pLVar3 = logger::default_logger();
                local_c0 = logger::LogStream(LOGGER_SCENE);
                ((uint8_t)pLVar3)
                    ->Log(nullptr, (LogLevel)&local_c0, 2, 14425033, 159,
                          "location.locationType == null! locationID: %d map square: %d,%d", mapSquareLocation.field_0,
                          m_mapSquareX, m_mapSquareZ);
            }
        }
        uVar2 = 0;
    LAB_10040c78f:
        return uVar2;
    }

    // 0x10040c8a0
    uint8_t LocationContainer::CalculateLocationLOD(const MapSquareLocation& mapSquareLocation,
                                                    const LinkMap& linkMap) {
        bool cVar4;
        int iVar5;
        int iVar6;
        LocShape locShape;

        uint8_t* this_00 = &mapSquareLocation.field_72;
        LocType* pLVar7 = (LocType*)(*this_00).operator->();
        uint8_t bVar1 = pLVar7->GetMinimumLODLevelOverride();
        pLVar7 = (LocType*)(*this_00).operator->();
        char cVar2 = pLVar7->GetIndoorsOverride();
        uint8_t bVar3 = mapSquareLocation.field_8->GetShape();
        if (bVar1 < 5)
            goto LAB_10040c93f;
        if (cVar2 == '\x01') {
        LAB_10040c8fb:
            bVar1 = 0;
        } else {
            locShape = (LocShape)bVar3;
            cVar4 = LocShapes::IsWallShape(locShape);
            if (!cVar4) {
                cVar4 = LocShapes::IsWallDecorShape(locShape);
                bVar1 = 0;
                if ((cVar4) || (bVar3 == 22))
                    goto LAB_10040c93f;
                cVar4 = LocShapes::IsRoofEdgeShape(locShape);
                if (!cVar4) {
                    cVar4 = LocShapes::IsRoofShape(locShape);
                    bVar1 = 3;
                    if (cVar4)
                        goto LAB_10040c93f;
                    if ((cVar2 == '\x02') || (cVar2 = IsLocationIndoors(mapSquareLocation, linkMap), !cVar2)) {
                        pLVar7 = (LocType*)(*this_00).operator->();
                        iVar5 = pLVar7->GetGridWidth(0);
                        pLVar7 = (LocType*)(*this_00).operator->();
                        iVar6 = pLVar7->GetGridLength(0);
                        bVar1 = 3 - (iVar6 * iVar5 - 2U < 3);
                        if (iVar6 * iVar5 == 1) {
                            bVar1 = 1;
                        }
                        goto LAB_10040c93f;
                    }
                    goto LAB_10040c8fb;
                }
            }
            bVar1 = 3;
        }
    LAB_10040c93f:
        bVar3 = 2;
        if (bVar1 != 3) {
            bVar3 = bVar1;
        }
        bVar1 = 0;
        if (bVar3 != 1) {
            bVar1 = bVar3;
        }
        return bVar1;
    }

    // 0x10040caf0
    bool LocationContainer::IsLocationIndoors(const MapSquareLocation& mapSquareLocation, const LinkMap& linkMap) {
        bool bVar1;
        int iVar7;
        unsigned long uVar9;
        int iVar10;

        auto pLVar8 = mapSquareLocation.field_72.operator->();
        uint8_t bVar2 = mapSquareLocation.field_8->GetRot();
        int iVar3 = pLVar8->GetGridWidth((unsigned int)bVar2);
        pLVar8 = (LocType*)mapSquareLocation.field_72.operator->();
        bVar2 = mapSquareLocation.field_8->GetRot();
        int iVar4 = pLVar8->GetGridLength((unsigned int)bVar2);
        int iVar5 = eastl::max<int>(0, (int)mapSquareLocation.field_5 - 1);
        iVar3 = eastl::min<graphics::GraphicsQuality>(63, iVar3 + mapSquareLocation.field_5 + 1);
        int iVar6 = eastl::max<int>(0, (int)mapSquareLocation.field_6 - 1);
        iVar4 = eastl::min<graphics::GraphicsQuality>(63, mapSquareLocation.field_6 + iVar4 + 1);
        if (iVar5 < iVar3) {
            do {
                iVar7 = 5;
                bVar1 = iVar6 < iVar4;
                if (iVar6 < iVar4) {
                    uVar9 = linkMap.GetTileLink((int)mapSquareLocation.field_4, m_mapSquareX * 64 + iVar5,
                                                m_mapSquareZ * 64 + iVar6);
                    iVar10 = iVar6;
                    if ((uVar9 & 4) == 0) {
                        iVar7 = 1;
                    } else {
                        do {
                            iVar10 = iVar10 + 1;
                            if (iVar4 == iVar10) {
                                iVar7 = 5;
                                if (iVar10 >= iVar4)
                                    goto LAB_10040cbdd;
                                goto LAB_10040ccba;
                            }
                            uVar9 = linkMap.GetTileLink((int)mapSquareLocation.field_4, m_mapSquareX * 64 + iVar5,
                                                        m_mapSquareZ * 64 + iVar10);
                        } while ((uVar9 & 4) != 0);
                        iVar7 = 1;
                        bVar1 = iVar10 < iVar4;
                    }
                }
                if (bVar1)
                    goto LAB_10040ccba;
            LAB_10040cbdd:
                iVar5 = iVar5 + 1;
            } while (iVar5 != iVar3);
        }
        iVar7 = 2;
    LAB_10040ccba:
        return iVar7 == 2;
    }

    // 0x10040ccd0
    void LocationContainer::UpdateLOD(StaticLocationLODContainer& staticLocationLODContainer, LODLevel lodLevel) {
        shared_ptr<CombinedLocation>* psVar2;
        shared_ptr<CombinedLocation>* this_01;

        uint8_t* this_02 = &staticLocationLODContainer.field_48;
        if (this_02->empty() == '\0') {
            this_01 = (shared_ptr<CombinedLocation>*)this_02->HeapBeginPtr();
            psVar2 = (shared_ptr<CombinedLocation>*)this_02->end();
            if (this_01 != psVar2) {
                do {
                    ((Entity*)(*this_01).operator->())->SetCurrentLOD(lodLevel & 255);
                    this_01 = this_01 + 16;
                } while (this_01 != psVar2);
            }
        }
    }

    // 0x10040cd80
    void LocationContainer::SetMultiLocState(int arg1, int arg2) {
        Location* pLVar1;

        auto this_00 = field_288.HeapBeginPtr();
        auto psVar3 = field_288.end();
        for (; this_00 != psVar3; this_00 = this_00 + 16) {
            pLVar1 = (Location*)(*this_00).operator->();
            if (pLVar1->GetParentTypeID() == arg1) {
                pLVar1 = (Location*)(*this_00).operator->();
                pLVar1->SetMultiLocState(arg2);
            }
        }
    }

    // 0x10040cea0
    void LocationContainer::IncrementMultiLocState(int arg1) {
        Location* pLVar1;

        auto this_00 = field_288.HeapBeginPtr();
        auto psVar3 = field_288.end();
        for (; this_00 != psVar3; this_00 = this_00 + 16) {
            pLVar1 = (Location*)(*this_00).operator->();
            if (pLVar1->GetParentTypeID() == arg1) {
                pLVar1 = (Location*)(*this_00).operator->();
                pLVar1->IncrementMultiLocIndex();
            }
        }
    }

    // 0x10040cf60
    void LocationContainer::IncrementAllMultiLocStates() {
        auto this_00 = field_288.HeapBeginPtr();
        auto psVar1 = field_288.end();
        for (; this_00 != psVar1; this_00 = this_00 + 16) {
            ((Location*)(*this_00).operator->())->IncrementMultiLocIndex();
        }
    }

    // 0x10040cfb0
    void LocationContainer::Build(graphics::RT7Core& rt7Core, Js5ResourceProvider& js5ResourceProvider,
                                  ConfigProvider& configProvider, AssetBuilder& assetBuilder, int arg5, bool arg6,
                                  bool arg7) {
        uint8_t bVar1;
        bool cVar4;
        AssetJobPriority assetJobPriority;
        StaticLocationLODContainer* pSVar7;
        GraphNode* this_01;
        unsigned long uVar8;
        shared_ptr<Location>* this_02;
        GraphNode* this_04;
        LocationContainer* pLVar10;
        uint8_t* this_05;
        unsigned long uVar12;

        auto plVar6 = GraphicsApp::Instance();
        bool cVar2 = (**(void (**)(...))(*plVar6 + 224))(plVar6);
        if (!cVar2) {
            LogAssert("GraphicsApp::Instance()->IsInsideMainLogic()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/LocationContainer.cpp",
                      321, nullptr);
        }
        uint8_t bVar3 = GetTargetLOD();
        LocationContainer* this_00 = (LocationContainer*)(field_352 + 32);
        bool bVar9 = true;
        long lVar11 = 0;
        do {
            bVar1 = (&g_lodLocationTypes)[lVar11];
            if (bVar1 < bVar3) {
                if (!arg6) {
                    DestructAllBuiltLocationsAtLOD((unsigned int)bVar1);
                    if (field_208 < (uint8_t)(&g_lodLocationTypes)[lVar11]) {
                        field_208 = (&g_lodLocationTypes)[lVar11];
                    }
                }
            } else {
                pLVar10 = this_00;
                pSVar7 = (StaticLocationLODContainer*)(*this_00)[(unsigned long)bVar1];
                if (arg7) {
                    assetJobPriority = LodLevelToPriority(pLVar10, (unsigned int)bVar1);
                    cVar2 = BuildAllLocationsAtLOD(rt7Core, assetBuilder, *pSVar7, assetJobPriority,
                                                   (unsigned int)(uint8_t)(&g_lodLocationTypes)[lVar11]);
                    if (!cVar2) {
                        bVar9 = false;
                    }
                } else {
                    BuildAllLocationsUncombined(*pSVar7);
                }
            }
            lVar11 = lVar11 + 1;
        } while (lVar11 != 5);
        if (bVar9) {
            cVar2 = BuildStaticUncombinableLocations(rt7Core, js5ResourceProvider, configProvider, assetBuilder, arg5);
            cVar4 = BuildDynamicLocations((vector<shared_ptr<Location>>*)this, (RT7Core*)&field_320,
                                          (Js5ResourceProvider*)rt7Core, (ConfigProvider*)js5ResourceProvider,
                                          (AssetBuilder*)configProvider, (unsigned int)assetBuilder);
            if (((BuildMultiLocations(rt7Core, js5ResourceProvider, configProvider, assetBuilder, arg5) != '\0') &&
                 (cVar4)) &&
                (cVar2)) {
                SetCurrentLOD((unsigned int)bVar3);
                field_208 = bVar3;
                lVar11 = 0;
                do {
                    pLVar10 = this_00;
                    pSVar7 =
                        (StaticLocationLODContainer*)(*this_00)[(unsigned long)(uint8_t)(&g_lodLocationTypes)[lVar11]];
                    UpdateLOD(pLVar10, pSVar7, (unsigned int)bVar3);
                    lVar11 = lVar11 + 1;
                } while (lVar11 != 5);
                this_01 = GetNode();
                this_05 = field_352;
                lVar11 = this_05->size();
                if (lVar11 != 0) {
                    uVar8 = 0;
                    uVar12 = 1;
                    do {
                        this_02 = (shared_ptr<Location>*)(*this_05)[uVar8];
                        this_04 = ((Entity*)(*this_02).operator->())->GetNode();
                        if ((this_04 != nullptr) && (cVar2 = this_04->IsAttached(), !cVar2)) {
                            this_01->AddChild(this_04);
                        }
                        uVar8 = this_05->size();
                        bVar9 = uVar12 < uVar8;
                        uVar8 = uVar12;
                        uVar12 = (unsigned long)((int)uVar12 + 1);
                    } while (bVar9);
                }
                this_01->UnionAABBWithChildren(true);
            }
        }
    }

    // 0x10040d270
    unsigned long LocationContainer::BuildAllLocationsAtLOD(graphics::RT7Core& rt7Core, AssetBuilder& assetBuilder,
                                                            StaticLocationLODContainer& staticLocationLODContainer,
                                                            AssetJobPriority assetJobPriority, LODLevel lodLevel) {
        uint8_t* this_00;
        LocationContainer* pLVar1;
        shared_ptr<BuildCombinedLocationMain>* groundDecor;
        uint32_t uVar4;
        AssetJob* pAVar6;
        long lVar7;
        shared_ptr<Location>* location;
        shared_ptr<Location>* psVar9;
        LocationContainerLocation* this_01;
        LocationContainerLocation* pLVar10;
        World* pWVar11;
        HeightMap* heightMap;
        LinkMap* linkMap;
        Logger* pLVar12;
        uint64_t in_stack_fffffffffffffec0;
        uint64_t in_stack_fffffffffffffec8;
        LocationContainer* local_110;
        shared_ptr<BuildCombinedLocationMain>* local_108;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_100;
        shared_ptr<World>* local_e8;
        AssetJobPriority local_dc;
        LocationContainer* local_d8;
        uint8_t local_cb;
        bool local_ca;
        bool local_c9;
        LogStream local_c8;

        uint32_t uVar15 = (uint32_t)((unsigned long)in_stack_fffffffffffffec0 >> 32);
        uint32_t uVar16 = (uint32_t)((unsigned long)in_stack_fffffffffffffec8 >> 32);
        StaticLocationLODContainer* pSVar13 = staticLocationLODContainer;
        bool cVar2 = staticLocationLODContainer.empty();
        unsigned long uVar8 = (((uint64_t)((int64_t)((unsigned long)pSVar13 >> 8)) << 8) | (uint8_t)1);
        if (cVar2)
            goto LAB_10040d63d;
        auto psVar5 = GetWorld();
        cVar2 = *(char*)((long)&staticLocationLODContainer.field_80 + 1);
        uint64_t uVar14 = (uint64_t)(uVar8 >> 8);
        if ((!cVar2) && (*(char*)&staticLocationLODContainer.field_80 == '\0')) {
            local_e8 = psVar5;
            cVar2 = staticLocationLODContainer.field_32->operator_cast_to_bool();
            psVar5 = local_e8;
            uVar8 = (((uint64_t)uVar14 << 8) | (uint8_t)1);
            if (cVar2)
                goto LAB_10040d63d;
            local_ca = true;
            local_c9 = true;
            local_108 = (shared_ptr<BuildCombinedLocationMain>*)staticLocationLODContainer.field_32;
            pWVar11 = (World*)(*local_e8).operator->();
            heightMap = pWVar11->GetHeightMap();
            local_d8 = this;
            pWVar11 = (World*)(*psVar5).operator->();
            linkMap = pWVar11->GetLinkMap();
            pLVar1 = local_d8;
            LoadLocationModels(local_d8, &local_ca, &local_c9, rt7Core, assetBuilder,
                               (vector<LocationContainerLocation>*)staticLocationLODContainer, assetJobPriority,
                               heightMap, linkMap);
            if ((local_ca != false) && (local_c9 != false)) {
                local_110 = pLVar1;
                local_dc = assetJobPriority;
                pWVar11 = (World*)(*local_e8).operator->();
                local_cb = pWVar11->GetBuildMode() == 3;
                bucket_make_shared<BuildCombinedLocationMain, graphics::RT7Core&, int, LocationContainer*,
                                   eastl::vector<LocationContainerLocation>&, int&, int&, bool>(
                    &local_100, (int*)rt7Core, (LocationContainer**)&local_dc,
                    (vector<LocationContainerLocation>*)&local_110, (int*)staticLocationLODContainer,
                    &pLVar1->m_mapSquareX, (bool*)&pLVar1->m_mapSquareZ);
                groundDecor = local_108;
                *local_108 = local_100;
                local_100 = shared_ptr(groundDecor);
                assetBuilder.SubmitJob(local_100);
                *(uint8_t*)&staticLocationLODContainer.field_80 = 1;
            }
        LAB_10040d58c:
            uVar8 = 0;
        } else {
            if ((*(char*)&staticLocationLODContainer.field_80 != '\0') && (!cVar2)) {
                this_00 = staticLocationLODContainer.field_32;
                pAVar6 = (AssetJob*)(*this_00).operator->();
                cVar2 = pAVar6->IsFinished();
                if (!cVar2)
                    goto LAB_10040d58c;
                pAVar6 = (AssetJob*)(*this_00).operator->();
                cVar2 = pAVar6->IsSuccessful();
                if (!cVar2) {
                    pLVar12 = logger::default_logger();
                    local_c8 = logger::LogStream(LOGGER_SCENE);
                    uVar4 = ((CommandLine*)(*this_00).operator->())->GetPos();
                    uVar14 = 0;
                    ((uint8_t)pLVar12)
                        ->Log(nullptr, (LogLevel)&local_c8, 3, 14425033, 603,
                              "LocationContainer: Combined location build (Job %d) failed: %d,%d,%d,%d (LOD: %d)",
                              (((uint64_t)uVar15 << 32) | (uint32_t)uVar4),
                              (((uint64_t)uVar16 << 32) | (uint32_t)m_mapSquareX), m_mapSquareZ, m_minGridX, m_minGridZ,
                              lodLevel & 255);
                    *(uint8_t*)&staticLocationLODContainer.field_80 = 0;
                    this_00->reset();
                } else {
                    lVar7 = (*this_00).operator->();
                    staticLocationLODContainer.field_48 = (*((lVar7 + 80)));
                    *(uint8_t*)((long)&staticLocationLODContainer.field_80 + 1) = 1;
                    local_d8 = this;
                    lVar7 = (*this_00).operator->();
                    uVar8 = ((lVar7 + 112))->size();
                    field_352->reserve(uVar8);
                    lVar7 = (*this_00).operator->();
                    location = (shared_ptr<Location>*)((lVar7 + 112))->HeapBeginPtr();
                    psVar9 = (shared_ptr<Location>*)((lVar7 + 112))->end();
                    for (; location != psVar9; location = location + 16) {
                        field_352->push_back(*location);
                    }
                    this_00->reset();
                    this_01 = (LocationContainerLocation*)staticLocationLODContainer.HeapBeginPtr();
                    pLVar10 = (LocationContainerLocation*)staticLocationLODContainer.end();
                    pLVar1 = local_d8;
                    for (; local_d8 = pLVar1, this_01 != pLVar10; this_01 = this_01 + 1) {
                        this_01->ClearBuiltData();
                        pLVar1 = local_d8;
                    }
                    cVar2 = pLVar1->field_176->operator_cast_to_bool();
                    if (cVar2) {
                        pWVar11 = (World*)(*pLVar1->field_176).operator->();
                        pWVar11->AddBuiltZone(*pLVar1);
                    }
                }
            }
            uVar8 = (((uint64_t)uVar14 << 8) | (uint8_t)1);
        }
    LAB_10040d63d:
        return uVar8 & 4294967295;
    }

    // 0x10040d6b0
    void LocationContainer::BuildAllLocationsUncombined(StaticLocationLODContainer& staticLocationLODContainer) {
        int iVar1;
        unsigned long arg1;
        shared_ptr* this_01;
        shared_ptr* psVar3;
        long lVar4;
        long lVar5;
        long lVar6;
        long lVar7;
        MakeSharedPool<Location, 256> local_98;
        shared_ptr<World>* local_88;
        schar* local_80;
        int* local_78;
        LocData* local_70;
        vector<shared_ptr<Location>>* local_68;
        shared_ptr* local_60;
        StaticLocationLODContainer* local_58;
        GraphNode* local_50;
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        bool local_31;

        bool cVar2 = staticLocationLODContainer.empty();
        if ((!cVar2) && (*(char*)((long)&staticLocationLODContainer.field_80 + 1) == '\0')) {
            arg1 = staticLocationLODContainer.size();
            local_68 = (vector<shared_ptr<Location>>*)field_352;
            field_352->reserve(arg1);
            this_01 = (shared_ptr*)staticLocationLODContainer.HeapBeginPtr();
            local_58 = staticLocationLODContainer;
            psVar3 = (shared_ptr*)staticLocationLODContainer.end();
            if (this_01 != psVar3) {
                local_60 = psVar3;
                do {
                    cVar2 = shared_ptr::operator_cast_to_bool(this_01);
                    if (cVar2) {
                        local_50 = graphics::GraphNode::Create<>();
                        local_88 = (shared_ptr<World>*)GetWorld();
                        lVar4 = (*this_01).operator->();
                        local_80 = (schar*)(lVar4 + 4);
                        local_78 = (int*)(*this_01).operator->();
                        lVar4 = (*this_01).operator->();
                        local_70 = (LocData*)(lVar4 + 8);
                        lVar4 = (*this_01).operator->();
                        lVar5 = (*this_01).operator->();
                        local_31 = (bool)(*(uint8_t*)(lVar5 + 61) ^ 1);
                        iVar1 = m_mapSquareX;
                        lVar5 = (*this_01).operator->();
                        local_44 = (int)*(char*)(lVar5 + 5) + iVar1 * 64;
                        iVar1 = m_mapSquareZ;
                        lVar5 = (*this_01).operator->();
                        local_40 = (int)*(char*)(lVar5 + 6) + iVar1 * 64;
                        lVar5 = (*this_01).operator->();
                        local_3c = (int)*(char*)(lVar5 + 5) - m_minGridX;
                        lVar5 = (*this_01).operator->();
                        local_38 = (int)*(char*)(lVar5 + 6) - m_minGridZ;
                        lVar5 = (*this_01).operator->();
                        lVar6 = (*this_01).operator->();
                        lVar7 = (*this_01).operator->();
                        MakeSharedPool<Location, 256>::MakeShared<graphics::GraphNode*&, shared_ptr<World> const&,
                                                                  signed char&, int&, LocData&, bool&, bool, int, int,
                                                                  int, int, signed char&, unsigned short&, bool&>(
                            &local_98, &local_50, local_88, local_80, local_78, local_70, (bool*)(lVar4 + 60),
                            &local_31, &local_44, &local_40, &local_3c, &local_38, (schar*)(lVar5 + 62),
                            (unsigned short*)(lVar6 + 64), (bool*)(lVar7 + 66));
                        ((Location*)local_98.operator->())->SetPlayerVarDomain(field_200, m_pConfigProvider);
                        ((Entity*)local_98.operator->())->SetTargetLOD(0);
                        local_50->SetEntity((GraphEntity*)local_98.end());
                        local_68->push_back(local_98);
                        psVar3 = local_60;
                    }
                    this_01 = this_01 + 7;
                } while (this_01 != psVar3);
            }
            *(uint8_t*)((long)&local_58->field_80 + 1) = 1;
            cVar2 = field_176->operator_cast_to_bool();
            if (cVar2) {
                ((World*)(*field_176).operator->())->AddBuiltZone(*this);
            }
        }
    }

    // 0x10040d960
    void LocationContainer::DestructAllBuiltLocationsAtLOD(LODLevel lodLevel) {
        long* plVar2;
        Entity* pEVar3;
        shared_ptr<Location>* psVar4;

        ((StaticLocationLODContainer*)(*((field_352 + 32)))[(unsigned long)lodLevel])->Destruct();
        uint8_t* this_04 = field_352;
        auto this_01 = this_04->HeapBeginPtr();
        while (psVar4 = (shared_ptr<Location>*)this_04->end(), this_01 != psVar4) {
            if (((Location*)(*this_01).operator->())->GetLocationLOD() == (char)lodLevel) {
                plVar2 = (long*)(*this_01).operator->();
                (**(void (**)(...))(*plVar2 + 200))(plVar2);
                pEVar3 = (Entity*)(*this_01).operator->();
                pEVar3->ResetWorld();
                pEVar3 = (Entity*)(*this_01).operator->();
                pEVar3->GetNode()->Detach();
                this_01 = (shared_ptr<Location>*)this_04->erase(this_01);
            } else {
                this_01 = this_01 + 16;
            }
        }
    }

    // 0x10040da20
    unsigned long LocationContainer::BuildStaticUncombinableLocations(graphics::RT7Core& rt7Core,
                                                                      Js5ResourceProvider& js5ResourceProvider,
                                                                      ConfigProvider& configProvider,
                                                                      AssetBuilder& assetBuilder, unsigned int arg5) {
        unsigned long uVar3;

        uint8_t* this_00 = field_352;
        auto this_01 = this_00->HeapBeginPtr();
        auto psVar2 = this_00->end();
        uint64_t uVar4 = (uint64_t)((unsigned long)this_00 >> 8);
        if (this_01 == psVar2) {
            uVar3 = (((uint64_t)uVar4 << 8) | (uint8_t)1);
        } else {
            uVar3 = (((uint64_t)uVar4 << 8) | (uint8_t)1);
            do {
                Location::Build(*((RT7Core*)(*this_01).operator->()), rt7Core, js5ResourceProvider, configProvider,
                                (unsigned int)assetBuilder, (PlayerVarDomain*)(unsigned long)arg5);
                if (((ModularParticleEmitterTemplate*)(*this_01).operator->())->GetNumTilesPerRow() == '\0') {
                    uVar3 = uVar3 & 255;
                } else {
                    uVar3 = 0;
                }
                this_01 = this_01 + 16;
            } while (this_01 != psVar2);
        }
        return uVar3 & 4294967295;
    }

    // 0x10040dae0
    unsigned long LocationContainer::BuildDynamicLocations(eastl::vector<shared_ptr<Location>>& locations,
                                                           graphics::RT7Core& rt7Core,
                                                           Js5ResourceProvider& js5ResourceProvider,
                                                           ConfigProvider& configProvider, AssetBuilder& assetBuilder,
                                                           unsigned int arg6) {
        bool cVar1;
        shared_ptr* shared_ptr;
        uint32_t in_register_0000008c;
        uint8_t uVar3;
        unsigned int in_stack_00000008;
        vector<shared_ptr<Location>, BucketAllocatorEASTL> local_68;
        eastl local_38;

        uint64_t local_50 = (((uint64_t)in_register_0000008c << 32) | (uint32_t)arg6);
        auto location1 = rt7Core.HeapBeginPtr();
        auto location2 = rt7Core.end();
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        local_68.vector<shared_ptr<Location> const*>(location1, location2, local_38);
        shared_ptr = (shared_ptr*)local_68.HeapBeginPtr();
        auto psVar2 = local_68.end();
        uint64_t uVar4 = (uint64_t)((unsigned long)location2 >> 8);
        if (shared_ptr == psVar2) {
            uVar3 = 1;
        } else {
            uVar3 = 1;
            do {
                cVar1 = shared_ptr::operator_cast_to_bool(shared_ptr);
                if (!cVar1) {
                    LogAssert("dynamicLocation",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/entities/LocationContainer.cpp",
                              487, nullptr);
                }
                Location::Build(*((RT7Core*)(*shared_ptr).operator->()), js5ResourceProvider, configProvider,
                                assetBuilder, (unsigned int)local_50,
                                (PlayerVarDomain*)(unsigned long)in_stack_00000008);
                cVar1 = shared_ptr::operator_cast_to_bool(shared_ptr);
                if (cVar1) {
                    cVar1 = ((ModularParticleEmitterTemplate*)(*shared_ptr).operator->())->GetNumTilesPerRow();
                    uVar4 = 0;
                    if (cVar1) {
                        uVar3 = 0;
                        uVar4 = 0;
                    }
                }
                shared_ptr = shared_ptr + 1;
            } while (shared_ptr != psVar2);
        }
        return uVar3 & 4294967295;
    }

    // 0x10040dc40
    void LocationContainer::BuildMultiLocations(graphics::RT7Core& rt7Core, Js5ResourceProvider& js5ResourceProvider,
                                                ConfigProvider& configProvider, AssetBuilder& assetBuilder,
                                                unsigned int arg5) {
        uint8_t* this_00;
        int iVar1;
        shared_ptr<MapSquareLocation>* this_01;
        long lVar3;
        long lVar4;
        long lVar5;
        long lVar6;
        GraphNode* pGVar7;
        MakeSharedPool<Location, 256> local_b8;
        shared_ptr<World>* local_a8;
        schar* local_a0;
        int* local_98;
        LocData* local_90;
        shared_ptr<MapSquareLocation>* local_88;
        int local_5c;
        int local_58;
        int local_54;
        int local_50;
        GraphNode* local_48;
        bool local_31;

        RT7Core* local_40 = (RT7Core*)&field_288;
        unsigned int local_4c = arg5;
        if (local_40->empty()) {
            this_00 = &field_240;
            if (!(this_00->empty())) {
                local_40->reserve(this_00->size());
                this_01 = (shared_ptr<MapSquareLocation>*)this_00->HeapBeginPtr();
                local_88 = (shared_ptr<MapSquareLocation>*)this_00->end();
                if (this_01 != local_88) {
                    do {
                        local_48 = graphics::GraphNode::Create<>();
                        local_a8 = (shared_ptr<World>*)GetWorld();
                        lVar3 = (*this_01).operator->();
                        local_a0 = (schar*)(lVar3 + 4);
                        local_98 = (int*)(*this_01).operator->();
                        lVar3 = (*this_01).operator->();
                        local_90 = (LocData*)(lVar3 + 8);
                        lVar3 = (*this_01).operator->();
                        lVar4 = (*this_01).operator->();
                        local_31 = (bool)(*(uint8_t*)(lVar4 + 61) ^ 1);
                        iVar1 = m_mapSquareX;
                        lVar4 = (*this_01).operator->();
                        local_5c = (int)*(char*)(lVar4 + 5) + iVar1 * 64;
                        iVar1 = m_mapSquareZ;
                        lVar4 = (*this_01).operator->();
                        local_58 = (int)*(char*)(lVar4 + 6) + iVar1 * 64;
                        lVar4 = (*this_01).operator->();
                        local_54 = (int)*(char*)(lVar4 + 5) - m_minGridX;
                        lVar4 = (*this_01).operator->();
                        local_50 = (int)*(char*)(lVar4 + 6) - m_minGridZ;
                        lVar4 = (*this_01).operator->();
                        lVar5 = (*this_01).operator->();
                        lVar6 = (*this_01).operator->();
                        MakeSharedPool<Location, 256>::MakeShared<graphics::GraphNode*&, shared_ptr<World> const&,
                                                                  signed char&, int&, LocData&, bool&, bool, int, int,
                                                                  int, int, signed char&, unsigned short&, bool&>(
                            &local_b8, &local_48, local_a8, local_a0, local_98, local_90, (bool*)(lVar3 + 60),
                            &local_31, &local_5c, &local_58, &local_54, &local_50, (schar*)(lVar4 + 62),
                            (unsigned short*)(lVar5 + 64), (bool*)(lVar6 + 66));
                        ((Location*)local_b8.operator->())->SetPlayerVarDomain(field_200, m_pConfigProvider);
                        pGVar7 = local_48;
                        pGVar7->SetEntity((GraphEntity*)local_b8.end());
                        local_40->push_back(local_b8);
                        pGVar7 = GetNode();
                        pGVar7->AddChild(local_48);
                        ((Entity*)local_b8.operator->())->SetTargetLOD(0);
                        this_01 = this_01 + 16;
                    } while (this_01 != local_88);
                }
            }
        }
        BuildDynamicLocations((vector<shared_ptr<Location>>*)this, local_40, (Js5ResourceProvider*)rt7Core,
                              (ConfigProvider*)js5ResourceProvider, (AssetBuilder*)configProvider,
                              (unsigned int)assetBuilder);
    }

    // 0x10040e1d0
    void LocationContainer::LoadLocationModels(bool& arg1, bool& arg2, graphics::RT7Core& rt7Core,
                                               AssetBuilder& assetBuilder,
                                               eastl::vector<LocationContainerLocation>& locationContainerLocations,
                                               AssetJobPriority assetJobPriority, const HeightMap& heightMap,
                                               const LinkMap& linkMap) {
        BuildRequest<graphics::Model, BuildModelMain>* this_00;
        int arg2_00;
        bool cVar1;
        uint8_t bVar2;
        shared_ptr<MapSquareLocation> sVar3;
        LocShape LVar4;
        Rotation90 RVar5;
        int iVar6;
        int iVar7;
        unsigned long uVar9;
        shared_ptr<MapSquareLocation>* this_01;
        LocType* pLVar10;
        uint8_t* puVar11;
        shared_ptr<graphics::Model>* this_02;
        NXTPixToolkit* pNVar12;
        Vector2T<int>* this_03;
        float* pfVar13;
        LocType* pLVar14;
        unsigned int uVar15;
        unsigned int arg5;
        unsigned int arg4;
        unsigned long arg1_00;

        long lVar8 = locationContainerLocations.size();
        if (lVar8 != 0) {
            uVar15 = 1;
            arg1_00 = 0;
            do {
                this_01 = &locationContainerLocations[arg1_00];
                this_00 = (BuildRequest<graphics::Model, BuildModelMain>*)(this_01 + 16);
                cVar1 = this_00->IsTaskDone();
                if (!cVar1) {
                LAB_10040e26f:
                    lVar8 = (*this_01).operator->();
                    pLVar10 = (LocType*)(*((lVar8 + 72))).operator->();
                    lVar8 = (*this_01).operator->();
                    LVar4 = ((lVar8 + 8))->GetShape();
                    lVar8 = (*this_01).operator->();
                    RVar5 = ((lVar8 + 8))->GetRot();
                    lVar8 = (*this_01).operator->();
                    puVar11 = (uint8_t*)pLVar10->GetModels(rt7Core, assetBuilder, *this_00, LVar4 & 255, RVar5 & 255,
                                                           *(bool*)(lVar8 + 60), nullptr, assetJobPriority);
                    if (puVar11 == DataStatus::NOTLOADED) {
                        arg1 = false;
                    } else if (puVar11 == DataStatus::MISSING) {
                        *(uint32_t*)(this_01 + 48) = 0;
                    } else if (puVar11 == DataStatus::READY) {
                        this_02 = (shared_ptr<graphics::Model>*)this_00->SSOBeginPtr();
                        pNVar12 = (NXTPixToolkit*)(*this_02).operator->();
                        pNVar12 = (NXTPixToolkit*)pNVar12->GetScreen();
                        this_03 = (Vector2T<int>*)pNVar12->GetScreen();
                        pfVar13 = (float*)this_03->y();
                        *(int*)(this_01 + 48) = (int)*pfVar13;
                    }
                } else {
                    cVar1 = this_00->IsEmpty();
                    if (cVar1)
                        goto LAB_10040e26f;
                }
                iVar6 = m_mapSquareX;
                lVar8 = (*this_01).operator->();
                arg4 = (int)*(char*)(lVar8 + 5) + iVar6 * 64;
                iVar6 = m_mapSquareZ;
                lVar8 = (*this_01).operator->();
                arg5 = (int)*(char*)(lVar8 + 6) + iVar6 * 64;
                lVar8 = (*this_01).operator->();
                cVar1 = *(char*)(lVar8 + 4);
                bVar2 = linkMap.IsLinkBelow(arg4, arg5);
                iVar6 = (unsigned int)bVar2 + (int)cVar1;
                if (*(int*)(this_01 + 52) == -2147483648) {
                    lVar8 = (*this_01).operator->();
                    pLVar10 = (LocType*)(*((lVar8 + 72))).operator->();
                    lVar8 = (*this_01).operator->();
                    pLVar14 = (LocType*)((lVar8 + 72))->end();
                    lVar8 = (*this_01).operator->();
                    RVar5 = ((lVar8 + 8))->GetRot();
                    lVar8 = (*this_01).operator->();
                    iVar7 = pLVar10->GetLocationHeight(*pLVar14, heightMap, iVar6, arg4, arg5, RVar5 & 255,
                                                       *(bool*)(lVar8 + 61));
                    if (iVar7 == -1) {
                        arg2 = false;
                    } else {
                        *(int*)(this_01 + 52) = iVar7;
                    }
                }
                lVar8 = (*this_01).operator->();
                pLVar10 = (LocType*)(*((lVar8 + 72))).operator->();
                iVar7 = pLVar10->GetHillChangeType();
                if (this_01[105] == (shared_ptr<MapSquareLocation>)255) {
                    if (iVar7 - 1U < 3) {
                        lVar8 = (*this_01).operator->();
                        pLVar10 = (LocType*)(*((lVar8 + 72))).operator->();
                        lVar8 = (*this_01).operator->();
                        pLVar14 = (LocType*)((lVar8 + 72))->end();
                        arg2_00 = *(int*)(this_01 + 52);
                        lVar8 = (*this_01).operator->();
                        RVar5 = ((lVar8 + 8))->GetRot();
                        lVar8 = (*this_01).operator->();
                        sVar3 = (shared_ptr<MapSquareLocation>)pLVar10->GetLocationOnFlatGround(
                            *pLVar14, arg2_00, heightMap, iVar6, arg4, arg5, RVar5 & 255, *(bool*)(lVar8 + 61));
                    } else {
                        sVar3 = (shared_ptr<MapSquareLocation>)0;
                    }
                    this_01[105] = sVar3;
                }
                cVar1 = ((this_01 + 56))->empty();
                if (cVar1) {
                    cVar1 = ((this_01 + 80))->empty();
                    if (((cVar1) && (this_01[105] == (shared_ptr<MapSquareLocation>)0)) && (iVar7 != 0)) {
                        lVar8 = (*this_01).operator->();
                        pLVar10 = (LocType*)(*((lVar8 + 72))).operator->();
                        lVar8 = (*this_01).operator->();
                        pLVar14 = (LocType*)((lVar8 + 72))->end();
                        lVar8 = (*this_01).operator->();
                        RVar5 = ((lVar8 + 8))->GetRot();
                        lVar8 = (*this_01).operator->();
                        cVar1 = pLVar10->GetHillData(*((this_01 + 56)), *((this_01 + 80)), *pLVar14, heightMap, iVar6,
                                                     arg4, arg5, RVar5 & 255, *(bool*)(lVar8 + 61));
                        if (!cVar1) {
                            arg2 = false;
                        }
                    }
                }
                arg1_00 = (unsigned long)uVar15;
                uVar9 = locationContainerLocations.size();
                uVar15 = uVar15 + 1;
            } while (arg1_00 < uVar9);
        }
    }

    // 0x10040e850
    void LocationContainer::Destruct() {
        long* plVar5;
        Entity* pEVar6;
        GraphNode* pGVar7;
        GraphNode* pGVar8;
        shared_ptr<CombinedLocation>* this_01;
        shared_ptr<CombinedLocation>* psVar9;

        StaticLocationLODContainer* this_00 =
            (StaticLocationLODContainer*)std::array<StaticLocationLODContainer, 7ul>::begin();
        StaticLocationLODContainer* pSVar2 =
            (StaticLocationLODContainer*)std::array<StaticLocationLODContainer, 7ul>::end();
        for (; this_00 != pSVar2; this_00 = this_00 + 1) {
            this_01 = (shared_ptr<CombinedLocation>*)this_00->field_48.HeapBeginPtr();
            psVar9 = (shared_ptr<CombinedLocation>*)this_00->field_48.end();
            for (; this_01 != psVar9; this_01 = this_01 + 16) {
                plVar5 = (long*)(*this_01).operator->();
                (**(void (**)(...))(*plVar5 + 200))(plVar5);
                pEVar6 = (Entity*)(*this_01).operator->();
                pEVar6->ResetWorld();
                pGVar7 = GetNode();
                pEVar6 = (Entity*)(*this_01).operator->();
                pGVar8 = pEVar6->GetNode();
                pGVar7->RemoveChild(pGVar8);
            }
            this_00->Destruct();
        }
        uint8_t* puVar1 = &field_288;
        auto psVar3 = puVar1->HeapBeginPtr();
        auto psVar4 = puVar1->end();
        for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
            plVar5 = (long*)(*psVar3).operator->();
            (**(void (**)(...))(*plVar5 + 200))(plVar5);
            pEVar6 = (Entity*)(*psVar3).operator->();
            pEVar6->ResetWorld();
            pGVar7 = GetNode();
            pEVar6 = (Entity*)(*psVar3).operator->();
            pGVar8 = pEVar6->GetNode();
            pGVar7->RemoveChild(pGVar8);
        }
        puVar1->clear();
        puVar1 = &field_320;
        psVar3 = (shared_ptr<Location>*)puVar1->HeapBeginPtr();
        psVar4 = (shared_ptr<Location>*)puVar1->end();
        for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
            plVar5 = (long*)(*psVar3).operator->();
            (**(void (**)(...))(*plVar5 + 200))(plVar5);
            pEVar6 = (Entity*)(*psVar3).operator->();
            pEVar6->ResetWorld();
            pGVar7 = GetNode();
            pEVar6 = (Entity*)(*psVar3).operator->();
            pGVar8 = pEVar6->GetNode();
            pGVar7->RemoveChild(pGVar8);
        }
        puVar1->clear();
        puVar1 = field_352;
        psVar3 = (shared_ptr<Location>*)puVar1->HeapBeginPtr();
        psVar4 = (shared_ptr<Location>*)puVar1->end();
        for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
            plVar5 = (long*)(*psVar3).operator->();
            (**(void (**)(...))(*plVar5 + 200))(plVar5);
            pEVar6 = (Entity*)(*psVar3).operator->();
            pEVar6->ResetWorld();
        }
        puVar1->clear();
        SetCurrentLOD(6);
        field_208 = 6;
        m_hasStartedBuild = 0;
    }

    // 0x10040eaf0
    void StaticLocationLODContainer::Destruct() {
        field_48.clear();
        field_80 = 0;
        uint8_t* this_01 = field_32;
        if (this_01->operator_cast_to_bool() != '\0') {
            ((BuildCombinedLocationMain*)(*this_01).operator->())->ResetLocationContainer();
            this_01->reset();
        }
    }

    // 0x10040ebb0
    long LocationContainer::ChangeLocation(const ChangeLocationRequest& changeLocationRequest) {
        uint8_t bVar1;
        char cVar2;
        int iVar3;
        LocData* pLVar5;
        Vector2T<int>* this_01;
        RotTransScale* rotTransScale;
        long lVar6;
        shared_ptr<LocTypeCustomisation>* locTypeCustomisation;
        uint8_t local_b0[64];
        MakeSharedPool<Location, 256> local_48;

        auto plVar4 = FindLocation(changeLocationRequest, false);
        new (local_b0) math::RotTransScale();
        if (plVar4 == nullptr) {
            iVar3 = -1;
        } else {
            pLVar5 = (LocData*)changeLocationRequest.GetOffset();
            bVar1 = pLVar5->GetShape();
            cVar2 = LocShapes::IsWallDecorShape((unsigned int)bVar1);
            iVar3 = -1;
            if (cVar2) {
                iVar3 = (**(void (**)(...))(*plVar4 + 384))(plVar4);
            }
            cVar2 = changeLocationRequest.OverrideTransform();
            if (!cVar2) {
                rotTransScale = &local_e8;
                (**(void (**)(...))(*plVar4 + 360))(rotTransScale, plVar4);
            } else {
                this_01 = (Vector2T<int>*)changeLocationRequest.GetOffset();
                rotTransScale = (RotTransScale*)this_01->y();
            }
            *local_b0 = *rotTransScale;
        }
        cVar2 = (changeLocationRequest.GetOrigin())->operator_cast_to_bool();
        if ((!cVar2) && (lVar6 = UnhideCombinedLocationSection(changeLocationRequest), lVar6 != 0)) {
            DeleteUncombinedLocation(field_320, changeLocationRequest, nullptr, false);
            return lVar6;
        }
        vector<shared_ptr<Location>>* local_70 = (vector<shared_ptr<Location>>*)&field_320;
        int local_54 = iVar3;
        DeleteUncombinedLocation(*local_70, changeLocationRequest, nullptr, true);
        auto local_50 = graphics::GraphNode::Create<>();
        int local_64 = changeLocationRequest.GetStickTime();
        auto this_03 = changeLocationRequest.second();
        MakeSharedPool<ChangeLocationRequest, 128>::MakeShared<ChangeLocationRequest const&>(
            (ChangeLocationRequest*)(local_b0 + 48));
        ((ModelParticleSource*)(*((local_b0 + 48))).operator->())->SetSourceModelExternalID(-1);
        auto world = GetWorld();
        int local_60 = changeLocationRequest.GetPos();
        auto pbVar7 = changeLocationRequest.GetOffset();
        bVar1 = *pbVar7;
        lVar6 = changeLocationRequest.GetOffset();
        RotTransScale local_e8((unsigned int)bVar1, (unsigned int)*(uint8_t*)(lVar6 + 1), *local_b0);
        pLVar5 = (LocData*)changeLocationRequest.GetOffset();
        cVar2 = pLVar5->GetShape();
        bool local_32 = cVar2 == '\x02';
        bool local_31 = false;
        int local_5c = this_03->GetLocalX();
        local_5c = local_5c - m_minGridX;
        int local_58 = this_03->GetLocalZ();
        local_58 = local_58 - m_minGridZ;
        WorldmapAreaMetadata* this_05 = (WorldmapAreaMetadata*)(*((local_b0 + 48))).operator->();
        locTypeCustomisation = (shared_ptr<LocTypeCustomisation>*)this_05->GetOrigin();
        MakeSharedPool<Location, 256>::MakeShared<
            graphics::GraphNode*&, shared_ptr<World> const&, int, int&, LocData, bool, bool, unsigned int const&,
            unsigned int const&, int, int, shared_ptr<ChangeLocationRequest>&, shared_ptr<LocTypeCustomisation> const&>(
            &local_48, &local_50, world, &local_60, &local_64, (LocData*)&local_e8, &local_32, &local_31,
            &this_03->field_4, &this_03->field_8, &local_5c, &local_58,
            (shared_ptr<ChangeLocationRequest>*)(local_b0 + 48), locTypeCustomisation);
        auto this_06 = local_48.operator->();
        vector<shared_ptr<Location>>* this_00 = local_70;
        this_06->SetLinkObjType(local_54);
        auto pLVar8 = local_48.operator->();
        pLVar8->BlockFadeIn();
        pLVar8 = (Location*)local_48.operator->();
        pLVar8->SetPlayerVarDomain(field_200, m_pConfigProvider);
        GraphNode* pGVar9 = local_50;
        pGVar9->SetEntity((GraphEntity*)local_48.end());
        this_00->push_back(local_48);
        pGVar9 = GetNode();
        pGVar9->AddChild(local_50);
        ((Entity*)local_48.operator->())->SetTargetLOD(0);
        MarkAsNoLongerAtTargetLOD();
        lVar6 = ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_00->back())->end();
        ((local_b0 + 48))->~shared_ptr();
        return lVar6;
    }

    // 0x10040ef10
    long LocationContainer::FindLocation(const ChangeLocationRequest& changeLocationRequest, bool arg2) {
        long lVar3;
        shared_ptr* this_00;
        uint8_t* pbVar4;
        StaticLocationLODContainer* staticLocationLODContainer;
        array<LODLevel, 5ul>* this_01;
        bool bVar6;

        auto pLVar2 = FindLocationInList(field_288, changeLocationRequest);
        LocationContainer* pLVar5 = pLVar2;
        if (!(pLVar2->operator_cast_to_bool())) {
            if (!arg2) {
                pLVar2 = (LocationContainer*)FindLocationInList(pLVar5, (vector<shared_ptr<Location>>*)&field_320,
                                                                changeLocationRequest);
                pLVar5 = pLVar2;
                if (pLVar2->operator_cast_to_bool()) {
                    lVar3 = pLVar2->end();
                    return lVar3;
                }
            }
            staticLocationLODContainer = (StaticLocationLODContainer*)field_352;
            this_00 = (shared_ptr*)FindLocationInList(pLVar5, (vector<shared_ptr<Location>>*)staticLocationLODContainer,
                                                      changeLocationRequest);
            if (!(shared_ptr::operator_cast_to_bool(this_00))) {
                this_01 = (array<LODLevel, 5ul>*)4;
                do {
                    pbVar4 = (uint8_t*)(*this_01)[(unsigned long)staticLocationLODContainer];
                    pLVar5 = (LocationContainer*)(field_352 + 32);
                    staticLocationLODContainer =
                        (StaticLocationLODContainer*)(*((field_352 + 32)))[(unsigned long)*pbVar4];
                    lVar3 = FindLocationInLOD(pLVar5, staticLocationLODContainer, changeLocationRequest);
                    if (lVar3 != 0) {
                        return lVar3;
                    }
                    bVar6 = this_01 != nullptr;
                    this_01 = this_01 - 1;
                } while (bVar6);
                lVar3 = 0;
            } else {
                lVar3 = this_00->end();
            }
        } else {
            lVar3 = pLVar2->end();
        }
        return lVar3;
    }

    // 0x10040f020
    long LocationContainer::UnhideCombinedLocationSection(const ChangeLocationRequest& changeLocationRequest) {
        uint8_t* pbVar1;
        StaticLocationLODContainer* staticLocationLODContainer;
        long lVar2;
        LocationContainer* this_01;
        bool bVar3;

        array<LODLevel, 5ul>* this_00 = (array<LODLevel, 5ul>*)4;
        ChangeLocationRequest* arg1 = changeLocationRequest;
        do {
            pbVar1 = (uint8_t*)(*this_00)[(unsigned long)arg1];
            this_01 = (LocationContainer*)(field_352 + 32);
            staticLocationLODContainer = (StaticLocationLODContainer*)(*((field_352 + 32)))[(unsigned long)*pbVar1];
            arg1 = changeLocationRequest;
            lVar2 = UnhideCombinedLocationSectionLOD(this_01, changeLocationRequest, staticLocationLODContainer);
            if (lVar2 != 0) {
                return lVar2;
            }
            bVar3 = this_00 != nullptr;
            this_00 = this_00 - 1;
        } while (bVar3);
        return 0;
    }

    // 0x10040f080
    bool LocationContainer::DeleteUncombinedLocation(eastl::vector<shared_ptr<Location>>& locations,
                                                     const ChangeLocationRequest& changeLocationRequest,
                                                     const Location* location, bool arg4) {
        long* plVar3;
        Entity* pEVar4;
        GraphNode* this_00;
        uint8_t auVar5[16];

        auto psVar1 = locations.HeapBeginPtr();
        auVar5 = locations.end();
        psVar1 = eastl::find_if<shared_ptr<Location>*, (eastl::vector<shared_ptr<Location>>&)
                                                           ->DeleteUncombinedLocation(ChangeLocationRequest const&,
                                                                                      Location const*, bool)::__0>(
            psVar1, auVar5._0_8_, auVar5._8_8_);
        auto psVar2 = locations.end();
        if (psVar1 != psVar2) {
            plVar3 = (long*)(*psVar1).operator->();
            (**(void (**)(...))(*plVar3 + 200))(plVar3);
            pEVar4 = (Entity*)(*psVar1).operator->();
            pEVar4->ResetWorld();
            this_00 = GetNode();
            pEVar4 = (Entity*)(*psVar1).operator->();
            this_00->RemoveChild(pEVar4->GetNode());
            locations.erase(psVar1);
        }
        return psVar1 != psVar2;
    }

    // 0x10040f470
    void LocationContainer::DeleteLocation(const ChangeLocationRequest& changeLocationRequest,
                                           const Location* location) {

        DeleteUncombinedLocation(field_320, changeLocationRequest, location, true);
        if (!(DeleteUncombinedLocation(field_320, changeLocationRequest, location, false))) {
            if (!(DeleteUncombinedLocation(field_288, changeLocationRequest, location, false))) {
                if (!(DeleteUncombinedLocation(*field_352, changeLocationRequest, location, false))) {
                    HideLocation(changeLocationRequest);
                }
            }
        }
    }

    // 0x10040f510
    uint64_t LocationContainer::HideLocation(const ChangeLocationRequest& changeLocationRequest) {
        bool cVar1;
        int iVar3;
        LocationContainer* pLVar5;
        uint8_t* pbVar6;
        StaticLocationLODContainer* pSVar7;
        array<LODLevel, 5ul>* this_02;
        uint64_t uVar9;
        LocationContainer* this_03;

        ChangeLocationRequest* pCVar8 = changeLocationRequest;
        int iVar2 = changeLocationRequest.GetStickTime();
        auto this_00 = field_288.HeapBeginPtr();
        auto psVar4 = field_288.end();
        uint64_t uVar10 = (uint64_t)(uint32_t)((unsigned int)iVar2 >> 8);
        for (; this_00 != psVar4; this_00 = this_00 + 16) {
            pLVar5 = (LocationContainer*)(*this_00).operator->();
            cVar1 = pLVar5->IsHidden();
            if (!cVar1) {
                if (iVar2 != -1) {
                    pLVar5 = (LocationContainer*)(*this_00).operator->();
                    iVar3 = (*pLVar5->_vptr[1]._dtor)();
                    if (iVar2 != iVar3)
                        goto LAB_10040f575;
                }
                pCVar8 = changeLocationRequest;
                cVar1 = LocationsMatch(pLVar5, changeLocationRequest, this_00, false);
                if (cVar1)
                    goto LAB_10040f6a2;
            }
        LAB_10040f575:
        }
        this_00 = (shared_ptr<Location>*)field_352->HeapBeginPtr();
        psVar4 = (shared_ptr<Location>*)field_352->end();
        do {
            if (this_00 == psVar4) {
                this_03 = (LocationContainer*)(field_352 + 32);
                pbVar6 = (uint8_t*)(*4)[(unsigned long)pCVar8];
                pLVar5 = this_03;
                pSVar7 = (StaticLocationLODContainer*)(*this_03)[(unsigned long)*pbVar6];
                pCVar8 = changeLocationRequest;
                cVar1 = HideLocationLOD(pLVar5, changeLocationRequest, pSVar7);
                uVar9 = (((uint64_t)uVar10 << 8) | (uint8_t)1);
                if (!cVar1) {
                    this_02 = (array<LODLevel, 5ul>*)3;
                    do {
                        uVar9 = (((uint64_t)((int64_t)((unsigned long)uVar9 >> 8)) << 8) |
                                 (uint8_t)(this_02 != (array<LODLevel, 5ul>*)18446744073709551615));
                        if (this_02 == (array<LODLevel, 5ul>*)18446744073709551615) {
                            return uVar9;
                        }
                        pbVar6 = (uint8_t*)(*this_02)[(unsigned long)pCVar8];
                        pLVar5 = this_03;
                        pSVar7 = (StaticLocationLODContainer*)(*this_03)[(unsigned long)*pbVar6];
                        pCVar8 = changeLocationRequest;
                        cVar1 = HideLocationLOD(pLVar5, changeLocationRequest, pSVar7);
                        this_02 = this_02 - 1;
                    } while (!cVar1);
                }
                return uVar9;
            }
            pLVar5 = (LocationContainer*)(*this_00).operator->();
            cVar1 = pLVar5->IsHidden();
            if (!cVar1) {
                if (iVar2 != -1) {
                    pLVar5 = (LocationContainer*)(*this_00).operator->();
                    iVar3 = (*pLVar5->_vptr[1]._dtor)();
                    if (iVar2 != iVar3)
                        goto LAB_10040f5f5;
                }
                pCVar8 = changeLocationRequest;
                cVar1 = LocationsMatch(pLVar5, changeLocationRequest, this_00, false);
                if (cVar1) {
                LAB_10040f6a2:
                    ((Location*)(*this_00).operator->())->Hide();
                    return 1;
                }
            }
        LAB_10040f5f5:
            this_00 = this_00 + 16;
        } while (true);
    }

    // 0x10040f730
    unsigned long LocationContainer::LocationsMatch(const ChangeLocationRequest& changeLocationRequest,
                                                    const shared_ptr<Location>& location, bool arg3) {
        bool cVar1;
        char cVar2;
        uint8_t bVar3;
        uint8_t bVar4;
        LocData* pLVar8;
        long* plVar9;
        uint64_t uVar10;

        long lVar7 = ((Location*)location.operator->())->GetServerPosition();
        int iVar5 = changeLocationRequest.GetPos();
        int iVar6 = ((HitmarkType*)location.operator->())->GetDuration();
        if (((iVar5 == iVar6) && (iVar5 = changeLocationRequest.GetLevel(), iVar5 == *(int*)(lVar7 + 4))) &&
            (iVar5 = changeLocationRequest.GetMaxLineWidth(), iVar5 == *(int*)(lVar7 + 8))) {
            if (arg3) {
                pLVar8 = (LocData*)changeLocationRequest.GetOffset();
                cVar1 = pLVar8->GetRot();
                plVar9 = (long*)location.operator->();
                cVar2 = (**(void (**)(...))(*plVar9 + 352))(plVar9);
                if (cVar1 != cVar2) {
                    return 0;
                }
            }
            pLVar8 = (LocData*)changeLocationRequest.GetOffset();
            bVar3 = pLVar8->GetShape();
            iVar5 = LocShapes::GetLayer((unsigned int)bVar3);
            plVar9 = (long*)location.operator->();
            bVar3 = (**(void (**)(...))(*plVar9 + 344))(plVar9);
            iVar6 = LocShapes::GetLayer((unsigned int)bVar3);
            if (iVar5 == iVar6) {
                pLVar8 = (LocData*)changeLocationRequest.GetOffset();
                bVar3 = pLVar8->GetShape();
                bVar3 = LocShapes::IsAlternativePieceShape((unsigned int)bVar3);
                plVar9 = (long*)location.operator->();
                bVar4 = (**(void (**)(...))(*plVar9 + 344))(plVar9);
                uVar10 = LocShapes::IsAlternativePieceShape((unsigned int)bVar4);
                return (uint8_t)uVar10 ^ bVar3 ^ 1;
            }
        }
        return 0;
    }

    // 0x10040f860
    uint64_t LocationContainer::HideLocationLOD(const ChangeLocationRequest& changeLocationRequest,
                                                StaticLocationLODContainer& staticLocationLODContainer) {
        uint8_t bVar2;
        int arg1;
        int arg2;
        int arg3;
        int arg4;
        shared_ptr<CombinedLocation>* this_00;
        shared_ptr<CombinedLocation>* psVar3;
        CombinedLocation* this_01;
        uint64_t uVar4;

        uint8_t* this_03 = &staticLocationLODContainer.field_48;
        if (this_03->empty() == '\0') {
            this_00 = (shared_ptr<CombinedLocation>*)this_03->HeapBeginPtr();
            psVar3 = (shared_ptr<CombinedLocation>*)this_03->end();
            if (this_00 != psVar3) {
                do {
                    this_01 = (CombinedLocation*)(*this_00).operator->();
                    arg1 = changeLocationRequest.GetStickTime();
                    arg2 = changeLocationRequest.GetPos();
                    arg3 = changeLocationRequest.GetLevel();
                    arg4 = changeLocationRequest.GetMaxLineWidth();
                    bVar2 = ((LocData*)changeLocationRequest.GetOffset())->GetShape();
                    uVar4 = this_01->HideActiveSection(arg1, arg2, arg3, arg4, (unsigned int)bVar2);
                    if ((char)uVar4 != '\0') {
                        return uVar4;
                    }
                    this_00 = this_00 + 16;
                } while (this_00 != psVar3);
                return uVar4;
            }
        }
        return 0;
    }

    // 0x10040f940
    void LocationContainer::HideLocations(LocShape locShape) {
        Location* pLVar1;
        uint8_t* pbVar2;
        long lVar3;
        CombinedLocation* this_00;
        bool cVar4;
        long* plVar6;
        shared_ptr<CombinedLocation>* psVar7;
        shared_ptr<CombinedLocation>* this_01;
        uint32_t in_register_00000034;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_03;

        unsigned long arg1 = (((uint64_t)in_register_00000034 << 32) | (uint32_t)locShape);
        auto psVar8 = field_288.HeapBeginPtr();
        auto psVar5 = field_288.end();
        for (; psVar8 != psVar5; psVar8 = psVar8 + 16) {
            pLVar1 = (Location*)(*psVar8).operator->();
            cVar4 = pLVar1->IsHidden();
            if (!cVar4) {
                plVar6 = (long*)(*psVar8).operator->();
                cVar4 = (**(void (**)(...))(*plVar6 + 344))(plVar6);
                if (cVar4 == (char)locShape) {
                    pLVar1 = (Location*)(*psVar8).operator->();
                    pLVar1->Hide();
                }
            }
        }
        psVar8 = (shared_ptr<Location>*)field_352->HeapBeginPtr();
        psVar5 = (shared_ptr<Location>*)field_352->end();
        for (; psVar8 != psVar5; psVar8 = psVar8 + 16) {
            pLVar1 = (Location*)(*psVar8).operator->();
            cVar4 = pLVar1->IsHidden();
            if (!cVar4) {
                plVar6 = (long*)(*psVar8).operator->();
                cVar4 = (**(void (**)(...))(*plVar6 + 344))(plVar6);
                if (cVar4 == (char)locShape) {
                    pLVar1 = (Location*)(*psVar8).operator->();
                    pLVar1->Hide();
                }
            }
        }
        array<LODLevel, 5ul>* this_02 = nullptr;
        do {
            pbVar2 = (uint8_t*)(*this_02)[arg1];
            arg1 = (unsigned long)*pbVar2;
            lVar3 = (*((field_352 + 32)))[arg1];
            this_03 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(lVar3 + 48);
            cVar4 = this_03->empty();
            if (!cVar4) {
                this_01 = (shared_ptr<CombinedLocation>*)this_03->HeapBeginPtr();
                psVar7 = (shared_ptr<CombinedLocation>*)this_03->end();
                for (; this_01 != psVar7; this_01 = this_01 + 16) {
                    this_00 = (CombinedLocation*)(*this_01).operator->();
                    arg1 = (unsigned long)(locShape & 255);
                    this_00->HideSection(locShape & 255);
                }
            }
            this_02 = this_02 + 1;
        } while (this_02 != (array<LODLevel, 5ul>*)5);
    }

    // 0x10040fad0
    void LocationContainer::UnhideLocations(LocShape locShape) {
        Location* pLVar1;
        uint8_t* pbVar2;
        long lVar3;
        CombinedLocation* this_00;
        bool cVar4;
        long* plVar6;
        shared_ptr<CombinedLocation>* psVar7;
        shared_ptr<CombinedLocation>* this_01;
        uint32_t in_register_00000034;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_03;
        bool bVar9;

        unsigned long arg1 = (((uint64_t)in_register_00000034 << 32) | (uint32_t)locShape);
        auto psVar8 = field_288.HeapBeginPtr();
        auto psVar5 = field_288.end();
        for (; psVar8 != psVar5; psVar8 = psVar8 + 16) {
            pLVar1 = (Location*)(*psVar8).operator->();
            cVar4 = pLVar1->IsHidden();
            if (cVar4) {
                plVar6 = (long*)(*psVar8).operator->();
                cVar4 = (**(void (**)(...))(*plVar6 + 344))(plVar6);
                if (cVar4 == (char)locShape) {
                    pLVar1 = (Location*)(*psVar8).operator->();
                    pLVar1->Unhide();
                }
            }
        }
        psVar8 = (shared_ptr<Location>*)field_352->HeapBeginPtr();
        psVar5 = (shared_ptr<Location>*)field_352->end();
        for (; psVar8 != psVar5; psVar8 = psVar8 + 16) {
            pLVar1 = (Location*)(*psVar8).operator->();
            cVar4 = pLVar1->IsHidden();
            if (cVar4) {
                plVar6 = (long*)(*psVar8).operator->();
                cVar4 = (**(void (**)(...))(*plVar6 + 344))(plVar6);
                if (cVar4 == (char)locShape) {
                    pLVar1 = (Location*)(*psVar8).operator->();
                    pLVar1->Unhide();
                }
            }
        }
        array<LODLevel, 5ul>* this_02 = (array<LODLevel, 5ul>*)4;
        do {
            pbVar2 = (uint8_t*)(*this_02)[arg1];
            arg1 = (unsigned long)*pbVar2;
            lVar3 = (*((field_352 + 32)))[arg1];
            this_03 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(lVar3 + 48);
            cVar4 = this_03->empty();
            if (!cVar4) {
                this_01 = (shared_ptr<CombinedLocation>*)this_03->HeapBeginPtr();
                psVar7 = (shared_ptr<CombinedLocation>*)this_03->end();
                for (; this_01 != psVar7; this_01 = this_01 + 16) {
                    this_00 = (CombinedLocation*)(*this_01).operator->();
                    arg1 = (unsigned long)(locShape & 255);
                    this_00->UnhideSection(locShape & 255);
                }
            }
            bVar9 = this_02 != nullptr;
            this_02 = this_02 - 1;
        } while (bVar9);
    }

    // 0x10040fc60
    uint64_t
    LocationContainer::UnhideCombinedLocationSectionLOD(const ChangeLocationRequest& changeLocationRequest,
                                                        StaticLocationLODContainer& staticLocationLODContainer) {
        Rotation90 rotation90;
        shared_ptr<CombinedLocation>* this_00;
        LocData* pLVar2;
        shared_ptr local_68;
        uint64_t local_58;
        shared_ptr<CombinedLocation>* local_50;
        uint64_t local_48;
        int local_40;
        int local_3c;
        LocShape local_38;
        uint8_t local_31;

        uint8_t* this_01 = &staticLocationLODContainer.field_48;
        bool cVar1 = this_01->empty();
        if (!cVar1) {
            this_00 = (shared_ptr<CombinedLocation>*)this_01->HeapBeginPtr();
            local_50 = (shared_ptr<CombinedLocation>*)this_01->end();
            local_31 = this_00 == local_50;
            while (!local_31) {
                local_58 = (*this_00).operator->();
                local_40 = changeLocationRequest.GetStickTime();
                local_3c = changeLocationRequest.GetPos();
                local_38 = changeLocationRequest.GetLevel();
                rotation90 = changeLocationRequest.GetMaxLineWidth();
                pLVar2 = (LocData*)changeLocationRequest.GetOffset();
                pLVar2->GetShape();
                pLVar2 = (LocData*)changeLocationRequest.GetOffset();
                pLVar2->GetRot();
                CombinedLocation::UnhideActiveSection((int)&local_68, (int)local_58, local_40, local_3c, local_38,
                                                      rotation90);
                cVar1 = shared_ptr::operator_cast_to_bool(&local_68);
                if (cVar1) {
                    local_48 = this_00->end();
                    break;
                }
                this_00 = this_00 + 16;
                local_31 = this_00 == local_50;
            }
            if ((local_31 & 1) == 0) {
                return local_48;
            }
        }
        return 0;
    }

    // 0x10040fd90
    unsigned long LocationContainer::ResetLocation(const ChangeLocationRequest& changeLocationRequest) {
        int iVar3;
        shared_ptr<Location>* location;
        long* plVar5;
        Entity* pEVar6;
        GraphNode* this_01;
        LocationContainer* this_02;
        uint64_t unaff_R13;

        long lVar4 = UnhideCombinedLocationSection(changeLocationRequest);
        bool bVar8 = lVar4 != 0;
        uint64_t uVar7 = (uint64_t)((unsigned long)unaff_R13 >> 8);
        uint8_t* this_00 = &field_320;
        int iVar2 = this_00->size();
        if (0 < iVar2) {
            iVar2 = 0;
            do {
                this_02 = (LocationContainer*)this_00;
                location = (shared_ptr<Location>*)(*this_00)[(long)iVar2];
                if (LocationsMatch(this_02, changeLocationRequest, location, false) != '\0') {
                    plVar5 = (long*)(*location).operator->();
                    (**(void (**)(...))(*plVar5 + 200))(plVar5);
                    pEVar6 = (Entity*)(*location).operator->();
                    pEVar6->ResetWorld();
                    this_01 = GetNode();
                    pEVar6 = (Entity*)(*location).operator->();
                    this_01->RemoveChild(pEVar6->GetNode());
                    lVar4 = this_00->HeapBeginPtr();
                    this_00->erase((shared_ptr<Location>*)((long)iVar2 * 16 + lVar4));
                    iVar2 = iVar2 - 1;
                    uVar7 = (uint64_t)((unsigned long)this_01 >> 8);
                    bVar8 = true;
                }
                iVar2 = iVar2 + 1;
                iVar3 = this_00->size();
            } while (iVar2 < iVar3);
        }
        return bVar8 & 4294967295;
    }

    // 0x10040feb0
    void LocationContainer::ResetArea(const CoordFine& coordFine1, const CoordFine& coordFine2) {
        uint8_t* pbVar1;
        StaticLocationLODContainer* staticLocationLODContainer;
        LocationContainer* this_01;
        bool bVar2;

        CoordFine* arg1 = coordFine1;
        ResetAllChangedAreas(coordFine1, coordFine2);
        array<LODLevel, 5ul>* this_00 = (array<LODLevel, 5ul>*)4;
        do {
            pbVar1 = (uint8_t*)(*this_00)[(unsigned long)arg1];
            this_01 = (LocationContainer*)(field_352 + 32);
            staticLocationLODContainer = (StaticLocationLODContainer*)(*((field_352 + 32)))[(unsigned long)*pbVar1];
            arg1 = coordFine1;
            ResetLODArea(this_01, coordFine1, coordFine2, staticLocationLODContainer);
            bVar2 = this_00 != nullptr;
            this_00 = this_00 - 1;
        } while (bVar2);
    }

    // 0x10040ff10
    void LocationContainer::ResetAllChangedAreas(const CoordFine& coordFine1, const CoordFine& coordFine2) {
        float fVar1;
        int iVar3;
        shared_ptr<Location>* this_01;
        Entity* this_02;
        GraphNode* pGVar4;
        Layout* this_03;
        float* pfVar5;
        long lVar6;

        uint8_t* this_00 = &field_320;
        LocationContainer* this_04 = (LocationContainer*)this_00;
        int iVar2 = this_00->size();
        if (0 < iVar2) {
            iVar2 = 0;
            do {
                this_01 = (shared_ptr<Location>*)(*this_00)[(long)iVar2];
                this_02 = (Entity*)**this_01;
                pGVar4 = this_02->GetNode();
                this_03 = (Layout*)pGVar4->GetWorldTranslation();
                iVar3 = this_02->GetDuration();
                if (iVar3 <= (int)coordFine2.field_0) {
                    iVar3 = this_02->GetDuration();
                    if ((int)coordFine1.field_0 <= iVar3) {
                        pfVar5 = (float*)this_03->SSOBeginPtr();
                        fVar1 = *pfVar5;
                        pfVar5 = (float*)coordFine1.field_4.SSOBeginPtr();
                        if (*pfVar5 <= fVar1) {
                            pfVar5 = (float*)this_03->SSOBeginPtr();
                            fVar1 = *pfVar5;
                            pfVar5 = (float*)coordFine2.field_4.SSOBeginPtr();
                            if (fVar1 < *pfVar5 || fVar1 == *pfVar5) {
                                pfVar5 = (float*)this_03->second();
                                fVar1 = *pfVar5;
                                pfVar5 = (float*)coordFine1.field_4.second();
                                if (*pfVar5 <= fVar1) {
                                    pfVar5 = (float*)this_03->second();
                                    fVar1 = *pfVar5;
                                    pfVar5 = (float*)coordFine2.field_4.second();
                                    if (fVar1 < *pfVar5 || fVar1 == *pfVar5) {
                                        this_02->GatherDrawableElements();
                                        this_02->ResetWorld();
                                        pGVar4 = GetNode();
                                        pGVar4->RemoveChild(this_02->GetNode());
                                        lVar6 = this_00->HeapBeginPtr();
                                        this_00->erase((shared_ptr<Location>*)((long)iVar2 * 16 + lVar6));
                                        iVar2 = iVar2 - 1;
                                    }
                                }
                            }
                        }
                    }
                }
                iVar2 = iVar2 + 1;
                this_04 = (LocationContainer*)this_00;
                iVar3 = this_00->size();
            } while (iVar2 < iVar3);
        }
        ResetChangedAreasFromList(this_04, (vector<shared_ptr<Location>>*)field_352, coordFine2, coordFine1);
        ResetChangedAreasFromList(this_04, (vector<shared_ptr<Location>>*)&field_288, coordFine2, coordFine1);
    }

    // 0x100410110
    void LocationContainer::ResetLODArea(const CoordFine& coordFine1, const CoordFine& coordFine2,
                                         StaticLocationLODContainer& staticLocationLODContainer) {
        shared_ptr<CombinedLocation>* psVar2;
        shared_ptr<CombinedLocation>* this_01;

        uint8_t* this_02 = &staticLocationLODContainer.field_48;
        if (this_02->empty() == '\0') {
            this_01 = (shared_ptr<CombinedLocation>*)this_02->HeapBeginPtr();
            psVar2 = (shared_ptr<CombinedLocation>*)this_02->end();
            for (; this_01 != psVar2; this_01 = this_01 + 16) {
                ((CombinedLocation*)(*this_01).operator->())->UnhideActiveSectionsArea(coordFine1, coordFine2);
            }
        }
    }

    // 0x1004101c0
    void LocationContainer::ResetChangedAreasFromList(const eastl::vector<shared_ptr<Location>>& locations,
                                                      const CoordFine& coordFine1, const CoordFine& coordFine2) {
        float fVar1;
        int iVar3;
        Location* this_01;
        GraphNode* this_02;
        Layout* this_03;
        float* pfVar5;

        auto this_00 = locations.HeapBeginPtr();
        auto psVar4 = locations.end();
        if (this_00 != psVar4) {
            do {
                this_01 = (Location*)**this_00;
                if (this_01->IsHidden() != '\0') {
                    iVar3 = this_01->GetDuration();
                    if (iVar3 <= (int)coordFine1.field_0) {
                        iVar3 = this_01->GetDuration();
                        if ((int)coordFine2.field_0 <= iVar3) {
                            this_02 = this_01->GetNode();
                            this_03 = (Layout*)this_02->GetWorldTranslation();
                            pfVar5 = (float*)this_03->SSOBeginPtr();
                            fVar1 = *pfVar5;
                            pfVar5 = (float*)coordFine2.field_4.SSOBeginPtr();
                            if (*pfVar5 <= fVar1) {
                                pfVar5 = (float*)this_03->SSOBeginPtr();
                                fVar1 = *pfVar5;
                                pfVar5 = (float*)coordFine1.field_4.SSOBeginPtr();
                                if (fVar1 < *pfVar5 || fVar1 == *pfVar5) {
                                    pfVar5 = (float*)this_03->second();
                                    fVar1 = *pfVar5;
                                    pfVar5 = (float*)coordFine2.field_4.second();
                                    if (*pfVar5 <= fVar1) {
                                        pfVar5 = (float*)this_03->second();
                                        fVar1 = *pfVar5;
                                        pfVar5 = (float*)coordFine1.field_4.second();
                                        if (fVar1 < *pfVar5 || fVar1 == *pfVar5) {
                                            this_01->Unhide();
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                this_00 = this_00 + 16;
            } while (this_00 != psVar4);
        }
    }

    // 0x100410320
    long* LocationContainer::AnimateLocation(const ChangeLocationRequest& changeLocationRequest) {
        uint32_t uVar2;
        uint32_t uVar3;
        uint32_t uVar4;
        long* plVar6;
        Logger* pLVar7;
        uint8_t local_148[272];

        auto plVar5 = FindLocation(changeLocationRequest, false);
        if (plVar5 == nullptr) {
            plVar5 = nullptr;
        } else {
            if (!((**(void (**)(...))(*plVar5 + 312))(plVar5))) {
                new (local_148) ChangeLocationRequest(changeLocationRequest);
                local_148->SetSourceModelExternalID((**(void (**)(...))(*plVar5 + 304))(plVar5));
                plVar6 = (long*)ChangeLocation(*local_148);
                if (plVar6 != nullptr) {
                    if (!((**(void (**)(...))(*plVar6 + 312))(plVar6))) {
                        pLVar7 = logger::default_logger();
                        new ((local_148 + 128)) logger::LogStream(LOGGER_SCENE);
                        ((uint8_t)pLVar7)
                            ->Log(nullptr, (int)local_148 + 128, 2, 14425033, 1133,
                                  "Got unanimatable location when trying to changeLocation to animate");
                        ((local_148 + 128))->~LogStream();
                    }
                    local_148._124_4_ = local_148->GetUIHeight();
                    local_148._120_4_ = local_148->GetSeqDelay();
                    uVar2 = changeLocationRequest.GetLoopBehaviour();
                    uVar3 = changeLocationRequest.GetNumVerts();
                    (**(void (**)(...))(*plVar6 + 320))(plVar6, local_148._124_4_, local_148._120_4_, uVar2, uVar3);
                }
            } else {
                local_148._124_4_ = changeLocationRequest.GetUIHeight();
                uVar2 = changeLocationRequest.GetSeqDelay();
                uVar3 = changeLocationRequest.GetLoopBehaviour();
                uVar4 = changeLocationRequest.GetNumVerts();
                (**(void (**)(...))(*plVar5 + 320))(plVar5, local_148._124_4_, uVar2, uVar3, uVar4);
            }
        }
        return plVar5;
    }

    // 0x100410540
    shared_ptr<Location>* LocationContainer::FindLocationInList(const eastl::vector<shared_ptr<Location>>& locations,
                                                                const ChangeLocationRequest& changeLocationRequest) {
        bool bVar1;
        bool cVar2;
        LocationContainer* this_01;
        shared_ptr<Location>* psVar4;
        shared_ptr<Location>* unaff_R13;

        auto this_00 = locations.HeapBeginPtr();
        auto psVar3 = locations.end();
        do {
            if (this_00 == psVar3) {
                return (shared_ptr<Location>*)&Location::NullLocation;
            }
            this_01 = (LocationContainer*)(*this_00).operator->();
            cVar2 = this_01->IsHidden();
            if (!cVar2) {
                bVar1 = false;
                cVar2 = LocationsMatch(this_01, changeLocationRequest, this_00, false);
                psVar4 = this_00;
                if (!cVar2)
                    goto LAB_1004105ab;
            } else {
            LAB_1004105ab:
                bVar1 = true;
                psVar4 = unaff_R13;
            }
            if (!bVar1) {
                return psVar4;
            }
            this_00 = this_00 + 16;
            unaff_R13 = psVar4;
        } while (true);
    }

    // 0x1004105e0
    uint64_t LocationContainer::FindLocationInLOD(StaticLocationLODContainer& staticLocationLODContainer,
                                                  const ChangeLocationRequest& changeLocationRequest) {
        uint8_t bVar1;
        int arg1;
        int arg2;
        int arg3;
        CombinedLocation* this_01;
        shared_ptr* this_03;

        auto this_00 = staticLocationLODContainer.field_48.HeapBeginPtr();
        auto psVar3 = staticLocationLODContainer.field_48.end();
        while (true) {
            if (this_00 == psVar3) {
                return 0;
            }
            this_01 = (CombinedLocation*)(*this_00).operator->();
            arg1 = changeLocationRequest.GetPos();
            arg2 = changeLocationRequest.GetLevel();
            arg3 = changeLocationRequest.GetMaxLineWidth();
            bVar1 = ((LocData*)changeLocationRequest.GetOffset())->GetShape();
            this_03 = this_01->FindActiveSection(arg1, arg2, arg3, (unsigned int)bVar1);
            if (shared_ptr::operator_cast_to_bool(this_03) != '\0')
                break;
            this_00 = this_00 + 16;
        }
        return this_03->end();
    }

    // 0x1004106c0
    long LocationContainer::FindLocation(const CoordGrid& coordGrid, int arg2) {
        long lVar3;
        shared_ptr* this_00;
        uint8_t* pbVar4;
        StaticLocationLODContainer* staticLocationLODContainer;
        array<LODLevel, 5ul>* this_01;
        bool bVar6;

        auto pLVar2 = FindLocationInList(field_288, coordGrid, arg2);
        LocationContainer* pLVar5 = pLVar2;
        if (!(pLVar2->operator_cast_to_bool())) {
            pLVar2 = (LocationContainer*)FindLocationInList(pLVar5, (vector<shared_ptr<Location>>*)&field_320,
                                                            coordGrid, arg2);
            pLVar5 = pLVar2;
            if (!(pLVar2->operator_cast_to_bool())) {
                staticLocationLODContainer = (StaticLocationLODContainer*)field_352;
                this_00 = (shared_ptr*)FindLocationInList(
                    pLVar5, (vector<shared_ptr<Location>>*)staticLocationLODContainer, coordGrid, arg2);
                if (!(shared_ptr::operator_cast_to_bool(this_00))) {
                    this_01 = (array<LODLevel, 5ul>*)4;
                    do {
                        pbVar4 = (uint8_t*)(*this_01)[(unsigned long)staticLocationLODContainer];
                        pLVar5 = (LocationContainer*)(field_352 + 32);
                        staticLocationLODContainer =
                            (StaticLocationLODContainer*)(*((field_352 + 32)))[(unsigned long)*pbVar4];
                        lVar3 = FindLocationInLOD(pLVar5, staticLocationLODContainer, coordGrid, arg2);
                        if (lVar3 != 0) {
                            return lVar3;
                        }
                        bVar6 = this_01 != nullptr;
                        this_01 = this_01 - 1;
                    } while (bVar6);
                    lVar3 = 0;
                } else {
                    lVar3 = this_00->end();
                }
            } else {
                lVar3 = pLVar2->end();
            }
        } else {
            lVar3 = pLVar2->end();
        }
        return lVar3;
    }

    // 0x1004107e0
    shared_ptr<Location>* LocationContainer::FindLocationInList(const eastl::vector<shared_ptr<Location>>& locations,
                                                                const CoordGrid& coordGrid, int arg3) {
        Location* pLVar4;
        long* plVar5;
        CoordGrid* this_01;

        auto this_00 = locations.HeapBeginPtr();
        auto psVar3 = locations.end();
        do {
            if (this_00 == psVar3) {
                return (shared_ptr<Location>*)&Location::NullLocation;
            }
            pLVar4 = (Location*)(*this_00).operator->();
            if (!(pLVar4->IsHidden())) {
                plVar5 = (long*)(*this_00).operator->();
                if ((**(void (**)(...))(*plVar5 + 304))(plVar5) == arg3) {
                    pLVar4 = (Location*)(*this_00).operator->();
                    this_01 = (CoordGrid*)pLVar4->GetServerPosition();
                    if (*this_01 == coordGrid) {
                        return this_00;
                    }
                }
            }
            this_00 = this_00 + 16;
        } while (true);
    }

    // 0x1004108b0
    uint64_t LocationContainer::FindLocationInLOD(StaticLocationLODContainer& staticLocationLODContainer,
                                                  const CoordGrid& coordGrid, int arg3) {
        shared_ptr* this_02;

        unsigned int arg1 = coordGrid.field_0;
        unsigned int arg2 = coordGrid.field_4;
        unsigned int arg3_00 = coordGrid.field_8;
        auto this_00 = staticLocationLODContainer.field_48.HeapBeginPtr();
        auto psVar2 = staticLocationLODContainer.field_48.end();
        while (true) {
            if (this_00 == psVar2) {
                return 0;
            }
            this_02 = ((CombinedLocation*)(*this_00).operator->())->FindActiveSection(arg1, arg2, arg3_00, arg3);
            if (shared_ptr::operator_cast_to_bool(this_02) != '\0')
                break;
            this_00 = this_00 + 16;
        }
        return this_02->end();
    }

    // 0x100410960
    uint64_t LocationContainer::FindLocationInLOD(StaticLocationLODContainer& staticLocationLODContainer,
                                                  const CoordGrid& coordGrid, LocShape locShape) {
        shared_ptr* this_02;

        auto this_00 = staticLocationLODContainer.field_48.HeapBeginPtr();
        auto psVar2 = staticLocationLODContainer.field_48.end();
        if (this_00 != psVar2) {
            do {
                this_02 =
                    ((CombinedLocation*)(*this_00).operator->())
                        ->FindActiveSection(coordGrid.field_0, coordGrid.field_4, coordGrid.field_8, locShape & 255);
                if (shared_ptr::operator_cast_to_bool(this_02) != '\0') {
                    return this_02->end();
                }
                this_00 = this_00 + 16;
            } while (this_00 != psVar2);
        }
        return 0;
    }

    // 0x100410a60
    bool LocationContainer::StaticLocationTexturesReady() const {
        CombinedLocation* pCVar1;
        shared_ptr<graphics::Model>* psVar2;
        Model* pMVar3;
        bool cVar4;
        shared_ptr<CombinedLocation>* psVar6;
        shared_ptr<CombinedLocation>* this_00;
        int iVar7;
        bool bVar9;

        long lVar8 = ((field_352 + 32))->begin();
        long lVar5 = ((field_352 + 32))->end();
        for (; lVar8 != lVar5; lVar8 = lVar8 + 88) {
            this_00 = (shared_ptr<CombinedLocation>*)((lVar8 + 48))->HeapBeginPtr();
            psVar6 = (shared_ptr<CombinedLocation>*)((lVar8 + 48))->end();
            iVar7 = 0;
            bVar9 = this_00 == psVar6;
            if (!bVar9) {
                pCVar1 = (CombinedLocation*)(*this_00).operator->();
                psVar2 = (shared_ptr<graphics::Model>*)pCVar1->GetModel();
                pMVar3 = (Model*)(*psVar2).operator->();
                cVar4 = pMVar3->TexturesReady();
                while (cVar4) {
                    this_00 = this_00 + 16;
                    bVar9 = this_00 == psVar6;
                    if (bVar9)
                        goto LAB_100410b27;
                    pCVar1 = (CombinedLocation*)(*this_00).operator->();
                    psVar2 = (shared_ptr<graphics::Model>*)pCVar1->GetModel();
                    pMVar3 = (Model*)(*psVar2).operator->();
                    cVar4 = pMVar3->TexturesReady();
                }
                iVar7 = 1;
            }
        LAB_100410b27:
            if (!bVar9)
                goto LAB_100410b40;
        }
        iVar7 = 2;
    LAB_100410b40:
        return iVar7 == 2;
    }

    // 0x100410b90
    bool LocationContainer::StaticLocationShadersReady() const {
        CombinedLocation* pCVar1;
        shared_ptr<graphics::Model>* psVar2;
        Model* pMVar3;
        bool cVar4;
        shared_ptr<CombinedLocation>* psVar6;
        shared_ptr<CombinedLocation>* this_00;
        int iVar7;
        bool bVar9;

        long lVar8 = ((field_352 + 32))->begin();
        long lVar5 = ((field_352 + 32))->end();
        for (; lVar8 != lVar5; lVar8 = lVar8 + 88) {
            this_00 = (shared_ptr<CombinedLocation>*)((lVar8 + 48))->HeapBeginPtr();
            psVar6 = (shared_ptr<CombinedLocation>*)((lVar8 + 48))->end();
            iVar7 = 0;
            bVar9 = this_00 == psVar6;
            if (!bVar9) {
                pCVar1 = (CombinedLocation*)(*this_00).operator->();
                psVar2 = (shared_ptr<graphics::Model>*)pCVar1->GetModel();
                pMVar3 = (Model*)(*psVar2).operator->();
                cVar4 = pMVar3->ShadersReady();
                while (cVar4) {
                    this_00 = this_00 + 16;
                    bVar9 = this_00 == psVar6;
                    if (bVar9)
                        goto LAB_100410c57;
                    pCVar1 = (CombinedLocation*)(*this_00).operator->();
                    psVar2 = (shared_ptr<graphics::Model>*)pCVar1->GetModel();
                    pMVar3 = (Model*)(*psVar2).operator->();
                    cVar4 = pMVar3->ShadersReady();
                }
                iVar7 = 1;
            }
        LAB_100410c57:
            if (!bVar9)
                goto LAB_100410c70;
        }
        iVar7 = 2;
    LAB_100410c70:
        return iVar7 == 2;
    }

    // 0x100410c90
    unsigned long LocationContainer::StaticUncombinableLocationsBuilt() const {
        bool cVar1;
        Location* pLVar3;
        uint64_t unaff_R15;

        auto this_00 = field_352->HeapBeginPtr();
        auto psVar2 = field_352->end();
        unsigned long uVar4 =
            (((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)(this_00 == psVar2));
        if (this_00 != psVar2) {
            pLVar3 = (Location*)(*this_00).operator->();
            cVar1 = pLVar3->IsStillBuilding();
            while (!cVar1) {
                this_00 = this_00 + 16;
                uVar4 = (((uint64_t)((int64_t)(uVar4 >> 8)) << 8) | (uint8_t)(this_00 == psVar2));
                if (this_00 == psVar2)
                    break;
                pLVar3 = (Location*)(*this_00).operator->();
                cVar1 = pLVar3->IsStillBuilding();
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x100410d70
    uint64_t LocationContainer::AllStaticLocationsReady() const {
        bool cVar1 = StaticUncombinableLocationsBuilt();
        if ((!cVar1) || (cVar1 = StaticLocationTexturesReady(), !cVar1)) {
            return 0;
        }
        return StaticLocationShadersReady();
    }

    // 0x100410db0
    bool LocationContainer::HasLocations() const {
        return 1;
    }

    // 0x100410dc0
    unsigned long LocationContainer::IsHighPriority() const {
        World* this_00;
        shared_ptr* this_01;
        unsigned long uVar2;

        if (!(GetTargetLOD())) {
            this_00 = (World*)(*field_176).operator->();
            this_01 = (shared_ptr*)this_00->GetMapSquare(m_mapSquareX, m_mapSquareZ);
            if (shared_ptr::operator_cast_to_bool(this_01)) {
                uVar2 = ((MapSquare*)(*this_01).operator->())->IsPrioritySquare();
                goto LAB_100410e1d;
            }
        }
        uVar2 = 0;
    LAB_100410e1d:
        return uVar2 & 18446744073709551361;
    }

    // 0x100410e30
    void LocationContainer::GetLoadImportance() const {
        GetLoadImportance();
    }

    // 0x100410e40
    float LocationContainer::GetLoadProgress() const {
        float fVar5;

        bool cVar2 = IsAtTargetLOD();
        if (!cVar2) {
            return 0.0;
        }
        cVar2 = StaticUncombinableLocationsBuilt();
        if (!cVar2) {
            return 0.0;
        }
        World* pWVar1 = (World*)(*field_176).operator->();
        uint8_t bVar3 = pWVar1->GetLoadingIncludesTextures();
        pWVar1 = (World*)(*field_176).operator->();
        uint8_t bVar4 = pWVar1->GetLoadingIncludesShaders();
        if ((bVar3 == 0) || (cVar2 = StaticLocationTexturesReady(), !cVar2)) {
            fVar5 = 1.0;
        } else {
            fVar5 = 2.0;
        }
        if ((bVar4 != 0) && (cVar2 = StaticLocationShadersReady(), cVar2)) {
            fVar5 = fVar5 + 1.0;
        }
        return fVar5 / (float)((unsigned int)bVar3 + (unsigned int)bVar4 + 1);
    }

} // namespace jag::game
