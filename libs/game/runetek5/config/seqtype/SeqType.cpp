// libs/game/runetek5/config/seqtype/SeqType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "SeqType.h"

namespace jag::game {
    // 0x1039bbbd8, set at startup by ___cxx_global_var_init.12
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> SeqType::NullSeqType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x1004dd9e0
    SeqType::~SeqType() {
        uint8_t* this_00 = &field_1784;
        auto this_01 = this_00->HeapBeginPtr();
        auto pfVar1 = this_00->end();
        for (; this_01 != pfVar1; this_01 = this_01 + 8) {
            this_01->wait();
        }
        field_1816.~Array();
        this_00->~vector();
        field_1768->~shared_ptr();
        field_1696.~Array();
        field_1672.~Array();
        field_1648.~Array();
        m_seqGroup->~shared_ptr();
        field_56.~AssetLRUHashCache();
    }

    // 0x1004ddbc0
    uint8_t* SeqType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        Array<VarValue>* pAVar1;
        uint8_t bVar3;
        uint8_t uVar4;
        unsigned short uVar5;
        unsigned short uVar6;
        uint16_t uVar7;
        uint32_t uVar8;
        int iVar9;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar10;
        unsigned long uVar11;
        long lVar12;
        uint8_t* puVar13;
        unsigned long uVar14;
        Array<Array<unsigned int>>* this_00;
        Array<unsigned int>* pAVar15;
        uint32_t* puVar16;
        unsigned int* puVar17;
        uint16_t* puVar18;
        BaseTemplateConfigTypeList<SeqGroupType>* this_02;
        shared_ptr<SeqGroupType>* seqGroupType;
        unsigned int uVar19;

        switch (arg2) {
        case 1:
            uVar6 = arg1.g2();
            uVar11 = (unsigned long)uVar6;
            field_1696.set_max_size(uVar11, 0);
            if (uVar6 != 0) {
                uVar14 = 0;
                do {
                    uVar6 = arg1.g2();
                    puVar17 = &field_1696[uVar14];
                    *puVar17 = (unsigned int)uVar6;
                    uVar14 = uVar14 + 1;
                } while (uVar11 != uVar14);
            }
            puVar13 = &field_1648;
            puVar13->set_max_size(uVar11, 0);
            if (uVar11 != 0) {
                uVar14 = 0;
                do {
                    uVar6 = arg1.g2();
                    puVar17 = (unsigned int*)(*puVar13)[uVar14];
                    *puVar17 = (unsigned int)uVar6;
                    uVar14 = uVar14 + 1;
                } while (uVar11 != uVar14);
                uVar14 = 0;
                do {
                    iVar9 = arg1.g2();
                    puVar17 = (unsigned int*)(*puVar13)[uVar14];
                    uVar19 = *puVar17;
                    puVar17 = (unsigned int*)(*puVar13)[uVar14];
                    *puVar17 = iVar9 << 16 | uVar19;
                    uVar14 = uVar14 + 1;
                } while (uVar11 != uVar14);
            }
            break;
        case 2:
            uVar6 = arg1.g2();
            m_loops = (unsigned int)uVar6;
            break;
        case 3:
            uVar6 = arg1.gSmart1or2();
            if (uVar6 != 0) {
                uVar19 = (unsigned int)uVar6;
                do {
                    arg1.gSmart1or2();
                    uVar19 = uVar19 - 1;
                } while (uVar19 != 0);
            }
            break;
        default:
            if ((arg2 == 119) || (arg2 == 19)) {
                pvVar10 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)GetSeqSounds();
                pAVar1 = (Array<VarValue>*)(pvVar10 + 24);
                if (pAVar1->empty()) {
                    uVar11 = pvVar10->end();
                    pAVar1->set_max_size(uVar11, 0);
                    lVar12 = pAVar1->end();
                    if (lVar12 != 0) {
                        uVar19 = 1;
                        uVar11 = 0;
                        do {
                            puVar13 = (uint8_t*)(*pAVar1)[uVar11];
                            *puVar13 = 255;
                            uVar11 = (unsigned long)uVar19;
                            uVar14 = pAVar1->end();
                            uVar19 = uVar19 + 1;
                        } while (uVar11 < uVar14);
                    }
                }
                if (arg2 == 19) {
                    bVar3 = arg1.g1();
                    uVar11 = (unsigned long)bVar3;
                } else {
                    uVar6 = arg1.g2();
                    uVar11 = (unsigned long)uVar6;
                }
                uVar4 = arg1.g1();
                puVar13 = (uint8_t*)(*pAVar1)[uVar11];
                *puVar13 = uVar4;
                return DataStatus::READY;
            }
            switch (arg2) {
            case 21:
            switchD_1004de01d_caseD_15:
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "seqtype/SeqType.cpp",
                          211, "Unrecognised .seq config code: %u", arg2);
                break;
            case 22:
                bVar3 = arg1.g1();
                lVar12 = GetSeqSounds();
                *(unsigned int*)(lVar12 + 96) = (unsigned int)bVar3;
                break;
            case 23:
                arg1.g2();
                break;
            case 24:
                uVar6 = arg1.g2();
                this_02 = (BaseTemplateConfigTypeList<SeqGroupType>*)field_24->GetDomain();
                seqGroupType = (shared_ptr<SeqGroupType>*)this_02->List((unsigned int)uVar6, nullptr);
                *m_seqGroup = *seqGroupType;
                break;
            case 25:
                uVar6 = arg1.g2();
                field_1720 = (unsigned int)uVar6;
                break;
            case 26:
                uVar6 = arg1.g2();
                field_1744 = (unsigned int)uVar6;
                uVar6 = arg1.g2();
                field_1748 = (unsigned int)uVar6;
                break;
            default:
                if (arg2 == 249) {
                    DecodeParams(arg1);
                    return DataStatus::READY;
                }
                if (arg2 != 120)
                    goto switchD_1004de01d_caseD_15;
            case 20:
                pvVar10 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)GetSeqSounds();
                pAVar1 = (Array<VarValue>*)(pvVar10 + 48);
                if (pAVar1->empty()) {
                    uVar11 = pvVar10->end();
                    pAVar1->set_max_size(uVar11, 0);
                    uVar11 = pvVar10->end();
                    ((pvVar10 + 72))->set_max_size(uVar11, 0);
                    lVar12 = pvVar10->end();
                    if (lVar12 != 0) {
                        uVar19 = 1;
                        uVar11 = 0;
                        do {
                            puVar18 = (uint16_t*)(*((pvVar10 + 72)))[uVar11];
                            *puVar18 = 256;
                            puVar18 = (uint16_t*)(*pAVar1)[uVar11];
                            *puVar18 = 256;
                            uVar11 = (unsigned long)uVar19;
                            uVar14 = pvVar10->end();
                            uVar19 = uVar19 + 1;
                        } while (uVar11 < uVar14);
                    }
                }
                if (arg2 == 20) {
                    bVar3 = arg1.g1();
                    uVar11 = (unsigned long)bVar3;
                } else {
                    uVar6 = arg1.g2();
                    uVar11 = (unsigned long)uVar6;
                }
                uVar7 = arg1.g2();
                puVar18 = (uint16_t*)(*pAVar1)[uVar11];
                *puVar18 = uVar7;
                uVar7 = arg1.g2();
                puVar18 = (uint16_t*)(*((pvVar10 + 72)))[uVar11];
                *puVar18 = uVar7;
            }
            break;
        case 5:
            bVar3 = arg1.g1();
            m_priority = (unsigned int)bVar3;
            break;
        case 6:
            uVar6 = arg1.g2();
            m_replaceHeldLeft = (unsigned int)uVar6;
            break;
        case 7:
            uVar6 = arg1.g2();
            m_replaceHeldRight = (unsigned int)uVar6;
            break;
        case 8:
            bVar3 = arg1.g1();
            m_maxLoops = (unsigned int)bVar3;
            break;
        case 9:
            bVar3 = arg1.g1();
            m_preanimMove = (unsigned int)bVar3;
            break;
        case 10:
            bVar3 = arg1.g1();
            m_postanimMove = (unsigned int)bVar3;
            break;
        case 11:
            bVar3 = arg1.g1();
            m_duplicateBehaviour = (unsigned int)bVar3;
            break;
        case 12:
            bVar3 = arg1.g1();
            uVar19 = (unsigned int)bVar3;
            goto LAB_1004ddf72;
        case 13:
            this_00 = (Array<Array<unsigned int>>*)GetSeqSounds();
            uVar6 = arg1.g2();
            this_00->set_max_size((unsigned long)uVar6, 0);
            if (uVar6 != 0) {
                uVar11 = 0;
                do {
                    bVar3 = arg1.g1();
                    if (bVar3 != 0) {
                        pAVar15 = (Array<unsigned int>*)(*this_00)[uVar11];
                        pAVar15->set_max_size((unsigned long)bVar3, 0);
                        uVar8 = arg1.g3();
                        pAVar15 = (Array<unsigned int>*)(*this_00)[uVar11];
                        puVar16 = (uint32_t*)(*pAVar15)[0];
                        *puVar16 = uVar8;
                        if (bVar3 != 1) {
                            uVar14 = 1;
                            do {
                                uVar5 = arg1.g2();
                                pAVar15 = (Array<unsigned int>*)(*this_00)[uVar11];
                                puVar17 = (unsigned int*)(*pAVar15)[uVar14];
                                *puVar17 = (unsigned int)uVar5;
                                uVar14 = uVar14 + 1;
                            } while (bVar3 != uVar14);
                        }
                    }
                    uVar11 = uVar11 + 1;
                } while (uVar11 != uVar6);
            }
            break;
        case 14:
        case 15:
        case 16:
        case 18:
            break;
        case 112:
            uVar6 = arg1.g2();
            uVar19 = (unsigned int)uVar6;
        LAB_1004ddf72:
            puVar13 = &field_1672;
            uVar11 = (unsigned long)uVar19;
            puVar13->set_max_size(uVar11, 0);
            if (uVar19 != 0) {
                uVar14 = 0;
                do {
                    uVar6 = arg1.g2();
                    puVar17 = (unsigned int*)(*puVar13)[uVar14];
                    *puVar17 = (unsigned int)uVar6;
                    uVar14 = uVar14 + 1;
                } while (uVar11 != uVar14);
                if (uVar11 != 0) {
                    uVar14 = 0;
                    do {
                        iVar9 = arg1.g2();
                        puVar17 = (unsigned int*)(*puVar13)[uVar14];
                        uVar19 = *puVar17;
                        puVar17 = (unsigned int*)(*puVar13)[uVar14];
                        *puVar17 = iVar9 << 16 | uVar19;
                        uVar14 = uVar14 + 1;
                    } while (uVar11 != uVar14);
                }
            }
        }
        return DataStatus::READY;
    }

    // 0x1004de8b0
    void SeqType::PostDecode() {
        bool cVar1;
        NPCTypeList* pNVar2;
        int* piVar4;
        unsigned long uVar5;
        unsigned int uVar6;
        unsigned long arg1;

        if (m_preanimMove == 4) {
            cVar1 = m_seqGroup->operator_cast_to_bool();
            if (!cVar1) {
            LAB_1004de8f3:
                uVar6 = 0;
            } else {
                pNVar2 = (NPCTypeList*)(*m_seqGroup).operator->();
                cVar1 = pNVar2->IsMembersServer();
                uVar6 = 2;
                if (!cVar1)
                    goto LAB_1004de8f3;
            }
            m_preanimMove = uVar6;
        }
        if (m_postanimMove != 3)
            goto LAB_1004de93b;
        cVar1 = m_seqGroup->operator_cast_to_bool();
        if (!cVar1) {
        LAB_1004de932:
            uVar6 = 0;
        } else {
            pNVar2 = (NPCTypeList*)(*m_seqGroup).operator->();
            cVar1 = pNVar2->IsMembersServer();
            uVar6 = 2;
            if (!cVar1)
                goto LAB_1004de932;
        }
        m_postanimMove = uVar6;
    LAB_1004de93b:
        uint8_t* this_00 = &field_1696;
        if (this_00->end() != 0) {
            uVar6 = 1;
            arg1 = 0;
            do {
                piVar4 = (int*)(*this_00)[arg1];
                field_1748 = field_1748 + *piVar4;
                arg1 = (unsigned long)uVar6;
                uVar5 = this_00->end();
                uVar6 = uVar6 + 1;
            } while (arg1 < uVar5);
        }
    }

    // 0x1004de9a0
    SeqTypeList* SeqType::GetAnimation(AssetBuilder& assetBuilder,
                                       BuildRequest<graphics::Animation, BuildAnimationMain>& buildRequest,
                                       unsigned int arg3, const shared_ptr<graphics::Model>& model) {
        uint8_t* this_00;
        uint64_t uVar2;
        SeqType* pSVar3;
        bool bVar5;
        future_status fVar6;
        uint8_t** ppuVar7;
        future<void>* this_02;
        unsigned long uVar8;
        long lVar9;
        unsigned int* puVar10;
        shared_ptr<graphics::AnimationFrameRT5>* this_03;
        AnimKeyFrameSet* this_04;
        Layout* pLVar11;
        ReturnValue* pRVar12;
        char* str;
        type* arg2;
        type* extraout_RDX;
        ReturnValue RVar13;
        SeqTypeList* this_05;
        unsigned long uVar14;
        AutoSingleton<ThreadPoolSingleton>* pAVar15;
        AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>* this_06;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_07;
        BuildRequest<graphics::Animation, BuildAnimationMain>* this_08;
        float fVar16;
        uint8_t auVar17[16];
        ReturnValue local_e0;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* local_c0;
        int local_b8[6];
        ReturnValue local_a0;
        shared_ptr<oldscape::dash3d::Decor> local_90;
        SeqType* local_80;
        uint32_t local_78;
        uint32_t local_70[4];
        shared_ptr local_60;
        SeqTypeList* local_50;
        AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>* local_48;
        BuildRequest<graphics::Animation, BuildAnimationMain>* local_40;

        uint8_t* puVar1 = &field_56;
        SeqType* local_38 = this;
        puVar1->UpdateLoadingAssetList(5);
        RVar13._4_4_ = 0;
        RVar13._0_4_ = arg3;
        char cVar4 = puVar1->IsLoadingAsset((unsigned long long)RVar13);
        if (cVar4) {
            ppuVar7 = &DataStatus::NOTLOADED;
            goto LAB_1004defa2;
        }
        ReturnValue local_c8 = RVar13;
        local_a0[0] = RVar13;
        auto this_01 = puVar1->Find(local_a0);
        cVar4 = shared_ptr::operator_cast_to_bool(this_01);
        if (cVar4) {
            buildRequest.SetConstructedObj(*this_01);
        }
        cVar4 = buildRequest.IsEmpty();
        if (cVar4) {
            local_60 = shared_ptr();
            pSVar3 = local_38;
            this_00 = &local_38->field_1784;
            cVar4 = this_00->empty();
            local_c0 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)this_00;
            local_48 = (AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>*)puVar1;
            if (!cVar4) {
                local_40 = buildRequest;
                this_02 = (future<void>*)this_00->HeapBeginPtr();
                auVar17 = this_00->end();
                arg2 = auVar17._8_8_;
                if (this_02 == auVar17._0_8_) {
                LAB_1004deb27:
                    local_c0->clear();
                    pSVar3 = local_38;
                    cVar4 = IsKeyFramed(local_38);
                    this_05 = local_50;
                    if (!cVar4) {
                        local_a0 = shared_ptr((
                            shared_ptr<oldscape::dash3d::GroundDecor>*)&graphics::AnimKeyFrameSet::NullAnimKeyFrameset);
                    } else {
                        local_a0 = pSVar3->field_24->GetKeyFrameset(pSVar3->field_1720);
                    }
                    this_08 = local_40;
                    this_06 = local_48;
                    local_60 = local_a0;
                LAB_1004deebc:
                    MakeSharedPool<graphics::Animation, 512>::MakeShared<>();
                    local_70[0] = 512;
                    bucket_make_shared<BuildAnimationMain, int, shared_ptr<graphics::Animation>&,
                                       Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>,
                                       Array<unsigned int>&, shared_ptr<graphics::Model> const&,
                                       shared_ptr<graphics::AnimKeyFrameSet>&>(
                        local_b8, (shared_ptr<graphics::Animation>*)local_70, &local_a0,
                        (Array<unsigned int>*)&local_38->field_1816,
                        (shared_ptr<graphics::Model>*)&local_38->field_1696,
                        (shared_ptr<graphics::AnimKeyFrameSet>*)model);
                    new (local_70) shared_ptr(local_b8);
                    assetBuilder.SubmitJob(*local_70);
                    this_06->AddLoadingAsset((unsigned long long)local_c8, *local_b8);
                    this_08->SetObjAndTask(local_a0, *local_b8);
                    cVar4 = this_08->IsTaskDone();
                    if (!cVar4) {
                        this_05 = (SeqTypeList*)DataStatus::NOTLOADED;
                    }
                } else {
                    bVar5 = false;
                    do {
                        local_b8[0] = 0;
                        local_a0.duration<int>(*local_b8, arg2);
                        fVar6 = this_02->wait_for<long long, std::ratio<1l, 1l>>(local_a0);
                        this_02 = this_02 + 8;
                        if (fVar6 != 0) {
                            local_50 = (SeqTypeList*)DataStatus::NOTLOADED;
                            break;
                        }
                        bVar5 = this_02 == auVar17._0_8_;
                        arg2 = extraout_RDX;
                    } while (!bVar5);
                    if (bVar5)
                        goto LAB_1004deb27;
                    cVar4 = '\0';
                    this_05 = local_50;
                }
            } else {
                cVar4 = CheckFramesets(pSVar3);
                pSVar3 = local_38;
                if (!cVar4) {
                    this_05 = (SeqTypeList*)DataStatus::NOTLOADED;
                } else {
                    cVar4 = IsKeyFramed(local_38);
                    if (!cVar4) {
                        local_a0 = shared_ptr((
                            shared_ptr<oldscape::dash3d::GroundDecor>*)&graphics::AnimKeyFrameSet::NullAnimKeyFrameset);
                    } else {
                        local_a0 = pSVar3->field_24->GetKeyFrameset(pSVar3->field_1720);
                    }
                    local_40 = buildRequest;
                    local_60 = local_a0;
                    shared_ptr::operator_cast_to_bool(&local_60);
                    puVar1 = &local_38->field_1648;
                    cVar4 = puVar1->empty();
                    if ((!cVar4) || (cVar4 = shared_ptr::operator_cast_to_bool(&local_60), cVar4)) {
                        this_05 = (SeqTypeList*)&local_38->field_1816;
                        uVar8 = puVar1->end();
                        local_50 = this_05;
                        this_05->set_max_size(uVar8, 0);
                        lVar9 = puVar1->end();
                        if (lVar9 != 0) {
                            uVar8 = 0;
                            uVar14 = 1;
                            do {
                                this_05 = (SeqTypeList*)local_38->field_24;
                                puVar10 = (unsigned int*)(*puVar1)[uVar8];
                                local_a0 = this_05->GetFrame(*puVar10);
                                this_03 = (shared_ptr<graphics::AnimationFrameRT5>*)(*local_50)[uVar8];
                                *this_03 = local_a0;
                                uVar8 = puVar1->end();
                                bVar5 = uVar14 < uVar8;
                                uVar8 = uVar14;
                                uVar14 = (unsigned long)((int)uVar14 + 1);
                            } while (bVar5);
                        }
                        bVar5 = local_60 != nullptr;
                        if (bVar5) {
                            new (local_70) shared_ptr(&local_60);
                            this_04 = (AnimKeyFrameSet*)local_60.operator->();
                            this_07 = local_c0;
                            fVar16 = (float)this_04->GetEnd();
                            uVar14 = (unsigned long)(int)fVar16;
                            local_50->set_max_size(uVar14, 3);
                            pAVar15 = (AutoSingleton<ThreadPoolSingleton>*)&local_38->field_1696;
                            pAVar15->set_max_size(uVar14, 3);
                            pLVar11 = (Layout*)pAVar15->Instance();
                            uVar8 = pLVar11->SSOBeginPtr();
                            local_b8->InitialiseWorkGroups(uVar8, uVar14);
                            lVar9 = local_b8->size();
                            if (lVar9 != 0) {
                                uVar8 = 0;
                                do {
                                    pAVar15 = (AutoSingleton<ThreadPoolSingleton>*)local_b8;
                                    pRVar12 = (ReturnValue*)(*pAVar15)[uVar8];
                                    RVar13 = *pRVar12;
                                    lVar9 = (*pAVar15)[uVar8];
                                    uVar2 = *(uint64_t*)(lVar9 + 8);
                                    pLVar11 = (Layout*)pAVar15->Instance();
                                    str = (char*)pLVar11->SSOBeginPtr();
                                    local_a0[0] = RVar13;
                                    local_a0[1] = (ReturnValue)uVar2;
                                    local_90 = shared_ptr(local_70);
                                    local_80 = local_38;
                                    local_78 = 1;
                                    ThreadPool::AddTask<SeqType::GetAnimation(
                                        AssetBuilder&, BuildRequest<graphics::Animation, BuildAnimationMain>&,
                                        unsigned int, shared_ptr<graphics::Model> const&)::__0>(&local_e0, str,
                                                                                                &local_a0);
                                    this_07 = local_c0;
                                    local_c0->push_back(local_e0);
                                    GetAnimation(AssetBuilder&, BuildRequest<graphics::Animation, BuildAnimationMain>&,
                                                 unsigned int,
                                                 shared_ptr<graphics::Model> const&)::$_0::~__0(&local_a0);
                                    uVar8 = uVar8 + 1;
                                    uVar14 = local_b8->size();
                                } while (uVar8 < uVar14);
                            }
                            cVar4 = this_07->empty();
                            this_05 = (SeqTypeList*)DataStatus::NOTLOADED;
                            if (cVar4) {
                                LogAssert("!m_animationSampleTasks.empty()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                          "runetek5/config/seqtype/SeqType.cpp",
                                          376, nullptr);
                            }
                            goto LAB_1004dee90;
                        }
                        this_06 = local_48;
                        this_08 = local_40;
                        goto LAB_1004deebc;
                    }
                    local_40->SetConstructedObj(
                        *((shared_ptr<graphics::Animation>*)&graphics::AnimationManager::IDENTITY_ANIMATION));
                    this_05 = (SeqTypeList*)DataStatus::READY;
                }
            LAB_1004dee90:
                cVar4 = '\0';
            }
            if (!cVar4) {
                return this_05;
            }
        }
        ppuVar7 = &DataStatus::READY;
    LAB_1004defa2:
        return (SeqTypeList*)*ppuVar7;
    }

    // 0x1004df4b0
    unsigned long SeqType::CheckFramesets() {
        SeqTypeList* this_01;
        long lVar2;
        unsigned long uVar3;
        unsigned int uVar5;
        unsigned long arg1;
        bool bVar6;
        ReturnValue local_48;
        Array<unsigned int>* local_38;

        uint8_t* this_00 = &field_1648;
        bool cVar1 = this_00->empty();
        uint64_t uVar4 = (uint64_t)((unsigned long)this_00 >> 8);
        if (!cVar1) {
            lVar2 = this_00->end();
            if (lVar2 == 0) {
                bVar6 = true;
            } else {
                bVar6 = true;
                uVar5 = 1;
                arg1 = 0;
                local_38 = (Array<unsigned int>*)this_00;
                do {
                    this_01 = (SeqTypeList*)field_24;
                    lVar2 = (*local_38)[arg1];
                    local_48 = this_01->GetFrameset((unsigned int)*(unsigned short*)(lVar2 + 2));
                    lVar2 = local_48.end();
                    if (lVar2 == 0) {
                        bVar6 = false;
                    }
                    uVar4 = 0;
                    arg1 = (unsigned long)uVar5;
                    uVar3 = local_38->end();
                    uVar5 = uVar5 + 1;
                } while (arg1 < uVar3);
            }
        } else {
            local_48 = field_24->GetKeyFrameset(field_1720);
            lVar2 = local_48.end();
            bVar6 = lVar2 != 0;
        }
        return bVar6 & 4294967295;
    }

    // 0x1004dfed0
    void SeqType::CleanCache() {
        field_56.Clean(1000);
    }

    // 0x1004dff80
    int SeqType::GetRandomRateForSound(unsigned int arg1) const {
        unsigned short uVar1;
        unsigned short uVar2;
        long lVar4;
        unsigned long uVar5;
        unsigned short* puVar6;
        float fVar8;

        uint8_t* this_00 = field_1768;
        bool cVar3 = this_00->operator_cast_to_bool();
        int iVar7 = 256;
        if (cVar3) {
            lVar4 = (*this_00).operator->();
            cVar3 = ((lVar4 + 48))->empty();
            if (!cVar3) {
                lVar4 = (*this_00).operator->();
                cVar3 = ((lVar4 + 72))->empty();
                if (!cVar3) {
                    lVar4 = (*this_00).operator->();
                    uVar5 = ((lVar4 + 48))->end();
                    if (uVar5 <= (unsigned long)arg1) {
                        lVar4 = (*this_00).operator->();
                        uVar5 = ((lVar4 + 72))->end();
                        if (uVar5 <= (unsigned long)arg1) {
                            return 256;
                        }
                    }
                    lVar4 = (*this_00).operator->();
                    puVar6 = (unsigned short*)(*((lVar4 + 48)))[(unsigned long)arg1];
                    uVar1 = *puVar6;
                    lVar4 = (*this_00).operator->();
                    puVar6 = (unsigned short*)(*((lVar4 + 72)))[(unsigned long)arg1];
                    uVar2 = *puVar6;
                    fVar8 = (float)math::frand(1.0);
                    iVar7 =
                        (int)(long)((float)((unsigned int)uVar2 - (unsigned int)uVar1) * fVar8) + (unsigned int)uVar1;
                }
            }
        }
        return iVar7;
    }

    // 0x1004e00b0
    bool SeqType::IsBlockingMovement(int arg1) {
        int iVar1;

        if (arg1 < 1) {
            iVar1 = GetPostanimMove();
        } else {
            iVar1 = GetPreanimMove();
        }
        return iVar1 == 0;
    }

} // namespace jag::game
