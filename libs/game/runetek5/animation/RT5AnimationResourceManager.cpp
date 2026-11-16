// libs/game/runetek5/animation/RT5AnimationResourceManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "RT5AnimationResourceManager.h"

namespace jag::game {
    // 0x100049810: the linker folded this into oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const, which has identical code
    shared_ptr RT5AnimationResourceManager::GetModel() const;

    // 0x100658810, 176 bytes, base-object constructor, placed by class name and debug map
    // RT5AnimationResourceManager::RT5AnimationResourceManager(AssetBuilder&, ConfigProvider const&)
    void RT5AnimationResourceManager::RT5AnimationResourceManager(AssetBuilder* param_1, ConfigProvider* param_2) {
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_38[16];

        new (this) graphics::AnimationResourceManager();
        field_0 = &PTR__RT5AnimationResourceManager_100f0da10;
        new (&field_8) eastl::vector_map<
            graphics::AnimationStateResourceList*,
            eastl::vector<RT5AnimationResourceManager::LoadInfo, eastl::allocator>,
            eastl::less<graphics::AnimationStateResourceList*>, eastl::allocator,
            eastl::vector<eastl::pair<graphics::AnimationStateResourceList*,
                                      eastl::vector<RT5AnimationResourceManager::LoadInfo, eastl::allocator>>,
                          eastl::allocator>>();
        field_48 = param_1;
        field_56 = param_2;
        new (m_model, (_func_decltype_nullptr*)param_1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_38, (_func_decltype_nullptr*)0);
        new (&field_80, (weak_ptr*)local_38) weak_ptr<oldscape::dash3d::Decor>();
        local_38->~shared_ptr();
    }

    // 0x100658900, 16 bytes, complete-object constructor, placed by class name
    // RT5AnimationResourceManager::RT5AnimationResourceManager(AssetBuilder&, ConfigProvider const&): jumps straight to the base-object constructor

    // 0x100658910, 208 bytes, placed by class name
    // RT5AnimationResourceManager::Update()
    void RT5AnimationResourceManager::Update() {
        SeqType* this_00;
        bool bVar1;
        compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator>*
            pcVar2;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        shared_ptr* psVar3;
        shared_ptr* this_02;
        compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator>*
            this_03;

        bVar1 = m_model->operator_cast_to_bool();
        if (bVar1) {
            this_03 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator>*)(&field_8)
                          ->HeapBeginPtr();
            pcVar2 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                      eastl::allocator>*)(&field_8)
                         ->end();
            for (; this_03 != pcVar2; this_03 = this_03 + 40) {
                eastl::compressed_pair<eastl::string*, eastl::allocator>::first();
                this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    eastl::compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator>::second(this_03);
                this_02 = (shared_ptr*)this_01->HeapBeginPtr();
                psVar3 =
                    (shared_ptr*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
                for (; this_02 != psVar3; this_02 = (shared_ptr*)&this_02[3].field_8) {
                    bVar1 = shared_ptr::operator_cast_to_bool(this_02);
                    if (bVar1) {
                        this_00 = (SeqType*)shared_ptr<SeqType>::operator->((shared_ptr<SeqType>*)this_02);
                        this_00->CleanCache();
                    }
                }
            }
            LoadAnimations(this);
        }
    }

    // 0x1006589e0, 352 bytes, placed by class name
    // RT5AnimationResourceManager::LoadAnimations()
    void RT5AnimationResourceManager::LoadAnimations() {
        bool bVar1;
        char cVar2;
        compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator>*
            this_00;
        undefined8* puVar3;
        vector* this_01;
        long lVar4;
        undefined1* puVar5;
        AnimationResource* this_02;
        LoadInfo* pLVar6;
        BASType* pBVar7;
        AnimationResource* pAVar8;
        AnimationResource* pAVar9;
        bool bVar10;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_68[16];
        vector<RT5AnimationResourceManager::LoadInfo, eastl::allocator>* local_58;
        RT5AnimationResourceManager* local_50;
        compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator>*
            local_48;
        undefined8* local_40;
        compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator>*
            local_38;

        pAVar8 = (AnimationResource*)&field_80;
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        local_50 = this;
        this_00 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                   eastl::allocator>*)(&field_8)
                      ->HeapBeginPtr();
        local_38 = (compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                    eastl::allocator>*)(&field_8)
                       ->end();
        if (this_00 != local_38) {
            do {
                puVar3 = (undefined8*)eastl::compressed_pair<eastl::string*, eastl::allocator>::first();
                local_58 = (vector<RT5AnimationResourceManager::LoadInfo, eastl::allocator>*)
                    eastl::compressed_pair<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator>::second(this_00);
                local_48 = this_00;
                local_40 = puVar3;
                this_01 = (*puVar3)->SSOBeginPtr(pAVar8);
                lVar4 = this_01->size();
                bVar1 = true;
                bVar10 = true;
                if (lVar4 != 0) {
                    pAVar9 = (AnimationResource*)0;
                    do {
                        pAVar8 = pAVar9;
                        this_02 = (AnimationResource*)
                            eastl::vector<graphics::AnimationResource, eastl::allocator>::operator[](
                                (vector<graphics::AnimationResource, eastl::allocator>*)this_01, (ulong)pAVar9);
                        cVar2 = this_02->Constructed();
                        if (cVar2 == '\0') {
                            pLVar6 = (LoadInfo*)
                                eastl::vector<RT5AnimationResourceManager::LoadInfo, eastl::allocator>::operator[](
                                    local_58, (ulong)pAVar9);
                            pBVar7 = (BASType*)local_68->end();
                            cVar2 = LoadResource(local_50, this_02, pLVar6, pBVar7);
                            pAVar8 = this_02;
                            bVar10 = bVar1;
                            if (cVar2 == '\0') {
                                bVar10 = false;
                                bVar1 = bVar10;
                            }
                        }
                        pAVar9 = (AnimationResource*)&pAVar9->field_1;
                        puVar5 = (undefined1*)this_01->size();
                    } while (pAVar9 < puVar5);
                }
                if (bVar10) {
                    (*local_40)->SetAllConstructed();
                }
                this_00 = local_48 + 40;
            } while (this_00 != local_38);
        }
        local_68->~shared_ptr();
    }

    // 0x100658ba0, 1104 bytes, placed by class name
    // RT5AnimationResourceManager::LoadResource(graphics::AnimationResource&, RT5AnimationResourceManager::LoadInfo&, BASType*)
    ulong RT5AnimationResourceManager::LoadResource(AnimationResource* param_1, LoadInfo* param_2, BASType* param_3) {
        undefined1* this_00;
        ConfigProvider* this_01;
        function fVar1;
        bool bVar2;
        char cVar3;
        int iVar4;
        int iVar5;
        uint uVar6;
        undefined4 uVar7;
        Component* this_02;
        long lVar8;
        GameToken* this_03;
        Model* this_04;
        SeqType* pSVar9;
        undefined* puVar10;
        vector* pvVar11;
        Skybox* this_05;
        Animation* this_06;
        int* piVar12;
        shared_ptr* psVar13;
        AnimationParameters* this_07;
        function* pfVar14;
        ulong uVar15;
        AssetBuilder* pAVar16;
        type* ptVar17;
        DataStatus* apDStackY_6d8[128];
        int* piVar18;
        uint* puVar19;
        bool* pbVar20;
        undefined8 in_stack_fffffffffffffd40;
        undefined4 in_stack_fffffffffffffd48;
        undefined4 in_stack_fffffffffffffd4c;
        undefined1 in_stack_fffffffffffffd50[120];
        int local_b8;
        int local_b4;
        int local_b0;
        uint local_ac;
        BASType* local_a8;
        undefined4 local_a0;
        bool local_9a;
        bool local_99;
        function<void(), 64ul, 16ul, (fixedfunction::Methods)0> local_98[96];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_a8 = param_3;
        this_02 = (Component*)param_1->SSOBeginPtr(param_1);
        iVar4 = this_02->GetStickTime();
        if (iVar4 == -1) {
            if (local_a8 == (BASType*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("basType != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                          "animation/RT5AnimationResourceManager.cpp",
                          94, (char*)0);
            }
            _memcpy(apDStackY_6d8 + 132, &DAT_100f0da30, 504);
            iVar4 = this_02->GetWrapMode();
            if (iVar4 == 0) {
                iVar4 = local_a8->GetReadyAnim(-1);
            } else {
                iVar4 = this_02->GetWrapMode();
                lVar8 = std::array<std::pair<graphics::BasAnimType, int (BASType::*)() const>, 21ul>::operator[](
                    (array<std::pair<graphics::BasAnimType, int (BASType::*)() const>, 21ul>*)(apDStackY_6d8 + 132),
                    (long)iVar4);
                if (*(long*)(lVar8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("func",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "animation/RT5AnimationResourceManager.cpp",
                              135, (char*)0);
                }
                iVar4 = std::invoke<int (BASType::* const&)() const, BASType*&>((_func_int*)(lVar8 + 8), &local_a8);
            }
            if (iVar4 == -1) {
                /* WARNING: Subroutine does not return */
                LogAssert("seqID != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                          "animation/RT5AnimationResourceManager.cpp",
                          139, (char*)0);
            }
        } else {
            iVar4 = this_02->GetStickTime();
            if (iVar4 == -1) {
                /* WARNING: Subroutine does not return */
                LogAssert("seqID != -1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                          "animation/RT5AnimationResourceManager.cpp",
                          145, (char*)0);
            }
        }
        bVar2 = param_2->operator_cast_to_bool();
        if (bVar2) {
            this_03 = (GameToken*)shared_ptr<SeqType>::operator->((shared_ptr<SeqType>*)param_2);
            iVar4 = this_03->GetStatus();
            iVar5 = this_02->GetStickTime();
            if (iVar4 != iVar5) {
                /* WARNING: Subroutine does not return */
                LogAssert("(int)loadInfo.m_seq->GetMyID() == animDesc.GetSeqID()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                          "animation/RT5AnimationResourceManager.cpp",
                          162, (char*)0);
            }
        LAB_100658d70:
            bVar2 = param_2->operator_cast_to_bool();
            uVar15 = CONCAT71((int7)((ulong)param_3 >> 8), 1);
            if (!bVar2)
                goto LAB_100658f7e;
            this_04 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)m_model);
            uVar6 = this_04->GetModelRawUniqueID();
            if (param_2->field_16 != uVar6) {
                param_2->field_16 = uVar6;
                param_2->field_24->Clear();
            }
            pSVar9 = (SeqType*)shared_ptr<SeqType>::operator->((shared_ptr<SeqType>*)param_2);
            pAVar16 = field_48;
            this_00 = param_2->field_24;
            puVar10 = (undefined*)pSVar9->GetAnimation(pAVar16, this_00, uVar6, m_model);
            if (((puVar10 == DataStatus::READY) && (cVar3 = this_00->IsTaskDone(), cVar3 != '\0')) &&
                (cVar3 = this_00->IsEmpty(), cVar3 == '\0')) {
                pvVar11 = this_00->SSOBeginPtr(pAVar16);
                this_05 =
                    (Skybox*)shared_ptr<graphics::Animation>::operator->((shared_ptr<graphics::Animation>*)pvVar11);
                cVar3 = this_05->ShowSkybox();
                if (cVar3 != '\0') {
                    local_b8 = 0;
                    local_9a = false;
                    local_b4 = 0;
                    uVar7 = this_02->GetLoopLength();
                    pvVar11 = this_00->SSOBeginPtr(pAVar16);
                    this_06 = (Animation*)shared_ptr<graphics::Animation>::operator->(
                        (shared_ptr<graphics::Animation>*)pvVar11);
                    local_a0 = this_06->GetFrameCount();
                    ptVar17 = (type*)&local_a0;
                    piVar12 = std::min<int>((int*)(apDStackY_6d8 + 132), (int*)ptVar17);
                    local_b0 = *piVar12;
                    psVar13 = (shared_ptr*)this_00->SSOBeginPtr(ptVar17);
                    local_a0 = this_02->GetCurrentX();
                    pSVar9 = (SeqType*)shared_ptr<SeqType>::operator->((shared_ptr<SeqType>*)param_2);
                    local_ac = pSVar9->GetMaxLoops();
                    local_99 = (bool)this_02->HasError();
                    pbVar20 = &local_99;
                    puVar19 = &local_ac;
                    piVar18 = &local_b0;
                    piVar12 = &local_b8;
                    MakeUniquePool<graphics::AnimationParameters, 512>::MakeUnique<
                        shared_ptr<graphics::Animation> const&, graphics::AnimationLoopBehaviour, int&, int&, bool&,
                        int&, unsigned int, bool>(
                        (MakeUniquePool<graphics::AnimationParameters, 512>*)(apDStackY_6d8 + 132), psVar13,
                        (AnimationLoopBehaviour*)&local_a0, piVar12, &local_b4, &local_9a, piVar18, puVar19, pbVar20);
                    this_07 =
                        (AnimationParameters*)
                            std::unique_ptr<graphics::AnimationParameters,
                                            MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>::
                            operator->((unique_ptr<graphics::AnimationParameters,
                                                   MakeUniquePool<graphics::AnimationParameters,
                                                                  512>::UniquePoolDeleter>*)(apDStackY_6d8 + 132));
                    pfVar14 = (function*)this_02->GetCursorMutex();
                    fixedfunction::function<void(), 64ul, 16ul, (fixedfunction::Methods)0>::function(local_98, pfVar14);
                    fVar1._8_8_ = puVar19;
                    fVar1.field_0 = (long)piVar18;
                    fVar1._16_8_ = pbVar20;
                    fVar1._24_8_ = in_stack_fffffffffffffd40;
                    fVar1._32_4_ = uVar7;
                    fVar1._36_4_ = in_stack_fffffffffffffd4c;
                    fVar1._40_120_ = in_stack_fffffffffffffd50;
                    this_07->SetOnFinishedCallback(fVar1);
                    fixedfunction::function<void(), 64ul, 16ul, (fixedfunction::Methods)0>::~function(local_98);
                    param_1->Construct((unique_ptr*)(apDStackY_6d8 + 132));
                    ((apDStackY_6d8 + 132))->~unique_ptr();
                    uVar15 = CONCAT71((int7)((ulong)piVar12 >> 8), 1);
                    goto LAB_100658f7e;
                }
            }
        } else {
            this_01 = field_56;
            iVar4 = this_02->GetStickTime();
            psVar13 = ConfigProvider::GetConfig<SeqType>(this_01, iVar4, apDStackY_6d8 + 132);
            shared_ptr<SeqType>::operator=((shared_ptr<SeqType>*)param_2, psVar13);
            param_3 = (BASType*)&DataStatus::NOTLOADED;
            if ((undefined*)CONCAT44(in_stack_fffffffffffffd4c, in_stack_fffffffffffffd48) != DataStatus::NOTLOADED)
                goto LAB_100658d70;
        }
        uVar15 = 0;
    LAB_100658f7e:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar15 & 4294967295;
    }

    // 0x100659050, 192 bytes, placed by class name
    // RT5AnimationResourceManager::RequestResources(graphics::AnimationStateResourceList&)
    void RT5AnimationResourceManager::RequestResources(AnimationStateResourceList* param_1) {
        long lVar1;
        long lVar2;
        vector* this_00;
        ulong uVar3;
        vector<RT5AnimationResourceManager::LoadInfo, eastl::allocator>* this_01;
        undefined1* this_02;
        type* ptVar4;
        allocator local_58[8];
        AnimationStateResourceList* local_50[4];
        AnimationStateResourceList* local_30;

        this_02 = &field_8;
        ptVar4 = (type*)local_50;
        local_50[0] = param_1;
        lVar1 = this_02->find(ptVar4);
        lVar2 = this_02->end();
        if (lVar1 == lVar2) {
            this_00 = param_1->SSOBeginPtr(ptVar4);
            uVar3 = this_00->size();
            eastl::allocator::allocator(local_58, "EASTL vector");
            new (local_50) eastl::vector<RT5AnimationResourceManager::LoadInfo, eastl::allocator>(uVar3, local_58);
            local_30 = param_1;
            this_01 = (vector<RT5AnimationResourceManager::LoadInfo, eastl::allocator>*)eastl::vector_map<
                graphics::AnimationStateResourceList*,
                eastl::vector<RT5AnimationResourceManager::LoadInfo, eastl::allocator>,
                eastl::less<graphics::AnimationStateResourceList*>, eastl::allocator,
                eastl::vector<eastl::pair<graphics::AnimationStateResourceList*,
                                          eastl::vector<RT5AnimationResourceManager::LoadInfo, eastl::allocator>>,
                              eastl::allocator>>::
            operator[](
                (vector_map<
                    graphics::AnimationStateResourceList*,
                    eastl::vector<RT5AnimationResourceManager::LoadInfo, eastl::allocator>,
                    eastl::less<graphics::AnimationStateResourceList*>, eastl::allocator,
                    eastl::vector<eastl::pair<graphics::AnimationStateResourceList*,
                                              eastl::vector<RT5AnimationResourceManager::LoadInfo, eastl::allocator>>,
                                  eastl::allocator>>*)this_02,
                &local_30);
            eastl::vector<RT5AnimationResourceManager::LoadInfo, eastl::allocator>::operator=(this_01,
                                                                                              (vector*)local_50);
            local_50->~vector();
        }
    }

} // namespace jag::game
