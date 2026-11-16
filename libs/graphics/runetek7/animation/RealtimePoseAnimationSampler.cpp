// libs/graphics/runetek7/animation/RealtimePoseAnimationSampler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "RealtimePoseAnimationSampler.h"

namespace jag::graphics {
    // 0x100951570, 176 bytes, base-object constructor, placed by class name
    // RealtimePoseAnimationSampler::RealtimePoseAnimationSampler()
    void RealtimePoseAnimationSampler::RealtimePoseAnimationSampler() {
        new (this) AnimationSampler();
        field_0 = &PTR__RealtimePoseAnimationSampler_100f1b0b8;
        new (field_32) AnimationInfo();
        new (field_80) AnimKeyFrameSample();
        new ((field_80 + 80)) AnimCurveSegmentCache<eastl::allocator>();
        new (&field_224) AnimCurveSegmentCache<eastl::allocator>();
        m_drawDebugSkeleton = false;
    }

    // 0x100951630, 16 bytes, complete-object constructor, placed by class name
    // RealtimePoseAnimationSampler::RealtimePoseAnimationSampler(): jumps straight to the base-object constructor

    // 0x100951640, 304 bytes, placed by class name
    // RealtimePoseAnimationSampler::GetFrameFromTimeAnimKeyFrameSet(float&, unsigned long long, shared_ptr<Animation> const&, int, AnimationLoopBehaviour)
    ulong RealtimePoseAnimationSampler::GetFrameFromTimeAnimKeyFrameSet(undefined8 param_1_00, undefined4* param_1,
                                                                        ulong param_2, shared_ptr<Animation>* param_3,
                                                                        uint param_4, int param_6) {
        uint uVar1;
        uint uVar2;
        int iVar3;
        Animation* pAVar4;
        ulong uVar5;
        undefined4 uVar6;
        float local_38;

        pAVar4 = (Animation*)shared_ptr<Animation>::operator->(param_3);
        uVar5 = pAVar4->GetAnimationSampleIntervalNS();
        _local_38 = CONCAT44((float)param_2, (float)param_2 / (float)uVar5);
        uVar6 = modf((float)param_2 / (float)uVar5, &local_38);
        *param_1 = uVar6;
        uVar5 = (ulong)local_38;
        pAVar4 = (Animation*)shared_ptr<Animation>::operator->(param_3);
        uVar1 = pAVar4->GetFrameCount();
        uVar2 = (uint)uVar5;
        if ((param_6 == 2) || (param_4 == 4294967295)) {
            if (uVar1 <= uVar2) {
                *param_1 = 1065353216;
                pAVar4 = (Animation*)shared_ptr<Animation>::operator->(param_3);
                iVar3 = pAVar4->GetFrameCount();
                uVar5 = (ulong)(iVar3 - 1);
            }
        } else {
            uVar1 = uVar1 - param_4;
            if (uVar1 <= uVar2) {
                uVar1 = (uVar2 - uVar1) % param_4 + uVar1;
                uVar5 = (ulong)uVar1;
                pAVar4 = (Animation*)shared_ptr<Animation>::operator->(param_3);
                uVar2 = pAVar4->GetFrameCount();
                if (uVar2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("loopAmount + loopStart < animation->GetFrameCount()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/RealtimePoseAnimationSampler.cpp",
                              48, (char*)0);
                }
            }
        }
        return uVar5 & 4294967295;
    }

    // 0x100951780, 144 bytes, placed by class name
    // RealtimePoseAnimationSampler::EnsureCachesReady()
    void RealtimePoseAnimationSampler::EnsureCachesReady() {
        NXTRenderCanvas* this_00;
        shared_ptr<AnimKeyFrameSet>* this_01;
        fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>* this_02;
        vector* pvVar1;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_03;
        char cVar2;

        this_00 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)(field_32 + 32));
        this_01 = (shared_ptr<AnimKeyFrameSet>*)this_00->GetPixelBuffer();
        cVar2 = ((field_80 + 80))->IsValid();
        if (cVar2 == '\0') {
            this_02 = (fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true, eastl::allocator>*)
                          shared_ptr<AnimKeyFrameSet>::operator->(this_01);
            pvVar1 = (vector*)eastl::fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true,
                                                               eastl::allocator>::get_overflow_allocator(this_02);
            ((field_80 + 80), pvVar1)->AllocateCache();
        }
        cVar2 = (&field_224)->IsValid();
        if (cVar2 == '\0') {
            this_03 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>*)shared_ptr<AnimKeyFrameSet>::operator->(this_01);
            pvVar1 = (vector*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(this_03);
            (&field_224, pvVar1)->AllocateCache();
        }
    }

    // 0x100951810, 448 bytes, placed by class name
    // RealtimePoseAnimationSampler::Update(Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)
    void RealtimePoseAnimationSampler::Update(Array* param_1, Matrix44T* param_2) {
        undefined1 uVar2;
        uint uVar3;
        NXTRenderCanvas* this_00;
        shared_ptr* this_01;
        AnimKeyFrameSet* pAVar4;
        RT7Core* this_02;
        undefined8 uVar5;
        WrapArray<unsigned char const> local_80[16];
        Array<JointPose, eastl::allocator> local_70[24];
        ColourHSL local_58;
        ColourHSL local_48;
        float local_38;
        float local_34;

        this_00 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)(field_32 + 32));
        this_01 = (shared_ptr*)this_00->GetPixelBuffer();
        if (operator!=(this_01, (_func_decltype_nullptr*)0)) {
            EnsureCachesReady(this);
            AnimationManager::GetTimeElapsedSinceNS(*(ulonglong*)field_32);
            uVar3 = GetFrameFromTimeAnimKeyFrameSet();
            local_34 = (float)uVar3 + local_38;
            pAVar4 = (AnimKeyFrameSet*)this_01->end();
            (field_80, pAVar4, local_34, (AnimCurveSegmentCacheBase*)(field_80 + 80),
             (AnimCurveSegmentCacheBase*)&field_224)
                ->SampleKeyFrameSet();
            field_24 = 1;
            if ((AnimationState::m_drawDebugSkeleton != '\0') && (m_drawDebugSkeleton != false)) {
                if (AnimationStateProvider::m_useAsyncAnimUpdate != '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("!AnimationState::m_useAsyncAnimUpdate",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/RealtimePoseAnimationSampler.cpp",
                              111, (char*)0);
                }
                this_02 = (RT7Core*)shared_ptr<AnimKeyFrameSet>::operator->((shared_ptr<AnimKeyFrameSet>*)this_01);
                uVar5 = this_02->GetMSAASampleCount();
                pAVar4 =
                    (AnimKeyFrameSet*)shared_ptr<AnimKeyFrameSet>::operator->((shared_ptr<AnimKeyFrameSet>*)this_01);
                uVar2 = pAVar4->GetBindID();
                local_70->GetPose();
                WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(local_80,
                                                                                                  (Array*)local_70);
                new (&local_58) math::ColourHSL(0.9, 0.0, 0.9);
                new (&local_48) math::ColourHSL(1.0, 0.1, 1.0);
                pose::DebugDrawSkeleton(local_58._0_8_, local_58.field_8, local_48._0_8_, local_48.field_8, uVar5,
                                        uVar2, local_80, param_2);
                local_70->~Array();
            }
        }
    }

    // 0x100951a00, 688 bytes, placed by class name
    // RealtimePoseAnimationSampler::GetRT5BoneTransforms(WrapArray<math::Matrix43T<float> >&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, math::Matrix44T<float> const&) const
    void RealtimePoseAnimationSampler::GetRT5BoneTransforms(WrapArray* param_1, vector_map* param_2,
                                                            vector_map* param_3, Matrix44T* param_4) {
        short sVar1;
        uchar uVar2;
        NXTRenderCanvas* this_00;
        shared_ptr<AnimKeyFrameSet>* this_01;
        RT7Core* pRVar3;
        shared_ptr<AnimBase>* psVar4;
        AnimBase* this_02;
        AnimKeyFrameSet* this_03;
        SceneManager* this_04;
        undefined2* puVar5;
        short* psVar6;
        Matrix44T* pMVar7;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_05;
        undefined1 local_1168[64];
        undefined1 local_1128[80];
        math local_10d8;
        undefined2* local_1078;
        Array* local_1070;
        fixed_vector local_1068[4144];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_10d8.field_88 = (WrapArray<math::Matrix43T<float>>*)param_1;
        this_00 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)(field_32 + 32));
        this_01 = (shared_ptr<AnimKeyFrameSet>*)this_00->GetPixelBuffer();
        pRVar3 = (RT7Core*)shared_ptr<AnimKeyFrameSet>::operator->(this_01);
        psVar4 = (shared_ptr<AnimBase>*)pRVar3->GetMSAASampleCount();
        this_02 = (AnimBase*)shared_ptr<AnimBase>::operator->(psVar4);
        this_03 = (AnimKeyFrameSet*)shared_ptr<AnimKeyFrameSet>::operator->(this_01);
        uVar2 = this_03->GetBindID();
        local_1070 = (Array*)this_02->GetBindPose(uVar2);
        pRVar3 = (RT7Core*)shared_ptr<AnimKeyFrameSet>::operator->(this_01);
        psVar4 = (shared_ptr<AnimBase>*)pRVar3->GetMSAASampleCount();
        this_04 = (SceneManager*)shared_ptr<AnimBase>::operator->(psVar4);
        local_10d8.field_80 =
            (map<short, short, eastl::less<short>, eastl::allocator>*)this_04->GetEntityHighlightGlobalState();
        local_10d8.GetPose();
        local_10d8.end();
        eastl::fixed_vector<math::Matrix44T<float>, 64ul, true, eastl::allocator>::fixed_vector((ulong)local_1068);
        local_10d8.~Array();
        WrapArray<math::Matrix44T<float>>::WrapArray<
            eastl::fixed_vector<math::Matrix44T<float>, 64ul, true, eastl::allocator>>(
            (WrapArray<math::Matrix44T<float>>*)(local_1128 + 64), local_1068);
        local_10d8.GetPose();
        WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(
            (WrapArray<unsigned char const>*)local_1168, (Array*)&local_10d8);
        WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(
            (WrapArray<unsigned char const>*)local_1128, local_1070);
        pose::ConvertToMatrices(local_1128 + 64, local_1168, local_1128);
        local_10d8.~Array();
        puVar5 = (undefined2*)param_2->HeapBeginPtr();
        local_1078 = (undefined2*)param_2->end();
        if (puVar5 != local_1078) {
            do {
                local_10d8.field_0._0_2_ = *puVar5;
                local_10d8.field_72 = (ulong)(ushort)puVar5[1];
                psVar6 = (short*)eastl::map<short, short, eastl::less<short>, eastl::allocator>::operator[](
                    local_10d8.field_80, (short*)&local_10d8);
                sVar1 = *psVar6;
                Array<Joint, eastl::allocator>::operator[]((Array<Joint, eastl::allocator>*)local_1070, (long)sVar1);
                local_1128->GetWorldBindInverse();
                math::operator*((math*)local_1168, (Matrix44T*)local_1128,
                                (Matrix44T*)&graphics::MAYA_ANIM_INVERT_MATRIX);
                pMVar7 = (Matrix44T*)
                    eastl::vector<math::Matrix44T<float>,
                                  eastl::fixed_vector_allocator<64ul, 64ul, 16ul, 0ul, true, eastl::allocator>>::
                    operator[]((vector<math::Matrix44T<float>,
                                       eastl::fixed_vector_allocator<64ul, 64ul, 16ul, 0ul, true, eastl::allocator>>*)
                                   local_1068,
                               (long)sVar1);
                math::operator*(&local_10d8, (Matrix44T*)local_1168, pMVar7);
                local_1168->operator_cast_to_Matrix43T();
                this_05 =
                    (ParticleVertexDataProxy<math::Vector3T<float>>*)WrapArray<math::Matrix43T<float>>::operator[](
                        local_10d8.field_88, local_10d8.field_72);
                ParticleVertexDataProxy<math::Vector3T<float>>::operator=(this_05,
                                                                          (ParticleVertexDataProxy*)local_1168);
                puVar5 = puVar5 + 2;
            } while (puVar5 != local_1078);
        }
        local_1068->~fixed_vector();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100951cb0, 560 bytes, placed by class name
    // RealtimePoseAnimationSampler::GetLabelData(WrapArray<float>&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, AnimationLabelType) const
    void RealtimePoseAnimationSampler::GetLabelData(Layout* param_1, Layout* param_2, int param_4) {
        ushort uVar1;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_00;
        Layout* this_01;
        bool bVar2;
        char cVar3;
        uint uVar4;
        NXTRenderCanvas* this_02;
        shared_ptr* psVar5;
        ulong uVar6;
        float* pfVar7;
        long lVar8;
        long lVar9;
        float* pfVar10;
        ushort* puVar11;
        float* pfVar12;
        ulong uVar13;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar14;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL> local_68[24];
        ushort* local_50;
        ulong local_48;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* local_40;
        Layout* local_38;

        pvVar14 = (vector<oldscape::dash3d::EntityHighlight*,
                          BucketAllocatorEASTL>*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM;
        if (param_4 == 0) {
            pvVar14 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)PTR_IDENTITY_DELTA_100ee69f8;
        }
        local_40 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
                   eastl::allocator>*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORMS;
        if (param_4 == 0) {
            local_40 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                              eastl::allocator>*)PTR_IDENTITY_LABELDELTAS_100ee6a00;
        }
        local_38 = param_1;
        uVar4 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar14);
        this_02 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)(field_32 + 32));
        psVar5 = (shared_ptr*)this_02->GetPixelBuffer();
        bVar2 = operator==(psVar5, (_func_decltype_nullptr*)0);
        if ((bVar2) || (cVar3 = field_80->OverrideTransform(), cVar3 == '\0')) {
            uVar13 = local_40->end();
            uVar6 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(local_38);
            this_00 = local_40;
            if (uVar13 < uVar6) {
                /* WARNING: Subroutine does not return */
                LogAssert("identityList.size() >= concatenatedArrayOut.size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/RealtimePoseAnimationSampler.cpp",
                          157, (char*)0);
            }
            pfVar7 = (float*)local_40->data();
            lVar8 = this_00->data();
            this_01 = local_38;
            lVar9 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(local_38);
            pfVar10 = (float*)this_01->end();
            std::copy<float const*, float*>(pfVar7, (float*)(lVar8 + lVar9 * 4), pfVar10);
            return;
        }
        if (param_4 == 0) {
            local_68->GetLabelDeltas();
        } else {
            local_68->GetBillboardTransforms();
        }
        pfVar7 = (float*)pvVar14->data();
        lVar8 = pvVar14->data();
        lVar9 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar14);
        pfVar10 = (float*)local_38->end();
        std::copy<float const*, float*>(pfVar7, (float*)(lVar8 + lVar9 * 4), pfVar10);
        puVar11 = (ushort*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(param_2);
        local_50 = (ushort*)param_2->end();
        if (puVar11 != local_50) {
            local_48 = (ulong)uVar4;
            do {
                uVar1 = *puVar11;
                if (puVar11[1] * uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("dstBlock != 0",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/RealtimePoseAnimationSampler.cpp",
                              172, "AnimationState: Label data requested with a label slot of 0 - this is reserved!");
                }
                uVar13 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_68);
                pvVar14 = local_68;
                if (uVar13 <= uVar1 * uVar4) {
                    pvVar14 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)local_40;
                }
                pfVar10 = (float*)pvVar14->data();
                pfVar7 = pfVar10 + local_48;
                pfVar12 = (float*)local_38->end();
                std::copy<float const*, float*>(pfVar10, pfVar7, pfVar12);
                puVar11 = puVar11 + 2;
            } while (puVar11 != local_50);
        }
        local_68->~Array();
    }

    // 0x100951f90, 464 bytes, placed by class name
    // RealtimePoseAnimationSampler::ApplyBoneTransforms(math::Vector3T<float>&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, math::Matrix44T<float> const&) const
    void RealtimePoseAnimationSampler::ApplyBoneTransforms(Vector3T* param_1, vector_map* param_2, vector_map* param_3,
                                                           Matrix44T* param_4) {
        ushort uVar1;
        uchar uVar2;
        long lVar3;
        NXTRenderCanvas* this_00;
        shared_ptr<AnimKeyFrameSet>* this_01;
        RT7Core* pRVar4;
        shared_ptr<AnimBase>* psVar5;
        AnimBase* this_02;
        AnimKeyFrameSet* this_03;
        Array* this_04;
        Location* this_05;
        Array<unsigned short, eastl::allocator>* this_06;
        ushort* puVar6;
        Matrix44T local_138;
        WrapArray<unsigned char const> local_f8[64];
        undefined1 local_b8[64];
        undefined8 local_78[9];

        lVar3 = param_2->size();
        if (lVar3 != 1) {
            lVar3 = param_3->size();
            if (lVar3 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssert("boneMap.size() == 1 || jointMap.size() == 1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/RealtimePoseAnimationSampler.cpp",
                          182, (char*)0);
            }
        }
        this_00 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)(field_32 + 32));
        this_01 = (shared_ptr<AnimKeyFrameSet>*)this_00->GetPixelBuffer();
        pRVar4 = (RT7Core*)shared_ptr<AnimKeyFrameSet>::operator->(this_01);
        psVar5 = (shared_ptr<AnimBase>*)pRVar4->GetMSAASampleCount();
        this_02 = (AnimBase*)shared_ptr<AnimBase>::operator->(psVar5);
        this_03 = (AnimKeyFrameSet*)shared_ptr<AnimKeyFrameSet>::operator->(this_01);
        uVar2 = this_03->GetBindID();
        this_04 = (Array*)this_02->GetBindPose(uVar2);
        pRVar4 = (RT7Core*)shared_ptr<AnimKeyFrameSet>::operator->(this_01);
        psVar5 = (shared_ptr<AnimBase>*)pRVar4->GetMSAASampleCount();
        this_05 = (Location*)shared_ptr<AnimBase>::operator->(psVar5);
        this_06 = (Array<unsigned short, eastl::allocator>*)this_05->GetParentLocationType();
        puVar6 = (ushort*)param_2->HeapBeginPtr();
        puVar6 = (ushort*)Array<unsigned short, eastl::allocator>::operator[](this_06, (ulong)*puVar6);
        uVar1 = *puVar6;
        local_b8->GetPose();
        WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(
            (WrapArray<unsigned char const>*)local_78, (Array*)local_b8);
        WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(local_f8, this_04);
        pose::ConvertToMatrix((int)&local_138, (WrapArray*)(ulong)uVar1, (WrapArray*)local_78);
        local_b8->~Array();
        Array<Joint, eastl::allocator>::operator[]((Array<Joint, eastl::allocator>*)this_04, (ulong)uVar1);
        local_f8->GetWorldBindInverse();
        math::operator*((math*)local_78, (Matrix44T*)local_f8, (Matrix44T*)&graphics::MAYA_ANIM_INVERT_MATRIX);
        math::operator*((math*)local_b8, (Matrix44T*)local_78, &local_138);
        local_78[0] = math::operator*(param_1, (Matrix44T*)local_b8);
        param_1->SetXYZ(local_78);
    }

    // 0x100952160, 96 bytes, placed by class name
    // RealtimePoseAnimationSampler::SetAnimation(AnimationInfo const&)
    void RealtimePoseAnimationSampler::SetAnimation(AnimationInfo* param_1) {
        bool bVar1;

        bVar1 = operator!=((shared_ptr*)(field_32 + 32), (shared_ptr*)param_1->field_32);
        if (bVar1) {
            ((field_80 + 80))->Reset();
            (&field_224)->Reset();
            field_80->Reset();
        }
        AnimationInfo::operator=((AnimationInfo*)field_32, param_1);
    }

    // 0x1009521c0, 64 bytes, placed by class name
    // RealtimePoseAnimationSampler::Reset()
    void RealtimePoseAnimationSampler::Reset() {
        Reset();
        ((field_80 + 80))->Reset();
        (&field_224)->Reset();
        field_80->Reset();
    }

} // namespace jag::graphics

// 0x100951770, 16 bytes, placed by neighbouring functions
// modf(float, float*)
void modf(float param_1, float* param_2) {
    _modff();
}
