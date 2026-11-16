// libs/graphics/runetek7/animation/asm/AnimationStateMachine.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class AnimState {
    public:
        AnimationStateResourceList GetResources();
        GetName() const;
        void SetName(eastl::string const&);
        AnimState(std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>&&, AnimationStateResourceList&&);
        AnimState(AnimationDescriptor const&);
        AnimState();
        ~AnimState();
        void Update(unsigned int);
        void HasSingleAnimation() const;
        void ResetAnimations(unsigned int);
        void GetBlendTree() const;
        void GetSingleAnimation();
        void GetSingleAnimation() const;
        bool HasAnimation() const;

        // data members, from how the methods use this: 136 bytes
        char _unknown_0[16];
        AnimationStateResourceList m_resources; // offset 16
        char _unknown_49[87];
    };

    class AnimationStateMachine {
    public:
        class Transition;
        class TransitionInfo;
        // virtual methods in vtable order
        virtual ~AnimationStateMachine();
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
        virtual void Update(unsigned int);
        virtual void DebugOutputToString(eastl::fixed_string<char, 512, true, eastl::allocator>&) const;
        uint GetStateID() const;
        int GetAnimationType() const;
        AnimationStateMachine(shared_ptr<AnimationResourceManager> const&);
        AnimationStateMachine(
            eastl::vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>,
                          eastl::allocator>&&,
            eastl::vector<TransitionInfo, eastl::allocator> const&, unsigned int,
            shared_ptr<AnimationResourceManager> const&);
        GetBlendTree() const;
        void SetTransitionRule(unsigned int, unsigned int, std::function<bool()>);
        void SetTransitionTime(unsigned int, unsigned int, unsigned long long);
        void UpdateAnimationTypeForCurrentState();
        void SetUseRT5AnimationSampler();
        void SetUseSampledPoseAnimationSampler();
        void SetUseBlendTreeAnimationSampler();
        void GetCurrentState() const;
        IsTransitioning() const;
        void GetFromState() const;
        void GetToState() const;
        void GetCurrentState();
        void GetState(unsigned int);
        AnimationStateMachine(AnimationStateMachine&&);
        ResourcesLoaded() const;

        // data members, from how the methods use this: 792 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        uint m_stateID;      // offset 24
        undefined1 field_28; // offset 28
        undefined1 field_29; // offset 29
        char _unknown_30[290];
        undefined8 field_320; // offset 320
        long* field_328;      // offset 328
        char _unknown_336[400];
        undefined1 field_736; // offset 736
        char _unknown_737[23];
        undefined1 m_transitioning; // offset 760
        undefined7 field_761;       // offset 761
        ulonglong field_768;        // offset 768
        uint field_776;             // offset 776
        uint field_780;             // offset 780
        int m_animationType;        // offset 784
        char _unknown_788[4];
    };

    class AnimationStateMachine::Transition {
    public:
        ~Transition();
        void SetTransition(std::function<bool()> const&, unsigned long long);
        Transition();

        // data members, from how the methods use this: 72 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[63];
        ulonglong field_64; // offset 64
    };

    class AnimationStateMachine::TransitionInfo {
    public:
        ~TransitionInfo();
        TransitionInfo(TransitionInfo&&);

        // data members, from how the methods use this: 24 bytes
        undefined8 field_0; // offset 0
        undefined8 field_8; // offset 8
        char _unknown_16[8];
    };

    // 0x100956450, 16 bytes, inline, placed by debug map only (low confidence)
    // AnimState::SetName(eastl::string const&)
    void AnimState::SetName(basic_string* param_1) {
        eastl::string::operator=((eastl::string*)&field_128, param_1);
    }

    // 0x100956b20, 16 bytes, inline, placed by class header (inline)
    // AnimState::HasSingleAnimation() const
    void AnimState::HasSingleAnimation() {
        _func_decltype_nullptr* in_RSI;

        std::operator!=((unique_ptr*)&field_8, in_RSI);
    }

    // 0x100957140, 48 bytes, inline, placed by class name
    // AnimationStateMachine::Transition::SetTransition(std::function<bool ()> const&, unsigned long long)
    /* AnimationStateMachine::Transition::SetTransition(std::function<bool ()> const&,
   unsigned long long) */

    void AnimationStateMachine::Transition::SetTransition(function* param_1, ulonglong param_2) {
        field_0 = 1;
        std::function<bool()>::operator=((function<bool()>*)&field_16, param_1);
        field_64 = param_2;
    }

    // 0x100957dd0, 128 bytes, inline, placed by class name
    // AnimationStateMachine::SetUseRT5AnimationSampler()
    void AnimationStateMachine::SetUseRT5AnimationSampler() {
        unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>* this_00;
        AnimState* this_01;
        AnimationParameters* pAVar1;
        AnimationInfo local_50;

        this_00 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)eastl::vector<
            std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>, eastl::allocator>::
        operator[]((vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>,
                           eastl::allocator>*)&field_32,
                   (ulong)m_stateID);
        this_01 =
            (AnimState*)std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>::operator->(
                this_00);
        pAVar1 = (AnimationParameters*)this_01->GetSingleAnimation();
        new (&local_50) AnimationInfo(pAVar1);
        (&field_432, &local_50)->SetAnimation();
        field_328 = (long*)&field_432;
        local_50.~Sprite();
    }

    // 0x100957e50, 128 bytes, inline, placed by class name
    // AnimationStateMachine::SetUseSampledPoseAnimationSampler()
    void AnimationStateMachine::SetUseSampledPoseAnimationSampler() {
        unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>* this_00;
        AnimState* this_01;
        AnimationParameters* pAVar1;
        AnimationInfo local_50;

        this_00 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)eastl::vector<
            std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>, eastl::allocator>::
        operator[]((vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>,
                           eastl::allocator>*)&field_32,
                   (ulong)m_stateID);
        this_01 =
            (AnimState*)std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>::operator->(
                this_00);
        pAVar1 = (AnimationParameters*)this_01->GetSingleAnimation();
        new (&local_50) AnimationInfo(pAVar1);
        (&field_584, &local_50)->SetAnimation();
        field_328 = (long*)&field_584;
        local_50.~Sprite();
    }

    // 0x100957ed0, 48 bytes, inline, placed by class name
    // AnimationStateMachine::SetUseBlendTreeAnimationSampler()
    void AnimationStateMachine::SetUseBlendTreeAnimationSampler() {
        (&field_336, (BlendTreeNode*)&field_320)->SetRightNode();
        field_328 = (long*)&field_336;
    }

    // 0x100958300, 32 bytes, inline, placed by class name
    // AnimationStateMachine::GetCurrentState() const
    void AnimationStateMachine::GetCurrentState() {
        unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>* this_00;

        this_00 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)eastl::vector<
            std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>, eastl::allocator>::
        operator[]((vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>,
                           eastl::allocator>*)&field_32,
                   (ulong)m_stateID);
        std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>::operator*(this_00);
    }

    // 0x100958320, 16 bytes, inline, placed by class name
    // AnimationStateMachine::IsTransitioning() const
    undefined1 AnimationStateMachine::IsTransitioning() {
        return m_transitioning;
    }

    // 0x100958330, 96 bytes, inline, placed by class name
    // AnimationStateMachine::GetFromState() const
    void AnimationStateMachine::GetFromState() {
        unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>* this_00;

        if (m_transitioning == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_transitioning",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/AnimationStateMachine.h",
                      207, (char*)0);
        }
        this_00 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)eastl::vector<
            std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>, eastl::allocator>::
        operator[]((vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>,
                           eastl::allocator>*)&field_32,
                   (ulong)field_776);
        std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>::operator*(this_00);
    }

    // 0x100958390, 96 bytes, inline, placed by class name
    // AnimationStateMachine::GetToState() const
    void AnimationStateMachine::GetToState() {
        unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>* this_00;

        if (m_transitioning == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_transitioning",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/AnimationStateMachine.h",
                      208, (char*)0);
        }
        this_00 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)eastl::vector<
            std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>, eastl::allocator>::
        operator[]((vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>,
                           eastl::allocator>*)&field_32,
                   (ulong)field_780);
        std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>::operator*(this_00);
    }

    // 0x100959770, 16 bytes, complete-object destructor, inline, placed by class name
    // AnimationStateMachine::~AnimationStateMachine(): jumps straight to the base-object destructor

    // 0x10095de30, 32 bytes, inline, placed by class name
    // AnimationStateMachine::GetCurrentState()
    void AnimationStateMachine::GetCurrentState() {
        unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>* this_00;

        this_00 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)eastl::vector<
            std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>, eastl::allocator>::
        operator[]((vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>,
                           eastl::allocator>*)&field_32,
                   (ulong)m_stateID);
        std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>::operator*(this_00);
    }

    // 0x10095de50, 80 bytes, inline, placed by class header (inline)
    // AnimState::HasAnimation() const
    bool AnimState::HasAnimation() {
        bool bVar1;
        bool bVar2;
        OpenGLView* this_00;
        shared_ptr* psVar3;
        _func_decltype_nullptr* in_RSI;

        bVar1 = std::operator!=((unique_ptr*)this, in_RSI);
        bVar2 = true;
        if (!bVar1) {
            bVar1 = (&field_8)->operator_cast_to_bool();
            if (bVar1) {
                this_00 =
                    (OpenGLView*)std::unique_ptr<AnimationParameters,
                                                 MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>::
                    operator->((unique_ptr<AnimationParameters,
                                           MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>*)&field_8);
                psVar3 = (shared_ptr*)this_00->GetCursorMutex();
                bVar2 = operator!=(psVar3, (_func_decltype_nullptr*)0);
            } else {
                bVar2 = false;
            }
        }
        return bVar2;
    }

    // 0x10095e6a0, 32 bytes, inline, placed by class name
    // AnimationStateMachine::GetState(unsigned int)
    void AnimationStateMachine::GetState(uint param_1) {
        unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>* this_00;

        this_00 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)eastl::vector<
            std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>, eastl::allocator>::
        operator[]((vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>,
                           eastl::allocator>*)&field_32,
                   (ulong)param_1);
        std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>::operator*(this_00);
    }

    // 0x100960b60, 32 bytes, deleting destructor, inline, placed by class name
    // AnimationStateMachine::~AnimationStateMachine()
    void AnimationStateMachine::~AnimationStateMachine() {
        ~AnimationStateMachine(this);
        operator_delete(this);
    }

    // 0x100962930, 144 bytes, base-object destructor, inline, placed by class name
    // AnimationStateMachine::~AnimationStateMachine()
    void AnimationStateMachine::~AnimationStateMachine() {
        field_0 = &PTR__AnimationStateMachine_100f1b1d8;
        (&field_744)->~shared_ptr();
        (&field_584)->~SampledPoseAnimationSampler();
        (&field_432)->~RT5AnimationSampler();
        (&field_336)->~BlendTreeAnimationSampler();
        (&field_248)->~AnimationBlendTreeNode();
        (&field_176)->~AnimationBlendTreeNode();
        (&field_88)->~RefCounterAndData();
        (&field_64)->~vector();
        (&field_32)->~vector();
        ~AnimationStateSystem();
    }

    // 0x10096a610, 16 bytes, complete-object constructor, inline, placed by class name
    // AnimationStateMachine::Transition::Transition(): jumps straight to the base-object constructor

    // 0x10096a620, 48 bytes, base-object constructor, inline, placed by class name
    // AnimationStateMachine::Transition::Transition()
    void AnimationStateMachine::Transition::Transition() {
        field_0 = 0;
        std::function<bool()>::function((function<bool()>*)&field_16);
        field_64 = 0;
    }

    // 0x10096bef0, 16 bytes, complete-object constructor, inline, placed by class name
    // AnimationStateMachine::AnimationStateMachine(AnimationStateMachine&&): jumps straight to the base-object constructor

    // 0x10096bf00, 464 bytes, base-object constructor, inline, placed by class name
    // AnimationStateMachine::AnimationStateMachine(AnimationStateMachine&&)
    void AnimationStateMachine::AnimationStateMachine(AnimationStateMachine* param_1) {
        long* plVar1;
        ulonglong uVar2;
        undefined1 uVar3;
        uint uVar4;
        int iVar5;
        undefined7 uVar6;

        new (this) AnimationStateSystem(param_1);
        field_0 = &PTR__AnimationStateMachine_100f1b1d8;
        m_stateID = param_1->m_stateID;
        uVar3 = param_1->field_29;
        field_28 = param_1->field_28;
        field_29 = uVar3;
        new (&field_32, (vector*)&param_1->field_32)
            eastl::vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>,
                          eastl::allocator>();
        new (&field_64, (vector*)&param_1->field_64) std::vector<
            std::vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>,
            std::allocator<
                std::vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>>>();
        new (&field_88, (SimpleTwoNodeBlendTreeNode*)&param_1->field_88)
            SimpleTwoNodeBlendTreeNode<unsigned long long>();
        new (&field_176, (AnimationBlendTreeNode*)&param_1->field_176) AnimationBlendTreeNode<AnimationParameters*>();
        new (&field_248, (AnimationBlendTreeNode*)&param_1->field_248) AnimationBlendTreeNode<AnimationParameters*>();
        plVar1 = param_1->field_328;
        field_320 = param_1->field_320;
        field_328 = plVar1;
        new (&field_336, (BlendTreeAnimationSampler*)&param_1->field_336) BlendTreeAnimationSampler();
        new (&field_432, (RT5AnimationSampler*)&param_1->field_432) RT5AnimationSampler();
        new (&field_584, (SampledPoseAnimationSampler*)&param_1->field_584) SampledPoseAnimationSampler();
        field_736 = param_1->field_736;
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&field_744, (shared_ptr*)&param_1->field_744);
        uVar3 = param_1->m_transitioning;
        uVar6 = param_1->field_761;
        uVar2 = param_1->field_768;
        uVar4 = param_1->field_780;
        iVar5 = param_1->m_animationType;
        *(undefined8*)((long)&field_768 + 4) = *(undefined8*)((long)&param_1->field_768 + 4);
        field_780 = uVar4;
        m_animationType = iVar5;
        m_transitioning = uVar3;
        field_761 = uVar6;
        field_768 = uVar2;
    }

    // 0x100974600, 16 bytes, inline, placed by class name
    // AnimationStateMachine::ResourcesLoaded() const
    undefined1 AnimationStateMachine::ResourcesLoaded() {
        return field_29;
    }

} // namespace jag::graphics
