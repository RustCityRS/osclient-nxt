// libs/math/primitives/OBB.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.math

#include "OBB.h"

namespace jag::math {
    // 0x100009ca0: OBB::GetCentrePos() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100009ca0: OBB::GetPos() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x10002d850: OBB::GetOri() const has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x1000b9950: OBB::GetHalfSize() has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x1000b9950: OBB::GetHalfSize() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x1007b1020: OBB::SetHalfSize(Vector3T<float> const&) has the same machine code as Capsule3D::SetEndPoint(Vector3T<float> const&)

    // 0x1008cd7d0: OBB::OBB(OBB&&) has the same machine code as OBB::OBB(OBB const&)

    // 0x100c6b7f0
    OBB::OBB(const AABB& aabb) : Vector3T(), field_12(0), field_28(0) {
        aabb.GetOBB(*this);
    }

    // 0x100c6b850
    void OBB::Set(const AABB& aabb) {
        uint64_t local_30[2];

        local_30[0] = aabb.GetCentrePos();
        Set(*local_30);
        field_32.SetToIdentity();
        float local_20 = (float)aabb.GetWidth();
        float local_1c = (float)aabb.GetHeight();
        float arg3 = (float)aabb.GetLength();
        m_halfSize.Set(local_20, local_1c, arg3);
        m_halfSize *= 0.5;
    }

    // 0x100c6b950
    AABB* OBB::GetMinimumEnclosingAABB(AABB& aabb) const {
        aabb.Set(*this);
        return aabb;
    }

    // 0x100c6b970
    AABB* OBB::GetMaximumContainedAABB(AABB& aabb) const {
        float local_28 = (float)GetMinimumRadius();
        float local_24 = (float)GetMinimumRadius();
        float arg3 = (float)GetMinimumRadius();
        float fVar2 = local_24;
        ColourHSL local_58(local_28, local_24, arg3);
        auto pVVar1 = SSOBeginPtr();
        uint64_t local_48 = *pVVar1 - local_58;
        float local_40 = fVar2;
        pVVar1 = (Vector3T<float>*)SSOBeginPtr();
        uint64_t local_38 = *pVVar1 + local_58;
        float local_30 = fVar2;
        aabb.Set(local_48, local_38);
        return aabb;
    }

    // 0x100c6ba30
    Sphere* OBB::GetMinimumEnclosingSphere(Sphere& sphere) const {
        auto vector3 = SSOBeginPtr();
        float arg2 = (float)GetMaximumRadius();
        sphere.Set(*vector3, arg2);
        return sphere;
    }

    // 0x100c6ba80
    Sphere* OBB::GetMaximumContainedSphere(Sphere& sphere) const {
        auto vector3 = SSOBeginPtr();
        float arg2 = (float)GetMinimumRadius();
        sphere.Set(*vector3, arg2);
        return sphere;
    }

    // 0x100c6bac0
    Sphere* OBB::GetApproxMinimumEnclosingSphere(Sphere& sphere) const {
        auto vector3 = SSOBeginPtr();
        float arg2 = (float)m_halfSize.MaxElement();
        sphere.Set(*vector3, arg2);
        return sphere;
    }

    // 0x100c6bb50
    uint64_t OBB::GetCornerPos(BoxCorner boxCorner) const {
        return local_28;

        local_28[0] = GetLocalCornerPos(boxCorner);
        local_28 *= &field_32;
        local_28 += *this;
        return local_28[0];
    }

    // 0x100c6bba0
    uint64_t OBB::GetLocalCornerPos(BoxCorner boxCorner) const {
        float* pfVar1;
        uint64_t* puVar2;
        uint64_t uVar4;
        uint64_t uVar3;
        float arg3;
        float local_38;
        uint32_t uStack_34;
        uint32_t uStack_30;
        uint32_t uStack_2c;
        float local_28;
        uint32_t uStack_24;
        uint32_t uStack_20;
        uint32_t uStack_1c;

        if (7 < (int)boxCorner) {
            LogAssert("static_cast<int>(boxCorner) < BOX_CORNER_NTYPES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/primitives/OBB.cpp",
                      70, nullptr);
        }
        switch (boxCorner) {
        case 0:
            puVar2 = &m_halfSize;
            pfVar1 = (float*)puVar2->SSOBeginPtr();
            local_38 = -*pfVar1;
            uStack_34 = 2147483648;
            uStack_30 = 2147483648;
            uStack_2c = 2147483648;
            pfVar1 = (float*)puVar2->y();
            local_28 = *pfVar1;
            pfVar1 = (float*)puVar2->second();
            arg3 = -*pfVar1;
            break;
        case 1:
            puVar2 = &m_halfSize;
            pfVar1 = (float*)puVar2->SSOBeginPtr();
            local_38 = *pfVar1;
            pfVar1 = (float*)puVar2->y();
            local_28 = *pfVar1;
            pfVar1 = (float*)puVar2->second();
            arg3 = -*pfVar1;
            break;
        case 2:
            puVar2 = &m_halfSize;
            pfVar1 = (float*)puVar2->SSOBeginPtr();
            local_38 = -*pfVar1;
            uStack_34 = 2147483648;
            uStack_30 = 2147483648;
            uStack_2c = 2147483648;
            pfVar1 = (float*)puVar2->y();
            local_28 = -*pfVar1;
            uStack_24 = 2147483648;
            uStack_20 = 2147483648;
            uStack_1c = 2147483648;
            pfVar1 = (float*)puVar2->second();
            arg3 = -*pfVar1;
            break;
        case 3:
            puVar2 = &m_halfSize;
            pfVar1 = (float*)puVar2->SSOBeginPtr();
            local_38 = *pfVar1;
            pfVar1 = (float*)puVar2->y();
            local_28 = -*pfVar1;
            uStack_24 = 2147483648;
            uStack_20 = 2147483648;
            uStack_1c = 2147483648;
            pfVar1 = (float*)puVar2->second();
            arg3 = -*pfVar1;
            break;
        case 4:
            puVar2 = &m_halfSize;
            pfVar1 = (float*)puVar2->SSOBeginPtr();
            local_38 = -*pfVar1;
            uStack_34 = 2147483648;
            uStack_30 = 2147483648;
            uStack_2c = 2147483648;
            pfVar1 = (float*)puVar2->y();
            local_28 = *pfVar1;
            pfVar1 = (float*)puVar2->second();
            arg3 = *pfVar1;
            break;
        case 5:
            puVar2 = &m_halfSize;
            pfVar1 = (float*)puVar2->SSOBeginPtr();
            local_38 = *pfVar1;
            pfVar1 = (float*)puVar2->y();
            local_28 = *pfVar1;
            pfVar1 = (float*)puVar2->second();
            arg3 = *pfVar1;
            break;
        case 6:
            puVar2 = &m_halfSize;
            pfVar1 = (float*)puVar2->SSOBeginPtr();
            local_38 = -*pfVar1;
            uStack_34 = 2147483648;
            uStack_30 = 2147483648;
            uStack_2c = 2147483648;
            pfVar1 = (float*)puVar2->y();
            local_28 = -*pfVar1;
            uStack_24 = 2147483648;
            uStack_20 = 2147483648;
            uStack_1c = 2147483648;
            pfVar1 = (float*)puVar2->second();
            arg3 = *pfVar1;
            break;
        case 7:
            puVar2 = &m_halfSize;
            pfVar1 = (float*)puVar2->SSOBeginPtr();
            local_38 = *pfVar1;
            pfVar1 = (float*)puVar2->y();
            local_28 = -*pfVar1;
            uStack_24 = 2147483648;
            uStack_20 = 2147483648;
            uStack_1c = 2147483648;
            pfVar1 = (float*)puVar2->second();
            arg3 = *pfVar1;
            break;
        default:
            local_48 = Vector3T();
            uVar4._0_4_ = local_48.field_0;
            uVar4._4_4_ = local_48.field_4;
            return uVar4;
        }
        ColourHSL local_48(local_38, local_28, arg3);
        uVar3._0_4_ = local_48.field_0;
        uVar3._4_4_ = local_48.field_4;
        return uVar3;
    }

    // 0x100c6c060
    bool OBB::IsInside(const Vector3T<float>& vector3) const {
        uint64_t local_28 = vector3 - *this;
        uint64_t* this_00 = &field_32;
        auto pVVar1 = this_00->SSOBeginPtr();
        float fVar3 = Vector3Dot<float>((Vector3T<float>*)&local_28, pVVar1);
        float local_1c = (float)::abs(fVar3);
        uint64_t* this_01 = &m_halfSize;
        auto pfVar2 = this_01->SSOBeginPtr();
        if (local_1c < *pfVar2 || local_1c == *pfVar2) {
            pVVar1 = (Vector3T<float>*)this_00->qw();
            fVar3 = Vector3Dot<float>((Vector3T<float>*)&local_28, pVVar1);
            local_1c = (float)::abs(fVar3);
            pfVar2 = (float*)this_01->y();
            if (local_1c < *pfVar2 || local_1c == *pfVar2) {
                pVVar1 = (Vector3T<float>*)this_00->second();
                fVar3 = Vector3Dot<float>((Vector3T<float>*)&local_28, pVVar1);
                local_1c = (float)::abs(fVar3);
                pfVar2 = (float*)this_01->second();
                return local_1c < *pfVar2 || local_1c == *pfVar2;
            }
        }
        return false;
    }

    // 0x100c6c130
    unsigned long OBB::IsInside(const OBB& obb) const {
        uint64_t local_68[2];
        uint64_t local_58[2];
        uint64_t local_48[2];

        Vector3T<int> local_78;
        BoxCorner boxCorner = 0;
        bool bVar2 = true;
        do {
            local_48[0] = GetLocalCornerPos(obb, boxCorner);
            local_58[0] = *local_48 obb.field_32;
            local_68[0] = *local_58 + obb;
            local_78.SetXYZ(*local_68);
            if (IsInside(local_78) == '\0')
                break;
            bVar2 = boxCorner < 7;
            boxCorner = boxCorner + 1;
        } while (boxCorner != 8);
        return ~bVar2 & 4294967041;
    }

    // 0x100c6c1f0
    Vector3T<float> operator* <float>(const Vector3T<float>& vector3, const Matrix33T<float>& matrix33) {
        uint64_t uVar3;

        float local_24 = *(float*)vector3;
        float* pfVar1 = &matrix33[0];
        local_24 = local_24 * *pfVar1;
        float local_1c = *(float*)(vector3 + 4);
        pfVar1 = &matrix33[1];
        local_1c = local_1c * *pfVar1 + local_24;
        local_24 = *(float*)(vector3 + 8);
        pfVar1 = &matrix33[2];
        local_24 = local_24 * *pfVar1 + local_1c;
        local_1c = *(float*)vector3;
        long lVar2 = matrix33[0];
        local_1c = local_1c * *(float*)(lVar2 + 4);
        float local_20 = *(float*)(vector3 + 4);
        lVar2 = matrix33[1];
        local_20 = local_20 * *(float*)(lVar2 + 4) + local_1c;
        local_1c = *(float*)(vector3 + 8);
        lVar2 = matrix33[2];
        local_1c = local_1c * *(float*)(lVar2 + 4) + local_20;
        local_20 = *(float*)vector3;
        lVar2 = matrix33[0];
        local_20 = local_20 * *(float*)(lVar2 + 8);
        float local_28 = *(float*)(vector3 + 4);
        lVar2 = matrix33[1];
        local_28 = local_28 * *(float*)(lVar2 + 8) + local_20;
        local_20 = *(float*)(vector3 + 8);
        lVar2 = matrix33[2];
        ColourHSL local_38(local_24, local_1c, local_20 * *(float*)(lVar2 + 8) + local_28);
        uVar3._0_4_ = local_38.field_0;
        uVar3._4_4_ = local_38.field_4;
        return uVar3;
    }

    // 0x100c6c390
    void OBB::Transform(const Matrix44T<float>& matrix44) {
        Matrix44T<float> local_58;
        uint64_t local_30[2];

        Matrix44T<float> local_98(field_32, *this);
        local_98 *= matrix44;
        local_30[0] = local_98.GetPos();
        local_58.GetRot();
        auto vector32 = GetScreen();
        Set(*local_30, local_58, *vector32);
    }

    // 0x100c6c560
    void TestIntersection(float& arg1, const Vector3T<float>& vector31, const Vector3T<float>& vector32,
                          const AABB& aabb, const Matrix44T<float>& matrix44) {
        float local_48;
        float local_40;
        float local_3c;

        float* local_60 = arg1;
        float* pfVar1 = &matrix44[3];
        float local_38 = *pfVar1;
        long lVar2 = matrix44[3];
        float local_34 = *(float*)(lVar2 + 4);
        lVar2 = matrix44[3];
        float fVar3 = local_34;
        ColourHSL local_80(local_38, local_34, *(float*)(lVar2 + 8));
        uint64_t local_58 = local_80 - vector31;
        float local_50 = fVar3;
        pfVar1 = &matrix44[0];
        ColourHSL local_70(*pfVar1, pfVar1[1], pfVar1[2]);
        local_38 = Vector3Dot<float>((Vector3T<float>*)&local_70, (Vector3T<float>*)&local_58);
        local_34 = Vector3Dot<float>(vector32, (Vector3T<float>*)&local_70);
        fVar3 = (float)fabs(local_34);
        if (fVar3 <= 0.001) {
            pfVar1 = (float*)aabb.SSOBeginPtr();
            if (0.0 < *pfVar1 - local_38) {
                return 0;
            }
            pfVar1 = (float*)aabb.GetScreen();
            fVar3 = *pfVar1 - local_38;
            local_38 = 0.0;
            local_48 = 100000.0;
            if (fVar3 < 0.0) {
                return 0;
            }
        } else {
            pfVar1 = (float*)aabb.SSOBeginPtr();
            local_34 = 1.0 / local_34;
            local_3c = (*pfVar1 + local_38) * local_34;
            pfVar1 = (float*)aabb.GetScreen();
            local_40 = (local_38 + *pfVar1) * local_34;
            if (local_40 < local_3c) {
                eastl::swap<float>(local_3c, local_40);
            }
            local_48 = local_40;
            if (100000.0 <= local_40) {
                local_48 = 100000.0;
            }
            local_38 = 0.0;
            if (0.0 <= local_3c) {
                local_38 = local_3c;
            }
            if (local_48 < local_38) {
                return 0;
            }
        }
        pfVar1 = &matrix44[1];
        local_70 = ColourHSL(*pfVar1, pfVar1[1], pfVar1[2]);
        local_34 = Vector3Dot<float>((Vector3T<float>*)&local_70, (Vector3T<float>*)&local_58);
        float local_44 = Vector3Dot<float>(vector32, (Vector3T<float>*)&local_70);
        fVar3 = (float)fabs(local_44);
        if (fVar3 <= 0.001) {
            lVar2 = aabb.SSOBeginPtr();
            if (0.0 < *(float*)(lVar2 + 4) - local_34) {
                return 0;
            }
            lVar2 = aabb.GetScreen();
            if (*(float*)(lVar2 + 4) - local_34 < 0.0) {
                return 0;
            }
        } else {
            lVar2 = aabb.SSOBeginPtr();
            local_44 = 1.0 / local_44;
            local_3c = (*(float*)(lVar2 + 4) + local_34) * local_44;
            lVar2 = aabb.GetScreen();
            local_40 = (local_34 + *(float*)(lVar2 + 4)) * local_44;
            if (local_40 < local_3c) {
                eastl::swap<float>(local_3c, local_40);
            }
            if (local_40 <= local_48) {
                local_48 = local_40;
            }
            if (local_38 <= local_3c) {
                local_38 = local_3c;
            }
            if (local_48 < local_38) {
                return 0;
            }
        }
        pfVar1 = &matrix44[2];
        local_70 = ColourHSL(*pfVar1, pfVar1[1], pfVar1[2]);
        local_34 = Vector3Dot<float>((Vector3T<float>*)&local_70, (Vector3T<float>*)&local_58);
        local_44 = Vector3Dot<float>(vector32, (Vector3T<float>*)&local_70);
        fVar3 = (float)fabs(local_44);
        if (0.001 < fVar3) {
            lVar2 = aabb.SSOBeginPtr();
            local_44 = 1.0 / local_44;
            local_3c = (*(float*)(lVar2 + 8) + local_34) * local_44;
            lVar2 = aabb.GetScreen();
            local_40 = (local_34 + *(float*)(lVar2 + 8)) * local_44;
            if (local_40 < local_3c) {
                eastl::swap<float>(local_3c, local_40);
            }
            if (local_40 <= local_48) {
                local_48 = local_40;
            }
            if (local_38 <= local_3c) {
                local_38 = local_3c;
            }
            if (local_38 <= local_48)
                goto LAB_100c6c97a;
        } else {
            lVar2 = aabb.SSOBeginPtr();
            if ((*(float*)(lVar2 + 8) - local_34 <= 0.0) &&
                (lVar2 = aabb.GetScreen(), 0.0 <= *(float*)(lVar2 + 8) - local_34)) {
            LAB_100c6c97a:
                *local_60 = local_38;
                return 1;
            }
        }
        return 0;
    }

} // namespace jag::math
