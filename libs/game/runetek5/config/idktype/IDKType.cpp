// libs/game/runetek5/config/idktype/IDKType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "IDKType.h"

namespace jag::game {
    // 0x1005458d0, 1152 bytes, placed by class name and debug map
    // IDKType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* IDKType::DecodeType(PacketT* param_1, uint param_2) {
        byte bVar1;
        undefined2 uVar2;
        ushort uVar3;
        undefined4 uVar4;
        uint uVar5;
        undefined4* puVar6;
        undefined8 uVar7;
        undefined2* puVar8;
        uint* puVar9;
        uint uVar10;
        uint uVar11;
        ulong uVar12;
        ulong uVar13;
        bool bVar14;

        switch (param_2) {
        case 1:
            bVar1 = param_1->g1();
            field_56 = (uint)bVar1;
            break;
        case 2:
            bVar1 = param_1->g1();
            (&field_64, (ulong)bVar1, 0)->set_max_size();
            if (bVar1 != 0) {
                uVar13 = 0;
                do {
                    uVar4 = param_1->gSmart2or4s();
                    puVar6 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&field_64, uVar13);
                    *puVar6 = uVar4;
                    uVar13 = uVar13 + 1;
                } while (bVar1 != uVar13);
            }
            break;
        case 3:
            field_256 = 1;
            break;
        default:
            uVar7 = logger::default_logger();
            logger::Logger::Log(uVar7, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/idktype/IDKType.cpp",
                                119, "Unrecognised .idk config code: %u", param_2);
            break;
        case 40:
            bVar1 = param_1->g1();
            uVar13 = (ulong)bVar1;
            (&field_112, uVar13, 0)->set_max_size();
            (&field_136, uVar13, 0)->set_max_size();
            if (bVar1 != 0) {
                uVar12 = 0;
                do {
                    uVar2 = param_1->g2();
                    puVar8 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                        (Array<unsigned short, eastl::allocator>*)&field_112, uVar12);
                    *puVar8 = uVar2;
                    uVar2 = param_1->g2();
                    puVar8 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                        (Array<unsigned short, eastl::allocator>*)&field_136, uVar12);
                    *puVar8 = uVar2;
                    uVar12 = uVar12 + 1;
                } while (uVar13 != uVar12);
            }
            break;
        case 41:
            bVar1 = param_1->g1();
            uVar13 = (ulong)bVar1;
            (&field_184, uVar13, 0)->set_max_size();
            (&field_208, uVar13, 0)->set_max_size();
            if (bVar1 != 0) {
                uVar12 = 0;
                do {
                    uVar2 = param_1->g2();
                    puVar8 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                        (Array<unsigned short, eastl::allocator>*)&field_184, uVar12);
                    *puVar8 = uVar2;
                    uVar2 = param_1->g2();
                    puVar8 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                        (Array<unsigned short, eastl::allocator>*)&field_208, uVar12);
                    *puVar8 = uVar2;
                    uVar12 = uVar12 + 1;
                } while (uVar13 != uVar12);
            }
            break;
        case 44:
            uVar3 = param_1->g2();
            uVar11 = 0;
            if (uVar3 != 0) {
                uVar10 = (uint)uVar3;
                do {
                    uVar11 = uVar11 + 1;
                    bVar14 = 1 < uVar10;
                    uVar10 = uVar10 >> 1;
                } while (bVar14);
            }
            (&field_160, (ulong)uVar11, 0)->set_max_size();
            if (uVar11 != 0) {
                uVar13 = 0;
                uVar10 = 0;
                do {
                    uVar5 = 1 << ((byte)uVar13 & 31) & (uint)uVar3;
                    puVar9 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_160,
                                                                             uVar13);
                    *puVar9 = -(uint)(uVar5 == 0) | uVar10;
                    uVar13 = uVar13 + 1;
                    uVar10 = (uVar10 + 1) - (uint)(uVar5 == 0);
                } while (uVar11 != uVar13);
            }
            break;
        case 45:
            uVar3 = param_1->g2();
            uVar11 = 0;
            if (uVar3 != 0) {
                uVar10 = (uint)uVar3;
                do {
                    uVar11 = uVar11 + 1;
                    bVar14 = 1 < uVar10;
                    uVar10 = uVar10 >> 1;
                } while (bVar14);
            }
            (&field_232, (ulong)uVar11, 0)->set_max_size();
            if (uVar11 != 0) {
                uVar13 = 0;
                uVar10 = 0;
                do {
                    uVar5 = 1 << ((byte)uVar13 & 31) & (uint)uVar3;
                    puVar9 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_232,
                                                                             uVar13);
                    *puVar9 = -(uint)(uVar5 == 0) | uVar10;
                    uVar13 = uVar13 + 1;
                    uVar10 = (uVar10 + 1) - (uint)(uVar5 == 0);
                } while (uVar11 != uVar13);
            }
            break;
        case 60:
        case 61:
        case 62:
        case 63:
        case 64:
            uVar4 = param_1->gSmart2or4s();
            puVar6 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_88,
                                                                           (ulong)(param_2 - 60));
            *puVar6 = uVar4;
        }
        return DataStatus::READY;
    }

    // 0x100545d50, 16 bytes, placed by class name and debug map
    // IDKType::PostDecode()
    void IDKType::PostDecode() {}

    // 0x100545d60, 1536 bytes, placed by class name and debug map
    // IDKType::GetBodyModel(graphics::RT7Core*, AssetBuilder&, BuildRequest<graphics::Model, BuildModelMain>&, unsigned short, shared_ptr<PlayerModel> const&) const
    shared_ptr* IDKType::GetBodyModel(RT7Core* param_1, AssetBuilder* param_2, BuildRequest* param_3, ushort param_4,
                                      shared_ptr* param_5) {
        bool bVar1;
        bool bVar2;
        char cVar3;
        long lVar4;
        RT7Core* pRVar5;
        int* piVar6;
        long* plVar7;
        undefined4* puVar8;
        undefined* puVar9;
        PacketView* this_00;
        PacketView* pPVar10;
        Js5ResourceProvider* this_01;
        uint* puVar11;
        BuildModelMain* pBVar12;
        WorldmapAreaMetadata* this_02;
        Array* pAVar13;
        PlayerModel* pPVar14;
        Array* pAVar15;
        Array* pAVar16;
        MapArea* this_03;
        vector* this_04;
        Model* pMVar17;
        undefined** ppuVar18;
        shared_ptr* psVar19;
        PacketView* pPVar20;
        undefined6 in_register_00000082;
        RT7Core* pRVar21;
        Js5ArchiveSettings* this_05;
        bool bVar22;
        PacketView local_118;
        RT7Core* local_e8;
        shared_ptr local_e0;
        BuildRequest* local_d0;
        undefined4 local_c4;
        Js5ArchiveSettings* local_c0;
        shared_ptr local_b8;
        IDKType* local_a8;
        shared_ptr* local_a0;
        shared_ptr* local_98;
        ModelConstructedState local_8a;
        bool local_89;
        PacketView local_88[2];
        long local_38;

        local_c4 = (undefined4)CONCAT62(in_register_00000082, param_4);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_e8 = param_1;
        local_a8 = this;
        cVar3 = param_3->IsTaskDone();
        if ((cVar3 == '\0') && (cVar3 = param_3->IsEmpty(), cVar3 == '\0')) {
        LAB_100545ef3:
            ppuVar18 = &DataStatus::NOTLOADED;
        } else {
            cVar3 = param_3->IsEmpty();
            if (cVar3 != '\0') {
                cVar3 = graphics::Model::IsReadyToConstruct(local_e8);
                if (cVar3 == '\0')
                    goto LAB_100545ef3;
                this_05 = (Js5ArchiveSettings*)&local_a8->field_64;
                local_d0 = param_3;
                local_98 = param_5;
                lVar4 = this_05->end();
                bVar22 = lVar4 != 0;
                bVar1 = true;
                local_c0 = this_05;
                if (bVar22) {
                    pRVar21 = (RT7Core*)0;
                    bVar1 = true;
                    do {
                        param_1 = pRVar21;
                        piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_05,
                                                                                (ulong)pRVar21);
                        bVar2 = bVar1;
                        if (*piVar6 != -1) {
                            local_a0 = param_5;
                            plVar7 = (long*)local_a8->field_24->GetOutputType();
                            param_1 = Js5Archive::JS5_MODELSRT7;
                            puVar8 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)this_05, (ulong)pRVar21);
                            puVar9 =
                                (undefined*)(**(code**)(*plVar7 + 48))(plVar7, param_1, *puVar8, 0, Priority::HIGH, 1);
                            bVar2 = false;
                            if (puVar9 != DataStatus::NOTLOADED) {
                                bVar2 = bVar1;
                            }
                            param_5 = local_a0;
                            this_05 = local_c0;
                            if (puVar9 == DataStatus::MISSING) {
                                param_5 = (shared_ptr*)DataStatus::MISSING;
                                break;
                            }
                        }
                        bVar1 = bVar2;
                        pRVar21 = (RT7Core*)((long)&pRVar21->field_0 + 1);
                        pRVar5 = (RT7Core*)this_05->end();
                        bVar22 = pRVar21 < pRVar5;
                    } while (bVar22);
                }
                param_3 = local_d0;
                local_a0 = param_5;
                if (bVar22) {
                LAB_100545f2c:
                    cVar3 = '\0';
                } else {
                    if (!bVar1) {
                        local_a0 = (shared_ptr*)DataStatus::NOTLOADED;
                        goto LAB_100545f2c;
                    }
                    new (local_88) eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>();
                    this_00 = (PacketView*)this_05->end();
                    local_88->reserve((ulong)this_00);
                    lVar4 = this_05->end();
                    if (lVar4 != 0) {
                        pPVar20 = (PacketView*)0;
                        do {
                            this_00 = pPVar20;
                            piVar6 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)this_05, (ulong)pPVar20);
                            if (*piVar6 != -1) {
                                new (&local_118) PacketView();
                                this_01 = (Js5ResourceProvider*)local_a8->field_24->GetOutputType();
                                pRVar21 = Js5Archive::JS5_MODELSRT7;
                                puVar11 = (uint*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)local_c0, (ulong)pPVar20);
                                this_01->GetFile(&local_118, pRVar21, *puVar11, 0, (Priority*)Priority::HIGH, true,
                                                 false, false);
                                this_00 = &local_118;
                                eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>::push_back(local_88);
                                local_118.~PacketView();
                                param_3 = local_d0;
                                this_05 = local_c0;
                            }
                            pPVar20 = (PacketView*)((long)&pPVar20->field_0 + 1);
                            pPVar10 = (PacketView*)this_05->end();
                        } while (pPVar20 < pPVar10);
                    }
                    MakeSharedPool<graphics::Model, 3072>::MakeShared<>(
                        (shared_ptr*)&local_118, (MakeSharedPool<graphics::Model, 3072>*)this_00);
                    pMVar17 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)&local_118);
                    pMVar17->SetSourceModelIDs(this_05);
                    local_e0._0_4_ = 4096;
                    local_8a = (ModelConstructedState)2;
                    local_89 = true;
                    bucket_make_shared<BuildModelMain, int, graphics::ModelConstructedState, bool, graphics::RT7Core*&,
                                       eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>,
                                       shared_ptr<graphics::Model>&>((jag*)&local_b8, (int*)&local_e0, &local_8a,
                                                                     &local_89, &local_e8, (fixed_vector*)local_88,
                                                                     (shared_ptr*)&local_118);
                    pBVar12 =
                        (BuildModelMain*)shared_ptr<BuildModelMain>::operator->((shared_ptr<BuildModelMain>*)&local_b8);
                    pBVar12->SetRecolor((Array*)&local_a8->field_112, (Array*)&local_a8->field_136);
                    pBVar12 =
                        (BuildModelMain*)shared_ptr<BuildModelMain>::operator->((shared_ptr<BuildModelMain>*)&local_b8);
                    pBVar12->SetRematerial((Array*)&local_a8->field_184, (Array*)&local_a8->field_208);
                    bVar22 = operator!=(local_98, (_func_decltype_nullptr*)0);
                    if (bVar22) {
                        pBVar12 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                            (shared_ptr<BuildModelMain>*)&local_b8);
                        this_02 = (WorldmapAreaMetadata*)shared_ptr<PlayerModel>::operator->(
                            (shared_ptr<PlayerModel>*)local_98);
                        pAVar13 = (Array*)this_02->GetOrigin();
                        pPVar14 = (PlayerModel*)shared_ptr<PlayerModel>::operator->((shared_ptr<PlayerModel>*)local_98);
                        pAVar15 = (Array*)pPVar14->GetPlayerRecolSource();
                        pPVar14 = (PlayerModel*)shared_ptr<PlayerModel>::operator->((shared_ptr<PlayerModel>*)local_98);
                        pAVar16 = (Array*)pPVar14->GetPlayerRecolDest();
                        pBVar12->SetPlayerRecolor(pAVar13, pAVar15, pAVar16);
                        pBVar12 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                            (shared_ptr<BuildModelMain>*)&local_b8);
                        this_03 = (MapArea*)shared_ptr<PlayerModel>::operator->((shared_ptr<PlayerModel>*)local_98);
                        pAVar13 = (Array*)this_03->GetOrigin();
                        pPVar14 = (PlayerModel*)shared_ptr<PlayerModel>::operator->((shared_ptr<PlayerModel>*)local_98);
                        pAVar15 = (Array*)pPVar14->GetPlayerRematSource();
                        pPVar14 = (PlayerModel*)shared_ptr<PlayerModel>::operator->((shared_ptr<PlayerModel>*)local_98);
                        pAVar16 = (Array*)pPVar14->GetPlayerRematDest();
                        pBVar12->SetPlayerRematerial(pAVar13, pAVar15, pAVar16);
                    }
                    pBVar12 =
                        (BuildModelMain*)shared_ptr<BuildModelMain>::operator->((shared_ptr<BuildModelMain>*)&local_b8);
                    pBVar12->SetAmbientAdjust((ushort)local_c4);
                    new (&local_e0) shared_ptr<oldscape::dash3d::Decor>(&local_b8);
                    param_2->SubmitJob(&local_e0);
                    local_e0.~shared_ptr();
                    param_1 = (RT7Core*)&local_118;
                    param_3->SetObjAndTask(param_1, &local_b8);
                    cVar3 = param_3->IsTaskDone();
                    if (cVar3 == '\0') {
                        local_a0 = (shared_ptr*)DataStatus::NOTLOADED;
                    }
                    local_b8.~shared_ptr();
                    local_118.~shared_ptr();
                    local_88->~fixed_vector();
                }
                psVar19 = local_a0;
                if (cVar3 == '\0')
                    goto LAB_1005462c0;
            }
            this_04 = param_3->SSOBeginPtr(param_1);
            pMVar17 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_04);
            cVar3 = pMVar17->GetConstructedState();
            if (cVar3 != '\x02') {
                /* WARNING: Subroutine does not return */
                LogAssert("model.GetAsset()->GetConstructedState() == graphics::ModelConstructedState::DATA_AND_MAT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "idktype/IDKType.cpp",
                          216, (char*)0);
            }
            ppuVar18 = &DataStatus::READY;
        }
        psVar19 = (shared_ptr*)*ppuVar18;
    LAB_1005462c0:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return psVar19;
    }

    // 0x100546680, 1552 bytes, placed by class name and debug map
    // IDKType::GetHeadModel(graphics::RT7Core*, AssetBuilder&, BuildRequest<graphics::Model, BuildModelMain>&, unsigned short, shared_ptr<PlayerModel> const&) const
    undefined* IDKType::GetHeadModel(RT7Core* param_1, AssetBuilder* param_2, BuildRequest* param_3, ushort param_4,
                                     shared_ptr* param_5) {
        bool bVar1;
        bool bVar2;
        char cVar3;
        long lVar4;
        RT7Core* pRVar5;
        int* piVar6;
        long* plVar7;
        undefined4* puVar8;
        undefined* puVar9;
        PacketView* this_00;
        PacketView* pPVar10;
        Js5ResourceProvider* this_01;
        uint* puVar11;
        BuildModelMain* pBVar12;
        WorldmapAreaMetadata* this_02;
        Array* pAVar13;
        PlayerModel* pPVar14;
        Array* pAVar15;
        Array* pAVar16;
        MapArea* this_03;
        vector* this_04;
        Model* pMVar17;
        undefined** ppuVar18;
        bool bVar19;
        PacketView* pPVar20;
        undefined6 in_register_00000082;
        RT7Core* pRVar21;
        Js5ArchiveSettings* pJVar22;
        bool bVar23;
        PacketView local_118;
        RT7Core* local_e8;
        shared_ptr local_e0;
        undefined4 local_cc;
        Js5ArchiveSettings* local_c8;
        Js5ArchiveSettings* local_c0;
        shared_ptr local_b8;
        undefined* local_a8;
        IDKType* local_a0;
        ModelConstructedState local_8a;
        bool local_89;
        PacketView local_88[2];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_e8 = param_1;
        local_a0 = this;
        cVar3 = param_3->IsTaskDone();
        if ((cVar3 == '\0') && (cVar3 = param_3->IsEmpty(), cVar3 == '\0')) {
        LAB_100546815:
            ppuVar18 = &DataStatus::NOTLOADED;
        } else {
            cVar3 = param_3->IsEmpty();
            if (cVar3 != '\0') {
                cVar3 = graphics::Model::IsReadyToConstruct(local_e8);
                if (cVar3 == '\0')
                    goto LAB_100546815;
                local_cc = (undefined4)CONCAT62(in_register_00000082, param_4);
                pJVar22 = (Js5ArchiveSettings*)&local_a0->field_88;
                local_c0 = (Js5ArchiveSettings*)param_3;
                lVar4 = pJVar22->end();
                bVar23 = lVar4 != 0;
                local_c8 = pJVar22;
                if (lVar4 == 0) {
                    bVar19 = false;
                    bVar1 = true;
                } else {
                    bVar1 = true;
                    pRVar21 = (RT7Core*)0;
                    bVar19 = false;
                    do {
                        param_1 = pRVar21;
                        piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)pJVar22,
                                                                                (ulong)pRVar21);
                        bVar2 = bVar1;
                        if (*piVar6 != -1) {
                            plVar7 = (long*)local_a0->field_24->GetOutputType();
                            param_1 = Js5Archive::JS5_MODELSRT7;
                            puVar8 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)pJVar22, (ulong)pRVar21);
                            puVar9 =
                                (undefined*)(**(code**)(*plVar7 + 48))(plVar7, param_1, *puVar8, 0, Priority::HIGH, 1);
                            bVar2 = false;
                            if (puVar9 != DataStatus::NOTLOADED) {
                                bVar2 = bVar1;
                            }
                            bVar19 = true;
                            pJVar22 = local_c8;
                            if (puVar9 == DataStatus::MISSING) {
                                local_a8 = DataStatus::MISSING;
                                break;
                            }
                        }
                        bVar1 = bVar2;
                        pRVar21 = (RT7Core*)((long)&pRVar21->field_0 + 1);
                        pRVar5 = (RT7Core*)pJVar22->end();
                        bVar23 = pRVar21 < pRVar5;
                    } while (bVar23);
                }
                puVar9 = local_a8;
                if (bVar23) {
                    cVar3 = '\0';
                } else {
                    if (bVar19) {
                        if (bVar1) {
                            new (local_88) eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>();
                            this_00 = (PacketView*)pJVar22->end();
                            local_88->reserve((ulong)this_00);
                            lVar4 = pJVar22->end();
                            if (lVar4 != 0) {
                                pPVar20 = (PacketView*)0;
                                do {
                                    this_00 = pPVar20;
                                    piVar6 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)pJVar22, (ulong)pPVar20);
                                    if (*piVar6 != -1) {
                                        new (&local_118) PacketView();
                                        this_01 = (Js5ResourceProvider*)local_a0->field_24->GetOutputType();
                                        pRVar21 = Js5Archive::JS5_MODELSRT7;
                                        puVar11 = (uint*)Array<int, eastl::allocator>::operator[](
                                            (Array<int, eastl::allocator>*)local_c8, (ulong)pPVar20);
                                        this_01->GetFile(&local_118, pRVar21, *puVar11, 0, (Priority*)Priority::HIGH,
                                                         true, false, false);
                                        this_00 = &local_118;
                                        eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>::push_back(
                                            local_88);
                                        local_118.~PacketView();
                                        puVar9 = local_a8;
                                        pJVar22 = local_c8;
                                    }
                                    pPVar20 = (PacketView*)((long)&pPVar20->field_0 + 1);
                                    pPVar10 = (PacketView*)pJVar22->end();
                                } while (pPVar20 < pPVar10);
                            }
                            MakeSharedPool<graphics::Model, 3072>::MakeShared<>(
                                (shared_ptr*)&local_118, (MakeSharedPool<graphics::Model, 3072>*)this_00);
                            pMVar17 = (Model*)shared_ptr<graphics::Model>::operator->(
                                (shared_ptr<graphics::Model>*)&local_118);
                            pMVar17->SetSourceModelIDs(pJVar22);
                            local_e0._0_4_ = 4096;
                            local_8a = (ModelConstructedState)2;
                            local_89 = true;
                            bucket_make_shared<BuildModelMain, int, graphics::ModelConstructedState, bool,
                                               graphics::RT7Core*&,
                                               eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>,
                                               shared_ptr<graphics::Model>&>(
                                (jag*)&local_b8, (int*)&local_e0, &local_8a, &local_89, &local_e8,
                                (fixed_vector*)local_88, (shared_ptr*)&local_118);
                            pBVar12 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                (shared_ptr<BuildModelMain>*)&local_b8);
                            pBVar12->SetRecolor((Array*)&local_a0->field_112, (Array*)&local_a0->field_136);
                            pBVar12 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                (shared_ptr<BuildModelMain>*)&local_b8);
                            pBVar12->SetRematerial((Array*)&local_a0->field_184, (Array*)&local_a0->field_208);
                            pBVar12 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                (shared_ptr<BuildModelMain>*)&local_b8);
                            pBVar12->SetAmbientAdjust((ushort)local_cc);
                            bVar23 = operator!=(param_5, (_func_decltype_nullptr*)0);
                            if (bVar23) {
                                pBVar12 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                    (shared_ptr<BuildModelMain>*)&local_b8);
                                this_02 = (WorldmapAreaMetadata*)shared_ptr<PlayerModel>::operator->(
                                    (shared_ptr<PlayerModel>*)param_5);
                                pAVar13 = (Array*)this_02->GetOrigin();
                                pPVar14 = (PlayerModel*)shared_ptr<PlayerModel>::operator->(
                                    (shared_ptr<PlayerModel>*)param_5);
                                pAVar15 = (Array*)pPVar14->GetPlayerRecolSource();
                                pPVar14 = (PlayerModel*)shared_ptr<PlayerModel>::operator->(
                                    (shared_ptr<PlayerModel>*)param_5);
                                pAVar16 = (Array*)pPVar14->GetPlayerRecolDest();
                                pBVar12->SetPlayerRecolor(pAVar13, pAVar15, pAVar16);
                                pBVar12 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                    (shared_ptr<BuildModelMain>*)&local_b8);
                                this_03 =
                                    (MapArea*)shared_ptr<PlayerModel>::operator->((shared_ptr<PlayerModel>*)param_5);
                                pAVar13 = (Array*)this_03->GetOrigin();
                                pPVar14 = (PlayerModel*)shared_ptr<PlayerModel>::operator->(
                                    (shared_ptr<PlayerModel>*)param_5);
                                pAVar15 = (Array*)pPVar14->GetPlayerRematSource();
                                pPVar14 = (PlayerModel*)shared_ptr<PlayerModel>::operator->(
                                    (shared_ptr<PlayerModel>*)param_5);
                                pAVar16 = (Array*)pPVar14->GetPlayerRematDest();
                                pBVar12->SetPlayerRematerial(pAVar13, pAVar15, pAVar16);
                            }
                            new (&local_e0) shared_ptr<oldscape::dash3d::Decor>(&local_b8);
                            param_2->SubmitJob(&local_e0);
                            pJVar22 = local_c0;
                            local_e0.~shared_ptr();
                            param_1 = (RT7Core*)&local_118;
                            pJVar22->SetObjAndTask(param_1, &local_b8);
                            cVar3 = local_c0->IsTaskDone();
                            if (cVar3 == '\0') {
                                puVar9 = DataStatus::NOTLOADED;
                            }
                            local_b8.~shared_ptr();
                            local_118.~shared_ptr();
                            local_88->~fixed_vector();
                            goto LAB_100546ba5;
                        }
                        ppuVar18 = &DataStatus::NOTLOADED;
                    } else {
                        ppuVar18 = &DataStatus::READY;
                    }
                    puVar9 = *ppuVar18;
                    cVar3 = '\0';
                }
            LAB_100546ba5:
                param_3 = (BuildRequest*)local_c0;
                if (cVar3 == '\0')
                    goto LAB_100546bf4;
            }
            this_04 = param_3->SSOBeginPtr(param_1);
            pMVar17 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_04);
            cVar3 = pMVar17->GetConstructedState();
            if (cVar3 != '\x02') {
                /* WARNING: Subroutine does not return */
                LogAssert("model.GetAsset()->GetConstructedState() == graphics::ModelConstructedState::DATA_AND_MAT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "idktype/IDKType.cpp",
                          311, (char*)0);
            }
            ppuVar18 = &DataStatus::READY;
        }
        puVar9 = *ppuVar18;
    LAB_100546bf4:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return puVar9;
    }

} // namespace jag::game
