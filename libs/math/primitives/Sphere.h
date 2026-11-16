// libs/math/primitives/Sphere.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::math {
    class Sphere {
    public:
        void GetPos();
        void GetPos() const;
        uint32_t GetRadius() const;
        Sphere();
        PlaneT<float>* operator=(const Sphere& positionTimeData);
        void SetRadius(float arg1);
        bool IsInside(const Sphere& sphere) const;
        bool IsInside(const Vector3T<float>& vector3) const;
        void Transform(const Matrix44T<float>& matrix44);
        void GetAABBMin() const;
        void GetAABBMax() const;
        char TestIntersection(const Sphere& sphere) const;
        void SetToZero();
        void Translate(const Vector3T<float>& vector3);
        void Set(const Vector3T<float>& vector3, float arg2);
        float GetRadiusSq() const;
        Sphere(const Vector3T<float>& vector3, float arg2);
        uint64_t TimeIntersection(const Vector3T<float>& vector31, const Vector3T<float>& vector32) const;
        void Set(float arg1, float arg2, float arg3, float arg4);

    private:
        float field_0;
        float field_4;
        float field_8;
        float m_radius;
        uint8_t _unknown_16[4];
    };

    // 0x1001df370
    Sphere::Sphere() : ColourHSL(0.0, 0.0, 0.0), m_radius(0.0) {}

    // 0x1007b0fb0
    bool Sphere::IsInside(const Sphere& sphere) const {
        uint64_t local_28 = (*((Vector3T<float>*)sphere.SSOBeginPtr())) - *this;
        float local_1c = (float)local_28.LengthSq();
        float fVar1 = (float)GetRadiusSq(sphere);
        local_1c = fVar1 + local_1c;
        fVar1 = (float)GetRadiusSq();
        return local_1c < fVar1;
    }

    // 0x1008adf90
    bool Sphere::IsInside(const Vector3T<float>& vector3) const {
        uint64_t local_20 = vector3 - *this;
        float local_14 = (float)local_20.LengthSq();
        float fVar1 = (float)GetRadiusSq();
        return local_14 < fVar1;
    }

    // 0x1008b15b0
    void Sphere::Transform(const Matrix44T<float>& matrix44) {
        *this *= matrix44;
    }

    // 0x1008b16f0
    void Sphere::GetAABBMin() const {

        Vector3T<float> local_28(m_radius);
        *this - local_28;
    }

    // 0x1008b1730
    void Sphere::GetAABBMax() const {

        Vector3T<float> local_28(m_radius);
        *this + local_28;
    }

    // 0x100c63770
    void Sphere::SetToZero() {
        Set(0.0, 0.0, 0.0, 0.0);
    }

    // 0x100c63a10
    void Sphere::Translate(const Vector3T<float>& vector3) {
        *this += vector3;
    }

    // 0x100c63cb0
    void Sphere::Set(const Vector3T<float>& vector3, float arg2) {
        Set(vector3);
        m_radius = arg2;
    }

    // 0x100c67f30
    float Sphere::GetRadiusSq() const {
        return m_radius * m_radius;
    }

    // 0x100c6d790
    void Sphere::Set(float arg1, float arg2, float arg3, float arg4) {
        Set(arg1, arg2, arg3);
        m_radius = arg4;
    }

    // 0x100c6e1f0
    Sphere::Sphere(const Vector3T<float>& vector3, float arg2) : Vector3T() {
        SetXYZ(vector3);
        m_radius = arg2;
    }

} // namespace jag::math
