// libs/graphics/runetek7/animation/RT5AnimationSampler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "RT5AnimationSampler.h"

namespace jag::graphics {
    // 0x10002d850: RT5AnimationSampler::GetVertexTransformData() has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x10094f3a0
    RT5AnimationSampler::RT5AnimationSampler()
        : AnimationSampler(), field_80(nullptr), m_transformMaskToggle(1), m_pOverrideAnimationInfo(nullptr) {}

    // 0x10094f430
    void RT5AnimationSampler::Reset() {
        ClearWalkMergeData();
        Reset();
    }

    // 0x10094f4c0
    unsigned int RT5AnimationSampler::GetFrameFromTimeInRange(float& arg1, float arg2, unsigned int arg3,
                                                              const Animation& animation) {
        unsigned int* puVar4;
        unsigned long arg1_00;

        auto array = animation.GetOrigin();
        unsigned int uVar1 = animation.GetRT5FrameCount();
        unsigned int uVar2 = animation.GetRT5FrameCount();
        if (1 < uVar2) {
            arg1_00 = 1;
            do {
                puVar4 = (unsigned int*)(*array)[arg1_00];
                if (arg3 < *puVar4) {
                    uVar1 = (unsigned int)arg1_00;
                    break;
                }
                arg1_00 = arg1_00 + 1;
                uVar2 = animation.GetRT5FrameCount();
            } while (arg1_00 < uVar2);
        }
        uVar2 = uVar1 - 1;
        int iVar3 = animation.GetRT5FrameCount();
        puVar4 = (unsigned int*)(*array)[(unsigned long)uVar2];
        float fVar5 = (float)*puVar4;
        if (uVar2 < iVar3 - 1U) {
            puVar4 = (unsigned int*)(*array)[(unsigned long)uVar1];
            fVar5 = (arg2 - fVar5) / ((float)*puVar4 - fVar5);
            arg1 = fVar5;
            if ((fVar5 < 0.0) || (1.0 < fVar5)) {
                LogAssert("frameInterpolationPosOut >= 0.0f && frameInterpolationPosOut <= 1.0f",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/RT5AnimationSampler.cpp",
                          49, nullptr);
            }
        } else {
            iVar3 = animation.GetMaxMapZ();
            arg1 = (arg2 - fVar5) / ((float)iVar3 - fVar5);
        }
        math::Clamp<float>(arg1, 0.0, 1.0);
        if ((0.0 <= arg1) && (arg1 <= 1.0)) {
            return uVar2;
        }
        LogAssert("frameInterpolationPosOut >= 0.0f && frameInterpolationPosOut <= 1.0f",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/animation/"
                  "RT5AnimationSampler.cpp",
                  64, nullptr);
    }

    // 0x10094f660
    unsigned long RT5AnimationSampler::GetFrameFromTime(float& arg1, unsigned long long arg2,
                                                        const Animation& animation, int arg4,
                                                        AnimationLoopBehaviour animationLoopBehaviour) {
        int iVar1;
        int iVar2;
        int* piVar5;
        unsigned int* puVar6;

        unsigned long uVar4 = animation.GetAnimationSampleIntervalNS();
        float fVar7 = (float)arg2 / (float)uVar4;
        auto array = animation.GetOrigin();
        unsigned int arg3 = (unsigned int)(long)fVar7;
        if ((animationLoopBehaviour == 2) || (arg4 == -1)) {
            if (animation.GetMaxMapZ() <= arg3) {
                arg1 = 1.0;
                iVar1 = animation.GetRT5FrameCount();
                return (unsigned long)(iVar1 - 1);
            }
        } else {
            iVar1 = animation.GetRT5FrameCount();
            uVar4 = (unsigned long)(unsigned int)(iVar1 - arg4);
            iVar2 = animation.GetMaxMapZ();
            piVar5 = (int*)(*array)[uVar4];
            iVar1 = *piVar5;
            puVar6 = (unsigned int*)(*array)[uVar4];
            if (*puVar6 < arg3) {
                puVar6 = (unsigned int*)(*array)[uVar4];
                fVar7 = (float)fmod(fVar7 - (float)*puVar6, (float)(unsigned int)(iVar2 - iVar1));
                puVar6 = (unsigned int*)(*array)[uVar4];
                fVar7 = (float)*puVar6 + fVar7;
                arg3 = (unsigned int)(long)fVar7;
            }
        }
        uVar4 = GetFrameFromTimeInRange(arg1, fVar7, arg3, animation);
        return uVar4;
    }

    // 0x10094f7f0
    void RT5AnimationSampler::GetFramesBeforeAndAfter(unsigned int& arg1, eastl::optional<unsigned int>& arg2,
                                                      float& arg3, const Animation& animation, unsigned long long arg5,
                                                      int arg6, AnimationLoopBehaviour animationLoopBehaviour,
                                                      bool arg8) {
        unsigned int local_38[2];

        int iVar1 = GetFrameFromTime((float*)arg2, (unsigned long long)animation, (Animation*)arg3, (int)arg5, arg6);
        *(int*)&this->_vptr = iVar1;
        unsigned int uVar3 = iVar1 + 1;
        unsigned int uVar2 = arg3.GetRT5FrameCount();
        if ((arg6 == 2) || ((int)arg5 == -1)) {
            if (uVar2 <= uVar3) {
                if (((uint8_t)animationLoopBehaviour == 0) || ((int)arg5 != -1)) {
                    new (local_38) eastl::optional();
                    arg1 = *local_38;
                    return;
                }
                local_38[0] = 0;
                goto LAB_10094f880;
            }
        } else if (uVar2 <= uVar3) {
            iVar1 = arg3.GetRT5FrameCount();
            local_38[0] = iVar1 - (int)arg5;
            arg1 = *local_38;
            return;
        }
        local_38[0] = uVar3;
    LAB_10094f880:
        arg1 = *local_38;
    }

    // 0x10094f8c0
    void RT5AnimationSampler::Update(const Array<LabelData>& labelDatas, const math::Matrix44T<float>& matrix44) {
        uint8_t bVar1;
        AnimationInfo* pAVar2;
        unsigned int* puVar10;
        shared_ptr<AnimationFrameRT5>* psVar11;
        AnimationFrameRT5* pAVar12;
        AnimationFrameRT5* pAVar13;
        int* piVar14;
        NXTRenderCanvas* this_00;
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread_00;
        unsigned long uVar15;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        Matrix43T<float>* this_02;
        Matrix43T<float>* pMVar16;
        int iVar17;
        int iVar18;
        NXTPixToolkit* this_03;
        RT5AnimationSampler* pRVar19;
        float fVar20;
        uint32_t in_stack_ffffffffffffff14;
        uint8_t in_stack_ffffffffffffff18;
        uint8_t in_stack_ffffffffffffff20;
        optional<unsigned int> local_dc;
        AnimationHelper* local_d0;
        WrapArray<math::Matrix43T<float> _>* local_c8;
        WrapArray<float>* local_c0;
        WrapArray<float>* local_b8;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_a8;
        ColourHSL local_88;
        float local_74;
        int local_70;
        int local_6c;
        int local_68;
        float local_64;
        optional<game::option::EnumOptionToggle> local_50;
        unsigned int local_40;
        int local_3c;
        int local_38;
        int local_34;

        uint8_t* midiPlayerMainThread = &field_128;
        bool bVar3 = *midiPlayerMainThread != nullptr;
        if (!bVar3) {
            LogAssert("m_animationInfo.m_animation != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/RT5AnimationSampler.cpp",
                      177, nullptr);
        }
        auto pAVar5 = AnimationManager::GetTimeElapsedSinceNS(*(unsigned long long*)&field_96);
        unsigned int local_44 = 0;
        optional<game::option::EnumOptionToggle> local_b0;
        float* pfVar6 = (float*)**midiPlayerMainThread;
        GetFramesBeforeAndAfter((RT5AnimationSampler*)&local_44, &local_b0, (optional<unsigned int>*)&local_74, pfVar6,
                                pAVar5, (unsigned long)*(unsigned int*)&field_112, *(int*)&field_116,
                                (unsigned int)(uint8_t)field_121, (bool)in_stack_ffffffffffffff18);
        Option<float>* pOVar7 = (Option<float>*)(*midiPlayerMainThread).operator->();
        auto pAVar8 = pOVar7->GetDefaultValue();
        shared_ptr<oldscape::dash3d::GroundDecor>* psVar9 =
            (shared_ptr<oldscape::dash3d::GroundDecor>*)(*pAVar8)[(unsigned long)local_44];
        shared_ptr local_98(psVar9);
        shared_ptr local_60;
        bool cVar4 = local_b0.IsActive();
        if (!cVar4) {
            local_60 = local_98;
        } else {
            pOVar7 = (Option<float>*)(*midiPlayerMainThread).operator->();
            pAVar8 = (Array<shared_ptr<AnimationFrameRT5>>*)pOVar7->GetDefaultValue();
            puVar10 = (unsigned int*)local_b0.value();
            psVar11 = (shared_ptr<AnimationFrameRT5>*)(*pAVar8)[(unsigned long)*puVar10];
            local_60 = *psVar11;
        }
        if ((*(long*)&field_96 != -1) && ((cVar4 = shared_ptr::operator_cast_to_bool(&local_98),
                                           cVar4 || (cVar4 = shared_ptr::operator_cast_to_bool(&local_60), cVar4)))) {
            this_03 = (NXTPixToolkit*)field_80;
            if (this_03 == nullptr) {
                pAVar12 = (AnimationFrameRT5*)local_98.end();
                pRVar19 = (RT5AnimationSampler*)&local_60;
                pAVar13 = (AnimationFrameRT5*)pRVar19->end();
                CalculateMaxBoneOrLabelIDsForFrames(pRVar19, &local_3c, &local_38, &local_34, pAVar12, pAVar13);
                if (m_pOverrideAnimationInfo != nullptr) {
                    pAVar5 = AnimationManager::GetTimeElapsedSinceNS(m_pOverrideAnimationInfo->field_0);
                    local_40 = 0;
                    local_50 = eastl::optional();
                    pfVar6 = (float*)*m_pOverrideAnimationInfo->field_32;
                    pAVar2 = m_pOverrideAnimationInfo;
                    GetFramesBeforeAndAfter((RT5AnimationSampler*)&local_40, &local_50, &local_dc, pfVar6, pAVar5,
                                            (unsigned long)*(unsigned int*)((long)&pAVar2->field_10 + 6),
                                            pAVar2->field_20, (unsigned int)(uint8_t)pAVar2->field_25,
                                            (bool)in_stack_ffffffffffffff18);
                    pOVar7 = (Option<float>*)m_pOverrideAnimationInfo->field_32.operator->();
                    pAVar8 = (Array<shared_ptr<AnimationFrameRT5>>*)pOVar7->GetDefaultValue();
                    psVar9 = (shared_ptr<oldscape::dash3d::GroundDecor>*)(*pAVar8)[(unsigned long)local_40];
                    local_88 = shared_ptr(psVar9);
                    local_a8 = shared_ptr();
                    cVar4 = local_50.IsActive();
                    if (!cVar4) {
                        local_a8 = local_88;
                    } else {
                        pOVar7 = (Option<float>*)m_pOverrideAnimationInfo->field_32.operator->();
                        pAVar8 = (Array<shared_ptr<AnimationFrameRT5>>*)pOVar7->GetDefaultValue();
                        puVar10 = (unsigned int*)local_50.value();
                        psVar11 = (shared_ptr<AnimationFrameRT5>*)(*pAVar8)[(unsigned long)*puVar10];
                        local_a8 = *psVar11;
                    }
                    pAVar12 = (AnimationFrameRT5*)local_88.end();
                    pRVar19 = &local_a8;
                    pAVar13 = (AnimationFrameRT5*)pRVar19->end();
                    CalculateMaxBoneOrLabelIDsForFrames(pRVar19, &local_70, &local_6c, &local_68, pAVar12, pAVar13);
                    piVar14 = std::max<int>(local_3c, local_70);
                    local_3c = *piVar14;
                    piVar14 = std::max<int>(local_38, local_6c);
                    local_38 = *piVar14;
                    piVar14 = std::max<int>(local_34, local_68);
                    local_34 = *piVar14;
                }
                iVar17 = local_3c + 1;
                if (local_3c < 0) {
                    iVar17 = 0;
                }
                iVar18 = local_38 * 4 + 4;
                if (local_38 < 0) {
                    iVar18 = 0;
                }
                uVar15 = (unsigned long)(local_34 * 8 + 8);
                if (local_34 < 0) {
                    uVar15 = 0;
                }
                this_03 = (NXTPixToolkit*)field_32;
                this_03->SetMaxSize((long)iVar17, (long)iVar18, uVar15);
            }
            field_32->ClearTransformData();
            local_d0 = (AnimationHelper*)this_03->SSOBeginPtr();
            local_c8 = (WrapArray<math::Matrix43T<float> _>*)this_03->GetScreen();
            local_c0 = (WrapArray<float>*)this_03->GetDefaultValue();
            local_b8 = (WrapArray<float>*)*local_98;
            pAVar12 = (AnimationFrameRT5*)*local_60;
            local_64 = local_74;
            bVar1 = m_transformMaskToggle;
            this_00 = (NXTRenderCanvas*)(*midiPlayerMainThread).operator->();
            midiPlayerMainThread_00 = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)this_00->GetPixelBuffer();
            bVar3 = *midiPlayerMainThread_00 != nullptr;
            local_d0->InterpolateRT5FrameTransforms(
                *local_c8, *local_c0, *local_b8, *pAVar12, labelDatas, local_64, field_8,
                *((shared_ptr<WalkMergeDataProvider>*)(((uint64_t)in_stack_ffffffffffffff14 << 32) |
                                                       (uint32_t)((unsigned int)bVar1))),
                bVar3, (bool)in_stack_ffffffffffffff20);
            if (AnimationState::m_highlightRT5Transforms != '\0') {
                uVar15 = FrameTime::GetCurrentTimeMS();
                fVar20 = (float)fmod((float)uVar15 * 0.001, 6.2831855f);
                fVar20 = (float)::cos(fVar20 * 3.0);
                local_88 = math::ColourHSL(0.0, fVar20 * 100.0, 0.0);
                this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_03->SSOBeginPtr();
                this_02 = (Matrix43T<float>*)this_01->end();
                pMVar16 = (Matrix43T<float>*)this_01->end();
                if (this_02 != pMVar16) {
                    do {
                        this_02->Translate(local_88);
                        this_02 = this_02 + 48;
                    } while (this_02 != pMVar16);
                }
            }
        }
        field_24 = 1;
    }

    // 0x10094feb0
    void RT5AnimationSampler::CalculateMaxBoneOrLabelIDsForFrames(int& arg1, int& arg2, int& arg3,
                                                                  AnimationFrameRT5* animationFrameRT51,
                                                                  AnimationFrameRT5* animationFrameRT52) {
        AnimTransform AVar1;
        Layout* pLVar2;
        unsigned int* puVar3;
        unsigned int* puVar4;
        shared_ptr<AnimBase>* psVar5;
        AnimBase* pAVar6;
        int local_48[6];

        local_48[0] = -1;
        local_48[1] = 4294967295;
        local_48[2] = 4294967295;
        local_48[3] = 4294967295;
        local_48[4] = 4294967295;
        local_48[5] = 4294967295;
        if (animationFrameRT51 != nullptr) {
            pLVar2 = (Layout*)animationFrameRT51->GetDefaultValue();
            puVar3 = (unsigned int*)pLVar2->HeapBeginPtr();
            puVar4 = (unsigned int*)pLVar2->end();
            if (puVar3 != puVar4) {
                do {
                    psVar5 = (shared_ptr<AnimBase>*)animationFrameRT51->second();
                    pAVar6 = (AnimBase*)(*psVar5).operator->();
                    AVar1 = pAVar6->GetTransformType(*puVar3);
                    psVar5 = (shared_ptr<AnimBase>*)animationFrameRT51->second();
                    pAVar6 = (AnimBase*)**psVar5;
                    AnimationFrameRT7::CalculateMaxBoneOrLabelIDs(*local_48, *(local_48 + 1), *(local_48 + 2), *pAVar6,
                                                                  *puVar3, AVar1 & 255);
                    if (puVar3[15] != 4294967295) {
                        psVar5 = (shared_ptr<AnimBase>*)animationFrameRT51->second();
                        pAVar6 = (AnimBase*)**psVar5;
                        AnimationFrameRT7::CalculateMaxBoneOrLabelIDs(*local_48, *(local_48 + 1), *(local_48 + 2),
                                                                      *pAVar6, puVar3[15], 0);
                    }
                    puVar3 = puVar3 + 16;
                } while (puVar3 != puVar4);
            }
        }
        if (animationFrameRT52 != nullptr) {
            pLVar2 = (Layout*)animationFrameRT52->GetDefaultValue();
            puVar3 = (unsigned int*)pLVar2->HeapBeginPtr();
            puVar4 = (unsigned int*)pLVar2->end();
            if (puVar3 != puVar4) {
                do {
                    psVar5 = (shared_ptr<AnimBase>*)animationFrameRT52->second();
                    pAVar6 = (AnimBase*)(*psVar5).operator->();
                    AVar1 = pAVar6->GetTransformType(*puVar3);
                    psVar5 = (shared_ptr<AnimBase>*)animationFrameRT52->second();
                    pAVar6 = (AnimBase*)**psVar5;
                    AnimationFrameRT7::CalculateMaxBoneOrLabelIDs(*(local_48 + 3), *(local_48 + 4), *(local_48 + 5),
                                                                  *pAVar6, *puVar3, AVar1 & 255);
                    if (puVar3[15] != 4294967295) {
                        psVar5 = (shared_ptr<AnimBase>*)animationFrameRT52->second();
                        pAVar6 = (AnimBase*)**psVar5;
                        AnimationFrameRT7::CalculateMaxBoneOrLabelIDs(*(local_48 + 3), *(local_48 + 4), *(local_48 + 5),
                                                                      *pAVar6, puVar3[15], 0);
                    }
                    puVar3 = puVar3 + 16;
                } while (puVar3 != puVar4);
            }
        }
        auto piVar7 = std::max<int>(*local_48, *(local_48 + 3));
        arg1 = *piVar7;
        piVar7 = std::max<int>(*(local_48 + 1), *(local_48 + 4));
        arg2 = *piVar7;
        piVar7 = std::max<int>(*(local_48 + 2), *(local_48 + 5));
        arg3 = *piVar7;
    }

    // 0x100950300
    void RT5AnimationSampler::GetRT5BoneTransforms(WrapArray<math::Matrix43T<float>>& wrapArray,
                                                   const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                                   const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                                   const math::Matrix44T<float>& matrix44) const {
        unsigned short uVar1;
        unsigned short* puVar3;
        unsigned short* puVar4;
        unsigned long uVar5;
        Matrix43T<float>* matrix43;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_01;
        unsigned long arg1;

        VertexTransformData* this_02 = (VertexTransformData*)field_32;
        if (field_80 != nullptr) {
            this_02 = field_80;
        }
        if (((Layout*)this_02->SSOBeginPtr())->HeapBeginPtr() != 0) {
            puVar3 = (unsigned short*)arg2.HeapBeginPtr();
            puVar4 = (unsigned short*)arg2.end();
            for (; puVar3 != puVar4; puVar3 = puVar3 + 2) {
                uVar1 = *puVar3;
                arg1 = (unsigned long)puVar3[1];
                uVar5 = wrapArray.HeapBeginPtr();
                if (uVar5 <= arg1) {
                    LogAssert("false",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/RT5AnimationSampler.cpp",
                              392,
                              "AnimationState received boneMap containing data that\'s incompatible with async update "
                              "results!");
                }
                matrix43 = this_02->GetBoneTransform((unsigned int)uVar1);
                this_01 = &wrapArray[arg1];
                *this_01 = *matrix43;
                if (uVar5 <= arg1) {
                    return;
                }
            }
        }
    }

    // 0x100950400
    void RT5AnimationSampler::GetLabelData(WrapArray<float>& wrapArray,
                                           const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                           AnimationLabelType animationLabelType) const {
        WrapArray<float>* pWVar1;
        Array<float>* arg4;
        WrapArray<game::Cutscene2DAnimation<float>::Key const> local_30;

        if (animationLabelType == 1) {
            pWVar1 = (WrapArray<float>*)field_32->GetDefaultValue();
            local_30.WrapArray<WrapArray<game::Cutscene2DAnimation<float>::Key const>>(*pWVar1);
            arg4 = (Array<float>*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM;
        } else {
            if (animationLabelType != 0) {
                return;
            }
            pWVar1 = (WrapArray<float>*)field_32->GetScreen();
            local_30.WrapArray<WrapArray<game::Cutscene2DAnimation<float>::Key const>>(*pWVar1);
            arg4 = (Array<float>*)&AnimationConstants::IDENTITY_DELTA;
        }
        AnimationSampler::ConcatenateArrays(wrapArray, local_30, arg2, *arg4);
    }

} // namespace jag::graphics

// 0x10094f7e0
void fmod(float arg1, float arg2) {
    _fmodf();
}
