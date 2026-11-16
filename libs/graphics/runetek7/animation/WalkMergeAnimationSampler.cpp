// libs/graphics/runetek7/animation/WalkMergeAnimationSampler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "WalkMergeAnimationSampler.h"

namespace jag::graphics {
    // 0x100953860, 240 bytes, base-object constructor, placed by class name
    // WalkMergeAnimationSampler::WalkMergeAnimationSampler()
    void WalkMergeAnimationSampler::WalkMergeAnimationSampler() {
        new (this) AnimationSampler();
        field_0 = &PTR__WalkMergeAnimationSampler_100f1b150;
        new (field_32) SampledPoseAnimationSampler();
        new (&field_184) RT5AnimationSampler();
        new (field_336) SampledPoseAnimationSampler();
        new (field_488) RT5AnimationSampler();
        *(undefined8*)(field_488 + 152) = 0;
        *(undefined8*)(field_488 + 160) = 0;
        new ((field_488 + 168)) AnimationInfo();
        new ((field_488 + 216)) AnimationInfo();
    }

    // 0x100953950, 16 bytes, complete-object constructor, placed by class name
    // WalkMergeAnimationSampler::WalkMergeAnimationSampler(): jumps straight to the base-object constructor

    // 0x100953960, 1152 bytes, placed by class name
    // WalkMergeAnimationSampler::Update(Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)
    void WalkMergeAnimationSampler::Update(Array* param_1, Matrix44T* param_2) {
        undefined1* puVar1;
        AnimationInfo* this_00;
        Matrix44T* pMVar2;
        char cVar3;
        uchar uVar4;
        ulong uVar5;
        NXTRenderCanvas* pNVar6;
        shared_ptr<AnimKeyFrameSet>* psVar7;
        RT7Core* pRVar8;
        shared_ptr<AnimBase>* psVar9;
        AnimBase* pAVar10;
        AnimKeyFrameSet* pAVar11;
        AnimationInfo* this_01;
        Array* pAVar12;
        undefined1 local_30e0[80];
        undefined1 local_3090[24];
        Matrix44T* local_3078;
        undefined4 local_306c;
        fixed_vector<JointPose, 256ul, true, eastl::allocator> local_3068[12336];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (AnimationInfo*)(field_488 + 168);
        local_3090._16_8_ = param_1;
        local_3078 = param_2;
        cVar3 = this_00->HasAnimKeyFrameSet();
        if (cVar3 == '\0') {
            local_306c = 0;
        } else {
            local_306c = ((field_488 + 216))->HasAnimKeyFrameSet();
        }
        cVar3 = this_00->HasAnimKeyFrameSet();
        if (cVar3 == '\0') {
            puVar1 = &field_184;
            *(undefined1**)(field_488 + 152) = puVar1;
            puVar1->SetAnimation(this_00);
            puVar1->SetOverrideAnimationInfo((AnimationInfo*)(field_488 + 216));
            puVar1->SetDrawDebugSkeleton(true);
            puVar1->SetWalkMergeDataProvider(field_8);
            puVar1->SetRightNode(0);
        } else {
            puVar1 = field_32;
            puVar1->SetDrawDebugSkeleton((bool)AnimationState::m_drawDebugSkeleton);
            *(undefined1**)(field_488 + 152) = puVar1;
            puVar1->SetAnimation(this_00);
            if ((char)local_306c == '\0') {
                local_3090->GetPose();
                uVar5 = local_3090->HeapBeginPtr();
                eastl::fixed_vector<JointPose, 256ul, true, eastl::allocator>::fixed_vector(local_3068, uVar5);
                pNVar6 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)(field_488 + 200));
                psVar7 = (shared_ptr<AnimKeyFrameSet>*)pNVar6->GetPixelBuffer();
                pRVar8 = (RT7Core*)shared_ptr<AnimKeyFrameSet>::operator->(psVar7);
                psVar9 = (shared_ptr<AnimBase>*)pRVar8->GetMSAASampleCount();
                pAVar10 = (AnimBase*)shared_ptr<AnimBase>::operator->(psVar9);
                pAVar11 = (AnimKeyFrameSet*)shared_ptr<AnimKeyFrameSet>::operator->(psVar7);
                uVar4 = pAVar11->GetBindID();
                pAVar10->GetBindPose(uVar4);
                WrapArray<JointPose>::WrapArray<eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>>(
                    (WrapArray<JointPose>*)(local_30e0 + 16), (fixed_vector*)local_3068);
                GetJointPosesFromJoints();
                WrapArray<JointPose>::WrapArray<eastl::fixed_vector<JointPose, 64ul, true, eastl::allocator>>(
                    (WrapArray<JointPose>*)(local_30e0 + 32), (fixed_vector*)local_3068);
                puVar1->SetMergeJoints(local_30e0 + 32, 0);
                puVar1->SetWalkMergeDataProvider(field_8);
                eastl::fixed_vector<JointPose, 256ul, true, eastl::allocator>::~fixed_vector(local_3068);
            }
        }
        this_01 = (AnimationInfo*)(field_488 + 216);
        cVar3 = this_01->HasAnimKeyFrameSet();
        if (cVar3 == '\0') {
            puVar1 = field_488;
            *(undefined1**)(field_488 + 160) = puVar1;
            puVar1->SetAnimation(this_01);
            puVar1->SetOverrideAnimationInfo(this_01);
            puVar1->SetDrawDebugSkeleton(false);
            puVar1->SetWalkMergeDataProvider(field_8);
            cVar3 = this_00->HasAnimKeyFrameSet();
            if (cVar3 == '\0') {
                this_01 = (AnimationInfo*)(&field_184)->GetDefaultValue();
            } else {
                this_01 = (AnimationInfo*)0;
            }
            puVar1->SetRightNode(this_01);
            pAVar12 = (Array*)local_3090._16_8_;
            pMVar2 = local_3078;
        joined_r0x000100953d19:
            local_3090._16_8_ = pAVar12;
            local_3078 = pMVar2;
            if ((char)local_306c == '\0') {
                (**(code**)(**(long**)(field_488 + 152) + 16))(*(long**)(field_488 + 152), pAVar12, pMVar2);
                (**(code**)(**(long**)(field_488 + 160) + 16))(*(long**)(field_488 + 160), pAVar12, pMVar2);
                goto LAB_100953d78;
            }
        } else {
            puVar1 = field_336;
            puVar1->SetDrawDebugSkeleton((bool)AnimationState::m_drawDebugSkeleton);
            *(undefined1**)(field_488 + 160) = puVar1;
            puVar1->SetAnimation(this_01);
            if ((char)local_306c == '\0') {
                new (local_3068) Array<JointPose, eastl::allocator>();
                local_3090->GetPose();
                uVar5 = local_3090->HeapBeginPtr();
                local_3068->set_max_size(uVar5, 1);
                pNVar6 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)(field_488 + 248));
                psVar7 = (shared_ptr<AnimKeyFrameSet>*)pNVar6->GetPixelBuffer();
                pRVar8 = (RT7Core*)shared_ptr<AnimKeyFrameSet>::operator->(psVar7);
                psVar9 = (shared_ptr<AnimBase>*)pRVar8->GetMSAASampleCount();
                pAVar10 = (AnimBase*)shared_ptr<AnimBase>::operator->(psVar9);
                pAVar11 = (AnimKeyFrameSet*)shared_ptr<AnimKeyFrameSet>::operator->(psVar7);
                uVar4 = pAVar11->GetBindID();
                pAVar10->GetBindPose(uVar4);
                WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(
                    (WrapArray<unsigned char const>*)(local_30e0 + 48), (Array*)local_3068);
                GetJointPosesFromJoints();
                WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(
                    (WrapArray<unsigned char const>*)(local_30e0 + 64), (Array*)local_3068);
                puVar1->SetMergeJoints(local_30e0 + 64, 1);
                this_01 = (AnimationInfo*)field_8;
                puVar1->SetWalkMergeDataProvider(this_01);
                local_3068->~Array();
                pAVar12 = (Array*)local_3090._16_8_;
                pMVar2 = local_3078;
                goto joined_r0x000100953d19;
            }
        }
        pMVar2 = local_3078;
        (field_32, (Array*)this_01, local_3078)->Update();
        puVar1 = field_336;
        local_30e0->GetPose();
        puVar1->SetMergeJoints(local_30e0, 1);
        pAVar12 = (Array*)field_8;
        puVar1->SetWalkMergeDataProvider(pAVar12);
        puVar1->Update(pAVar12, pMVar2);
    LAB_100953d78:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100953df0, 384 bytes, placed by class name
    // WalkMergeAnimationSampler::GetJointPosesFromJoints(Array<Joint, eastl::allocator> const&, WrapArray<JointPose>) const
    void WalkMergeAnimationSampler::GetJointPosesFromJoints(undefined8 param_1_00, float param_2, undefined8 param_3,
                                                            Array<Joint, eastl::allocator>* param_1, Layout* param_5) {
        bool bVar1;
        long lVar2;
        Joint* pJVar3;
        Rect<float>* this;
        ulong uVar4;
        ulong uVar5;
        undefined8 uVar6;
        Vector4T<float> local_88[16];
        undefined8 local_78;
        undefined8 local_68;
        float local_60;
        undefined8 local_58;
        float local_50;
        QuaternionT<float> local_48[8];
        uint local_40;
        float local_3c;
        float local_34;

        lVar2 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(param_5);
        if (lVar2 != 0) {
            uVar4 = 0;
            uVar5 = 1;
            do {
                pJVar3 = (Joint*)Array<Joint, eastl::allocator>::operator[](param_1, uVar4);
                uVar6 = pJVar3->GetLocalBindRotate();
                local_34 = param_2;
                local_78 = uVar6;
                math::QuaternionT<float>::QuaternionT(local_48);
                local_48->FromYawPitchRoll(local_78._4_4_, (float)local_78, local_34);
                local_40 = local_40 ^ 2147483648;
                param_2 = -local_3c;
                local_3c = param_2;
                pJVar3 = (Joint*)Array<Joint, eastl::allocator>::operator[](param_1, uVar4);
                local_68 = pJVar3->GetLocalBindTranslate();
                param_2 = -param_2;
                local_60 = param_2;
                pJVar3 = (Joint*)Array<Joint, eastl::allocator>::operator[](param_1, uVar4);
                local_58 = pJVar3->GetLocalBindScale();
                local_50 = param_2;
                this = (Rect<float>*)WrapArray<JointPose>::operator[]((WrapArray<JointPose>*)param_5, uVar4);
                math::Rect<float>::operator=(this, (Rect*)local_48);
                math::Vector4T<float>::Vector4T(local_88, (Vector3T*)&local_68, 1.0);
                lVar2 = WrapArray<JointPose>::operator[]((WrapArray<JointPose>*)param_5, uVar4);
                math::Rect<float>::operator=((Rect<float>*)(lVar2 + 16), (Rect*)local_88);
                math::Vector4T<float>::Vector4T(local_88, (Vector3T*)&local_58, 1.0);
                lVar2 = WrapArray<JointPose>::operator[]((WrapArray<JointPose>*)param_5, uVar4);
                math::Rect<float>::operator=((Rect<float>*)(lVar2 + 32), (Rect*)local_88);
                uVar4 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(param_5);
                bVar1 = uVar5 < uVar4;
                uVar4 = uVar5;
                uVar5 = (ulong)((int)uVar5 + 1);
            } while (bVar1);
        }
    }

    // 0x100953ff0, 128 bytes, placed by class name
    // WalkMergeAnimationSampler::SetAnimations(AnimationInfo const&, AnimationInfo const&, shared_ptr<WalkMergeDataProvider>)
    void WalkMergeAnimationSampler::SetAnimations(AnimationInfo* param_1, AnimationInfo* param_2, shared_ptr param_3) {
        shared_ptr* in_RCX;

        if (!operator!=(in_RCX, (_func_decltype_nullptr*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("walkMergeDataProvider != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/WalkMergeAnimationSampler.cpp",
                      113, (char*)0);
        }
        AnimationInfo::operator=((AnimationInfo*)(field_488 + 168), param_1);
        AnimationInfo::operator=((AnimationInfo*)(field_488 + 216), param_2);
        shared_ptr<WalkMergeDataProvider>::operator=((shared_ptr<WalkMergeDataProvider>*)field_8, in_RCX);
    }

    // 0x100954070, 96 bytes, placed by class name
    // WalkMergeAnimationSampler::GetRT5BoneTransforms(WrapArray<math::Matrix43T<float> >&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, math::Matrix44T<float> const&) const
    void WalkMergeAnimationSampler::GetRT5BoneTransforms(WrapArray* param_1, vector_map* param_2, vector_map* param_3,
                                                         Matrix44T* param_4) {
        (**(code**)(**(long**)(field_488 + 152) + 24))();
        (**(code**)(**(long**)(field_488 + 160) + 24))(*(long**)(field_488 + 160), param_1, param_2, param_3, param_4);
    }

    // 0x1009540d0, 80 bytes, placed by class name
    // WalkMergeAnimationSampler::GetLabelData(WrapArray<float>&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, AnimationLabelType) const
    void WalkMergeAnimationSampler::GetLabelData(undefined8 param_1, undefined8 param_2, undefined4 param_4) {
        (**(code**)(**(long**)(field_488 + 152) + 40))();
        (**(code**)(**(long**)(field_488 + 160) + 40))(*(long**)(field_488 + 160), param_1, param_2, param_4);
    }

} // namespace jag::graphics
