// libs/graphics/runetek7/animation/AnimKeyFrameSample.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "AnimKeyFrameSample.h"

namespace jag::graphics {
    // 0x1002f0710: AnimKeyFrameSample::HasSampleData() const has the same machine code as oldscape::dash3d::ModelRSevenCommon::IsDynamic() const

    // 0x100982fa0
    AnimKeyFrameSample::AnimKeyFrameSample()
        : MakeSharedPool<AnimKeyFrameSample, 8192>(), Array<JointPose>(), m_hasSampleData(0) {}

    // 0x100983090
    AnimKeyFrameSample::~AnimKeyFrameSample() {
        field_48.~Array();
        field_24.~Array();
    }

    // 0x1009830d0
    void AnimKeyFrameSample::SampleKeyFrameSet(const AnimKeyFrameSet* animKeyFrameSet, float arg2,
                                               AnimCurveSegmentCacheBase& animCurveSegmentCacheBase1,
                                               AnimCurveSegmentCacheBase& animCurveSegmentCacheBase2) {
        WrapArray<unsigned char const> local_70;
        WrapArray<unsigned char const> local_60;
        WrapArray<unsigned char const> local_50;

        auto psVar2 = animKeyFrameSet->GetMSAASampleCount();
        AnimBase* pAVar3 = (AnimBase*)(*psVar2).operator->();
        set_max_size(pAVar3->GetBindPose(animKeyFrameSet->GetBindID())->end(), 1);
        local_70.WrapArray<Array<unsigned char>>(*this);
        animKeyFrameSet->GetJointPosesFromKeyFrameData(&local_70, arg2, animCurveSegmentCacheBase1);
        psVar2 = (shared_ptr<AnimBase>*)animKeyFrameSet->GetMSAASampleCount();
        pAVar3 = (AnimBase*)(*psVar2).operator->();
        unsigned short uVar1 = pAVar3->GetMaxLabelID();
        field_24.set_max_size((unsigned long)uVar1 * 4 + 4, 1);
        psVar2 = (shared_ptr<AnimBase>*)animKeyFrameSet->GetMSAASampleCount();
        pAVar3 = (AnimBase*)(*psVar2).operator->();
        uVar1 = pAVar3->GetMaxLabelID();
        field_48.set_max_size((unsigned long)uVar1 * 8 + 8, 1);
        local_60.WrapArray<Array<unsigned char>>(field_24);
        local_50.WrapArray<Array<unsigned char>>(field_48);
        animKeyFrameSet->GetLabelDeltasAndBillboardTransforms(&local_60, &local_50, arg2, animCurveSegmentCacheBase2);
        m_hasSampleData = 1;
    }

    // 0x100983b80
    void AnimKeyFrameSample::Reset() {
        m_hasSampleData = 0;
    }

} // namespace jag::graphics
