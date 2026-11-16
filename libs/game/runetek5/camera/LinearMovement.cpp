// libs/game/runetek5/camera/LinearMovement.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "LinearMovement.h"

namespace jag::game {
    // 0x100d43288
    double LinearMovement::velocityLerp = 0.8;

    // 0x100d43290
    int32_t LinearMovement::ACCELERATION_INFINITE[56] = {
        2139095040, 1157619712, 1122369536, 1058013184, 0,          1079820288,  0,          1086849024,
        1610612736, 1075388923, 1,          1,          0,          0,           1,          1,
        1161527296, 1067030938, 1051361018, 1166016512, 918651461,  0,           0,          0,
        0,          -1,         -1,         -1,         1610612736, -1062969552, 1045220557, 1036831949,
        158966641,  1074434895, 1087722837, 1233125376, 952700891,  0,           0,          0,
        2004318207, -1,         -16776961,  2004318071, -1,         255,         255,        -2139029600,
        -864598785, -154,       -1144577,   -205,       858993663,  0,           -864598785, -154,
    };

    // 0x10061f670
    void LinearMovement::LinearMovementUpdateWorldSpace(float arg1, math::Vector3T<double>& vector31,
                                                        const math::Vector3T<double>& vector32,
                                                        math::Vector3T<double>& vector33,
                                                        const math::Vector3T<double>& vector34,
                                                        const math::Vector3T<double>& vector35, int arg7, double arg8,
                                                        int arg9, int arg10) {
        void result;
        double dVar1;
        ReturnValue result;
        LinearMovement local_d0;
        Vector3T<double> local_b8;
        Vector3T<double> local_a0;
        uint64_t local_88;
        uint64_t uStack_80;
        uint64_t local_78;

        Vector3T<double>* local_48 = vector33;
        if (vector31 == *this) {
            return;
        }
        local_a0 - vector31;
        double local_40 = (double)local_a0.Length();
        Vector3T<double>* vector32_00 = local_48;
        double* pdVar3 = (double*)(*local_48)[0];
        if ((*pdVar3 == INFINITY) || ((0 < arg7 && ((double)arg7 < local_40)))) {
            *this = vector31;
            &result = (ReturnValue*)vector32;
        } else {
            local_78 = *(uint64_t*)(vector32_00 + 16);
            local_88 = *(uint64_t*)vector32_00;
            uStack_80 = *(uint64_t*)(vector32_00 + 8);
            if (0 < (int)vector35) {
                local_88 *= ((arg8 * local_40) / (double)(int)vector35);
            }
            &result = (ReturnValue*)vector32;
            GetDesiredVelocity(&local_d0, arg1, (Vector3T<double>*)(ReturnValue*)vector32, vector32_00, vector34,
                               &local_a0);
            math::Lerp<math::Vector3T<double>, double>(result, result, local_d0, 0.8);
            if (((double)arg9 <= local_40) || (local_48 = (Vector3T<double>*)(double)arg9,
                                               dVar1 = (double)result.Length(), (double)local_48 <= dVar1)) {
                local_b8** arg1;
                local_a0 = local_b8;
                *this += local_a0;
                return;
            }
            *this = vector31;
        }
        result = math::Vector3T<double>::SetToZero();
    }

    // 0x10061f830
    LinearMovement* LinearMovement::GetDesiredVelocity(float arg1, const math::Vector3T<double>& vector31,
                                                       const math::Vector3T<double>& vector32,
                                                       const math::Vector3T<double>& vector33,
                                                       const math::Vector3T<double>& vector34) {
        double* pdVar2;
        uint32_t* puVar3;
        uint64_t* puVar4;
        uint32_t uVar5;
        unsigned int uVar6;
        unsigned int uVar7;
        Vector3T<double> local_a8;
        Vector3T<double> local_90;
        Vector3T<double> local_78;
        double local_50;
        uint64_t local_48;
        long lStack_40;

        local_48 = (double)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)arg1);
        field_16 = *(double*)(vector31 + 16);
        double dVar1 = *(double*)(vector31 + 8);
        field_0 = *(double*)vector31;
        field_8 = dVar1;
        local_78 vector31;
        local_a8* * 2.0;
        local_90 / local_78;
        double local_58 = (double)(float)local_48;
        unsigned int arg1_00 = 0;
        do {
            pdVar2 = &local_90[arg1_00];
            local_48 = *pdVar2;
            pdVar2 = &vector34[arg1_00];
            if (local_48 <= ABS(*pdVar2)) {
                pdVar2 = &vector31[arg1_00];
                local_48 = ABS(*pdVar2);
                lStack_40 = 0;
                pdVar2 = &vector33[arg1_00];
                if (local_48 < *pdVar2) {
                    pdVar2 = &vector34[arg1_00];
                    local_48 = *pdVar2;
                    pdVar2 = &vector32[arg1_00];
                    local_50 = *pdVar2 * local_58;
                    pdVar2 = (double*)(*this)[arg1_00];
                    if (0.0 <= local_48) {
                        *pdVar2 = *pdVar2 + local_50;
                        pdVar2 = (double*)(*this)[arg1_00];
                        local_48 = *pdVar2;
                        pdVar2 = &vector33[arg1_00];
                        if (*pdVar2 <= local_48 && local_48 != *pdVar2) {
                            puVar4 = &vector33[arg1_00];
                            uVar5 = (uint32_t)*puVar4;
                            uVar6 = (unsigned int)((unsigned long)*puVar4 >> 32);
                            uVar7 = 0;
                            goto LAB_10061f8b0;
                        }
                    } else {
                        *pdVar2 = *pdVar2 - local_50;
                        pdVar2 = (double*)(*this)[arg1_00];
                        local_48 = *pdVar2;
                        pdVar2 = &vector33[arg1_00];
                        if (local_48 < -*pdVar2) {
                            puVar3 = &vector33[arg1_00];
                            uVar5 = *puVar3;
                            uVar7 = 2147483648;
                            uVar6 = puVar3[1] ^ 2147483648;
                            goto LAB_10061f8b0;
                        }
                    }
                }
            } else {
                pdVar2 = &vector34[arg1_00];
                local_48 = *pdVar2;
                pdVar2 = &vector32[arg1_00];
                local_50 = *pdVar2 * local_58;
                pdVar2 = (double*)(*this)[arg1_00];
                if (0.0 <= local_48) {
                    *pdVar2 = *pdVar2 - local_50;
                    pdVar2 = (double*)(*this)[arg1_00];
                    uVar5 = 0;
                    uVar6 = 0;
                    uVar7 = 0;
                    if (*pdVar2 <= 0.0 && *pdVar2 != 0.0)
                        goto LAB_10061f8b0;
                } else {
                    *pdVar2 = *pdVar2 + local_50;
                    pdVar2 = (double*)(*this)[arg1_00];
                    uVar5 = 0;
                    uVar6 = 0;
                    uVar7 = 0;
                    if (0.0 < *pdVar2) {
                    LAB_10061f8b0:
                        local_48 = (double)(((uint64_t)uVar6 << 32) | (uint32_t)uVar5);
                        lStack_40 = (unsigned long)uVar7 << 32;
                        pdVar2 = (double*)(*this)[arg1_00];
                        *pdVar2 = local_48;
                    }
                }
            }
            arg1_00 = arg1_00 + 1;
            if (arg1_00 == 3) {
                return this;
            }
        } while (true);
    }

    // 0x10061fb70
    void LinearMovement::LinearMovementUpdateCameraSpace(float arg1, math::Vector3T<double>& vector31,
                                                         const math::QuaternionT<double>& quaternion,
                                                         const math::Vector3T<double>& vector32,
                                                         math::Vector3T<double>& vector33,
                                                         const math::Vector3T<double>& vector34,
                                                         const math::Vector3T<double>& vector35, int arg8, double arg9,
                                                         int arg10, int arg11) {
        double* pdVar3;
        QuaternionT<double> local_108;
        Vector3T<double> local_e8;
        LinearMovement local_d0;
        Vector3T<double> local_b8;
        Vector3T<double> local_a0;
        uint64_t local_88;
        uint64_t uStack_80;
        uint64_t local_78;
        double local_58;

        if (!quaternion == *this) {
            local_a0 - quaternion;
            local_a0 *= vector31;
            local_58 = (double)local_a0.Length();
            pdVar3 = &vector33[0];
            if (((*pdVar3 == INFINITY) || (0 < arg8 && (double)arg8 < local_58)) || (local_58 < (double)arg10)) {
                *this = quaternion;
                vector32 = math::Vector3T<double>::SetToZero();
            } else {
                local_78 = *(uint64_t*)(vector33 + 16);
                local_88 = *(uint64_t*)vector33;
                uStack_80 = *(uint64_t*)(vector33 + 8);
                if (0 < (int)vector35) {
                    local_88 *= ((local_58 * arg9) / (double)(int)vector35);
                }
                local_e8*(*((QuaternionT<double>*)(ReturnValue*)vector32));
                GetDesiredVelocity(&local_d0, arg1, &local_e8, (Vector3T<double>*)&local_88, vector34, &local_a0);
                local_108.Conjugate();
                local_d0 *= &local_108;
                math::Lerp<math::Vector3T<double>, double>(*((Vector3T<double>*)(ReturnValue*)vector32),
                                                           *((Vector3T<double>*)(ReturnValue*)vector32), local_d0, 0.8);
                local_b8** arg1;
                local_a0 = local_b8;
                *this += local_a0;
            }
        }
    }

    // 0x10061fd80
    void LinearMovement::LinearSpringMovementUpdateCameraSpace(float arg1, math::Vector3T<double>& vector31,
                                                               const math::QuaternionT<double>& quaternion,
                                                               const math::Vector3T<double>& vector32,
                                                               math::Vector3T<double>& vector33,
                                                               const math::Vector3T<double>& vector34, double arg7,
                                                               int arg8, int arg9) {
        void result;
        double* pdVar2;
        ReturnValue result;
        double dVar3;
        Vector3T<double> local_f0;
        Vector3T<double> local_d8;
        Vector3T<double> local_c0;
        Vector3T<double> local_a0;
        uint64_t local_88;
        uint64_t uStack_80;
        uint64_t local_78;
        uint64_t local_68;
        uint64_t uStack_60;
        uint64_t local_58;
        double local_48;
        QuaternionT<double>* local_40;
        double local_38;

        local_40 = (QuaternionT<double>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)((int)vector34));
        local_38 = (double)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)arg1);
        if (!quaternion == *this) {
            local_a0 - quaternion;
            local_a0 *= vector31;
            local_48 = (double)local_a0.Length();
            pdVar2 = &vector33[0];
            &result = (ReturnValue*)vector32;
            if (((*pdVar2 == INFINITY) || (0 < (int)local_40 && (double)(int)local_40 < local_48)) ||
                (local_48 < (double)arg8)) {
                *this = quaternion;
                &result = (ReturnValue*)vector32;
            } else {
                local_40 = quaternion;
                local_88*(*((QuaternionT<double>*)(ReturnValue*)vector32));
                local_68** local_38._0_4_;
                local_c0 / *0.02;
                local_f0* local_c0;
                local_58 = local_78;
                local_68 = local_88;
                uStack_60 = uStack_80;
                local_c0** local_38._0_4_;
                local_68 += local_c0;
                if (1.0 < arg7) {
                    dVar3 = (double)local_38._0_4_ * 50.0 * SQRT(arg7 - 1.0);
                    local_68 /= (dVar3 * dVar3 + 1.0);
                }
                local_c0.Conjugate();
                local_68 *= &local_c0;
                result = local_68;
                local_d8** local_38._0_4_;
                local_38 = (double)local_d8.Length();
                dVar3 = (double)local_a0.Length();
                if (local_38 <= dVar3) {
                    *this += local_d8;
                    return;
                }
                *this = *local_40;
            }
            result = math::Vector3T<double>::SetToZero();
        }
    }

} // namespace jag::game

namespace jag::math {
    // 0x10061fb00
    Vector3T<double>& Lerp<Vector3T<double>, double>(Vector3T<double>& vector31, const Vector3T<double>& vector32,
                                                     const Vector3T<double>& vector33, double arg4) {
        Vector3T<double> local_78;
        Vector3T<double> local_60;
        Vector3T<double> local_48;

        local_48 - vector33;
        &local_60* arg4;
        local_78 + vector32;
        vector31.Set(local_78);
        return vector31;
    }

    // 0x10061ffe0
    Vector3T<double> operator* <double>(const Vector3T<double>& vector31, const Vector3T<double>& vector32) {
        double* in_RDX;

        new (vector31) Vector3T(*in_RDX * *(double*)vector32, in_RDX[1] * *(double*)(vector32 + 8),
                                in_RDX[2] * *(double*)(vector32 + 16));
        return vector31;
    }

    // 0x100620020
    Vector3T<double> operator/ <double>(const Vector3T<double>& vector3, double arg2) {
        double* in_RSI;

        double dVar1 = 1.0 / arg2;
        new (vector3) Vector3T(*in_RSI * dVar1, in_RSI[1] * dVar1, dVar1 * in_RSI[2]);
        return vector3;
    }

    // 0x1006200a0
    Vector3T<double> operator/ <double>(const Vector3T<double>& vector31, const Vector3T<double>& vector32) {
        double* in_RDX;

        new (vector31) Vector3T(*(double*)vector32 / *in_RDX, *(double*)(vector32 + 8) / in_RDX[1],
                                *(double*)(vector32 + 16) / in_RDX[2]);
        return vector31;
    }

} // namespace jag::math
