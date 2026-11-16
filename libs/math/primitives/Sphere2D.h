// libs/math/primitives/Sphere2D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::math {
    class Sphere2D {
    public:
        void GetCentre() const;
        unsigned int GetRadius() const;
        bool IsValid() const;
        Sphere2D* operator=(const Sphere2D& sphere2D);
        Sphere2D();
        uint32_t PointInside(int arg1, int arg2, int arg3) const;
        bool Set(const Matrix44T<float>& matrix441, const Matrix44T<float>& matrix442,
                 const Matrix44T<float>& matrix443, int arg4, int arg5, const AABB& aabb);

    private:
        unsigned int field_0;
        unsigned int field_4;
        unsigned int m_radius;
        char m_valid;
        uint8_t _unknown_13[3];
    };

    // 0x1004491e0
    bool Sphere2D::IsValid() const {
        return field_12;
    }

    // 0x10048f8d0
    Sphere2D* Sphere2D::operator=(const Sphere2D& sphere2D) {

        Point<int> local_28(sphere2D);
        *this = &local_28;
        m_radius = sphere2D.m_radius;
        m_valid = sphere2D.m_valid;
        return this;
    }

} // namespace jag::math

namespace jag {
    // 0x1004491f0
    char const* ToText<16, true>(eastl::fixed_string<char, 16>& str, const math::Vector3T<float>& vector3) {
        char local_68[16];
        char local_58[16];
        char local_48[24];

        uint64_t uVar1 = ToText(local_48, 16, *(float*)vector3, 10);
        uint64_t uVar2 = ToText(local_58, 16, *(float*)(vector3 + 4), 10);
        uint64_t uVar3 = ToText(local_68, 16, *(float*)(vector3 + 8), 10);
        str.sprintf("{Vec3: %s, %s, %s}", uVar1, uVar2, uVar3);
        return (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x1004492b0
    char const* ToText<16, true>(eastl::fixed_string<char, 16>& str, const math::QuaternionT<float>& quaternion) {
        char local_78[16];
        char local_68[16];
        char local_58[16];
        char local_48[16];

        uint64_t uVar1 = ToText(local_48, 16, *(float*)quaternion, 10);
        uint64_t uVar2 = ToText(local_58, 16, *(float*)(quaternion + 4), 10);
        uint64_t uVar3 = ToText(local_68, 16, *(float*)(quaternion + 8), 10);
        uint64_t uVar4 = ToText(local_78, 16, *(float*)(quaternion + 12), 10);
        str.sprintf("{Quat: %s, %s, %s, %s}", uVar1, uVar2, uVar3, uVar4);
        return (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

} // namespace jag
