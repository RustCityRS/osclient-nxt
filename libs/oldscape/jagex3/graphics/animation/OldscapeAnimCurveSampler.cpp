// libs/oldscape/jagex3/graphics/animation/OldscapeAnimCurveSampler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

namespace jag::oldscape::graphics::animation {
    class OldscapeAnimCurveSampler {
    public:
        void SampleCurve(OldscapeAnimCurve* oldscapeAnimCurve, int arg2);
        void SampleCurve(OldscapeAnimCurve* oldscapeAnimCurve, float arg2);
        void SampleInfinities(OldscapeAnimCurve* oldscapeAnimCurve, float arg2, bool arg3);
        void BezierCreate(OldscapeAnimCurve* oldscapeAnimCurve, float* arg2, float* arg3);
        void HermiteCreate(OldscapeAnimCurve* oldscapeAnimCurve, float* arg2, float* arg3);
        float SampleBezier(const OldscapeAnimCurve* oldscapeAnimCurve, float arg2);
        float SampleHermite(const OldscapeAnimCurve* oldscapeAnimCurve, float arg2);
        void EnsureMonotonic(float arg1, float arg2);
        void BezierToPower(float arg1, float arg2, float arg3, float arg4, std::array<float, 4ul>& arg5);
        void ConstrainInsideBounds(float& arg1, float& arg2);

        uint8_t _unknown_0[1];
    };

    // 0x100321410
    void OldscapeAnimCurveSampler::SampleCurve(OldscapeAnimCurve* oldscapeAnimCurve, int arg2) {
        SampleCurve(oldscapeAnimCurve, (float)arg2);
    }

    // 0x100321760
    void OldscapeAnimCurveSampler::SampleCurve(OldscapeAnimCurve* oldscapeAnimCurve, float arg2) {
        bool bVar1;
        bool bVar2;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        shared_ptr<configdecoder::ObjType>* objType;
        unsigned long arg1;
        ReturnValue local_60;
        float local_48;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;
        float local_30;
        float local_2c;

        float fVar6 = 0.0;
        float local_4c = arg2;
        if (oldscapeAnimCurve == nullptr)
            goto LAB_100321850;
        int iVar3 = oldscapeAnimCurve->GetNumKeys();
        fVar6 = 0.0;
        if (iVar3 == 0)
            goto LAB_100321850;
        uint8_t* uint8_t = &oldscapeAnimCurve->field_8;
        shared_ptr<OldscapeAnimKey>* psVar4 = (shared_ptr<OldscapeAnimKey>*)(*uint8_t)[0];
        long lVar5 = (*psVar4).operator->();
        if ((float)*(int*)(lVar5 + 16) <= local_4c) {
            iVar3 = oldscapeAnimCurve->GetNumKeys();
            psVar4 = (shared_ptr<OldscapeAnimKey>*)(*uint8_t)[(long)(iVar3 - 1)];
            lVar5 = (*psVar4).operator->();
            if (local_4c <= (float)*(int*)(lVar5 + 16)) {
                if (oldscapeAnimCurve->field_2 != '\0')
                    goto LAB_100321826;
                local_60 = oldscapeAnimCurve->GetKeyAtTime(local_4c);
                bVar2 = local_60 != nullptr;
                fVar6 = 0.0;
                if (bVar2) {
                    lVar5 = local_60.operator->();
                    if (*(float*)(lVar5 + 32) == 0.0) {
                        lVar5 = local_60.operator->();
                        if (*(float*)(lVar5 + 36) != 0.0)
                            goto LAB_1003218be;
                    LAB_100321a42:
                        bVar2 = true;
                    LAB_100321a5d:
                        bVar1 = false;
                    } else {
                    LAB_1003218be:
                        lVar5 = local_60.operator->();
                        if (*(float*)(lVar5 + 32) != 3.4028235e+38) {
                        LAB_1003218f5:
                            midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)local_60.operator->();
                            bVar2 = *midiPlayerMainThread != nullptr;
                            if (!bVar2)
                                goto LAB_100321a42;
                            if (oldscapeAnimCurve->field_76 != '\0') {
                                lVar5 = local_60.operator->();
                                iVar3 = *(int*)(lVar5 + 16);
                                local_38 = (float)iVar3;
                                lVar5 = local_60.operator->();
                                fVar6 = *(float*)(lVar5 + 20);
                                local_48 = fVar6;
                                lVar5 = local_60.operator->();
                                local_34 = *(float*)(lVar5 + 32) * 0.33333334f + (float)iVar3;
                                lVar5 = local_60.operator->();
                                local_44 = *(float*)(lVar5 + 36) * 0.33333334f + fVar6;
                                psVar4 = (shared_ptr<OldscapeAnimKey>*)local_60.operator->();
                                lVar5 = (*psVar4).operator->();
                                iVar3 = *(int*)(lVar5 + 16);
                                local_2c = (float)iVar3;
                                psVar4 = (shared_ptr<OldscapeAnimKey>*)local_60.operator->();
                                lVar5 = (*psVar4).operator->();
                                fVar6 = *(float*)(lVar5 + 20);
                                local_3c = fVar6;
                                psVar4 = (shared_ptr<OldscapeAnimKey>*)local_60.operator->();
                                lVar5 = (*psVar4).operator->();
                                local_30 = (float)iVar3 + *(float*)(lVar5 + 24) * -0.33333334;
                                psVar4 = (shared_ptr<OldscapeAnimKey>*)local_60.operator->();
                                lVar5 = (*psVar4).operator->();
                                local_40 = fVar6 + *(float*)(lVar5 + 28) * -0.33333334;
                                if (oldscapeAnimCurve->field_1 == '\0') {
                                    HermiteCreate(oldscapeAnimCurve, &local_38, &local_48);
                                } else {
                                    BezierCreate(oldscapeAnimCurve, &local_38, &local_48);
                                }
                                oldscapeAnimCurve->field_76 = 0;
                            }
                            bVar2 = false;
                            goto LAB_100321a5d;
                        }
                        lVar5 = local_60.operator->();
                        if (*(float*)(lVar5 + 36) != 3.4028235e+38)
                            goto LAB_1003218f5;
                        bVar1 = true;
                        bVar2 = false;
                    }
                    if (bVar2) {
                        lVar5 = local_60.operator->();
                    } else {
                        if (!bVar1) {
                            if (oldscapeAnimCurve->field_1 == '\0') {
                                fVar6 = (float)SampleHermite(oldscapeAnimCurve, local_4c);
                            } else {
                                fVar6 = (float)SampleBezier(oldscapeAnimCurve, local_4c);
                            }
                            goto LAB_100321aae;
                        }
                        lVar5 = local_60.operator->();
                        if ((float)*(int*)(lVar5 + 16) != local_4c) {
                            objType = (shared_ptr<configdecoder::ObjType>*)local_60.operator->();
                            bVar2 = *objType == nullptr;
                            if (!bVar2) {
                                psVar4 = (shared_ptr<OldscapeAnimKey>*)local_60.operator->();
                                lVar5 = (*psVar4).operator->();
                                goto LAB_100321aa9;
                            }
                        }
                        lVar5 = local_60.operator->();
                    }
                LAB_100321aa9:
                    fVar6 = *(float*)(lVar5 + 20);
                }
            LAB_100321aae:
                local_4c = fVar6;
                fVar6 = local_4c;
                goto LAB_100321850;
            }
            if (oldscapeAnimCurve->field_4 == '\0') {
                iVar3 = oldscapeAnimCurve->GetNumKeys();
                arg1 = (unsigned long)(iVar3 - 1);
                goto LAB_10032183e;
            }
            bVar2 = false;
        } else {
            if (oldscapeAnimCurve->field_3 == '\0') {
            LAB_100321826:
                arg1 = 0;
            LAB_10032183e:
                psVar4 = (shared_ptr<OldscapeAnimKey>*)(*uint8_t)[arg1];
                lVar5 = (*psVar4).operator->();
                fVar6 = *(float*)(lVar5 + 20);
                goto LAB_100321850;
            }
            bVar2 = true;
        }
        fVar6 = (float)SampleInfinities(oldscapeAnimCurve, local_4c, bVar2);
    LAB_100321850:
    }

    // 0x100321b30
    void OldscapeAnimCurveSampler::SampleInfinities(OldscapeAnimCurve* oldscapeAnimCurve, float arg2, bool arg3) {
        char cVar1;

        if (oldscapeAnimCurve == nullptr) {
            return;
        }
        int iVar2 = oldscapeAnimCurve->GetNumKeys();
        if (iVar2 == 0) {
            return;
        }
        uint8_t* uint8_t = &oldscapeAnimCurve->field_8;
        shared_ptr<OldscapeAnimKey>* psVar3 = (shared_ptr<OldscapeAnimKey>*)(*uint8_t)[0];
        long lVar4 = (*psVar3).operator->();
        float fVar5 = (float)*(int*)(lVar4 + 16);
        iVar2 = oldscapeAnimCurve->GetNumKeys();
        psVar3 = (shared_ptr<OldscapeAnimKey>*)(*uint8_t)[(long)(iVar2 - 1)];
        lVar4 = (*psVar3).operator->();
        float fVar8 = (float)*(int*)(lVar4 + 16);
        float fVar9 = fVar8 - fVar5;
        if (fVar9 == 0.0) {
            psVar3 = (shared_ptr<OldscapeAnimKey>*)(*uint8_t)[0];
            (*psVar3).operator->();
            return;
        }
        float fVar7 = (arg2 - (float)(~-(unsigned int)(fVar8 < arg2) & (unsigned int)fVar5 |
                                      -(unsigned int)(fVar8 < arg2) & (unsigned int)fVar8)) /
                      fVar9;
        double dVar6 = (double)(int)fVar7;
        fVar7 = (float)::abs((float)((double)fVar7 - dVar6));
        fVar7 = fVar7 * fVar9;
        dVar6 = (double)::abs(dVar6 + 1.0);
        fVar9 = (float)(dVar6 * 0.5 - (double)(int)(dVar6 * 0.5));
        if (arg3) {
            cVar1 = oldscapeAnimCurve->field_3;
            if (1 < (uint8_t)(cVar1 - 2U)) {
                if (cVar1 == '\x01') {
                    psVar3 = (shared_ptr<OldscapeAnimKey>*)(*uint8_t)[0];
                    (*psVar3).operator->();
                    psVar3 = (shared_ptr<OldscapeAnimKey>*)(*uint8_t)[0];
                    (*psVar3).operator->();
                    psVar3 = (shared_ptr<OldscapeAnimKey>*)(*uint8_t)[0];
                    (*psVar3).operator->();
                    return;
                }
                if (cVar1 != '\x04')
                    goto LAB_100321cdb;
                if (fVar9 != 0.0)
                    goto LAB_100321cca;
            }
        LAB_100321cba:
            fVar7 = fVar8 - fVar7;
        } else {
            cVar1 = oldscapeAnimCurve->field_4;
            if (1 < (uint8_t)(cVar1 - 2U)) {
                if (cVar1 == '\x01') {
                    iVar2 = oldscapeAnimCurve->GetNumKeys();
                    psVar3 = (shared_ptr<OldscapeAnimKey>*)(*uint8_t)[(long)(iVar2 - 1)];
                    (*psVar3).operator->();
                    iVar2 = oldscapeAnimCurve->GetNumKeys();
                    psVar3 = (shared_ptr<OldscapeAnimKey>*)(*uint8_t)[(long)(iVar2 - 1)];
                    (*psVar3).operator->();
                    iVar2 = oldscapeAnimCurve->GetNumKeys();
                    psVar3 = (shared_ptr<OldscapeAnimKey>*)(*uint8_t)[(long)(iVar2 - 1)];
                    (*psVar3).operator->();
                    return;
                }
                if (cVar1 != '\x04')
                    goto LAB_100321cdb;
                if (fVar9 != 0.0)
                    goto LAB_100321cba;
            }
        LAB_100321cca:
            fVar7 = fVar7 + fVar5;
        }
    LAB_100321cdb:
        SampleCurve(oldscapeAnimCurve, fVar7);
        if (arg3) {
            if (oldscapeAnimCurve->field_3 == '\x03') {
                iVar2 = oldscapeAnimCurve->GetNumKeys();
                psVar3 = (shared_ptr<OldscapeAnimKey>*)(*uint8_t)[(long)(iVar2 - 1)];
                (*psVar3).operator->();
                psVar3 = (shared_ptr<OldscapeAnimKey>*)(*uint8_t)[0];
                (*psVar3).operator->();
            }
        } else if (oldscapeAnimCurve->field_4 == '\x03') {
            iVar2 = oldscapeAnimCurve->GetNumKeys();
            psVar3 = (shared_ptr<OldscapeAnimKey>*)(*uint8_t)[(long)(iVar2 - 1)];
            (*psVar3).operator->();
            psVar3 = (shared_ptr<OldscapeAnimKey>*)(*uint8_t)[0];
            (*psVar3).operator->();
        }
    }

    // 0x100321ef0
    void OldscapeAnimCurveSampler::BezierCreate(OldscapeAnimCurve* oldscapeAnimCurve, float* arg2, float* arg3) {
        float arg2_00;
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;

        if (oldscapeAnimCurve != nullptr) {
            fVar3 = *arg2;
            fVar1 = arg2[3] - fVar3;
            if (fVar1 != 0.0) {
                fVar4 = (arg2[1] - fVar3) * (1.0 / fVar1);
                fVar2 = (1.0 / fVar1) * (arg2[2] - fVar3);
                oldscapeAnimCurve->field_32 = fVar2 == 0.6666667f && fVar4 == 0.33333334f;
                fVar3 = 0.0;
                if (0.0 <= fVar4) {
                    fVar3 = fVar4;
                }
                arg2_00 = fVar2;
                if (1.0 <= fVar2) {
                    arg2_00 = 1.0;
                }
                if ((1.0 < fVar3) || (arg2_00 < -1.0)) {
                    EnsureMonotonic(fVar3, arg2_00);
                }
                if ((fVar3 != fVar4) && (arg2[1] = fVar3 * fVar1 + *arg2, fVar4 != 0.0)) {
                    arg3[1] = ((arg3[1] - *arg3) * fVar3) / fVar4 + *arg3;
                }
                if ((arg2_00 != fVar2) && (arg2[2] = fVar1 * arg2_00 + *arg2, fVar2 != 1.0)) {
                    arg3[2] = ((arg2_00 - 1.0) * (arg3[3] - arg3[2])) / (1.0 - fVar2) + arg3[3];
                }
                *(float*)&oldscapeAnimCurve->field_36 = *arg2;
                *(float*)&oldscapeAnimCurve->field_40 = arg2[3];
                BezierToPower(0.0, fVar3, arg2_00, 1.0, (array<float, _4ul>*)&oldscapeAnimCurve->field_44);
                BezierToPower(*arg3, arg3[1], arg3[2], arg3[3], (array<float, _4ul>*)&oldscapeAnimCurve->field_60);
            }
        }
    }

    // 0x1003220d0
    void OldscapeAnimCurveSampler::HermiteCreate(OldscapeAnimCurve* oldscapeAnimCurve, float* arg2, float* arg3) {
        float* pfVar1;
        uint8_t* uint8_t;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;

        if (oldscapeAnimCurve != nullptr) {
            *(float*)&oldscapeAnimCurve->field_36 = *arg2;
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
            uint8_t = &oldscapeAnimCurve->field_44;
            pfVar1 = (float*)(*uint8_t)[0];
            *pfVar1 = (((fVar7 * fVar2 + fVar3) - (fVar5 + fVar5)) * fVar4) / fVar2;
            pfVar1 = (float*)(*uint8_t)[1];
            *pfVar1 = ((fVar5 * 3.0 - (fVar3 + fVar3)) - fVar7 * fVar2) * fVar4;
            pfVar1 = (float*)(*uint8_t)[2];
            *pfVar1 = fVar6;
            fVar2 = *arg3;
            pfVar1 = (float*)(*uint8_t)[3];
            *pfVar1 = fVar2;
        }
    }

    // 0x100322240
    float OldscapeAnimCurveSampler::SampleBezier(const OldscapeAnimCurve* oldscapeAnimCurve, float arg2) {
        uint32_t* puVar2;
        float* pfVar3;
        uint8_t* puVar5;
        array<float, 4ul> local_48;
        array<float, _4ul> local_38;
        float local_24;

        if (oldscapeAnimCurve == nullptr) {
            return 0.0;
        }
        float fVar1 = *(float*)&oldscapeAnimCurve->field_36;
        float local_28 = 0.0;
        if (arg2 != fVar1) {
            if (arg2 == *(float*)&oldscapeAnimCurve->field_40) {
                local_28 = 1.0;
            } else {
                local_28 = (arg2 - fVar1) / (*(float*)&oldscapeAnimCurve->field_40 - fVar1);
            }
        }
        if (oldscapeAnimCurve->field_32 == '\0') {
            puVar5 = &oldscapeAnimCurve->field_44;
            puVar2 = (uint32_t*)(*puVar5)[3];
            local_24 = (float)*puVar2;
            puVar2 = &local_48[3];
            *puVar2 = local_24;
            puVar2 = (uint32_t*)(*puVar5)[2];
            local_24 = (float)*puVar2;
            puVar2 = &local_48[2];
            *puVar2 = local_24;
            puVar2 = (uint32_t*)(*puVar5)[1];
            local_24 = (float)*puVar2;
            puVar2 = &local_48[1];
            *puVar2 = local_24;
            pfVar3 = (float*)(*puVar5)[0];
            local_24 = *pfVar3 - local_28;
            pfVar3 = &local_48[0];
            *pfVar3 = local_24;
            local_28 = 0.0;
            if (jag::math::polynomial::FindPolynomialRoots(local_38, local_48, 3, 0.0, true, 1.0, true) == 1) {
                pfVar3 = &local_38[0];
                local_28 = *pfVar3;
            }
        }
        puVar5 = &oldscapeAnimCurve->field_60;
        pfVar3 = (float*)(*puVar5)[3];
        local_24 = *pfVar3 * local_28;
        pfVar3 = (float*)(*puVar5)[2];
        local_24 = (local_24 + *pfVar3) * local_28;
        pfVar3 = (float*)(*puVar5)[1];
        local_24 = (local_24 + *pfVar3) * local_28;
        pfVar3 = (float*)(*puVar5)[0];
        return local_24 + *pfVar3;
    }

    // 0x100322420
    float OldscapeAnimCurveSampler::SampleHermite(const OldscapeAnimCurve* oldscapeAnimCurve, float arg2) {
        if (oldscapeAnimCurve == nullptr) {
            return 0.0;
        }
        float fVar5 = arg2 - *(float*)&oldscapeAnimCurve->field_36;
        uint8_t* uint8_t = &oldscapeAnimCurve->field_44;
        float* pfVar4 = (float*)(*uint8_t)[0];
        float fVar1 = *pfVar4;
        pfVar4 = (float*)(*uint8_t)[1];
        float fVar2 = *pfVar4;
        pfVar4 = (float*)(*uint8_t)[2];
        float fVar3 = *pfVar4;
        pfVar4 = (float*)(*uint8_t)[3];
        return ((fVar1 * fVar5 + fVar2) * fVar5 + fVar3) * fVar5 + *pfVar4;
    }

    // 0x1003224f0
    void OldscapeAnimCurveSampler::EnsureMonotonic(float arg1, float arg2) {
        float local_c = 1.0 - arg2;
        float local_10 = arg1;
        if (arg1 < 0.0) {
            local_10 = 0.0;
        }
        if (local_c < 0.0) {
            local_c = 0.0;
        }
        if (((1.0 < local_10) || (1.0 < local_c)) &&
            (0.0 < (local_10 - 2.0 + local_c) * local_10 + 1.0 + (local_c - 2.0) * local_c + 1.1920929e-07)) {
            ConstrainInsideBounds(&local_10, &local_c);
        }
    }

    // 0x1003225c0
    void OldscapeAnimCurveSampler::BezierToPower(float arg1, float arg2, float arg3, float arg4,
                                                 std::array<float, 4ul>& arg5) {
        float fVar2 = (arg3 - arg2) - (arg2 - arg1);
        float* pfVar1 = &arg5[3];
        *pfVar1 = arg4 - ((arg3 - arg2) + arg3 + fVar2);
        pfVar1 = &arg5[2];
        *pfVar1 = fVar2 * 3.0;
        pfVar1 = &arg5[1];
        *pfVar1 = (arg2 - arg1) * 3.0;
        pfVar1 = &arg5[0];
        *pfVar1 = arg1;
    }

    // 0x100322680
    void OldscapeAnimCurveSampler::ConstrainInsideBounds(float& arg1, float& arg2) {
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

} // namespace jag::oldscape::graphics::animation

// 0x1003224d0
unsigned long abs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}

// 0x1003224e0
double abs(double arg1) {
    return ABS(arg1);
}

// 0x100322740
void sqrt(float arg1) {
    unsigned int in_XMM0_Db;
    uint32_t in_XMM0_Dc;
    uint32_t in_XMM0_Dd;
    uint8_t in_XMM1[16];
    uint8_t auVar1[16];

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = arg1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    float fVar2 = arg1 * auVar1._0_4_;
    return (((uint64_t)(~(in_XMM0_Db & 2147483647) & in_XMM0_Db) << 32) |
            (uint32_t)(~-(unsigned int)(ABS(arg1) < 1.1754944e-38) &
                       (unsigned int)((fVar2 * auVar1._0_4_ - 3.0) * fVar2 * -0.5)));
}
