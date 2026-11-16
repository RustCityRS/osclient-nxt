// libs/graphics/runetek7/animation/AnimCurveSampler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class AnimCurveSampler {
    public:
        ulong SampleCurve(AnimCurve const*, float, AnimCurveSegmentCacheData&);
        void SampleInfinities(AnimCurve const*, float, bool, AnimCurveSegmentCacheData&);
        void BezierCreate(AnimCurve const*, float*, float*, AnimCurveSegmentCacheData&);
        void HermiteCreate(AnimCurve const*, float*, float*, AnimCurveSegmentCacheData&);
        float SampleBezier(AnimCurveSegmentCacheData*, float);
        float SampleHermite(AnimCurveSegmentCacheData*, float);
        void CheckMonotonic(float&, float&);
        void BezierToPower(float, float, float, float, float&, float&, float&, float&);
        void ConstrainInsideBounds(float&, float&);
    };

    // 0x100981d00, 752 bytes, placed by class name and debug map
    // AnimCurveSampler::SampleCurve(AnimCurve const*, float, AnimCurveSegmentCacheData&)
    ulong AnimCurveSampler::SampleCurve(AnimCurve* param_1, float param_2, AnimCurveSegmentCacheData* param_3) {
        float fVar1;
        bool bVar2;
        char cVar3;
        int iVar4;
        int iVar5;
        Array<AnimKey, eastl::allocator>* pAVar6;
        short* psVar7;
        short* psVar8;
        long lVar9;
        bool bVar10;
        ulong uVar11;
        float local_58;
        float local_54;
        float local_50;
        float local_4c;
        float local_48;
        float local_44;
        float local_40;
        float local_3c;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar11 = 0;
        if (param_1 == (AnimCurve*)0)
            goto LAB_100981e7a;
        iVar4 = param_1->GetNumKeys();
        if (iVar4 == 0) {
            uVar11 = 0;
            goto LAB_100981e7a;
        }
        pAVar6 = (Array<AnimKey, eastl::allocator>*)param_1->second();
        psVar7 = (short*)Array<AnimKey, eastl::allocator>::operator[](pAVar6, 0);
        if ((float)(int)*psVar7 <= param_2) {
            pAVar6 = (Array<AnimKey, eastl::allocator>*)param_1->second();
            iVar4 = param_1->GetNumKeys();
            psVar7 = (short*)Array<AnimKey, eastl::allocator>::operator[](pAVar6, (long)(iVar4 + -1));
            if (param_2 <= (float)(int)*psVar7) {
                cVar3 = param_1->IsStatic();
                if (cVar3 != '\0')
                    goto LAB_100981dec;
                iVar5 = param_1->GetKeyIndexAtTime(param_2, param_3);
                psVar7 = (short*)param_1->GetKeyFromIndex(iVar5);
                psVar8 = (short*)param_1->GetKeyFromIndex(iVar5 + 1);
                iVar4 = param_3->field_0;
                param_3->field_0 = iVar5;
                uVar11 = 0;
                if (psVar7 == (short*)0)
                    goto LAB_100981e7a;
                fVar1 = *(float*)(psVar7 + 8);
                if ((fVar1 == 0.0) && (*(float*)(psVar7 + 10) == 0.0)) {
                    bVar10 = true;
                LAB_100981f84:
                    bVar2 = false;
                } else if ((fVar1 == 3.4028235e+38) && (*(float*)(psVar7 + 10) == 3.4028235e+38)) {
                    bVar2 = true;
                    bVar10 = false;
                } else {
                    bVar2 = false;
                    bVar10 = psVar8 == (short*)0;
                    if ((!bVar10) && (iVar5 != iVar4)) {
                        local_48 = (float)(int)*psVar7;
                        local_58 = *(float*)(psVar7 + 2);
                        local_44 = fVar1 * 0.33333334 + local_48;
                        local_54 = *(float*)(psVar7 + 10) * 0.33333334 + local_58;
                        local_3c = (float)(int)*psVar8;
                        local_4c = *(float*)(psVar8 + 2);
                        local_40 = local_3c - *(float*)(psVar8 + 4) * 0.33333334;
                        local_50 = local_4c - *(float*)(psVar8 + 6) * 0.33333334;
                        cVar3 = param_1->IsWeighted();
                        if (cVar3 == '\0') {
                            HermiteCreate(param_1, &local_48, &local_58, param_3);
                        } else {
                            BezierCreate(param_1, &local_48, &local_58, param_3);
                        }
                        bVar10 = false;
                        goto LAB_100981f84;
                    }
                }
                if (!bVar10) {
                    if (!bVar2) {
                        cVar3 = param_1->IsWeighted();
                        if (cVar3 == '\0') {
                            uVar11 = SampleHermite(param_3, param_2);
                        } else {
                            uVar11 = SampleBezier(param_3, param_2);
                        }
                        goto LAB_100981e7a;
                    }
                    if (((float)(int)*psVar7 != param_2) && (psVar8 != (short*)0)) {
                        uVar11 = (ulong) * (uint*)(psVar8 + 2);
                        goto LAB_100981e7a;
                    }
                }
                uVar11 = (ulong) * (uint*)(psVar7 + 2);
                goto LAB_100981e7a;
            }
            cVar3 = param_1->GetSpriteAlpha();
            if (cVar3 == '\0') {
                pAVar6 = (Array<AnimKey, eastl::allocator>*)param_1->second();
                iVar4 = param_1->GetNumKeys();
                uVar11 = (ulong)(iVar4 + -1);
                goto LAB_100981e70;
            }
            bVar10 = false;
        } else {
            cVar3 = param_1->GetPreInfinity();
            if (cVar3 == '\0') {
            LAB_100981dec:
                pAVar6 = (Array<AnimKey, eastl::allocator>*)param_1->second();
                uVar11 = 0;
            LAB_100981e70:
                lVar9 = Array<AnimKey, eastl::allocator>::operator[](pAVar6, uVar11);
                uVar11 = (ulong) * (uint*)(lVar9 + 4);
                goto LAB_100981e7a;
            }
            bVar10 = true;
        }
        uVar11 = SampleInfinities(param_1, param_2, bVar10, param_3);
    LAB_100981e7a:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar11;
    }

    // 0x100982300, 992 bytes, placed by class name
    // AnimCurveSampler::SampleInfinities(AnimCurve const*, float, bool, AnimCurveSegmentCacheData&)
    void AnimCurveSampler::SampleInfinities(AnimCurve* param_1, float param_2, bool param_3,
                                            AnimCurveSegmentCacheData* param_4) {
        char cVar1;
        int iVar2;
        Array<AnimKey, eastl::allocator>* pAVar3;
        short* psVar4;
        long lVar5;
        double dVar6;
        float fVar7;
        undefined4 in_XMM2_Db;
        float fVar8;
        double local_68[2];
        undefined8 local_58;
        undefined1 local_48[16];
        float local_30;
        float local_2c;

        local_30 = param_2;
        pAVar3 = (Array<AnimKey, eastl::allocator>*)param_1->second();
        psVar4 = (short*)Array<AnimKey, eastl::allocator>::operator[](pAVar3, 0);
        local_48 = ZEXT416((uint)(float)(int)*psVar4);
        pAVar3 = (Array<AnimKey, eastl::allocator>*)param_1->second();
        iVar2 = param_1->GetNumKeys();
        psVar4 = (short*)Array<AnimKey, eastl::allocator>::operator[](pAVar3, (long)(iVar2 + -1));
        fVar7 = (float)(int)*psVar4;
        fVar8 = fVar7 - (float)local_48._0_4_;
        if (fVar8 == 0.0) {
            pAVar3 = (Array<AnimKey, eastl::allocator>*)param_1->second();
            Array<AnimKey, eastl::allocator>::operator[](pAVar3, 0);
            return;
        }
        local_58 = (double)CONCAT44(in_XMM2_Db, fVar8);
        dVar6 = (double)_modf((double)((local_30 - (float)(~-(uint)(fVar7 < local_30) & local_48._0_4_ |
                                                           -(uint)(fVar7 < local_30) & (uint)fVar7)) /
                                       fVar8),
                              local_68);
        dVar6 = (double)::abs(dVar6);
        local_2c = (float)dVar6 * (float)local_58;
        local_68[0] = (double)::abs(local_68[0]);
        local_68[0] = local_68[0] + 1.0;
        local_68[1] = 0.0;
        local_58 = local_68[0];
        if (param_3) {
            cVar1 = param_1->GetPreInfinity();
            if (cVar1 == '\x04') {
                dVar6 = (double)_modf(local_58 * 0.5, local_68 + 1);
                if ((float)dVar6 != 0.0)
                    goto LAB_1009824b1;
            } else {
                cVar1 = param_1->GetPreInfinity();
                if ((cVar1 != '\x02') && (cVar1 = param_1->GetPreInfinity(), cVar1 != '\x03')) {
                    cVar1 = param_1->GetPreInfinity();
                    fVar7 = local_2c;
                    if (cVar1 == '\x01') {
                        pAVar3 = (Array<AnimKey, eastl::allocator>*)param_1->second();
                        lVar5 = Array<AnimKey, eastl::allocator>::operator[](pAVar3, 0);
                        local_58 = (double)CONCAT44(local_58._4_4_, *(undefined4*)(lVar5 + 8));
                        pAVar3 = (Array<AnimKey, eastl::allocator>*)param_1->second();
                        lVar5 = Array<AnimKey, eastl::allocator>::operator[](pAVar3, 0);
                        local_2c = *(float*)(lVar5 + 12);
                        pAVar3 = (Array<AnimKey, eastl::allocator>*)param_1->second();
                        Array<AnimKey, eastl::allocator>::operator[](pAVar3, 0);
                        return;
                    }
                    goto LAB_1009824bb;
                }
            }
        LAB_10098248a:
            fVar7 = fVar7 - local_2c;
        } else {
            cVar1 = param_1->GetSpriteAlpha();
            if (cVar1 == '\x04') {
                dVar6 = (double)_modf(local_58 * 0.5, local_68 + 1);
                if ((float)dVar6 != 0.0)
                    goto LAB_10098248a;
            } else {
                cVar1 = param_1->GetSpriteAlpha();
                if ((cVar1 != '\x02') && (cVar1 = param_1->GetSpriteAlpha(), cVar1 != '\x03')) {
                    cVar1 = param_1->GetSpriteAlpha();
                    fVar7 = local_2c;
                    if (cVar1 == '\x01') {
                        pAVar3 = (Array<AnimKey, eastl::allocator>*)param_1->second();
                        iVar2 = param_1->GetNumKeys();
                        lVar5 = Array<AnimKey, eastl::allocator>::operator[](pAVar3, (long)(iVar2 + -1));
                        local_48._0_4_ = *(undefined4*)(lVar5 + 16);
                        pAVar3 = (Array<AnimKey, eastl::allocator>*)param_1->second();
                        iVar2 = param_1->GetNumKeys();
                        lVar5 = Array<AnimKey, eastl::allocator>::operator[](pAVar3, (long)(iVar2 + -1));
                        local_58 = (double)CONCAT44(local_58._4_4_, *(undefined4*)(lVar5 + 20));
                        pAVar3 = (Array<AnimKey, eastl::allocator>*)param_1->second();
                        iVar2 = param_1->GetNumKeys();
                        Array<AnimKey, eastl::allocator>::operator[](pAVar3, (long)(iVar2 + -1));
                        return;
                    }
                    goto LAB_1009824bb;
                }
            }
        LAB_1009824b1:
            fVar7 = local_2c + (float)local_48._0_4_;
        }
    LAB_1009824bb:
        local_30 = (float)SampleCurve(param_1, fVar7, param_4);
        pAVar3 = (Array<AnimKey, eastl::allocator>*)param_1->second();
        iVar2 = param_1->GetNumKeys();
        lVar5 = Array<AnimKey, eastl::allocator>::operator[](pAVar3, (long)(iVar2 + -1));
        local_48._0_4_ = *(float*)(lVar5 + 4);
        pAVar3 = (Array<AnimKey, eastl::allocator>*)param_1->second();
        lVar5 = Array<AnimKey, eastl::allocator>::operator[](pAVar3, 0);
        local_48._0_4_ = (float)local_48._0_4_ - *(float*)(lVar5 + 4);
        if (param_3) {
            param_1->GetPreInfinity();
        } else {
            param_1->GetSpriteAlpha();
        }
    }

    // 0x1009826f0, 688 bytes, placed by class name
    // AnimCurveSampler::BezierCreate(AnimCurve const*, float*, float*, AnimCurveSegmentCacheData&)
    void AnimCurveSampler::BezierCreate(AnimCurve* param_1, float* param_2, float* param_3,
                                        AnimCurveSegmentCacheData* param_4) {
        float fVar1;
        float* pfVar2;
        float* pfVar3;
        float* pfVar4;
        float* pfVar5;
        undefined8* puVar6;
        float fVar7;
        float fVar8;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        if (param_1 == (AnimCurve*)0) {
            return;
        }
        fVar1 = *param_2;
        fVar7 = param_2[3] - fVar1;
        if (fVar7 == 0.0) {
            return;
        }
        fVar8 = (param_2[1] - fVar1) * (1.0 / fVar7);
        local_34 = (1.0 / fVar7) * (param_2[2] - fVar1);
        param_4->field_4 = local_34 == 0.6666667 && fVar8 == 0.33333334;
        local_40 = fVar8;
        if (fVar8 < 0.0) {
            local_40 = 0.0;
        }
        local_3c = local_34;
        if (1.0 < local_34) {
            local_3c = 1.0;
        }
        if ((1.0 < local_40) || (local_3c < -1.0)) {
            local_38 = fVar7;
            CheckMonotonic(&local_40, &local_3c);
            fVar7 = local_38;
        }
        if ((fVar8 != local_40) && (param_2[1] = local_40 * fVar7 + *param_2, fVar8 != 0.0)) {
            param_3[1] = ((param_3[1] - *param_3) * local_40) / fVar8 + *param_3;
        }
        local_38 = local_40;
        if ((local_34 != local_3c) && (param_2[2] = fVar7 * local_3c + *param_2, local_34 != 1.0)) {
            param_3[2] = ((1.0 - local_3c) * (param_3[2] - param_3[3])) / (1.0 - local_34) + param_3[3];
        }
        *(float*)&param_4->field_8 = *param_2;
        *(float*)((long)&param_4->field_8 + 4) = param_2[3];
        puVar6 = &param_4->field_16;
        local_34 = local_3c;
        pfVar2 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)puVar6, 3);
        pfVar3 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)puVar6, 2);
        pfVar4 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)puVar6, 1);
        pfVar5 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)puVar6, 0);
        BezierToPower(0.0, local_38, local_34, 1.0, pfVar2, pfVar3, pfVar4, pfVar5);
        local_38 = *param_3;
        local_34 = param_3[1];
        fVar1 = param_3[2];
        fVar7 = param_3[3];
        puVar6 = &param_4->field_32;
        pfVar2 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)puVar6, 3);
        pfVar3 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)puVar6, 2);
        pfVar4 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)puVar6, 1);
        pfVar5 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)puVar6, 0);
        BezierToPower(local_38, local_34, fVar1, fVar7, pfVar2, pfVar3, pfVar4, pfVar5);
    }

    // 0x1009829a0, 368 bytes, placed by class name
    // AnimCurveSampler::HermiteCreate(AnimCurve const*, float*, float*, AnimCurveSegmentCacheData&)
    void AnimCurveSampler::HermiteCreate(AnimCurve* param_1, float* param_2, float* param_3,
                                         AnimCurveSegmentCacheData* param_4) {
        float* pfVar1;
        undefined8* this;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;

        if (param_1 != (AnimCurve*)0) {
            *(float*)&param_4->field_8 = *param_2;
            fVar2 = param_2[1] - *param_2;
            fVar7 = 0.0;
            fVar6 = 0.0;
            if (fVar2 != 0.0) {
                fVar6 = (param_3[1] - *param_3) / fVar2;
            }
            fVar2 = param_2[3] - *param_2;
            fVar5 = param_3[3] - *param_3;
            fVar3 = param_2[3] - param_2[2];
            if (fVar3 != 0.0) {
                fVar7 = (param_3[3] - param_3[2]) / fVar3;
            }
            fVar4 = 1.0 / (fVar2 * fVar2);
            fVar3 = fVar6 * fVar2;
            this = &param_4->field_16;
            pfVar1 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)this, 0);
            *pfVar1 = (((fVar7 * fVar2 + fVar3) - (fVar5 + fVar5)) * fVar4) / fVar2;
            pfVar1 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)this, 1);
            *pfVar1 = ((fVar5 * 3.0 - (fVar3 + fVar3)) - fVar7 * fVar2) * fVar4;
            pfVar1 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)this, 2);
            *pfVar1 = fVar6;
            fVar2 = *param_3;
            pfVar1 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)this, 3);
            *pfVar1 = fVar2;
        }
    }

    // 0x100982b10, 480 bytes, placed by class name
    // AnimCurveSampler::SampleBezier(AnimCurveSegmentCacheData*, float)
    float AnimCurveSampler::SampleBezier(AnimCurveSegmentCacheData* param_1, float param_2) {
        float fVar1;
        float fVar2;
        undefined4* puVar3;
        float* pfVar4;
        int iVar5;
        undefined8* puVar6;
        array<float, 4ul> local_48[16];
        array local_38[16];
        float local_28;
        float local_24;

        if (param_1 == (AnimCurveSegmentCacheData*)0) {
            return 0.0;
        }
        fVar1 = *(float*)&param_1->field_8;
        local_28 = 0.0;
        if (param_2 != fVar1) {
            fVar2 = *(float*)((long)&param_1->field_8 + 4);
            if (param_2 == fVar2) {
                local_28 = 1.0;
            } else {
                local_28 = (param_2 - fVar1) / (fVar2 - fVar1);
            }
        }
        if (param_1->field_4 == '\0') {
            puVar6 = &param_1->field_16;
            puVar3 = (undefined4*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)puVar6, 3);
            local_24 = (float)*puVar3;
            puVar3 = (undefined4*)std::array<float, 4ul>::operator[](local_48, 3);
            *puVar3 = local_24;
            puVar3 = (undefined4*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)puVar6, 2);
            local_24 = (float)*puVar3;
            puVar3 = (undefined4*)std::array<float, 4ul>::operator[](local_48, 2);
            *puVar3 = local_24;
            puVar3 = (undefined4*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)puVar6, 1);
            local_24 = (float)*puVar3;
            puVar3 = (undefined4*)std::array<float, 4ul>::operator[](local_48, 1);
            *puVar3 = local_24;
            pfVar4 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)puVar6, 0);
            local_24 = *pfVar4 - local_28;
            pfVar4 = (float*)std::array<float, 4ul>::operator[](local_48, 0);
            *pfVar4 = local_24;
            local_28 = 0.0;
            iVar5 = math::polynomial::FindPolynomialRoots(local_38, (array*)local_48, 3, 0.0, true, 1.0, true);
            if (iVar5 == 1) {
                pfVar4 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)local_38, 0);
                local_28 = *pfVar4;
            }
        }
        puVar6 = &param_1->field_32;
        pfVar4 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)puVar6, 3);
        local_24 = *pfVar4 * local_28;
        pfVar4 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)puVar6, 2);
        local_24 = (local_24 + *pfVar4) * local_28;
        pfVar4 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)puVar6, 1);
        local_24 = (local_24 + *pfVar4) * local_28;
        pfVar4 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)puVar6, 0);
        return local_24 + *pfVar4;
    }

    // 0x100982cf0, 160 bytes, placed by class name
    // AnimCurveSampler::SampleHermite(AnimCurveSegmentCacheData*, float)
    float AnimCurveSampler::SampleHermite(AnimCurveSegmentCacheData* param_1, float param_2) {
        float fVar1;
        float fVar2;
        float fVar3;
        float* pfVar4;
        undefined8* this;
        float fVar5;

        if (param_1 == (AnimCurveSegmentCacheData*)0) {
            return 0.0;
        }
        fVar5 = param_2 - *(float*)&param_1->field_8;
        this = &param_1->field_16;
        pfVar4 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)this, 0);
        fVar1 = *pfVar4;
        pfVar4 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)this, 1);
        fVar2 = *pfVar4;
        pfVar4 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)this, 2);
        fVar3 = *pfVar4;
        pfVar4 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)this, 3);
        return ((fVar1 * fVar5 + fVar2) * fVar5 + fVar3) * fVar5 + *pfVar4;
    }

    // 0x100982db0, 160 bytes, placed by class name
    // AnimCurveSampler::CheckMonotonic(float&, float&)
    void AnimCurveSampler::CheckMonotonic(float* param_1, float* param_2) {
        float fVar1;
        float fVar2;

        *param_2 = 1.0 - *param_2;
        if (*param_1 <= 0.0 && *param_1 != 0.0) {
            *param_1 = 0.0;
        }
        if (*param_2 <= 0.0 && *param_2 != 0.0) {
            *param_2 = 0.0;
        }
        fVar1 = *param_1;
        fVar2 = *param_2;
        if (((1.0 < fVar1) || (1.0 < fVar2)) &&
            (0.0 < (fVar2 + -2.0) * fVar2 + 1.0000001 + (fVar2 + -2.0 + fVar1) * fVar1)) {
            ConstrainInsideBounds(param_1, param_2);
        }
        *param_2 = 1.0 - *param_2;
    }

    // 0x100982e50, 80 bytes, placed by class name
    // AnimCurveSampler::BezierToPower(float, float, float, float, float&, float&, float&, float&)
    void AnimCurveSampler::BezierToPower(float param_1, float param_2, float param_3, float param_4, float* param_5,
                                         float* param_6, float* param_7, float* param_8) {
        float fVar1;

        fVar1 = (param_3 - param_2) - (param_2 - param_1);
        *param_5 = param_4 - ((param_3 - param_2) + param_3 + fVar1);
        *param_6 = fVar1 * 3.0;
        *param_7 = (param_2 - param_1) * 3.0;
        *param_8 = param_1;
    }

    // 0x100982ea0, 192 bytes, placed by class name
    // AnimCurveSampler::ConstrainInsideBounds(float&, float&)
    void AnimCurveSampler::ConstrainInsideBounds(float* param_1, float* param_2) {
        float fVar1;
        float fVar2;
        float fVar3;

        fVar3 = *param_1;
        if (1.3333334 <= fVar3 + 1.1920929e-07) {
            *param_1 = 1.3333333;
            fVar3 = 0.33333322;
        } else {
            fVar2 = fVar3 + -2.0;
            fVar1 = (float)::sqrt((fVar3 + -1.0) * (fVar3 + -1.0) * -4.0 + fVar2 * fVar2);
            fVar3 = (fVar1 - fVar2) * 0.5;
            if (*param_2 + 1.1920929e-07 <= fVar3) {
                fVar3 = (fVar1 + fVar2) * -0.5 + 1.1920929e-07;
                if (fVar3 <= *param_2) {
                    return;
                }
            } else {
                fVar3 = fVar3 + -1.1920929e-07;
            }
        }
        *param_2 = fVar3;
    }

} // namespace jag::graphics
