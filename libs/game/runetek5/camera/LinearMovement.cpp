// libs/game/runetek5/camera/LinearMovement.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "LinearMovement.h"

namespace jag::game {
    // 0x100d43288, 8 bytes, __const
    double LinearMovement::velocityLerp = 0.8;

    // 0x100d43290, 224 bytes, __const
    LinearMovement::ACCELERATION_INFINITE = {
        2139095040, 1157619712, 1122369536, 1058013184, 0,          1079820288,  0,          1086849024,
        1610612736, 1075388923, 1,          1,          0,          0,           1,          1,
        1161527296, 1067030938, 1051361018, 1166016512, 918651461,  0,           0,          0,
        0,          -1,         -1,         -1,         1610612736, -1062969552, 1045220557, 1036831949,
        158966641,  1074434895, 1087722837, 1233125376, 952700891,  0,           0,          0,
        2004318207, -1,         -16776961,  2004318071, -1,         255,         255,        -2139029600,
        -864598785, -154,       -1144577,   -205,       858993663,  0,           -864598785, -154,
    };

    // 0x10061f670, 448 bytes, placed by class name and debug map
    // LinearMovement::LinearMovementUpdateWorldSpace(float, math::Vector3T<double>&, math::Vector3T<double> const&, math::Vector3T<double>&, math::Vector3T<double> const&, math::Vector3T<double> const&, int, double, int, int)
    void LinearMovement::LinearMovementUpdateWorldSpace(float param_1, Vector3T* param_2, Vector3T* param_3,
                                                        Vector3T* param_4, Vector3T* param_5, Vector3T* param_6,
                                                        int param_7, double param_8, int param_9, int param_10) {
        double dVar1;
        Vector3T* pVVar2;
        double* pdVar4;
        Vector3T* this_00;
        LinearMovement local_d0;
        undefined1 local_b8[24];
        undefined1 local_a0[24];
        undefined8 local_88;
        undefined8 uStack_80;
        undefined8 local_78;
        Vector3T* local_48;
        double local_40;

        local_48 = param_4;
        if (math::operator==(param_2, (Vector3T*)this)) {
            return;
        }
        math::operator-((math*)local_a0, param_2, (Vector3T*)this);
        local_40 = (double)local_a0->Length();
        pVVar2 = local_48;
        pdVar4 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)local_48, 0);
        if ((*pdVar4 == INFINITY) || ((0 < param_7 && ((double)param_7 < local_40)))) {
            math::Vector3T<double>::operator=((Vector3T<double>*)this, param_2);
            this_00 = param_3;
        } else {
            local_78 = *(undefined8*)(pVVar2 + 16);
            local_88 = *(undefined8*)pVVar2;
            uStack_80 = *(undefined8*)(pVVar2 + 8);
            if (0 < (int)param_6) {
                math::Vector3T<double>::operator*=((Vector3T<double>*)&local_88,
                                                   (param_8 * local_40) / (double)(int)param_6);
            }
            this_00 = param_3;
            GetDesiredVelocity(&local_d0, param_1, param_3, pVVar2, param_5, (Vector3T*)local_a0);
            math::Lerp<math::Vector3T<double>, double>(this_00, this_00, (Vector3T*)&local_d0, 0.8);
            if (((double)param_9 <= local_40) ||
                (local_48 = (Vector3T*)(double)param_9, dVar1 = (double)this_00->Length(), (double)local_48 <= dVar1)) {
                math::operator*((math*)local_b8, this_00, param_1);
                math::Vector3T<double>::operator=((Vector3T<double>*)local_a0, (Vector3T*)local_b8);
                math::Vector3T<double>::operator+=((Vector3T<double>*)(LinearMovement*)this, (Vector3T*)local_a0);
                return;
            }
            math::Vector3T<double>::operator=((Vector3T<double>*)(LinearMovement*)this, param_2);
        }
        this_00->SetToZero();
    }

    // 0x10061f830, 720 bytes, placed by class name and debug map
    // LinearMovement::GetDesiredVelocity(float, math::Vector3T<double> const&, math::Vector3T<double> const&, math::Vector3T<double> const&, math::Vector3T<double> const&)
    LinearMovement* LinearMovement::GetDesiredVelocity(float param_1, Vector3T* param_2, Vector3T* param_3,
                                                       Vector3T* param_4, Vector3T* param_5) {
        double dVar1;
        double* pdVar2;
        undefined4* puVar3;
        undefined8* puVar4;
        uint uVar5;
        undefined4 uVar6;
        uint uVar7;
        uint uVar8;
        undefined1 local_a8[24];
        undefined1 local_90[48];
        double local_58;
        double local_50;
        undefined8 local_48;
        long lStack_40;

        local_48 = (double)CONCAT44(local_48._4_4_, param_1);
        field_16 = *(double*)(param_2 + 16);
        dVar1 = *(double*)(param_2 + 8);
        field_0 = *(double*)param_2;
        field_8 = dVar1;
        math::operator*((math*)(local_90 + 24), param_2, param_2);
        math::operator*((math*)local_a8, 2.0, param_3);
        math::operator/((math*)local_90, (Vector3T*)(local_90 + 24), (Vector3T*)local_a8);
        local_58 = (double)(float)local_48;
        uVar5 = 0;
        do {
            pdVar2 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)local_90, uVar5);
            local_48 = *pdVar2;
            pdVar2 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)param_5, uVar5);
            if (local_48 <= ABS(*pdVar2)) {
                pdVar2 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)param_2, uVar5);
                local_48 = ABS(*pdVar2);
                lStack_40 = 0;
                pdVar2 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)param_4, uVar5);
                if (local_48 < *pdVar2) {
                    pdVar2 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)param_5, uVar5);
                    local_48 = *pdVar2;
                    pdVar2 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)param_3, uVar5);
                    local_50 = *pdVar2 * local_58;
                    pdVar2 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)this, uVar5);
                    if (0.0 <= local_48) {
                        *pdVar2 = *pdVar2 + local_50;
                        pdVar2 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)this, uVar5);
                        local_48 = *pdVar2;
                        pdVar2 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)param_4, uVar5);
                        if (*pdVar2 <= local_48 && local_48 != *pdVar2) {
                            puVar4 = (undefined8*)math::Vector3T<double>::operator[]((Vector3T<double>*)param_4, uVar5);
                            uVar6 = (undefined4)*puVar4;
                            uVar7 = (uint)((ulong)*puVar4 >> 32);
                            uVar8 = 0;
                            goto LAB_10061f8b0;
                        }
                    } else {
                        *pdVar2 = *pdVar2 - local_50;
                        pdVar2 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)this, uVar5);
                        local_48 = *pdVar2;
                        pdVar2 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)param_4, uVar5);
                        if (local_48 < -*pdVar2) {
                            puVar3 = (undefined4*)math::Vector3T<double>::operator[]((Vector3T<double>*)param_4, uVar5);
                            uVar6 = *puVar3;
                            uVar8 = 2147483648;
                            uVar7 = puVar3[1] ^ 2147483648;
                            goto LAB_10061f8b0;
                        }
                    }
                }
            } else {
                pdVar2 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)param_5, uVar5);
                local_48 = *pdVar2;
                pdVar2 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)param_3, uVar5);
                local_50 = *pdVar2 * local_58;
                pdVar2 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)this, uVar5);
                if (0.0 <= local_48) {
                    *pdVar2 = *pdVar2 - local_50;
                    pdVar2 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)this, uVar5);
                    uVar6 = 0;
                    uVar7 = 0;
                    uVar8 = 0;
                    if (*pdVar2 <= 0.0 && *pdVar2 != 0.0)
                        goto LAB_10061f8b0;
                } else {
                    *pdVar2 = *pdVar2 + local_50;
                    pdVar2 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)this, uVar5);
                    uVar6 = 0;
                    uVar7 = 0;
                    uVar8 = 0;
                    if (0.0 < *pdVar2) {
                    LAB_10061f8b0:
                        local_48 = (double)CONCAT44(uVar7, uVar6);
                        lStack_40 = (ulong)uVar8 << 32;
                        pdVar2 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)this, uVar5);
                        *pdVar2 = local_48;
                    }
                }
            }
            uVar5 = uVar5 + 1;
            if (uVar5 == 3) {
                return this;
            }
        } while (true);
    }

    // 0x10061fb70, 464 bytes, placed by class name and debug map
    // LinearMovement::LinearMovementUpdateCameraSpace(float, math::Vector3T<double>&, math::QuaternionT<double> const&, math::Vector3T<double> const&, math::Vector3T<double>&, math::Vector3T<double> const&, math::Vector3T<double> const&, int, double, int, int)
    void LinearMovement::LinearMovementUpdateCameraSpace(float param_1, Vector3T* param_2, QuaternionT* param_3,
                                                         Vector3T* param_4, Vector3T* param_5, Vector3T* param_6,
                                                         Vector3T* param_7, int param_8, double param_9, int param_10,
                                                         int param_11) {
        LinearMovement* this_00;
        Vector3T* pVVar1;
        double* pdVar3;
        QuaternionT<double> local_108[32];
        undefined1 local_e8[48];
        undefined1 local_b8[24];
        undefined1 local_a0[24];
        undefined8 local_88;
        undefined8 uStack_80;
        undefined8 local_78;
        double local_58;

        if (!math::operator==((Vector3T*)param_3, (Vector3T*)this)) {
            math::operator-((math*)local_a0, (Vector3T*)param_3, (Vector3T*)this);
            math::Vector3T<double>::operator*=((Vector3T<double>*)local_a0, (QuaternionT*)param_2);
            local_58 = (double)local_a0->Length();
            pVVar1 = param_5;
            pdVar3 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)param_5, 0);
            if (((*pdVar3 == INFINITY) || (0 < param_8 && (double)param_8 < local_58)) ||
                (local_58 < (double)param_10)) {
                math::Vector3T<double>::operator=((Vector3T<double>*)(LinearMovement*)this, (Vector3T*)param_3);
                param_4->SetToZero();
            } else {
                local_78 = *(undefined8*)(pVVar1 + 16);
                local_88 = *(undefined8*)pVVar1;
                uStack_80 = *(undefined8*)(pVVar1 + 8);
                if (0 < (int)param_7) {
                    math::Vector3T<double>::operator*=((Vector3T<double>*)&local_88,
                                                       (local_58 * param_9) / (double)(int)param_7);
                }
                pVVar1 = param_4;
                math::operator*((math*)local_e8, param_4, (QuaternionT*)param_2);
                this_00 = (LinearMovement*)(local_e8 + 24);
                GetDesiredVelocity(this_00, param_1, (Vector3T*)local_e8, (Vector3T*)&local_88, param_6,
                                   (Vector3T*)local_a0);
                local_108->Conjugate();
                math::Vector3T<double>::operator*=((Vector3T<double>*)this_00, (QuaternionT*)local_108);
                math::Lerp<math::Vector3T<double>, double>(pVVar1, pVVar1, (Vector3T*)this_00, 0.8);
                math::operator*((math*)local_b8, pVVar1, param_1);
                math::Vector3T<double>::operator=((Vector3T<double>*)local_a0, (Vector3T*)local_b8);
                math::Vector3T<double>::operator+=((Vector3T<double>*)(LinearMovement*)this, (Vector3T*)local_a0);
            }
        }
    }

    // 0x10061fd80, 608 bytes, placed by class name and debug map
    // LinearMovement::LinearSpringMovementUpdateCameraSpace(float, math::Vector3T<double>&, math::QuaternionT<double> const&, math::Vector3T<double> const&, math::Vector3T<double>&, math::Vector3T<double> const&, double, int, int)
    void LinearMovement::LinearSpringMovementUpdateCameraSpace(float param_1, Vector3T* param_2, QuaternionT* param_3,
                                                               Vector3T* param_4, Vector3T* param_5, Vector3T* param_6,
                                                               double param_7, int param_8, int param_9) {
        double* pdVar2;
        Vector3T* this;
        double dVar3;
        undefined1 local_f0[24];
        undefined1 local_d8[24];
        undefined1 local_c0[32];
        undefined1 local_a0[56];
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        double local_48;
        Vector3T* local_40;
        double local_38;

        local_40 = (Vector3T*)CONCAT44(local_40._4_4_, param_8);
        local_38 = (double)CONCAT44(local_38._4_4_, param_1);
        local_a0._48_8_ = param_7;
        if (!math::operator==(param_4, param_2)) {
            math::operator-((math*)local_a0, param_4, param_2);
            math::Vector3T<double>::operator*=((Vector3T<double>*)local_a0, param_3);
            local_48 = (double)local_a0->Length();
            pdVar2 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)param_6, 0);
            this = param_5;
            if (((*pdVar2 == INFINITY) || (0 < (int)local_40 && (double)(int)local_40 < local_48)) ||
                (local_48 < (double)param_9)) {
                math::Vector3T<double>::operator=((Vector3T<double>*)param_2, param_4);
                this = param_5;
            } else {
                local_40 = param_4;
                math::operator*((math*)(local_a0 + 24), param_5, param_3);
                math::operator*((math*)(local_a0 + 56), param_6, local_38._0_4_);
                math::operator/((math*)local_c0, (Vector3T*)(local_a0 + 56), 0.02);
                math::operator*((math*)local_f0, (Vector3T*)local_c0, (Vector3T*)local_a0);
                local_58 = local_a0._40_8_;
                local_68 = local_a0._24_8_;
                uStack_60 = local_a0._32_8_;
                math::operator*((math*)local_c0, (Vector3T*)local_f0, local_38._0_4_);
                math::Vector3T<double>::operator+=((Vector3T<double>*)(local_a0 + 56), (Vector3T*)local_c0);
                if (1.0 < (double)local_a0._48_8_) {
                    dVar3 = (double)local_38._0_4_ * 50.0 * SQRT((double)local_a0._48_8_ + -1.0);
                    math::Vector3T<double>::operator/=((Vector3T<double>*)(local_a0 + 56), dVar3 * dVar3 + 1.0);
                }
                local_c0->Conjugate();
                math::Vector3T<double>::operator*=((Vector3T<double>*)(local_a0 + 56), (QuaternionT*)local_c0);
                math::Vector3T<double>::operator=((Vector3T<double>*)this, (Vector3T*)(local_a0 + 56));
                math::operator*((math*)local_d8, this, local_38._0_4_);
                local_38 = (double)local_d8->Length();
                dVar3 = (double)local_a0->Length();
                if (local_38 <= dVar3) {
                    math::Vector3T<double>::operator+=((Vector3T<double>*)param_2, (Vector3T*)local_d8);
                    return;
                }
                math::Vector3T<double>::operator=((Vector3T<double>*)param_2, local_40);
            }
            SetToZero();
        }
    }

} // namespace jag::game

namespace jag::math {
    // 0x10061fb00, 112 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<double>& Lerp<Vector3T<double>, double>(Vector3T<double>&, Vector3T<double> const&, Vector3T<double> const&, double)
    Vector3T* Lerp<Vector3T<double>, double>(Vector3T* param_1, Vector3T* param_2, Vector3T* param_3, double param_4) {
        undefined1 local_78[24];
        undefined1 local_60[24];
        undefined1 local_48[24];

        operator-((math*)local_48, param_3, param_2);
        operator*((math*)local_60, param_4, (Vector3T*)local_48);
        operator+((math*)local_78, param_2, (Vector3T*)local_60);
        param_1->Set(local_78);
        return param_1;
    }

    // 0x10061ffe0, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<double> operator*<double>(Vector3T<double> const&, Vector3T<double> const&)
    /* Vector3T<double> TEMPNAMEPLACEHOLDERVALUE(Vector3T<double>
   const&, Vector3T<double> const&) */

    math* operator*(Vector3T* param_1, Vector3T* param_2) {
        new (this)
            Vector3T<double>(*(double*)param_2 * *(double*)param_1, *(double*)(param_2 + 8) * *(double*)(param_1 + 8),
                             *(double*)(param_2 + 16) * *(double*)(param_1 + 16));
        return this;
    }

    // 0x100620020, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<double> operator/<double>(Vector3T<double> const&, double)
    /* Vector3T<double> TEMPNAMEPLACEHOLDERVALUE(Vector3T<double>
   const&, double) */

    math* operator/(Vector3T* param_1, double param_2) {
        double dVar1;

        dVar1 = 1.0 / param_2;
        new (this) Vector3T<double>(*(double*)param_1 * dVar1, *(double*)(param_1 + 8) * dVar1,
                                    dVar1 * *(double*)(param_1 + 16));
        return this;
    }

    // 0x1006200a0, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<double> operator/<double>(Vector3T<double> const&, Vector3T<double> const&)
    /* Vector3T<double> TEMPNAMEPLACEHOLDERVALUE(Vector3T<double>
   const&, Vector3T<double> const&) */

    math* operator/(Vector3T* param_1, Vector3T* param_2) {
        new (this)
            Vector3T<double>(*(double*)param_1 / *(double*)param_2, *(double*)(param_1 + 8) / *(double*)(param_2 + 8),
                             *(double*)(param_1 + 16) / *(double*)(param_2 + 16));
        return this;
    }

} // namespace jag::math
