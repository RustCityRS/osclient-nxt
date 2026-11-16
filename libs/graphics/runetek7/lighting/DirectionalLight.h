// libs/graphics/runetek7/lighting/DirectionalLight.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class DirectionalLight {
    public:
        class ShaderConsts;
        void GetDirection() const;
        ReturnValue GetDirection(unsigned long long arg1) const;
        DirectionalLight();
        void SetDirection(const math::Vector3T<float>& vector3, long long arg2, unsigned long long arg3);
        void GetAmbientColour(unsigned long long arg1) const;
        void GetColour(unsigned long long arg1) const;
        DirectionalLight* operator=(const DirectionalLight& directionalLight);
        void SetAmbientColour(const math::Vector3T<float>& vector3, long long arg2, unsigned long long arg3);
        void SetColour(const math::Vector3T<float>& vector3, long long arg2, unsigned long long arg3);
        void SetAntiColour(const math::Vector3T<float>& vector3, long long arg2, unsigned long long arg3);

    private:
        unsigned long field_0;
        uint64_t field_8;
        uint8_t _unknown_16[8];
        unsigned long field_24;
        uint64_t field_32;
        uint8_t _unknown_40[112];
    };

    class DirectionalLight::ShaderConsts {
    public:
        ShaderConsts();

        uint8_t _unknown_0[40];
    };

    // 0x1001df6b0
    ReturnValue DirectionalLight::GetDirection(unsigned long long arg1) const {
        ReturnValue local_18;

        local_18[0] = (ReturnValue)GetSlerpedValue(arg1);
        ReturnValue* pRVar1 = local_18 = math::Vector3T<float>::Normalize();
        return *pRVar1;
    }

    // 0x100917970
    void DirectionalLight::GetAmbientColour(unsigned long long arg1) const {
        field_144.GetValue(arg1);
    }

    // 0x100917990
    void DirectionalLight::GetColour(unsigned long long arg1) const {
        field_48.GetValue(arg1);
    }

    // 0x100917ae0
    DirectionalLight* DirectionalLight::operator=(const DirectionalLight& directionalLight) {
        *this = directionalLight;
        field_48 = directionalLight.field_48;
        field_96 = directionalLight.field_96;
        field_144 = directionalLight.field_144;
        return this;
    }

    // 0x100917b30
    void DirectionalLight::SetAmbientColour(const math::Vector3T<float>& vector3, long long arg2,
                                            unsigned long long arg3) {
        field_144.SetValue(vector3, arg2, arg3);
    }

    // 0x100917b50
    void DirectionalLight::SetColour(const math::Vector3T<float>& vector3, long long arg2, unsigned long long arg3) {
        field_48.SetValue(vector3, arg2, arg3);
    }

    // 0x100917b70
    void DirectionalLight::SetAntiColour(const math::Vector3T<float>& vector3, long long arg2,
                                         unsigned long long arg3) {
        field_96.SetValue(vector3, arg2, arg3);
    }

    // 0x10093add0
    DirectionalLight::ShaderConsts::ShaderConsts() : math::Vector4T() {}

} // namespace jag::graphics

namespace jag::math {
    // 0x1001df780
    Vector3T<float> SLerp<float>(const Vector3T<float>& vector31, const Vector3T<float>& vector32, float arg3) {
        Vector3Slerp<float>(vector31, vector32, (float)*(uint64_t*)vector32);
    }

    // 0x1001df7a0
    Vector3T<float> Vector3Slerp<float>(const Vector3T<float>& vector31, Vector3T<float> vector32, float arg3) {
        uint32_t in_XMM0_Db;
        float in_XMM2_Da;
        uint64_t local_58[2];
        uint64_t local_38;
        uint64_t local_28;

        local_58[0] = (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg3);
        float local_1c = in_XMM2_Da;
        local_48[0]._0_4_ = Vector3Dot<float>(vector31, (Vector3T<float>*)local_58);
        local_28 = (((uint64_t)local_28._4_4_ << 32) | (uint32_t)3212836864);
        local_38 = (((uint64_t)local_38._4_4_ << 32) | (uint32_t)1065353216);
        auto pfVar1 = std::clamp<float>(local_48, local_28, local_38);
        float local_2c = *pfVar1;
        float fVar2 = (float)acos(local_2c);
        local_1c = fVar2 * local_1c;
        local_28 = local_2c vector31;
        local_48[0] = (ReturnValue)*local_58 - local_28;
        auto local_48 = Vector3T<float>::Normalize();
        fVar2 = (float)::cos(local_1c);
        local_28 = fVar2 vector31;
        fVar2 = (float)::sin(local_1c);
        local_38 = fVar2 * &local_48;
        local_28 + local_38;
    }

} // namespace jag::math

// 0x1001df8a0
void acos(float arg1) {
    _acosf();
}
