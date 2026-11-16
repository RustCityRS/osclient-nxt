// libs/graphics/runetek7/animation/WalkMergeAnimationSampler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "WalkMergeAnimationSampler.h"

namespace jag::graphics {
    // 0x100953860
    WalkMergeAnimationSampler::WalkMergeAnimationSampler() : AnimationSampler() {
        *(uint64_t*)(field_488 + 152) = 0;
        *(uint64_t*)(field_488 + 160) = 0;
        new ((field_488 + 168)) AnimationInfo();
        new ((field_488 + 216)) AnimationInfo();
    }

    // 0x100953960
    void WalkMergeAnimationSampler::Update(const Array<LabelData>& labelDatas, const math::Matrix44T<float>& matrix44) {
        uint8_t* puVar1;
        Matrix44T<float>* pMVar2;
        unsigned char uVar4;
        unsigned long uVar5;
        NXTRenderCanvas* pNVar6;
        shared_ptr<AnimKeyFrameSet>* psVar7;
        RT7Core* pRVar8;
        shared_ptr<AnimBase>* psVar9;
        AnimBase* pAVar10;
        AnimKeyFrameSet* pAVar11;
        Array<Joint>* pAVar12;
        Array<LabelData>* pAVar13;
        WalkMergeAnimationSampler* pWVar14;
        WrapArray<JointPose> local_30d0;
        WrapArray<JointPose> local_30c0;
        WrapArray<JointPose> local_30b0;
        WrapArray<unsigned char const> local_30a0;
        ReturnValue local_3090;
        uint32_t local_306c;
        fixed_vector<JointPose, 256ul> local_3068;

        AnimationInfo* this_00 = (AnimationInfo*)(field_488 + 168);
        Array<LabelData>* local_3080 = labelDatas;
        Matrix44T<float>* local_3078 = matrix44;
        if (!(this_00->HasAnimKeyFrameSet())) {
            local_306c = 0;
        } else {
            local_306c = ((field_488 + 216))->HasAnimKeyFrameSet();
        }
        if (!(this_00->HasAnimKeyFrameSet())) {
            puVar1 = &field_184;
            *(uint8_t**)(field_488 + 152) = puVar1;
            puVar1->SetAnimation(*this_00);
            puVar1->SetOverrideAnimationInfo((field_488 + 216));
            puVar1->SetDrawDebugSkeleton(true);
            puVar1->SetWalkMergeDataProvider(field_8);
            puVar1->SetRightNode(nullptr);
        } else {
            puVar1 = field_32;
            puVar1->SetDrawDebugSkeleton((bool)AnimationState::m_drawDebugSkeleton);
            *(uint8_t**)(field_488 + 152) = puVar1;
            puVar1->SetAnimation(*this_00);
            if ((char)local_306c == '\0') {
                local_3090 = puVar1->GetPose();
                uVar5 = local_3090.HeapBeginPtr();
                local_3068 = eastl::fixed_vector<JointPose, 256ul>(uVar5);
                pNVar6 = (NXTRenderCanvas*)(*((field_488 + 200))).operator->();
                psVar7 = (shared_ptr<AnimKeyFrameSet>*)pNVar6->GetPixelBuffer();
                pRVar8 = (RT7Core*)(*psVar7).operator->();
                psVar9 = (shared_ptr<AnimBase>*)pRVar8->GetMSAASampleCount();
                pAVar10 = (AnimBase*)(*psVar9).operator->();
                pAVar11 = (AnimKeyFrameSet*)(*psVar7).operator->();
                uVar4 = pAVar11->GetBindID();
                pAVar12 = pAVar10->GetBindPose(uVar4);
                pWVar14 = &local_30d0;
                pWVar14->WrapArray<eastl::fixed_vector<JointPose, 64ul>>(local_3068);
                GetJointPosesFromJoints(pWVar14, pAVar12, &local_30d0);
                local_30c0.WrapArray<eastl::fixed_vector<JointPose, 64ul>>(local_3068);
                puVar1->SetMergeJoints(&local_30c0, false);
                puVar1->SetWalkMergeDataProvider(field_8);
            }
        }
        AnimationInfo* this_01 = (AnimationInfo*)(field_488 + 216);
        if (!(this_01->HasAnimKeyFrameSet())) {
            puVar1 = field_488;
            *(uint8_t**)(field_488 + 160) = puVar1;
            puVar1->SetAnimation(*this_01);
            puVar1->SetOverrideAnimationInfo(this_01);
            puVar1->SetDrawDebugSkeleton(false);
            puVar1->SetWalkMergeDataProvider(field_8);
            if (!(this_00->HasAnimKeyFrameSet())) {
                this_01 = (AnimationInfo*)field_184.GetDefaultValue();
            } else {
                this_01 = nullptr;
            }
            puVar1->SetRightNode(this_01);
            pAVar13 = local_3080;
            pMVar2 = local_3078;
        joined_r0x000100953d19:
            local_3080 = pAVar13;
            local_3078 = pMVar2;
            if ((char)local_306c == '\0') {
                (**(void (**)(...))(**(long**)(field_488 + 152) + 16))(*(long**)(field_488 + 152), pAVar13, pMVar2);
                (**(void (**)(...))(**(long**)(field_488 + 160) + 16))(*(long**)(field_488 + 160), pAVar13, pMVar2);
                goto LAB_100953d78;
            }
        } else {
            puVar1 = field_336;
            puVar1->SetDrawDebugSkeleton((bool)AnimationState::m_drawDebugSkeleton);
            *(uint8_t**)(field_488 + 160) = puVar1;
            puVar1->SetAnimation(*this_01);
            if ((char)local_306c == '\0') {
                local_3068 = Array<JointPose>();
                local_3090 = puVar1->GetPose();
                uVar5 = local_3090.HeapBeginPtr();
                local_3068.set_max_size(uVar5, 1);
                pNVar6 = (NXTRenderCanvas*)(*((field_488 + 248))).operator->();
                psVar7 = (shared_ptr<AnimKeyFrameSet>*)pNVar6->GetPixelBuffer();
                pRVar8 = (RT7Core*)(*psVar7).operator->();
                psVar9 = (shared_ptr<AnimBase>*)pRVar8->GetMSAASampleCount();
                pAVar10 = (AnimBase*)(*psVar9).operator->();
                pAVar11 = (AnimKeyFrameSet*)(*psVar7).operator->();
                uVar4 = pAVar11->GetBindID();
                pAVar12 = pAVar10->GetBindPose(uVar4);
                pWVar14 = &local_30b0;
                pWVar14->WrapArray<Array<unsigned char>>(local_3068);
                GetJointPosesFromJoints(pWVar14, pAVar12, &local_30b0);
                local_30a0.WrapArray<Array<unsigned char>>(local_3068);
                puVar1->SetMergeJoints(&local_30a0, true);
                this_01 = (AnimationInfo*)&field_8;
                puVar1->SetWalkMergeDataProvider(*this_01);
                pAVar13 = local_3080;
                pMVar2 = local_3078;
                goto joined_r0x000100953d19;
            }
        }
        pMVar2 = local_3078;
        field_32->Update(*this_01, *local_3078);
        puVar1 = field_336;
        auto local_30e0 = field_32->GetPose();
        puVar1->SetMergeJoints(&local_30e0, true);
        pAVar13 = (Array<LabelData>*)&field_8;
        puVar1->SetWalkMergeDataProvider(*pAVar13);
        puVar1->Update(*pAVar13, *pMVar2);
    LAB_100953d78:
    }

    // 0x100953df0
    void WalkMergeAnimationSampler::GetJointPosesFromJoints(const Array<Joint>& joints,
                                                            WrapArray<JointPose> wrapArray) const {
        bool bVar1;
        Joint* pJVar3;
        Rect<float>* this_00;
        unsigned long uVar4;
        unsigned long uVar5;
        uint64_t uVar6;
        float in_XMM1_Da;
        Vector4T<float> local_88;
        uint64_t local_78;
        uint64_t local_68;
        float local_60;
        uint64_t local_58;
        float local_50;
        QuaternionT<float> local_48;
        unsigned int local_40;
        float local_3c;
        float local_34;

        long lVar2 = wrapArray->HeapBeginPtr();
        if (lVar2 != 0) {
            uVar4 = 0;
            uVar5 = 1;
            do {
                pJVar3 = &joints[uVar4];
                uVar6 = pJVar3->GetLocalBindRotate();
                local_34 = in_XMM1_Da;
                local_78 = uVar6;
                local_48 = math::QuaternionT<float>();
                local_48.FromYawPitchRoll(local_78._4_4_, (float)local_78, local_34);
                local_40 = local_40 ^ 2147483648;
                in_XMM1_Da = -local_3c;
                local_3c = in_XMM1_Da;
                pJVar3 = &joints[uVar4];
                local_68 = pJVar3->GetLocalBindTranslate();
                in_XMM1_Da = -in_XMM1_Da;
                local_60 = in_XMM1_Da;
                pJVar3 = &joints[uVar4];
                local_58 = pJVar3->GetLocalBindScale();
                local_50 = in_XMM1_Da;
                this_00 = (Rect<float>*)(*wrapArray)[uVar4];
                *this_00 = local_48;
                local_88 = math::Vector4T(local_68, 1.0);
                lVar2 = (*wrapArray)[uVar4];
                (*((lVar2 + 16))) = local_88;
                local_88 = math::Vector4T(local_58, 1.0);
                lVar2 = (*wrapArray)[uVar4];
                (*((lVar2 + 32))) = local_88;
                uVar4 = wrapArray->HeapBeginPtr();
                bVar1 = uVar5 < uVar4;
                uVar4 = uVar5;
                uVar5 = (unsigned long)((int)uVar5 + 1);
            } while (bVar1);
        }
    }

    // 0x100953ff0
    void WalkMergeAnimationSampler::SetAnimations(const AnimationInfo& animationInfo1,
                                                  const AnimationInfo& animationInfo2,
                                                  shared_ptr<WalkMergeDataProvider> walkMergeDataProvider) {
        if (!*walkMergeDataProvider != nullptr) {
            LogAssert("walkMergeDataProvider != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/WalkMergeAnimationSampler.cpp",
                      113, nullptr);
        }
        (*((field_488 + 168))) = animationInfo1;
        (*((field_488 + 216))) = animationInfo2;
        field_8 = *walkMergeDataProvider;
    }

    // 0x100954070
    void WalkMergeAnimationSampler::GetRT5BoneTransforms(WrapArray<math::Matrix43T<float>>& wrapArray,
                                                         const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                                         const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                                         const math::Matrix44T<float>& matrix44) const {
        (**(void (**)(...))(**(long**)(field_488 + 152) + 24))();
        (**(void (**)(...))(**(long**)(field_488 + 160) + 24))(*(long**)(field_488 + 160), wrapArray, arg2, arg3,
                                                               matrix44);
    }

    // 0x1009540d0
    void WalkMergeAnimationSampler::GetLabelData(WrapArray<float>& wrapArray,
                                                 const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                                 AnimationLabelType animationLabelType) const {
        (**(void (**)(...))(**(long**)(field_488 + 152) + 40))();
        (**(void (**)(...))(**(long**)(field_488 + 160) + 40))(*(long**)(field_488 + 160), wrapArray, arg2,
                                                               animationLabelType);
    }

} // namespace jag::graphics
