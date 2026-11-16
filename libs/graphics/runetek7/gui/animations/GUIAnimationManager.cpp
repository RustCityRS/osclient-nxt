// libs/graphics/runetek7/gui/animations/GUIAnimationManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "GUIAnimationManager.h"

namespace jag::graphics {
    // 0x100f44350, 4 bytes, __data
    GUIAnimationManager::m_nextTemporaryAnimationID = 16777216;

    // 0x10011c9a0: the linker folded this into oldscape::dash3d::ModelAppender::~ModelAppender(), which has identical code
    GUIAnimationManager::TemporaryAnimationData::~TemporaryAnimationData();

    // 0x10012a760: the linker folded this into eastl::pair<oldscape::Font const, shared_ptr<oldscape::jstring::PixfontGeneric> >::~pair(), which has identical code
    GUIAnimationManager::TemporaryAnimationData::~TemporaryAnimationData();

    // 0x10049c6f0: the linker folded this into eastl::pair<int, shared_ptr<game::ObjTypeCustomisation> >::pair(eastl::pair<int, shared_ptr<game::ObjTypeCustomisation> >&&), which has identical code
    GUIAnimationManager::TemporaryAnimationData::TemporaryAnimationData(GUIAnimationManager::TemporaryAnimationData&&);

    // 0x10049c700: the linker folded this into eastl::pair<int, shared_ptr<game::ObjTypeCustomisation> >::pair(eastl::pair<int, shared_ptr<game::ObjTypeCustomisation> >&&), which has identical code
    GUIAnimationManager::TemporaryAnimationData::TemporaryAnimationData(GUIAnimationManager::TemporaryAnimationData&&);

    // 0x1008f6cd0, 112 bytes, base-object constructor, placed by class name and debug map
    // GUIAnimationManager::TemporaryAnimationData::TemporaryAnimationData(shared_ptr<GUIAnimation>&&)
    void GUIAnimationManager::TemporaryAnimationData::TemporaryAnimationData(shared_ptr* param_1) {
        m_nextTemporaryAnimationID = m_nextTemporaryAnimationID + 1;
        field_0 = m_nextTemporaryAnimationID;
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&field_8, param_1);
        if (field_0 == -1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_id < 0xFFFFFFFFu",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimationManager.cpp",
                      13, (char*)0);
        }
    }

    // 0x1008f6d40, 16 bytes, complete-object constructor, placed by class name and debug map
    // GUIAnimationManager::TemporaryAnimationData::TemporaryAnimationData(shared_ptr<GUIAnimation>&&): jumps straight to the base-object constructor

    // 0x1008f6d50, 272 bytes, base-object constructor, placed by class name
    // GUIAnimationManager::GUIAnimationManager()
    void GUIAnimationManager::GUIAnimationManager() {
        int* piVar1;
        int local_48[2];
        hash local_40[8];
        equal_to local_38[8];

        field_0 = PTR_vtable_100ee8808 + 16;
        new (&field_8) eastl::fixed_vector<GUIAnimationManager::TemporaryAnimationData, 32ul, true, eastl::allocator>();
        local_48[0] = 16;
        local_48[1] = 8;
        piVar1 = std::max<int>(local_48, local_48 + 1);
        new (&field_816, 1024, *piVar1) FastPool<GUIAnimationInstance, int>();
        eastl::fixed_vector<GUIAnimationInstance*, 1024ul, false, eastl::dummy_allocator>::fixed_vector();
        new (&field_9064, local_40, local_38)
            eastl::fixed_hash_map<ui::Component*, eastl::vector<GUIAnimationInstance*, BucketAllocatorEASTL>, 128ul,
                                  129ul, true, eastl::hash<ui::Component*>, eastl::equal_to<ui::Component*>, false,
                                  eastl::allocator>();
        field_15376 = 0;
        eastl::fixed_vector<GUIAnimationInstance*, 128ul, false, eastl::dummy_allocator>::fixed_vector();
        new (&field_16432) eastl::fixed_vector<GUIAnimationManager::ScheduledInstance, 8ul, true, eastl::allocator>();
    }

    // 0x1008f6f10, 16 bytes, complete-object constructor, placed by class name
    // GUIAnimationManager::GUIAnimationManager(): jumps straight to the base-object constructor

    // 0x1008f6f20, 112 bytes, placed by class name
    // GUIAnimationManager::CreateTemporaryAnimation(GUIAnimationCurve const&, GUIAnimationTarget, GUIAnimationTargetMode)
    TemporaryAnimationData* GUIAnimationManager::CreateTemporaryAnimation(GUIAnimationCurve* param_1,
                                                                          undefined4 param_3, undefined4 param_4) {
        TemporaryAnimationData* pTVar1;
        shared_ptr local_30;
        undefined4 local_20;
        undefined4 local_1c;

        local_20 = param_3;
        local_1c = param_4;
        bucket_make_shared<GUIAnimation, GUIAnimationCurve_const&, GUIAnimationTarget&, GUIAnimationTargetMode&>(
            (jag*)&local_30, param_1, (GUIAnimationTarget*)&local_20, (GUIAnimationTargetMode*)&local_1c);
        pTVar1 = eastl::vector<GUIAnimationManager::TemporaryAnimationData,
                               eastl::fixed_vector_allocator<24ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            emplace_back<shared_ptr<GUIAnimation>>(
                (vector<GUIAnimationManager::TemporaryAnimationData,
                        eastl::fixed_vector_allocator<24ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)&field_8,
                &local_30);
        local_30.~shared_ptr();
        return pTVar1;
    }

    // 0x1008f70b0, 128 bytes, placed by class name
    // GUIAnimationManager::CreateTemporaryAnimation(math::EasingType, bool, GUIAnimationTarget, GUIAnimationTargetMode)
    TemporaryAnimationData* GUIAnimationManager::CreateTemporaryAnimation(undefined4 param_2, undefined1 param_3,
                                                                          undefined4 param_4, undefined4 param_5) {
        TemporaryAnimationData* pTVar1;
        shared_ptr local_38;
        undefined4 local_28;
        undefined4 local_24;
        undefined4 local_20;
        bool local_19;

        local_28 = param_2;
        local_24 = param_4;
        local_20 = param_5;
        local_19 = (bool)param_3;
        bucket_make_shared<GUIAnimation, math::EasingType&, bool&, GUIAnimationTarget&, GUIAnimationTargetMode&>(
            (jag*)&local_38, (EasingType*)&local_28, &local_19, (GUIAnimationTarget*)&local_24,
            (GUIAnimationTargetMode*)&local_20);
        pTVar1 = eastl::vector<GUIAnimationManager::TemporaryAnimationData,
                               eastl::fixed_vector_allocator<24ul, 32ul, 8ul, 0ul, true, eastl::allocator>>::
            emplace_back<shared_ptr<GUIAnimation>>(
                (vector<GUIAnimationManager::TemporaryAnimationData,
                        eastl::fixed_vector_allocator<24ul, 32ul, 8ul, 0ul, true, eastl::allocator>>*)&field_8,
                &local_38);
        local_38.~shared_ptr();
        return pTVar1;
    }

    // 0x1008f71f0, 288 bytes, placed by class name
    // GUIAnimationManager::GetAnimation(unsigned int) const
    undefined1* GUIAnimationManager::GetAnimation(uint param_1) {
        uint uVar2;
        undefined8 uVar4;
        _func_decltype_nullptr* p_Var5;
        TemporaryAnimationData* pTVar6;
        TemporaryAnimationData* pTVar7;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        undefined1* puVar8;
        undefined1 local_24[4];

        if (IsTemporaryAnimation(param_1) == '\0') {
            this_00 =
                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(**(code**)(field_0 + 32))(this);
            uVar2 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
            if (uVar2 <= param_1) {
                /* WARNING: Subroutine does not return */
                LogAssert("id < (uint)configAnimations.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                          "animations/GUIAnimationManager.cpp",
                          50, (char*)0);
            }
            puVar8 = (undefined1*)Array<shared_ptr<GUIAnimation>, eastl::allocator>::operator[](
                (Array<shared_ptr<GUIAnimation>, eastl::allocator>*)this_00, (ulong)param_1);
        } else {
            puVar8 = &field_8;
            uVar4 = puVar8->HeapBeginPtr();
            p_Var5 = (_func_decltype_nullptr*)puVar8->end();
            pTVar6 = eastl::lower_bound<GUIAnimationManager::TemporaryAnimationData_const*, unsigned int,
                                        unsigned int->GetAnimation() const ::__3>(uVar4, p_Var5, local_24);
            pTVar7 = (TemporaryAnimationData*)puVar8->end();
            if ((pTVar6 == pTVar7) || (pTVar6->field_0 != param_1)) {
                puVar8 = &GetAnimation(unsigned int)::null;
                if (GetAnimation(unsigned int)::null == '\0') {
                    if (___cxa_guard_acquire(&GetAnimation(unsigned int)::null) != 0) {
                        puVar8 = &GetAnimation(unsigned int)::null;
                        new (&GetAnimation(unsigned int)::null)
                            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(p_Var5);
                        ___cxa_atexit(PTR__shared_ptr_100ee5358, &GetAnimation(unsigned int)::null, 4294967296);
                        ___cxa_guard_release(&GetAnimation(unsigned int)::null);
                    }
                }
            } else {
                puVar8 = &pTVar6->field_8;
            }
        }
        return puVar8;
    }

    // 0x1008f7430, 80 bytes, placed by class name
    // GUIAnimationManager::GetAnimationCurve(unsigned int) const
    void GUIAnimationManager::GetAnimationCurve(uint param_1) {
        uint uVar1;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;

        this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(**(code**)(field_0 + 24))();
        uVar1 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        if (uVar1 <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("id < (uint)configAnimationCurves.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimationManager.cpp",
                      58, (char*)0);
        }
        Array<GUIAnimationCurve, eastl::allocator>::operator[]((Array<GUIAnimationCurve, eastl::allocator>*)this_00,
                                                               (ulong)param_1);
    }

    // 0x1008f7480, 256 bytes, placed by class name
    // GUIAnimationManager::MainDraw(float)
    void GUIAnimationManager::MainDraw(float param_1) {
        undefined1* this_00;
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        TemporaryAnimationData* pTVar4;
        TemporaryAnimationData* pTVar5;
        undefined8* puVar6;
        undefined8* puVar7;

        uVar1 = (&field_15384)->HeapBeginPtr();
        uVar2 = (&field_15384)->end();
        uVar3 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        eastl::copy<GUIAnimationInstance**, eastl::back_insert_iterator<eastl::fixed_vector<
                                                GUIAnimationInstance*, 1024ul, false, eastl::dummy_allocator>>>(
            uVar1, uVar2, uVar3);
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        ProcessFinishedInstances(this);
        this_00 = &field_8;
        uVar1 = this_00->HeapBeginPtr();
        uVar2 = this_00->end();
        pTVar4 = eastl::remove_if<GUIAnimationManager::TemporaryAnimationData*, float->MainDraw()::__4>(uVar1, uVar2);
        pTVar5 = (TemporaryAnimationData*)this_00->end();
        this_00->erase(pTVar4, pTVar5);
        puVar6 = (undefined8*)(&field_848)->HeapBeginPtr();
        puVar7 = (undefined8*)(&field_848)->end();
        for (; puVar6 != puVar7; puVar6 = puVar6 + 1) {
            (*puVar6)->Advance(param_1);
        }
        ProcessScheduledInstances(this, param_1);
    }

    // 0x1008f75c0, 464 bytes, placed by class name
    // GUIAnimationManager::ProcessFinishedInstances()
    void GUIAnimationManager::ProcessFinishedInstances() {
        undefined1* this_00;
        char cVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        GUIAnimationInstance** ppGVar6;
        GUIAnimationInstance** ppGVar7;
        undefined1* this_01;
        function** ppfVar8;
        function** ppfVar9;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        Layout* pLVar10;
        long lVar11;
        Component* local_50;
        GUIAnimationManager* local_48;
        GUIAnimationInstance** local_40;
        Layout* local_38;

        field_15376 = 1;
        ppGVar6 = &field_848;
        puVar2 = (undefined8*)ppGVar6->HeapBeginPtr();
        local_38 = (Layout*)ppGVar6;
        puVar3 = (undefined8*)ppGVar6->end();
        pLVar10 = local_38;
        for (; local_38 = pLVar10, puVar2 != puVar3; puVar2 = puVar2 + 1) {
            cVar1 = (*puVar2)->Finished();
            if ((cVar1 != '\0') && (cVar1 = (*puVar2)->HasOnFinishHook(), cVar1 != '\0')) {
                uVar4 = (*puVar2)->GetLogStreams();
                uVar5 = (*puVar2)->GetScreen();
                (**(code**)(field_0 + 16))(this, uVar4, uVar5);
            }
            pLVar10 = local_38;
        }
        local_48 = this;
        uVar4 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(pLVar10);
        uVar5 = pLVar10->end();
        ppGVar6 = std::stable_partition<GUIAnimationInstance**, GUIAnimationManager::ProcessFinishedInstances()::__5>(
            uVar4, uVar5);
        ppGVar7 = (GUIAnimationInstance**)pLVar10->end();
        local_40 = ppGVar6;
        if (ppGVar6 != ppGVar7) {
            this_00 = &local_48->field_9064;
            this_01 = &local_48->field_816;
            do {
                this_02 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*ppGVar6)->GetScreen();
                local_50 =
                    (Component*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_02);
                pLVar10 = (Layout*)eastl::hash_map<
                    ui::Component*, eastl::vector<GUIAnimationInstance*, BucketAllocatorEASTL>,
                    eastl::hash<ui::Component*>, eastl::equal_to<ui::Component*>,
                    eastl::fixed_hashtable_allocator<130ul, 40ul, 128ul, 8ul, 0ul, true, eastl::allocator>, false>::
                operator[](
                    (hash_map<ui::Component*, eastl::vector<GUIAnimationInstance*, BucketAllocatorEASTL>,
                              eastl::hash<ui::Component*>, eastl::equal_to<ui::Component*>,
                              eastl::fixed_hashtable_allocator<130ul, 40ul, 128ul, 8ul, 0ul, true, eastl::allocator>,
                              false>*)this_00,
                    &local_50);
                lVar11 = pLVar10->size();
                if (lVar11 == 1) {
                    local_50 = (Component*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                        this_02);
                    this_00->erase(&local_50);
                } else {
                    ppfVar8 = (function**)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(pLVar10);
                    ppfVar9 = (function**)pLVar10->end();
                    ppGVar7 = (GUIAnimationInstance**)eastl::find<std::function<bool(input::TextCommand)>**,
                                                                  std::function<bool(input::TextCommand)>*>(
                        ppfVar8, ppfVar9, (function**)ppGVar6);
                    pLVar10->erase(ppGVar7);
                }
                this_01->Destroy(*ppGVar6);
                ppGVar6 = ppGVar6 + 1;
                ppGVar7 = (GUIAnimationInstance**)local_38->end();
            } while (ppGVar6 != ppGVar7);
        }
        pLVar10 = local_38;
        ppGVar6 = (GUIAnimationInstance**)local_38->end();
        pLVar10->erase(local_40, ppGVar6);
        local_48->field_15376 = 0;
    }

    // 0x1008f7840, 240 bytes, placed by class name
    // GUIAnimationManager::ProcessScheduledInstances(float)
    void GUIAnimationManager::ProcessScheduledInstances(float param_1) {
        undefined1* this_00;
        TestResults* pTVar1;
        TestResults* pTVar2;
        GUIAnimationInstance* this_01;
        undefined8 uVar3;
        undefined8 uVar4;
        ScheduledInstance* pSVar5;
        ScheduledInstance* pSVar6;
        float fVar7;

        this_00 = &field_16432;
        pTVar1 = (TestResults*)this_00->HeapBeginPtr();
        pTVar2 = (TestResults*)this_00->end();
        for (; pTVar1 != pTVar2; pTVar1 = (TestResults*)&pTVar1[1].field_28) {
            fVar7 = *(float*)&pTVar1[1].field_24 + param_1;
            *(float*)&pTVar1[1].field_24 = fVar7;
            if (0.0 <= fVar7) {
                eastl::function<void(testframework::TestResults_const&, eastl::string&)>::operator()(
                    (function<void(testframework::TestResults_const&, eastl::string&)>*)&pTVar1->field_32, pTVar1,
                    (basic_string*)&pTVar1->field_16);
                this_01 = (GUIAnimationInstance*)PlayImpl(this, (shared_ptr*)pTVar1, (shared_ptr*)&pTVar1->field_16,
                                                          *(float*)&pTVar1[1].field_20, 0.0, 1, 0.0, false, (Hook*)0);
                this_01->Advance(*(float*)&pTVar1[1].field_24);
            }
        }
        uVar3 = this_00->HeapBeginPtr();
        uVar4 = this_00->end();
        pSVar5 = eastl::partition<GUIAnimationManager::ScheduledInstance*, float->ProcessScheduledInstances()::__6>(
            uVar3, uVar4);
        pSVar6 = (ScheduledInstance*)this_00->end();
        this_00->erase(pSVar5, pSVar6);
    }

    // 0x1008f7930, 96 bytes, placed by class name
    // GUIAnimationManager::KillAll(GUIAnimationKillBehaviour)
    void GUIAnimationManager::KillAll(undefined1 param_2) {
        undefined8* puVar1;
        undefined8* puVar2;

        puVar1 = (undefined8*)(&field_848)->HeapBeginPtr();
        puVar2 = (undefined8*)(&field_848)->end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
            (*puVar1)->Kill(param_2);
        }
    }

    // 0x1008f7990, 272 bytes, placed by class name
    // GUIAnimationManager::SchedulePlay(GUIAnimationManager::TemporaryAnimationData&, shared_ptr<ui::Component> const&, float, float, eastl::function<void (shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&)>&&)
    void GUIAnimationManager::SchedulePlay(TemporaryAnimationData* param_1, shared_ptr* param_2, float param_3,
                                           float param_4, function* param_5) {
        ScheduledInstance* this_00;

        if (!eastl::function::operator_cast_to_bool(param_5)) {
            /* WARNING: Subroutine does not return */
            LogAssert("playCallback",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimationManager.cpp",
                      97, (char*)0);
        }
        if (param_4 <= 0.0) {
            /* WARNING: Subroutine does not return */
            LogAssert("startDelay > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimationManager.cpp",
                      98, (char*)0);
        }
        if (param_3 <= 0.0) {
            /* WARNING: Subroutine does not return */
            LogAssert("duration > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/gui/"
                      "animations/GUIAnimationManager.cpp",
                      99, (char*)0);
        }
        this_00 = eastl::vector<GUIAnimationManager::ScheduledInstance,
                                eastl::fixed_vector_allocator<72ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
            emplace_back<>(
                (vector<GUIAnimationManager::ScheduledInstance,
                        eastl::fixed_vector_allocator<72ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)&field_16432);
        shared_ptr<GUIAnimation>::operator=((shared_ptr<GUIAnimation>*)this_00, (shared_ptr*)&param_1->field_8);
        shared_ptr<ui::Component>::operator=((shared_ptr<ui::Component>*)&this_00->field_16, param_2);
        eastl::function<void(shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&)>::operator=(
            (function<void(shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&)>*)&this_00->field_32,
            param_5);
        *(float*)&this_00->field_64 = param_3;
        *(float*)((long)&this_00->field_64 + 4) = -param_4;
    }

    // 0x1008f7bb0, 16 bytes, placed by class name
    // GUIAnimationManager::Play(shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&, float, float, unsigned int, float, bool)
    void GUIAnimationManager::Play(shared_ptr* param_1, shared_ptr* param_2, float param_3, float param_4, uint param_5,
                                   float param_6, bool param_7) {
        PlayImpl(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, (Hook*)0);
    }

    // 0x1008f7bc0, 560 bytes, placed by class name
    // GUIAnimationManager::PlayImpl(shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&, float, float, unsigned int, float, bool, game::Hook*)
    /* WARNING: Removing unreachable block (ram,4304370904) */
    /* WARNING: Removing unreachable block (ram,4304370968) */
    /* GUIAnimationManager::PlayImpl(shared_ptr<GUIAnimation> const&,
   shared_ptr<ui::Component> const&, float, float, unsigned int, float, bool,
   game::Hook*) */

    GUIAnimationInstance* GUIAnimationManager::PlayImpl(shared_ptr* param_1, shared_ptr* param_2, float param_3,
                                                        float param_4, uint param_5, float param_6, bool param_7,
                                                        Hook* param_8) {
        char cVar2;
        int iVar4;
        long lVar5;
        undefined8* puVar6;
        undefined8* puVar7;
        vector* this_00;
        shared_ptr* extraout_RDX;
        Layout* this_01;
        shared_ptr* psVar8;
        undefined7 in_register_00000081;
        GUIAnimationInstance* this_02;
        GUIAnimationInstance* local_80[3];
        float local_5c;
        Layout* local_50;
        shared_ptr* local_48;
        float local_40;
        float local_3c;
        uint local_38;
        float local_34;

        local_5c = (float)CONCAT71(in_register_00000081, param_7);
        psVar8 = (shared_ptr*)&field_9064;
        local_40 = param_3;
        local_3c = param_4;
        local_38 = param_5;
        local_34 = param_6;
        param_2->end();
        this_02 = (GUIAnimationInstance*)local_80;
        eastl::hash_map<ui::Component*, eastl::vector<GUIAnimationInstance*, BucketAllocatorEASTL>,
                        eastl::hash<ui::Component*>, eastl::equal_to<ui::Component*>,
                        eastl::fixed_hashtable_allocator<130ul, 40ul, 128ul, 8ul, 0ul, true, eastl::allocator>,
                        false>::insert((Component**)this_02);
        lVar5 = this_02->HeapBeginPtr();
        this_01 = (Layout*)(lVar5 + 8);
        cVar2 = param_1->unique();
        if (cVar2 == '\0') {
            local_48 = param_2;
            puVar6 = (undefined8*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_01);
            local_50 = this_01;
            puVar7 = (undefined8*)this_01->end();
            iVar4 = 2;
            if (puVar6 == puVar7) {
            LAB_1008f7d1d:
                this_01 = local_50;
                param_2 = local_48;
                this = (GUIAnimationManager*)this;
                if (iVar4 != 2) {
                    return this_02;
                }
            } else {
                do {
                    this_00 = (*puVar6)->SSOBeginPtr(psVar8);
                    psVar8 = param_1;
                    if (operator==((jag*)this_00, param_1, extraout_RDX)) {
                        if (local_5c._0_1_ == '\0') {
                            GUIAnimationInstance::Kill();
                            iVar4 = 2;
                        } else {
                            (*puVar6)->Restart(local_40, local_3c, local_38, local_34);
                            if (param_8 != (Hook*)0) {
                                (*puVar6)->SetOnFinishHook(param_8);
                            }
                            this_02 = (GUIAnimationInstance*)*puVar6;
                            iVar4 = 1;
                        }
                        goto LAB_1008f7d1d;
                    }
                    puVar6 = puVar6 + 1;
                } while (puVar6 != puVar7);
                this_01 = local_50;
                param_2 = local_48;
                this = (GUIAnimationManager*)this;
            }
        }
        if (param_8 == (Hook*)0) {
            local_80[0] =
                FastPool<GUIAnimationInstance,
                         int>::Create<shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&, float&, float&,
                                      unsigned int&, float&>((FastPool<GUIAnimationInstance, int>*)&field_816, param_1,
                                                             param_2, &local_40, &local_3c, &local_38, &local_34);
        } else {
            local_80[0] = FastPool<GUIAnimationInstance, int>::Create<shared_ptr<GUIAnimation> const&,
                                                                      shared_ptr<ui::Component> const&, float&, float&,
                                                                      unsigned int&, float&, game::Hook>(
                (FastPool<GUIAnimationInstance, int>*)&field_816, param_1, param_2, &local_40, &local_3c, &local_38,
                &local_34, param_8);
        }
        if (field_15376 == '\0') {
            eastl::fixed_vector<GUIAnimationInstance*, 1024ul, false, eastl::dummy_allocator>::push_back(&field_848);
        } else {
            eastl::fixed_vector<GUIAnimationInstance*, 128ul, false, eastl::dummy_allocator>::push_back(&field_15384);
        }
        this_01->push_back(local_80);
        local_80[0]->Start();
        return local_80[0];
    }

    // 0x1008f7df0, 16 bytes, placed by class name
    // GUIAnimationManager::Play(shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&, float, float, unsigned int, float, bool, game::Hook&&)
    void GUIAnimationManager::Play(shared_ptr* param_1, shared_ptr* param_2, float param_3, float param_4, uint param_5,
                                   float param_6, bool param_7, Hook* param_8) {
        PlayImpl(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
    }

    // 0x1008f7e00, 208 bytes, placed by class name
    // GUIAnimationManager::Kill(shared_ptr<ui::Component> const&, shared_ptr<GUIAnimation> const&, GUIAnimationKillBehaviour)
    void GUIAnimationManager::Kill(undefined8 param_1_00,
                                   vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* param_1,
                                   shared_ptr* param_2, undefined1 param_4) {
        bool bVar1;
        long lVar2;
        undefined8* puVar3;
        undefined8* puVar4;
        vector* this;
        hashtable_iterator_base* extraout_RDX;
        shared_ptr* extraout_RDX_00;
        shared_ptr* psVar5;
        eastl local_50[16];
        shared_ptr local_40;

        local_40._0_8_ = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(param_1);
        eastl::hashtable<ui::Component*,
                         eastl::pair<ui::Component* const, eastl::vector<GUIAnimationInstance*, BucketAllocatorEASTL>>,
                         eastl::fixed_hashtable_allocator<130ul, 40ul, 128ul, 8ul, 0ul, true, eastl::allocator>,
                         eastl::use_first<eastl::pair<ui::Component* const,
                                                      eastl::vector<GUIAnimationInstance*, BucketAllocatorEASTL>>>,
                         eastl::equal_to<ui::Component*>, eastl::hash<ui::Component*>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((Component**)
                                                                                                              local_50);
        psVar5 = &local_40;
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator!=(local_50, (hashtable_iterator_base*)psVar5, extraout_RDX);
        if (bVar1) {
            lVar2 = local_50->HeapBeginPtr();
            puVar3 = (undefined8*)((lVar2 + 8))->HeapBeginPtr();
            puVar4 = (undefined8*)((lVar2 + 8))->end();
            for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
                this = (*puVar3)->SSOBeginPtr(psVar5);
                psVar5 = param_2;
                bVar1 = operator==((jag*)this, param_2, extraout_RDX_00);
                if (bVar1) {
                    (*puVar3)->Kill(param_4);
                    return;
                }
            }
        }
    }

    // 0x1008f7f60, 192 bytes, placed by class name
    // GUIAnimationManager::KillAll(shared_ptr<ui::Component> const&, GUIAnimationKillBehaviour)
    void GUIAnimationManager::KillAll(undefined8 param_1_00,
                                      vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* param_1,
                                      undefined1 param_3) {
        long lVar1;
        undefined8* puVar3;
        hashtable_iterator_base* extraout_RDX;
        undefined8* puVar4;
        eastl local_48[16];
        undefined8 local_38[2];

        local_38[0] = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(param_1);
        eastl::hashtable<ui::Component*,
                         eastl::pair<ui::Component* const, eastl::vector<GUIAnimationInstance*, BucketAllocatorEASTL>>,
                         eastl::fixed_hashtable_allocator<130ul, 40ul, 128ul, 8ul, 0ul, true, eastl::allocator>,
                         eastl::use_first<eastl::pair<ui::Component* const,
                                                      eastl::vector<GUIAnimationInstance*, BucketAllocatorEASTL>>>,
                         eastl::equal_to<ui::Component*>, eastl::hash<ui::Component*>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((Component**)
                                                                                                              local_48);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_48, (hashtable_iterator_base*)local_38, extraout_RDX)) {
            lVar1 = local_48->HeapBeginPtr();
            puVar4 = (undefined8*)((lVar1 + 8))->HeapBeginPtr();
            puVar3 = (undefined8*)((lVar1 + 8))->end();
            for (; puVar4 != puVar3; puVar4 = puVar4 + 1) {
                (*puVar4)->Kill(param_3);
            }
        }
    }

    // 0x1008f8020, 208 bytes, placed by class name
    // GUIAnimationManager::Restart(shared_ptr<ui::Component> const&, shared_ptr<GUIAnimation> const&, unsigned int)
    void GUIAnimationManager::Restart(shared_ptr* param_1, shared_ptr* param_2, uint param_3) {
        bool bVar1;
        long lVar2;
        undefined8* puVar3;
        undefined8* puVar4;
        vector* this_00;
        hashtable_iterator_base* extraout_RDX;
        shared_ptr* extraout_RDX_00;
        shared_ptr* psVar5;
        eastl local_50[16];
        shared_ptr local_40;

        local_40._0_8_ = param_1->end();
        eastl::hashtable<ui::Component*,
                         eastl::pair<ui::Component* const, eastl::vector<GUIAnimationInstance*, BucketAllocatorEASTL>>,
                         eastl::fixed_hashtable_allocator<130ul, 40ul, 128ul, 8ul, 0ul, true, eastl::allocator>,
                         eastl::use_first<eastl::pair<ui::Component* const,
                                                      eastl::vector<GUIAnimationInstance*, BucketAllocatorEASTL>>>,
                         eastl::equal_to<ui::Component*>, eastl::hash<ui::Component*>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((Component**)
                                                                                                              local_50);
        psVar5 = &local_40;
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator!=(local_50, (hashtable_iterator_base*)psVar5, extraout_RDX);
        if (bVar1) {
            lVar2 = local_50->HeapBeginPtr();
            puVar3 = (undefined8*)((lVar2 + 8))->HeapBeginPtr();
            puVar4 = (undefined8*)((lVar2 + 8))->end();
            for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
                this_00 = (*puVar3)->SSOBeginPtr(psVar5);
                psVar5 = param_2;
                bVar1 = operator==((jag*)this_00, param_2, extraout_RDX_00);
                if (bVar1) {
                    (*puVar3)->Restart(param_3);
                    return;
                }
            }
        }
    }

    // 0x1008f80f0, 192 bytes, placed by class name
    // GUIAnimationManager::RestartAll(shared_ptr<ui::Component> const&, unsigned int)
    void GUIAnimationManager::RestartAll(shared_ptr* param_1, uint param_2) {
        long lVar1;
        undefined8* puVar3;
        hashtable_iterator_base* extraout_RDX;
        undefined8* puVar4;
        eastl local_48[16];
        undefined8 local_38[2];

        local_38[0] = param_1->end();
        eastl::hashtable<ui::Component*,
                         eastl::pair<ui::Component* const, eastl::vector<GUIAnimationInstance*, BucketAllocatorEASTL>>,
                         eastl::fixed_hashtable_allocator<130ul, 40ul, 128ul, 8ul, 0ul, true, eastl::allocator>,
                         eastl::use_first<eastl::pair<ui::Component* const,
                                                      eastl::vector<GUIAnimationInstance*, BucketAllocatorEASTL>>>,
                         eastl::equal_to<ui::Component*>, eastl::hash<ui::Component*>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((Component**)
                                                                                                              local_48);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_48, (hashtable_iterator_base*)local_38, extraout_RDX)) {
            lVar1 = local_48->HeapBeginPtr();
            puVar4 = (undefined8*)((lVar1 + 8))->HeapBeginPtr();
            puVar3 = (undefined8*)((lVar1 + 8))->end();
            for (; puVar4 != puVar3; puVar4 = puVar4 + 1) {
                (*puVar4)->Restart(param_2);
            }
        }
    }

    // 0x10090f5d0, 16 bytes, placed by class name
    // GUIAnimationManager::GetAnimation(unsigned int) const::$_3::operator()(GUIAnimationManager::TemporaryAnimationData const&, unsigned int) const
    /* GUIAnimationManager::GetAnimation(unsigned int)
   const::$_3::TEMPNAMEPLACEHOLDERVALUE(GUIAnimationManager::TemporaryAnimationData
   const&, unsigned int) const */

    _func_GetAnimation_unsigned_int* const ::$_3::operator()(TemporaryAnimationData * param_1, uint param_2) {
        undefined7 in_register_00000001;

        return (_func_GetAnimation_unsigned_int*)CONCAT71(in_register_00000001, (uint)param_1->field_0 < param_2);
    }

    // 0x10090f770, 16 bytes, placed by class name
    // GUIAnimationManager::MainDraw(float)::$_4::operator()(GUIAnimationManager::TemporaryAnimationData const&) const
    /* GUIAnimationManager::MainDraw(float)::$_4::TEMPNAMEPLACEHOLDERVALUE(GUIAnimationManager::TemporaryAnimationData
   const&) const */

    void GUIAnimationManager::MainDraw(float)::$_4::operator()(TemporaryAnimationData* param_1) {
        ((this + 8))->unique();
    }

    // 0x100910720, 16 bytes, placed by class name
    // GUIAnimationManager::ProcessFinishedInstances()::$_5::operator()(GUIAnimationInstance*) const
    /* GUIAnimationManager::ProcessFinishedInstances()::$_5::TEMPNAMEPLACEHOLDERVALUE(GUIAnimationInstance*)
   const */

    byte GUIAnimationManager::ProcessFinishedInstances()::$_5::operator()(GUIAnimationInstance* param_1) {
        return Finished() ^ 1;
    }

    // 0x1009111d0, 16 bytes, placed by class name
    // GUIAnimationManager::ProcessScheduledInstances(float)::$_6::operator()(GUIAnimationManager::ScheduledInstance const&) const
    /* GUIAnimationManager::ProcessScheduledInstances(float)::$_6::TEMPNAMEPLACEHOLDERVALUE(GUIAnimationManager::ScheduledInstance
   const&) const */

    bool GUIAnimationManager::ProcessScheduledInstances(float)::$_6::operator()(ScheduledInstance* param_1) {
        return *(float*)(this + 68) <= 0.0 && *(float*)(this + 68) != 0.0;
    }

} // namespace jag::graphics
