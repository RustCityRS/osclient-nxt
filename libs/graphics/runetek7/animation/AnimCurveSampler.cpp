// libs/graphics/runetek7/animation/AnimCurveSampler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class AnimCurveSampler {
    public:
        unsigned long SampleCurve(const AnimCurve* animCurve, float arg2,
                                  AnimCurveSegmentCacheData& animCurveSegmentCacheData);
        void SampleInfinities(const AnimCurve* animCurve, float arg2, bool arg3,
                              AnimCurveSegmentCacheData& animCurveSegmentCacheData);
        void BezierCreate(const AnimCurve* animCurve, float* arg2, float* arg3,
                          AnimCurveSegmentCacheData& animCurveSegmentCacheData);
        void HermiteCreate(const AnimCurve* animCurve, float* arg2, float* arg3,
                           AnimCurveSegmentCacheData& animCurveSegmentCacheData);
        float SampleBezier(AnimCurveSegmentCacheData* animCurveSegmentCacheData, float arg2);
        float SampleHermite(AnimCurveSegmentCacheData* animCurveSegmentCacheData, float arg2);
        void CheckMonotonic(float& arg1, float& arg2);
        void BezierToPower(float arg1, float arg2, float arg3, float arg4, float& arg5, float& arg6, float& arg7,
                           float& arg8);
        void ConstrainInsideBounds(float& arg1, float& arg2);
    };

    // 0x100981d00
    unsigned long AnimCurveSampler::SampleCurve(const AnimCurve* animCurve, float arg2,
                                                AnimCurveSegmentCacheData& animCurveSegmentCacheData) {
        float fVar1;
        bool bVar2;
        bool cVar3;
        int arg1;
        short* psVar7;
        long lVar8;
        bool bVar9;
        float local_58;
        float local_54;
        float local_50;
        float local_4c;
        float local_48;
        float local_44;
        float local_40;
        float local_3c;

        unsigned long uVar10 = 0;
        if (animCurve == nullptr)
            goto LAB_100981e7a;
        int iVar4 = animCurve->GetNumKeys();
        if (iVar4 == 0) {
            uVar10 = 0;
            goto LAB_100981e7a;
        }
        auto pAVar5 = animCurve->second();
        short* psVar6 = (short*)(*pAVar5)[0];
        if ((float)(int)*psVar6 <= arg2) {
            pAVar5 = (Array<AnimKey>*)animCurve->second();
            iVar4 = animCurve->GetNumKeys();
            psVar6 = (short*)(*pAVar5)[(long)(iVar4 - 1)];
            if (arg2 <= (float)(int)*psVar6) {
                cVar3 = animCurve->IsStatic();
                if (cVar3)
                    goto LAB_100981dec;
                arg1 = animCurve->GetKeyIndexAtTime(arg2, animCurveSegmentCacheData);
                psVar6 = animCurve->GetKeyFromIndex(arg1);
                psVar7 = animCurve->GetKeyFromIndex(arg1 + 1);
                iVar4 = animCurveSegmentCacheData.field_0;
                animCurveSegmentCacheData.field_0 = arg1;
                uVar10 = 0;
                if (psVar6 == nullptr)
                    goto LAB_100981e7a;
                fVar1 = *(float*)(psVar6 + 8);
                if ((fVar1 == 0.0) && (*(float*)(psVar6 + 10) == 0.0)) {
                    bVar9 = true;
                LAB_100981f84:
                    bVar2 = false;
                } else if ((fVar1 == 3.4028235e+38) && (*(float*)(psVar6 + 10) == 3.4028235e+38)) {
                    bVar2 = true;
                    bVar9 = false;
                } else {
                    bVar2 = false;
                    bVar9 = psVar7 == nullptr;
                    if ((!bVar9) && (arg1 != iVar4)) {
                        local_48 = (float)(int)*psVar6;
                        local_58 = *(float*)(psVar6 + 2);
                        local_44 = fVar1 * 0.33333334f + local_48;
                        local_54 = *(float*)(psVar6 + 10) * 0.33333334f + local_58;
                        local_3c = (float)(int)*psVar7;
                        local_4c = *(float*)(psVar7 + 2);
                        local_40 = local_3c - *(float*)(psVar7 + 4) * 0.33333334f;
                        local_50 = local_4c - *(float*)(psVar7 + 6) * 0.33333334f;
                        cVar3 = animCurve->IsWeighted();
                        if (!cVar3) {
                            HermiteCreate(animCurve, &local_48, &local_58, animCurveSegmentCacheData);
                        } else {
                            BezierCreate(animCurve, &local_48, &local_58, animCurveSegmentCacheData);
                        }
                        bVar9 = false;
                        goto LAB_100981f84;
                    }
                }
                if (!bVar9) {
                    if (!bVar2) {
                        cVar3 = animCurve->IsWeighted();
                        if (!cVar3) {
                            uVar10 = SampleHermite(animCurveSegmentCacheData, arg2);
                        } else {
                            uVar10 = SampleBezier(animCurveSegmentCacheData, arg2);
                        }
                        goto LAB_100981e7a;
                    }
                    if (((float)(int)*psVar6 != arg2) && (psVar7 != nullptr)) {
                        uVar10 = (unsigned long)*(unsigned int*)(psVar7 + 2);
                        goto LAB_100981e7a;
                    }
                }
                uVar10 = (unsigned long)*(unsigned int*)(psVar6 + 2);
                goto LAB_100981e7a;
            }
            cVar3 = animCurve->GetSpriteAlpha();
            if (!cVar3) {
                pAVar5 = (Array<AnimKey>*)animCurve->second();
                iVar4 = animCurve->GetNumKeys();
                uVar10 = (unsigned long)(iVar4 - 1);
                goto LAB_100981e70;
            }
            bVar9 = false;
        } else {
            cVar3 = animCurve->GetPreInfinity();
            if (!cVar3) {
            LAB_100981dec:
                pAVar5 = (Array<AnimKey>*)animCurve->second();
                uVar10 = 0;
            LAB_100981e70:
                lVar8 = (*pAVar5)[uVar10];
                uVar10 = (unsigned long)*(unsigned int*)(lVar8 + 4);
                goto LAB_100981e7a;
            }
            bVar9 = true;
        }
        uVar10 = SampleInfinities(animCurve, arg2, bVar9, animCurveSegmentCacheData);
    LAB_100981e7a:
        return uVar10;
    }

    // 0x100982300
    void AnimCurveSampler::SampleInfinities(const AnimCurve* animCurve, float arg2, bool arg3,
                                            AnimCurveSegmentCacheData& animCurveSegmentCacheData) {
        char cVar1;
        long lVar5;
        uint32_t in_XMM2_Db;
        double local_68[2];
        uint8_t local_48[16];

        float local_30 = arg2;
        auto pAVar3 = animCurve->second();
        short* psVar4 = (short*)(*pAVar3)[0];
        local_48 = (unsigned __int128)((unsigned int)(float)(int)*psVar4);
        pAVar3 = (Array<AnimKey>*)animCurve->second();
        int iVar2 = animCurve->GetNumKeys();
        psVar4 = (short*)(*pAVar3)[(long)(iVar2 - 1)];
        float fVar7 = (float)(int)*psVar4;
        float fVar8 = fVar7 - (float)local_48._0_4_;
        if (fVar8 == 0.0) {
            pAVar3 = (Array<AnimKey>*)animCurve->second();
            (*pAVar3)[0];
            return;
        }
        uint64_t local_58 = (double)(((uint64_t)in_XMM2_Db << 32) | (uint32_t)fVar8);
        double dVar6 =
            (double)_modf((double)((local_30 - (float)(~-(unsigned int)(fVar7 < local_30) & local_48._0_4_ |
                                                       -(unsigned int)(fVar7 < local_30) & (unsigned int)fVar7)) /
                                   fVar8),
                          local_68);
        dVar6 = (double)::abs(dVar6);
        float local_2c = (float)dVar6 * (float)local_58;
        local_68[0] = (double)::abs(local_68[0]);
        local_68[0] = local_68[0] + 1.0;
        local_68[1] = 0.0;
        local_58 = local_68[0];
        if (arg3) {
            cVar1 = animCurve->GetPreInfinity();
            if (cVar1 == '\x04') {
                dVar6 = (double)_modf(local_58 * 0.5, local_68 + 1);
                if ((float)dVar6 != 0.0)
                    goto LAB_1009824b1;
            } else {
                cVar1 = animCurve->GetPreInfinity();
                if ((cVar1 != '\x02') && (cVar1 = animCurve->GetPreInfinity(), cVar1 != '\x03')) {
                    cVar1 = animCurve->GetPreInfinity();
                    fVar7 = local_2c;
                    if (cVar1 == '\x01') {
                        pAVar3 = (Array<AnimKey>*)animCurve->second();
                        lVar5 = (*pAVar3)[0];
                        local_58 = (double)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)(*(uint32_t*)(lVar5 + 8)));
                        pAVar3 = (Array<AnimKey>*)animCurve->second();
                        lVar5 = (*pAVar3)[0];
                        local_2c = *(float*)(lVar5 + 12);
                        pAVar3 = (Array<AnimKey>*)animCurve->second();
                        (*pAVar3)[0];
                        return;
                    }
                    goto LAB_1009824bb;
                }
            }
        LAB_10098248a:
            fVar7 = fVar7 - local_2c;
        } else {
            cVar1 = animCurve->GetSpriteAlpha();
            if (cVar1 == '\x04') {
                dVar6 = (double)_modf(local_58 * 0.5, local_68 + 1);
                if ((float)dVar6 != 0.0)
                    goto LAB_10098248a;
            } else {
                cVar1 = animCurve->GetSpriteAlpha();
                if ((cVar1 != '\x02') && (cVar1 = animCurve->GetSpriteAlpha(), cVar1 != '\x03')) {
                    cVar1 = animCurve->GetSpriteAlpha();
                    fVar7 = local_2c;
                    if (cVar1 == '\x01') {
                        pAVar3 = (Array<AnimKey>*)animCurve->second();
                        iVar2 = animCurve->GetNumKeys();
                        lVar5 = (*pAVar3)[(long)(iVar2 - 1)];
                        local_48._0_4_ = *(uint32_t*)(lVar5 + 16);
                        pAVar3 = (Array<AnimKey>*)animCurve->second();
                        iVar2 = animCurve->GetNumKeys();
                        lVar5 = (*pAVar3)[(long)(iVar2 - 1)];
                        local_58 = (double)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)(*(uint32_t*)(lVar5 + 20)));
                        pAVar3 = (Array<AnimKey>*)animCurve->second();
                        iVar2 = animCurve->GetNumKeys();
                        (*pAVar3)[(long)(iVar2 - 1)];
                        return;
                    }
                    goto LAB_1009824bb;
                }
            }
        LAB_1009824b1:
            fVar7 = local_2c + (float)local_48._0_4_;
        }
    LAB_1009824bb:
        local_30 = (float)SampleCurve(animCurve, fVar7, animCurveSegmentCacheData);
        pAVar3 = (Array<AnimKey>*)animCurve->second();
        iVar2 = animCurve->GetNumKeys();
        lVar5 = (*pAVar3)[(long)(iVar2 - 1)];
        local_48._0_4_ = *(float*)(lVar5 + 4);
        pAVar3 = (Array<AnimKey>*)animCurve->second();
        lVar5 = (*pAVar3)[0];
        local_48._0_4_ = (float)local_48._0_4_ - *(float*)(lVar5 + 4);
        if (arg3) {
            animCurve->GetPreInfinity();
        } else {
            animCurve->GetSpriteAlpha();
        }
    }

    // 0x1009826f0
    void AnimCurveSampler::BezierCreate(const AnimCurve* animCurve, float* arg2, float* arg3,
                                        AnimCurveSegmentCacheData& animCurveSegmentCacheData) {
        float local_38;

        if (animCurve == nullptr) {
            return;
        }
        float fVar1 = *arg2;
        float fVar7 = arg2[3] - fVar1;
        if (fVar7 == 0.0) {
            return;
        }
        float fVar8 = (arg2[1] - fVar1) * (1.0 / fVar7);
        float local_34 = (1.0 / fVar7) * (arg2[2] - fVar1);
        animCurveSegmentCacheData.field_4 = local_34 == 0.6666667f && fVar8 == 0.33333334f;
        float local_40 = fVar8;
        if (fVar8 < 0.0) {
            local_40 = 0.0;
        }
        float local_3c = local_34;
        if (1.0 < local_34) {
            local_3c = 1.0;
        }
        if ((1.0 < local_40) || (local_3c < -1.0)) {
            local_38 = fVar7;
            CheckMonotonic(&local_40, &local_3c);
            fVar7 = local_38;
        }
        if ((fVar8 != local_40) && (arg2[1] = local_40 * fVar7 + *arg2, fVar8 != 0.0)) {
            arg3[1] = ((arg3[1] - *arg3) * local_40) / fVar8 + *arg3;
        }
        local_38 = local_40;
        if ((local_34 != local_3c) && (arg2[2] = fVar7 * local_3c + *arg2, local_34 != 1.0)) {
            arg3[2] = ((1.0 - local_3c) * (arg3[2] - arg3[3])) / (1.0 - local_34) + arg3[3];
        }
        *(float*)&animCurveSegmentCacheData.field_8 = *arg2;
        *(float*)((long)&animCurveSegmentCacheData.field_8 + 4) = arg2[3];
        uint64_t* puVar6 = &animCurveSegmentCacheData.field_16;
        local_34 = local_3c;
        float* pfVar2 = (float*)(*puVar6)[3];
        float* pfVar3 = (float*)(*puVar6)[2];
        float* pfVar4 = (float*)(*puVar6)[1];
        float* pfVar5 = (float*)(*puVar6)[0];
        BezierToPower(0.0, local_38, local_34, 1.0, pfVar2, pfVar3, pfVar4, pfVar5);
        local_38 = *arg3;
        local_34 = arg3[1];
        fVar1 = arg3[2];
        fVar7 = arg3[3];
        puVar6 = &animCurveSegmentCacheData.field_32;
        pfVar2 = (float*)(*puVar6)[3];
        pfVar3 = (float*)(*puVar6)[2];
        pfVar4 = (float*)(*puVar6)[1];
        pfVar5 = (float*)(*puVar6)[0];
        BezierToPower(local_38, local_34, fVar1, fVar7, pfVar2, pfVar3, pfVar4, pfVar5);
    }

    // 0x1009829a0
    void AnimCurveSampler::HermiteCreate(const AnimCurve* animCurve, float* arg2, float* arg3,
                                         AnimCurveSegmentCacheData& animCurveSegmentCacheData) {
        float* pfVar1;
        uint64_t* uint64_t;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;

        if (animCurve != nullptr) {
            *(float*)&animCurveSegmentCacheData.field_8 = *arg2;
            fVar2 = arg2[1] - *arg2;
            fVar7 = 0.0;
            fVar6 = 0.0;
            if (fVar2 != 0.0) {
                fVar6 = (arg3[1] - *arg3) / fVar2;
            }
            fVar2 = arg2[3] - *arg2;
            fVar5 = arg3[3] - *arg3;
            fVar3 = arg2[3] - arg2[2];
            if (fVar3 != 0.0) {
                fVar7 = (arg3[3] - arg3[2]) / fVar3;
            }
            fVar4 = 1.0 / (fVar2 * fVar2);
            fVar3 = fVar6 * fVar2;
            uint64_t = &animCurveSegmentCacheData.field_16;
            pfVar1 = (float*)(*uint64_t)[0];
            *pfVar1 = (((fVar7 * fVar2 + fVar3) - (fVar5 + fVar5)) * fVar4) / fVar2;
            pfVar1 = (float*)(*uint64_t)[1];
            *pfVar1 = ((fVar5 * 3.0 - (fVar3 + fVar3)) - fVar7 * fVar2) * fVar4;
            pfVar1 = (float*)(*uint64_t)[2];
            *pfVar1 = fVar6;
            fVar2 = *arg3;
            pfVar1 = (float*)(*uint64_t)[3];
            *pfVar1 = fVar2;
        }
    }

    // 0x100982b10
    float AnimCurveSampler::SampleBezier(AnimCurveSegmentCacheData* animCurveSegmentCacheData, float arg2) {
        float fVar2;
        uint32_t* puVar3;
        float* pfVar4;
        uint64_t* puVar6;
        array<float, 4ul> local_48;
        array<float, _4ul> local_38;
        float local_24;

        if (animCurveSegmentCacheData == nullptr) {
            return 0.0;
        }
        float fVar1 = *(float*)&animCurveSegmentCacheData->field_8;
        float local_28 = 0.0;
        if (arg2 != fVar1) {
            fVar2 = *(float*)((long)&animCurveSegmentCacheData->field_8 + 4);
            if (arg2 == fVar2) {
                local_28 = 1.0;
            } else {
                local_28 = (arg2 - fVar1) / (fVar2 - fVar1);
            }
        }
        if (animCurveSegmentCacheData->field_4 == '\0') {
            puVar6 = &animCurveSegmentCacheData->field_16;
            puVar3 = (uint32_t*)(*puVar6)[3];
            local_24 = (float)*puVar3;
            puVar3 = &local_48[3];
            *puVar3 = local_24;
            puVar3 = (uint32_t*)(*puVar6)[2];
            local_24 = (float)*puVar3;
            puVar3 = &local_48[2];
            *puVar3 = local_24;
            puVar3 = (uint32_t*)(*puVar6)[1];
            local_24 = (float)*puVar3;
            puVar3 = &local_48[1];
            *puVar3 = local_24;
            pfVar4 = (float*)(*puVar6)[0];
            local_24 = *pfVar4 - local_28;
            pfVar4 = &local_48[0];
            *pfVar4 = local_24;
            local_28 = 0.0;
            if (math::polynomial::FindPolynomialRoots(local_38, local_48, 3, 0.0, true, 1.0, true) == 1) {
                pfVar4 = &local_38[0];
                local_28 = *pfVar4;
            }
        }
        puVar6 = &animCurveSegmentCacheData->field_32;
        pfVar4 = (float*)(*puVar6)[3];
        local_24 = *pfVar4 * local_28;
        pfVar4 = (float*)(*puVar6)[2];
        local_24 = (local_24 + *pfVar4) * local_28;
        pfVar4 = (float*)(*puVar6)[1];
        local_24 = (local_24 + *pfVar4) * local_28;
        pfVar4 = (float*)(*puVar6)[0];
        return local_24 + *pfVar4;
    }

    // 0x100982cf0
    float AnimCurveSampler::SampleHermite(AnimCurveSegmentCacheData* animCurveSegmentCacheData, float arg2) {
        if (animCurveSegmentCacheData == nullptr) {
            return 0.0;
        }
        float fVar5 = arg2 - *(float*)&animCurveSegmentCacheData->field_8;
        uint64_t* uint64_t = &animCurveSegmentCacheData->field_16;
        float* pfVar4 = (float*)(*uint64_t)[0];
        float fVar1 = *pfVar4;
        pfVar4 = (float*)(*uint64_t)[1];
        float fVar2 = *pfVar4;
        pfVar4 = (float*)(*uint64_t)[2];
        float fVar3 = *pfVar4;
        pfVar4 = (float*)(*uint64_t)[3];
        return ((fVar1 * fVar5 + fVar2) * fVar5 + fVar3) * fVar5 + *pfVar4;
    }

    // 0x100982db0
    void AnimCurveSampler::CheckMonotonic(float& arg1, float& arg2) {
        arg2 = 1.0 - arg2;
        if (arg1 <= 0.0 && arg1 != 0.0) {
            arg1 = 0.0;
        }
        if (arg2 <= 0.0 && arg2 != 0.0) {
            arg2 = 0.0;
        }
        float fVar1 = arg1;
        float fVar2 = arg2;
        if (((1.0 < fVar1) || (1.0 < fVar2)) &&
            (0.0 < (fVar2 - 2.0) * fVar2 + 1.0000001f + (fVar2 - 2.0 + fVar1) * fVar1)) {
            ConstrainInsideBounds(arg1, arg2);
        }
        arg2 = 1.0 - arg2;
    }

    // 0x100982e50
    void AnimCurveSampler::BezierToPower(float arg1, float arg2, float arg3, float arg4, float& arg5, float& arg6,
                                         float& arg7, float& arg8) {
        float fVar1 = (arg3 - arg2) - (arg2 - arg1);
        arg5 = arg4 - ((arg3 - arg2) + arg3 + fVar1);
        arg6 = fVar1 * 3.0;
        arg7 = (arg2 - arg1) * 3.0;
        arg8 = arg1;
    }

    // 0x100982ea0
    void AnimCurveSampler::ConstrainInsideBounds(float& arg1, float& arg2) {
        float fVar1;
        float fVar2;

        float fVar3 = arg1;
        if (1.3333334f <= fVar3 + 1.1920929e-07) {
            arg1 = 1.3333333f;
            fVar3 = 0.33333322f;
        } else {
            fVar2 = fVar3 - 2.0;
            fVar1 = (float)::sqrt((fVar3 - 1.0) * (fVar3 - 1.0) * -4.0 + fVar2 * fVar2);
            fVar3 = (fVar1 - fVar2) * 0.5;
            if (arg2 + 1.1920929e-07 <= fVar3) {
                fVar3 = (fVar1 + fVar2) * -0.5 + 1.1920929e-07;
                if (fVar3 <= arg2) {
                    return;
                }
            } else {
                fVar3 = fVar3 - 1.1920929e-07;
            }
        }
        arg2 = fVar3;
    }

} // namespace jag::graphics
