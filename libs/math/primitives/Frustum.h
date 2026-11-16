// libs/math/primitives/Frustum.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::math {
    class Frustum {
    public:
        GetViewProjMatrix() const;
        Frustum();
        Frustum* operator=(Frustum const&);
        Frustum* operator=(Frustum&&);
        bool IsValid() const;
        void Resize(float);
        ulong IsInside(Frustum const&) const;
        void GetPlane(FrustumPlane);
        Frustum(Matrix44T<float> const&, Matrix44T<float> const&);
        Frustum* GetBoundaryEdges() const;
        void GetPlane(FrustumPlane) const;
        void Set(Matrix44T<float> const&, Matrix44T<float> const&);
        void Set(std::array<Vector3T<float>, 4ul> const&, Vector3T<float> const&, float);
        GetCornerPos(BoxCorner) const;
        void GetNearTopLeft() const;
        void GetNearTopRight() const;
        void GetNearBottomLeft() const;
        void GetNearBottomRight() const;
        void GetFarTopLeft() const;
        void GetFarTopRight() const;
        void GetFarBottomLeft() const;
        void GetFarBottomRight() const;
        GetBoundaryPoints() const;
        Frustum* Translate(float);
        Frustum* Translate(Vector3T<float> const&);
        byte TestIntersection(Vector3T<float> const&) const;
        char TestIntersection(Sphere const&) const;
        TestIntersection(AABB const&) const;
        TestIntersectionSSE(AABB const&) const;
        TestIntersection(OBB const&) const;
        char TestIntersectionSSE(OBB const&) const;
        TestIntersection(PlaneT<float> const&) const;
        TestIntersection(Vector3T<float>&, Vector3T<float> const&, Vector3T<float> const&, float) const;
        char TestIntersection(Frustum const&) const;
        bool TestIntersectionScalar(AABB const&) const;
        char TestIntersectionScalar(OBB const&) const;
        char TestIntersection(Capsule3D const&) const;
        GetMinimumEnclosingAABB() const;

        // data members, from how the methods use this: 104 bytes
        undefined8 field_0;  // offset 0
        undefined4 field_8;  // offset 8
        undefined8 field_12; // offset 12
        undefined4 field_20; // offset 20
        undefined8 field_24; // offset 24
        undefined4 field_32; // offset 32
        undefined8 field_36; // offset 36
        undefined4 field_44; // offset 44
        undefined8 field_48; // offset 48
        undefined4 field_56; // offset 56
        undefined8 field_60; // offset 60
        undefined4 field_68; // offset 68
        undefined8 field_72; // offset 72
        undefined4 field_80; // offset 80
        undefined8 field_84; // offset 84
        undefined4 field_92; // offset 92
        char _unknown_96[8];
    };

    // 0x1001cf470, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // Frustum::Frustum(): jumps straight to the base-object constructor

    // 0x1001d07e0, 48 bytes, inline, placed by class name
    // Frustum::operator=(Frustum const&)
    /* Frustum::TEMPNAMEPLACEHOLDERVALUE(Frustum&&) */

    Frustum* Frustum::operator=(Frustum* param_1) {
        std::array<PlaneT<float>, 6ul>::operator=((array<PlaneT<float>, 6ul>*)this, (array*)param_1);
        Matrix44T<float>::operator=((Matrix44T<float>*)&field_96, (Matrix44T*)&param_1->field_96);
        return this;
    }

    // 0x1001df3f0, 48 bytes, base-object constructor, inline, placed by class name
    // Frustum::Frustum()
    void Frustum::Frustum() {
        new (this) std::array<PlaneT<float>, 6ul>();
        new (&field_96) Matrix44T<float>();
    }

    // 0x10048cfd0, 64 bytes, inline, placed by class name
    // Frustum::IsValid() const
    bool Frustum::IsValid() {
        Vector3T* pVVar1;
        Vector3T* pVVar2;

        pVVar1 = (Vector3T*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 5);
        pVVar2 = (Vector3T*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 4);
        return Vector3Dot<float>(pVVar1, pVVar2) == -1.0;
    }

    // 0x1007e4d80, 16 bytes, complete-object constructor, inline, placed by class name
    // Frustum::Frustum(Matrix44T<float> const&, Matrix44T<float> const&): jumps straight to the base-object constructor

    // 0x1007e8600, 64 bytes, base-object constructor, inline, placed by class name
    // Frustum::Frustum(Matrix44T<float> const&, Matrix44T<float> const&)
    void Frustum::Frustum(Matrix44T* param_1, Matrix44T* param_2) {
        new (this) std::array<PlaneT<float>, 6ul>();
        new (&field_96) Matrix44T<float>();
        Set(this, param_1, param_2);
    }

    // 0x1009c7cc0, 64 bytes, inline, placed by class name
    // Frustum::GetBoundaryEdges() const
    Frustum* Frustum::GetBoundaryEdges() {
        undefined1 local_78[96];

        GetBoundaryPoints((Frustum*)local_78);
        GetBoxEdges((math*)this, (array*)local_78);
        return this;
    }

    // 0x1009d76d0, 16 bytes, inline, placed by class name
    // Frustum::GetPlane(FrustumPlane) const
    void Frustum::GetPlane(uint param_2) {
        std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, (ulong)param_2);
    }

    // 0x100c6a1f0, 80 bytes, inline, placed by class name
    // Frustum::GetNearTopLeft() const
    void Frustum::GetNearTopLeft() {
        PlaneT* pPVar1;
        PlaneT* pPVar2;
        PlaneT* pPVar3;

        pPVar1 = (PlaneT*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 5);
        pPVar2 = (PlaneT*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 3);
        pPVar3 = (PlaneT*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 1);
        PlaneT<float>::GetIntersectionPoint(pPVar1, pPVar2, pPVar3);
    }

    // 0x100c6a240, 80 bytes, inline, placed by class name
    // Frustum::GetNearTopRight() const
    void Frustum::GetNearTopRight() {
        PlaneT* pPVar1;
        PlaneT* pPVar2;
        PlaneT* pPVar3;

        pPVar1 = (PlaneT*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 5);
        pPVar2 = (PlaneT*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 3);
        pPVar3 = (PlaneT*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 0);
        PlaneT<float>::GetIntersectionPoint(pPVar1, pPVar2, pPVar3);
    }

    // 0x100c6a290, 80 bytes, inline, placed by class name
    // Frustum::GetNearBottomLeft() const
    void Frustum::GetNearBottomLeft() {
        PlaneT* pPVar1;
        PlaneT* pPVar2;
        PlaneT* pPVar3;

        pPVar1 = (PlaneT*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 5);
        pPVar2 = (PlaneT*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 2);
        pPVar3 = (PlaneT*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 1);
        PlaneT<float>::GetIntersectionPoint(pPVar1, pPVar2, pPVar3);
    }

    // 0x100c6a2e0, 80 bytes, inline, placed by class name
    // Frustum::GetNearBottomRight() const
    void Frustum::GetNearBottomRight() {
        PlaneT* pPVar1;
        PlaneT* pPVar2;
        PlaneT* pPVar3;

        pPVar1 = (PlaneT*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 5);
        pPVar2 = (PlaneT*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 2);
        pPVar3 = (PlaneT*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 0);
        PlaneT<float>::GetIntersectionPoint(pPVar1, pPVar2, pPVar3);
    }

    // 0x100c6a330, 80 bytes, inline, placed by class name
    // Frustum::GetFarTopLeft() const
    void Frustum::GetFarTopLeft() {
        PlaneT* pPVar1;
        PlaneT* pPVar2;
        PlaneT* pPVar3;

        pPVar1 = (PlaneT*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 4);
        pPVar2 = (PlaneT*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 3);
        pPVar3 = (PlaneT*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 1);
        PlaneT<float>::GetIntersectionPoint(pPVar1, pPVar2, pPVar3);
    }

    // 0x100c6a380, 80 bytes, inline, placed by class name
    // Frustum::GetFarTopRight() const
    void Frustum::GetFarTopRight() {
        PlaneT* pPVar1;
        PlaneT* pPVar2;
        PlaneT* pPVar3;

        pPVar1 = (PlaneT*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 4);
        pPVar2 = (PlaneT*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 3);
        pPVar3 = (PlaneT*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 0);
        PlaneT<float>::GetIntersectionPoint(pPVar1, pPVar2, pPVar3);
    }

    // 0x100c6a3d0, 80 bytes, inline, placed by class name
    // Frustum::GetFarBottomLeft() const
    void Frustum::GetFarBottomLeft() {
        PlaneT* pPVar1;
        PlaneT* pPVar2;
        PlaneT* pPVar3;

        pPVar1 = (PlaneT*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 4);
        pPVar2 = (PlaneT*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 2);
        pPVar3 = (PlaneT*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 1);
        PlaneT<float>::GetIntersectionPoint(pPVar1, pPVar2, pPVar3);
    }

    // 0x100c6a420, 80 bytes, inline, placed by class name
    // Frustum::GetFarBottomRight() const
    void Frustum::GetFarBottomRight() {
        PlaneT* pPVar1;
        PlaneT* pPVar2;
        PlaneT* pPVar3;

        pPVar1 = (PlaneT*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 4);
        pPVar2 = (PlaneT*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 2);
        pPVar3 = (PlaneT*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 0);
        PlaneT<float>::GetIntersectionPoint(pPVar1, pPVar2, pPVar3);
    }

} // namespace jag::math

namespace jag::graphics {
    class Frustum {
    public:
        Frustum(math::Matrix44T<float> const&);
        void Set(math::Matrix44T<float> const&);

        // data members, from how the methods use this: 28 bytes
        undefined8 field_0; // offset 0
        undefined8 field_8; // offset 8
        char _unknown_16[4];
        undefined4 field_20; // offset 20
        char _unknown_24[4];
    };

    // 0x1008b27f0, 16 bytes, complete-object constructor, inline, placed by class name
    // Frustum::Frustum(math::Matrix44T<float> const&): jumps straight to the base-object constructor

    // 0x1008cd820, 32 bytes, base-object constructor, inline, placed by class name
    // Frustum::Frustum(math::Matrix44T<float> const&)
    void Frustum::Frustum(Matrix44T* param_1) {
        field_20 = 0;
        field_0 = 0;
        field_8 = 0;
        Set(this, param_1);
    }

    // 0x1008cd840, 992 bytes, inline, placed by class name
    // Frustum::Set(math::Matrix44T<float> const&)
    void Frustum::Set(Matrix44T* param_1) {
        Frustum* pFVar1;
        Vector4T* pVVar2;
        Rect<float>* this_00;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar3;
        float* pfVar4;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_01;
        QuaternionT<float>* this_02;
        QuaternionT<float>* this_03;
        vector* pvVar5;
        undefined4* puVar6;
        ulong uVar7;
        Rect* pRVar8;
        undefined8 uVar9;
        undefined4 uVar10;
        undefined4 uVar11;
        Matrix44T local_188;
        array<math::Vector4T<float>, 6ul> local_148[96];
        ImVec4 local_e8[16];
        ImVec4 local_d8[16];
        ImVec4 local_c8[16];
        ImVec4 local_b8[16];
        ImVec4 local_a8[16];
        ImVec4 local_98[24];
        Frustum* local_80;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* local_78;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* local_70;
        Vector4T<float> local_68[16];
        undefined8 local_58;
        undefined4 uStack_50;
        undefined4 uStack_4c;
        undefined8 local_48;
        undefined4 uStack_40;
        undefined4 uStack_3c;

        local_80 = this;
        ImVec4::ImVec4(local_e8, 1.0, 0.0, 1.0, 1.0);
        ImVec4::ImVec4(local_d8, -1.0, 0.0, 1.0, 1.0);
        ImVec4::ImVec4(local_c8, 0.0, 1.0, 1.0, 1.0);
        ImVec4::ImVec4(local_b8, 0.0, -1.0, 1.0, 1.0);
        ImVec4::ImVec4(local_a8, 0.0, 0.0, 1.0, 1.0);
        uVar10 = 0;
        uVar11 = 0;
        ImVec4::ImVec4(local_98, 0.0, 0.0, 0.0, 1.0);
        new (&local_188) math::Matrix44T<float>();
        uVar7 = 0;
        math::Matrix44Inverse<float>(&local_188, (float*)0, param_1);
        std::array<math::Vector4T<float>, 6ul>::array(local_148);
        do {
            pVVar2 = (Vector4T*)std::array<math::Vector4T<float>, 6ul>::operator[](
                (array<math::Vector4T<float>, 6ul>*)local_e8, uVar7);
            uVar9 = math::operator*(pVVar2, &local_188);
            uStack_40 = uVar10;
            uStack_3c = uVar11;
            local_48 = uVar9;
            this_00 = (Rect<float>*)std::array<math::Vector4T<float>, 6ul>::operator[](local_148, uVar7);
            math::Rect<float>::operator=(this_00, (Rect*)&local_48);
            uVar7 = uVar7 + 1;
        } while (uVar7 != 6);
        pcVar3 =
            (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                 eastl::allocator, 0>*)std::array<math::Vector4T<float>, 6ul>::operator[](local_148, 0);
        local_78 = pcVar3;
        pfVar4 =
            (float*)eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(pcVar3);
        math::Vector4T<float>::Vector4T(local_68, *pfVar4);
        local_58 = math::Vector4Reciprocal<float>((Vector4T*)local_68);
        uStack_50 = uVar10;
        uStack_4c = uVar11;
        uVar9 = math::operator*((Vector4T*)pcVar3, (Vector4T*)&local_58);
        uStack_40 = uVar10;
        uStack_3c = uVar11;
        local_48 = uVar9;
        math::Rect<float>::operator=((Rect<float>*)pcVar3, (Rect*)&local_48);
        pcVar3 =
            (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                 eastl::allocator, 0>*)std::array<math::Vector4T<float>, 6ul>::operator[](local_148, 1);
        local_70 = pcVar3;
        pfVar4 =
            (float*)eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(pcVar3);
        math::Vector4T<float>::Vector4T(local_68, *pfVar4);
        uVar9 = math::Vector4Reciprocal<float>((Vector4T*)local_68);
        uStack_50 = uVar10;
        uStack_4c = uVar11;
        local_58 = uVar9;
        uVar9 = math::operator*((Vector4T*)pcVar3, (Vector4T*)&local_58);
        uStack_40 = uVar10;
        uStack_3c = uVar11;
        local_48 = uVar9;
        math::Rect<float>::operator=((Rect<float>*)pcVar3, (Rect*)&local_48);
        pcVar3 =
            (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                 eastl::allocator, 0>*)std::array<math::Vector4T<float>, 6ul>::operator[](local_148, 2);
        pfVar4 =
            (float*)eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(pcVar3);
        math::Vector4T<float>::Vector4T(local_68, *pfVar4);
        uVar9 = math::Vector4Reciprocal<float>((Vector4T*)local_68);
        uStack_50 = uVar10;
        uStack_4c = uVar11;
        local_58 = uVar9;
        uVar9 = math::operator*((Vector4T*)pcVar3, (Vector4T*)&local_58);
        uStack_40 = uVar10;
        uStack_3c = uVar11;
        local_48 = uVar9;
        math::Rect<float>::operator=((Rect<float>*)pcVar3, (Rect*)&local_48);
        this_01 =
            (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                 eastl::allocator, 0>*)std::array<math::Vector4T<float>, 6ul>::operator[](local_148, 3);
        pfVar4 =
            (float*)eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_01);
        math::Vector4T<float>::Vector4T(local_68, *pfVar4);
        uVar9 = math::Vector4Reciprocal<float>((Vector4T*)local_68);
        uStack_50 = uVar10;
        uStack_4c = uVar11;
        local_58 = uVar9;
        uVar9 = math::operator*((Vector4T*)this_01, (Vector4T*)&local_58);
        uStack_40 = uVar10;
        uStack_3c = uVar11;
        local_48 = uVar9;
        math::Rect<float>::operator=((Rect<float>*)this_01, (Rect*)&local_48);
        this_02 = (QuaternionT<float>*)std::array<math::Vector4T<float>, 6ul>::operator[](local_148, 4);
        pfVar4 = (float*)math::QuaternionT<float>::qw(this_02);
        math::Vector4T<float>::Vector4T(local_68, *pfVar4);
        uVar9 = math::Vector4Reciprocal<float>((Vector4T*)local_68);
        uStack_50 = uVar10;
        uStack_4c = uVar11;
        local_58 = uVar9;
        uVar9 = math::operator*((Vector4T*)this_02, (Vector4T*)&local_58);
        uStack_40 = uVar10;
        uStack_3c = uVar11;
        local_48 = uVar9;
        math::Rect<float>::operator=((Rect<float>*)this_02, (Rect*)&local_48);
        this_03 = (QuaternionT<float>*)std::array<math::Vector4T<float>, 6ul>::operator[](local_148, 5);
        pfVar4 = (float*)math::QuaternionT<float>::qw(this_03);
        math::Vector4T<float>::Vector4T(local_68, *pfVar4);
        uVar9 = math::Vector4Reciprocal<float>((Vector4T*)local_68);
        uStack_50 = uVar10;
        uStack_4c = uVar11;
        local_58 = uVar9;
        uVar9 = math::operator*((Vector4T*)this_03, (Vector4T*)&local_58);
        pRVar8 = (Rect*)&local_48;
        uStack_40 = uVar10;
        uStack_3c = uVar11;
        local_48 = uVar9;
        math::Rect<float>::operator=((Rect<float>*)this_03, pRVar8);
        pvVar5 = local_78->SSOBeginPtr(pRVar8);
        pFVar1 = local_80;
        *(undefined4*)&local_80->field_0 = *(undefined4*)pvVar5;
        pvVar5 = local_70->SSOBeginPtr(pRVar8);
        *(undefined4*)((long)&pFVar1->field_0 + 4) = *(undefined4*)pvVar5;
        puVar6 = (undefined4*)pcVar3->y();
        *(undefined4*)&pFVar1->field_8 = *puVar6;
        puVar6 = (undefined4*)this_01->y();
        *(undefined4*)((long)&pFVar1->field_8 + 4) = *puVar6;
        puVar6 = (undefined4*)this_02->second();
        *(undefined4*)&pFVar1->field_16 = *puVar6;
        puVar6 = (undefined4*)this_03->second();
        pFVar1->field_20 = *puVar6;
    }

} // namespace jag::graphics
