// libs/game/runetek5/assetbuilder/jobs/buildanimation/BuildAnimationMain.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x1004e68a0
    MakeSharedPoolRefCounter<graphics::Animation, MakeSharedPool<graphics::Animation, 512>>*
    placement_new<MakeSharedPoolRefCounter<graphics::Animation, MakeSharedPool<graphics::Animation, 512>>,
                  MakeSharedPool<graphics::Animation, 512>::RefCounterAndData*&, graphics::Animation*>(
        void* arg1, MakeSharedPool<graphics::Animation, 512>::RefCounterAndData*& arg2, graphics::Animation*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<graphics::Animation, MakeSharedPool<graphics::Animation, 512>>(arg2, arg3);
        return arg1;
    }

    // 0x1004e6aa0
    MakeSharedPoolRefCounter<graphics::Animation, MakeSharedPool<graphics::Animation, 512>>::MakeSharedPoolRefCounter(
        void* arg1, graphics::Animation* animation)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7c28 + 16;
        *(void**)(this + 16) = arg1;
        *(Animation**)(this + 24) = animation;
    }

    // 0x1004e6ae0
    void MakeSharedPoolRefCounter<graphics::Animation, MakeSharedPool<graphics::Animation, 512>>::DeleteData() {
        if (*(Animation**)(this + 24) != nullptr) {
            (*(Animation**)(this + 24))->~Animation();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x1004e6b10
    void MakeSharedPoolRefCounter<graphics::Animation, MakeSharedPool<graphics::Animation, 512>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<graphics::Animation, 512>::deallocate(arg1);
    }

    // 0x1004e7470
    void SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<game::SeqType::GetAnimation(game::AssetBuilder&,
                                                game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                                unsigned int, shared_ptr<graphics::Model> const&)::$_0>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        allocate(unsigned long arg1,
                 std::__packaged_task_func<
                     std::__bind<game::SeqType::GetAnimation(
                         game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                         unsigned int, shared_ptr<graphics::Model> const&)::$_0>,
                     SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func) {
        BucketManager::Allocate(64, 4, 8);
    }

    // 0x1004e7870
    void SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<game::SeqType::GetAnimation(game::AssetBuilder&,
                                                game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                                unsigned int, shared_ptr<graphics::Model> const&)::$_0>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        deallocate(std::__packaged_task_func<
                       std::__bind<game::SeqType::GetAnimation(
                           game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                           unsigned int, shared_ptr<graphics::Model> const&)::$_0>,
                       SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                   unsigned long arg2) {
        DeAllocate((void*)((long)packaged_task_func << 6), arg2);
    }

    // 0x1004e7d10
    graphics::AnimationFrameRT5*
    placement_new<graphics::AnimationFrameRT5, shared_ptr<graphics::AnimBase> const&, graphics::AnimKeyFrameSet&,
                  WrapArray<WrapArray<graphics::AnimCurveSegmentCacheData>>&, float>(
        void* arg1, const shared_ptr<graphics::AnimBase>& animBase, graphics::AnimKeyFrameSet& animKeyFrameSet,
        WrapArray<WrapArray<graphics::AnimCurveSegmentCacheData>>& wrapArray, float&& arg5) {
        new (arg1) graphics::AnimationFrameRT5(animBase, animKeyFrameSet, wrapArray, arg5);
        return arg1;
    }

    // 0x1004e9df0
    game::BuildAnimationMain*
    placement_new<game::BuildAnimationMain, int, shared_ptr<graphics::Animation>&,
                  Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>, Array<unsigned int>&,
                  shared_ptr<graphics::Model> const&, shared_ptr<graphics::AnimKeyFrameSet>&>(
        void* arg1, int&& arg2, shared_ptr<graphics::Animation>& animation,
        Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>&& animationFrameRT5s,
        Array<unsigned int>& arg5, const shared_ptr<graphics::Model>& model,
        shared_ptr<graphics::AnimKeyFrameSet>& animKeyFrameSet) {
        new (arg1) game::BuildAnimationMain(arg2, animation, animationFrameRT5s, arg5, model, animKeyFrameSet);
        return arg1;
    }

    // 0x1004e9e20
    BucketRefCounter<game::BuildAnimationMain>*
    placement_new<BucketRefCounter<game::BuildAnimationMain>,
                  managed_ptr_counter_and_data<BucketRefCounter<game::BuildAnimationMain>, game::BuildAnimationMain>*&,
                  game::BuildAnimationMain*&>(
        void* arg1,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildAnimationMain>, game::BuildAnimationMain>*& arg2,
        game::BuildAnimationMain*& arg3) {
        new (arg1) BucketRefCounter<game::BuildAnimationMain>(arg2, arg3, 0);
        return arg1;
    }

    // 0x1004e9e50
    BucketRefCounter<game::BuildAnimationMain>::BucketRefCounter(void* arg1,
                                                                 game::BuildAnimationMain* buildAnimationMain,
                                                                 unsigned int arg3)
        : ref_counter_base() {}

    // 0x1004e9eb0
    void BucketRefCounter<game::BuildAnimationMain>::DeleteSelf() {
        BucketRefCounter<game::BuildAnimationMain> _vtbl* pBVar1;

        if (*(int*)&this[5]._vptr != 4) {
            pBVar1 = (BucketRefCounter<game::BuildAnimationMain> _vtbl*)this_thread::GetThreadID();
            if (pBVar1 != this[4]._vptr) {
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, nullptr);
            }
        }
        pBVar1 = this[2]._vptr;
        std::destroy_at(this);
        BucketManager::DeAllocate(pBVar1);
    }

    // 0x1004eb360
    game::SeqType* placement_new<game::SeqType, game::BaseTemplateConfigTypeList<game::SeqType>*&, int&>(
        void* arg1, game::BaseTemplateConfigTypeList<game::SeqType>*& arg2, int& arg3) {
        new (arg1) game::SeqType(arg2, arg3);
        return arg1;
    }

    // 0x1004eb380
    MakeSharedPoolRefCounter<game::SeqType, MakeSharedPool<game::SeqType, 96>>*
    placement_new<MakeSharedPoolRefCounter<game::SeqType, MakeSharedPool<game::SeqType, 96>>,
                  MakeSharedPool<game::SeqType, 96>::RefCounterAndData*&, game::SeqType*>(
        void* arg1, MakeSharedPool<game::SeqType, 96>::RefCounterAndData*& arg2, game::SeqType*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::SeqType, MakeSharedPool<game::SeqType, 96>>(arg2, arg3);
        return arg1;
    }

    // 0x1004eb3a0
    void shared_ptr_do_enable_shared_from_this<game::SeqType>(ref_counter_base* ref_counter_base,
                                                              game::SeqType* seqType,
                                                              game::SeqType::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)seqType);
            local_38 = weak_ptr(local_48);
            seqType->field_8.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x1004ecc60
    MakeSharedPoolRefCounter<game::SeqType, MakeSharedPool<game::SeqType, 96>>::MakeSharedPoolRefCounter(
        void* arg1, game::SeqType* seqType)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7b20 + 16;
        *(void**)(this + 16) = arg1;
        *(SeqType**)(this + 24) = seqType;
    }

    // 0x1004ecca0
    void MakeSharedPoolRefCounter<game::SeqType, MakeSharedPool<game::SeqType, 96>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::SeqType, 96>::deallocate(arg1);
    }

    // 0x1004f0760
    graphics::AnimFrameset*
    placement_new<graphics::AnimFrameset, int&, Js5ResourceProvider&, Js5ArchiveSettings&, Js5ArchiveSettings&>(
        void* arg1, int& arg2, Js5ResourceProvider& js5ResourceProvider, Js5ArchiveSettings& js5ArchiveSettings1,
        Js5ArchiveSettings& js5ArchiveSettings2) {
        new (arg1) graphics::AnimFrameset(arg2, js5ResourceProvider, js5ArchiveSettings1, js5ArchiveSettings2);
        return arg1;
    }

    // 0x1004f0780
    MakeSharedPoolRefCounter<graphics::AnimFrameset, MakeSharedPool<graphics::AnimFrameset, 256>>*
    placement_new<MakeSharedPoolRefCounter<graphics::AnimFrameset, MakeSharedPool<graphics::AnimFrameset, 256>>,
                  MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData*&, graphics::AnimFrameset*>(
        void* arg1, MakeSharedPool<graphics::AnimFrameset, 256>::RefCounterAndData*& arg2,
        graphics::AnimFrameset*&& arg3) {
        new (arg1)
            MakeSharedPoolRefCounter<graphics::AnimFrameset, MakeSharedPool<graphics::AnimFrameset, 256>>(arg2, arg3);
        return arg1;
    }

    // 0x1004f0980
    MakeSharedPoolRefCounter<graphics::AnimFrameset, MakeSharedPool<graphics::AnimFrameset, 256>>::
        MakeSharedPoolRefCounter(void* arg1, graphics::AnimFrameset* animFrameset)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7ba8 + 16;
        *(void**)(this + 16) = arg1;
        *(AnimFrameset**)(this + 24) = animFrameset;
    }

    // 0x1004f09c0
    void MakeSharedPoolRefCounter<graphics::AnimFrameset, MakeSharedPool<graphics::AnimFrameset, 256>>::DeleteData() {
        if (*(AnimFrameset**)(this + 24) != nullptr) {
            (*(AnimFrameset**)(this + 24))->~AnimFrameset();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x1004f09f0
    void MakeSharedPoolRefCounter<graphics::AnimFrameset, MakeSharedPool<graphics::AnimFrameset, 256>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<graphics::AnimFrameset, 256>::deallocate(arg1);
    }

    // 0x1004f0fc0
    graphics::AnimKeyFrameSet*
    placement_new<graphics::AnimKeyFrameSet, int&, Js5ResourceProvider&, Js5ArchiveSettings&, Js5ArchiveSettings&>(
        void* arg1, int& arg2, Js5ResourceProvider& js5ResourceProvider, Js5ArchiveSettings& js5ArchiveSettings1,
        Js5ArchiveSettings& js5ArchiveSettings2) {
        new (arg1) graphics::AnimKeyFrameSet(arg2, js5ResourceProvider, js5ArchiveSettings1, js5ArchiveSettings2);
        return arg1;
    }

    // 0x1004f0fe0
    MakeSharedPoolRefCounter<graphics::AnimKeyFrameSet, MakeSharedPool<graphics::AnimKeyFrameSet, 128>>*
    placement_new<MakeSharedPoolRefCounter<graphics::AnimKeyFrameSet, MakeSharedPool<graphics::AnimKeyFrameSet, 128>>,
                  MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData*&, graphics::AnimKeyFrameSet*>(
        void* arg1, MakeSharedPool<graphics::AnimKeyFrameSet, 128>::RefCounterAndData*& arg2,
        graphics::AnimKeyFrameSet*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<graphics::AnimKeyFrameSet, MakeSharedPool<graphics::AnimKeyFrameSet, 128>>(
            arg2, arg3);
        return arg1;
    }

    // 0x1004f11e0
    MakeSharedPoolRefCounter<graphics::AnimKeyFrameSet, MakeSharedPool<graphics::AnimKeyFrameSet, 128>>::
        MakeSharedPoolRefCounter(void* arg1, graphics::AnimKeyFrameSet* animKeyFrameSet)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7bd0 + 16;
        *(void**)(this + 16) = arg1;
        *(AnimKeyFrameSet**)(this + 24) = animKeyFrameSet;
    }

    // 0x1004f1220
    void
    MakeSharedPoolRefCounter<graphics::AnimKeyFrameSet, MakeSharedPool<graphics::AnimKeyFrameSet, 128>>::DeleteData() {
        if (*(AnimKeyFrameSet**)(this + 24) != nullptr) {
            (*(AnimKeyFrameSet**)(this + 24))->~AnimKeyFrameSet();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x1004f1250
    void
    MakeSharedPoolRefCounter<graphics::AnimKeyFrameSet, MakeSharedPool<graphics::AnimKeyFrameSet, 128>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<graphics::AnimKeyFrameSet, 128>::deallocate(arg1);
    }

} // namespace jag

namespace jag::game {
    class BuildAnimationMain : public AssetJob // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~BuildAnimationMain();
        virtual uint8_t* RunFirst(Js5ResourceProvider* js5ResourceProvider, ConfigProvider* configProvider);
        virtual BuildAnimationMain* CreateWorker();
        virtual auto DecodeResult(const shared_ptr<void>& arg1);
        virtual shared_ptr GetRequestData();
        shared_ptr GetConstructedAsset() const;
        bool IsAssetConstructed() const;
        BuildAnimationMain(int arg1, const shared_ptr<graphics::Animation>& animation,
                           Array<shared_ptr<graphics::AnimationFrameRT5>>&& animationFrameRT5s,
                           const Array<unsigned int>& arg4, const shared_ptr<graphics::Model>& model,
                           const shared_ptr<graphics::AnimKeyFrameSet>& animKeyFrameSet);
        void PostDecodeResultSetup(BuildAnimationResultData& buildAnimationResultData);

    private:
        uint8_t _unknown_72[8];
        shared_ptr m_constructedAsset;
        shared_ptr m_requestData;
    };

    // 0x1004e59c0
    bool BuildAnimationMain::IsAssetConstructed() const {
        uint64_t uVar2;

        if (m_constructedAsset->operator_cast_to_bool() == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = ((Skybox*)(*m_constructedAsset).operator->())->ShowSkybox();
        }
        return uVar2;
    }

    // 0x10064f330
    BuildAnimationMain::~BuildAnimationMain() {
        m_requestData->~shared_ptr();
        m_constructedAsset->~shared_ptr();
    }

} // namespace jag::game
