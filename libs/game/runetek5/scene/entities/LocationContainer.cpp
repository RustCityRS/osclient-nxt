// libs/game/runetek5/scene/entities/LocationContainer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "LocationContainer.h"

namespace jag::game {
    // 0x1039b4df0, 8 bytes, __common; zero-initialised
    LocationContainer::NullContainer;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    LocationContainer::IsVisibleEntity() const;

    // 0x1003f5190: the linker folded this into BASType::GetHillRotateWidth() const, which has identical code
    int LocationContainer::GetMinGridX() const;

    // 0x1003f51a0: the linker folded this into BASType::GetHillRotateLength() const, which has identical code
    int LocationContainer::GetMinGridZ() const;

    // 0x10040bfa0, 672 bytes, base-object constructor, placed by class name and debug map
    // LocationContainer::LocationContainer(ConfigProvider*, PlayerVarDomain*, graphics::GraphNode*, shared_ptr<World> const&, int, int, int, int, int, int, eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator> const&)
    void LocationContainer::LocationContainer(ConfigProvider* param_1, PlayerVarDomain* param_2, GraphNode* param_3,
                                              shared_ptr* param_4, int param_5, int param_6, int param_7, int param_8,
                                              int param_9, int param_10, vector* param_11) {
        byte* pbVar1;
        StaticLocationLODContainer* this_00;
        ulong uVar2;
        StaticLocationLODContainer local_c8;
        ColourHSL local_70;
        ColourHSL local_60;
        undefined1* local_50;
        undefined1* local_48;
        undefined1* local_40;
        undefined1* local_38;

        new (this) Entity(param_3, param_4, 9, 4294967295);
        field_0 = &PTR__LocationContainer_100eff2d0;
        field_8 = &PTR__LocationContainer_100eff410;
        m_pConfigProvider = param_1;
        field_200 = param_2;
        field_208 = 6;
        m_mapSquareX = param_5;
        m_mapSquareZ = param_6;
        m_minGridX = param_7;
        m_minGridZ = param_8;
        field_228 = param_9;
        field_232 = param_10;
        m_hasStartedBuild = 0;
        new (&field_240) eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>();
        local_50 = &field_240;
        new (&field_272, (_func_decltype_nullptr*)param_3)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        local_48 = &field_272;
        new (&field_288) eastl::vector<shared_ptr<Location>, eastl::allocator>();
        local_40 = &field_288;
        new (&field_320) eastl::vector<shared_ptr<Location>, eastl::allocator>();
        local_38 = &field_320;
        new (field_352) eastl::vector<shared_ptr<Location>, eastl::allocator>();
        new ((field_352 + 32)) std::array<StaticLocationLODContainer, 7ul>();
        uVar2 = 0;
        do {
            local_c8._64_8_ = 0;
            local_c8._72_8_ = 0;
            local_c8._48_8_ = 0;
            local_c8._56_8_ = 0;
            local_c8.field_32._0_8_ = 0;
            local_c8.field_32._8_8_ = 0;
            local_c8._16_8_ = 0;
            local_c8._24_8_ = 0;
            local_c8._0_8_ = 0;
            local_c8._8_8_ = 0;
            local_c8.field_80 = 0;
            local_c8._82_6_ = 0;
            new (&local_c8) StaticLocationLODContainer();
            pbVar1 = (byte*)std::array<LODLevel, 5ul>::operator[](uVar2);
            this_00 = (StaticLocationLODContainer*)std::array<StaticLocationLODContainer, 7ul>::operator[](
                (array<StaticLocationLODContainer, 7ul>*)(field_352 + 32), (ulong)*pbVar1);
            StaticLocationLODContainer::operator=(this_00, &local_c8);
            local_c8.~StaticLocationLODContainer();
            uVar2 = uVar2 + 1;
        } while (uVar2 != 5);
        new (&local_70) math::ColourHSL(0.0, 0.0, 0.0);
        new (&local_60) math::ColourHSL((float)((field_228 - m_minGridX) + 1) * 128.0, 8192.0,
                                        (float)((field_232 - m_minGridZ) + 1) * 128.0);
        new (&local_c8) math::AABB((Vector3T*)&local_70, (Vector3T*)&local_60);
        SetAABB((AABB*)&local_c8);
        PrepareLocationLists(this, param_11);
    }

    // 0x10040c2f0, 512 bytes, placed by class name and debug map
    // LocationContainer::PrepareLocationLists(eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator> const&)
    void LocationContainer::PrepareLocationLists(vector* param_1) {
        char cVar1;
        int iVar2;
        int iVar3;
        char cVar5;
        byte bVar6;
        undefined1 uVar7;
        shared_ptr<World>* this_00;
        World* this_01;
        ulong uVar8;
        shared_ptr* this_02;
        shared_ptr* psVar9;
        MapSquareLocation* pMVar10;
        long lVar11;
        LocType* this_03;
        vector<LocationContainerLocation, eastl::allocator>* this_04;
        LocationContainerLocation local_d0;
        LocType* local_60;
        vector<shared_ptr<MapSquareLocation>, eastl::allocator>* local_58;
        array<StaticLocationLODContainer, 7ul>* local_50;
        shared_ptr* local_48;
        LinkMap* local_40;
        int local_38;
        byte local_31;

        this_00 = (shared_ptr<World>*)GetWorld();
        this_01 = (World*)shared_ptr<World>::operator->(this_00);
        local_40 = (LinkMap*)this_01->GetLinkMap();
        uVar8 = param_1->size();
        local_58 = (vector<shared_ptr<MapSquareLocation>, eastl::allocator>*)&field_240;
        (&field_240, uVar8)->reserve();
        this_02 = (shared_ptr*)param_1->HeapBeginPtr();
        psVar9 = (shared_ptr*)param_1->end();
        if (this_02 != psVar9) {
            local_50 = (array<StaticLocationLODContainer, 7ul>*)(field_352 + 32);
            local_48 = psVar9;
            do {
                if (shared_ptr::operator_cast_to_bool(this_02)) {
                    pMVar10 = (MapSquareLocation*)shared_ptr<MapSquareLocation>::operator*(
                        (shared_ptr<MapSquareLocation>*)this_02);
                    cVar5 = LocationNeedsProcessing(this, pMVar10);
                    if (cVar5 != '\0') {
                        lVar11 = shared_ptr<MapSquareLocation>::operator->((shared_ptr<MapSquareLocation>*)this_02);
                        this_03 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar11 + 72));
                        cVar5 = this_03->IsMultiLoc();
                        if (cVar5 == '\0') {
                            pMVar10 = (MapSquareLocation*)shared_ptr<MapSquareLocation>::operator*(
                                (shared_ptr<MapSquareLocation>*)this_02);
                            bVar6 = CalculateLocationLOD(this, pMVar10, local_40);
                            local_31 = bVar6;
                            lVar11 = shared_ptr<MapSquareLocation>::operator->((shared_ptr<MapSquareLocation>*)this_02);
                            *(byte*)(lVar11 + 67) = bVar6;
                            lVar11 = shared_ptr<MapSquareLocation>::operator->((shared_ptr<MapSquareLocation>*)this_02);
                            local_60 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar11 + 72));
                            lVar11 = shared_ptr<MapSquareLocation>::operator->((shared_ptr<MapSquareLocation>*)this_02);
                            local_38 = (int)*(char*)(lVar11 + 4);
                            iVar2 = m_mapSquareX;
                            lVar11 = shared_ptr<MapSquareLocation>::operator->((shared_ptr<MapSquareLocation>*)this_02);
                            cVar5 = *(char*)(lVar11 + 5);
                            iVar3 = m_mapSquareZ;
                            lVar11 = shared_ptr<MapSquareLocation>::operator->((shared_ptr<MapSquareLocation>*)this_02);
                            cVar1 = *(char*)(lVar11 + 6);
                            lVar11 = shared_ptr<MapSquareLocation>::operator->((shared_ptr<MapSquareLocation>*)this_02);
                            uVar7 = ((lVar11 + 8))->GetRot();
                            cVar5 = local_60->GetMaxRemoveRoofLevel(local_40, local_38, (int)cVar5 + iVar2 * 64,
                                                                    (int)cVar1 + iVar3 * 64, uVar7);
                            new (&local_d0) LocationContainerLocation(this_02, (int)cVar5);
                            this_04 = (vector<LocationContainerLocation, eastl::allocator>*)
                                std::array<StaticLocationLODContainer, 7ul>::operator[](local_50, (ulong)local_31);
                            eastl::vector<LocationContainerLocation, eastl::allocator>::push_back(this_04, &local_d0);
                            local_d0.~LocationContainerLocation();
                            psVar9 = local_48;
                        } else {
                            eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>::push_back(local_58,
                                                                                                      this_02);
                        }
                    }
                }
                this_02 = this_02 + 1;
            } while (this_02 != psVar9);
        }
    }

    // 0x10040c520, 64 bytes, complete-object constructor, placed by class name and debug map
    // LocationContainer::LocationContainer(ConfigProvider*, PlayerVarDomain*, graphics::GraphNode*, shared_ptr<World> const&, int, int, int, int, int, int, eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator> const&)
    void LocationContainer::LocationContainer(ConfigProvider* param_1, PlayerVarDomain* param_2, GraphNode* param_3,
                                              shared_ptr* param_4, int param_5, int param_6, int param_7, int param_8,
                                              int param_9, int param_10, vector* param_11) {
        LocationContainer(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9,
                          param_10, param_11);
    }

    // 0x10040c560, 176 bytes, placed by class name and debug map
    // LocationContainer::OverlapsArea(int, int, int, int)
    undefined4 LocationContainer::OverlapsArea(int param_1, int param_2, int param_3, int param_4) {
        int iVar1;
        undefined4 uVar2;
        int iVar3;

        if ((param_3 < param_1) || (param_4 < param_2)) {
            /* WARNING: Subroutine does not return */
            LogAssert("tileMinX <= tileMaxX && tileMinZ <= tileMaxZ",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/LocationContainer.cpp",
                      70, "Min and max coords reversed");
        }
        iVar1 = m_mapSquareX * 64;
        if (field_228 + iVar1 < param_1) {
            uVar2 = 0;
        } else {
            iVar3 = m_mapSquareZ * 64;
            iVar1 = iVar1 + m_minGridX;
            uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),
                             iVar3 + m_minGridZ <= param_4 && (param_2 <= field_232 + iVar3 && iVar1 <= param_3));
        }
        return uVar2;
    }

    // 0x10040c610, 80 bytes, placed by class name and debug map
    // LocationContainer::LodLevelToPriority(LODLevel)
    undefined4 LocationContainer::LodLevelToPriority(undefined8 param_1, byte param_2) {
        if (4 < param_2) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                            "entities/LocationContainer.cpp",
                            90, "LocationContainer: Unsupported lod level: %d", (ulong)param_2);
        }
        return *(undefined4*)(&DAT_100d42c7c + (long)(char)param_2 * 4);
    }

    // 0x10040c6a0, 304 bytes, placed by class name and debug map
    // LocationContainer::LocationNeedsProcessing(MapSquareLocation const&) const
    undefined8 LocationContainer::LocationNeedsProcessing(MapSquareLocation* param_1) {
        bool bVar1;
        undefined7 extraout_var;
        undefined8 uVar2;
        LogStream local_c0;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (((m_minGridX <= (int)(char)param_1->field_5) || (m_minGridX < 1)) &&
            ((int)(char)param_1->field_5 <= field_228)) {
            if (((m_minGridZ <= (int)(char)param_1->field_6) || (m_minGridZ < 1)) &&
                ((int)(char)param_1->field_6 <= field_232)) {
                bVar1 = (&param_1->field_72)->operator_cast_to_bool();
                uVar2 = CONCAT71(extraout_var, 1);
                if (bVar1)
                    goto LAB_10040c78f;
                uVar2 = logger::default_logger();
                new (&local_c0) logger::LogStream((LogStream*)&LOGGER_SCENE);
                logger::Logger::Log(uVar2, 0, &local_c0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/entities/LocationContainer.cpp",
                                    159, "location.locationType == null! locationID: %d map square: %d,%d",
                                    param_1->field_0, m_mapSquareX, m_mapSquareZ);
                local_c0.~LogStream();
            }
        }
        uVar2 = 0;
    LAB_10040c78f:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar2;
    }

    // 0x10040c8a0, 320 bytes, placed by class name and debug map
    // LocationContainer::CalculateLocationLOD(MapSquareLocation const&, LinkMap const&)
    byte LocationContainer::CalculateLocationLOD(MapSquareLocation* param_1, LinkMap* param_2) {
        undefined1* this_00;
        byte bVar1;
        char cVar2;
        char cVar3;
        char cVar4;
        int iVar5;
        int iVar6;
        LocType* pLVar7;
        byte bVar8;

        this_00 = &param_1->field_72;
        pLVar7 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
        bVar1 = pLVar7->GetMinimumLODLevelOverride();
        pLVar7 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
        cVar2 = pLVar7->GetIndoorsOverride();
        cVar3 = param_1->field_8->GetShape();
        if (bVar1 < 5)
            goto LAB_10040c93f;
        if (cVar2 == '\x01') {
        LAB_10040c8fb:
            bVar1 = 0;
        } else {
            cVar4 = LocShapes::IsWallShape(cVar3);
            if (cVar4 == '\0') {
                cVar4 = LocShapes::IsWallDecorShape(cVar3);
                bVar1 = 0;
                if ((cVar4 != '\0') || (cVar3 == '\x16'))
                    goto LAB_10040c93f;
                cVar4 = LocShapes::IsRoofEdgeShape(cVar3);
                if (cVar4 == '\0') {
                    cVar3 = LocShapes::IsRoofShape(cVar3);
                    bVar1 = 3;
                    if (cVar3 != '\0')
                        goto LAB_10040c93f;
                    if ((cVar2 == '\x02') || (cVar2 = IsLocationIndoors(this, param_1, param_2), cVar2 == '\0')) {
                        pLVar7 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
                        iVar5 = pLVar7->GetGridWidth(0);
                        pLVar7 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this_00);
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
        bVar8 = 2;
        if (bVar1 != 3) {
            bVar8 = bVar1;
        }
        bVar1 = 0;
        if (bVar8 != 1) {
            bVar1 = bVar8;
        }
        return bVar1;
    }

    // 0x10040caf0, 480 bytes, placed by class name and debug map
    // LocationContainer::IsLocationIndoors(MapSquareLocation const&, LinkMap const&)
    bool LocationContainer::IsLocationIndoors(MapSquareLocation* param_1, LinkMap* param_2) {
        bool bVar1;
        undefined1 uVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        LocType* pLVar8;
        ulong uVar9;
        int iVar10;

        pLVar8 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)&param_1->field_72);
        uVar2 = param_1->field_8->GetRot();
        iVar3 = pLVar8->GetGridWidth(uVar2);
        pLVar8 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)&param_1->field_72);
        uVar2 = param_1->field_8->GetRot();
        iVar4 = pLVar8->GetGridLength(uVar2);
        iVar5 = eastl::max<int>(0, (char)param_1->field_5 + -1);
        iVar3 = eastl::min<graphics::GraphicsQuality>(63, iVar3 + (char)param_1->field_5 + 1);
        iVar6 = eastl::max<int>(0, (char)param_1->field_6 + -1);
        iVar4 = eastl::min<graphics::GraphicsQuality>(63, (char)param_1->field_6 + iVar4 + 1);
        if (iVar5 < iVar3) {
            do {
                iVar7 = 5;
                bVar1 = iVar6 < iVar4;
                if (iVar6 < iVar4) {
                    uVar9 = param_2->GetTileLink((int)(char)param_1->field_4, m_mapSquareX * 64 + iVar5,
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
                            uVar9 = param_2->GetTileLink((int)(char)param_1->field_4, m_mapSquareX * 64 + iVar5,
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

    // 0x10040ccd0, 112 bytes, placed by class name and debug map
    // LocationContainer::UpdateLOD(StaticLocationLODContainer&, LODLevel)
    void LocationContainer::UpdateLOD(undefined8 param_1_00, long param_1, undefined1 param_3) {
        Entity* pEVar1;
        shared_ptr<CombinedLocation>* psVar3;
        shared_ptr<CombinedLocation>* this;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;

        this_00 =
            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)(param_1 + 48);
        if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                this_00) == '\0') {
            this = (shared_ptr<CombinedLocation>*)this_00->HeapBeginPtr();
            psVar3 = (shared_ptr<CombinedLocation>*)this_00->end();
            for (; this != psVar3; this = this + 16) {
                pEVar1 = (Entity*)shared_ptr<CombinedLocation>::operator->(this);
                pEVar1->SetCurrentLOD(param_3);
            }
        }
    }

    // 0x10040cd80, 128 bytes, placed by class name and debug map
    // LocationContainer::SetMultiLocState(int, int)
    void LocationContainer::SetMultiLocState(int param_1, int param_2) {
        Location* pLVar1;
        shared_ptr<Location>* psVar3;
        shared_ptr<Location>* this_00;

        this_00 = (shared_ptr<Location>*)(&field_288)->HeapBeginPtr();
        psVar3 = (shared_ptr<Location>*)(&field_288)->end();
        for (; this_00 != psVar3; this_00 = this_00 + 16) {
            pLVar1 = (Location*)shared_ptr<Location>::operator->(this_00);
            if (pLVar1->GetParentTypeID() == param_1) {
                pLVar1 = (Location*)shared_ptr<Location>::operator->(this_00);
                pLVar1->SetMultiLocState(param_2);
            }
        }
    }

    // 0x10040cea0, 128 bytes, placed by class name
    // LocationContainer::IncrementMultiLocState(int)
    void LocationContainer::IncrementMultiLocState(int param_1) {
        Location* pLVar1;
        shared_ptr<Location>* psVar3;
        shared_ptr<Location>* this_00;

        this_00 = (shared_ptr<Location>*)(&field_288)->HeapBeginPtr();
        psVar3 = (shared_ptr<Location>*)(&field_288)->end();
        for (; this_00 != psVar3; this_00 = this_00 + 16) {
            pLVar1 = (Location*)shared_ptr<Location>::operator->(this_00);
            if (pLVar1->GetParentTypeID() == param_1) {
                pLVar1 = (Location*)shared_ptr<Location>::operator->(this_00);
                pLVar1->IncrementMultiLocIndex();
            }
        }
    }

    // 0x10040cf60, 80 bytes, placed by class name
    // LocationContainer::IncrementAllMultiLocStates()
    void LocationContainer::IncrementAllMultiLocStates() {
        shared_ptr<Location>* this_00;
        shared_ptr<Location>* psVar1;
        Location* this_01;

        this_00 = (shared_ptr<Location>*)(&field_288)->HeapBeginPtr();
        psVar1 = (shared_ptr<Location>*)(&field_288)->end();
        for (; this_00 != psVar1; this_00 = this_00 + 16) {
            this_01 = (Location*)shared_ptr<Location>::operator->(this_00);
            this_01->IncrementMultiLocIndex();
        }
    }

    // 0x10040cfb0, 704 bytes, placed by class name
    // LocationContainer::Build(graphics::RT7Core&, Js5ResourceProvider&, ConfigProvider&, AssetBuilder&, int, bool, bool)
    void LocationContainer::Build(RT7Core* param_1, Js5ResourceProvider* param_2, ConfigProvider* param_3,
                                  AssetBuilder* param_4, int param_5, bool param_6, bool param_7) {
        byte bVar1;
        char cVar2;
        byte bVar3;
        char cVar4;
        undefined4 uVar6;
        long* plVar7;
        StaticLocationLODContainer* pSVar8;
        GraphNode* this_00;
        ulong uVar9;
        shared_ptr<Location>* this_01;
        Entity* this_02;
        GraphNode* this_03;
        bool bVar10;
        long lVar11;
        undefined1* this_04;
        ulong uVar12;

        plVar7 = (long*)Instance();
        cVar2 = (**(code**)(*plVar7 + 224))(plVar7);
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("GraphicsApp::Instance()->IsInsideMainLogic()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/LocationContainer.cpp",
                      321, (char*)0);
        }
        bVar3 = GetTargetLOD();
        bVar10 = true;
        lVar11 = 0;
        do {
            bVar1 = (&g_lodLocationTypes)[lVar11];
            if (bVar1 < bVar3) {
                if (!param_6) {
                    DestructAllBuiltLocationsAtLOD(this, bVar1);
                    if (field_208 < (byte)(&g_lodLocationTypes)[lVar11]) {
                        field_208 = (&g_lodLocationTypes)[lVar11];
                    }
                }
            } else {
                pSVar8 = (StaticLocationLODContainer*)std::array<StaticLocationLODContainer, 7ul>::operator[](
                    (array<StaticLocationLODContainer, 7ul>*)(field_352 + 32), (ulong)bVar1);
                if (param_7) {
                    uVar6 = LodLevelToPriority();
                    cVar2 =
                        BuildAllLocationsAtLOD(this, param_1, param_4, pSVar8, uVar6, (&g_lodLocationTypes)[lVar11]);
                    if (cVar2 == '\0') {
                        bVar10 = false;
                    }
                } else {
                    BuildAllLocationsUncombined(this, pSVar8);
                }
            }
            lVar11 = lVar11 + 1;
        } while (lVar11 != 5);
        if (bVar10) {
            cVar2 = BuildStaticUncombinableLocations(this, param_1, param_2, param_3, param_4, param_5);
            cVar4 = BuildDynamicLocations(this, (vector*)&field_320, param_1, param_2, param_3, param_4, param_5);
            if (((BuildMultiLocations(this, param_1, param_2, param_3, param_4, param_5) != '\0') && (cVar4 != '\0')) &&
                (cVar2 != '\0')) {
                SetCurrentLOD(bVar3);
                field_208 = bVar3;
                lVar11 = 0;
                do {
                    std::array<StaticLocationLODContainer, 7ul>::operator[](
                        (array<StaticLocationLODContainer, 7ul>*)(field_352 + 32),
                        (ulong)(byte)(&g_lodLocationTypes)[lVar11]);
                    UpdateLOD();
                    lVar11 = lVar11 + 1;
                } while (lVar11 != 5);
                this_00 = (GraphNode*)GetNode();
                this_04 = field_352;
                lVar11 = this_04->size();
                if (lVar11 != 0) {
                    uVar9 = 0;
                    uVar12 = 1;
                    do {
                        this_01 =
                            (shared_ptr<Location>*)eastl::vector<shared_ptr<Location>, eastl::allocator>::operator[](
                                (vector<shared_ptr<Location>, eastl::allocator>*)this_04, uVar9);
                        this_02 = (Entity*)shared_ptr<Location>::operator->(this_01);
                        this_03 = (GraphNode*)this_02->GetNode();
                        if ((this_03 != (GraphNode*)0) && (cVar2 = this_03->IsAttached(), cVar2 == '\0')) {
                            this_00->AddChild(this_03);
                        }
                        uVar9 = this_04->size();
                        bVar10 = uVar12 < uVar9;
                        uVar9 = uVar12;
                        uVar12 = (ulong)((int)uVar12 + 1);
                    } while (bVar10);
                }
                this_00->UnionAABBWithChildren(true);
            }
        }
    }

    // 0x10040d270, 1088 bytes, placed by class name
    // LocationContainer::BuildAllLocationsAtLOD(graphics::RT7Core&, AssetBuilder&, StaticLocationLODContainer&, AssetJobPriority, LODLevel)
    ulong LocationContainer::BuildAllLocationsAtLOD(
        RT7Core* param_1, AssetBuilder* param_2,
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* param_3, int param_5,
        undefined1 param_6) {
        shared_ptr<BuildCombinedLocationMain>* this_00;
        LocationContainer* pLVar1;
        char cVar2;
        bool bVar3;
        undefined4 uVar5;
        shared_ptr<World>* psVar6;
        AssetJob* pAVar7;
        long lVar8;
        ulong uVar9;
        shared_ptr* psVar10;
        shared_ptr* psVar11;
        LocationContainerLocation* this_01;
        LocationContainerLocation* pLVar12;
        World* pWVar13;
        undefined8 uVar14;
        undefined8 uVar15;
        CommandLine* this_02;
        undefined7 uVar17;
        undefined8 in_stack_fffffffffffffeb8;
        undefined8 in_stack_fffffffffffffec0;
        undefined4 uVar18;
        undefined8 in_stack_fffffffffffffec8;
        undefined4 uVar19;
        LocationContainer* local_110;
        shared_ptr* local_108;
        shared_ptr local_100;
        shared_ptr<World>* local_e8;
        int local_dc;
        LocationContainer* local_d8;
        bool local_cb;
        char local_ca;
        char local_c9;
        LogStream local_c8;
        long local_38;

        uVar18 = (undefined4)((ulong)in_stack_fffffffffffffec0 >> 32);
        uVar19 = (undefined4)((ulong)in_stack_fffffffffffffec8 >> 32);
        uVar5 = (undefined4)((ulong)in_stack_fffffffffffffeb8 >> 32);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar2 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            param_3);
        uVar9 = CONCAT71((int7)((ulong)param_3 >> 8), 1);
        if (cVar2 != '\0')
            goto LAB_10040d63d;
        psVar6 = (shared_ptr<World>*)GetWorld();
        uVar17 = (undefined7)(uVar9 >> 8);
        if ((param_3[81] ==
             (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>)0) &&
            (param_3[80] ==
             (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>)0)) {
            local_e8 = psVar6;
            bVar3 = ((param_3 + 32))->operator_cast_to_bool();
            psVar6 = local_e8;
            uVar9 = CONCAT71(uVar17, 1);
            if (bVar3)
                goto LAB_10040d63d;
            local_ca = '\x01';
            local_c9 = '\x01';
            local_108 = (shared_ptr*)(param_3 + 32);
            pWVar13 = (World*)shared_ptr<World>::operator->(local_e8);
            uVar15 = pWVar13->GetHeightMap();
            local_d8 = this;
            pWVar13 = (World*)shared_ptr<World>::operator->(psVar6);
            uVar14 = pWVar13->GetLinkMap();
            pLVar1 = local_d8;
            LoadLocationModels(local_d8, &local_ca, &local_c9, param_1, param_2, param_3, CONCAT44(uVar5, param_5),
                               uVar15, uVar14);
            if ((local_ca != '\0') && (local_c9 != '\0')) {
                local_110 = pLVar1;
                local_dc = param_5;
                pWVar13 = (World*)shared_ptr<World>::operator->(local_e8);
                local_cb = pWVar13->GetBuildMode() == 3;
                bucket_make_shared<BuildCombinedLocationMain, graphics::RT7Core&, int, LocationContainer*,
                                   eastl::vector<LocationContainerLocation, eastl::allocator>&, int&, int&, bool>(
                    (jag*)&local_100, param_1, &local_dc, &local_110, (vector*)param_3, &pLVar1->m_mapSquareX,
                    &pLVar1->m_mapSquareZ, &local_cb);
                psVar10 = local_108;
                shared_ptr<BuildCombinedLocationMain>::operator=((shared_ptr<BuildCombinedLocationMain>*)local_108,
                                                                 &local_100);
                local_100.~shared_ptr();
                new (&local_100) shared_ptr<oldscape::dash3d::Decor>(psVar10);
                param_2->SubmitJob(&local_100);
                local_100.~shared_ptr();
                param_3[80] = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>)1;
            }
        LAB_10040d58c:
            uVar9 = 0;
        } else {
            if ((param_3[80] !=
                 (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>)0) &&
                (param_3[81] ==
                 (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>)0)) {
                this_00 = (shared_ptr<BuildCombinedLocationMain>*)(param_3 + 32);
                pAVar7 = (AssetJob*)shared_ptr<BuildCombinedLocationMain>::operator->(this_00);
                cVar2 = pAVar7->IsFinished();
                if (cVar2 == '\0')
                    goto LAB_10040d58c;
                pAVar7 = (AssetJob*)shared_ptr<BuildCombinedLocationMain>::operator->(this_00);
                cVar2 = pAVar7->IsSuccessful();
                if (cVar2 == '\0') {
                    uVar15 = logger::default_logger();
                    new (&local_c8) logger::LogStream((LogStream*)&LOGGER_SCENE);
                    this_02 = (CommandLine*)shared_ptr<BuildCombinedLocationMain>::operator->(this_00);
                    uVar5 = this_02->GetPos();
                    uVar17 = 0;
                    logger::Logger::Log(
                        uVar15, 0, &local_c8, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                        "entities/LocationContainer.cpp",
                        603, "LocationContainer: Combined location build (Job %d) failed: %d,%d,%d,%d (LOD: %d)",
                        CONCAT44(uVar18, uVar5), CONCAT44(uVar19, m_mapSquareX), m_mapSquareZ, m_minGridX, m_minGridZ,
                        param_6);
                    local_c8.~LogStream();
                    param_3[80] =
                        (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>)0;
                    shared_ptr<BuildCombinedLocationMain>::reset();
                } else {
                    lVar8 = shared_ptr<BuildCombinedLocationMain>::operator->(this_00);
                    eastl::vector<shared_ptr<CombinedLocation>, eastl::allocator>::operator=(
                        (vector<shared_ptr<CombinedLocation>, eastl::allocator>*)(param_3 + 48), (vector*)(lVar8 + 80));
                    param_3[81] =
                        (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>)1;
                    local_d8 = this;
                    lVar8 = shared_ptr<BuildCombinedLocationMain>::operator->(this_00);
                    uVar9 = ((lVar8 + 112))->size();
                    (field_352, uVar9)->reserve();
                    lVar8 = shared_ptr<BuildCombinedLocationMain>::operator->(this_00);
                    psVar10 = (shared_ptr*)((lVar8 + 112))->HeapBeginPtr();
                    psVar11 = (shared_ptr*)((lVar8 + 112))->end();
                    for (; psVar10 != psVar11; psVar10 = psVar10 + 1) {
                        (field_352, psVar10)->push_back();
                    }
                    shared_ptr<BuildCombinedLocationMain>::reset();
                    this_01 = (LocationContainerLocation*)param_3->HeapBeginPtr();
                    pLVar12 = (LocationContainerLocation*)param_3->end();
                    pLVar1 = local_d8;
                    for (; local_d8 = pLVar1, this_01 != pLVar12; this_01 = this_01 + 1) {
                        this_01->ClearBuiltData();
                        pLVar1 = local_d8;
                    }
                    bVar3 = pLVar1->field_176->operator_cast_to_bool();
                    if (bVar3) {
                        pWVar13 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)pLVar1->field_176);
                        pWVar13->AddBuiltZone(pLVar1);
                    }
                }
            }
            uVar9 = CONCAT71(uVar17, 1);
        }
    LAB_10040d63d:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar9 & 4294967295;
    }

    // 0x10040d6b0, 688 bytes, placed by class name
    // LocationContainer::BuildAllLocationsUncombined(StaticLocationLODContainer&)
    void LocationContainer::BuildAllLocationsUncombined(StaticLocationLODContainer* param_1) {
        int iVar1;
        char cVar2;
        bool bVar3;
        ulong uVar4;
        GraphNode* this_00;
        GraphNode* pGVar5;
        long lVar6;
        long lVar7;
        long lVar8;
        long lVar9;
        Location* this_01;
        Entity* pEVar10;
        GraphEntity* pGVar11;
        World* this_02;
        GraphNode* this_03;
        bool* in_stack_ffffffffffffff60;
        shared_ptr local_98;
        GraphNode** local_88;
        shared_ptr* local_80;
        signed* local_78;
        int* local_70;
        vector<shared_ptr<Location>, eastl::allocator>* local_68;
        GraphNode* local_60;
        StaticLocationLODContainer* local_58;
        GraphNode* local_50;
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        bool local_31;

        cVar2 = param_1->empty();
        if ((cVar2 == '\0') && (*(char*)((long)&param_1->field_80 + 1) == '\0')) {
            uVar4 = param_1->size();
            local_68 = (vector<shared_ptr<Location>, eastl::allocator>*)field_352;
            (field_352, uVar4)->reserve();
            this_00 = (GraphNode*)param_1->HeapBeginPtr();
            local_58 = param_1;
            pGVar5 = (GraphNode*)param_1->end();
            if (this_00 != pGVar5) {
                local_60 = pGVar5;
                do {
                    this_03 = this_00;
                    bVar3 = this_00->operator_cast_to_bool();
                    if (bVar3) {
                        local_50 = graphics::GraphNode::Create<>(this_03);
                        local_88 = (GraphNode**)GetWorld();
                        lVar6 = shared_ptr<MapSquareLocation>::operator->((shared_ptr<MapSquareLocation>*)this_00);
                        local_80 = (shared_ptr*)(lVar6 + 4);
                        local_78 =
                            (signed*)shared_ptr<MapSquareLocation>::operator->((shared_ptr<MapSquareLocation>*)this_00);
                        lVar6 = shared_ptr<MapSquareLocation>::operator->((shared_ptr<MapSquareLocation>*)this_00);
                        local_70 = (int*)(lVar6 + 8);
                        lVar6 = shared_ptr<MapSquareLocation>::operator->((shared_ptr<MapSquareLocation>*)this_00);
                        lVar7 = shared_ptr<MapSquareLocation>::operator->((shared_ptr<MapSquareLocation>*)this_00);
                        local_31 = (bool)(*(byte*)(lVar7 + 61) ^ 1);
                        iVar1 = m_mapSquareX;
                        lVar7 = shared_ptr<MapSquareLocation>::operator->((shared_ptr<MapSquareLocation>*)this_00);
                        local_44 = (int)*(char*)(lVar7 + 5) + iVar1 * 64;
                        iVar1 = m_mapSquareZ;
                        lVar7 = shared_ptr<MapSquareLocation>::operator->((shared_ptr<MapSquareLocation>*)this_00);
                        local_40 = (int)*(char*)(lVar7 + 6) + iVar1 * 64;
                        lVar7 = shared_ptr<MapSquareLocation>::operator->((shared_ptr<MapSquareLocation>*)this_00);
                        local_3c = (int)*(char*)(lVar7 + 5) - m_minGridX;
                        lVar7 = shared_ptr<MapSquareLocation>::operator->((shared_ptr<MapSquareLocation>*)this_00);
                        local_38 = (int)*(char*)(lVar7 + 6) - m_minGridZ;
                        lVar7 = shared_ptr<MapSquareLocation>::operator->((shared_ptr<MapSquareLocation>*)this_00);
                        lVar8 = shared_ptr<MapSquareLocation>::operator->((shared_ptr<MapSquareLocation>*)this_00);
                        lVar9 = shared_ptr<MapSquareLocation>::operator->((shared_ptr<MapSquareLocation>*)this_00);
                        MakeSharedPool<Location, 256>::MakeShared<graphics::GraphNode*&, shared_ptr<World> const&,
                                                                  signed char&, int&, LocData&, bool&, bool, int, int,
                                                                  int, int, signed char&, unsigned short&, bool&>(
                            &local_98, (MakeSharedPool<Location, 256>*)&local_50, local_88, local_80, local_78,
                            local_70, (LocData*)(lVar6 + 60), &local_31, (bool*)&local_44, &local_40, &local_3c,
                            &local_38, (int*)(lVar7 + 62), (signed*)(lVar8 + 64), (ushort*)(lVar9 + 66),
                            in_stack_ffffffffffffff60);
                        this_01 = (Location*)shared_ptr<Location>::operator->((shared_ptr<Location>*)&local_98);
                        this_01->SetPlayerVarDomain(field_200, m_pConfigProvider);
                        pEVar10 = (Entity*)shared_ptr<Location>::operator->((shared_ptr<Location>*)&local_98);
                        pEVar10->SetTargetLOD(0);
                        pGVar5 = local_50;
                        pGVar11 = (GraphEntity*)local_98.end();
                        pGVar5->SetEntity(pGVar11);
                        eastl::vector<shared_ptr<Location>, eastl::allocator>::push_back(local_68, &local_98);
                        local_98.~shared_ptr();
                        pGVar5 = local_60;
                    }
                    this_00 = (GraphNode*)&this_00->field_112;
                } while (this_00 != pGVar5);
            }
            *(undefined1*)((long)&local_58->field_80 + 1) = 1;
            bVar3 = field_176->operator_cast_to_bool();
            if (bVar3) {
                this_02 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)field_176);
                this_02->AddBuiltZone(this);
            }
        }
    }

    // 0x10040d960, 192 bytes, placed by class name
    // LocationContainer::DestructAllBuiltLocationsAtLOD(LODLevel)
    void LocationContainer::DestructAllBuiltLocationsAtLOD(uint param_2) {
        StaticLocationLODContainer* this_00;
        shared_ptr* psVar1;
        Location* this_01;
        Entity* pEVar2;
        GraphNode* this_02;
        shared_ptr* this_03;
        long* plVar4;
        undefined1* this_04;

        this_00 = (StaticLocationLODContainer*)std::array<StaticLocationLODContainer, 7ul>::operator[](
            (array<StaticLocationLODContainer, 7ul>*)(field_352 + 32), (ulong)param_2);
        this_00->Destruct();
        this_04 = field_352;
        this_03 = (shared_ptr*)this_04->HeapBeginPtr();
        while (psVar1 = (shared_ptr*)this_04->end(), this_03 != psVar1) {
            this_01 = (Location*)shared_ptr<Location>::operator->((shared_ptr<Location>*)this_03);
            if (this_01->GetLocationLOD() == (char)param_2) {
                plVar4 = (long*)shared_ptr<Location>::operator->((shared_ptr<Location>*)this_03);
                (**(code**)(*plVar4 + 200))(plVar4);
                pEVar2 = (Entity*)shared_ptr<Location>::operator->((shared_ptr<Location>*)this_03);
                pEVar2->ResetWorld();
                pEVar2 = (Entity*)shared_ptr<Location>::operator->((shared_ptr<Location>*)this_03);
                this_02 = (GraphNode*)pEVar2->GetNode();
                this_02->Detach();
                this_03 = (shared_ptr*)this_04->erase(this_03);
            } else {
                this_03 = this_03 + 1;
            }
        }
    }

    // 0x10040da20, 192 bytes, placed by class name
    // LocationContainer::BuildStaticUncombinableLocations(graphics::RT7Core&, Js5ResourceProvider&, ConfigProvider&, AssetBuilder&, unsigned int)
    ulong LocationContainer::BuildStaticUncombinableLocations(RT7Core* param_1, Js5ResourceProvider* param_2,
                                                              ConfigProvider* param_3, AssetBuilder* param_4,
                                                              uint param_5) {
        undefined1* this_00;
        shared_ptr<Location>* this_01;
        shared_ptr<Location>* psVar2;
        Location* this_02;
        ModularParticleEmitterTemplate* this_03;
        undefined7 uVar4;
        ulong uVar3;

        this_00 = field_352;
        this_01 = (shared_ptr<Location>*)this_00->HeapBeginPtr();
        psVar2 = (shared_ptr<Location>*)this_00->end();
        uVar4 = (undefined7)((ulong)this_00 >> 8);
        if (this_01 == psVar2) {
            uVar3 = CONCAT71(uVar4, 1);
        } else {
            uVar3 = CONCAT71(uVar4, 1);
            do {
                this_02 = (Location*)shared_ptr<Location>::operator->(this_01);
                this_02->Build(param_1, param_2, param_3, param_4, param_5, field_200);
                this_03 = (ModularParticleEmitterTemplate*)shared_ptr<Location>::operator->(this_01);
                if (this_03->GetNumTilesPerRow() == '\0') {
                    uVar3 = uVar3 & 255;
                } else {
                    uVar3 = 0;
                }
                this_01 = this_01 + 16;
            } while (this_01 != psVar2);
        }
        return uVar3 & 4294967295;
    }

    // 0x10040dae0, 352 bytes, placed by class name
    // LocationContainer::BuildDynamicLocations(eastl::vector<shared_ptr<Location>, eastl::allocator>&, graphics::RT7Core&, Js5ResourceProvider&, ConfigProvider&, AssetBuilder&, unsigned int)
    ulong LocationContainer::BuildDynamicLocations(vector* param_1, RT7Core* param_2, Js5ResourceProvider* param_3,
                                                   ConfigProvider* param_4, AssetBuilder* param_5, uint param_6) {
        char cVar1;
        bool bVar2;
        shared_ptr* psVar3;
        shared_ptr* psVar4;
        Location* this_00;
        ModularParticleEmitterTemplate* this_01;
        undefined1 uVar5;
        undefined7 uVar6;
        undefined1 auVar7[16];
        shared_ptr local_68;
        eastl local_38[8];

        psVar3 = (shared_ptr*)param_1->HeapBeginPtr();
        auVar7 = param_1->end();
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)"EASTL vector", auVar7._8_8_);
        eastl::vector<shared_ptr<Location>, BucketAllocatorEASTL>::vector<shared_ptr<Location> const*>(
            &local_68, psVar3, auVar7._0_8_);
        psVar3 = (shared_ptr*)local_68.HeapBeginPtr();
        psVar4 = (shared_ptr*)local_68.end();
        uVar6 = auVar7._1_7_;
        if (psVar3 == psVar4) {
            uVar5 = 1;
        } else {
            uVar5 = 1;
            do {
                bVar2 = shared_ptr::operator_cast_to_bool(psVar3);
                if (!bVar2) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("dynamicLocation",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/entities/LocationContainer.cpp",
                              487, (char*)0);
                }
                this_00 = (Location*)shared_ptr<Location>::operator->((shared_ptr<Location>*)psVar3);
                this_00->Build(param_2, param_3, param_4, param_5, param_6, field_200);
                bVar2 = shared_ptr::operator_cast_to_bool(psVar3);
                if (bVar2) {
                    this_01 = (ModularParticleEmitterTemplate*)shared_ptr<Location>::operator->(
                        (shared_ptr<Location>*)psVar3);
                    cVar1 = this_01->GetNumTilesPerRow();
                    uVar6 = 0;
                    if (cVar1 != '\0') {
                        uVar5 = 0;
                        uVar6 = 0;
                    }
                }
                psVar3 = psVar3 + 1;
            } while (psVar3 != psVar4);
        }
        local_68.~vector();
        return CONCAT71(uVar6, uVar5) & 4294967295;
    }

    // 0x10040dc40, 704 bytes, placed by class name
    // LocationContainer::BuildMultiLocations(graphics::RT7Core&, Js5ResourceProvider&, ConfigProvider&, AssetBuilder&, unsigned int)
    void LocationContainer::BuildMultiLocations(RT7Core* param_1, Js5ResourceProvider* param_2, ConfigProvider* param_3,
                                                AssetBuilder* param_4, uint param_5) {
        int iVar1;
        char cVar2;
        ulong uVar3;
        shared_ptr<MapSquareLocation>* this_00;
        long lVar4;
        long lVar5;
        long lVar6;
        long lVar7;
        Location* this_01;
        GraphEntity* pGVar8;
        GraphNode* pGVar9;
        Entity* pEVar10;
        GraphNode* this_02;
        bool* in_stack_ffffffffffffff40;
        undefined1 local_b8[16];
        GraphNode** local_a8;
        shared_ptr* local_a0;
        signed* local_98;
        int* local_90;
        shared_ptr<MapSquareLocation>* local_88;
        int local_5c;
        int local_58;
        int local_54;
        int local_50;
        GraphNode* local_48;
        vector<shared_ptr<Location>, eastl::allocator>* local_40;
        bool local_31;

        local_40 = (vector<shared_ptr<Location>, eastl::allocator>*)&field_288;
        cVar2 = local_40->empty();
        if (cVar2 != '\0') {
            this_02 = (GraphNode*)&field_240;
            cVar2 = this_02->empty();
            if (cVar2 == '\0') {
                uVar3 = this_02->size();
                eastl::vector<shared_ptr<Location>, eastl::allocator>::reserve(local_40, uVar3);
                this_00 = (shared_ptr<MapSquareLocation>*)this_02->HeapBeginPtr();
                local_88 = (shared_ptr<MapSquareLocation>*)this_02->end();
                if (this_00 != local_88) {
                    do {
                        local_48 = graphics::GraphNode::Create<>(this_02);
                        local_a8 = (GraphNode**)GetWorld();
                        lVar4 = shared_ptr<MapSquareLocation>::operator->(this_00);
                        local_a0 = (shared_ptr*)(lVar4 + 4);
                        local_98 = (signed*)shared_ptr<MapSquareLocation>::operator->(this_00);
                        lVar4 = shared_ptr<MapSquareLocation>::operator->(this_00);
                        local_90 = (int*)(lVar4 + 8);
                        lVar4 = shared_ptr<MapSquareLocation>::operator->(this_00);
                        lVar5 = shared_ptr<MapSquareLocation>::operator->(this_00);
                        local_31 = (bool)(*(byte*)(lVar5 + 61) ^ 1);
                        iVar1 = m_mapSquareX;
                        lVar5 = shared_ptr<MapSquareLocation>::operator->(this_00);
                        local_5c = (int)*(char*)(lVar5 + 5) + iVar1 * 64;
                        iVar1 = m_mapSquareZ;
                        lVar5 = shared_ptr<MapSquareLocation>::operator->(this_00);
                        local_58 = (int)*(char*)(lVar5 + 6) + iVar1 * 64;
                        lVar5 = shared_ptr<MapSquareLocation>::operator->(this_00);
                        local_54 = (int)*(char*)(lVar5 + 5) - m_minGridX;
                        lVar5 = shared_ptr<MapSquareLocation>::operator->(this_00);
                        local_50 = (int)*(char*)(lVar5 + 6) - m_minGridZ;
                        lVar5 = shared_ptr<MapSquareLocation>::operator->(this_00);
                        lVar6 = shared_ptr<MapSquareLocation>::operator->(this_00);
                        lVar7 = shared_ptr<MapSquareLocation>::operator->(this_00);
                        this_02 = (GraphNode*)local_b8;
                        MakeSharedPool<Location, 256>::MakeShared<graphics::GraphNode*&, shared_ptr<World> const&,
                                                                  signed char&, int&, LocData&, bool&, bool, int, int,
                                                                  int, int, signed char&, unsigned short&, bool&>(
                            (shared_ptr*)this_02, (MakeSharedPool<Location, 256>*)&local_48, local_a8, local_a0,
                            local_98, local_90, (LocData*)(lVar4 + 60), &local_31, (bool*)&local_5c, &local_58,
                            &local_54, &local_50, (int*)(lVar5 + 62), (signed*)(lVar6 + 64), (ushort*)(lVar7 + 66),
                            in_stack_ffffffffffffff40);
                        this_01 = (Location*)shared_ptr<Location>::operator->((shared_ptr<Location>*)this_02);
                        this_01->SetPlayerVarDomain(field_200, m_pConfigProvider);
                        pGVar9 = local_48;
                        pGVar8 = (GraphEntity*)this_02->end();
                        pGVar9->SetEntity(pGVar8);
                        eastl::vector<shared_ptr<Location>, eastl::allocator>::push_back(local_40,
                                                                                         (shared_ptr*)this_02);
                        pGVar9 = (GraphNode*)GetNode();
                        pGVar9->AddChild(local_48);
                        pEVar10 = (Entity*)shared_ptr<Location>::operator->((shared_ptr<Location>*)this_02);
                        pEVar10->SetTargetLOD(0);
                        this_02->~shared_ptr();
                        this_00 = this_00 + 16;
                    } while (this_00 != local_88);
                }
            }
        }
        BuildDynamicLocations(this, (vector*)local_40, param_1, param_2, param_3, param_4, param_5);
    }

    // 0x10040e1d0, 1088 bytes, placed by class name
    // LocationContainer::LoadLocationModels(bool&, bool&, graphics::RT7Core&, AssetBuilder&, eastl::vector<LocationContainerLocation, eastl::allocator>&, AssetJobPriority, HeightMap const&, LinkMap const&)
    void LocationContainer::LoadLocationModels(undefined1* param_1, undefined1* param_2, type* param_3,
                                               undefined8 param_4,
                                               vector<graphics::SpriteAtlasMapping, eastl::allocator>* param_5,
                                               undefined4 param_7, undefined8 param_8, LinkMap* param_9) {
        BuildRequest<graphics::Model, BuildModelMain>* this_00;
        undefined4 uVar1;
        char cVar2;
        undefined1 uVar3;
        undefined1 uVar4;
        byte bVar5;
        shared_ptr<MapSquareLocation> sVar6;
        int iVar7;
        int iVar8;
        long lVar9;
        ulong uVar10;
        shared_ptr<MapSquareLocation>* this_01;
        undefined8 uVar11;
        undefined* puVar12;
        vector* this_02;
        NXTPixToolkit* pNVar13;
        Vector2T<int>* this_03;
        float* pfVar14;
        LocType* pLVar15;
        uint uVar16;
        int iVar18;
        int iVar19;
        ulong uVar20;

        lVar9 = eastl::vector<graphics::SpriteAtlasMapping, eastl::allocator>::size(param_5);
        if (lVar9 != 0) {
            uVar16 = 1;
            uVar20 = 0;
            do {
                this_01 = (shared_ptr<MapSquareLocation>*)
                    eastl::vector<LocationContainerLocation, eastl::allocator>::operator[](
                        (vector<LocationContainerLocation, eastl::allocator>*)param_5, uVar20);
                this_00 = (BuildRequest<graphics::Model, BuildModelMain>*)(this_01 + 16);
                cVar2 = this_00->IsTaskDone();
                if (cVar2 == '\0') {
                LAB_10040e26f:
                    lVar9 = shared_ptr<MapSquareLocation>::operator->(this_01);
                    uVar11 = shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar9 + 72));
                    lVar9 = shared_ptr<MapSquareLocation>::operator->(this_01);
                    uVar3 = ((lVar9 + 8))->GetShape();
                    lVar9 = shared_ptr<MapSquareLocation>::operator->(this_01);
                    uVar4 = ((lVar9 + 8))->GetRot();
                    lVar9 = shared_ptr<MapSquareLocation>::operator->(this_01);
                    puVar12 = (undefined*)LocType::GetModels(uVar11, param_3, param_4, this_00, uVar3, uVar4,
                                                             *(undefined1*)(lVar9 + 60), 0, param_7);
                    if (puVar12 == DataStatus::NOTLOADED) {
                        *param_1 = 0;
                    } else if (puVar12 == DataStatus::MISSING) {
                        *(undefined4*)(this_01 + 48) = 0;
                    } else if (puVar12 == DataStatus::READY) {
                        this_02 = this_00->SSOBeginPtr(param_3);
                        pNVar13 = (NXTPixToolkit*)shared_ptr<graphics::Model>::operator->(
                            (shared_ptr<graphics::Model>*)this_02);
                        pNVar13 = (NXTPixToolkit*)pNVar13->GetScreen();
                        this_03 = (Vector2T<int>*)pNVar13->GetScreen();
                        pfVar14 = (float*)this_03->y();
                        *(int*)(this_01 + 48) = (int)*pfVar14;
                    }
                } else {
                    cVar2 = this_00->IsEmpty();
                    if (cVar2 != '\0')
                        goto LAB_10040e26f;
                }
                iVar7 = m_mapSquareX;
                lVar9 = shared_ptr<MapSquareLocation>::operator->(this_01);
                iVar19 = (int)*(char*)(lVar9 + 5) + iVar7 * 64;
                iVar7 = m_mapSquareZ;
                lVar9 = shared_ptr<MapSquareLocation>::operator->(this_01);
                iVar18 = (int)*(char*)(lVar9 + 6) + iVar7 * 64;
                lVar9 = shared_ptr<MapSquareLocation>::operator->(this_01);
                cVar2 = *(char*)(lVar9 + 4);
                bVar5 = param_9->IsLinkBelow(iVar19, iVar18);
                iVar7 = (uint)bVar5 + (int)cVar2;
                if (*(int*)(this_01 + 52) == -2147483648) {
                    lVar9 = shared_ptr<MapSquareLocation>::operator->(this_01);
                    pLVar15 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar9 + 72));
                    lVar9 = shared_ptr<MapSquareLocation>::operator->(this_01);
                    uVar11 = ((lVar9 + 72))->end();
                    lVar9 = shared_ptr<MapSquareLocation>::operator->(this_01);
                    uVar3 = ((lVar9 + 8))->GetRot();
                    lVar9 = shared_ptr<MapSquareLocation>::operator->(this_01);
                    iVar8 = pLVar15->GetLocationHeight(uVar11, param_8, iVar7, iVar19, iVar18, uVar3,
                                                       *(undefined1*)(lVar9 + 61));
                    if (iVar8 == -1) {
                        *param_2 = 0;
                    } else {
                        *(int*)(this_01 + 52) = iVar8;
                    }
                }
                lVar9 = shared_ptr<MapSquareLocation>::operator->(this_01);
                pLVar15 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar9 + 72));
                iVar8 = pLVar15->GetHillChangeType();
                if (this_01[105] == (shared_ptr<MapSquareLocation>)255) {
                    if (iVar8 - 1U < 3) {
                        lVar9 = shared_ptr<MapSquareLocation>::operator->(this_01);
                        pLVar15 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar9 + 72));
                        lVar9 = shared_ptr<MapSquareLocation>::operator->(this_01);
                        uVar11 = ((lVar9 + 72))->end();
                        uVar1 = *(undefined4*)(this_01 + 52);
                        lVar9 = shared_ptr<MapSquareLocation>::operator->(this_01);
                        uVar3 = ((lVar9 + 8))->GetRot();
                        lVar9 = shared_ptr<MapSquareLocation>::operator->(this_01);
                        sVar6 = (shared_ptr<MapSquareLocation>)pLVar15->GetLocationOnFlatGround(
                            uVar11, uVar1, param_8, iVar7, iVar19, iVar18, uVar3, *(undefined1*)(lVar9 + 61));
                    } else {
                        sVar6 = (shared_ptr<MapSquareLocation>)0;
                    }
                    this_01[105] = sVar6;
                }
                cVar2 = ((this_01 + 56))->empty();
                if (cVar2 != '\0') {
                    cVar2 = ((this_01 + 80))->empty();
                    if (((cVar2 != '\0') && (this_01[105] == (shared_ptr<MapSquareLocation>)0)) && (iVar8 != 0)) {
                        lVar9 = shared_ptr<MapSquareLocation>::operator->(this_01);
                        pLVar15 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)(lVar9 + 72));
                        lVar9 = shared_ptr<MapSquareLocation>::operator->(this_01);
                        uVar11 = ((lVar9 + 72))->end();
                        lVar9 = shared_ptr<MapSquareLocation>::operator->(this_01);
                        uVar3 = ((lVar9 + 8))->GetRot();
                        lVar9 = shared_ptr<MapSquareLocation>::operator->(this_01);
                        cVar2 = pLVar15->GetHillData((Array<VarValue, eastl::allocator>*)(this_01 + 56),
                                                     (Array<VarValue, eastl::allocator>*)(this_01 + 80), uVar11,
                                                     param_8, iVar7, iVar19, iVar18, uVar3, *(undefined1*)(lVar9 + 61));
                        if (cVar2 == '\0') {
                            *param_2 = 0;
                        }
                    }
                }
                uVar20 = (ulong)uVar16;
                uVar10 = eastl::vector<graphics::SpriteAtlasMapping, eastl::allocator>::size(param_5);
                uVar16 = uVar16 + 1;
            } while (uVar20 < uVar10);
        }
    }

    // 0x10040e850, 624 bytes, placed by class name
    // LocationContainer::Destruct()
    void LocationContainer::Destruct() {
        undefined1* puVar1;
        StaticLocationLODContainer* this_00;
        StaticLocationLODContainer* pSVar2;
        shared_ptr<Location>* psVar3;
        shared_ptr<Location>* psVar4;
        long* plVar5;
        Entity* pEVar6;
        GraphNode* pGVar7;
        GraphNode* pGVar8;
        shared_ptr<CombinedLocation>* this_01;
        shared_ptr<CombinedLocation>* psVar9;

        this_00 = (StaticLocationLODContainer*)((field_352 + 32))->begin();
        pSVar2 = (StaticLocationLODContainer*)((field_352 + 32))->end();
        for (; this_00 != pSVar2; this_00 = this_00 + 1) {
            this_01 = (shared_ptr<CombinedLocation>*)(&this_00->field_48)->HeapBeginPtr();
            psVar9 = (shared_ptr<CombinedLocation>*)(&this_00->field_48)->end();
            for (; this_01 != psVar9; this_01 = this_01 + 16) {
                plVar5 = (long*)shared_ptr<CombinedLocation>::operator->(this_01);
                (**(code**)(*plVar5 + 200))(plVar5);
                pEVar6 = (Entity*)shared_ptr<CombinedLocation>::operator->(this_01);
                pEVar6->ResetWorld();
                pGVar7 = (GraphNode*)GetNode();
                pEVar6 = (Entity*)shared_ptr<CombinedLocation>::operator->(this_01);
                pGVar8 = (GraphNode*)pEVar6->GetNode();
                pGVar7->RemoveChild(pGVar8);
            }
            this_00->Destruct();
        }
        puVar1 = &field_288;
        psVar3 = (shared_ptr<Location>*)puVar1->HeapBeginPtr();
        psVar4 = (shared_ptr<Location>*)puVar1->end();
        for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
            plVar5 = (long*)shared_ptr<Location>::operator->(psVar3);
            (**(code**)(*plVar5 + 200))(plVar5);
            pEVar6 = (Entity*)shared_ptr<Location>::operator->(psVar3);
            pEVar6->ResetWorld();
            pGVar7 = (GraphNode*)GetNode();
            pEVar6 = (Entity*)shared_ptr<Location>::operator->(psVar3);
            pGVar8 = (GraphNode*)pEVar6->GetNode();
            pGVar7->RemoveChild(pGVar8);
        }
        puVar1->clear();
        puVar1 = &field_320;
        psVar3 = (shared_ptr<Location>*)puVar1->HeapBeginPtr();
        psVar4 = (shared_ptr<Location>*)puVar1->end();
        for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
            plVar5 = (long*)shared_ptr<Location>::operator->(psVar3);
            (**(code**)(*plVar5 + 200))(plVar5);
            pEVar6 = (Entity*)shared_ptr<Location>::operator->(psVar3);
            pEVar6->ResetWorld();
            pGVar7 = (GraphNode*)GetNode();
            pEVar6 = (Entity*)shared_ptr<Location>::operator->(psVar3);
            pGVar8 = (GraphNode*)pEVar6->GetNode();
            pGVar7->RemoveChild(pGVar8);
        }
        puVar1->clear();
        puVar1 = field_352;
        psVar3 = (shared_ptr<Location>*)puVar1->HeapBeginPtr();
        psVar4 = (shared_ptr<Location>*)puVar1->end();
        for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
            plVar5 = (long*)shared_ptr<Location>::operator->(psVar3);
            (**(code**)(*plVar5 + 200))(plVar5);
            pEVar6 = (Entity*)shared_ptr<Location>::operator->(psVar3);
            pEVar6->ResetWorld();
        }
        puVar1->clear();
        SetCurrentLOD(6);
        field_208 = 6;
        m_hasStartedBuild = 0;
    }

    // 0x10040eaf0, 80 bytes, placed by neighbouring functions
    // StaticLocationLODContainer::Destruct()
    void StaticLocationLODContainer::Destruct() {
        BuildCombinedLocationMain* this_00;

        (&field_48)->clear();
        field_80 = 0;
        if (field_32->operator_cast_to_bool()) {
            this_00 = (BuildCombinedLocationMain*)shared_ptr<BuildCombinedLocationMain>::operator->(
                (shared_ptr<BuildCombinedLocationMain>*)field_32);
            this_00->ResetLocationContainer();
            shared_ptr<BuildCombinedLocationMain>::reset();
        }
    }

    // 0x10040ebb0, 864 bytes, placed by class name
    // LocationContainer::ChangeLocation(ChangeLocationRequest const&)
    long LocationContainer::ChangeLocation(ChangeLocationRequest* param_1) {
        vector<shared_ptr<Location>, eastl::allocator>* this_00;
        undefined1 uVar1;
        char cVar2;
        int iVar4;
        long* plVar5;
        LocData* pLVar6;
        Vector2T<int>* this_01;
        RotTransScale* pRVar7;
        shared_ptr* psVar8;
        long lVar9;
        CoordGrid* this_02;
        ModelParticleSource* this_03;
        GraphNode** ppGVar10;
        undefined1* puVar11;
        WorldmapAreaMetadata* this_04;
        Text* this_05;
        Location* pLVar12;
        GraphEntity* pGVar13;
        GraphNode* pGVar14;
        Entity* pEVar15;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_06;
        undefined1 auVar16[16];
        shared_ptr* in_stack_ffffffffffffff18;
        int aiStack_dc[5];
        undefined1 auStack_c8[24];
        undefined1 local_b0[48];
        vector<shared_ptr<Location>, eastl::allocator>* local_70;
        int local_64;
        shared_ptr local_60;
        GraphNode* local_50;
        shared_ptr local_48;
        byte local_32;
        bool local_31;

        plVar5 = (long*)FindLocation(this, param_1, false);
        new (local_b0) math::RotTransScale();
        if (plVar5 == (long*)0) {
            iVar4 = -1;
        } else {
            pLVar6 = (LocData*)param_1->GetOffset();
            uVar1 = pLVar6->GetShape();
            cVar2 = LocShapes::IsWallDecorShape(uVar1);
            iVar4 = -1;
            if (cVar2 != '\0') {
                iVar4 = (**(code**)(*plVar5 + 384))(plVar5);
            }
            cVar2 = param_1->OverrideTransform();
            if (cVar2 == '\0') {
                pRVar7 = (RotTransScale*)(aiStack_dc + -3);
                (**(code**)(*plVar5 + 360))(pRVar7, plVar5);
            } else {
                this_01 = (Vector2T<int>*)param_1->GetOffset();
                pRVar7 = (RotTransScale*)this_01->y();
            }
            math::RotTransScale::operator=((RotTransScale*)local_b0, pRVar7);
        }
        psVar8 = (shared_ptr*)param_1->GetOrigin();
        if ((shared_ptr::operator_cast_to_bool(psVar8)) ||
            (lVar9 = UnhideCombinedLocationSection(this, param_1), lVar9 == 0)) {
            local_70 = (vector<shared_ptr<Location>, eastl::allocator>*)&field_320;
            pGVar14 = (GraphNode*)this;
            local_60.field_8._4_4_ = iVar4;
            DeleteUncombinedLocation((vector*)this, (ChangeLocationRequest*)local_70, (Location*)param_1, false);
            local_50 = graphics::GraphNode::Create<>(pGVar14);
            local_64 = param_1->GetStickTime();
            auVar16 = param_1->second();
            this_02 = auVar16._0_8_;
            MakeSharedPool<ChangeLocationRequest, 128>::MakeShared<ChangeLocationRequest_const&>(
                (shared_ptr*)(local_b0 + 48), (MakeSharedPool<ChangeLocationRequest, 128>*)param_1, auVar16._8_8_);
            this_03 = (ModelParticleSource*)shared_ptr<ChangeLocationRequest>::operator->(
                (shared_ptr<ChangeLocationRequest>*)(local_b0 + 48));
            this_03->SetSourceModelExternalID(-1);
            ppGVar10 = (GraphNode**)GetWorld();
            local_60._0_4_ = param_1->GetPos();
            puVar11 = (undefined1*)param_1->GetOffset();
            uVar1 = *puVar11;
            lVar9 = param_1->GetOffset();
            new ((aiStack_dc + -3)) LocData(uVar1, *(undefined1*)(lVar9 + 1), local_b0);
            pLVar6 = (LocData*)param_1->GetOffset();
            cVar2 = pLVar6->GetShape();
            local_32 = cVar2 == '\x02';
            local_31 = false;
            local_60._4_4_ = this_02->GetLocalX();
            local_60._4_4_ = local_60._4_4_ - m_minGridX;
            local_60.field_8._0_4_ = this_02->GetLocalZ();
            local_60.field_8._0_4_ = (int)local_60.field_8 - m_minGridZ;
            this_04 = (WorldmapAreaMetadata*)shared_ptr<ChangeLocationRequest>::operator->(
                (shared_ptr<ChangeLocationRequest>*)(local_b0 + 48));
            psVar8 = (shared_ptr*)this_04->GetOrigin();
            MakeSharedPool<Location, 256>::MakeShared<graphics::GraphNode*&, shared_ptr<World> const&, int, int&,
                                                      LocData, bool, bool, unsigned int const&, unsigned int const&,
                                                      int, int, shared_ptr<ChangeLocationRequest>&,
                                                      shared_ptr<LocTypeCustomisation> const&>(
                &local_48, (MakeSharedPool<Location, 256>*)&local_50, ppGVar10, &local_60, &local_64, aiStack_dc + -3,
                (LocData*)&local_32, &local_31, (bool*)&this_02->field_4, &this_02->field_8, (uint*)&local_60.field_4,
                (int*)&local_60.field_8, (int*)(local_b0 + 48), psVar8, in_stack_ffffffffffffff18);
            this_05 = (Text*)shared_ptr<Location>::operator->((shared_ptr<Location>*)&local_48);
            this_00 = local_70;
            this_05->SetLinkObjType(local_60.field_8._4_4_);
            pLVar12 = (Location*)shared_ptr<Location>::operator->((shared_ptr<Location>*)&local_48);
            pLVar12->BlockFadeIn();
            pLVar12 = (Location*)shared_ptr<Location>::operator->((shared_ptr<Location>*)&local_48);
            pLVar12->SetPlayerVarDomain(field_200, m_pConfigProvider);
            pGVar14 = local_50;
            pGVar13 = (GraphEntity*)local_48.end();
            pGVar14->SetEntity(pGVar13);
            eastl::vector<shared_ptr<Location>, eastl::allocator>::push_back(this_00, &local_48);
            pGVar14 = (GraphNode*)GetNode();
            pGVar14->AddChild(local_50);
            pEVar15 = (Entity*)shared_ptr<Location>::operator->((shared_ptr<Location>*)&local_48);
            pEVar15->SetTargetLOD(0);
            (*(code*)field_0[6])(this);
            this_06 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                eastl::vector<shared_ptr<Location>, eastl::allocator>::back(this_00);
            lVar9 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_06);
            local_48.~shared_ptr();
            ((local_b0 + 48))->~shared_ptr();
            return lVar9;
        }
        DeleteUncombinedLocation((vector*)this, (ChangeLocationRequest*)&field_320, (Location*)param_1, false);
        return lVar9;
    }

    // 0x10040ef10, 272 bytes, placed by class name
    // LocationContainer::FindLocation(ChangeLocationRequest const&, bool)
    long LocationContainer::FindLocation(ChangeLocationRequest* param_1, bool param_2) {
        bool bVar1;
        LocationContainer* pLVar2;
        long lVar3;
        shared_ptr* this_00;
        byte* pbVar4;
        StaticLocationLODContainer* pSVar5;
        ulong uVar6;
        LocationContainer* pLVar7;

        pLVar2 = (LocationContainer*)FindLocationInList(this, (vector*)&field_288, param_1);
        pLVar7 = pLVar2;
        bVar1 = pLVar2->operator_cast_to_bool();
        if (bVar1) {
            lVar3 = pLVar2->end();
        } else {
            if (!param_2) {
                pLVar2 = (LocationContainer*)FindLocationInList(pLVar7, (vector*)&field_320, param_1);
                pLVar7 = pLVar2;
                bVar1 = pLVar2->operator_cast_to_bool();
                if (bVar1) {
                    lVar3 = pLVar2->end();
                    return lVar3;
                }
            }
            this_00 = (shared_ptr*)FindLocationInList(pLVar7, (vector*)field_352, param_1);
            bVar1 = shared_ptr::operator_cast_to_bool(this_00);
            if (bVar1) {
                lVar3 = this_00->end();
            } else {
                uVar6 = 4;
                do {
                    pbVar4 = (byte*)std::array<LODLevel, 5ul>::operator[](uVar6);
                    pLVar7 = (LocationContainer*)(field_352 + 32);
                    pSVar5 = (StaticLocationLODContainer*)std::array<StaticLocationLODContainer, 7ul>::operator[](
                        (array<StaticLocationLODContainer, 7ul>*)(field_352 + 32), (ulong)*pbVar4);
                    lVar3 = FindLocationInLOD(pLVar7, pSVar5, param_1);
                    if (lVar3 != 0) {
                        return lVar3;
                    }
                    bVar1 = uVar6 != 0;
                    uVar6 = uVar6 - 1;
                } while (bVar1);
                lVar3 = 0;
            }
        }
        return lVar3;
    }

    // 0x10040f020, 96 bytes, placed by class name
    // LocationContainer::UnhideCombinedLocationSection(ChangeLocationRequest const&)
    long LocationContainer::UnhideCombinedLocationSection(ChangeLocationRequest* param_1) {
        byte* pbVar1;
        StaticLocationLODContainer* pSVar2;
        long lVar3;
        ulong uVar4;
        LocationContainer* this_00;
        bool bVar5;

        uVar4 = 4;
        do {
            pbVar1 = (byte*)std::array<LODLevel, 5ul>::operator[](uVar4);
            this_00 = (LocationContainer*)(field_352 + 32);
            pSVar2 = (StaticLocationLODContainer*)std::array<StaticLocationLODContainer, 7ul>::operator[](
                (array<StaticLocationLODContainer, 7ul>*)(field_352 + 32), (ulong)*pbVar1);
            lVar3 = UnhideCombinedLocationSectionLOD(this_00, param_1, pSVar2);
            if (lVar3 != 0) {
                return lVar3;
            }
            bVar5 = uVar4 != 0;
            uVar4 = uVar4 - 1;
        } while (bVar5);
        return 0;
    }

    // 0x10040f080, 240 bytes, placed by class name
    // LocationContainer::DeleteUncombinedLocation(eastl::vector<shared_ptr<Location>, eastl::allocator>&, ChangeLocationRequest const&, Location const*, bool)
    bool LocationContainer::DeleteUncombinedLocation(vector* param_1, ChangeLocationRequest* param_2, Location* param_3,
                                                     bool param_4) {
        undefined8 uVar1;
        undefined8 uVar2;
        shared_ptr* this;
        shared_ptr* psVar3;
        long* plVar4;
        Entity* pEVar5;
        GraphNode* this_00;
        GraphNode* pGVar6;

        uVar1 = param_2->HeapBeginPtr();
        uVar2 = param_2->end();
        this = eastl::find_if<shared_ptr<Location>*, LocationContainer::DeleteUncombinedLocation(
                                                         eastl::vector<shared_ptr<Location>, eastl::allocator>&,
                                                         ChangeLocationRequest_const&, Location_const*, bool)::__0>(
            uVar1, uVar2);
        psVar3 = (shared_ptr*)param_2->end();
        if (this != psVar3) {
            plVar4 = (long*)shared_ptr<Location>::operator->((shared_ptr<Location>*)this);
            (**(code**)(*plVar4 + 200))(plVar4);
            pEVar5 = (Entity*)shared_ptr<Location>::operator->((shared_ptr<Location>*)this);
            pEVar5->ResetWorld();
            this_00 = (GraphNode*)param_1->GetNode();
            pEVar5 = (Entity*)shared_ptr<Location>::operator->((shared_ptr<Location>*)this);
            pGVar6 = (GraphNode*)pEVar5->GetNode();
            this_00->RemoveChild(pGVar6);
            param_2->erase(this);
        }
        return this != psVar3;
    }

    // 0x10040f470, 160 bytes, placed by class name
    // LocationContainer::DeleteLocation(ChangeLocationRequest const&, Location const*)
    void LocationContainer::DeleteLocation(ChangeLocationRequest* param_1, Location* param_2) {
        char cVar1;
        bool bVar2;

        bVar2 = SUB81(param_2, 0);
        DeleteUncombinedLocation((vector*)this, (ChangeLocationRequest*)&field_320, (Location*)param_1, bVar2);
        cVar1 = DeleteUncombinedLocation((vector*)this, (ChangeLocationRequest*)&field_320, (Location*)param_1, bVar2);
        if (cVar1 == '\0') {
            cVar1 =
                DeleteUncombinedLocation((vector*)this, (ChangeLocationRequest*)&field_288, (Location*)param_1, bVar2);
            if (cVar1 == '\0') {
                cVar1 = DeleteUncombinedLocation((vector*)this, (ChangeLocationRequest*)field_352, (Location*)param_1,
                                                 bVar2);
                if (cVar1 == '\0') {
                    HideLocation(this, param_1);
                }
            }
        }
    }

    // 0x10040f510, 448 bytes, placed by class name
    // LocationContainer::HideLocation(ChangeLocationRequest const&)
    undefined8 LocationContainer::HideLocation(ChangeLocationRequest* param_1) {
        char cVar1;
        int iVar2;
        int iVar3;
        shared_ptr* this_00;
        shared_ptr* psVar4;
        Location* pLVar5;
        byte* pbVar6;
        StaticLocationLODContainer* pSVar7;
        ulong uVar8;
        LocationContainer* pLVar9;
        uint7 uVar11;
        undefined8 uVar10;
        LocationContainer* this_01;

        iVar2 = param_1->GetStickTime();
        this_00 = (shared_ptr*)(&field_288)->HeapBeginPtr();
        psVar4 = (shared_ptr*)(&field_288)->end();
        uVar11 = (uint7)(uint3)((uint)iVar2 >> 8);
        for (; this_00 != psVar4; this_00 = this_00 + 1) {
            pLVar5 = (Location*)shared_ptr<Location>::operator->((shared_ptr<Location>*)this_00);
            cVar1 = pLVar5->IsHidden();
            if (cVar1 == '\0') {
                if (iVar2 != -1) {
                    pLVar5 = (Location*)shared_ptr<Location>::operator->((shared_ptr<Location>*)this_00);
                    iVar3 = (*(code*)pLVar5->field_0[38])();
                    if (iVar2 != iVar3)
                        goto LAB_10040f575;
                }
                cVar1 = LocationsMatch((LocationContainer*)pLVar5, param_1, this_00, false);
                if (cVar1 != '\0')
                    goto LAB_10040f6a2;
            }
        LAB_10040f575:
        }
        this_00 = (shared_ptr*)field_352->HeapBeginPtr();
        psVar4 = (shared_ptr*)field_352->end();
        do {
            if (this_00 == psVar4) {
                this_01 = (LocationContainer*)(field_352 + 32);
                pbVar6 = (byte*)std::array<LODLevel, 5ul>::operator[](4);
                pLVar9 = this_01;
                pSVar7 = (StaticLocationLODContainer*)std::array<StaticLocationLODContainer, 7ul>::operator[](
                    (array<StaticLocationLODContainer, 7ul>*)this_01, (ulong)*pbVar6);
                cVar1 = HideLocationLOD(pLVar9, param_1, pSVar7);
                uVar10 = CONCAT71(uVar11, 1);
                if (cVar1 == '\0') {
                    uVar8 = 3;
                    do {
                        uVar10 = CONCAT71((int7)((ulong)uVar10 >> 8), uVar8 != 18446744073709551615);
                        if (uVar8 == 18446744073709551615) {
                            return uVar10;
                        }
                        pbVar6 = (byte*)std::array<LODLevel, 5ul>::operator[](uVar8);
                        pLVar9 = this_01;
                        pSVar7 = (StaticLocationLODContainer*)std::array<StaticLocationLODContainer, 7ul>::operator[](
                            (array<StaticLocationLODContainer, 7ul>*)this_01, (ulong)*pbVar6);
                        cVar1 = HideLocationLOD(pLVar9, param_1, pSVar7);
                        uVar8 = uVar8 - 1;
                    } while (cVar1 == '\0');
                }
                return uVar10;
            }
            pLVar5 = (Location*)shared_ptr<Location>::operator->((shared_ptr<Location>*)this_00);
            cVar1 = pLVar5->IsHidden();
            if (cVar1 == '\0') {
                if (iVar2 != -1) {
                    pLVar5 = (Location*)shared_ptr<Location>::operator->((shared_ptr<Location>*)this_00);
                    iVar3 = (*(code*)pLVar5->field_0[38])();
                    if (iVar2 != iVar3)
                        goto LAB_10040f5f5;
                }
                cVar1 = LocationsMatch((LocationContainer*)pLVar5, param_1, this_00, false);
                if (cVar1 != '\0') {
                LAB_10040f6a2:
                    pLVar5 = (Location*)shared_ptr<Location>::operator->((shared_ptr<Location>*)this_00);
                    pLVar5->Hide();
                    return CONCAT71(uVar11, 1);
                }
            }
        LAB_10040f5f5:
            this_00 = this_00 + 1;
        } while (true);
    }

    // 0x10040f730, 304 bytes, placed by class name
    // LocationContainer::LocationsMatch(ChangeLocationRequest const&, shared_ptr<Location> const&, bool)
    ulong LocationContainer::LocationsMatch(ChangeLocationRequest* param_1, shared_ptr* param_2, bool param_3) {
        char cVar1;
        char cVar2;
        undefined1 uVar3;
        byte bVar4;
        int iVar5;
        int iVar6;
        Location* this_00;
        long lVar7;
        HitmarkType* this_01;
        LocData* pLVar8;
        long* plVar9;
        undefined8 uVar10;

        this_00 = (Location*)shared_ptr<Location>::operator->((shared_ptr<Location>*)param_2);
        lVar7 = this_00->GetServerPosition();
        iVar5 = param_1->GetPos();
        this_01 = (HitmarkType*)shared_ptr<Location>::operator->((shared_ptr<Location>*)param_2);
        iVar6 = this_01->GetDuration();
        if (((iVar5 == iVar6) && (iVar5 = param_1->GetLevel(), iVar5 == *(int*)(lVar7 + 4))) &&
            (iVar5 = param_1->GetMaxLineWidth(), iVar5 == *(int*)(lVar7 + 8))) {
            if (param_3) {
                pLVar8 = (LocData*)param_1->GetOffset();
                cVar1 = pLVar8->GetRot();
                plVar9 = (long*)shared_ptr<Location>::operator->((shared_ptr<Location>*)param_2);
                cVar2 = (**(code**)(*plVar9 + 352))(plVar9);
                if (cVar1 != cVar2) {
                    return 0;
                }
            }
            pLVar8 = (LocData*)param_1->GetOffset();
            uVar3 = pLVar8->GetShape();
            iVar5 = LocShapes::GetLayer(uVar3);
            plVar9 = (long*)shared_ptr<Location>::operator->((shared_ptr<Location>*)param_2);
            uVar3 = (**(code**)(*plVar9 + 344))(plVar9);
            iVar6 = LocShapes::GetLayer(uVar3);
            if (iVar5 == iVar6) {
                pLVar8 = (LocData*)param_1->GetOffset();
                uVar3 = pLVar8->GetShape();
                bVar4 = LocShapes::IsAlternativePieceShape(uVar3);
                plVar9 = (long*)shared_ptr<Location>::operator->((shared_ptr<Location>*)param_2);
                uVar3 = (**(code**)(*plVar9 + 344))(plVar9);
                uVar10 = LocShapes::IsAlternativePieceShape(uVar3);
                return CONCAT71((int7)((ulong)uVar10 >> 8), (byte)uVar10 ^ bVar4) ^ 1;
            }
        }
        return 0;
    }

    // 0x10040f860, 224 bytes, placed by class name
    // LocationContainer::HideLocationLOD(ChangeLocationRequest const&, StaticLocationLODContainer&)
    undefined8 LocationContainer::HideLocationLOD(ChangeLocationRequest* param_1, StaticLocationLODContainer* param_2) {
        char cVar1;
        undefined1 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        shared_ptr<CombinedLocation>* this_00;
        shared_ptr<CombinedLocation>* psVar7;
        CombinedLocation* pCVar8;
        LocData* this_01;
        undefined8 uVar9;
        undefined1* this_02;

        this_02 = &param_2->field_48;
        cVar1 = this_02->empty();
        if (cVar1 == '\0') {
            this_00 = (shared_ptr<CombinedLocation>*)this_02->HeapBeginPtr();
            psVar7 = (shared_ptr<CombinedLocation>*)this_02->end();
            if (this_00 != psVar7) {
                do {
                    pCVar8 = (CombinedLocation*)shared_ptr<CombinedLocation>::operator->(this_00);
                    uVar3 = param_1->GetStickTime();
                    uVar4 = param_1->GetPos();
                    uVar5 = param_1->GetLevel();
                    uVar6 = param_1->GetMaxLineWidth();
                    this_01 = (LocData*)param_1->GetOffset();
                    uVar2 = this_01->GetShape();
                    uVar9 = pCVar8->HideActiveSection(uVar3, uVar4, uVar5, uVar6, uVar2);
                    if ((char)uVar9 != '\0') {
                        return uVar9;
                    }
                    this_00 = this_00 + 16;
                } while (this_00 != psVar7);
                return uVar9;
            }
        }
        return 0;
    }

    // 0x10040f940, 400 bytes, placed by class name
    // LocationContainer::HideLocations(LocShape)
    void LocationContainer::HideLocations(char param_2) {
        Location* pLVar1;
        byte* pbVar2;
        long lVar3;
        CombinedLocation* pCVar4;
        char cVar5;
        shared_ptr<Location>* psVar6;
        long* plVar7;
        shared_ptr<CombinedLocation>* psVar8;
        shared_ptr<Location>* psVar9;
        shared_ptr<CombinedLocation>* this_00;
        ulong uVar10;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_01;

        psVar9 = (shared_ptr<Location>*)(&field_288)->HeapBeginPtr();
        psVar6 = (shared_ptr<Location>*)(&field_288)->end();
        for (; psVar9 != psVar6; psVar9 = psVar9 + 16) {
            pLVar1 = (Location*)shared_ptr<Location>::operator->(psVar9);
            cVar5 = pLVar1->IsHidden();
            if (cVar5 == '\0') {
                plVar7 = (long*)shared_ptr<Location>::operator->(psVar9);
                cVar5 = (**(code**)(*plVar7 + 344))(plVar7);
                if (cVar5 == param_2) {
                    pLVar1 = (Location*)shared_ptr<Location>::operator->(psVar9);
                    pLVar1->Hide();
                }
            }
        }
        psVar9 = (shared_ptr<Location>*)field_352->HeapBeginPtr();
        psVar6 = (shared_ptr<Location>*)field_352->end();
        for (; psVar9 != psVar6; psVar9 = psVar9 + 16) {
            pLVar1 = (Location*)shared_ptr<Location>::operator->(psVar9);
            cVar5 = pLVar1->IsHidden();
            if (cVar5 == '\0') {
                plVar7 = (long*)shared_ptr<Location>::operator->(psVar9);
                cVar5 = (**(code**)(*plVar7 + 344))(plVar7);
                if (cVar5 == param_2) {
                    pLVar1 = (Location*)shared_ptr<Location>::operator->(psVar9);
                    pLVar1->Hide();
                }
            }
        }
        uVar10 = 0;
        do {
            pbVar2 = (byte*)std::array<LODLevel, 5ul>::operator[](uVar10);
            lVar3 = std::array<StaticLocationLODContainer, 7ul>::operator[](
                (array<StaticLocationLODContainer, 7ul>*)(field_352 + 32), (ulong)*pbVar2);
            this_01 =
                (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)(lVar3 + 48);
            cVar5 =
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    this_01);
            if (cVar5 == '\0') {
                this_00 = (shared_ptr<CombinedLocation>*)this_01->HeapBeginPtr();
                psVar8 = (shared_ptr<CombinedLocation>*)this_01->end();
                for (; this_00 != psVar8; this_00 = this_00 + 16) {
                    pCVar4 = (CombinedLocation*)shared_ptr<CombinedLocation>::operator->(this_00);
                    pCVar4->HideSection(param_2);
                }
            }
            uVar10 = uVar10 + 1;
        } while (uVar10 != 5);
    }

    // 0x10040fad0, 400 bytes, placed by class name
    // LocationContainer::UnhideLocations(LocShape)
    void LocationContainer::UnhideLocations(char param_2) {
        Location* pLVar1;
        byte* pbVar2;
        long lVar3;
        CombinedLocation* pCVar4;
        char cVar5;
        shared_ptr<Location>* psVar6;
        long* plVar7;
        shared_ptr<CombinedLocation>* psVar8;
        shared_ptr<Location>* psVar9;
        shared_ptr<CombinedLocation>* this_00;
        ulong uVar10;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_01;
        bool bVar11;

        psVar9 = (shared_ptr<Location>*)(&field_288)->HeapBeginPtr();
        psVar6 = (shared_ptr<Location>*)(&field_288)->end();
        for (; psVar9 != psVar6; psVar9 = psVar9 + 16) {
            pLVar1 = (Location*)shared_ptr<Location>::operator->(psVar9);
            cVar5 = pLVar1->IsHidden();
            if (cVar5 != '\0') {
                plVar7 = (long*)shared_ptr<Location>::operator->(psVar9);
                cVar5 = (**(code**)(*plVar7 + 344))(plVar7);
                if (cVar5 == param_2) {
                    pLVar1 = (Location*)shared_ptr<Location>::operator->(psVar9);
                    pLVar1->Unhide();
                }
            }
        }
        psVar9 = (shared_ptr<Location>*)field_352->HeapBeginPtr();
        psVar6 = (shared_ptr<Location>*)field_352->end();
        for (; psVar9 != psVar6; psVar9 = psVar9 + 16) {
            pLVar1 = (Location*)shared_ptr<Location>::operator->(psVar9);
            cVar5 = pLVar1->IsHidden();
            if (cVar5 != '\0') {
                plVar7 = (long*)shared_ptr<Location>::operator->(psVar9);
                cVar5 = (**(code**)(*plVar7 + 344))(plVar7);
                if (cVar5 == param_2) {
                    pLVar1 = (Location*)shared_ptr<Location>::operator->(psVar9);
                    pLVar1->Unhide();
                }
            }
        }
        uVar10 = 4;
        do {
            pbVar2 = (byte*)std::array<LODLevel, 5ul>::operator[](uVar10);
            lVar3 = std::array<StaticLocationLODContainer, 7ul>::operator[](
                (array<StaticLocationLODContainer, 7ul>*)(field_352 + 32), (ulong)*pbVar2);
            this_01 =
                (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)(lVar3 + 48);
            cVar5 =
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    this_01);
            if (cVar5 == '\0') {
                this_00 = (shared_ptr<CombinedLocation>*)this_01->HeapBeginPtr();
                psVar8 = (shared_ptr<CombinedLocation>*)this_01->end();
                for (; this_00 != psVar8; this_00 = this_00 + 16) {
                    pCVar4 = (CombinedLocation*)shared_ptr<CombinedLocation>::operator->(this_00);
                    pCVar4->UnhideSection(param_2);
                }
            }
            bVar11 = uVar10 != 0;
            uVar10 = uVar10 - 1;
        } while (bVar11);
    }

    // 0x10040fc60, 304 bytes, placed by class name
    // LocationContainer::UnhideCombinedLocationSectionLOD(ChangeLocationRequest const&, StaticLocationLODContainer&)
    undefined8 LocationContainer::UnhideCombinedLocationSectionLOD(ChangeLocationRequest* param_1,
                                                                   StaticLocationLODContainer* param_2) {
        char cVar1;
        undefined1 uVar2;
        undefined1 uVar3;
        bool bVar4;
        undefined4 uVar5;
        shared_ptr<CombinedLocation>* this_00;
        LocData* pLVar6;
        undefined1* this_01;
        shared_ptr local_68;
        undefined8 local_58;
        shared_ptr<CombinedLocation>* local_50;
        undefined8 local_48;
        undefined4 local_40;
        undefined4 local_3c;
        undefined4 local_38;
        byte local_31;

        this_01 = &param_2->field_48;
        cVar1 = this_01->empty();
        if (cVar1 == '\0') {
            this_00 = (shared_ptr<CombinedLocation>*)this_01->HeapBeginPtr();
            local_50 = (shared_ptr<CombinedLocation>*)this_01->end();
            local_31 = this_00 == local_50;
            while (!(bool)local_31) {
                local_58 = shared_ptr<CombinedLocation>::operator->(this_00);
                local_40 = param_1->GetStickTime();
                local_3c = param_1->GetPos();
                local_38 = param_1->GetLevel();
                uVar5 = param_1->GetMaxLineWidth();
                pLVar6 = (LocData*)param_1->GetOffset();
                uVar2 = pLVar6->GetShape();
                pLVar6 = (LocData*)param_1->GetOffset();
                uVar3 = pLVar6->GetRot();
                CombinedLocation::UnhideActiveSection(&local_68, local_58, local_40, local_3c, local_38, uVar5, uVar2,
                                                      uVar3);
                bVar4 = shared_ptr::operator_cast_to_bool(&local_68);
                local_68.~shared_ptr();
                if (bVar4) {
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

    // 0x10040fd90, 288 bytes, placed by class name
    // LocationContainer::ResetLocation(ChangeLocationRequest const&)
    ulong LocationContainer::ResetLocation(ChangeLocationRequest* param_1) {
        undefined1* this_00;
        int iVar2;
        int iVar3;
        long lVar4;
        shared_ptr* this_01;
        long* plVar5;
        Entity* pEVar6;
        GraphNode* this_02;
        GraphNode* pGVar7;
        LocationContainer* this_03;
        undefined8 unaff_R13;
        undefined7 uVar8;
        bool bVar9;

        lVar4 = UnhideCombinedLocationSection(this, param_1);
        bVar9 = lVar4 != 0;
        uVar8 = (undefined7)((ulong)unaff_R13 >> 8);
        this_00 = &field_320;
        iVar2 = this_00->size();
        if (0 < iVar2) {
            iVar2 = 0;
            do {
                this_03 = (LocationContainer*)this_00;
                this_01 = (shared_ptr*)eastl::vector<shared_ptr<Location>, eastl::allocator>::operator[](
                    (vector<shared_ptr<Location>, eastl::allocator>*)this_00, (long)iVar2);
                if (LocationsMatch(this_03, param_1, this_01, false) != '\0') {
                    plVar5 = (long*)shared_ptr<Location>::operator->((shared_ptr<Location>*)this_01);
                    (**(code**)(*plVar5 + 200))(plVar5);
                    pEVar6 = (Entity*)shared_ptr<Location>::operator->((shared_ptr<Location>*)this_01);
                    pEVar6->ResetWorld();
                    this_02 = (GraphNode*)GetNode();
                    pEVar6 = (Entity*)shared_ptr<Location>::operator->((shared_ptr<Location>*)this_01);
                    pGVar7 = (GraphNode*)pEVar6->GetNode();
                    this_02->RemoveChild(pGVar7);
                    lVar4 = this_00->HeapBeginPtr();
                    this_00->erase((shared_ptr*)((long)iVar2 * 16 + lVar4));
                    iVar2 = iVar2 + -1;
                    uVar8 = (undefined7)((ulong)this_02 >> 8);
                    bVar9 = true;
                }
                iVar2 = iVar2 + 1;
                iVar3 = this_00->size();
            } while (iVar2 < iVar3);
        }
        return CONCAT71(uVar8, bVar9) & 4294967295;
    }

    // 0x10040feb0, 96 bytes, placed by class name
    // LocationContainer::ResetArea(CoordFine const&, CoordFine const&)
    void LocationContainer::ResetArea(CoordFine* param_1, CoordFine* param_2) {
        byte* pbVar1;
        StaticLocationLODContainer* pSVar2;
        ulong uVar3;
        LocationContainer* this_00;
        bool bVar4;

        ResetAllChangedAreas(this, param_1, param_2);
        uVar3 = 4;
        do {
            pbVar1 = (byte*)std::array<LODLevel, 5ul>::operator[](uVar3);
            this_00 = (LocationContainer*)(field_352 + 32);
            pSVar2 = (StaticLocationLODContainer*)std::array<StaticLocationLODContainer, 7ul>::operator[](
                (array<StaticLocationLODContainer, 7ul>*)(field_352 + 32), (ulong)*pbVar1);
            ResetLODArea(this_00, param_1, param_2, pSVar2);
            bVar4 = uVar3 != 0;
            uVar3 = uVar3 - 1;
        } while (bVar4);
    }

    // 0x10040ff10, 512 bytes, placed by class name
    // LocationContainer::ResetAllChangedAreas(CoordFine const&, CoordFine const&)
    void LocationContainer::ResetAllChangedAreas(CoordFine* param_1, CoordFine* param_2) {
        undefined1* this_00;
        float fVar1;
        int iVar2;
        int iVar3;
        shared_ptr<Location>* this_01;
        Entity* this_02;
        GraphNode* pGVar4;
        Layout* this_03;
        vector* pvVar5;
        float* pfVar6;
        GraphNode* pGVar7;
        long lVar8;
        type* ptVar9;
        LocationContainer* this_04;
        type* ptVar10;

        this_00 = &field_320;
        this_04 = (LocationContainer*)this_00;
        iVar2 = this_00->size();
        if (0 < iVar2) {
            iVar2 = 0;
            do {
                ptVar10 = (type*)(long)iVar2;
                ptVar9 = ptVar10;
                this_01 = (shared_ptr<Location>*)eastl::vector<shared_ptr<Location>, eastl::allocator>::operator[](
                    (vector<shared_ptr<Location>, eastl::allocator>*)this_00, (ulong)ptVar10);
                this_02 = (Entity*)shared_ptr<Location>::operator*(this_01);
                pGVar4 = (GraphNode*)this_02->GetNode();
                this_03 = (Layout*)pGVar4->GetWorldTranslation();
                iVar3 = this_02->GetDuration();
                if (iVar3 <= (int)param_2->field_0) {
                    iVar3 = this_02->GetDuration();
                    if ((int)param_1->field_0 <= iVar3) {
                        pvVar5 = eastl::string::Layout::SSOBeginPtr(this_03, ptVar9);
                        fVar1 = *(float*)pvVar5;
                        pvVar5 = (&param_1->field_4, ptVar9)->SSOBeginPtr();
                        if (*(float*)pvVar5 <= fVar1) {
                            pvVar5 = eastl::string::Layout::SSOBeginPtr(this_03, ptVar9);
                            fVar1 = *(float*)pvVar5;
                            pvVar5 = (&param_2->field_4, ptVar9)->SSOBeginPtr();
                            if (fVar1 < *(float*)pvVar5 || fVar1 == *(float*)pvVar5) {
                                pfVar6 = (float*)this_03->second();
                                fVar1 = *pfVar6;
                                pfVar6 = (float*)(&param_1->field_4)->second();
                                if (*pfVar6 <= fVar1) {
                                    pfVar6 = (float*)this_03->second();
                                    fVar1 = *pfVar6;
                                    pfVar6 = (float*)(&param_2->field_4)->second();
                                    if (fVar1 < *pfVar6 || fVar1 == *pfVar6) {
                                        (*(code*)this_02->field_0[25])(this_02);
                                        this_02->ResetWorld();
                                        pGVar4 = (GraphNode*)GetNode();
                                        pGVar7 = (GraphNode*)this_02->GetNode();
                                        pGVar4->RemoveChild(pGVar7);
                                        lVar8 = this_00->HeapBeginPtr();
                                        this_00->erase((shared_ptr*)((long)ptVar10 * 16 + lVar8));
                                        iVar2 = iVar2 + -1;
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
        ResetChangedAreasFromList(this_04, (vector*)field_352, param_2, param_1);
        ResetChangedAreasFromList(this_04, (vector*)&field_288, param_2, param_1);
    }

    // 0x100410110, 112 bytes, placed by class name
    // LocationContainer::ResetLODArea(CoordFine const&, CoordFine const&, StaticLocationLODContainer&)
    void LocationContainer::ResetLODArea(CoordFine* param_1, CoordFine* param_2, StaticLocationLODContainer* param_3) {
        CombinedLocation* this_00;
        char cVar1;
        shared_ptr<CombinedLocation>* psVar2;
        shared_ptr<CombinedLocation>* this_01;
        undefined1* this_02;

        this_02 = &param_3->field_48;
        cVar1 = this_02->empty();
        if (cVar1 == '\0') {
            this_01 = (shared_ptr<CombinedLocation>*)this_02->HeapBeginPtr();
            psVar2 = (shared_ptr<CombinedLocation>*)this_02->end();
            for (; this_01 != psVar2; this_01 = this_01 + 16) {
                this_00 = (CombinedLocation*)shared_ptr<CombinedLocation>::operator->(this_01);
                this_00->UnhideActiveSectionsArea(param_1, param_2);
            }
        }
    }

    // 0x1004101c0, 352 bytes, placed by class name
    // LocationContainer::ResetChangedAreasFromList(eastl::vector<shared_ptr<Location>, eastl::allocator> const&, CoordFine const&, CoordFine const&)
    void LocationContainer::ResetChangedAreasFromList(vector* param_1, CoordFine* param_2, CoordFine* param_3) {
        float fVar1;
        int iVar3;
        shared_ptr<Location>* this_00;
        shared_ptr<Location>* psVar4;
        Location* this_01;
        GraphNode* this_02;
        Layout* this_03;
        vector* pvVar5;
        float* pfVar6;

        this_00 = (shared_ptr<Location>*)param_1->HeapBeginPtr();
        psVar4 = (shared_ptr<Location>*)param_1->end();
        if (this_00 != psVar4) {
            do {
                this_01 = (Location*)shared_ptr<Location>::operator*(this_00);
                if (this_01->IsHidden() != '\0') {
                    iVar3 = this_01->GetDuration();
                    if (iVar3 <= (int)param_2->field_0) {
                        iVar3 = this_01->GetDuration();
                        if ((int)param_3->field_0 <= iVar3) {
                            this_02 = (GraphNode*)this_01->GetNode();
                            this_03 = (Layout*)this_02->GetWorldTranslation();
                            pvVar5 = eastl::string::Layout::SSOBeginPtr(this_03, (type*)param_1);
                            fVar1 = *(float*)pvVar5;
                            pvVar5 = (&param_3->field_4, (type*)param_1)->SSOBeginPtr();
                            if (*(float*)pvVar5 <= fVar1) {
                                pvVar5 = eastl::string::Layout::SSOBeginPtr(this_03, (type*)param_1);
                                fVar1 = *(float*)pvVar5;
                                pvVar5 = (&param_2->field_4, (type*)param_1)->SSOBeginPtr();
                                if (fVar1 < *(float*)pvVar5 || fVar1 == *(float*)pvVar5) {
                                    pfVar6 = (float*)this_03->second();
                                    fVar1 = *pfVar6;
                                    pfVar6 = (float*)(&param_3->field_4)->second();
                                    if (*pfVar6 <= fVar1) {
                                        pfVar6 = (float*)this_03->second();
                                        fVar1 = *pfVar6;
                                        pfVar6 = (float*)(&param_2->field_4)->second();
                                        if (fVar1 < *pfVar6 || fVar1 == *pfVar6) {
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

    // 0x100410320, 512 bytes, placed by class name
    // LocationContainer::AnimateLocation(ChangeLocationRequest const&)
    long* LocationContainer::AnimateLocation(ChangeLocationRequest* param_1) {
        char cVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        int iVar5;
        long* plVar6;
        long* plVar7;
        undefined8 uVar8;
        undefined1 local_148[272];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        plVar6 = (long*)FindLocation(this, param_1, false);
        if (plVar6 == (long*)0) {
            plVar6 = (long*)0;
        } else {
            cVar1 = (**(code**)(*plVar6 + 312))(plVar6);
            if (cVar1 == '\0') {
                new (local_148) ChangeLocationRequest(param_1);
                iVar5 = (**(code**)(*plVar6 + 304))(plVar6);
                local_148->SetSourceModelExternalID(iVar5);
                plVar7 = (long*)ChangeLocation(this, (ChangeLocationRequest*)local_148);
                if (plVar7 != (long*)0) {
                    cVar1 = (**(code**)(*plVar7 + 312))(plVar7);
                    if (cVar1 == '\0') {
                        uVar8 = logger::default_logger();
                        new ((local_148 + 128)) logger::LogStream((LogStream*)&LOGGER_SCENE);
                        logger::Logger::Log(uVar8, 0, local_148 + 128, 2,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "game/runetek5/scene/entities/LocationContainer.cpp",
                                            1133, "Got unanimatable location when trying to changeLocation to animate");
                        ((local_148 + 128))->~LogStream();
                    }
                    local_148._124_4_ = local_148->GetUIHeight();
                    local_148._120_4_ = local_148->GetSeqDelay();
                    uVar2 = param_1->GetLoopBehaviour();
                    uVar3 = param_1->GetNumVerts();
                    (**(code**)(*plVar7 + 320))(plVar7, local_148._124_4_, local_148._120_4_, uVar2, uVar3);
                }
                local_148->~ChangeLocationRequest();
            } else {
                local_148._124_4_ = param_1->GetUIHeight();
                uVar2 = param_1->GetSeqDelay();
                uVar3 = param_1->GetLoopBehaviour();
                uVar4 = param_1->GetNumVerts();
                (**(code**)(*plVar6 + 320))(plVar6, local_148._124_4_, uVar2, uVar3, uVar4);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return plVar6;
    }

    // 0x100410540, 160 bytes, placed by class name
    // LocationContainer::FindLocationInList(eastl::vector<shared_ptr<Location>, eastl::allocator> const&, ChangeLocationRequest const&)
    shared_ptr* LocationContainer::FindLocationInList(vector* param_1, ChangeLocationRequest* param_2) {
        bool bVar1;
        char cVar2;
        shared_ptr* this_00;
        shared_ptr* psVar3;
        Location* this_01;
        shared_ptr* psVar4;
        shared_ptr* unaff_R13;

        this_00 = (shared_ptr*)param_1->HeapBeginPtr();
        psVar3 = (shared_ptr*)param_1->end();
        do {
            if (this_00 == psVar3) {
                return (shared_ptr*)&Location::NullLocation;
            }
            this_01 = (Location*)shared_ptr<Location>::operator->((shared_ptr<Location>*)this_00);
            cVar2 = this_01->IsHidden();
            if (cVar2 == '\0') {
                bVar1 = false;
                cVar2 = LocationsMatch((LocationContainer*)this_01, param_2, this_00, false);
                psVar4 = this_00;
                if (cVar2 == '\0')
                    goto LAB_1004105ab;
            } else {
            LAB_1004105ab:
                bVar1 = true;
                psVar4 = unaff_R13;
            }
            if (!bVar1) {
                return psVar4;
            }
            this_00 = this_00 + 1;
            unaff_R13 = psVar4;
        } while (true);
    }

    // 0x1004105e0, 224 bytes, placed by class name
    // LocationContainer::FindLocationInLOD(StaticLocationLODContainer&, ChangeLocationRequest const&)
    undefined8 LocationContainer::FindLocationInLOD(StaticLocationLODContainer* param_1,
                                                    ChangeLocationRequest* param_2) {
        undefined1 uVar1;
        undefined4 uVar3;
        undefined4 uVar4;
        undefined4 uVar5;
        shared_ptr<CombinedLocation>* this_00;
        shared_ptr<CombinedLocation>* psVar6;
        CombinedLocation* pCVar7;
        LocData* this_01;
        shared_ptr* this_02;
        undefined8 uVar8;

        this_00 = (shared_ptr<CombinedLocation>*)(&param_1->field_48)->HeapBeginPtr();
        psVar6 = (shared_ptr<CombinedLocation>*)(&param_1->field_48)->end();
        while (true) {
            if (this_00 == psVar6) {
                return 0;
            }
            pCVar7 = (CombinedLocation*)shared_ptr<CombinedLocation>::operator->(this_00);
            uVar3 = param_2->GetPos();
            uVar4 = param_2->GetLevel();
            uVar5 = param_2->GetMaxLineWidth();
            this_01 = (LocData*)param_2->GetOffset();
            uVar1 = this_01->GetShape();
            this_02 = (shared_ptr*)pCVar7->FindActiveSection(uVar3, uVar4, uVar5, uVar1);
            if (shared_ptr::operator_cast_to_bool(this_02))
                break;
            this_00 = this_00 + 16;
        }
        uVar8 = this_02->end();
        return uVar8;
    }

    // 0x1004106c0, 288 bytes, placed by class name
    // LocationContainer::FindLocation(CoordGrid const&, int)
    long LocationContainer::FindLocation(CoordGrid* param_1, int param_2) {
        bool bVar1;
        LocationContainer* pLVar2;
        long lVar3;
        shared_ptr* this_00;
        byte* pbVar4;
        StaticLocationLODContainer* pSVar5;
        ulong uVar6;
        LocationContainer* pLVar7;

        pLVar2 = (LocationContainer*)FindLocationInList(this, (vector*)&field_288, param_1, param_2);
        pLVar7 = pLVar2;
        bVar1 = pLVar2->operator_cast_to_bool();
        if (bVar1) {
            lVar3 = pLVar2->end();
        } else {
            pLVar2 = (LocationContainer*)FindLocationInList(pLVar7, (vector*)&field_320, param_1, param_2);
            pLVar7 = pLVar2;
            bVar1 = pLVar2->operator_cast_to_bool();
            if (bVar1) {
                lVar3 = pLVar2->end();
            } else {
                this_00 = (shared_ptr*)FindLocationInList(pLVar7, (vector*)field_352, param_1, param_2);
                bVar1 = shared_ptr::operator_cast_to_bool(this_00);
                if (bVar1) {
                    lVar3 = this_00->end();
                } else {
                    uVar6 = 4;
                    do {
                        pbVar4 = (byte*)std::array<LODLevel, 5ul>::operator[](uVar6);
                        pLVar7 = (LocationContainer*)(field_352 + 32);
                        pSVar5 = (StaticLocationLODContainer*)std::array<StaticLocationLODContainer, 7ul>::operator[](
                            (array<StaticLocationLODContainer, 7ul>*)(field_352 + 32), (ulong)*pbVar4);
                        lVar3 = FindLocationInLOD(pLVar7, pSVar5, param_1, param_2);
                        if (lVar3 != 0) {
                            return lVar3;
                        }
                        bVar1 = uVar6 != 0;
                        uVar6 = uVar6 - 1;
                    } while (bVar1);
                    lVar3 = 0;
                }
            }
        }
        return lVar3;
    }

    // 0x1004107e0, 208 bytes, placed by class name
    // LocationContainer::FindLocationInList(eastl::vector<shared_ptr<Location>, eastl::allocator> const&, CoordGrid const&, int)
    shared_ptr<Location>* LocationContainer::FindLocationInList(vector* param_1, CoordGrid* param_2, int param_3) {
        char cVar1;
        shared_ptr<Location>* this_00;
        shared_ptr<Location>* psVar3;
        Location* pLVar4;
        long* plVar5;
        CoordGrid* this_01;

        this_00 = (shared_ptr<Location>*)param_1->HeapBeginPtr();
        psVar3 = (shared_ptr<Location>*)param_1->end();
        do {
            if (this_00 == psVar3) {
                return (shared_ptr<Location>*)&Location::NullLocation;
            }
            pLVar4 = (Location*)shared_ptr<Location>::operator->(this_00);
            cVar1 = pLVar4->IsHidden();
            if (cVar1 == '\0') {
                plVar5 = (long*)shared_ptr<Location>::operator->(this_00);
                if ((**(code**)(*plVar5 + 304))(plVar5) == param_3) {
                    pLVar4 = (Location*)shared_ptr<Location>::operator->(this_00);
                    this_01 = (CoordGrid*)pLVar4->GetServerPosition();
                    cVar1 = game::CoordGrid::operator==(this_01, param_2);
                    if (cVar1 != '\0') {
                        return this_00;
                    }
                }
            }
            this_00 = this_00 + 16;
        } while (true);
    }

    // 0x1004108b0, 176 bytes, placed by class name
    // LocationContainer::FindLocationInLOD(StaticLocationLODContainer&, CoordGrid const&, int)
    undefined8 LocationContainer::FindLocationInLOD(StaticLocationLODContainer* param_1, CoordGrid* param_2,
                                                    int param_3) {
        uint uVar1;
        uint uVar2;
        uint uVar3;
        shared_ptr<CombinedLocation>* this_00;
        shared_ptr<CombinedLocation>* psVar5;
        CombinedLocation* this_01;
        shared_ptr* this_02;
        undefined8 uVar6;

        uVar1 = param_2->field_0;
        uVar2 = param_2->field_4;
        uVar3 = param_2->field_8;
        this_00 = (shared_ptr<CombinedLocation>*)(&param_1->field_48)->HeapBeginPtr();
        psVar5 = (shared_ptr<CombinedLocation>*)(&param_1->field_48)->end();
        while (true) {
            if (this_00 == psVar5) {
                return 0;
            }
            this_01 = (CombinedLocation*)shared_ptr<CombinedLocation>::operator->(this_00);
            this_02 = (shared_ptr*)this_01->FindActiveSection(uVar1, uVar2, uVar3, param_3);
            if (shared_ptr::operator_cast_to_bool(this_02))
                break;
            this_00 = this_00 + 16;
        }
        uVar6 = this_02->end();
        return uVar6;
    }

    // 0x100410960, 176 bytes, placed by class name
    // LocationContainer::FindLocationInLOD(StaticLocationLODContainer&, CoordGrid const&, LocShape)
    undefined8 LocationContainer::FindLocationInLOD(undefined8 param_1_00, long param_1, undefined4* param_2,
                                                    undefined1 param_4) {
        shared_ptr<CombinedLocation>* this;
        shared_ptr<CombinedLocation>* psVar2;
        CombinedLocation* pCVar3;
        shared_ptr* this_00;
        undefined8 uVar4;

        this = (shared_ptr<CombinedLocation>*)((param_1 + 48))->HeapBeginPtr();
        psVar2 = (shared_ptr<CombinedLocation>*)((param_1 + 48))->end();
        while (true) {
            if (this == psVar2) {
                return 0;
            }
            pCVar3 = (CombinedLocation*)shared_ptr<CombinedLocation>::operator->(this);
            this_00 = (shared_ptr*)pCVar3->FindActiveSection(*param_2, param_2[1], param_2[2], param_4);
            if (shared_ptr::operator_cast_to_bool(this_00))
                break;
            this = this + 16;
        }
        uVar4 = this_00->end();
        return uVar4;
    }

    // 0x100410a60, 256 bytes, placed by class name
    // LocationContainer::StaticLocationTexturesReady() const
    bool LocationContainer::StaticLocationTexturesReady() {
        CombinedLocation* pCVar1;
        shared_ptr<graphics::Model>* psVar2;
        Model* pMVar3;
        char cVar4;
        long lVar5;
        shared_ptr<CombinedLocation>* psVar6;
        shared_ptr<CombinedLocation>* this_00;
        int iVar7;
        long lVar8;
        bool bVar9;

        lVar8 = ((field_352 + 32))->begin();
        lVar5 = ((field_352 + 32))->end();
        for (; lVar8 != lVar5; lVar8 = lVar8 + 88) {
            this_00 = (shared_ptr<CombinedLocation>*)((lVar8 + 48))->HeapBeginPtr();
            psVar6 = (shared_ptr<CombinedLocation>*)((lVar8 + 48))->end();
            iVar7 = 0;
            bVar9 = this_00 == psVar6;
            if (!bVar9) {
                pCVar1 = (CombinedLocation*)shared_ptr<CombinedLocation>::operator->(this_00);
                psVar2 = (shared_ptr<graphics::Model>*)pCVar1->GetModel();
                pMVar3 = (Model*)shared_ptr<graphics::Model>::operator->(psVar2);
                cVar4 = pMVar3->TexturesReady();
                while (cVar4 != '\0') {
                    this_00 = this_00 + 16;
                    bVar9 = this_00 == psVar6;
                    if (bVar9)
                        goto LAB_100410b27;
                    pCVar1 = (CombinedLocation*)shared_ptr<CombinedLocation>::operator->(this_00);
                    psVar2 = (shared_ptr<graphics::Model>*)pCVar1->GetModel();
                    pMVar3 = (Model*)shared_ptr<graphics::Model>::operator->(psVar2);
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

    // 0x100410b90, 256 bytes, placed by class name
    // LocationContainer::StaticLocationShadersReady() const
    bool LocationContainer::StaticLocationShadersReady() {
        CombinedLocation* pCVar1;
        shared_ptr<graphics::Model>* psVar2;
        Model* pMVar3;
        char cVar4;
        long lVar5;
        shared_ptr<CombinedLocation>* psVar6;
        shared_ptr<CombinedLocation>* this_00;
        int iVar7;
        long lVar8;
        bool bVar9;

        lVar8 = ((field_352 + 32))->begin();
        lVar5 = ((field_352 + 32))->end();
        for (; lVar8 != lVar5; lVar8 = lVar8 + 88) {
            this_00 = (shared_ptr<CombinedLocation>*)((lVar8 + 48))->HeapBeginPtr();
            psVar6 = (shared_ptr<CombinedLocation>*)((lVar8 + 48))->end();
            iVar7 = 0;
            bVar9 = this_00 == psVar6;
            if (!bVar9) {
                pCVar1 = (CombinedLocation*)shared_ptr<CombinedLocation>::operator->(this_00);
                psVar2 = (shared_ptr<graphics::Model>*)pCVar1->GetModel();
                pMVar3 = (Model*)shared_ptr<graphics::Model>::operator->(psVar2);
                cVar4 = pMVar3->ShadersReady();
                while (cVar4 != '\0') {
                    this_00 = this_00 + 16;
                    bVar9 = this_00 == psVar6;
                    if (bVar9)
                        goto LAB_100410c57;
                    pCVar1 = (CombinedLocation*)shared_ptr<CombinedLocation>::operator->(this_00);
                    psVar2 = (shared_ptr<graphics::Model>*)pCVar1->GetModel();
                    pMVar3 = (Model*)shared_ptr<graphics::Model>::operator->(psVar2);
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

    // 0x100410c90, 128 bytes, placed by class name
    // LocationContainer::StaticUncombinableLocationsBuilt() const
    ulong LocationContainer::StaticUncombinableLocationsBuilt() {
        char cVar1;
        shared_ptr<Location>* this_00;
        shared_ptr<Location>* psVar2;
        Location* pLVar3;
        undefined8 unaff_R15;
        ulong uVar4;

        this_00 = (shared_ptr<Location>*)field_352->HeapBeginPtr();
        psVar2 = (shared_ptr<Location>*)field_352->end();
        uVar4 = CONCAT71((int7)((ulong)unaff_R15 >> 8), this_00 == psVar2);
        if (this_00 != psVar2) {
            pLVar3 = (Location*)shared_ptr<Location>::operator->(this_00);
            cVar1 = pLVar3->IsStillBuilding();
            while (cVar1 == '\0') {
                this_00 = this_00 + 16;
                uVar4 = CONCAT71((int7)(uVar4 >> 8), this_00 == psVar2);
                if (this_00 == psVar2)
                    break;
                pLVar3 = (Location*)shared_ptr<Location>::operator->(this_00);
                cVar1 = pLVar3->IsStillBuilding();
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x100410d70, 64 bytes, placed by class name
    // LocationContainer::AllStaticLocationsReady() const
    undefined8 LocationContainer::AllStaticLocationsReady() {
        char cVar1;

        cVar1 = StaticUncombinableLocationsBuilt(this);
        if ((cVar1 == '\0') || (cVar1 = StaticLocationTexturesReady(this), cVar1 == '\0')) {
            return 0;
        }
        return StaticLocationShadersReady(this);
    }

    // 0x100410db0, 16 bytes, placed by class name
    // LocationContainer::HasLocations() const
    undefined1 LocationContainer::HasLocations() {
        return 1;
    }

    // 0x100410dc0, 112 bytes, placed by class name
    // LocationContainer::IsHighPriority() const
    ulong LocationContainer::IsHighPriority() {
        World* this_00;
        shared_ptr* this_01;
        MapSquare* this_02;
        ulong uVar3;

        if (GetTargetLOD() == '\0') {
            this_00 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)field_176);
            this_01 = (shared_ptr*)this_00->GetMapSquare(m_mapSquareX, m_mapSquareZ);
            if (shared_ptr::operator_cast_to_bool(this_01)) {
                this_02 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
                uVar3 = this_02->IsPrioritySquare();
                goto LAB_100410e1d;
            }
        }
        uVar3 = 0;
    LAB_100410e1d:
        return uVar3 & 18446744073709551361;
    }

    // 0x100410e30, 16 bytes, placed by class name
    // LocationContainer::GetLoadImportance() const
    void LocationContainer::GetLoadImportance() {
        GetLoadImportance();
    }

    // 0x100410e40, 208 bytes, placed by class name
    // LocationContainer::GetLoadProgress() const
    float LocationContainer::GetLoadProgress() {
        World* pWVar1;
        char cVar2;
        byte bVar3;
        byte bVar4;
        float fVar5;

        cVar2 = IsAtTargetLOD();
        if (cVar2 == '\0') {
            return 0.0;
        }
        cVar2 = StaticUncombinableLocationsBuilt(this);
        if (cVar2 == '\0') {
            return 0.0;
        }
        pWVar1 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)field_176);
        bVar3 = pWVar1->GetLoadingIncludesTextures();
        pWVar1 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)field_176);
        bVar4 = pWVar1->GetLoadingIncludesShaders();
        if ((bVar3 == 0) || (cVar2 = StaticLocationTexturesReady(this), cVar2 == '\0')) {
            fVar5 = 1.0;
        } else {
            fVar5 = 2.0;
        }
        if ((bVar4 != 0) && (cVar2 = StaticLocationShadersReady(this), cVar2 != '\0')) {
            fVar5 = fVar5 + 1.0;
        }
        return fVar5 / (float)((uint)bVar3 + (uint)bVar4 + 1);
    }

} // namespace jag::game
