// libs/game/runetek5/camera/utils/SmoothRotation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::math {
    class SmoothRotation {
    public:
        bool IsActive() const;
        Vector2T<int>* GetCurrentRotation() const;
        bool IsTurningLeft() const;
        SmoothRotation();
        uint64_t* GetFinalRotation() const;
        operator bool() const;
        bool IsFinished() const;
        void Set(const Vector3T<float>& vector31, const QuaternionT<float>& quaternion, float arg3,
                 const Vector3T<float>& vector32);
        void RotationSetup(float arg1);
        void Set(const QuaternionT<float>& quaternion, float arg2, float arg3);
        void GetFinalRotationAsAngle() const;
        void RotateWithCheck(const Vector3T<float>& vector31, const Vector3T<float>& vector32,
                             const QuaternionT<float>& quaternion);
        auto Rotate();
        void RotateWithCheck(const Vector3T<float>& vector3, const QuaternionT<float>& quaternion);

    private:
        uint8_t m_active;
        uint8_t _unknown_1[51];
        float field_52;
        int field_56;
        float field_60;
        bool m_turningLeft;
        uint8_t _unknown_65[23];
    };

    // 0x1003e7ed0
    Matrix33T<float> Matrix33RotationXY<float>(float arg1, float arg2) {
        Matrix33T<float>* in_RDI;
        uint32_t extraout_XMM0_Dc;
        uint32_t extraout_XMM0_Dc_00;
        uint32_t extraout_XMM0_Dd;
        uint32_t extraout_XMM0_Dd_00;
        uint64_t local_48;

        float local_2c = 1.0;
        float local_30 = 1.0;
        uint64_t local_58 = 0;
        uint32_t uStack_50 = 0;
        uint32_t uStack_4c = 0;
        if (arg1 != 0.0) {
            local_58._0_4_ = arg1;
            local_48._0_4_ = arg2;
            local_30 = (float)::cos(arg1);
            local_58 = ::sin((float)local_58);
            uStack_50 = extraout_XMM0_Dc;
            uStack_4c = extraout_XMM0_Dd;
            arg2 = (float)local_48;
        }
        uint32_t uStack_3c = 0;
        uint32_t uStack_40 = 0;
        local_48 = 0;
        if (arg2 != 0.0) {
            local_48._0_4_ = arg2;
            local_2c = (float)::cos(arg2);
            local_48 = ::sin((float)local_48);
            uStack_40 = extraout_XMM0_Dc_00;
            uStack_3c = extraout_XMM0_Dd_00;
        }
        ColourHSL local_88(local_2c, 0.0, -(float)local_48);
        ColourHSL local_78((float)local_48 * (float)local_58, local_30, local_2c * (float)local_58);
        ColourHSL local_68((float)local_48 * local_30, -(float)local_58, local_2c * local_30);
        new (in_RDI) Matrix33T<float>(local_88, local_78, local_68);
    }

    // 0x1003e7ff0
    uint64_t* SmoothRotation::GetFinalRotation() const {
        return &m_vertex2;
    }

    // 0x1003eae20
    SmoothRotation::SmoothRotation() : m_active(0), field_52(0.0), field_56(0), field_60(0.0), m_turningLeft(true) {}

    // 0x1003eaf90
    SmoothRotation::operator bool() const {
        return (float)field_56 < field_52;
    }

    // 0x1003eafb0
    bool SmoothRotation::IsFinished() const {
        return field_52 <= (float)field_56;
    }

} // namespace jag::math
