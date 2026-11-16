// libs/graphics/runetek7/animation/SampledPoseAnimationSampler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "SampledPoseAnimationSampler.h"

namespace jag::graphics {
    // 0x100952200
    SampledPoseAnimationSampler::SampledPoseAnimationSampler()
        : AnimationSampler(), field_144(false), m_drawDebugSkeleton(false) {}

    // 0x1009522c0
    unsigned long SampledPoseAnimationSampler::GetCurrentFrame(const AnimationInfo& animationInfo, float arg2) const {
        unsigned int uVar1;
        int iVar5;

        unsigned long uVar7 = (unsigned long)arg2;
        bool cVar2 = animationInfo.IsLooping();
        uint8_t* this_00 = &animationInfo.field_32;
        Animation* pAVar6 = (Animation*)(*this_00).operator->();
        unsigned int uVar3 = pAVar6->GetFrameCount();
        unsigned int uVar4 = (unsigned int)uVar7;
        if (!cVar2) {
            if (uVar3 <= uVar4) {
                pAVar6 = (Animation*)(*this_00).operator->();
                iVar5 = pAVar6->GetFrameCount();
                uVar7 = (unsigned long)(iVar5 - 1);
            }
        } else {
            uVar1 = *(unsigned int*)((long)&animationInfo.field_10 + 6);
            uVar3 = uVar3 - uVar1;
            if (uVar3 <= uVar4) {
                uVar3 = (uVar4 - uVar3) % uVar1 + uVar3;
                uVar7 = (unsigned long)uVar3;
                pAVar6 = (Animation*)(*this_00).operator->();
                uVar4 = pAVar6->GetFrameCount();
                if (uVar4 <= uVar3) {
                    LogAssert("loopAmount + loopStart < animInfo.m_animation->GetFrameCount()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/SampledPoseAnimationSampler.cpp",
                              44, nullptr);
                }
            }
        }
        return uVar7 & 4294967295;
    }

    // 0x100952390
    unsigned long SampledPoseAnimationSampler::GetNextFrame(const AnimationInfo& animationInfo,
                                                            unsigned int arg2) const {
        int iVar2;
        unsigned int uVar3;

        auto pAVar4 = animationInfo.field_32.operator->();
        unsigned long uVar5 = pAVar4->GetKeyFrameSampleCount();
        bool cVar1 = animationInfo.IsLooping();
        unsigned long uVar6 = (unsigned long)(arg2 + 1);
        if (!cVar1) {
            if (uVar5 <= uVar6) {
                uVar3 = 0;
                if (*(int*)((long)&animationInfo.field_10 + 6) != -1) {
                    uVar3 = arg2;
                }
                uVar6 = (unsigned long)uVar3;
                if (animationInfo.field_25 == '\0') {
                    uVar6 = (unsigned long)arg2;
                }
            }
        } else if (uVar5 <= uVar6) {
            pAVar4 = (Animation*)animationInfo.field_32.operator->();
            iVar2 = pAVar4->GetFrameCount();
            uVar6 = (unsigned long)(unsigned int)(iVar2 - *(int*)((long)&animationInfo.field_10 + 6));
        }
        return uVar6;
    }

    // 0x100952430
    float SampledPoseAnimationSampler::GetFrameInterpolant(const AnimationInfo& animationInfo, float arg2) const {
        if (animationInfo.IsLooping() == '\0') {
            if (((Animation*)animationInfo.field_32.operator->())->GetFrameCount() <= (unsigned int)(long)arg2) {
                return 1.0;
            }
        }
        float fVar3 = (float)::floor(arg2);
        return arg2 - fVar3;
    }

    // 0x1009524b0
    uint64_t SampledPoseAnimationSampler::GetFrameInterpolationData(const AnimationInfo& animationInfo,
                                                                    unsigned long long arg2) const {
        unsigned int local_28;

        new (&local_28) math::Vector3T();
        float local_1c = (float)arg2;
        auto this_00 = animationInfo.field_32.operator->();
        unsigned long uVar1 = this_00->GetAnimationSampleIntervalNS();
        local_1c = local_1c / (float)uVar1;
        local_28 = GetCurrentFrame((SampledPoseAnimationSampler*)this_00, animationInfo, local_1c);
        uint32_t uStack_24 = GetNextFrame((SampledPoseAnimationSampler*)this_00, animationInfo, local_28);
        GetFrameInterpolant((SampledPoseAnimationSampler*)this_00, animationInfo, local_1c);
        return (((uint64_t)uStack_24 << 32) | (uint32_t)local_28);
    }

    // 0x100952570
    void SampledPoseAnimationSampler::CopyBoneMatricesToRT5VertexTransformData(
        const WrapArray<JointPose const>& wrapArray, const Array<Joint>& joints, const AnimKeyFrameSet& animKeyFrameSet,
        VertexTransformData& vertexTransformData) {
        unsigned short uVar1;
        unsigned int uVar2;
        shared_ptr<AnimBase>* psVar5;
        AnimBase* pAVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        unsigned short* puVar7;
        unsigned long uVar8;
        WrapArray<math::Matrix43T<float>>* this_03;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_04;
        ReturnValue local_1158;
        WrapArray<unsigned char const> local_1118;
        Matrix44T local_10d8;
        WrapArray<math::Matrix44T<float>> local_1098;
        unsigned long local_1070;

        unsigned long uVar3 = wrapArray.HeapBeginPtr();
        fixed_vector<math::Matrix44T<float>, 64ul> local_1068(uVar3);
        local_1098.WrapArray<eastl::fixed_vector<math::Matrix44T<float>, 64ul>>(local_1068);
        local_1118.WrapArray<Array<unsigned char>>(joints);
        pose::ConvertToMatrices(&local_1098, wrapArray, local_1118);
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_1088 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_80;
        long lVar4 = local_1088->end();
        if (lVar4 != 0) {
            local_1070 = 0;
            do {
                psVar5 = (shared_ptr<AnimBase>*)animKeyFrameSet.GetMSAASampleCount();
                pAVar6 = (AnimBase*)(*psVar5).operator->();
                uVar2 = pAVar6->GetOriginTransformIDByJointID((unsigned int)local_1070);
                psVar5 = (shared_ptr<AnimBase>*)animKeyFrameSet.GetMSAASampleCount();
                pAVar6 = (AnimBase*)(*psVar5).operator->();
                this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pAVar6->GetTransformLabels(
                    (uVar2 & 65535) + 1);
                local_1158 = ((Joint*)joints[local_1070])->GetWorldBindInverse();
                local_10d8* local_1158;
                local_1068[local_1070];
                local_1118* local_10d8;
                lVar4 = this_00->end();
                if (lVar4 != 0) {
                    uVar2 = 1;
                    uVar3 = 0;
                    do {
                        puVar7 = (unsigned short*)(*this_00)[uVar3];
                        uVar1 = *puVar7;
                        uVar8 = ((Layout*)vertexTransformData.SSOBeginPtr())->HeapBeginPtr();
                        if (uVar1 < uVar8) {
                            math::Matrix44T::operator_cast_to_Matrix43T(&local_10d8);
                            this_03 = (WrapArray<math::Matrix43T<float>>*)vertexTransformData.SSOBeginPtr();
                            puVar7 = (unsigned short*)(*this_00)[uVar3];
                            this_04 =
                                (ParticleVertexDataProxy<math::Vector3T<float>>*)(*this_03)[(unsigned long)*puVar7];
                            *this_04 = local_10d8;
                        }
                        uVar3 = (unsigned long)uVar2;
                        uVar8 = this_00->end();
                        uVar2 = uVar2 + 1;
                    } while (uVar3 < uVar8);
                }
                uVar8 = (unsigned long)((int)local_1070 + 1);
                uVar3 = local_1088->end();
                local_1070 = uVar8;
            } while (uVar8 < uVar3);
        }
    }

    // 0x100952800
    void SampledPoseAnimationSampler::UpdatePose(const Array<LabelData>& labelDatas,
                                                 const math::Matrix44T<float>& matrix44,
                                                 const AnimationInfo& animationInfo) {
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        Animation* pAVar2;
        unsigned long uVar3;
        AnimKeyFrameSample* pAVar4;
        long lVar5;
        long lVar6;
        SampledPoseAnimationSampler* this_01;
        float extraout_XMM0_Da;
        WrapArray<unsigned char const> local_90;
        WrapArray<unsigned char const> local_80;
        WrapArray<unsigned char const> local_70;
        ReturnValue local_60;
        ReturnValue local_48;
        float local_2c;

        uint8_t* puVar7 = &animationInfo.field_32;
        if (!(*puVar7 != nullptr)) {
            LogAssert("animInfo.m_animation != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/SampledPoseAnimationSampler.cpp",
                      158, nullptr);
        }
        NXTRenderCanvas* this_00 = (NXTRenderCanvas*)(*puVar7).operator->();
        midiPlayerMainThread = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)this_00->GetPixelBuffer();
        if (*midiPlayerMainThread != nullptr) {
            this_01 = (SampledPoseAnimationSampler*)animationInfo.field_0;
            pAVar2 = AnimationManager::GetTimeElapsedSinceNS((unsigned long long)this_01);
            uVar3 = GetFrameInterpolationData(this_01, animationInfo, (unsigned long long)pAVar2);
            local_2c = extraout_XMM0_Da;
            pAVar2 = (Animation*)(*puVar7).operator->();
            pAVar4 = pAVar2->GetKeyFrameSample(uVar3 & 4294967295);
            local_48 = pAVar4->GetPose();
            pAVar2 = (Animation*)(*puVar7).operator->();
            pAVar4 = pAVar2->GetKeyFrameSample(uVar3 >> 32);
            local_60 = pAVar4->GetPose();
            puVar7 = &field_80;
            uVar3 = local_48.end();
            puVar7->set_max_size(uVar3, 1);
            lVar5 = puVar7->end();
            lVar6 = local_48.end();
            if (lVar5 != lVar6) {
                LogAssert("m_latestPoses.size() == beforePose.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/SampledPoseAnimationSampler.cpp",
                          176, nullptr);
            }
            lVar5 = puVar7->end();
            lVar6 = local_60.end();
            if (lVar5 != lVar6) {
                LogAssert("m_latestPoses.size() == afterPose.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/SampledPoseAnimationSampler.cpp",
                          177, nullptr);
            }
            local_90.WrapArray<Array<unsigned char>>(*puVar7);
            local_80.WrapArray<Array<unsigned char>>(local_48);
            local_70.WrapArray<Array<unsigned char>>(local_60);
            pose::BlendJointPoses(&local_90, local_80, local_70, local_2c);
        }
    }

    // 0x100952a00
    void SampledPoseAnimationSampler::MergePose() {
        QuaternionT<float>* quaternion2;
        ReturnValue* quaternion;
        Rect<float>* this_02;
        unsigned long uVar5;
        float* pfVar6;
        unsigned int uVar7;
        unsigned long arg1;
        ReturnValue RVar8;
        float fVar9;
        ReturnValue local_68;
        float fStack_60;
        uint32_t uStack_5c;
        unsigned int local_38;
        float local_34;

        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_40 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_80;
        long lVar2 = local_40->end();
        WrapArray<JointPose>* local_58 = (WrapArray<JointPose>*)&field_128;
        SampledPoseAnimationSampler* local_48 = this;
        long lVar3 = local_58->HeapBeginPtr();
        if (lVar2 != lVar3) {
            LogAssert("m_latestPoses.size() == m_mergeJoints.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/SampledPoseAnimationSampler.cpp",
                      186, nullptr);
        }
        uint8_t* midiPlayerMainThread = &local_48->field_8;
        if (!*midiPlayerMainThread != nullptr) {
            LogAssert("m_walkMergeDataProvider != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/SampledPoseAnimationSampler.cpp",
                      187, nullptr);
        }
        long* plVar4 = (long*)(*midiPlayerMainThread).operator->();
        Array<float>* local_50 = (Array<float>*)(**(void (**)(...))(*plVar4 + 24))(plVar4);
        lVar2 = local_40->end();
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01 = local_40;
        WrapArray<JointPose>* this_00 = local_58;
        if (lVar2 != 0) {
            uVar7 = 1;
            arg1 = 0;
            do {
                pfVar6 = (float*)(*local_50)[arg1];
                fVar9 = *pfVar6;
                if (local_48->field_144 == false) {
                    local_34 = fVar9;
                } else {
                    local_34 = 1.0 - fVar9;
                }
                local_38 = uVar7;
                lVar2 = (*this_01)[arg1];
                lVar3 = (*this_00)[arg1];
                RVar8 =
                    (ReturnValue)math::Lerp<math::Vector4T<float>, float>(*((lVar2 + 16)), *((lVar3 + 16)), local_34);
                fStack_60 = fVar9;
                uStack_5c = 0;
                local_68 = RVar8;
                lVar2 = (*this_01)[arg1];
                (*((lVar2 + 16))) = local_68;
                quaternion2 = (QuaternionT<float>*)(*this_01)[arg1];
                (*this_00)[arg1];
                math::QuaternionLerpShortest<float>((QuaternionT<float>*)&local_68, quaternion2, local_34);
                quaternion = local_68 = math::QuaternionT<float>::Normalise();
                this_02 = (Rect<float>*)(*this_01)[arg1];
                *this_02 = *quaternion;
                lVar2 = (*this_01)[arg1];
                lVar3 = (*this_00)[arg1];
                RVar8 =
                    (ReturnValue)math::Lerp<math::Vector4T<float>, float>(*((lVar2 + 32)), *((lVar3 + 32)), local_34);
                fStack_60 = fVar9;
                uStack_5c = 0;
                local_68 = RVar8;
                lVar2 = (*this_01)[arg1];
                (*((lVar2 + 32))) = local_68;
                uVar7 = local_38;
                arg1 = (unsigned long)local_38;
                uVar5 = this_01->end();
                uVar7 = uVar7 + 1;
            } while (arg1 < uVar5);
        }
    }

    // 0x100952ca0
    void SampledPoseAnimationSampler::UpdateJointMatricesFromPose(const AnimationInfo& animationInfo) {
        Matrix44T<float>* this_07;
        unsigned long uVar3;
        unsigned int uVar4;
        ReturnValue local_1158;
        WrapArray<unsigned char const> local_1118;
        WrapArray<unsigned char const> local_10d8;
        WrapArray<math::Matrix44T<float>> local_1090;

        auto this_00 = animationInfo.field_32.operator->();
        auto this_01 = this_00->GetPixelBuffer();
        RT7Core* this_02 = (RT7Core*)(*this_01).operator->();
        auto this_03 = this_02->GetMSAASampleCount();
        Array<Joint>* local_1070 =
            ((AnimBase*)(*this_03).operator->())->GetBindPose(((AnimKeyFrameSet*)(*this_01).operator->())->GetBindID());
        uint8_t* this_08 = &field_80;
        unsigned long uVar1 = this_08->end();
        Array<math::Matrix44T<float>>* local_1080 = (Array<math::Matrix44T<float>>*)&field_104;
        field_104.set_max_size(uVar1, 1);
        uVar1 = this_08->end();
        fixed_vector<math::Matrix44T<float>, 64ul> local_1068(uVar1);
        local_1090.WrapArray<eastl::fixed_vector<math::Matrix44T<float>, 64ul>>(local_1068);
        local_1118.WrapArray<Array<unsigned char>>(*this_08);
        local_10d8.WrapArray<Array<unsigned char>>(*local_1070);
        pose::ConvertToMatrices(&local_1090, local_1118, local_10d8);
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_1078 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_08;
        if (this_08->end() != 0) {
            uVar4 = 1;
            uVar1 = 0;
            do {
                local_1158 = ((Joint*)(*local_1070)[uVar1])->GetWorldBindInverse();
                local_10d8* local_1158;
                local_1068[uVar1];
                local_1118* local_10d8;
                this_07 = (Matrix44T<float>*)(*local_1080)[uVar1];
                *this_07 = local_1118;
                uVar1 = (unsigned long)uVar4;
                uVar3 = local_1078->end();
                uVar4 = uVar4 + 1;
            } while (uVar1 < uVar3);
        }
    }

    // 0x100952eb0
    void SampledPoseAnimationSampler::Update(const Array<LabelData>& labelDatas,
                                             const math::Matrix44T<float>& matrix44) {
        unsigned char arg2;
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        long lVar2;
        long* plVar3;
        RT7Core* this_02;
        shared_ptr<AnimBase>* animBase;
        Matrix44T<float>* matrix44_00;
        Vector3T<float>* in_R8;
        Vector3T<float>* in_R9;
        WrapArray<unsigned char const> local_60;
        ColourHSL local_50;
        ColourHSL local_40;

        NXTRenderCanvas* this_00 = (NXTRenderCanvas*)(*((field_32 + 32))).operator->();
        midiPlayerMainThread = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)this_00->GetPixelBuffer();
        Array<LabelData>* labelDatas_00 = nullptr;
        if (*midiPlayerMainThread != nullptr) {
            UpdatePose(*labelDatas_00, *matrix44_00, *field_32);
            lVar2 = field_128.HeapBeginPtr();
            if (lVar2 != 0) {
                if (field_8 != nullptr) {
                    plVar3 = (long*)field_8.operator->();
                    lVar2 = ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(**(void (**)(...))(
                                 *plVar3 + 24))(plVar3))
                                ->end();
                    if (lVar2 != 0) {
                        MergePose();
                    }
                }
            }
            UpdateJointMatricesFromPose(*field_32);
            field_24 = 1;
            if ((AnimationState::m_drawDebugSkeleton != '\0') && (m_drawDebugSkeleton != false)) {
                if (AnimationStateProvider::m_useAsyncAnimUpdate != '\0') {
                    LogAssert("!AnimationStateProvider::m_useAsyncAnimUpdate",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/SampledPoseAnimationSampler.cpp",
                              253, nullptr);
                }
                this_02 = (RT7Core*)(*midiPlayerMainThread).operator->();
                animBase = (shared_ptr<AnimBase>*)this_02->GetMSAASampleCount();
                arg2 = ((AnimKeyFrameSet*)(*midiPlayerMainThread).operator->())->GetBindID();
                local_60.WrapArray<Array<unsigned char>>(field_80);
                local_50 = math::ColourHSL(0.9, 0.0, 0.9);
                local_40 = math::ColourHSL(1.0, 0.1, 1.0);
                pose::DebugDrawSkeleton(*animBase, arg2, local_60, matrix44, in_R8, in_R9);
            }
        }
    }

    // 0x100953040
    void SampledPoseAnimationSampler::GetRT5BoneTransforms(
        WrapArray<math::Matrix43T<float>>& wrapArray, const eastl::vector_map<unsigned short, unsigned short>& arg2,
        const eastl::vector_map<unsigned short, unsigned short>& arg3, const math::Matrix44T<float>& matrix44) const {
        unsigned short uVar1;
        short* psVar4;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_06;
        Matrix44T local_78;

        SampledPoseAnimationSampler* local_38 = this;
        NXTRenderCanvas* this_00 = (NXTRenderCanvas*)(*((field_32 + 32))).operator->();
        auto this_01 = this_00->GetPixelBuffer();
        RT7Core* this_02 = (RT7Core*)(*this_01).operator->();
        auto this_03 = this_02->GetMSAASampleCount();
        SceneManager* this_04 = (SceneManager*)(*this_03).operator->();
        auto this_05 = this_04->GetEntityHighlightGlobalState();
        auto puVar2 = arg3.HeapBeginPtr();
        auto puVar3 = arg3.end();
        if (puVar2 != puVar3) {
            local_38 = (SampledPoseAnimationSampler*)&local_38->field_104;
            do {
                local_78._0_2_ = *puVar2;
                uVar1 = puVar2[1];
                psVar4 = (short*)(*this_05)[local_78];
                (*local_38)[(long)*psVar4];
                math::Matrix44T::operator_cast_to_Matrix43T(&local_78);
                this_06 = &wrapArray[(unsigned long)uVar1];
                *this_06 = local_78;
                puVar2 = puVar2 + 2;
            } while (puVar2 != puVar3);
        }
    }

    // 0x100953120
    void SampledPoseAnimationSampler::GetLabelData(WrapArray<float>& wrapArray,
                                                   const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                                   AnimationLabelType animationLabelType) const {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        vector_map<unsigned short, unsigned short>* this_02;
        bool cVar2;
        unsigned long uVar4;
        float* pfVar5;
        long lVar6;
        long lVar7;
        float* arg3;
        Animation* pAVar8;
        AnimKeyFrameSample* this_04;
        AnimKeyFrameSample* this_05;
        Singleton<AnimationManager>* this_06;
        vector_map<unsigned short, unsigned short>* pvVar9;
        uint32_t* puVar10;
        SampledPoseAnimationSampler* this_08;
        ReturnValue* this_09;
        unsigned int uVar12;
        unsigned int uVar13;
        float extraout_XMM0_Da;
        float fVar14;
        WrapArray<unsigned char const> local_b8;
        ReturnValue local_a8;
        ReturnValue local_90;
        ReturnValue* local_78;
        unsigned long local_70;
        unsigned long local_68;
        float local_54;
        unsigned long local_50;
        vector_map<unsigned short, unsigned short>* local_48;

        local_48 = (vector_map<unsigned short, unsigned short>*)(((uint64_t)local_48._4_4_ << 32) |
                                                                 (uint32_t)animationLabelType);
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_40 =
            (vector<oldscape::dash3d::EntityHighlight*,
                    BucketAllocatorEASTL>*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM;
        if (animationLabelType == 0) {
            local_40 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)PTR_IDENTITY_DELTA_100ee69f8;
        }
        ReturnValue* pRVar11 = (ReturnValue*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORMS;
        if (animationLabelType == 0) {
            pRVar11 = (ReturnValue*)PTR_IDENTITY_LABELDELTAS_100ee6a00;
        }
        vector_map<unsigned short, unsigned short>* local_38 = arg2;
        unsigned long uVar3 = local_40->end();
        shared_ptr<Animation>* this_00 = (shared_ptr<Animation>*)(field_32 + 32);
        NXTRenderCanvas* this_03 = (NXTRenderCanvas*)(*this_00).operator->();
        auto objType = this_03->GetPixelBuffer();
        if (*objType == nullptr) {
            uVar3 = pRVar11->end();
            uVar4 = wrapArray.HeapBeginPtr();
            if (uVar3 < uVar4) {
                LogAssert("identityList.size() >= concatenatedArrayOut.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/SampledPoseAnimationSampler.cpp",
                          290, nullptr);
            }
            pfVar5 = (float*)pRVar11->data();
            lVar6 = pRVar11->data();
            lVar7 = wrapArray.HeapBeginPtr();
            arg3 = (float*)wrapArray.end();
            std::copy<float const*, float*>(pfVar5, (lVar6 + lVar7 * 4), arg3);
        } else {
            this_08 = *(SampledPoseAnimationSampler**)field_32;
            local_78 = pRVar11;
            local_50 = uVar3;
            pAVar8 = AnimationManager::GetTimeElapsedSinceNS((unsigned long long)this_08);
            uVar3 = GetFrameInterpolationData(this_08, (AnimationInfo*)field_32, (unsigned long long)pAVar8);
            local_54 = extraout_XMM0_Da;
            pAVar8 = (Animation*)(*this_00).operator->();
            this_04 = pAVar8->GetKeyFrameSample(uVar3 & 4294967295);
            pAVar8 = (Animation*)(*this_00).operator->();
            this_05 = pAVar8->GetKeyFrameSample(uVar3 >> 32);
            if ((int)local_48 == 0) {
                local_a8 = this_04->GetLabelDeltas();
                uVar3 = local_50;
                local_90 = this_05->GetLabelDeltas();
            } else {
                local_a8 = this_04->GetBillboardTransforms();
                uVar3 = local_50;
                local_90 = this_05->GetBillboardTransforms();
            }
            this_01 = local_40;
            this_06 = (Singleton<AnimationManager>*)local_40->data();
            lVar6 = this_01->data();
            lVar7 = this_01->end();
            pfVar5 = (float*)wrapArray.end();
            std::copy<float const*, float*>(this_06, (lVar6 + lVar7 * 4), pfVar5);
            cVar2 = ((AnimationManager*)this_06->Instance())->GetTweenLabels();
            this_02 = local_38;
            if (!cVar2) {
                local_b8.WrapArray<Array<unsigned char>>(local_a8);
                AnimationSampler::ConcatenateArrays(wrapArray, local_b8, *local_38, *local_40);
            } else {
                pvVar9 = (vector_map<unsigned short, unsigned short>*)local_38->HeapBeginPtr();
                local_38 = (vector_map<unsigned short, unsigned short>*)this_02->end();
                if (pvVar9 != local_38) {
                    local_70 = (unsigned long)((int)uVar3 - 1);
                    local_68 = uVar3 & 4294967295;
                    do {
                        uVar12 = (unsigned int)*(unsigned short*)(pvVar9 + 2) * (int)uVar3;
                        if (uVar12 == 0) {
                            LogAssert(
                                "dstBlock != 0",
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/animation/SampledPoseAnimationSampler.cpp",
                                322, "AnimationState: Label data requested with a label slot of 0 - this is reserved!");
                        }
                        uVar13 = (unsigned int)*(unsigned short*)pvVar9 * (int)uVar3;
                        uVar4 = (unsigned long)((int)local_70 + uVar13);
                        local_48 = pvVar9;
                        uVar3 = local_a8.end();
                        pRVar11 = local_78;
                        this_09 = local_78;
                        if (uVar4 < uVar3) {
                            this_09 = &local_a8;
                        }
                        lVar6 = this_09->data();
                        uVar3 = local_90.end();
                        if (uVar4 < uVar3) {
                            pRVar11 = &local_90;
                        }
                        lVar7 = pRVar11->data();
                        uVar3 = local_68;
                        if ((int)local_50 != 0) {
                            do {
                                fVar14 =
                                    math::Lerp<float, float>(*((float*)((unsigned long)uVar13 * 4 + lVar6)),
                                                             *((float*)(lVar7 + (unsigned long)uVar13 * 4)), local_54);
                                local_40 = (vector<oldscape::dash3d::EntityHighlight*,
                                                   BucketAllocatorEASTL>*)(((uint64_t)local_40._4_4_ << 32) |
                                                                           (uint32_t)fVar14);
                                puVar10 = &wrapArray[(unsigned long)uVar12];
                                *puVar10 = local_40._0_4_;
                                uVar12 = uVar12 + 1;
                                uVar13 = uVar13 + 1;
                                uVar3 = uVar3 - 1;
                            } while (uVar3 != 0);
                        }
                        pvVar9 = local_48 + 4;
                        uVar3 = local_50;
                    } while (pvVar9 != local_38);
                }
            }
        }
    }

} // namespace jag::graphics

// 0x1009524a0
void floor(float arg1) {
    _floorf();
}
