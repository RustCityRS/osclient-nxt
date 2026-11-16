// libs/game/runetek5/config/seqtype/SeqTypeList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "SeqTypeList.h"

namespace jag::game {
    // 0x1004c5ce0: the linker folded this into VarBitTypeList::GetConfigProvider(), which has identical code
    SeqTypeList::GetSeqGroupTypeList() const;

    // 0x1004df340, 368 bytes, placed by class name and debug map
    // SeqTypeList::GetKeyFrameset(int)
    SeqTypeList* SeqTypeList::GetKeyFrameset(int param_1) {
        LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>* this_00;
        char cVar1;
        shared_ptr* psVar2;
        long lVar3;
        AnimKeyFrameSet* pAVar4;
        Layout* this_01;
        ulong uVar5;
        int in_EDX;
        undefined4 in_register_00000034;
        Js5ArchiveSettings* in_R9;
        shared_ptr local_50;
        shared_ptr local_40;
        int local_2c;

        this_00 = (LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false,
                                unsigned long long>*)(CONCAT44(in_register_00000034, param_1) + 120);
        local_50._0_8_ = SEXT48(in_EDX);
        local_2c = in_EDX;
        psVar2 = (shared_ptr*)LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>::Find(
            (ulonglong*)this_00);
        new (&local_40) shared_ptr<oldscape::dash3d::Decor>(psVar2);
        lVar3 = local_40.end();
        if (lVar3 == 0) {
            MakeSharedPool<graphics::AnimKeyFrameSet, 128>::MakeShared<int&, Js5ResourceProvider&, Js5ArchiveSettings&,
                                                                       Js5ArchiveSettings&>(
                &local_50, (MakeSharedPool<graphics::AnimKeyFrameSet, 128>*)&local_2c,
                *(int**)(CONCAT44(in_register_00000034, param_1) + 64), Js5Archive::JS5_BASES,
                Js5Archive::JS5_KEYFRAMES, in_R9);
            shared_ptr<graphics::AnimKeyFrameSet>::operator=((shared_ptr<graphics::AnimKeyFrameSet>*)&local_40,
                                                             &local_50);
            local_50.~shared_ptr();
            local_50._0_8_ = SEXT48(local_2c);
            this_00->Put(&local_40, 1, (ulonglong*)&local_50);
        } else {
            pAVar4 = (AnimKeyFrameSet*)shared_ptr<graphics::AnimKeyFrameSet>::operator->(
                (shared_ptr<graphics::AnimKeyFrameSet>*)&local_40);
            cVar1 = pAVar4->IsLoaded();
            if (cVar1 != '\0') {
                shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider,
                                                                            void>(
                    (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, &local_40);
                goto LAB_1004df46f;
            }
        }
        this_01 = (Layout*)shared_ptr<graphics::AnimKeyFrameSet>::operator->(
            (shared_ptr<graphics::AnimKeyFrameSet>*)&local_40);
        uVar5 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_01);
        lVar3 = FrameTime::GetCurrentTimeMS();
        if (uVar5 < lVar3 - 5U) {
            pAVar4 = (AnimKeyFrameSet*)shared_ptr<graphics::AnimKeyFrameSet>::operator->(
                (shared_ptr<graphics::AnimKeyFrameSet>*)&local_40);
            cVar1 = pAVar4->Load();
            if (cVar1 == '\0') {
                new (this)
                    shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)&graphics::AnimKeyFrameSet::NullAnimKeyFrameset);
            } else {
                shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider,
                                                                            void>(
                    (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, &local_40);
            }
        } else {
            new (this)
                shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)&graphics::AnimKeyFrameSet::NullAnimKeyFrameset);
        }
    LAB_1004df46f:
        local_40.~shared_ptr();
        return this;
    }

    // 0x1004df6f0, 160 bytes, placed by class name and debug map
    // SeqTypeList::GetFrame(unsigned int)
    SeqTypeList* SeqTypeList::GetFrame(uint param_1) {
        long lVar1;
        NXTPixToolkit* this_00;
        Array<shared_ptr<graphics::AnimationFrameRT5>, eastl::allocator>* this_01;
        shared_ptr* psVar2;
        uint in_EDX;
        shared_ptr<graphics::AnimFrameset> local_30[16];

        GetFrameset((SeqTypeList*)local_30, param_1);
        lVar1 = local_30->end();
        if (lVar1 == 0) {
            new (this) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)&graphics::AnimationFrameRT5::NullAnimFrame);
        } else {
            this_00 = (NXTPixToolkit*)shared_ptr<graphics::AnimFrameset>::operator->(local_30);
            this_01 = (Array<shared_ptr<graphics::AnimationFrameRT5>, eastl::allocator>*)this_00->GetScreen();
            psVar2 = (shared_ptr*)Array<shared_ptr<graphics::AnimationFrameRT5>, eastl::allocator>::operator[](
                this_01, (ulong)in_EDX & 65535);
            new (this) shared_ptr<oldscape::dash3d::Decor>(psVar2);
        }
        local_30->~shared_ptr();
        return this;
    }

    // 0x1004dfd50, 384 bytes, placed by class name and debug map
    // SeqTypeList::GetFrameset(int)
    SeqTypeList* SeqTypeList::GetFrameset(int param_1) {
        LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>* this_00;
        char cVar1;
        shared_ptr* psVar2;
        long lVar3;
        WorldmapRenderer* this_01;
        Layout* this_02;
        ulong uVar4;
        AnimFrameset* this_03;
        int in_EDX;
        undefined4 in_register_00000034;
        Js5ArchiveSettings* in_R9;
        shared_ptr local_50;
        shared_ptr local_40;
        int local_2c;

        this_00 =
            (LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>*)(CONCAT44(
                                                                                                 in_register_00000034,
                                                                                                 param_1) +
                                                                                             20856);
        local_50._0_8_ = SEXT48(in_EDX);
        local_2c = in_EDX;
        psVar2 = (shared_ptr*)LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>::Find(
            (ulonglong*)this_00);
        new (&local_40) shared_ptr<oldscape::dash3d::Decor>(psVar2);
        lVar3 = local_40.end();
        if (lVar3 == 0) {
            MakeSharedPool<graphics::AnimFrameset, 256>::MakeShared<int&, Js5ResourceProvider&, Js5ArchiveSettings&,
                                                                    Js5ArchiveSettings&>(
                &local_50, (MakeSharedPool<graphics::AnimFrameset, 256>*)&local_2c,
                *(int**)(CONCAT44(in_register_00000034, param_1) + 64), Js5Archive::JS5_BASES, Js5Archive::JS5_ANIMSRT7,
                in_R9);
            shared_ptr<graphics::AnimFrameset>::operator=((shared_ptr<graphics::AnimFrameset>*)&local_40, &local_50);
            local_50.~shared_ptr();
            local_50._0_8_ = SEXT48(local_2c);
            this_00->Put(&local_40, 1, (ulonglong*)&local_50);
        } else {
            this_01 = (WorldmapRenderer*)shared_ptr<graphics::AnimFrameset>::operator->(
                (shared_ptr<graphics::AnimFrameset>*)&local_40);
            cVar1 = this_01->IsValid();
            if (cVar1 != '\0') {
                shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider,
                                                                            void>(
                    (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, &local_40);
                goto LAB_1004dfe82;
            }
        }
        this_02 =
            (Layout*)shared_ptr<graphics::AnimFrameset>::operator->((shared_ptr<graphics::AnimFrameset>*)&local_40);
        uVar4 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_02);
        lVar3 = FrameTime::GetCurrentTimeMS();
        if (uVar4 < lVar3 - 5U) {
            this_03 = (AnimFrameset*)shared_ptr<graphics::AnimFrameset>::operator->(
                (shared_ptr<graphics::AnimFrameset>*)&local_40);
            cVar1 = this_03->Load();
            if (cVar1 == '\0') {
                new (this) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)&graphics::AnimFrameset::NullAnimFrameset);
            } else {
                shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider,
                                                                            void>(
                    (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, &local_40);
            }
        } else {
            new (this) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)&graphics::AnimFrameset::NullAnimFrameset);
        }
    LAB_1004dfe82:
        local_40.~shared_ptr();
        return this;
    }

    // 0x1004e00d0, 176 bytes, base-object constructor, placed by class name and debug map
    // SeqTypeList::SeqTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, SeqGroupTypeList&)
    void SeqTypeList::SeqTypeList() {
        undefined8 in_R9;

        BaseTemplateConfigTypeList<SeqType>::BaseTemplateConfigTypeList();
        field_0 = PTR_vtable_100ee7ef8 + 16;
        field_112 = in_R9;
        new (&field_120, 256, "KeyFrameSeqTypeList")
            LRUHashCache<graphics::AnimKeyFrameSet, 256ul, 257ul, false, unsigned long long>();
        new (&field_20856, 256, "SeqTypeList")
            LRUHashCache<graphics::AnimFrameset, 256ul, 257ul, false, unsigned long long>();
    }

    // 0x1004e0320, 16 bytes, complete-object constructor, placed by class name and debug map
    // SeqTypeList::SeqTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, SeqGroupTypeList&): jumps straight to the base-object constructor

} // namespace jag::game

namespace jag {
    // 0x1004dfb20, 208 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::BuildAnimationMain>::type bucket_make_shared<game::BuildAnimationMain, int, shared_ptr<graphics::Animation>&, Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>, Array<unsigned int, eastl::allocator>&, shared_ptr<graphics::Model> const&, shared_ptr<graphics::AnimKeyFrameSet>&>(int&&, shared_ptr<graphics::Animation>&, Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>&&, Array<unsigned int, eastl::allocator>&, shared_ptr<graphics::Model> const&, shared_ptr<graphics::AnimKeyFrameSet>&)
    jag* jag::bucket_make_shared<game::BuildAnimationMain, int, shared_ptr<graphics::Animation>&,
                                 Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>,
                                 Array<unsigned int, eastl::allocator>&, shared_ptr<graphics::Model> const&,
                                 shared_ptr<graphics::AnimKeyFrameSet>&>(int* param_1, shared_ptr* param_2,
                                                                         Array* param_3, Array* param_4,
                                                                         shared_ptr* param_5, shared_ptr* param_6) {
        BucketRefCounter* pBVar1;
        managed_ptr_counter_and_data* local_48;
        BuildAnimationMain* local_40[2];

        local_48 = (managed_ptr_counter_and_data*)BucketManager::Allocate(160, 0, 16);
        if (local_48 == (managed_ptr_counter_and_data*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_40[0] = placement_new<game::BuildAnimationMain, int, shared_ptr<graphics::Animation>&,
                                        Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>,
                                        Array<unsigned int, eastl::allocator>&, shared_ptr<graphics::Model> const&,
                                        shared_ptr<graphics::AnimKeyFrameSet>&>(local_48 + 48, param_1, param_2,
                                                                                param_3, param_4, param_5, param_6);
            pBVar1 = placement_new<
                BucketRefCounter<game::BuildAnimationMain>,
                managed_ptr_counter_and_data<BucketRefCounter<game::BuildAnimationMain>, game::BuildAnimationMain>*&,
                game::BuildAnimationMain*&>(local_48, &local_48, local_40);
            pBVar1->~AutoSingleton(local_40[0]);
            pBVar1->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(pBVar1, local_40[0]);
        }
        return this;
    }

} // namespace jag
