// libs/graphics/runetek7/animation/AnimationState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "AnimationState.h"

namespace jag::graphics {
    // 0x100f44c90, 4 bytes, __data
    AnimationState::m_useSmoothSkinning = 1;

    // 0x100f44c94, 4 bytes, __data
    AnimationState::m_curveDebugStepSize = 1036831949;

    // 0x100f44c98, 4 bytes, __data
    float AnimationState::m_curveDebugHeight = 8.0f;

    // 0x100f44c9c, 4 bytes, __data
    AnimationState::m_curveDebugTransformCount = 1;

    // 0x100f44ca0, 1 bytes, __data
    AnimationState::m_RT5TransformsForWalkMerge = 1;

    // 0x100f44ca1, 1 bytes, __data
    AnimationState::m_RT5TransformsForLowBoneBases = 1;

    // 0x100f44ca4, 1 bytes, __data
    AnimationState::m_RT5TransformForLowBoneBaseMax = 20;

    // 0x100f44ca8, 1 bytes, __data
    AnimationState::m_defaultBlendTreeBlendMode = 2;

    // 0x103bc1040, 16 bytes, __common; set at startup by ___cxx_global_var_init.116
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> AnimationState::NullAnimationState;

    // 0x103bc1050, 1 bytes, __common; zero-initialised
    AnimationState::m_highlightRT5Transforms;

    // 0x103bc1051, 3 bytes, __common; zero-initialised
    AnimationState::m_renderCurveDebug;

    // 0x103bc1054, 4 bytes, __common; zero-initialised
    AnimationState::m_curveDebugFirstTransform;

    // 0x103bc1058, 1 bytes, __common; zero-initialised
    AnimationState::m_curveDebugLimitToRange;

    // 0x103bc1059, 3 bytes, __common; zero-initialised
    AnimationState::m_curveScrubMode;

    // 0x103bc105c, 4 bytes, __common; zero-initialised
    AnimationState::m_curveScrubTime;

    // 0x103bc1060, 1 bytes, __common; zero-initialised
    AnimationState::m_drawDebugSkeleton;

    // 0x103bc1061, 1 bytes, __common; zero-initialised
    AnimationState::m_drawDebugSkeletonOnBlend;

    // 0x103bc1062, 1 bytes, __common; zero-initialised
    AnimationState::m_RT5TransformsForAll;

    // 0x103bc1063, 1 bytes, __common; zero-initialised
    AnimationState::m_useRuntimeCurves;

    // 0x103bc1064, 4 bytes, __common; zero-initialised
    AnimationState::m_useRT7SamplerAsyncPath;

    // 0x1001acac0: the linker folded this into Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator> >::IsNull(), which has identical code
    byte AnimationState::GetAnimatesTransparency() const;

    // 0x10098a840, 352 bytes, placed by debug map only (low confidence)
    // AnimationInfoBlendTreeNode::GetPose(WrapArray<JointPose>, Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)
    void AnimationInfoBlendTreeNode::GetPose(Layout* param_2, Array* param_3, Matrix44T* param_4) {
        undefined1 uVar1;
        ulong uVar2;
        ulong uVar3;
        JointPose* pJVar4;
        long lVar5;
        long lVar6;
        JointPose* pJVar7;
        SampledPoseAnimationSampler local_f0;
        WrapArray<game::Cutscene2DAnimation<float>::Key_const> local_58[16];
        Layout local_48[16];

        new (&local_f0) SampledPoseAnimationSampler();
        local_f0.UpdatePose(param_3, param_4, (AnimationInfo*)&field_40);
        local_48->GetPose();
        uVar2 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(param_2);
        uVar3 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(local_48);
        if (uVar2 < uVar3) {
            /* WARNING: Subroutine does not return */
            LogAssert("poseOut.size() >= samplerPose.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/AnimationState.cpp",
                      54, (char*)0);
        }
        pJVar4 = (JointPose*)local_48->end();
        lVar5 = local_48->end();
        lVar6 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(local_48);
        pJVar7 = (JointPose*)param_2->end();
        std::copy<JointPose_const*, JointPose*>(pJVar4, (JointPose*)(lVar6 * 48 + lVar5), pJVar7);
        if ((field_8 != '\0') && (AnimationStateProvider::m_useAsyncAnimUpdate == '\0')) {
            uVar1 = field_104;
            WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
                WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(local_58, param_2);
            pose::DebugDrawSkeleton(field_12, field_20, *(undefined8*)field_24, *(undefined4*)(field_24 + 8), &field_88,
                                    uVar1, local_58, param_4);
        }
        local_f0.~SampledPoseAnimationSampler();
    }

    // 0x10098aa20, 48 bytes, placed by neighbouring functions
    // AnimationInfoBlendTreeNode::GetBindInfo() const
    undefined1* AnimationInfoBlendTreeNode::GetBindInfo() {
        undefined1* puVar2;

        if (operator==((shared_ptr*)field_72, (_func_decltype_nullptr*)0)) {
            puVar2 = &BlendTreeNode::EmptyBindInfo;
        } else {
            puVar2 = &field_88;
        }
        return puVar2;
    }

    // 0x10098aa50, 1184 bytes, base-object constructor, placed by class name and debug map
    // AnimationState::AnimationState(unsigned int)
    void AnimationState::AnimationState(uint param_1) {
        undefined4 in_register_00000034;
        _func_decltype_nullptr* p_Var1;

        p_Var1 = (_func_decltype_nullptr*)CONCAT44(in_register_00000034, param_1);
        new (this) AnimationStateProvider();
        new (this) MakeSharedPool<AnimationState, 256>();
        field_0 = &PTR__AnimationState_100f1bb58;
        m_animatesTransparency = 0;
        m_animatedColourType = 2;
        new (&field_32) std::array<AnimationInfo, 2ul>();
        new (&field_128) std::array<AnimationInfo, 2ul>();
        new (&field_224) std::array<AnimationInfo, 2ul>();
        field_322 = 0;
        std::atomic<bool>::atomic((bool)((char)this + 'D'));
        field_344 = 0;
        field_352 = 0;
        field_328 = 0;
        field_336 = 0;
        new (field_360, p_Var1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_384) WalkMergeAnimationSampler();
        new (field_1136) BlendTreeAnimationSampler();
        new ((field_1136 + 96)) std::array<RT5AnimationSampler, 2ul>();
        new (&field_1536) std::array<RT7AnimationSampler, 2ul>();
        new (&field_1808) std::array<SampledPoseAnimationSampler, 2ul>();
        new (&field_2112) std::array<RealtimePoseAnimationSampler, 2ul>();
        new (&field_2704) math::Vector2T<int>();
        new (field_2712) SimpleTwoNodeBlendTreeNode<unsigned long long>();
        new (field_2800) SimpleTwoNodeBlendTreeNode<unsigned long long>();
        new (field_2888) SimpleTwoNodeBlendTreeNode<unsigned long long>();
        new (field_2976) SimpleTwoNodeBlendTreeNode<unsigned long long>();
        new (field_3064) AnimationInfoBlendTreeNode();
        new (field_3176) AnimationInfoBlendTreeNode();
        new (field_3288) AnimationInfoBlendTreeNode();
        new (field_3400) AnimationInfoBlendTreeNode();
        new (field_3512) PoseBlendTreeNode();
        new (&field_3600) Array<JointPose, eastl::allocator>();
        new (&field_3624) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        field_3648 = 0;
        new (&field_3656) Array<JointPose, eastl::allocator>();
        new (&field_3680) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        field_3704 = 300000000;
        field_3712 = 300000000;
        field_3720 = 200000000;
        field_3728 = 300000000;
        new (&field_3736, 0.0, 0.0, 1.0) math::ColourHSL();
        new (&field_3748, 0.0, 1.0, 1.0) math::ColourHSL();
        new (&field_3760, 1.0, 0.0, 0.0) math::ColourHSL();
        new (field_3772, 1.0, 1.0, 0.0) math::ColourHSL();
        if (param_1 != 2) {
            /* WARNING: Subroutine does not return */
            LogAssert("channelCount == NUM_ANIMATION_CHANNELS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/AnimationState.cpp",
                      82, (char*)0);
        }
    }

    // 0x10098b070, 16 bytes, complete-object constructor, placed by class name and debug map
    // AnimationState::AnimationState(unsigned int): jumps straight to the base-object constructor

    // 0x10098b080, 608 bytes, base-object destructor, placed by class name and debug map
    // AnimationState::~AnimationState()
    void AnimationState::~AnimationState() {
        field_0 = &PTR__AnimationState_100f1bb58;
        WaitForAsyncTasks();
        (&field_3680)->~LRUHashCacheWrapper();
        (&field_3656)->~Array();
        (&field_3624)->~LRUHashCacheWrapper();
        (&field_3600)->~Array();
        field_3512->~PoseBlendTreeNode();
        field_3400->~AnimationInfoBlendTreeNode();
        field_3288->~AnimationInfoBlendTreeNode();
        field_3176->~AnimationInfoBlendTreeNode();
        field_3064->~AnimationInfoBlendTreeNode();
        field_2976->~RefCounterAndData();
        field_2888->~RefCounterAndData();
        field_2800->~RefCounterAndData();
        field_2712->~RefCounterAndData();
        (&field_2112)->~array();
        (&field_1808)->~array();
        (&field_1536)->~array();
        ((field_1136 + 96))->~array();
        field_1136->~BlendTreeAnimationSampler();
        (&field_384)->~WalkMergeAnimationSampler();
        field_360->~shared_ptr();
        (&field_224)->~array();
        (&field_128)->~array();
        (&field_32)->~array();
        ~AnimationStateProvider();
    }

    // 0x10098b320, 16 bytes, complete-object destructor, placed by class name
    // AnimationState::~AnimationState(): jumps straight to the base-object destructor

    // 0x10098b330, 32 bytes, deleting destructor, placed by class name
    // AnimationState::~AnimationState()
    void AnimationState::~AnimationState() {
        ~AnimationState(this);
        operator_delete(this);
    }

    // 0x10098b350, 160 bytes, placed by class name
    // AnimationState::ClearState()
    void AnimationState::ClearState() {
        undefined1* puVar1;
        shared_ptr local_28;

        WaitForAsyncTasks();
        InvalidateAsyncUpdate();
        puVar1 = (undefined1*)std::array<bool, 2ul>::operator[]((array<bool, 2ul>*)&field_320, 0);
        *puVar1 = 0;
        puVar1 = (undefined1*)std::array<bool, 2ul>::operator[]((array<bool, 2ul>*)&field_320, 1);
        *puVar1 = 0;
        std::atomic<bool>::operator=((atomic<bool>*)&field_324, false);
        m_animatesTransparency = 0;
        m_animatedColourType = 2;
        new (&local_28) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        shared_ptr<WalkMergeDataProvider>::operator=((shared_ptr<WalkMergeDataProvider>*)field_360, &local_28);
        local_28.~shared_ptr();
    }

    // 0x10098b410, 368 bytes, placed by class name
    // AnimationState::SetAnimationOnChannel(AnimationParameters const&, unsigned int)
    void AnimationState::SetAnimationOnChannel(AnimationParameters* param_1, uint param_2) {
        char cVar1;
        bool bVar2;
        undefined1 uVar3;
        undefined1 uVar4;
        undefined1 uVar5;
        undefined1 uVar6;
        undefined4 uVar7;
        undefined4 uVar8;
        shared_ptr<Animation>* this_00;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_01;
        Array<game::VarValue, eastl::allocator>* this_02;
        NXTRenderCanvas* this_03;
        shared_ptr* this_04;
        undefined8 uVar9;
        undefined8 uVar10;
        Animation* pAVar11;
        undefined4 in_register_00000014;

        this_00 = (shared_ptr<Animation>*)param_1->GetCursorMutex();
        this_01 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)shared_ptr<Animation>::operator->(this_00);
        this_02 = (Array<game::VarValue, eastl::allocator>*)
            eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>::second(this_01);
        cVar1 = this_02->empty();
        if (cVar1 != '\0') {
            this_03 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->(this_00);
            this_04 = (shared_ptr*)this_03->GetPixelBuffer();
            bVar2 = shared_ptr::operator_cast_to_bool(this_04);
            if (!bVar2) {
                uVar10 = param_1->GetLastUpdateTimeNS();
                uVar3 = param_1->GetPaused();
                uVar7 = param_1->GetPickingPrepassType();
                uVar8 = param_1->GetLoopBehaviour();
                uVar6 = param_1->IsMembersServer();
                uVar9 = 18446744073709551615;
                uVar4 = 0;
                uVar5 = 2;
                goto LAB_10098b567;
            }
        }
        uVar9 = param_1->GetStartTimeNS();
        uVar10 = param_1->GetLastUpdateTimeNS();
        uVar3 = param_1->GetPaused();
        pAVar11 = (Animation*)shared_ptr<Animation>::operator->(this_00);
        uVar4 = pAVar11->GetAnimatesTransparency();
        pAVar11 = (Animation*)shared_ptr<Animation>::operator->(this_00);
        uVar5 = pAVar11->GetAnimatedColourType();
        uVar7 = param_1->GetPickingPrepassType();
        uVar8 = param_1->GetLoopBehaviour();
        uVar6 = param_1->IsMembersServer();
    LAB_10098b567:
        UpdateState(this, uVar9, uVar10, uVar3, this_00, uVar4, uVar5, CONCAT44(in_register_00000014, param_2), uVar7,
                    uVar8, uVar6);
    }

    // 0x10098b580, 208 bytes, placed by class name
    // AnimationState::UpdateState(unsigned long long, unsigned long long, bool, shared_ptr<Animation> const&, bool, AnimatedColourType, unsigned int, int, AnimationLoopBehaviour, bool)
    void AnimationState::UpdateState(undefined8 param_1, undefined8 param_2, undefined1 param_3, shared_ptr* param_4,
                                     byte param_5, undefined1 param_7, uint param_8, undefined4 param_9,
                                     undefined4 param_10, undefined1 param_11) {
        undefined8* puVar2;
        undefined1* puVar3;

        WaitForAsyncTasks();
        if (!operator!=(param_4, (_func_decltype_nullptr*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("animation != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/AnimationState.cpp",
                      142, (char*)0);
        }
        m_animatesTransparency = param_5;
        m_animatedColourType = param_7;
        puVar2 = (undefined8*)std::array<AnimationInfo, 2ul>::operator[]((array<AnimationInfo, 2ul>*)&field_32,
                                                                         (ulong)param_8);
        shared_ptr<Animation>::operator=((shared_ptr<Animation>*)(puVar2 + 4), param_4);
        *puVar2 = param_1;
        puVar2[1] = param_2;
        *(undefined1*)(puVar2 + 3) = param_3;
        *(undefined4*)(puVar2 + 2) = param_9;
        *(undefined4*)((long)puVar2 + 20) = param_10;
        *(undefined1*)((long)puVar2 + 25) = param_11;
        puVar3 = (undefined1*)std::array<bool, 2ul>::operator[]((array<bool, 2ul>*)&field_320, (ulong)param_8);
        *puVar3 = 1;
    }

    // 0x10098b6e0, 80 bytes, placed by class name
    // AnimationState::NeedsRT5Animation(unsigned int) const
    bool AnimationState::NeedsRT5Animation(uint param_1) {
        long lVar2;
        HitmarkType* this_00;

        if (m_RT5TransformsForAll != '\0') {
            return true;
        }
        if (m_RT5TransformsForLowBoneBases == '\0') {
            return false;
        }
        lVar2 = std::array<AnimationInfo, 2ul>::operator[]((array<AnimationInfo, 2ul>*)&field_128, (ulong)param_1);
        this_00 = (HitmarkType*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)(lVar2 + 32));
        return this_00->GetOverride() <= m_RT5TransformForLowBoneBaseMax;
    }

    // 0x10098b750, 560 bytes, placed by class name
    // AnimationState::SelectBasicAnimationSampler(unsigned int)
    void AnimationState::SelectBasicAnimationSampler(uint param_1) {
        AnimationInfo* pAVar3;
        NXTRenderCanvas* this_00;
        shared_ptr* this_01;
        RealtimePoseAnimationSampler* this_02;
        long* plVar4;
        RT5AnimationSampler* this_03;
        RT7AnimationSampler* pRVar5;

        if (1 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("channel < NUM_ANIMATION_CHANNELS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/AnimationState.cpp",
                      165, (char*)0);
        }
        field_1136->Reset();
        pAVar3 = (AnimationInfo*)std::array<AnimationInfo, 2ul>::operator[]((array<AnimationInfo, 2ul>*)&field_128,
                                                                            (ulong)param_1);
        this_00 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)pAVar3->field_32);
        this_01 = (shared_ptr*)this_00->GetPixelBuffer();
        if ((shared_ptr::operator_cast_to_bool(this_01)) && (m_RT5TransformsForAll == '\0')) {
            if (m_useRuntimeCurves == '\0') {
                pRVar5 = (RT7AnimationSampler*)std::array<SampledPoseAnimationSampler, 2ul>::operator[](
                    (array<SampledPoseAnimationSampler, 2ul>*)&field_1808, (ulong)param_1);
                field_376 = pRVar5;
                pRVar5->SetAnimation(pAVar3);
                plVar4 = (long*)std::array<RealtimePoseAnimationSampler, 2ul>::operator[](
                    (array<RealtimePoseAnimationSampler, 2ul>*)&field_2112, (ulong)param_1);
                (**(code**)(*plVar4 + 48))(plVar4);
                pRVar5->SetDrawDebugSkeleton((bool)m_drawDebugSkeleton);
            } else {
                this_02 = (RealtimePoseAnimationSampler*)std::array<RealtimePoseAnimationSampler, 2ul>::operator[](
                    (array<RealtimePoseAnimationSampler, 2ul>*)&field_2112, (ulong)param_1);
                field_376 = (RT7AnimationSampler*)this_02;
                this_02->SetAnimation(pAVar3);
                plVar4 = (long*)std::array<SampledPoseAnimationSampler, 2ul>::operator[](
                    (array<SampledPoseAnimationSampler, 2ul>*)&field_1808, (ulong)param_1);
                (**(code**)(*plVar4 + 48))(plVar4);
                this_02->SetDrawDebugSkeleton((bool)m_drawDebugSkeleton);
            }
            plVar4 = (long*)std::array<RT5AnimationSampler, 2ul>::operator[](
                (array<RT5AnimationSampler, 2ul>*)(field_1136 + 96), (ulong)param_1);
            (**(code**)(*plVar4 + 48))(plVar4);
            plVar4 = (long*)std::array<RT7AnimationSampler, 2ul>::operator[](
                (array<RT7AnimationSampler, 2ul>*)&field_1536, (ulong)param_1);
        } else {
            if (NeedsRT5Animation(this, param_1) == '\0') {
                pRVar5 = (RT7AnimationSampler*)std::array<RT7AnimationSampler, 2ul>::operator[](
                    (array<RT7AnimationSampler, 2ul>*)&field_1536, (ulong)param_1);
                pRVar5->SetUseAsyncOptimisedPath((bool)m_useRT7SamplerAsyncPath);
                field_376 = pRVar5;
                pRVar5->SetAnimation(pAVar3);
                plVar4 = (long*)std::array<RT5AnimationSampler, 2ul>::operator[](
                    (array<RT5AnimationSampler, 2ul>*)(field_1136 + 96), (ulong)param_1);
            } else {
                this_03 = (RT5AnimationSampler*)std::array<RT5AnimationSampler, 2ul>::operator[](
                    (array<RT5AnimationSampler, 2ul>*)(field_1136 + 96), (ulong)param_1);
                (*(code*)this_03->field_0[6])(this_03);
                field_376 = (RT7AnimationSampler*)this_03;
                this_03->SetAnimation(pAVar3);
                plVar4 = (long*)std::array<RT7AnimationSampler, 2ul>::operator[](
                    (array<RT7AnimationSampler, 2ul>*)&field_1536, (ulong)param_1);
            }
            (**(code**)(*plVar4 + 48))(plVar4);
            plVar4 = (long*)std::array<SampledPoseAnimationSampler, 2ul>::operator[](
                (array<SampledPoseAnimationSampler, 2ul>*)&field_1808, (ulong)param_1);
            (**(code**)(*plVar4 + 48))(plVar4);
            plVar4 = (long*)std::array<RealtimePoseAnimationSampler, 2ul>::operator[](
                (array<RealtimePoseAnimationSampler, 2ul>*)&field_2112, (ulong)param_1);
        }
        (**(code**)(*plVar4 + 48))(plVar4);
    }

    // 0x10098ba30, 464 bytes, placed by class name
    // AnimationState::GetChannel0BlendTreeNode()
    undefined1* AnimationState::GetChannel0BlendTreeNode() {
        undefined1* puVar1;
        ulonglong uVar2;
        long lVar3;
        bool bVar4;
        int iVar6;
        int iVar7;
        AnimationInfo* pAVar8;
        NXTRenderCanvas* pNVar9;
        shared_ptr* this_00;
        AnimationInfo* this_01;
        shared_ptr<AnimKeyFrameSet>* psVar10;
        RT7Core* pRVar11;
        shared_ptr<AnimBase>* psVar12;
        CoordMapSquare* pCVar13;
        Layout* this_02;
        ulong uVar14;
        ulonglong* puVar15;
        Layout* this_03;
        vector* pvVar16;
        type* this_04;
        Singleton<AnimationManager>* this_05;
        undefined1* this_06;

        this_06 = (undefined1*)0;
        pAVar8 = (AnimationInfo*)std::array<AnimationInfo, 2ul>::operator[]((array<AnimationInfo, 2ul>*)&field_128, 0);
        puVar1 = pAVar8->field_32;
        bVar4 = puVar1->operator_cast_to_bool();
        if (bVar4) {
            pNVar9 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)puVar1);
            this_00 = (shared_ptr*)pNVar9->GetPixelBuffer();
            bVar4 = shared_ptr::operator_cast_to_bool(this_00);
            if (bVar4) {
                this_01 = (AnimationInfo*)std::array<AnimationInfo, 2ul>::operator[](
                    (array<AnimationInfo, 2ul>*)&field_224, 0);
                if (this_01->HasAnimKeyFrameSet() != '\0') {
                    pNVar9 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)puVar1);
                    psVar10 = (shared_ptr<AnimKeyFrameSet>*)pNVar9->GetPixelBuffer();
                    pRVar11 = (RT7Core*)shared_ptr<AnimKeyFrameSet>::operator->(psVar10);
                    psVar12 = (shared_ptr<AnimBase>*)pRVar11->GetMSAASampleCount();
                    pCVar13 = (CoordMapSquare*)shared_ptr<AnimBase>::operator->(psVar12);
                    iVar6 = pCVar13->GetZ();
                    pNVar9 =
                        (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_01->field_32);
                    psVar10 = (shared_ptr<AnimKeyFrameSet>*)pNVar9->GetPixelBuffer();
                    pRVar11 = (RT7Core*)shared_ptr<AnimKeyFrameSet>::operator->(psVar10);
                    psVar12 = (shared_ptr<AnimBase>*)pRVar11->GetMSAASampleCount();
                    pCVar13 = (CoordMapSquare*)shared_ptr<AnimBase>::operator->(psVar12);
                    iVar7 = pCVar13->GetZ();
                    if (iVar6 == iVar7) {
                        this_02 = (Layout*)pCVar13->Instance();
                        uVar14 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(this_02);
                        puVar15 = (ulonglong*)std::array<unsigned long long, 2ul>::operator[](
                            (array<unsigned long long, 2ul>*)&field_328, 0);
                        if (uVar14 < field_3704 + *puVar15) {
                            (field_3064, this_01)->SetAnim();
                            this_04 = (type*)field_3176;
                            this_04->SetAnim(pAVar8);
                            puVar1 = field_2976;
                            puVar1->SetLeftNode(field_3064);
                            this_05 = (Singleton<AnimationManager>*)puVar1;
                            puVar1->SetRightNode(this_04);
                            uVar2 = *puVar15;
                            lVar3 = field_3704;
                            this_03 = (Layout*)this_05->Instance();
                            pvVar16 = eastl::string::Layout::SSOBeginPtr(this_03, this_04);
                            puVar1->SetBlendInfo(uVar2, lVar3 + uVar2, pvVar16);
                            puVar1->SetBlendMode(m_defaultBlendTreeBlendMode);
                            return puVar1;
                        }
                    }
                }
                this_06 = field_3176;
                this_06->SetAnim(pAVar8);
            } else {
                this_06 = (undefined1*)0;
            }
        }
        return this_06;
    }

    // 0x10098bd10, 512 bytes, placed by class name
    // AnimationState::GetChannel1BlendTreeNode()
    undefined1* AnimationState::GetChannel1BlendTreeNode() {
        undefined1* puVar1;
        ulonglong uVar2;
        long lVar3;
        bool bVar4;
        int iVar6;
        int iVar7;
        AnimationInfo* pAVar8;
        NXTRenderCanvas* pNVar9;
        shared_ptr* this_00;
        AnimationInfo* this_01;
        shared_ptr<AnimKeyFrameSet>* psVar10;
        RT7Core* pRVar11;
        shared_ptr<AnimBase>* psVar12;
        CoordMapSquare* pCVar13;
        Layout* this_02;
        ulong uVar14;
        ulonglong* puVar15;
        Layout* this_03;
        vector* pvVar16;
        type* this_04;
        Singleton<AnimationManager>* this_05;
        WrapArray<unsigned char const> local_48[16];
        BlendTreeNode* local_38;

        pAVar8 = (AnimationInfo*)std::array<AnimationInfo, 2ul>::operator[]((array<AnimationInfo, 2ul>*)&field_128, 1);
        puVar1 = pAVar8->field_32;
        bVar4 = puVar1->operator_cast_to_bool();
        if (bVar4) {
            pNVar9 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)puVar1);
            this_00 = (shared_ptr*)pNVar9->GetPixelBuffer();
            bVar4 = shared_ptr::operator_cast_to_bool(this_00);
            if (bVar4) {
                this_01 = (AnimationInfo*)std::array<AnimationInfo, 2ul>::operator[](
                    (array<AnimationInfo, 2ul>*)&field_224, 1);
                if (this_01->HasAnimKeyFrameSet() != '\0') {
                    pNVar9 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)puVar1);
                    psVar10 = (shared_ptr<AnimKeyFrameSet>*)pNVar9->GetPixelBuffer();
                    pRVar11 = (RT7Core*)shared_ptr<AnimKeyFrameSet>::operator->(psVar10);
                    psVar12 = (shared_ptr<AnimBase>*)pRVar11->GetMSAASampleCount();
                    pCVar13 = (CoordMapSquare*)shared_ptr<AnimBase>::operator->(psVar12);
                    iVar6 = pCVar13->GetZ();
                    pNVar9 =
                        (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_01->field_32);
                    psVar10 = (shared_ptr<AnimKeyFrameSet>*)pNVar9->GetPixelBuffer();
                    pRVar11 = (RT7Core*)shared_ptr<AnimKeyFrameSet>::operator->(psVar10);
                    psVar12 = (shared_ptr<AnimBase>*)pRVar11->GetMSAASampleCount();
                    pCVar13 = (CoordMapSquare*)shared_ptr<AnimBase>::operator->(psVar12);
                    iVar7 = pCVar13->GetZ();
                    if (iVar6 == iVar7) {
                        this_02 = (Layout*)pCVar13->Instance();
                        uVar14 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(this_02);
                        puVar15 = (ulonglong*)std::array<unsigned long long, 2ul>::operator[](
                            (array<unsigned long long, 2ul>*)&field_328, 1);
                        if (uVar14 < field_3712 + *puVar15) {
                            local_38 = (BlendTreeNode*)field_3288;
                            local_38->SetAnim(this_01);
                            this_04 = (type*)field_3400;
                            this_04->SetAnim(pAVar8);
                            puVar1 = field_2800;
                            puVar1->SetLeftNode(local_38);
                            this_05 = (Singleton<AnimationManager>*)puVar1;
                            puVar1->SetRightNode(this_04);
                            uVar2 = *puVar15;
                            lVar3 = field_3712;
                            this_03 = (Layout*)this_05->Instance();
                            pvVar16 = eastl::string::Layout::SSOBeginPtr(this_03, this_04);
                            puVar1->SetBlendInfo(uVar2, lVar3 + uVar2, pvVar16);
                            puVar1->SetBlendMode(m_defaultBlendTreeBlendMode);
                            return puVar1;
                        }
                    }
                }
                (field_3400, pAVar8)->SetAnim();
                return field_3400;
            }
        }
        WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(local_48,
                                                                                          (Array*)&field_3656);
        (field_3512, local_48, (BindInfo*)&field_3680)->SetPose();
        return field_3512;
    }

    // 0x10098bf70, 256 bytes, placed by class name
    // AnimationState::ClearDebugDrawInformation()
    void AnimationState::ClearDebugDrawInformation() {
        SampledPoseAnimationSampler* pSVar1;
        RealtimePoseAnimationSampler* pRVar2;

        (field_2712, false)->NotifyDebugRegistration();
        (field_2800, false)->NotifyDebugRegistration();
        (field_2888, false)->NotifyDebugRegistration();
        (field_2976, false)->NotifyDebugRegistration();
        (field_3064, false)->NotifyDebugRegistration();
        (field_3176, false)->NotifyDebugRegistration();
        (field_3288, false)->NotifyDebugRegistration();
        (field_3400, false)->NotifyDebugRegistration();
        (field_3512, false)->NotifyDebugRegistration();
        (field_1136, false)->SetDrawDebugSkeleton();
        pSVar1 = (SampledPoseAnimationSampler*)std::array<SampledPoseAnimationSampler, 2ul>::operator[](
            (array<SampledPoseAnimationSampler, 2ul>*)&field_1808, 0);
        pSVar1->SetDrawDebugSkeleton(false);
        pSVar1 = (SampledPoseAnimationSampler*)std::array<SampledPoseAnimationSampler, 2ul>::operator[](
            (array<SampledPoseAnimationSampler, 2ul>*)&field_1808, 1);
        pSVar1->SetDrawDebugSkeleton(false);
        pRVar2 = (RealtimePoseAnimationSampler*)std::array<RealtimePoseAnimationSampler, 2ul>::operator[](
            (array<RealtimePoseAnimationSampler, 2ul>*)&field_2112, 0);
        pRVar2->SetDrawDebugSkeleton(false);
        pRVar2 = (RealtimePoseAnimationSampler*)std::array<RealtimePoseAnimationSampler, 2ul>::operator[](
            (array<RealtimePoseAnimationSampler, 2ul>*)&field_2112, 1);
        pRVar2->SetDrawDebugSkeleton(false);
    }

    // 0x10098c070, 1200 bytes, placed by class name
    // AnimationState::SetupBlendTreeAnimationSampler()
    void AnimationState::SetupBlendTreeAnimationSampler() {
        ulonglong uVar1;
        long lVar2;
        bool bVar3;
        short sVar4;
        short sVar5;
        int iVar6;
        int iVar7;
        char* pcVar8;
        Layout* pLVar9;
        ulong uVar10;
        BlendTreeNode* pBVar11;
        shared_ptr<AnimBase>* psVar12;
        CoordMapSquare* pCVar13;
        AnimBase* pAVar14;
        Layout* pLVar15;
        vector* pvVar16;
        BlendTreeNode* pBVar17;
        undefined1* puVar18;
        undefined1* puVar19;
        DebugUIElement* this_00;
        undefined8 extraout_RDX;
        undefined8 extraout_RDX_00;
        undefined8 extraout_RDX_01;
        BucketAllocatorEASTL* extraout_RDX_02;
        BucketAllocatorEASTL* extraout_RDX_03;
        BucketAllocatorEASTL* extraout_RDX_04;
        undefined8 uVar20;
        BucketAllocatorEASTL* pBVar21;
        Vector3T* pVVar23;
        Singleton<AnimationManager>* this_01;
        Singleton<AnimationManager>* pSVar24;
        Vector3T* pVVar25;
        undefined1 auVar26[16];

        ClearDebugDrawInformation(this);
        pSVar24 = (Singleton<AnimationManager>*)&field_320;
        this_01 = pSVar24;
        pcVar8 = (char*)std::array<bool, 2ul>::operator[]((array<bool, 2ul>*)pSVar24, 1);
        if (*pcVar8 == '\0') {
            pcVar8 = (char*)std::array<bool, 2ul>::operator[]((array<bool, 2ul>*)pSVar24, 0);
            if (*pcVar8 == '\0') {
                return;
            }
            pLVar9 = (Layout*)pSVar24->Instance();
            uVar10 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar9);
            if (uVar10 < field_3728 + field_352) {
                pBVar17 = (BlendTreeNode*)GetChannel1BlendTreeNode(this);
                pBVar11 = (BlendTreeNode*)GetChannel0BlendTreeNode(this);
                if (pBVar11 == (BlendTreeNode*)0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("channel0BlendTreeNode",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/AnimationState.cpp",
                              413, (char*)0);
                }
                psVar12 = (shared_ptr<AnimBase>*)(**(code**)(pBVar11->field_0 + 24))(pBVar11);
                pCVar13 = (CoordMapSquare*)shared_ptr<AnimBase>::operator->(psVar12);
                iVar6 = pCVar13->GetZ();
                psVar12 = (shared_ptr<AnimBase>*)(**(code**)(pBVar17->field_0 + 24))(pBVar17);
                pCVar13 = (CoordMapSquare*)shared_ptr<AnimBase>::operator->(psVar12);
                iVar7 = pCVar13->GetZ();
                pBVar21 = extraout_RDX_02;
                if (iVar6 == iVar7) {
                    psVar12 = (shared_ptr<AnimBase>*)(**(code**)(pBVar11->field_0 + 24))(pBVar11);
                    pAVar14 = (AnimBase*)shared_ptr<AnimBase>::operator->(psVar12);
                    sVar4 = pAVar14->GetNumJoints();
                    psVar12 = (shared_ptr<AnimBase>*)(**(code**)(pBVar17->field_0 + 24))(pBVar17);
                    pAVar14 = (AnimBase*)shared_ptr<AnimBase>::operator->(psVar12);
                    sVar5 = pAVar14->GetNumJoints();
                    pBVar21 = extraout_RDX_03;
                    if (sVar4 == sVar5) {
                        puVar18 = field_2888;
                        uVar1 = field_352;
                        lVar2 = field_3728;
                        pLVar15 = (Layout*)pAVar14->Instance();
                        pvVar16 = eastl::string::Layout::SSOBeginPtr(pLVar15, (type*)0);
                        puVar18->SetBlendInfo(uVar1, lVar2 + uVar1, pvVar16);
                        puVar18->SetLeftNode(pBVar17);
                        puVar18->SetRightNode(pBVar11);
                        puVar18->SetBlendMode(m_defaultBlendTreeBlendMode);
                        pBVar21 = extraout_RDX_04;
                        pBVar11 = (BlendTreeNode*)puVar18;
                    }
                }
                new (&field_2704, (EntityHighlight**)pBVar11, pBVar21)
                    eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>();
                field_1136->Reset();
            } else {
                auVar26 = GetChannel0BlendTreeNode(this);
                if (auVar26._0_8_ == (EntityHighlight**)0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("channel0BlendTreeNode",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/AnimationState.cpp",
                              443, (char*)0);
                }
                new (&field_2704, auVar26._0_8_, auVar26._8_8_)
                    eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>();
                field_1136->Reset();
            }
            (field_1136, (BlendTreeNode*)&field_2704)->SetRightNode();
            field_376 = (RT7AnimationSampler*)field_1136;
            if (AnimationStateProvider::m_useAsyncAnimUpdate != '\0') {
                return;
            }
            puVar18 = &field_2704;
            pSVar24 = (Singleton<AnimationManager>*)puVar18;
            puVar19 = (undefined1*)puVar18->HeapBeginPtr();
            if (puVar19 == field_2976) {
            LAB_10098c4b4:
                bVar3 = false;
            } else {
                pLVar9 = (Layout*)pSVar24->Instance();
                uVar10 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(pLVar9);
                bVar3 = true;
                if (uVar10 < field_3728 + field_352)
                    goto LAB_10098c4b4;
            }
            if ((m_drawDebugSkeleton == '\0') && (bVar3 || m_drawDebugSkeletonOnBlend == '\0')) {
                return;
            }
            pBVar11 = (BlendTreeNode*)puVar18->HeapBeginPtr();
            pVVar23 = (Vector3T*)&field_3736;
            pVVar25 = (Vector3T*)&field_3748;
            goto LAB_10098c4e3;
        }
        pLVar9 = (Layout*)this_01->Instance();
        uVar10 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(pLVar9);
        if (uVar10 < field_3720 + field_344) {
            pBVar11 = (BlendTreeNode*)GetChannel0BlendTreeNode(this);
            auVar26 = GetChannel1BlendTreeNode(this);
            uVar20 = auVar26._8_8_;
            pBVar17 = auVar26._0_8_;
            if (pBVar11 != (BlendTreeNode*)0) {
                psVar12 = (shared_ptr<AnimBase>*)(**(code**)(pBVar11->field_0 + 24))(pBVar11);
                pCVar13 = (CoordMapSquare*)shared_ptr<AnimBase>::operator->(psVar12);
                iVar6 = pCVar13->GetZ();
                psVar12 = (shared_ptr<AnimBase>*)(**(code**)(pBVar17->field_0 + 24))(pBVar17);
                pCVar13 = (CoordMapSquare*)shared_ptr<AnimBase>::operator->(psVar12);
                iVar7 = pCVar13->GetZ();
                uVar20 = extraout_RDX;
                if (iVar6 == iVar7) {
                    psVar12 = (shared_ptr<AnimBase>*)(**(code**)(pBVar11->field_0 + 24))(pBVar11);
                    pAVar14 = (AnimBase*)shared_ptr<AnimBase>::operator->(psVar12);
                    sVar4 = pAVar14->GetNumJoints();
                    psVar12 = (shared_ptr<AnimBase>*)(**(code**)(pBVar17->field_0 + 24))(pBVar17);
                    pAVar14 = (AnimBase*)shared_ptr<AnimBase>::operator->(psVar12);
                    sVar5 = pAVar14->GetNumJoints();
                    uVar20 = extraout_RDX_00;
                    if (sVar4 == sVar5) {
                        puVar18 = field_2712;
                        puVar18->SetLeftNode(pBVar11);
                        pSVar24 = (Singleton<AnimationManager>*)puVar18;
                        puVar18->SetRightNode(pBVar17);
                        uVar1 = field_344;
                        lVar2 = field_3720;
                        pLVar15 = (Layout*)pSVar24->Instance();
                        pvVar16 = eastl::string::Layout::SSOBeginPtr(pLVar15, (type*)pBVar17);
                        puVar18->SetBlendInfo(uVar1, lVar2 + uVar1, pvVar16);
                        puVar18->SetBlendMode(m_defaultBlendTreeBlendMode);
                        auVar26._8_8_ = extraout_RDX_01;
                        auVar26._0_8_ = puVar18;
                        goto LAB_10098c33a;
                    }
                }
            }
            auVar26._8_8_ = uVar20;
            auVar26._0_8_ = pBVar17;
        } else {
            auVar26 = GetChannel1BlendTreeNode(this);
        }
    LAB_10098c33a:
        new (&field_2704, auVar26._0_8_, auVar26._8_8_)
            eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>();
        puVar18 = field_1136;
        puVar18->Reset();
        puVar19 = &field_2704;
        puVar18->SetRightNode(puVar19);
        field_376 = (RT7AnimationSampler*)puVar18;
        if (AnimationStateProvider::m_useAsyncAnimUpdate != '\0') {
            return;
        }
        pSVar24 = (Singleton<AnimationManager>*)puVar19;
        puVar18 = (undefined1*)puVar19->HeapBeginPtr();
        if (puVar18 == field_2800) {
        LAB_10098c3aa:
            bVar3 = false;
        } else {
            pLVar9 = (Layout*)pSVar24->Instance();
            uVar10 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar9);
            bVar3 = true;
            if (uVar10 < field_3720 + field_344)
                goto LAB_10098c3aa;
        }
        if ((m_drawDebugSkeleton == '\0') && (bVar3 || m_drawDebugSkeletonOnBlend == '\0')) {
            return;
        }
        pBVar11 = (BlendTreeNode*)puVar19->HeapBeginPtr();
        pVVar23 = (Vector3T*)&field_3760;
        pVVar25 = (Vector3T*)field_3772;
    LAB_10098c4e3:
        pBVar11->SetDebugDrawColours(pVVar23, pVVar25);
        this_00 = (DebugUIElement*)(&field_2704)->HeapBeginPtr();
        this_00->NotifyDebugRegistration(true);
    }

    // 0x10098c550, 144 bytes, placed by class name
    // AnimationState::CanAnimationChannelBlend(unsigned int) const
    uint AnimationState::CanAnimationChannelBlend(uint param_1) {
        char cVar2;
        long lVar4;
        NXTRenderCanvas* this_00;
        shared_ptr* psVar5;
        Animation* pAVar6;
        shared_ptr<Animation>* this_01;

        lVar4 = std::array<AnimationInfo, 2ul>::operator[]((array<AnimationInfo, 2ul>*)&field_128, (ulong)param_1);
        this_01 = (shared_ptr<Animation>*)(lVar4 + 32);
        this_00 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->(this_01);
        psVar5 = (shared_ptr*)this_00->GetPixelBuffer();
        if ((!operator==(psVar5, (_func_decltype_nullptr*)0)) && (m_RT5TransformsForAll == '\0')) {
            pAVar6 = (Animation*)shared_ptr<Animation>::operator->(this_01);
            cVar2 = pAVar6->GetAnimatesTransparency();
            if (cVar2 == '\0') {
                pAVar6 = (Animation*)shared_ptr<Animation>::operator->(this_01);
                cVar2 = pAVar6->GetAnimatedColourType();
                if (cVar2 == '\x02') {
                    pAVar6 = (Animation*)shared_ptr<Animation>::operator->(this_01);
                    return pAVar6->GetAnimatesBillboards() ^ 1;
                }
            }
        }
        return 0;
    }

    // 0x10098c5f0, 304 bytes, placed by class name
    // AnimationState::SelectAnimationSampler()
    void AnimationState::SelectAnimationSampler() {
        long* this_00;
        bool bVar1;
        char* pcVar3;
        AnimationInfo* pAVar4;
        AnimationInfo* pAVar5;
        ulong uVar6;
        shared_ptr in_stack_ffffffffffffffb8;
        shared_ptr<oldscape::dash3d::Decor> asStack_36[6];

        bVar1 = operator!=((shared_ptr*)field_360, (_func_decltype_nullptr*)0);
        if (bVar1) {
            pcVar3 = (char*)std::array<bool, 2ul>::operator[]((array<bool, 2ul>*)&field_320, 0);
            if ((*pcVar3 != '\0') &&
                (pcVar3 = (char*)std::array<bool, 2ul>::operator[]((array<bool, 2ul>*)&field_320, 1),
                 *pcVar3 != '\0')) {
                this_00 = &field_384;
                field_376 = (RT7AnimationSampler*)this_00;
                (**(code**)(field_384 + 48))(this_00);
                pAVar4 = (AnimationInfo*)std::array<AnimationInfo, 2ul>::operator[](
                    (array<AnimationInfo, 2ul>*)&field_128, 0);
                pAVar5 = (AnimationInfo*)std::array<AnimationInfo, 2ul>::operator[](
                    (array<AnimationInfo, 2ul>*)&field_128, 1);
                shared_ptr<oldscape::dash3d::Decor>::shared_ptr(asStack_36 + -10, (shared_ptr*)field_360);
                this_00->SetAnimations(pAVar4, pAVar5, in_stack_ffffffffffffffb8);
                ((asStack_36 + -10))->~shared_ptr();
                return;
            }
        }
        uVar6 = 1;
        do {
            pcVar3 = (char*)std::array<bool, 2ul>::operator[]((array<bool, 2ul>*)&field_320, uVar6);
            if (*pcVar3 != '\0') {
                if (CanAnimationChannelBlend(this, (uint)uVar6) == '\0') {
                    SelectBasicAnimationSampler(this, (uint)uVar6);
                    return;
                }
            }
            bVar1 = uVar6 != 0;
            uVar6 = uVar6 - 1;
        } while (bVar1);
        SetupBlendTreeAnimationSampler(this);
    }

    // 0x10098c720, 64 bytes, placed by class name
    // AnimationState::SetAnimationChannelTransformMask(int, shared_ptr<WalkMergeDataProvider> const&)
    void AnimationState::SetAnimationChannelTransformMask(int param_1, shared_ptr* param_2) {
        WaitForAsyncTasks();
        if (param_1 == 1) {
            shared_ptr<WalkMergeDataProvider>::operator=((shared_ptr<WalkMergeDataProvider>*)field_360, param_2);
        }
    }

    // 0x10098c7b0, 80 bytes, placed by class name
    // AnimationState::ResetChannel(int)
    void AnimationState::ResetChannel(int param_1) {
        undefined1* puVar1;
        undefined8* puVar2;

        WaitForAsyncTasks();
        puVar1 = (undefined1*)std::array<bool, 2ul>::operator[]((array<bool, 2ul>*)&field_320, (long)param_1);
        *puVar1 = 0;
        puVar2 = (undefined8*)std::array<unsigned long long, 2ul>::operator[](
            (array<unsigned long long, 2ul>*)&field_328, (long)param_1);
        *puVar2 = 0;
    }

    // 0x10098c800, 672 bytes, placed by class name
    // AnimationState::UpdateFromCurrentTime(Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)
    void AnimationState::UpdateFromCurrentTime(Array* param_1, Matrix44T* param_2) {
        undefined1* this_00;
        char cVar1;
        bool bVar2;
        AnimationInfo* this_01;
        AnimationInfo* pAVar3;
        AnimationInfo* this_02;
        Layout* pLVar4;
        undefined8 uVar5;
        undefined8* puVar6;
        char* pcVar7;
        char* pcVar8;
        ulonglong uVar9;
        char* pcVar10;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_03;
        JointPose* pJVar11;
        ulong uVar12;
        long* plVar13;
        BindInfo* pBVar14;
        Singleton<AnimationManager>* pSVar15;

        uVar12 = 0;
        do {
            this_01 = (AnimationInfo*)std::array<AnimationInfo, 2ul>::operator[]((array<AnimationInfo, 2ul>*)&field_128,
                                                                                 uVar12);
            pAVar3 = (AnimationInfo*)std::array<AnimationInfo, 2ul>::operator[]((array<AnimationInfo, 2ul>*)&field_32,
                                                                                uVar12);
            bVar2 = operator!=((shared_ptr*)this_01->field_32, (shared_ptr*)pAVar3->field_32);
            if (bVar2) {
                this_02 = (AnimationInfo*)std::array<AnimationInfo, 2ul>::operator[](
                    (array<AnimationInfo, 2ul>*)&field_224, uVar12);
                AnimationInfo::operator=(this_02, this_01);
                AnimationInfo::operator=(this_01, pAVar3);
                pLVar4 = (Layout*)this_01->Instance();
                uVar5 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(pLVar4);
                puVar6 = (undefined8*)std::array<unsigned long long, 2ul>::operator[](
                    (array<unsigned long long, 2ul>*)&field_328, uVar12);
                *puVar6 = uVar5;
            } else {
                AnimationInfo::operator=(this_01, pAVar3);
            }
            bVar2 = uVar12 == 0;
            uVar12 = 1;
        } while (bVar2);
        pcVar7 = (char*)std::array<bool, 2ul>::operator[]((array<bool, 2ul>*)&field_322, 1);
        if (*pcVar7 == '\0') {
            pSVar15 = (Singleton<AnimationManager>*)&field_320;
            pcVar8 = (char*)std::array<bool, 2ul>::operator[]((array<bool, 2ul>*)pSVar15, 1);
            if (*pcVar8 != '\0') {
                pLVar4 = (Layout*)pSVar15->Instance();
                uVar9 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(pLVar4);
                field_344 = uVar9;
            }
        }
        if (*pcVar7 != '\0') {
            pSVar15 = (Singleton<AnimationManager>*)&field_320;
            pcVar8 = (char*)std::array<bool, 2ul>::operator[]((array<bool, 2ul>*)pSVar15, 1);
            if ((*pcVar8 == '\0') && (field_3648 != '\0')) {
                pLVar4 = (Layout*)pSVar15->Instance();
                uVar9 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(pLVar4);
                field_352 = uVar9;
                Array<JointPose, eastl::allocator>::operator=((Array<JointPose, eastl::allocator>*)&field_3656,
                                                              (Array*)&field_3600);
                BindInfo::operator=((BindInfo*)&field_3680, (BindInfo*)&field_3624);
            }
        }
        pcVar8 = (char*)std::array<bool, 2ul>::operator[]((array<bool, 2ul>*)&field_320, 0);
        cVar1 = *pcVar8;
        pcVar10 = (char*)std::array<bool, 2ul>::operator[]((array<bool, 2ul>*)&field_322, 0);
        *pcVar10 = cVar1;
        pcVar10 = (char*)std::array<bool, 2ul>::operator[]((array<bool, 2ul>*)&field_320, 1);
        *pcVar7 = *pcVar10;
        UpdatePausedAnimations(this);
        field_3648 = 0;
        if (*pcVar8 != '\0' || *pcVar10 != '\0') {
            SelectAnimationSampler(this);
            (*(code*)field_376->field_0[2])(field_376, param_1, param_2);
            std::atomic<bool>::operator=((atomic<bool>*)&field_324, true);
            this_00 = field_1136;
            if (field_376 == (RT7AnimationSampler*)this_00) {
                this_03 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                 std::default_delete<LoadingScreenScript::AnimLayer>>,
                                 eastl::allocator>*)this_00->GetDefaultValue();
                pJVar11 = (JointPose*)this_03->data();
                uVar12 = this_03->end();
                (&field_3600, pJVar11, uVar12)->assign();
                pLVar4 = (Layout*)this_00->GetConfigGroup();
                plVar13 = (long*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(pLVar4);
                pBVar14 = (BindInfo*)(**(code**)(*plVar13 + 24))(plVar13);
                BindInfo::operator=((BindInfo*)&field_3624, pBVar14);
                field_3648 = 1;
            }
        }
    }

    // 0x10098cbf0, 224 bytes, placed by class name
    // AnimationState::UpdatePausedAnimations()
    void AnimationState::UpdatePausedAnimations() {
        char* pcVar1;
        __7* p_Var2;
        AnimationInfo* pAVar3;

        pcVar1 = (char*)std::array<bool, 2ul>::operator[]((array<bool, 2ul>*)&field_320, 0);
        if (*pcVar1 != '\0') {
            pAVar3 = (AnimationInfo*)0;
            p_Var2 = (__7*)std::array<AnimationInfo, 2ul>::operator[]((array<AnimationInfo, 2ul>*)&field_128, 0);
            if ((char)p_Var2[1].field_8 != '\0') {
                UpdatePausedAnimations()::$_7::operator()(p_Var2, pAVar3);
            }
        }
        pcVar1 = (char*)std::array<bool, 2ul>::operator[]((array<bool, 2ul>*)&field_320, 1);
        if (*pcVar1 != '\0') {
            pAVar3 = (AnimationInfo*)&DAT_00000001;
            p_Var2 = (__7*)std::array<AnimationInfo, 2ul>::operator[]((array<AnimationInfo, 2ul>*)&field_128, 1);
            if ((char)p_Var2[1].field_8 != '\0') {
                UpdatePausedAnimations()::$_7::operator()(p_Var2, pAVar3);
            }
        }
        pcVar1 = (char*)std::array<bool, 2ul>::operator[]((array<bool, 2ul>*)&field_322, 0);
        if (*pcVar1 != '\0') {
            pAVar3 = (AnimationInfo*)0;
            p_Var2 = (__7*)std::array<AnimationInfo, 2ul>::operator[]((array<AnimationInfo, 2ul>*)&field_224, 0);
            if ((char)p_Var2[1].field_8 != '\0') {
                UpdatePausedAnimations()::$_7::operator()(p_Var2, pAVar3);
            }
        }
        pcVar1 = (char*)std::array<bool, 2ul>::operator[]((array<bool, 2ul>*)&field_322, 1);
        if (*pcVar1 != '\0') {
            pAVar3 = (AnimationInfo*)&DAT_00000001;
            p_Var2 = (__7*)std::array<AnimationInfo, 2ul>::operator[]((array<AnimationInfo, 2ul>*)&field_224, 1);
            if ((char)p_Var2[1].field_8 != '\0') {
                UpdatePausedAnimations()::$_7::operator()(p_Var2, pAVar3);
            }
        }
    }

    // 0x10098cd30, 48 bytes, placed by class name
    // AnimationState::UpdatePausedAnimations()::$_7::operator()(AnimationInfo&) const
    /* AnimationState::UpdatePausedAnimations()::$_7::TEMPNAMEPLACEHOLDERVALUE(AnimationInfo&)
   const */

    void AnimationState::UpdatePausedAnimations()::$_7::operator()(AnimationInfo* param_1) {
        Layout* this_00;
        long lVar1;

        this_00 = (Layout*)Instance();
        lVar1 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_00);
        field_0 = field_0 + (lVar1 - field_8);
    }

    // 0x10098cd60, 192 bytes, placed by class name
    // AnimationState::GetBoneTransforms(WrapArray<math::Matrix43T<float> >&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, math::Matrix44T<float> const&) const
    void AnimationState::GetBoneTransforms(WrapArray* param_1, vector_map* param_2, vector_map* param_3,
                                           Matrix44T* param_4) {
        int iVar3;
        duration local_48[8];
        undefined4 local_34;

        if ((&field_324)->operator_cast_to_bool()) {
            if ((&field_16)->valid() != '\0') {
                local_34 = 0;
                std::chrono::duration<long long, std::ratio<1l, 1000l>>::duration<int>((int*)local_48,
                                                                                       (type*)&local_34);
                iVar3 =
                    std::future<void>::wait_for<long long, std::ratio<1l, 1000l>>((future<void>*)&field_16, local_48);
                if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("!m_asyncUpdateFuture.valid() || "
                              "m_asyncUpdateFuture.wait_for(std::chrono::milliseconds(0)) == std::future_status::ready",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/AnimationState.cpp",
                              653, (char*)0);
                }
            }
            (*(code*)field_376->field_0[3])(field_376, param_1, param_2, param_3, param_4);
        }
    }

    // 0x10098ce60, 272 bytes, placed by class name
    // AnimationState::ApplyBoneTransforms(math::Vector3T<float>&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, math::Matrix44T<float> const&) const
    void AnimationState::ApplyBoneTransforms(Vector3T* param_1, vector_map* param_2, vector_map* param_3,
                                             Matrix44T* param_4) {
        int iVar3;
        long lVar4;
        duration local_48[8];
        undefined4 local_34;

        lVar4 = param_2->size();
        if ((lVar4 != 1) && (lVar4 = param_3->size(), lVar4 != 1)) {
            /* WARNING: Subroutine does not return */
            LogAssert("boneMap.size() == 1 || jointMap.size() == 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/AnimationState.cpp",
                      663, (char*)0);
        }
        if ((&field_324)->operator_cast_to_bool()) {
            if ((&field_16)->valid() != '\0') {
                local_34 = 0;
                std::chrono::duration<long long, std::ratio<1l, 1000l>>::duration<int>((int*)local_48,
                                                                                       (type*)&local_34);
                iVar3 =
                    std::future<void>::wait_for<long long, std::ratio<1l, 1000l>>((future<void>*)&field_16, local_48);
                if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("!m_asyncUpdateFuture.valid() || "
                              "m_asyncUpdateFuture.wait_for(std::chrono::milliseconds(0)) == std::future_status::ready",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/AnimationState.cpp",
                              669, (char*)0);
                }
            }
            (*(code*)field_376->field_0[4])(field_376, param_1, param_2, param_3, param_4);
        }
    }

    // 0x10098cf70, 80 bytes, placed by class name
    // AnimationState::GetLabelData(WrapArray<float>&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, AnimationLabelType) const
    void AnimationState::GetLabelData(undefined8 param_1, undefined8 param_2, undefined4 param_4) {
        if ((&field_324)->operator_cast_to_bool()) {
            (*(code*)field_376->field_0[5])(field_376, param_1, param_2, param_4);
        }
    }

    // 0x1009a7560, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.116
    void ___cxx_global_var_init_116(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&AnimationState::NullAnimationState) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5360, &AnimationState::NullAnimationState, 4294967296);
    }

} // namespace jag::graphics
