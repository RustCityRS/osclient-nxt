// libs/graphics/runetek5/ParticleEffectorRaw.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x10099bad0, 80 bytes, inline, placed by debug map only (low confidence)
    // FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::operator!=(FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long> const&) const
    /* FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference,
   8192>::RefCounterAndData, unsigned
   long>::TEMPNAMEPLACEHOLDERVALUE(FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference,
   8192>::RefCounterAndData, unsigned long> const&) const */

    undefined8
    jag::FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::
    operator!=(FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData,
                                 unsigned long>* this,
               FastPool_iterator* param_1) {
        if (*(long*)this != *(long*)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pPool == other.m_pPool",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 61,
                      (char*)0);
        }
        return CONCAT71((int7)((ulong) * (long*)(this + 8) >> 8), *(long*)(this + 8) != *(long*)(param_1 + 8));
    }

    // 0x10099bb20, 32 bytes, inline, placed by debug map only (low confidence)
    // FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::operator*() const
    /* FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference,
   8192>::RefCounterAndData, unsigned long>::TEMPNAMEPLACEHOLDERVALUE() const */

    void
    jag::FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::
    operator*(FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData,
                                unsigned long>* this) {
        FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::operator[](
            *(FastPool<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>**)this,
            *(ulong*)(this + 8));
    }

    // 0x10099bb40, 32 bytes, inline, placed by debug map only (low confidence)
    // FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::operator++()
    /* FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference,
   8192>::RefCounterAndData, unsigned long>::TEMPNAMEPLACEHOLDERVALUE() */

    FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>*
    jag::FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::
    operator++(FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData,
                                 unsigned long>* this) {
        Increment(this);
        return this;
    }

    // 0x10099c010, 80 bytes, inline, placed by debug map only (low confidence)
    // FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::Increment()
    void
    jag::FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData, unsigned long>::
        Increment(FastPool_iterator<MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData,
                                    unsigned long>* this) {
        long lVar1;
        int iVar2;

        lVar1 = *(long*)(this + 8);
        *(ulong*)(this + 8) = lVar1 + 1U;
        iVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                 eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                 eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::
            size(*(hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>**)this);
        if ((ulong)(long)iVar2 < lVar1 + 1U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_Index >= 0 && m_Index <= static_cast<int>(m_pPool->size())",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 82,
                      (char*)0);
        }
    }

    // 0x10099c110, 80 bytes, inline, placed by debug map only (low confidence)
    // FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::operator!=(FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long> const&) const
    /* FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData,
   unsigned
   long>::TEMPNAMEPLACEHOLDERVALUE(FastPool_iterator<MakeSharedPool<graphics::Model,
   3072>::RefCounterAndData, unsigned long> const&) const */

    undefined8
    jag::FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::operator!=(
        FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>* this,
        FastPool_iterator* param_1) {
        if (*(long*)this != *(long*)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pPool == other.m_pPool",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 61,
                      (char*)0);
        }
        return CONCAT71((int7)((ulong) * (long*)(this + 8) >> 8), *(long*)(this + 8) != *(long*)(param_1 + 8));
    }

    // 0x10099c160, 32 bytes, inline, placed by debug map only (low confidence)
    // FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::operator*() const
    /* FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData,
   unsigned long>::TEMPNAMEPLACEHOLDERVALUE() const */

    void jag::FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::operator*(
        FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>* this) {
        FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::operator[](
            *(FastPool<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>**)this,
            *(ulong*)(this + 8));
    }

    // 0x10099c180, 32 bytes, inline, placed by debug map only (low confidence)
    // FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::operator++()
    /* FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData,
   unsigned long>::TEMPNAMEPLACEHOLDERVALUE() */

    FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>*
    jag::FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::operator++(
        FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>* this) {
        Increment(this);
        return this;
    }

    // 0x10099c640, 80 bytes, inline, placed by debug map only (low confidence)
    // FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::Increment()
    void jag::FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>::Increment(
        FastPool_iterator<MakeSharedPool<graphics::Model, 3072>::RefCounterAndData, unsigned long>* this) {
        long lVar1;
        int iVar2;

        lVar1 = *(long*)(this + 8);
        *(ulong*)(this + 8) = lVar1 + 1U;
        iVar2 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                 eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                 eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::
            size(*(hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                             eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                             eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                             eastl::prime_rehash_policy, false, true, true>**)this);
        if ((ulong)(long)iVar2 < lVar1 + 1U) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_Index >= 0 && m_Index <= static_cast<int>(m_pPool->size())",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 82,
                      (char*)0);
        }
    }

    // 0x10099ca20, 48 bytes, inline, placed by debug map only (low confidence)
    // postprocess::ColourGradingBloomEffect* placement_new<postprocess::ColourGradingBloomEffect, render::RenderTargetsManager&, postprocess::AvgLuminanceFilter*>(void*, render::RenderTargetsManager&, postprocess::AvgLuminanceFilter*&&)
    ColourGradingBloomEffect* jag::placement_new<postprocess::ColourGradingBloomEffect, render::RenderTargetsManager&,
                                                 postprocess::AvgLuminanceFilter*>(void* param_1,
                                                                                   RenderTargetsManager* param_2,
                                                                                   AvgLuminanceFilter** param_3) {
        postprocess::ColourGradingBloomEffect::ColourGradingBloomEffect(param_1, param_2, *param_3, 1, 1);
        return param_1;
    }

    // 0x10099ca50, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<postprocess::ColourGradingBloomEffect>* placement_new<ref_counter_shared<postprocess::ColourGradingBloomEffect>, int, postprocess::ColourGradingBloomEffect*&>(void*, int&&, postprocess::ColourGradingBloomEffect*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<postprocess::ColourGradingBloomEffect>, int,
                       postprocess::ColourGradingBloomEffect*&>(void* param_1, int* param_2,
                                                                ColourGradingBloomEffect** param_3) {
        ref_counter_shared<postprocess::ColourGradingBloomEffect>::ref_counter_shared(param_1, (long)*param_2,
                                                                                      *param_3);
        return param_1;
    }

    // 0x10099ca70, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<postprocess::ColourGradingBloomEffect>::ref_counter_shared(unsigned long, postprocess::ColourGradingBloomEffect*): jumps straight to the base-object constructor

    // 0x10099ca80, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<postprocess::ColourGradingBloomEffect>::ref_counter_shared(unsigned long, postprocess::ColourGradingBloomEffect*)
    void
    ref_counter_shared<postprocess::ColourGradingBloomEffect>::ref_counter_shared(ulong param_1,
                                                                                  ColourGradingBloomEffect* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7230 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ColourGradingBloomEffect**)(this + 24) = param_2;
    }

    // 0x10099cac0, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<postprocess::ColourGradingBloomEffect>::DeleteData()
    void ref_counter_shared<postprocess::ColourGradingBloomEffect>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 6704;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10099cba0, 32 bytes, inline, placed by debug map only (low confidence)
    // postprocess::FXAAEffect* placement_new<postprocess::FXAAEffect>(void*)
    FXAAEffect* placement_new<postprocess::FXAAEffect>(void* param_1) {
        postprocess::FXAAEffect::FXAAEffect(param_1, 2, 0);
        return param_1;
    }

    // 0x10099cbc0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<postprocess::FXAAEffect>* placement_new<ref_counter_shared<postprocess::FXAAEffect>, int, postprocess::FXAAEffect*&>(void*, int&&, postprocess::FXAAEffect*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<postprocess::FXAAEffect>, int, postprocess::FXAAEffect*&>(
        void* param_1, int* param_2, FXAAEffect** param_3) {
        ref_counter_shared<postprocess::FXAAEffect>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10099cbe0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<postprocess::FXAAEffect>::ref_counter_shared(unsigned long, postprocess::FXAAEffect*): jumps straight to the base-object constructor

    // 0x10099cbf0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<postprocess::FXAAEffect>::ref_counter_shared(unsigned long, postprocess::FXAAEffect*)
    void ref_counter_shared<postprocess::FXAAEffect>::ref_counter_shared(ulong param_1, FXAAEffect* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7210 + 16;
        *(ulong*)(this + 16) = param_1;
        *(FXAAEffect**)(this + 24) = param_2;
    }

    // 0x10099cc30, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<postprocess::FXAAEffect>::DeleteData()
    void ref_counter_shared<postprocess::FXAAEffect>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 232;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10099cd10, 32 bytes, inline, placed by debug map only (low confidence)
    // postprocess::OutlineAndShadowEffect* placement_new<postprocess::OutlineAndShadowEffect>(void*)
    OutlineAndShadowEffect* placement_new<postprocess::OutlineAndShadowEffect>(void* param_1) {
        postprocess::OutlineAndShadowEffect::OutlineAndShadowEffect(param_1, 3, 0);
        return param_1;
    }

    // 0x10099cd30, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<postprocess::OutlineAndShadowEffect>* placement_new<ref_counter_shared<postprocess::OutlineAndShadowEffect>, int, postprocess::OutlineAndShadowEffect*&>(void*, int&&, postprocess::OutlineAndShadowEffect*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<postprocess::OutlineAndShadowEffect>, int,
                                           postprocess::OutlineAndShadowEffect*&>(void* param_1, int* param_2,
                                                                                  OutlineAndShadowEffect** param_3) {
        ref_counter_shared<postprocess::OutlineAndShadowEffect>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10099cd50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<postprocess::OutlineAndShadowEffect>::ref_counter_shared(unsigned long, postprocess::OutlineAndShadowEffect*): jumps straight to the base-object constructor

    // 0x10099cd60, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<postprocess::OutlineAndShadowEffect>::ref_counter_shared(unsigned long, postprocess::OutlineAndShadowEffect*)
    void ref_counter_shared<postprocess::OutlineAndShadowEffect>::ref_counter_shared(ulong param_1,
                                                                                     OutlineAndShadowEffect* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7228 + 16;
        *(ulong*)(this + 16) = param_1;
        *(OutlineAndShadowEffect**)(this + 24) = param_2;
    }

    // 0x10099ce20, 48 bytes, inline, placed by debug map only (low confidence)
    // postprocess::EquirectangularEffect* placement_new<postprocess::EquirectangularEffect>(void*)
    EquirectangularEffect* placement_new<postprocess::EquirectangularEffect>(void* param_1) {
        postprocess::EquirectangularEffect::EquirectangularEffect(param_1, 4, 10);
        return param_1;
    }

    // 0x10099ce50, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<postprocess::EquirectangularEffect>* placement_new<ref_counter_shared<postprocess::EquirectangularEffect>, int, postprocess::EquirectangularEffect*&>(void*, int&&, postprocess::EquirectangularEffect*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<postprocess::EquirectangularEffect>, int,
                                           postprocess::EquirectangularEffect*&>(void* param_1, int* param_2,
                                                                                 EquirectangularEffect** param_3) {
        ref_counter_shared<postprocess::EquirectangularEffect>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10099ce70, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<postprocess::EquirectangularEffect>::ref_counter_shared(unsigned long, postprocess::EquirectangularEffect*): jumps straight to the base-object constructor

    // 0x10099ce80, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<postprocess::EquirectangularEffect>::ref_counter_shared(unsigned long, postprocess::EquirectangularEffect*)
    void ref_counter_shared<postprocess::EquirectangularEffect>::ref_counter_shared(ulong param_1,
                                                                                    EquirectangularEffect* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7220 + 16;
        *(ulong*)(this + 16) = param_1;
        *(EquirectangularEffect**)(this + 24) = param_2;
    }

    // 0x10099cec0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<postprocess::EquirectangularEffect>::DeleteData()
    void ref_counter_shared<postprocess::EquirectangularEffect>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 56;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10099cf90, 48 bytes, inline, placed by debug map only (low confidence)
    // postprocess::DepthOfFieldEffect* placement_new<postprocess::DepthOfFieldEffect>(void*)
    DepthOfFieldEffect* placement_new<postprocess::DepthOfFieldEffect>(void* param_1) {
        postprocess::DepthOfFieldEffect::DepthOfFieldEffect(param_1, 6, 5);
        return param_1;
    }

    // 0x10099cfc0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<postprocess::DepthOfFieldEffect>* placement_new<ref_counter_shared<postprocess::DepthOfFieldEffect>, int, postprocess::DepthOfFieldEffect*&>(void*, int&&, postprocess::DepthOfFieldEffect*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<postprocess::DepthOfFieldEffect>, int, postprocess::DepthOfFieldEffect*&>(
        void* param_1, int* param_2, DepthOfFieldEffect** param_3) {
        ref_counter_shared<postprocess::DepthOfFieldEffect>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10099cfe0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<postprocess::DepthOfFieldEffect>::ref_counter_shared(unsigned long, postprocess::DepthOfFieldEffect*): jumps straight to the base-object constructor

    // 0x10099cff0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<postprocess::DepthOfFieldEffect>::ref_counter_shared(unsigned long, postprocess::DepthOfFieldEffect*)
    void ref_counter_shared<postprocess::DepthOfFieldEffect>::ref_counter_shared(ulong param_1,
                                                                                 DepthOfFieldEffect* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7218 + 16;
        *(ulong*)(this + 16) = param_1;
        *(DepthOfFieldEffect**)(this + 24) = param_2;
    }

    // 0x10099d030, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<postprocess::DepthOfFieldEffect>::DeleteData()
    void ref_counter_shared<postprocess::DepthOfFieldEffect>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 432;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10099f4d0, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::AnimBase* placement_new<graphics::AnimBase, unsigned short&, PacketT<Array<unsigned char, eastl::allocator> >&>(void*, unsigned short&, PacketT<Array<unsigned char, eastl::allocator> >&)
    AnimBase* jag::placement_new<graphics::AnimBase, unsigned short&, PacketT<Array<unsigned char, eastl::allocator>>&>(
        void* param_1, ushort* param_2, PacketT* param_3) {
        graphics::AnimBase::AnimBase(param_1, (uint)*param_2, param_3);
        return param_1;
    }

    // 0x1009a03a0, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long, std::__packaged_task_func<std::__bind<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet>
   const&)::$_2>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>
   >::allocate(unsigned long,
   std::__packaged_task_func<std::__bind<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet>
   const&)::$_2>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*) */

    void
    jag::SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::Animation::ConstructFromAnimKeyFrameSet(
                                                              shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>,
                                                          SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        allocate(ulong param_1, __packaged_task_func* param_2) {
        BucketManager::Allocate(56, 4, 8);
    }

    // 0x1009a0730, 16 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<std::__bind<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet>
   const&)::$_2>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>
   >::deallocate(std::__packaged_task_func<std::__bind<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet>
   const&)::$_2>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned
   long) */

    void
    jag::SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::Animation::ConstructFromAnimKeyFrameSet(
                                                              shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>,
                                                          SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::
        deallocate(__packaged_task_func* param_1, ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 * 56);
    }

    // 0x1009a2300, 112 bytes, inline, placed by debug map only (low confidence)
    // graphics::AnimationFrameRT7* placement_new<graphics::AnimationFrameRT7, shared_ptr<graphics::AnimationFrameRT5> const&, unsigned int&, Array<graphics::LabelData, BucketAllocatorEASTL> const&, bool>(void*, shared_ptr<graphics::AnimationFrameRT5> const&, unsigned int&, Array<graphics::LabelData, BucketAllocatorEASTL> const&, bool&&)
    AnimationFrameRT7* jag::placement_new<graphics::AnimationFrameRT7, shared_ptr<graphics::AnimationFrameRT5> const&,
                                          unsigned int&, Array<graphics::LabelData, BucketAllocatorEASTL> const&, bool>(
        void* param_1, shared_ptr* param_2, uint* param_3, Array* param_4, bool* param_5) {
        uint uVar1;
        Array<graphics::LabelData, eastl::allocator> local_48[24];

        uVar1 = *param_3;
        Array<graphics::LabelData, eastl::allocator>::Array<BucketAllocatorEASTL>(local_48, param_4);
        graphics::AnimationFrameRT7::AnimationFrameRT7(param_1, param_2, uVar1, (Array*)local_48, *param_5);
        local_48->~Array();
        return param_1;
    }

    // 0x1009a2370, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimationFrameRT7, MakeSharedPool<graphics::AnimationFrameRT7, 8192> >* placement_new<MakeSharedPoolRefCounter<graphics::AnimationFrameRT7, MakeSharedPool<graphics::AnimationFrameRT7, 8192> >, MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData*&, graphics::AnimationFrameRT7*>(void*, MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData*&, graphics::AnimationFrameRT7*&&)
    MakeSharedPoolRefCounter* jag::placement_new<
        MakeSharedPoolRefCounter<graphics::AnimationFrameRT7, MakeSharedPool<graphics::AnimationFrameRT7, 8192>>,
        MakeSharedPool<graphics::AnimationFrameRT7, 8192>::RefCounterAndData*&, graphics::AnimationFrameRT7*>(
        void* param_1, RefCounterAndData** param_2, AnimationFrameRT7** param_3) {
        MakeSharedPoolRefCounter<graphics::AnimationFrameRT7,
                                 MakeSharedPool<graphics::AnimationFrameRT7, 8192>>::MakeSharedPoolRefCounter(param_1,
                                                                                                              *param_2,
                                                                                                              *param_3);
        return param_1;
    }

    // 0x1009a2b00, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimationFrameRT7, MakeSharedPool<graphics::AnimationFrameRT7, 8192> >::MakeSharedPoolRefCounter(void*, graphics::AnimationFrameRT7*): jumps straight to the base-object constructor

    // 0x1009a2b10, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimationFrameRT7, MakeSharedPool<graphics::AnimationFrameRT7, 8192> >::MakeSharedPoolRefCounter(void*, graphics::AnimationFrameRT7*)
    void jag::MakeSharedPoolRefCounter<graphics::AnimationFrameRT7, MakeSharedPool<graphics::AnimationFrameRT7, 8192>>::
        MakeSharedPoolRefCounter(MakeSharedPoolRefCounter<graphics::AnimationFrameRT7,
                                                          MakeSharedPool<graphics::AnimationFrameRT7, 8192>>* this,
                                 void* param_1, AnimationFrameRT7* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7be0 + 16;
        *(void**)(this + 16) = param_1;
        *(AnimationFrameRT7**)(this + 24) = param_2;
    }

    // 0x1009a2b50, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimationFrameRT7, MakeSharedPool<graphics::AnimationFrameRT7, 8192> >::DeleteData()
    void jag::MakeSharedPoolRefCounter<graphics::AnimationFrameRT7, MakeSharedPool<graphics::AnimationFrameRT7, 8192>>::
        DeleteData(MakeSharedPoolRefCounter<graphics::AnimationFrameRT7,
                                            MakeSharedPool<graphics::AnimationFrameRT7, 8192>>* this) {
        if (*(AnimationFrameRT7**)(this + 24) != (AnimationFrameRT7*)0) {
            (*(AnimationFrameRT7**)(this + 24))->~AnimationFrameRT7();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1009a2b80, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimationFrameRT7, MakeSharedPool<graphics::AnimationFrameRT7, 8192> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<graphics::AnimationFrameRT7, MakeSharedPool<graphics::AnimationFrameRT7, 8192>>::
        DeleteSelf(MakeSharedPoolRefCounter<graphics::AnimationFrameRT7,
                                            MakeSharedPool<graphics::AnimationFrameRT7, 8192>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<graphics::AnimationFrameRT7, 8192>::deallocate(pvVar1);
    }

    // 0x1009a3b00, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::Animation* placement_new<graphics::Animation>(void*)
    Animation* placement_new<graphics::Animation>(void* param_1) {
        graphics::Animation::Animation(param_1);
        return param_1;
    }

    // 0x1009a3b20, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::Animation>* placement_new<ref_counter_shared<graphics::Animation>, int, graphics::Animation*&>(void*, int&&, graphics::Animation*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<graphics::Animation>, int, graphics::Animation*&>(void* param_1, int* param_2,
                                                                                       Animation** param_3) {
        ref_counter_shared<graphics::Animation>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1009a3c50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::Animation>::ref_counter_shared(unsigned long, graphics::Animation*): jumps straight to the base-object constructor

    // 0x1009a3c60, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::Animation>::ref_counter_shared(unsigned long, graphics::Animation*)
    void ref_counter_shared<graphics::Animation>::ref_counter_shared(ulong param_1, Animation* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7590 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Animation**)(this + 24) = param_2;
    }

    // 0x1009a3ca0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::Animation>::DeleteData()
    void ref_counter_shared<graphics::Animation>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~Animation();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 200;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1009a60a0, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)::$_8>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::allocate(unsigned long, std::__packaged_task_func<std::__bind<graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)::$_8>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&,
   unsigned int, Array<graphics::LabelData, eastl::allocator> const&,
   math::Matrix44T<float> const&)::$_8>, SafeBucketAllocatorSTL<std::packaged_task<void
   ()> >, void ()> >::allocate(unsigned long,
   std::__packaged_task_func<std::__bind<graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&,
   unsigned int, Array<graphics::LabelData, eastl::allocator> const&,
   math::Matrix44T<float> const&)::$_8>, SafeBucketAllocatorSTL<std::packaged_task<void
   ()> >, void ()>*) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::AnimationStateProvider::BeginAsyncTasks(
            ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&,
            math::Matrix44T<float> const&)::$_8>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::allocate(ulong param_1,
                                                                               __packaged_task_func* param_2) {
        BucketManager::Allocate(40, 4, 8);
    }

    // 0x1009a6360, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)::$_8>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<std::__bind<graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)::$_8>, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<std::__bind<graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&,
   unsigned int, Array<graphics::LabelData, eastl::allocator> const&,
   math::Matrix44T<float> const&)::$_8>, SafeBucketAllocatorSTL<std::packaged_task<void
   ()> >, void ()>
   >::deallocate(std::__packaged_task_func<std::__bind<graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&,
   unsigned int, Array<graphics::LabelData, eastl::allocator> const&,
   math::Matrix44T<float> const&)::$_8>, SafeBucketAllocatorSTL<std::packaged_task<void
   ()> >, void ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL<std::__packaged_task_func<
        std::__bind<graphics::AnimationStateProvider::BeginAsyncTasks(
            ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&,
            math::Matrix44T<float> const&)::$_8>,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>::deallocate(__packaged_task_func* param_1,
                                                                                 ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 * 40);
    }

} // namespace jag

namespace jag::graphics {
    class ParticleEffectorRaw {
    public:
        ~ParticleEffectorRaw();
        void Decode(PacketT<Array<unsigned char, eastl::allocator>>&);
        ParticleEffectorRaw();

        // data members, from how the methods use this: 48 bytes
        char _unknown_0[4];
        uint field_4;        // offset 4
        float field_8;       // offset 8
        uint field_12;       // offset 12
        float field_16;      // offset 16
        float field_20;      // offset 20
        float field_24;      // offset 24
        uint field_28;       // offset 28
        undefined4 field_32; // offset 32
        undefined4 field_36; // offset 36
        undefined4 field_40; // offset 40
        undefined1 field_44; // offset 44
        char _unknown_45[3];
    };

    // 0x10099b370, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ParticleEffectorRaw::ParticleEffectorRaw(): jumps straight to the base-object constructor

    // 0x10099b380, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // ParticleEffectorRaw::ParticleEffectorRaw()
    void ParticleEffectorRaw::ParticleEffectorRaw() {
        *(undefined8*)this = 0;
        field_8 = 0.0;
        field_12 = 0;
        new (&field_16) math::Vector3T<int>();
        field_28 = 0;
        field_32 = 0;
        field_36 = 0;
        field_40 = 0;
        field_44 = 0;
    }

    // 0x10099e410, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // JointPose::JointPose(): jumps straight to the base-object constructor

    // 0x10099e420, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // JointPose::JointPose()
    void JointPose::JointPose() {
        new (this) math::QuaternionT<float>();
        new (&field_16) math::Vector4T<float>();
        new (&field_32) math::Vector4T<float>();
    }

    // 0x1009a09f0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // AnimCurveSegmentCacheBase::AnimCurveSegmentCacheBase()
    void AnimCurveSegmentCacheBase::AnimCurveSegmentCacheBase() {
        field_0 = PTR_vtable_100ee8888 + 16;
        field_8 = 0;
    }

    // 0x1009a5230, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // SimpleTwoNodeBlendTreeNode<unsigned long long>::SimpleTwoNodeBlendTreeNode()
    void SimpleTwoNodeBlendTreeNode<unsigned long long>::SimpleTwoNodeBlendTreeNode() {
        *(undefined8*)(this + 48) = 0;
        *(undefined8*)(this + 56) = 0;
        *(undefined8*)(this + 32) = 0;
        *(undefined8*)(this + 40) = 0;
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 64) = 0;
        new (this) TwoNodeBaseBlendTreeNode<unsigned long long>();
        *(undefined**)this = PTR_vtable_100ee88a0 + 16;
        *(undefined8*)(this + 72) = 0;
        *(undefined8*)(this + 80) = 0;
    }

    // 0x1009a5280, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // TwoNodeBaseBlendTreeNode<unsigned long long>::TwoNodeBaseBlendTreeNode()
    void TwoNodeBaseBlendTreeNode<unsigned long long>::TwoNodeBaseBlendTreeNode() {
        new (this) BlendTreeNode();
        *(undefined**)this = PTR_vtable_100ee8880 + 16;
        *(undefined8*)(this + 64) = 4294967296;
    }

    // 0x1009a52c0, 448 bytes, inline, placed by debug map only (low confidence)
    // TwoNodeBaseBlendTreeNode<unsigned long long>::GetPose(WrapArray<JointPose>, Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)
    void TwoNodeBaseBlendTreeNode<unsigned long long>::GetPose(WrapArray* param_2, undefined8 param_3,
                                                               Matrix44T* param_4) {
        TwoNodeBaseBlendTreeNode<unsigned long long> TVar1;
        ulonglong* puVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        BlendTreeNode* pBVar5;
        BlendTreeNode* pBVar6;
        WrapArray<game::Cutscene2DAnimation<float>::Key_const> local_70[16];
        WrapArray<game::Cutscene2DAnimation<float>::Key_const> local_60[16];
        WrapArray<game::Cutscene2DAnimation<float>::Key_const> local_50[16];
        float local_34;

        if (*(long*)(this + 56) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pVariable",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/TwoNodeBlendTreeNode.h",
                      107, (char*)0);
        }
        puVar2 =
            std::clamp<unsigned long long>(*(ulonglong**)(this + 56), (ulonglong*)(this + 40), (ulonglong*)(this + 48));
        local_34 = (float)(*puVar2 - *(long*)(this + 40)) / (float)(ulong)(*(long*)(this + 48) - *(long*)(this + 40));
        if (*(int*)(this + 64) == 1) {
            WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
                WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(local_60, param_2);
            uVar3 = (**(code**)(*(long*)this + 64))(this);
            uVar4 = (**(code**)(*(long*)this + 72))(this);
            TwoNodeBlendHelpers::GetAdditivePose(local_34, local_60, uVar3, uVar4, *(undefined4*)(this + 68), param_3,
                                                 param_4);
            TVar1 = this[8];
        } else {
            if (*(int*)(this + 64) != 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_blendType == TwoNodeBlendTreeNodeBlendType::ADD",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/TwoNodeBlendTreeNode.h",
                          119, (char*)0);
            }
            WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
                WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(local_70, param_2);
            uVar3 = (**(code**)(*(long*)this + 64))(this);
            uVar4 = (**(code**)(*(long*)this + 72))(this);
            TwoNodeBlendHelpers::GetLerpPose(local_34, local_70, uVar3, uVar4, *(undefined4*)(this + 68), param_3,
                                             param_4);
            TVar1 = this[8];
        }
        if (TVar1 != (TwoNodeBaseBlendTreeNode<unsigned long long>)0) {
            pBVar5 = (BlendTreeNode*)(**(code**)(*(long*)this + 64))(this);
            pBVar6 = (BlendTreeNode*)(**(code**)(*(long*)this + 72))(this);
            WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
                WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(local_50, param_2);
            TwoNodeBlendHelpers::DebugDrawPose(pBVar5, pBVar6, local_50, param_4, (Vector3T*)(this + 12),
                                               (Vector3T*)(this + 24));
        }
    }

    // 0x1009a5480, 80 bytes, inline, placed by debug map only (low confidence)
    // TwoNodeBaseBlendTreeNode<unsigned long long>::GetBindInfo() const
    jag* TwoNodeBaseBlendTreeNode<unsigned long long>::GetBindInfo() {
        long* plVar2;
        jag* this_00;
        undefined1 auVar3[16];

        plVar2 = (long*)(**(code**)(*(long*)this + 64))();
        auVar3 = (**(code**)(*plVar2 + 24))(plVar2);
        this_00 = auVar3._0_8_;
        if (operator==(this_00, (shared_ptr*)&BlendTreeNode::NullAnimBase, auVar3._8_8_)) {
            plVar2 = (long*)(**(code**)(*(long*)this + 72))(this);
            this_00 = (jag*)(**(code**)(*plVar2 + 24))(plVar2);
        }
        return this_00;
    }

    // 0x1009a54d0, 176 bytes, inline, placed by debug map only (low confidence)
    // TwoNodeBaseBlendTreeNode<unsigned long long>::Update(unsigned int)
    void TwoNodeBaseBlendTreeNode<unsigned long long>::Update(uint param_1) {
        long lVar1;
        long* plVar2;

        if (**(long**)(this + 56) != *(long*)(this + 48)) {
            lVar1 = (**(code**)(*(long*)this + 64))(this);
            if (lVar1 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("GetLeftNode()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/TwoNodeBlendTreeNode.h",
                          77, (char*)0);
            }
            plVar2 = (long*)(**(code**)(*(long*)this + 64))(this);
            (**(code**)(*plVar2 + 32))(plVar2, param_1);
        }
        if (**(long**)(this + 56) != *(long*)(this + 40)) {
            lVar1 = (**(code**)(*(long*)this + 72))(this);
            if (lVar1 == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("GetRightNode()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/TwoNodeBlendTreeNode.h",
                          83, (char*)0);
            }
            plVar2 = (long*)(**(code**)(*(long*)this + 72))(this);
            (**(code**)(*plVar2 + 32))(plVar2, param_1);
        }
    }

    // 0x1009a5580, 160 bytes, inline, placed by debug map only (low confidence)
    // TwoNodeBaseBlendTreeNode<unsigned long long>::Reset(unsigned int)
    void TwoNodeBaseBlendTreeNode<unsigned long long>::Reset(uint param_1) {
        long lVar1;
        long* plVar2;

        lVar1 = (**(code**)(*(long*)this + 64))();
        if (lVar1 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("GetLeftNode()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/TwoNodeBlendTreeNode.h",
                      94, (char*)0);
        }
        lVar1 = (**(code**)(*(long*)this + 72))(this);
        if (lVar1 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("GetRightNode()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/TwoNodeBlendTreeNode.h",
                      95, (char*)0);
        }
        plVar2 = (long*)(**(code**)(*(long*)this + 64))(this);
        (**(code**)(*plVar2 + 40))(plVar2, param_1);
        plVar2 = (long*)(**(code**)(*(long*)this + 72))(this);
        (**(code**)(*plVar2 + 40))(plVar2, param_1);
    }

    // 0x1009a5620, 16 bytes, inline, placed by debug map only (low confidence)
    // SimpleTwoNodeBlendTreeNode<unsigned long long>::GetTypeString() const
    char* SimpleTwoNodeBlendTreeNode<unsigned long long>::GetTypeString() {
        return "SimpleTwoNode";
    }

    // 0x1009a5630, 464 bytes, inline, placed by debug map only (low confidence)
    // SimpleTwoNodeBlendTreeNode<unsigned long long>::GetTreeAsString() const
    SimpleTwoNodeBlendTreeNode<unsigned long long>* SimpleTwoNodeBlendTreeNode<unsigned long long>::GetTreeAsString() {
        char* pcVar1;
        long* plVar2;
        BaseConfigTypeList* in_RSI;
        eastl::string local_118[32];
        eastl local_f8[32];
        eastl local_d8[32];
        eastl local_b8[32];
        eastl local_98[32];
        allocator local_78[8];
        basic_string local_70[32];
        basic_string local_50[32];

        pcVar1 = (char*)(*(code*)in_RSI->field_0[6])();
        eastl::allocator::allocator(local_78, "EASTL basic_string");
        eastl::string::basic_string(local_118, pcVar1, local_78);
        eastl::operator+(local_98, (basic_string*)local_118, (value_type*)"(");
        plVar2 = (long*)in_RSI->size();
        (**(code**)(*plVar2 + 56))(local_70, plVar2);
        eastl::operator+(local_b8, (basic_string*)local_98, local_70);
        eastl::operator+(local_d8, (basic_string*)local_b8, (value_type*)&DAT_100e3583a);
        plVar2 = (long*)in_RSI->GetConfigGroup();
        (**(code**)(*plVar2 + 56))(local_50, plVar2);
        eastl::operator+(local_f8, (basic_string*)local_d8, local_50);
        eastl::operator+((eastl*)this, (basic_string*)local_f8, (value_type*)&DAT_100e38de0);
        local_f8->~basic_string();
        local_50->~basic_string();
        local_d8->~basic_string();
        local_b8->~basic_string();
        local_70->~basic_string();
        local_98->~basic_string();
        eastl::string::~basic_string(local_118);
        return this;
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x1009a3a80, 128 bytes, inline, placed by debug map only (low confidence)
    // Matrix43T<float>::Set(float, float, float, float, float, float, float, float, float, float, float, float)
    Matrix43T<float>* Matrix43T<float>::Set(float param_1, float param_2, float param_3, float param_4, float param_5,
                                            float param_6, float param_7, float param_8, float param_9, float param_10,
                                            float param_11, float param_12) {
        Set(param_1, param_2, param_3);
        ((this + 12))->Set(param_4, param_5, param_6);
        ((this + 24))->Set(param_7, param_8, param_9);
        ((this + 36))->Set(param_10, param_11, param_12);
        return this;
    }

} // namespace jag::math
