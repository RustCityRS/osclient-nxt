// libs/math/primitives/Frustum.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::math {
    class Frustum {
    public:
        uint8_t* GetViewProjMatrix() const;
        Frustum();
        Frustum* operator=(const Frustum& frustum);
        Frustum* operator=(Frustum&& frustum);
        bool IsValid() const;
        void Resize(float arg1);
        unsigned long IsInside(const Frustum& frustum) const;
        PlaneT<float>* GetPlane(FrustumPlane frustumPlane);
        Frustum(const Matrix44T<float>& matrix441, const Matrix44T<float>& matrix442);
        Frustum* GetBoundaryEdges() const;
        PlaneT<float>* GetPlane(FrustumPlane frustumPlane) const;
        void Set(const Matrix44T<float>& matrix441, const Matrix44T<float>& matrix442);
        void Set(const std::array<Vector3T<float>, 4ul>& vector3s, const Vector3T<float>& vector3, float arg3);
        uint64_t GetCornerPos(BoxCorner boxCorner) const;
        void GetNearTopLeft() const;
        void GetNearTopRight() const;
        void GetNearBottomLeft() const;
        void GetNearBottomRight() const;
        void GetFarTopLeft() const;
        void GetFarTopRight() const;
        void GetFarBottomLeft() const;
        void GetFarBottomRight() const;
        Frustum* GetBoundaryPoints() const;
        Frustum* Translate(float arg1);
        auto Translate(const Vector3T<float>& vector3);
        uint8_t TestIntersection(const Vector3T<float>& vector3) const;
        char TestIntersection(const Sphere& sphere) const;
        uint8_t TestIntersection(const AABB& aabb) const;
        uint8_t TestIntersectionSSE(const AABB& aabb) const;
        uint8_t TestIntersection(const OBB& obb) const;
        char TestIntersectionSSE(const OBB& obb) const;
        uint8_t TestIntersection(const PlaneT<float>& plane) const;
        uint8_t TestIntersection(Vector3T<float>& vector31, const Vector3T<float>& vector32,
                                 const Vector3T<float>& vector33, float arg4) const;
        char TestIntersection(const Frustum& frustum) const;
        bool TestIntersectionScalar(const AABB& aabb) const;
        char TestIntersectionScalar(const OBB& obb) const;
        char TestIntersection(const Capsule3D& capsule3D) const;
        Frustum* GetMinimumEnclosingAABB() const;

    private:
        uint64_t field_0;
        uint32_t field_8;
        uint64_t field_12;
        uint32_t field_20;
        uint64_t field_24;
        uint32_t field_32;
        uint64_t field_36;
        uint32_t field_44;
        uint64_t field_48;
        uint32_t field_56;
        uint64_t field_60;
        uint32_t field_68;
        uint64_t field_72;
        uint32_t field_80;
        uint64_t field_84;
        uint32_t field_92;
        uint8_t _unknown_96[8];
    };

    // 0x1001d07e0
    Frustum* Frustum::operator=(const Frustum& frustum) {
        *this = frustum;
        field_96 = frustum.field_96;
        return this;
    }

    // 0x1001df3f0
    Frustum::Frustum() : std::array<PlaneT<float>, 6ul>() {}

    // 0x10048cfd0
    bool Frustum::IsValid() const {
        Vector3T<float>* vector31 = (Vector3T<float>*)(*this)[5];
        Vector3T<float>* vector32 = (Vector3T<float>*)(*this)[4];
        return Vector3Dot<float>(vector31, vector32) == -1.0;
    }

    // 0x1007e8600
    Frustum::Frustum(const Matrix44T<float>& matrix441, const Matrix44T<float>& matrix442)
        : std::array<PlaneT<float>, 6ul>() {
        Set(matrix441, matrix442);
    }

    // 0x1009c7cc0
    Frustum* Frustum::GetBoundaryEdges() const {
        uint8_t local_78[96];

        GetBoundaryPoints((Frustum*)local_78);
        GetBoxEdges((array<Vector3T<float>, _8ul>*)this);
        return this;
    }

    // 0x1009d76d0
    PlaneT<float>* Frustum::GetPlane(FrustumPlane frustumPlane) const {
        return (PlaneT<float>*)(*this)[(unsigned long)frustumPlane];
    }

    // 0x100c6a1f0
    void Frustum::GetNearTopLeft() const {
        PlaneT<float>* plane1 = (PlaneT<float>*)(*this)[5];
        PlaneT<float>* plane2 = (PlaneT<float>*)(*this)[3];
        PlaneT<float>* plane3 = (PlaneT<float>*)(*this)[1];
        PlaneT<float>::GetIntersectionPoint(*plane1, *plane2, *plane3);
    }

    // 0x100c6a240
    void Frustum::GetNearTopRight() const {
        PlaneT<float>* plane1 = (PlaneT<float>*)(*this)[5];
        PlaneT<float>* plane2 = (PlaneT<float>*)(*this)[3];
        PlaneT<float>* plane3 = (PlaneT<float>*)(*this)[0];
        PlaneT<float>::GetIntersectionPoint(*plane1, *plane2, *plane3);
    }

    // 0x100c6a290
    void Frustum::GetNearBottomLeft() const {
        PlaneT<float>* plane1 = (PlaneT<float>*)(*this)[5];
        PlaneT<float>* plane2 = (PlaneT<float>*)(*this)[2];
        PlaneT<float>* plane3 = (PlaneT<float>*)(*this)[1];
        PlaneT<float>::GetIntersectionPoint(*plane1, *plane2, *plane3);
    }

    // 0x100c6a2e0
    void Frustum::GetNearBottomRight() const {
        PlaneT<float>* plane1 = (PlaneT<float>*)(*this)[5];
        PlaneT<float>* plane2 = (PlaneT<float>*)(*this)[2];
        PlaneT<float>* plane3 = (PlaneT<float>*)(*this)[0];
        PlaneT<float>::GetIntersectionPoint(*plane1, *plane2, *plane3);
    }

    // 0x100c6a330
    void Frustum::GetFarTopLeft() const {
        PlaneT<float>* plane1 = (PlaneT<float>*)(*this)[4];
        PlaneT<float>* plane2 = (PlaneT<float>*)(*this)[3];
        PlaneT<float>* plane3 = (PlaneT<float>*)(*this)[1];
        PlaneT<float>::GetIntersectionPoint(*plane1, *plane2, *plane3);
    }

    // 0x100c6a380
    void Frustum::GetFarTopRight() const {
        PlaneT<float>* plane1 = (PlaneT<float>*)(*this)[4];
        PlaneT<float>* plane2 = (PlaneT<float>*)(*this)[3];
        PlaneT<float>* plane3 = (PlaneT<float>*)(*this)[0];
        PlaneT<float>::GetIntersectionPoint(*plane1, *plane2, *plane3);
    }

    // 0x100c6a3d0
    void Frustum::GetFarBottomLeft() const {
        PlaneT<float>* plane1 = (PlaneT<float>*)(*this)[4];
        PlaneT<float>* plane2 = (PlaneT<float>*)(*this)[2];
        PlaneT<float>* plane3 = (PlaneT<float>*)(*this)[1];
        PlaneT<float>::GetIntersectionPoint(*plane1, *plane2, *plane3);
    }

    // 0x100c6a420
    void Frustum::GetFarBottomRight() const {
        PlaneT<float>* plane1 = (PlaneT<float>*)(*this)[4];
        PlaneT<float>* plane2 = (PlaneT<float>*)(*this)[2];
        PlaneT<float>* plane3 = (PlaneT<float>*)(*this)[0];
        PlaneT<float>::GetIntersectionPoint(*plane1, *plane2, *plane3);
    }

} // namespace jag::math

namespace jag::graphics {
    class Frustum {
    public:
        Frustum(const math::Matrix44T<float>& matrix44);
        void Set(const math::Matrix44T<float>& matrix44);

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint8_t _unknown_16[4];
        uint32_t field_20;
        uint8_t _unknown_24[4];
    };

    // 0x1008cd820
    Frustum::Frustum(const math::Matrix44T<float>& matrix44) : field_20(0), field_0(0), field_8(0) {
        Set(matrix44);
    }

    // 0x1008cd840
    void Frustum::Set(const math::Matrix44T<float>& matrix44) {
        Vector4T<float>* vector4;
        Rect<float>* this_00;
        uint64_t uVar5;
        uint64_t local_48;
        uint32_t uStack_40;
        uint32_t uStack_3c;

        Frustum* local_80 = this;
        ImVec4 local_e8(1.0, 0.0, 1.0, 1.0);
        ImVec4 local_d8(-1.0, 0.0, 1.0, 1.0);
        ImVec4 local_c8(0.0, 1.0, 1.0, 1.0);
        ImVec4 local_b8(0.0, -1.0, 1.0, 1.0);
        ImVec4 local_a8(0.0, 0.0, 1.0, 1.0);
        ImVec4 local_98(0.0, 0.0, 0.0, 1.0);
        Matrix44T<float> local_188;
        unsigned long arg1 = 0;
        math::Matrix44Inverse<float>(local_188, nullptr, matrix44);
        array<math::Vector4T<float>, 6ul> local_148;
        do {
            vector4 = &local_e8[arg1];
            uVar5 = *vector4 * local_188;
            uStack_40 = 0;
            uStack_3c = 0;
            local_48 = uVar5;
            this_00 = &local_148[arg1];
            *this_00 = local_48;
            arg1 = arg1 + 1;
        } while (arg1 != 6);
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* pcVar2 = &local_148[0];
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* local_78 = pcVar2;
        auto pfVar3 = pcVar2->second();
        Vector4T<float> local_68(*pfVar3);
        uint64_t local_58 = math::Vector4Reciprocal<float>(local_68);
        uint32_t uStack_50 = 0;
        uint32_t uStack_4c = 0;
        uVar5 = *pcVar2 * local_58;
        uStack_40 = 0;
        uStack_3c = 0;
        local_48 = uVar5;
        *pcVar2 = local_48;
        pcVar2 = &local_148[1];
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* local_70 = pcVar2;
        pfVar3 = (float*)pcVar2->second();
        local_68 = math::Vector4T(*pfVar3);
        uVar5 = math::Vector4Reciprocal<float>(local_68);
        uStack_50 = 0;
        uStack_4c = 0;
        local_58 = uVar5;
        uVar5 = *pcVar2 * local_58;
        uStack_40 = 0;
        uStack_3c = 0;
        local_48 = uVar5;
        *pcVar2 = local_48;
        pcVar2 = &local_148[2];
        pfVar3 = (float*)pcVar2->second();
        local_68 = math::Vector4T(*pfVar3);
        uVar5 = math::Vector4Reciprocal<float>(local_68);
        uStack_50 = 0;
        uStack_4c = 0;
        local_58 = uVar5;
        uVar5 = *pcVar2 * local_58;
        uStack_40 = 0;
        uStack_3c = 0;
        local_48 = uVar5;
        *pcVar2 = local_48;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_01 = &local_148[3];
        pfVar3 = (float*)this_01->second();
        local_68 = math::Vector4T(*pfVar3);
        uVar5 = math::Vector4Reciprocal<float>(local_68);
        uStack_50 = 0;
        uStack_4c = 0;
        local_58 = uVar5;
        uVar5 = *this_01 * local_58;
        uStack_40 = 0;
        uStack_3c = 0;
        local_48 = uVar5;
        *this_01 = local_48;
        QuaternionT<float>* this_02 = &local_148[4];
        pfVar3 = (float*)this_02->qw();
        local_68 = math::Vector4T(*pfVar3);
        uVar5 = math::Vector4Reciprocal<float>(local_68);
        uStack_50 = 0;
        uStack_4c = 0;
        local_58 = uVar5;
        uVar5 = *this_02 * local_58;
        uStack_40 = 0;
        uStack_3c = 0;
        local_48 = uVar5;
        *this_02 = local_48;
        QuaternionT<float>* this_03 = &local_148[5];
        pfVar3 = (float*)this_03->qw();
        local_68 = math::Vector4T(*pfVar3);
        uVar5 = math::Vector4Reciprocal<float>(local_68);
        uStack_50 = 0;
        uStack_4c = 0;
        local_58 = uVar5;
        uVar5 = *this_03 * local_58;
        uStack_40 = 0;
        uStack_3c = 0;
        local_48 = uVar5;
        *this_03 = local_48;
        auto puVar4 = local_78->SSOBeginPtr();
        Frustum* pFVar1 = local_80;
        *(uint32_t*)&local_80->field_0 = *puVar4;
        puVar4 = (uint32_t*)local_70->SSOBeginPtr();
        *(uint32_t*)((long)&pFVar1->field_0 + 4) = *puVar4;
        puVar4 = (uint32_t*)pcVar2->y();
        *(uint32_t*)&pFVar1->field_8 = *puVar4;
        puVar4 = (uint32_t*)this_01->y();
        *(uint32_t*)((long)&pFVar1->field_8 + 4) = *puVar4;
        puVar4 = (uint32_t*)this_02->second();
        *(uint32_t*)&pFVar1->field_16 = *puVar4;
        puVar4 = (uint32_t*)this_03->second();
        pFVar1->field_20 = *puVar4;
    }

} // namespace jag::graphics
