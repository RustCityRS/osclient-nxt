// libs/graphics/runetek7/animation/asm/AnimationStateMachine.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class AnimState {
    public:
        AnimationStateResourceList GetResources();
        uint8_t* GetName() const;
        void SetName(const eastl::string& str);
        AnimState(std::unique_ptr<BlendTreeNode>&& blendTreeNode,
                  AnimationStateResourceList&& animationStateResourceList);
        AnimState(const AnimationDescriptor& animationDescriptor);
        AnimState();
        ~AnimState();
        void Update(unsigned int arg1);
        void HasSingleAnimation() const;
        void ResetAnimations(unsigned int arg1);
        void GetBlendTree() const;
        void GetSingleAnimation();
        void GetSingleAnimation() const;
        bool HasAnimation() const;

    private:
        uint8_t _unknown_0[16];
        AnimationStateResourceList m_resources;
        uint8_t _unknown_49[87];
    };

    class AnimationStateMachine {
    public:
        class Transition;
        class TransitionInfo;
        // virtual methods in vtable order
        virtual ~AnimationStateMachine();
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
        virtual uint64_t GetAnimatesTransparency() const;
        virtual uint8_t GetAnimatedColourType() const;
        virtual void Update(unsigned int arg1);
        virtual void DebugOutputToString(eastl::fixed_string<char, 512>& str) const;
        unsigned int GetStateID() const;
        int GetAnimationType() const;
        AnimationStateMachine(const shared_ptr<AnimationResourceManager>& animationResourceManager);
        AnimationStateMachine(
            eastl::vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>>&& animStates,
            const eastl::vector<TransitionInfo>& transitionInfos, unsigned int arg3,
            const shared_ptr<AnimationResourceManager>& animationResourceManager);
        uint8_t* GetBlendTree() const;
        void SetTransitionRule(unsigned int arg1, unsigned int arg2, std::function<bool()> callback);
        void SetTransitionTime(unsigned int arg1, unsigned int arg2, unsigned long long arg3);
        void UpdateAnimationTypeForCurrentState();
        void SetUseRT5AnimationSampler();
        void SetUseSampledPoseAnimationSampler();
        void SetUseBlendTreeAnimationSampler();
        AnimState* GetCurrentState() const;
        bool IsTransitioning() const;
        void GetFromState() const;
        void GetToState() const;
        AnimState* GetCurrentState();
        AnimState* GetState(unsigned int arg1);
        AnimationStateMachine(AnimationStateMachine&& animationStateMachine);
        uint8_t ResourcesLoaded() const;

    private:
        uint8_t _unknown_8[16];
        unsigned int m_stateID;
        uint8_t field_28;
        uint8_t field_29;
        uint8_t _unknown_30[290];
        uint64_t field_320;
        long* field_328;
        uint8_t _unknown_336[400];
        uint8_t field_736;
        uint8_t _unknown_737[23];
        uint8_t m_transitioning;
        uint8_t field_761[7];
        unsigned long long field_768;
        unsigned int field_776;
        unsigned int field_780;
        int m_animationType;
        uint8_t _unknown_788[4];
    };

    class AnimationStateMachine::Transition {
    public:
        ~Transition();
        void SetTransition(const std::function<bool()>& callback, unsigned long long arg2);
        Transition();

    private:
        uint8_t field_0;
        uint8_t _unknown_1[63];
        unsigned long long field_64;
    };

    class AnimationStateMachine::TransitionInfo {
    public:
        ~TransitionInfo();
        TransitionInfo(TransitionInfo&& scheduledFunction);

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint8_t _unknown_16[8];
    };

    // 0x100956450
    void AnimState::SetName(const eastl::string& str) {
        field_128 = str;
    }

    // 0x100956b20
    void AnimState::HasSingleAnimation() const {
        void* in_RSI;

        &field_8 != in_RSI;
    }

    // 0x100957140
    void AnimationStateMachine::Transition::SetTransition(const std::function<bool()>& callback,
                                                          unsigned long long arg2) {
        field_0 = 1;
        field_16 = callback;
        field_64 = arg2;
    }

    // 0x100957dd0
    void AnimationStateMachine::SetUseRT5AnimationSampler() {
        unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>* this_00 =
            &field_32[(unsigned long)m_stateID];
        AnimState* this_01 = (AnimState*)(*this_00).operator->();
        auto animationParameters = this_01->GetSingleAnimation();
        AnimationInfo local_50(*animationParameters);
        field_432.SetAnimation(local_50);
        field_328 = (long*)&field_432;
    }

    // 0x100957e50
    void AnimationStateMachine::SetUseSampledPoseAnimationSampler() {
        unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>* this_00 =
            &field_32[(unsigned long)m_stateID];
        AnimState* this_01 = (AnimState*)(*this_00).operator->();
        auto animationParameters = this_01->GetSingleAnimation();
        AnimationInfo local_50(*animationParameters);
        field_584.SetAnimation(local_50);
        field_328 = (long*)&field_584;
    }

    // 0x100957ed0
    void AnimationStateMachine::SetUseBlendTreeAnimationSampler() {
        field_336.SetRightNode(&field_320);
        field_328 = (long*)&field_336;
    }

    // 0x100958300
    AnimState* AnimationStateMachine::GetCurrentState() const {
        unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>* this_00 =
            &field_32[(unsigned long)m_stateID];
        return (AnimState*)**this_00;
    }

    // 0x100958320
    bool AnimationStateMachine::IsTransitioning() const {
        return m_transitioning;
    }

    // 0x100958330
    void AnimationStateMachine::GetFromState() const {
        if (m_transitioning == '\0') {
            LogAssert("m_transitioning",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/AnimationStateMachine.h",
                      207, nullptr);
        }
        unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>* this_00 =
            &field_32[(unsigned long)field_776];
        **this_00;
    }

    // 0x100958390
    void AnimationStateMachine::GetToState() const {
        if (m_transitioning == '\0') {
            LogAssert("m_transitioning",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/AnimationStateMachine.h",
                      208, nullptr);
        }
        unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>* this_00 =
            &field_32[(unsigned long)field_780];
        **this_00;
    }

    // 0x10095de30
    AnimState* AnimationStateMachine::GetCurrentState() {
        unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>* this_00 =
            &field_32[(unsigned long)m_stateID];
        return (AnimState*)**this_00;
    }

    // 0x10095de50
    bool AnimState::HasAnimation() const {
        OpenGLView* this_00;
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        void* in_RSI;

        bool bVar1 = this != in_RSI;
        bool bVar3 = true;
        if (!bVar1) {
            if ((&field_8)->operator_cast_to_bool() == '\0') {
                bVar3 = false;
            } else {
                this_00 = (OpenGLView*)field_8.operator->();
                midiPlayerMainThread = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)this_00->GetCursorMutex();
                bVar3 = *midiPlayerMainThread != nullptr;
            }
        }
        return bVar3;
    }

    // 0x10095e6a0
    AnimState* AnimationStateMachine::GetState(unsigned int arg1) {
        unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>* this_00 =
            &field_32[(unsigned long)arg1];
        return (AnimState*)**this_00;
    }

    // 0x100962930
    AnimationStateMachine::~AnimationStateMachine() {
        field_744.~shared_ptr();
        field_584.~SampledPoseAnimationSampler();
        field_432.~RT5AnimationSampler();
        field_336.~BlendTreeAnimationSampler();
        field_248.~AnimationBlendTreeNode();
        field_176.~AnimationBlendTreeNode();
        field_88.~RefCounterAndData();
        field_64.~vector();
        field_32.~vector();
    }

    // 0x10096a620
    AnimationStateMachine::Transition::Transition() : field_0(0), field_64(0) {}

    // 0x10096bf00
    AnimationStateMachine::AnimationStateMachine(AnimationStateMachine&& animationStateMachine)
        : AnimationStateSystem(animationStateMachine), m_stateID(animationStateMachine.m_stateID) {
        uint8_t uVar3 = animationStateMachine.field_29;
        field_28 = animationStateMachine.field_28;
        field_29 = uVar3;
        new (&field_32) eastl::vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>>(
            animationStateMachine.field_32);
        new (&field_64) std::vector<std::vector<AnimationStateMachine::Transition>>(animationStateMachine.field_64);
        new (&field_88) SimpleTwoNodeBlendTreeNode<unsigned long long>(animationStateMachine.field_88);
        new (&field_176) AnimationBlendTreeNode<AnimationParameters*>(animationStateMachine.field_176);
        new (&field_248) AnimationBlendTreeNode<AnimationParameters*>(animationStateMachine.field_248);
        long* plVar1 = animationStateMachine.field_328;
        field_320 = animationStateMachine.field_320;
        field_328 = plVar1;
        new (&field_336) BlendTreeAnimationSampler(animationStateMachine.field_336);
        new (&field_432) RT5AnimationSampler(animationStateMachine.field_432);
        new (&field_584) SampledPoseAnimationSampler(animationStateMachine.field_584);
        field_736 = animationStateMachine.field_736;
        field_744.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(animationStateMachine.field_744);
        uVar3 = animationStateMachine.m_transitioning;
        uint64_t uVar6 = animationStateMachine.field_761;
        unsigned long long uVar2 = animationStateMachine.field_768;
        unsigned int uVar4 = animationStateMachine.field_780;
        int iVar5 = animationStateMachine.m_animationType;
        *(uint64_t*)((long)&field_768 + 4) = *(uint64_t*)((long)&animationStateMachine.field_768 + 4);
        field_780 = uVar4;
        m_animationType = iVar5;
        m_transitioning = uVar3;
        field_761 = uVar6;
        field_768 = uVar2;
    }

    // 0x100974600
    uint8_t AnimationStateMachine::ResourcesLoaded() const {
        return field_29;
    }

} // namespace jag::graphics
