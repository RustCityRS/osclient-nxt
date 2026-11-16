// libs/math/MathAliases.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape::dash3d {
    // 0x1002edaa0, 80 bytes, placed by debug map only (low confidence)
    // MayaPoseStateRSeven::GetLabelTransparencyDelta(unsigned long) const
    undefined4 MayaPoseStateRSeven::GetLabelTransparencyDelta(ulong param_1) {
        long lVar1;
        long lVar2;
        undefined4 uVar3;
        int local_1c;

        local_1c = (int)param_1;
        lVar1 = (&field_72, &local_1c)->find();
        lVar2 = (&field_72)->end();
        if (lVar1 == lVar2) {
            uVar3 = 0;
        } else {
            uVar3 = *(undefined4*)(lVar1 + 4);
        }
        return uVar3;
    }

    // 0x1002edaf0, 64 bytes, placed by debug map only (low confidence)
    // MayaPoseStateRSeven::IsEqual(PoseStateRSeven const&) const
    undefined4 MayaPoseStateRSeven::IsEqual(PoseStateRSeven* param_1) {
        bool bVar1;
        shared_ptr* extraout_RDX;

        if ((param_1->GetPos() == 3) &&
            (bVar1 = operator==((jag*)field_16, (shared_ptr*)&param_1->field_16, extraout_RDX), bVar1)) {
            return CONCAT31((int3)((uint)field_32 >> 8), field_32 == *(int*)&param_1->field_32);
        }
        return 0;
    }

    // 0x1002edbe0, 16 bytes, placed by debug map only (low confidence)
    // operator==(PoseStateRSeven const&, PoseStateRSeven const&)
    /* TEMPNAMEPLACEHOLDERVALUE(PoseStateRSeven const&,
   PoseStateRSeven const&) */

    void operator==(PoseStateRSeven* param_1, PoseStateRSeven* param_2) {
        (*(code*)param_1->field_0[3])();
    }

    // 0x1002edbf0, 16 bytes, placed by debug map only (low confidence)
    // operator!=(PoseStateRSeven const&, PoseStateRSeven const&)
    /* TEMPNAMEPLACEHOLDERVALUE(PoseStateRSeven const&,
   PoseStateRSeven const&) */

    byte operator!=(PoseStateRSeven* param_1, PoseStateRSeven* param_2) {
        return operator==(param_1, param_2) ^ 1;
    }

    // 0x1002ee570, 128 bytes, placed by debug map only (low confidence)
    // DashBasePoseStateRSeven::UpdateAnimationOrigin(eastl::vector<int, eastl::allocator> const&, jag::math::Vector3T<float>&, int, int, int) const
    void DashBasePoseStateRSeven::UpdateAnimationOrigin(vector* param_1, Vector3T* param_2, int param_3, int param_4,
                                                        int param_5) {
        float fVar1;
        ColourHSL local_58;
        undefined8 local_48;
        float local_40;
        undefined8 local_38;
        float local_30;

        fVar1 = -(float)param_4;
        new (&local_58) jag::math::ColourHSL((float)param_3, fVar1, (float)param_5);
        local_38 = (*(code*)field_0[8])(this, param_1);
        local_30 = fVar1;
        local_48 = jag::math::operator+((Vector3T*)&local_38, (Vector3T*)&local_58);
        local_40 = fVar1;
        param_2->SetXYZ((Vector3T*)&local_48);
    }

    // 0x1002ee5f0, 176 bytes, placed by debug map only (low confidence)
    // DashBasePoseStateRSeven::UpdateFaceTransparency(eastl::vector<int, eastl::allocator> const&, int) const
    void DashBasePoseStateRSeven::UpdateFaceTransparency(vector* param_1, int param_2) {
        int iVar1;
        long lVar2;
        int* piVar3;
        vector<EntityHighlight*, BucketAllocatorEASTL>* this_00;
        ulong uVar4;
        Array<float, eastl::allocator>* this_01;
        float* pfVar5;
        ulong uVar6;

        lVar2 = param_1->size();
        if (lVar2 != 0) {
            uVar6 = 0;
            do {
                piVar3 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)param_1,
                                                                                uVar6);
                iVar1 = *piVar3;
                this_00 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)GetFaceTransparencyDeltas(this);
                uVar4 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
                if ((ulong)(long)iVar1 < uVar4) {
                    this_01 = (Array<float, eastl::allocator>*)GetFaceTransparencyDeltas(this);
                    pfVar5 = (float*)Array<float, eastl::allocator>::operator[](this_01, (long)iVar1);
                    *pfVar5 = *pfVar5 - (float)(param_2 << 3) * 0.003921569;
                }
                uVar6 = uVar6 + 1;
                uVar4 = param_1->size();
            } while (uVar6 < uVar4);
        }
    }

    // 0x1002ee6a0, 448 bytes, placed by debug map only (low confidence)
    // DashBasePoseStateRSeven::CalculateMappedCentreOfLabels(eastl::vector<int, eastl::allocator> const&) const
    undefined8 DashBasePoseStateRSeven::CalculateMappedCentreOfLabels(vector* param_1) {
        undefined8* puVar2;
        int* piVar3;
        int* piVar4;
        Vector3T* pVVar5;
        ulong uVar6;
        vector<EntityHighlight*, BucketAllocatorEASTL>* this_00;
        ulong uVar7;
        undefined1 local_d8[48];
        undefined8 local_a8;
        undefined8 local_70[2];
        undefined8* local_58;
        Matrix43T* local_50;
        Array<jag::graphics::LabelData, eastl::allocator>* local_48;
        undefined8 local_40;
        undefined4 local_38;
        uint local_34;

        local_38 = *(undefined4*)(PTR_ZERO_100ee66e8 + 8);
        local_40 = *(undefined8*)PTR_ZERO_100ee66e8;
        puVar2 = (undefined8*)(&field_128)->end();
        piVar3 = (int*)param_1->HeapBeginPtr();
        piVar4 = (int*)param_1->end();
        if (piVar3 == piVar4) {
            local_34 = 0;
        } else {
            local_48 = (Array<jag::graphics::LabelData, eastl::allocator>*)&field_144;
            local_50 = (Matrix43T*)&field_80;
            local_34 = 0;
            local_58 = puVar2;
            do {
                uVar7 = (ulong)*piVar3;
                uVar6 = local_48->end();
                if (uVar7 < uVar6) {
                    this_00 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)GetBonePositions(
                        (DashBasePoseStateRSeven*)this);
                    uVar6 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
                    if (uVar7 < uVar6) {
                        (*(code*)*((DashBasePoseStateRSeven*)this)->field_0)((Vector3T*)&local_a8,
                                                                             (DashBasePoseStateRSeven*)this, uVar7);
                        jag::math::operator*((math*)local_d8, (Matrix43T*)&local_a8, local_50);
                        if (local_58 != (undefined8*)0) {
                            (**(code**)*local_58)((Vector3T*)&local_a8, local_58, uVar7);
                            jag::math::Matrix43T<float>::operator*=((Matrix43T<float>*)local_d8, (Matrix43T*)&local_a8);
                        }
                        pVVar5 =
                            (Vector3T*)Array<jag::graphics::LabelData, eastl::allocator>::operator[](local_48, uVar7);
                        local_70[0] = jag::math::operator*(pVVar5, (Matrix43T*)local_d8);
                        local_a8 = jag::math::operator*((Vector3T*)local_70, (float)*(int*)(pVVar5 + 12));
                        jag::math::Vector3T<float>::operator+=((Vector3T<float>*)&local_40, (Vector3T*)&local_a8);
                        local_34 = local_34 + *(int*)(pVVar5 + 12);
                    }
                }
                piVar3 = piVar3 + 1;
            } while (piVar3 != piVar4);
        }
        if (local_34 != 0) {
            jag::math::Vector3T<float>::operator/=((Vector3T<float>*)&local_40, (float)local_34);
        }
        return local_40;
    }

    // 0x1002eeb70, 416 bytes, placed by debug map only (low confidence)
    // DashBasePoseStateRSeven::LoadFromLabeledModel(ResolvedModel const&)
    void DashBasePoseStateRSeven::LoadFromLabeledModel(ResolvedModel* param_1) {
        int iVar1;
        shared_ptr* psVar2;
        TextureManager* this_00;
        Array* pAVar3;
        undefined1 local_e8[68];
        int local_a4;
        float local_a0[2];
        function<eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                   eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                 eastl::allocator>> const*(jag::graphics::GeometryBatch_const&)>
            local_98[48];
        function<eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                   eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                 eastl::allocator>> const*(jag::graphics::GeometryBatch_const&)>
            local_68[56];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_e8->GetLocalTransform();
        jag::math::Matrix43T<float>::operator=((Matrix43T<float>*)&field_80, (Matrix44T*)local_e8);
        psVar2 = (shared_ptr*)param_1->GetModel();
        this_00 =
            (TextureManager*)shared_ptr<jag::graphics::Model>::operator*((shared_ptr<jag::graphics::Model>*)psVar2);
        pAVar3 = (Array*)this_00->GetTextureAtlasManager();
        Array<jag::graphics::LabelData, eastl::allocator>::operator=(
            (Array<jag::graphics::LabelData, eastl::allocator>*)&field_144, pAVar3);
        weak_ptr<jag::graphics::Model>::operator=((weak_ptr<jag::graphics::Model>*)&field_56, psVar2);
        psVar2 = (shared_ptr*)param_1->GetAnimationState();
        shared_ptr<PoseStateRSeven>::operator=((shared_ptr<PoseStateRSeven>*)&field_128, psVar2);
        std::function<eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                      eastl::allocator>> const*(jag::graphics::GeometryBatch_const&)>::
            function<DashBasePoseStateRSeven::LoadFromLabeledModel(ResolvedModel_const&)::__1, void>(local_68);
        iVar1 = GetMaximumLabel(this_00, local_68);
        std::function<eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                      eastl::allocator>> const*(jag::graphics::GeometryBatch_const&)>::
            ~function(local_68);
        local_a4 = iVar1 + 1;
        std::make_unique<Array<jag::math::Matrix43T<float>, eastl::allocator>, int&,
                         jag::math::Matrix43T<float> const&>((int*)local_e8, (Matrix43T*)&local_a4);
        std::unique_ptr<Array<jag::math::Matrix43T<float>, eastl::allocator>,
                        std::default_delete<Array<jag::math::Matrix43T<float>, eastl::allocator>>>::
        operator=((unique_ptr<Array<jag::math::Matrix43T<float>, eastl::allocator>,
                              std::default_delete<Array<jag::math::Matrix43T<float>, eastl::allocator>>>*)&field_40,
                  (unique_ptr*)local_e8);
        local_e8->~unique_ptr();
        std::function<eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                      eastl::allocator>> const*(jag::graphics::GeometryBatch_const&)>::
            function<DashBasePoseStateRSeven::LoadFromLabeledModel(ResolvedModel_const&)::__2, void>(local_98);
        iVar1 = GetMaximumLabel(this_00, local_98);
        std::function<eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                      eastl::allocator>> const*(jag::graphics::GeometryBatch_const&)>::
            ~function(local_98);
        local_a0[1] = 0.0;
        local_a0[0] = (float)(iVar1 + 1);
        std::make_unique<Array<float, eastl::allocator>, int&, float>((int*)local_e8, local_a0);
        std::unique_ptr<Array<float, eastl::allocator>, std::default_delete<Array<float, eastl::allocator>>>::operator=(
            (unique_ptr<Array<float, eastl::allocator>, std::default_delete<Array<float, eastl::allocator>>>*)&field_48,
            (unique_ptr*)local_e8);
        local_e8->~unique_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1002eef20, 80 bytes, placed by debug map only (low confidence)
    // GetMaximumLabel(jag::graphics::Model const&, std::function<eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const* (jag::graphics::GeometryBatch const&)>)
    /* GetMaximumLabel(jag::graphics::Model const&,
   std::function<eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
   eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> >
   const* (jag::graphics::GeometryBatch const&)>) */

    void GetMaximumLabel(Model* param_1, undefined8 param_2) {
        Layout* this;
        undefined8 uVar1;
        vector<EntityHighlight*, BucketAllocatorEASTL>* this_00;
        undefined8 uVar2;

        this = (Layout*)param_1->GetBatchList();
        uVar1 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                        eastl::allocator>>::Layout::HeapBeginPtr(this);
        this_00 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)param_1->GetBatchList();
        uVar2 = eastl::vector<EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
        eastl::accumulate<
            std::unique_ptr<jag::graphics::GeometryBatchInstance,
                            MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> const*,
            int,
            GetMaximumLabel(jag::graphics::Model_const&,
                            std::function<eastl::vector_map<
                                unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                              eastl::allocator>> const*(jag::graphics::GeometryBatch_const&)>)::__8>(
            uVar1, uVar2, param_2);
    }

    // 0x1002ef090, 112 bytes, placed by debug map only (low confidence)
    // ChainedPoseStateRSeven::GetBoneTransform(unsigned long) const
    ChainedPoseStateRSeven* ChainedPoseStateRSeven::GetBoneTransform(ulong param_1) {
        undefined8* puVar1;
        Matrix43T local_88[48];
        Matrix43T local_58[48];

        puVar1 = (undefined8*)shared_ptr<PoseStateRSeven>::operator->((shared_ptr<PoseStateRSeven>*)(param_1 + 16));
        (**(code**)*puVar1)(local_88, puVar1);
        puVar1 = (undefined8*)shared_ptr<PoseStateRSeven>::operator->((shared_ptr<PoseStateRSeven>*)(param_1 + 32));
        (**(code**)*puVar1)(local_58, puVar1);
        jag::math::operator*((math*)this, local_88, local_58);
        return this;
    }

    // 0x1002ef140, 128 bytes, placed by debug map only (low confidence)
    // ChainedPoseStateRSeven::GetJointTransform(unsigned long) const
    ChainedPoseStateRSeven* ChainedPoseStateRSeven::GetJointTransform(ulong param_1) {
        long* plVar1;
        Matrix43T local_88[48];
        Matrix43T local_58[48];

        plVar1 = (long*)shared_ptr<PoseStateRSeven>::operator->((shared_ptr<PoseStateRSeven>*)(param_1 + 16));
        (**(code**)(*plVar1 + 8))(local_88, plVar1);
        plVar1 = (long*)shared_ptr<PoseStateRSeven>::operator->((shared_ptr<PoseStateRSeven>*)(param_1 + 32));
        (**(code**)(*plVar1 + 8))(local_58, plVar1);
        jag::math::operator*((math*)this, local_88, local_58);
        return this;
    }

    // 0x1002ef1c0, 96 bytes, placed by debug map only (low confidence)
    // ChainedPoseStateRSeven::GetLabelTransparencyDelta(unsigned long) const
    float ChainedPoseStateRSeven::GetLabelTransparencyDelta(ulong param_1) {
        long* plVar1;
        float fVar2;

        plVar1 = (long*)shared_ptr<PoseStateRSeven>::operator->((shared_ptr<PoseStateRSeven>*)field_16);
        fVar2 = (float)(**(code**)(*plVar1 + 16))(plVar1, param_1);
        plVar1 = (long*)shared_ptr<PoseStateRSeven>::operator->((shared_ptr<PoseStateRSeven>*)field_32);
        return (float)(**(code**)(*plVar1 + 16))(plVar1, param_1) + fVar2;
    }

    // 0x1002ef220, 128 bytes, placed by debug map only (low confidence)
    // ChainedPoseStateRSeven::IsEqual(PoseStateRSeven const&) const
    undefined8 ChainedPoseStateRSeven::IsEqual(PoseStateRSeven* param_1) {
        PoseStateRSeven* pPVar3;
        PoseStateRSeven* pPVar4;

        if (param_1->GetPos() == 0) {
            pPVar3 = (PoseStateRSeven*)shared_ptr<PoseStateRSeven>::operator*((shared_ptr<PoseStateRSeven>*)field_16);
            pPVar4 = (PoseStateRSeven*)shared_ptr<PoseStateRSeven>::operator*(
                (shared_ptr<PoseStateRSeven>*)&param_1->field_16);
            if (dash3d::operator==(pPVar3, pPVar4) != '\0') {
                pPVar3 =
                    (PoseStateRSeven*)shared_ptr<PoseStateRSeven>::operator*((shared_ptr<PoseStateRSeven>*)field_32);
                pPVar4 = (PoseStateRSeven*)shared_ptr<PoseStateRSeven>::operator*(
                    (shared_ptr<PoseStateRSeven>*)&param_1->field_32);
                return dash3d::operator==(pPVar3, pPVar4);
            }
        }
        return 0;
    }

    // 0x1002ef2a0, 192 bytes, placed by debug map only (low confidence)
    // PoseStateProviderRSeven::GetBoneTransforms(WrapArray<jag::math::Matrix43T<float> >&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, jag::math::Matrix44T<float> const&) const
    void PoseStateProviderRSeven::GetBoneTransforms(WrapArray* param_1, vector_map* param_2, vector_map* param_3,
                                                    Matrix44T* param_4) {
        function<jag::math::Matrix43T<float>(unsigned long)> local_98[48];
        function<jag::math::Matrix43T<float>(unsigned long)> local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::function<jag::math::Matrix43T<float>(unsigned long)>::function<
            PoseStateProviderRSeven::GetBoneTransforms(
                WrapArray<jag::math::Matrix43T<float>>&,
                eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                  eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
                eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                  eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
                jag::math::Matrix44T<float> const&) const ::__3,
            void>(local_68, this);
        GetTransforms();
        std::function<jag::math::Matrix43T<float>(unsigned long)>::~function(local_68);
        std::function<jag::math::Matrix43T<float>(unsigned long)>::function<
            PoseStateProviderRSeven::GetBoneTransforms(
                WrapArray<jag::math::Matrix43T<float>>&,
                eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                  eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
                eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                  eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&,
                jag::math::Matrix44T<float> const&) const ::__4,
            void>(local_98, this);
        GetTransforms();
        std::function<jag::math::Matrix43T<float>(unsigned long)>::~function(local_98);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1002ef360, 192 bytes, placed by debug map only (low confidence)
    // PoseStateProviderRSeven::GetTransforms(WrapArray<jag::math::Matrix43T<float> >&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, std::function<jag::math::Matrix43T<float> (unsigned long)>) const
    /* PoseStateProviderRSeven::GetTransforms(WrapArray<jag::math::Matrix43T<float>
   >&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
   eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> >
   const&, std::function<jag::math::Matrix43T<float> (unsigned long)>) const */

    void PoseStateProviderRSeven::GetTransforms(undefined8 param_1_00, Layout* param_1, Layout* param_2,
                                                ulong param_4) {
        ushort uVar1;
        long lVar2;
        long lVar3;
        ulong uVar4;
        Vector4T<float>* this;
        function<jag::math::Matrix43T<float>(unsigned long)> local_68[12];
        Vector3T local_5c[12];
        Vector3T local_50[12];
        Vector3T local_44[12];
        ulong local_38;

        local_38 = param_4;
        lVar2 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(param_2);
        lVar3 = param_2->end();
        if (lVar2 != lVar3) {
            do {
                uVar1 = *(ushort*)(lVar2 + 2);
                uVar4 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(param_1);
                if (uVar1 < uVar4) {
                    std::function<jag::math::Matrix43T<float>(unsigned long)>::operator()(local_68, local_38);
                    this = (Vector4T<float>*)WrapArray<jag::math::Matrix43T<float>>::operator[](
                        (WrapArray<jag::math::Matrix43T<float>>*)param_1, (ulong) * (ushort*)(lVar2 + 2));
                    jag::math::Vector4T<float>::SetXYZ(this, (Vector3T*)local_68);
                    jag::math::Vector4T<float>::SetXYZ(this + 12, local_5c);
                    jag::math::Vector4T<float>::SetXYZ(this + 24, local_50);
                    jag::math::Vector4T<float>::SetXYZ(this + 36, local_44);
                }
                lVar2 = lVar2 + 4;
            } while (lVar2 != lVar3);
        }
    }

    // 0x1002ef6e0, 16 bytes, placed by debug map only (low confidence)
    // PoseStateProviderRSeven::UpdateFromCurrentTime(Array<jag::graphics::LabelData, eastl::allocator> const&, jag::math::Matrix44T<float> const&)
    void PoseStateProviderRSeven::UpdateFromCurrentTime(Array* param_1, Matrix44T* param_2) {}

    // 0x1002ef6f0, 16 bytes, placed by debug map only (low confidence)
    // PoseStateProviderRSeven::GetAnimatesTransparency() const
    undefined1 PoseStateProviderRSeven::GetAnimatesTransparency() {
        return 1;
    }

    // 0x1002ef700, 16 bytes, placed by debug map only (low confidence)
    // PoseStateProviderRSeven::GetAnimatedColourType() const
    undefined8 PoseStateProviderRSeven::GetAnimatedColourType() {
        return 2;
    }

    // 0x1002ef7b0, 128 bytes, placed by debug map only (low confidence)
    // ShiftedLabelRangePoseStateRSeven::GetBoneTransform(unsigned long) const
    ShiftedLabelRangePoseStateRSeven* ShiftedLabelRangePoseStateRSeven::GetBoneTransform(ulong param_1) {
        undefined** ppuVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8* puVar7;
        ulong in_RDX;

        if ((in_RDX < *(ushort*)(param_1 + 32)) || (*(ushort*)(param_1 + 34) <= in_RDX)) {
            ppuVar1 = *(undefined***)PTR_IDENTITY_100ee6720;
            uVar2 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 8);
            uVar3 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 16);
            uVar4 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 24);
            uVar5 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 32);
            uVar6 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 40);
            field_32 = (short)uVar5;
            field_34 = (short)((ulong)uVar5 >> 16);
            field_36 = (short)((ulong)uVar5 >> 32);
            field_38 = (short)((ulong)uVar5 >> 48);
            field_40 = (short)uVar6;
            field_42 = (short)((ulong)uVar6 >> 16);
            field_44 = (int)((ulong)uVar6 >> 32);
            *(undefined8*)field_16 = uVar3;
            *(undefined8*)(field_16 + 8) = uVar4;
            field_0 = ppuVar1;
            *(undefined8*)&field_8 = uVar2;
        } else {
            puVar7 = (undefined8*)shared_ptr<PoseStateRSeven>::operator->((shared_ptr<PoseStateRSeven>*)(param_1 + 16));
            (**(code**)*puVar7)(this, puVar7, in_RDX - *(ushort*)(param_1 + 32));
        }
        return this;
    }

    // 0x1002ef830, 128 bytes, placed by debug map only (low confidence)
    // ShiftedLabelRangePoseStateRSeven::GetJointTransform(unsigned long) const
    ShiftedLabelRangePoseStateRSeven* ShiftedLabelRangePoseStateRSeven::GetJointTransform(ulong param_1) {
        undefined** ppuVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        long* plVar7;
        ulong in_RDX;

        if ((in_RDX < *(ushort*)(param_1 + 36)) || (*(ushort*)(param_1 + 38) <= in_RDX)) {
            ppuVar1 = *(undefined***)PTR_IDENTITY_100ee6720;
            uVar2 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 8);
            uVar3 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 16);
            uVar4 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 24);
            uVar5 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 32);
            uVar6 = *(undefined8*)(PTR_IDENTITY_100ee6720 + 40);
            field_32 = (short)uVar5;
            field_34 = (short)((ulong)uVar5 >> 16);
            field_36 = (short)((ulong)uVar5 >> 32);
            field_38 = (short)((ulong)uVar5 >> 48);
            field_40 = (short)uVar6;
            field_42 = (short)((ulong)uVar6 >> 16);
            field_44 = (int)((ulong)uVar6 >> 32);
            *(undefined8*)field_16 = uVar3;
            *(undefined8*)(field_16 + 8) = uVar4;
            field_0 = ppuVar1;
            *(undefined8*)&field_8 = uVar2;
        } else {
            plVar7 = (long*)shared_ptr<PoseStateRSeven>::operator->((shared_ptr<PoseStateRSeven>*)(param_1 + 16));
            (**(code**)(*plVar7 + 8))(this, plVar7, in_RDX - *(ushort*)(param_1 + 36));
        }
        return this;
    }

    // 0x1002ef8b0, 80 bytes, placed by debug map only (low confidence)
    // ShiftedLabelRangePoseStateRSeven::GetLabelTransparencyDelta(unsigned long) const
    undefined8 ShiftedLabelRangePoseStateRSeven::GetLabelTransparencyDelta(ulong param_1) {
        long* plVar1;
        undefined8 uVar2;

        uVar2 = 0;
        if ((field_40 <= param_1) && (uVar2 = 0, param_1 < field_42)) {
            plVar1 = (long*)shared_ptr<PoseStateRSeven>::operator->((shared_ptr<PoseStateRSeven>*)field_16);
            uVar2 = (**(code**)(*plVar1 + 16))(plVar1, param_1 - field_40);
        }
        return uVar2;
    }

    // 0x1002ef900, 128 bytes, placed by debug map only (low confidence)
    // ShiftedLabelRangePoseStateRSeven::IsEqual(PoseStateRSeven const&) const
    undefined2 ShiftedLabelRangePoseStateRSeven::IsEqual(PoseStateRSeven* param_1) {
        PoseStateRSeven* pPVar3;
        PoseStateRSeven* pPVar4;

        if (param_1->GetPos() == 4) {
            pPVar3 = (PoseStateRSeven*)shared_ptr<PoseStateRSeven>::operator*((shared_ptr<PoseStateRSeven>*)field_16);
            pPVar4 = (PoseStateRSeven*)shared_ptr<PoseStateRSeven>::operator*(
                (shared_ptr<PoseStateRSeven>*)&param_1->field_16);
            if ((((dash3d::operator==(pPVar3, pPVar4) != '\0') && (field_32 == *(ushort*)&param_1->field_32)) &&
                 (field_34 == *(ushort*)((long)&param_1->field_32 + 2))) &&
                (field_36 == *(ushort*)((long)&param_1->field_32 + 4))) {
                return CONCAT11((char)(field_38 >> 8), field_38 == *(ushort*)((long)&param_1->field_32 + 6));
            }
        }
        return 0;
    }

    // 0x1002ef980, 512 bytes, placed by debug map only (low confidence)
    // MaskedDashPoseStateRSeven::InitializeFrameData()
    void MaskedDashPoseStateRSeven::InitializeFrameData() {
        undefined1* this_00;
        undefined4 uVar1;
        int iVar2;
        char cVar3;
        int iVar4;
        Array<AnimFrame, eastl::allocator>* this_01;
        shared_ptr<AnimBase>* this_02;
        long lVar5;
        Array<int, eastl::allocator>* this_03;
        int* piVar6;
        undefined4* puVar7;
        ulong uVar8;
        ulong uVar9;
        ulong uVar10;
        ulong uVar11;
        undefined8 local_90;
        undefined4 local_88;
        undefined8 local_80;
        Array<int, eastl::allocator>* local_78;
        vector<eastl::vector<int, eastl::allocator>, eastl::allocator>* local_70;
        Array<int, eastl::allocator>* local_68;
        Array<int, eastl::allocator>* local_60;
        Array<int, eastl::allocator>* local_58;
        shared_ptr<AnimBase>* local_50;
        undefined4 local_48;
        undefined4 local_44;
        vector<int, eastl::allocator>* local_40;
        MaskedDashPoseStateRSeven* local_38;

        this_01 = (Array<AnimFrame, eastl::allocator>*)GetFrameSet();
        iVar4 = GetFrame();
        this_02 = (shared_ptr<AnimBase>*)Array<AnimFrame, eastl::allocator>::operator[](this_01, (long)iVar4);
        lVar5 = shared_ptr<AnimBase>::operator*(this_02);
        local_88 = *(undefined4*)(PTR_ZERO_100ee66e8 + 8);
        local_90 = *(undefined8*)PTR_ZERO_100ee66e8;
        local_38 = this;
        this_03 = (Array<int, eastl::allocator>*)GetMask(this);
        piVar6 = (int*)Array<int, eastl::allocator>::operator[](this_03, 0);
        if (0 < *(int*)(this_02 + 16)) {
            local_78 = (Array<int, eastl::allocator>*)(this_02 + 24);
            this_00 = &local_38->field_168;
            local_40 = (vector<int, eastl::allocator>*)(lVar5 + 8);
            local_70 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)(lVar5 + 40);
            local_68 = (Array<int, eastl::allocator>*)(this_02 + 48);
            local_60 = (Array<int, eastl::allocator>*)(this_02 + 72);
            local_58 = (Array<int, eastl::allocator>*)(this_02 + 96);
            iVar4 = *piVar6;
            uVar9 = 1;
            uVar11 = 0;
            local_50 = this_02;
            do {
                piVar6 = (int*)Array<int, eastl::allocator>::operator[](local_78, uVar11);
                iVar2 = *piVar6;
                uVar8 = (ulong)iVar2;
                if (iVar4 < iVar2) {
                    uVar10 = (long)(int)uVar9;
                    do {
                        uVar9 = uVar10 + 1;
                        piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00,
                                                                                uVar10);
                        iVar4 = *piVar6;
                        uVar10 = uVar9;
                    } while (iVar4 < iVar2);
                }
                cVar3 = GetInvertMask(local_38);
                if (((cVar3 != '\0') &&
                     ((iVar2 == iVar4 ||
                       (piVar6 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_40, uVar8),
                        *piVar6 == 0)))) ||
                    ((cVar3 = GetInvertMask(local_38),
                      cVar3 == '\0' &&
                          ((iVar2 != iVar4 ||
                            (piVar6 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_40, uVar8),
                             *piVar6 == 0)))))) {
                    puVar7 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_40, uVar8);
                    local_48 = *puVar7;
                    local_80 = eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                        local_70, uVar8);
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](local_68, uVar11);
                    local_44 = *puVar7;
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](local_60, uVar11);
                    uVar1 = *puVar7;
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](local_58, uVar11);
                    (*(code*)local_38->field_0[4])(local_38, local_48, local_80, local_44, uVar1, *puVar7, &local_90);
                }
                uVar11 = uVar11 + 1;
            } while ((long)uVar11 < (long)*(int*)(local_50 + 16));
        }
    }

    // 0x1002efb80, 16 bytes, placed by debug map only (low confidence)
    // MaskedDashPoseStateRSeven::GetMask() const
    undefined1* MaskedDashPoseStateRSeven::GetMask() {
        return &field_168;
    }

    // 0x1002efb90, 16 bytes, placed by debug map only (low confidence)
    // MaskedDashPoseStateRSeven::GetInvertMask() const
    undefined1 MaskedDashPoseStateRSeven::GetInvertMask() {
        return m_invertMask;
    }

    // 0x1002efba0, 96 bytes, placed by debug map only (low confidence)
    // MaskedDashPoseStateRSeven::IsEqual(PoseStateRSeven const&) const
    undefined8 MaskedDashPoseStateRSeven::IsEqual(PoseStateRSeven* param_1) {
        char cVar1;
        undefined8 uVar3;

        if (((param_1->GetPos() == 2) && (cVar1 = IsBaseEqual(param_1), cVar1 != '\0')) &&
            (m_invertMask == (bool)*(char*)&param_1[4].field_0)) {
            uVar3 = Array<unsigned int, eastl::allocator>::operator==(
                (Array<unsigned int, eastl::allocator>*)&field_168, (Array*)&param_1[3].field_24);
            return uVar3;
        }
        return 0;
    }

} // namespace jag::oldscape::dash3d

namespace jag::math {
    // 0x1002ed8d0, 80 bytes, inline, placed by debug map only (low confidence)
    // Matrix43T<float>::operator=(Matrix43T<float> const&)
    /* graphics::ParticleVertexDataProxy<Vector3T<float>
   >::TEMPNAMEPLACEHOLDERVALUE(graphics::ParticleVertexDataProxy<Vector3T<float> >
   const&) */

    ParticleVertexDataProxy<Vector3T<float>>*
    graphics::ParticleVertexDataProxy<Vector3T<float>>::operator=(ParticleVertexDataProxy* param_1) {
        long lVar1;

        lVar1 = 0;
        do {
            ((this + lVar1))->SetXYZ((Vector3T*)(param_1 + lVar1));
            lVar1 = lVar1 + 12;
        } while (lVar1 != 48);
        return this;
    }

    // 0x1002ee190, 32 bytes, inline, placed by debug map only (low confidence)
    // operator*(Matrix43T<float> const&, Matrix43T<float> const&)
    /* TEMPNAMEPLACEHOLDERVALUE(Matrix43T<float> const&,
   Matrix43T<float> const&) */

    math* operator*(Matrix43T* param_1, Matrix43T* param_2) {
        MatrixMultSSE(param_1, param_2);
        return this;
    }

    // 0x1002ee1b0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Matrix43T<float>::Matrix43T(Matrix33T<float> const&, Vector3T<float> const&): jumps straight to the base-object constructor

    // 0x1002ee1c0, 16 bytes, inline, placed by debug map only (low confidence)
    // Matrix43T<float>::operator*=(Matrix43T<float> const&)
    /* Matrix43T<float>::TEMPNAMEPLACEHOLDERVALUE(Matrix43T<float> const&) */

    void Matrix43T<float>::operator*=(Matrix43T* param_1) {
        internal::MatrixMultSSEInPlace((Matrix43T*)this, param_1);
    }

    // 0x1002ee3f0, 160 bytes, inline, placed by debug map only (low confidence)
    // Matrix33T<float> Matrix33RotationZ<float>(float)
    math* Matrix33RotationZ<float>(float param_1) {
        ColourHSL local_78;
        ColourHSL local_68;
        ColourHSL local_58;
        undefined8 local_48;
        float local_2c;

        local_48._0_4_ = param_1;
        local_2c = (float)::cos(param_1);
        local_48 = ::sin((float)local_48);
        new (&local_78) ColourHSL(local_2c, (float)local_48, 0.0);
        new (&local_68) ColourHSL(-(float)local_48, local_2c, 0.0);
        new (&local_58) ColourHSL(0.0, 0.0, 1.0);
        new (this) Matrix33T<float>((Vector3T*)&local_78, (Vector3T*)&local_68, (Vector3T*)&local_58);
        return this;
    }

    // 0x1002ee490, 80 bytes, inline, placed by debug map only (low confidence)
    // Matrix33T<float>::operator=(Matrix33T<float>&&)
    /* Matrix33T<float>::TEMPNAMEPLACEHOLDERVALUE(Matrix33T<float> const&) */

    Matrix33T<float>* Matrix33T<float>::operator=(Matrix33T* param_1) {
        long lVar1;

        lVar1 = 0;
        do {
            ((this + lVar1))->SetXYZ((Vector3T*)(param_1 + lVar1));
            lVar1 = lVar1 + 12;
        } while (lVar1 != 36);
        return this;
    }

    // 0x1002ee4e0, 64 bytes, inline, placed by debug map only (low confidence)
    // Matrix33T<float>::operator*=(Matrix33T<float> const&)
    /* Matrix33T<float>::TEMPNAMEPLACEHOLDERVALUE(Matrix33T<float> const&) */

    void Matrix33T<float>::operator*=(Matrix33T* param_1) {
        Matrix33T local_40[40];

        math::operator*(local_40, this);
        operator=(this, local_40);
    }

    // 0x1002ee520, 80 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float> operator/<float>(Vector3T<float> const&, double)
    /* Vector3T<float> TEMPNAMEPLACEHOLDERVALUE(Vector3T<float> const&,
   double) */

    undefined8 operator/(Vector3T* param_1, double param_2) {
        undefined8 uVar1;
        float fVar2;
        ColourHSL local_18;

        fVar2 = 1.0 / (float)param_2;
        new (&local_18)
            ColourHSL(*(float*)param_1 * fVar2, *(float*)(param_1 + 4) * fVar2, fVar2 * *(float*)(param_1 + 8));
        uVar1._0_4_ = local_18.field_0;
        uVar1._4_4_ = local_18.field_4;
        return uVar1;
    }

    // 0x1002ee8e0, 656 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float> operator*<float>(Vector3T<float> const&, Matrix43T<float> const&)
    /* Vector3T<float> TEMPNAMEPLACEHOLDERVALUE(Vector3T<float> const&,
   Matrix43T<float> const&) */

    undefined8 operator*(Vector3T* param_1, Matrix43T* param_2) {
        vector* pvVar1;
        Layout* pLVar2;
        float* pfVar3;
        Vector2T<int>* pVVar4;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar5;
        type* ptVar6;
        undefined8 uVar7;
        ColourHSL local_38;
        float local_28;
        float local_24;
        float local_20;
        float local_1c;

        pvVar1 = param_1->SSOBeginPtr(param_2);
        local_24 = *(float*)pvVar1;
        ptVar6 = (type*)0;
        pLVar2 = (Layout*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 0);
        pvVar1 = eastl::string::Layout::SSOBeginPtr(pLVar2, ptVar6);
        local_24 = local_24 * *(float*)pvVar1;
        pfVar3 = (float*)param_1->y();
        local_1c = *pfVar3;
        ptVar6 = (type*)&DAT_00000001;
        pLVar2 = (Layout*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 1);
        pvVar1 = eastl::string::Layout::SSOBeginPtr(pLVar2, ptVar6);
        local_1c = local_1c * *(float*)pvVar1 + local_24;
        pfVar3 = (float*)param_1->second();
        local_24 = *pfVar3;
        ptVar6 = (type*)2;
        pLVar2 = (Layout*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 2);
        pvVar1 = eastl::string::Layout::SSOBeginPtr(pLVar2, ptVar6);
        local_24 = local_24 * *(float*)pvVar1 + local_1c;
        ptVar6 = (type*)3;
        pLVar2 = (Layout*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 3);
        pvVar1 = eastl::string::Layout::SSOBeginPtr(pLVar2, ptVar6);
        local_24 = local_24 + *(float*)pvVar1;
        pvVar1 = param_1->SSOBeginPtr(ptVar6);
        local_1c = *(float*)pvVar1;
        pVVar4 = (Vector2T<int>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 0);
        pfVar3 = (float*)pVVar4->y();
        local_1c = local_1c * *pfVar3;
        pfVar3 = (float*)param_1->y();
        local_20 = *pfVar3;
        pVVar4 = (Vector2T<int>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 1);
        pfVar3 = (float*)pVVar4->y();
        local_20 = local_20 * *pfVar3 + local_1c;
        pfVar3 = (float*)param_1->second();
        local_1c = *pfVar3;
        pVVar4 = (Vector2T<int>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 2);
        pfVar3 = (float*)pVVar4->y();
        local_1c = local_1c * *pfVar3 + local_20;
        ptVar6 = (type*)3;
        pVVar4 = (Vector2T<int>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 3);
        pfVar3 = (float*)pVVar4->y();
        local_1c = local_1c + *pfVar3;
        pvVar1 = param_1->SSOBeginPtr(ptVar6);
        local_20 = *(float*)pvVar1;
        pcVar5 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                      eastl::allocator, 0>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 0);
        pfVar3 =
            (float*)eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(pcVar5);
        local_20 = local_20 * *pfVar3;
        pfVar3 = (float*)param_1->y();
        local_28 = *pfVar3;
        pcVar5 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                      eastl::allocator, 0>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 1);
        pfVar3 =
            (float*)eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(pcVar5);
        local_28 = local_28 * *pfVar3 + local_20;
        pfVar3 = (float*)param_1->second();
        local_20 = *pfVar3;
        pcVar5 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                      eastl::allocator, 0>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 2);
        pfVar3 =
            (float*)eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(pcVar5);
        local_20 = local_20 * *pfVar3 + local_28;
        pcVar5 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                      eastl::allocator, 0>*)Matrix43T<float>::operator[]((Matrix43T<float>*)param_2, 3);
        pfVar3 =
            (float*)eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(pcVar5);
        new (&local_38) ColourHSL(local_24, local_1c, local_20 + *pfVar3);
        uVar7._0_4_ = local_38.field_0;
        uVar7._4_4_ = local_38.field_4;
        return uVar7;
    }

    // 0x1002eed10, 448 bytes, inline, placed by debug map only (low confidence)
    // Matrix43T<float>::operator=(Matrix44T<float> const&)
    /* Matrix43T<float>::TEMPNAMEPLACEHOLDERVALUE(Matrix44T<float> const&) */

    Matrix43T<float>* Matrix43T<float>::operator=(Matrix44T* param_1) {
        float fVar1;
        float fVar2;
        Layout* pLVar3;
        vector* pvVar4;
        Vector2T<int>* pVVar5;
        float* pfVar6;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar7;
        type* ptVar8;

        ptVar8 = (type*)0;
        pLVar3 = (Layout*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 0);
        pvVar4 = eastl::string::Layout::SSOBeginPtr(pLVar3, ptVar8);
        fVar1 = *(float*)pvVar4;
        pVVar5 = (Vector2T<int>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 0);
        pfVar6 = (float*)pVVar5->y();
        fVar2 = *pfVar6;
        pcVar7 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                      eastl::allocator, 0>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 0);
        pfVar6 =
            (float*)eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(pcVar7);
        Set(fVar1, fVar2, *pfVar6);
        ptVar8 = (type*)&DAT_00000001;
        pLVar3 = (Layout*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 1);
        pvVar4 = eastl::string::Layout::SSOBeginPtr(pLVar3, ptVar8);
        fVar1 = *(float*)pvVar4;
        pVVar5 = (Vector2T<int>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 1);
        pfVar6 = (float*)pVVar5->y();
        fVar2 = *pfVar6;
        pcVar7 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                      eastl::allocator, 0>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 1);
        pfVar6 =
            (float*)eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(pcVar7);
        ((this + 12))->Set(fVar1, fVar2, *pfVar6);
        ptVar8 = (type*)2;
        pLVar3 = (Layout*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 2);
        pvVar4 = eastl::string::Layout::SSOBeginPtr(pLVar3, ptVar8);
        fVar1 = *(float*)pvVar4;
        pVVar5 = (Vector2T<int>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 2);
        pfVar6 = (float*)pVVar5->y();
        fVar2 = *pfVar6;
        pcVar7 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                      eastl::allocator, 0>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 2);
        pfVar6 =
            (float*)eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(pcVar7);
        ((this + 24))->Set(fVar1, fVar2, *pfVar6);
        ptVar8 = (type*)3;
        pLVar3 = (Layout*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 3);
        pvVar4 = eastl::string::Layout::SSOBeginPtr(pLVar3, ptVar8);
        fVar1 = *(float*)pvVar4;
        pVVar5 = (Vector2T<int>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 3);
        pfVar6 = (float*)pVVar5->y();
        fVar2 = *pfVar6;
        pcVar7 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                      eastl::allocator, 0>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 3);
        pfVar6 =
            (float*)eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(pcVar7);
        ((this + 36))->Set(fVar1, fVar2, *pfVar6);
        return this;
    }

    // 0x1002ef550, 48 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float>::operator*=(Matrix43T<float> const&)
    /* Vector3T<float>::TEMPNAMEPLACEHOLDERVALUE(Matrix43T<float> const&) */

    void Vector3T<float>::operator*=(Matrix43T* param_1) {
        undefined8 local_20[2];

        local_20[0] = math::operator*((Vector3T*)this, param_1);
        SetXYZ(local_20);
    }

} // namespace jag::math
