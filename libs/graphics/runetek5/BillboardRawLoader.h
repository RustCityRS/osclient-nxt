// libs/graphics/runetek5/BillboardRawLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class BillboardRawLoader {
    public:
        GetBillboardTypes() const;
        Initialise(Js5ResourceProvider*, Js5ArchiveSettings const*);
        GetBillboardCount() const;
        GetMaxBillboardID() const;
        ulong MainLogic();
        void Destruct();
        BillboardRawLoader();
        ~BillboardRawLoader();

        // data members, from how the methods use this: 32 bytes
        Js5ResourceProvider* field_0; // offset 0
        Js5ArchiveSettings* field_8;  // offset 8
        int field_16;                 // offset 16
        uint field_20;                // offset 20
        char _unknown_24[8];
    };

    // 0x10098ea30, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // BillboardRawLoader::BillboardRawLoader(): jumps straight to the base-object constructor

    // 0x10098ea40, 16 bytes, base-object constructor, inline, placed by class name and debug map
    // BillboardRawLoader::BillboardRawLoader()
    void BillboardRawLoader::BillboardRawLoader() {
        new (&field_24) Array<BillboardRaw, eastl::allocator>();
    }

    // 0x10098ea90, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ShaderResourceSlotManager::ShaderResourceSlotManager()
    void ShaderResourceSlotManager::ShaderResourceSlotManager() {
        new (this) ShaderSlotManager();
        new (&field_32) eastl::vector_map<unsigned int, unsigned int, eastl::less<unsigned int>, eastl::allocator,
                                          eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>>();
    }

    // 0x100990f60, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // ShaderResourceSlotManager::~ShaderResourceSlotManager()
    void ShaderResourceSlotManager::~ShaderResourceSlotManager() {
        (&field_32)->~vector_map();
        ~ShaderSlotManager();
    }

    // 0x100990fa0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // BillboardRawLoader::~BillboardRawLoader(): jumps straight to the base-object destructor

    // 0x100990fb0, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // BillboardRawLoader::~BillboardRawLoader()
    void BillboardRawLoader::~BillboardRawLoader() {
        (&field_24)->~Array();
    }

    // 0x100991430, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // AnimCurveSegmentCacheData::AnimCurveSegmentCacheData()
    void AnimCurveSegmentCacheData::AnimCurveSegmentCacheData() {
        field_0 = 4294967295;
        field_4 = 0;
        field_8 = 0;
        field_16 = 0;
        field_24 = 0;
        field_32 = 0;
        field_40 = 0;
    }

    // 0x1009915a0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // AnimationFrameRT5Transform::AnimationFrameRT5Transform()
    void AnimationFrameRT5Transform::AnimationFrameRT5Transform() {
        new (&field_4) math::Vector3T<int>();
        new (&field_16) math::Vector3T<int>();
        new (((long)&field_24 + 4)) math::Vector3T<int>();
        new (&field_40) math::QuaternionT<float>();
    }

    // 0x100991910, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // AnimationInfo::AnimationInfo(): jumps straight to the base-object constructor

    // 0x100991920, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // AnimationInfo::AnimationInfo()
    void AnimationInfo::AnimationInfo() {
        field_10 = 0;
        field_18 = 0;
        field_20 = 0;
        field_24 = 0;
        field_25 = 0;
        field_0 = 0;
        *(undefined8*)&field_8 = 0;
        new (field_32, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1009928d0, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // AnimationInfoBlendTreeNode::AnimationInfoBlendTreeNode()
    void AnimationInfoBlendTreeNode::AnimationInfoBlendTreeNode() {
        new (this) BlendTreeNode();
        field_0 = &PTR__AnimationInfoBlendTreeNode_100f1bba8;
        new (&field_40) AnimationInfo();
        new (&field_88) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
    }

    // 0x100992a30, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // AnimationInfoBlendTreeNode::~AnimationInfoBlendTreeNode()
    void AnimationInfoBlendTreeNode::~AnimationInfoBlendTreeNode() {
        field_0 = &PTR__AnimationInfoBlendTreeNode_100f1bba8;
        (&field_88)->~LRUHashCacheWrapper();
        (&field_40)->~Sprite();
        ~AutoSingleton();
    }

    // 0x100998a40, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // AnimationFrameRT5Transform::AnimationFrameRT5Transform(AnimationFrameRT5Transform&&): jumps straight to the base-object constructor

    // 0x100998a50, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // AnimationFrameRT5Transform::AnimationFrameRT5Transform(AnimationFrameRT5Transform&&)
    void AnimationFrameRT5Transform::AnimationFrameRT5Transform(AnimationFrameRT5Transform* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;

        field_32 = param_1->field_32;
        uVar3 = param_1->field_0;
        uVar4 = param_1->field_4;
        uVar1 = param_1->field_8;
        uVar2 = param_1->field_24;
        field_16 = param_1->field_16;
        field_24 = uVar2;
        field_0 = uVar3;
        field_4 = uVar4;
        field_8 = uVar1;
        new (&field_40, (QuaternionT*)&param_1->field_40) math::QuaternionT<float>();
        field_56 = param_1->field_56;
    }

} // namespace jag::graphics

namespace jag {
    // 0x10098f480, 32 bytes, inline, placed by debug map only (low confidence)
    // SafeBucketAllocatorSTL<std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<ThreadPool::SetAffinity(unsigned int)::{lambda()#1}>(char const*, ThreadPool::SetAffinity(unsigned int)::{lambda()#1}&&)::{lambda()#1}, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()> >::deallocate(std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<ThreadPool::SetAffinity(unsigned int)::{lambda()#1}>(char const*, ThreadPool::SetAffinity(unsigned int)::{lambda()#1}&&)::{lambda()#1}, SafeBucketAllocatorSTL<std::packaged_task<void ()> >, void ()>*, unsigned long)
    /* SafeBucketAllocatorSTL<std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<ThreadPool::SetAffinity(unsigned
   int)::{lambda()#1}>(char const*, ThreadPool::SetAffinity(unsigned
   int)::{lambda()#1}&&)::{lambda()#1}, SafeBucketAllocatorSTL<std::packaged_task<void ()> >,
   void ()>
   >::deallocate(std::__packaged_task_func<ThreadPool::RunOnceOnAllThreads<ThreadPool::SetAffinity(unsigned
   int)::{lambda()#1}>(char const*, ThreadPool::SetAffinity(unsigned
   int)::{lambda()#1}&&)::{lambda()#1}, SafeBucketAllocatorSTL<std::packaged_task<void ()> >,
   void ()>*, unsigned long) */

    void jag::SafeBucketAllocatorSTL < std::__packaged_task_func < ThreadPool::RunOnceOnAllThreads <
        ThreadPool::SetAffinity(unsigned int)::{
        lambda() #1
    }
    > (char const*, ThreadPool::SetAffinity(unsigned int)::{ lambda() #1 }&&)::{
        lambda() #1
    }
    , SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void() >>
            ::deallocate(SafeBucketAllocatorSTL<std::__packaged_task_func<
                             ThreadPool::RunOnceOnAllThreads<ThreadPool::SetAffinity(unsigned int)::_lambda() _1_>(
                                 char const*, ThreadPool::SetAffinity(unsigned int)::_lambda() _1_&&)::_lambda() _1_,
                             SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>>* this,
                         __packaged_task_func* param_1, ulong param_2) {
        BucketManager::DeAllocate(param_1, param_2 << 4);
    }

    // 0x1009963a0, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::AnimBase* placement_new<graphics::AnimBase, unsigned int&, PacketT<Array<unsigned char, eastl::allocator> >&>(void*, unsigned int&, PacketT<Array<unsigned char, eastl::allocator> >&)
    AnimBase* jag::placement_new<graphics::AnimBase, unsigned int&, PacketT<Array<unsigned char, eastl::allocator>>&>(
        void* param_1, uint* param_2, PacketT* param_3) {
        graphics::AnimBase::AnimBase(param_1, *param_2, param_3);
        return param_1;
    }

    // 0x1009963c0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimBase, MakeSharedPool<graphics::AnimBase, 256> >* placement_new<MakeSharedPoolRefCounter<graphics::AnimBase, MakeSharedPool<graphics::AnimBase, 256> >, MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData*&, graphics::AnimBase*>(void*, MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData*&, graphics::AnimBase*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<graphics::AnimBase, MakeSharedPool<graphics::AnimBase, 256>>,
                       MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData*&, graphics::AnimBase*>(
        void* param_1, RefCounterAndData** param_2, AnimBase** param_3) {
        MakeSharedPoolRefCounter<graphics::AnimBase, MakeSharedPool<graphics::AnimBase, 256>>::MakeSharedPoolRefCounter(
            param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x100996440, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimBase, MakeSharedPool<graphics::AnimBase, 256> >::MakeSharedPoolRefCounter(void*, graphics::AnimBase*): jumps straight to the base-object constructor

    // 0x100996450, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimBase, MakeSharedPool<graphics::AnimBase, 256> >::MakeSharedPoolRefCounter(void*, graphics::AnimBase*)
    void jag::MakeSharedPoolRefCounter<graphics::AnimBase, MakeSharedPool<graphics::AnimBase, 256>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<graphics::AnimBase, MakeSharedPool<graphics::AnimBase, 256>>* this, void* param_1,
            AnimBase* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7c20 + 16;
        *(void**)(this + 16) = param_1;
        *(AnimBase**)(this + 24) = param_2;
    }

    // 0x100996490, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimBase, MakeSharedPool<graphics::AnimBase, 256> >::DeleteData()
    void jag::MakeSharedPoolRefCounter<graphics::AnimBase, MakeSharedPool<graphics::AnimBase, 256>>::DeleteData(
        MakeSharedPoolRefCounter<graphics::AnimBase, MakeSharedPool<graphics::AnimBase, 256>>* this) {
        if (*(AnimBase**)(this + 24) != (AnimBase*)0) {
            (*(AnimBase**)(this + 24))->~AnimBase();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1009964c0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimBase, MakeSharedPool<graphics::AnimBase, 256> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<graphics::AnimBase, MakeSharedPool<graphics::AnimBase, 256>>::DeleteSelf(
        MakeSharedPoolRefCounter<graphics::AnimBase, MakeSharedPool<graphics::AnimBase, 256>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<graphics::AnimBase, 256>::deallocate(pvVar1);
    }

    // 0x100996bd0, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::AnimationFrameRT5* placement_new<graphics::AnimationFrameRT5, shared_ptr<graphics::AnimBase>&, PacketT<Array<unsigned char, eastl::allocator> >&>(void*, shared_ptr<graphics::AnimBase>&, PacketT<Array<unsigned char, eastl::allocator> >&)
    AnimationFrameRT5* jag::placement_new<graphics::AnimationFrameRT5, shared_ptr<graphics::AnimBase>&,
                                          PacketT<Array<unsigned char, eastl::allocator>>&>(void* param_1,
                                                                                            shared_ptr* param_2,
                                                                                            PacketT* param_3) {
        graphics::AnimationFrameRT5::AnimationFrameRT5(param_1, param_2, param_3);
        return param_1;
    }

    // 0x100996bf0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimationFrameRT5, MakeSharedPool<graphics::AnimationFrameRT5, 20480> >* placement_new<MakeSharedPoolRefCounter<graphics::AnimationFrameRT5, MakeSharedPool<graphics::AnimationFrameRT5, 20480> >, MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData*&, graphics::AnimationFrameRT5*>(void*, MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData*&, graphics::AnimationFrameRT5*&&)
    MakeSharedPoolRefCounter* jag::placement_new<
        MakeSharedPoolRefCounter<graphics::AnimationFrameRT5, MakeSharedPool<graphics::AnimationFrameRT5, 20480>>,
        MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData*&, graphics::AnimationFrameRT5*>(
        void* param_1, RefCounterAndData** param_2, AnimationFrameRT5** param_3) {
        MakeSharedPoolRefCounter<graphics::AnimationFrameRT5, MakeSharedPool<graphics::AnimationFrameRT5, 20480>>::
            MakeSharedPoolRefCounter(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x1009972d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimationFrameRT5, MakeSharedPool<graphics::AnimationFrameRT5, 20480> >::MakeSharedPoolRefCounter(void*, graphics::AnimationFrameRT5*): jumps straight to the base-object constructor

    // 0x1009972e0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimationFrameRT5, MakeSharedPool<graphics::AnimationFrameRT5, 20480> >::MakeSharedPoolRefCounter(void*, graphics::AnimationFrameRT5*)
    void
    jag::MakeSharedPoolRefCounter<graphics::AnimationFrameRT5, MakeSharedPool<graphics::AnimationFrameRT5, 20480>>::
        MakeSharedPoolRefCounter(MakeSharedPoolRefCounter<graphics::AnimationFrameRT5,
                                                          MakeSharedPool<graphics::AnimationFrameRT5, 20480>>* this,
                                 void* param_1, AnimationFrameRT5* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7bd8 + 16;
        *(void**)(this + 16) = param_1;
        *(AnimationFrameRT5**)(this + 24) = param_2;
    }

    // 0x100997320, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimationFrameRT5, MakeSharedPool<graphics::AnimationFrameRT5, 20480> >::DeleteData()
    void
    jag::MakeSharedPoolRefCounter<graphics::AnimationFrameRT5, MakeSharedPool<graphics::AnimationFrameRT5, 20480>>::
        DeleteData(MakeSharedPoolRefCounter<graphics::AnimationFrameRT5,
                                            MakeSharedPool<graphics::AnimationFrameRT5, 20480>>* this) {
        if (*(AnimationFrameRT5**)(this + 24) != (AnimationFrameRT5*)0) {
            (*(AnimationFrameRT5**)(this + 24))->~AnimationFrameRT5();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100997350, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimationFrameRT5, MakeSharedPool<graphics::AnimationFrameRT5, 20480> >::DeleteSelf()
    void
    jag::MakeSharedPoolRefCounter<graphics::AnimationFrameRT5, MakeSharedPool<graphics::AnimationFrameRT5, 20480>>::
        DeleteSelf(MakeSharedPoolRefCounter<graphics::AnimationFrameRT5,
                                            MakeSharedPool<graphics::AnimationFrameRT5, 20480>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<graphics::AnimationFrameRT5, 20480>::deallocate(pvVar1);
    }

} // namespace jag

namespace jag::math {
    // 0x100997a20, 96 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<float> Lerp<QuaternionT<float>, float>(QuaternionT<float> const&, QuaternionT<float> const&, float)
    math* Lerp<QuaternionT<float>, float>(QuaternionT* param_1, QuaternionT* param_2, float param_3) {
        undefined1 local_50[16];
        undefined1 local_40[20];

        operator-((math*)local_40, param_2, param_1);
        operator*((math*)local_50, (QuaternionT*)local_40, param_3);
        operator+(this, param_1, (QuaternionT*)local_50);
        return this;
    }

    // 0x100997a90, 224 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<float> operator+<float>(QuaternionT<float> const&, QuaternionT<float> const&)
    /* QuaternionT<float> TEMPNAMEPLACEHOLDERVALUE(QuaternionT<float>
   const&, QuaternionT<float> const&) */

    math* operator+(QuaternionT* param_1, QuaternionT* param_2) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        vector* pvVar8;
        float* pfVar9;

        pvVar8 = param_1->SSOBeginPtr(param_1);
        fVar1 = *(float*)pvVar8;
        pvVar8 = param_2->SSOBeginPtr(param_1);
        fVar2 = *(float*)pvVar8;
        pfVar9 = (float*)param_1->y();
        fVar3 = *pfVar9;
        pfVar9 = (float*)param_2->y();
        fVar4 = *pfVar9;
        pfVar9 = (float*)param_1->second();
        fVar5 = *pfVar9;
        pfVar9 = (float*)param_2->second();
        fVar6 = *pfVar9;
        pfVar9 = (float*)param_1->qw();
        fVar7 = *pfVar9;
        pfVar9 = (float*)param_2->qw();
        new (this) QuaternionT<float>(fVar1 + fVar2, fVar3 + fVar4, fVar5 + fVar6, fVar7 + *pfVar9);
        return this;
    }

    // 0x100997b70, 144 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<float> operator*<float>(QuaternionT<float> const&, float)
    /* QuaternionT<float> TEMPNAMEPLACEHOLDERVALUE(QuaternionT<float>
   const&, float) */

    math* operator*(QuaternionT* param_1, float param_2) {
        float fVar1;
        float fVar2;
        float fVar3;
        vector* pvVar4;
        float* pfVar5;

        pvVar4 = param_1->SSOBeginPtr(param_1);
        fVar1 = *(float*)pvVar4;
        pfVar5 = (float*)param_1->y();
        fVar2 = *pfVar5;
        pfVar5 = (float*)param_1->second();
        fVar3 = *pfVar5;
        pfVar5 = (float*)param_1->qw();
        new (this) QuaternionT<float>(fVar1 * param_2, fVar2 * param_2, fVar3 * param_2, param_2 * *pfVar5);
        return this;
    }

    // 0x100997c00, 224 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<float> operator-<float>(QuaternionT<float> const&, QuaternionT<float> const&)
    /* QuaternionT<float> TEMPNAMEPLACEHOLDERVALUE(QuaternionT<float>
   const&, QuaternionT<float> const&) */

    math* operator-(QuaternionT* param_1, QuaternionT* param_2) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        vector* pvVar8;
        float* pfVar9;

        pvVar8 = param_1->SSOBeginPtr(param_1);
        fVar1 = *(float*)pvVar8;
        pvVar8 = param_2->SSOBeginPtr(param_1);
        fVar2 = *(float*)pvVar8;
        pfVar9 = (float*)param_1->y();
        fVar3 = *pfVar9;
        pfVar9 = (float*)param_2->y();
        fVar4 = *pfVar9;
        pfVar9 = (float*)param_1->second();
        fVar5 = *pfVar9;
        pfVar9 = (float*)param_2->second();
        fVar6 = *pfVar9;
        pfVar9 = (float*)param_1->qw();
        fVar7 = *pfVar9;
        pfVar9 = (float*)param_2->qw();
        new (this) QuaternionT<float>(fVar1 - fVar2, fVar3 - fVar4, fVar5 - fVar6, fVar7 - *pfVar9);
        return this;
    }

} // namespace jag::math

// 0x100997a00, 16 bytes, placed by debug map only (low confidence)
// asin(float)
void asin(float param_1) {
    _asinf();
}

// 0x100997a10, 16 bytes, placed by debug map only (low confidence)
// atan2(float, float)
void atan2(float param_1, float param_2) {
    _atan2f();
}

// 0x100997a80, 16 bytes, placed by debug map only (low confidence)
// acos(float)
void acos(float param_1) {
    _acosf();
}
