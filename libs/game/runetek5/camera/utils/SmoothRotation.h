// libs/game/runetek5/camera/utils/SmoothRotation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::math {
    class SmoothRotation {
    public:
        IsActive() const;
        GetCurrentRotation() const;
        IsTurningLeft() const;
        SmoothRotation();
        GetFinalRotation() const;
        operator bool() const;
        bool IsFinished() const;
        void Set(Vector3T<float> const&, QuaternionT<float> const&, float, Vector3T<float> const&);
        void RotationSetup(float);
        void Set(QuaternionT<float> const&, float, float);
        void GetFinalRotationAsAngle() const;
        void RotateWithCheck(Vector3T<float> const&, Vector3T<float> const&, QuaternionT<float> const&);
        Rotate();
        void RotateWithCheck(Vector3T<float> const&, QuaternionT<float> const&);

        // data members, from how the methods use this: 88 bytes
        undefined1 field_0; // offset 0
        char _unknown_1[51];
        float field_52; // offset 52
        int field_56;   // offset 56
        float field_60; // offset 60
        bool field_64;  // offset 64
        char _unknown_65[23];
    };

    // 0x1003e7760, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // SmoothRotation::SmoothRotation(): jumps straight to the base-object constructor

    // 0x1003e7ed0, 288 bytes, inline, placed by debug map only (low confidence)
    // Matrix33T<float> Matrix33RotationXY<float>(float, float)
    math* Matrix33RotationXY<float>(float param_1, float param_2) {
        undefined4 extraout_XMM0_Dc;
        undefined4 extraout_XMM0_Dc_00;
        undefined4 extraout_XMM0_Dd;
        undefined4 extraout_XMM0_Dd_00;
        ColourHSL local_88;
        ColourHSL local_78;
        ColourHSL local_68;
        undefined8 local_58;
        undefined4 uStack_50;
        undefined4 uStack_4c;
        undefined8 local_48;
        undefined4 uStack_40;
        undefined4 uStack_3c;
        float local_30;
        float local_2c;

        local_2c = 1.0;
        local_30 = 1.0;
        local_58 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        if (param_1 != 0.0) {
            local_58._0_4_ = param_1;
            local_48._0_4_ = param_2;
            local_30 = (float)::cos(param_1);
            local_58 = ::sin((float)local_58);
            uStack_50 = extraout_XMM0_Dc;
            uStack_4c = extraout_XMM0_Dd;
            param_2 = (float)local_48;
        }
        uStack_3c = 0;
        uStack_40 = 0;
        local_48 = 0;
        if (param_2 != 0.0) {
            local_48._0_4_ = param_2;
            local_2c = (float)::cos(param_2);
            local_48 = ::sin((float)local_48);
            uStack_40 = extraout_XMM0_Dc_00;
            uStack_3c = extraout_XMM0_Dd_00;
        }
        new (&local_88) ColourHSL(local_2c, 0.0, -(float)local_48);
        new (&local_78) ColourHSL((float)local_48 * (float)local_58, local_30, local_2c * (float)local_58);
        new (&local_68) ColourHSL((float)local_48 * local_30, -(float)local_58, local_2c * local_30);
        new (this) Matrix33T<float>((Vector3T*)&local_88, (Vector3T*)&local_78, (Vector3T*)&local_68);
        return this;
    }

    // 0x1003e7ff0, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SmoothRotation::GetFinalRotation() const
    /* graphics::ModelParticleSource::GetVertex2() const */

    undefined8* graphics::ModelParticleSource::GetVertex2() {
        return &m_vertex2;
    }

    // 0x1003eae20, 96 bytes, base-object constructor, inline, placed by class name
    // SmoothRotation::SmoothRotation()
    void SmoothRotation::SmoothRotation() {
        field_0 = 0;
        new (&field_4) QuaternionT<float>();
        new (&field_20) QuaternionT<float>();
        new (&field_36) QuaternionT<float>();
        field_52 = 0.0;
        field_56 = 0;
        field_60 = 0.0;
        field_64 = true;
        new (&field_68) Vector3T<int>();
        new (&field_80) Vector3T<int>();
    }

    // 0x1003eaf90, 32 bytes, inline, placed by class name
    // SmoothRotation::operator bool() const
    bool SmoothRotation::operator_cast_to_bool() {
        return (float)field_56 < field_52;
    }

    // 0x1003eafb0, 32 bytes, inline, placed by class name
    // SmoothRotation::IsFinished() const
    bool SmoothRotation::IsFinished() {
        return field_52 <= (float)field_56;
    }

} // namespace jag::math
