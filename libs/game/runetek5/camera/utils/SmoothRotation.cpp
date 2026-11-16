// libs/game/runetek5/camera/utils/SmoothRotation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "SmoothRotation.h"

namespace jag::math {
    // 0x100023af0: the linker folded this into hal::Haptics::GetEnabled() const, which has identical code
    SmoothRotation::IsActive() const;

    // 0x10014e180: the linker folded this into Vector2T<float>::y() const, which has identical code
    SmoothRotation::GetCurrentRotation() const;

    // 0x1001c2200: the linker folded this into oldscape::MutationTracked<graphics::SimpleScatteringParams>::IsDirty() const, which has identical code
    bool SmoothRotation::IsTurningLeft() const;

    // 0x100607790, 272 bytes, placed by class name and debug map
    // SmoothRotation::Set(Vector3T<float> const&, QuaternionT<float> const&, float, Vector3T<float> const&)
    void SmoothRotation::Set(Vector3T* param_1, QuaternionT* param_2, float param_3, Vector3T* param_4) {
        undefined1* this_00;
        undefined1* this_01;
        float fVar1;
        float fVar2;
        float* pfVar3;
        float fVar5;

        Rect<float>::operator=((Rect<float>*)&field_20, (Rect*)param_2);
        field_60 = param_3;
        if (param_3 <= 0.0) {
            Rect<float>::operator=((Rect<float>*)&field_36, (Rect*)param_2);
            field_60 = 0.0;
        } else {
            this_00 = &field_80;
            this_00->SetXYZ(param_4);
            this_01 = &field_68;
            this_01->SetXYZ(param_1);
            if (math::operator==((Vector3T*)this_00, (Vector3T*)this_01)) {
                Rect<float>::operator=((Rect<float>*)&field_36, (Rect*)param_2);
            } else {
                pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 0);
                fVar5 = *pfVar3;
                pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_01, 0);
                fVar1 = *pfVar3;
                pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 2);
                fVar2 = *pfVar3;
                pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_01, 2);
                fVar5 = (float)conversion::JagAtan2(fVar5 - fVar1, fVar2 - *pfVar3);
                RotationSetup(this, fVar5);
            }
        }
    }

    // 0x1006078a0, 224 bytes, placed by class name and debug map
    // SmoothRotation::RotationSetup(float)
    void SmoothRotation::RotationSetup(float param_1) {
        float* pfVar1;
        float fVar2;
        undefined8 local_40[2];
        float local_30;
        float local_2c;

        local_2c = param_1;
        local_40[0] = math::operator*((Vector3T*)&zAxis, (QuaternionT*)&field_20);
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)local_40, 0);
        local_30 = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)local_40, 2);
        fVar2 = (float)conversion::JagAtan2(local_30, *pfVar1);
        local_2c = (float)conversion::PrincipleAngle(local_2c - fVar2);
        (&field_36, (Vector3T*)PTR_UP_100ee66d0, local_2c)->FromAxisAngle();
        QuaternionT<float>::operator*=((QuaternionT<float>*)&field_36, (QuaternionT*)&field_20);
        m_turningLeft = local_2c < 0.0;
        fVar2 = (float)::abs(local_2c / field_60);
        field_52 = fVar2;
        field_56 = 0;
        m_active = 1;
    }

    // 0x100607980, 112 bytes, placed by class name and debug map
    // SmoothRotation::Set(QuaternionT<float> const&, float, float)
    void SmoothRotation::Set(QuaternionT* param_1, float param_2, float param_3) {
        Rect<float>::operator=((Rect<float>*)&field_20, (Rect*)param_1);
        field_60 = param_2;
        if (param_2 <= 0.0) {
            Rect<float>::operator=((Rect<float>*)&field_36, (Rect*)param_1);
            field_60 = 0.0;
        } else {
            RotationSetup(this, param_3);
        }
    }

    // 0x1006079f0, 96 bytes, placed by class name and debug map
    // SmoothRotation::GetFinalRotationAsAngle() const
    void SmoothRotation::GetFinalRotationAsAngle() {
        float* pfVar1;
        undefined8 local_20;
        float local_14;

        local_20 = math::operator*((Vector3T*)&zAxis, (QuaternionT*)&field_36);
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_20, 0);
        local_14 = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_20, 2);
        conversion::JagAtan2(local_14, *pfVar1);
    }

    // 0x100607a60, 304 bytes, placed by class name and debug map
    // SmoothRotation::RotateWithCheck(Vector3T<float> const&, Vector3T<float> const&, QuaternionT<float> const&)
    void SmoothRotation::RotateWithCheck(Vector3T* param_1, Vector3T* param_2, QuaternionT* param_3) {
        undefined1* this_00;
        undefined1* this_01;
        float* pfVar1;
        bool bVar2;
        float fVar3;
        undefined8 local_58[2];
        undefined8 local_48;
        float local_3c;
        QuaternionT* local_38;

        local_38 = param_3;
        if (0.0 < field_60) {
            this_00 = &field_80;
            this_01 = &field_68;
            local_58[0] = math::operator-((Vector3T*)this_00, (Vector3T*)this_01);
            local_48 = math::operator-(param_1, param_2);
            bVar2 = math::operator!=((Vector3T*)local_58, (Vector3T*)&local_48);
            if (bVar2) {
                this_00->SetXYZ(param_1);
                this_01->SetXYZ(param_2);
                bVar2 = math::operator!=((Vector3T*)this_00, (Vector3T*)this_01);
                if (bVar2) {
                    Rect<float>::operator=((Rect<float>*)&field_20, (Rect*)local_38);
                    pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 0);
                    local_38._0_4_ = *pfVar1;
                    pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_01, 0);
                    local_38 = (QuaternionT*)CONCAT44(local_38._4_4_, local_38._0_4_ - *pfVar1);
                    pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 2);
                    local_3c = *pfVar1;
                    pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_01, 2);
                    fVar3 = (float)conversion::JagAtan2(local_38._0_4_, local_3c - *pfVar1);
                    RotationSetup(this, fVar3);
                }
            }
        }
        Rotate(this);
    }

    // 0x100607b90, 128 bytes, placed by class name and debug map
    // SmoothRotation::Rotate()
    undefined1* SmoothRotation::Rotate() {
        int iVar2;
        undefined1* puVar3;
        game* this_00;
        float fVar4;
        undefined1 local_28[16];

        if (IsFinished(this) == '\0') {
            iVar2 = field_56 + 1;
            field_56 = iVar2;
            fVar4 = (float)iVar2 / field_52;
            if (fVar4 <= 1.0) {
                this_00 = (game*)local_28;
                game::JagSlerp<QuaternionT<float>, float>(this_00, (QuaternionT*)&field_20, (QuaternionT*)&field_36,
                                                          fVar4, 1e-06);
            } else {
                this_00 = (game*)&field_36;
            }
            Rect<float>::operator=((Rect<float>*)&field_4, (Rect*)this_00);
            puVar3 = &field_4;
        } else {
            m_active = 0;
            puVar3 = &field_36;
        }
        return puVar3;
    }

    // 0x100607c10, 240 bytes, placed by class name and debug map
    // SmoothRotation::RotateWithCheck(Vector3T<float> const&, QuaternionT<float> const&)
    void SmoothRotation::RotateWithCheck(Vector3T* param_1, QuaternionT* param_2) {
        undefined1* this_00;
        undefined1* this_01;
        float fVar1;
        float fVar2;
        float* pfVar3;
        bool bVar4;
        float fVar5;

        if (0.0 < field_60) {
            this_00 = &field_68;
            bVar4 = math::operator!=((Vector3T*)this_00, param_1);
            if (bVar4) {
                this_00->SetXYZ(param_1);
                this_01 = &field_80;
                bVar4 = math::operator!=((Vector3T*)this_01, (Vector3T*)this_00);
                if (bVar4) {
                    Rect<float>::operator=((Rect<float>*)&field_20, (Rect*)param_2);
                    pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_01, 0);
                    fVar5 = *pfVar3;
                    pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 0);
                    fVar1 = *pfVar3;
                    pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_01, 2);
                    fVar2 = *pfVar3;
                    pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 2);
                    fVar5 = (float)conversion::JagAtan2(fVar5 - fVar1, fVar2 - *pfVar3);
                    RotationSetup(this, fVar5);
                }
            }
        }
        Rotate(this);
    }

} // namespace jag::math

// 0x100607a50, 16 bytes, placed by neighbouring functions
// abs(float)
ulong abs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}
