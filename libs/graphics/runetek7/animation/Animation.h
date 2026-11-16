// libs/graphics/runetek7/animation/Animation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class Animation {
    public:
        GetFrames() const;
        IsConstructed() const;
        GetRT5Frames() const;
        GetFrameDelays() const;
        GetAnimationLength() const;
        GetFrameStartTimes() const;
        void GetRT5FrameCount() const;
        GetAnimKeyFrameSet() const;
        GetMaximumUsedBoneID() const;
        void GetKeyFrameSampleCount() const;
        void GetKeyFrameSample(unsigned long) const;
        Animation(Array<shared_ptr<AnimationFrameRT5>, eastl::allocator> const&, Array<unsigned int, eastl::allocator>&,
                  Array<LabelData, BucketAllocatorEASTL> const&, shared_ptr<AnimKeyFrameSet>);
        void ConstructAnimation(Array<shared_ptr<AnimationFrameRT5>, eastl::allocator> const&,
                                Array<unsigned int, eastl::allocator> const&,
                                Array<LabelData, BucketAllocatorEASTL> const&, shared_ptr<AnimKeyFrameSet>);
        Animation(shared_ptr<AnimKeyFrameSet> const&);
        ~Animation();
        void StoreRT5Frames(Array<shared_ptr<AnimationFrameRT5>, eastl::allocator> const&,
                            Array<unsigned int, eastl::allocator> const&);
        void ConstructFromAnimKeyFrameSet(shared_ptr<AnimKeyFrameSet> const&);
        void ConstructFromRT5Frames(Array<shared_ptr<AnimationFrameRT5>, eastl::allocator> const&,
                                    Array<unsigned int, eastl::allocator> const&,
                                    Array<LabelData, BucketAllocatorEASTL> const&);
        void GetFrameCount() const;
        GetAnimationSampleIntervalNS() const;
        byte GetAnimatesTransparency() const;
        char GetAnimatedColourType() const;
        byte GetAnimatesBillboards() const;
        Animation();

        // data members, from how the methods use this: 200 bytes
        char field_0; // offset 0
        char _unknown_1[103];
        int field_104;               // offset 104
        byte m_animatesTransparency; // offset 108
        char m_animatedColourType;   // offset 109
        byte m_animatesBillboards;   // offset 110
        char _unknown_111[1];
        shared_ptr field_112; // offset 112
        int field_128;        // offset 128
        char _unknown_132[68];
    };

    class AnimationInfo {
    public:
        ~AnimationInfo();
        bool IsLooping() const;
        AnimationInfo(AnimationParameters const&);
        AnimationInfo(AnimationInfo&&);
        ulong HasAnimKeyFrameSet() const;
        AnimationInfo* operator=(AnimationInfo const&);
        AnimationInfo();

        // data members, from how the methods use this: 48 bytes
        undefined8 field_0; // offset 0
        char _unknown_8[2];
        undefined8 field_10; // offset 10
        undefined2 field_18; // offset 18
        undefined4 field_20; // offset 20
        undefined1 field_24; // offset 24
        undefined1 field_25; // offset 25
        char _unknown_26[6];
        shared_ptr field_32; // offset 32
    };

    class AnimationResource {
    public:
        GetAnimationDescriptor() const;
        Constructed() const;
        void
        Construct(std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&);
        ~AnimationResource();
        AnimationResource(AnimationResource const&);
        AnimationResource(
            AnimationDescriptor const&,
            std::function<void(
                std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>);
        AnimationResource(AnimationResource&&);

        // data members, from how the methods use this: 289 bytes
        char _unknown_0[288];
        undefined1 field_288; // offset 288
    };

    // 0x100952410, 32 bytes, inline, placed by class name and debug map
    // Animation::GetKeyFrameSampleCount() const
    void Animation::GetKeyFrameSampleCount() {
        (&field_168)->end();
    }

    // 0x1009529e0, 32 bytes, inline, placed by class name and debug map
    // Animation::GetKeyFrameSample(unsigned long) const
    void Animation::GetKeyFrameSample(ulong param_1) {
        Array<AnimKeyFrameSample, eastl::allocator>::operator[](
            (Array<AnimKeyFrameSample, eastl::allocator>*)&field_168, param_1);
    }

    // 0x100987330, 16 bytes, complete-object destructor, inline, placed by class name
    // Animation::ConstructFromAnimKeyFrameSet(shared_ptr<AnimKeyFrameSet> const&)::$_2::~$_2(): jumps straight to the base-object destructor

    // 0x100989af0, 64 bytes, inline, placed by class name
    // Animation::GetFrameCount() const
    void Animation::GetFrameCount() {
        AnimKeyFrameSet* this_00;

        if (field_112->operator_cast_to_bool()) {
            this_00 =
                (AnimKeyFrameSet*)shared_ptr<AnimKeyFrameSet>::operator->((shared_ptr<AnimKeyFrameSet>*)field_112);
            this_00->GetDuration();
        } else {
            (&field_8)->end();
        }
    }

    // 0x100989b30, 16 bytes, inline, placed by class name
    // Animation::GetAnimationSampleIntervalNS() const
    undefined8 Animation::GetAnimationSampleIntervalNS() {
        return 20000000;
    }

    // 0x10098b650, 16 bytes, inline, placed by class name
    // Animation::GetAnimatesTransparency() const
    byte Animation::GetAnimatesTransparency() {
        return m_animatesTransparency;
    }

    // 0x10098b660, 16 bytes, inline, placed by class name
    // Animation::GetAnimatedColourType() const
    char Animation::GetAnimatedColourType() {
        return m_animatedColourType;
    }

    // 0x10098bc00, 80 bytes, inline, placed by class header (inline)
    // AnimationInfo::HasAnimKeyFrameSet() const
    ulong AnimationInfo::HasAnimKeyFrameSet() {
        bool bVar1;
        NXTRenderCanvas* this_00;
        shared_ptr* psVar2;
        undefined7 extraout_var;
        ulong uVar3;

        uVar3 = 0;
        bVar1 = operator!=((shared_ptr*)field_32, (_func_decltype_nullptr*)0);
        if (bVar1) {
            this_00 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)field_32);
            psVar2 = (shared_ptr*)this_00->GetPixelBuffer();
            bVar1 = operator!=(psVar2, (_func_decltype_nullptr*)0);
            uVar3 = CONCAT71(extraout_var, bVar1) & 4294967295;
        }
        return uVar3;
    }

    // 0x10098c5e0, 16 bytes, inline, placed by class name
    // Animation::GetAnimatesBillboards() const
    byte Animation::GetAnimatesBillboards() {
        return m_animatesBillboards;
    }

    // 0x10098caa0, 48 bytes, inline, placed by class header (inline)
    // AnimationInfo::operator=(AnimationInfo const&)
    /* AnimationInfo::TEMPNAMEPLACEHOLDERVALUE(AnimationInfo const&) */

    AnimationInfo* AnimationInfo::operator=(AnimationInfo* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined2 uVar3;
        undefined4 uVar4;
        undefined1 uVar5;
        undefined1 uVar6;

        uVar1 = param_1->field_0;
        uVar2 = *(undefined8*)&param_1->field_8;
        uVar3 = param_1->field_18;
        uVar4 = param_1->field_20;
        uVar5 = param_1->field_24;
        uVar6 = param_1->field_25;
        field_10 = param_1->field_10;
        field_18 = uVar3;
        field_20 = uVar4;
        field_24 = uVar5;
        field_25 = uVar6;
        field_0 = uVar1;
        *(undefined8*)&field_8 = uVar2;
        shared_ptr<Animation>::operator=((shared_ptr<Animation>*)field_32, (shared_ptr*)param_1->field_32);
        return this;
    }

    // 0x1009915e0, 16 bytes, base-object destructor, inline, placed by class name
    // Animation::ConstructFromAnimKeyFrameSet(shared_ptr<AnimKeyFrameSet> const&)::$_2::~$_2()
    /* ~$_2() */

    void Animation::ConstructFromAnimKeyFrameSet(shared_ptr<AnimKeyFrameSet> const&)::$_2::~__2() {
        ((this + 16))->~shared_ptr();
    }

    // 0x1009a0670, 16 bytes, complete-object constructor, inline, placed by class name
    // Animation::ConstructFromAnimKeyFrameSet(shared_ptr<AnimKeyFrameSet> const&)::$_2::$_2($_2&&): jumps straight to the base-object constructor

    // 0x1009a0680, 48 bytes, base-object constructor, inline, placed by class name
    // Animation::ConstructFromAnimKeyFrameSet(shared_ptr<AnimKeyFrameSet> const&)::$_2::$_2($_2&&)
    /* $_2($_2&&) */

    void Animation::ConstructFromAnimKeyFrameSet(shared_ptr<AnimKeyFrameSet> const&)::$_2::__2(__2* param_1) {
        undefined8 uVar1;

        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 8) = uVar1;
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)(this + 16), (shared_ptr*)(param_1 + 16));
        *(undefined8*)(this + 32) = *(undefined8*)(param_1 + 32);
    }

    // 0x1009a0780, 336 bytes, inline, placed by class name
    // Animation::ConstructFromAnimKeyFrameSet(shared_ptr<AnimKeyFrameSet> const&)::$_2::operator()() const
    /* Animation::ConstructFromAnimKeyFrameSet(shared_ptr<AnimKeyFrameSet>
   const&)::$_2::TEMPNAMEPLACEHOLDERVALUE() const */

    void Animation::ConstructFromAnimKeyFrameSet(shared_ptr<AnimKeyFrameSet> const&)::$_2::operator()() {
        shared_ptr<AnimKeyFrameSet>* this_00;
        Array<AnimKeyFrameSample, eastl::allocator>* this_01;
        fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>* this_02;
        vector* pvVar1;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_03;
        AnimKeyFrameSample* this_04;
        AnimKeyFrameSet* pAVar2;
        ulong uVar3;
        AnimCurveSegmentCacheBase local_b8[7];
        AnimCurveSegmentCacheBase local_78[7];
        long local_38;

        local_38 = *(long*)(this + 32);
        this_00 = (shared_ptr<AnimKeyFrameSet>*)(this + 16);
        this_02 = (fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>*)
                      shared_ptr<AnimKeyFrameSet>::operator->(this_00);
        pvVar1 = (vector*)eastl::fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true,
                                                           eastl::allocator>::get_overflow_allocator(this_02);
        new (local_b8) AnimCurveSegmentCache<BucketAllocatorEASTL>(pvVar1);
        this_03 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)shared_ptr<AnimKeyFrameSet>::operator->(this_00);
        pvVar1 =
            (vector*)eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                                eastl::allocator, 0>::second(this_03);
        new (local_78) AnimCurveSegmentCache<BucketAllocatorEASTL>(pvVar1);
        uVar3 = *(ulong*)this;
        if (uVar3 < *(ulong*)(this + 8)) {
            this_01 = (Array<AnimKeyFrameSample, eastl::allocator>*)(local_38 + 168);
            do {
                this_04 = (AnimKeyFrameSample*)Array<AnimKeyFrameSample, eastl::allocator>::operator[](this_01, uVar3);
                pAVar2 = (AnimKeyFrameSet*)this_00->end();
                this_04->SampleKeyFrameSet(pAVar2, (float)uVar3, local_b8, local_78);
                uVar3 = uVar3 + 1;
            } while (uVar3 < *(ulong*)(this + 8));
        }
        std::__atomic_base<int, true>::operator--((__atomic_base<int, true>*)(local_38 + 192));
        local_78->~AnimCurveSegmentCache();
        local_b8->~AnimCurveSegmentCache();
    }

    // 0x1009a3b40, 16 bytes, complete-object constructor, inline, placed by class name
    // Animation::Animation(): jumps straight to the base-object constructor

    // 0x1009a3b50, 256 bytes, base-object constructor, inline, placed by class name
    // Animation::Animation()
    void Animation::Animation() {
        _func_decltype_nullptr* in_RSI;

        new (this) MakeSharedPool<Animation, 512>();
        field_0 = '\0';
        new (&field_8) Array<shared_ptr<AnimationFrameRT7>, eastl::allocator>();
        new (&field_32) Array<shared_ptr<AnimationFrameRT5>, eastl::allocator>();
        new (&field_56) Array<unsigned int, eastl::allocator>();
        new (&field_80) Array<unsigned int, eastl::allocator>();
        field_104 = -1;
        m_animatesTransparency = 0;
        m_animatedColourType = '\x02';
        m_animatesBillboards = 0;
        new (field_112, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_128 = -1;
        new (&field_136) eastl::vector<std::future<void>, eastl::allocator>();
        new (&field_168) Array<AnimKeyFrameSample, eastl::allocator>();
    }

} // namespace jag::graphics
