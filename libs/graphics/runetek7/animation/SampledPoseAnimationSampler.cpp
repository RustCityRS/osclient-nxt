// libs/graphics/runetek7/animation/SampledPoseAnimationSampler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "SampledPoseAnimationSampler.h"

namespace jag::graphics {
    // 0x100952200, 176 bytes, base-object constructor, placed by class name
    // SampledPoseAnimationSampler::SampledPoseAnimationSampler()
    void SampledPoseAnimationSampler::SampledPoseAnimationSampler() {
        _func_decltype_nullptr* in_RSI;

        new (this) AnimationSampler();
        field_0 = &PTR__SampledPoseAnimationSampler_100f1b100;
        new (field_32) AnimationInfo();
        new (&field_80) Array<JointPose, eastl::allocator>();
        new (&field_104) Array<math::Matrix44T<float>, eastl::allocator>();
        new (&field_128, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_144 = 0;
        m_drawDebugSkeleton = false;
    }

    // 0x1009522b0, 16 bytes, complete-object constructor, placed by class name
    // SampledPoseAnimationSampler::SampledPoseAnimationSampler(): jumps straight to the base-object constructor

    // 0x1009522c0, 176 bytes, placed by class name
    // SampledPoseAnimationSampler::GetCurrentFrame(AnimationInfo const&, float) const
    ulong SampledPoseAnimationSampler::GetCurrentFrame(AnimationInfo* param_1, float param_2) {
        undefined1* this_00;
        uint uVar1;
        char cVar2;
        uint uVar3;
        uint uVar4;
        int iVar5;
        Animation* pAVar6;
        ulong uVar7;

        uVar7 = (ulong)param_2;
        cVar2 = param_1->IsLooping();
        this_00 = param_1->field_32;
        pAVar6 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
        uVar3 = pAVar6->GetFrameCount();
        uVar4 = (uint)uVar7;
        if (cVar2 == '\0') {
            if (uVar3 <= uVar4) {
                pAVar6 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
                iVar5 = pAVar6->GetFrameCount();
                uVar7 = (ulong)(iVar5 - 1);
            }
        } else {
            uVar1 = *(uint*)((long)&param_1->field_10 + 6);
            uVar3 = uVar3 - uVar1;
            if (uVar3 <= uVar4) {
                uVar3 = (uVar4 - uVar3) % uVar1 + uVar3;
                uVar7 = (ulong)uVar3;
                pAVar6 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
                uVar4 = pAVar6->GetFrameCount();
                if (uVar4 <= uVar3) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("loopAmount + loopStart < animInfo.m_animation->GetFrameCount()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/SampledPoseAnimationSampler.cpp",
                              44, (char*)0);
                }
            }
        }
        return uVar7 & 4294967295;
    }

    // 0x100952390, 128 bytes, placed by class name
    // SampledPoseAnimationSampler::GetNextFrame(AnimationInfo const&, unsigned int) const
    ulong SampledPoseAnimationSampler::GetNextFrame(AnimationInfo* param_1, uint param_2) {
        char cVar1;
        int iVar2;
        uint uVar3;
        Animation* pAVar4;
        ulong uVar5;
        ulong uVar6;

        pAVar4 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)param_1->field_32);
        uVar5 = pAVar4->GetKeyFrameSampleCount();
        cVar1 = param_1->IsLooping();
        uVar6 = (ulong)(param_2 + 1);
        if (cVar1 == '\0') {
            if (uVar5 <= uVar6) {
                uVar3 = 0;
                if (*(int*)((long)&param_1->field_10 + 6) != -1) {
                    uVar3 = param_2;
                }
                uVar6 = (ulong)uVar3;
                if (param_1->field_25 == '\0') {
                    uVar6 = (ulong)param_2;
                }
            }
        } else if (uVar5 <= uVar6) {
            pAVar4 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)param_1->field_32);
            iVar2 = pAVar4->GetFrameCount();
            uVar6 = (ulong)(uint)(iVar2 - *(int*)((long)&param_1->field_10 + 6));
        }
        return uVar6;
    }

    // 0x100952430, 112 bytes, placed by class name
    // SampledPoseAnimationSampler::GetFrameInterpolant(AnimationInfo const&, float) const
    float SampledPoseAnimationSampler::GetFrameInterpolant(AnimationInfo* param_1, float param_2) {
        Animation* this_00;
        float fVar3;

        if (param_1->IsLooping() == '\0') {
            this_00 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)param_1->field_32);
            if (this_00->GetFrameCount() <= (uint)(long)param_2) {
                return 1.0;
            }
        }
        fVar3 = (float)floor(param_2);
        return param_2 - fVar3;
    }

    // 0x1009524b0, 192 bytes, placed by class name
    // SampledPoseAnimationSampler::GetFrameInterpolationData(AnimationInfo const&, unsigned long long) const
    undefined8 SampledPoseAnimationSampler::GetFrameInterpolationData(AnimationInfo* param_1, ulonglong param_2) {
        Animation* this_00;
        ulong uVar1;
        uint local_28;
        undefined4 uStack_24;
        float local_1c;

        new (&local_28) math::Vector3T<int>();
        local_1c = (float)param_2;
        this_00 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)param_1->field_32);
        uVar1 = this_00->GetAnimationSampleIntervalNS();
        local_1c = local_1c / (float)uVar1;
        local_28 = GetCurrentFrame((SampledPoseAnimationSampler*)this_00, param_1, local_1c);
        uStack_24 = GetNextFrame((SampledPoseAnimationSampler*)this_00, param_1, local_28);
        GetFrameInterpolant((SampledPoseAnimationSampler*)this_00, param_1, local_1c);
        return CONCAT44(uStack_24, local_28);
    }

    // 0x100952570, 656 bytes, placed by class name
    // SampledPoseAnimationSampler::CopyBoneMatricesToRT5VertexTransformData(WrapArray<JointPose const> const&, Array<Joint, eastl::allocator> const&, AnimKeyFrameSet const&, VertexTransformData&)
    void SampledPoseAnimationSampler::CopyBoneMatricesToRT5VertexTransformData(WrapArray* param_1, Array* param_2,
                                                                               AnimKeyFrameSet* param_3,
                                                                               VertexTransformData* param_4) {
        ushort uVar1;
        uint uVar2;
        long lVar3;
        shared_ptr<AnimBase>* psVar4;
        AnimBase* pAVar5;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        Matrix44T* pMVar6;
        type* ptVar7;
        ushort* puVar8;
        vector* pvVar9;
        ulong uVar10;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_01;
        ulong uVar11;
        type* ptVar12;
        undefined1 local_1158[64];
        undefined1 local_1118[64];
        undefined1 local_10d8[80];
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_1088;
        ulong local_1070;
        fixed_vector local_1068[4144];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        param_1->HeapBeginPtr();
        eastl::fixed_vector<math::Matrix44T<float>, 64ul, true, eastl::allocator>::fixed_vector((ulong)local_1068);
        WrapArray<math::Matrix44T<float>>::WrapArray<
            eastl::fixed_vector<math::Matrix44T<float>, 64ul, true, eastl::allocator>>(
            (WrapArray<math::Matrix44T<float>>*)(local_10d8 + 64), local_1068);
        WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(
            (WrapArray<unsigned char const>*)local_1118, param_2);
        pose::ConvertToMatrices(local_10d8 + 64, param_1, local_1118);
        local_1088 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_80;
        lVar3 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_1088);
        if (lVar3 != 0) {
            local_1070 = 0;
            do {
                psVar4 = (shared_ptr<AnimBase>*)param_3->GetMSAASampleCount();
                pAVar5 = (AnimBase*)shared_ptr<AnimBase>::operator->(psVar4);
                uVar2 = pAVar5->GetOriginTransformIDByJointID((uint)local_1070);
                psVar4 = (shared_ptr<AnimBase>*)param_3->GetMSAASampleCount();
                pAVar5 = (AnimBase*)shared_ptr<AnimBase>::operator->(psVar4);
                this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)pAVar5->GetTransformLabels(
                    (uVar2 & 65535) + 1);
                Array<Joint, eastl::allocator>::operator[]((Array<Joint, eastl::allocator>*)param_2, local_1070);
                local_1158->GetWorldBindInverse();
                math::operator*((math*)local_10d8, (Matrix44T*)local_1158,
                                (Matrix44T*)&graphics::MAYA_ANIM_INVERT_MATRIX);
                pMVar6 = (Matrix44T*)
                    eastl::vector<math::Matrix44T<float>,
                                  eastl::fixed_vector_allocator<64ul, 64ul, 16ul, 0ul, true, eastl::allocator>>::
                    operator[]((vector<math::Matrix44T<float>,
                                       eastl::fixed_vector_allocator<64ul, 64ul, 16ul, 0ul, true, eastl::allocator>>*)
                                   local_1068,
                               local_1070);
                math::operator*((math*)local_1118, (Matrix44T*)local_10d8, pMVar6);
                lVar3 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
                if (lVar3 != 0) {
                    uVar2 = 1;
                    ptVar12 = (type*)0;
                    do {
                        ptVar7 = ptVar12;
                        puVar8 = (ushort*)Array<unsigned short, eastl::allocator>::operator[](
                            (Array<unsigned short, eastl::allocator>*)this_00, (ulong)ptVar12);
                        uVar1 = *puVar8;
                        pvVar9 = param_4->SSOBeginPtr(ptVar7);
                        uVar10 = pvVar9->HeapBeginPtr();
                        if (uVar1 < uVar10) {
                            ptVar7 = (type*)local_1118;
                            local_10d8->operator_cast_to_Matrix43T();
                            pvVar9 = param_4->SSOBeginPtr(ptVar7);
                            puVar8 = (ushort*)Array<unsigned short, eastl::allocator>::operator[](
                                (Array<unsigned short, eastl::allocator>*)this_00, (ulong)ptVar12);
                            this_01 = (ParticleVertexDataProxy<math::Vector3T<float>>*)
                                WrapArray<math::Matrix43T<float>>::operator[](
                                    (WrapArray<math::Matrix43T<float>>*)pvVar9, (ulong)*puVar8);
                            ParticleVertexDataProxy<math::Vector3T<float>>::operator=(
                                this_01, (ParticleVertexDataProxy*)local_10d8);
                        }
                        ptVar12 = (type*)(ulong)uVar2;
                        ptVar7 = (type*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                            this_00);
                        uVar2 = uVar2 + 1;
                    } while (ptVar12 < ptVar7);
                }
                uVar11 = (ulong)((int)local_1070 + 1);
                uVar10 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_1088);
                local_1070 = uVar11;
            } while (uVar11 < uVar10);
        }
        local_1068->~fixed_vector();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100952800, 480 bytes, placed by class name
    // SampledPoseAnimationSampler::UpdatePose(Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&, AnimationInfo const&)
    void SampledPoseAnimationSampler::UpdatePose(Array* param_1, Matrix44T* param_2, AnimationInfo* param_3) {
        bool bVar1;
        NXTRenderCanvas* this_00;
        shared_ptr* psVar2;
        ulonglong uVar3;
        ulong uVar4;
        Animation* pAVar5;
        long lVar6;
        long lVar7;
        SampledPoseAnimationSampler* this_01;
        undefined1* puVar8;
        pose* ppVar9;
        WrapArray<unsigned char const> local_90[16];
        WrapArray<unsigned char const> local_80[16];
        WrapArray<unsigned char const> local_70[16];
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL> local_60[24];
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL> local_48[32];

        puVar8 = param_3->field_32;
        bVar1 = operator!=((shared_ptr*)puVar8, (_func_decltype_nullptr*)0);
        if (!bVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert("animInfo.m_animation != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/SampledPoseAnimationSampler.cpp",
                      158, (char*)0);
        }
        this_00 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)puVar8);
        psVar2 = (shared_ptr*)this_00->GetPixelBuffer();
        bVar1 = operator!=(psVar2, (_func_decltype_nullptr*)0);
        if (bVar1) {
            this_01 = (SampledPoseAnimationSampler*)param_3->field_0;
            uVar3 = AnimationManager::GetTimeElapsedSinceNS((ulonglong)this_01);
            uVar4 = GetFrameInterpolationData(this_01, param_3, uVar3);
            local_48._28_4_ = (undefined4)ppVar9._0_4_;
            pAVar5 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)puVar8);
            pAVar5->GetKeyFrameSample(uVar4 & 4294967295);
            local_48->GetPose();
            pAVar5 = (Animation*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)puVar8);
            pAVar5->GetKeyFrameSample(uVar4 >> 32);
            local_60->GetPose();
            puVar8 = &field_80;
            uVar4 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_48);
            puVar8->set_max_size(uVar4, 1);
            lVar6 = puVar8->end();
            lVar7 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_48);
            if (lVar6 != lVar7) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_latestPoses.size() == beforePose.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/SampledPoseAnimationSampler.cpp",
                          176, (char*)0);
            }
            lVar6 = puVar8->end();
            lVar7 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_60);
            if (lVar6 != lVar7) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_latestPoses.size() == afterPose.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/SampledPoseAnimationSampler.cpp",
                          177, (char*)0);
            }
            WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(local_90, (Array*)puVar8);
            WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(local_80,
                                                                                              (Array*)local_48);
            WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(local_70,
                                                                                              (Array*)local_60);
            local_48._28_4_->BlendJointPoses(local_90, local_80, local_70);
            local_60->~Array();
            local_48->~Array();
        }
    }

    // 0x100952a00, 544 bytes, placed by class name
    // SampledPoseAnimationSampler::MergePose()
    void SampledPoseAnimationSampler::MergePose() {
        undefined1* this_00;
        WrapArray<JointPose>* this_01;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        long lVar2;
        long lVar3;
        long* plVar4;
        QuaternionT* pQVar5;
        QuaternionT* pQVar6;
        Rect* pRVar7;
        Rect<float>* this_03;
        ulong uVar8;
        float* pfVar9;
        uint uVar10;
        ulong uVar11;
        undefined8 uVar12;
        float fVar13;
        undefined1 auVar15[16];
        float local_68;
        float fStack_60;
        float fStack_5c;
        WrapArray<JointPose>* local_58;
        Array<float, eastl::allocator>* local_50;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_40;
        uint local_38;
        float local_34;

        local_40 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_80;
        lVar2 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_40);
        local_58 = (WrapArray<JointPose>*)&field_128;
        lVar3 = local_58->HeapBeginPtr();
        if (lVar2 != lVar3) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_latestPoses.size() == m_mergeJoints.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/SampledPoseAnimationSampler.cpp",
                      186, (char*)0);
        }
        this_00 = ((SampledPoseAnimationSampler*)this)->field_8;
        if (!operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_walkMergeDataProvider != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/SampledPoseAnimationSampler.cpp",
                      187, (char*)0);
        }
        plVar4 = (long*)shared_ptr<WalkMergeDataProvider>::operator->((shared_ptr<WalkMergeDataProvider>*)this_00);
        local_50 = (Array<float, eastl::allocator>*)(**(code**)(*plVar4 + 24))(plVar4);
        lVar2 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_40);
        this_02 = local_40;
        this_01 = local_58;
        if (lVar2 != 0) {
            uVar10 = 1;
            uVar11 = 0;
            do {
                pfVar9 = (float*)Array<float, eastl::allocator>::operator[](local_50, uVar11);
                fVar13 = *pfVar9;
                if (((SampledPoseAnimationSampler*)this)->field_144 == '\0') {
                    local_34 = fVar13;
                } else {
                    local_34 = 1.0 - fVar13;
                }
                local_38 = uVar10;
                lVar2 = Array<JointPose, eastl::allocator>::operator[]((Array<JointPose, eastl::allocator>*)this_02,
                                                                       uVar11);
                auVar15 = WrapArray<JointPose>::operator[](this_01, uVar11);
                uVar12 = math::Lerp<math::Vector4T<float>, float>((math*)(lVar2 + 16), (Vector4T*)(auVar15._0_8_ + 16),
                                                                  auVar15._8_8_, local_34);
                fStack_60 = fVar13;
                fStack_5c = 0.0;
                _local_68 = uVar12;
                lVar2 = Array<JointPose, eastl::allocator>::operator[]((Array<JointPose, eastl::allocator>*)this_02,
                                                                       uVar11);
                math::Rect<float>::operator=((Rect<float>*)(lVar2 + 16), (Rect*)&local_68);
                pQVar5 = (QuaternionT*)Array<JointPose, eastl::allocator>::operator[](
                    (Array<JointPose, eastl::allocator>*)this_02, uVar11);
                pQVar6 = (QuaternionT*)WrapArray<JointPose>::operator[](this_01, uVar11);
                math::QuaternionLerpShortest<float>((math*)&local_68, pQVar5, pQVar6, local_34);
                pRVar7 = (Rect*)local_68.Normalise();
                this_03 = (Rect<float>*)Array<JointPose, eastl::allocator>::operator[](
                    (Array<JointPose, eastl::allocator>*)this_02, uVar11);
                math::Rect<float>::operator=(this_03, pRVar7);
                lVar2 = Array<JointPose, eastl::allocator>::operator[]((Array<JointPose, eastl::allocator>*)this_02,
                                                                       uVar11);
                auVar15 = WrapArray<JointPose>::operator[](this_01, uVar11);
                uVar12 = math::Lerp<math::Vector4T<float>, float>((math*)(lVar2 + 32), (Vector4T*)(auVar15._0_8_ + 32),
                                                                  auVar15._8_8_, local_34);
                fStack_60 = fVar13;
                fStack_5c = 0.0;
                _local_68 = uVar12;
                lVar2 = Array<JointPose, eastl::allocator>::operator[]((Array<JointPose, eastl::allocator>*)this_02,
                                                                       uVar11);
                math::Rect<float>::operator=((Rect<float>*)(lVar2 + 32), (Rect*)&local_68);
                uVar10 = local_38;
                uVar11 = (ulong)local_38;
                uVar8 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_02);
                uVar10 = uVar10 + 1;
            } while (uVar11 < uVar8);
        }
    }

    // 0x100952ca0, 528 bytes, placed by class name
    // SampledPoseAnimationSampler::UpdateJointMatricesFromPose(AnimationInfo const&)
    void SampledPoseAnimationSampler::UpdateJointMatricesFromPose(AnimationInfo* param_1) {
        uchar uVar1;
        NXTRenderCanvas* this_00;
        shared_ptr<AnimKeyFrameSet>* this_01;
        RT7Core* this_02;
        shared_ptr<AnimBase>* this_03;
        AnimBase* this_04;
        AnimKeyFrameSet* this_05;
        ulong uVar2;
        long lVar3;
        Matrix44T* pMVar4;
        Matrix44T<float>* this_06;
        ulong uVar5;
        uint uVar6;
        undefined1* this_07;
        undefined1 local_1158[64];
        undefined1 local_1118[64];
        undefined1 local_10d8[88];
        Array<math::Matrix44T<float>, eastl::allocator>* local_1080;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_1078;
        Array* local_1070;
        fixed_vector local_1068[4144];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)param_1->field_32);
        this_01 = (shared_ptr<AnimKeyFrameSet>*)this_00->GetPixelBuffer();
        this_02 = (RT7Core*)shared_ptr<AnimKeyFrameSet>::operator->(this_01);
        this_03 = (shared_ptr<AnimBase>*)this_02->GetMSAASampleCount();
        this_04 = (AnimBase*)shared_ptr<AnimBase>::operator->(this_03);
        this_05 = (AnimKeyFrameSet*)shared_ptr<AnimKeyFrameSet>::operator->(this_01);
        uVar1 = this_05->GetBindID();
        local_1070 = (Array*)this_04->GetBindPose(uVar1);
        this_07 = &field_80;
        uVar2 = this_07->end();
        local_1080 = (Array<math::Matrix44T<float>, eastl::allocator>*)&field_104;
        (&field_104, uVar2, 1)->set_max_size();
        this_07->end();
        eastl::fixed_vector<math::Matrix44T<float>, 64ul, true, eastl::allocator>::fixed_vector((ulong)local_1068);
        WrapArray<math::Matrix44T<float>>::WrapArray<
            eastl::fixed_vector<math::Matrix44T<float>, 64ul, true, eastl::allocator>>(
            (WrapArray<math::Matrix44T<float>>*)(local_10d8 + 72), local_1068);
        WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(
            (WrapArray<unsigned char const>*)local_1118, (Array*)this_07);
        WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(
            (WrapArray<unsigned char const>*)local_10d8, local_1070);
        pose::ConvertToMatrices(local_10d8 + 72, local_1118, local_10d8);
        local_1078 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_07;
        lVar3 = this_07->end();
        if (lVar3 != 0) {
            uVar6 = 1;
            uVar2 = 0;
            do {
                Array<Joint, eastl::allocator>::operator[]((Array<Joint, eastl::allocator>*)local_1070, uVar2);
                local_1158->GetWorldBindInverse();
                math::operator*((math*)local_10d8, (Matrix44T*)local_1158,
                                (Matrix44T*)&graphics::MAYA_ANIM_INVERT_MATRIX);
                pMVar4 = (Matrix44T*)
                    eastl::vector<math::Matrix44T<float>,
                                  eastl::fixed_vector_allocator<64ul, 64ul, 16ul, 0ul, true, eastl::allocator>>::
                    operator[]((vector<math::Matrix44T<float>,
                                       eastl::fixed_vector_allocator<64ul, 64ul, 16ul, 0ul, true, eastl::allocator>>*)
                                   local_1068,
                               uVar2);
                math::operator*((math*)local_1118, (Matrix44T*)local_10d8, pMVar4);
                this_06 =
                    (Matrix44T<float>*)Array<math::Matrix44T<float>, eastl::allocator>::operator[](local_1080, uVar2);
                math::Matrix44T<float>::operator=(this_06, (Matrix44T*)local_1118);
                uVar2 = (ulong)uVar6;
                uVar5 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_1078);
                uVar6 = uVar6 + 1;
            } while (uVar2 < uVar5);
        }
        local_1068->~fixed_vector();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100952eb0, 400 bytes, placed by class name
    // SampledPoseAnimationSampler::Update(Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)
    void SampledPoseAnimationSampler::Update(Array* param_1, Matrix44T* param_2) {
        bool bVar1;
        undefined1 uVar2;
        NXTRenderCanvas* this_00;
        shared_ptr* this_01;
        long lVar3;
        long* plVar4;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        RT7Core* this_03;
        undefined8 uVar5;
        AnimKeyFrameSet* this_04;
        Matrix44T* extraout_RDX;
        WrapArray<unsigned char const> local_60[16];
        ColourHSL local_50;
        ColourHSL local_40;

        this_00 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)(field_32 + 32));
        this_01 = (shared_ptr*)this_00->GetPixelBuffer();
        bVar1 = operator!=(this_01, (_func_decltype_nullptr*)0);
        if (bVar1) {
            UpdatePose(this, (Array*)0, extraout_RDX, (AnimationInfo*)field_32);
            lVar3 = (&field_128)->HeapBeginPtr();
            if (lVar3 != 0) {
                bVar1 = operator!=((shared_ptr*)field_8, (_func_decltype_nullptr*)0);
                if (bVar1) {
                    plVar4 = (long*)shared_ptr<WalkMergeDataProvider>::operator->(
                        (shared_ptr<WalkMergeDataProvider>*)field_8);
                    this_02 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(**(
                        code**)(*plVar4 + 24))(plVar4);
                    lVar3 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_02);
                    if (lVar3 != 0) {
                        MergePose(this);
                    }
                }
            }
            UpdateJointMatricesFromPose(this, (AnimationInfo*)field_32);
            field_24 = 1;
            if ((AnimationState::m_drawDebugSkeleton != '\0') && (m_drawDebugSkeleton != false)) {
                if (AnimationStateProvider::m_useAsyncAnimUpdate != '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("!AnimationStateProvider::m_useAsyncAnimUpdate",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/SampledPoseAnimationSampler.cpp",
                              253, (char*)0);
                }
                this_03 = (RT7Core*)shared_ptr<AnimKeyFrameSet>::operator->((shared_ptr<AnimKeyFrameSet>*)this_01);
                uVar5 = this_03->GetMSAASampleCount();
                this_04 =
                    (AnimKeyFrameSet*)shared_ptr<AnimKeyFrameSet>::operator->((shared_ptr<AnimKeyFrameSet>*)this_01);
                uVar2 = this_04->GetBindID();
                WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(local_60,
                                                                                                  (Array*)&field_80);
                new (&local_50) math::ColourHSL(0.9, 0.0, 0.9);
                new (&local_40) math::ColourHSL(1.0, 0.1, 1.0);
                pose::DebugDrawSkeleton(local_50._0_8_, local_50.field_8, local_40._0_8_, local_40.field_8, uVar5,
                                        uVar2, local_60, param_2);
            }
        }
    }

    // 0x100953040, 224 bytes, placed by class name
    // SampledPoseAnimationSampler::GetRT5BoneTransforms(WrapArray<math::Matrix43T<float> >&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, math::Matrix44T<float> const&) const
    void SampledPoseAnimationSampler::GetRT5BoneTransforms(WrapArray* param_1, vector_map* param_2, vector_map* param_3,
                                                           Matrix44T* param_4) {
        ushort uVar1;
        NXTRenderCanvas* this_00;
        shared_ptr<AnimKeyFrameSet>* this_01;
        RT7Core* this_02;
        shared_ptr<AnimBase>* this_03;
        SceneManager* this_04;
        map<short, short, eastl::less<short>, eastl::allocator>* this_05;
        undefined2* puVar2;
        undefined2* puVar3;
        short* psVar4;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_06;
        Matrix44T local_78;
        SampledPoseAnimationSampler* local_38;

        local_38 = this;
        this_00 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)(field_32 + 32));
        this_01 = (shared_ptr<AnimKeyFrameSet>*)this_00->GetPixelBuffer();
        this_02 = (RT7Core*)shared_ptr<AnimKeyFrameSet>::operator->(this_01);
        this_03 = (shared_ptr<AnimBase>*)this_02->GetMSAASampleCount();
        this_04 = (SceneManager*)shared_ptr<AnimBase>::operator->(this_03);
        this_05 = (map<short, short, eastl::less<short>, eastl::allocator>*)this_04->GetEntityHighlightGlobalState();
        puVar2 = (undefined2*)param_3->HeapBeginPtr();
        puVar3 = (undefined2*)param_3->end();
        if (puVar2 != puVar3) {
            local_38 = (SampledPoseAnimationSampler*)&local_38->field_104;
            do {
                local_78._0_2_ = *puVar2;
                uVar1 = puVar2[1];
                psVar4 = (short*)eastl::map<short, short, eastl::less<short>, eastl::allocator>::operator[](
                    this_05, (short*)&local_78);
                Array<math::Matrix44T<float>, eastl::allocator>::operator[](
                    (Array<math::Matrix44T<float>, eastl::allocator>*)local_38, (long)*psVar4);
                math::Matrix44T::operator_cast_to_Matrix43T(&local_78);
                this_06 =
                    (ParticleVertexDataProxy<math::Vector3T<float>>*)WrapArray<math::Matrix43T<float>>::operator[](
                        (WrapArray<math::Matrix43T<float>>*)param_1, (ulong)uVar1);
                ParticleVertexDataProxy<math::Vector3T<float>>::operator=(this_06, (ParticleVertexDataProxy*)&local_78);
                puVar2 = puVar2 + 2;
            } while (puVar2 != puVar3);
        }
    }

    // 0x100953120, 944 bytes, placed by class name
    // SampledPoseAnimationSampler::GetLabelData(WrapArray<float>&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, AnimationLabelType) const
    void SampledPoseAnimationSampler::GetLabelData(Layout* param_1, Layout* param_2, int param_4) {
        shared_ptr<Animation>* this_00;
        Layout* pLVar1;
        Layout* this_01;
        bool bVar2;
        char cVar3;
        ulong uVar4;
        NXTRenderCanvas* this_02;
        shared_ptr* psVar5;
        ulong uVar6;
        float* pfVar7;
        long lVar8;
        long lVar9;
        float* pfVar10;
        ulonglong uVar11;
        Animation* pAVar12;
        Singleton<AnimationManager>* this_03;
        AnimationManager* this_04;
        vector_map* pvVar13;
        undefined4* puVar14;
        SampledPoseAnimationSampler* this_05;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar15;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_06;
        uint uVar16;
        uint uVar17;
        float extraout_XMM0_Da;
        float fVar18;
        WrapArray<unsigned char const> local_b8[16];
        undefined1 local_a8[24];
        undefined1 local_90[32];
        ulong local_70;
        ulong local_68;
        Layout* local_60;
        float local_54;
        ulong local_50;
        vector_map* local_48;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_40;
        Layout* local_38;

        local_48 = (vector_map*)CONCAT44(local_48._4_4_, param_4);
        local_40 = (vector<oldscape::dash3d::EntityHighlight*,
                           BucketAllocatorEASTL>*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM;
        if (param_4 == 0) {
            local_40 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)PTR_IDENTITY_DELTA_100ee69f8;
        }
        pvVar15 = (vector<oldscape::dash3d::EntityHighlight*,
                          BucketAllocatorEASTL>*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORMS;
        if (param_4 == 0) {
            pvVar15 =
                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)PTR_IDENTITY_LABELDELTAS_100ee6a00;
        }
        local_38 = param_2;
        uVar4 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_40);
        this_00 = (shared_ptr<Animation>*)(field_32 + 32);
        this_02 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->(this_00);
        psVar5 = (shared_ptr*)this_02->GetPixelBuffer();
        bVar2 = operator==(psVar5, (_func_decltype_nullptr*)0);
        if (bVar2) {
            uVar4 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar15);
            uVar6 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(param_1);
            if (uVar4 < uVar6) {
                /* WARNING: Subroutine does not return */
                LogAssert("identityList.size() >= concatenatedArrayOut.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/SampledPoseAnimationSampler.cpp",
                          290, (char*)0);
            }
            pfVar7 = (float*)pvVar15->data();
            lVar8 = pvVar15->data();
            lVar9 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(param_1);
            pfVar10 = (float*)param_1->end();
            std::copy<float const*, float*>(pfVar7, (float*)(lVar8 + lVar9 * 4), pfVar10);
        } else {
            this_05 = *(SampledPoseAnimationSampler**)field_32;
            local_90._24_8_ = pvVar15;
            local_50 = uVar4;
            uVar11 = AnimationManager::GetTimeElapsedSinceNS((ulonglong)this_05);
            uVar4 = GetFrameInterpolationData(this_05, (AnimationInfo*)field_32, uVar11);
            local_54 = extraout_XMM0_Da;
            pAVar12 = (Animation*)shared_ptr<Animation>::operator->(this_00);
            pAVar12->GetKeyFrameSample(uVar4 & 4294967295);
            pAVar12 = (Animation*)shared_ptr<Animation>::operator->(this_00);
            pAVar12->GetKeyFrameSample(uVar4 >> 32);
            local_60 = param_1;
            if ((int)local_48 == 0) {
                local_a8->GetLabelDeltas();
                uVar4 = local_50;
                local_90->GetLabelDeltas();
            } else {
                local_a8->GetBillboardTransforms();
                uVar4 = local_50;
                local_90->GetBillboardTransforms();
            }
            pvVar15 = local_40;
            this_03 = (Singleton<AnimationManager>*)local_40->data();
            lVar8 = pvVar15->data();
            lVar9 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar15);
            pLVar1 = local_60;
            pfVar7 = (float*)local_60->end();
            std::copy<float const*, float*>((float*)this_03, (float*)(lVar8 + lVar9 * 4), pfVar7);
            this_04 = (AnimationManager*)this_03->Instance();
            cVar3 = this_04->GetTweenLabels();
            this_01 = local_38;
            if (cVar3 == '\0') {
                WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(local_b8,
                                                                                                  (Array*)local_a8);
                AnimationSampler::ConcatenateArrays(pLVar1, local_b8, (vector_map*)local_38, (Array*)local_40);
            } else {
                pvVar13 = (vector_map*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(local_38);
                local_38 = (Layout*)this_01->end();
                if (pvVar13 != (vector_map*)local_38) {
                    local_70 = (ulong)((int)uVar4 - 1);
                    local_68 = uVar4 & 4294967295;
                    do {
                        uVar16 = (uint) * (ushort*)(pvVar13 + 2) * (int)uVar4;
                        if (uVar16 == 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert(
                                "dstBlock != 0",
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/animation/SampledPoseAnimationSampler.cpp",
                                322, "AnimationState: Label data requested with a label slot of 0 - this is reserved!");
                        }
                        uVar17 = (uint) * (ushort*)pvVar13 * (int)uVar4;
                        uVar6 = (ulong)((int)local_70 + uVar17);
                        local_48 = pvVar13;
                        uVar4 = local_a8->end();
                        this_06 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                         std::default_delete<LoadingScreenScript::AnimLayer>>,
                                         eastl::allocator>*)local_90._24_8_;
                        pvVar15 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)local_90._24_8_;
                        if (uVar6 < uVar4) {
                            pvVar15 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)local_a8;
                        }
                        lVar8 = pvVar15->data();
                        uVar4 = local_90->end();
                        if (uVar6 < uVar4) {
                            this_06 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                             std::default_delete<LoadingScreenScript::AnimLayer>>,
                                             eastl::allocator>*)local_90;
                        }
                        lVar9 = this_06->data();
                        uVar4 = local_68;
                        if ((int)local_50 != 0) {
                            do {
                                fVar18 = math::Lerp<float, float>((float*)((ulong)uVar17 * 4 + lVar8),
                                                                  (float*)(lVar9 + (ulong)uVar17 * 4), local_54);
                                local_40 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)CONCAT44(
                                    local_40._4_4_, fVar18);
                                puVar14 = (undefined4*)WrapArray<float>::operator[]((WrapArray<float>*)local_60,
                                                                                    (ulong)uVar16);
                                *puVar14 = local_40._0_4_;
                                uVar16 = uVar16 + 1;
                                uVar17 = uVar17 + 1;
                                uVar4 = uVar4 - 1;
                            } while (uVar4 != 0);
                        }
                        pvVar13 = local_48 + 4;
                        uVar4 = local_50;
                    } while (pvVar13 != (vector_map*)local_38);
                }
            }
            local_90->~Array();
            local_a8->~Array();
        }
    }

} // namespace jag::graphics

// 0x1009524a0, 16 bytes, placed by neighbouring functions
// floor(float)
void floor(float param_1) {
    _floorf();
}
