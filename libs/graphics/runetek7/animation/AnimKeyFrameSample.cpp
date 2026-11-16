// libs/graphics/runetek7/animation/AnimKeyFrameSample.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "AnimKeyFrameSample.h"

namespace jag::graphics {
    // 0x1002f0710: the linker folded this into oldscape::dash3d::ModelRSevenCommon::IsDynamic() const, which has identical code
    AnimKeyFrameSample::HasSampleData() const;

    // 0x100982fa0, 96 bytes, base-object constructor, placed by class name and debug map
    // AnimKeyFrameSample::AnimKeyFrameSample()
    void AnimKeyFrameSample::AnimKeyFrameSample() {
        new (this) MakeSharedPool<AnimKeyFrameSample, 8192>();
        new (this) Array<JointPose, eastl::allocator>();
        new (&field_24) Array<float, eastl::allocator>();
        new (&field_48) Array<float, eastl::allocator>();
        field_72 = 0;
    }

    // 0x100983080, 16 bytes, complete-object constructor, placed by class name and debug map
    // AnimKeyFrameSample::AnimKeyFrameSample(): jumps straight to the base-object constructor

    // 0x100983090, 48 bytes, base-object destructor, placed by class name and debug map
    // AnimKeyFrameSample::~AnimKeyFrameSample()
    void AnimKeyFrameSample::~AnimKeyFrameSample() {
        (&field_48)->~Array();
        (&field_24)->~Array();
        ~Array();
    }

    // 0x1009830c0, 16 bytes, complete-object destructor, placed by class name and debug map
    // AnimKeyFrameSample::~AnimKeyFrameSample(): jumps straight to the base-object destructor

    // 0x1009830d0, 320 bytes, placed by class name and debug map
    // AnimKeyFrameSample::SampleKeyFrameSet(AnimKeyFrameSet const*, float, AnimCurveSegmentCacheBase&, AnimCurveSegmentCacheBase&)
    void AnimKeyFrameSample::SampleKeyFrameSet(AnimKeyFrameSet* param_1, float param_2,
                                               AnimCurveSegmentCacheBase* param_3, AnimCurveSegmentCacheBase* param_4) {
        uchar uVar1;
        ushort uVar2;
        shared_ptr<AnimBase>* psVar3;
        AnimBase* pAVar4;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        ulong uVar5;
        WrapArray<unsigned char const> local_70[16];
        WrapArray<unsigned char const> local_60[16];
        WrapArray<unsigned char const> local_50[16];
        AnimKeyFrameSet* local_34;

        local_34._0_4_ = (AnimKeyFrameSet*)param_2;
        psVar3 = (shared_ptr<AnimBase>*)param_1->GetMSAASampleCount();
        pAVar4 = (AnimBase*)shared_ptr<AnimBase>::operator->(psVar3);
        uVar1 = param_1->GetBindID();
        this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pAVar4->GetBindPose(uVar1);
        uVar5 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        set_max_size(uVar5, 1);
        WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(local_70, (Array*)this);
        local_34._0_4_->GetJointPosesFromKeyFrameData(param_1, local_70, param_3);
        psVar3 = (shared_ptr<AnimBase>*)param_1->GetMSAASampleCount();
        pAVar4 = (AnimBase*)shared_ptr<AnimBase>::operator->(psVar3);
        uVar2 = pAVar4->GetMaxLabelID();
        (&field_24, (ulong)uVar2 * 4 + 4, 1)->set_max_size();
        psVar3 = (shared_ptr<AnimBase>*)param_1->GetMSAASampleCount();
        pAVar4 = (AnimBase*)shared_ptr<AnimBase>::operator->(psVar3);
        uVar2 = pAVar4->GetMaxLabelID();
        (&field_48, (ulong)uVar2 * 8 + 8, 1)->set_max_size();
        WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(local_60, (Array*)&field_24);
        WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(local_50, (Array*)&field_48);
        local_34._0_4_->GetLabelDeltasAndBillboardTransforms(param_1, local_60, local_50, param_4);
        field_72 = 1;
    }

    // 0x100983b80, 16 bytes, placed by class name
    // AnimKeyFrameSample::Reset()
    void AnimKeyFrameSample::Reset() {
        field_72 = 0;
    }

} // namespace jag::graphics
