// libs/game/runetek5/camera/utils/SmoothRotation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "SmoothRotation.h"

namespace jag::math {
    // 0x100023af0: SmoothRotation::IsActive() const has the same machine code as hal::Haptics::GetEnabled() const

    // 0x10014e180: SmoothRotation::GetCurrentRotation() const has the same machine code as Vector2T<float>::y() const

    // 0x1001c2200: SmoothRotation::IsTurningLeft() const has the same machine code as oldscape::MutationTracked<graphics::SimpleScatteringParams>::IsDirty() const

    // 0x100607790
    void SmoothRotation::Set(const Vector3T<float>& vector31, const QuaternionT<float>& quaternion, float arg3,
                             const Vector3T<float>& vector32) {
        uint8_t* this_00;
        uint8_t* this_01;
        float fVar1;
        float fVar2;
        float* pfVar3;
        float fVar5;

        field_20 = quaternion;
        field_60 = arg3;
        if (arg3 <= 0.0) {
            field_36 = quaternion;
            field_60 = 0.0;
        } else {
            this_00 = &field_80;
            this_00->SetXYZ(vector32);
            this_01 = &field_68;
            this_01->SetXYZ(vector31);
            if (*this_00 == *this_01) {
                field_36 = quaternion;
            } else {
                pfVar3 = (float*)(*this_00)[0];
                fVar5 = *pfVar3;
                pfVar3 = (float*)(*this_01)[0];
                fVar1 = *pfVar3;
                pfVar3 = (float*)(*this_00)[2];
                fVar2 = *pfVar3;
                pfVar3 = (float*)(*this_01)[2];
                fVar5 = (float)conversion::JagAtan2(fVar5 - fVar1, fVar2 - *pfVar3);
                RotationSetup(fVar5);
            }
        }
    }

    // 0x1006078a0
    void SmoothRotation::RotationSetup(float arg1) {
        uint64_t local_40[2];

        float local_2c = arg1;
        local_40[0] = zAxis * field_20;
        float* pfVar1 = (float*)(*local_40)[0];
        float local_30 = *pfVar1;
        pfVar1 = (float*)(*local_40)[2];
        float fVar2 = (float)conversion::JagAtan2(local_30, *pfVar1);
        local_2c = (float)conversion::PrincipleAngle(local_2c - fVar2);
        field_36.FromAxisAngle(*PTR_UP_100ee66d0, local_2c);
        field_36 *= &field_20;
        m_turningLeft = local_2c < 0.0;
        fVar2 = (float)::abs(local_2c / field_60);
        field_52 = fVar2;
        field_56 = 0;
        m_active = 1;
    }

    // 0x100607980
    void SmoothRotation::Set(const QuaternionT<float>& quaternion, float arg2, float arg3) {
        field_20 = quaternion;
        field_60 = arg2;
        if (arg2 <= 0.0) {
            field_36 = quaternion;
            field_60 = 0.0;
        } else {
            RotationSetup(arg3);
        }
    }

    // 0x1006079f0
    void SmoothRotation::GetFinalRotationAsAngle() const {
        uint64_t local_20 = zAxis * field_36;
        float* pfVar1 = &local_20[0];
        float local_14 = *pfVar1;
        pfVar1 = &local_20[2];
        conversion::JagAtan2(local_14, *pfVar1);
    }

    // 0x100607a60
    void SmoothRotation::RotateWithCheck(const Vector3T<float>& vector31, const Vector3T<float>& vector32,
                                         const QuaternionT<float>& quaternion) {
        uint8_t* vector31_00;
        uint8_t* vector32_00;
        float* pfVar2;
        uint64_t local_58[2];
        uint64_t local_48;
        float local_3c;

        QuaternionT<float>* local_38 = quaternion;
        if (0.0 < field_60) {
            vector31_00 = &field_80;
            vector32_00 = &field_68;
            local_58[0] = *vector31_00 - *vector32_00;
            local_48 = vector31 - vector32;
            if (*local_58 != local_48) {
                vector31_00->SetXYZ(vector31);
                vector32_00->SetXYZ(vector32);
                if (*vector31_00 != *vector32_00) {
                    field_20 = *local_38;
                    pfVar2 = (float*)(*vector31_00)[0];
                    local_38._0_4_ = *pfVar2;
                    pfVar2 = (float*)(*vector32_00)[0];
                    local_38 =
                        (QuaternionT<float>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)(local_38._0_4_ - *pfVar2));
                    pfVar2 = (float*)(*vector31_00)[2];
                    local_3c = *pfVar2;
                    pfVar2 = (float*)(*vector32_00)[2];
                    RotationSetup((float)conversion::JagAtan2(local_38._0_4_, local_3c - *pfVar2));
                }
            }
        }
        Rotate((ReturnValue*)this);
    }

    // 0x100607b90
    auto SmoothRotation::Rotate() {
        auto result;
        int iVar1;
        QuaternionT<float>* quaternion1;
        float arg3;
        QuaternionT<float> local_28;

        if (IsFinished(&result) == '\0') {
            iVar1 = *(int*)(&result + 7);
            *(int*)(&result + 7) = iVar1 + 1;
            arg3 = (float)(iVar1 + 1) / *(float*) && result[6].field_4;
            if (arg3 <= 1.0) {
                quaternion1 = &local_28;
                game::JagSlerp<QuaternionT<float>, float>(quaternion1, (QuaternionT<float>*) && result[2].field_4, arg3,
                                                          1e-06);
            } else {
                quaternion1 = (QuaternionT<float>*) && result[4].field_4;
            }
            result.field_4 = *quaternion1;
        } else {
            result = 0;
            &result = &result + 4;
        }
        return (ReturnValue*)&result.field_4;
    }

    // 0x100607c10
    void SmoothRotation::RotateWithCheck(const Vector3T<float>& vector3, const QuaternionT<float>& quaternion) {
        uint8_t* vector31;
        uint8_t* vector31_00;
        float fVar1;
        float fVar2;
        float* pfVar4;
        float fVar5;

        if (0.0 < field_60) {
            vector31 = &field_68;
            if (*vector31 != vector3) {
                vector31->SetXYZ(vector3);
                vector31_00 = &field_80;
                if (*vector31_00 != *vector31) {
                    field_20 = quaternion;
                    pfVar4 = (float*)(*vector31_00)[0];
                    fVar5 = *pfVar4;
                    pfVar4 = (float*)(*vector31)[0];
                    fVar1 = *pfVar4;
                    pfVar4 = (float*)(*vector31_00)[2];
                    fVar2 = *pfVar4;
                    pfVar4 = (float*)(*vector31)[2];
                    fVar5 = (float)conversion::JagAtan2(fVar5 - fVar1, fVar2 - *pfVar4);
                    RotationSetup(fVar5);
                }
            }
        }
        Rotate((ReturnValue*)this);
    }

} // namespace jag::math

// 0x100607a50
unsigned long abs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}
