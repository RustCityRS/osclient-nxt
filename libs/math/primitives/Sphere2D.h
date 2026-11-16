// libs/math/primitives/Sphere2D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::math {
    class Sphere2D {
    public:
        GetCentre() const;
        uint GetRadius() const;
        char IsValid() const;
        Sphere2D* operator=(Sphere2D const&);
        Sphere2D();
        PointInside(int, int, int) const;
        bool Set(Matrix44T<float> const&, Matrix44T<float> const&, Matrix44T<float> const&, int, int, AABB const&);

        // data members, from how the methods use this: 16 bytes
        uint field_0;  // offset 0
        uint field_4;  // offset 4
        uint m_radius; // offset 8
        char m_valid;  // offset 12
        char _unknown_13[3];
    };

    // 0x1004491e0, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Sphere2D::IsValid() const
    /* game::PositionPoint::Ready() const */

    char game::PositionPoint::Ready() {
        return field_12;
    }

    // 0x10048f8d0, 80 bytes, inline, placed by class name
    // Sphere2D::operator=(Sphere2D const&)
    /* Sphere2D::TEMPNAMEPLACEHOLDERVALUE(Sphere2D const&) */

    Sphere2D* Sphere2D::operator=(Sphere2D* param_1) {
        Point<int> local_28[8];

        Point<int>::Point(local_28, (Point*)param_1);
        Point<int>::operator=((Point<int>*)this, local_28);
        m_radius = param_1->m_radius;
        m_valid = param_1->m_valid;
        return this;
    }

} // namespace jag::math

namespace jag {
    // 0x1004491f0, 192 bytes, inline, placed by debug map only (low confidence)
    // char const* ToText<16, true>(eastl::fixed_string<char, 16, true, eastl::allocator>&, math::Vector3T<float> const&)
    char* ToText<16, true>(fixed_string* param_1, Vector3T* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        char* pcVar4;
        char local_68[16];
        char local_58[16];
        char local_48[24];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar1 = ToText(local_48, 16, *(float*)param_2, 10);
        uVar2 = ToText(local_58, 16, *(float*)(param_2 + 4), 10);
        uVar3 = ToText(local_68, 16, *(float*)(param_2 + 8), 10);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 16ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)param_1, "{Vec3: %s, %s, %s}", uVar1, uVar2, uVar3);
        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return pcVar4;
    }

    // 0x1004492b0, 224 bytes, inline, placed by debug map only (low confidence)
    // char const* ToText<16, true>(eastl::fixed_string<char, 16, true, eastl::allocator>&, math::QuaternionT<float> const&)
    char* ToText<16, true>(fixed_string* param_1, QuaternionT* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        char* pcVar5;
        char local_78[16];
        char local_68[16];
        char local_58[16];
        char local_48[16];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar1 = ToText(local_48, 16, *(float*)param_2, 10);
        uVar2 = ToText(local_58, 16, *(float*)(param_2 + 4), 10);
        uVar3 = ToText(local_68, 16, *(float*)(param_2 + 8), 10);
        uVar4 = ToText(local_78, 16, *(float*)(param_2 + 12), 10);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 16ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)param_1, "{Quat: %s, %s, %s, %s}", uVar1, uVar2, uVar3, uVar4);
        pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return pcVar5;
    }

} // namespace jag
