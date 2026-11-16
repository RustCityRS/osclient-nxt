// libs/graphics/runetek7/animation/AnimationState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "AnimationState.h"

namespace jag::graphics {
    // 0x100f44c90
    int32_t AnimationState::m_useSmoothSkinning = 1;

    // 0x100f44c94
    int32_t AnimationState::m_curveDebugStepSize = 1036831949;

    // 0x100f44c98
    float AnimationState::m_curveDebugHeight = 8.0f;

    // 0x100f44c9c
    int32_t AnimationState::m_curveDebugTransformCount = 1;

    // 0x100f44ca0
    bool AnimationState::m_RT5TransformsForWalkMerge = 1;

    // 0x100f44ca1
    bool AnimationState::m_RT5TransformsForLowBoneBases = 1;

    // 0x100f44ca4
    uint8_t AnimationState::m_RT5TransformForLowBoneBaseMax = 20;

    // 0x100f44ca8
    uint8_t AnimationState::m_defaultBlendTreeBlendMode = 2;

    // 0x103bc1040, set at startup by ___cxx_global_var_init.116
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> AnimationState::NullAnimationState =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x103bc1050
    bool AnimationState::m_highlightRT5Transforms;

    // 0x103bc1051
    bool AnimationState::m_renderCurveDebug;

    // 0x103bc1054
    int32_t AnimationState::m_curveDebugFirstTransform;

    // 0x103bc1058
    bool AnimationState::m_curveDebugLimitToRange;

    // 0x103bc1059
    bool AnimationState::m_curveScrubMode;

    // 0x103bc105c
    int32_t AnimationState::m_curveScrubTime;

    // 0x103bc1060
    bool AnimationState::m_drawDebugSkeleton;

    // 0x103bc1061
    bool AnimationState::m_drawDebugSkeletonOnBlend;

    // 0x103bc1062
    bool AnimationState::m_RT5TransformsForAll;

    // 0x103bc1063
    bool AnimationState::m_useRuntimeCurves;

    // 0x103bc1064
    int32_t AnimationState::m_useRT7SamplerAsyncPath;

    // 0x1001acac0: AnimationState::GetAnimatesTransparency() const has the same machine code as Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>::IsNull()

    // 0x10098a840
    void AnimationInfoBlendTreeNode::GetPose(WrapArray<JointPose> wrapArray, const Array<LabelData>& labelDatas,
                                             const math::Matrix44T<float>& matrix44) {
        unsigned char arg2;
        Vector3T<float>* in_R8;
        Vector3T<float>* in_R9;
        WrapArray<game::Cutscene2DAnimation<float>::Key const> local_58;

        SampledPoseAnimationSampler local_f0;
        local_f0.UpdatePose(labelDatas, matrix44, *field_40);
        auto local_48 = local_f0.GetPose();
        unsigned long uVar1 = wrapArray->HeapBeginPtr();
        unsigned long uVar2 = local_48.HeapBeginPtr();
        if (uVar1 < uVar2) {
            LogAssert("poseOut.size() >= samplerPose.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/AnimationState.cpp",
                      54, nullptr);
        }
        auto jointPose1 = local_48.end();
        long lVar3 = local_48.end();
        long lVar4 = local_48.HeapBeginPtr();
        auto jointPose3 = wrapArray->end();
        std::copy<JointPose const*, JointPose*>(jointPose1, (lVar4 * 48 + lVar3), jointPose3);
        if ((field_8 != '\0') && (AnimationStateProvider::m_useAsyncAnimUpdate == '\0')) {
            arg2 = field_104;
            local_58.WrapArray<WrapArray<game::Cutscene2DAnimation<float>::Key const>>(*wrapArray);
            pose::DebugDrawSkeleton(field_88, arg2, local_58, matrix44, in_R8, in_R9);
        }
    }

    // 0x10098aa20
    uint8_t* AnimationInfoBlendTreeNode::GetBindInfo() const {
        uint8_t* puVar2;

        if ((*((field_40 + 32))) == nullptr) {
            puVar2 = &BlendTreeNode::EmptyBindInfo;
        } else {
            puVar2 = &field_88;
        }
        return puVar2;
    }

    // 0x10098aa50
    AnimationState::AnimationState(unsigned int arg1)
        : AnimationStateProvider(), MakeSharedPool<AnimationState, 256>(), m_animatesTransparency(false),
          m_animatedColourType(2), field_322(0), field_324((bool)(uint8_t)arg1), field_344(0), field_352(0),
          field_328(0), field_336(0) {
        new ((field_1136 + 96)) std::array<RT5AnimationSampler, 2ul>();
        new (&field_1536) std::array<RT7AnimationSampler, 2ul>();
        new (&field_1808) std::array<SampledPoseAnimationSampler, 2ul>();
        new (&field_2112) std::array<RealtimePoseAnimationSampler, 2ul>();
        new (&field_2704) math::Vector2T();
        new (field_2712) SimpleTwoNodeBlendTreeNode<unsigned long long>();
        new (field_2800) SimpleTwoNodeBlendTreeNode<unsigned long long>();
        new (field_2888) SimpleTwoNodeBlendTreeNode<unsigned long long>();
        new (field_2976) SimpleTwoNodeBlendTreeNode<unsigned long long>();
        new (field_3064) AnimationInfoBlendTreeNode();
        new (field_3176) AnimationInfoBlendTreeNode();
        new (field_3288) AnimationInfoBlendTreeNode();
        new (field_3400) AnimationInfoBlendTreeNode();
        new (field_3512) PoseBlendTreeNode();
        new (&field_3600) Array<JointPose>();
        new (&field_3624) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        field_3648 = 0;
        new (&field_3656) Array<JointPose>();
        new (&field_3680) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        field_3704 = 300000000;
        field_3712 = 300000000;
        field_3720 = 200000000;
        field_3728 = 300000000;
        new (&field_3736) math::ColourHSL(0.0, 0.0, 1.0);
        new (&field_3748) math::ColourHSL(0.0, 1.0, 1.0);
        new (&field_3760) math::ColourHSL(1.0, 0.0, 0.0);
        new (field_3772) math::ColourHSL(1.0, 1.0, 0.0);
        if (arg1 != 2) {
            LogAssert("channelCount == NUM_ANIMATION_CHANNELS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/AnimationState.cpp",
                      82, nullptr);
        }
    }

    // 0x10098b080
    AnimationState::~AnimationState() {
        WaitForAsyncTasks();
        field_3680.~LRUHashCacheWrapper();
        field_3656.~Array();
        field_3624.~LRUHashCacheWrapper();
        field_3600.~Array();
        field_3512->~PoseBlendTreeNode();
        field_3400->~AnimationInfoBlendTreeNode();
        field_3288->~AnimationInfoBlendTreeNode();
        field_3176->~AnimationInfoBlendTreeNode();
        field_3064->~AnimationInfoBlendTreeNode();
        field_2976->~RefCounterAndData();
        field_2888->~RefCounterAndData();
        field_2800->~RefCounterAndData();
        field_2712->~RefCounterAndData();
        field_2112.~array();
        field_1808.~array();
        field_1536.~array();
        ((field_1136 + 96))->~array();
        field_1136->~BlendTreeAnimationSampler();
        field_360.~shared_ptr();
        field_224.~array();
        field_128.~array();
        field_32.~array();
    }

    // 0x10098b350
    void AnimationState::ClearState() {
        WaitForAsyncTasks();
        InvalidateAsyncUpdate();
        uint8_t* puVar1 = &field_320[0];
        *puVar1 = 0;
        puVar1 = &field_320[1];
        *puVar1 = 0;
        field_324 = false;
        m_animatesTransparency = false;
        m_animatedColourType = 2;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        field_360 = local_28;
    }

    // 0x10098b410
    void AnimationState::SetAnimationOnChannel(const AnimationParameters& animationParameters, unsigned int arg2) {
        uint8_t arg3;
        uint8_t arg5;
        uint8_t arg10;
        AnimatedColourType AVar2;
        int arg8;
        AnimationLoopBehaviour animationLoopBehaviour;
        NXTRenderCanvas* this_03;
        unsigned long long arg1;
        unsigned long long arg2_00;

        auto this_00 = animationParameters.GetCursorMutex();
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_01 =
            (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_00).operator->();
        if (((Array<game::VarValue>*)this_01->second())->empty()) {
            this_03 = (NXTRenderCanvas*)(*this_00).operator->();
            if (!((this_03->GetPixelBuffer())->operator_cast_to_bool())) {
                arg2_00 = animationParameters.GetLastUpdateTimeNS();
                arg3 = animationParameters.GetPaused();
                arg8 = animationParameters.GetPickingPrepassType();
                animationLoopBehaviour = animationParameters.GetLoopBehaviour();
                arg10 = animationParameters.IsMembersServer();
                arg1 = 18446744073709551615;
                arg5 = false;
                AVar2 = 2;
                goto LAB_10098b567;
            }
        }
        arg1 = animationParameters.GetStartTimeNS();
        arg2_00 = animationParameters.GetLastUpdateTimeNS();
        arg3 = animationParameters.GetPaused();
        Animation* pAVar3 = (Animation*)(*this_00).operator->();
        arg5 = pAVar3->GetAnimatesTransparency();
        pAVar3 = (Animation*)(*this_00).operator->();
        AVar2 = pAVar3->GetAnimatedColourType();
        arg8 = animationParameters.GetPickingPrepassType();
        animationLoopBehaviour = animationParameters.GetLoopBehaviour();
        arg10 = animationParameters.IsMembersServer();
        AVar2 = AVar2 & 255;
    LAB_10098b567:
        UpdateState(arg1, arg2_00, (bool)arg3, *this_00, (bool)arg5, AVar2, arg2, arg8, animationLoopBehaviour,
                    (bool)arg10);
    }

    // 0x10098b580
    void AnimationState::UpdateState(unsigned long long arg1, unsigned long long arg2, bool arg3,
                                     const shared_ptr<Animation>& animation, bool arg5,
                                     AnimatedColourType animatedColourType, unsigned int arg7, int arg8,
                                     AnimationLoopBehaviour animationLoopBehaviour, bool arg10) {
        WaitForAsyncTasks();
        if (!animation != nullptr) {
            LogAssert("animation != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/AnimationState.cpp",
                      142, nullptr);
        }
        m_animatesTransparency = arg5;
        m_animatedColourType = (uint8_t)animatedColourType;
        unsigned long long* puVar2 = &field_32[(unsigned long)arg7];
        (*((puVar2 + 4))) = animation;
        *puVar2 = arg1;
        puVar2[1] = arg2;
        *(bool*)(puVar2 + 3) = arg3;
        *(int*)(puVar2 + 2) = arg8;
        *(AnimationLoopBehaviour*)((long)puVar2 + 20) = animationLoopBehaviour;
        *(bool*)((long)puVar2 + 25) = arg10;
        uint8_t* puVar3 = &field_320[(unsigned long)arg7];
        *puVar3 = 1;
    }

    // 0x10098b6e0
    bool AnimationState::NeedsRT5Animation(unsigned int arg1) const {
        if (m_RT5TransformsForAll != '\0') {
            return true;
        }
        if (m_RT5TransformsForLowBoneBases == '\0') {
            return false;
        }
        long lVar2 = field_128[(unsigned long)arg1];
        return ((HitmarkType*)(*((lVar2 + 32))).operator->())->GetOverride() <= m_RT5TransformForLowBoneBaseMax;
    }

    // 0x10098b750
    void AnimationState::SelectBasicAnimationSampler(unsigned int arg1) {
        AnimationInfo* animationInfo;
        RealtimePoseAnimationSampler* this_02;
        long* plVar2;
        RT5AnimationSampler* this_03;
        RT7AnimationSampler* pRVar3;

        if (1 < arg1) {
            LogAssert("channel < NUM_ANIMATION_CHANNELS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/AnimationState.cpp",
                      165, nullptr);
        }
        field_1136->Reset();
        animationInfo = (AnimationInfo*)field_128[(unsigned long)arg1];
        auto this_00 = animationInfo->field_32.operator->();
        bool cVar1 = (this_00->GetPixelBuffer())->operator_cast_to_bool();
        if ((!cVar1) || (m_RT5TransformsForAll != '\0')) {
            cVar1 = NeedsRT5Animation(arg1);
            if (!cVar1) {
                pRVar3 = &field_1536[(unsigned long)arg1];
                pRVar3->SetUseAsyncOptimisedPath((bool)m_useRT7SamplerAsyncPath);
                field_376 = pRVar3;
                pRVar3->SetAnimation(*animationInfo);
                plVar2 = (long*)(*((field_1136 + 96)))[(unsigned long)arg1];
            } else {
                this_03 = (RT5AnimationSampler*)(*((field_1136 + 96)))[(unsigned long)arg1];
                this_03->Reset();
                field_376 = (RT7AnimationSampler*)this_03;
                this_03->SetAnimation(*animationInfo);
                plVar2 = &field_1536[(unsigned long)arg1];
            }
            (**(void (**)(...))(*plVar2 + 48))(plVar2);
            plVar2 = &field_1808[(unsigned long)arg1];
            (**(void (**)(...))(*plVar2 + 48))(plVar2);
            plVar2 = &field_2112[(unsigned long)arg1];
        } else {
            if (m_useRuntimeCurves == '\0') {
                pRVar3 = &field_1808[(unsigned long)arg1];
                field_376 = pRVar3;
                pRVar3->SetAnimation(*animationInfo);
                plVar2 = &field_2112[(unsigned long)arg1];
                (**(void (**)(...))(*plVar2 + 48))(plVar2);
                pRVar3->SetDrawDebugSkeleton((bool)m_drawDebugSkeleton);
            } else {
                this_02 = &field_2112[(unsigned long)arg1];
                field_376 = (RT7AnimationSampler*)this_02;
                this_02->SetAnimation(*animationInfo);
                plVar2 = &field_1808[(unsigned long)arg1];
                (**(void (**)(...))(*plVar2 + 48))(plVar2);
                this_02->SetDrawDebugSkeleton((bool)m_drawDebugSkeleton);
            }
            plVar2 = (long*)(*((field_1136 + 96)))[(unsigned long)arg1];
            (**(void (**)(...))(*plVar2 + 48))(plVar2);
            plVar2 = &field_1536[(unsigned long)arg1];
        }
        (**(void (**)(...))(*plVar2 + 48))(plVar2);
    }

    // 0x10098ba30
    uint8_t* AnimationState::GetChannel0BlendTreeNode() {
        unsigned long long arg1;
        long lVar2;
        int iVar4;
        int iVar5;
        AnimationInfo* animationInfo;
        NXTRenderCanvas* pNVar6;
        AnimationInfo* this_01;
        shared_ptr<AnimKeyFrameSet>* psVar7;
        RT7Core* pRVar8;
        shared_ptr<AnimBase>* psVar9;
        CoordMapSquare* pCVar10;
        unsigned long uVar11;
        unsigned long long* puVar12;
        Layout* this_03;
        Singleton<AnimationManager>* this_04;

        uint8_t* this_05 = nullptr;
        animationInfo = (AnimationInfo*)field_128[0];
        uint8_t* puVar1 = &animationInfo->field_32;
        if (puVar1->operator_cast_to_bool()) {
            pNVar6 = (NXTRenderCanvas*)(*puVar1).operator->();
            if (!((pNVar6->GetPixelBuffer())->operator_cast_to_bool())) {
                this_05 = nullptr;
            } else {
                this_01 = &field_224[0];
                if (this_01->HasAnimKeyFrameSet()) {
                    pNVar6 = (NXTRenderCanvas*)(*puVar1).operator->();
                    psVar7 = (shared_ptr<AnimKeyFrameSet>*)pNVar6->GetPixelBuffer();
                    pRVar8 = (RT7Core*)(*psVar7).operator->();
                    psVar9 = (shared_ptr<AnimBase>*)pRVar8->GetMSAASampleCount();
                    pCVar10 = (CoordMapSquare*)(*psVar9).operator->();
                    iVar4 = pCVar10->GetZ();
                    pNVar6 = (NXTRenderCanvas*)this_01->field_32.operator->();
                    psVar7 = (shared_ptr<AnimKeyFrameSet>*)pNVar6->GetPixelBuffer();
                    pRVar8 = (RT7Core*)(*psVar7).operator->();
                    psVar9 = (shared_ptr<AnimBase>*)pRVar8->GetMSAASampleCount();
                    pCVar10 = (CoordMapSquare*)(*psVar9).operator->();
                    iVar5 = pCVar10->GetZ();
                    if (iVar4 == iVar5) {
                        uVar11 = ((Layout*)pCVar10->Instance())->HeapBeginPtr();
                        puVar12 = &field_328[0];
                        if (uVar11 < field_3704 + *puVar12) {
                            field_3064->SetAnim(*this_01);
                            field_3176->SetAnim(*animationInfo);
                            puVar1 = field_2976;
                            puVar1->SetLeftNode(field_3064);
                            this_04 = (Singleton<AnimationManager>*)puVar1;
                            puVar1->SetRightNode(field_3176);
                            arg1 = *puVar12;
                            lVar2 = field_3704;
                            this_03 = (Layout*)this_04->Instance();
                            puVar12 = (unsigned long long*)this_03->SSOBeginPtr();
                            puVar1->SetBlendInfo(arg1, lVar2 + arg1, puVar12);
                            puVar1->SetBlendMode(m_defaultBlendTreeBlendMode);
                            return puVar1;
                        }
                    }
                }
                this_05 = field_3176;
                this_05->SetAnim(*animationInfo);
            }
        }
        return this_05;
    }

    // 0x10098bd10
    uint8_t* AnimationState::GetChannel1BlendTreeNode() {
        unsigned long long arg1;
        long lVar2;
        int iVar4;
        int iVar5;
        AnimationInfo* animationInfo;
        NXTRenderCanvas* pNVar6;
        AnimationInfo* this_01;
        shared_ptr<AnimKeyFrameSet>* psVar7;
        RT7Core* pRVar8;
        shared_ptr<AnimBase>* psVar9;
        CoordMapSquare* pCVar10;
        unsigned long uVar11;
        unsigned long long* puVar12;
        Layout* this_03;
        Singleton<AnimationManager>* this_04;
        WrapArray<unsigned char const> local_48;
        BlendTreeNode* local_38;

        animationInfo = (AnimationInfo*)field_128[1];
        uint8_t* puVar1 = &animationInfo->field_32;
        if (puVar1->operator_cast_to_bool()) {
            pNVar6 = (NXTRenderCanvas*)(*puVar1).operator->();
            if ((pNVar6->GetPixelBuffer())->operator_cast_to_bool()) {
                this_01 = &field_224[1];
                if (this_01->HasAnimKeyFrameSet()) {
                    pNVar6 = (NXTRenderCanvas*)(*puVar1).operator->();
                    psVar7 = (shared_ptr<AnimKeyFrameSet>*)pNVar6->GetPixelBuffer();
                    pRVar8 = (RT7Core*)(*psVar7).operator->();
                    psVar9 = (shared_ptr<AnimBase>*)pRVar8->GetMSAASampleCount();
                    pCVar10 = (CoordMapSquare*)(*psVar9).operator->();
                    iVar4 = pCVar10->GetZ();
                    pNVar6 = (NXTRenderCanvas*)this_01->field_32.operator->();
                    psVar7 = (shared_ptr<AnimKeyFrameSet>*)pNVar6->GetPixelBuffer();
                    pRVar8 = (RT7Core*)(*psVar7).operator->();
                    psVar9 = (shared_ptr<AnimBase>*)pRVar8->GetMSAASampleCount();
                    pCVar10 = (CoordMapSquare*)(*psVar9).operator->();
                    iVar5 = pCVar10->GetZ();
                    if (iVar4 == iVar5) {
                        uVar11 = ((Layout*)pCVar10->Instance())->HeapBeginPtr();
                        puVar12 = &field_328[1];
                        if (uVar11 < field_3712 + *puVar12) {
                            local_38 = (BlendTreeNode*)field_3288;
                            local_38->SetAnim(*this_01);
                            field_3400->SetAnim(*animationInfo);
                            puVar1 = field_2800;
                            puVar1->SetLeftNode(local_38);
                            this_04 = (Singleton<AnimationManager>*)puVar1;
                            puVar1->SetRightNode(field_3400);
                            arg1 = *puVar12;
                            lVar2 = field_3712;
                            this_03 = (Layout*)this_04->Instance();
                            puVar12 = (unsigned long long*)this_03->SSOBeginPtr();
                            puVar1->SetBlendInfo(arg1, lVar2 + arg1, puVar12);
                            puVar1->SetBlendMode(m_defaultBlendTreeBlendMode);
                            return puVar1;
                        }
                    }
                }
                field_3400->SetAnim(*animationInfo);
                return field_3400;
            }
        }
        local_48.WrapArray<Array<unsigned char>>(field_3656);
        field_3512->SetPose(local_48, field_3680);
        return field_3512;
    }

    // 0x10098bf70
    void AnimationState::ClearDebugDrawInformation() {
        field_2712->NotifyDebugRegistration(false);
        field_2800->NotifyDebugRegistration(false);
        field_2888->NotifyDebugRegistration(false);
        field_2976->NotifyDebugRegistration(false);
        field_3064->NotifyDebugRegistration(false);
        field_3176->NotifyDebugRegistration(false);
        field_3288->NotifyDebugRegistration(false);
        field_3400->NotifyDebugRegistration(false);
        field_3512->NotifyDebugRegistration(false);
        field_1136->SetDrawDebugSkeleton(false);
        SampledPoseAnimationSampler* pSVar1 = (SampledPoseAnimationSampler*)field_1808[0];
        pSVar1->SetDrawDebugSkeleton(false);
        pSVar1 = (SampledPoseAnimationSampler*)field_1808[1];
        pSVar1->SetDrawDebugSkeleton(false);
        RealtimePoseAnimationSampler* pRVar2 = &field_2112[0];
        pRVar2->SetDrawDebugSkeleton(false);
        pRVar2 = &field_2112[1];
        pRVar2->SetDrawDebugSkeleton(false);
    }

    // 0x10098c070
    void AnimationState::SetupBlendTreeAnimationSampler() {
        bool bVar1;
        Layout* pLVar3;
        unsigned long uVar4;
        long* plVar5;
        PlayerDataComparator<oldscape::social::FriendChatUser>* pPVar6;
        long* plVar7;
        shared_ptr<AnimBase>* this_00;
        uint8_t* puVar8;
        BlendTreeNode* this_02;
        uint8_t* puVar9;
        Vector3T<float>* vector31;
        Vector3T<float>* vector32;

        ClearDebugDrawInformation();
        Singleton<AnimationManager>* pSVar10 = (Singleton<AnimationManager>*)&field_320;
        Singleton<AnimationManager>* this_04 = pSVar10;
        char* pcVar2 = (char*)(*pSVar10)[1];
        if (*pcVar2 == '\0') {
            pcVar2 = (char*)(*pSVar10)[0];
            if (*pcVar2 == '\0') {
                return;
            }
            pLVar3 = (Layout*)pSVar10->Instance();
            uVar4 = pLVar3->HeapBeginPtr();
            if (uVar4 < field_3728 + field_352) {
                plVar5 = (long*)GetChannel1BlendTreeNode();
                plVar7 = (long*)GetChannel0BlendTreeNode();
                if (plVar7 == nullptr) {
                    LogAssert("channel0BlendTreeNode",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/AnimationState.cpp",
                              413, nullptr);
                }
                this_00 = (shared_ptr<AnimBase>*)(**(void (**)(...))(*plVar7 + 24))(plVar7);
                ((CoordMapSquare*)(*this_00).operator->())->GetZ();
                (**(void (**)(...))(*plVar5 + 24))(plVar5);
            }
            pPVar6 = (PlayerDataComparator<oldscape::social::FriendChatUser>*)GetChannel0BlendTreeNode();
            if (pPVar6 == nullptr) {
                LogAssert("channel0BlendTreeNode",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/AnimationState.cpp",
                          443, nullptr);
            }
            new (&field_2704)
                eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(pPVar6);
            puVar8 = field_1136;
            puVar8->Reset();
            puVar8->SetRightNode(&field_2704);
            field_376 = (RT7AnimationSampler*)puVar8;
            if (AnimationStateProvider::m_useAsyncAnimUpdate != '\0') {
                return;
            }
            puVar8 = &field_2704;
            pSVar10 = (Singleton<AnimationManager>*)puVar8;
            puVar9 = (uint8_t*)puVar8->HeapBeginPtr();
            if (puVar9 == field_2976) {
            LAB_10098c4b4:
                bVar1 = false;
            } else {
                pLVar3 = (Layout*)pSVar10->Instance();
                uVar4 = pLVar3->HeapBeginPtr();
                bVar1 = true;
                if (uVar4 < field_3728 + field_352)
                    goto LAB_10098c4b4;
            }
            if ((m_drawDebugSkeleton == '\0') && (bVar1 || m_drawDebugSkeletonOnBlend == '\0')) {
                return;
            }
            this_02 = (BlendTreeNode*)puVar8->HeapBeginPtr();
            vector31 = (Vector3T<float>*)&field_3736;
            vector32 = (Vector3T<float>*)&field_3748;
            goto LAB_10098c4e3;
        }
        pLVar3 = (Layout*)this_04->Instance();
        uVar4 = pLVar3->HeapBeginPtr();
        if (uVar4 < field_3720 + field_344) {
            plVar5 = (long*)GetChannel0BlendTreeNode();
            pPVar6 = (PlayerDataComparator<oldscape::social::FriendChatUser>*)GetChannel1BlendTreeNode();
            if (plVar5 != nullptr) {
                (**(void (**)(...))(*plVar5 + 24))(plVar5);
            }
        } else {
            pPVar6 = (PlayerDataComparator<oldscape::social::FriendChatUser>*)GetChannel1BlendTreeNode();
        }
        new (&field_2704)
            eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>(pPVar6);
        puVar8 = field_1136;
        puVar8->Reset();
        puVar9 = &field_2704;
        puVar8->SetRightNode(puVar9);
        field_376 = (RT7AnimationSampler*)puVar8;
        if (AnimationStateProvider::m_useAsyncAnimUpdate != '\0') {
            return;
        }
        pSVar10 = (Singleton<AnimationManager>*)puVar9;
        puVar8 = (uint8_t*)puVar9->HeapBeginPtr();
        if (puVar8 == field_2800) {
        LAB_10098c3aa:
            bVar1 = false;
        } else {
            pLVar3 = (Layout*)pSVar10->Instance();
            uVar4 = pLVar3->HeapBeginPtr();
            bVar1 = true;
            if (uVar4 < field_3720 + field_344)
                goto LAB_10098c3aa;
        }
        if ((m_drawDebugSkeleton == '\0') && (bVar1 || m_drawDebugSkeletonOnBlend == '\0')) {
            return;
        }
        this_02 = (BlendTreeNode*)puVar9->HeapBeginPtr();
        vector31 = (Vector3T<float>*)&field_3760;
        vector32 = (Vector3T<float>*)field_3772;
    LAB_10098c4e3:
        this_02->SetDebugDrawColours(*vector31, *vector32);
        ((DebugUIElement*)field_2704.HeapBeginPtr())->NotifyDebugRegistration(true);
    }

    // 0x10098c550
    bool AnimationState::CanAnimationChannelBlend(unsigned int arg1) const {
        char cVar2;
        Animation* pAVar5;

        long lVar4 = field_128[(unsigned long)arg1];
        shared_ptr<Animation>* this_01 = (shared_ptr<Animation>*)(lVar4 + 32);
        NXTRenderCanvas* this_00 = (NXTRenderCanvas*)(*this_01).operator->();
        auto objType = this_00->GetPixelBuffer();
        if ((!*objType == nullptr) && (m_RT5TransformsForAll == '\0')) {
            pAVar5 = (Animation*)(*this_01).operator->();
            cVar2 = pAVar5->GetAnimatesTransparency();
            if (!cVar2) {
                pAVar5 = (Animation*)(*this_01).operator->();
                cVar2 = pAVar5->GetAnimatedColourType();
                if (cVar2 == '\x02') {
                    pAVar5 = (Animation*)(*this_01).operator->();
                    return pAVar5->GetAnimatesBillboards() ^ 1;
                }
            }
        }
        return 0;
    }

    // 0x10098c5f0
    void AnimationState::SelectAnimationSampler() {
        long* this_00;
        char* pcVar3;
        AnimationInfo* animationInfo1;
        AnimationInfo* animationInfo2;
        shared_ptr<oldscape::dash3d::Decor> local_40;

        bool bVar1 = field_360 != nullptr;
        if (bVar1) {
            pcVar3 = &field_320[0];
            if ((*pcVar3 != '\0') && (pcVar3 = (char*)field_320[1], *pcVar3 != '\0')) {
                this_00 = &field_384;
                field_376 = (RT7AnimationSampler*)this_00;
                (**(void (**)(...))(field_384 + 48))(this_00);
                animationInfo1 = (AnimationInfo*)field_128[0];
                animationInfo2 = (AnimationInfo*)field_128[1];
                local_40 = shared_ptr(&field_360);
                this_00->SetAnimations(*animationInfo1, *animationInfo2, &local_40);
                return;
            }
        }
        unsigned long arg1 = 1;
        do {
            pcVar3 = &field_320[arg1];
            if (*pcVar3 != '\0') {
                if (CanAnimationChannelBlend((unsigned int)arg1) == '\0') {
                    SelectBasicAnimationSampler((unsigned int)arg1);
                    return;
                }
            }
            bVar1 = arg1 != 0;
            arg1 = arg1 - 1;
        } while (bVar1);
        SetupBlendTreeAnimationSampler();
    }

    // 0x10098c720
    void
    AnimationState::SetAnimationChannelTransformMask(int arg1,
                                                     const shared_ptr<WalkMergeDataProvider>& walkMergeDataProvider) {
        WaitForAsyncTasks();
        if (arg1 == 1) {
            field_360 = walkMergeDataProvider;
        }
    }

    // 0x10098c7b0
    void AnimationState::ResetChannel(int arg1) {
        WaitForAsyncTasks();
        uint8_t* puVar1 = &field_320[(long)arg1];
        *puVar1 = 0;
        uint64_t* puVar2 = &field_328[(long)arg1];
        *puVar2 = 0;
    }

    // 0x10098c800
    void AnimationState::UpdateFromCurrentTime(const Array<LabelData>& labelDatas,
                                               const math::Matrix44T<float>& matrix44) {
        uint8_t* this_00;
        bool bVar2;
        AnimationInfo* this_01;
        AnimationInfo* animationInfo;
        AnimationInfo* this_02;
        Layout* pLVar3;
        uint64_t uVar4;
        uint64_t* puVar5;
        char* pcVar7;
        unsigned long long uVar8;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_03;
        JointPose* jointPose;
        long* plVar11;
        BindInfo* bindInfo;
        Singleton<AnimationManager>* pSVar12;

        unsigned long uVar10 = 0;
        do {
            this_01 = &field_128[uVar10];
            animationInfo = (AnimationInfo*)field_32[uVar10];
            bVar2 = this_01->field_32 != animationInfo->field_32;
            if (bVar2) {
                this_02 = &field_224[uVar10];
                *this_02 = *this_01;
                *this_01 = *animationInfo;
                pLVar3 = (Layout*)this_01->Instance();
                uVar4 = pLVar3->HeapBeginPtr();
                puVar5 = &field_328[uVar10];
                *puVar5 = uVar4;
            } else {
                *this_01 = *animationInfo;
            }
            bVar2 = uVar10 == 0;
            uVar10 = 1;
        } while (bVar2);
        char* pcVar6 = &field_322[1];
        if (*pcVar6 == '\0') {
            pSVar12 = (Singleton<AnimationManager>*)&field_320;
            pcVar7 = (char*)(*pSVar12)[1];
            if (*pcVar7 != '\0') {
                pLVar3 = (Layout*)pSVar12->Instance();
                uVar8 = pLVar3->HeapBeginPtr();
                field_344 = uVar8;
            }
        }
        if (*pcVar6 != '\0') {
            pSVar12 = (Singleton<AnimationManager>*)&field_320;
            pcVar7 = (char*)(*pSVar12)[1];
            if ((*pcVar7 == '\0') && (field_3648 != '\0')) {
                pLVar3 = (Layout*)pSVar12->Instance();
                uVar8 = pLVar3->HeapBeginPtr();
                field_352 = uVar8;
                field_3656 = field_3600;
                field_3680 = field_3624;
            }
        }
        pcVar7 = &field_320[0];
        char cVar1 = *pcVar7;
        char* pcVar9 = &field_322[0];
        *pcVar9 = cVar1;
        pcVar9 = &field_320[1];
        *pcVar6 = *pcVar9;
        UpdatePausedAnimations();
        field_3648 = 0;
        if (*pcVar7 != '\0' || *pcVar9 != '\0') {
            SelectAnimationSampler();
            field_376->Update((Matrix44T<float>*)labelDatas);
            field_324 = true;
            this_00 = field_1136;
            if (field_376 == (RT7AnimationSampler*)this_00) {
                this_03 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)this_00->GetDefaultValue();
                jointPose = (JointPose*)this_03->data();
                uVar10 = this_03->end();
                field_3600.assign(jointPose, uVar10);
                pLVar3 = (Layout*)this_00->GetConfigGroup();
                plVar11 = (long*)pLVar3->HeapBeginPtr();
                bindInfo = (BindInfo*)(**(void (**)(...))(*plVar11 + 24))(plVar11);
                field_3624 = *bindInfo;
                field_3648 = 1;
            }
        }
    }

    // 0x10098cbf0
    void AnimationState::UpdatePausedAnimations() {
        __7* p_Var2;
        AnimationInfo* pAVar3;

        char* pcVar1 = &field_320[0];
        if (*pcVar1 != '\0') {
            pAVar3 = nullptr;
            p_Var2 = &field_128[0];
            if ((char)p_Var2[1].field_8 != '\0') {
                UpdatePausedAnimations()::$_7::operator()(p_Var2, pAVar3);
            }
        }
        pcVar1 = &field_320[1];
        if (*pcVar1 != '\0') {
            pAVar3 = (AnimationInfo*)&DAT_00000001;
            p_Var2 = &field_128[1];
            if ((char)p_Var2[1].field_8 != '\0') {
                UpdatePausedAnimations()::$_7::operator()(p_Var2, pAVar3);
            }
        }
        pcVar1 = &field_322[0];
        if (*pcVar1 != '\0') {
            pAVar3 = nullptr;
            p_Var2 = &field_224[0];
            if ((char)p_Var2[1].field_8 != '\0') {
                UpdatePausedAnimations()::$_7::operator()(p_Var2, pAVar3);
            }
        }
        pcVar1 = &field_322[1];
        if (*pcVar1 != '\0') {
            pAVar3 = (AnimationInfo*)&DAT_00000001;
            p_Var2 = &field_224[1];
            if ((char)p_Var2[1].field_8 != '\0') {
                UpdatePausedAnimations()::$_7::operator()(p_Var2, pAVar3);
            }
        }
    }

    // 0x10098cd30
    void AnimationState::UpdatePausedAnimations()::$_7::operator()(AnimationInfo& animationInfo) const {
        long lVar1 = ((Layout*)Instance())->HeapBeginPtr();
        field_0 = field_0 + (lVar1 - field_8);
    }

    // 0x10098cd60
    void AnimationState::GetBoneTransforms(WrapArray<math::Matrix43T<float>>& wrapArray,
                                           const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                           const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                           const math::Matrix44T<float>& matrix44) const {
        type* arg2_00;
        duration<long long, std::ratio<1l, 1000l>> local_48;

        if ((&field_324)->operator_cast_to_bool()) {
            if (field_16.valid()) {
                local_48.duration<int>(0, arg2_00);
                if (field_16.wait_for<long long, std::ratio<1l, 1000l>>(local_48) != 0) {
                    LogAssert("!m_asyncUpdateFuture.valid() || "
                              "m_asyncUpdateFuture.wait_for(std::chrono::milliseconds(0)) == std::future_status::ready",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/AnimationState.cpp",
                              653, nullptr);
                }
            }
            field_376->GetRT5BoneTransforms((vector_map<unsigned short, unsigned short>*)wrapArray, arg2,
                                            (Matrix44T<float>*)arg3);
        }
    }

    // 0x10098ce60
    void AnimationState::ApplyBoneTransforms(math::Vector3T<float>& vector3,
                                             const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                             const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                             const math::Matrix44T<float>& matrix44) const {
        type* arg2_00;
        duration<long long, std::ratio<1l, 1000l>> local_48;

        long lVar3 = arg2.size();
        if ((lVar3 != 1) && (lVar3 = arg3.size(), lVar3 != 1)) {
            LogAssert("boneMap.size() == 1 || jointMap.size() == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/AnimationState.cpp",
                      663, nullptr);
        }
        if ((&field_324)->operator_cast_to_bool()) {
            if (field_16.valid()) {
                local_48.duration<int>(0, arg2_00);
                if (field_16.wait_for<long long, std::ratio<1l, 1000l>>(local_48) != 0) {
                    LogAssert("!m_asyncUpdateFuture.valid() || "
                              "m_asyncUpdateFuture.wait_for(std::chrono::milliseconds(0)) == std::future_status::ready",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/AnimationState.cpp",
                              669, nullptr);
                }
            }
            field_376->ApplyBoneTransforms((vector_map<unsigned short, unsigned short>*)vector3, arg2,
                                           (Matrix44T<float>*)arg3);
        }
    }

    // 0x10098cf70
    void AnimationState::GetLabelData(WrapArray<float>& wrapArray,
                                      const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                      AnimationLabelType animationLabelType) const {
        if ((&field_324)->operator_cast_to_bool() != '\0') {
            field_376->GetLabelData((vector_map<unsigned short, unsigned short>*)wrapArray, (AnimationLabelType)arg2);
        }
    }

} // namespace jag::graphics
