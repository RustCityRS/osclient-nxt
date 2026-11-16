// libs/oldscape/jagex3/dash3d/PoseStateRSeven.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "PoseStateRSeven.h"

namespace jag::oldscape::dash3d {
    // 0x100024170: the linker folded this into option::IScriptOption::GetId() const, which has identical code
    PoseStateRSeven::GetType() const;

    // 0x10014d2f0: the linker folded this into ApplicationContext::GetScreenRatio(), which has identical code
    PoseStateRSeven::GetLabelTransparencyDelta(unsigned long) const;

    // 0x1002ecfe0, 32 bytes, placed by debug map only (low confidence)
    // TransformedPoseStateRSeven::GetBoneTransform(unsigned long) const
    TransformedPoseStateRSeven* TransformedPoseStateRSeven::GetBoneTransform(ulong param_1) {
        undefined** ppuVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        ppuVar1 = *(undefined***)(param_1 + 16);
        uVar2 = *(undefined8*)(param_1 + 24);
        uVar3 = *(undefined8*)(param_1 + 32);
        uVar4 = *(undefined8*)(param_1 + 40);
        uVar5 = *(undefined8*)(param_1 + 56);
        field_32 = *(undefined8*)(param_1 + 48);
        field_40 = uVar5;
        field_16 = uVar3;
        field_24 = uVar4;
        field_0 = ppuVar1;
        *(undefined8*)&field_8 = uVar2;
        return this;
    }

    // 0x1002ed000, 32 bytes, placed by debug map only (low confidence)
    // TransformedPoseStateRSeven::GetJointTransform(unsigned long) const
    TransformedPoseStateRSeven* TransformedPoseStateRSeven::GetJointTransform(ulong param_1) {
        undefined** ppuVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        ppuVar1 = *(undefined***)(param_1 + 16);
        uVar2 = *(undefined8*)(param_1 + 24);
        uVar3 = *(undefined8*)(param_1 + 32);
        uVar4 = *(undefined8*)(param_1 + 40);
        uVar5 = *(undefined8*)(param_1 + 56);
        field_32 = *(undefined8*)(param_1 + 48);
        field_40 = uVar5;
        field_16 = uVar3;
        field_24 = uVar4;
        field_0 = ppuVar1;
        *(undefined8*)&field_8 = uVar2;
        return this;
    }

    // 0x1002ed020, 64 bytes, placed by debug map only (low confidence)
    // TransformedPoseStateRSeven::IsEqual(PoseStateRSeven const&) const
    bool TransformedPoseStateRSeven::IsEqual(PoseStateRSeven* param_1) {
        bool bVar1;

        if (param_1->GetPos() == 5) {
            bVar1 = jag::math::operator==((Matrix43T*)&field_16, (Matrix43T*)&param_1->field_16);
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x1002ed0c0, 32 bytes, placed by debug map only (low confidence)
    // MayaPoseStateRSeven::InitializeFrameData() const
    void MayaPoseStateRSeven::InitializeFrameData() {
        PoseSkeleton(this);
        AnimateKeyFramedTransparency(this);
    }

    // 0x1002ed0e0, 752 bytes, placed by debug map only (low confidence)
    // MayaPoseStateRSeven::PoseSkeleton() const
    void MayaPoseStateRSeven::PoseSkeleton() {
        undefined1* this_00;
        shared_ptr<AnimBase>* this_01;
        Skeleton* pSVar1;
        Array* pAVar2;
        vector<EntityHighlight*, BucketAllocatorEASTL>* pvVar3;
        long lVar4;
        shared_ptr<graphics::animation::OldscapeJoint>* this_02;
        OldscapeJoint* this_03;
        math* this_04;
        Vector4T<float>* this_05;
        Array<jag::math::Matrix43T<float>, eastl::allocator>* this_06;
        ParticleVertexDataProxy<jag::math::Vector3T<float>>* this_07;
        ulong uVar5;
        bool bVar6;
        int iVar7;
        OldscapeAnimKeyFrameSet* pOVar8;
        ulong uVar9;
        uint in_XMM1_Da;
        Matrix44T local_98;
        uint local_60;
        shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>* local_58;
        undefined8 local_50;
        uint local_48;
        undefined4 uStack_44;
        undefined4 uStack_40;
        undefined4 uStack_3c;

        local_58 = (shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>*)field_16;
        pOVar8 =
            (OldscapeAnimKeyFrameSet*)shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>::operator*(local_58);
        this_01 = (shared_ptr<AnimBase>*)pOVar8->GetBase();
        local_50 = shared_ptr<AnimBase>::operator*(this_01);
        local_98.GetSkeleton();
        bVar6 = operator!=((shared_ptr*)&local_98, (_func_decltype_nullptr*)0);
        local_98.~shared_ptr();
        if (bVar6) {
            bVar6 = field_40->operator_cast_to_bool();
            if (bVar6) {
                local_98.GetSkeleton();
                pSVar1 = (Skeleton*)shared_ptr<Skeleton>::operator->((shared_ptr<Skeleton>*)&local_98);
                iVar7 = field_32;
                pAVar2 = (Array*)shared_ptr<Array<bool, eastl::allocator>>::operator*(
                    (shared_ptr<Array<bool, eastl::allocator>>*)field_40);
                pSVar1->Animate(pOVar8, iVar7, pAVar2, field_56);
            } else {
                local_98.GetSkeleton();
                pSVar1 = (Skeleton*)shared_ptr<Skeleton>::operator->((shared_ptr<Skeleton>*)&local_98);
                pSVar1->Animate(pOVar8, field_32);
            }
            local_98.~shared_ptr();
            pvVar3 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)GetJointPositions(this);
            lVar4 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar3);
            if (lVar4 != 0) {
                uVar9 = 0;
                this_00 = &local_98.field_48;
                do {
                    this_00->GetSkeleton();
                    pSVar1 = (Skeleton*)shared_ptr<Skeleton>::operator->((shared_ptr<Skeleton>*)this_00);
                    this_02 = (shared_ptr<graphics::animation::OldscapeJoint>*)pSVar1->GetJoint((int)uVar9);
                    this_03 = (OldscapeJoint*)shared_ptr<graphics::animation::OldscapeJoint>::operator->(this_02);
                    pOVar8 =
                        (OldscapeAnimKeyFrameSet*)shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>::operator->(
                            local_58);
                    iVar7 = pOVar8->GetBind();
                    this_03->GetSkinningMatrix(iVar7);
                    jag::math::Matrix44T::operator_cast_to_Matrix43T(&local_98);
                    this_00->~shared_ptr();
                    this_04 = (math*)jag::math::Matrix43T<float>::operator[]((Matrix43T<float>*)&local_98, 2);
                    local_98._48_8_ = jag::math::operator-(this_04, (Vector3T*)2);
                    local_60 = in_XMM1_Da;
                    this_05 =
                        (Vector4T<float>*)jag::math::Matrix43T<float>::operator[]((Matrix43T<float>*)&local_98, 2);
                    jag::math::Vector4T<float>::SetXYZ(this_05, (Vector3T*)this_00);
                    lVar4 = jag::math::Matrix43T<float>::operator[]((Matrix43T<float>*)&local_98, 0);
                    in_XMM1_Da = *(uint*)(lVar4 + 8) ^ 2147483648;
                    uStack_44 = 2147483648;
                    uStack_40 = 2147483648;
                    uStack_3c = 2147483648;
                    local_48 = in_XMM1_Da;
                    lVar4 = jag::math::Matrix43T<float>::operator[]((Matrix43T<float>*)&local_98, 0);
                    *(uint*)(lVar4 + 8) = local_48;
                    lVar4 = jag::math::Matrix43T<float>::operator[]((Matrix43T<float>*)&local_98, 1);
                    local_48 = *(uint*)(lVar4 + 8) ^ 2147483648;
                    uStack_44 = 2147483648;
                    uStack_40 = 2147483648;
                    uStack_3c = 2147483648;
                    lVar4 = jag::math::Matrix43T<float>::operator[]((Matrix43T<float>*)&local_98, 1);
                    *(uint*)(lVar4 + 8) = local_48;
                    lVar4 = jag::math::Matrix43T<float>::operator[]((Matrix43T<float>*)&local_98, 2);
                    local_48 = *(uint*)(lVar4 + 8) ^ 2147483648;
                    uStack_44 = 2147483648;
                    uStack_40 = 2147483648;
                    uStack_3c = 2147483648;
                    lVar4 = jag::math::Matrix43T<float>::operator[]((Matrix43T<float>*)&local_98, 2);
                    *(uint*)(lVar4 + 8) = local_48;
                    lVar4 = jag::math::Matrix43T<float>::operator[]((Matrix43T<float>*)&local_98, 3);
                    local_48 = *(uint*)(lVar4 + 8) ^ 2147483648;
                    uStack_44 = 2147483648;
                    uStack_40 = 2147483648;
                    uStack_3c = 2147483648;
                    lVar4 = jag::math::Matrix43T<float>::operator[]((Matrix43T<float>*)&local_98, 3);
                    *(uint*)(lVar4 + 8) = local_48;
                    this_06 = (Array<jag::math::Matrix43T<float>, eastl::allocator>*)GetJointPositions(this);
                    this_07 = (ParticleVertexDataProxy<jag::math::Vector3T<float>>*)
                        Array<jag::math::Matrix43T<float>, eastl::allocator>::operator[](this_06, uVar9);
                    jag::graphics::ParticleVertexDataProxy<jag::math::Vector3T<float>>::operator=(
                        this_07, (ParticleVertexDataProxy*)&local_98);
                    uVar9 = uVar9 + 1;
                    pvVar3 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)GetJointPositions(this);
                    uVar5 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(pvVar3);
                } while (uVar9 < uVar5);
            }
        }
    }

    // 0x1002ed3d0, 144 bytes, placed by debug map only (low confidence)
    // MayaPoseStateRSeven::AnimateKeyFramedTransparency() const
    void MayaPoseStateRSeven::AnimateKeyFramedTransparency() {
        int iVar1;
        OldscapeAnimKeyFrameSet* pOVar2;
        function<void(int, float)> local_68[56];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pOVar2 = (OldscapeAnimKeyFrameSet*)shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>::operator->(
            (shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>*)field_16);
        iVar1 = field_32;
        std::function<void(int, float)>::function<MayaPoseStateRSeven::AnimateKeyFramedTransparency() const ::__0,
                                                  void>(local_68, this);
        pOVar2->AnimateKeyFramedTransparency(iVar1, local_68);
        std::function<void(int, float)>::~function(local_68);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1002ed460, 80 bytes, placed by debug map only (low confidence)
    // MayaPoseStateRSeven::GetJointPositions() const
    void MayaPoseStateRSeven::GetJointPositions() {
        if (!(&field_64)->operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_jointPositions",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "PoseStateRSeven.cpp",
                      67, "InitializeFrameData was not called before attempting to obtain joint positions.");
        }
        std::unique_ptr<Array<jag::math::Matrix43T<float>, eastl::allocator>,
                        std::default_delete<Array<jag::math::Matrix43T<float>, eastl::allocator>>>::
        operator*((unique_ptr<Array<jag::math::Matrix43T<float>, eastl::allocator>,
                              std::default_delete<Array<jag::math::Matrix43T<float>, eastl::allocator>>>*)&field_64);
    }

    // 0x1002ed4e0, 144 bytes, placed by debug map only (low confidence)
    // MayaPoseStateRSeven::GetJointTransform(unsigned long) const
    MayaPoseStateRSeven* MayaPoseStateRSeven::GetJointTransform(ulong param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined** ppuVar6;
        vector<EntityHighlight*, BucketAllocatorEASTL>* this_00;
        ulong uVar7;
        Array<jag::math::Matrix43T<float>, eastl::allocator>* this_01;
        undefined8* puVar8;
        ulong in_RDX;

        InitializeIfRequired((MayaPoseStateRSeven*)param_1);
        this_00 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)GetJointPositions((MayaPoseStateRSeven*)param_1);
        uVar7 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        if (in_RDX < uVar7) {
            this_01 =
                (Array<jag::math::Matrix43T<float>, eastl::allocator>*)GetJointPositions((MayaPoseStateRSeven*)param_1);
            puVar8 = (undefined8*)Array<jag::math::Matrix43T<float>, eastl::allocator>::operator[](this_01, in_RDX);
            uVar1 = puVar8[1];
            uVar2 = puVar8[2];
            uVar3 = puVar8[3];
            uVar4 = puVar8[4];
            uVar5 = puVar8[5];
            field_0 = (undefined**)*puVar8;
            *(undefined8*)&field_8 = uVar1;
            *(undefined8*)field_16 = uVar2;
            *(undefined8*)(field_16 + 8) = uVar3;
            *(undefined8*)&field_32 = uVar4;
            *(undefined8*)field_40 = uVar5;
        } else {
            ppuVar6 = *(undefined***)PTR_IDENTITY_100ee6720;
            uVar1 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 8);
            uVar2 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 16);
            uVar3 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 24);
            uVar4 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 40);
            *(undefined8*)&field_32 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 32);
            *(undefined8*)field_40 = uVar4;
            *(undefined8*)field_16 = uVar2;
            *(undefined8*)(field_16 + 8) = uVar3;
            field_0 = ppuVar6;
            *(undefined8*)&field_8 = uVar1;
        }
        return this;
    }

    // 0x1002ed570, 176 bytes, placed by debug map only (low confidence)
    // MayaPoseStateRSeven::InitializeIfRequired() const
    void MayaPoseStateRSeven::InitializeIfRequired() {
        OldscapeAnimKeyFrameSet* this_00;
        shared_ptr<AnimBase>* this_01;
        Skeleton* this_02;
        unique_ptr local_40[20];
        Matrix43T local_2c[4];

        if (!(&field_64)->operator_cast_to_bool()) {
            this_00 = (OldscapeAnimKeyFrameSet*)shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>::operator->(
                (shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>*)field_16);
            this_01 = (shared_ptr<AnimBase>*)this_00->GetBase();
            shared_ptr<AnimBase>::operator->(this_01);
            local_40->GetSkeleton();
            this_02 = (Skeleton*)local_40->end();
            local_40->~shared_ptr();
            if (this_02 == (Skeleton*)0) {
                local_2c = (Matrix43T[4])0;
            } else {
                local_2c = (Matrix43T[4])this_02->GetNumOfJoints();
            }
            std::make_unique<Array<jag::math::Matrix43T<float>, eastl::allocator>, int,
                             jag::math::Matrix43T<float> const&>((int*)local_40, local_2c);
            std::unique_ptr<Array<jag::math::Matrix43T<float>, eastl::allocator>,
                            std::default_delete<Array<jag::math::Matrix43T<float>, eastl::allocator>>>::
            operator=((unique_ptr<Array<jag::math::Matrix43T<float>, eastl::allocator>,
                                  std::default_delete<Array<jag::math::Matrix43T<float>, eastl::allocator>>>*)&field_64,
                      local_40);
            local_40->~unique_ptr();
            (*(code*)field_0[4])(this);
        }
    }

    // 0x1002edc00, 16 bytes, placed by class name
    // PoseStateRSeven::IsEqual(PoseStateRSeven const&) const
    undefined8 PoseStateRSeven::IsEqual(PoseStateRSeven* param_1) {
        return 0;
    }

    // 0x1002edc10, 320 bytes, placed by neighbouring functions
    // DashPoseStateRSeven::InitializeFrameData()
    void DashPoseStateRSeven::InitializeFrameData() {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        int iVar4;
        Array<AnimFrame, eastl::allocator>* this_00;
        shared_ptr<AnimBase>* this_01;
        long lVar5;
        int* piVar6;
        undefined4* puVar7;
        undefined8 uVar8;
        ulong uVar9;
        undefined8 local_80;
        undefined4 local_78;
        vector<eastl::vector<int, eastl::allocator>, eastl::allocator>* local_68;
        Array<int, eastl::allocator>* local_60;
        vector<int, eastl::allocator>* local_58;
        shared_ptr<AnimBase>* local_50;
        shared_ptr<AnimBase>* local_48;
        shared_ptr<AnimBase>* local_40;
        shared_ptr<AnimBase>* local_38;

        this_00 = (Array<AnimFrame, eastl::allocator>*)GetFrameSet();
        iVar4 = GetFrame();
        this_01 = (shared_ptr<AnimBase>*)Array<AnimFrame, eastl::allocator>::operator[](this_00, (long)iVar4);
        lVar5 = shared_ptr<AnimBase>::operator*(this_01);
        local_78 = *(undefined4*)(PTR_ZERO_100ee66e8 + 8);
        local_80 = *(undefined8*)PTR_ZERO_100ee66e8;
        if (0 < *(int*)(this_01 + 16)) {
            local_60 = (Array<int, eastl::allocator>*)(this_01 + 24);
            local_58 = (vector<int, eastl::allocator>*)(lVar5 + 8);
            local_68 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)(lVar5 + 40);
            local_50 = this_01 + 48;
            local_48 = this_01 + 72;
            local_40 = this_01 + 96;
            uVar9 = 0;
            local_38 = this_01;
            do {
                piVar6 = (int*)Array<int, eastl::allocator>::operator[](local_60, uVar9);
                iVar4 = *piVar6;
                puVar7 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_58, (long)iVar4);
                uVar1 = *puVar7;
                uVar8 = eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](local_68,
                                                                                                          (long)iVar4);
                puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)local_50,
                                                                               uVar9);
                uVar2 = *puVar7;
                puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)local_48,
                                                                               uVar9);
                uVar3 = *puVar7;
                puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)local_40,
                                                                               uVar9);
                (*(code*)((DashPoseStateRSeven*)this)->field_0[4])((DashPoseStateRSeven*)this, uVar1, uVar8, uVar2,
                                                                   uVar3, *puVar7, &local_80);
                uVar9 = uVar9 + 1;
            } while ((long)uVar9 < (long)*(int*)(local_38 + 16));
        }
    }

    // 0x1002edd50, 16 bytes, placed by neighbouring functions
    // DashBasePoseStateRSeven::GetFrameSet() const
    void DashBasePoseStateRSeven::GetFrameSet() {
        shared_ptr<AnimFrameSet>::operator*((shared_ptr<AnimFrameSet>*)field_16);
    }

    // 0x1002edd60, 16 bytes, placed by neighbouring functions
    // DashBasePoseStateRSeven::GetFrame() const
    undefined4 DashBasePoseStateRSeven::GetFrame() {
        return m_frame;
    }

    // 0x1002eddb0, 128 bytes, placed by neighbouring functions
    // DashBasePoseStateRSeven::GetBoneTransform(unsigned long) const
    DashBasePoseStateRSeven* DashBasePoseStateRSeven::GetBoneTransform(ulong param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined** ppuVar6;
        vector<EntityHighlight*, BucketAllocatorEASTL>* this_00;
        ulong uVar7;
        Array<jag::math::Matrix43T<float>, eastl::allocator>* this_01;
        undefined8* puVar8;
        ulong in_RDX;

        this_00 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)GetBonePositions((DashBasePoseStateRSeven*)param_1);
        uVar7 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        if (in_RDX < uVar7) {
            this_01 = (Array<jag::math::Matrix43T<float>, eastl::allocator>*)GetBonePositions(
                (DashBasePoseStateRSeven*)param_1);
            puVar8 = (undefined8*)Array<jag::math::Matrix43T<float>, eastl::allocator>::operator[](this_01, in_RDX);
            uVar1 = puVar8[1];
            uVar2 = puVar8[2];
            uVar3 = puVar8[3];
            uVar4 = puVar8[4];
            uVar5 = puVar8[5];
            field_0 = (undefined**)*puVar8;
            field_8 = uVar1;
            *(undefined8*)field_16 = uVar2;
            *(undefined8*)(field_16 + 8) = uVar3;
            *(undefined8*)&m_frame = uVar4;
            field_40 = uVar5;
        } else {
            ppuVar6 = *(undefined***)PTR_IDENTITY_100ee6720;
            uVar1 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 8);
            uVar2 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 16);
            uVar3 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 24);
            uVar4 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 40);
            *(undefined8*)&m_frame = *(undefined8*)(PTR_IDENTITY_100ee6720 + 32);
            field_40 = uVar4;
            *(undefined8*)field_16 = uVar2;
            *(undefined8*)(field_16 + 8) = uVar3;
            field_0 = ppuVar6;
            field_8 = uVar1;
        }
        return this;
    }

    // 0x1002ede30, 80 bytes, placed by __FILE__ string
    // DashBasePoseStateRSeven::GetBonePositions() const
    void DashBasePoseStateRSeven::GetBonePositions() {
        if (!(&field_40)->operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_bonePositions",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "PoseStateRSeven.cpp",
                      246, "InitializeFrameData was not called before attempting to obtain bone positions.");
        }
        std::unique_ptr<Array<jag::math::Matrix43T<float>, eastl::allocator>,
                        std::default_delete<Array<jag::math::Matrix43T<float>, eastl::allocator>>>::
        operator*((unique_ptr<Array<jag::math::Matrix43T<float>, eastl::allocator>,
                              std::default_delete<Array<jag::math::Matrix43T<float>, eastl::allocator>>>*)&field_40);
    }

    // 0x1002ede80, 64 bytes, placed by neighbouring functions
    // DashBasePoseStateRSeven::GetLabelTransparencyDelta(unsigned long) const
    undefined4 DashBasePoseStateRSeven::GetLabelTransparencyDelta(ulong param_1) {
        vector<EntityHighlight*, BucketAllocatorEASTL>* this_00;
        ulong uVar1;
        Array<float, eastl::allocator>* this_01;
        undefined4* puVar2;
        undefined4 uVar3;

        this_00 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)GetFaceTransparencyDeltas(this);
        uVar1 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        uVar3 = 0;
        if (param_1 < uVar1) {
            this_01 = (Array<float, eastl::allocator>*)GetFaceTransparencyDeltas(this);
            puVar2 = (undefined4*)Array<float, eastl::allocator>::operator[](this_01, param_1);
            uVar3 = *puVar2;
        }
        return uVar3;
    }

    // 0x1002edec0, 80 bytes, placed by __FILE__ string
    // DashBasePoseStateRSeven::GetFaceTransparencyDeltas() const
    void DashBasePoseStateRSeven::GetFaceTransparencyDeltas() {
        if (!(&field_48)->operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_faceTransparencyDeltas",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "PoseStateRSeven.cpp",
                      252, "InitializeFrameData was not called before attempting to obtain bone positions.");
        }
        std::unique_ptr<Array<float, eastl::allocator>, std::default_delete<Array<float, eastl::allocator>>>::operator*(
            (unique_ptr<Array<float, eastl::allocator>,
                        std::default_delete<Array<float, eastl::allocator>>>*)&field_48);
    }

    // 0x1002edf50, 96 bytes, placed by neighbouring functions
    // DashBasePoseStateRSeven::IsBaseEqual(DashBasePoseStateRSeven const&) const
    bool DashBasePoseStateRSeven::IsBaseEqual(DashBasePoseStateRSeven* param_1) {
        bool bVar1;
        shared_ptr* in_RDX;
        hashtable_iterator_base* extraout_RDX;

        bVar1 = operator==((jag*)field_16, (shared_ptr*)param_1->field_16, in_RDX);
        if (((bVar1) && (m_frame == param_1->m_frame)) &&
            (bVar1 = eastl::operator==((eastl*)&field_56, (hashtable_iterator_base*)&param_1->field_56, extraout_RDX),
             bVar1)) {
            bVar1 = jag::math::operator==((Matrix43T*)&field_80, (Matrix43T*)&param_1->field_80);
            return bVar1;
        }
        return false;
    }

    // 0x1002edfb0, 48 bytes, placed by neighbouring functions
    // DashPoseStateRSeven::IsEqual(PoseStateRSeven const&) const
    undefined8 DashPoseStateRSeven::IsEqual(PoseStateRSeven* param_1) {
        undefined8 uVar2;

        if (param_1->GetPos() == 1) {
            uVar2 = IsBaseEqual(param_1);
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

    // 0x1002ee010, 80 bytes, placed by neighbouring functions
    // DashBasePoseStateRSeven::ApplyAnimationTransform(int, eastl::vector<int, eastl::allocator> const&, int, int, int, jag::math::Vector3T<float>&) const
    void DashBasePoseStateRSeven::ApplyAnimationTransform(int param_1, vector* param_2, int param_3, int param_4,
                                                          int param_5, Vector3T* param_6) {
        if (param_1 == 5) {
            (*(code*)field_0[7])(this, param_2, param_3);
        } else if (param_1 == 0) {
            (*(code*)field_0[6])(this, param_2, param_6);
        } else {
            UpdateBonePositions(this, param_6, param_1, param_3, param_4, param_5, param_2);
        }
    }

    // 0x1002ee060, 304 bytes, placed by neighbouring functions
    // DashBasePoseStateRSeven::UpdateBonePositions(jag::math::Vector3T<float> const&, int, int, int, int, eastl::vector<int, eastl::allocator> const&) const
    void DashBasePoseStateRSeven::UpdateBonePositions(Vector3T* param_1, int param_2, int param_3, int param_4,
                                                      int param_5, vector* param_6) {
        int iVar1;
        Vector3T<float>* this_00;
        long lVar2;
        int* piVar3;
        vector<EntityHighlight*, BucketAllocatorEASTL>* this_01;
        ulong uVar4;
        Array<jag::math::Matrix43T<float>, eastl::allocator>* this_02;
        Matrix43T<float>* this_03;
        ulong uVar5;
        Matrix43T local_d8[48];
        undefined1 local_a8[96];
        undefined8 local_48;

        local_48 = jag::math::operator-((math*)param_1, param_1);
        new ((local_a8 + 48)) jag::math::Matrix43T<float>(PTR_IDENTITY_100ee6718, (Vector3T*)&local_48);
        (*(code*)field_0[5])(local_d8, this, param_2, param_3, param_4, param_5);
        jag::math::operator*((math*)local_a8, (Matrix43T*)(local_a8 + 48), local_d8);
        this_00 = (Vector3T<float>*)jag::math::Matrix43T<float>::operator[]((Matrix43T<float>*)local_a8, 3);
        jag::math::Vector3T<float>::operator+=(this_00, param_1);
        lVar2 = param_6->size();
        if (lVar2 != 0) {
            uVar5 = 0;
            do {
                piVar3 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)param_6,
                                                                                uVar5);
                iVar1 = *piVar3;
                this_01 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)GetBonePositions(this);
                uVar4 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
                if ((ulong)(long)iVar1 < uVar4) {
                    this_02 = (Array<jag::math::Matrix43T<float>, eastl::allocator>*)GetBonePositions(this);
                    this_03 = (Matrix43T<float>*)Array<jag::math::Matrix43T<float>, eastl::allocator>::operator[](
                        this_02, (long)iVar1);
                    jag::math::Matrix43T<float>::operator*=(this_03, (Matrix43T*)local_a8);
                }
                uVar5 = uVar5 + 1;
                uVar4 = param_6->size();
            } while (uVar5 < uVar4);
        }
    }

    // 0x1002ee1d0, 544 bytes, placed by __FILE__ string
    // DashBasePoseStateRSeven::GetAnimationTransform(int, int, int, int) const
    DashBasePoseStateRSeven* DashBasePoseStateRSeven::GetAnimationTransform(int param_1, int param_2, int param_3,
                                                                            int param_4) {
        undefined** ppuVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        vector* pvVar5;
        float* pfVar6;
        undefined8 uVar7;
        undefined4 in_register_00000034;
        type* ptVar8;
        uint in_R9D;
        Layout local_80[8];
        float local_78;
        ColourHSL local_58;
        undefined8 local_48;
        undefined8 uStack_40;
        undefined4 local_38;
        float local_30;
        float local_2c;

        ptVar8 = (type*)CONCAT44(in_register_00000034, param_1);
        if (param_2 == 3) {
            new (&local_58) jag::math::ColourHSL((float)param_3, (float)param_4, (float)(int)in_R9D);
            local_80 = (Layout[8])jag::math::operator/((Vector3T*)&local_58, 128.0);
            local_78 = (float)param_4;
            pvVar5 = eastl::string::Layout::SSOBeginPtr(local_80, ptVar8);
            local_30 = *(float*)pvVar5;
            pfVar6 = (float*)local_80->y();
            local_2c = *pfVar6;
            pfVar6 = (float*)local_80->second();
            jag::math::Matrix33Scaling<float>((math*)&local_58, local_30, local_2c, *pfVar6);
            new (this) jag::math::Matrix43T<float>((Matrix33T*)&local_58, PTR_ZERO_100ee66e8);
        } else if (param_2 == 2) {
            local_38 = *(undefined4*)(PTR_IDENTITY_100ee6718 + 32);
            local_58._0_8_ = *(undefined8*)PTR_IDENTITY_100ee6718;
            local_58._8_8_ = *(undefined8*)(PTR_IDENTITY_100ee6718 + 8);
            local_48 = *(undefined8*)(PTR_IDENTITY_100ee6718 + 16);
            uStack_40 = *(undefined8*)(PTR_IDENTITY_100ee6718 + 24);
            if ((in_R9D & 255) != 0) {
                jag::math::Matrix33RotationZ<float>((math*)local_80, (float)((in_R9D & 255) << 3) * 0.0030679617);
                jag::math::Matrix33T<float>::operator=((Matrix33T<float>*)&local_58, (Matrix33T*)local_80);
            }
            if ((param_3 & 255U) != 0) {
                jag::math::Matrix33RotationX<float>((math*)local_80,
                                                    (float)(int)((param_3 & 255U) * -8) * 0.0030679617);
                jag::math::Matrix33T<float>::operator*=((Matrix33T<float>*)&local_58, (Matrix33T*)local_80);
            }
            if ((param_4 & 255U) != 0) {
                jag::math::Matrix33RotationY<float>((math*)local_80, (float)((param_4 & 255U) << 3) * 0.0030679617);
                jag::math::Matrix33T<float>::operator*=((Matrix33T<float>*)&local_58, (Matrix33T*)local_80);
            }
            new (this) jag::math::Matrix43T<float>((Matrix33T*)&local_58, PTR_ZERO_100ee66e8);
        } else if (param_2 == 1) {
            new (&local_58) jag::math::ColourHSL((float)param_3, -(float)param_4, (float)(int)in_R9D);
            new (this) jag::math::Matrix43T<float>(PTR_IDENTITY_100ee6718, (Vector3T*)&local_58);
        } else {
            uVar7 = logger::default_logger();
            logger::Logger::Log(uVar7, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "dash3d/PoseStateRSeven.cpp",
                                332, "Unrecognized animation transform type %d", param_2);
            ppuVar1 = *(undefined***)PTR_IDENTITY_100ee6720;
            uVar7 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 8);
            uVar2 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 16);
            uVar3 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 24);
            uVar4 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 40);
            *(undefined8*)&m_frame = *(undefined8*)(PTR_IDENTITY_100ee6720 + 32);
            field_40 = uVar4;
            *(undefined8*)field_16 = uVar2;
            *(undefined8*)(field_16 + 8) = uVar3;
            field_0 = ppuVar1;
            field_8 = uVar7;
        }
        return this;
    }

    // 0x1002ef450, 208 bytes, placed by __FILE__ string
    // PoseStateProviderRSeven::ApplyBoneTransforms(jag::math::Vector3T<float>&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, jag::math::Matrix44T<float> const&) const
    void PoseStateProviderRSeven::ApplyBoneTransforms(Vector3T* param_1, vector_map* param_2, vector_map* param_3,
                                                      Matrix44T* param_4) {
        long lVar1;
        undefined8* puVar2;
        undefined2* puVar3;
        long* plVar4;
        Matrix43T local_58[48];

        lVar1 = param_2->size();
        if (lVar1 == 1) {
            puVar2 = (undefined8*)shared_ptr<PoseStateRSeven>::operator->((shared_ptr<PoseStateRSeven>*)field_24);
            puVar3 = (undefined2*)param_2->front();
            (**(code**)*puVar2)(local_58, puVar2, *puVar3);
        } else {
            lVar1 = param_3->size();
            if (lVar1 != 1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "dash3d/PoseStateRSeven.cpp",
                                456, "Only a single bone or joint may be computed at a time for a CPU-side vertex.");
            }
            plVar4 = (long*)shared_ptr<PoseStateRSeven>::operator->((shared_ptr<PoseStateRSeven>*)field_24);
            puVar3 = (undefined2*)param_3->front();
            (**(code**)(*plVar4 + 8))(local_58, plVar4, *puVar3);
        }
        jag::math::Vector3T<float>::operator*=((Vector3T<float>*)param_1, local_58);
    }

    // 0x1002ef580, 224 bytes, placed by __FILE__ string
    // PoseStateProviderRSeven::GetLabelData(WrapArray<float>&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, jag::graphics::AnimationLabelType) const
    void PoseStateProviderRSeven::GetLabelData(WrapArray* param_1, Layout* param_2, int param_4) {
        ushort uVar1;
        undefined2* puVar2;
        undefined2* puVar3;
        ulong uVar4;
        long* plVar5;
        Rect<float>* this_00;
        float fVar6;
        Vector4T<float> local_58[16];
        AnimationHelper local_48[16];
        PoseStateProviderRSeven* local_38;

        local_38 = this;
        if (param_4 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("labelType == jag::graphics::AnimationLabelType::COLOUR_DELTA",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "PoseStateRSeven.cpp",
                      462, "Only transparency animation is supported for OSRS models.");
        }
        local_48->VectorArryFromLabelDeltas(param_1);
        puVar2 = (undefined2*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(param_2);
        puVar3 = (undefined2*)param_2->end();
        if (puVar2 != puVar3) {
            local_38 = (PoseStateProviderRSeven*)local_38->field_24;
            do {
                uVar1 = puVar2[1];
                uVar4 = local_48->HeapBeginPtr();
                if (uVar1 < uVar4) {
                    plVar5 = (long*)shared_ptr<PoseStateRSeven>::operator->((shared_ptr<PoseStateRSeven>*)local_38);
                    fVar6 = (float)(**(code**)(*plVar5 + 16))(plVar5, *puVar2);
                    jag::math::Vector4T<float>::Vector4T(local_58, fVar6);
                    this_00 = (Rect<float>*)WrapArray<jag::math::Vector4T<float>>::operator[](
                        (WrapArray<jag::math::Vector4T<float>>*)local_48, (ulong)(ushort)puVar2[1]);
                    jag::math::Rect<float>::operator=(this_00, (Rect*)local_58);
                }
                puVar2 = puVar2 + 2;
            } while (puVar2 != puVar3);
        }
    }

    // 0x100324ca0: the linker folded this into PoseStateRSeven::GetBoneTransform(unsigned long) const, which has identical code
    PoseStateRSeven::GetJointTransform(unsigned long) const;

} // namespace jag::oldscape::dash3d

namespace jag::math {
    // 0x1002ed060, 96 bytes, inline, placed by debug map only (low confidence)
    // bool operator==<float>(Matrix43T<float> const&, Matrix43T<float> const&)
    /* bool TEMPNAMEPLACEHOLDERVALUE(Matrix43T<float> const&,
   Matrix43T<float> const&) */

    bool operator==(Matrix43T* param_1, Matrix43T* param_2) {
        bool bVar1;

        bVar1 = operator==((Vector3T*)param_1, (Vector3T*)param_2);
        if (((bVar1) && (bVar1 = operator==((Vector3T*)(param_1 + 12), (Vector3T*)(param_2 + 12)), bVar1)) &&
            (bVar1 = operator==((Vector3T*)(param_1 + 24), (Vector3T*)(param_2 + 24)), bVar1)) {
            bVar1 = operator==((Vector3T*)(param_1 + 36), (Vector3T*)(param_2 + 36));
            return bVar1;
        }
        return false;
    }

} // namespace jag::math
