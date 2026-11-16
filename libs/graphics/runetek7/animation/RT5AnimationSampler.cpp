// libs/graphics/runetek7/animation/RT5AnimationSampler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "RT5AnimationSampler.h"

namespace jag::graphics {
    // 0x10002d850: the linker folded this into oldscape::option::Option<int>::GetDefaultValue() const, which has identical code
    RT5AnimationSampler::GetVertexTransformData();

    // 0x10094f3a0, 128 bytes, base-object constructor, placed by class name
    // RT5AnimationSampler::RT5AnimationSampler()
    void RT5AnimationSampler::RT5AnimationSampler() {
        new (this) AnimationSampler();
        field_0 = &PTR__RT5AnimationSampler_100f1b028;
        new (field_32) VertexTransformData();
        field_80 = (VertexTransformData*)0;
        m_transformMaskToggle = 1;
        new (&field_96) AnimationInfo();
        m_pOverrideAnimationInfo = (AnimationInfo*)0;
    }

    // 0x10094f420, 16 bytes, complete-object constructor, placed by class name
    // RT5AnimationSampler::RT5AnimationSampler(): jumps straight to the base-object constructor

    // 0x10094f430, 32 bytes, placed by class name
    // RT5AnimationSampler::Reset()
    void RT5AnimationSampler::Reset() {
        ClearWalkMergeData(this);
        Reset();
    }

    // 0x10094f4c0, 416 bytes, placed by class name
    // RT5AnimationSampler::GetFrameFromTimeInRange(float&, float, unsigned int, Animation const&)
    uint RT5AnimationSampler::GetFrameFromTimeInRange(float* param_1, float param_2, uint param_3, Animation* param_4) {
        uint uVar1;
        uint uVar2;
        int iVar3;
        Array<unsigned int, eastl::allocator>* this;
        uint* puVar4;
        ulong uVar5;
        float fVar6;
        float local_38;
        float local_34;

        this = (Array<unsigned int, eastl::allocator>*)param_4->GetOrigin();
        uVar1 = param_4->GetRT5FrameCount();
        uVar2 = param_4->GetRT5FrameCount();
        if (1 < uVar2) {
            uVar5 = 1;
            do {
                puVar4 = (uint*)Array<unsigned int, eastl::allocator>::operator[](this, uVar5);
                if (param_3 < *puVar4) {
                    uVar1 = (uint)uVar5;
                    break;
                }
                uVar5 = uVar5 + 1;
                uVar2 = param_4->GetRT5FrameCount();
            } while (uVar5 < uVar2);
        }
        uVar2 = uVar1 - 1;
        iVar3 = param_4->GetRT5FrameCount();
        puVar4 = (uint*)Array<unsigned int, eastl::allocator>::operator[](this, (ulong)uVar2);
        fVar6 = (float)*puVar4;
        if (uVar2 < iVar3 - 1U) {
            puVar4 = (uint*)Array<unsigned int, eastl::allocator>::operator[](this, (ulong)uVar1);
            fVar6 = (param_2 - fVar6) / ((float)*puVar4 - fVar6);
            *param_1 = fVar6;
            if ((fVar6 < 0.0) || (1.0 < fVar6)) {
                /* WARNING: Subroutine does not return */
                LogAssert("frameInterpolationPosOut >= 0.0f && frameInterpolationPosOut <= 1.0f",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "animation/RT5AnimationSampler.cpp",
                          49, (char*)0);
            }
        } else {
            iVar3 = param_4->GetMaxMapZ();
            *param_1 = (param_2 - fVar6) / ((float)iVar3 - fVar6);
        }
        local_38 = 0.0;
        local_34 = 1.0;
        math::Clamp<float>(param_1, &local_38, &local_34);
        if ((0.0 <= *param_1) && (*param_1 <= 1.0)) {
            return uVar2;
        }
        /* WARNING: Subroutine does not return */
        LogAssert("frameInterpolationPosOut >= 0.0f && frameInterpolationPosOut <= 1.0f",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/animation/"
                  "RT5AnimationSampler.cpp",
                  64, (char*)0);
    }

    // 0x10094f660, 384 bytes, placed by class name
    // RT5AnimationSampler::GetFrameFromTime(float&, unsigned long long, Animation const&, int, AnimationLoopBehaviour)
    ulong RT5AnimationSampler::GetFrameFromTime(float* param_1, ulong param_2, WorldmapAreaMetadata* param_3,
                                                int param_4, int param_5) {
        int iVar1;
        int iVar2;
        ulong uVar4;
        Array<unsigned int, eastl::allocator>* this;
        int* piVar5;
        uint* puVar6;
        uint uVar7;
        float fVar8;

        uVar4 = param_3->GetAnimationSampleIntervalNS();
        fVar8 = (float)param_2 / (float)uVar4;
        this = (Array<unsigned int, eastl::allocator>*)param_3->GetOrigin();
        uVar7 = (uint)(long)fVar8;
        if ((param_5 == 2) || (param_4 == -1)) {
            if (param_3->GetMaxMapZ() <= uVar7) {
                *param_1 = 1.0;
                iVar1 = param_3->GetRT5FrameCount();
                return (ulong)(iVar1 - 1);
            }
        } else {
            iVar1 = param_3->GetRT5FrameCount();
            uVar4 = (ulong)(uint)(iVar1 - param_4);
            iVar2 = param_3->GetMaxMapZ();
            piVar5 = (int*)Array<unsigned int, eastl::allocator>::operator[](this, uVar4);
            iVar1 = *piVar5;
            puVar6 = (uint*)Array<unsigned int, eastl::allocator>::operator[](this, uVar4);
            if (*puVar6 < uVar7) {
                puVar6 = (uint*)Array<unsigned int, eastl::allocator>::operator[](this, uVar4);
                fVar8 = (float)fmod(fVar8 - (float)*puVar6, (float)(uint)(iVar2 - iVar1));
                puVar6 = (uint*)Array<unsigned int, eastl::allocator>::operator[](this, uVar4);
                fVar8 = (float)*puVar6 + fVar8;
                uVar7 = (uint)(long)fVar8;
            }
        }
        uVar4 = GetFrameFromTimeInRange(param_1, fVar8, uVar7, (Animation*)param_3);
        return uVar4;
    }

    // 0x10094f7f0, 208 bytes, placed by class name
    // RT5AnimationSampler::GetFramesBeforeAndAfter(unsigned int&, eastl::optional<unsigned int>&, float&, Animation const&, unsigned long long, int, AnimationLoopBehaviour, bool)
    void RT5AnimationSampler::GetFramesBeforeAndAfter(int* param_1, optional<unsigned int>* param_2, undefined8 param_3,
                                                      Animation* param_4, undefined8 param_5, int param_6, int param_7,
                                                      char param_8) {
        int iVar1;
        uint uVar2;
        uint uVar3;
        uint local_38[2];

        iVar1 = GetFrameFromTime(param_3, param_5, param_4, param_6, param_7);
        *param_1 = iVar1;
        uVar3 = iVar1 + 1;
        uVar2 = param_4->GetRT5FrameCount();
        if ((param_7 == 2) || (param_6 == -1)) {
            if (uVar2 <= uVar3) {
                if ((param_8 == '\0') || (param_6 != -1)) {
                    new (local_38) eastl::optional<game::option::EnumOptionToggle>();
                    eastl::optional<unsigned int>::operator=(param_2, (optional*)local_38);
                    return;
                }
                local_38[0] = 0;
                goto LAB_10094f880;
            }
        } else if (uVar2 <= uVar3) {
            iVar1 = param_4->GetRT5FrameCount();
            local_38[0] = iVar1 - param_6;
            eastl::optional<unsigned int>::operator=(param_2, local_38);
            return;
        }
        local_38[0] = uVar3;
    LAB_10094f880:
        eastl::optional<unsigned int>::operator=(param_2, local_38);
    }

    // 0x10094f8c0, 1392 bytes, placed by class name
    // RT5AnimationSampler::Update(Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)
    void RT5AnimationSampler::Update(Array* param_1, Matrix44T* param_2) {
        undefined1* this_00;
        AnimationInfo* pAVar1;
        bool bVar2;
        bool bVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        Option<float>* pOVar6;
        Array<shared_ptr<AnimationFrameRT5>, eastl::allocator>* pAVar7;
        shared_ptr* psVar8;
        uint* puVar9;
        AnimationFrameRT5* pAVar10;
        AnimationFrameRT5* pAVar11;
        int* piVar12;
        NXTRenderCanvas* this_01;
        ulong uVar13;
        vector* this_02;
        Matrix43T<float>* this_03;
        Matrix43T<float>* pMVar14;
        int iVar15;
        int iVar16;
        NXTPixToolkit* this_04;
        type* ptVar17;
        RT5AnimationSampler* pRVar18;
        float fVar19;
        undefined8 in_stack_ffffffffffffff08;
        undefined4 uVar21;
        undefined8 uVar20;
        undefined1 local_dc[4];
        vector* local_d0;
        type* local_c8;
        WrapArray* local_c0;
        AnimationFrameRT5* local_b8;
        optional<game::option::EnumOptionToggle> local_b0[8];
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_a8[16];
        shared_ptr local_98;
        ColourHSL local_88;
        float local_74;
        int local_70;
        int local_6c;
        int local_68;
        float local_64;
        shared_ptr local_60;
        optional<game::option::EnumOptionToggle> local_50[12];
        uint local_44;
        uint local_40;
        int local_3c;
        int local_38;
        int local_34;

        uVar21 = (undefined4)((ulong)in_stack_ffffffffffffff08 >> 32);
        this_00 = &field_128;
        bVar2 = operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
        if (!bVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_animationInfo.m_animation != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "animation/RT5AnimationSampler.cpp",
                      177, (char*)0);
        }
        uVar4 = AnimationManager::GetTimeElapsedSinceNS(*(ulonglong*)&field_96);
        local_44 = 0;
        eastl::optional<game::option::EnumOptionToggle>::optional(local_b0);
        uVar5 = shared_ptr<Animation>::operator*((shared_ptr<Animation>*)this_00);
        uVar20 = CONCAT44(uVar21, *(undefined4*)&field_116);
        GetFramesBeforeAndAfter(&local_44, local_b0, &local_74, uVar5, uVar4, *(undefined4*)&field_112, uVar20,
                                field_121);
        uVar21 = (undefined4)((ulong)uVar20 >> 32);
        pOVar6 = (Option<float>*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
        pAVar7 = (Array<shared_ptr<AnimationFrameRT5>, eastl::allocator>*)pOVar6->GetDefaultValue();
        psVar8 =
            (shared_ptr*)Array<shared_ptr<AnimationFrameRT5>, eastl::allocator>::operator[](pAVar7, (ulong)local_44);
        new (&local_98) shared_ptr<oldscape::dash3d::Decor>(psVar8);
        new (&local_60) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(psVar8);
        bVar2 = local_b0->IsActive();
        if (bVar2) {
            pOVar6 = (Option<float>*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
            pAVar7 = (Array<shared_ptr<AnimationFrameRT5>, eastl::allocator>*)pOVar6->GetDefaultValue();
            puVar9 = (uint*)eastl::optional<unsigned int>::value();
            psVar8 =
                (shared_ptr*)Array<shared_ptr<AnimationFrameRT5>, eastl::allocator>::operator[](pAVar7, (ulong)*puVar9);
            shared_ptr<AnimationFrameRT5>::operator=((shared_ptr<AnimationFrameRT5>*)&local_60, psVar8);
        } else {
            psVar8 = &local_98;
            shared_ptr<AnimationFrameRT5>::operator=((shared_ptr<AnimationFrameRT5>*)&local_60, psVar8);
        }
        if ((*(long*)&field_96 != -1) && ((bVar2 = shared_ptr::operator_cast_to_bool(&local_98),
                                           bVar2 || (bVar2 = shared_ptr::operator_cast_to_bool(&local_60), bVar2)))) {
            this_04 = (NXTPixToolkit*)field_80;
            if (this_04 == (NXTPixToolkit*)0) {
                pAVar10 = (AnimationFrameRT5*)local_98.end();
                pRVar18 = (RT5AnimationSampler*)&local_60;
                pAVar11 = (AnimationFrameRT5*)pRVar18->end();
                CalculateMaxBoneOrLabelIDsForFrames(pRVar18, &local_3c, &local_38, &local_34, pAVar10, pAVar11);
                if (m_pOverrideAnimationInfo != (AnimationInfo*)0) {
                    uVar4 = AnimationManager::GetTimeElapsedSinceNS(m_pOverrideAnimationInfo->field_0);
                    local_40 = 0;
                    eastl::optional<game::option::EnumOptionToggle>::optional(local_50);
                    uVar5 =
                        shared_ptr<Animation>::operator*((shared_ptr<Animation>*)m_pOverrideAnimationInfo->field_32);
                    pAVar1 = m_pOverrideAnimationInfo;
                    GetFramesBeforeAndAfter(&local_40, local_50, local_dc, uVar5, uVar4,
                                            *(undefined4*)((long)&pAVar1->field_10 + 6),
                                            CONCAT44(uVar21, pAVar1->field_20), pAVar1->field_25);
                    pOVar6 = (Option<float>*)shared_ptr<Animation>::operator->(
                        (shared_ptr<Animation>*)m_pOverrideAnimationInfo->field_32);
                    pAVar7 = (Array<shared_ptr<AnimationFrameRT5>, eastl::allocator>*)pOVar6->GetDefaultValue();
                    psVar8 = (shared_ptr*)Array<shared_ptr<AnimationFrameRT5>, eastl::allocator>::operator[](
                        pAVar7, (ulong)local_40);
                    new (&local_88) shared_ptr<oldscape::dash3d::Decor>(psVar8);
                    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(
                        local_a8, (_func_decltype_nullptr*)psVar8);
                    bVar2 = local_50->IsActive();
                    if (bVar2) {
                        pOVar6 = (Option<float>*)shared_ptr<Animation>::operator->(
                            (shared_ptr<Animation>*)m_pOverrideAnimationInfo->field_32);
                        pAVar7 = (Array<shared_ptr<AnimationFrameRT5>, eastl::allocator>*)pOVar6->GetDefaultValue();
                        puVar9 = (uint*)eastl::optional<unsigned int>::value();
                        psVar8 = (shared_ptr*)Array<shared_ptr<AnimationFrameRT5>, eastl::allocator>::operator[](
                            pAVar7, (ulong)*puVar9);
                        shared_ptr<AnimationFrameRT5>::operator=((shared_ptr<AnimationFrameRT5>*)local_a8, psVar8);
                    } else {
                        shared_ptr<AnimationFrameRT5>::operator=((shared_ptr<AnimationFrameRT5>*)local_a8,
                                                                 (shared_ptr*)&local_88);
                    }
                    pAVar10 = (AnimationFrameRT5*)local_88.end();
                    pRVar18 = (RT5AnimationSampler*)local_a8;
                    pAVar11 = (AnimationFrameRT5*)pRVar18->end();
                    CalculateMaxBoneOrLabelIDsForFrames(pRVar18, &local_70, &local_6c, &local_68, pAVar10, pAVar11);
                    piVar12 = std::max<int>(&local_3c, &local_70);
                    local_3c = *piVar12;
                    piVar12 = std::max<int>(&local_38, &local_6c);
                    local_38 = *piVar12;
                    piVar12 = std::max<int>(&local_34, &local_68);
                    local_34 = *piVar12;
                    local_a8->~shared_ptr();
                    local_88.~shared_ptr();
                }
                iVar15 = local_3c + 1;
                if (local_3c < 0) {
                    iVar15 = 0;
                }
                iVar16 = local_38 * 4 + 4;
                if (local_38 < 0) {
                    iVar16 = 0;
                }
                psVar8 = (shared_ptr*)(long)iVar15;
                uVar13 = (ulong)(local_34 * 8 + 8);
                if (local_34 < 0) {
                    uVar13 = 0;
                }
                this_04 = (NXTPixToolkit*)field_32;
                this_04->SetMaxSize((ulong)psVar8, (long)iVar16, uVar13);
            }
            field_32->ClearTransformData();
            local_d0 = this_04->SSOBeginPtr(psVar8);
            local_c8 = (type*)this_04->GetScreen();
            local_c0 = (WrapArray*)this_04->GetDefaultValue();
            local_b8 =
                (AnimationFrameRT5*)shared_ptr<AnimationFrameRT5>::operator*((shared_ptr<AnimationFrameRT5>*)&local_98);
            pAVar10 =
                (AnimationFrameRT5*)shared_ptr<AnimationFrameRT5>::operator*((shared_ptr<AnimationFrameRT5>*)&local_60);
            local_64 = local_74;
            bVar2 = (bool)m_transformMaskToggle;
            this_01 = (NXTRenderCanvas*)shared_ptr<Animation>::operator->((shared_ptr<Animation>*)this_00);
            psVar8 = (shared_ptr*)this_01->GetPixelBuffer();
            bVar3 = operator!=(psVar8, (_func_decltype_nullptr*)0);
            ptVar17 = local_c8;
            AnimationHelper::InterpolateRT5FrameTransforms(local_d0, local_c8, local_c0, local_b8, pAVar10, local_64,
                                                           param_1, (shared_ptr*)field_8, bVar2, bVar3);
            if (AnimationState::m_highlightRT5Transforms != '\0') {
                uVar13 = FrameTime::GetCurrentTimeMS();
                fVar19 = (float)fmod((float)uVar13 * 0.001, 6.2831855);
                fVar19 = (float)::cos(fVar19 * 3.0);
                new (&local_88) math::ColourHSL(0.0, fVar19 * 100.0, 0.0);
                this_02 = this_04->SSOBeginPtr(ptVar17);
                this_03 = (Matrix43T<float>*)this_02->end();
                pMVar14 = (Matrix43T<float>*)this_02->end();
                if (this_03 != pMVar14) {
                    do {
                        this_03->Translate((Vector3T*)&local_88);
                        this_03 = this_03 + 48;
                    } while (this_03 != pMVar14);
                }
            }
        }
        field_24 = 1;
        local_60.~shared_ptr();
        local_98.~shared_ptr();
    }

    // 0x10094feb0, 608 bytes, placed by class name
    // RT5AnimationSampler::CalculateMaxBoneOrLabelIDsForFrames(int&, int&, int&, AnimationFrameRT5*, AnimationFrameRT5*)
    void RT5AnimationSampler::CalculateMaxBoneOrLabelIDsForFrames(int* param_1, int* param_2, int* param_3,
                                                                  AnimationFrameRT5* param_4,
                                                                  AnimationFrameRT5* param_5) {
        undefined1 uVar1;
        Layout* pLVar2;
        uint* puVar3;
        uint* puVar4;
        shared_ptr<AnimBase>* psVar5;
        AnimBase* pAVar6;
        undefined8 uVar7;
        int* piVar8;
        int local_48[6];

        local_48[0] = -1;
        local_48[1] = 4294967295;
        local_48[2] = 4294967295;
        local_48[3] = 4294967295;
        local_48[4] = 4294967295;
        local_48[5] = 4294967295;
        if (param_4 != (AnimationFrameRT5*)0) {
            pLVar2 = (Layout*)param_4->GetDefaultValue();
            puVar3 = (uint*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar2);
            puVar4 = (uint*)pLVar2->end();
            if (puVar3 != puVar4) {
                do {
                    psVar5 = (shared_ptr<AnimBase>*)param_4->second();
                    pAVar6 = (AnimBase*)shared_ptr<AnimBase>::operator->(psVar5);
                    uVar1 = pAVar6->GetTransformType(*puVar3);
                    psVar5 = (shared_ptr<AnimBase>*)param_4->second();
                    uVar7 = shared_ptr<AnimBase>::operator*(psVar5);
                    AnimationFrameRT7::CalculateMaxBoneOrLabelIDs(local_48, local_48 + 1, local_48 + 2, uVar7, *puVar3,
                                                                  uVar1);
                    if (puVar3[15] != 4294967295) {
                        psVar5 = (shared_ptr<AnimBase>*)param_4->second();
                        uVar7 = shared_ptr<AnimBase>::operator*(psVar5);
                        AnimationFrameRT7::CalculateMaxBoneOrLabelIDs(local_48, local_48 + 1, local_48 + 2, uVar7,
                                                                      puVar3[15], 0);
                    }
                    puVar3 = puVar3 + 16;
                } while (puVar3 != puVar4);
            }
        }
        if (param_5 != (AnimationFrameRT5*)0) {
            pLVar2 = (Layout*)param_5->GetDefaultValue();
            puVar3 = (uint*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar2);
            puVar4 = (uint*)pLVar2->end();
            if (puVar3 != puVar4) {
                do {
                    psVar5 = (shared_ptr<AnimBase>*)param_5->second();
                    pAVar6 = (AnimBase*)shared_ptr<AnimBase>::operator->(psVar5);
                    uVar1 = pAVar6->GetTransformType(*puVar3);
                    psVar5 = (shared_ptr<AnimBase>*)param_5->second();
                    uVar7 = shared_ptr<AnimBase>::operator*(psVar5);
                    AnimationFrameRT7::CalculateMaxBoneOrLabelIDs(local_48 + 3, local_48 + 4, local_48 + 5, uVar7,
                                                                  *puVar3, uVar1);
                    if (puVar3[15] != 4294967295) {
                        psVar5 = (shared_ptr<AnimBase>*)param_5->second();
                        uVar7 = shared_ptr<AnimBase>::operator*(psVar5);
                        AnimationFrameRT7::CalculateMaxBoneOrLabelIDs(local_48 + 3, local_48 + 4, local_48 + 5, uVar7,
                                                                      puVar3[15], 0);
                    }
                    puVar3 = puVar3 + 16;
                } while (puVar3 != puVar4);
            }
        }
        piVar8 = std::max<int>(local_48, local_48 + 3);
        *param_1 = *piVar8;
        piVar8 = std::max<int>(local_48 + 1, local_48 + 4);
        *param_2 = *piVar8;
        piVar8 = std::max<int>(local_48 + 2, local_48 + 5);
        *param_3 = *piVar8;
    }

    // 0x100950300, 256 bytes, placed by class name
    // RT5AnimationSampler::GetRT5BoneTransforms(WrapArray<math::Matrix43T<float> >&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, math::Matrix44T<float> const&) const
    void RT5AnimationSampler::GetRT5BoneTransforms(WrapArray* param_1, vector_map* param_2, vector_map* param_3,
                                                   Matrix44T* param_4) {
        ushort uVar1;
        vector* this_00;
        ushort* puVar3;
        ushort* puVar4;
        ulong uVar5;
        ParticleVertexDataProxy* pPVar6;
        ParticleVertexDataProxy<math::Vector3T<float>>* this_01;
        VertexTransformData* this_02;
        ulong uVar7;

        this_02 = (VertexTransformData*)field_32;
        if (field_80 != (VertexTransformData*)0) {
            this_02 = field_80;
        }
        this_00 = this_02->SSOBeginPtr(param_1);
        if (this_00->HeapBeginPtr() != 0) {
            puVar3 = (ushort*)param_2->HeapBeginPtr();
            puVar4 = (ushort*)param_2->end();
            for (; puVar3 != puVar4; puVar3 = puVar3 + 2) {
                uVar1 = *puVar3;
                uVar7 = (ulong)puVar3[1];
                uVar5 = param_1->HeapBeginPtr();
                if (uVar5 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("false",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "animation/RT5AnimationSampler.cpp",
                              392,
                              "AnimationState received boneMap containing data that\'s incompatible with async update "
                              "results!");
                }
                pPVar6 = (ParticleVertexDataProxy*)this_02->GetBoneTransform((uint)uVar1);
                this_01 =
                    (ParticleVertexDataProxy<math::Vector3T<float>>*)WrapArray<math::Matrix43T<float>>::operator[](
                        (WrapArray<math::Matrix43T<float>>*)param_1, uVar7);
                ParticleVertexDataProxy<math::Vector3T<float>>::operator=(this_01, pPVar6);
                if (uVar5 <= uVar7) {
                    return;
                }
            }
        }
    }

    // 0x100950400, 128 bytes, placed by class name
    // RT5AnimationSampler::GetLabelData(WrapArray<float>&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, AnimationLabelType) const
    void RT5AnimationSampler::GetLabelData(WrapArray* param_1, vector_map* param_2, int param_4) {
        WrapArray* pWVar1;
        Array* pAVar2;
        WrapArray<game::Cutscene2DAnimation<float>::Key_const> local_30[16];

        if (param_4 == 1) {
            pWVar1 = (WrapArray*)field_32->GetDefaultValue();
            WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
                WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(local_30, pWVar1);
            pAVar2 = (Array*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM;
        } else {
            if (param_4 != 0) {
                return;
            }
            pWVar1 = (WrapArray*)field_32->GetScreen();
            WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
                WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(local_30, pWVar1);
            pAVar2 = (Array*)&AnimationConstants::IDENTITY_DELTA;
        }
        AnimationSampler::ConcatenateArrays(param_1, local_30, param_2, pAVar2);
    }

} // namespace jag::graphics

// 0x10094f7e0, 16 bytes, placed by neighbouring functions
// fmod(float, float)
void fmod(float param_1, float param_2) {
    _fmodf();
}
