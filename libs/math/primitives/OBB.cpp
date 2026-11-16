// libs/math/primitives/OBB.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.math

#include "OBB.h"

namespace jag::math {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    OBB::GetCentrePos() const;

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    OBB::GetPos() const;

    // 0x10002d850: the linker folded this into oldscape::option::Option<int>::GetDefaultValue() const, which has identical code
    OBB::GetOri() const;

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    OBB::GetHalfSize();

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    OBB::GetHalfSize() const;

    // 0x1007b1020: the linker folded this into Capsule3D::SetEndPoint(Vector3T<float> const&), which has identical code
    OBB::SetHalfSize(Vector3T<float> const&);

    // 0x1008b24d0: the linker folded this into OBB::OBB(OBB const&), which has identical code
    OBB::OBB(OBB&&);

    // 0x1008cd7d0: the linker folded this into OBB::OBB(OBB const&), which has identical code
    OBB::OBB(OBB&&);

    // 0x100c6b7f0, 80 bytes, base-object constructor, placed by class name and debug map
    // OBB::OBB(AABB const&)
    void OBB::OBB(AABB* param_1) {
        new (this) Vector3T<int>();
        field_12 = 0;
        new (&m_halfSize) Vector3T<int>();
        field_28 = 0;
        new (&field_32) Matrix33T<float>();
        param_1->GetOBB(this);
    }

    // 0x100c6b840, 16 bytes, complete-object constructor, placed by class name and debug map
    // OBB::OBB(AABB const&): jumps straight to the base-object constructor

    // 0x100c6b850, 144 bytes, placed by class name and debug map
    // OBB::Set(AABB const&)
    void OBB::Set(AABB* param_1) {
        float fVar1;
        undefined8 local_30[2];
        float local_20;
        float local_1c;

        local_30[0] = param_1->GetCentrePos();
        Set(local_30);
        (&field_32)->SetToIdentity();
        local_20 = (float)param_1->GetWidth();
        local_1c = (float)param_1->GetHeight();
        fVar1 = (float)param_1->GetLength();
        (&m_halfSize, local_20, local_1c, fVar1)->Set();
        Vector3T<float>::operator*=((Vector3T<float>*)&m_halfSize, 0.5);
    }

    // 0x100c6b950, 32 bytes, placed by class name and debug map
    // OBB::GetMinimumEnclosingAABB(AABB&) const
    AABB* OBB::GetMinimumEnclosingAABB(AABB* param_1) {
        param_1->Set(this);
        return param_1;
    }

    // 0x100c6b970, 176 bytes, placed by class name and debug map
    // OBB::GetMaximumContainedAABB(AABB&) const
    AABB* OBB::GetMaximumContainedAABB(AABB* param_1) {
        vector* pvVar1;
        float fVar4;
        float fVar5;
        ColourHSL local_58;
        undefined8 local_48;
        float local_40;
        undefined8 local_38;
        float local_30;
        float local_28;
        float local_24;

        local_28 = (float)GetMinimumRadius(this);
        local_24 = (float)GetMinimumRadius(this);
        fVar4 = (float)GetMinimumRadius(this);
        fVar5 = local_24;
        new (&local_58) ColourHSL(local_28, local_24, fVar4);
        pvVar1 = SSOBeginPtr(param_1);
        local_48 = math::operator-((Vector3T*)pvVar1, (Vector3T*)&local_58);
        local_40 = fVar5;
        pvVar1 = SSOBeginPtr((type*)&local_58);
        local_38 = math::operator+((Vector3T*)pvVar1, (Vector3T*)&local_58);
        local_30 = fVar5;
        param_1->Set((Vector3T*)&local_48, (Vector3T*)&local_38);
        return param_1;
    }

    // 0x100c6ba30, 64 bytes, placed by class name and debug map
    // OBB::GetMinimumEnclosingSphere(Sphere&) const
    Sphere* OBB::GetMinimumEnclosingSphere(Sphere* param_1) {
        vector* pvVar1;
        float fVar2;

        pvVar1 = SSOBeginPtr(param_1);
        fVar2 = (float)GetMaximumRadius(this);
        param_1->Set(pvVar1, fVar2);
        return param_1;
    }

    // 0x100c6ba80, 64 bytes, placed by class name and debug map
    // OBB::GetMaximumContainedSphere(Sphere&) const
    Sphere* OBB::GetMaximumContainedSphere(Sphere* param_1) {
        vector* pvVar1;
        float fVar2;

        pvVar1 = SSOBeginPtr(param_1);
        fVar2 = (float)GetMinimumRadius(this);
        param_1->Set(pvVar1, fVar2);
        return param_1;
    }

    // 0x100c6bac0, 64 bytes, placed by class name and debug map
    // OBB::GetApproxMinimumEnclosingSphere(Sphere&) const
    Sphere* OBB::GetApproxMinimumEnclosingSphere(Sphere* param_1) {
        vector* pvVar1;
        float fVar2;

        pvVar1 = SSOBeginPtr(param_1);
        fVar2 = (float)(&m_halfSize)->MaxElement();
        param_1->Set(pvVar1, fVar2);
        return param_1;
    }

    // 0x100c6bb50, 80 bytes, placed by class name and debug map
    // OBB::GetCornerPos(BoxCorner) const
    undefined8 OBB::GetCornerPos(undefined8 param_1, undefined4 param_2, OBB* this) {
        undefined8 local_28;
        undefined4 local_20;

        local_28 = GetLocalCornerPos();
        local_20 = param_2;
        Vector3T<float>::operator*=((Vector3T<float>*)&local_28, &field_32);
        Vector3T<float>::operator+=((Vector3T<float>*)&local_28, (Vector3T*)this);
        return local_28;
    }

    // 0x100c6bba0, 704 bytes, placed by class name and debug map
    // OBB::GetLocalCornerPos(BoxCorner) const
    undefined8 OBB::GetLocalCornerPos(type* param_2) {
        vector* pvVar1;
        float* pfVar2;
        undefined8* puVar3;
        undefined8 uVar5;
        undefined8 uVar4;
        float fVar6;
        ColourHSL local_48;
        float local_38;
        undefined4 uStack_34;
        undefined4 uStack_30;
        undefined4 uStack_2c;
        float local_28;
        undefined4 uStack_24;
        undefined4 uStack_20;
        undefined4 uStack_1c;

        if (7 < (int)param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert("static_cast<int>(boxCorner) < BOX_CORNER_NTYPES",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/primitives/OBB.cpp",
                      70, (char*)0);
        }
        switch ((ulong)param_2 & 4294967295) {
        case 0:
            puVar3 = &m_halfSize;
            pvVar1 = puVar3->SSOBeginPtr(param_2);
            local_38 = -*(float*)pvVar1;
            uStack_34 = 2147483648;
            uStack_30 = 2147483648;
            uStack_2c = 2147483648;
            pfVar2 = (float*)puVar3->y();
            local_28 = *pfVar2;
            pfVar2 = (float*)puVar3->second();
            fVar6 = -*pfVar2;
            break;
        case 1:
            puVar3 = &m_halfSize;
            pvVar1 = puVar3->SSOBeginPtr(param_2);
            local_38 = *(float*)pvVar1;
            pfVar2 = (float*)puVar3->y();
            local_28 = *pfVar2;
            pfVar2 = (float*)puVar3->second();
            fVar6 = -*pfVar2;
            break;
        case 2:
            puVar3 = &m_halfSize;
            pvVar1 = puVar3->SSOBeginPtr(param_2);
            local_38 = -*(float*)pvVar1;
            uStack_34 = 2147483648;
            uStack_30 = 2147483648;
            uStack_2c = 2147483648;
            pfVar2 = (float*)puVar3->y();
            local_28 = -*pfVar2;
            uStack_24 = 2147483648;
            uStack_20 = 2147483648;
            uStack_1c = 2147483648;
            pfVar2 = (float*)puVar3->second();
            fVar6 = -*pfVar2;
            break;
        case 3:
            puVar3 = &m_halfSize;
            pvVar1 = puVar3->SSOBeginPtr(param_2);
            local_38 = *(float*)pvVar1;
            pfVar2 = (float*)puVar3->y();
            local_28 = -*pfVar2;
            uStack_24 = 2147483648;
            uStack_20 = 2147483648;
            uStack_1c = 2147483648;
            pfVar2 = (float*)puVar3->second();
            fVar6 = -*pfVar2;
            break;
        case 4:
            puVar3 = &m_halfSize;
            pvVar1 = puVar3->SSOBeginPtr(param_2);
            local_38 = -*(float*)pvVar1;
            uStack_34 = 2147483648;
            uStack_30 = 2147483648;
            uStack_2c = 2147483648;
            pfVar2 = (float*)puVar3->y();
            local_28 = *pfVar2;
            pfVar2 = (float*)puVar3->second();
            fVar6 = *pfVar2;
            break;
        case 5:
            puVar3 = &m_halfSize;
            pvVar1 = puVar3->SSOBeginPtr(param_2);
            local_38 = *(float*)pvVar1;
            pfVar2 = (float*)puVar3->y();
            local_28 = *pfVar2;
            pfVar2 = (float*)puVar3->second();
            fVar6 = *pfVar2;
            break;
        case 6:
            puVar3 = &m_halfSize;
            pvVar1 = puVar3->SSOBeginPtr(param_2);
            local_38 = -*(float*)pvVar1;
            uStack_34 = 2147483648;
            uStack_30 = 2147483648;
            uStack_2c = 2147483648;
            pfVar2 = (float*)puVar3->y();
            local_28 = -*pfVar2;
            uStack_24 = 2147483648;
            uStack_20 = 2147483648;
            uStack_1c = 2147483648;
            pfVar2 = (float*)puVar3->second();
            fVar6 = *pfVar2;
            break;
        case 7:
            puVar3 = &m_halfSize;
            pvVar1 = puVar3->SSOBeginPtr(param_2);
            local_38 = *(float*)pvVar1;
            pfVar2 = (float*)puVar3->y();
            local_28 = -*pfVar2;
            uStack_24 = 2147483648;
            uStack_20 = 2147483648;
            uStack_1c = 2147483648;
            pfVar2 = (float*)puVar3->second();
            fVar6 = *pfVar2;
            break;
        default:
            new (&local_48) Vector3T<int>();
            uVar5._0_4_ = local_48.field_0;
            uVar5._4_4_ = local_48.field_4;
            return uVar5;
        }
        new (&local_48) ColourHSL(local_38, local_28, fVar6);
        uVar4._0_4_ = local_48.field_0;
        uVar4._4_4_ = local_48.field_4;
        return uVar4;
    }

    // 0x100c6c060, 208 bytes, placed by class name and debug map
    // OBB::IsInside(Vector3T<float> const&) const
    bool OBB::IsInside(Vector3T* param_1) {
        Matrix33T* this_00;
        vector* pvVar1;
        Vector3T* pVVar2;
        float* pfVar3;
        undefined8* this_01;
        float fVar5;
        undefined8 local_28;
        float local_1c;

        local_28 = math::operator-(param_1, (Vector3T*)this);
        this_00 = &field_32;
        pvVar1 = this_00->SSOBeginPtr((type*)(OBB*)this);
        fVar5 = Vector3Dot<float>((Vector3T*)&local_28, (Vector3T*)pvVar1);
        local_1c = (float)::abs(fVar5);
        this_01 = &m_halfSize;
        pvVar1 = this_01->SSOBeginPtr(pvVar1);
        if (local_1c < *(float*)pvVar1 || local_1c == *(float*)pvVar1) {
            pVVar2 = (Vector3T*)this_00->qw();
            fVar5 = Vector3Dot<float>((Vector3T*)&local_28, pVVar2);
            local_1c = (float)::abs(fVar5);
            pfVar3 = (float*)this_01->y();
            if (local_1c < *pfVar3 || local_1c == *pfVar3) {
                pVVar2 = (Vector3T*)this_00->second();
                fVar5 = Vector3Dot<float>((Vector3T*)&local_28, pVVar2);
                local_1c = (float)::abs(fVar5);
                pfVar3 = (float*)this_01->second();
                return local_1c < *pfVar3 || local_1c == *pfVar3;
            }
        }
        return false;
    }

    // 0x100c6c130, 192 bytes, placed by class name and debug map
    // OBB::IsInside(OBB const&) const
    ulong OBB::IsInside(OBB* param_1) {
        uint uVar2;
        undefined8 unaff_RBX;
        bool bVar3;
        Vector3T<int> local_78[16];
        undefined8 local_68[2];
        undefined8 local_58[2];
        undefined8 local_48[2];

        Vector3T<int>::Vector3T(local_78);
        uVar2 = 0;
        bVar3 = true;
        do {
            local_48[0] = GetLocalCornerPos(param_1, uVar2);
            local_58[0] = math::operator*((Vector3T*)local_48, &param_1->field_32);
            local_68[0] = math::operator+((Vector3T*)local_58, (Vector3T*)param_1);
            local_78->SetXYZ(local_68);
            if (IsInside((OBB*)this, (Vector3T*)local_78) == '\0')
                break;
            bVar3 = uVar2 < 7;
            uVar2 = uVar2 + 1;
        } while (uVar2 != 8);
        return CONCAT71((int7)((ulong)unaff_RBX >> 8), ~bVar3) & 4294967041;
    }

    // 0x100c6c1f0, 416 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float> operator*<float>(Vector3T<float> const&, Matrix33T<float> const&)
    /* Vector3T<float> TEMPNAMEPLACEHOLDERVALUE(Vector3T<float> const&,
   Matrix33T<float> const&) */

    undefined8 operator*(Vector3T* param_1, Matrix33T* param_2) {
        float* pfVar1;
        long lVar2;
        undefined8 uVar3;
        ColourHSL local_38;
        float local_28;
        float local_24;
        float local_20;
        float local_1c;

        local_24 = *(float*)param_1;
        pfVar1 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_2, 0);
        local_24 = local_24 * *pfVar1;
        local_1c = *(float*)(param_1 + 4);
        pfVar1 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_2, 1);
        local_1c = local_1c * *pfVar1 + local_24;
        local_24 = *(float*)(param_1 + 8);
        pfVar1 = (float*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_2, 2);
        local_24 = local_24 * *pfVar1 + local_1c;
        local_1c = *(float*)param_1;
        lVar2 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_2, 0);
        local_1c = local_1c * *(float*)(lVar2 + 4);
        local_20 = *(float*)(param_1 + 4);
        lVar2 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_2, 1);
        local_20 = local_20 * *(float*)(lVar2 + 4) + local_1c;
        local_1c = *(float*)(param_1 + 8);
        lVar2 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_2, 2);
        local_1c = local_1c * *(float*)(lVar2 + 4) + local_20;
        local_20 = *(float*)param_1;
        lVar2 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_2, 0);
        local_20 = local_20 * *(float*)(lVar2 + 8);
        local_28 = *(float*)(param_1 + 4);
        lVar2 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_2, 1);
        local_28 = local_28 * *(float*)(lVar2 + 8) + local_20;
        local_20 = *(float*)(param_1 + 8);
        lVar2 = Matrix33T<float>::operator[]((Matrix33T<float>*)param_2, 2);
        new (&local_38) ColourHSL(local_24, local_1c, local_20 * *(float*)(lVar2 + 8) + local_28);
        uVar3._0_4_ = local_38.field_0;
        uVar3._4_4_ = local_38.field_4;
        return uVar3;
    }

    // 0x100c6c390, 128 bytes, placed by class name and debug map
    // OBB::Transform(Matrix44T<float> const&)
    void OBB::Transform(Matrix44T* param_1) {
        Vector3T* pVVar1;
        Matrix44T<float> local_98[64];
        Matrix44T<float> local_58[40];
        undefined8 local_30[2];

        Matrix44T<float>::Matrix44T(local_98, &field_32, (Vector3T*)this);
        Matrix44T<float>::operator*=(local_98, param_1);
        local_30[0] = local_98->GetPos();
        local_58->GetRot();
        pVVar1 = (Vector3T*)GetScreen();
        Set(this, (Vector3T*)local_30, local_58, pVVar1);
    }

    // 0x100c6c560, 1072 bytes, placed by debug map only (low confidence)
    // TestIntersection(float&, Vector3T<float> const&, Vector3T<float> const&, AABB const&, Matrix44T<float> const&)
    /* WARNING: Removing unreachable block (ram,4307994672) */
    /* WARNING: Removing unreachable block (ram,4307994600) */
    /* WARNING: Removing unreachable block (ram,4307994968) */
    /* TestIntersection(float&, Vector3T<float> const&, Vector3T<float>
   const&, AABB const&, Matrix44T<float> const&) */

    undefined8 TestIntersection(float* param_1, Vector3T* param_2, Vector3T* param_3, AABB* param_4,
                                Matrix44T* param_5) {
        float* pfVar1;
        long lVar2;
        vector* pvVar3;
        ColourHSL* pCVar4;
        float fVar5;
        ColourHSL local_80;
        ColourHSL local_70;
        float* local_60;
        undefined8 local_58;
        float local_50;
        float local_48;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        local_60 = param_1;
        pfVar1 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_5, 3);
        local_38 = *pfVar1;
        lVar2 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_5, 3);
        local_34 = *(float*)(lVar2 + 4);
        lVar2 = Matrix44T<float>::operator[]((Matrix44T<float>*)param_5, 3);
        fVar5 = local_34;
        new (&local_80) ColourHSL(local_38, local_34, *(float*)(lVar2 + 8));
        local_58 = operator-((Vector3T*)&local_80, param_2);
        local_50 = fVar5;
        pfVar1 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_5, 0);
        pCVar4 = &local_70;
        ColourHSL::ColourHSL(pCVar4, *pfVar1, pfVar1[1], pfVar1[2]);
        local_38 = Vector3Dot<float>((Vector3T*)pCVar4, (Vector3T*)&local_58);
        local_34 = Vector3Dot<float>(param_3, (Vector3T*)pCVar4);
        fVar5 = (float)fabs(local_34);
        if (fVar5 <= 0.001) {
            pvVar3 = param_4->SSOBeginPtr(pCVar4);
            if (0.0 < *(float*)pvVar3 - local_38) {
                return 0;
            }
            pfVar1 = (float*)param_4->GetScreen();
            fVar5 = *pfVar1 - local_38;
            local_38 = 0.0;
            local_48 = 100000.0;
            if (fVar5 < 0.0) {
                return 0;
            }
        } else {
            pvVar3 = param_4->SSOBeginPtr(pCVar4);
            local_34 = 1.0 / local_34;
            local_3c = (*(float*)pvVar3 + local_38) * local_34;
            pfVar1 = (float*)param_4->GetScreen();
            local_40 = (local_38 + *pfVar1) * local_34;
            if (local_40 < local_3c) {
                eastl::swap<float>(&local_3c, &local_40);
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
        pfVar1 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_5, 1);
        pCVar4 = &local_70;
        ColourHSL::ColourHSL(pCVar4, *pfVar1, pfVar1[1], pfVar1[2]);
        local_34 = Vector3Dot<float>((Vector3T*)pCVar4, (Vector3T*)&local_58);
        local_44 = Vector3Dot<float>(param_3, (Vector3T*)pCVar4);
        fVar5 = (float)fabs(local_44);
        if (fVar5 <= 0.001) {
            pvVar3 = param_4->SSOBeginPtr(pCVar4);
            if (0.0 < *(float*)(pvVar3 + 4) - local_34) {
                return 0;
            }
            lVar2 = param_4->GetScreen();
            if (*(float*)(lVar2 + 4) - local_34 < 0.0) {
                return 0;
            }
        } else {
            pvVar3 = param_4->SSOBeginPtr(pCVar4);
            local_44 = 1.0 / local_44;
            local_3c = (*(float*)(pvVar3 + 4) + local_34) * local_44;
            lVar2 = param_4->GetScreen();
            local_40 = (local_34 + *(float*)(lVar2 + 4)) * local_44;
            if (local_40 < local_3c) {
                eastl::swap<float>(&local_3c, &local_40);
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
        pfVar1 = (float*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_5, 2);
        pCVar4 = &local_70;
        ColourHSL::ColourHSL(pCVar4, *pfVar1, pfVar1[1], pfVar1[2]);
        local_34 = Vector3Dot<float>((Vector3T*)pCVar4, (Vector3T*)&local_58);
        local_44 = Vector3Dot<float>(param_3, (Vector3T*)pCVar4);
        fVar5 = (float)fabs(local_44);
        if (0.001 < fVar5) {
            pvVar3 = param_4->SSOBeginPtr(pCVar4);
            local_44 = 1.0 / local_44;
            local_3c = (*(float*)(pvVar3 + 8) + local_34) * local_44;
            lVar2 = param_4->GetScreen();
            local_40 = (local_34 + *(float*)(lVar2 + 8)) * local_44;
            if (local_40 < local_3c) {
                eastl::swap<float>(&local_3c, &local_40);
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
            pvVar3 = param_4->SSOBeginPtr(pCVar4);
            if ((*(float*)(pvVar3 + 8) - local_34 <= 0.0) &&
                (lVar2 = param_4->GetScreen(), 0.0 <= *(float*)(lVar2 + 8) - local_34)) {
            LAB_100c6c97a:
                *local_60 = local_38;
                return 1;
            }
        }
        return 0;
    }

} // namespace jag::math
