// libs/graphics/runetek7/animation/AnimationHelper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class AnimationHelper {
    public:
        uint64_t ApplyBoneTransform(AnimTransform animTransform, const Array<unsigned short>& arg2,
                                    const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                                    const math::QuaternionT<float>& quaternion, bool arg6,
                                    math::Vector3T<float>& vector33, WrapArray<math::Matrix43T<float>>& wrapArray);
        void ApplyBillboardTransform(AnimTransform animTransform, const Array<unsigned short>& arg2,
                                     const math::Vector3T<float>& vector3, WrapArray<float>& wrapArray);
        void ApplyColourTransform(AnimTransform animTransform, const Array<unsigned short>& arg2,
                                  const math::Vector3T<float>& vector3, WrapArray<float>& wrapArray, bool arg5);
        void ApplyOriginTransform(AnimTransform animTransform, const shared_ptr<AnimBase>& animBase,
                                  const Array<LabelData>& labelDatas,
                                  const WrapArray<math::Matrix43T<float>>& wrapArray, unsigned int arg5, int arg6,
                                  const math::Vector3T<float>& vector31, math::Vector3T<float>& vector32);
        void CalculateCentreOfLabels(const Array<LabelData>& labelDatas, const Array<unsigned short>& arg2,
                                     const WrapArray<math::Matrix43T<float>>& wrapArray);
        void InterpolateRT5FrameTransforms(WrapArray<math::Matrix43T<float>>& wrapArray1, WrapArray<float>& wrapArray2,
                                           WrapArray<float>& wrapArray3, const AnimationFrameRT5& animationFrameRT51,
                                           const AnimationFrameRT5& animationFrameRT52, float arg6,
                                           const Array<LabelData>& labelDatas,
                                           const shared_ptr<WalkMergeDataProvider>& walkMergeDataProvider, bool arg9,
                                           bool arg10);
        auto VectorArryFromLabelDeltas(const WrapArray<float>& wrapArray);

        uint8_t _unknown_0[1];
    };

    // 0x100984790
    uint64_t AnimationHelper::ApplyBoneTransform(AnimTransform animTransform, const Array<unsigned short>& arg2,
                                                 const math::Vector3T<float>& vector31,
                                                 const math::Vector3T<float>& vector32,
                                                 const math::QuaternionT<float>& quaternion, bool arg6,
                                                 math::Vector3T<float>& vector33,
                                                 WrapArray<math::Matrix43T<float>>& wrapArray) {
        unsigned short uVar1;
        unsigned short* puVar2;
        unsigned short* puVar3;
        unsigned long uVar4;
        Matrix43T<float>* pMVar5;
        Vector3T<float>* this_00;
        long lVar6;
        uint32_t in_register_00000034;
        unsigned long uVar8;
        float arg2_00;
        uint64_t in_stack_00000009;
        ColourHSL local_98;
        uint64_t local_60;
        float local_58;
        Vector3T<float>* local_38;

        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_01 =
            (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)(((uint64_t)in_register_00000034 << 32) |
                                                                      (uint32_t)animTransform);
        if ((char)this == '\x03') {
            arg2_00 = *(float*)(arg2 + 4);
            local_98 = math::ColourHSL(*(float*)arg2, arg2_00, *(float*)(arg2 + 8));
            puVar2 = (unsigned short*)this_01->data();
            puVar3 = (unsigned short*)this_01->end();
            for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
                uVar8 = (unsigned long)*puVar2;
                uVar4 = vector33.HeapBeginPtr();
                if (uVar8 < uVar4) {
                    pMVar5 = &vector33[uVar8];
                    local_60 = math::operator-((Vector3T<float>*)(((uint64_t)in_stack_00000009 << 8) | (uint8_t)arg6));
                    local_58 = arg2_00;
                    pMVar5->Translate(local_60);
                    this_00 = &vector33[uVar8];
                    *this_00 *= &local_98;
                    lVar6 = vector33[uVar8];
                    (*((lVar6 + 12))) *= &local_98;
                    lVar6 = vector33[uVar8];
                    (*((lVar6 + 24))) *= &local_98;
                    lVar6 = vector33[uVar8];
                    (*((lVar6 + 36))) *= &local_98;
                    pMVar5 = &vector33[uVar8];
                    pMVar5->Translate(*((Vector3T<float>*)(((uint64_t)in_stack_00000009 << 8) | (uint8_t)arg6)));
                }
            }
        } else if ((char)this == '\x02') {
            local_38 = vector31;
            local_98 = math::Matrix43T<float>();
            if ((char)quaternion == '\0') {
                math::Matrix33RotationSinCos<float>(local_60, arg2);
                local_98 = math::Matrix43T<float>::Set(
                    local_60, *((Vector3T<float>*)(((uint64_t)in_stack_00000009 << 8) | (uint8_t)arg6)));
            } else {
                local_98 = math::Matrix43T<float>::Set(
                    vector32, *((Vector3T<float>*)(((uint64_t)in_stack_00000009 << 8) | (uint8_t)arg6)));
            }
            puVar2 = (unsigned short*)this_01->data();
            puVar3 = (unsigned short*)this_01->end();
            for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
                uVar8 = (unsigned long)*puVar2;
                uVar4 = vector33.HeapBeginPtr();
                if (uVar8 < uVar4) {
                    pMVar5 = &vector33[uVar8];
                    local_60 = math::operator-((Vector3T<float>*)(((uint64_t)in_stack_00000009 << 8) | (uint8_t)arg6));
                    pMVar5->Translate(local_60);
                    pMVar5 = &vector33[uVar8];
                    *pMVar5 *= local_98;
                }
            }
        } else {
            if ((char)this != '\x01') {
                return 0;
            }
            puVar2 = (unsigned short*)this_01->data();
            puVar3 = (unsigned short*)this_01->end();
            if (puVar2 == puVar3) {
                return 1;
            }
            do {
                uVar1 = *puVar2;
                uVar4 = vector33.HeapBeginPtr();
                if (uVar1 < uVar4) {
                    pMVar5 = &vector33[(unsigned long)uVar1];
                    pMVar5->Translate(arg2);
                }
                puVar2 = puVar2 + 1;
            } while (puVar2 != puVar3);
        }
        return 1;
    }

    // 0x100984a40
    void AnimationHelper::ApplyBillboardTransform(AnimTransform animTransform, const Array<unsigned short>& arg2,
                                                  const math::Vector3T<float>& vector3, WrapArray<float>& wrapArray) {
        float fVar1;
        unsigned short uVar2;
        unsigned short* puVar3;
        unsigned short* puVar4;
        float* pfVar5;

        if ((char)animTransform == '\n') {
            puVar3 = (unsigned short*)arg2.data();
            puVar4 = (unsigned short*)arg2.end();
            if (puVar3 == puVar4) {
                return 1;
            }
            do {
                uVar2 = *puVar3;
                pfVar5 = &vector3[0];
                fVar1 = *pfVar5;
                pfVar5 = &wrapArray[(unsigned long)uVar2 * 8 + 2];
                *pfVar5 = fVar1 * *pfVar5;
                pfVar5 = &vector3[1];
                fVar1 = *pfVar5;
                pfVar5 = &wrapArray[(unsigned long)((unsigned int)uVar2 * 8 | 3)];
                *pfVar5 = fVar1 * *pfVar5;
                puVar3 = puVar3 + 1;
            } while (puVar3 != puVar4);
        } else if ((char)animTransform == '\t') {
            puVar3 = (unsigned short*)arg2.data();
            puVar4 = (unsigned short*)arg2.end();
            if (puVar3 == puVar4) {
                return 1;
            }
            do {
                uVar2 = *puVar3;
                pfVar5 = &vector3[0];
                fVar1 = *pfVar5;
                pfVar5 = &wrapArray[(unsigned long)uVar2 * 8 + 4];
                *pfVar5 = fVar1 + *pfVar5;
                puVar3 = puVar3 + 1;
            } while (puVar3 != puVar4);
        } else {
            if ((char)animTransform != '\b') {
                return 0;
            }
            puVar3 = (unsigned short*)arg2.data();
            puVar4 = (unsigned short*)arg2.end();
            if (puVar3 == puVar4) {
                return 1;
            }
            do {
                uVar2 = *puVar3;
                pfVar5 = &vector3[0];
                fVar1 = *pfVar5;
                pfVar5 = &wrapArray[(unsigned long)uVar2 * 8];
                *pfVar5 = fVar1 + *pfVar5;
                pfVar5 = &vector3[1];
                fVar1 = *pfVar5;
                pfVar5 = (float*)wrapArray[(unsigned long)((int)((unsigned long)uVar2 * 8) + 1)];
                *pfVar5 = fVar1 + *pfVar5;
                puVar3 = puVar3 + 1;
            } while (puVar3 != puVar4);
        }
        return 1;
    }

    // 0x100984c50
    void AnimationHelper::ApplyColourTransform(AnimTransform animTransform, const Array<unsigned short>& arg2,
                                               const math::Vector3T<float>& vector3, WrapArray<float>& wrapArray,
                                               bool arg5) {
        unsigned long uVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        unsigned short uVar5;
        float* pfVar6;
        unsigned short* puVar7;
        unsigned short* puVar8;
        unsigned long uVar9;
        float fVar10;
        float local_34;

        if ((char)animTransform == '\a') {
            pfVar6 = &vector3[0];
            local_34 = 0.003921569f;
            fVar10 = 0.003921569f;
            if (!arg5) {
                fVar10 = 0.015625f;
                local_34 = 0.00390625f;
            }
            fVar2 = *pfVar6;
            pfVar6 = &vector3[1];
            fVar3 = *pfVar6;
            pfVar6 = &vector3[2];
            fVar4 = *pfVar6;
            puVar7 = (unsigned short*)arg2.data();
            puVar8 = (unsigned short*)arg2.end();
            if (puVar7 == puVar8) {
                return 1;
            }
            do {
                uVar5 = *puVar7;
                uVar1 = (unsigned long)uVar5 * 4 + 2;
                uVar9 = wrapArray.HeapBeginPtr();
                if ((uVar1 & 65535) < uVar9) {
                    pfVar6 = &wrapArray[(unsigned long)uVar5 << 2];
                    *pfVar6 = *pfVar6 + fVar2 * fVar10;
                    pfVar6 = &wrapArray[(unsigned long)((unsigned int)uVar5 << 2 | 1)];
                    *pfVar6 = *pfVar6 + fVar10 * fVar3;
                    pfVar6 = &wrapArray[uVar1];
                    *pfVar6 = *pfVar6 + local_34 * fVar4;
                }
                puVar7 = puVar7 + 1;
            } while (puVar7 != puVar8);
        } else {
            if ((char)animTransform != '\x05') {
                return 0;
            }
            pfVar6 = &vector3[0];
            if (arg5) {
                fVar10 = 1.0 - *pfVar6;
            } else {
                fVar10 = *pfVar6 * 0.03137255f;
            }
            puVar7 = (unsigned short*)arg2.data();
            puVar8 = (unsigned short*)arg2.end();
            if (puVar7 == puVar8) {
                return 1;
            }
            do {
                uVar1 = (unsigned long)*puVar7 * 4 + 3;
                uVar9 = wrapArray.HeapBeginPtr();
                if ((uVar1 & 65535) < uVar9) {
                    pfVar6 = &wrapArray[uVar1];
                    *pfVar6 = *pfVar6 - fVar10;
                }
                puVar7 = puVar7 + 1;
            } while (puVar7 != puVar8);
        }
        return 1;
    }

    // 0x1009883b0
    void AnimationHelper::ApplyOriginTransform(AnimTransform animTransform, const shared_ptr<AnimBase>& animBase,
                                               const Array<LabelData>& labelDatas,
                                               const WrapArray<math::Matrix43T<float>>& wrapArray, unsigned int arg5,
                                               int arg6, const math::Vector3T<float>& vector31,
                                               math::Vector3T<float>& vector32) {
        AnimBase* this_00;
        Array<unsigned short>* arg2;
        unsigned int arg1;
        uint32_t in_register_00000034;
        uint32_t in_stack_0000000c;
        uint64_t local_40[2];

        if (((int)this == 0) || (arg5 != 4294967295)) {
            arg1 = (unsigned int)wrapArray;
            if (arg5 != 4294967295) {
                arg1 = arg5;
            }
            this_00 = (AnimBase*)(*((shared_ptr<AnimBase>*)(((uint64_t)in_register_00000034 << 32) |
                                                            (uint32_t)animTransform)))
                          .operator->();
            arg2 = (Array<unsigned short>*)this_00->GetTransformLabels(arg1);
            local_40[0] = CalculateCentreOfLabels((Array<LabelData>*)animBase, arg2,
                                                  (WrapArray<math::Matrix43T<float> _>*)labelDatas);
            vector31.SetXYZ(*local_40);
            if ((char)this == '\0') {
                vector31 += (*((Vector3T<float>*)(((uint64_t)in_stack_0000000c << 32) | (uint32_t)arg6)));
            }
        }
    }

    // 0x100988e20
    void AnimationHelper::CalculateCentreOfLabels(const Array<LabelData>& labelDatas, const Array<unsigned short>& arg2,
                                                  const WrapArray<math::Matrix43T<float>>& wrapArray) {
        unsigned short uVar1;
        unsigned long uVar2;
        unsigned long* puVar4;
        unsigned short* puVar5;
        unsigned short* puVar6;
        Vector3T<float>* vector3;
        Matrix43T<float>* matrix43;
        unsigned int uVar7;
        unsigned int uVar8;
        unsigned long local_68[2];
        unsigned long local_58[2];
        unsigned int local_48;
        unsigned int local_44;

        uint32_t local_38 = *(uint32_t*)(PTR_ZERO_100ee66e8 + 8);
        return local_40 = *(uint64_t*)PTR_ZERO_100ee66e8;
        if (!(arg2.empty())) {
            if (!(labelDatas.empty())) {
                local_68[0] = wrapArray.HeapBeginPtr();
                local_58[0] = labelDatas.end();
                puVar4 = std::min<unsigned long>(*local_68, *local_58);
                uVar2 = *puVar4;
                uVar8 = (unsigned int)(unsigned short)uVar2;
                puVar5 = (unsigned short*)arg2.data();
                puVar6 = (unsigned short*)arg2.end();
                uVar7 = 0;
                if (puVar5 != puVar6) {
                    local_44 = (unsigned int)(unsigned short)uVar2;
                    do {
                        uVar1 = *puVar5;
                        if (uVar1 < uVar8) {
                            local_48 = uVar7;
                            vector3 = &labelDatas[(unsigned long)uVar1];
                            matrix43 = &wrapArray[(unsigned long)uVar1];
                            local_58[0] = *vector3 * *matrix43;
                            local_68[0] = (*((float)*(int*)(vector3 + 12))) * *local_58;
                            local_40 += *local_68;
                            uVar7 = local_48 + *(int*)(vector3 + 12);
                            uVar8 = local_44;
                        }
                        puVar5 = puVar5 + 1;
                    } while (puVar5 != puVar6);
                }
                if (uVar7 != 0) {
                    local_40 /= ((float)uVar7);
                }
            }
        }
        return local_40;
    }

    // 0x100989070
    void AnimationHelper::InterpolateRT5FrameTransforms(WrapArray<math::Matrix43T<float>>& wrapArray1,
                                                        WrapArray<float>& wrapArray2, WrapArray<float>& wrapArray3,
                                                        const AnimationFrameRT5& animationFrameRT51,
                                                        const AnimationFrameRT5& animationFrameRT52, float arg6,
                                                        const Array<LabelData>& labelDatas,
                                                        const shared_ptr<WalkMergeDataProvider>& walkMergeDataProvider,
                                                        bool arg9, bool arg10) {
        Array<unsigned short>* arg2;
        AnimTransform animTransform;
        uint8_t bVar1;
        uint8_t bVar2;
        bool cVar4;
        unsigned short uVar6;
        long* plVar8;
        Array<bool>* this_01;
        char* pcVar9;
        AnimationFrameRT5Transform* animationFrameRT5Transform2;
        AnimationFrameRT5Transform* this_02;
        unsigned int uVar10;
        unsigned long arg1;
        Vector3T<float>* in_stack_fffffffffffffed8;
        uint8_t local_120[68];
        Array<unsigned short> local_dc;
        Vector3T<float> local_d0;
        Vector3T<float> local_b8;
        unsigned int local_a4;
        Array<unsigned short>* local_78;
        AnimationFrameRT5* local_70;
        AnimationFrameRT5* local_60;
        AnimTransform local_58;
        shared_ptr<AnimBase>* local_50;
        unsigned long local_48;
        unsigned long local_40;
        uint8_t local_31;

        auto this_00 = wrapArray3.second();
        Vector3T<int> local_88;
        AnimBase* pAVar7 = (AnimBase*)(*this_00).operator->();
        if (pAVar7->GetTransformCount() != 0) {
            arg1 = 0;
            local_48 = 0;
            local_40 = 0;
            local_70 = animationFrameRT51;
            local_60 = (AnimationFrameRT5*)wrapArray3;
            local_50 = this_00;
            do {
                pAVar7 = (AnimBase*)(*this_00).operator->();
                uVar10 = (unsigned int)arg1;
                local_31 = pAVar7->GetTransformType(uVar10);
                pAVar7 = (AnimBase*)(*this_00).operator->();
                local_78 = (Array<unsigned short>*)pAVar7->GetTransformLabels(uVar10);
                bVar1 = wrapArray3.HasBaseTransformInSlot((unsigned int)local_48, uVar10);
                bVar2 = animationFrameRT51.HasBaseTransformInSlot((unsigned int)local_40, uVar10);
                if ((bVar1 == 0) && (bVar2 == 0)) {
                    this_00 = local_50;
                } else {
                    if (labelDatas != nullptr) {
                        plVar8 = (long*)labelDatas.operator->();
                        this_01 = (Array<bool>*)(**(void (**)(...))(*plVar8 + 16))(plVar8);
                        pcVar9 = (char*)(*this_01)[arg1];
                        if ((*pcVar9 != (char)walkMergeDataProvider) && (local_31 != 0)) {
                            local_48 = (unsigned long)((int)local_48 + (unsigned int)bVar1);
                            local_40 = (unsigned long)((int)local_40 + (unsigned int)bVar2);
                            this_00 = local_50;
                            goto LAB_100989104;
                        }
                    }
                    this_02 = (AnimationFrameRT5Transform*)local_120;
                    local_58 = (AnimTransform)local_31;
                    new (this_02) AnimationFrameRT5Transform(local_58, uVar10);
                    if (bVar1 == 0) {
                        animationFrameRT5Transform2 = this_02;
                        if (bVar2 != 0)
                            goto LAB_100989238;
                    } else {
                        uVar10 = (unsigned int)local_48;
                        animationFrameRT5Transform2 = wrapArray3.GetTransform(uVar10);
                        local_48 = (unsigned long)(uVar10 + 1);
                        if (bVar2 != 0) {
                        LAB_100989238:
                            uVar10 = (unsigned int)local_40;
                            this_02 = local_70->GetTransform(uVar10);
                            local_40 = (unsigned long)(uVar10 + 1);
                        }
                    }
                    wrapArray3 = (WrapArray<float>*)local_60;
                    new ((local_120 + 64)) AnimationFrameRT5Transform();
                    animTransform = local_58;
                    AnimationFrameRT5Transform::Lerp(*((local_120 + 64)), *animationFrameRT5Transform2, *this_02,
                                                     local_58, arg6);
                    this_00 = local_50;
                    if (arg9) {
                        local_88.SetXYZ(*((Vector3T<float>*)((long)&this_02->field_24 + 4)));
                        this_00 = local_50;
                    } else {
                        ApplyOriginTransform((AnimationHelper*)(unsigned long)animTransform, (AnimTransform)local_50,
                                             (shared_ptr<AnimBase>*)animationFrameRT52, (Array<LabelData>*)this,
                                             (WrapArray<math::Matrix43T<float> _>*)(arg1 & 4294967295), local_a4,
                                             (int)&local_dc, &local_88, in_stack_fffffffffffffed8);
                    }
                    arg2 = local_78;
                    if (((local_31 != 0) &&
                         (cVar4 = ApplyBoneTransform(
                              (AnimationHelper*)(unsigned long)animTransform, (AnimTransform)local_78, &local_dc,
                              &local_d0, &local_b8, (QuaternionT<float>*)&DAT_00000001, (uint8_t)&local_88,
                              (Vector3T<float>*)this, (WrapArray<math::Matrix43T<float> _>*)in_stack_fffffffffffffed8),
                          !cVar4)) &&
                        (cVar4 =
                             ApplyColourTransform(animTransform, arg2, &local_dc, (WrapArray<float>*)wrapArray1, arg9),
                         !cVar4)) {
                        ApplyBillboardTransform(animTransform, arg2, &local_dc, wrapArray2);
                    }
                    animationFrameRT51 = local_70;
                }
            LAB_100989104:
                arg1 = arg1 + 1;
                pAVar7 = (AnimBase*)(*this_00).operator->();
                uVar6 = pAVar7->GetTransformCount();
            } while (arg1 < uVar6);
        }
    }

    // 0x100989400
    auto AnimationHelper::VectorArryFromLabelDeltas(const WrapArray<float>& wrapArray) {
        auto particle = wrapArray.end();
        unsigned long uVar1 = wrapArray.HeapBeginPtr();
        return auto(particle, uVar1 >> 2);
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x100986020
    Matrix44T<float> Matrix44Identity<float>() {
        Matrix44T<float>* in_RDI;

        new (in_RDI) Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
    }

} // namespace jag::math

// 0x100986380
unsigned long abs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}
