// libs/math/primitives/OBB.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::math {
    class OBB {
    public:
        void GetCentrePos() const;
        void GetPos() const;
        Option<float>* GetOri() const;
        uint8_t* GetHalfSize();
        uint8_t* GetHalfSize() const;
        void SetHalfSize(const Vector3T<float>& vector3);
        OBB(const Vector3T<float>& vector31, const Matrix33T<float>& matrix33, const Vector3T<float>& vector32);
        OBB* operator=(const OBB& obb);
        OBB(const OBB& obb);
        OBB(OBB&& obb);
        OBB();
        auto GetTransform() const;
        void Set(const Vector3T<float>& vector31, const Matrix33T<float>& matrix33, const Vector3T<float>& vector32);
        OBB(const AABB& aabb);
        void Set(const AABB& aabb);
        AABB* GetMinimumEnclosingAABB(AABB& aabb) const;
        AABB* GetMaximumContainedAABB(AABB& aabb) const;
        void GetMinimumRadius() const;
        Sphere* GetMinimumEnclosingSphere(Sphere& sphere) const;
        void GetMaximumRadius() const;
        Sphere* GetMaximumContainedSphere(Sphere& sphere) const;
        Sphere* GetApproxMinimumEnclosingSphere(Sphere& sphere) const;
        uint64_t GetCornerPos(BoxCorner boxCorner) const;
        uint64_t GetLocalCornerPos(BoxCorner boxCorner) const;
        bool IsInside(const Vector3T<float>& vector3) const;
        unsigned long IsInside(const OBB& obb) const;
        void Transform(const Matrix44T<float>& matrix44);

    private:
        float field_0;
        float field_4;
        float field_8;
        uint32_t field_12;
        uint64_t m_halfSize;
        uint32_t field_24;
        uint32_t field_28;
        uint64_t field_32;
        uint64_t field_40;
        uint64_t field_48;
        uint64_t field_56;
        uint32_t field_64;
        uint8_t _unknown_68[4];
    };

    // 0x1007bd480
    OBB::OBB(const Vector3T<float>& vector31, const Matrix33T<float>& matrix33, const Vector3T<float>& vector32) {
        field_8 = *(float*)(vector31 + 8);
        uint64_t uVar1 = *(uint64_t*)vector31;
        field_0 = (float)(int)uVar1;
        field_4 = (float)(int)((unsigned long)uVar1 >> 32);
        field_12 = 0;
        m_halfSize = *(uint64_t*)vector32;
        field_24 = *(uint32_t*)(vector32 + 8);
        field_28 = 0;
        uVar1 = *(uint64_t*)(matrix33 + 8);
        uint64_t uVar2 = *(uint64_t*)(matrix33 + 16);
        uint64_t uVar3 = *(uint64_t*)(matrix33 + 24);
        field_32 = *(uint64_t*)matrix33;
        field_40 = uVar1;
        field_48 = uVar2;
        field_56 = uVar3;
        field_64 = *(uint32_t*)(matrix33 + 32);
    }

    // 0x1008cd7d0
    OBB::OBB(const OBB& obb) : field_8(obb.field_8) {
        float fVar4 = obb.field_4;
        field_0 = obb.field_0;
        field_4 = fVar4;
        field_12 = 0;
        field_24 = obb.field_24;
        m_halfSize = obb.m_halfSize;
        field_28 = 0;
        uint64_t uVar1 = obb.field_40;
        uint64_t uVar2 = obb.field_48;
        uint64_t uVar3 = obb.field_56;
        field_32 = obb.field_32;
        field_40 = uVar1;
        field_48 = uVar2;
        field_56 = uVar3;
        field_64 = obb.field_64;
    }

    // 0x10093f210
    OBB::OBB() : Vector3T(), field_12(0), field_28(0) {}

    // 0x100c60f60
    auto OBB::GetTransform() const {
        Matrix33T<float> local_80;
        Matrix33T<float> local_58;

        uint64_t* this_00 = &m_halfSize;
        auto pfVar1 = this_00->SSOBeginPtr();
        float local_30 = *pfVar1;
        pfVar1 = (float*)this_00->y();
        float local_2c = *pfVar1;
        pfVar1 = (float*)this_00->second();
        Matrix33Scaling<float>(local_30, local_2c, *pfVar1);
        local_58* local_80;
        return auto(local_58, *this);
    }

    // 0x100c671d0
    void OBB::Set(const Vector3T<float>& vector31, const Matrix33T<float>& matrix33, const Vector3T<float>& vector32) {
        SetXYZ(vector31);
        m_halfSize.SetXYZ(vector32);
        field_32 = matrix33;
    }

    // 0x100c67700
    Vector3T<float> Vector3Max<float>(const Vector3T<float>& vector31, const Vector3T<float>& vector32) {
        uint64_t uVar2;

        auto pfVar1 = std::max<float>(vector31, vector32);
        float local_20 = *pfVar1;
        pfVar1 = std::max<float>(*((vector31 + 4)), *((vector32 + 4)));
        float local_1c = *pfVar1;
        pfVar1 = std::max<float>(*((vector31 + 8)), *((vector32 + 8)));
        ColourHSL local_30(local_20, local_1c, *pfVar1);
        uVar2._0_4_ = local_30.field_0;
        uVar2._4_4_ = local_30.field_4;
        return uVar2;
    }

    // 0x100c67780
    Vector3T<float> Vector3Min<float>(const Vector3T<float>& vector31, const Vector3T<float>& vector32) {
        uint64_t uVar2;

        auto pfVar1 = std::min<float>(vector31, vector32);
        float local_20 = *pfVar1;
        pfVar1 = std::min<float>(*((vector31 + 4)), *((vector32 + 4)));
        float local_1c = *pfVar1;
        pfVar1 = std::min<float>(*((vector31 + 8)), *((vector32 + 8)));
        ColourHSL local_30(local_20, local_1c, *pfVar1);
        uVar2._0_4_ = local_30.field_0;
        uVar2._4_4_ = local_30.field_4;
        return uVar2;
    }

    // 0x100c67860
    bool Vector3T<float>::SloppyCompare(const Vector3T<float>& vector3, float arg2) const {
        float extraout_XMM0_Da;

        float fVar1 = (float)::abs(*(float*)this - *(float*)vector3);
        if ((fVar1 < arg2) && (fVar1 = (float)::abs(*(float*)(this + 4) - *(float*)(vector3 + 4)), fVar1 < arg2)) {
            ::abs(*(float*)(this + 8) - *(float*)(vector3 + 8));
            return extraout_XMM0_Da < arg2;
        }
        return false;
    }

    // 0x100c6ba20
    void OBB::GetMinimumRadius() const {
        m_halfSize.MinElement();
    }

    // 0x100c6ba70
    void OBB::GetMaximumRadius() const {
        m_halfSize.Length();
    }

} // namespace jag::math
