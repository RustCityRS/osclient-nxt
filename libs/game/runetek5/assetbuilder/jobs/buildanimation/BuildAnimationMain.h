// libs/game/runetek5/assetbuilder/jobs/buildanimation/BuildAnimationMain.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x1004e68a0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::Animation, MakeSharedPool<graphics::Animation, 512> >* placement_new<MakeSharedPoolRefCounter<graphics::Animation, MakeSharedPool<graphics::Animation, 512> >, MakeSharedPool<graphics::Animation, 512>::RefCounterAndData*&, graphics::Animation*>(void*, MakeSharedPool<graphics::Animation, 512>::RefCounterAndData*&, graphics::Animation*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<graphics::Animation, MakeSharedPool<graphics::Animation, 512>>,
                       MakeSharedPool<graphics::Animation, 512>::RefCounterAndData*&, graphics::Animation*>(
        void* param_1, RefCounterAndData** param_2, Animation** param_3) {
        MakeSharedPoolRefCounter<graphics::Animation,
                                 MakeSharedPool<graphics::Animation, 512>>::MakeSharedPoolRefCounter(param_1, *param_2,
                                                                                                     *param_3);
        return param_1;
    }

    // 0x1004e6a90, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::Animation, MakeSharedPool<graphics::Animation, 512> >::MakeSharedPoolRefCounter(void*, graphics::Animation*): jumps straight to the base-object constructor

    // 0x1004e6aa0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::Animation, MakeSharedPool<graphics::Animation, 512> >::MakeSharedPoolRefCounter(void*, graphics::Animation*)
    void jag::MakeSharedPoolRefCounter<graphics::Animation, MakeSharedPool<graphics::Animation, 512>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<graphics::Animation, MakeSharedPool<graphics::Animation, 512>>* this,
            void* param_1, Animation* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7c28 + 16;
        *(void**)(this + 16) = param_1;
        *(Animation**)(this + 24) = param_2;
    }

    // 0x1004e6ae0, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::Animation, MakeSharedPool<graphics::Animation, 512> >::DeleteData()
    void jag::MakeSharedPoolRefCounter<graphics::Animation, MakeSharedPool<graphics::Animation, 512>>::DeleteData(
        MakeSharedPoolRefCounter<graphics::Animation, MakeSharedPool<graphics::Animation, 512>>* this) {
        if (*(Animation**)(this + 24) != (Animation*)0) {
            (*(Animation**)(this + 24))->~Animation();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1004e6b10, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::Animation, MakeSharedPool<graphics::Animation, 512> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<graphics::Animation, MakeSharedPool<graphics::Animation, 512>>::DeleteSelf(
        MakeSharedPoolRefCounter<graphics::Animation, MakeSharedPool<graphics::Animation, 512>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<graphics::Animation, 512>::deallocate(pvVar1);
    }

    // 0x1004e7470, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)::$_0>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long, std::__packaged_task_func<std::__bind<game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)::$_0>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<game::SeqType::GetAnimation(game::AssetBuilder&,
   game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int,
   shared_ptr<graphics::Model> const&)::$_0>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long,
   std::__packaged_task_func<std::__bind<game::SeqType::GetAnimation(game::AssetBuilder&,
   game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int,
   shared_ptr<graphics::Model> const&)::$_0>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<game::SeqType::GetAnimation(game::AssetBuilder&,
                                                game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                                unsigned int, shared_ptr<graphics::Model> const&)::$_0>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::allocate(ulong param_1,
                                                                               __packaged_task_func* param_2) {
        BucketManager::Allocate(64, 4, 8);
    }

    // 0x1004e7870, 16 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)::$_0>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<std::__bind<game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)::$_0>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<game::SeqType::GetAnimation(game::AssetBuilder&,
   game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int,
   shared_ptr<graphics::Model> const&)::$_0>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>
   >::deallocate(std::__packaged_task_func<std::__bind<game::SeqType::GetAnimation(game::AssetBuilder&,
   game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int,
   shared_ptr<graphics::Model> const&)::$_0>,
   SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<game::SeqType::GetAnimation(game::AssetBuilder&,
                                                game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                                unsigned int, shared_ptr<graphics::Model> const&)::$_0>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::deallocate(__packaged_task_func* param_1,
                                                                                 ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 << 6);
    }

    // 0x1004e7d10, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::AnimationFrameRT5* placement_new<graphics::AnimationFrameRT5, shared_ptr<graphics::AnimBase> const&, graphics::AnimKeyFrameSet&, WrapArray<WrapArray<graphics::AnimCurveSegmentCacheData> >&, float>(void*, shared_ptr<graphics::AnimBase> const&, graphics::AnimKeyFrameSet&, WrapArray<WrapArray<graphics::AnimCurveSegmentCacheData> >&, float&&)
    AnimationFrameRT5*
    jag::placement_new<graphics::AnimationFrameRT5, shared_ptr<graphics::AnimBase> const&, graphics::AnimKeyFrameSet&,
                       WrapArray<WrapArray<graphics::AnimCurveSegmentCacheData>>&, float>(
        void* param_1, shared_ptr* param_2, AnimKeyFrameSet* param_3, WrapArray* param_4, float* param_5) {
        graphics::AnimationFrameRT5::AnimationFrameRT5(param_1, param_2, param_3, param_4, *param_5);
        return param_1;
    }

    // 0x1004e9df0, 48 bytes, inline, placed by debug map only (low confidence)
    // game::BuildAnimationMain* placement_new<game::BuildAnimationMain, int, shared_ptr<graphics::Animation>&, Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>, Array<unsigned int, eastl::allocator>&, shared_ptr<graphics::Model> const&, shared_ptr<graphics::AnimKeyFrameSet>&>(void*, int&&, shared_ptr<graphics::Animation>&, Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>&&, Array<unsigned int, eastl::allocator>&, shared_ptr<graphics::Model> const&, shared_ptr<graphics::AnimKeyFrameSet>&)
    BuildAnimationMain* jag::placement_new<game::BuildAnimationMain, int, shared_ptr<graphics::Animation>&,
                                           Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>,
                                           Array<unsigned int, eastl::allocator>&, shared_ptr<graphics::Model> const&,
                                           shared_ptr<graphics::AnimKeyFrameSet>&>(void* param_1, int* param_2,
                                                                                   shared_ptr* param_3, Array* param_4,
                                                                                   Array* param_5, shared_ptr* param_6,
                                                                                   shared_ptr* param_7) {
        game::BuildAnimationMain::BuildAnimationMain(param_1, *param_2, param_3, param_4, param_5, param_6, param_7);
        return param_1;
    }

    // 0x1004e9e20, 32 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildAnimationMain>* placement_new<BucketRefCounter<game::BuildAnimationMain>, managed_ptr_counter_and_data<BucketRefCounter<game::BuildAnimationMain>, game::BuildAnimationMain>*&, game::BuildAnimationMain*&>(void*, managed_ptr_counter_and_data<BucketRefCounter<game::BuildAnimationMain>, game::BuildAnimationMain>*&, game::BuildAnimationMain*&)
    BucketRefCounter* jag::placement_new<
        BucketRefCounter<game::BuildAnimationMain>,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildAnimationMain>, game::BuildAnimationMain>*&,
        game::BuildAnimationMain*&>(void* param_1, managed_ptr_counter_and_data** param_2,
                                    BuildAnimationMain** param_3) {
        BucketRefCounter<game::BuildAnimationMain>::BucketRefCounter(param_1, *param_2, *param_3, 0);
        return param_1;
    }

    // 0x1004e9e40, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildAnimationMain>::BucketRefCounter(void*, game::BuildAnimationMain*, unsigned int): jumps straight to the base-object constructor

    // 0x1004e9e50, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildAnimationMain>::BucketRefCounter(void*, game::BuildAnimationMain*, unsigned int)
    void BucketRefCounter<game::BuildAnimationMain>::BucketRefCounter(void* param_1, BuildAnimationMain* param_2,
                                                                      uint param_3) {
        undefined8 uVar1;

        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee70e0 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildAnimationMain**)(this + 24) = param_2;
        uVar1 = this_thread::GetThreadID();
        *(undefined8*)(this + 32) = uVar1;
        *(uint*)(this + 40) = param_3;
    }

    // 0x1004e9eb0, 96 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildAnimationMain>::DeleteSelf()
    void BucketRefCounter<game::BuildAnimationMain>::DeleteSelf() {
        void* pvVar1;

        if (*(int*)(this + 40) != 4) {
            if (this_thread::GetThreadID() != *(long*)(this + 32)) {
                /* WARNING: Subroutine does not return */
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, (char*)0);
            }
        }
        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)(this);
        BucketManager::DeAllocate(pvVar1);
    }

    // 0x1004eb360, 32 bytes, inline, placed by debug map only (low confidence)
    // game::SeqType* placement_new<game::SeqType, game::BaseTemplateConfigTypeList<game::SeqType>*&, int&>(void*, game::BaseTemplateConfigTypeList<game::SeqType>*&, int&)
    /* game::SeqType* placement_new<game::SeqType,
   game::BaseTemplateConfigTypeList<game::SeqType>*&, unsigned int&>(void*,
   game::BaseTemplateConfigTypeList<game::SeqType>*&, unsigned int&) */

    SeqType* jag::placement_new<game::SeqType, game::BaseTemplateConfigTypeList<game::SeqType>*&, unsigned int&>(
        void* param_1, BaseTemplateConfigTypeList** param_2, uint* param_3) {
        game::SeqType::SeqType(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1004eb380, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::SeqType, MakeSharedPool<game::SeqType, 96> >* placement_new<MakeSharedPoolRefCounter<game::SeqType, MakeSharedPool<game::SeqType, 96> >, MakeSharedPool<game::SeqType, 96>::RefCounterAndData*&, game::SeqType*>(void*, MakeSharedPool<game::SeqType, 96>::RefCounterAndData*&, game::SeqType*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::SeqType, MakeSharedPool<game::SeqType, 96>>,
                       MakeSharedPool<game::SeqType, 96>::RefCounterAndData*&, game::SeqType*>(
        void* param_1, RefCounterAndData** param_2, SeqType** param_3) {
        MakeSharedPoolRefCounter<game::SeqType, MakeSharedPool<game::SeqType, 96>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1004eb3a0, 144 bytes, inline, placed by debug map only (low confidence)
    // void shared_ptr_do_enable_shared_from_this<game::SeqType>(ref_counter_base*, game::SeqType*, game::SeqType::enable_shared_type*)
    void shared_ptr_do_enable_shared_from_this<game::SeqType>(ref_counter_base* param_1, SeqType* param_2,
                                                              enable_shared_type* param_3) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48[16];
        weak_ptr<oldscape::dash3d::Decor> local_38[24];

        if (param_1 != (ref_counter_base*)0) {
            param_1->IncRef();
            eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>::hashtable_iterator(
                local_48, (hash_node*)param_1, (hash_node**)param_2);
            weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_38, (weak_ptr*)local_48);
            (&param_2->field_8, (weak_ptr*)local_38)->__internal_set_weak_ptr();
            local_38->~weak_ptr();
            local_48->~shared_ptr();
        }
    }

    // 0x1004ecc50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::SeqType, MakeSharedPool<game::SeqType, 96> >::MakeSharedPoolRefCounter(void*, game::SeqType*): jumps straight to the base-object constructor

    // 0x1004ecc60, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::SeqType, MakeSharedPool<game::SeqType, 96> >::MakeSharedPoolRefCounter(void*, game::SeqType*)
    void MakeSharedPoolRefCounter<game::SeqType, MakeSharedPool<game::SeqType, 96>>::MakeSharedPoolRefCounter(
        MakeSharedPoolRefCounter<game::SeqType, MakeSharedPool<game::SeqType, 96>>* this, void* param_1,
        SeqType* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7b20 + 16;
        *(void**)(this + 16) = param_1;
        *(SeqType**)(this + 24) = param_2;
    }

    // 0x1004ecca0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::SeqType, MakeSharedPool<game::SeqType, 96> >::DeleteSelf()
    void MakeSharedPoolRefCounter<game::SeqType, MakeSharedPool<game::SeqType, 96>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::SeqType, MakeSharedPool<game::SeqType, 96>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::SeqType, 96>::deallocate(pvVar1);
    }

    // 0x1004f0760, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::AnimFrameset* placement_new<graphics::AnimFrameset, int&, Js5ResourceProvider&, Js5ArchiveSettings&, Js5ArchiveSettings&>(void*, int&, Js5ResourceProvider&, Js5ArchiveSettings&, Js5ArchiveSettings&)
    AnimFrameset*
    jag::placement_new<graphics::AnimFrameset, int&, Js5ResourceProvider&, Js5ArchiveSettings&, Js5ArchiveSettings&>(
        void* param_1, int* param_2, Js5ResourceProvider* param_3, Js5ArchiveSettings* param_4,
        Js5ArchiveSettings* param_5) {
        graphics::AnimFrameset::AnimFrameset(param_1, *param_2, param_3, param_4, param_5);
        return param_1;
    }

    // 0x1004f0780, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimFrameset, MakeSharedPool<graphics::AnimFrameset, 256> >* placement_new<MakeSharedPoolRefCounter<graphics::AnimFrameset, MakeSharedPool<graphics::AnimFrameset, 256> >, MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData*&, graphics::AnimFrameset*>(void*, MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData*&, graphics::AnimFrameset*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<graphics::AnimFrameset, MakeSharedPool<graphics::AnimFrameset, 256>>,
                       MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData*&, graphics::AnimFrameset*>(
        void* param_1, RefCounterAndData** param_2, AnimFrameset** param_3) {
        MakeSharedPoolRefCounter<graphics::AnimFrameset,
                                 MakeSharedPool<graphics::AnimFrameset, 256>>::MakeSharedPoolRefCounter(param_1,
                                                                                                        *param_2,
                                                                                                        *param_3);
        return param_1;
    }

    // 0x1004f0970, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimFrameset, MakeSharedPool<graphics::AnimFrameset, 256> >::MakeSharedPoolRefCounter(void*, graphics::AnimFrameset*): jumps straight to the base-object constructor

    // 0x1004f0980, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimFrameset, MakeSharedPool<graphics::AnimFrameset, 256> >::MakeSharedPoolRefCounter(void*, graphics::AnimFrameset*)
    void jag::MakeSharedPoolRefCounter<graphics::AnimFrameset, MakeSharedPool<graphics::AnimFrameset, 256>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<graphics::AnimFrameset, MakeSharedPool<graphics::AnimFrameset, 256>>* this,
            void* param_1, AnimFrameset* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7ba8 + 16;
        *(void**)(this + 16) = param_1;
        *(AnimFrameset**)(this + 24) = param_2;
    }

    // 0x1004f09c0, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimFrameset, MakeSharedPool<graphics::AnimFrameset, 256> >::DeleteData()
    void jag::MakeSharedPoolRefCounter<graphics::AnimFrameset, MakeSharedPool<graphics::AnimFrameset, 256>>::DeleteData(
        MakeSharedPoolRefCounter<graphics::AnimFrameset, MakeSharedPool<graphics::AnimFrameset, 256>>* this) {
        if (*(AnimFrameset**)(this + 24) != (AnimFrameset*)0) {
            (*(AnimFrameset**)(this + 24))->~AnimFrameset();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1004f09f0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimFrameset, MakeSharedPool<graphics::AnimFrameset, 256> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<graphics::AnimFrameset, MakeSharedPool<graphics::AnimFrameset, 256>>::DeleteSelf(
        MakeSharedPoolRefCounter<graphics::AnimFrameset, MakeSharedPool<graphics::AnimFrameset, 256>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<graphics::AnimFrameset, 256>::deallocate(pvVar1);
    }

    // 0x1004f0fc0, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::AnimKeyFrameSet* placement_new<graphics::AnimKeyFrameSet, int&, Js5ResourceProvider&, Js5ArchiveSettings&, Js5ArchiveSettings&>(void*, int&, Js5ResourceProvider&, Js5ArchiveSettings&, Js5ArchiveSettings&)
    AnimKeyFrameSet*
    jag::placement_new<graphics::AnimKeyFrameSet, int&, Js5ResourceProvider&, Js5ArchiveSettings&, Js5ArchiveSettings&>(
        void* param_1, int* param_2, Js5ResourceProvider* param_3, Js5ArchiveSettings* param_4,
        Js5ArchiveSettings* param_5) {
        graphics::AnimKeyFrameSet::AnimKeyFrameSet(param_1, *param_2, param_3, param_4, param_5);
        return param_1;
    }

    // 0x1004f0fe0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimKeyFrameSet, MakeSharedPool<graphics::AnimKeyFrameSet, 128> >* placement_new<MakeSharedPoolRefCounter<graphics::AnimKeyFrameSet, MakeSharedPool<graphics::AnimKeyFrameSet, 128> >, MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData*&, graphics::AnimKeyFrameSet*>(void*, MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData*&, graphics::AnimKeyFrameSet*&&)
    MakeSharedPoolRefCounter* jag::placement_new<
        MakeSharedPoolRefCounter<graphics::AnimKeyFrameSet, MakeSharedPool<graphics::AnimKeyFrameSet, 128>>,
        MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData*&, graphics::AnimKeyFrameSet*>(
        void* param_1, RefCounterAndData** param_2, AnimKeyFrameSet** param_3) {
        MakeSharedPoolRefCounter<graphics::AnimKeyFrameSet,
                                 MakeSharedPool<graphics::AnimKeyFrameSet, 128>>::MakeSharedPoolRefCounter(param_1,
                                                                                                           *param_2,
                                                                                                           *param_3);
        return param_1;
    }

    // 0x1004f11d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimKeyFrameSet, MakeSharedPool<graphics::AnimKeyFrameSet, 128> >::MakeSharedPoolRefCounter(void*, graphics::AnimKeyFrameSet*): jumps straight to the base-object constructor

    // 0x1004f11e0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimKeyFrameSet, MakeSharedPool<graphics::AnimKeyFrameSet, 128> >::MakeSharedPoolRefCounter(void*, graphics::AnimKeyFrameSet*)
    void jag::MakeSharedPoolRefCounter<graphics::AnimKeyFrameSet, MakeSharedPool<graphics::AnimKeyFrameSet, 128>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<graphics::AnimKeyFrameSet, MakeSharedPool<graphics::AnimKeyFrameSet, 128>>* this,
            void* param_1, AnimKeyFrameSet* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7bd0 + 16;
        *(void**)(this + 16) = param_1;
        *(AnimKeyFrameSet**)(this + 24) = param_2;
    }

    // 0x1004f1220, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimKeyFrameSet, MakeSharedPool<graphics::AnimKeyFrameSet, 128> >::DeleteData()
    void jag::MakeSharedPoolRefCounter<graphics::AnimKeyFrameSet, MakeSharedPool<graphics::AnimKeyFrameSet, 128>>::
        DeleteData(
            MakeSharedPoolRefCounter<graphics::AnimKeyFrameSet, MakeSharedPool<graphics::AnimKeyFrameSet, 128>>* this) {
        if (*(AnimKeyFrameSet**)(this + 24) != (AnimKeyFrameSet*)0) {
            (*(AnimKeyFrameSet**)(this + 24))->~AnimKeyFrameSet();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1004f1250, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimKeyFrameSet, MakeSharedPool<graphics::AnimKeyFrameSet, 128> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<graphics::AnimKeyFrameSet, MakeSharedPool<graphics::AnimKeyFrameSet, 128>>::
        DeleteSelf(
            MakeSharedPoolRefCounter<graphics::AnimKeyFrameSet, MakeSharedPool<graphics::AnimKeyFrameSet, 128>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<graphics::AnimKeyFrameSet, 128>::deallocate(pvVar1);
    }

} // namespace jag

namespace jag::game {
    class BuildAnimationMain : public AssetJob // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~BuildAnimationMain();
        virtual RunFirst(Js5ResourceProvider*, ConfigProvider*);
        virtual BuildAnimationMain* CreateWorker();
        virtual DecodeResult(shared_ptr<void> const&);
        virtual shared_ptr GetRequestData();
        shared_ptr GetConstructedAsset() const;
        IsAssetConstructed() const;
        BuildAnimationMain(int, shared_ptr<graphics::Animation> const&,
                           Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>&&,
                           Array<unsigned int, eastl::allocator> const&, shared_ptr<graphics::Model> const&,
                           shared_ptr<graphics::AnimKeyFrameSet> const&);
        void PostDecodeResultSetup(BuildAnimationResultData&);

        // data members, from how the methods use this: 112 bytes, the first 72 are AssetJob
        char _unknown_72[8];
        shared_ptr m_constructedAsset; // offset 80
        shared_ptr m_requestData;      // offset 96
    };

    // 0x1004e59c0, 64 bytes, inline, placed by class name and debug map
    // BuildAnimationMain::IsAssetConstructed() const
    undefined8 BuildAnimationMain::IsAssetConstructed() {
        Skybox* this_00;
        undefined8 uVar2;

        if (m_constructedAsset->operator_cast_to_bool()) {
            this_00 = (Skybox*)shared_ptr<graphics::Animation>::operator->(
                (shared_ptr<graphics::Animation>*)m_constructedAsset);
            uVar2 = this_00->ShowSkybox();
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x10064f1e0, 16 bytes, complete-object destructor, inline, placed by class name
    // BuildAnimationMain::~BuildAnimationMain(): jumps straight to the base-object destructor

    // 0x10064f1f0, 32 bytes, deleting destructor, inline, placed by class name
    // BuildAnimationMain::~BuildAnimationMain()
    void BuildAnimationMain::~BuildAnimationMain() {
        ~BuildAnimationMain(this);
        operator_delete(this);
    }

    // 0x10064f330, 64 bytes, base-object destructor, inline, placed by class name
    // BuildAnimationMain::~BuildAnimationMain()
    void BuildAnimationMain::~BuildAnimationMain() {
        field_0 = &PTR__BuildAnimationMain_100f0d798;
        m_requestData->~shared_ptr();
        m_constructedAsset->~shared_ptr();
        ~AssetJob();
    }

} // namespace jag::game
