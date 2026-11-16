// libs/graphics/runetek7/animation/RealtimePoseAnimationSampler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "RealtimePoseAnimationSampler.h"

namespace jag::graphics {
    // 0x100951570
    RealtimePoseAnimationSampler::RealtimePoseAnimationSampler() : AnimationSampler() {
        new ((field_80 + 80)) AnimCurveSegmentCache<eastl::allocator>();
        new (&field_224) AnimCurveSegmentCache<eastl::allocator>();
        m_drawDebugSkeleton = false;
    }

    // 0x100951640
    unsigned long
    RealtimePoseAnimationSampler::GetFrameFromTimeAnimKeyFrameSet(float& arg1, unsigned long long arg2,
                                                                  const shared_ptr<Animation>& animation, int arg4,
                                                                  AnimationLoopBehaviour animationLoopBehaviour) {
        int iVar3;
        float local_38;

        auto pAVar4 = animation.operator->();
        unsigned long uVar5 = pAVar4->GetAnimationSampleIntervalNS();
        _local_38 = (((uint64_t)(float)arg2 << 32) | (uint32_t)((float)arg2 / (float)uVar5));
        arg1 = (float)modf((float)arg2 / (float)uVar5, &local_38);
        uVar5 = (unsigned long)local_38;
        pAVar4 = (Animation*)animation.operator->();
        unsigned int uVar1 = pAVar4->GetFrameCount();
        unsigned int uVar2 = (unsigned int)uVar5;
        if ((animationLoopBehaviour == 2) || (arg4 == -1)) {
            if (uVar1 <= uVar2) {
                arg1 = 1.0;
                pAVar4 = (Animation*)animation.operator->();
                iVar3 = pAVar4->GetFrameCount();
                uVar5 = (unsigned long)(iVar3 - 1);
            }
        } else {
            uVar1 = uVar1 - arg4;
            if (uVar1 <= uVar2) {
                uVar1 = (uVar2 - uVar1) % (unsigned int)arg4 + uVar1;
                uVar5 = (unsigned long)uVar1;
                pAVar4 = (Animation*)animation.operator->();
                uVar2 = pAVar4->GetFrameCount();
                if (uVar2 <= uVar1) {
                    LogAssert("loopAmount + loopStart < animation.GetFrameCount()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/RealtimePoseAnimationSampler.cpp",
                              48, nullptr);
                }
            }
        }
        return uVar5 & 4294967295;
    }

    // 0x100951780
    void RealtimePoseAnimationSampler::EnsureCachesReady() {
        fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true>* this_02;
        vector<eastl::vector<AnimCurve>>* pvVar1;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_03;

        auto this_00 = field_64.operator->();
        auto this_01 = this_00->GetPixelBuffer();
        if (!(((field_80 + 80))->IsValid())) {
            this_02 = (fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true>*)(*this_01).operator->();
            pvVar1 = (vector<eastl::vector<AnimCurve>>*)this_02->get_overflow_allocator();
            ((field_80 + 80))->AllocateCache(*pvVar1);
        }
        if (!(field_224.IsValid())) {
            this_03 =
                (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)(*this_01).operator->();
            pvVar1 = (vector<eastl::vector<AnimCurve>>*)this_03->second();
            field_224.AllocateCache(*pvVar1);
        }
    }

    // 0x100951810
    void RealtimePoseAnimationSampler::Update(const Array<LabelData>& labelDatas,
                                              const math::Matrix44T<float>& matrix44) {
        unsigned char arg2;
        unsigned int uVar2;
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        Animation* arg2_00;
        AnimKeyFrameSet* pAVar3;
        RT7Core* this_01;
        shared_ptr<AnimBase>* animBase;
        RealtimePoseAnimationSampler* this_02;
        Vector3T<float>* vector31;
        Vector3T<float>* vector32;
        WrapArray<unsigned char const> local_80;
        ReturnValue local_70;
        ColourHSL local_58;
        ColourHSL local_48;
        float local_38;
        float local_34;

        auto this_00 = field_64.operator->();
        midiPlayerMainThread = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)this_00->GetPixelBuffer();
        if (*midiPlayerMainThread != nullptr) {
            EnsureCachesReady();
            this_02 = (RealtimePoseAnimationSampler*)field_32;
            arg2_00 = AnimationManager::GetTimeElapsedSinceNS((unsigned long long)this_02);
            vector31 = (Vector3T<float>*)(unsigned long)field_48;
            vector32 = (Vector3T<float>*)(unsigned long)field_52;
            uVar2 = GetFrameFromTimeAnimKeyFrameSet(this_02, &local_38, (unsigned long long)arg2_00,
                                                    (shared_ptr<Animation>*)&field_64, field_48, field_52);
            local_34 = (float)uVar2 + local_38;
            pAVar3 = (AnimKeyFrameSet*)midiPlayerMainThread->end();
            field_80->SampleKeyFrameSet(pAVar3, local_34, *((field_80 + 80)), field_224);
            field_24 = 1;
            if ((AnimationState::m_drawDebugSkeleton != '\0') && (m_drawDebugSkeleton != false)) {
                if (AnimationStateProvider::m_useAsyncAnimUpdate != '\0') {
                    LogAssert("!AnimationState::m_useAsyncAnimUpdate",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/RealtimePoseAnimationSampler.cpp",
                              111, nullptr);
                }
                this_01 = (RT7Core*)(*midiPlayerMainThread).operator->();
                animBase = (shared_ptr<AnimBase>*)this_01->GetMSAASampleCount();
                pAVar3 = (AnimKeyFrameSet*)(*midiPlayerMainThread).operator->();
                arg2 = pAVar3->GetBindID();
                local_70 = field_80->GetPose();
                local_80.WrapArray<Array<unsigned char>>(local_70);
                local_58 = math::ColourHSL(0.9, 0.0, 0.9);
                local_48 = math::ColourHSL(1.0, 0.1, 1.0);
                pose::DebugDrawSkeleton(*animBase, arg2, local_80, matrix44, vector31, vector32);
            }
        }
    }

    // 0x100951a00
    void RealtimePoseAnimationSampler::GetRT5BoneTransforms(
        WrapArray<math::Matrix43T<float>>& wrapArray, const eastl::vector_map<unsigned short, unsigned short>& arg2,
        const eastl::vector_map<unsigned short, unsigned short>& arg3, const math::Matrix44T<float>& matrix44) const {
        short sVar1;
        short* psVar5;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_06;
        Matrix44T local_1168;
        ReturnValue local_1128;
        WrapArray<math::Matrix44T<float>> local_10e8;
        unsigned long local_1090;

        auto this_00 = field_64.operator->();
        auto this_01 = this_00->GetPixelBuffer();
        RT7Core* pRVar2 = (RT7Core*)(*this_01).operator->();
        auto psVar3 = pRVar2->GetMSAASampleCount();
        Array<Joint>* local_1070 =
            ((AnimBase*)(*psVar3).operator->())->GetBindPose(((AnimKeyFrameSet*)(*this_01).operator->())->GetBindID());
        pRVar2 = (RT7Core*)(*this_01).operator->();
        psVar3 = (shared_ptr<AnimBase>*)pRVar2->GetMSAASampleCount();
        SceneManager* this_04 = (SceneManager*)(*psVar3).operator->();
        auto local_1088 = this_04->GetEntityHighlightGlobalState();
        auto local_10d8 = field_80->GetPose();
        unsigned long arg1_00 = local_10d8.end();
        fixed_vector<math::Matrix44T<float>, 64ul> local_1068(arg1_00);
        local_10e8.WrapArray<eastl::fixed_vector<math::Matrix44T<float>, 64ul>>(local_1068);
        local_10d8 = field_80->GetPose();
        local_1168.WrapArray<Array<unsigned char>>(local_10d8);
        local_1128.WrapArray<Array<unsigned char>>(*local_1070);
        pose::ConvertToMatrices(&local_10e8, local_1168, local_1128);
        auto puVar4 = arg2.HeapBeginPtr();
        auto local_1078 = arg2.end();
        if (puVar4 != local_1078) {
            do {
                local_10d8[0]._0_2_ = *puVar4;
                local_1090 = (unsigned long)(unsigned short)puVar4[1];
                psVar5 = (short*)(*local_1088)[local_10d8];
                sVar1 = *psVar5;
                local_1128 = ((Joint*)(*local_1070)[(long)sVar1])->GetWorldBindInverse();
                local_1168* local_1128;
                local_1068[(long)sVar1];
                local_10d8* local_1168;
                math::Matrix44T::operator_cast_to_Matrix43T(&local_1168);
                this_06 = &wrapArray[local_1090];
                *this_06 = local_1168;
                puVar4 = puVar4 + 2;
            } while (puVar4 != local_1078);
        }
    }

    // 0x100951cb0
    void RealtimePoseAnimationSampler::GetLabelData(WrapArray<float>& wrapArray,
                                                    const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                                    AnimationLabelType animationLabelType) const {
        unsigned short uVar1;
        float* pfVar6;
        long lVar7;
        long lVar8;
        float* pfVar9;
        unsigned short* puVar10;
        float* arg3;
        unsigned long uVar11;
        ReturnValue* pRVar12;
        uint8_t* this_03;
        ReturnValue local_68;
        unsigned short* local_50;
        unsigned long local_48;

        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02 =
            (vector<oldscape::dash3d::EntityHighlight*,
                    BucketAllocatorEASTL>*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM;
        if (animationLabelType == 0) {
            this_02 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)PTR_IDENTITY_DELTA_100ee69f8;
        }
        ReturnValue* local_40 = (ReturnValue*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORMS;
        if (animationLabelType == 0) {
            local_40 = (ReturnValue*)PTR_IDENTITY_LABELDELTAS_100ee6a00;
        }
        unsigned int uVar4 = this_02->end();
        auto this_01 = field_64.operator->();
        auto objType = this_01->GetPixelBuffer();
        if (!*objType == nullptr) {
            this_03 = field_80;
            if (this_03->OverrideTransform() != '\0') {
                if (animationLabelType == 0) {
                    local_68 = this_03->GetLabelDeltas();
                } else {
                    local_68 = this_03->GetBillboardTransforms();
                }
                pfVar6 = (float*)this_02->data();
                lVar7 = this_02->data();
                lVar8 = this_02->end();
                pfVar9 = (float*)wrapArray.end();
                std::copy<float const*, float*>(pfVar6, (lVar7 + lVar8 * 4), pfVar9);
                puVar10 = (unsigned short*)arg2.HeapBeginPtr();
                local_50 = (unsigned short*)arg2.end();
                if (puVar10 != local_50) {
                    local_48 = (unsigned long)uVar4;
                    do {
                        uVar1 = *puVar10;
                        if (puVar10[1] * uVar4 == 0) {
                            LogAssert(
                                "dstBlock != 0",
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/animation/RealtimePoseAnimationSampler.cpp",
                                172, "AnimationState: Label data requested with a label slot of 0 - this is reserved!");
                        }
                        uVar11 = local_68.end();
                        pRVar12 = &local_68;
                        if (uVar11 <= uVar1 * uVar4) {
                            pRVar12 = local_40;
                        }
                        pfVar9 = (float*)pRVar12->data();
                        pfVar6 = pfVar9 + local_48;
                        arg3 = (float*)wrapArray.end();
                        std::copy<float const*, float*>(pfVar9, pfVar6, arg3);
                        puVar10 = puVar10 + 2;
                    } while (puVar10 != local_50);
                }
                return;
            }
        }
        uVar11 = local_40->end();
        unsigned long uVar5 = wrapArray.HeapBeginPtr();
        pRVar12 = local_40;
        if (uVar11 < uVar5) {
            LogAssert("identityList.size() >= concatenatedArrayOut.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/RealtimePoseAnimationSampler.cpp",
                      157, nullptr);
        }
        pfVar6 = (float*)local_40->data();
        lVar7 = pRVar12->data();
        lVar8 = wrapArray.HeapBeginPtr();
        pfVar9 = (float*)wrapArray.end();
        std::copy<float const*, float*>(pfVar6, (lVar7 + lVar8 * 4), pfVar9);
    }

    // 0x100951f90
    void RealtimePoseAnimationSampler::ApplyBoneTransforms(
        math::Vector3T<float>& vector3, const eastl::vector_map<unsigned short, unsigned short>& arg2,
        const eastl::vector_map<unsigned short, unsigned short>& arg3, const math::Matrix44T<float>& matrix44) const {
        uint8_t local_138[64];
        uint64_t local_78[9];

        long lVar2 = arg2.size();
        if (lVar2 != 1) {
            lVar2 = arg3.size();
            if (lVar2 != 1) {
                LogAssert("boneMap.size() == 1 || jointMap.size() == 1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/RealtimePoseAnimationSampler.cpp",
                          182, nullptr);
            }
        }
        auto this_00 = field_64.operator->();
        auto this_01 = this_00->GetPixelBuffer();
        RT7Core* pRVar3 = (RT7Core*)(*this_01).operator->();
        auto psVar4 = pRVar3->GetMSAASampleCount();
        Array<Joint>* joints =
            ((AnimBase*)(*psVar4).operator->())->GetBindPose(((AnimKeyFrameSet*)(*this_01).operator->())->GetBindID());
        pRVar3 = (RT7Core*)(*this_01).operator->();
        psVar4 = (shared_ptr<AnimBase>*)pRVar3->GetMSAASampleCount();
        Location* this_04 = (Location*)(*psVar4).operator->();
        Array<unsigned short>* this_05 = (Array<unsigned short>*)this_04->GetParentLocationType();
        auto puVar5 = arg2.HeapBeginPtr();
        puVar5 = (unsigned short*)(*this_05)[(unsigned long)*puVar5];
        unsigned short uVar1 = *puVar5;
        auto local_b8 = field_80->GetPose();
        local_78->WrapArray<Array<unsigned char>>(local_b8);
        local_f8.WrapArray<Array<unsigned char>>(*joints);
        pose::ConvertToMatrix((int)local_138, *((WrapArray<JointPose const>*)(unsigned long)uVar1), *local_78);
        auto local_f8 = ((Joint*)(*joints)[(unsigned long)uVar1])->GetWorldBindInverse();
        *local_78* local_f8;
        local_b8** local_78;
        local_78[0] = vector3 * local_b8;
        vector3.SetXYZ(*local_78);
    }

    // 0x100952160
    void RealtimePoseAnimationSampler::SetAnimation(const AnimationInfo& animationInfo) {
        if (field_64 != animationInfo.field_32) {
            ((field_80 + 80))->Reset();
            field_224.Reset();
            field_80->Reset();
        }
        field_32 = animationInfo;
    }

    // 0x1009521c0
    void RealtimePoseAnimationSampler::Reset() {
        Reset();
        ((field_80 + 80))->Reset();
        field_224.Reset();
        field_80->Reset();
    }

} // namespace jag::graphics

// 0x100951770
void modf(float arg1, float* arg2) {
    _modff();
}
