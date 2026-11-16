// libs/graphics/runetek7/animation/AnimationState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x10066ece0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // FastPool_iterator<audio::SoundInstance, int>::FastPool_iterator(FastPool<audio::SoundInstance, int>*, int): jumps straight to the base-object constructor

    // 0x10066ecf0, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // FastPool_iterator<audio::SoundInstance, int>::FastPool_iterator(FastPool<audio::SoundInstance, int>*, int)
    /* ImGuiPlotArrayGetterData::ImGuiPlotArrayGetterData(float const*, int) */

    void ImGuiPlotArrayGetterData::ImGuiPlotArrayGetterData(float* param_1, int param_2) {
        *(float**)this = param_1;
        *(int*)(this + 8) = param_2;
    }

    // 0x10066ed00, 80 bytes, inline, placed by debug map only (low confidence)
    // FastPool_iterator<audio::SoundInstance, int>::Increment()
    void FastPool_iterator<audio::SoundInstance, int>::Increment(FastPool_iterator<audio::SoundInstance, int>* this) {
        int iVar1;
        int iVar2;

        iVar1 = *(int*)(this + 8);
        *(int*)(this + 8) = iVar1 + 1;
        if (-2 < iVar1) {
            iVar2 = (*(Option<game::option::EnumBrightness>**)this)->GetValue();
            if (iVar1 < iVar2) {
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("m_Index >= 0 && m_Index <= static_cast<int>(m_pPool->size())",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/FastPool.h", 82,
                  (char*)0);
    }

    // 0x10066ef30, 32 bytes, inline, placed by debug map only (low confidence)
    // VorbisJs5Resource* placement_new<VorbisJs5Resource, hal::audio::AudioAPI*>(void*, hal::audio::AudioAPI*&&)
    VorbisJs5Resource* placement_new<VorbisJs5Resource, hal::audio::AudioAPI*>(void* param_1, AudioAPI** param_2) {
        VorbisJs5Resource::VorbisJs5Resource(param_1, *param_2);
        return param_1;
    }

    // 0x10066ef50, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<VorbisJs5Resource>* placement_new<ref_counter_shared<VorbisJs5Resource>, int, VorbisJs5Resource*&>(void*, int&&, VorbisJs5Resource*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<VorbisJs5Resource>, int, VorbisJs5Resource*&>(void* param_1, int* param_2,
                                                                                   VorbisJs5Resource** param_3) {
        ref_counter_shared<VorbisJs5Resource>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10066ef70, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<VorbisJs5Resource>::ref_counter_shared(unsigned long, VorbisJs5Resource*): jumps straight to the base-object constructor

    // 0x10066ef80, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<VorbisJs5Resource>::ref_counter_shared(unsigned long, VorbisJs5Resource*)
    void ref_counter_shared<VorbisJs5Resource>::ref_counter_shared(ulong param_1, VorbisJs5Resource* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7268 + 16;
        *(ulong*)(this + 16) = param_1;
        *(VorbisJs5Resource**)(this + 24) = param_2;
    }

    // 0x10066fb10, 48 bytes, inline, placed by debug map only (low confidence)
    // eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>* placement_new<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>(void*)
    fixed_stack* placement_new<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>(void* param_1) {
        *(undefined8*)((long)param_1 + 32) = 0;
        *(undefined8*)((long)param_1 + 40) = 0;
        *(undefined8*)((long)param_1 + 16) = 0;
        *(undefined8*)((long)param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        *(undefined8*)((long)param_1 + 48) = 0;
        eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>::fixed_stack(param_1);
        return param_1;
    }

    // 0x10066fb40, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true> >* placement_new<ref_counter_shared<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true> >, int, eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>*&>(void*, int&&, eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>, int,
                       eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>*&>(void* param_1,
                                                                                             int* param_2,
                                                                                             fixed_stack** param_3) {
        ref_counter_shared<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10066fc80, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true> >::ref_counter_shared(unsigned long, eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>*): jumps straight to the base-object constructor

    // 0x10066fc90, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true> >::ref_counter_shared(unsigned long, eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>*)
    void ref_counter_shared<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>::ref_counter_shared(
        ref_counter_shared<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>* this, ulong param_1,
        fixed_stack* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee71a0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(fixed_stack**)(this + 24) = param_2;
    }

    // 0x10066fcd0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true> >::DeleteData()
    void ref_counter_shared<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>::DeleteData(
        ref_counter_shared<eastl::fixed_stack<shared_ptr<hal::audio::AudioBuffer>, 1ul, true>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~fixed_stack();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 56;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10066fda0, 32 bytes, inline, placed by debug map only (low confidence)
    // hal::audio::AudioBuffer* placement_new<hal::audio::AudioBuffer, unsigned int, hal::audio::AudioFormat const*&>(void*, unsigned int&&, hal::audio::AudioFormat const*&)
    AudioBuffer*
    placement_new<hal::audio::AudioBuffer, unsigned int, hal::audio::AudioFormat_const*&>(void* param_1, uint* param_2,
                                                                                          AudioFormat** param_3) {
        hal::audio::AudioBuffer::AudioBuffer(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x10066ffa0, 48 bytes, inline, placed by debug map only (low confidence)
    // hal::audio::AudioBuffer* placement_new<hal::audio::AudioBuffer, unsigned int&, unsigned int&, unsigned int&, hal::audio::AudioFormat const*&, bool>(void*, unsigned int&, unsigned int&, unsigned int&, hal::audio::AudioFormat const*&, bool&&)
    /* hal::audio::AudioBuffer* placement_new<hal::audio::AudioBuffer, int&, int,
   unsigned int const&, hal::audio::AudioFormat const*&, bool>(void*, int&, int&&, unsigned int
   const&, hal::audio::AudioFormat const*&, bool&&) */

    AudioBuffer*
    jag::placement_new<hal::audio::AudioBuffer, int&, int, unsigned int const&, hal::audio::AudioFormat_const*&, bool>(
        void* param_1, int* param_2, int* param_3, uint* param_4, AudioFormat** param_5, bool* param_6) {
        hal::audio::AudioBuffer::AudioBuffer(param_1, *param_2, *param_3, *param_4, *param_5, *param_6);
        return param_1;
    }

    // 0x1006712c0, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::AnimationState* placement_new<graphics::AnimationState>(void*)
    AnimationState* placement_new<graphics::AnimationState>(void* param_1) {
        graphics::AnimationState::AnimationState(param_1, 2);
        return param_1;
    }

    // 0x1006712e0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimationState, MakeSharedPool<graphics::AnimationState, 256> >* placement_new<MakeSharedPoolRefCounter<graphics::AnimationState, MakeSharedPool<graphics::AnimationState, 256> >, MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData*&, graphics::AnimationState*>(void*, MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData*&, graphics::AnimationState*&&)
    MakeSharedPoolRefCounter* jag::placement_new<
        MakeSharedPoolRefCounter<graphics::AnimationState, MakeSharedPool<graphics::AnimationState, 256>>,
        MakeSharedPool<graphics::AnimationState, 256>::RefCounterAndData*&, graphics::AnimationState*>(
        void* param_1, RefCounterAndData** param_2, AnimationState** param_3) {
        MakeSharedPoolRefCounter<graphics::AnimationState,
                                 MakeSharedPool<graphics::AnimationState, 256>>::MakeSharedPoolRefCounter(param_1,
                                                                                                          *param_2,
                                                                                                          *param_3);
        return param_1;
    }

    // 0x1006719f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimationState, MakeSharedPool<graphics::AnimationState, 256> >::MakeSharedPoolRefCounter(void*, graphics::AnimationState*): jumps straight to the base-object constructor

    // 0x100671a00, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimationState, MakeSharedPool<graphics::AnimationState, 256> >::MakeSharedPoolRefCounter(void*, graphics::AnimationState*)
    void jag::MakeSharedPoolRefCounter<graphics::AnimationState, MakeSharedPool<graphics::AnimationState, 256>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<graphics::AnimationState, MakeSharedPool<graphics::AnimationState, 256>>* this,
            void* param_1, AnimationState* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7bb8 + 16;
        *(void**)(this + 16) = param_1;
        *(AnimationState**)(this + 24) = param_2;
    }

    // 0x100671a40, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::AnimationState, MakeSharedPool<graphics::AnimationState, 256> >::DeleteSelf()
    void
    jag::MakeSharedPoolRefCounter<graphics::AnimationState, MakeSharedPool<graphics::AnimationState, 256>>::DeleteSelf(
        MakeSharedPoolRefCounter<graphics::AnimationState, MakeSharedPool<graphics::AnimationState, 256>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<graphics::AnimationState, 256>::deallocate(pvVar1);
    }

    // 0x100672240, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::AnimationWrapper, MakeSharedPool<game::AnimationWrapper, 512> >* placement_new<MakeSharedPoolRefCounter<game::AnimationWrapper, MakeSharedPool<game::AnimationWrapper, 512> >, MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData*&, game::AnimationWrapper*>(void*, MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData*&, game::AnimationWrapper*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::AnimationWrapper, MakeSharedPool<game::AnimationWrapper, 512>>,
                       MakeSharedPool<game::AnimationWrapper, 512>::RefCounterAndData*&, game::AnimationWrapper*>(
        void* param_1, RefCounterAndData** param_2, AnimationWrapper** param_3) {
        MakeSharedPoolRefCounter<game::AnimationWrapper,
                                 MakeSharedPool<game::AnimationWrapper, 512>>::MakeSharedPoolRefCounter(param_1,
                                                                                                        *param_2,
                                                                                                        *param_3);
        return param_1;
    }

    // 0x100673180, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::AnimationWrapper, MakeSharedPool<game::AnimationWrapper, 512> >::MakeSharedPoolRefCounter(void*, game::AnimationWrapper*): jumps straight to the base-object constructor

    // 0x100673190, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::AnimationWrapper, MakeSharedPool<game::AnimationWrapper, 512> >::MakeSharedPoolRefCounter(void*, game::AnimationWrapper*)
    void jag::MakeSharedPoolRefCounter<game::AnimationWrapper, MakeSharedPool<game::AnimationWrapper, 512>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<game::AnimationWrapper, MakeSharedPool<game::AnimationWrapper, 512>>* this,
            void* param_1, AnimationWrapper* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7a40 + 16;
        *(void**)(this + 16) = param_1;
        *(AnimationWrapper**)(this + 24) = param_2;
    }

    // 0x1006731d0, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::AnimationWrapper, MakeSharedPool<game::AnimationWrapper, 512> >::DeleteData()
    void jag::MakeSharedPoolRefCounter<game::AnimationWrapper, MakeSharedPool<game::AnimationWrapper, 512>>::DeleteData(
        MakeSharedPoolRefCounter<game::AnimationWrapper, MakeSharedPool<game::AnimationWrapper, 512>>* this) {
        if (*(AnimationWrapper**)(this + 24) != (AnimationWrapper*)0) {
            (*(AnimationWrapper**)(this + 24))->~AnimationWrapper();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100673200, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::AnimationWrapper, MakeSharedPool<game::AnimationWrapper, 512> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<game::AnimationWrapper, MakeSharedPool<game::AnimationWrapper, 512>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::AnimationWrapper, MakeSharedPool<game::AnimationWrapper, 512>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::AnimationWrapper, 512>::deallocate(pvVar1);
    }

} // namespace jag

namespace jag::graphics {
    class AnimationInfoBlendTreeNode {
    public:
        // virtual methods in vtable order
        virtual ~AnimationInfoBlendTreeNode();
        virtual void GetPose(WrapArray<JointPose>, Array<LabelData, eastl::allocator> const&,
                             math::Matrix44T<float> const&);
        virtual GetBindInfo() const;
        virtual Reset(unsigned int);
        virtual char* GetTypeString() const;
        virtual GetTreeAsString() const;
        Update(unsigned int);
        AnimationInfoBlendTreeNode();
        void SetAnim(AnimationInfo&);

        // data members, from how the methods use this: 148 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined1 field_8;  // offset 8
        char _unknown_9[3];
        undefined8 field_12; // offset 12
        undefined4 field_20; // offset 20
        ColourHSL field_24;  // offset 24
        char _unknown_40[32];
        shared_ptr field_72; // offset 72
        undefined1 field_88; // offset 88
        char _unknown_89[15];
        undefined1 field_104; // offset 104
        char _unknown_105[43];
    };

    class AnimationState {
    public:
        // virtual methods in vtable order
        virtual ~AnimationState();
        virtual void GetBoneTransforms(
            WrapArray<math::Matrix43T<float>>&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            math::Matrix44T<float> const&) const;
        virtual void ApplyBoneTransforms(
            math::Vector3T<float>&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            math::Matrix44T<float> const&) const;
        virtual void GetLabelData(
            WrapArray<float>&,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
            AnimationLabelType) const;
        virtual void UpdateFromCurrentTime(Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&);
        virtual GetAnimatesTransparency() const;
        virtual GetAnimatedColourType() const;
        void InvalidateSampled();
        AnimationState(unsigned int);
        void ClearState();
        void SetAnimationOnChannel(AnimationParameters const&, unsigned int);
        void UpdateState(unsigned long long, unsigned long long, bool, shared_ptr<Animation> const&, bool,
                         AnimatedColourType, unsigned int, int, AnimationLoopBehaviour, bool);
        bool NeedsRT5Animation(unsigned int) const;
        void SelectBasicAnimationSampler(unsigned int);
        GetChannel0BlendTreeNode();
        GetChannel1BlendTreeNode();
        void ClearDebugDrawInformation();
        void SetupBlendTreeAnimationSampler();
        uint CanAnimationChannelBlend(unsigned int) const;
        void SelectAnimationSampler();
        void SetAnimationChannelTransformMask(int, shared_ptr<WalkMergeDataProvider> const&);
        void ResetChannel(int);
        void UpdatePausedAnimations();
        static /* 4 bytes */ m_useSmoothSkinning;             // = 1
        static /* 4 bytes */ m_curveDebugStepSize;            // = 1036831949
        static float /* 4 bytes */ m_curveDebugHeight;        // = 8.0f
        static /* 4 bytes */ m_curveDebugTransformCount;      // = 1
        static /* 1 bytes */ m_RT5TransformsForWalkMerge;     // = 1
        static /* 1 bytes */ m_RT5TransformsForLowBoneBases;  // = 1
        static /* 1 bytes */ m_RT5TransformForLowBoneBaseMax; // = 20
        static /* 1 bytes */ m_defaultBlendTreeBlendMode;     // = 2
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullAnimationState;
        static /* 1 bytes */ m_highlightRT5Transforms;
        static /* 3 bytes */ m_renderCurveDebug;
        static /* 4 bytes */ m_curveDebugFirstTransform;
        static /* 1 bytes */ m_curveDebugLimitToRange;
        static /* 3 bytes */ m_curveScrubMode;
        static /* 4 bytes */ m_curveScrubTime;
        static /* 1 bytes */ m_drawDebugSkeleton;
        static /* 1 bytes */ m_drawDebugSkeletonOnBlend;
        static /* 1 bytes */ m_RT5TransformsForAll;
        static /* 1 bytes */ m_useRuntimeCurves;
        static /* 4 bytes */ m_useRT7SamplerAsyncPath;

        // data members, from how the methods use this: 3788 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        undefined1 field_12; // offset 12
        char _unknown_13[11];
        undefined1 field_24;             // offset 24
        undefined1 m_animatedColourType; // offset 25
        char _unknown_26[296];
        undefined2 field_322; // offset 322
        char _unknown_324[4];
        undefined8 field_328;           // offset 328
        undefined8 field_336;           // offset 336
        ulonglong field_344;            // offset 344
        ulonglong field_352;            // offset 352
        shared_ptr field_360;           // offset 360
        RT7AnimationSampler* field_376; // offset 376
        long field_384;                 // offset 384
        char _unknown_392[744];
        BaseConfigTypeList field_1136; // offset 1136
        char _unknown_1240[1472];
        DebugUIElement field_2712; // offset 2712
        char _unknown_2721[79];
        DebugUIElement field_2800; // offset 2800
        char _unknown_2809[79];
        DebugUIElement field_2888; // offset 2888
        char _unknown_2897[79];
        DebugUIElement field_2976; // offset 2976
        char _unknown_2985[79];
        DebugUIElement field_3064; // offset 3064
        char _unknown_3073[103];
        DebugUIElement field_3176; // offset 3176
        char _unknown_3185[103];
        DebugUIElement field_3288; // offset 3288
        char _unknown_3297[103];
        DebugUIElement field_3400; // offset 3400
        char _unknown_3409[103];
        DebugUIElement field_3512; // offset 3512
        char _unknown_3521[127];
        undefined1 field_3648; // offset 3648
        char _unknown_3649[55];
        long field_3704; // offset 3704
        long field_3712; // offset 3712
        long field_3720; // offset 3720
        long field_3728; // offset 3728
        char _unknown_3736[36];
        ColourHSL field_3772; // offset 3772
    };

    // 0x10066a0f0, 32 bytes, inline, placed by class name and debug map
    // AnimationState::InvalidateSampled()
    void AnimationState::InvalidateSampled() {
        bool in_SIL;

        std::atomic<bool>::operator=((atomic<bool>*)&field_324, in_SIL);
    }

    // 0x10098afc0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // AnimationInfoBlendTreeNode::AnimationInfoBlendTreeNode(): jumps straight to the base-object constructor

    // 0x10098aff0, 16 bytes, complete-object destructor, inline, placed by class header (inline)
    // AnimationInfoBlendTreeNode::~AnimationInfoBlendTreeNode(): jumps straight to the base-object destructor

    // 0x10098bc60, 144 bytes, inline, placed by class header (inline)
    // AnimationInfoBlendTreeNode::SetAnim(AnimationInfo&)
    void AnimationInfoBlendTreeNode::SetAnim(AnimationInfo* param_1) {
        undefined1* this_00;
        NXTRenderCanvas* pNVar1;
        shared_ptr<AnimKeyFrameSet>* psVar2;
        RT7Core* this_01;
        shared_ptr* psVar3;
        AnimKeyFrameSet* this_02;

        AnimationInfo::operator=((AnimationInfo*)&field_40, param_1);
        this_00 = field_72;
        if (operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0)) {
            pNVar1 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
            psVar2 = (shared_ptr<AnimKeyFrameSet>*)pNVar1->GetPixelBuffer();
            this_01 = (RT7Core*)shared_ptr<AnimKeyFrameSet>::operator->(psVar2);
            psVar3 = (shared_ptr*)this_01->GetMSAASampleCount();
            shared_ptr<AnimBase>::operator=((shared_ptr<AnimBase>*)&field_88, psVar3);
            pNVar1 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
            psVar2 = (shared_ptr<AnimKeyFrameSet>*)pNVar1->GetPixelBuffer();
            this_02 = (AnimKeyFrameSet*)shared_ptr<AnimKeyFrameSet>::operator->(psVar2);
            field_104 = this_02->GetBindID();
        } else {
            BindInfo::operator=((BindInfo*)&field_88, (BindInfo*)&BlendTreeNode::EmptyBindInfo);
        }
    }

    // 0x10098d220, 32 bytes, deleting destructor, inline, placed by class header (inline)
    // AnimationInfoBlendTreeNode::~AnimationInfoBlendTreeNode()
    void AnimationInfoBlendTreeNode::~AnimationInfoBlendTreeNode() {
        ~AnimationInfoBlendTreeNode(this);
        operator_delete(this);
    }

    // 0x10098d240, 16 bytes, inline, placed by class header (inline)
    // AnimationInfoBlendTreeNode::GetTypeString() const
    char* AnimationInfoBlendTreeNode::GetTypeString() {
        return "Anim";
    }

    // 0x10098d250, 208 bytes, inline, placed by class header (inline)
    // AnimationInfoBlendTreeNode::GetTreeAsString() const
    AnimationInfoBlendTreeNode* AnimationInfoBlendTreeNode::GetTreeAsString() {
        char* pcVar2;
        long* in_RSI;
        eastl::string local_50[32];
        allocator local_30[8];

        if (operator==((shared_ptr*)(in_RSI + 9), (_func_decltype_nullptr*)0)) {
            pcVar2 = (char*)(**(code**)(*in_RSI + 48))();
            eastl::allocator::allocator(local_30, "EASTL basic_string");
            eastl::string::basic_string(local_50, pcVar2, local_30);
            eastl::operator+((eastl*)this, (basic_string*)local_50, (value_type*)"[NULL]");
            eastl::string::~basic_string(local_50);
        } else {
            pcVar2 = (char*)(**(code**)(*in_RSI + 48))();
            new (local_50) eastl::allocator("EASTL basic_string");
            new (this) eastl::string(pcVar2, local_50);
        }
        return this;
    }

    // 0x10098d320, 16 bytes, inline, placed by class name
    // AnimationState::GetAnimatedColourType() const
    undefined1 AnimationState::GetAnimatedColourType() {
        return m_animatedColourType;
    }

} // namespace jag::graphics

namespace jag::render {
    // 0x10066ece0: the linker folded this into FastPool_iterator<audio::SoundInstance, int>::FastPool_iterator(FastPool<audio::SoundInstance, int>*, int), which has identical code
    QueryView::QueryView(shared_ptr<Query>*, unsigned int);

    // 0x10066ecf0: the linker folded this into FastPool_iterator<audio::SoundInstance, int>::FastPool_iterator(FastPool<audio::SoundInstance, int>*, int), which has identical code
    QueryView::QueryView(shared_ptr<Query>*, unsigned int);

} // namespace jag::render

// 0x10066fa80, 16 bytes, placed by debug map only (low confidence)
// decltype ((static_cast<void (*&std::__invoke<void (*&)(jag::audio::SoundInstance*), jag::audio::SoundInstance*>(void (*&)(jag::audio::SoundInstance*), jag::audio::SoundInstance*&&))(jag::audio::SoundInstance*)>({parm#1}))(static_cast<jag::audio::SoundInstance*>({parm#2})))
void __ZNSt3__1L8__invokeIRPFvPN3jag5audio13SoundInstanceEEJS4_EEEDTclscT_fp_spscT0_fp0_EEOS8_DpOS9_(
    undefined8* param_1, undefined8* param_2) {
    (*(code*)*param_1)(*param_2);
}
