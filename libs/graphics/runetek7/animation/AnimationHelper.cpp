// libs/graphics/runetek7/animation/AnimationHelper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class AnimationHelper {
    public:
        ApplyBoneTransform(AnimTransform, Array<unsigned short, eastl::allocator> const&, math::Vector3T<float> const&,
                           math::Vector3T<float> const&, math::QuaternionT<float> const&, bool, math::Vector3T<float>&,
                           WrapArray<math::Matrix43T<float>>&);
        ApplyBillboardTransform(AnimTransform, Array<unsigned short, eastl::allocator> const&,
                                math::Vector3T<float> const&, WrapArray<float>&);
        ApplyColourTransform(AnimTransform, Array<unsigned short, eastl::allocator> const&,
                             math::Vector3T<float> const&, WrapArray<float>&, bool);
        void ApplyOriginTransform(AnimTransform, shared_ptr<AnimBase> const&, Array<LabelData, eastl::allocator> const&,
                                  WrapArray<math::Matrix43T<float>> const&, unsigned int, int,
                                  math::Vector3T<float> const&, math::Vector3T<float>&);
        CalculateCentreOfLabels(Array<LabelData, eastl::allocator> const&,
                                Array<unsigned short, eastl::allocator> const&,
                                WrapArray<math::Matrix43T<float>> const&);
        void InterpolateRT5FrameTransforms(WrapArray<math::Matrix43T<float>>&, WrapArray<float>&, WrapArray<float>&,
                                           AnimationFrameRT5 const&, AnimationFrameRT5 const&, float,
                                           Array<LabelData, eastl::allocator> const&,
                                           shared_ptr<WalkMergeDataProvider> const&, bool, bool);
        AnimationHelper* VectorArryFromLabelDeltas(WrapArray<float> const&);

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100984790, 688 bytes, placed by class name and debug map
    // AnimationHelper::ApplyBoneTransform(AnimTransform, Array<unsigned short, eastl::allocator> const&, math::Vector3T<float> const&, math::Vector3T<float> const&, math::QuaternionT<float> const&, bool, math::Vector3T<float>&, WrapArray<math::Matrix43T<float> >&)
    undefined8 AnimationHelper::ApplyBoneTransform(
        undefined8 param_1, float param_2, char param_3,
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* param_4,
        Vector3T* param_5, Vector3T* param_6, QuaternionT* param_7, char param_8, math* param_9, Layout* param_10) {
        ushort uVar1;
        ushort* puVar2;
        ushort* puVar3;
        ulong uVar4;
        Matrix43T<float>* pMVar5;
        Vector3T<float>* this;
        long lVar6;
        Vector3T* pVVar7;
        Vector3T* pVVar8;
        float fVar9;
        ColourHSL local_98[3];
        Vector3T local_60[8];
        float local_58;

        if (param_3 == '\x03') {
            fVar9 = *(float*)(param_5 + 4);
            math::ColourHSL::ColourHSL(local_98, *(float*)param_5, fVar9, *(float*)(param_5 + 8));
            puVar2 = (ushort*)param_4->data();
            puVar3 = (ushort*)param_4->end();
            for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
                pVVar8 = (Vector3T*)(ulong)*puVar2;
                pVVar7 = (Vector3T*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(param_10);
                if (pVVar8 < pVVar7) {
                    pVVar7 = pVVar8;
                    pMVar5 = (Matrix43T<float>*)WrapArray<math::Matrix43T<float>>::operator[](
                        (WrapArray<math::Matrix43T<float>>*)param_10, (ulong)pVVar8);
                    local_60 = (Vector3T[8])math::operator-(param_9, pVVar7);
                    local_58 = fVar9;
                    pMVar5->Translate(local_60);
                    this = (Vector3T<float>*)WrapArray<math::Matrix43T<float>>::operator[](
                        (WrapArray<math::Matrix43T<float>>*)param_10, (ulong)pVVar8);
                    math::Vector3T<float>::operator*=(this, (Vector3T*)local_98);
                    lVar6 = WrapArray<math::Matrix43T<float>>::operator[]((WrapArray<math::Matrix43T<float>>*)param_10,
                                                                          (ulong)pVVar8);
                    math::Vector3T<float>::operator*=((Vector3T<float>*)(lVar6 + 12), (Vector3T*)local_98);
                    lVar6 = WrapArray<math::Matrix43T<float>>::operator[]((WrapArray<math::Matrix43T<float>>*)param_10,
                                                                          (ulong)pVVar8);
                    math::Vector3T<float>::operator*=((Vector3T<float>*)(lVar6 + 24), (Vector3T*)local_98);
                    lVar6 = WrapArray<math::Matrix43T<float>>::operator[]((WrapArray<math::Matrix43T<float>>*)param_10,
                                                                          (ulong)pVVar8);
                    math::Vector3T<float>::operator*=((Vector3T<float>*)(lVar6 + 36), (Vector3T*)local_98);
                    pMVar5 = (Matrix43T<float>*)WrapArray<math::Matrix43T<float>>::operator[](
                        (WrapArray<math::Matrix43T<float>>*)param_10, (ulong)pVVar8);
                    pMVar5->Translate(param_9);
                }
            }
        } else if (param_3 == '\x02') {
            new (local_98) math::Matrix43T<float>();
            if (param_8 == '\0') {
                math::Matrix33RotationSinCos<float>((math*)local_60, param_5, param_6);
                local_98->Set(local_60, param_9);
            } else {
                local_98->Set(param_7, param_9);
            }
            puVar2 = (ushort*)param_4->data();
            puVar3 = (ushort*)param_4->end();
            for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
                pVVar8 = (Vector3T*)(ulong)*puVar2;
                pVVar7 = (Vector3T*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(param_10);
                if (pVVar8 < pVVar7) {
                    pVVar7 = pVVar8;
                    pMVar5 = (Matrix43T<float>*)WrapArray<math::Matrix43T<float>>::operator[](
                        (WrapArray<math::Matrix43T<float>>*)param_10, (ulong)pVVar8);
                    local_60 = (Vector3T[8])math::operator-(param_9, pVVar7);
                    local_58 = param_2;
                    pMVar5->Translate(local_60);
                    pMVar5 = (Matrix43T<float>*)WrapArray<math::Matrix43T<float>>::operator[](
                        (WrapArray<math::Matrix43T<float>>*)param_10, (ulong)pVVar8);
                    math::Matrix43T<float>::operator*=(pMVar5, (Matrix43T*)local_98);
                }
            }
        } else {
            if (param_3 != '\x01') {
                return 0;
            }
            puVar2 = (ushort*)param_4->data();
            puVar3 = (ushort*)param_4->end();
            if (puVar2 == puVar3) {
                return 1;
            }
            do {
                uVar1 = *puVar2;
                uVar4 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                        Layout::HeapBeginPtr(param_10);
                if (uVar1 < uVar4) {
                    pMVar5 = (Matrix43T<float>*)WrapArray<math::Matrix43T<float>>::operator[](
                        (WrapArray<math::Matrix43T<float>>*)param_10, (ulong)uVar1);
                    pMVar5->Translate(param_5);
                }
                puVar2 = puVar2 + 1;
            } while (puVar2 != puVar3);
        }
        return 1;
    }

    // 0x100984a40, 528 bytes, placed by class name and debug map
    // AnimationHelper::ApplyBillboardTransform(AnimTransform, Array<unsigned short, eastl::allocator> const&, math::Vector3T<float> const&, WrapArray<float>&)
    undefined8 AnimationHelper::ApplyBillboardTransform(
        char param_1,
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* param_2,
        Vector3T<float>* param_3, WrapArray<float>* param_4) {
        float fVar1;
        ushort uVar2;
        ushort* puVar3;
        ushort* puVar4;
        float* pfVar5;

        if (param_1 == '\n') {
            puVar3 = (ushort*)param_2->data();
            puVar4 = (ushort*)param_2->end();
            if (puVar3 == puVar4) {
                return 1;
            }
            do {
                uVar2 = *puVar3;
                pfVar5 = (float*)math::Vector3T<float>::operator[](param_3, 0);
                fVar1 = *pfVar5;
                pfVar5 = (float*)WrapArray<float>::operator[](param_4, (ulong)uVar2 * 8 + 2);
                *pfVar5 = fVar1 * *pfVar5;
                pfVar5 = (float*)math::Vector3T<float>::operator[](param_3, 1);
                fVar1 = *pfVar5;
                pfVar5 = (float*)WrapArray<float>::operator[](param_4, (ulong)((uint)uVar2 * 8 | 3));
                *pfVar5 = fVar1 * *pfVar5;
                puVar3 = puVar3 + 1;
            } while (puVar3 != puVar4);
        } else if (param_1 == '\t') {
            puVar3 = (ushort*)param_2->data();
            puVar4 = (ushort*)param_2->end();
            if (puVar3 == puVar4) {
                return 1;
            }
            do {
                uVar2 = *puVar3;
                pfVar5 = (float*)math::Vector3T<float>::operator[](param_3, 0);
                fVar1 = *pfVar5;
                pfVar5 = (float*)WrapArray<float>::operator[](param_4, (ulong)uVar2 * 8 + 4);
                *pfVar5 = fVar1 + *pfVar5;
                puVar3 = puVar3 + 1;
            } while (puVar3 != puVar4);
        } else {
            if (param_1 != '\b') {
                return 0;
            }
            puVar3 = (ushort*)param_2->data();
            puVar4 = (ushort*)param_2->end();
            if (puVar3 == puVar4) {
                return 1;
            }
            do {
                uVar2 = *puVar3;
                pfVar5 = (float*)math::Vector3T<float>::operator[](param_3, 0);
                fVar1 = *pfVar5;
                pfVar5 = (float*)WrapArray<float>::operator[](param_4, (ulong)uVar2 * 8);
                *pfVar5 = fVar1 + *pfVar5;
                pfVar5 = (float*)math::Vector3T<float>::operator[](param_3, 1);
                fVar1 = *pfVar5;
                pfVar5 = (float*)WrapArray<float>::operator[](param_4, (ulong)((int)((ulong)uVar2 * 8) + 1));
                *pfVar5 = fVar1 + *pfVar5;
                puVar3 = puVar3 + 1;
            } while (puVar3 != puVar4);
        }
        return 1;
    }

    // 0x100984c50, 512 bytes, placed by class name and debug map
    // AnimationHelper::ApplyColourTransform(AnimTransform, Array<unsigned short, eastl::allocator> const&, math::Vector3T<float> const&, WrapArray<float>&, bool)
    undefined8 AnimationHelper::ApplyColourTransform(
        char param_1,
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* param_2,
        Vector3T<float>* param_3, Layout* param_4, char param_5) {
        ulong uVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        ushort uVar5;
        float* pfVar6;
        ushort* puVar7;
        ushort* puVar8;
        ulong uVar9;
        float fVar10;
        float local_34;

        if (param_1 == '\a') {
            pfVar6 = (float*)math::Vector3T<float>::operator[](param_3, 0);
            local_34 = 0.003921569;
            fVar10 = 0.003921569;
            if (param_5 == '\0') {
                fVar10 = 0.015625;
                local_34 = 0.00390625;
            }
            fVar2 = *pfVar6;
            pfVar6 = (float*)math::Vector3T<float>::operator[](param_3, 1);
            fVar3 = *pfVar6;
            pfVar6 = (float*)math::Vector3T<float>::operator[](param_3, 2);
            fVar4 = *pfVar6;
            puVar7 = (ushort*)param_2->data();
            puVar8 = (ushort*)param_2->end();
            if (puVar7 == puVar8) {
                return 1;
            }
            do {
                uVar5 = *puVar7;
                uVar1 = (ulong)uVar5 * 4 + 2;
                uVar9 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(param_4);
                if ((uVar1 & 65535) < uVar9) {
                    pfVar6 = (float*)WrapArray<float>::operator[]((WrapArray<float>*)param_4, (ulong)uVar5 << 2);
                    *pfVar6 = *pfVar6 + fVar2 * fVar10;
                    pfVar6 =
                        (float*)WrapArray<float>::operator[]((WrapArray<float>*)param_4, (ulong)((uint)uVar5 << 2 | 1));
                    *pfVar6 = *pfVar6 + fVar10 * fVar3;
                    pfVar6 = (float*)WrapArray<float>::operator[]((WrapArray<float>*)param_4, uVar1);
                    *pfVar6 = *pfVar6 + local_34 * fVar4;
                }
                puVar7 = puVar7 + 1;
            } while (puVar7 != puVar8);
        } else {
            if (param_1 != '\x05') {
                return 0;
            }
            pfVar6 = (float*)math::Vector3T<float>::operator[](param_3, 0);
            if (param_5 == '\0') {
                fVar10 = *pfVar6 * 0.03137255;
            } else {
                fVar10 = 1.0 - *pfVar6;
            }
            puVar7 = (ushort*)param_2->data();
            puVar8 = (ushort*)param_2->end();
            if (puVar7 == puVar8) {
                return 1;
            }
            do {
                uVar1 = (ulong)*puVar7 * 4 + 3;
                uVar9 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(param_4);
                if ((uVar1 & 65535) < uVar9) {
                    pfVar6 = (float*)WrapArray<float>::operator[]((WrapArray<float>*)param_4, uVar1);
                    *pfVar6 = *pfVar6 - fVar10;
                }
                puVar7 = puVar7 + 1;
            } while (puVar7 != puVar8);
        }
        return 1;
    }

    // 0x1009883b0, 144 bytes, placed by class name
    // AnimationHelper::ApplyOriginTransform(AnimTransform, shared_ptr<AnimBase> const&, Array<LabelData, eastl::allocator> const&, WrapArray<math::Matrix43T<float> > const&, unsigned int, int, math::Vector3T<float> const&, math::Vector3T<float>&)
    void AnimationHelper::ApplyOriginTransform(undefined8 param_1, undefined4 param_2, int param_3,
                                               shared_ptr<AnimBase>* param_4, Array* param_5, WrapArray* param_6,
                                               uint param_7, uint param_8, Vector3T* param_9,
                                               Vector4T<float>* param_10) {
        AnimBase* this;
        Array* pAVar1;
        undefined8 local_40;
        undefined4 local_38;

        if ((param_3 == 0) || (param_8 != 4294967295)) {
            if (param_8 != 4294967295) {
                param_7 = param_8;
            }
            this = (AnimBase*)shared_ptr<AnimBase>::operator->(param_4);
            pAVar1 = (Array*)GetTransformLabels(param_7);
            local_40 = CalculateCentreOfLabels(param_5, pAVar1, param_6);
            local_38 = param_2;
            math::Vector4T<float>::SetXYZ(param_10, (Vector3T*)&local_40);
            if ((char)param_3 == '\0') {
                math::Vector3T<float>::operator+=((Vector3T<float>*)param_10, param_9);
            }
        }
    }

    // 0x100988e20, 352 bytes, placed by class name
    // AnimationHelper::CalculateCentreOfLabels(Array<LabelData, eastl::allocator> const&, Array<unsigned short, eastl::allocator> const&, WrapArray<math::Matrix43T<float> > const&)
    undefined8 AnimationHelper::CalculateCentreOfLabels(Array* param_1, Array* param_2, WrapArray* param_3) {
        ushort uVar1;
        ulong uVar2;
        char cVar3;
        ulong* puVar4;
        ushort* puVar5;
        ushort* puVar6;
        Vector3T* pVVar7;
        Matrix43T* pMVar8;
        uint uVar9;
        uint uVar10;
        ulong local_68[2];
        ulong local_58[2];
        uint local_48;
        uint local_44;
        undefined8 local_40;
        undefined4 local_38;

        local_38 = *(undefined4*)(PTR_ZERO_100ee66e8 + 8);
        local_40 = *(undefined8*)PTR_ZERO_100ee66e8;
        cVar3 = param_2->empty();
        if (cVar3 == '\0') {
            cVar3 = param_1->empty();
            if (cVar3 == '\0') {
                local_68[0] = param_3->HeapBeginPtr();
                local_58[0] = param_1->end();
                puVar4 = std::min<unsigned long>(local_68, local_58);
                uVar2 = *puVar4;
                uVar10 = (uint)(ushort)uVar2;
                puVar5 = (ushort*)param_2->data();
                puVar6 = (ushort*)param_2->end();
                uVar9 = 0;
                if (puVar5 != puVar6) {
                    local_44 = (uint)(ushort)uVar2;
                    do {
                        uVar1 = *puVar5;
                        if (uVar1 < uVar10) {
                            local_48 = uVar9;
                            pVVar7 = (Vector3T*)Array<LabelData, eastl::allocator>::operator[](
                                (Array<LabelData, eastl::allocator>*)param_1, (ulong)uVar1);
                            pMVar8 = (Matrix43T*)WrapArray<math::Matrix43T<float>>::operator[](
                                (WrapArray<math::Matrix43T<float>>*)param_3, (ulong)uVar1);
                            local_58[0] = math::operator*(pVVar7, pMVar8);
                            local_68[0] = math::operator*((Vector3T*)local_58, (float)*(int*)(pVVar7 + 12));
                            math::Vector3T<float>::operator+=((Vector3T<float>*)&local_40, (Vector3T*)local_68);
                            uVar9 = local_48 + *(int*)(pVVar7 + 12);
                            uVar10 = local_44;
                        }
                        puVar5 = puVar5 + 1;
                    } while (puVar5 != puVar6);
                }
                if (uVar9 != 0) {
                    math::Vector3T<float>::operator/=((Vector3T<float>*)&local_40, (float)uVar9);
                }
            }
        }
        return local_40;
    }

    // 0x100989070, 768 bytes, placed by class name
    // AnimationHelper::InterpolateRT5FrameTransforms(WrapArray<math::Matrix43T<float> >&, WrapArray<float>&, WrapArray<float>&, AnimationFrameRT5 const&, AnimationFrameRT5 const&, float, Array<LabelData, eastl::allocator> const&, shared_ptr<WalkMergeDataProvider> const&, bool, bool)
    void AnimationHelper::InterpolateRT5FrameTransforms(WrapArray* param_1, WrapArray* param_2, WrapArray* param_3,
                                                        AnimationFrameRT5* param_4, AnimationFrameRT5* param_5,
                                                        float param_6, Array* param_7, shared_ptr* param_8,
                                                        bool param_9, bool param_10) {
        undefined8 uVar1;
        byte bVar2;
        byte bVar3;
        char cVar5;
        ushort uVar7;
        shared_ptr<AnimBase>* this;
        AnimBase* pAVar8;
        long* plVar9;
        Array<bool, eastl::allocator>* this_00;
        char* pcVar10;
        AnimationFrameRT5Transform* pAVar11;
        AnimationFrameRT5Transform* pAVar12;
        uint uVar13;
        ulong uVar14;
        undefined1 local_120[68];
        undefined1 local_dc[12];
        undefined1 local_d0[24];
        undefined1 local_b8[20];
        undefined4 local_a4;
        Vector3T<int> local_88[16];
        undefined8 local_78;
        AnimationFrameRT5* local_70;
        AnimationFrameRT5* local_60;
        uint local_58;
        undefined1 local_54[12];
        ulong local_48;
        ulong local_40;
        byte local_31;

        local_54._0_4_ = param_6;
        this = (shared_ptr<AnimBase>*)param_4->second();
        math::Vector3T<int>::Vector3T(local_88);
        pAVar8 = (AnimBase*)shared_ptr<AnimBase>::operator->(this);
        if (pAVar8->GetTransformCount() != 0) {
            uVar14 = 0;
            local_48 = 0;
            local_40 = 0;
            local_70 = param_5;
            local_60 = param_4;
            local_54._4_8_ = this;
            do {
                pAVar8 = (AnimBase*)shared_ptr<AnimBase>::operator->(this);
                uVar13 = (uint)uVar14;
                local_31 = pAVar8->GetTransformType(uVar13);
                pAVar8 = (AnimBase*)shared_ptr<AnimBase>::operator->(this);
                local_78 = pAVar8->GetTransformLabels(uVar13);
                bVar2 = param_4->HasBaseTransformInSlot((uint)local_48, uVar13);
                bVar3 = param_5->HasBaseTransformInSlot((uint)local_40, uVar13);
                if ((bVar2 == 0) && (bVar3 == 0)) {
                    this = (shared_ptr<AnimBase>*)local_54._4_8_;
                } else {
                    if (operator!=(param_8, (_func_decltype_nullptr*)0)) {
                        plVar9 = (long*)shared_ptr<WalkMergeDataProvider>::operator->(
                            (shared_ptr<WalkMergeDataProvider>*)param_8);
                        this_00 = (Array<bool, eastl::allocator>*)(**(code**)(*plVar9 + 16))(plVar9);
                        pcVar10 = (char*)Array<bool, eastl::allocator>::operator[](this_00, uVar14);
                        if (((bool)*pcVar10 != param_9) && (local_31 != 0)) {
                            local_48 = (ulong)((int)local_48 + (uint)bVar2);
                            local_40 = (ulong)((int)local_40 + (uint)bVar3);
                            this = (shared_ptr<AnimBase>*)local_54._4_8_;
                            goto LAB_100989104;
                        }
                    }
                    pAVar12 = (AnimationFrameRT5Transform*)local_120;
                    local_58 = (uint)local_31;
                    AnimationFrameRT5Transform::AnimationFrameRT5Transform(pAVar12, local_31, uVar14 & 4294967295);
                    if (bVar2 == 0) {
                        pAVar11 = pAVar12;
                        if (bVar3 != 0)
                            goto LAB_100989238;
                    } else {
                        uVar13 = (uint)local_48;
                        pAVar11 = (AnimationFrameRT5Transform*)param_4->GetTransform(uVar13);
                        local_48 = (ulong)(uVar13 + 1);
                        if (bVar3 != 0) {
                        LAB_100989238:
                            uVar13 = (uint)local_40;
                            pAVar12 = (AnimationFrameRT5Transform*)local_70->GetTransform(uVar13);
                            local_40 = (ulong)(uVar13 + 1);
                        }
                    }
                    param_4 = local_60;
                    new ((local_120 + 64)) AnimationFrameRT5Transform();
                    uVar13 = local_58;
                    local_54._0_4_->Lerp((AnimationFrameRT5Transform*)(local_120 + 64), pAVar11, pAVar12, local_58);
                    this = (shared_ptr<AnimBase>*)local_54._4_8_;
                    if (param_10) {
                        local_88->SetXYZ((Vector3T*)((long)&pAVar12->field_24 + 4));
                        this = (shared_ptr<AnimBase>*)local_54._4_8_;
                    } else {
                        ApplyOriginTransform(uVar13, local_54._4_8_, param_7, param_1, uVar14 & 4294967295, local_a4,
                                             local_dc, local_88);
                    }
                    uVar1 = local_78;
                    if (((local_31 != 0) && (cVar5 = ApplyBoneTransform(uVar13, local_78, local_dc, local_d0, local_b8,
                                                                        1, local_88, param_1),
                                             cVar5 == '\0')) &&
                        (cVar5 = ApplyColourTransform(uVar13, uVar1, local_dc, param_2, param_10), cVar5 == '\0')) {
                        ApplyBillboardTransform(uVar13, uVar1, local_dc, param_3);
                    }
                    param_5 = local_70;
                }
            LAB_100989104:
                uVar14 = uVar14 + 1;
                pAVar8 = (AnimBase*)shared_ptr<AnimBase>::operator->(this);
                uVar7 = pAVar8->GetTransformCount();
            } while (uVar14 < uVar7);
        }
    }

    // 0x100989400, 80 bytes, placed by class name
    // AnimationHelper::VectorArryFromLabelDeltas(WrapArray<float> const&)
    AnimationHelper* AnimationHelper::VectorArryFromLabelDeltas(WrapArray* param_1) {
        uchar* puVar1;
        ulong uVar2;

        puVar1 = (uchar*)param_1->end();
        uVar2 = param_1->HeapBeginPtr();
        new (this) WrapArray<unsigned char>(puVar1, uVar2 >> 2);
        return this;
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x100986020, 80 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float> Matrix44Identity<float>()
    Matrix44T* Matrix44Identity<float>(Matrix44T* __return_storage_ptr__, math* this) {
        new (__return_storage_ptr__)
            Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
        return __return_storage_ptr__;
    }

} // namespace jag::math

// 0x100986380, 16 bytes, placed by debug map only (low confidence)
// abs(float)
ulong abs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}
