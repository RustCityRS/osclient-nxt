// libs/math/primitives/Sphere2D.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.math

#include "Sphere2D.h"

namespace jag::math {
    // 0x100009ca0: Sphere2D::GetCentre() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100024170: Sphere2D::GetRadius() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x100c6cd60
    Sphere2D::Sphere2D() : Vector2T(), m_radius(0) {
        m_valid = '\0';
    }

    // 0x100c6cd90
    uint32_t Sphere2D::PointInside(int arg1, int arg2, int arg3) const {
        int iVar1 = GetX();
        int iVar2 = GetZ();
        unsigned int uVar3 = (iVar2 - arg2) * (iVar2 - arg2) + (iVar1 - arg1) * (iVar1 - arg1);
        iVar1 = arg3 + m_radius;
        return uVar3 <= (unsigned int)(iVar1 * iVar1);
    }

    // 0x100c6cdf0
    bool Sphere2D::Set(const Matrix44T<float>& matrix441, const Matrix44T<float>& matrix442,
                       const Matrix44T<float>& matrix443, int arg4, int arg5, const AABB& aabb) {
        Matrix44T<float> MVar1;
        MinimenuEntry* pMVar2;
        int iVar4;
        int iVar5;
        uint32_t in_register_0000000c;
        bool bVar6;
        float extraout_XMM0_Da;
        uint64_t uVar7;
        uint64_t in_XMM1_Qa;
        unsigned long uVar8;
        AABB* in_stack_00000008;
        ColourHSL local_d8;
        ColourHSL local_c8;
        Vector4T<float> local_b8;
        uint64_t local_88;
        uint32_t local_80;
        MinimenuEntry* local_70;
        uint64_t local_68;
        uint32_t uStack_60;
        uint32_t uStack_5c;
        uint64_t local_58;
        uint64_t local_48;
        uint32_t uStack_40;
        float fStack_3c;

        Matrix44T<float>* local_98 = (Matrix44T<float>*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)arg4);
        matrix441[12] = (Matrix44T<float>)0;
        if (in_stack_00000008->IsValid() == '\0') {
            MVar1 = matrix441[12];
        LAB_100c6d09f:
            bVar6 = MVar1 != (Matrix44T<float>)0;
        } else {
            local_70 = (MinimenuEntry*)matrix441;
            local_48 = in_stack_00000008->GetCentrePos();
            uStack_40 = (uint32_t)in_XMM1_Qa;
            local_b8 = Vector4T(local_48, 1.0);
            local_58._0_4_ = (float)in_stack_00000008->GetMaximumRadius();
            local_48 = local_b8 * *local_98;
            uStack_40 = (uint32_t)in_XMM1_Qa;
            fStack_3c = (float)((unsigned long)in_XMM1_Qa >> 32);
            if (0.0 <= fStack_3c) {
                local_d8 = ColourHSL((float)local_58, 0.0, 0.0);
                uVar8 = (unsigned long)(unsigned int)(float)local_58;
                local_c8 = ColourHSL(0.0, (float)local_58, 0.0);
                new (&local_88) Vector4T(local_d8, 0.0);
                local_68 = local_88 matrix443;
                uStack_60 = (uint32_t)uVar8;
                uStack_5c = (uint32_t)(uVar8 >> 32);
                local_98 = (Matrix44T<float>*)local_68 / *fStack_3c;
                new (&local_88) Vector4T(local_c8, 0.0);
                uVar7 = local_88 matrix443;
                uStack_60 = (uint32_t)uVar8;
                uStack_5c = (uint32_t)(uVar8 >> 32);
                local_68 = uVar7;
                local_58 = local_68 / *fStack_3c;
                local_48 /= fStack_3c;
                iVar5 = (int)aabb;
                iVar4 = RoundFloatToInt(
                    (float)eastl::max_alt((float)arg5 * 0.5 * local_98._0_4_, (float)(int)aabb * 0.5 * local_58._4_4_));
                pMVar2 = local_70;
                local_70->field_8 = iVar4;
                iVar4 = RoundFloatToInt((double)arg5 * ((double)(float)local_48 * 0.5 + 0.5));
                new (pMVar2) std::__cxx_atomic_base_impl(iVar4);
                iVar5 = RoundFloatToInt((double)iVar5 * ((double)local_48._4_4_ * 0.5 + 0.5));
                pMVar2->SetZ(iVar5);
                *(uint8_t*)&pMVar2->field_12 = 1;
            } else {
                local_68 = local_b8 matrix442;
                uStack_60 = (uint32_t)in_XMM1_Qa;
                uStack_5c = (uint32_t)((unsigned long)in_XMM1_Qa >> 32);
                local_88 = local_68.GetXYZ();
                local_80 = (uint32_t)in_XMM1_Qa;
                local_88.LengthSq();
                pMVar2 = local_70;
                if ((float)local_58 * (float)local_58 <= extraout_XMM0_Da) {
                    MVar1 = *(Matrix44T<float>*)&local_70->field_12;
                    goto LAB_100c6d09f;
                }
                new (local_70) std::__cxx_atomic_base_impl(arg5 / 2);
                iVar5 = (int)aabb;
                pMVar2->SetZ((int)aabb / 2);
                pMVar2->field_8 = iVar5 + arg5;
                *(uint8_t*)&pMVar2->field_12 = 1;
            }
            bVar6 = true;
        }
        return bVar6;
    }

    // 0x100c6d0c0
    void operator*(const Vector4T<float>& vector4, const Matrix44T<float>& matrix44) {
        uint64_t* puVar8 = &matrix44[0];
        uint64_t uVar4 = *puVar8;
        puVar8 = &matrix44[1];
        uint64_t uVar5 = *puVar8;
        puVar8 = &matrix44[2];
        uint64_t uVar6 = *puVar8;
        puVar8 = &matrix44[3];
        uint64_t uVar7 = *puVar8;
        float* pfVar9 = &vector4[0];
        float fVar1 = *pfVar9;
        float local_28 = (float)uVar4;
        float fStack_24 = (float)((unsigned long)uVar4 >> 32);
        pfVar9 = &vector4[1];
        float fVar2 = *pfVar9;
        float local_38 = (float)uVar5;
        float fStack_34 = (float)((unsigned long)uVar5 >> 32);
        pfVar9 = &vector4[2];
        float fVar3 = *pfVar9;
        float local_48 = (float)uVar6;
        float fStack_44 = (float)((unsigned long)uVar6 >> 32);
        pfVar9 = &vector4[3];
        float local_58 = (float)uVar7;
        float fStack_54 = (float)((unsigned long)uVar7 >> 32);
        return (((uint64_t)(*pfVar9 * fStack_54 + fVar3 * fStack_44 + fVar2 * fStack_34 + fVar1 * fStack_24) << 32) |
                (uint32_t)(*pfVar9 * local_58 + fVar3 * local_48 + fVar2 * local_38 + fVar1 * local_28));
    }

    // 0x100c6d1b0
    Vector4T<float> operator/ <float>(const Vector4T<float>& vector4, float arg2) {
        uint8_t auVar2[16];

        float fVar1 = 1.0 / arg2;
        ImVec4 local_18(*(float*)vector4 * fVar1, *(float*)(vector4 + 4) * fVar1, *(float*)(vector4 + 8) * fVar1,
                        fVar1 * *(float*)(vector4 + 12));
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

    // 0x100c6d200
    int RoundFloatToInt(double arg1) {
        return (int)(arg1 + *(double*)(&DAT_100d99980 + (unsigned long)(arg1 < 0.0) * 8));
    }

    // 0x100c6d450
    Matrix33T<float> operator* <float>(const Matrix33T<float>& matrix331, const Matrix33T<float>& matrix332) {
        Matrix33T<float>* in_RDX;
        uint64_t local_50[2];
        uint64_t local_40[2];
        uint64_t local_30[2];

        Vector3T<float>* pVVar1 = &matrix332[0];
        local_50[0] = pVVar1 * in_RDX;
        pVVar1 = &matrix332[1];
        local_40[0] = pVVar1 * in_RDX;
        pVVar1 = &matrix332[2];
        local_30[0] = pVVar1 * in_RDX;
        new (matrix331) Matrix33T<float>(*local_50, *local_40, *local_30);
        return matrix331;
    }

    // 0x100c6d990
    bool operator>= <float>(const Vector3T<float>& vector31, const Vector3T<float>& vector32) {
        if ((*(float*)vector32 <= *(float*)vector31) && (*(float*)(vector32 + 4) <= *(float*)(vector31 + 4))) {
            return *(float*)(vector32 + 8) <= *(float*)(vector31 + 8);
        }
        return false;
    }

    // 0x100c6eff0
    Vector3T<float> Vector3Cross<float>(const Vector3T<float>& vector31, const Vector3T<float>& vector32) {
        uint64_t uVar1;

        ColourHSL local_18(*(float*)(vector32 + 8) * *(float*)(vector31 + 4) -
                               *(float*)(vector32 + 4) * *(float*)(vector31 + 8),
                           *(float*)(vector31 + 8) * *(float*)vector32 - *(float*)(vector32 + 8) * *(float*)vector31,
                           *(float*)vector31 * *(float*)(vector32 + 4) - *(float*)vector32 * *(float*)(vector31 + 4));
        uVar1._0_4_ = local_18.field_0;
        uVar1._4_4_ = local_18.field_4;
        return uVar1;
    }

} // namespace jag::math

namespace jag::math::internal {
    // 0x100c6d250
    Matrix44T<float>* MatrixMultSSE(const Matrix44T<float>& matrix441, const Matrix44T<float>& matrix442) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float* pfVar15;
        Matrix44T<float>* in_RDX;
        unsigned int arg1;
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

        new (matrix441) Matrix44T<float>();
        long lVar16 = 0;
        Vector4T<float>* pVVar13 = (Vector4T<float>*)(*in_RDX)[0];
        uint64_t* puVar14 = (uint64_t*)(*pVVar13)[0];
        uint64_t uVar5 = *puVar14;
        uint64_t uVar6 = puVar14[1];
        pVVar13 = (Vector4T<float>*)(*in_RDX)[1];
        puVar14 = (uint64_t*)(*pVVar13)[0];
        uint64_t uVar7 = *puVar14;
        uint64_t uVar8 = puVar14[1];
        pVVar13 = (Vector4T<float>*)(*in_RDX)[2];
        puVar14 = (uint64_t*)(*pVVar13)[0];
        uint64_t uVar9 = *puVar14;
        uint64_t uVar10 = puVar14[1];
        pVVar13 = (Vector4T<float>*)(*in_RDX)[3];
        puVar14 = (uint64_t*)(*pVVar13)[0];
        uint64_t uVar11 = *puVar14;
        uint64_t uVar12 = puVar14[1];
        Matrix44T<float>* matrix44T = matrix441;
        do {
            arg1 = (unsigned int)lVar16;
            pVVar13 = &matrix442[arg1];
            pfVar15 = (float*)(*pVVar13)[0];
            fVar1 = *pfVar15;
            local_78 = (float)uVar5;
            fStack_74 = (float)((unsigned long)uVar5 >> 32);
            fStack_70 = (float)uVar6;
            fStack_6c = (float)((unsigned long)uVar6 >> 32);
            pVVar13 = &matrix442[arg1];
            pfVar15 = (float*)(*pVVar13)[1];
            fVar2 = *pfVar15;
            local_68 = (float)uVar7;
            fStack_64 = (float)((unsigned long)uVar7 >> 32);
            fStack_60 = (float)uVar8;
            fStack_5c = (float)((unsigned long)uVar8 >> 32);
            pVVar13 = &matrix442[arg1];
            pfVar15 = (float*)(*pVVar13)[2];
            fVar3 = *pfVar15;
            local_58 = (float)uVar9;
            fStack_54 = (float)((unsigned long)uVar9 >> 32);
            fStack_50 = (float)uVar10;
            fStack_4c = (float)((unsigned long)uVar10 >> 32);
            pVVar13 = &matrix442[arg1];
            pfVar15 = (float*)(*pVVar13)[3];
            fVar4 = *pfVar15;
            local_48 = (float)uVar11;
            fStack_44 = (float)((unsigned long)uVar11 >> 32);
            fStack_40 = (float)uVar12;
            fStack_3c = (float)((unsigned long)uVar12 >> 32);
            puVar14 = (uint64_t*)(*matrix44T)[0];
            *puVar14 =
                (((uint64_t)(fVar4 * fStack_44 + fVar3 * fStack_54 + fVar2 * fStack_64 + fVar1 * fStack_74) << 32) |
                 (uint32_t)(fVar4 * local_48 + fVar3 * local_58 + fVar2 * local_68 + fVar1 * local_78));
            puVar14[1] =
                (((uint64_t)(fVar4 * fStack_3c + fVar3 * fStack_4c + fVar2 * fStack_5c + fVar1 * fStack_6c) << 32) |
                 (uint32_t)(fVar4 * fStack_40 + fVar3 * fStack_50 + fVar2 * fStack_60 + fVar1 * fStack_70));
            lVar16 = lVar16 + 1;
            matrix44T = matrix44T + 16;
        } while (lVar16 != 4);
        return matrix441;
    }

    // 0x100c6e2a0
    void MatrixMultSSEInPlace(Matrix44T<float>& matrix441, const Matrix44T<float>& matrix442) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float* pfVar15;
        unsigned int arg1;
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

        long lVar16 = 0;
        Vector4T<float>* pVVar13 = &matrix442[0];
        uint64_t* puVar14 = (uint64_t*)(*pVVar13)[0];
        uint64_t uVar5 = *puVar14;
        uint64_t uVar6 = puVar14[1];
        pVVar13 = &matrix442[1];
        puVar14 = (uint64_t*)(*pVVar13)[0];
        uint64_t uVar7 = *puVar14;
        uint64_t uVar8 = puVar14[1];
        pVVar13 = &matrix442[2];
        puVar14 = (uint64_t*)(*pVVar13)[0];
        uint64_t uVar9 = *puVar14;
        uint64_t uVar10 = puVar14[1];
        pVVar13 = &matrix442[3];
        puVar14 = (uint64_t*)(*pVVar13)[0];
        uint64_t uVar11 = *puVar14;
        uint64_t uVar12 = puVar14[1];
        Matrix44T<float>* matrix44T = matrix441;
        do {
            arg1 = (unsigned int)lVar16;
            pVVar13 = &matrix441[arg1];
            pfVar15 = (float*)(*pVVar13)[0];
            fVar1 = *pfVar15;
            local_78 = (float)uVar5;
            fStack_74 = (float)((unsigned long)uVar5 >> 32);
            fStack_70 = (float)uVar6;
            fStack_6c = (float)((unsigned long)uVar6 >> 32);
            pVVar13 = &matrix441[arg1];
            pfVar15 = (float*)(*pVVar13)[1];
            fVar2 = *pfVar15;
            local_68 = (float)uVar7;
            fStack_64 = (float)((unsigned long)uVar7 >> 32);
            fStack_60 = (float)uVar8;
            fStack_5c = (float)((unsigned long)uVar8 >> 32);
            pVVar13 = &matrix441[arg1];
            pfVar15 = (float*)(*pVVar13)[2];
            fVar3 = *pfVar15;
            local_58 = (float)uVar9;
            fStack_54 = (float)((unsigned long)uVar9 >> 32);
            fStack_50 = (float)uVar10;
            fStack_4c = (float)((unsigned long)uVar10 >> 32);
            pVVar13 = &matrix441[arg1];
            pfVar15 = (float*)(*pVVar13)[3];
            fVar4 = *pfVar15;
            local_48 = (float)uVar11;
            fStack_44 = (float)((unsigned long)uVar11 >> 32);
            fStack_40 = (float)uVar12;
            fStack_3c = (float)((unsigned long)uVar12 >> 32);
            puVar14 = (uint64_t*)(*matrix44T)[0];
            *puVar14 =
                (((uint64_t)(fVar4 * fStack_44 + fVar3 * fStack_54 + fVar2 * fStack_64 + fVar1 * fStack_74) << 32) |
                 (uint32_t)(fVar4 * local_48 + fVar3 * local_58 + fVar2 * local_68 + fVar1 * local_78));
            puVar14[1] =
                (((uint64_t)(fVar4 * fStack_3c + fVar3 * fStack_4c + fVar2 * fStack_5c + fVar1 * fStack_6c) << 32) |
                 (uint32_t)(fVar4 * fStack_40 + fVar3 * fStack_50 + fVar2 * fStack_60 + fVar1 * fStack_70));
            lVar16 = lVar16 + 1;
            matrix44T = matrix44T + 16;
        } while (lVar16 != 4);
    }

} // namespace jag::math::internal

// 0x100c6f060
void asin(float arg1) {
    _asinf();
}
