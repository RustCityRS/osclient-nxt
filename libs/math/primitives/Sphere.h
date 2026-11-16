// libs/math/primitives/Sphere.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::math {
    class Sphere {
    public:
        GetPos();
        GetPos() const;
        GetRadius() const;
        Sphere();
        PlaneT<float>* operator=(Sphere const&);
        SetRadius(float);
        bool IsInside(Sphere const&) const;
        bool IsInside(Vector3T<float> const&) const;
        void Transform(Matrix44T<float> const&);
        void GetAABBMin() const;
        void GetAABBMax() const;
        char TestIntersection(Sphere const&) const;
        void SetToZero();
        void Translate(Vector3T<float> const&);
        void Set(Vector3T<float> const&, float);
        float GetRadiusSq() const;
        Sphere(Vector3T<float> const&, float);
        TimeIntersection(Vector3T<float> const&, Vector3T<float> const&) const;
        void Set(float, float, float, float);

        // data members, from how the methods use this: 20 bytes
        float field_0;  // offset 0
        float field_4;  // offset 4
        float field_8;  // offset 8
        float field_12; // offset 12
        char _unknown_16[4];
    };

    // 0x1001df360, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // Sphere::Sphere(): jumps straight to the base-object constructor

    // 0x1001df370, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // Sphere::Sphere()
    void Sphere::Sphere() {
        new (this) ColourHSL(0.0, 0.0, 0.0);
        field_12 = 0.0;
    }

    // 0x1007b0fb0, 112 bytes, inline, placed by class name
    // Sphere::IsInside(Sphere const&) const
    bool Sphere::IsInside(Sphere* param_1) {
        vector* pvVar1;
        float extraout_XMM0_Da;
        undefined8 local_28;
        float local_1c;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        local_28 = math::operator-((Vector3T*)pvVar1, (Vector3T*)this);
        local_1c = (float)local_28.LengthSq();
        local_1c = (float)GetRadiusSq(param_1) + local_1c;
        GetRadiusSq(this);
        return local_1c < extraout_XMM0_Da;
    }

    // 0x1008adf90, 80 bytes, inline, placed by class name
    // Sphere::IsInside(Vector3T<float> const&) const
    bool Sphere::IsInside(Vector3T* param_1) {
        float fVar1;
        undefined8 local_20;
        float local_14;

        local_20 = math::operator-(param_1, (Vector3T*)this);
        local_14 = (float)local_20.LengthSq();
        fVar1 = (float)GetRadiusSq(this);
        return local_14 < fVar1;
    }

    // 0x1008b15b0, 16 bytes, inline, placed by class name
    // Sphere::Transform(Matrix44T<float> const&)
    void Sphere::Transform(Matrix44T* param_1) {
        Vector3T<float>::operator*=((Vector3T<float>*)this, param_1);
    }

    // 0x1008b16f0, 64 bytes, inline, placed by class name
    // Sphere::GetAABBMin() const
    void Sphere::GetAABBMin() {
        Vector3T<float> local_28[16];

        Vector3T<float>::Vector3T(local_28, field_12);
        math::operator-((Vector3T*)this, (Vector3T*)local_28);
    }

    // 0x1008b1730, 64 bytes, inline, placed by class name
    // Sphere::GetAABBMax() const
    void Sphere::GetAABBMax() {
        Vector3T<float> local_28[16];

        Vector3T<float>::Vector3T(local_28, field_12);
        math::operator+((Vector3T*)this, (Vector3T*)local_28);
    }

    // 0x100c63770, 32 bytes, inline, placed by class name
    // Sphere::SetToZero()
    void Sphere::SetToZero() {
        Set(this, 0.0, 0.0, 0.0, 0.0);
    }

    // 0x100c63a10, 16 bytes, inline, placed by class name
    // Sphere::Translate(Vector3T<float> const&)
    void Sphere::Translate(Vector3T* param_1) {
        Vector3T<float>::operator+=((Vector3T<float>*)this, param_1);
    }

    // 0x100c63cb0, 48 bytes, inline, placed by class name
    // Sphere::Set(Vector3T<float> const&, float)
    void Sphere::Set(Vector3T* param_1, float param_2) {
        Set(param_1);
        field_12 = param_2;
    }

    // 0x100c67f30, 16 bytes, inline, placed by class name
    // Sphere::GetRadiusSq() const
    float Sphere::GetRadiusSq() {
        return field_12 * field_12;
    }

    // 0x100c6aeb0, 16 bytes, complete-object constructor, inline, placed by class name
    // Sphere::Sphere(Vector3T<float> const&, float): jumps straight to the base-object constructor

    // 0x100c6d790, 48 bytes, inline, placed by class name
    // Sphere::Set(float, float, float, float)
    void Sphere::Set(float param_1, float param_2, float param_3, float param_4) {
        Set(param_1, param_2, param_3);
        field_12 = param_4;
    }

    // 0x100c6e1f0, 64 bytes, base-object constructor, inline, placed by class name
    // Sphere::Sphere(Vector3T<float> const&, float)
    void Sphere::Sphere(Vector3T* param_1, float param_2) {
        new (this) Vector3T<int>();
        SetXYZ(param_1);
        field_12 = param_2;
    }

} // namespace jag::math
