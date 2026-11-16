// libs/game/runetek5/config/idktype/IDKType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "IDKType.h"

namespace jag::game {
    // 0x1005458d0
    uint8_t* IDKType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        uint8_t bVar1;
        uint16_t uVar2;
        unsigned short uVar3;
        uint32_t uVar4;
        unsigned int uVar5;
        uint32_t* puVar6;
        uint16_t* puVar7;
        unsigned int* puVar8;
        unsigned int uVar9;
        unsigned int uVar10;
        unsigned long uVar11;
        unsigned long uVar12;
        bool bVar13;

        switch (arg2) {
        case 1:
            bVar1 = arg1.g1();
            field_56 = (unsigned int)bVar1;
            break;
        case 2:
            bVar1 = arg1.g1();
            field_64.set_max_size((unsigned long)bVar1, 0);
            if (bVar1 != 0) {
                uVar12 = 0;
                do {
                    uVar4 = arg1.gSmart2or4s();
                    puVar6 = &field_64[uVar12];
                    *puVar6 = uVar4;
                    uVar12 = uVar12 + 1;
                } while (bVar1 != uVar12);
            }
            break;
        case 3:
            field_256 = 1;
            break;
        default:
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "idktype/IDKType.cpp",
                      119, "Unrecognised .idk config code: %u", arg2);
            break;
        case 40:
            bVar1 = arg1.g1();
            uVar12 = (unsigned long)bVar1;
            field_112.set_max_size(uVar12, 0);
            field_136.set_max_size(uVar12, 0);
            if (bVar1 != 0) {
                uVar11 = 0;
                do {
                    uVar2 = arg1.g2();
                    puVar7 = &field_112[uVar11];
                    *puVar7 = uVar2;
                    uVar2 = arg1.g2();
                    puVar7 = &field_136[uVar11];
                    *puVar7 = uVar2;
                    uVar11 = uVar11 + 1;
                } while (uVar12 != uVar11);
            }
            break;
        case 41:
            bVar1 = arg1.g1();
            uVar12 = (unsigned long)bVar1;
            field_184.set_max_size(uVar12, 0);
            field_208.set_max_size(uVar12, 0);
            if (bVar1 != 0) {
                uVar11 = 0;
                do {
                    uVar2 = arg1.g2();
                    puVar7 = &field_184[uVar11];
                    *puVar7 = uVar2;
                    uVar2 = arg1.g2();
                    puVar7 = &field_208[uVar11];
                    *puVar7 = uVar2;
                    uVar11 = uVar11 + 1;
                } while (uVar12 != uVar11);
            }
            break;
        case 44:
            uVar3 = arg1.g2();
            uVar10 = 0;
            if (uVar3 != 0) {
                uVar9 = (unsigned int)uVar3;
                do {
                    uVar10 = uVar10 + 1;
                    bVar13 = 1 < uVar9;
                    uVar9 = uVar9 >> 1;
                } while (bVar13);
            }
            field_160.set_max_size((unsigned long)uVar10, 0);
            if (uVar10 != 0) {
                uVar12 = 0;
                uVar9 = 0;
                do {
                    uVar5 = 1 << ((uint8_t)uVar12 & 31) & (unsigned int)uVar3;
                    puVar8 = &field_160[uVar12];
                    *puVar8 = -(unsigned int)(uVar5 == 0) | uVar9;
                    uVar12 = uVar12 + 1;
                    uVar9 = (uVar9 + 1) - (unsigned int)(uVar5 == 0);
                } while (uVar10 != uVar12);
            }
            break;
        case 45:
            uVar3 = arg1.g2();
            uVar10 = 0;
            if (uVar3 != 0) {
                uVar9 = (unsigned int)uVar3;
                do {
                    uVar10 = uVar10 + 1;
                    bVar13 = 1 < uVar9;
                    uVar9 = uVar9 >> 1;
                } while (bVar13);
            }
            field_232.set_max_size((unsigned long)uVar10, 0);
            if (uVar10 != 0) {
                uVar12 = 0;
                uVar9 = 0;
                do {
                    uVar5 = 1 << ((uint8_t)uVar12 & 31) & (unsigned int)uVar3;
                    puVar8 = &field_232[uVar12];
                    *puVar8 = -(unsigned int)(uVar5 == 0) | uVar9;
                    uVar12 = uVar12 + 1;
                    uVar9 = (uVar9 + 1) - (unsigned int)(uVar5 == 0);
                } while (uVar10 != uVar12);
            }
            break;
        case 60:
        case 61:
        case 62:
        case 63:
        case 64:
            uVar4 = arg1.gSmart2or4s();
            puVar6 = &field_88[(unsigned long)(arg2 - 60)];
            *puVar6 = uVar4;
        }
        return DataStatus::READY;
    }

    // 0x100545d50
    void IDKType::PostDecode() {}

    // 0x100545d60
    shared_ptr<PlayerModel>* IDKType::GetBodyModel(graphics::RT7Core* rt7Core, AssetBuilder& assetBuilder,
                                                   BuildRequest<graphics::Model, BuildModelMain>& buildRequest,
                                                   unsigned short arg4,
                                                   const shared_ptr<PlayerModel>& playerModel) const {
        bool bVar1;
        Js5ArchiveSettings* pJVar2;
        bool bVar3;
        long lVar5;
        unsigned long uVar6;
        int* piVar7;
        long* plVar8;
        uint32_t* puVar9;
        uint8_t* puVar10;
        Js5ResourceProvider* this_00;
        unsigned int* puVar11;
        BuildModelMain* pBVar12;
        WorldmapAreaMetadata* this_01;
        Array<unsigned char>* pAVar13;
        PlayerModel* pPVar14;
        Array<Array<unsigned short>>* pAVar15;
        Array<Array<Array<unsigned short>>>* pAVar16;
        MapArea* this_02;
        shared_ptr<graphics::Model>* this_03;
        Model* pMVar17;
        uint8_t** ppuVar18;
        shared_ptr<PlayerModel>* psVar19;
        uint64_t in_register_00000082;
        unsigned long uVar20;
        Array<int>* this_04;
        bool bVar21;
        PacketView local_118;
        uint32_t local_e0[4];
        BuildRequest<graphics::Model, BuildModelMain>* local_d0;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_c0;
        shared_ptr<BuildModelMain> local_b8;
        shared_ptr<PlayerModel>* local_a0;
        shared_ptr<PlayerModel>* local_98;
        bool local_8a;
        uint64_t local_89;

        uint32_t local_c4 = (uint32_t)(((uint64_t)in_register_00000082 << 16) | (uint16_t)arg4);
        RT7Core* local_e8 = rt7Core;
        IDKType* local_a8 = this;
        char cVar4 = buildRequest.IsTaskDone();
        if ((!cVar4) && (cVar4 = buildRequest.IsEmpty(), !cVar4)) {
        LAB_100545ef3:
            ppuVar18 = &DataStatus::NOTLOADED;
        } else {
            cVar4 = buildRequest.IsEmpty();
            if (cVar4) {
                cVar4 = graphics::Model::IsReadyToConstruct(local_e8);
                if (!cVar4)
                    goto LAB_100545ef3;
                this_04 = (Array<int>*)&local_a8->field_64;
                local_d0 = buildRequest;
                local_98 = playerModel;
                lVar5 = this_04->end();
                bVar21 = lVar5 != 0;
                bVar1 = true;
                local_c0 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_04;
                if (bVar21) {
                    uVar20 = 0;
                    bVar1 = true;
                    do {
                        piVar7 = (int*)(*this_04)[uVar20];
                        bVar3 = bVar1;
                        if (*piVar7 != -1) {
                            local_a0 = playerModel;
                            plVar8 = (long*)local_a8->field_24->GetOutputType();
                            pJVar2 = Js5Archive::JS5_MODELSRT7;
                            puVar9 = (uint32_t*)(*this_04)[uVar20];
                            puVar10 = (uint8_t*)(**(void (**)(...))(*plVar8 + 48))(plVar8, pJVar2, *puVar9, 0,
                                                                                   Priority::HIGH, 1);
                            bVar3 = false;
                            if (puVar10 != DataStatus::NOTLOADED) {
                                bVar3 = bVar1;
                            }
                            playerModel = local_a0;
                            this_04 = (Array<int>*)local_c0;
                            if (puVar10 == DataStatus::MISSING) {
                                playerModel = (shared_ptr<PlayerModel>*)DataStatus::MISSING;
                                break;
                            }
                        }
                        bVar1 = bVar3;
                        uVar20 = uVar20 + 1;
                        uVar6 = this_04->end();
                        bVar21 = uVar20 < uVar6;
                    } while (bVar21);
                }
                buildRequest = local_d0;
                local_a0 = playerModel;
                if (bVar21) {
                LAB_100545f2c:
                    cVar4 = '\0';
                } else {
                    if (!bVar1) {
                        local_a0 = (shared_ptr<PlayerModel>*)DataStatus::NOTLOADED;
                        goto LAB_100545f2c;
                    }
                    new ((fixed_vector<PacketView, 1ul>*)((long)&local_89 + 1)) eastl::fixed_vector<PacketView, 1ul>();
                    uVar20 = this_04->end();
                    ((vector<PacketView, eastl::fixed_vector_allocator<40ul, 1ul, 8ul, 0ul, true>>*)((long)&local_89 +
                                                                                                     1))
                        ->reserve(uVar20);
                    lVar5 = this_04->end();
                    if (lVar5 != 0) {
                        uVar20 = 0;
                        do {
                            piVar7 = (int*)(*this_04)[uVar20];
                            if (*piVar7 != -1) {
                                local_118 = PacketView();
                                this_00 = (Js5ResourceProvider*)local_a8->field_24->GetOutputType();
                                pJVar2 = Js5Archive::JS5_MODELSRT7;
                                puVar11 = (unsigned int*)(*local_c0)[uVar20];
                                this_00->GetFile(local_118, *pJVar2, *puVar11, 0, (Priority*)Priority::HIGH, true,
                                                 false, false);
                                ((fixed_vector<PacketView, 1ul>*)((long)&local_89 + 1))->push_back(local_118);
                                buildRequest = local_d0;
                                this_04 = (Array<int>*)local_c0;
                            }
                            uVar20 = uVar20 + 1;
                            uVar6 = this_04->end();
                        } while (uVar20 < uVar6);
                    }
                    MakeSharedPool<graphics::Model, 3072>::MakeShared<>();
                    pMVar17 = (Model*)local_118.operator->();
                    pMVar17->SetSourceModelIDs(this_04);
                    local_e0[0] = 4096;
                    local_8a = true;
                    local_89._0_1_ = 1;
                    bucket_make_shared<BuildModelMain, int, graphics::ModelConstructedState, bool, graphics::RT7Core*&,
                                       eastl::fixed_vector<PacketView, 1ul>, shared_ptr<graphics::Model>&>(
                        &local_b8, (ModelConstructedState*)local_e0, &local_8a, (RT7Core**)&local_89,
                        (fixed_vector<PacketView, _1ul>*)&local_e8,
                        (shared_ptr<graphics::Model>*)((long)&local_89 + 1));
                    pBVar12 = (BuildModelMain*)local_b8.operator->();
                    pBVar12->SetRecolor(local_a8->field_112, local_a8->field_136);
                    pBVar12 = (BuildModelMain*)local_b8.operator->();
                    pBVar12->SetRematerial(local_a8->field_184, local_a8->field_208);
                    bVar21 = *local_98 != nullptr;
                    if (bVar21) {
                        pBVar12 = (BuildModelMain*)local_b8.operator->();
                        this_01 = (WorldmapAreaMetadata*)(*local_98).operator->();
                        pAVar13 = (Array<unsigned char>*)this_01->GetOrigin();
                        pPVar14 = (PlayerModel*)(*local_98).operator->();
                        pAVar15 = pPVar14->GetPlayerRecolSource();
                        pPVar14 = (PlayerModel*)(*local_98).operator->();
                        pAVar16 = pPVar14->GetPlayerRecolDest();
                        pBVar12->SetPlayerRecolor(*pAVar13, *pAVar15, *pAVar16);
                        pBVar12 = (BuildModelMain*)local_b8.operator->();
                        this_02 = (MapArea*)(*local_98).operator->();
                        pAVar13 = (Array<unsigned char>*)this_02->GetOrigin();
                        pPVar14 = (PlayerModel*)(*local_98).operator->();
                        pAVar15 = pPVar14->GetPlayerRematSource();
                        pPVar14 = (PlayerModel*)(*local_98).operator->();
                        pAVar16 = pPVar14->GetPlayerRematDest();
                        pBVar12->SetPlayerRematerial(*pAVar13, *pAVar15, *pAVar16);
                    }
                    pBVar12 = (BuildModelMain*)local_b8.operator->();
                    pBVar12->SetAmbientAdjust((unsigned short)local_c4);
                    new (local_e0) shared_ptr(&local_b8);
                    assetBuilder.SubmitJob(*local_e0);
                    buildRequest.SetObjAndTask(local_118, local_b8);
                    cVar4 = buildRequest.IsTaskDone();
                    if (!cVar4) {
                        local_a0 = (shared_ptr<PlayerModel>*)DataStatus::NOTLOADED;
                    }
                    ((fixed_vector<PacketView, 1ul>*)((long)&local_89 + 1))->~fixed_vector();
                }
                psVar19 = local_a0;
                if (!cVar4)
                    goto LAB_1005462c0;
            }
            this_03 = (shared_ptr<graphics::Model>*)buildRequest.SSOBeginPtr();
            pMVar17 = (Model*)(*this_03).operator->();
            cVar4 = pMVar17->GetConstructedState();
            if (cVar4 != '\x02') {
                LogAssert("model.GetAsset()->GetConstructedState() == graphics::ModelConstructedState::DATA_AND_MAT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "idktype/IDKType.cpp",
                          216, nullptr);
            }
            ppuVar18 = &DataStatus::READY;
        }
        psVar19 = (shared_ptr<PlayerModel>*)*ppuVar18;
    LAB_1005462c0:
        return psVar19;
    }

    // 0x100546680
    uint8_t* IDKType::GetHeadModel(graphics::RT7Core* rt7Core, AssetBuilder& assetBuilder,
                                   BuildRequest<graphics::Model, BuildModelMain>& buildRequest, unsigned short arg4,
                                   const shared_ptr<PlayerModel>& playerModel) const {
        bool bVar1;
        Js5ArchiveSettings* pJVar2;
        BuildRequest<graphics::Model, BuildModelMain>* this_00;
        bool bVar3;
        long lVar5;
        unsigned long uVar6;
        int* piVar7;
        long* plVar8;
        uint32_t* puVar9;
        uint8_t* puVar10;
        Js5ResourceProvider* this_01;
        unsigned int* puVar11;
        BuildModelMain* pBVar12;
        WorldmapAreaMetadata* this_02;
        Array<unsigned char>* pAVar13;
        PlayerModel* pPVar14;
        Array<Array<unsigned short>>* pAVar15;
        Array<Array<Array<unsigned short>>>* pAVar16;
        MapArea* this_03;
        shared_ptr<graphics::Model>* this_04;
        Model* pMVar17;
        uint8_t** ppuVar18;
        bool bVar19;
        uint64_t in_register_00000082;
        unsigned long uVar20;
        Array<int>* this_05;
        bool bVar21;
        PacketView local_118;
        uint32_t local_e0[5];
        uint32_t local_cc;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_c8;
        BuildRequest<graphics::Model, BuildModelMain>* local_c0;
        shared_ptr<BuildModelMain> local_b8;
        uint8_t* local_a8;
        bool local_8a;
        uint64_t local_89;

        RT7Core* local_e8 = rt7Core;
        IDKType* local_a0 = this;
        char cVar4 = buildRequest.IsTaskDone();
        if ((!cVar4) && (cVar4 = buildRequest.IsEmpty(), !cVar4)) {
        LAB_100546815:
            ppuVar18 = &DataStatus::NOTLOADED;
        } else {
            cVar4 = buildRequest.IsEmpty();
            if (cVar4) {
                cVar4 = graphics::Model::IsReadyToConstruct(local_e8);
                if (!cVar4)
                    goto LAB_100546815;
                local_cc = (uint32_t)(((uint64_t)in_register_00000082 << 16) | (uint16_t)arg4);
                this_05 = (Array<int>*)&local_a0->field_88;
                local_c0 = buildRequest;
                lVar5 = this_05->end();
                bVar21 = lVar5 != 0;
                local_c8 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_05;
                if (lVar5 == 0) {
                    bVar19 = false;
                    bVar1 = true;
                } else {
                    bVar1 = true;
                    uVar20 = 0;
                    bVar19 = false;
                    do {
                        piVar7 = (int*)(*this_05)[uVar20];
                        bVar3 = bVar1;
                        if (*piVar7 != -1) {
                            plVar8 = (long*)local_a0->field_24->GetOutputType();
                            pJVar2 = Js5Archive::JS5_MODELSRT7;
                            puVar9 = (uint32_t*)(*this_05)[uVar20];
                            puVar10 = (uint8_t*)(**(void (**)(...))(*plVar8 + 48))(plVar8, pJVar2, *puVar9, 0,
                                                                                   Priority::HIGH, 1);
                            bVar3 = false;
                            if (puVar10 != DataStatus::NOTLOADED) {
                                bVar3 = bVar1;
                            }
                            bVar19 = true;
                            this_05 = (Array<int>*)local_c8;
                            if (puVar10 == DataStatus::MISSING) {
                                local_a8 = DataStatus::MISSING;
                                break;
                            }
                        }
                        bVar1 = bVar3;
                        uVar20 = uVar20 + 1;
                        uVar6 = this_05->end();
                        bVar21 = uVar20 < uVar6;
                    } while (bVar21);
                }
                puVar10 = local_a8;
                if (bVar21) {
                    cVar4 = '\0';
                } else {
                    if (bVar19) {
                        if (bVar1) {
                            new ((fixed_vector<PacketView, 1ul>*)((long)&local_89 + 1))
                                eastl::fixed_vector<PacketView, 1ul>();
                            uVar20 = this_05->end();
                            ((vector<PacketView,
                                     eastl::fixed_vector_allocator<40ul, 1ul, 8ul, 0ul, true>>*)((long)&local_89 + 1))
                                ->reserve(uVar20);
                            lVar5 = this_05->end();
                            if (lVar5 != 0) {
                                uVar20 = 0;
                                do {
                                    piVar7 = (int*)(*this_05)[uVar20];
                                    if (*piVar7 != -1) {
                                        local_118 = PacketView();
                                        this_01 = (Js5ResourceProvider*)local_a0->field_24->GetOutputType();
                                        pJVar2 = Js5Archive::JS5_MODELSRT7;
                                        puVar11 = (unsigned int*)(*local_c8)[uVar20];
                                        this_01->GetFile(local_118, *pJVar2, *puVar11, 0, (Priority*)Priority::HIGH,
                                                         true, false, false);
                                        ((fixed_vector<PacketView, 1ul>*)((long)&local_89 + 1))->push_back(local_118);
                                        puVar10 = local_a8;
                                        this_05 = (Array<int>*)local_c8;
                                    }
                                    uVar20 = uVar20 + 1;
                                    uVar6 = this_05->end();
                                } while (uVar20 < uVar6);
                            }
                            MakeSharedPool<graphics::Model, 3072>::MakeShared<>();
                            pMVar17 = (Model*)local_118.operator->();
                            pMVar17->SetSourceModelIDs(this_05);
                            local_e0[0] = 4096;
                            local_8a = true;
                            local_89._0_1_ = 1;
                            bucket_make_shared<BuildModelMain, int, graphics::ModelConstructedState, bool,
                                               graphics::RT7Core*&, eastl::fixed_vector<PacketView, 1ul>,
                                               shared_ptr<graphics::Model>&>(
                                &local_b8, (ModelConstructedState*)local_e0, &local_8a, (RT7Core**)&local_89,
                                (fixed_vector<PacketView, _1ul>*)&local_e8,
                                (shared_ptr<graphics::Model>*)((long)&local_89 + 1));
                            pBVar12 = (BuildModelMain*)local_b8.operator->();
                            pBVar12->SetRecolor(local_a0->field_112, local_a0->field_136);
                            pBVar12 = (BuildModelMain*)local_b8.operator->();
                            pBVar12->SetRematerial(local_a0->field_184, local_a0->field_208);
                            pBVar12 = (BuildModelMain*)local_b8.operator->();
                            pBVar12->SetAmbientAdjust((unsigned short)local_cc);
                            bVar21 = playerModel != nullptr;
                            if (bVar21) {
                                pBVar12 = (BuildModelMain*)local_b8.operator->();
                                this_02 = (WorldmapAreaMetadata*)playerModel.operator->();
                                pAVar13 = (Array<unsigned char>*)this_02->GetOrigin();
                                pPVar14 = (PlayerModel*)playerModel.operator->();
                                pAVar15 = pPVar14->GetPlayerRecolSource();
                                pPVar14 = (PlayerModel*)playerModel.operator->();
                                pAVar16 = pPVar14->GetPlayerRecolDest();
                                pBVar12->SetPlayerRecolor(*pAVar13, *pAVar15, *pAVar16);
                                pBVar12 = (BuildModelMain*)local_b8.operator->();
                                this_03 = (MapArea*)playerModel.operator->();
                                pAVar13 = (Array<unsigned char>*)this_03->GetOrigin();
                                pPVar14 = (PlayerModel*)playerModel.operator->();
                                pAVar15 = pPVar14->GetPlayerRematSource();
                                pPVar14 = (PlayerModel*)playerModel.operator->();
                                pAVar16 = pPVar14->GetPlayerRematDest();
                                pBVar12->SetPlayerRematerial(*pAVar13, *pAVar15, *pAVar16);
                            }
                            new (local_e0) shared_ptr(&local_b8);
                            assetBuilder.SubmitJob(*local_e0);
                            this_00 = local_c0;
                            this_00->SetObjAndTask(local_118, local_b8);
                            cVar4 = local_c0->IsTaskDone();
                            if (!cVar4) {
                                puVar10 = DataStatus::NOTLOADED;
                            }
                            ((fixed_vector<PacketView, 1ul>*)((long)&local_89 + 1))->~fixed_vector();
                            goto LAB_100546ba5;
                        }
                        ppuVar18 = &DataStatus::NOTLOADED;
                    } else {
                        ppuVar18 = &DataStatus::READY;
                    }
                    puVar10 = *ppuVar18;
                    cVar4 = '\0';
                }
            LAB_100546ba5:
                buildRequest = local_c0;
                if (!cVar4)
                    goto LAB_100546bf4;
            }
            this_04 = (shared_ptr<graphics::Model>*)buildRequest.SSOBeginPtr();
            pMVar17 = (Model*)(*this_04).operator->();
            cVar4 = pMVar17->GetConstructedState();
            if (cVar4 != '\x02') {
                LogAssert("model.GetAsset()->GetConstructedState() == graphics::ModelConstructedState::DATA_AND_MAT",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "idktype/IDKType.cpp",
                          311, nullptr);
            }
            ppuVar18 = &DataStatus::READY;
        }
        puVar10 = *ppuVar18;
    LAB_100546bf4:
        return puVar10;
    }

} // namespace jag::game
