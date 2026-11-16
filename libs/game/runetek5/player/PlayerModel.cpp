// libs/game/runetek5/player/PlayerModel.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "PlayerModel.h"

namespace jag::game {
    // 0x100d42d78
    int32_t PlayerModel::BASE_PART_MAP[8] = {8, 11, 4, 6, 9, 7, 10, 0};

    // 0x100d42d98
    int32_t PlayerModel::BASE_PART_MALE[8] = {0, 1, 2, 3, 4, 5, 6, 14};

    // 0x100d42db8
    int32_t PlayerModel::BASE_PART_FEMALE[8] = {7, 8, 9, 10, 11, 12, 13, 15};

    // 0x10005d8c0: PlayerModel::GetPlayerRematerialSlots() const has the same machine code as oldscape::OSClientConsoleUI::GetBounds() const

    // 0x100102fc0: PlayerModel::GetPlayerRecolourSlots() const has the same machine code as oldscape::rs2lib::InputField::GetPlaceholderContents() const

    // 0x1003cf2c0: PlayerModel::GetGender() const has the same machine code as MapElementType::GetTextRGBA() const

    // 0x100494d80
    PlayerModel::PlayerModel(ConfigProvider* configProvider, PlayerVarDomain* playerVarDomain)
        : oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob(),
          MakeSharedPool<PlayerModel, 32>(), field_16(configProvider), field_24(playerVarDomain) {
        uint8_t* puVar3;
        unsigned long uVar4;
        unsigned int uVar6;

        uint8_t* puVar5 = &field_80;
        new (puVar5) Array<unsigned char>();
        uint8_t* this_00 = &field_104;
        new (this_00) Array<unsigned char>();
        m_gender = 4294967295;
        field_132 = -1;
        field_136 = 64;
        m_playerAppearanceChangedTime = 0;
        new (field_152) PlayerModelReplaceHeldStatus();
        new (field_208) PlayerModelReplaceHeldStatus();
        new (&field_264) PlayerModelCache();
        new (&field_776) PlayerModelCache();
        new (&field_1288) AssetLRUHashCache<graphics::Model, BuildModelMain, 100ul, 101ul, false>(100, "PlayerModel");
        new (&field_9584) eastl::vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>();
        new (field_9608) BuildRequest<graphics::Model, BuildModelMain>();
        new (&field_9640) eastl::vector<BuildRequest<graphics::Model, BuildModelMain>, BucketAllocatorEASTL>();
        new (field_9664) BuildRequest<graphics::Model, BuildModelMain>();
        auto this_01 = field_16->GetWearposDefaults();
        auto this_02 = this_01->SSOBeginPtr();
        unsigned long uVar1 = this_02->end();
        field_32.set_max_size(uVar1, 0);
        uVar1 = this_02->end();
        field_56.set_max_size(uVar1, 0);
        uVar1 = this_02->end();
        field_9584.resize(uVar1);
        uVar1 = this_02->end();
        field_9640.resize(uVar1);
        puVar5->set_max_size(10, 0);
        long lVar2 = puVar5->end();
        if (lVar2 != 0) {
            uVar6 = 1;
            uVar1 = 0;
            do {
                puVar3 = (uint8_t*)(*puVar5)[uVar1];
                *puVar3 = 0;
                uVar1 = (unsigned long)uVar6;
                uVar4 = puVar5->end();
                uVar6 = uVar6 + 1;
            } while (uVar1 < uVar4);
        }
        this_00->set_max_size(10, 0);
        lVar2 = this_00->end();
        if (lVar2 != 0) {
            uVar6 = 1;
            uVar1 = 0;
            do {
                puVar5 = (uint8_t*)(*this_00)[uVar1];
                *puVar5 = 0;
                uVar1 = (unsigned long)uVar6;
                uVar4 = this_00->end();
                uVar6 = uVar6 + 1;
            } while (uVar1 < uVar4);
        }
    }

    // 0x1004954c0
    void PlayerModel::SetAppearance(
        const Array<PlayerModelWearSlot, BucketAllocatorEASTL>& playerModelWearSlots,
        const Array<shared_ptr<ObjTypeCustomisation>, BucketAllocatorEASTL>& objTypeCustomisations,
        const Array<unsigned char, BucketAllocatorEASTL>& arg3, const Array<unsigned char, BucketAllocatorEASTL>& arg4,
        PlayerGender playerGender, int arg6) {
        uint32_t in_register_00000084;
        uint32_t in_stack_00000008;
        Array<PlayerModelWearSlot> local_48;

        local_48.Array<BucketAllocatorEASTL>(objTypeCustomisations);
        (*((playerModelWearSlots + 32))) = local_48;
        local_48.Array<BucketAllocatorEASTL>(arg3);
        (*((playerModelWearSlots + 56))) = local_48;
        ((playerModelWearSlots + 9584))->clear();
        unsigned long uVar1 = objTypeCustomisations.end();
        ((playerModelWearSlots + 9584))->resize(uVar1);
        ((playerModelWearSlots + 9640))->clear();
        uVar1 = objTypeCustomisations.end();
        ((playerModelWearSlots + 9640))->resize(uVar1);
        local_48.Array<BucketAllocatorEASTL>(arg4);
        (*((playerModelWearSlots + 80))) = local_48;
        local_48.Array<BucketAllocatorEASTL>(
            *((Array<unsigned char, BucketAllocatorEASTL>*)(((uint64_t)in_register_00000084 << 32) |
                                                            (uint32_t)playerGender)));
        (*((playerModelWearSlots + 104))) = local_48;
        *(int*)(playerModelWearSlots + 128) = arg6;
        *(uint32_t*)(playerModelWearSlots + 132) = in_stack_00000008;
        ((playerModelWearSlots + 152))->Reset();
        ((playerModelWearSlots + 208))->Reset();
        ClearAppearance((PlayerModel*)playerModelWearSlots);
        ClearRecolouredCache((PlayerModel*)playerModelWearSlots);
        uint64_t uVar2 = FrameTime::GetCurrentTimeMS();
        *(uint64_t*)(playerModelWearSlots + 144) = uVar2;
    }

    // 0x100495740
    uint64_t PlayerModel::GetPlayerAppearanceChangedTime() {
        return m_playerAppearanceChangedTime;
    }

    // 0x100495750
    void PlayerModel::SetIDKPart(unsigned int arg1, int arg2) {
        long lVar2;
        BuildRequest<graphics::Model, BuildModelMain>* pBVar3;

        int* piVar1 = &BASE_PART_MAP[(unsigned long)arg1];
        unsigned long arg1_00 = (unsigned long)*piVar1;
        uint8_t* this_00 = &field_32;
        piVar1 = (int*)(*this_00)[arg1_00];
        if (((*piVar1 == -1) || (lVar2 = (*this_00)[arg1_00], *(int*)(lVar2 + 4) != -1)) ||
            (piVar1 = (int*)(*this_00)[arg1_00], *piVar1 != arg2)) {
            piVar1 = (int*)(*this_00)[arg1_00];
            *piVar1 = arg2;
            pBVar3 = &field_9584[arg1_00];
            pBVar3->Clear();
            pBVar3 = &field_9640[arg1_00];
            pBVar3->Clear();
            ClearAppearance();
            return;
        }
    }

    // 0x1004958d0
    void PlayerModel::SetIDKRecolourSlot(unsigned int arg1, unsigned char arg2) {
        unsigned long uVar2;

        unsigned char* puVar1 = &field_80[(unsigned long)arg1];
        if (*puVar1 != arg2) {
            puVar1 = &field_80[(unsigned long)arg1];
            *puVar1 = arg2;
            field_9584.clear();
            uVar2 = field_32.end();
            field_9584.resize(uVar2);
            field_9640.clear();
            uVar2 = field_32.end();
            field_9640.resize(uVar2);
            ClearAppearance();
            ClearRecolouredCache();
        }
    }

    // 0x100495970
    void PlayerModel::SetIDKRematerialSlot(unsigned int arg1, unsigned char arg2) {
        unsigned long uVar2;

        unsigned char* puVar1 = &field_104[(unsigned long)arg1];
        if (*puVar1 != arg2) {
            puVar1 = &field_104[(unsigned long)arg1];
            *puVar1 = arg2;
            field_9584.clear();
            uVar2 = field_32.end();
            field_9584.resize(uVar2);
            field_9640.clear();
            uVar2 = field_32.end();
            field_9640.resize(uVar2);
            ClearAppearance();
            ClearRecolouredCache();
        }
    }

    // 0x100495a10
    void PlayerModel::SetGender(PlayerGender playerGender) {
        m_gender = playerGender;
        field_9584.clear();
        unsigned long uVar1 = field_32.end();
        field_9584.resize(uVar1);
        field_9640.clear();
        uVar1 = field_32.end();
        field_9640.resize(uVar1);
        ClearAppearance();
    }

    // 0x100495a80
    void PlayerModel::SetObject(unsigned int arg1, int arg2) {
        long lVar1;
        int* piVar2;
        BuildRequest<graphics::Model, BuildModelMain>* pBVar3;

        if ((arg2 == -1) && (lVar1 = field_32[(unsigned long)arg1], *(int*)(lVar1 + 4) == -1)) {
            return;
        }
        uint8_t* this_00 = &field_32;
        lVar1 = (*this_00)[(unsigned long)arg1];
        if (((*(int*)(lVar1 + 4) == -1) || (piVar2 = (int*)(*this_00)[(unsigned long)arg1], *piVar2 != -1)) ||
            (lVar1 = (*this_00)[(unsigned long)arg1], *(int*)(lVar1 + 4) != arg2)) {
            lVar1 = (*this_00)[(unsigned long)arg1];
            *(int*)(lVar1 + 4) = arg2;
            pBVar3 = &field_9584[(unsigned long)arg1];
            pBVar3->Clear();
            pBVar3 = &field_9640[(unsigned long)arg1];
            pBVar3->Clear();
            ClearAppearance();
            return;
        }
    }

    // 0x100495b30
    uint8_t* PlayerModel::GetBodyModel(bool arg1, graphics::RT7Core& rt7Core, AssetBuilder& assetBuilder,
                                       BuildRequest<graphics::Model, BuildModelMain>& buildRequest) {
        uint8_t* this_00;
        uint8_t* this_01;
        unsigned short uVar1;
        PlayerGender PVar2;
        ConfigProvider* pCVar3;
        bool bVar4;
        uint8_t* puVar5;
        char cVar6;
        shared_ptr* psVar7;
        RT7Core* rt7Core_00;
        uint8_t* this_02;
        shared_ptr<graphics::Model>* psVar8;
        Model* pMVar9;
        uint8_t** ppuVar10;
        long lVar11;
        unsigned long uVar12;
        int* piVar13;
        IDKType* this_03;
        BuildRequest<graphics::Model, BuildModelMain>* pBVar14;
        uint8_t* puVar15;
        ObjType* this_04;
        shared_ptr<ObjTypeCustomisation>* objTypeCustomisation;
        BuildRequest<graphics::Animation, BuildAnimationMain>* this_06;
        BuildRequest<graphics::Animation, BuildAnimationMain>* pBVar16;
        Model* model;
        TextureManager* textureManager;
        uint64_t in_register_00000031;
        bool bVar18;
        bool bVar19;
        unsigned long uVar20;
        uint8_t* local_58;
        enable_shared_from_this<PathingEntity> local_48;

        ScopedGPUMemoryZone local_38("PlayerBodyModel");
        if (((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) || (field_132 == -1)) {
            this_00 = field_9608;
            cVar6 = this_00->IsTaskDone();
            if (!cVar6) {
                cVar6 = this_00->IsEmpty();
                if (!cVar6) {
                    buildRequest = *this_00;
                } else {
                    cVar6 = graphics::Model::IsReadyToConstruct(rt7Core);
                    if (cVar6) {
                        cVar6 = LoadFromBodyCache();
                        if (cVar6) {
                            buildRequest = *this_00;
                            cVar6 = buildRequest.IsTaskDone();
                            if (cVar6) {
                                psVar8 = (shared_ptr<graphics::Model>*)buildRequest.SSOBeginPtr();
                                pMVar9 = (Model*)(*psVar8).operator->();
                                cVar6 = pMVar9->IsLoaded();
                                if (!cVar6) {
                                    LogAssert("model.GetAsset()->IsLoaded()",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "game/runetek5/player/PlayerModel.cpp",
                                              201, nullptr);
                                }
                                goto LAB_100495c1a;
                            }
                            cVar6 = buildRequest.IsEmpty();
                            if (!cVar6)
                                goto LAB_100495cb0;
                        }
                        this_02 = &field_32;
                        this_01 = &field_9584;
                        lVar11 = this_02->end();
                        if (lVar11 == 0) {
                            bVar19 = true;
                            bVar4 = true;
                        } else {
                            bVar19 = true;
                            uVar12 = 0;
                            uVar20 = 1;
                            do {
                                piVar13 = (int*)(*this_02)[uVar12];
                                if (*piVar13 == -1) {
                                    lVar11 = (*this_02)[uVar12];
                                    if (*(int*)(lVar11 + 4) != -1) {
                                        pCVar3 = field_16;
                                        lVar11 = (*this_02)[uVar12];
                                        psVar7 = (shared_ptr*)pCVar3->GetConfig<ObjType>(*(int*)(lVar11 + 4), nullptr);
                                        cVar6 = shared_ptr::operator_cast_to_bool(psVar7);
                                        if (cVar6) {
                                            this_04 = (ObjType*)(*psVar7).operator->();
                                            pBVar14 =
                                                (BuildRequest<graphics::Model, BuildModelMain>*)(*this_01)[uVar12];
                                            PVar2 = m_gender;
                                            objTypeCustomisation = (shared_ptr<ObjTypeCustomisation>*)field_56[uVar12];
                                            uVar1 = field_136;
                                            local_48.shared_from_this();
                                            puVar15 = (uint8_t*)this_04->GetBodyModel(rt7Core, assetBuilder, *pBVar14,
                                                                                      PVar2 == 1, *objTypeCustomisation,
                                                                                      uVar1, local_48);
                                            bVar4 = false;
                                            bVar18 = false;
                                            if (puVar15 != DataStatus::NOTLOADED) {
                                                bVar18 = bVar19;
                                            }
                                            puVar5 = DataStatus::MISSING;
                                            if (puVar15 != DataStatus::MISSING)
                                                goto LAB_100495d53;
                                            goto LAB_100495d55;
                                        }
                                        goto LAB_100495d50;
                                    }
                                    ((BuildRequest<graphics::Model, BuildModelMain>*)(*this_01)[uVar12])->Clear();
                                } else {
                                    pCVar3 = field_16;
                                    piVar13 = (int*)(*this_02)[uVar12];
                                    psVar7 = (shared_ptr*)pCVar3->GetConfig<IDKType>(*piVar13, nullptr);
                                    cVar6 = shared_ptr::operator_cast_to_bool(psVar7);
                                    if (!cVar6) {
                                    LAB_100495d50:
                                        bVar18 = false;
                                    LAB_100495d53:
                                        bVar19 = bVar18;
                                        bVar4 = true;
                                        puVar5 = local_58;
                                    } else {
                                        this_03 = (IDKType*)(*psVar7).operator->();
                                        pBVar14 = (BuildRequest<graphics::Model, BuildModelMain>*)(*this_01)[uVar12];
                                        uVar1 = field_136;
                                        local_48.shared_from_this();
                                        puVar15 = (uint8_t*)this_03->GetBodyModel(rt7Core, assetBuilder, *pBVar14,
                                                                                  uVar1, local_48);
                                        bVar4 = false;
                                        bVar18 = false;
                                        if (puVar15 != DataStatus::NOTLOADED) {
                                            bVar18 = bVar19;
                                        }
                                        puVar5 = DataStatus::MISSING;
                                        if (puVar15 != DataStatus::MISSING)
                                            goto LAB_100495d53;
                                    }
                                LAB_100495d55:
                                    local_58 = puVar5;
                                    if (!bVar4) {
                                        bVar4 = false;
                                        goto LAB_100495fac;
                                    }
                                }
                                uVar12 = this_02->end();
                                bVar4 = uVar20 < uVar12;
                                uVar12 = uVar20;
                                uVar20 = (unsigned long)((int)uVar20 + 1);
                            } while (bVar4);
                            bVar4 = true;
                        LAB_100495fac:
                            this_02 = local_58;
                        }
                        if (!bVar4)
                            goto LAB_100495cc3;
                        if (bVar19) {
                            MakeSharedPool<graphics::Model, 3072>::MakeShared<>();
                            pMVar9 = (Model*)local_48.operator->();
                            pMVar9->StartTransform();
                            this_06 = (BuildRequest<graphics::Animation, BuildAnimationMain>*)this_01->HeapBeginPtr();
                            pBVar16 = (BuildRequest<graphics::Animation, BuildAnimationMain>*)this_01->end();
                            if (this_06 != pBVar16) {
                                do {
                                    cVar6 = this_06->IsEmpty();
                                    if (!cVar6) {
                                        psVar8 = (shared_ptr<graphics::Model>*)this_06->SSOBeginPtr();
                                        pMVar9 = (Model*)(*psVar8).operator->();
                                        cVar6 = pMVar9->TransformStarted();
                                        if (cVar6) {
                                            LogAssert("!wearModel.GetAsset()->TransformStarted()",
                                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                      "OSRS-OS1669-BOXR/libs/game/runetek5/player/PlayerModel.cpp",
                                                      288, nullptr);
                                        }
                                        psVar8 = (shared_ptr<graphics::Model>*)this_06->SSOBeginPtr();
                                        pMVar9 = (Model*)(*psVar8).operator->();
                                        cVar6 = pMVar9->GetConstructedState();
                                        if (cVar6 != '\x02') {
                                            LogAssert("wearModel.GetAsset()->GetConstructedState() == "
                                                      "graphics::ModelConstructedState::DATA_AND_MAT",
                                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                      "OSRS-OS1669-BOXR/libs/game/runetek5/player/PlayerModel.cpp",
                                                      289, nullptr);
                                        }
                                        pMVar9 = (Model*)local_48.operator->();
                                        psVar8 = (shared_ptr<graphics::Model>*)this_06->SSOBeginPtr();
                                        model = (Model*)**psVar8;
                                        pMVar9->Append(*model);
                                    }
                                    this_06 = this_06 + 32;
                                } while (this_06 != pBVar16);
                            }
                            pMVar9 = (Model*)local_48.operator->();
                            pMVar9->WeldTouchingBatches();
                            pMVar9 = (Model*)local_48.operator->();
                            pMVar9->EndTransform(false);
                            pMVar9 = (Model*)local_48.operator->();
                            textureManager = rt7Core.GetTextureManager();
                            pMVar9->CombineBatches(*textureManager);
                            pMVar9 = (Model*)local_48.operator->();
                            pMVar9->SortSections();
                            pMVar9 = (Model*)local_48.operator->();
                            pMVar9->CalculateLabelCentres();
                            pMVar9 = (Model*)local_48.operator->();
                            pMVar9->BakeMaterialInfoAndTextureMetaAndHSLColors(rt7Core, false);
                            pMVar9 = (Model*)local_48.operator->();
                            pMVar9->ConstructFinishAndUpload();
                            this_00->SetConstructedObj(local_48);
                            field_264.CacheModelSet(*this, *this_00);
                            m_playerAppearanceChangedTime = FrameTime::GetCurrentTimeMS();
                            buildRequest = *this_00;
                            cVar6 = this_00->IsTaskDone();
                            if (!cVar6) {
                                ppuVar10 = &DataStatus::NOTLOADED;
                            } else {
                                psVar8 = (shared_ptr<graphics::Model>*)this_00->SSOBeginPtr();
                                pMVar9 = (Model*)(*psVar8).operator->();
                                cVar6 = pMVar9->IsLoaded();
                                ppuVar10 = &DataStatus::READY;
                                if (!cVar6) {
                                    LogAssert("m_bodyModel.GetAsset()->IsLoaded()",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "game/runetek5/player/PlayerModel.cpp",
                                              312, nullptr);
                                }
                            }
                            this_02 = *ppuVar10;
                            goto LAB_100495cc3;
                        }
                    }
                }
            LAB_100495cb0:
                ppuVar10 = &DataStatus::NOTLOADED;
            } else {
                psVar8 = (shared_ptr<graphics::Model>*)this_00->SSOBeginPtr();
                pMVar9 = (Model*)(*psVar8).operator->();
                cVar6 = pMVar9->IsLoaded();
                if (!cVar6) {
                    LogAssert("m_bodyModel.GetAsset()->IsLoaded()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "player/PlayerModel.cpp",
                              182, nullptr);
                }
                buildRequest = *this_00;
            LAB_100495c1a:
                ppuVar10 = &DataStatus::READY;
            }
        } else {
            psVar7 = (shared_ptr*)field_16->GetConfig<NPCType>(field_132, nullptr);
            cVar6 = shared_ptr::operator_cast_to_bool(psVar7);
            if (cVar6) {
                rt7Core_00 = (RT7Core*)(*psVar7).operator->();
                this_02 = (uint8_t*)NPCType::GetBodyModels(rt7Core_00, rt7Core, assetBuilder, buildRequest, nullptr,
                                                           field_24);
                goto LAB_100495cc3;
            }
            ppuVar10 = &DataStatus::MISSING;
        }
        this_02 = *ppuVar10;
    LAB_100495cc3:
        return this_02;
    }

    // 0x100496240
    uint32_t PlayerModel::LoadFromBodyCache() {
        Layout* this_01;
        BuildRequest<graphics::Model, BuildModelMain>* buildRequest;

        auto this_00 = field_264.GetModelSet(*this);
        uint32_t uVar1 = shared_ptr::operator_cast_to_bool(this_00);
        if ((char)uVar1 != '\0') {
            this_01 = (Layout*)(*this_00).operator->();
            buildRequest = (BuildRequest<graphics::Model, BuildModelMain>*)this_01->SSOBeginPtr();
            *field_9608 = *buildRequest;
        }
        return uVar1;
    }

    // 0x100496530
    void PlayerModel::GetHeadModel(bool arg1, graphics::RT7Core& rt7Core, AssetBuilder& assetBuilder,
                                   BuildRequest<graphics::Model, BuildModelMain>& buildRequest,
                                   const Array<PlayerModelWearSlot, BucketAllocatorEASTL>& playerModelWearSlots) {
        uint8_t* uint8_t;
        uint8_t* this_00;
        unsigned short uVar1;
        PlayerGender PVar2;
        ConfigProvider* pCVar3;
        bool bVar4;
        uint8_t* puVar5;
        char cVar6;
        shared_ptr* psVar7;
        RT7Core* rt7Core_00;
        uint8_t* this_01;
        shared_ptr<graphics::Model>* psVar8;
        Model* pMVar9;
        uint8_t** ppuVar10;
        long lVar11;
        unsigned long uVar12;
        int* piVar13;
        IDKType* this_02;
        BuildRequest<graphics::Model, BuildModelMain>* pBVar14;
        uint8_t* puVar15;
        ObjType* this_03;
        shared_ptr<ObjTypeCustomisation>* objTypeCustomisation;
        BuildRequest<graphics::Animation, BuildAnimationMain>* this_05;
        BuildRequest<graphics::Animation, BuildAnimationMain>* pBVar16;
        Model* model;
        TextureManager* textureManager;
        uint64_t in_register_00000039;
        bool bVar18;
        bool bVar19;
        unsigned long uVar20;
        uint8_t* local_58;
        enable_shared_from_this<PathingEntity> local_48;

        PlayerModel* this_06 = (PlayerModel*)(((uint64_t)in_register_00000039 << 8) | (uint8_t)arg1);
        ScopedGPUMemoryZone local_38("PlayerHeadModel");
        if (((int)rt7Core == 0) || (this_06->field_132 == -1)) {
            uint8_t = this_06->field_9664;
            cVar6 = uint8_t->IsTaskDone();
            if (!cVar6) {
                cVar6 = uint8_t->IsEmpty();
                if (!cVar6) {
                    playerModelWearSlots = *uint8_t;
                } else {
                    cVar6 = graphics::Model::IsReadyToConstruct(assetBuilder);
                    if (cVar6) {
                        cVar6 = LoadFromHeadCache(this_06);
                        if (cVar6) {
                            playerModelWearSlots = *uint8_t;
                            cVar6 = playerModelWearSlots.IsTaskDone();
                            if (cVar6) {
                                psVar8 = (shared_ptr<graphics::Model>*)playerModelWearSlots.SSOBeginPtr();
                                pMVar9 = (Model*)(*psVar8).operator->();
                                cVar6 = pMVar9->IsLoaded();
                                if (!cVar6) {
                                    LogAssert("model.GetAsset()->IsLoaded()",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "game/runetek5/player/PlayerModel.cpp",
                                              361, nullptr);
                                }
                                goto LAB_10049661a;
                            }
                            cVar6 = playerModelWearSlots.IsEmpty();
                            if (!cVar6)
                                goto LAB_1004966b0;
                        }
                        this_01 = &this_06->field_32;
                        this_00 = &this_06->field_9640;
                        lVar11 = this_01->end();
                        if (lVar11 == 0) {
                            bVar19 = true;
                            bVar4 = true;
                        } else {
                            bVar19 = true;
                            uVar12 = 0;
                            uVar20 = 1;
                            do {
                                piVar13 = (int*)(*this_01)[uVar12];
                                if (*piVar13 == -1) {
                                    lVar11 = (*this_01)[uVar12];
                                    if (*(int*)(lVar11 + 4) != -1) {
                                        pCVar3 = this_06->field_16;
                                        lVar11 = (*this_01)[uVar12];
                                        psVar7 = (shared_ptr*)pCVar3->GetConfig<ObjType>(*(int*)(lVar11 + 4), nullptr);
                                        cVar6 = shared_ptr::operator_cast_to_bool(psVar7);
                                        if (cVar6) {
                                            this_03 = (ObjType*)(*psVar7).operator->();
                                            pBVar14 =
                                                (BuildRequest<graphics::Model, BuildModelMain>*)(*this_00)[uVar12];
                                            PVar2 = this_06->m_gender;
                                            objTypeCustomisation =
                                                (shared_ptr<ObjTypeCustomisation>*)this_06->field_56[uVar12];
                                            uVar1 = this_06->field_136;
                                            local_48.shared_from_this();
                                            puVar15 = (uint8_t*)this_03->GetHeadModel(
                                                assetBuilder, buildRequest, *pBVar14, PVar2 == 1, *objTypeCustomisation,
                                                uVar1, local_48);
                                            bVar4 = false;
                                            bVar18 = false;
                                            if (puVar15 != DataStatus::NOTLOADED) {
                                                bVar18 = bVar19;
                                            }
                                            puVar5 = DataStatus::MISSING;
                                            if (puVar15 != DataStatus::MISSING)
                                                goto LAB_100496743;
                                            goto LAB_100496745;
                                        }
                                        goto LAB_100496740;
                                    }
                                    ((BuildRequest<graphics::Model, BuildModelMain>*)(*this_00)[uVar12])->Clear();
                                } else {
                                    pCVar3 = this_06->field_16;
                                    piVar13 = (int*)(*this_01)[uVar12];
                                    psVar7 = (shared_ptr*)pCVar3->GetConfig<IDKType>(*piVar13, nullptr);
                                    cVar6 = shared_ptr::operator_cast_to_bool(psVar7);
                                    if (!cVar6) {
                                    LAB_100496740:
                                        bVar18 = false;
                                    LAB_100496743:
                                        bVar19 = bVar18;
                                        bVar4 = true;
                                        puVar5 = local_58;
                                    } else {
                                        this_02 = (IDKType*)(*psVar7).operator->();
                                        pBVar14 = (BuildRequest<graphics::Model, BuildModelMain>*)(*this_00)[uVar12];
                                        uVar1 = this_06->field_136;
                                        local_48.shared_from_this();
                                        puVar15 = (uint8_t*)this_02->GetHeadModel(assetBuilder, buildRequest, *pBVar14,
                                                                                  uVar1, local_48);
                                        bVar4 = false;
                                        bVar18 = false;
                                        if (puVar15 != DataStatus::NOTLOADED) {
                                            bVar18 = bVar19;
                                        }
                                        puVar5 = DataStatus::MISSING;
                                        if (puVar15 != DataStatus::MISSING)
                                            goto LAB_100496743;
                                    }
                                LAB_100496745:
                                    local_58 = puVar5;
                                    if (!bVar4) {
                                        bVar4 = false;
                                        goto LAB_10049699c;
                                    }
                                }
                                uVar12 = this_01->end();
                                bVar4 = uVar20 < uVar12;
                                uVar12 = uVar20;
                                uVar20 = (unsigned long)((int)uVar20 + 1);
                            } while (bVar4);
                            bVar4 = true;
                        LAB_10049699c:
                            this_01 = local_58;
                        }
                        if (!bVar4)
                            goto LAB_1004966ba;
                        if (bVar19) {
                            MakeSharedPool<graphics::Model, 3072>::MakeShared<>();
                            pMVar9 = (Model*)local_48.operator->();
                            pMVar9->StartTransform();
                            this_05 = (BuildRequest<graphics::Animation, BuildAnimationMain>*)this_00->HeapBeginPtr();
                            pBVar16 = (BuildRequest<graphics::Animation, BuildAnimationMain>*)this_00->end();
                            if (this_05 != pBVar16) {
                                do {
                                    cVar6 = this_05->IsEmpty();
                                    if (!cVar6) {
                                        psVar8 = (shared_ptr<graphics::Model>*)this_05->SSOBeginPtr();
                                        pMVar9 = (Model*)(*psVar8).operator->();
                                        cVar6 = pMVar9->TransformStarted();
                                        if (cVar6) {
                                            LogAssert("!wearModel.GetAsset()->TransformStarted()",
                                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                      "OSRS-OS1669-BOXR/libs/game/runetek5/player/PlayerModel.cpp",
                                                      449, nullptr);
                                        }
                                        psVar8 = (shared_ptr<graphics::Model>*)this_05->SSOBeginPtr();
                                        pMVar9 = (Model*)(*psVar8).operator->();
                                        cVar6 = pMVar9->GetConstructedState();
                                        if (cVar6 != '\x02') {
                                            LogAssert("wearModel.GetAsset()->GetConstructedState() == "
                                                      "graphics::ModelConstructedState::DATA_AND_MAT",
                                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                      "OSRS-OS1669-BOXR/libs/game/runetek5/player/PlayerModel.cpp",
                                                      450, nullptr);
                                        }
                                        pMVar9 = (Model*)local_48.operator->();
                                        psVar8 = (shared_ptr<graphics::Model>*)this_05->SSOBeginPtr();
                                        model = (Model*)**psVar8;
                                        pMVar9->Append(*model);
                                    }
                                    this_05 = this_05 + 32;
                                } while (this_05 != pBVar16);
                            }
                            pMVar9 = (Model*)local_48.operator->();
                            pMVar9->WeldTouchingBatches();
                            pMVar9 = (Model*)local_48.operator->();
                            pMVar9->EndTransform(false);
                            pMVar9 = (Model*)local_48.operator->();
                            textureManager = assetBuilder.GetTextureManager();
                            pMVar9->CombineBatches(*textureManager);
                            pMVar9 = (Model*)local_48.operator->();
                            pMVar9->SortSections();
                            pMVar9 = (Model*)local_48.operator->();
                            pMVar9->CalculateLabelCentres();
                            pMVar9 = (Model*)local_48.operator->();
                            pMVar9->BakeMaterialInfoAndTextureMetaAndHSLColors(assetBuilder, false);
                            pMVar9 = (Model*)local_48.operator->();
                            pMVar9->ConstructFinishAndUpload();
                            uint8_t->SetConstructedObj(local_48);
                            this_06->field_776.CacheModelSet(*this_06, *uint8_t);
                            this_06->m_playerAppearanceChangedTime = FrameTime::GetCurrentTimeMS();
                            playerModelWearSlots = *uint8_t;
                            cVar6 = uint8_t->IsTaskDone();
                            if (!cVar6) {
                                ppuVar10 = &DataStatus::NOTLOADED;
                            } else {
                                psVar8 = (shared_ptr<graphics::Model>*)uint8_t->SSOBeginPtr();
                                pMVar9 = (Model*)(*psVar8).operator->();
                                cVar6 = pMVar9->IsLoaded();
                                ppuVar10 = &DataStatus::READY;
                                if (!cVar6) {
                                    LogAssert("m_headModel.GetAsset()->IsLoaded()",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "game/runetek5/player/PlayerModel.cpp",
                                              473, nullptr);
                                }
                            }
                            this_01 = *ppuVar10;
                            goto LAB_1004966ba;
                        }
                    }
                }
                goto LAB_1004966b0;
            }
            psVar8 = (shared_ptr<graphics::Model>*)uint8_t->SSOBeginPtr();
            pMVar9 = (Model*)(*psVar8).operator->();
            cVar6 = pMVar9->IsLoaded();
            if (!cVar6) {
                LogAssert("m_headModel.GetAsset()->IsLoaded()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/player/"
                          "PlayerModel.cpp",
                          342, nullptr);
            }
            playerModelWearSlots = *uint8_t;
        LAB_10049661a:
            ppuVar10 = &DataStatus::READY;
        } else {
            psVar7 = (shared_ptr*)this_06->field_16->GetConfig<NPCType>(this_06->field_132, nullptr);
            cVar6 = shared_ptr::operator_cast_to_bool(psVar7);
            if (cVar6) {
                rt7Core_00 = (RT7Core*)(*psVar7).operator->();
                this_01 = (uint8_t*)NPCType::GetHeadModels(rt7Core_00, assetBuilder, buildRequest, playerModelWearSlots,
                                                           nullptr, this_06->field_24);
                goto LAB_1004966ba;
            }
        LAB_1004966b0:
            ppuVar10 = &DataStatus::NOTLOADED;
        }
        this_01 = *ppuVar10;
    LAB_1004966ba:
        return this_01;
    }

    // 0x100496c30
    uint32_t PlayerModel::LoadFromHeadCache() {
        Layout* this_01;
        BuildRequest<graphics::Model, BuildModelMain>* buildRequest;

        auto this_00 = field_776.GetModelSet(*this);
        uint32_t uVar1 = shared_ptr::operator_cast_to_bool(this_00);
        if ((char)uVar1 != '\0') {
            this_01 = (Layout*)(*this_00).operator->();
            buildRequest = (BuildRequest<graphics::Model, BuildModelMain>*)this_01->SSOBeginPtr();
            *field_9664 = *buildRequest;
        }
        return uVar1;
    }

    // 0x100496c90
    Array<Array<unsigned short>>* PlayerModel::GetPlayerRecolSource() const {
        auto this_00 = field_16->GetGraphicsDefaults();
        return (Array<Array<unsigned short>>*)this_00->GetCursorMutex();
    }

    // 0x100496cb0
    Array<Array<Array<unsigned short>>>* PlayerModel::GetPlayerRecolDest() const {
        auto this_00 = field_16->GetGraphicsDefaults();
        return (Array<Array<Array<unsigned short>>>*)this_00->GetBodyModelCache();
    }

    // 0x100496ce0
    Array<Array<unsigned short>>* PlayerModel::GetPlayerRematSource() const {
        auto this_00 = field_16->GetGraphicsDefaults();
        return (Array<Array<unsigned short>>*)this_00->GetImmediateThreadPool();
    }

    // 0x100496d00
    Array<Array<Array<unsigned short>>>* PlayerModel::GetPlayerRematDest() const {
        auto this_00 = field_16->GetGraphicsDefaults();
        return (Array<Array<Array<unsigned short>>>*)this_00->GetJointIDMap();
    }

    // 0x100496d20
    void PlayerModel::DoReplaceHeld(const SeqType& seqType) {
        int iVar1 = seqType.GetReplaceHeldLeft();
        if (iVar1 == -1) {
            UnreplaceHeld(true);
        } else {
            iVar1 = seqType.GetReplaceHeldLeft();
            ReplaceHeld(iVar1, true);
        }
        iVar1 = seqType.GetReplaceHeldRight();
        if (iVar1 == -1) {
            UnreplaceHeld(false);
        } else {
            iVar1 = seqType.GetReplaceHeldRight();
            ReplaceHeld(iVar1, false);
        }
    }

    // 0x100496db0
    uint64_t PlayerModel::ReplaceHeld(int arg1, bool arg2) {
        int arg4;
        GeometryBatch* this_00;
        Array<unsigned int>* arg5;
        PlayerModelWearSlot* playerModelWearSlot;
        PlayerModelReplaceHeldStatus* playerModelReplaceHeldStatus;

        if (-1 < arg1) {
            this_00 = (GeometryBatch*)field_16->GetWearposDefaults();
            if (arg2) {
                arg4 = this_00->GetSpriteID();
            } else {
                arg4 = this_00->GetTint();
            }
            if (arg4 != -1) {
                playerModelReplaceHeldStatus = (PlayerModelReplaceHeldStatus*)field_152;
                if (arg2) {
                    arg5 = (Array<unsigned int>*)this_00->GetDevCredentialsOutputDirectory();
                } else {
                    arg5 = (Array<unsigned int>*)this_00->GetBoneIDMap();
                    playerModelReplaceHeldStatus = (PlayerModelReplaceHeldStatus*)field_208;
                }
                playerModelWearSlot = (PlayerModelWearSlot*)field_32[(long)arg4];
                return ReplaceHeldInner(*playerModelReplaceHeldStatus, *playerModelWearSlot, arg1, arg4, *arg5);
            }
        }
        return 0;
    }

    // 0x100496e60
    uint32_t PlayerModel::UnreplaceHeld(bool arg1) {
        int arg2;
        uint32_t uVar1;
        MSIType* this_00;
        uint64_t in_register_00000031;

        PlayerModelReplaceHeldStatus* playerModelReplaceHeldStatus = (PlayerModelReplaceHeldStatus*)field_208;
        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) != 0) {
            playerModelReplaceHeldStatus = (PlayerModelReplaceHeldStatus*)field_152;
        }
        if (playerModelReplaceHeldStatus->field_0 == '\0') {
            uVar1 = 0;
        } else {
            this_00 = (MSIType*)field_16->GetWearposDefaults();
            if (arg1) {
                arg2 = this_00->GetSpriteID();
            } else {
                arg2 = this_00->GetTint();
            }
            uVar1 = UnreplaceHeldInner(*playerModelReplaceHeldStatus, arg2);
            if ((char)uVar1 != '\0') {
                ClearAppearance();
            }
        }
        return uVar1;
    }

    // 0x100496ef0
    unsigned long PlayerModel::GetIDKSlot(unsigned int arg1, bool arg2) {
        unsigned int* puVar1;
        uint64_t in_register_00000031;
        uint8_t** this;

        this = &BASE_PART_MALE;
        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg2) != 0) {
            this = (uint8_t**)&BASE_PART_FEMALE;
        }
        unsigned long arg1_00 = 0;
        do {
            puVar1 = (unsigned int*)(*this)[arg1_00];
            if (*puVar1 == arg1)
                goto LAB_100496f3f;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 8);
        arg1_00 = 4294967295;
    LAB_100496f3f:
        return arg1_00 & 4294967295;
    }

    // 0x100497030
    unsigned long PlayerModel::ReplaceHeldInner(PlayerModelReplaceHeldStatus& playerModelReplaceHeldStatus,
                                                PlayerModelWearSlot& playerModelWearSlot, int arg3, int arg4,
                                                const Array<unsigned int>& arg5) {
        long lVar4;
        shared_ptr<ObjTypeCustomisation>* psVar5;
        unsigned int* puVar6;
        unsigned int* puVar7;
        uint32_t* puVar8;
        shared_ptr* this_00;
        unsigned long arg1;
        unsigned long uVar10;
        unsigned int local_38;

        if (playerModelReplaceHeldStatus.field_0 == '\0') {
            playerModelReplaceHeldStatus.field_0 = 1;
            lVar4 = field_32[(long)arg4];
            playerModelReplaceHeldStatus.field_4 = *(uint32_t*)(lVar4 + 4);
            psVar5 = &field_56[(long)arg4];
            playerModelReplaceHeldStatus.field_8 = *psVar5;
            puVar6 = (unsigned int*)arg5.data();
            puVar7 = (unsigned int*)arg5.end();
            if (puVar6 != puVar7) {
                do {
                    local_38 = *puVar6;
                    puVar8 = &playerModelReplaceHeldStatus.field_24[local_38];
                    lVar4 = field_32[(unsigned long)local_38];
                    *puVar8 = *(uint32_t*)(lVar4 + 4);
                    psVar5 = &field_56[(unsigned long)local_38];
                    (*((puVar8 + 2))) = *psVar5;
                    puVar6 = puVar6 + 1;
                } while (puVar6 != puVar7);
            }
        }
        int iVar1 = *(int*)((long)&playerModelWearSlot.field_0 + 4);
        if (arg3 == 65535) {
            if (iVar1 == -1) {
            LAB_1004971a0:
                uVar10 = 0;
                goto LAB_1004971a3;
            }
            *(uint32_t*)((long)&playerModelWearSlot.field_0 + 4) = 4294967295;
        } else {
            if ((iVar1 != -1) && (iVar1 == arg3)) {
                this_00 = &field_56[(long)arg4];
                if (shared_ptr::operator_cast_to_bool(this_00) == '\0')
                    goto LAB_1004971a0;
            }
            *(int*)((long)&playerModelWearSlot.field_0 + 4) = arg3;
        }
        BuildRequest<graphics::Model, BuildModelMain>* pBVar9 = &field_9584[(long)arg4];
        pBVar9->Clear();
        pBVar9 = &field_9640[(long)arg4];
        pBVar9->Clear();
        uVar10 = (((uint64_t)((int64_t)(int32_t)((unsigned int)arg4 >> 8)) << 8) | (uint8_t)1);
    LAB_1004971a3:
        psVar5 = &field_56[(long)arg4];
        psVar5->reset();
        puVar6 = (unsigned int*)arg5.data();
        puVar7 = (unsigned int*)arg5.end();
        if (puVar6 != puVar7) {
            do {
                arg1 = (unsigned long)*puVar6;
                lVar4 = field_32[arg1];
                if (*(int*)(lVar4 + 4) != -1) {
                    lVar4 = field_32[arg1];
                    *(uint32_t*)(lVar4 + 4) = 4294967295;
                    pBVar9 = &field_9584[arg1];
                    pBVar9->Clear();
                    pBVar9 = &field_9640[arg1];
                    pBVar9->Clear();
                    uVar10 = (((uint64_t)((int64_t)(uVar10 >> 8)) << 8) | (uint8_t)1);
                }
                puVar6 = puVar6 + 1;
            } while (puVar6 != puVar7);
        }
        if ((uVar10 & 1) != 0) {
            ClearAppearance();
        }
        return uVar10 & 4294967041;
    }

    // 0x1004973f0
    unsigned long PlayerModel::UnreplaceHeldInner(PlayerModelReplaceHeldStatus& playerModelReplaceHeldStatus,
                                                  int arg2) {
        unsigned int uVar1;
        shared_ptr<ObjTypeCustomisation>* psVar4;
        unsigned int* puVar6;
        unsigned int* puVar7;

        unsigned long uVar8 = (unsigned long)arg2;
        long lVar3 = field_32[uVar8];
        if (*(int*)(lVar3 + 4) == playerModelReplaceHeldStatus.field_4) {
            if (!((&playerModelReplaceHeldStatus.field_8)->operator_cast_to_bool())) {
                uVar8 = 0;
                goto LAB_10049749d;
            }
        }
        *(uint32_t*)(lVar3 + 4) = playerModelReplaceHeldStatus.field_4;
        if ((&playerModelReplaceHeldStatus.field_8)->operator_cast_to_bool()) {
            psVar4 = &field_56[uVar8];
            *psVar4 = playerModelReplaceHeldStatus.field_8;
        }
        BuildRequest<graphics::Model, BuildModelMain>* pBVar5 = &field_9584[uVar8];
        pBVar5->Clear();
        pBVar5 = &field_9640[uVar8];
        pBVar5->Clear();
        uVar8 = (((uint64_t)((int64_t)(int32_t)((unsigned int)arg2 >> 8)) << 8) | (uint8_t)1);
    LAB_10049749d:
        uint8_t* this_00 = &playerModelReplaceHeldStatus.field_24;
        if (!(this_00->empty())) {
            puVar6 = (unsigned int*)this_00->HeapBeginPtr();
            puVar7 = (unsigned int*)this_00->end();
            uVar8 = (((uint64_t)((int64_t)(uVar8 >> 8)) << 8) | (uint8_t)1);
            if (puVar6 != puVar7) {
                do {
                    uVar1 = puVar6[2];
                    lVar3 = field_32[(unsigned long)*puVar6];
                    *(unsigned int*)(lVar3 + 4) = uVar1;
                    psVar4 = &field_56[(unsigned long)*puVar6];
                    *psVar4 = (*((puVar6 + 4)));
                    pBVar5 = &field_9584[(unsigned long)*puVar6];
                    pBVar5->Clear();
                    pBVar5 = &field_9640[(unsigned long)*puVar6];
                    pBVar5->Clear();
                    puVar6 = puVar6 + 8;
                } while (puVar6 != puVar7);
                uVar8 = (((uint64_t)((int64_t)((unsigned long)puVar7 >> 8)) << 8) | (uint8_t)1);
            }
        }
        playerModelReplaceHeldStatus.Reset();
        return uVar8 & 4294967295;
    }

} // namespace jag::game
