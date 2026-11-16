// libs/graphics/runetek7/animation/Animation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class Animation {
    public:
        void GetFrames() const;
        bool IsConstructed() const;
        Option<float>* GetRT5Frames() const;
        uint8_t* GetFrameDelays() const;
        int GetAnimationLength() const;
        uint8_t* GetFrameStartTimes() const;
        void GetRT5FrameCount() const;
        shared_ptr GetAnimKeyFrameSet() const;
        int GetMaximumUsedBoneID() const;
        void GetKeyFrameSampleCount() const;
        AnimKeyFrameSample* GetKeyFrameSample(unsigned long arg1) const;
        Animation(const Array<shared_ptr<AnimationFrameRT5>>& animationFrameRT5s, Array<unsigned int>& arg2,
                  const Array<LabelData>& labelDatas, shared_ptr<AnimKeyFrameSet> animKeyFrameSet);
        void ConstructAnimation(const Array<shared_ptr<AnimationFrameRT5>>& animationFrameRT5s,
                                const Array<unsigned int>& arg2, const Array<LabelData>& labelDatas,
                                shared_ptr<AnimKeyFrameSet> animKeyFrameSet);
        Animation(const shared_ptr<AnimKeyFrameSet>& animKeyFrameSet);
        ~Animation();
        void StoreRT5Frames(const Array<shared_ptr<AnimationFrameRT5>>& animationFrameRT5s,
                            const Array<unsigned int>& arg2);
        void ConstructFromAnimKeyFrameSet(const shared_ptr<AnimKeyFrameSet>& animKeyFrameSet);
        void ConstructFromRT5Frames(const Array<shared_ptr<AnimationFrameRT5>>& animationFrameRT5s,
                                    const Array<unsigned int>& arg2, const Array<LabelData>& labelDatas);
        void GetFrameCount() const;
        uint64_t GetAnimationSampleIntervalNS() const;
        uint8_t GetAnimatesTransparency() const;
        char GetAnimatedColourType() const;
        uint8_t GetAnimatesBillboards() const;
        Animation();

    private:
        char m_constructed;
        uint8_t _unknown_1[103];
        int m_animationLength;
        uint8_t m_animatesTransparency;
        char m_animatedColourType;
        uint8_t m_animatesBillboards;
        uint8_t _unknown_111[1];
        shared_ptr m_animKeyFrameSet;
        int m_maximumUsedBoneID;
        uint8_t _unknown_132[68];
    };

    class AnimationInfo {
    public:
        ~AnimationInfo();
        bool IsLooping() const;
        AnimationInfo(const AnimationParameters& animationParameters);
        AnimationInfo(AnimationInfo&& animationInfo);
        unsigned long HasAnimKeyFrameSet() const;
        AnimationInfo* operator=(const AnimationInfo& animationInfo);
        AnimationInfo();

    private:
        uint64_t field_0;
        uint8_t _unknown_8[2];
        uint64_t field_10;
        uint16_t field_18;
        uint32_t field_20;
        uint8_t field_24;
        uint8_t field_25;
        uint8_t _unknown_26[14];
    };

    class AnimationResource {
    public:
        void GetAnimationDescriptor() const;
        uint8_t Constructed() const;
        void
        Construct(std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&
                      animationParameters);
        ~AnimationResource();
        AnimationResource(const AnimationResource& animationResource);
        AnimationResource(
            const AnimationDescriptor& animationDescriptor,
            std::function<void(
                std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>
                callback);
        AnimationResource(AnimationResource&& animationResource);

    private:
        uint8_t _unknown_0[288];
        uint8_t field_288;
    };

    // 0x100952410
    void Animation::GetKeyFrameSampleCount() const {
        field_168.end();
    }

    // 0x1009529e0
    AnimKeyFrameSample* Animation::GetKeyFrameSample(unsigned long arg1) const {
        return (AnimKeyFrameSample*)field_168[arg1];
    }

    // 0x100989af0
    void Animation::GetFrameCount() const {
        if (m_animKeyFrameSet->operator_cast_to_bool() == '\0') {
            field_8.end();
        } else {
            ((AnimKeyFrameSet*)(*m_animKeyFrameSet).operator->())->GetDuration();
        }
    }

    // 0x100989b30
    uint64_t Animation::GetAnimationSampleIntervalNS() const {
        return 20000000;
    }

    // 0x10098b650
    uint8_t Animation::GetAnimatesTransparency() const {
        return m_animatesTransparency;
    }

    // 0x10098b660
    char Animation::GetAnimatedColourType() const {
        return m_animatedColourType;
    }

    // 0x10098bc00
    unsigned long AnimationInfo::HasAnimKeyFrameSet() const {
        NXTRenderCanvas* this_00;
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        uint64_t extraout_var;

        unsigned long uVar2 = 0;
        bool bVar1 = field_32 != nullptr;
        if (bVar1) {
            this_00 = (NXTRenderCanvas*)field_32.operator->();
            midiPlayerMainThread = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)this_00->GetPixelBuffer();
            bVar1 = *midiPlayerMainThread != nullptr;
            uVar2 = (((uint64_t)extraout_var << 8) | (uint8_t)bVar1) & 4294967295;
        }
        return uVar2;
    }

    // 0x10098c5e0
    uint8_t Animation::GetAnimatesBillboards() const {
        return m_animatesBillboards;
    }

    // 0x10098caa0
    AnimationInfo* AnimationInfo::operator=(const AnimationInfo& animationInfo) {
        uint64_t uVar1 = animationInfo.field_0;
        uint64_t uVar2 = *(uint64_t*)&animationInfo.field_8;
        uint16_t uVar3 = animationInfo.field_18;
        uint32_t uVar4 = animationInfo.field_20;
        uint8_t uVar5 = animationInfo.field_24;
        uint8_t uVar6 = animationInfo.field_25;
        field_10 = animationInfo.field_10;
        field_18 = uVar3;
        field_20 = uVar4;
        field_24 = uVar5;
        field_25 = uVar6;
        field_0 = uVar1;
        *(uint64_t*)&field_8 = uVar2;
        field_32 = animationInfo.field_32;
        return this;
    }

    // 0x1009915e0
    Animation::ConstructFromAnimKeyFrameSet(shared_ptr<AnimKeyFrameSet> const&)::$_2::~$_2() {
        ((this + 16))->~shared_ptr();
    }

    // 0x1009a0680
    Animation::ConstructFromAnimKeyFrameSet(shared_ptr<AnimKeyFrameSet> const&)::$_2::$_2($_2&& arg1) {
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)this = *(uint64_t*)arg1;
        *(uint64_t*)(this + 8) = uVar1;
        ((this + 16))->shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(*((arg1 + 16)));
        *(uint64_t*)(this + 32) = *(uint64_t*)(arg1 + 32);
    }

    // 0x1009a0780
    void Animation::ConstructFromAnimKeyFrameSet(shared_ptr<AnimKeyFrameSet> const&)::$_2::operator()() const {
        Array<AnimKeyFrameSample>* this_01;
        AnimKeyFrameSample* this_04;
        AnimKeyFrameSet* animKeyFrameSet;

        long local_38 = *(long*)(this + 32);
        shared_ptr<AnimKeyFrameSet>* this_00 = (shared_ptr<AnimKeyFrameSet>*)(this + 16);
        fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true>* this_02 =
            (fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true>*)(*this_00).operator->();
        auto pvVar1 = this_02->get_overflow_allocator();
        AnimCurveSegmentCacheBase local_b8(*pvVar1);
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_03 =
            (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_00).operator->();
        pvVar1 = (vector<eastl::vector<AnimCurve>>*)this_03->second();
        AnimCurveSegmentCacheBase local_78(*pvVar1);
        unsigned long arg1 = *(unsigned long*)this;
        if (arg1 < *(unsigned long*)(this + 8)) {
            this_01 = (Array<AnimKeyFrameSample>*)(local_38 + 168);
            do {
                this_04 = (AnimKeyFrameSample*)(*this_01)[arg1];
                animKeyFrameSet = (AnimKeyFrameSet*)this_00->end();
                this_04->SampleKeyFrameSet(animKeyFrameSet, (float)arg1, local_b8, local_78);
                arg1 = arg1 + 1;
            } while (arg1 < *(unsigned long*)(this + 8));
        }
        std::__atomic_base<int, true>::operator--();
    }

    // 0x1009a3b50
    Animation::Animation() : MakeSharedPool<Animation, 512>() {
        m_constructed = '\0';
        new (&field_8) Array<shared_ptr<AnimationFrameRT7>>();
        new (&field_32) Array<shared_ptr<AnimationFrameRT5>>();
        new (&field_56) Array<unsigned int>();
        new (&field_80) Array<unsigned int>();
        m_animationLength = -1;
        m_animatesTransparency = 0;
        m_animatedColourType = '\x02';
        m_animatesBillboards = 0;
        new (m_animKeyFrameSet) shared_ptr();
        m_maximumUsedBoneID = -1;
        new (&field_136) eastl::vector<std::future<void>>();
        new (&field_168) Array<AnimKeyFrameSample>();
    }

} // namespace jag::graphics
