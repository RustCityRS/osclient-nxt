// libs/graphics/runetek7/animation/asm/AnimationStateMachine.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "AnimationStateMachine.h"

namespace jag::graphics {
    // 0x1000f79b0: the linker folded this into oldscape::Client::ScheduledFunction::~ScheduledFunction(), which has identical code
    AnimationStateMachine::Transition::~Transition();

    // 0x1000f79b0: the linker folded this into oldscape::Client::ScheduledFunction::~ScheduledFunction(), which has identical code
    AnimationStateMachine::TransitionInfo::~TransitionInfo();

    // 0x10012dbf0: the linker folded this into oldscape::Client::ScheduledFunction::~ScheduledFunction(), which has identical code
    AnimationStateMachine::Transition::~Transition();

    // 0x10012dbf0: the linker folded this into oldscape::Client::ScheduledFunction::~ScheduledFunction(), which has identical code
    AnimationStateMachine::TransitionInfo::~TransitionInfo();

    // 0x10014b200: the linker folded this into oldscape::Client::ScheduledFunction::ScheduledFunction(oldscape::Client::ScheduledFunction&&), which has identical code
    AnimationStateMachine::TransitionInfo::TransitionInfo(AnimationStateMachine::TransitionInfo&&);

    // 0x10014b210: the linker folded this into oldscape::Client::ScheduledFunction::ScheduledFunction(oldscape::Client::ScheduledFunction&&), which has identical code
    AnimationStateMachine::TransitionInfo::TransitionInfo(AnimationStateMachine::TransitionInfo&&);

    // 0x1003cf2a0: the linker folded this into game::WorldMapDefaults::GetDropShadowColourRGBA() const, which has identical code
    uint AnimationStateMachine::GetStateID() const;

    // 0x10053c290: the linker folded this into game::Model::GetLinkObjType() const, which has identical code
    int AnimationStateMachine::GetAnimationType() const;

    // 0x1009566e0, 160 bytes, base-object constructor, placed by debug map only (low confidence)
    // AnimState::AnimState(std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode> >&&, AnimationStateResourceList&&)
    /* AnimState::AnimState(std::unique_ptr<BlendTreeNode,
   std::default_delete<BlendTreeNode> >&&,
   AnimationStateResourceList&&) */

    void AnimState::AnimState(unique_ptr* param_1, AnimationStateResourceList* param_2) {
        new (this) MakeUniquePool<AnimState, 4096>();
        new (this) std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>(param_1);
        std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>::unique_ptr<
            true, void>(
            (unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>*)&field_8);
        new (m_resources, param_2) AnimationStateResourceList();
        new (&field_56) eastl::fixed_vector<AnimationParameters*, 4ul, true, eastl::allocator>();
        new (&field_128) eastl::string();
    }

    // 0x100956840, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // AnimState::AnimState(std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode> >&&, AnimationStateResourceList&&): jumps straight to the base-object constructor

    // 0x100956850, 272 bytes, base-object constructor, placed by debug map only (low confidence)
    // AnimState::AnimState(AnimationDescriptor const&)
    void AnimState::AnimState(AnimationDescriptor* param_1) {
        function<void(
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>
            local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (this) MakeUniquePool<AnimState, 4096>();
        std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>::unique_ptr<true, void>(
            (unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>*)this);
        std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>::unique_ptr<
            true, void>(
            (unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>*)&field_8);
        new (m_resources) AnimationStateResourceList();
        new (&field_56) eastl::fixed_vector<AnimationParameters*, 4ul, true, eastl::allocator>();
        new (&field_128) eastl::string();
        std::function<void(
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>::
            function<AnimState::AnimState(AnimationDescriptor_const&)::__3, void>(local_68, this);
        (m_resources, param_1, local_68)->AddAnimationResource();
        std::function<void(
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>::
            ~function(local_68);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100956980, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // AnimState::AnimState(AnimationDescriptor const&): jumps straight to the base-object constructor

    // 0x100956990, 160 bytes, base-object constructor, placed by debug map only (low confidence)
    // AnimState::AnimState()
    void AnimState::AnimState() {
        new (this) MakeUniquePool<AnimState, 4096>();
        std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>::unique_ptr<true, void>(
            (unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>*)this);
        std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>::unique_ptr<
            true, void>(
            (unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>*)&field_8);
        new (m_resources) AnimationStateResourceList();
        new (&field_56) eastl::fixed_vector<AnimationParameters*, 4ul, true, eastl::allocator>();
        new (&field_128) eastl::string();
    }

    // 0x100956a30, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // AnimState::AnimState(): jumps straight to the base-object constructor

    // 0x100956a40, 64 bytes, base-object destructor, placed by debug map only (low confidence)
    // AnimState::~AnimState()
    void AnimState::~AnimState() {
        (&field_128)->~basic_string();
        (&field_56)->~fixed_vector();
        m_resources->~AnimationStateResourceList();
        (&field_8)->~unique_ptr();
        ~unique_ptr();
    }

    // 0x100956a80, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // AnimState::~AnimState(): jumps straight to the base-object destructor

    // 0x100956a90, 96 bytes, placed by debug map only (low confidence)
    // AnimState::Update(unsigned int)
    void AnimState::Update(uint param_1) {
        AnimationParameters* this_00;
        long* plVar3;

        if (operator_cast_to_bool()) {
            plVar3 = (long*)std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>::operator->(
                (unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>*)this);
            (**(code**)(*plVar3 + 32))(plVar3, param_1);
        } else {
            if (HasSingleAnimation(this) != '\0') {
                this_00 =
                    (AnimationParameters*)std::unique_ptr<AnimationParameters,
                                                          MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>::
                    operator->((unique_ptr<AnimationParameters,
                                           MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>*)&field_8);
                this_00->Update(param_1);
            }
        }
    }

    // 0x100956b40, 96 bytes, placed by debug map only (low confidence)
    // AnimState::ResetAnimations(unsigned int)
    void AnimState::ResetAnimations(uint param_1) {
        AnimationParameters* this_00;
        long* plVar3;

        if (operator_cast_to_bool()) {
            plVar3 = (long*)std::unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>::operator->(
                (unique_ptr<BlendTreeNode, std::default_delete<BlendTreeNode>>*)this);
            (**(code**)(*plVar3 + 40))(plVar3, param_1);
        } else {
            if (HasSingleAnimation(this) != '\0') {
                this_00 =
                    (AnimationParameters*)std::unique_ptr<AnimationParameters,
                                                          MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>::
                    operator->((unique_ptr<AnimationParameters,
                                           MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>*)&field_8);
                this_00->Reset(param_1, 0);
            }
        }
    }

    // 0x100956ba0, 400 bytes, base-object constructor, placed by class name and debug map
    // AnimationStateMachine::AnimationStateMachine(shared_ptr<AnimationResourceManager> const&)
    void AnimationStateMachine::AnimationStateMachine(shared_ptr* param_1) {
        new (this) AnimationStateSystem();
        field_0 = &PTR__AnimationStateMachine_100f1b1d8;
        m_stateID = 0;
        field_28 = 0;
        field_29 = 0;
        new (&field_32) eastl::vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>,
                                      eastl::allocator>();
        std::vector<std::vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>,
                    std::allocator<std::vector<AnimationStateMachine::Transition,
                                               std::allocator<AnimationStateMachine::Transition>>>>::vector();
        new (&field_88) SimpleTwoNodeBlendTreeNode<unsigned long long>();
        new (&field_176) AnimationBlendTreeNode<AnimationParameters*>();
        new (&field_248) AnimationBlendTreeNode<AnimationParameters*>();
        new (&field_320) math::Vector2T<int>();
        field_328 = (long*)0;
        new (&field_336) BlendTreeAnimationSampler();
        new (&field_432) RT5AnimationSampler();
        new (&field_584) SampledPoseAnimationSampler();
        field_736 = 0;
        new (&field_744, param_1) shared_ptr<oldscape::dash3d::Decor>();
        m_transitioning = 0;
        field_768 = 0;
        field_776 = 0;
        field_780 = 0;
        m_animationType = 0;
    }

    // 0x100956dd0, 16 bytes, complete-object constructor, placed by class name
    // AnimationStateMachine::AnimationStateMachine(shared_ptr<AnimationResourceManager> const&): jumps straight to the base-object constructor

    // 0x100956de0, 576 bytes, base-object constructor, placed by class name
    // AnimationStateMachine::AnimationStateMachine(eastl::vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>, eastl::allocator>&&, eastl::vector<AnimationStateMachine::TransitionInfo, eastl::allocator> const&, unsigned int, shared_ptr<AnimationResourceManager> const&)
    /* AnimationStateMachine::AnimationStateMachine(eastl::vector<std::unique_ptr<AnimState,
   MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>, eastl::allocator>&&,
   eastl::vector<AnimationStateMachine::TransitionInfo, eastl::allocator> const&,
   unsigned int, shared_ptr<AnimationResourceManager> const&) */

    void AnimationStateMachine::AnimationStateMachine(vector* param_1, vector* param_2, uint param_3,
                                                      shared_ptr* param_4) {
        undefined1* this_00;
        uint* puVar1;
        uint* puVar2;
        vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>* this_01;
        Transition* this_02;
        uint uVar3;
        uint local_34;

        new (this) AnimationStateSystem();
        field_0 = &PTR__AnimationStateMachine_100f1b1d8;
        field_28 = 0;
        field_29 = 0;
        new (&field_32, param_1)
            eastl::vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>,
                          eastl::allocator>();
        this_00 = &field_64;
        std::vector<std::vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>,
                    std::allocator<std::vector<AnimationStateMachine::Transition,
                                               std::allocator<AnimationStateMachine::Transition>>>>::vector();
        new (&field_88) SimpleTwoNodeBlendTreeNode<unsigned long long>();
        new (&field_176) AnimationBlendTreeNode<AnimationParameters*>();
        new (&field_248) AnimationBlendTreeNode<AnimationParameters*>();
        new (&field_320) math::Vector2T<int>();
        field_328 = (long*)0;
        new (&field_336) BlendTreeAnimationSampler();
        new (&field_432) RT5AnimationSampler();
        new (&field_584) SampledPoseAnimationSampler();
        field_736 = 0;
        new (&field_744, param_4) shared_ptr<oldscape::dash3d::Decor>();
        m_transitioning = 0;
        field_768 = 0;
        field_776 = 0;
        field_780 = 0;
        m_animationType = 0;
        local_34 = (&field_32)->size();
        this_00->reserve((ulong)local_34);
        if (local_34 != 0) {
            uVar3 = 0;
            do {
                std::vector<
                    std::vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>,
                    std::allocator<std::vector<AnimationStateMachine::Transition,
                                               std::allocator<AnimationStateMachine::Transition>>>>::
                    emplace_back<unsigned int&>(
                        (vector<std::vector<AnimationStateMachine::Transition,
                                            std::allocator<AnimationStateMachine::Transition>>,
                                std::allocator<std::vector<AnimationStateMachine::Transition,
                                                           std::allocator<AnimationStateMachine::Transition>>>>*)
                            this_00,
                        &local_34);
                uVar3 = uVar3 + 1;
            } while (uVar3 < local_34);
        }
        puVar1 = (uint*)param_2->HeapBeginPtr();
        puVar2 = (uint*)param_2->end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 16) {
            uVar3 = puVar1[1];
            this_01 = (vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>*)
                std::vector<
                    std::vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>,
                    std::allocator<std::vector<AnimationStateMachine::Transition,
                                               std::allocator<AnimationStateMachine::Transition>>>>::
                operator[](
                    (vector<std::vector<AnimationStateMachine::Transition,
                                        std::allocator<AnimationStateMachine::Transition>>,
                            std::allocator<std::vector<AnimationStateMachine::Transition,
                                                       std::allocator<AnimationStateMachine::Transition>>>>*)this_00,
                    (ulong)*puVar1);
            this_02 =
                (Transition*)std::vector<AnimationStateMachine::Transition,
                                         std::allocator<AnimationStateMachine::Transition>>::operator[](this_01,
                                                                                                        (ulong)uVar3);
            this_02->SetTransition((function*)(puVar1 + 4), *(ulonglong*)(puVar1 + 2));
        }
        m_stateID = param_3;
        field_28 = 1;
    }

    // 0x100957170, 16 bytes, complete-object constructor, placed by class name
    // AnimationStateMachine::AnimationStateMachine(eastl::vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>, eastl::allocator>&&, eastl::vector<AnimationStateMachine::TransitionInfo, eastl::allocator> const&, unsigned int, shared_ptr<AnimationResourceManager> const&): jumps straight to the base-object constructor

    // 0x100957180, 64 bytes, placed by class name
    // AnimationStateMachine::GetBlendTree() const
    undefined1* AnimationStateMachine::GetBlendTree() {
        unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>* this_00;
        AnimState* this_01;
        undefined1* puVar1;

        if (m_transitioning == '\0') {
            this_00 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)eastl::vector<
                std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>, eastl::allocator>::
            operator[]((vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>,
                               eastl::allocator>*)&field_32,
                       (ulong)m_stateID);
            this_01 =
                (AnimState*)std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>::operator->(
                    this_00);
            puVar1 = (undefined1*)this_01->GetBlendTree();
            return puVar1;
        }
        return &field_88;
    }

    // 0x100957210, 112 bytes, placed by class name
    // AnimationStateMachine::SetTransitionRule(unsigned int, unsigned int, std::function<bool ()>)
    /* AnimationStateMachine::SetTransitionRule(unsigned int, unsigned int,
   std::function<bool ()>) */

    void AnimationStateMachine::SetTransitionRule(uint param_1, uint param_2, function* param_4) {
        vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>* pvVar1;
        undefined1* puVar2;
        long lVar3;

        pvVar1 =
            (vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>*)std::vector<
                std::vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>,
                std::allocator<std::vector<AnimationStateMachine::Transition,
                                           std::allocator<AnimationStateMachine::Transition>>>>::
            operator[](
                (vector<
                    std::vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>,
                    std::allocator<std::vector<AnimationStateMachine::Transition,
                                               std::allocator<AnimationStateMachine::Transition>>>>*)&field_64,
                (ulong)param_1);
        puVar2 =
            (undefined1*)std::vector<AnimationStateMachine::Transition,
                                     std::allocator<AnimationStateMachine::Transition>>::operator[](pvVar1,
                                                                                                    (ulong)param_2);
        *puVar2 = 1;
        pvVar1 =
            (vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>*)std::vector<
                std::vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>,
                std::allocator<std::vector<AnimationStateMachine::Transition,
                                           std::allocator<AnimationStateMachine::Transition>>>>::
            operator[](
                (vector<
                    std::vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>,
                    std::allocator<std::vector<AnimationStateMachine::Transition,
                                               std::allocator<AnimationStateMachine::Transition>>>>*)&field_64,
                (ulong)param_1);
        lVar3 = std::vector<AnimationStateMachine::Transition,
                            std::allocator<AnimationStateMachine::Transition>>::operator[](pvVar1, (ulong)param_2);
        std::function<bool()>::operator=((function<bool()>*)(lVar3 + 16), param_4);
    }

    // 0x100957280, 48 bytes, placed by class name
    // AnimationStateMachine::SetTransitionTime(unsigned int, unsigned int, unsigned long long)
    void AnimationStateMachine::SetTransitionTime(uint param_1, uint param_2, ulonglong param_3) {
        vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>* this_00;
        long lVar1;

        this_00 =
            (vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>*)std::vector<
                std::vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>,
                std::allocator<std::vector<AnimationStateMachine::Transition,
                                           std::allocator<AnimationStateMachine::Transition>>>>::
            operator[](
                (vector<
                    std::vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>,
                    std::allocator<std::vector<AnimationStateMachine::Transition,
                                               std::allocator<AnimationStateMachine::Transition>>>>*)&field_64,
                (ulong)param_1);
        lVar1 = std::vector<AnimationStateMachine::Transition,
                            std::allocator<AnimationStateMachine::Transition>>::operator[](this_00, (ulong)param_2);
        *(ulonglong*)(lVar1 + 64) = param_3;
    }

    // 0x1009572b0, 768 bytes, placed by class name
    // AnimationStateMachine::Update(unsigned int)
    void AnimationStateMachine::Update(uint param_1) {
        uint uVar1;
        uint uVar2;
        vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>, eastl::allocator>*
            pvVar3;
        bool bVar4;
        char cVar5;
        unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>* puVar6;
        unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>* puVar7;
        NXTPixToolkit* pNVar8;
        MainLoopFrameTimer* this_00;
        undefined8 uVar9;
        Layout* pLVar10;
        long lVar11;
        vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>* pvVar12;
        long lVar13;
        AnimState* pAVar14;
        ulong uVar15;
        char* pcVar16;
        vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>* this_01;
        uint* puVar17;
        ulonglong uVar18;
        vector<unsigned int, BucketAllocatorEASTL>* this_02;
        ulong uVar19;
        bool bVar20;
        vector<unsigned int, BucketAllocatorEASTL> local_58[24];
        vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>, eastl::allocator>*
            local_40;
        uint local_38;
        uint local_34;

        this_00 = (MainLoopFrameTimer*)&field_32;
        local_38 = param_1;
        puVar6 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)this_00->HeapBeginPtr();
        local_40 =
            (vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>, eastl::allocator>*)
                this_00;
        puVar7 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)this_00->end();
        if (puVar6 == puVar7) {
            bVar20 = true;
        } else {
            bVar20 = true;
            do {
                pNVar8 = (NXTPixToolkit*)
                             std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>::operator->(
                                 puVar6);
                this_00 = (MainLoopFrameTimer*)pNVar8->GetScreen();
                bVar4 = MainLoopFrameTimer::GetFastUpdateLoopEnabled(this_00);
                if (!bVar4) {
                    this_00 = (MainLoopFrameTimer*)shared_ptr<AnimationResourceManager>::operator->(
                        (shared_ptr<AnimationResourceManager>*)&field_744);
                    pNVar8 =
                        (NXTPixToolkit*)
                            std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>::operator->(
                                puVar6);
                    uVar9 = pNVar8->GetScreen();
                    (**(code**)(*(long*)this_00 + 24))(this_00, uVar9);
                    bVar20 = false;
                }
                puVar6 = puVar6 + 8;
            } while (puVar6 != puVar7);
        }
        if (bVar20) {
            field_29 = 1;
            if (m_transitioning != '\0') {
                pLVar10 = (Layout*)this_00->Instance();
                lVar11 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(pLVar10);
                uVar18 = field_768;
                uVar1 = field_776;
                pvVar12 =
                    (vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>*)
                        std::vector<std::vector<AnimationStateMachine::Transition,
                                                std::allocator<AnimationStateMachine::Transition>>,
                                    std::allocator<std::vector<AnimationStateMachine::Transition,
                                                               std::allocator<AnimationStateMachine::Transition>>>>::
                        operator[](
                            (vector<std::vector<AnimationStateMachine::Transition,
                                                std::allocator<AnimationStateMachine::Transition>>,
                                    std::allocator<
                                        std::vector<AnimationStateMachine::Transition,
                                                    std::allocator<AnimationStateMachine::Transition>>>>*)&field_64,
                            (ulong)uVar1);
                lVar13 = std::vector<AnimationStateMachine::Transition,
                                     std::allocator<AnimationStateMachine::Transition>>::operator[](pvVar12,
                                                                                                    (ulong)field_780);
                pvVar3 = local_40;
                if (lVar11 - uVar18 < *(ulong*)(lVar13 + 64)) {
                    puVar6 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)
                        eastl::vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>,
                                      eastl::allocator>::operator[](local_40, (ulong)uVar1);
                    pAVar14 =
                        (AnimState*)
                            std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>::operator->(
                                puVar6);
                    uVar1 = local_38;
                    pAVar14->Update(local_38);
                    puVar6 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)
                        eastl::vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>,
                                      eastl::allocator>::operator[](pvVar3, (ulong)m_stateID);
                    pAVar14 =
                        (AnimState*)
                            std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>::operator->(
                                puVar6);
                    pAVar14->Update(uVar1);
                    return;
                }
                m_transitioning = 0;
            }
            pvVar12 = (vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>*)
                std::vector<
                    std::vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>,
                    std::allocator<std::vector<AnimationStateMachine::Transition,
                                               std::allocator<AnimationStateMachine::Transition>>>>::
                operator[](
                    (vector<std::vector<AnimationStateMachine::Transition,
                                        std::allocator<AnimationStateMachine::Transition>>,
                            std::allocator<std::vector<AnimationStateMachine::Transition,
                                                       std::allocator<AnimationStateMachine::Transition>>>>*)&field_64,
                    (ulong)m_stateID);
            eastl::vector<unsigned int, BucketAllocatorEASTL>::vector();
            local_34 = 0;
            lVar11 =
                std::vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>::size(
                    pvVar12);
            if (lVar11 != 0) {
                uVar19 = 0;
                do {
                    pcVar16 = (char*)std::vector<AnimationStateMachine::Transition,
                                                 std::allocator<AnimationStateMachine::Transition>>::operator[](pvVar12,
                                                                                                                uVar19);
                    if (*pcVar16 != '\0') {
                        this_01 = (vector<AnimationStateMachine::Transition,
                                          std::allocator<AnimationStateMachine::Transition>>*)
                            std::vector<
                                std::vector<AnimationStateMachine::Transition,
                                            std::allocator<AnimationStateMachine::Transition>>,
                                std::allocator<std::vector<AnimationStateMachine::Transition,
                                                           std::allocator<AnimationStateMachine::Transition>>>>::
                            operator[](
                                (vector<std::vector<AnimationStateMachine::Transition,
                                                    std::allocator<AnimationStateMachine::Transition>>,
                                        std::allocator<
                                            std::vector<AnimationStateMachine::Transition,
                                                        std::allocator<AnimationStateMachine::Transition>>>>*)&field_64,
                                (ulong)m_stateID);
                        lVar11 =
                            std::vector<AnimationStateMachine::Transition,
                                        std::allocator<AnimationStateMachine::Transition>>::operator[](this_01, uVar19);
                        cVar5 = std::function<bool()>::operator()((function<bool()>*)(lVar11 + 16));
                        if (cVar5 != '\0') {
                            eastl::vector<unsigned int, BucketAllocatorEASTL>::push_back(local_58, &local_34);
                        }
                    }
                    local_34 = local_34 + 1;
                    uVar19 = (ulong)local_34;
                    uVar15 = std::vector<AnimationStateMachine::Transition,
                                         std::allocator<AnimationStateMachine::Transition>>::size(pvVar12);
                } while (uVar19 < uVar15);
            }
            lVar11 = local_58->size();
            uVar1 = local_38;
            pvVar3 = local_40;
            if (lVar11 != 0) {
                this_02 = local_58;
                puVar17 = (uint*)eastl::vector<unsigned int, BucketAllocatorEASTL>::operator[](this_02, 0);
                uVar2 = *puVar17;
                pLVar10 = (Layout*)this_02->Instance();
                uVar18 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(pLVar10);
                field_768 = uVar18;
                field_776 = m_stateID;
                field_780 = uVar2;
                m_stateID = uVar2;
                puVar6 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)
                    eastl::vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>,
                                  eastl::allocator>::operator[](pvVar3, (ulong)uVar2);
                pAVar14 =
                    (AnimState*)
                        std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>::operator->(
                            puVar6);
                pAVar14->ResetAnimations(uVar1);
                puVar6 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)
                    eastl::vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>,
                                  eastl::allocator>::operator[](pvVar3, (ulong)field_776);
                pAVar14 =
                    (AnimState*)
                        std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>::operator->(
                            puVar6);
                pAVar14->Update(uVar1);
                m_transitioning = 1;
            }
            puVar6 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)
                eastl::vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>,
                              eastl::allocator>::operator[](pvVar3, (ulong)m_stateID);
            pAVar14 =
                (AnimState*)std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>::operator->(
                    puVar6);
            pAVar14->Update(uVar1);
            eastl::vector<unsigned int, BucketAllocatorEASTL>::~vector(local_58);
        }
    }

    // 0x100957670, 1392 bytes, placed by class name
    // AnimationStateMachine::UpdateAnimationTypeForCurrentState()
    void AnimationStateMachine::UpdateAnimationTypeForCurrentState() {
        ulonglong uVar1;
        char cVar2;
        bool bVar3;
        unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>* puVar4;
        AnimState* pAVar5;
        AnimState* this_00;
        long lVar6;
        BlendTreeNode* pBVar7;
        vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>* pvVar8;
        Layout* pLVar9;
        vector* pvVar10;
        OpenGLView* pOVar11;
        shared_ptr<Animation>* psVar12;
        NXTRenderCanvas* pNVar13;
        shared_ptr* psVar14;
        AnimationParameters* pAVar15;
        undefined8 extraout_RDX;
        undefined8 extraout_RDX_00;
        undefined8 extraout_RDX_01;
        type* ptVar16;
        undefined1* puVar17;
        undefined1 auVar18[16];
        AnimationInfo local_60;

        puVar17 = &field_32;
        if (m_transitioning == '\0') {
            puVar4 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)eastl::vector<
                std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>, eastl::allocator>::
            operator[]((vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>,
                               eastl::allocator>*)puVar17,
                       (ulong)m_stateID);
            pAVar5 =
                (AnimState*)std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>::operator*(
                    puVar4);
            lVar6 = pAVar5->GetBlendTree();
            if (lVar6 == 0) {
                cVar2 = pAVar5->HasSingleAnimation();
                if (cVar2 != '\0') {
                    pOVar11 = (OpenGLView*)pAVar5->GetSingleAnimation();
                    psVar12 = (shared_ptr<Animation>*)pOVar11->GetCursorMutex();
                    pNVar13 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->(psVar12);
                    psVar14 = (shared_ptr*)pNVar13->GetPixelBuffer();
                    bVar3 = shared_ptr::operator_cast_to_bool(psVar14);
                    if (bVar3) {
                        m_animationType = 1;
                        return;
                    }
                }
                m_animationType = 0;
                return;
            }
            auVar18 = pAVar5->GetBlendTree();
            goto LAB_100957a9d;
        }
        puVar4 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)eastl::vector<
            std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>, eastl::allocator>::
        operator[](
            (vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>, eastl::allocator>*)
                puVar17,
            (ulong)field_776);
        pAVar5 = (AnimState*)std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>::operator*(
            puVar4);
        puVar4 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)eastl::vector<
            std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>, eastl::allocator>::
        operator[](
            (vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>, eastl::allocator>*)
                puVar17,
            (ulong)field_780);
        this_00 = (AnimState*)std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>::operator*(
            puVar4);
        lVar6 = pAVar5->GetBlendTree();
        if ((lVar6 != 0) && (lVar6 = this_00->GetBlendTree(), lVar6 != 0)) {
            puVar17 = &field_88;
            pBVar7 = (BlendTreeNode*)pAVar5->GetBlendTree();
            puVar17->SetLeftNode(pBVar7);
            pBVar7 = (BlendTreeNode*)this_00->GetBlendTree();
            puVar17->SetRightNode(pBVar7);
            uVar1 = field_768;
            pvVar8 = (vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>*)
                std::vector<
                    std::vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>,
                    std::allocator<std::vector<AnimationStateMachine::Transition,
                                               std::allocator<AnimationStateMachine::Transition>>>>::
                operator[](
                    (vector<std::vector<AnimationStateMachine::Transition,
                                        std::allocator<AnimationStateMachine::Transition>>,
                            std::allocator<std::vector<AnimationStateMachine::Transition,
                                                       std::allocator<AnimationStateMachine::Transition>>>>*)&field_64,
                    (ulong)field_776);
            ptVar16 = (type*)(ulong)field_780;
            lVar6 = std::vector<AnimationStateMachine::Transition,
                                std::allocator<AnimationStateMachine::Transition>>::operator[](pvVar8, (ulong)ptVar16);
            lVar6 = *(long*)(lVar6 + 64);
            pLVar9 = (Layout*)pvVar8->Instance();
            pvVar10 = eastl::string::Layout::SSOBeginPtr(pLVar9, ptVar16);
            puVar17->SetBlendInfo(uVar1, lVar6 + uVar1, pvVar10);
            auVar18._8_8_ = extraout_RDX;
            auVar18._0_8_ = puVar17;
            goto LAB_100957a9d;
        }
        lVar6 = pAVar5->GetBlendTree();
        if ((lVar6 != 0) && (cVar2 = this_00->HasSingleAnimation(), cVar2 != '\0')) {
            pOVar11 = (OpenGLView*)this_00->GetSingleAnimation();
            psVar12 = (shared_ptr<Animation>*)pOVar11->GetCursorMutex();
            pNVar13 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->(psVar12);
            psVar14 = (shared_ptr*)pNVar13->GetPixelBuffer();
            bVar3 = shared_ptr::operator_cast_to_bool(psVar14);
            if (!bVar3)
                goto LAB_10095784c;
            local_60.field_0 = this_00->GetSingleAnimation();
            AnimationBlendTreeNode<AnimationParameters*>::SetAnimation<AnimationParameters*>(
                (AnimationBlendTreeNode<AnimationParameters*>*)&field_248, (AnimationParameters**)&local_60);
            pBVar7 = (BlendTreeNode*)pAVar5->GetBlendTree();
            (&field_88, pBVar7)->SetLeftNode();
        LAB_100957a15:
            puVar17 = &field_88;
            puVar17->SetRightNode((BlendTreeNode*)&field_248);
            uVar1 = field_768;
            pvVar8 = (vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>*)
                std::vector<
                    std::vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>,
                    std::allocator<std::vector<AnimationStateMachine::Transition,
                                               std::allocator<AnimationStateMachine::Transition>>>>::
                operator[](
                    (vector<std::vector<AnimationStateMachine::Transition,
                                        std::allocator<AnimationStateMachine::Transition>>,
                            std::allocator<std::vector<AnimationStateMachine::Transition,
                                                       std::allocator<AnimationStateMachine::Transition>>>>*)&field_64,
                    (ulong)field_776);
            ptVar16 = (type*)(ulong)field_780;
            lVar6 = std::vector<AnimationStateMachine::Transition,
                                std::allocator<AnimationStateMachine::Transition>>::operator[](pvVar8, (ulong)ptVar16);
            lVar6 = *(long*)(lVar6 + 64);
            pLVar9 = (Layout*)pvVar8->Instance();
            pvVar10 = eastl::string::Layout::SSOBeginPtr(pLVar9, ptVar16);
            puVar17->SetBlendInfo(uVar1, lVar6 + uVar1, pvVar10);
            auVar18._8_8_ = extraout_RDX_01;
            auVar18._0_8_ = puVar17;
        LAB_100957a9d:
            new (&field_320, auVar18._0_8_, auVar18._8_8_)
                eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>();
            m_animationType = 2;
            return;
        }
    LAB_10095784c:
        cVar2 = pAVar5->HasSingleAnimation();
        if (cVar2 != '\0') {
            pOVar11 = (OpenGLView*)pAVar5->GetSingleAnimation();
            psVar12 = (shared_ptr<Animation>*)pOVar11->GetCursorMutex();
            pNVar13 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->(psVar12);
            psVar14 = (shared_ptr*)pNVar13->GetPixelBuffer();
            bVar3 = shared_ptr::operator_cast_to_bool(psVar14);
            if ((bVar3) && (lVar6 = this_00->GetBlendTree(), lVar6 != 0)) {
                local_60.field_0 = pAVar5->GetSingleAnimation();
                AnimationBlendTreeNode<AnimationParameters*>::SetAnimation<AnimationParameters*>(
                    (AnimationBlendTreeNode<AnimationParameters*>*)&field_176, (AnimationParameters**)&local_60);
                puVar17 = &field_88;
                puVar17->SetLeftNode((BlendTreeNode*)&field_176);
                pBVar7 = (BlendTreeNode*)this_00->GetBlendTree();
                puVar17->SetRightNode(pBVar7);
                uVar1 = field_768;
                pvVar8 = (vector<AnimationStateMachine::Transition, std::allocator<AnimationStateMachine::Transition>>*)
                    std::vector<std::vector<AnimationStateMachine::Transition,
                                            std::allocator<AnimationStateMachine::Transition>>,
                                std::allocator<std::vector<AnimationStateMachine::Transition,
                                                           std::allocator<AnimationStateMachine::Transition>>>>::
                    operator[](
                        (vector<
                            std::vector<AnimationStateMachine::Transition,
                                        std::allocator<AnimationStateMachine::Transition>>,
                            std::allocator<std::vector<AnimationStateMachine::Transition,
                                                       std::allocator<AnimationStateMachine::Transition>>>>*)&field_64,
                        (ulong)field_776);
                ptVar16 = (type*)(ulong)field_780;
                lVar6 =
                    std::vector<AnimationStateMachine::Transition,
                                std::allocator<AnimationStateMachine::Transition>>::operator[](pvVar8, (ulong)ptVar16);
                lVar6 = *(long*)(lVar6 + 64);
                pLVar9 = (Layout*)pvVar8->Instance();
                pvVar10 = eastl::string::Layout::SSOBeginPtr(pLVar9, ptVar16);
                puVar17->SetBlendInfo(uVar1, lVar6 + uVar1, pvVar10);
                auVar18._8_8_ = extraout_RDX_00;
                auVar18._0_8_ = puVar17;
                goto LAB_100957a9d;
            }
        }
        cVar2 = pAVar5->HasSingleAnimation();
        if (cVar2 != '\0') {
            pOVar11 = (OpenGLView*)pAVar5->GetSingleAnimation();
            psVar12 = (shared_ptr<Animation>*)pOVar11->GetCursorMutex();
            pNVar13 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->(psVar12);
            psVar14 = (shared_ptr*)pNVar13->GetPixelBuffer();
            bVar3 = shared_ptr::operator_cast_to_bool(psVar14);
            if ((bVar3) && (cVar2 = this_00->HasSingleAnimation(), cVar2 != '\0')) {
                pOVar11 = (OpenGLView*)this_00->GetSingleAnimation();
                psVar12 = (shared_ptr<Animation>*)pOVar11->GetCursorMutex();
                pNVar13 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->(psVar12);
                psVar14 = (shared_ptr*)pNVar13->GetPixelBuffer();
                bVar3 = shared_ptr::operator_cast_to_bool(psVar14);
                if (bVar3) {
                    local_60.field_0 = pAVar5->GetSingleAnimation();
                    AnimationBlendTreeNode<AnimationParameters*>::SetAnimation<AnimationParameters*>(
                        (AnimationBlendTreeNode<AnimationParameters*>*)&field_176, (AnimationParameters**)&local_60);
                    local_60.field_0 = this_00->GetSingleAnimation();
                    AnimationBlendTreeNode<AnimationParameters*>::SetAnimation<AnimationParameters*>(
                        (AnimationBlendTreeNode<AnimationParameters*>*)&field_248, (AnimationParameters**)&local_60);
                    (&field_88, (BlendTreeNode*)&field_176)->SetLeftNode();
                    goto LAB_100957a15;
                }
            }
        }
        lVar6 = this_00->GetBlendTree();
        if (lVar6 != 0) {
            auVar18 = this_00->GetBlendTree();
            goto LAB_100957a9d;
        }
        cVar2 = this_00->HasSingleAnimation();
        if (cVar2 != '\0') {
            pOVar11 = (OpenGLView*)this_00->GetSingleAnimation();
            psVar12 = (shared_ptr<Animation>*)pOVar11->GetCursorMutex();
            pNVar13 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->(psVar12);
            psVar14 = (shared_ptr*)pNVar13->GetPixelBuffer();
            bVar3 = shared_ptr::operator_cast_to_bool(psVar14);
            if (bVar3) {
                pAVar15 = (AnimationParameters*)this_00->GetSingleAnimation();
                new (&local_60) AnimationInfo(pAVar15);
                (&field_584, &local_60)->SetAnimation();
                m_animationType = 1;
                goto LAB_100957bb1;
            }
        }
        pAVar15 = (AnimationParameters*)this_00->GetSingleAnimation();
        new (&local_60) AnimationInfo(pAVar15);
        (&field_432, &local_60)->SetAnimation();
        m_animationType = 0;
    LAB_100957bb1:
        local_60.~Sprite();
    }

    // 0x100957ce0, 240 bytes, placed by class name
    // AnimationStateMachine::UpdateFromCurrentTime(Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)
    void AnimationStateMachine::UpdateFromCurrentTime(Array* param_1, Matrix44T* param_2) {
        int iVar1;
        long* plVar2;

        if (field_29 != '\0') {
            field_328 = (long*)0;
            UpdateAnimationTypeForCurrentState(this);
            iVar1 = m_animationType;
            if (iVar1 == 2) {
                SetUseBlendTreeAnimationSampler(this);
                plVar2 = field_328;
            } else if (iVar1 == 1) {
                SetUseSampledPoseAnimationSampler(this);
                plVar2 = field_328;
            } else {
                if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/animation/asm/AnimationStateMachine.cpp",
                                    345, "Missing animation type");
                }
                SetUseRT5AnimationSampler(this);
                plVar2 = field_328;
            }
            if (plVar2 == (long*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_animationSampler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/AnimationStateMachine.cpp",
                          348, (char*)0);
            }
            (**(code**)(*field_328 + 16))(field_328, param_1, param_2);
            field_736 = 1;
        }
    }

    // 0x100957f00, 208 bytes, placed by class name
    // AnimationStateMachine::GetBoneTransforms(WrapArray<math::Matrix43T<float> >&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, math::Matrix44T<float> const&) const
    void AnimationStateMachine::GetBoneTransforms(WrapArray* param_1, vector_map* param_2, vector_map* param_3,
                                                  Matrix44T* param_4) {
        int iVar2;
        duration local_48[8];
        undefined4 local_34;

        if (field_736 != '\0') {
            if ((&field_16)->valid() != '\0') {
                local_34 = 0;
                std::chrono::duration<long long, std::ratio<1l, 1000l>>::duration<int>((int*)local_48,
                                                                                       (type*)&local_34);
                iVar2 =
                    std::future<void>::wait_for<long long, std::ratio<1l, 1000l>>((future<void>*)&field_16, local_48);
                if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("!m_asyncUpdateFuture.valid() || "
                              "m_asyncUpdateFuture.wait_for(std::chrono::milliseconds(0)) == std::future_status::ready",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/asm/AnimationStateMachine.cpp",
                              361, (char*)0);
                }
            }
            (**(code**)(*field_328 + 24))(field_328, param_1, param_2, param_3, param_4);
        }
    }

    // 0x100958000, 256 bytes, placed by class name
    // AnimationStateMachine::ApplyBoneTransforms(math::Vector3T<float>&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, math::Matrix44T<float> const&) const
    void AnimationStateMachine::ApplyBoneTransforms(Vector3T* param_1, vector_map* param_2, vector_map* param_3,
                                                    Matrix44T* param_4) {
        int iVar2;
        long lVar3;
        duration local_48[8];
        undefined4 local_34;

        lVar3 = param_2->size();
        if (lVar3 != 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("boneMap.size() == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/AnimationStateMachine.cpp",
                      371, (char*)0);
        }
        if (field_736 != '\0') {
            if ((&field_16)->valid() != '\0') {
                local_34 = 0;
                std::chrono::duration<long long, std::ratio<1l, 1000l>>::duration<int>((int*)local_48,
                                                                                       (type*)&local_34);
                iVar2 =
                    std::future<void>::wait_for<long long, std::ratio<1l, 1000l>>((future<void>*)&field_16, local_48);
                if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("!m_asyncUpdateFuture.valid() || "
                              "m_asyncUpdateFuture.wait_for(std::chrono::milliseconds(0)) == std::future_status::ready",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/asm/AnimationStateMachine.cpp",
                              377, (char*)0);
                }
            }
            (**(code**)(*field_328 + 32))(field_328, param_1, param_2, param_3, param_4);
        }
    }

    // 0x100958100, 32 bytes, placed by class name
    // AnimationStateMachine::GetLabelData(WrapArray<float>&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, AnimationLabelType) const
    void AnimationStateMachine::GetLabelData() {
        if (field_736 != '\0') {
            (**(code**)(*field_328 + 40))();
        }
    }

    // 0x100958120, 112 bytes, placed by class name
    // AnimationStateMachine::GetAnimatesTransparency() const
    undefined8 AnimationStateMachine::GetAnimatesTransparency() {
        char cVar1;
        bool bVar2;
        unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>* this_00;
        AnimState* this_01;
        OpenGLView* pOVar3;
        shared_ptr* this_02;
        shared_ptr<Animation>* this_03;
        Animation* this_04;
        undefined8 uVar4;

        this_00 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)eastl::vector<
            std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>, eastl::allocator>::
        operator[]((vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>,
                           eastl::allocator>*)&field_32,
                   (ulong)m_stateID);
        this_01 = (AnimState*)std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>::operator*(
            this_00);
        cVar1 = this_01->HasSingleAnimation();
        if (cVar1 != '\0') {
            pOVar3 = (OpenGLView*)this_01->GetSingleAnimation();
            this_02 = (shared_ptr*)pOVar3->GetCursorMutex();
            bVar2 = shared_ptr::operator_cast_to_bool(this_02);
            if (bVar2) {
                pOVar3 = (OpenGLView*)this_01->GetSingleAnimation();
                this_03 = (shared_ptr<Animation>*)pOVar3->GetCursorMutex();
                this_04 = (Animation*)shared_ptr<Animation>::operator->(this_03);
                uVar4 = this_04->GetAnimatesTransparency();
                return uVar4;
            }
        }
        return 0;
    }

    // 0x1009581e0, 128 bytes, placed by class name
    // AnimationStateMachine::GetAnimatedColourType() const
    undefined1 AnimationStateMachine::GetAnimatedColourType() {
        char cVar1;
        bool bVar2;
        undefined1 uVar3;
        unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>* this_00;
        AnimState* this_01;
        OpenGLView* pOVar4;
        shared_ptr* this_02;
        shared_ptr<Animation>* this_03;
        Animation* this_04;

        this_00 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)eastl::vector<
            std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>, eastl::allocator>::
        operator[]((vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>,
                           eastl::allocator>*)&field_32,
                   (ulong)m_stateID);
        this_01 = (AnimState*)std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>::operator*(
            this_00);
        cVar1 = this_01->HasSingleAnimation();
        uVar3 = 2;
        if (cVar1 != '\0') {
            pOVar4 = (OpenGLView*)this_01->GetSingleAnimation();
            this_02 = (shared_ptr*)pOVar4->GetCursorMutex();
            bVar2 = shared_ptr::operator_cast_to_bool(this_02);
            if (bVar2) {
                pOVar4 = (OpenGLView*)this_01->GetSingleAnimation();
                this_03 = (shared_ptr<Animation>*)pOVar4->GetCursorMutex();
                this_04 = (Animation*)shared_ptr<Animation>::operator->(this_03);
                uVar3 = this_04->GetAnimatedColourType();
            }
        }
        return uVar3;
    }

    // 0x100958260, 160 bytes, placed by class name
    // AnimationStateMachine::DebugOutputToString(eastl::fixed_string<char, 512, true, eastl::allocator>&) const
    void AnimationStateMachine::DebugOutputToString(fixed_string* param_1) {
        ObjTypeList* pOVar2;
        undefined8 uVar3;
        undefined8 uVar4;

        pOVar2 = (ObjTypeList*)GetCurrentState(this);
        pOVar2->GetModelCache();
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
            append_sprintf((char*)param_1, "\nCurrent State: %s", uVar3);
        if (IsTransitioning(this) != '\0') {
            pOVar2 = (ObjTypeList*)GetFromState(this);
            pOVar2->GetModelCache();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pOVar2 = (ObjTypeList*)GetToState(this);
            pOVar2->GetModelCache();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                append_sprintf((char*)param_1, "\nTransitioning: %s to %s", uVar3, uVar4);
        }
    }

} // namespace jag::graphics
