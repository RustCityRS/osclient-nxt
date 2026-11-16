// libs/graphics/runetek7/animation/AnimationState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x10066ecf0
    FastPool_iterator<audio::SoundInstance, int>::FastPool_iterator(FastPool<audio::SoundInstance, int>* fastPool,
                                                                    int arg2) {
        *(FastPool<audio::SoundInstance, int>**)this = fastPool;
        *(int*)(this + 8) = arg2;
    }

    // 0x10066ed00
    void FastPool_iterator<audio::SoundInstance, int>::Increment() {
        int iVar2;

        int iVar1 = *(int*)(this + 8);
        *(int*)(this + 8) = iVar1 + 1;
        if (-2 < iVar1) {
            iVar2 = (*(Option<game::option::EnumBrightness>**)this)->GetValue();
            if (iVar1 < iVar2) {
                return;
            }
        }
        LogAssert("m_Index >= 0 && m_Index <= static_cast<int>(m_pPool->size())",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 82,
                  nullptr);
    }

    // 0x10066ef30
    VorbisJs5Resource* placement_new<VorbisJs5Resource, hal::audio::AudioAPI*>(void* arg1,
                                                                               hal::audio::AudioAPI*&& arg2) {
        new (arg1) VorbisJs5Resource(arg2);
        return arg1;
    }

    // 0x10066ef50
    ref_counter_shared<VorbisJs5Resource>*
    placement_new<ref_counter_shared<VorbisJs5Resource>, int, VorbisJs5Resource*&>(void* arg1, int&& arg2,
                                                                                   VorbisJs5Resource*& arg3) {
        new (arg1) ref_counter_shared<VorbisJs5Resource>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10066ef80
    ref_counter_shared<VorbisJs5Resource>::ref_counter_shared(unsigned long arg1, VorbisJs5Resource* vorbisJs5Resource)
        : ref_counter_base() {}

    // 0x10066fb10
    eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>*
    placement_new<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>(void* arg1) {
        *(uint64_t*)((long)arg1 + 32) = 0;
        *(uint64_t*)((long)arg1 + 40) = 0;
        *(uint64_t*)((long)arg1 + 16) = 0;
        *(uint64_t*)((long)arg1 + 24) = 0;
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        *(uint64_t*)((long)arg1 + 48) = 0;
        new (arg1) eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>();
        return arg1;
    }

    // 0x10066fb40
    ref_counter_shared<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>*
    placement_new<ref_counter_shared<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>, int,
                  eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>*&>(
        void* arg1, int&& arg2, eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>*& arg3) {
        new (arg1)
            ref_counter_shared<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10066fc90
    ref_counter_shared<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>::ref_counter_shared(
        unsigned long arg1, eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>* fixed_stack)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee71a0 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(fixed_stack<shared_ptr<hal::audio::AudioBuffer>, _1ul, true>**)(this + 24) = fixed_stack;
    }

    // 0x10066fcd0
    void ref_counter_shared<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>*)(*(long*)(this + 24) + lVar2))
                        ->~fixed_stack();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 56;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x10066fda0
    hal::audio::AudioBuffer* placement_new<hal::audio::AudioBuffer, unsigned int, hal::audio::AudioFormat const*&>(
        void* arg1, unsigned int&& arg2, const hal::audio::AudioFormat*& arg3) {
        new (arg1) hal::audio::AudioBuffer(arg2, arg3);
        return arg1;
    }

    // 0x10066ffa0
    hal::audio::AudioBuffer*
    placement_new<hal::audio::AudioBuffer, unsigned int&, unsigned int&, unsigned int&, hal::audio::AudioFormat const*&,
                  bool>(void* arg1, unsigned int& arg2, unsigned int& arg3, unsigned int& arg4,
                        const hal::audio::AudioFormat*& arg5, bool&& arg6) {
        new (arg1) hal::audio::AudioBuffer(arg2, arg3, arg4, arg5, arg6);
        return arg1;
    }

    // 0x1006712c0
    graphics::AnimationState* placement_new<graphics::AnimationState>(void* arg1) {
        new (arg1) graphics::AnimationState(2);
        return arg1;
    }

    // 0x1006712e0
    MakeSharedPoolRefCounter<graphics::AnimationState, MakeSharedPool<graphics::AnimationState, 256>>*
    placement_new<MakeSharedPoolRefCounter<graphics::AnimationState, MakeSharedPool<graphics::AnimationState, 256>>,
                  MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData*&, graphics::AnimationState*>(
        void* arg1, MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData*& arg2,
        graphics::AnimationState*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<graphics::AnimationState, MakeSharedPool<graphics::AnimationState, 256>>(
            arg2, arg3);
        return arg1;
    }

    // 0x100671a00
    MakeSharedPoolRefCounter<graphics::AnimationState, MakeSharedPool<graphics::AnimationState, 256>>::
        MakeSharedPoolRefCounter(void* arg1, graphics::AnimationState* animationState)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7bb8 + 16;
        *(void**)(this + 16) = arg1;
        *(AnimationState**)(this + 24) = animationState;
    }

    // 0x100671a40
    void
    MakeSharedPoolRefCounter<graphics::AnimationState, MakeSharedPool<graphics::AnimationState, 256>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<graphics::AnimationState, 256>::deallocate(arg1);
    }

    // 0x100672240
    MakeSharedPoolRefCounter<game::AnimationWrapper, MakeSharedPool<game::AnimationWrapper, 512>>*
    placement_new<MakeSharedPoolRefCounter<game::AnimationWrapper, MakeSharedPool<game::AnimationWrapper, 512>>,
                  MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData*&, game::AnimationWrapper*>(
        void* arg1, MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData*& arg2,
        game::AnimationWrapper*&& arg3) {
        new (arg1)
            MakeSharedPoolRefCounter<game::AnimationWrapper, MakeSharedPool<game::AnimationWrapper, 512>>(arg2, arg3);
        return arg1;
    }

    // 0x100673190
    MakeSharedPoolRefCounter<game::AnimationWrapper, MakeSharedPool<game::AnimationWrapper, 512>>::
        MakeSharedPoolRefCounter(void* arg1, game::AnimationWrapper* animationWrapper)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7a40 + 16;
        *(void**)(this + 16) = arg1;
        *(AnimationWrapper**)(this + 24) = animationWrapper;
    }

    // 0x1006731d0
    void MakeSharedPoolRefCounter<game::AnimationWrapper, MakeSharedPool<game::AnimationWrapper, 512>>::DeleteData() {
        if (*(AnimationWrapper**)(this + 24) != nullptr) {
            (*(AnimationWrapper**)(this + 24))->~AnimationWrapper();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x100673200
    void MakeSharedPoolRefCounter<game::AnimationWrapper, MakeSharedPool<game::AnimationWrapper, 512>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::AnimationWrapper, 512>::deallocate(arg1);
    }

} // namespace jag

namespace jag::graphics {
    class AnimationInfoBlendTreeNode {
    public:
        // virtual methods in vtable order
        virtual ~AnimationInfoBlendTreeNode();
        virtual void GetPose(WrapArray<JointPose> wrapArray, const Array<LabelData>& labelDatas,
                             const math::Matrix44T<float>& matrix44);
        virtual uint8_t* GetBindInfo() const;
        virtual void Reset(unsigned int arg1);
        virtual char* GetTypeString() const;
        virtual auto GetTreeAsString() const;
        void Update(unsigned int arg1);
        AnimationInfoBlendTreeNode();
        void SetAnim(AnimationInfo& animationInfo);

    private:
        uint8_t field_8;
        uint8_t _unknown_9[15];
        ColourHSL field_24;
        AnimationInfo field_40;
        uint8_t _unknown_80[24];
        unsigned char field_104;
        uint8_t _unknown_105[43];
    };

    class AnimationState {
    public:
        // virtual methods in vtable order
        virtual ~AnimationState();
        virtual void GetBoneTransforms(WrapArray<math::Matrix43T<float>>& wrapArray,
                                       const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                       const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                       const math::Matrix44T<float>& matrix44) const;
        virtual void ApplyBoneTransforms(math::Vector3T<float>& vector3,
                                         const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                         const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                         const math::Matrix44T<float>& matrix44) const;
        virtual void GetLabelData(WrapArray<float>& wrapArray,
                                  const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                  AnimationLabelType animationLabelType) const;
        virtual void UpdateFromCurrentTime(const Array<LabelData>& labelDatas, const math::Matrix44T<float>& matrix44);
        virtual bool GetAnimatesTransparency() const;
        virtual uint8_t GetAnimatedColourType() const;
        void InvalidateSampled();
        AnimationState(unsigned int arg1);
        void ClearState();
        void SetAnimationOnChannel(const AnimationParameters& animationParameters, unsigned int arg2);
        void UpdateState(unsigned long long arg1, unsigned long long arg2, bool arg3,
                         const shared_ptr<Animation>& animation, bool arg5, AnimatedColourType animatedColourType,
                         unsigned int arg7, int arg8, AnimationLoopBehaviour animationLoopBehaviour, bool arg10);
        bool NeedsRT5Animation(unsigned int arg1) const;
        void SelectBasicAnimationSampler(unsigned int arg1);
        uint8_t* GetChannel0BlendTreeNode();
        uint8_t* GetChannel1BlendTreeNode();
        void ClearDebugDrawInformation();
        void SetupBlendTreeAnimationSampler();
        bool CanAnimationChannelBlend(unsigned int arg1) const;
        void SelectAnimationSampler();
        void SetAnimationChannelTransformMask(int arg1, const shared_ptr<WalkMergeDataProvider>& walkMergeDataProvider);
        void ResetChannel(int arg1);
        void UpdatePausedAnimations();
        static int32_t m_useSmoothSkinning;             // = 1
        static int32_t m_curveDebugStepSize;            // = 1036831949
        static float m_curveDebugHeight;                // = 8.0f
        static int32_t m_curveDebugTransformCount;      // = 1
        static bool m_RT5TransformsForWalkMerge;        // = 1
        static bool m_RT5TransformsForLowBoneBases;     // = 1
        static uint8_t m_RT5TransformForLowBoneBaseMax; // = 20
        static uint8_t m_defaultBlendTreeBlendMode;     // = 2
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullAnimationState; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()
        static bool m_highlightRT5Transforms;
        static bool m_renderCurveDebug;
        static int32_t m_curveDebugFirstTransform;
        static bool m_curveDebugLimitToRange;
        static bool m_curveScrubMode;
        static int32_t m_curveScrubTime;
        static bool m_drawDebugSkeleton;
        static bool m_drawDebugSkeletonOnBlend;
        static bool m_RT5TransformsForAll;
        static bool m_useRuntimeCurves;
        static int32_t m_useRT7SamplerAsyncPath;

    private:
        unsigned int field_8;
        uint8_t field_12;
        uint8_t _unknown_13[11];
        bool m_animatesTransparency;
        uint8_t m_animatedColourType;
        uint8_t _unknown_26[296];
        uint16_t field_322;
        uint8_t _unknown_324[4];
        uint64_t field_328;
        uint64_t field_336;
        unsigned long long field_344;
        unsigned long long field_352;
        uint8_t _unknown_360[16];
        RT7AnimationSampler* field_376;
        long field_384;
        uint8_t _unknown_392[744];
        BaseConfigTypeList field_1136;
        uint8_t _unknown_1240[1472];
        DebugUIElement field_2712;
        uint8_t _unknown_2721[79];
        DebugUIElement field_2800;
        uint8_t _unknown_2809[79];
        DebugUIElement field_2888;
        uint8_t _unknown_2897[79];
        DebugUIElement field_2976;
        uint8_t _unknown_2985[79];
        DebugUIElement field_3064;
        uint8_t _unknown_3073[103];
        DebugUIElement field_3176;
        uint8_t _unknown_3185[103];
        DebugUIElement field_3288;
        uint8_t _unknown_3297[103];
        DebugUIElement field_3400;
        uint8_t _unknown_3409[103];
        DebugUIElement field_3512;
        uint8_t _unknown_3521[127];
        uint8_t field_3648;
        uint8_t _unknown_3649[55];
        long field_3704;
        long field_3712;
        long field_3720;
        long field_3728;
        uint8_t _unknown_3736[36];
        ColourHSL field_3772;
    };

    // 0x10066a0f0
    void AnimationState::InvalidateSampled() {
        bool in_SIL;

        field_324 = in_SIL;
    }

    // 0x10098bc60
    void AnimationInfoBlendTreeNode::SetAnim(AnimationInfo& animationInfo) {
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        NXTRenderCanvas* pNVar1;
        shared_ptr<AnimKeyFrameSet>* psVar2;
        RT7Core* this_00;
        shared_ptr<AnimBase>* animBase;

        *field_40 = animationInfo;
        midiPlayerMainThread = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)(field_40 + 32);
        if (*midiPlayerMainThread != nullptr) {
            pNVar1 = (NXTRenderCanvas*)(*midiPlayerMainThread).operator->();
            psVar2 = (shared_ptr<AnimKeyFrameSet>*)pNVar1->GetPixelBuffer();
            this_00 = (RT7Core*)(*psVar2).operator->();
            animBase = (shared_ptr<AnimBase>*)this_00->GetMSAASampleCount();
            field_88 = *animBase;
            pNVar1 = (NXTRenderCanvas*)(*midiPlayerMainThread).operator->();
            psVar2 = (shared_ptr<AnimKeyFrameSet>*)pNVar1->GetPixelBuffer();
            field_104 = ((AnimKeyFrameSet*)(*psVar2).operator->())->GetBindID();
        } else {
            field_88 = (*((BindInfo*)&BlendTreeNode::EmptyBindInfo));
        }
    }

    // 0x10098d240
    char* AnimationInfoBlendTreeNode::GetTypeString() const {
        return "Anim";
    }

    // 0x10098d250
    auto AnimationInfoBlendTreeNode::GetTreeAsString() const {
        uint8_t uVar2;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        eastl::string local_50;

        if ((*((field_40 + 32))) == nullptr) {
            uVar2 = GetTypeString();
            local_50 = eastl::string((char*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2));
            result + local_50;
        } else {
            uVar2 = GetTypeString();
            auto result((char*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2));
        }
        return result;
    }

    // 0x10098d320
    uint8_t AnimationState::GetAnimatedColourType() const {
        return m_animatedColourType;
    }

} // namespace jag::graphics

namespace jag::render {
    // 0x10066ecf0: QueryView::QueryView(shared_ptr<Query>*, unsigned int) has the same machine code as FastPool_iterator<audio::SoundInstance, int>::FastPool_iterator(FastPool<audio::SoundInstance, int>*, int)

} // namespace jag::render

// 0x10066fa80
decltype((static_cast<void (*&std::__invoke<void (*&)(jag::audio::SoundInstance*), jag::audio::SoundInstance*>(
              void (*&)(jag::audio::SoundInstance*), jag::audio::SoundInstance*&&))(jag::audio::SoundInstance*)>(
    { parm #1 }))(static_cast<jag::audio::SoundInstance*>({ parm #2 }))arg1) {
    uint64_t* in_RSI;

    return (**(void (**)(...))arg1)(*in_RSI);
}
