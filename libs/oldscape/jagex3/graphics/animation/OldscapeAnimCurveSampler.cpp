// libs/oldscape/jagex3/graphics/animation/OldscapeAnimCurveSampler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

namespace jag::oldscape::graphics::animation {
    class OldscapeAnimCurveSampler {
    public:
        void SampleCurve(OldscapeAnimCurve*, int);
        void SampleCurve(OldscapeAnimCurve*, float);
        void SampleInfinities(OldscapeAnimCurve*, float, bool);
        void BezierCreate(OldscapeAnimCurve*, float*, float*);
        void HermiteCreate(OldscapeAnimCurve*, float*, float*);
        float SampleBezier(OldscapeAnimCurve const*, float);
        float SampleHermite(OldscapeAnimCurve const*, float);
        void EnsureMonotonic(float, float);
        void BezierToPower(float, float, float, float, std::array<float, 4ul>&);
        void ConstrainInsideBounds(float&, float&);
    };

    // 0x100321410, 16 bytes, placed by class name and debug map
    // OldscapeAnimCurveSampler::SampleCurve(OldscapeAnimCurve*, int)
    void OldscapeAnimCurveSampler::SampleCurve(OldscapeAnimCurve* param_1, int param_2) {
        SampleCurve(param_1, (float)param_2);
    }

    // 0x100321760, 976 bytes, placed by class name and debug map
    // OldscapeAnimCurveSampler::SampleCurve(OldscapeAnimCurve*, float)
    void OldscapeAnimCurveSampler::SampleCurve(OldscapeAnimCurve* param_1, float param_2) {
        undefined1* this;
        bool bVar1;
        bool bVar2;
        int iVar3;
        shared_ptr<OldscapeAnimKey>* psVar4;
        long lVar5;
        shared_ptr* psVar6;
        ulong uVar7;
        float fVar8;
        shared_ptr<OldscapeAnimKey> local_60[20];
        float local_4c;
        float local_48;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;
        float local_30;
        float local_2c;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        fVar8 = 0.0;
        local_4c = param_2;
        if (param_1 == (OldscapeAnimCurve*)0)
            goto LAB_100321850;
        iVar3 = param_1->GetNumKeys();
        fVar8 = 0.0;
        if (iVar3 == 0)
            goto LAB_100321850;
        this = &param_1->field_8;
        psVar4 = (shared_ptr<OldscapeAnimKey>*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
            (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)this, 0);
        lVar5 = shared_ptr<OldscapeAnimKey>::operator->(psVar4);
        if ((float)*(int*)(lVar5 + 16) <= local_4c) {
            iVar3 = param_1->GetNumKeys();
            psVar4 = (shared_ptr<OldscapeAnimKey>*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
                (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)this, (long)(iVar3 + -1));
            lVar5 = shared_ptr<OldscapeAnimKey>::operator->(psVar4);
            if (local_4c <= (float)*(int*)(lVar5 + 16)) {
                if (param_1->field_2 != '\0')
                    goto LAB_100321826;
                local_60->GetKeyAtTime(local_4c);
                bVar2 = operator!=((shared_ptr*)local_60, (_func_decltype_nullptr*)0);
                fVar8 = 0.0;
                if (bVar2) {
                    lVar5 = shared_ptr<OldscapeAnimKey>::operator->(local_60);
                    if (*(float*)(lVar5 + 32) == 0.0) {
                        lVar5 = shared_ptr<OldscapeAnimKey>::operator->(local_60);
                        if (*(float*)(lVar5 + 36) != 0.0)
                            goto LAB_1003218be;
                    LAB_100321a42:
                        bVar2 = true;
                    LAB_100321a5d:
                        bVar1 = false;
                    } else {
                    LAB_1003218be:
                        lVar5 = shared_ptr<OldscapeAnimKey>::operator->(local_60);
                        if (*(float*)(lVar5 + 32) != 3.4028235e+38) {
                        LAB_1003218f5:
                            psVar6 = (shared_ptr*)shared_ptr<OldscapeAnimKey>::operator->(local_60);
                            bVar2 = operator!=(psVar6, (_func_decltype_nullptr*)0);
                            if (!bVar2)
                                goto LAB_100321a42;
                            if (param_1->field_76 != '\0') {
                                lVar5 = shared_ptr<OldscapeAnimKey>::operator->(local_60);
                                iVar3 = *(int*)(lVar5 + 16);
                                local_38 = (float)iVar3;
                                lVar5 = shared_ptr<OldscapeAnimKey>::operator->(local_60);
                                fVar8 = *(float*)(lVar5 + 20);
                                local_48 = fVar8;
                                lVar5 = shared_ptr<OldscapeAnimKey>::operator->(local_60);
                                local_34 = *(float*)(lVar5 + 32) * 0.33333334 + (float)iVar3;
                                lVar5 = shared_ptr<OldscapeAnimKey>::operator->(local_60);
                                local_44 = *(float*)(lVar5 + 36) * 0.33333334 + fVar8;
                                psVar4 =
                                    (shared_ptr<OldscapeAnimKey>*)shared_ptr<OldscapeAnimKey>::operator->(local_60);
                                lVar5 = shared_ptr<OldscapeAnimKey>::operator->(psVar4);
                                iVar3 = *(int*)(lVar5 + 16);
                                local_2c = (float)iVar3;
                                psVar4 =
                                    (shared_ptr<OldscapeAnimKey>*)shared_ptr<OldscapeAnimKey>::operator->(local_60);
                                lVar5 = shared_ptr<OldscapeAnimKey>::operator->(psVar4);
                                fVar8 = *(float*)(lVar5 + 20);
                                local_3c = fVar8;
                                psVar4 =
                                    (shared_ptr<OldscapeAnimKey>*)shared_ptr<OldscapeAnimKey>::operator->(local_60);
                                lVar5 = shared_ptr<OldscapeAnimKey>::operator->(psVar4);
                                local_30 = (float)iVar3 + *(float*)(lVar5 + 24) * -0.33333334;
                                psVar4 =
                                    (shared_ptr<OldscapeAnimKey>*)shared_ptr<OldscapeAnimKey>::operator->(local_60);
                                lVar5 = shared_ptr<OldscapeAnimKey>::operator->(psVar4);
                                local_40 = fVar8 + *(float*)(lVar5 + 28) * -0.33333334;
                                if (param_1->field_1 == '\0') {
                                    HermiteCreate(param_1, &local_38, &local_48);
                                } else {
                                    BezierCreate(param_1, &local_38, &local_48);
                                }
                                param_1->field_76 = 0;
                            }
                            bVar2 = false;
                            goto LAB_100321a5d;
                        }
                        lVar5 = shared_ptr<OldscapeAnimKey>::operator->(local_60);
                        if (*(float*)(lVar5 + 36) != 3.4028235e+38)
                            goto LAB_1003218f5;
                        bVar1 = true;
                        bVar2 = false;
                    }
                    if (bVar2) {
                        lVar5 = shared_ptr<OldscapeAnimKey>::operator->(local_60);
                    } else {
                        if (!bVar1) {
                            if (param_1->field_1 == '\0') {
                                fVar8 = (float)SampleHermite(param_1, local_4c);
                            } else {
                                fVar8 = (float)SampleBezier(param_1, local_4c);
                            }
                            goto LAB_100321aae;
                        }
                        lVar5 = shared_ptr<OldscapeAnimKey>::operator->(local_60);
                        if ((float)*(int*)(lVar5 + 16) != local_4c) {
                            psVar6 = (shared_ptr*)shared_ptr<OldscapeAnimKey>::operator->(local_60);
                            bVar2 = operator==(psVar6, (_func_decltype_nullptr*)0);
                            if (!bVar2) {
                                psVar4 =
                                    (shared_ptr<OldscapeAnimKey>*)shared_ptr<OldscapeAnimKey>::operator->(local_60);
                                lVar5 = shared_ptr<OldscapeAnimKey>::operator->(psVar4);
                                goto LAB_100321aa9;
                            }
                        }
                        lVar5 = shared_ptr<OldscapeAnimKey>::operator->(local_60);
                    }
                LAB_100321aa9:
                    fVar8 = *(float*)(lVar5 + 20);
                }
            LAB_100321aae:
                local_4c = fVar8;
                local_60->~shared_ptr();
                fVar8 = local_4c;
                goto LAB_100321850;
            }
            if (param_1->field_4 == '\0') {
                iVar3 = param_1->GetNumKeys();
                uVar7 = (ulong)(iVar3 + -1);
                goto LAB_10032183e;
            }
            bVar2 = false;
        } else {
            if (param_1->field_3 == '\0') {
            LAB_100321826:
                uVar7 = 0;
            LAB_10032183e:
                psVar4 = (shared_ptr<OldscapeAnimKey>*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
                    (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)this, uVar7);
                lVar5 = shared_ptr<OldscapeAnimKey>::operator->(psVar4);
                fVar8 = *(float*)(lVar5 + 20);
                goto LAB_100321850;
            }
            bVar2 = true;
        }
        fVar8 = (float)SampleInfinities(param_1, local_4c, bVar2);
    LAB_100321850:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail(fVar8);
        }
    }

    // 0x100321b30, 960 bytes, placed by class name and debug map
    // OldscapeAnimCurveSampler::SampleInfinities(OldscapeAnimCurve*, float, bool)
    void OldscapeAnimCurveSampler::SampleInfinities(OldscapeAnimCurve* param_1, float param_2, bool param_3) {
        undefined1* this;
        char cVar1;
        int iVar2;
        shared_ptr<OldscapeAnimKey>* psVar3;
        long lVar4;
        float fVar5;
        double dVar6;
        float fVar7;
        float fVar8;
        float fVar9;

        if (param_1 == (OldscapeAnimCurve*)0) {
            return;
        }
        iVar2 = param_1->GetNumKeys();
        if (iVar2 == 0) {
            return;
        }
        this = &param_1->field_8;
        psVar3 = (shared_ptr<OldscapeAnimKey>*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
            (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)this, 0);
        lVar4 = shared_ptr<OldscapeAnimKey>::operator->(psVar3);
        fVar5 = (float)*(int*)(lVar4 + 16);
        iVar2 = param_1->GetNumKeys();
        psVar3 = (shared_ptr<OldscapeAnimKey>*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
            (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)this, (long)(iVar2 + -1));
        lVar4 = shared_ptr<OldscapeAnimKey>::operator->(psVar3);
        fVar8 = (float)*(int*)(lVar4 + 16);
        fVar9 = fVar8 - fVar5;
        if (fVar9 == 0.0) {
            psVar3 = (shared_ptr<OldscapeAnimKey>*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
                (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)this, 0);
            shared_ptr<OldscapeAnimKey>::operator->(psVar3);
            return;
        }
        fVar7 = (param_2 - (float)(~-(uint)(fVar8 < param_2) & (uint)fVar5 | -(uint)(fVar8 < param_2) & (uint)fVar8)) /
                fVar9;
        dVar6 = (double)(int)fVar7;
        fVar7 = (float)::abs((float)((double)fVar7 - dVar6));
        fVar7 = fVar7 * fVar9;
        dVar6 = (double)::abs(dVar6 + 1.0);
        fVar9 = (float)(dVar6 * 0.5 - (double)(int)(dVar6 * 0.5));
        if (param_3) {
            cVar1 = param_1->field_3;
            if (1 < (byte)(cVar1 - 2U)) {
                if (cVar1 == '\x01') {
                    psVar3 =
                        (shared_ptr<OldscapeAnimKey>*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
                            (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)this, 0);
                    shared_ptr<OldscapeAnimKey>::operator->(psVar3);
                    psVar3 =
                        (shared_ptr<OldscapeAnimKey>*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
                            (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)this, 0);
                    shared_ptr<OldscapeAnimKey>::operator->(psVar3);
                    psVar3 =
                        (shared_ptr<OldscapeAnimKey>*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
                            (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)this, 0);
                    shared_ptr<OldscapeAnimKey>::operator->(psVar3);
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
            cVar1 = param_1->field_4;
            if (1 < (byte)(cVar1 - 2U)) {
                if (cVar1 == '\x01') {
                    iVar2 = param_1->GetNumKeys();
                    psVar3 =
                        (shared_ptr<OldscapeAnimKey>*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
                            (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)this, (long)(iVar2 + -1));
                    shared_ptr<OldscapeAnimKey>::operator->(psVar3);
                    iVar2 = param_1->GetNumKeys();
                    psVar3 =
                        (shared_ptr<OldscapeAnimKey>*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
                            (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)this, (long)(iVar2 + -1));
                    shared_ptr<OldscapeAnimKey>::operator->(psVar3);
                    iVar2 = param_1->GetNumKeys();
                    psVar3 =
                        (shared_ptr<OldscapeAnimKey>*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
                            (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)this, (long)(iVar2 + -1));
                    shared_ptr<OldscapeAnimKey>::operator->(psVar3);
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
        SampleCurve(param_1, fVar7);
        if (param_3) {
            if (param_1->field_3 == '\x03') {
                iVar2 = param_1->GetNumKeys();
                psVar3 = (shared_ptr<OldscapeAnimKey>*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
                    (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)this, (long)(iVar2 + -1));
                shared_ptr<OldscapeAnimKey>::operator->(psVar3);
                psVar3 = (shared_ptr<OldscapeAnimKey>*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
                    (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)this, 0);
                shared_ptr<OldscapeAnimKey>::operator->(psVar3);
            }
        } else if (param_1->field_4 == '\x03') {
            iVar2 = param_1->GetNumKeys();
            psVar3 = (shared_ptr<OldscapeAnimKey>*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
                (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)this, (long)(iVar2 + -1));
            shared_ptr<OldscapeAnimKey>::operator->(psVar3);
            psVar3 = (shared_ptr<OldscapeAnimKey>*)Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>::operator[](
                (Array<shared_ptr<OldscapeAnimKey>, eastl::allocator>*)this, 0);
            shared_ptr<OldscapeAnimKey>::operator->(psVar3);
        }
    }

    // 0x100321ef0, 480 bytes, placed by class name and debug map
    // OldscapeAnimCurveSampler::BezierCreate(OldscapeAnimCurve*, float*, float*)
    void OldscapeAnimCurveSampler::BezierCreate(OldscapeAnimCurve* param_1, float* param_2, float* param_3) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;

        if (param_1 != (OldscapeAnimCurve*)0) {
            fVar4 = *param_2;
            fVar2 = param_2[3] - fVar4;
            if (fVar2 != 0.0) {
                fVar5 = (param_2[1] - fVar4) * (1.0 / fVar2);
                fVar3 = (1.0 / fVar2) * (param_2[2] - fVar4);
                param_1->field_32 = fVar3 == 0.6666667 && fVar5 == 0.33333334;
                fVar4 = 0.0;
                if (0.0 <= fVar5) {
                    fVar4 = fVar5;
                }
                fVar1 = fVar3;
                if (1.0 <= fVar3) {
                    fVar1 = 1.0;
                }
                if ((1.0 < fVar4) || (fVar1 < -1.0)) {
                    EnsureMonotonic(fVar4, fVar1);
                }
                if ((fVar4 != fVar5) && (param_2[1] = fVar4 * fVar2 + *param_2, fVar5 != 0.0)) {
                    param_3[1] = ((param_3[1] - *param_3) * fVar4) / fVar5 + *param_3;
                }
                if ((fVar1 != fVar3) && (param_2[2] = fVar2 * fVar1 + *param_2, fVar3 != 1.0)) {
                    param_3[2] = ((fVar1 - 1.0) * (param_3[3] - param_3[2])) / (1.0 - fVar3) + param_3[3];
                }
                *(float*)&param_1->field_36 = *param_2;
                *(float*)&param_1->field_40 = param_2[3];
                BezierToPower(0.0, fVar4, fVar1, 1.0, (array*)&param_1->field_44);
                BezierToPower(*param_3, param_3[1], param_3[2], param_3[3], (array*)&param_1->field_60);
            }
        }
    }

    // 0x1003220d0, 368 bytes, placed by class name and debug map
    // OldscapeAnimCurveSampler::HermiteCreate(OldscapeAnimCurve*, float*, float*)
    void OldscapeAnimCurveSampler::HermiteCreate(OldscapeAnimCurve* param_1, float* param_2, float* param_3) {
        float* pfVar1;
        undefined1* this;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;

        if (param_1 != (OldscapeAnimCurve*)0) {
            *(float*)&param_1->field_36 = *param_2;
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
            this = &param_1->field_44;
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

    // 0x100322240, 480 bytes, placed by class name and debug map
    // OldscapeAnimCurveSampler::SampleBezier(OldscapeAnimCurve const*, float)
    float OldscapeAnimCurveSampler::SampleBezier(OldscapeAnimCurve* param_1, float param_2) {
        float fVar1;
        undefined4* puVar2;
        float* pfVar3;
        int iVar4;
        undefined1* puVar5;
        array<float, 4ul> local_48[16];
        array local_38[16];
        float local_28;
        float local_24;

        if (param_1 == (OldscapeAnimCurve*)0) {
            return 0.0;
        }
        fVar1 = *(float*)&param_1->field_36;
        local_28 = 0.0;
        if (param_2 != fVar1) {
            if (param_2 == *(float*)&param_1->field_40) {
                local_28 = 1.0;
            } else {
                local_28 = (param_2 - fVar1) / (*(float*)&param_1->field_40 - fVar1);
            }
        }
        if (param_1->field_32 == '\0') {
            puVar5 = &param_1->field_44;
            puVar2 = (undefined4*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)puVar5, 3);
            local_24 = (float)*puVar2;
            puVar2 = (undefined4*)std::array<float, 4ul>::operator[](local_48, 3);
            *puVar2 = local_24;
            puVar2 = (undefined4*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)puVar5, 2);
            local_24 = (float)*puVar2;
            puVar2 = (undefined4*)std::array<float, 4ul>::operator[](local_48, 2);
            *puVar2 = local_24;
            puVar2 = (undefined4*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)puVar5, 1);
            local_24 = (float)*puVar2;
            puVar2 = (undefined4*)std::array<float, 4ul>::operator[](local_48, 1);
            *puVar2 = local_24;
            pfVar3 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)puVar5, 0);
            local_24 = *pfVar3 - local_28;
            pfVar3 = (float*)std::array<float, 4ul>::operator[](local_48, 0);
            *pfVar3 = local_24;
            local_28 = 0.0;
            iVar4 = jag::math::polynomial::FindPolynomialRoots(local_38, (array*)local_48, 3, 0.0, true, 1.0, true);
            if (iVar4 == 1) {
                pfVar3 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)local_38, 0);
                local_28 = *pfVar3;
            }
        }
        puVar5 = &param_1->field_60;
        pfVar3 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)puVar5, 3);
        local_24 = *pfVar3 * local_28;
        pfVar3 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)puVar5, 2);
        local_24 = (local_24 + *pfVar3) * local_28;
        pfVar3 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)puVar5, 1);
        local_24 = (local_24 + *pfVar3) * local_28;
        pfVar3 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)puVar5, 0);
        return local_24 + *pfVar3;
    }

    // 0x100322420, 160 bytes, placed by class name and debug map
    // OldscapeAnimCurveSampler::SampleHermite(OldscapeAnimCurve const*, float)
    float OldscapeAnimCurveSampler::SampleHermite(OldscapeAnimCurve* param_1, float param_2) {
        float fVar1;
        float fVar2;
        float fVar3;
        float* pfVar4;
        undefined1* this;
        float fVar5;

        if (param_1 == (OldscapeAnimCurve*)0) {
            return 0.0;
        }
        fVar5 = param_2 - *(float*)&param_1->field_36;
        this = &param_1->field_44;
        pfVar4 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)this, 0);
        fVar1 = *pfVar4;
        pfVar4 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)this, 1);
        fVar2 = *pfVar4;
        pfVar4 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)this, 2);
        fVar3 = *pfVar4;
        pfVar4 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)this, 3);
        return ((fVar1 * fVar5 + fVar2) * fVar5 + fVar3) * fVar5 + *pfVar4;
    }

    // 0x1003224f0, 208 bytes, placed by class name and debug map
    // OldscapeAnimCurveSampler::EnsureMonotonic(float, float)
    void OldscapeAnimCurveSampler::EnsureMonotonic(float param_1, float param_2) {
        float local_10;
        float local_c;

        local_c = 1.0 - param_2;
        local_10 = param_1;
        if (param_1 < 0.0) {
            local_10 = 0.0;
        }
        if (local_c < 0.0) {
            local_c = 0.0;
        }
        if (((1.0 < local_10) || (1.0 < local_c)) &&
            (0.0 < (local_10 + -2.0 + local_c) * local_10 + 1.0 + (local_c + -2.0) * local_c + 1.1920929e-07)) {
            ConstrainInsideBounds(&local_10, &local_c);
        }
    }

    // 0x1003225c0, 192 bytes, placed by class name and debug map
    // OldscapeAnimCurveSampler::BezierToPower(float, float, float, float, std::array<float, 4ul>&)
    /* OldscapeAnimCurveSampler::BezierToPower(float, float, float,
   float, std::array<float, 4ul>&) */

    void OldscapeAnimCurveSampler::BezierToPower(float param_1, float param_2, float param_3, float param_4,
                                                 array* param_5) {
        float* pfVar1;
        float fVar2;

        fVar2 = (param_3 - param_2) - (param_2 - param_1);
        pfVar1 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)param_5, 3);
        *pfVar1 = param_4 - ((param_3 - param_2) + param_3 + fVar2);
        pfVar1 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)param_5, 2);
        *pfVar1 = fVar2 * 3.0;
        pfVar1 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)param_5, 1);
        *pfVar1 = (param_2 - param_1) * 3.0;
        pfVar1 = (float*)std::array<float, 4ul>::operator[]((array<float, 4ul>*)param_5, 0);
        *pfVar1 = param_1;
    }

    // 0x100322680, 192 bytes, placed by class name and debug map
    // OldscapeAnimCurveSampler::ConstrainInsideBounds(float&, float&)
    void OldscapeAnimCurveSampler::ConstrainInsideBounds(float* param_1, float* param_2) {
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

} // namespace jag::oldscape::graphics::animation

// 0x1003224d0, 16 bytes, placed by neighbouring functions
// abs(float)
ulong abs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}

// 0x1003224e0, 16 bytes, placed by neighbouring functions
// abs(double)
double abs(double param_1) {
    return ABS(param_1);
}

// 0x100322740, 64 bytes, placed by debug map only (low confidence)
// sqrt(float)
undefined8 sqrt(float param_1) {
    uint in_XMM0_Db;
    undefined4 in_XMM0_Dc;
    undefined4 in_XMM0_Dd;
    undefined1 in_XMM1[16];
    undefined1 auVar1[16];
    float fVar2;

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = param_1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    fVar2 = param_1 * auVar1._0_4_;
    return CONCAT44(~(in_XMM0_Db & 2147483647) & in_XMM0_Db,
                    ~-(uint)(ABS(param_1) < 1.1754944e-38) & (uint)((fVar2 * auVar1._0_4_ + -3.0) * fVar2 * -0.5));
}
