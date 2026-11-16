// libs/graphics/runetek5/ParticleEffectorRaw.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x10099bad0
    uint64_t
    FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::
    operator!=(const FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData,
                                       unsigned long>& fastPool_iterator) const {
        if (*(long*)this != *(long*)fastPool_iterator) {
            LogAssert("m_pPool == other.m_pPool",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 61,
                      nullptr);
        }
        return *(long*)(this + 8) != *(long*)(fastPool_iterator + 8);
    }

    // 0x10099bb20
    void FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData,
                           unsigned long>::operator*() const {
        (*(*(FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData,
                      unsigned long>**)this))[*(unsigned long*)(this + 8)];
    }

    // 0x10099bb40
    FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>*
    FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData,
                      unsigned long>::operator++() {
        Increment(this);
        return this;
    }

    // 0x10099c010
    void FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData,
                           unsigned long>::Increment() {
        long lVar1 = *(long*)(this + 8);
        *(unsigned long*)(this + 8) = lVar1 + 1U;
        int iVar2 = (*(hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                 eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                 eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>**)this)
                        ->size();
        if ((unsigned long)(long)iVar2 < lVar1 + 1U) {
            LogAssert("m_Index >= 0 && m_Index <= static_cast<int>(m_pPool->size())",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 82,
                      nullptr);
        }
    }

    // 0x10099c110
    uint64_t FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::operator!=(
        const FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>&
            fastPool_iterator) const {
        if (*(long*)this != *(long*)fastPool_iterator) {
            LogAssert("m_pPool == other.m_pPool",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 61,
                      nullptr);
        }
        return *(long*)(this + 8) != *(long*)(fastPool_iterator + 8);
    }

    // 0x10099c160
    void FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::operator*() const {
        (*(*(FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>**)this))[*(
            unsigned long*)(this + 8)];
    }

    // 0x10099c180
    FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>*
    FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::operator++() {
        Increment(this);
        return this;
    }

    // 0x10099c640
    void FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::Increment() {
        long lVar1 = *(long*)(this + 8);
        *(unsigned long*)(this + 8) = lVar1 + 1U;
        int iVar2 = (*(hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                 eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                 eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>**)this)
                        ->size();
        if ((unsigned long)(long)iVar2 < lVar1 + 1U) {
            LogAssert("m_Index >= 0 && m_Index <= static_cast<int>(m_pPool->size())",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 82,
                      nullptr);
        }
    }

    // 0x10099ca20
    postprocess::ColourGradingBloomEffect*
    placement_new<postprocess::ColourGradingBloomEffect, render::RenderTargetsManager&,
                  postprocess::AvgLuminanceFilter*>(void* arg1, render::RenderTargetsManager& renderTargetsManager,
                                                    postprocess::AvgLuminanceFilter*&& arg3) {
        new (arg1) postprocess::ColourGradingBloomEffect(renderTargetsManager, arg3, 1, 1);
        return arg1;
    }

    // 0x10099ca50
    ref_counter_shared<postprocess::ColourGradingBloomEffect>*
    placement_new<ref_counter_shared<postprocess::ColourGradingBloomEffect>, int,
                  postprocess::ColourGradingBloomEffect*&>(void* arg1, int&& arg2,
                                                           postprocess::ColourGradingBloomEffect*& arg3) {
        new (arg1) ref_counter_shared<postprocess::ColourGradingBloomEffect>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10099ca80
    ref_counter_shared<postprocess::ColourGradingBloomEffect>::ref_counter_shared(
        unsigned long arg1, postprocess::ColourGradingBloomEffect* colourGradingBloomEffect)
        : ref_counter_base() {}

    // 0x10099cac0
    void ref_counter_shared<postprocess::ColourGradingBloomEffect>::DeleteData() {
        long lVar1;
        ref_counter_shared<postprocess::ColourGradingBloomEffect> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 =
                        (ref_counter_shared<postprocess::ColourGradingBloomEffect> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 6704;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10099cba0
    postprocess::FXAAEffect* placement_new<postprocess::FXAAEffect>(void* arg1) {
        new (arg1) postprocess::FXAAEffect(2, 0);
        return arg1;
    }

    // 0x10099cbc0
    ref_counter_shared<postprocess::FXAAEffect>*
    placement_new<ref_counter_shared<postprocess::FXAAEffect>, int, postprocess::FXAAEffect*&>(
        void* arg1, int&& arg2, postprocess::FXAAEffect*& arg3) {
        new (arg1) ref_counter_shared<postprocess::FXAAEffect>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10099cbf0
    ref_counter_shared<postprocess::FXAAEffect>::ref_counter_shared(unsigned long arg1,
                                                                    postprocess::FXAAEffect* fxaaEffect)
        : ref_counter_base() {}

    // 0x10099cc30
    void ref_counter_shared<postprocess::FXAAEffect>::DeleteData() {
        long lVar1;
        ref_counter_shared<postprocess::FXAAEffect> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<postprocess::FXAAEffect> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 232;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10099cd10
    postprocess::OutlineAndShadowEffect* placement_new<postprocess::OutlineAndShadowEffect>(void* arg1) {
        new (arg1) postprocess::OutlineAndShadowEffect(3, 0);
        return arg1;
    }

    // 0x10099cd30
    ref_counter_shared<postprocess::OutlineAndShadowEffect>*
    placement_new<ref_counter_shared<postprocess::OutlineAndShadowEffect>, int, postprocess::OutlineAndShadowEffect*&>(
        void* arg1, int&& arg2, postprocess::OutlineAndShadowEffect*& arg3) {
        new (arg1) ref_counter_shared<postprocess::OutlineAndShadowEffect>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10099cd60
    ref_counter_shared<postprocess::OutlineAndShadowEffect>::ref_counter_shared(
        unsigned long arg1, postprocess::OutlineAndShadowEffect* outlineAndShadowEffect)
        : ref_counter_base() {}

    // 0x10099ce20
    postprocess::EquirectangularEffect* placement_new<postprocess::EquirectangularEffect>(void* arg1) {
        new (arg1) postprocess::EquirectangularEffect(4, 10);
        return arg1;
    }

    // 0x10099ce50
    ref_counter_shared<postprocess::EquirectangularEffect>*
    placement_new<ref_counter_shared<postprocess::EquirectangularEffect>, int, postprocess::EquirectangularEffect*&>(
        void* arg1, int&& arg2, postprocess::EquirectangularEffect*& arg3) {
        new (arg1) ref_counter_shared<postprocess::EquirectangularEffect>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10099ce80
    ref_counter_shared<postprocess::EquirectangularEffect>::ref_counter_shared(
        unsigned long arg1, postprocess::EquirectangularEffect* equirectangularEffect)
        : ref_counter_base() {}

    // 0x10099cec0
    void ref_counter_shared<postprocess::EquirectangularEffect>::DeleteData() {
        long lVar1;
        ref_counter_shared<postprocess::EquirectangularEffect> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<postprocess::EquirectangularEffect> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 56;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10099cf90
    postprocess::DepthOfFieldEffect* placement_new<postprocess::DepthOfFieldEffect>(void* arg1) {
        new (arg1) postprocess::DepthOfFieldEffect(6, 5);
        return arg1;
    }

    // 0x10099cfc0
    ref_counter_shared<postprocess::DepthOfFieldEffect>*
    placement_new<ref_counter_shared<postprocess::DepthOfFieldEffect>, int, postprocess::DepthOfFieldEffect*&>(
        void* arg1, int&& arg2, postprocess::DepthOfFieldEffect*& arg3) {
        new (arg1) ref_counter_shared<postprocess::DepthOfFieldEffect>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10099cff0
    ref_counter_shared<postprocess::DepthOfFieldEffect>::ref_counter_shared(
        unsigned long arg1, postprocess::DepthOfFieldEffect* depthOfFieldEffect)
        : ref_counter_base() {}

    // 0x10099d030
    void ref_counter_shared<postprocess::DepthOfFieldEffect>::DeleteData() {
        long lVar1;
        ref_counter_shared<postprocess::DepthOfFieldEffect> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<postprocess::DepthOfFieldEffect> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 432;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10099f4d0
    graphics::AnimBase* placement_new<graphics::AnimBase, unsigned short&, PacketT<Array<unsigned char>>&>(
        void* arg1, unsigned short& arg2, PacketT<Array<unsigned char>>& arg3) {
        new (arg1) graphics::AnimBase((unsigned int)*arg2, arg3);
        return arg1;
    }

    // 0x1009a03a0
    void SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::Animation::ConstructFromAnimKeyFrameSet(
                                                              shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>,
                                                          SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        allocate(
            unsigned long arg1,
            std::__packaged_task_func<std::__bind<graphics::Animation::ConstructFromAnimKeyFrameSet(
                                          shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func) {
        BucketManager::Allocate(56, 4, 8);
    }

    // 0x1009a0730
    void SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::Animation::ConstructFromAnimKeyFrameSet(
                                                              shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>,
                                                          SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        deallocate(
            std::__packaged_task_func<std::__bind<graphics::Animation::ConstructFromAnimKeyFrameSet(
                                          shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>,
                                      SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
            unsigned long arg2) {
        DeAllocate((void*)((long)packaged_task_func * 56), arg2);
    }

    // 0x1009a2300
    graphics::AnimationFrameRT7*
    placement_new<graphics::AnimationFrameRT7, shared_ptr<graphics::AnimationFrameRT5> const&, unsigned int&,
                  Array<graphics::LabelData, BucketAllocatorEASTL> const&, bool>(
        void* arg1, const shared_ptr<graphics::AnimationFrameRT5>& animationFrameRT5, unsigned int& arg3,
        const Array<graphics::LabelData, BucketAllocatorEASTL>& labelDatas, bool&& arg5) {
        Array<graphics::LabelData> local_48;

        local_48.Array<BucketAllocatorEASTL>(labelDatas);
        new (arg1) graphics::AnimationFrameRT7(animationFrameRT5, (unsigned int)arg3, local_48, arg5);
        return arg1;
    }

    // 0x1009a2370
    MakeSharedPoolRefCounter<graphics::AnimationFrameRT7, MakeSharedPool<graphics::AnimationFrameRT7, 8192>>*
    placement_new<
        MakeSharedPoolRefCounter<graphics::AnimationFrameRT7, MakeSharedPool<graphics::AnimationFrameRT7, 8192>>,
        MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData*&, graphics::AnimationFrameRT7*>(
        void* arg1, MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData*& arg2,
        graphics::AnimationFrameRT7*&& arg3) {
        new (arg1)
            MakeSharedPoolRefCounter<graphics::AnimationFrameRT7, MakeSharedPool<graphics::AnimationFrameRT7, 8192>>(
                arg2, arg3);
        return arg1;
    }

    // 0x1009a2b10
    MakeSharedPoolRefCounter<graphics::AnimationFrameRT7, MakeSharedPool<graphics::AnimationFrameRT7, 8192>>::
        MakeSharedPoolRefCounter(void* arg1, graphics::AnimationFrameRT7* animationFrameRT7)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7be0 + 16;
        *(void**)(this + 16) = arg1;
        *(AnimationFrameRT7**)(this + 24) = animationFrameRT7;
    }

    // 0x1009a2b50
    void MakeSharedPoolRefCounter<graphics::AnimationFrameRT7,
                                  MakeSharedPool<graphics::AnimationFrameRT7, 8192>>::DeleteData() {
        if (*(AnimationFrameRT7**)(this + 24) != nullptr) {
            (*(AnimationFrameRT7**)(this + 24))->~AnimationFrameRT7();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x1009a2b80
    void MakeSharedPoolRefCounter<graphics::AnimationFrameRT7,
                                  MakeSharedPool<graphics::AnimationFrameRT7, 8192>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<graphics::AnimationFrameRT7, 8192>::deallocate(arg1);
    }

    // 0x1009a3b00
    graphics::Animation* placement_new<graphics::Animation>(void* arg1) {
        new (arg1) graphics::Animation();
        return arg1;
    }

    // 0x1009a3b20
    ref_counter_shared<graphics::Animation>*
    placement_new<ref_counter_shared<graphics::Animation>, int, graphics::Animation*&>(void* arg1, int&& arg2,
                                                                                       graphics::Animation*& arg3) {
        new (arg1) ref_counter_shared<graphics::Animation>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1009a3c60
    ref_counter_shared<graphics::Animation>::ref_counter_shared(unsigned long arg1, graphics::Animation* animation)
        : ref_counter_base() {}

    // 0x1009a3ca0
    void ref_counter_shared<graphics::Animation>::DeleteData() {
        ref_counter_shared<graphics::Animation> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((Animation*)((long)&(this[3]._vptr)->_dtor + lVar2))->~Animation();
                    prVar1 = (ref_counter_shared<graphics::Animation> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 200;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1009a60a0
    void SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::AnimationStateProvider::BeginAsyncTasks(
            ThreadPool&, unsigned int, Array<graphics::LabelData> const&, math::Matrix44T<float> const&)::$_8>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        allocate(
            unsigned long arg1,
            std::__packaged_task_func<
                std::__bind<graphics::AnimationStateProvider::BeginAsyncTasks(
                    ThreadPool&, unsigned int, Array<graphics::LabelData> const&, math::Matrix44T<float> const&)::$_8>,
                SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func) {
        BucketManager::Allocate(40, 4, 8);
    }

    // 0x1009a6360
    void SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::AnimationStateProvider::BeginAsyncTasks(
            ThreadPool&, unsigned int, Array<graphics::LabelData> const&, math::Matrix44T<float> const&)::$_8>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        deallocate(
            std::__packaged_task_func<
                std::__bind<graphics::AnimationStateProvider::BeginAsyncTasks(
                    ThreadPool&, unsigned int, Array<graphics::LabelData> const&, math::Matrix44T<float> const&)::$_8>,
                SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
            unsigned long arg2) {
        DeAllocate((void*)((long)packaged_task_func * 40), arg2);
    }

} // namespace jag

namespace jag::graphics {
    class ParticleEffectorRaw {
    public:
        ~ParticleEffectorRaw();
        void Decode(PacketT<Array<unsigned char>>& arg1);
        ParticleEffectorRaw();

    private:
        uint8_t _unknown_0[4];
        unsigned int field_4;
        float field_8;
        unsigned int field_12;
        float field_16;
        float field_20;
        float field_24;
        unsigned int field_28;
        uint32_t field_32;
        uint32_t field_36;
        uint32_t field_40;
        uint8_t field_44;
        uint8_t _unknown_45[3];
    };

    // 0x10099b380
    ParticleEffectorRaw::ParticleEffectorRaw() {
        *(uint64_t*)this = 0;
        field_8 = 0.0;
        field_12 = 0;
        new (&field_16) math::Vector3T();
        field_28 = 0;
        field_32 = 0;
        field_36 = 0;
        field_40 = 0;
        field_44 = 0;
    }

    // 0x10099e420
    JointPose::JointPose() : math::QuaternionT<float>() {}

    // 0x1009a09f0
    AnimCurveSegmentCacheBase::AnimCurveSegmentCacheBase() : field_8(0) {}

    // 0x1009a5230
    SimpleTwoNodeBlendTreeNode<unsigned long long>::SimpleTwoNodeBlendTreeNode() {
        *(uint64_t*)(this + 48) = 0;
        *(uint64_t*)(this + 56) = 0;
        *(uint64_t*)(this + 32) = 0;
        *(uint64_t*)(this + 40) = 0;
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
        *(uint64_t*)(this + 64) = 0;
        new (this) TwoNodeBaseBlendTreeNode<unsigned long long>();
        *(uint8_t**)this = PTR_vtable_100ee88a0 + 16;
        *(uint64_t*)(this + 72) = 0;
        *(uint64_t*)(this + 80) = 0;
    }

    // 0x1009a5280
    TwoNodeBaseBlendTreeNode<unsigned long long>::TwoNodeBaseBlendTreeNode() : BlendTreeNode() {
        *(uint8_t**)this = PTR_vtable_100ee8880 + 16;
        *(uint64_t*)(this + 64) = 4294967296;
    }

    // 0x1009a52c0
    void TwoNodeBaseBlendTreeNode<unsigned long long>::GetPose(WrapArray<JointPose> wrapArray,
                                                               const Array<LabelData>& labelDatas,
                                                               const math::Matrix44T<float>& matrix44) {
        TwoNodeBaseBlendTreeNode<unsigned long long> TVar1;
        BlendTreeNode* pBVar3;
        BlendTreeNode* pBVar4;
        WrapArray<game::Cutscene2DAnimation<float>::Key const> local_70;
        WrapArray<game::Cutscene2DAnimation<float>::Key const> local_60;
        WrapArray<game::Cutscene2DAnimation<float>::Key const> local_50;

        if (*(long*)(this + 56) == 0) {
            LogAssert("m_pVariable",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/TwoNodeBlendTreeNode.h",
                      107, nullptr);
        }
        auto puVar2 =
            std::clamp<unsigned long long>(*(*(unsigned long long**)(this + 56)), *((this + 40)), *((this + 48)));
        float local_34 =
            (float)(*puVar2 - *(long*)(this + 40)) / (float)(unsigned long)(*(long*)(this + 48) - *(long*)(this + 40));
        if (*(int*)(this + 64) == 1) {
            local_60.WrapArray<WrapArray<game::Cutscene2DAnimation<float>::Key const>>(*wrapArray);
            pBVar3 = (BlendTreeNode*)(**(void (**)(...))(*(long*)this + 64))(this);
            pBVar4 = (BlendTreeNode*)(**(void (**)(...))(*(long*)this + 72))(this);
            TwoNodeBlendHelpers::GetAdditivePose(&local_60, pBVar3, pBVar4, local_34,
                                                 *(BlendTreeNodeBlendMode*)(this + 68), labelDatas, matrix44);
            TVar1 = this[8];
        } else {
            if (*(int*)(this + 64) != 0) {
                LogAssert("m_blendType == TwoNodeBlendTreeNodeBlendType::ADD",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/TwoNodeBlendTreeNode.h",
                          119, nullptr);
            }
            local_70.WrapArray<WrapArray<game::Cutscene2DAnimation<float>::Key const>>(*wrapArray);
            pBVar3 = (BlendTreeNode*)(**(void (**)(...))(*(long*)this + 64))(this);
            pBVar4 = (BlendTreeNode*)(**(void (**)(...))(*(long*)this + 72))(this);
            TwoNodeBlendHelpers::GetLerpPose(&local_70, pBVar3, pBVar4, local_34, *(BlendTreeNodeBlendMode*)(this + 68),
                                             labelDatas, matrix44);
            TVar1 = this[8];
        }
        if (TVar1 != (TwoNodeBaseBlendTreeNode<unsigned long long>)0) {
            pBVar3 = (BlendTreeNode*)(**(void (**)(...))(*(long*)this + 64))(this);
            pBVar4 = (BlendTreeNode*)(**(void (**)(...))(*(long*)this + 72))(this);
            local_50.WrapArray<WrapArray<game::Cutscene2DAnimation<float>::Key const>>(*wrapArray);
            TwoNodeBlendHelpers::DebugDrawPose(pBVar3, pBVar4, local_50, matrix44, *((this + 12)), *((this + 24)));
        }
    }

    // 0x1009a5480
    shared_ptr<oldscape::midi2::MidiRequest>* TwoNodeBaseBlendTreeNode<unsigned long long>::GetBindInfo() const {
        long* plVar2 = (long*)(**(void (**)(...))(*(long*)this + 64))();
        shared_ptr<oldscape::midi2::MidiRequest>* midiRequest1 =
            (shared_ptr<oldscape::midi2::MidiRequest>*)(**(void (**)(...))(*plVar2 + 24))(plVar2);
        if (*midiRequest1 == (*((shared_ptr<oldscape::midi2::MidiRequest>*)&BlendTreeNode::NullAnimBase))) {
            plVar2 = (long*)(**(void (**)(...))(*(long*)this + 72))(this);
            midiRequest1 = (shared_ptr<oldscape::midi2::MidiRequest>*)(**(void (**)(...))(*plVar2 + 24))(plVar2);
        }
        return midiRequest1;
    }

    // 0x1009a54d0
    void TwoNodeBaseBlendTreeNode<unsigned long long>::Update(unsigned int arg1) {
        long lVar1;
        long* plVar2;

        if (**(long**)(this + 56) != *(long*)(this + 48)) {
            lVar1 = (**(void (**)(...))(*(long*)this + 64))(this);
            if (lVar1 == 0) {
                LogAssert("GetLeftNode()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/TwoNodeBlendTreeNode.h",
                          77, nullptr);
            }
            plVar2 = (long*)(**(void (**)(...))(*(long*)this + 64))(this);
            (**(void (**)(...))(*plVar2 + 32))(plVar2, arg1);
        }
        if (**(long**)(this + 56) != *(long*)(this + 40)) {
            lVar1 = (**(void (**)(...))(*(long*)this + 72))(this);
            if (lVar1 == 0) {
                LogAssert("GetRightNode()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/TwoNodeBlendTreeNode.h",
                          83, nullptr);
            }
            plVar2 = (long*)(**(void (**)(...))(*(long*)this + 72))(this);
            (**(void (**)(...))(*plVar2 + 32))(plVar2, arg1);
        }
    }

    // 0x1009a5580
    void TwoNodeBaseBlendTreeNode<unsigned long long>::Reset(unsigned int arg1) {
        long lVar1 = (**(void (**)(...))(*(long*)this + 64))();
        if (lVar1 == 0) {
            LogAssert("GetLeftNode()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/TwoNodeBlendTreeNode.h",
                      94, nullptr);
        }
        lVar1 = (**(void (**)(...))(*(long*)this + 72))(this);
        if (lVar1 == 0) {
            LogAssert("GetRightNode()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/TwoNodeBlendTreeNode.h",
                      95, nullptr);
        }
        long* plVar2 = (long*)(**(void (**)(...))(*(long*)this + 64))(this);
        (**(void (**)(...))(*plVar2 + 40))(plVar2, arg1);
        plVar2 = (long*)(**(void (**)(...))(*(long*)this + 72))(this);
        (**(void (**)(...))(*plVar2 + 40))(plVar2, arg1);
    }

    // 0x1009a5620
    char* SimpleTwoNodeBlendTreeNode<unsigned long long>::GetTypeString() const {
        return "SimpleTwoNode";
    }

    // 0x1009a5630
    auto SimpleTwoNodeBlendTreeNode<unsigned long long>::GetTreeAsString() const {
        auto result;
        eastl::string local_f8;
        eastl::string local_d8;
        eastl::string local_b8;
        eastl::string local_98;
        eastl::string local_70;
        eastl::string local_50;

        char* str = (char*)(**(void (**)(...))(*(long*)this + 48))(this);
        eastl::string local_118(str);
        local_98 + local_118;
        auto plVar1 = size();
        (**(void (**)(...))(*plVar1 + 56))(&local_70, plVar1);
        local_b8 + local_98;
        local_d8 + local_b8;
        plVar1 = (long*)GetConfigGroup();
        (**(void (**)(...))(*plVar1 + 56))(&local_50, plVar1);
        local_f8 + local_d8;
        result + local_f8;
        return result;
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x1009a3a80
    Matrix43T<float>* Matrix43T<float>::Set(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6,
                                            float arg7, float arg8, float arg9, float arg10, float arg11, float arg12) {
        Set(arg1, arg2, arg3);
        ((this + 12))->Set(arg4, arg5, arg6);
        ((this + 24))->Set(arg7, arg8, arg9);
        ((this + 36))->Set(arg10, arg11, arg12);
        return this;
    }

} // namespace jag::math
