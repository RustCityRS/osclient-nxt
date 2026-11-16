// libs/graphics/runetek5/BillboardRawLoader.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphics {
    class BillboardRawLoader {
    public:
        void GetBillboardTypes() const;
        void Initialise(Js5ResourceProvider* arg1, const Js5ArchiveSettings* arg2);
        int GetBillboardCount() const;
        unsigned int GetMaxBillboardID() const;
        unsigned long MainLogic();
        void Destruct();
        BillboardRawLoader();
        ~BillboardRawLoader();

    private:
        Js5ResourceProvider* field_0;
        Js5ArchiveSettings* field_8;
        int m_billboardCount;
        unsigned int m_maxBillboardID;
        uint8_t _unknown_24[8];
    };

    // 0x10098ea40
    BillboardRawLoader::BillboardRawLoader() {
        new (&field_24) Array<BillboardRaw>();
    }

    // 0x10098ea90
    ShaderResourceSlotManager::ShaderResourceSlotManager() : ShaderSlotManager() {}

    // 0x100990f60
    ShaderResourceSlotManager::~ShaderResourceSlotManager() {}

    // 0x100990fb0
    BillboardRawLoader::~BillboardRawLoader() {
        field_24.~Array();
    }

    // 0x100991430
    AnimCurveSegmentCacheData::AnimCurveSegmentCacheData()
        : field_0(4294967295), field_4(0), field_8(0), field_16(0), field_24(0), field_32(0), field_40(0) {}

    // 0x1009915a0
    AnimationFrameRT5Transform::AnimationFrameRT5Transform() {
        new (&field_4) math::Vector3T();
        new (&field_16) math::Vector3T();
        new ((Vector3T<int>*)((long)&field_24 + 4)) math::Vector3T();
        new (&field_40) math::QuaternionT<float>();
    }

    // 0x100991920
    AnimationInfo::AnimationInfo() : field_10(0), field_18(0), field_20(0), field_24(0), field_25(0), field_0(0) {
        *(uint64_t*)&field_8 = 0;
        new (&field_32) shared_ptr();
    }

    // 0x1009928d0
    AnimationInfoBlendTreeNode::AnimationInfoBlendTreeNode() : BlendTreeNode() {}

    // 0x100992a30
    AnimationInfoBlendTreeNode::~AnimationInfoBlendTreeNode() {
        field_88.~LRUHashCacheWrapper();
        field_40->~Sprite();
    }

    // 0x100998a50
    AnimationFrameRT5Transform::AnimationFrameRT5Transform(AnimationFrameRT5Transform&& animationFrameRT5Transform)
        : field_32(animationFrameRT5Transform.field_32) {
        unsigned int uVar3 = animationFrameRT5Transform.field_0;
        uint32_t uVar4 = animationFrameRT5Transform.field_4;
        uint64_t uVar1 = animationFrameRT5Transform.field_8;
        uint64_t uVar2 = animationFrameRT5Transform.field_24;
        field_16 = animationFrameRT5Transform.field_16;
        field_24 = uVar2;
        field_0 = uVar3;
        field_4 = uVar4;
        field_8 = uVar1;
        new (&field_40) math::QuaternionT<float>(animationFrameRT5Transform.field_40);
        field_56 = animationFrameRT5Transform.field_56;
    }

} // namespace jag::graphics

namespace jag {
    // 0x10098f480
    void SafeBucketAllocatorSTL < std::__packaged_task_func < ThreadPool::RunOnceOnAllThreads <
        ThreadPool::SetAffinity(unsigned int)::{
        lambda() #1
    }
    > (char const*, ThreadPool::SetAffinity(unsigned int)::{ lambda() #1 }&&)::{
        lambda() #1
    }
    , SafeBucketAllocatorSTL<std::packaged_task<void()>>,
        void() >> ::deallocate(
                      std::__packaged_task_func<
                          ThreadPool::RunOnceOnAllThreads<ThreadPool::SetAffinity(unsigned int)::{ lambda() #1 }>(
                              char const*, ThreadPool::SetAffinity(unsigned int)::{ lambda() #1 }&&)::{ lambda() #1 },
                          SafeBucketAllocatorSTL<std::packaged_task<void()>>, void()>* packaged_task_func,
                      unsigned long arg2) {
        packaged_task_func->DeAllocate((arg2 << 4), arg2 << 4);
    }

    // 0x1009963a0
    graphics::AnimBase* placement_new<graphics::AnimBase, unsigned int&, PacketT<Array<unsigned char>>&>(
        void* arg1, unsigned int& arg2, PacketT<Array<unsigned char>>& arg3) {
        new (arg1) graphics::AnimBase(arg2, arg3);
        return arg1;
    }

    // 0x1009963c0
    MakeSharedPoolRefCounter<graphics::AnimBase, MakeSharedPool<graphics::AnimBase, 256>>*
    placement_new<MakeSharedPoolRefCounter<graphics::AnimBase, MakeSharedPool<graphics::AnimBase, 256>>,
                  MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData*&, graphics::AnimBase*>(
        void* arg1, MakeSharedPool<graphics::AnimBase, 256>::RefCounterAndData*& arg2, graphics::AnimBase*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<graphics::AnimBase, MakeSharedPool<graphics::AnimBase, 256>>(arg2, arg3);
        return arg1;
    }

    // 0x100996450
    MakeSharedPoolRefCounter<graphics::AnimBase, MakeSharedPool<graphics::AnimBase, 256>>::MakeSharedPoolRefCounter(
        void* arg1, graphics::AnimBase* animBase)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7c20 + 16;
        *(void**)(this + 16) = arg1;
        *(AnimBase**)(this + 24) = animBase;
    }

    // 0x100996490
    void MakeSharedPoolRefCounter<graphics::AnimBase, MakeSharedPool<graphics::AnimBase, 256>>::DeleteData() {
        if (*(AnimBase**)(this + 24) != nullptr) {
            (*(AnimBase**)(this + 24))->~AnimBase();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x1009964c0
    void MakeSharedPoolRefCounter<graphics::AnimBase, MakeSharedPool<graphics::AnimBase, 256>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<graphics::AnimBase, 256>::deallocate(arg1);
    }

    // 0x100996bd0
    graphics::AnimationFrameRT5*
    placement_new<graphics::AnimationFrameRT5, shared_ptr<graphics::AnimBase>&, PacketT<Array<unsigned char>>&>(
        void* arg1, shared_ptr<graphics::AnimBase>& animBase, PacketT<Array<unsigned char>>& arg3) {
        new (arg1) graphics::AnimationFrameRT5(animBase, arg3);
        return arg1;
    }

    // 0x100996bf0
    MakeSharedPoolRefCounter<graphics::AnimationFrameRT5, MakeSharedPool<graphics::AnimationFrameRT5, 20480>>*
    placement_new<
        MakeSharedPoolRefCounter<graphics::AnimationFrameRT5, MakeSharedPool<graphics::AnimationFrameRT5, 20480>>,
        MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData*&, graphics::AnimationFrameRT5*>(
        void* arg1, MakeSharedPool<graphics::AnimationFrameRT5, 20480>::RefCounterAndData*& arg2,
        graphics::AnimationFrameRT5*&& arg3) {
        new (arg1)
            MakeSharedPoolRefCounter<graphics::AnimationFrameRT5, MakeSharedPool<graphics::AnimationFrameRT5, 20480>>(
                arg2, arg3);
        return arg1;
    }

    // 0x1009972e0
    MakeSharedPoolRefCounter<graphics::AnimationFrameRT5, MakeSharedPool<graphics::AnimationFrameRT5, 20480>>::
        MakeSharedPoolRefCounter(void* arg1, graphics::AnimationFrameRT5* animationFrameRT5)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7bd8 + 16;
        *(void**)(this + 16) = arg1;
        *(AnimationFrameRT5**)(this + 24) = animationFrameRT5;
    }

    // 0x100997320
    void MakeSharedPoolRefCounter<graphics::AnimationFrameRT5,
                                  MakeSharedPool<graphics::AnimationFrameRT5, 20480>>::DeleteData() {
        if (*(AnimationFrameRT5**)(this + 24) != nullptr) {
            (*(AnimationFrameRT5**)(this + 24))->~AnimationFrameRT5();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x100997350
    void MakeSharedPoolRefCounter<graphics::AnimationFrameRT5,
                                  MakeSharedPool<graphics::AnimationFrameRT5, 20480>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<graphics::AnimationFrameRT5, 20480>::deallocate(arg1);
    }

} // namespace jag

namespace jag::math {
    // 0x100997a20
    QuaternionT<float> Lerp<QuaternionT<float>, float>(const QuaternionT<float>& quaternion1,
                                                       const QuaternionT<float>& quaternion2, float arg3) {
        QuaternionT<float>* in_RDX;
        QuaternionT<float> local_50;
        QuaternionT<float> local_40;

        local_40 - *in_RDX;
        &local_50* arg3;
        quaternion1 + quaternion2;
        return quaternion1;
    }

    // 0x100997a90
    QuaternionT<float> operator+ <float>(const QuaternionT<float>& quaternion1, const QuaternionT<float>& quaternion2) {
        Layout* in_RDX;

        auto pfVar8 = quaternion2.SSOBeginPtr();
        float fVar1 = *pfVar8;
        pfVar8 = (float*)in_RDX->SSOBeginPtr();
        float fVar2 = *pfVar8;
        pfVar8 = (float*)quaternion2.y();
        float fVar3 = *pfVar8;
        pfVar8 = (float*)in_RDX->y();
        float fVar4 = *pfVar8;
        pfVar8 = (float*)quaternion2.second();
        float fVar5 = *pfVar8;
        pfVar8 = (float*)in_RDX->second();
        float fVar6 = *pfVar8;
        pfVar8 = (float*)quaternion2.qw();
        float fVar7 = *pfVar8;
        pfVar8 = (float*)in_RDX->qw();
        new (quaternion1) QuaternionT<float>(fVar1 + fVar2, fVar3 + fVar4, fVar5 + fVar6, fVar7 + *pfVar8);
        return quaternion1;
    }

    // 0x100997b70
    QuaternionT<float> operator* <float>(const QuaternionT<float>& quaternion, float arg2) {
        Layout* in_RSI;

        auto pfVar4 = in_RSI->SSOBeginPtr();
        float fVar1 = *pfVar4;
        pfVar4 = (float*)in_RSI->y();
        float fVar2 = *pfVar4;
        pfVar4 = (float*)in_RSI->second();
        float fVar3 = *pfVar4;
        pfVar4 = (float*)in_RSI->qw();
        new (quaternion) QuaternionT<float>(fVar1 * arg2, fVar2 * arg2, fVar3 * arg2, arg2 * *pfVar4);
        return quaternion;
    }

    // 0x100997c00
    QuaternionT<float> operator- <float>(const QuaternionT<float>& quaternion1, const QuaternionT<float>& quaternion2) {
        Layout* in_RDX;

        auto pfVar8 = quaternion2.SSOBeginPtr();
        float fVar1 = *pfVar8;
        pfVar8 = (float*)in_RDX->SSOBeginPtr();
        float fVar2 = *pfVar8;
        pfVar8 = (float*)quaternion2.y();
        float fVar3 = *pfVar8;
        pfVar8 = (float*)in_RDX->y();
        float fVar4 = *pfVar8;
        pfVar8 = (float*)quaternion2.second();
        float fVar5 = *pfVar8;
        pfVar8 = (float*)in_RDX->second();
        float fVar6 = *pfVar8;
        pfVar8 = (float*)quaternion2.qw();
        float fVar7 = *pfVar8;
        pfVar8 = (float*)in_RDX->qw();
        new (quaternion1) QuaternionT<float>(fVar1 - fVar2, fVar3 - fVar4, fVar5 - fVar6, fVar7 - *pfVar8);
        return quaternion1;
    }

} // namespace jag::math

// 0x100997a00
void asin(float arg1) {
    _asinf();
}

// 0x100997a10
void atan2(float arg1, float arg2) {
    _atan2f();
}

// 0x100997a80
void acos(float arg1) {
    _acosf();
}
