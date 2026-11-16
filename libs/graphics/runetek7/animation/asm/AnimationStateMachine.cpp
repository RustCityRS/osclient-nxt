// libs/graphics/runetek7/animation/asm/AnimationStateMachine.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "AnimationStateMachine.h"

namespace jag::graphics {
    // 0x10012dbf0: AnimationStateMachine::Transition::~Transition() has the same machine code as oldscape::Client::ScheduledFunction::~ScheduledFunction()

    // 0x10012dbf0: AnimationStateMachine::TransitionInfo::~TransitionInfo() has the same machine code as oldscape::Client::ScheduledFunction::~ScheduledFunction()

    // 0x10014b210: AnimationStateMachine::TransitionInfo::TransitionInfo(AnimationStateMachine::TransitionInfo&&) has the same machine code as oldscape::Client::ScheduledFunction::ScheduledFunction(oldscape::Client::ScheduledFunction&&)

    // 0x1003cf2a0: AnimationStateMachine::GetStateID() const has the same machine code as game::WorldMapDefaults::GetDropShadowColourRGBA() const

    // 0x10053c290: AnimationStateMachine::GetAnimationType() const has the same machine code as game::Model::GetLinkObjType() const

    // 0x1009566e0
    AnimState::AnimState(std::unique_ptr<BlendTreeNode>&& blendTreeNode,
                         AnimationStateResourceList&& animationStateResourceList)
        : MakeUniquePool<AnimState, 4096>(), std::unique_ptr<BlendTreeNode>(blendTreeNode) {
        field_8.unique_ptr<true, void>();
        new (m_resources) AnimationStateResourceList(animationStateResourceList);
        new (&field_56) eastl::fixed_vector<AnimationParameters*, 4ul>();
        new (&field_128) eastl::string();
    }

    // 0x100956850
    AnimState::AnimState(const AnimationDescriptor& animationDescriptor) {
        function<void(
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>
            local_68[48];
        long local_38;

        new (this) MakeUniquePool<AnimState, 4096>();
        unique_ptr<true, void>();
        field_8.unique_ptr<true, void>();
        new (m_resources) AnimationStateResourceList();
        new (&field_56) eastl::fixed_vector<AnimationParameters*, 4ul>();
        new (&field_128) eastl::string();
        std::function<void(
            std::unique_ptr<AnimationParameters, MakeUniquePool<AnimationParameters, 512>::UniquePoolDeleter>&&)>::
            function<AnimState::AnimState(AnimationDescriptor const&)::__3, void>(local_68, (__3*)this);
        m_resources->AddAnimationResource(animationDescriptor, local_68);
    }

    // 0x100956990
    AnimState::AnimState() : MakeUniquePool<AnimState, 4096>() {
        unique_ptr<true, void>();
        field_8.unique_ptr<true, void>();
        new (m_resources) AnimationStateResourceList();
        new (&field_56) eastl::fixed_vector<AnimationParameters*, 4ul>();
        new (&field_128) eastl::string();
    }

    // 0x100956a40
    AnimState::~AnimState() {
        field_128.~basic_string();
        field_56.~fixed_vector();
        m_resources->~AnimationStateResourceList();
        field_8.~unique_ptr();
    }

    // 0x100956a90
    void AnimState::Update(unsigned int arg1) {
        long* plVar2;

        if (!(operator_cast_to_bool())) {
            if (HasSingleAnimation()) {
                ((AnimationParameters*)field_8.operator->())->Update(arg1);
            }
        } else {
            plVar2 = (long*)(*this).operator->();
            (**(void (**)(...))(*plVar2 + 32))(plVar2, arg1);
        }
    }

    // 0x100956b40
    void AnimState::ResetAnimations(unsigned int arg1) {
        long* plVar2;

        if (!(operator_cast_to_bool())) {
            if (HasSingleAnimation()) {
                ((AnimationParameters*)field_8.operator->())->Reset(arg1, 0);
            }
        } else {
            plVar2 = (long*)(*this).operator->();
            (**(void (**)(...))(*plVar2 + 40))(plVar2, arg1);
        }
    }

    // 0x100956ba0
    AnimationStateMachine::AnimationStateMachine(const shared_ptr<AnimationResourceManager>& animationResourceManager)
        : AnimationStateSystem(), m_stateID(0), field_28(0), field_29(0), field_328(nullptr), field_736(0),
          field_744(animationResourceManager), m_transitioning(0), field_768(0), field_776(0), field_780(0),
          m_animationType(0) {}

    // 0x100956de0
    AnimationStateMachine::AnimationStateMachine(
        eastl::vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>>&& animStates,
        const eastl::vector<AnimationStateMachine::TransitionInfo>& transitionInfos, unsigned int arg3,
        const shared_ptr<AnimationResourceManager>& animationResourceManager)
        : AnimationStateSystem(), field_28(0), field_29(0), field_32(animStates) {
        vector<AnimationStateMachine::Transition>* this_01;
        unsigned int uVar3;

        uint8_t* this_00 = &field_64;
        new (this_00) std::vector<std::vector<AnimationStateMachine::Transition>>();
        new (&field_88) SimpleTwoNodeBlendTreeNode<unsigned long long>();
        new (&field_176) AnimationBlendTreeNode<AnimationParameters*>();
        new (&field_248) AnimationBlendTreeNode<AnimationParameters*>();
        new (&field_320) math::Vector2T();
        field_328 = nullptr;
        new (&field_336) BlendTreeAnimationSampler();
        new (&field_432) RT5AnimationSampler();
        new (&field_584) SampledPoseAnimationSampler();
        field_736 = 0;
        new (&field_744) shared_ptr(animationResourceManager);
        m_transitioning = 0;
        field_768 = 0;
        field_776 = 0;
        field_780 = 0;
        m_animationType = 0;
        unsigned int local_34 = field_32.size();
        this_00->reserve((unsigned long)local_34);
        if (local_34 != 0) {
            uVar3 = 0;
            do {
                this_00->emplace_back<unsigned int&>(local_34);
                uVar3 = uVar3 + 1;
            } while (uVar3 < local_34);
        }
        auto puVar1 = transitionInfos.HeapBeginPtr();
        auto puVar2 = transitionInfos.end();
        for (; puVar1 != puVar2; puVar1 = puVar1 + 16) {
            uVar3 = puVar1[1];
            this_01 = (vector<AnimationStateMachine::Transition>*)(*this_00)[(unsigned long)*puVar1];
            ((Transition*)(*this_01)[(unsigned long)uVar3])
                ->SetTransition(*((puVar1 + 4)), *(unsigned long long*)(puVar1 + 2));
        }
        m_stateID = arg3;
        field_28 = 1;
    }

    // 0x100957180
    uint8_t* AnimationStateMachine::GetBlendTree() const {
        unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>* this_00;
        AnimState* this_01;

        if (m_transitioning == '\0') {
            this_00 = &field_32[(unsigned long)m_stateID];
            this_01 = (AnimState*)(*this_00).operator->();
            return (uint8_t*)this_01->GetBlendTree();
        }
        return &field_88;
    }

    // 0x100957210
    void AnimationStateMachine::SetTransitionRule(unsigned int arg1, unsigned int arg2,
                                                  std::function<bool()> callback) {
        vector<AnimationStateMachine::Transition>* pvVar1 = &field_64[(unsigned long)arg1];
        uint8_t* puVar2 = (uint8_t*)(*pvVar1)[(unsigned long)arg2];
        *puVar2 = 1;
        pvVar1 = &field_64[(unsigned long)arg1];
        long lVar3 = (*pvVar1)[(unsigned long)arg2];
        (*((lVar3 + 16))) = *callback;
    }

    // 0x100957280
    void AnimationStateMachine::SetTransitionTime(unsigned int arg1, unsigned int arg2, unsigned long long arg3) {
        vector<AnimationStateMachine::Transition>* this_00 = &field_64[(unsigned long)arg1];
        long lVar1 = (*this_00)[(unsigned long)arg2];
        *(unsigned long long*)(lVar1 + 64) = arg3;
    }

    // 0x1009572b0
    void AnimationStateMachine::Update(unsigned int arg1) {
        unsigned int uVar1;
        unsigned int uVar2;
        vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>>* pvVar3;
        NXTPixToolkit* pNVar7;
        uint64_t uVar8;
        Layout* pLVar9;
        long lVar10;
        vector<AnimationStateMachine::Transition>* pvVar11;
        long lVar12;
        AnimState* pAVar13;
        unsigned long uVar14;
        char* pcVar15;
        vector<AnimationStateMachine::Transition>* this_01;
        unsigned int* puVar16;
        unsigned long long uVar17;
        unsigned long arg1_00;
        bool bVar18;
        vector<unsigned int, BucketAllocatorEASTL> local_58;
        unsigned int local_34;

        MainLoopFrameTimer* this_00 = (MainLoopFrameTimer*)&field_32;
        auto puVar5 = this_00->HeapBeginPtr();
        vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>>* local_40 =
            (vector<std::unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>>*)this_00;
        auto puVar6 = this_00->end();
        if (puVar5 == puVar6) {
            bVar18 = true;
        } else {
            bVar18 = true;
            do {
                pNVar7 = (NXTPixToolkit*)(*puVar5).operator->();
                this_00 = (MainLoopFrameTimer*)pNVar7->GetScreen();
                if (!(this_00->GetFastUpdateLoopEnabled())) {
                    this_00 = (MainLoopFrameTimer*)field_744.operator->();
                    pNVar7 = (NXTPixToolkit*)(*puVar5).operator->();
                    uVar8 = pNVar7->GetScreen();
                    (**(void (**)(...))(*(long*)this_00 + 24))(this_00, uVar8);
                    bVar18 = false;
                }
                puVar5 = puVar5 + 8;
            } while (puVar5 != puVar6);
        }
        if (bVar18) {
            field_29 = 1;
            if (m_transitioning != '\0') {
                pLVar9 = (Layout*)this_00->Instance();
                lVar10 = pLVar9->HeapBeginPtr();
                uVar17 = field_768;
                uVar1 = field_776;
                pvVar11 = &field_64[(unsigned long)uVar1];
                lVar12 = (*pvVar11)[(unsigned long)field_780];
                pvVar3 = local_40;
                if (lVar10 - uVar17 < *(unsigned long*)(lVar12 + 64)) {
                    puVar5 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)(*local_40)[(
                        unsigned long)uVar1];
                    pAVar13 = (AnimState*)(*puVar5).operator->();
                    uVar1 = arg1;
                    pAVar13->Update(arg1);
                    puVar5 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)(*pvVar3)[(
                        unsigned long)m_stateID];
                    pAVar13 = (AnimState*)(*puVar5).operator->();
                    pAVar13->Update(uVar1);
                    return;
                }
                m_transitioning = 0;
            }
            pvVar11 = &field_64[(unsigned long)m_stateID];
            local_58 = eastl::vector<unsigned int, BucketAllocatorEASTL>();
            local_34 = 0;
            lVar10 = pvVar11->size();
            if (lVar10 != 0) {
                arg1_00 = 0;
                do {
                    pcVar15 = (char*)(*pvVar11)[arg1_00];
                    if (*pcVar15 != '\0') {
                        this_01 = &field_64[(unsigned long)m_stateID];
                        lVar10 = (*this_01)[arg1_00];
                        if (std::function<bool()>::operator()((function<bool()>*)(lVar10 + 16))) {
                            local_58.push_back(local_34);
                        }
                    }
                    local_34 = local_34 + 1;
                    arg1_00 = (unsigned long)local_34;
                    uVar14 = pvVar11->size();
                } while (arg1_00 < uVar14);
            }
            lVar10 = local_58.size();
            uVar1 = arg1;
            pvVar3 = local_40;
            if (lVar10 != 0) {
                puVar16 = (unsigned int*)(*&local_58)[0];
                uVar2 = *puVar16;
                pLVar9 = (Layout*)&local_58->Instance();
                uVar17 = pLVar9->HeapBeginPtr();
                field_768 = uVar17;
                field_776 = m_stateID;
                field_780 = uVar2;
                m_stateID = uVar2;
                puVar5 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)(*pvVar3)[(
                    unsigned long)uVar2];
                pAVar13 = (AnimState*)(*puVar5).operator->();
                pAVar13->ResetAnimations(uVar1);
                puVar5 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)(*pvVar3)[(
                    unsigned long)field_776];
                pAVar13 = (AnimState*)(*puVar5).operator->();
                pAVar13->Update(uVar1);
                m_transitioning = 1;
            }
            puVar5 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)(*pvVar3)[(
                unsigned long)m_stateID];
            pAVar13 = (AnimState*)(*puVar5).operator->();
            pAVar13->Update(uVar1);
        }
    }

    // 0x100957670
    void AnimationStateMachine::UpdateAnimationTypeForCurrentState() {
        unsigned long long uVar1;
        unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>* puVar2;
        long lVar3;
        BlendTreeNode* pBVar4;
        VertexTransformData* pVVar5;
        Layout* pLVar6;
        unsigned long long* puVar7;
        OpenGLView* pOVar8;
        shared_ptr<Animation>* psVar9;
        NXTRenderCanvas* pNVar10;
        shared_ptr* psVar11;
        AnimationParameters* pAVar12;
        bool cVar13;
        AnimState* pAVar14;
        PlayerDataComparator<oldscape::social::FriendChatUser>* this_02;
        vector<AnimationStateMachine::Transition>* pvVar15;

        uint8_t* this_00 = &field_32;
        if (m_transitioning == '\0') {
            puVar2 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)(*this_00)[(
                unsigned long)m_stateID];
            pAVar14 = (AnimState*)**puVar2;
            lVar3 = pAVar14->GetBlendTree();
            if (lVar3 == 0) {
                cVar13 = pAVar14->HasSingleAnimation();
                if (cVar13) {
                    pOVar8 = (OpenGLView*)pAVar14->GetSingleAnimation();
                    psVar9 = (shared_ptr<Animation>*)pOVar8->GetCursorMutex();
                    pNVar10 = (NXTRenderCanvas*)(*psVar9).operator->();
                    psVar11 = (shared_ptr*)pNVar10->GetPixelBuffer();
                    cVar13 = shared_ptr::operator_cast_to_bool(psVar11);
                    if (cVar13) {
                        m_animationType = 1;
                        return;
                    }
                }
                m_animationType = 0;
                return;
            }
            this_02 = (PlayerDataComparator<oldscape::social::FriendChatUser>*)pAVar14->GetBlendTree();
            goto LAB_100957a9d;
        }
        puVar2 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)(*this_00)[(
            unsigned long)field_776];
        pAVar14 = (AnimState*)**puVar2;
        puVar2 = (unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>*)(*this_00)[(
            unsigned long)field_780];
        AnimState* this_01 = (AnimState*)**puVar2;
        lVar3 = pAVar14->GetBlendTree();
        if ((lVar3 != 0) && (lVar3 = this_01->GetBlendTree(), lVar3 != 0)) {
            this_02 = (PlayerDataComparator<oldscape::social::FriendChatUser>*)&field_88;
            pBVar4 = (BlendTreeNode*)pAVar14->GetBlendTree();
            this_02->SetLeftNode(pBVar4);
            pVVar5 = (VertexTransformData*)this_01->GetBlendTree();
            this_02->SetRightNode(pVVar5);
            uVar1 = field_768;
            pvVar15 = &field_64[(unsigned long)field_776];
            lVar3 = (*pvVar15)[(unsigned long)field_780];
            lVar3 = *(long*)(lVar3 + 64);
            pLVar6 = (Layout*)pvVar15->Instance();
            puVar7 = (unsigned long long*)pLVar6->SSOBeginPtr();
            this_02->SetBlendInfo(uVar1, lVar3 + uVar1, puVar7);
            goto LAB_100957a9d;
        }
        lVar3 = pAVar14->GetBlendTree();
        if ((lVar3 != 0) && (cVar13 = this_01->HasSingleAnimation(), cVar13)) {
            pOVar8 = (OpenGLView*)this_01->GetSingleAnimation();
            psVar9 = (shared_ptr<Animation>*)pOVar8->GetCursorMutex();
            pNVar10 = (NXTRenderCanvas*)(*psVar9).operator->();
            psVar11 = (shared_ptr*)pNVar10->GetPixelBuffer();
            cVar13 = shared_ptr::operator_cast_to_bool(psVar11);
            if (!cVar13)
                goto LAB_10095784c;
            local_60.field_0 = this_01->GetSingleAnimation();
            field_248.SetAnimation<AnimationParameters*>(local_60);
            pBVar4 = (BlendTreeNode*)pAVar14->GetBlendTree();
            field_88.SetLeftNode(pBVar4);
        LAB_100957a15:
            this_02 = (PlayerDataComparator<oldscape::social::FriendChatUser>*)&field_88;
            this_02->SetRightNode(&field_248);
            uVar1 = field_768;
            pvVar15 = &field_64[(unsigned long)field_776];
            lVar3 = (*pvVar15)[(unsigned long)field_780];
            lVar3 = *(long*)(lVar3 + 64);
            pLVar6 = (Layout*)pvVar15->Instance();
            puVar7 = (unsigned long long*)pLVar6->SSOBeginPtr();
            this_02->SetBlendInfo(uVar1, lVar3 + uVar1, puVar7);
        LAB_100957a9d:
            new (&field_320)
                eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(this_02);
            m_animationType = 2;
            return;
        }
    LAB_10095784c:
        cVar13 = pAVar14->HasSingleAnimation();
        if (cVar13) {
            pOVar8 = (OpenGLView*)pAVar14->GetSingleAnimation();
            psVar9 = (shared_ptr<Animation>*)pOVar8->GetCursorMutex();
            pNVar10 = (NXTRenderCanvas*)(*psVar9).operator->();
            psVar11 = (shared_ptr*)pNVar10->GetPixelBuffer();
            cVar13 = shared_ptr::operator_cast_to_bool(psVar11);
            if ((cVar13) && (lVar3 = this_01->GetBlendTree(), lVar3 != 0)) {
                local_60.field_0 = pAVar14->GetSingleAnimation();
                field_176.SetAnimation<AnimationParameters*>(local_60);
                this_02 = (PlayerDataComparator<oldscape::social::FriendChatUser>*)&field_88;
                this_02->SetLeftNode(&field_176);
                pVVar5 = (VertexTransformData*)this_01->GetBlendTree();
                this_02->SetRightNode(pVVar5);
                uVar1 = field_768;
                pvVar15 = &field_64[(unsigned long)field_776];
                lVar3 = (*pvVar15)[(unsigned long)field_780];
                lVar3 = *(long*)(lVar3 + 64);
                pLVar6 = (Layout*)pvVar15->Instance();
                puVar7 = (unsigned long long*)pLVar6->SSOBeginPtr();
                this_02->SetBlendInfo(uVar1, lVar3 + uVar1, puVar7);
                goto LAB_100957a9d;
            }
        }
        cVar13 = pAVar14->HasSingleAnimation();
        if (cVar13) {
            pOVar8 = (OpenGLView*)pAVar14->GetSingleAnimation();
            psVar9 = (shared_ptr<Animation>*)pOVar8->GetCursorMutex();
            pNVar10 = (NXTRenderCanvas*)(*psVar9).operator->();
            psVar11 = (shared_ptr*)pNVar10->GetPixelBuffer();
            cVar13 = shared_ptr::operator_cast_to_bool(psVar11);
            if ((cVar13) && (cVar13 = this_01->HasSingleAnimation(), cVar13)) {
                pOVar8 = (OpenGLView*)this_01->GetSingleAnimation();
                psVar9 = (shared_ptr<Animation>*)pOVar8->GetCursorMutex();
                pNVar10 = (NXTRenderCanvas*)(*psVar9).operator->();
                psVar11 = (shared_ptr*)pNVar10->GetPixelBuffer();
                cVar13 = shared_ptr::operator_cast_to_bool(psVar11);
                if (cVar13) {
                    local_60.field_0 = pAVar14->GetSingleAnimation();
                    field_176.SetAnimation<AnimationParameters*>(local_60);
                    local_60.field_0 = this_01->GetSingleAnimation();
                    field_248.SetAnimation<AnimationParameters*>(local_60);
                    field_88.SetLeftNode(&field_176);
                    goto LAB_100957a15;
                }
            }
        }
        lVar3 = this_01->GetBlendTree();
        if (lVar3 != 0) {
            this_02 = (PlayerDataComparator<oldscape::social::FriendChatUser>*)this_01->GetBlendTree();
            goto LAB_100957a9d;
        }
        cVar13 = this_01->HasSingleAnimation();
        if (cVar13) {
            pOVar8 = (OpenGLView*)this_01->GetSingleAnimation();
            psVar9 = (shared_ptr<Animation>*)pOVar8->GetCursorMutex();
            pNVar10 = (NXTRenderCanvas*)(*psVar9).operator->();
            psVar11 = (shared_ptr*)pNVar10->GetPixelBuffer();
            cVar13 = shared_ptr::operator_cast_to_bool(psVar11);
            if (cVar13) {
                pAVar12 = (AnimationParameters*)this_01->GetSingleAnimation();
                local_60 = AnimationInfo(*pAVar12);
                field_584.SetAnimation(local_60);
                m_animationType = 1;
                goto LAB_100957bb1;
            }
        }
        pAVar12 = (AnimationParameters*)this_01->GetSingleAnimation();
        AnimationInfo local_60(*pAVar12);
        field_432.SetAnimation(local_60);
        m_animationType = 0;
    LAB_100957bb1:
    }

    // 0x100957ce0
    void AnimationStateMachine::UpdateFromCurrentTime(const Array<LabelData>& labelDatas,
                                                      const math::Matrix44T<float>& matrix44) {
        int iVar1;
        long* plVar2;

        if (field_29 != '\0') {
            field_328 = nullptr;
            UpdateAnimationTypeForCurrentState();
            iVar1 = m_animationType;
            if (iVar1 == 2) {
                SetUseBlendTreeAnimationSampler();
                plVar2 = field_328;
            } else if (iVar1 == 1) {
                SetUseSampledPoseAnimationSampler();
                plVar2 = field_328;
            } else {
                if (iVar1 != 0) {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/animation/asm/AnimationStateMachine.cpp",
                                    345, "Missing animation type");
                }
                SetUseRT5AnimationSampler();
                plVar2 = field_328;
            }
            if (plVar2 == nullptr) {
                LogAssert("m_animationSampler",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/asm/AnimationStateMachine.cpp",
                          348, nullptr);
            }
            (**(void (**)(...))(*field_328 + 16))(field_328, labelDatas, matrix44);
            field_736 = 1;
        }
    }

    // 0x100957f00
    void AnimationStateMachine::GetBoneTransforms(WrapArray<math::Matrix43T<float>>& wrapArray,
                                                  const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                                  const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                                  const math::Matrix44T<float>& matrix44) const {
        type* arg2_00;
        duration<long long, std::ratio<1l, 1000l>> local_48;

        if (field_736 != '\0') {
            if (field_16.valid() != '\0') {
                local_48.duration<int>(0, arg2_00);
                if (field_16.wait_for<long long, std::ratio<1l, 1000l>>(local_48) != 0) {
                    LogAssert("!m_asyncUpdateFuture.valid() || "
                              "m_asyncUpdateFuture.wait_for(std::chrono::milliseconds(0)) == std::future_status::ready",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/asm/AnimationStateMachine.cpp",
                              361, nullptr);
                }
            }
            (**(void (**)(...))(*field_328 + 24))(field_328, wrapArray, arg2, arg3, matrix44);
        }
    }

    // 0x100958000
    void AnimationStateMachine::ApplyBoneTransforms(math::Vector3T<float>& vector3,
                                                    const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                                    const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                                    const math::Matrix44T<float>& matrix44) const {
        type* arg2_00;
        duration<long long, std::ratio<1l, 1000l>> local_48;

        if (arg2.size() != 1) {
            LogAssert("boneMap.size() == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/asm/AnimationStateMachine.cpp",
                      371, nullptr);
        }
        if (field_736 != '\0') {
            if (field_16.valid() != '\0') {
                local_48.duration<int>(0, arg2_00);
                if (field_16.wait_for<long long, std::ratio<1l, 1000l>>(local_48) != 0) {
                    LogAssert("!m_asyncUpdateFuture.valid() || "
                              "m_asyncUpdateFuture.wait_for(std::chrono::milliseconds(0)) == std::future_status::ready",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/asm/AnimationStateMachine.cpp",
                              377, nullptr);
                }
            }
            (**(void (**)(...))(*field_328 + 32))(field_328, vector3, arg2, arg3, matrix44);
        }
    }

    // 0x100958100
    void AnimationStateMachine::GetLabelData(WrapArray<float>& wrapArray,
                                             const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                             AnimationLabelType animationLabelType) const {
        if (field_736 != '\0') {
            (**(void (**)(...))(*field_328 + 40))();
        }
    }

    // 0x100958120
    uint64_t AnimationStateMachine::GetAnimatesTransparency() const {
        OpenGLView* pOVar2;
        shared_ptr<Animation>* this_03;

        unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>* this_00 =
            &field_32[(unsigned long)m_stateID];
        AnimState* this_01 = (AnimState*)**this_00;
        if (this_01->HasSingleAnimation()) {
            pOVar2 = (OpenGLView*)this_01->GetSingleAnimation();
            if ((pOVar2->GetCursorMutex())->operator_cast_to_bool()) {
                pOVar2 = (OpenGLView*)this_01->GetSingleAnimation();
                this_03 = (shared_ptr<Animation>*)pOVar2->GetCursorMutex();
                return ((Animation*)(*this_03).operator->())->GetAnimatesTransparency();
            }
        }
        return 0;
    }

    // 0x1009581e0
    uint8_t AnimationStateMachine::GetAnimatedColourType() const {
        OpenGLView* pOVar3;
        shared_ptr<Animation>* this_03;

        unique_ptr<AnimState, MakeUniquePool<AnimState, 4096>::UniquePoolDeleter>* this_00 =
            &field_32[(unsigned long)m_stateID];
        AnimState* this_01 = (AnimState*)**this_00;
        bool cVar1 = this_01->HasSingleAnimation();
        uint8_t uVar2 = 2;
        if (cVar1) {
            pOVar3 = (OpenGLView*)this_01->GetSingleAnimation();
            cVar1 = (pOVar3->GetCursorMutex())->operator_cast_to_bool();
            if (cVar1) {
                pOVar3 = (OpenGLView*)this_01->GetSingleAnimation();
                this_03 = (shared_ptr<Animation>*)pOVar3->GetCursorMutex();
                uVar2 = ((Animation*)(*this_03).operator->())->GetAnimatedColourType();
            }
        }
        return uVar2;
    }

    // 0x100958260
    void AnimationStateMachine::DebugOutputToString(eastl::fixed_string<char, 512>& str) const {
        uint64_t uVar4;

        auto pOVar2 = GetCurrentState();
        pOVar2->GetModelCache();
        uint64_t uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        str.append_sprintf("\nCurrent State: %s", uVar3);
        if (IsTransitioning() != '\0') {
            pOVar2 = (ObjTypeList*)GetFromState();
            pOVar2->GetModelCache();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pOVar2 = (ObjTypeList*)GetToState();
            pOVar2->GetModelCache();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            str.append_sprintf("\nTransitioning: %s to %s", uVar3, uVar4);
        }
    }

} // namespace jag::graphics
