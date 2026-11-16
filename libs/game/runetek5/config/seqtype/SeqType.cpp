// libs/game/runetek5/config/seqtype/SeqType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "SeqType.h"

namespace jag::game {
    // 0x1039bbbd8, 16 bytes, __common; set at startup by ___cxx_global_var_init.12
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> SeqType::NullSeqType;

    // 0x1004dd9e0, 320 bytes, base-object destructor, placed by class name and debug map
    // SeqType::~SeqType()
    void SeqType::~SeqType() {
        undefined1* this_00;
        long lVar1;
        long lVar2;

        field_0 = &PTR__SeqType_100f02488;
        this_00 = &field_1784;
        lVar1 = this_00->HeapBeginPtr();
        lVar2 = this_00->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 8) {
            std::future<void>::wait();
        }
        (&field_1816)->~Array();
        this_00->~vector();
        field_1768->~shared_ptr();
        (&field_1696)->~Array();
        (&field_1672)->~Array();
        (&field_1648)->~Array();
        m_seqGroup->~shared_ptr();
        (&field_56)->~AssetLRUHashCache();
        ~ConfigType();
    }

    // 0x1004ddb90, 16 bytes, complete-object destructor, placed by class name and debug map
    // SeqType::~SeqType(): jumps straight to the base-object destructor

    // 0x1004ddba0, 32 bytes, deleting destructor, placed by class name and debug map
    // SeqType::~SeqType()
    void SeqType::~SeqType() {
        ~SeqType(this);
        operator_delete(this);
    }

    // 0x1004ddbc0, 2176 bytes, placed by class name and debug map
    // SeqType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* SeqType::DecodeType(PacketT* param_1, uint param_2) {
        Array<VarValue, eastl::allocator>* pAVar1;
        char cVar2;
        byte bVar3;
        undefined1 uVar4;
        ushort uVar5;
        ushort uVar6;
        undefined2 uVar7;
        undefined4 uVar8;
        int iVar9;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar10;
        ulong uVar11;
        long lVar12;
        undefined1* puVar13;
        ulong uVar14;
        Array<Array<unsigned int, eastl::allocator>, eastl::allocator>* this_00;
        Array<unsigned int, eastl::allocator>* pAVar15;
        undefined4* puVar16;
        uint* puVar17;
        undefined2* puVar18;
        undefined8 uVar19;
        BaseTemplateConfigTypeList<SeqGroupType>* this_01;
        shared_ptr* psVar20;
        uint uVar21;

        switch (param_2) {
        case 1:
            uVar6 = param_1->g2();
            uVar11 = (ulong)uVar6;
            (&field_1696, uVar11, 0)->set_max_size();
            if (uVar6 != 0) {
                uVar14 = 0;
                do {
                    uVar6 = param_1->g2();
                    puVar17 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                        (Array<unsigned int, eastl::allocator>*)&field_1696, uVar14);
                    *puVar17 = (uint)uVar6;
                    uVar14 = uVar14 + 1;
                } while (uVar11 != uVar14);
            }
            puVar13 = &field_1648;
            puVar13->set_max_size(uVar11, 0);
            if (uVar11 != 0) {
                uVar14 = 0;
                do {
                    uVar6 = param_1->g2();
                    puVar17 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                        (Array<unsigned int, eastl::allocator>*)puVar13, uVar14);
                    *puVar17 = (uint)uVar6;
                    uVar14 = uVar14 + 1;
                } while (uVar11 != uVar14);
                uVar14 = 0;
                do {
                    iVar9 = param_1->g2();
                    puVar17 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                        (Array<unsigned int, eastl::allocator>*)puVar13, uVar14);
                    uVar21 = *puVar17;
                    puVar17 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                        (Array<unsigned int, eastl::allocator>*)puVar13, uVar14);
                    *puVar17 = iVar9 << 16 | uVar21;
                    uVar14 = uVar14 + 1;
                } while (uVar11 != uVar14);
            }
            break;
        case 2:
            uVar6 = param_1->g2();
            m_loops = (uint)uVar6;
            break;
        case 3:
            uVar6 = param_1->gSmart1or2();
            if (uVar6 != 0) {
                uVar21 = (uint)uVar6;
                do {
                    param_1->gSmart1or2();
                    uVar21 = uVar21 - 1;
                } while (uVar21 != 0);
            }
            break;
        default:
            if ((param_2 == 119) || (param_2 == 19)) {
                pvVar10 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)GetSeqSounds(this);
                pAVar1 = (Array<VarValue, eastl::allocator>*)(pvVar10 + 24);
                cVar2 = pAVar1->empty();
                if (cVar2 != '\0') {
                    uVar11 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar10);
                    pAVar1->set_max_size(uVar11, 0);
                    lVar12 = pAVar1->end();
                    if (lVar12 != 0) {
                        uVar21 = 1;
                        uVar11 = 0;
                        do {
                            puVar13 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                                (Array<unsigned char, eastl::allocator>*)pAVar1, uVar11);
                            *puVar13 = 255;
                            uVar11 = (ulong)uVar21;
                            uVar14 = pAVar1->end();
                            uVar21 = uVar21 + 1;
                        } while (uVar11 < uVar14);
                    }
                }
                if (param_2 == 19) {
                    bVar3 = param_1->g1();
                    uVar11 = (ulong)bVar3;
                } else {
                    uVar6 = param_1->g2();
                    uVar11 = (ulong)uVar6;
                }
                uVar4 = param_1->g1();
                puVar13 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                    (Array<unsigned char, eastl::allocator>*)pAVar1, uVar11);
                *puVar13 = uVar4;
                return DataStatus::READY;
            }
            switch (param_2) {
            case 21:
            switchD_1004de01d_caseD_15:
                uVar19 = logger::default_logger();
                logger::Logger::Log(uVar19, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/config/seqtype/SeqType.cpp",
                                    211, "Unrecognised .seq config code: %u", param_2);
                break;
            case 22:
                bVar3 = param_1->g1();
                lVar12 = GetSeqSounds(this);
                *(uint*)(lVar12 + 96) = (uint)bVar3;
                break;
            case 23:
                param_1->g2();
                break;
            case 24:
                uVar6 = param_1->g2();
                this_01 = (BaseTemplateConfigTypeList<SeqGroupType>*)field_24->GetDomain();
                psVar20 = (shared_ptr*)this_01->List((uint)uVar6, 0);
                shared_ptr<SeqGroupType>::operator=((shared_ptr<SeqGroupType>*)m_seqGroup, psVar20);
                break;
            case 25:
                uVar6 = param_1->g2();
                field_1720 = (uint)uVar6;
                break;
            case 26:
                uVar6 = param_1->g2();
                field_1744 = (uint)uVar6;
                uVar6 = param_1->g2();
                field_1748 = (uint)uVar6;
                break;
            default:
                if (param_2 == 249) {
                    DecodeParams(param_1);
                    return DataStatus::READY;
                }
                if (param_2 != 120)
                    goto switchD_1004de01d_caseD_15;
            case 20:
                pvVar10 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)GetSeqSounds(this);
                pAVar1 = (Array<VarValue, eastl::allocator>*)(pvVar10 + 48);
                cVar2 = pAVar1->empty();
                if (cVar2 != '\0') {
                    uVar11 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar10);
                    pAVar1->set_max_size(uVar11, 0);
                    uVar11 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar10);
                    ((pvVar10 + 72))->set_max_size(uVar11, 0);
                    lVar12 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar10);
                    if (lVar12 != 0) {
                        uVar21 = 1;
                        uVar11 = 0;
                        do {
                            puVar18 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                                (Array<unsigned short, eastl::allocator>*)(pvVar10 + 72), uVar11);
                            *puVar18 = 256;
                            puVar18 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                                (Array<unsigned short, eastl::allocator>*)pAVar1, uVar11);
                            *puVar18 = 256;
                            uVar11 = (ulong)uVar21;
                            uVar14 =
                                eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar10);
                            uVar21 = uVar21 + 1;
                        } while (uVar11 < uVar14);
                    }
                }
                if (param_2 == 20) {
                    bVar3 = param_1->g1();
                    uVar11 = (ulong)bVar3;
                } else {
                    uVar6 = param_1->g2();
                    uVar11 = (ulong)uVar6;
                }
                uVar7 = param_1->g2();
                puVar18 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                    (Array<unsigned short, eastl::allocator>*)pAVar1, uVar11);
                *puVar18 = uVar7;
                uVar7 = param_1->g2();
                puVar18 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                    (Array<unsigned short, eastl::allocator>*)(pvVar10 + 72), uVar11);
                *puVar18 = uVar7;
            }
            break;
        case 5:
            bVar3 = param_1->g1();
            m_priority = (uint)bVar3;
            break;
        case 6:
            uVar6 = param_1->g2();
            m_replaceHeldLeft = (uint)uVar6;
            break;
        case 7:
            uVar6 = param_1->g2();
            m_replaceHeldRight = (uint)uVar6;
            break;
        case 8:
            bVar3 = param_1->g1();
            m_maxLoops = (uint)bVar3;
            break;
        case 9:
            bVar3 = param_1->g1();
            m_preanimMove = (uint)bVar3;
            break;
        case 10:
            bVar3 = param_1->g1();
            m_postanimMove = (uint)bVar3;
            break;
        case 11:
            bVar3 = param_1->g1();
            m_duplicateBehaviour = (uint)bVar3;
            break;
        case 12:
            bVar3 = param_1->g1();
            uVar21 = (uint)bVar3;
            goto LAB_1004ddf72;
        case 13:
            this_00 = (Array<Array<unsigned int, eastl::allocator>, eastl::allocator>*)GetSeqSounds(this);
            uVar6 = param_1->g2();
            this_00->set_max_size((ulong)uVar6, 0);
            if (uVar6 != 0) {
                uVar11 = 0;
                do {
                    bVar3 = param_1->g1();
                    if (bVar3 != 0) {
                        pAVar15 = (Array<unsigned int, eastl::allocator>*)
                            Array<Array<unsigned int, eastl::allocator>, eastl::allocator>::operator[](this_00, uVar11);
                        pAVar15->set_max_size((ulong)bVar3, 0);
                        uVar8 = param_1->g3();
                        pAVar15 = (Array<unsigned int, eastl::allocator>*)
                            Array<Array<unsigned int, eastl::allocator>, eastl::allocator>::operator[](this_00, uVar11);
                        puVar16 = (undefined4*)Array<unsigned int, eastl::allocator>::operator[](pAVar15, 0);
                        *puVar16 = uVar8;
                        if (bVar3 != 1) {
                            uVar14 = 1;
                            do {
                                uVar5 = param_1->g2();
                                pAVar15 = (Array<unsigned int, eastl::allocator>*)
                                    Array<Array<unsigned int, eastl::allocator>, eastl::allocator>::operator[](this_00,
                                                                                                               uVar11);
                                puVar17 = (uint*)Array<unsigned int, eastl::allocator>::operator[](pAVar15, uVar14);
                                *puVar17 = (uint)uVar5;
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
            uVar6 = param_1->g2();
            uVar21 = (uint)uVar6;
        LAB_1004ddf72:
            puVar13 = &field_1672;
            uVar11 = (ulong)uVar21;
            puVar13->set_max_size(uVar11, 0);
            if (uVar21 != 0) {
                uVar14 = 0;
                do {
                    uVar6 = param_1->g2();
                    puVar17 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                        (Array<unsigned int, eastl::allocator>*)puVar13, uVar14);
                    *puVar17 = (uint)uVar6;
                    uVar14 = uVar14 + 1;
                } while (uVar11 != uVar14);
                if (uVar11 != 0) {
                    uVar14 = 0;
                    do {
                        iVar9 = param_1->g2();
                        puVar17 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                            (Array<unsigned int, eastl::allocator>*)puVar13, uVar14);
                        uVar21 = *puVar17;
                        puVar17 = (uint*)Array<unsigned int, eastl::allocator>::operator[](
                            (Array<unsigned int, eastl::allocator>*)puVar13, uVar14);
                        *puVar17 = iVar9 << 16 | uVar21;
                        uVar14 = uVar14 + 1;
                    } while (uVar11 != uVar14);
                }
            }
        }
        return DataStatus::READY;
    }

    // 0x1004de8b0, 224 bytes, placed by class name and debug map
    // SeqType::PostDecode()
    void SeqType::PostDecode() {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        NPCTypeList* pNVar3;
        long lVar4;
        int* piVar5;
        ulong uVar6;
        uint uVar7;
        ulong uVar8;

        if (m_preanimMove == 4) {
            bVar1 = m_seqGroup->operator_cast_to_bool();
            if (bVar1) {
                pNVar3 = (NPCTypeList*)shared_ptr<SeqGroupType>::operator->((shared_ptr<SeqGroupType>*)m_seqGroup);
                cVar2 = pNVar3->IsMembersServer();
                uVar7 = 2;
                if (cVar2 == '\0')
                    goto LAB_1004de8f3;
            } else {
            LAB_1004de8f3:
                uVar7 = 0;
            }
            m_preanimMove = uVar7;
        }
        if (m_postanimMove != 3)
            goto LAB_1004de93b;
        bVar1 = m_seqGroup->operator_cast_to_bool();
        if (bVar1) {
            pNVar3 = (NPCTypeList*)shared_ptr<SeqGroupType>::operator->((shared_ptr<SeqGroupType>*)m_seqGroup);
            cVar2 = pNVar3->IsMembersServer();
            uVar7 = 2;
            if (cVar2 == '\0')
                goto LAB_1004de932;
        } else {
        LAB_1004de932:
            uVar7 = 0;
        }
        m_postanimMove = uVar7;
    LAB_1004de93b:
        this_00 = &field_1696;
        lVar4 = this_00->end();
        if (lVar4 != 0) {
            uVar7 = 1;
            uVar8 = 0;
            do {
                piVar5 = (int*)Array<unsigned int, eastl::allocator>::operator[](
                    (Array<unsigned int, eastl::allocator>*)this_00, uVar8);
                field_1748 = field_1748 + *piVar5;
                uVar8 = (ulong)uVar7;
                uVar6 = this_00->end();
                uVar7 = uVar7 + 1;
            } while (uVar8 < uVar6);
        }
    }

    // 0x1004de9a0, 1792 bytes, placed by class name
    // SeqType::GetAnimation(AssetBuilder&, BuildRequest<graphics::Animation, BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)
    Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>*
    SeqType::GetAnimation(AssetBuilder* param_1, BuildRequest* param_2, uint param_3, shared_ptr* param_4) {
        ulonglong* this_00;
        undefined1* puVar1;
        SeqType* pSVar2;
        char cVar3;
        bool bVar4;
        int iVar5;
        undefined** ppuVar6;
        shared_ptr* this_01;
        future<void>* this_02;
        future<void>* pfVar7;
        ulong uVar8;
        long lVar9;
        shared_ptr<graphics::AnimationFrameRT5>* this_03;
        AnimKeyFrameSet* this_04;
        Layout* pLVar10;
        vector* pvVar11;
        ulong* puVar12;
        undefined* puVar13;
        Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>* this_05;
        type* ptVar14;
        shared_ptr* psVar15;
        AutoSingleton<ThreadPoolSingleton>* this_06;
        type* ptVar16;
        AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>* this_07;
        ulong uVar17;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_08;
        BuildRequest* this_09;
        float fVar18;
        undefined1 local_e0[8];
        shared_ptr* local_d8;
        AssetBuilder* local_d0;
        undefined* local_c8;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* local_c0;
        shared_ptr local_b8;
        shared_ptr local_a0;
        shared_ptr<oldscape::dash3d::Decor> local_90[16];
        SeqType* local_80;
        undefined4 local_78;
        shared_ptr local_70;
        shared_ptr local_60;
        Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>* local_50;
        AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>* local_48;
        BuildRequest* local_40;
        SeqType* local_38;

        this_00 = &field_56;
        local_d8 = param_4;
        local_d0 = param_1;
        local_38 = this;
        this_00->UpdateLoadingAssetList(5);
        puVar13 = (undefined*)(ulong)param_3;
        cVar3 = this_00->IsLoadingAsset((ulonglong)puVar13);
        if (cVar3 != '\0') {
            ppuVar6 = &DataStatus::NOTLOADED;
            goto LAB_1004defa2;
        }
        psVar15 = &local_a0;
        local_c8 = puVar13;
        local_a0._0_8_ = puVar13;
        this_01 = (shared_ptr*)LRUHashCache<graphics::Animation, 16ul, 17ul, false, unsigned long long>::Find(this_00);
        bVar4 = shared_ptr::operator_cast_to_bool(this_01);
        if (bVar4) {
            param_2->SetConstructedObj(this_01);
            psVar15 = this_01;
        }
        cVar3 = param_2->IsEmpty();
        if (cVar3 != '\0') {
            new (&local_60) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(psVar15);
            pSVar2 = local_38;
            puVar1 = &local_38->field_1784;
            cVar3 = puVar1->empty();
            local_c0 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)puVar1;
            local_48 = (AssetLRUHashCache<graphics::Animation, BuildAnimationMain, 16ul, 17ul, false>*)this_00;
            if (cVar3 == '\0') {
                local_40 = param_2;
                this_02 = (future<void>*)puVar1->HeapBeginPtr();
                pfVar7 = (future<void>*)puVar1->end();
                if (this_02 == pfVar7) {
                LAB_1004deb27:
                    local_c0->clear();
                    pSVar2 = local_38;
                    cVar3 = IsKeyFramed(local_38);
                    this_05 = local_50;
                    if (cVar3 == '\0') {
                        new (&local_a0) shared_ptr<oldscape::dash3d::Decor>(
                            (shared_ptr*)&graphics::AnimKeyFrameSet::NullAnimKeyFrameset);
                    } else {
                        local_a0.GetKeyFrameset((int)pSVar2->field_24);
                    }
                    this_09 = local_40;
                    this_07 = local_48;
                    psVar15 = &local_a0;
                    shared_ptr<graphics::AnimKeyFrameSet>::operator=((shared_ptr<graphics::AnimKeyFrameSet>*)&local_60,
                                                                     psVar15);
                    local_a0.~shared_ptr();
                LAB_1004deebc:
                    MakeSharedPool<graphics::Animation, 512>::MakeShared<>(
                        &local_a0, (MakeSharedPool<graphics::Animation, 512>*)psVar15);
                    local_70._0_4_ = 512;
                    bucket_make_shared<BuildAnimationMain, int, shared_ptr<graphics::Animation>&,
                                       Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>,
                                       Array<unsigned int, eastl::allocator>&, shared_ptr<graphics::Model> const&,
                                       shared_ptr<graphics::AnimKeyFrameSet>&>(
                        (jag*)&local_b8, (int*)&local_70, &local_a0, (Array*)&local_38->field_1816,
                        (Array*)&local_38->field_1696, local_d8, &local_60);
                    new (&local_70) shared_ptr<oldscape::dash3d::Decor>(&local_b8);
                    local_d0->SubmitJob(&local_70);
                    local_70.~shared_ptr();
                    this_07->AddLoadingAsset((ulonglong)local_c8, &local_b8);
                    this_09->SetObjAndTask(&local_a0, &local_b8);
                    cVar3 = this_09->IsTaskDone();
                    if (cVar3 == '\0') {
                        this_05 = (Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>*)
                            DataStatus::NOTLOADED;
                    }
                    local_b8.~shared_ptr();
                    local_a0.~shared_ptr();
                } else {
                    bVar4 = false;
                    do {
                        local_b8._0_4_ = 0;
                        std::chrono::duration<long long, std::ratio<1l, 1l>>::duration<int>((int*)&local_a0,
                                                                                            (type*)&local_b8);
                        iVar5 =
                            std::future<void>::wait_for<long long, std::ratio<1l, 1l>>(this_02, (duration*)&local_a0);
                        this_02 = this_02 + 8;
                        if (iVar5 != 0) {
                            local_50 = (Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>*)
                                DataStatus::NOTLOADED;
                            break;
                        }
                        bVar4 = this_02 == pfVar7;
                    } while (!bVar4);
                    if (bVar4)
                        goto LAB_1004deb27;
                    cVar3 = '\0';
                    this_05 = local_50;
                }
            } else {
                cVar3 = CheckFramesets(pSVar2);
                pSVar2 = local_38;
                if (cVar3 == '\0') {
                    this_05 =
                        (Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>*)DataStatus::NOTLOADED;
                } else {
                    cVar3 = IsKeyFramed(local_38);
                    if (cVar3 == '\0') {
                        new (&local_a0) shared_ptr<oldscape::dash3d::Decor>(
                            (shared_ptr*)&graphics::AnimKeyFrameSet::NullAnimKeyFrameset);
                    } else {
                        local_a0.GetKeyFrameset((int)pSVar2->field_24);
                    }
                    local_40 = param_2;
                    shared_ptr<graphics::AnimKeyFrameSet>::operator=((shared_ptr<graphics::AnimKeyFrameSet>*)&local_60,
                                                                     &local_a0);
                    local_a0.~shared_ptr();
                    shared_ptr::operator_cast_to_bool(&local_60);
                    puVar1 = &local_38->field_1648;
                    cVar3 = puVar1->empty();
                    if ((cVar3 == '\0') || (bVar4 = shared_ptr::operator_cast_to_bool(&local_60), bVar4)) {
                        this_05 = (Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>*)&local_38
                                      ->field_1816;
                        uVar8 = puVar1->end();
                        local_50 = this_05;
                        this_05->set_max_size(uVar8, 0);
                        lVar9 = puVar1->end();
                        if (lVar9 != 0) {
                            uVar8 = 0;
                            uVar17 = 1;
                            do {
                                this_05 = (Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>*)
                                              local_38->field_24;
                                Array<unsigned int, eastl::allocator>::operator[](
                                    (Array<unsigned int, eastl::allocator>*)puVar1, uVar8);
                                local_a0.GetFrame((uint)this_05);
                                this_03 = (shared_ptr<graphics::AnimationFrameRT5>*)
                                    Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>::operator[](
                                        local_50, uVar8);
                                shared_ptr<graphics::AnimationFrameRT5>::operator=(this_03, &local_a0);
                                local_a0.~shared_ptr();
                                uVar8 = puVar1->end();
                                bVar4 = uVar17 < uVar8;
                                uVar8 = uVar17;
                                uVar17 = (ulong)((int)uVar17 + 1);
                            } while (bVar4);
                        }
                        psVar15 = (shared_ptr*)0;
                        bVar4 = operator!=(&local_60, (_func_decltype_nullptr*)0);
                        if (bVar4) {
                            new (&local_70) shared_ptr<oldscape::dash3d::Decor>(&local_60);
                            this_04 = (AnimKeyFrameSet*)shared_ptr<graphics::AnimKeyFrameSet>::operator->(
                                (shared_ptr<graphics::AnimKeyFrameSet>*)&local_60);
                            this_08 = local_c0;
                            fVar18 = (float)this_04->GetEnd();
                            ptVar14 = (type*)(long)(int)fVar18;
                            local_50->set_max_size((ulong)ptVar14, 3);
                            this_06 = (AutoSingleton<ThreadPoolSingleton>*)&local_38->field_1696;
                            ptVar16 = ptVar14;
                            this_06->set_max_size((ulong)ptVar14, 3);
                            pLVar10 = (Layout*)this_06->Instance();
                            pvVar11 = eastl::string::Layout::SSOBeginPtr(pLVar10, ptVar16);
                            local_b8.InitialiseWorkGroups((ulong)pvVar11, (ulong)ptVar14);
                            lVar9 = local_b8.size();
                            if (lVar9 != 0) {
                                ptVar16 = (type*)0;
                                do {
                                    psVar15 = &local_b8;
                                    puVar12 = (ulong*)
                                        eastl::vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>::
                                        operator[](
                                            (vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>*)
                                                psVar15,
                                            (ulong)ptVar16);
                                    puVar13 = (undefined*)*puVar12;
                                    ptVar14 = ptVar16;
                                    lVar9 =
                                        eastl::vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>::
                                        operator[](
                                            (vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>*)
                                                psVar15,
                                            (ulong)ptVar16);
                                    lVar9 = *(long*)(lVar9 + 8);
                                    pLVar10 = (Layout*)psVar15->Instance();
                                    pvVar11 = eastl::string::Layout::SSOBeginPtr(pLVar10, ptVar14);
                                    local_a0._0_8_ = puVar13;
                                    local_a0.field_8 = lVar9;
                                    shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_90, &local_70);
                                    local_80 = local_38;
                                    local_78 = 1;
                                    ThreadPool::AddTask<SeqType::GetAnimation(
                                        AssetBuilder&, BuildRequest<graphics::Animation, BuildAnimationMain>&,
                                        unsigned int, shared_ptr<graphics::Model> const&)::__0>(
                                        (ThreadPool*)local_e0, (char*)pvVar11, (__0*)&local_a0);
                                    this_08 = local_c0;
                                    local_c0->push_back(local_e0);
                                    local_e0->~future();
                                    GetAnimation(AssetBuilder&, BuildRequest<graphics::Animation, BuildAnimationMain>&,
                                                 unsigned int,
                                                 shared_ptr<graphics::Model> const&)::$_0::~__0((__0*)&local_a0);
                                    ptVar16 = ptVar16 + 1;
                                    ptVar14 = (type*)local_b8.size();
                                } while (ptVar16 < ptVar14);
                            }
                            cVar3 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                                     eastl::allocator>>::empty(this_08);
                            this_05 = (Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>*)
                                DataStatus::NOTLOADED;
                            if (cVar3 != '\0') {
                                /* WARNING: Subroutine does not return */
                                LogAssert("!m_animationSampleTasks.empty()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                          "runetek5/config/seqtype/SeqType.cpp",
                                          376, (char*)0);
                            }
                            local_b8.~vector();
                            local_70.~shared_ptr();
                            goto LAB_1004dee90;
                        }
                        this_07 = local_48;
                        this_09 = local_40;
                        goto LAB_1004deebc;
                    }
                    local_40->SetConstructedObj((shared_ptr*)&graphics::AnimationManager::IDENTITY_ANIMATION);
                    this_05 = (Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>*)DataStatus::READY;
                }
            LAB_1004dee90:
                cVar3 = '\0';
            }
            local_60.~shared_ptr();
            if (cVar3 == '\0') {
                return this_05;
            }
        }
        ppuVar6 = &DataStatus::READY;
    LAB_1004defa2:
        return (Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>*)*ppuVar6;
    }

    // 0x1004df4b0, 256 bytes, placed by class name
    // SeqType::CheckFramesets()
    ulong SeqType::CheckFramesets() {
        undefined1* this_00;
        BaseTemplateConfigTypeList* pBVar1;
        char cVar2;
        long lVar3;
        ulong uVar4;
        undefined7 uVar5;
        uint uVar6;
        ulong uVar7;
        bool bVar8;
        undefined1 local_48[16];
        Array<unsigned int, eastl::allocator>* local_38;

        this_00 = &field_1648;
        cVar2 = this_00->empty();
        uVar5 = (undefined7)((ulong)this_00 >> 8);
        if (cVar2 == '\0') {
            lVar3 = this_00->end();
            if (lVar3 == 0) {
                bVar8 = true;
            } else {
                bVar8 = true;
                uVar6 = 1;
                uVar7 = 0;
                local_38 = (Array<unsigned int, eastl::allocator>*)this_00;
                do {
                    pBVar1 = field_24;
                    Array<unsigned int, eastl::allocator>::operator[](local_38, uVar7);
                    local_48->GetFrameset((int)pBVar1);
                    lVar3 = local_48->end();
                    local_48->~shared_ptr();
                    if (lVar3 == 0) {
                        bVar8 = false;
                    }
                    uVar5 = 0;
                    uVar7 = (ulong)uVar6;
                    uVar4 = local_38->end();
                    uVar6 = uVar6 + 1;
                } while (uVar7 < uVar4);
            }
        } else {
            local_48->GetKeyFrameset((int)field_24);
            lVar3 = local_48->end();
            bVar8 = lVar3 != 0;
            local_48->~shared_ptr();
        }
        return CONCAT71(uVar5, bVar8) & 4294967295;
    }

    // 0x1004dfed0, 32 bytes, placed by class name
    // SeqType::CleanCache()
    void SeqType::CleanCache() {
        (&field_56, 1000)->Clean();
    }

    // 0x1004dff80, 240 bytes, placed by class name
    // SeqType::GetRandomRateForSound(unsigned int) const
    int SeqType::GetRandomRateForSound(uint param_1) {
        ushort uVar1;
        ushort uVar2;
        bool bVar3;
        char cVar4;
        long lVar5;
        ulong uVar6;
        ushort* puVar7;
        undefined1* this_00;
        int iVar8;
        float fVar10;

        this_00 = field_1768;
        bVar3 = this_00->operator_cast_to_bool();
        iVar8 = 256;
        if (bVar3) {
            lVar5 = shared_ptr<SeqTypeSounds>::operator->((shared_ptr<SeqTypeSounds>*)this_00);
            cVar4 = ((lVar5 + 48))->empty();
            if (cVar4 == '\0') {
                lVar5 = shared_ptr<SeqTypeSounds>::operator->((shared_ptr<SeqTypeSounds>*)this_00);
                cVar4 = ((lVar5 + 72))->empty();
                if (cVar4 == '\0') {
                    lVar5 = shared_ptr<SeqTypeSounds>::operator->((shared_ptr<SeqTypeSounds>*)this_00);
                    uVar6 = ((lVar5 + 48))->end();
                    if (uVar6 <= (ulong)param_1) {
                        lVar5 = shared_ptr<SeqTypeSounds>::operator->((shared_ptr<SeqTypeSounds>*)this_00);
                        uVar6 = ((lVar5 + 72))->end();
                        if (uVar6 <= (ulong)param_1) {
                            return 256;
                        }
                    }
                    lVar5 = shared_ptr<SeqTypeSounds>::operator->((shared_ptr<SeqTypeSounds>*)this_00);
                    puVar7 = (ushort*)Array<unsigned short, eastl::allocator>::operator[](
                        (Array<unsigned short, eastl::allocator>*)(lVar5 + 48), (ulong)param_1);
                    uVar1 = *puVar7;
                    lVar5 = shared_ptr<SeqTypeSounds>::operator->((shared_ptr<SeqTypeSounds>*)this_00);
                    puVar7 = (ushort*)Array<unsigned short, eastl::allocator>::operator[](
                        (Array<unsigned short, eastl::allocator>*)(lVar5 + 72), (ulong)param_1);
                    uVar2 = *puVar7;
                    fVar10 = (float)math::frand(1.0);
                    iVar8 = (int)(long)((float)((uint)uVar2 - (uint)uVar1) * fVar10) + (uint)uVar1;
                }
            }
        }
        return iVar8;
    }

    // 0x1004e00b0, 32 bytes, placed by class name
    // SeqType::IsBlockingMovement(int)
    bool SeqType::IsBlockingMovement(int param_1) {
        int iVar1;

        if (param_1 < 1) {
            iVar1 = GetPostanimMove(this);
        } else {
            iVar1 = GetPreanimMove(this);
        }
        return iVar1 == 0;
    }

    // 0x1004f22b0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.12
    void ___cxx_global_var_init_12(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&SeqType::NullSeqType) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee52a0, &SeqType::NullSeqType, 4294967296);
    }

} // namespace jag::game
