// libs/math/primitives/Sphere2D.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.math

#include "Sphere2D.h"

namespace jag::math {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    Sphere2D::GetCentre() const;

    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    Sphere2D::GetRadius() const;

    // 0x100c6cd60, 32 bytes, base-object constructor, placed by class name and debug map
    // Sphere2D::Sphere2D()
    void Sphere2D::Sphere2D() {
        new (this) Vector2T<int>();
        field_8 = 0;
        field_12 = '\0';
    }

    // 0x100c6cd80, 16 bytes, complete-object constructor, placed by class name and debug map
    // Sphere2D::Sphere2D(): jumps straight to the base-object constructor

    // 0x100c6cd90, 96 bytes, placed by class name and debug map
    // Sphere2D::PointInside(int, int, int) const
    undefined4 Sphere2D::PointInside(int param_1, int param_2, int param_3) {
        int iVar1;
        int iVar2;
        uint uVar3;

        iVar1 = GetX();
        iVar2 = GetZ();
        uVar3 = (iVar2 - param_2) * (iVar2 - param_2) + (iVar1 - param_1) * (iVar1 - param_1);
        iVar1 = param_3 + field_8;
        return CONCAT31((int3)(uVar3 >> 8), uVar3 <= (uint)(iVar1 * iVar1));
    }

    // 0x100c6cdf0, 720 bytes, placed by class name and debug map
    // Sphere2D::Set(Matrix44T<float> const&, Matrix44T<float> const&, Matrix44T<float> const&, int, int, AABB const&)
    bool Sphere2D::Set(Matrix44T* param_1, Matrix44T* param_2, Matrix44T* param_3, int param_4, int param_5,
                       AABB* param_6) {
        MinimenuEntry* pMVar1;
        char cVar2;
        int iVar3;
        undefined4 uVar4;
        int iVar5;
        bool bVar6;
        float extraout_XMM0_Da;
        float fVar7;
        undefined8 uVar8;
        undefined8 in_XMM1_Qa;
        ulong uVar9;
        ColourHSL local_d8;
        ColourHSL local_c8;
        Vector4T<float> local_b8[24];
        Matrix44T* local_98;
        undefined8 local_88;
        undefined4 local_80;
        undefined8 local_68;
        undefined4 uStack_60;
        undefined4 uStack_5c;
        undefined8 local_58;
        undefined8 local_48;
        undefined4 uStack_40;
        float fStack_3c;

        field_12 = '\0';
        local_98 = param_3;
        cVar2 = param_6->IsValid();
        if (cVar2 == '\0') {
            cVar2 = field_12;
        LAB_100c6d09f:
            bVar6 = cVar2 != '\0';
        } else {
            local_48 = param_6->GetCentrePos();
            uStack_40 = (undefined4)in_XMM1_Qa;
            Vector4T<float>::Vector4T(local_b8, (Vector3T*)&local_48, 1.0);
            local_58._0_4_ = (float)param_6->GetMaximumRadius();
            local_48 = math::operator*((Vector4T*)local_b8, local_98);
            uStack_40 = (undefined4)in_XMM1_Qa;
            fStack_3c = (float)((ulong)in_XMM1_Qa >> 32);
            if (0.0 <= fStack_3c) {
                new (&local_d8) ColourHSL((float)local_58, 0.0, 0.0);
                uVar9 = (ulong)(uint)(float)local_58;
                new (&local_c8) ColourHSL(0.0, (float)local_58, 0.0);
                new (&local_88) Vector4T<float>((Vector3T*)&local_d8, 0.0);
                local_68 = math::operator*((Vector4T*)&local_88, param_2);
                uStack_60 = (undefined4)uVar9;
                uStack_5c = (undefined4)(uVar9 >> 32);
                local_98 = (Matrix44T*)math::operator/((Vector4T*)&local_68, fStack_3c);
                new (&local_88) Vector4T<float>((Vector3T*)&local_c8, 0.0);
                uVar8 = math::operator*((Vector4T*)&local_88, param_2);
                uStack_60 = (undefined4)uVar9;
                uStack_5c = (undefined4)(uVar9 >> 32);
                local_68 = uVar8;
                local_58 = math::operator/((Vector4T*)&local_68, fStack_3c);
                Vector4T<float>::operator/=((Vector4T<float>*)&local_48, fStack_3c);
                iVar5 = param_5;
                fVar7 =
                    (float)eastl::max_alt((float)param_4 * 0.5 * local_98._0_4_, (float)param_5 * 0.5 * local_58._4_4_);
                iVar3 = RoundFloatToInt(fVar7);
                pMVar1 = (MinimenuEntry*)this;
                ((MinimenuEntry*)this)->field_8 = iVar3;
                uVar4 = RoundFloatToInt((double)param_4 * ((double)(float)local_48 * 0.5 + 0.5));
                new (pMVar1) std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>(uVar4);
                iVar5 = RoundFloatToInt((double)iVar5 * ((double)local_48._4_4_ * 0.5 + 0.5));
                pMVar1->SetZ(iVar5);
                *(undefined1*)&pMVar1->field_12 = 1;
            } else {
                local_68 = math::operator*((Vector4T*)local_b8, param_1);
                uStack_60 = (undefined4)in_XMM1_Qa;
                uStack_5c = (undefined4)((ulong)in_XMM1_Qa >> 32);
                local_88 = local_68.GetXYZ();
                local_80 = (undefined4)in_XMM1_Qa;
                local_88.LengthSq();
                pMVar1 = (MinimenuEntry*)this;
                if ((float)local_58 * (float)local_58 <= extraout_XMM0_Da) {
                    cVar2 = (char)((MinimenuEntry*)this)->field_12;
                    goto LAB_100c6d09f;
                }
                new ((MinimenuEntry*)this)
                    std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>(param_4 / 2);
                iVar5 = param_5;
                pMVar1->SetZ(param_5 / 2);
                pMVar1->field_8 = iVar5 + param_4;
                *(undefined1*)&pMVar1->field_12 = 1;
            }
            bVar6 = true;
        }
        return bVar6;
    }

    // 0x100c6d0c0, 240 bytes, inline, placed by debug map only (low confidence)
    // operator*(Vector4T<float> const&, Matrix44T<float> const&)
    /* TEMPNAMEPLACEHOLDERVALUE(Vector4T<float> const&,
   Matrix44T<float> const&) */

    undefined8 operator*(Vector4T* param_1, Matrix44T* param_2) {
        float fVar1;
        float fVar2;
        float fVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8* puVar8;
        float* pfVar9;
        float local_58;
        float fStack_54;
        float local_48;
        float fStack_44;
        float local_38;
        float fStack_34;
        float local_28;
        float fStack_24;

        puVar8 = (undefined8*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 0);
        uVar4 = *puVar8;
        puVar8 = (undefined8*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 1);
        uVar5 = *puVar8;
        puVar8 = (undefined8*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 2);
        uVar6 = *puVar8;
        puVar8 = (undefined8*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 3);
        uVar7 = *puVar8;
        pfVar9 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)param_1, 0);
        fVar1 = *pfVar9;
        local_28 = (float)uVar4;
        fStack_24 = (float)((ulong)uVar4 >> 32);
        pfVar9 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)param_1, 1);
        fVar2 = *pfVar9;
        local_38 = (float)uVar5;
        fStack_34 = (float)((ulong)uVar5 >> 32);
        pfVar9 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)param_1, 2);
        fVar3 = *pfVar9;
        local_48 = (float)uVar6;
        fStack_44 = (float)((ulong)uVar6 >> 32);
        pfVar9 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)param_1, 3);
        local_58 = (float)uVar7;
        fStack_54 = (float)((ulong)uVar7 >> 32);
        return CONCAT44(*pfVar9 * fStack_54 + fVar3 * fStack_44 + fVar2 * fStack_34 + fVar1 * fStack_24,
                        *pfVar9 * local_58 + fVar3 * local_48 + fVar2 * local_38 + fVar1 * local_28);
    }

    // 0x100c6d1b0, 80 bytes, inline, placed by debug map only (low confidence)
    // Vector4T<float> operator/<float>(Vector4T<float> const&, float)
    /* Vector4T<float> TEMPNAMEPLACEHOLDERVALUE(Vector4T<float> const&,
   float) */

    undefined1[16] operator/(Vector4T * param_1, float param_2) {
        float fVar1;
        undefined1 auVar2[16];
        ImVec4 local_18[16];

        fVar1 = 1.0 / param_2;
        ImVec4::ImVec4(local_18, *(float*)param_1 * fVar1, *(float*)(param_1 + 4) * fVar1,
                       *(float*)(param_1 + 8) * fVar1, fVar1 * *(float*)(param_1 + 12));
        auVar2[0] = local_18[0];
        auVar2[1] = local_18[1];
        auVar2[2] = local_18[2];
        auVar2[3] = local_18[3];
        auVar2[4] = local_18[4];
        auVar2[5] = local_18[5];
        auVar2[6] = local_18[6];
        auVar2[7] = local_18[7];
        auVar2[8] = local_18[8];
        auVar2[9] = local_18[9];
        auVar2[10] = local_18[10];
        auVar2[11] = local_18[11];
        auVar2[12] = local_18[12];
        auVar2[13] = local_18[13];
        auVar2[14] = local_18[14];
        auVar2[15] = local_18[15];
        return auVar2;
    }

    // 0x100c6d200, 48 bytes, inline, placed by debug map only (low confidence)
    // RoundFloatToInt(double)
    int RoundFloatToInt(double param_1) {
        return (int)(param_1 + *(double*)(&DAT_100d99980 + (ulong)(param_1 < 0.0) * 8));
    }

    // 0x100c6d450, 160 bytes, inline, placed by debug map only (low confidence)
    // Matrix33T<float> operator*<float>(Matrix33T<float> const&, Matrix33T<float> const&)
    /* Matrix33T<float> TEMPNAMEPLACEHOLDERVALUE(Matrix33T<float>
   const&, Matrix33T<float> const&) */

    Matrix33T* operator*(Matrix33T* param_1, Matrix33T* param_2) {
        Vector3T* pVVar1;
        Matrix33T* in_RDX;
        undefined8 local_50[2];
        undefined8 local_40[2];
        undefined8 local_30[2];

        pVVar1 = (Vector3T*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_2, 0);
        local_50[0] = operator*(pVVar1, in_RDX);
        pVVar1 = (Vector3T*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_2, 1);
        local_40[0] = operator*(pVVar1, in_RDX);
        pVVar1 = (Vector3T*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_2, 2);
        local_30[0] = operator*(pVVar1, in_RDX);
        new (param_1) Matrix33T<float>(local_50, local_40, local_30);
        return param_1;
    }

    // 0x100c6d990, 48 bytes, inline, placed by debug map only (low confidence)
    // bool operator>=<float>(Vector3T<float> const&, Vector3T<float> const&)
    /* bool TEMPNAMEPLACEHOLDERVALUE(Vector3T<float> const&,
   Vector3T<float> const&) */

    bool operator>=(Vector3T* param_1, Vector3T* param_2) {
        if ((*(float*)param_2 <= *(float*)param_1) && (*(float*)(param_2 + 4) <= *(float*)(param_1 + 4))) {
            return *(float*)(param_2 + 8) <= *(float*)(param_1 + 8);
        }
        return false;
    }

    // 0x100c6eff0, 112 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float> Vector3Cross<float>(Vector3T<float> const&, Vector3T<float> const&)
    undefined8 Vector3Cross<float>(Vector3T* param_1, Vector3T* param_2) {
        undefined8 uVar1;
        ColourHSL local_18;

        new (&local_18)
            ColourHSL(*(float*)(param_2 + 8) * *(float*)(param_1 + 4) - *(float*)(param_2 + 4) * *(float*)(param_1 + 8),
                      *(float*)(param_1 + 8) * *(float*)param_2 - *(float*)(param_2 + 8) * *(float*)param_1,
                      *(float*)param_1 * *(float*)(param_2 + 4) - *(float*)param_2 * *(float*)(param_1 + 4));
        uVar1._0_4_ = local_18.field_0;
        uVar1._4_4_ = local_18.field_4;
        return uVar1;
    }

} // namespace jag::math

namespace jag::math::internal {
    // 0x100c6d250, 384 bytes, inline, placed by debug map only (low confidence)
    // MatrixMultSSE(Matrix44T<float> const&, Matrix44T<float> const&)
    internal* MatrixMultSSE(Matrix44T* param_1, Matrix44T* param_2) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        undefined8 uVar10;
        undefined8 uVar11;
        undefined8 uVar12;
        Vector4T<float>* pVVar13;
        undefined8* puVar14;
        float* pfVar15;
        uint uVar16;
        long lVar17;
        internal* this_00;
        float local_78;
        float fStack_74;
        float fStack_70;
        float fStack_6c;
        float local_68;
        float fStack_64;
        float fStack_60;
        float fStack_5c;
        float local_58;
        float fStack_54;
        float fStack_50;
        float fStack_4c;
        float local_48;
        float fStack_44;
        float fStack_40;
        float fStack_3c;

        new (this) Matrix44T<float>();
        lVar17 = 0;
        pVVar13 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 0);
        puVar14 = (undefined8*)Vector4T<float>::operator[](pVVar13, 0);
        uVar5 = *puVar14;
        uVar6 = puVar14[1];
        pVVar13 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 1);
        puVar14 = (undefined8*)Vector4T<float>::operator[](pVVar13, 0);
        uVar7 = *puVar14;
        uVar8 = puVar14[1];
        pVVar13 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 2);
        puVar14 = (undefined8*)Vector4T<float>::operator[](pVVar13, 0);
        uVar9 = *puVar14;
        uVar10 = puVar14[1];
        pVVar13 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 3);
        puVar14 = (undefined8*)Vector4T<float>::operator[](pVVar13, 0);
        uVar11 = *puVar14;
        uVar12 = puVar14[1];
        this_00 = this;
        do {
            uVar16 = (uint)lVar17;
            pVVar13 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, uVar16);
            pfVar15 = (float*)Vector4T<float>::operator[](pVVar13, 0);
            fVar1 = *pfVar15;
            local_78 = (float)uVar5;
            fStack_74 = (float)((ulong)uVar5 >> 32);
            fStack_70 = (float)uVar6;
            fStack_6c = (float)((ulong)uVar6 >> 32);
            pVVar13 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, uVar16);
            pfVar15 = (float*)Vector4T<float>::operator[](pVVar13, 1);
            fVar2 = *pfVar15;
            local_68 = (float)uVar7;
            fStack_64 = (float)((ulong)uVar7 >> 32);
            fStack_60 = (float)uVar8;
            fStack_5c = (float)((ulong)uVar8 >> 32);
            pVVar13 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, uVar16);
            pfVar15 = (float*)Vector4T<float>::operator[](pVVar13, 2);
            fVar3 = *pfVar15;
            local_58 = (float)uVar9;
            fStack_54 = (float)((ulong)uVar9 >> 32);
            fStack_50 = (float)uVar10;
            fStack_4c = (float)((ulong)uVar10 >> 32);
            pVVar13 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, uVar16);
            pfVar15 = (float*)Vector4T<float>::operator[](pVVar13, 3);
            fVar4 = *pfVar15;
            local_48 = (float)uVar11;
            fStack_44 = (float)((ulong)uVar11 >> 32);
            fStack_40 = (float)uVar12;
            fStack_3c = (float)((ulong)uVar12 >> 32);
            puVar14 = (undefined8*)Vector4T<float>::operator[]((Vector4T<float>*)this_00, 0);
            *puVar14 = CONCAT44(fVar4 * fStack_44 + fVar3 * fStack_54 + fVar2 * fStack_64 + fVar1 * fStack_74,
                                fVar4 * local_48 + fVar3 * local_58 + fVar2 * local_68 + fVar1 * local_78);
            puVar14[1] = CONCAT44(fVar4 * fStack_3c + fVar3 * fStack_4c + fVar2 * fStack_5c + fVar1 * fStack_6c,
                                  fVar4 * fStack_40 + fVar3 * fStack_50 + fVar2 * fStack_60 + fVar1 * fStack_70);
            lVar17 = lVar17 + 1;
            this_00 = this_00 + 1;
        } while (lVar17 != 4);
        return this;
    }

    // 0x100c6e2a0, 368 bytes, inline, placed by debug map only (low confidence)
    // MatrixMultSSEInPlace(Matrix44T<float>&, Matrix44T<float> const&)
    void MatrixMultSSEInPlace(Matrix44T* param_1, Matrix44T* param_2) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        undefined8 uVar10;
        undefined8 uVar11;
        undefined8 uVar12;
        Vector4T<float>* pVVar13;
        undefined8* puVar14;
        float* pfVar15;
        uint uVar16;
        long lVar17;
        Matrix44T* this;
        float local_78;
        float fStack_74;
        float fStack_70;
        float fStack_6c;
        float local_68;
        float fStack_64;
        float fStack_60;
        float fStack_5c;
        float local_58;
        float fStack_54;
        float fStack_50;
        float fStack_4c;
        float local_48;
        float fStack_44;
        float fStack_40;
        float fStack_3c;

        lVar17 = 0;
        pVVar13 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 0);
        puVar14 = (undefined8*)Vector4T<float>::operator[](pVVar13, 0);
        uVar5 = *puVar14;
        uVar6 = puVar14[1];
        pVVar13 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 1);
        puVar14 = (undefined8*)Vector4T<float>::operator[](pVVar13, 0);
        uVar7 = *puVar14;
        uVar8 = puVar14[1];
        pVVar13 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 2);
        puVar14 = (undefined8*)Vector4T<float>::operator[](pVVar13, 0);
        uVar9 = *puVar14;
        uVar10 = puVar14[1];
        pVVar13 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 3);
        puVar14 = (undefined8*)Vector4T<float>::operator[](pVVar13, 0);
        uVar11 = *puVar14;
        uVar12 = puVar14[1];
        this = param_1;
        do {
            uVar16 = (uint)lVar17;
            pVVar13 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, uVar16);
            pfVar15 = (float*)Vector4T<float>::operator[](pVVar13, 0);
            fVar1 = *pfVar15;
            local_78 = (float)uVar5;
            fStack_74 = (float)((ulong)uVar5 >> 32);
            fStack_70 = (float)uVar6;
            fStack_6c = (float)((ulong)uVar6 >> 32);
            pVVar13 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, uVar16);
            pfVar15 = (float*)Vector4T<float>::operator[](pVVar13, 1);
            fVar2 = *pfVar15;
            local_68 = (float)uVar7;
            fStack_64 = (float)((ulong)uVar7 >> 32);
            fStack_60 = (float)uVar8;
            fStack_5c = (float)((ulong)uVar8 >> 32);
            pVVar13 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, uVar16);
            pfVar15 = (float*)Vector4T<float>::operator[](pVVar13, 2);
            fVar3 = *pfVar15;
            local_58 = (float)uVar9;
            fStack_54 = (float)((ulong)uVar9 >> 32);
            fStack_50 = (float)uVar10;
            fStack_4c = (float)((ulong)uVar10 >> 32);
            pVVar13 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, uVar16);
            pfVar15 = (float*)Vector4T<float>::operator[](pVVar13, 3);
            fVar4 = *pfVar15;
            local_48 = (float)uVar11;
            fStack_44 = (float)((ulong)uVar11 >> 32);
            fStack_40 = (float)uVar12;
            fStack_3c = (float)((ulong)uVar12 >> 32);
            puVar14 = (undefined8*)Vector4T<float>::operator[]((Vector4T<float>*)this, 0);
            *puVar14 = CONCAT44(fVar4 * fStack_44 + fVar3 * fStack_54 + fVar2 * fStack_64 + fVar1 * fStack_74,
                                fVar4 * local_48 + fVar3 * local_58 + fVar2 * local_68 + fVar1 * local_78);
            puVar14[1] = CONCAT44(fVar4 * fStack_3c + fVar3 * fStack_4c + fVar2 * fStack_5c + fVar1 * fStack_6c,
                                  fVar4 * fStack_40 + fVar3 * fStack_50 + fVar2 * fStack_60 + fVar1 * fStack_70);
            lVar17 = lVar17 + 1;
            this = (Matrix44T*)&field_16;
        } while (lVar17 != 4);
    }

} // namespace jag::math::internal

// 0x100c6f060, 16 bytes, placed by debug map only (low confidence)
// asin(float)
void asin(float param_1) {
    _asinf();
}
