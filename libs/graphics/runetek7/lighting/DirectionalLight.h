// libs/graphics/runetek7/lighting/DirectionalLight.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class DirectionalLight {
    public:
        class ShaderConsts;
        GetDirection() const;
        GetDirection(unsigned long long) const;
        DirectionalLight();
        void SetDirection(math::Vector3T<float> const&, long long, unsigned long long);
        void GetAmbientColour(unsigned long long) const;
        void GetColour(unsigned long long) const;
        DirectionalLight* operator=(DirectionalLight const&);
        void SetAmbientColour(math::Vector3T<float> const&, long long, unsigned long long);
        void SetColour(math::Vector3T<float> const&, long long, unsigned long long);
        void SetAntiColour(math::Vector3T<float> const&, long long, unsigned long long);

        // data members, from how the methods use this: 152 bytes
        ulong field_0;      // offset 0
        undefined8 field_8; // offset 8
        char _unknown_16[8];
        ulong field_24;      // offset 24
        undefined8 field_32; // offset 32
        char _unknown_40[112];
    };

    class DirectionalLight::ShaderConsts {
    public:
        ShaderConsts();

        // data members, from how the methods use this: 40 bytes
        char _unknown_0[40];
    };

    // 0x1001df6b0, 48 bytes, inline, placed by class name and debug map
    // DirectionalLight::GetDirection(unsigned long long) const
    undefined8 DirectionalLight::GetDirection(ulonglong param_1) {
        undefined8* puVar1;
        undefined8 local_18[2];

        local_18[0] = GetSlerpedValue(param_1);
        puVar1 = (undefined8*)local_18->Normalize();
        return *puVar1;
    }

    // 0x100917970, 32 bytes, inline, placed by class name
    // DirectionalLight::GetAmbientColour(unsigned long long) const
    void DirectionalLight::GetAmbientColour(ulonglong param_1) {
        (&field_144, param_1)->GetValue();
    }

    // 0x100917990, 16 bytes, inline, placed by class name
    // DirectionalLight::GetColour(unsigned long long) const
    void DirectionalLight::GetColour(ulonglong param_1) {
        (&field_48, param_1)->GetValue();
    }

    // 0x100917ae0, 80 bytes, inline, placed by class name
    // DirectionalLight::operator=(DirectionalLight const&)
    /* DirectionalLight::TEMPNAMEPLACEHOLDERVALUE(DirectionalLight const&)
    */

    DirectionalLight* DirectionalLight::operator=(DirectionalLight* param_1) {
        math::Transitionable<math::Vector3T<float>>::operator=((Transitionable<math::Vector3T<float>>*)this,
                                                               (Transitionable*)param_1);
        math::Transitionable<math::Vector3T<float>>::operator=((Transitionable<math::Vector3T<float>>*)&field_48,
                                                               (Transitionable*)&param_1->field_48);
        math::Transitionable<math::Vector3T<float>>::operator=((Transitionable<math::Vector3T<float>>*)&field_96,
                                                               (Transitionable*)&param_1->field_96);
        math::Transitionable<math::Vector3T<float>>::operator=((Transitionable<math::Vector3T<float>>*)&field_144,
                                                               (Transitionable*)&param_1->field_144);
        return this;
    }

    // 0x100917b30, 32 bytes, inline, placed by class name
    // DirectionalLight::SetAmbientColour(math::Vector3T<float> const&, long long, unsigned long long)
    void DirectionalLight::SetAmbientColour(Vector3T* param_1, longlong param_2, ulonglong param_3) {
        ulonglong in_RCX;

        ((param_1 + 144))->SetValue(param_2, param_3, in_RCX);
    }

    // 0x100917b50, 16 bytes, inline, placed by class name
    // DirectionalLight::SetColour(math::Vector3T<float> const&, long long, unsigned long long)
    void DirectionalLight::SetColour(Vector3T* param_1, longlong param_2, ulonglong param_3) {
        ulonglong in_RCX;

        ((param_1 + 48))->SetValue(param_2, param_3, in_RCX);
    }

    // 0x100917b70, 16 bytes, inline, placed by class name
    // DirectionalLight::SetAntiColour(math::Vector3T<float> const&, long long, unsigned long long)
    void DirectionalLight::SetAntiColour(Vector3T* param_1, longlong param_2, ulonglong param_3) {
        ulonglong in_RCX;

        ((param_1 + 96))->SetValue(param_2, param_3, in_RCX);
    }

    // 0x10093adc0, 16 bytes, complete-object constructor, inline, placed by class name
    // DirectionalLight::ShaderConsts::ShaderConsts(): jumps straight to the base-object constructor

    // 0x10093add0, 48 bytes, base-object constructor, inline, placed by class name
    // DirectionalLight::ShaderConsts::ShaderConsts()
    void DirectionalLight::ShaderConsts::ShaderConsts() {
        new (this) math::Vector4T<float>();
        new (&field_16) math::Vector4T<float>();
        new (&field_32) math::Vector4T<float>();
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x1001df780, 32 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float> SLerp<float>(Vector3T<float> const&, Vector3T<float> const&, float)
    void SLerp<float>(Vector3T* param_1, Vector3T* param_2, float param_3) {
        Vector3Slerp<float>(*(math**)param_2, *(undefined4*)(param_2 + 8), param_3);
    }

    // 0x1001df7a0, 240 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float> Vector3Slerp<float>(Vector3T<float> const&, Vector3T<float>, float)
    void Vector3Slerp<float>(undefined8 param_1, undefined4 param_2, float param_3, math* this) {
        float* pfVar1;
        float fVar2;
        undefined8 local_58;
        undefined4 local_50;
        undefined8 local_48;
        undefined4 local_40;
        undefined8 local_38;
        undefined4 local_30;
        float local_2c;
        undefined8 local_28;
        undefined4 local_20;
        float local_1c;

        local_58 = param_1;
        local_50 = param_2;
        local_1c = param_3;
        fVar2 = Vector3Dot<float>((Vector3T*)this, (Vector3T*)&local_58);
        local_48 = CONCAT44(local_48._4_4_, fVar2);
        local_28 = CONCAT44(local_28._4_4_, 3212836864);
        local_38 = CONCAT44(local_38._4_4_, 1065353216);
        pfVar1 = std::clamp<float>((float*)&local_48, (float*)&local_28, (float*)&local_38);
        local_2c = *pfVar1;
        fVar2 = (float)acos(local_2c);
        local_1c = fVar2 * local_1c;
        local_28 = operator*((Vector3T*)this, local_2c);
        local_20 = param_2;
        local_48 = operator-((Vector3T*)&local_58, (Vector3T*)&local_28);
        local_40 = param_2;
        local_48.Normalize();
        fVar2 = (float)::cos(local_1c);
        local_28 = operator*((Vector3T*)this, fVar2);
        local_20 = param_2;
        fVar2 = (float)::sin(local_1c);
        local_38 = operator*((Vector3T*)&local_48, fVar2);
        local_30 = param_2;
        operator+((Vector3T*)&local_28, (Vector3T*)&local_38);
    }

} // namespace jag::math

// 0x1001df8a0, 16 bytes, placed by debug map only (low confidence)
// acos(float)
void acos(float param_1) {
    _acosf();
}
