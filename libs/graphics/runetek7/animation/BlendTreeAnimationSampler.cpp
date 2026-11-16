// libs/graphics/runetek7/animation/BlendTreeAnimationSampler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "BlendTreeAnimationSampler.h"

namespace jag::graphics {
    // 0x10002d850: the linker folded this into oldscape::option::Option<int>::GetDefaultValue() const, which has identical code
    BlendTreeAnimationSampler::GetJointPoses() const;

    // 0x1001d2000: the linker folded this into oldscape::rseven::OSRenderCore_TextureDataProvider::GetTexturesCompressedDXTArchive() const, which has identical code
    Layout* BlendTreeAnimationSampler::GetBlendTree() const;

    // 0x10094d8c0, 112 bytes, base-object constructor, placed by class name
    // BlendTreeAnimationSampler::BlendTreeAnimationSampler()
    void BlendTreeAnimationSampler::BlendTreeAnimationSampler() {
        new (this) AnimationSampler();
        field_0 = &PTR__BlendTreeAnimationSampler_100f1afe0;
        new (&field_32) Array<JointPose, eastl::allocator>();
        new (&field_56) Array<math::Matrix44T<float>, eastl::allocator>();
        m_pBlendTree = (Layout*)0;
        m_drawDebugSkeleton = false;
    }

    // 0x10094d930, 16 bytes, complete-object constructor, placed by class name
    // BlendTreeAnimationSampler::BlendTreeAnimationSampler(): jumps straight to the base-object constructor

    // 0x10094d940, 672 bytes, placed by class name
    // BlendTreeAnimationSampler::CopyBoneMatricesToRT5VertexTransformData(WrapArray<JointPose const> const&, Array<Joint, eastl::allocator> const&, AnimKeyFrameSet const&, VertexTransformData&)
    void BlendTreeAnimationSampler::CopyBoneMatricesToRT5VertexTransformData(WrapArray* param_1, Array* param_2,
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
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_1078;
        ulong local_1070;
        fixed_vector local_1068[4144];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        param_1->HeapBeginPtr();
        eastl::fixed_vector<math::Matrix44T<float>, 64ul, true, eastl::allocator>::fixed_vector((ulong)local_1068);
        WrapArray<math::Matrix44T<float>>::WrapArray<
            eastl::fixed_vector<math::Matrix44T<float>, 64ul, true, eastl::allocator>>(
            (WrapArray<math::Matrix44T<float>>*)(local_10d8 + 64), local_1068);
        local_1078 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_32;
        WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(
            (WrapArray<unsigned char const>*)local_1118, (Array*)local_1078);
        WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(
            (WrapArray<unsigned char const>*)local_10d8, param_2);
        pose::ConvertToMatrices(local_10d8 + 64, local_1118, local_10d8);
        lVar3 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_1078);
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
                uVar10 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_1078);
                local_1070 = uVar11;
            } while (uVar11 < uVar10);
        }
        local_1068->~fixed_vector();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10094ded0, 480 bytes, placed by class name
    // BlendTreeAnimationSampler::UpdateJointMatricesFromPose(shared_ptr<AnimBase> const&, unsigned char)
    void BlendTreeAnimationSampler::UpdateJointMatricesFromPose(shared_ptr* param_1, uchar param_2) {
        AnimBase* this_00;
        ulong uVar1;
        long lVar2;
        Matrix44T* pMVar3;
        Matrix44T<float>* this_01;
        ulong uVar4;
        uint uVar5;
        undefined1* this_02;
        undefined1 local_1158[64];
        undefined1 local_1118[64];
        undefined1 local_10d8[88];
        Array<math::Matrix44T<float>, eastl::allocator>* local_1080;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_1078;
        Array* local_1070;
        fixed_vector local_1068[4144];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (AnimBase*)shared_ptr<AnimBase>::operator->((shared_ptr<AnimBase>*)param_1);
        local_1070 = (Array*)this_00->GetBindPose(param_2);
        this_02 = &field_32;
        uVar1 = this_02->end();
        local_1080 = (Array<math::Matrix44T<float>, eastl::allocator>*)&field_56;
        (&field_56, uVar1, 1)->set_max_size();
        this_02->end();
        eastl::fixed_vector<math::Matrix44T<float>, 64ul, true, eastl::allocator>::fixed_vector((ulong)local_1068);
        WrapArray<math::Matrix44T<float>>::WrapArray<
            eastl::fixed_vector<math::Matrix44T<float>, 64ul, true, eastl::allocator>>(
            (WrapArray<math::Matrix44T<float>>*)(local_10d8 + 72), local_1068);
        WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(
            (WrapArray<unsigned char const>*)local_1118, (Array*)this_02);
        WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(
            (WrapArray<unsigned char const>*)local_10d8, local_1070);
        pose::ConvertToMatrices(local_10d8 + 72, local_1118, local_10d8);
        local_1078 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_02;
        lVar2 = this_02->end();
        if (lVar2 != 0) {
            uVar5 = 1;
            uVar1 = 0;
            do {
                Array<Joint, eastl::allocator>::operator[]((Array<Joint, eastl::allocator>*)local_1070, uVar1);
                local_1158->GetWorldBindInverse();
                math::operator*((math*)local_10d8, (Matrix44T*)local_1158,
                                (Matrix44T*)&graphics::MAYA_ANIM_INVERT_MATRIX);
                pMVar3 = (Matrix44T*)
                    eastl::vector<math::Matrix44T<float>,
                                  eastl::fixed_vector_allocator<64ul, 64ul, 16ul, 0ul, true, eastl::allocator>>::
                    operator[]((vector<math::Matrix44T<float>,
                                       eastl::fixed_vector_allocator<64ul, 64ul, 16ul, 0ul, true, eastl::allocator>>*)
                                   local_1068,
                               uVar1);
                math::operator*((math*)local_1118, (Matrix44T*)local_10d8, pMVar3);
                this_01 =
                    (Matrix44T<float>*)Array<math::Matrix44T<float>, eastl::allocator>::operator[](local_1080, uVar1);
                math::Matrix44T<float>::operator=(this_01, (Matrix44T*)local_1118);
                uVar1 = (ulong)uVar5;
                uVar4 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_1078);
                uVar5 = uVar5 + 1;
            } while (uVar1 < uVar4);
        }
        local_1068->~fixed_vector();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10094e0b0, 240 bytes, placed by class name
    // BlendTreeAnimationSampler::Update(Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)
    void BlendTreeAnimationSampler::Update(Array* param_1, Matrix44T* param_2) {
        short sVar1;
        long lVar2;
        long* plVar3;
        shared_ptr<AnimBase>* this_00;
        AnimBase* this_01;
        shared_ptr* psVar4;
        WrapArray<unsigned char const> local_48[16];

        if (m_pBlendTree != (Layout*)0) {
            lVar2 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(m_pBlendTree);
            if (lVar2 != 0) {
                plVar3 = (long*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(m_pBlendTree);
                this_00 = (shared_ptr<AnimBase>*)(**(code**)(*plVar3 + 24))(plVar3);
                this_01 = (AnimBase*)shared_ptr<AnimBase>::operator->(this_00);
                sVar1 = this_01->GetNumJoints();
                (&field_32, (long)sVar1, 1)->set_max_size();
                WrapArray<unsigned char const>::WrapArray<Array<unsigned char, eastl::allocator>>(local_48,
                                                                                                  (Array*)&field_32);
                (**(code**)(*plVar3 + 16))(plVar3, local_48, param_1, param_2);
                psVar4 = (shared_ptr*)(**(code**)(*plVar3 + 24))(plVar3);
                lVar2 = (**(code**)(*plVar3 + 24))(plVar3);
                UpdateJointMatricesFromPose(this, psVar4, *(uchar*)(lVar2 + 16));
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("m_blendTree && m_blendTree->GetRoot()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/animation/"
                  "BlendTreeAnimationSampler.cpp",
                  72, "BlendTreeAnimationSampler::Update being called without a suitable blend tree");
    }

    // 0x10094e1a0, 208 bytes, placed by class name
    // BlendTreeAnimationSampler::GetRT5BoneTransforms(WrapArray<math::Matrix43T<float> >&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, math::Matrix44T<float> const&) const
    void BlendTreeAnimationSampler::GetRT5BoneTransforms(WrapArray* param_1, vector_map* param_2, vector_map* param_3,
                                                         Matrix44T* param_4) {
        ushort uVar1;
        long* plVar2;
        shared_ptr<AnimBase>* this_00;
        SceneManager* this_01;
        map<short, short, eastl::less<short>, eastl::allocator>* this_02;
        undefined2* puVar3;
        undefined2* puVar4;
        short* psVar5;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_03;
        Matrix44T local_78;
        BlendTreeAnimationSampler* local_38;

        if (m_pBlendTree != (Layout*)0) {
            local_38 = this;
            plVar2 = (long*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(m_pBlendTree);
            this_00 = (shared_ptr<AnimBase>*)(**(code**)(*plVar2 + 24))(plVar2);
            this_01 = (SceneManager*)shared_ptr<AnimBase>::operator->(this_00);
            this_02 =
                (map<short, short, eastl::less<short>, eastl::allocator>*)this_01->GetEntityHighlightGlobalState();
            puVar3 = (undefined2*)param_3->HeapBeginPtr();
            puVar4 = (undefined2*)param_3->end();
            if (puVar3 != puVar4) {
                local_38 = (BlendTreeAnimationSampler*)&local_38->field_56;
                do {
                    local_78._0_2_ = *puVar3;
                    uVar1 = puVar3[1];
                    psVar5 = (short*)eastl::map<short, short, eastl::less<short>, eastl::allocator>::operator[](
                        this_02, (short*)&local_78);
                    Array<math::Matrix44T<float>, eastl::allocator>::operator[](
                        (Array<math::Matrix44T<float>, eastl::allocator>*)local_38, (long)*psVar5);
                    math::Matrix44T::operator_cast_to_Matrix43T(&local_78);
                    this_03 =
                        (ParticleVertexDataProxy<math::Vector3T<float>>*)WrapArray<math::Matrix43T<float>>::operator[](
                            (WrapArray<math::Matrix43T<float>>*)param_1, (ulong)uVar1);
                    ParticleVertexDataProxy<math::Vector3T<float>>::operator=(this_03,
                                                                              (ParticleVertexDataProxy*)&local_78);
                    puVar3 = puVar3 + 2;
                } while (puVar3 != puVar4);
            }
        }
    }

    // 0x10094e270, 112 bytes, placed by class name
    // BlendTreeAnimationSampler::GetLabelData(WrapArray<float>&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, AnimationLabelType) const
    void BlendTreeAnimationSampler::GetLabelData(undefined8 param_1_00, Layout* param_1, undefined8 param_3,
                                                 int param_4) {
        int iVar1;
        void* pvVar2;
        void* pvVar3;
        Array<float, eastl::allocator>* this;

        if (param_4 == 0) {
            this = (Array<float, eastl::allocator>*)&AnimationConstants::IDENTITY_LABELDELTAS;
        } else {
            this = (Array<float, eastl::allocator>*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORMS;
        }
        iVar1 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(param_1);
        pvVar2 = (void*)WrapArray<float>::operator[]((WrapArray<float>*)param_1, 0);
        pvVar3 = (void*)Array<float, eastl::allocator>::operator[](this, 0);
        _memcpy(pvVar2, pvVar3, (ulong)(uint)(iVar1 * 4));
    }

    // 0x10094e2e0, 224 bytes, placed by class name
    // BlendTreeAnimationSampler::ApplyBoneTransforms(math::Vector3T<float>&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, math::Matrix44T<float> const&) const
    void BlendTreeAnimationSampler::ApplyBoneTransforms(Vector3T* param_1, vector_map* param_2, vector_map* param_3,
                                                        Matrix44T* param_4) {
        long lVar1;
        long* plVar2;
        shared_ptr<AnimBase>* this_00;
        SceneManager* this_01;
        map<short, short, eastl::less<short>, eastl::allocator>* this_02;
        short* psVar3;
        Matrix44T* pMVar4;
        undefined8 local_38;
        short local_2a;

        lVar1 = param_2->size();
        if (lVar1 != 1) {
            lVar1 = param_3->size();
            if (lVar1 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssert("boneMap.size() == 1 || jointMap.size() == 1",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/BlendTreeAnimationSampler.cpp",
                          132, (char*)0);
            }
        }
        lVar1 = param_3->size();
        if (lVar1 == 1) {
            plVar2 = (long*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(m_pBlendTree);
            this_00 = (shared_ptr<AnimBase>*)(**(code**)(*plVar2 + 24))(plVar2);
            this_01 = (SceneManager*)shared_ptr<AnimBase>::operator->(this_00);
            this_02 =
                (map<short, short, eastl::less<short>, eastl::allocator>*)this_01->GetEntityHighlightGlobalState();
            psVar3 = (short*)param_3->HeapBeginPtr();
            local_2a = *psVar3;
            psVar3 =
                (short*)eastl::map<short, short, eastl::less<short>, eastl::allocator>::operator[](this_02, &local_2a);
            pMVar4 = (Matrix44T*)Array<math::Matrix44T<float>, eastl::allocator>::operator[](
                (Array<math::Matrix44T<float>, eastl::allocator>*)&field_56, (long)*psVar3);
            local_38 = math::operator*(param_1, pMVar4);
            param_1->SetXYZ((Vector3T*)&local_38);
        }
    }

    // 0x100953fd0: the linker folded this into RT5AnimationSampler::SetTransformMaskToggle(bool), which has identical code
    BlendTreeAnimationSampler::SetDrawDebugSkeleton(bool);

    // 0x100953fe0: the linker folded this into RT5AnimationSampler::SetVertexTransformsOverride(VertexTransformData*), which has identical code
    BlendTreeAnimationSampler::SetBlendTree(BlendTree*);

} // namespace jag::graphics
