// libs/math/primitives/Frustum.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.math

#include "Frustum.h"

namespace jag::math {
    // 0x1001cd990: Frustum::GetViewProjMatrix() const has the same machine code as graphics::PointLightIndicesEffect::GetVisiblePointLights()

    // 0x1001d07e0: Frustum::operator=(Frustum&&) has the same machine code as Frustum::operator=(Frustum const&)

    // 0x100c69490
    void Frustum::Set(const Matrix44T<float>& matrix441, const Matrix44T<float>& matrix442) {
        Matrix44T<float> local_68;

        local_68 matrix441;
        Vector4T<float>* pVVar1 = &local_68[0];
        float* pfVar2 = (float*)(*pVVar1)[3];
        float local_24 = *pfVar2;
        pVVar1 = &local_68[0];
        pfVar2 = (float*)(*pVVar1)[0];
        local_24 = local_24 - *pfVar2;
        Vector3T<float>* pVVar3 = (Vector3T<float>*)(*this)[0];
        pfVar2 = (float*)(*pVVar3)[0];
        *pfVar2 = local_24;
        pVVar1 = &local_68[1];
        pfVar2 = (float*)(*pVVar1)[3];
        local_24 = *pfVar2;
        pVVar1 = &local_68[1];
        pfVar2 = (float*)(*pVVar1)[0];
        local_24 = local_24 - *pfVar2;
        pfVar2 = (float*)(*pVVar3)[1];
        *pfVar2 = local_24;
        pVVar1 = &local_68[2];
        pfVar2 = (float*)(*pVVar1)[3];
        local_24 = *pfVar2;
        pVVar1 = &local_68[2];
        pfVar2 = (float*)(*pVVar1)[0];
        local_24 = local_24 - *pfVar2;
        pfVar2 = (float*)(*pVVar3)[2];
        *pfVar2 = local_24;
        pVVar1 = &local_68[3];
        pfVar2 = (float*)(*pVVar1)[3];
        local_24 = *pfVar2;
        pVVar1 = &local_68[3];
        pfVar2 = (float*)(*pVVar1)[0];
        *(float*)(pVVar3 + 12) = local_24 - *pfVar2;
        pVVar3->Normalise();
        pVVar1 = &local_68[0];
        pfVar2 = (float*)(*pVVar1)[3];
        local_24 = *pfVar2;
        pVVar1 = &local_68[0];
        pfVar2 = (float*)(*pVVar1)[0];
        local_24 = local_24 + *pfVar2;
        pVVar3 = (Vector3T<float>*)(*this)[1];
        pfVar2 = (float*)(*pVVar3)[0];
        *pfVar2 = local_24;
        pVVar1 = &local_68[1];
        pfVar2 = (float*)(*pVVar1)[3];
        local_24 = *pfVar2;
        pVVar1 = &local_68[1];
        pfVar2 = (float*)(*pVVar1)[0];
        local_24 = local_24 + *pfVar2;
        pfVar2 = (float*)(*pVVar3)[1];
        *pfVar2 = local_24;
        pVVar1 = &local_68[2];
        pfVar2 = (float*)(*pVVar1)[3];
        local_24 = *pfVar2;
        pVVar1 = &local_68[2];
        pfVar2 = (float*)(*pVVar1)[0];
        local_24 = local_24 + *pfVar2;
        pfVar2 = (float*)(*pVVar3)[2];
        *pfVar2 = local_24;
        pVVar1 = &local_68[3];
        pfVar2 = (float*)(*pVVar1)[3];
        local_24 = *pfVar2;
        pVVar1 = &local_68[3];
        pfVar2 = (float*)(*pVVar1)[0];
        *(float*)(pVVar3 + 12) = local_24 + *pfVar2;
        pVVar3->Normalise();
        pVVar1 = &local_68[0];
        pfVar2 = (float*)(*pVVar1)[3];
        local_24 = *pfVar2;
        pVVar1 = &local_68[0];
        pfVar2 = (float*)(*pVVar1)[1];
        local_24 = local_24 + *pfVar2;
        pVVar3 = (Vector3T<float>*)(*this)[2];
        pfVar2 = (float*)(*pVVar3)[0];
        *pfVar2 = local_24;
        pVVar1 = &local_68[1];
        pfVar2 = (float*)(*pVVar1)[3];
        local_24 = *pfVar2;
        pVVar1 = &local_68[1];
        pfVar2 = (float*)(*pVVar1)[1];
        local_24 = local_24 + *pfVar2;
        pfVar2 = (float*)(*pVVar3)[1];
        *pfVar2 = local_24;
        pVVar1 = &local_68[2];
        pfVar2 = (float*)(*pVVar1)[3];
        local_24 = *pfVar2;
        pVVar1 = &local_68[2];
        pfVar2 = (float*)(*pVVar1)[1];
        local_24 = local_24 + *pfVar2;
        pfVar2 = (float*)(*pVVar3)[2];
        *pfVar2 = local_24;
        pVVar1 = &local_68[3];
        pfVar2 = (float*)(*pVVar1)[3];
        local_24 = *pfVar2;
        pVVar1 = &local_68[3];
        pfVar2 = (float*)(*pVVar1)[1];
        *(float*)(pVVar3 + 12) = local_24 + *pfVar2;
        pVVar3->Normalise();
        pVVar1 = &local_68[0];
        pfVar2 = (float*)(*pVVar1)[3];
        local_24 = *pfVar2;
        pVVar1 = &local_68[0];
        pfVar2 = (float*)(*pVVar1)[1];
        local_24 = local_24 - *pfVar2;
        pVVar3 = (Vector3T<float>*)(*this)[3];
        pfVar2 = (float*)(*pVVar3)[0];
        *pfVar2 = local_24;
        pVVar1 = &local_68[1];
        pfVar2 = (float*)(*pVVar1)[3];
        local_24 = *pfVar2;
        pVVar1 = &local_68[1];
        pfVar2 = (float*)(*pVVar1)[1];
        local_24 = local_24 - *pfVar2;
        pfVar2 = (float*)(*pVVar3)[1];
        *pfVar2 = local_24;
        pVVar1 = &local_68[2];
        pfVar2 = (float*)(*pVVar1)[3];
        local_24 = *pfVar2;
        pVVar1 = &local_68[2];
        pfVar2 = (float*)(*pVVar1)[1];
        local_24 = local_24 - *pfVar2;
        pfVar2 = (float*)(*pVVar3)[2];
        *pfVar2 = local_24;
        pVVar1 = &local_68[3];
        pfVar2 = (float*)(*pVVar1)[3];
        local_24 = *pfVar2;
        pVVar1 = &local_68[3];
        pfVar2 = (float*)(*pVVar1)[1];
        *(float*)(pVVar3 + 12) = local_24 - *pfVar2;
        pVVar3->Normalise();
        pVVar1 = &local_68[0];
        pfVar2 = (float*)(*pVVar1)[3];
        local_24 = *pfVar2;
        pVVar1 = &local_68[0];
        pfVar2 = (float*)(*pVVar1)[2];
        local_24 = local_24 - *pfVar2;
        pVVar3 = (Vector3T<float>*)(*this)[4];
        pfVar2 = (float*)(*pVVar3)[0];
        *pfVar2 = local_24;
        pVVar1 = &local_68[1];
        pfVar2 = (float*)(*pVVar1)[3];
        local_24 = *pfVar2;
        pVVar1 = &local_68[1];
        pfVar2 = (float*)(*pVVar1)[2];
        local_24 = local_24 - *pfVar2;
        pfVar2 = (float*)(*pVVar3)[1];
        *pfVar2 = local_24;
        pVVar1 = &local_68[2];
        pfVar2 = (float*)(*pVVar1)[3];
        local_24 = *pfVar2;
        pVVar1 = &local_68[2];
        pfVar2 = (float*)(*pVVar1)[2];
        local_24 = local_24 - *pfVar2;
        pfVar2 = (float*)(*pVVar3)[2];
        *pfVar2 = local_24;
        pVVar1 = &local_68[3];
        pfVar2 = (float*)(*pVVar1)[3];
        local_24 = *pfVar2;
        pVVar1 = &local_68[3];
        pfVar2 = (float*)(*pVVar1)[2];
        *(float*)(pVVar3 + 12) = local_24 - *pfVar2;
        pVVar3->Normalise();
        pVVar1 = &local_68[0];
        pfVar2 = (float*)(*pVVar1)[3];
        local_24 = *pfVar2;
        pVVar1 = &local_68[0];
        pfVar2 = (float*)(*pVVar1)[2];
        local_24 = local_24 + *pfVar2;
        pVVar3 = (Vector3T<float>*)(*this)[5];
        pfVar2 = (float*)(*pVVar3)[0];
        *pfVar2 = local_24;
        pVVar1 = &local_68[1];
        pfVar2 = (float*)(*pVVar1)[3];
        local_24 = *pfVar2;
        pVVar1 = &local_68[1];
        pfVar2 = (float*)(*pVVar1)[2];
        local_24 = local_24 + *pfVar2;
        pfVar2 = (float*)(*pVVar3)[1];
        *pfVar2 = local_24;
        pVVar1 = &local_68[2];
        pfVar2 = (float*)(*pVVar1)[3];
        local_24 = *pfVar2;
        pVVar1 = &local_68[2];
        pfVar2 = (float*)(*pVVar1)[2];
        local_24 = local_24 + *pfVar2;
        pfVar2 = (float*)(*pVVar3)[2];
        *pfVar2 = local_24;
        pVVar1 = &local_68[3];
        pfVar2 = (float*)(*pVVar1)[3];
        local_24 = *pfVar2;
        pVVar1 = &local_68[3];
        pfVar2 = (float*)(*pVVar1)[2];
        *(float*)(pVVar3 + 12) = local_24 + *pfVar2;
        pVVar3->Normalise();
        field_96 = local_68;
    }

    // 0x100c69df0
    void Frustum::Set(const std::array<Vector3T<float>, 4ul>& vector3s, const Vector3T<float>& vector3, float arg3) {
        uint64_t local_68[2];

        PlaneT<float>* pPVar1 = (PlaneT<float>*)(*this)[4];
        PlaneT<float>* local_58 = pPVar1;
        Vector3T<float>* pVVar2 = &vector3s[2];
        Vector3T<float>* local_40 = pVVar2;
        Vector3T<float>* vector32 = &vector3s[3];
        Vector3T<float>* vector33_00 = &vector3s[0];
        Vector3T<float>* local_48 = vector33_00;
        pPVar1->Set(*pVVar2, *vector32, *vector33_00);
        pPVar1 = (PlaneT<float>*)(*this)[1];
        pPVar1->Set(*pVVar2, *vector33_00, vector3);
        pPVar1 = (PlaneT<float>*)(*this)[0];
        pVVar2 = &vector3s[1];
        pPVar1->Set(*pVVar2, *vector32, vector3);
        pPVar1 = (PlaneT<float>*)(*this)[3];
        pPVar1->Set(*vector32, *local_40, vector3);
        pPVar1 = (PlaneT<float>*)(*this)[2];
        pPVar1->Set(*local_48, *pVVar2, vector3);
        PlaneT<float>* this_00 = (PlaneT<float>*)(*this)[5];
        pPVar1 = local_58;
        local_68[0] = math::operator-((Vector3T<float>*)local_58);
        float fVar3 = Vector3Dot<float>((Vector3T<float>*)pPVar1, vector3);
        this_00->Set(local_68, fVar3 + arg3);
    }

    // 0x100c6a0a0
    Vector3T<float> operator- <float>(const Vector3T<float>& vector3) {
        uint64_t uVar1;

        ColourHSL local_18(-*(float*)vector3, -*(float*)(vector3 + 4), -*(float*)(vector3 + 8));
        uVar1._0_4_ = local_18.field_0;
        uVar1._4_4_ = local_18.field_4;
        return uVar1;
    }

    // 0x100c6a0e0
    float Vector3Dot<float>(const Vector3T<float>& vector31, const Vector3T<float>& vector32) {
        return *(float*)(vector32 + 8) * *(float*)(vector31 + 8) + *(float*)(vector32 + 4) * *(float*)(vector31 + 4) +
               *(float*)vector32 * *(float*)vector31;
    }

    // 0x100c6a110
    uint64_t Frustum::GetCornerPos(BoxCorner boxCorner) const {
        uint64_t uVar1;
        return local_28;

        if (7 < (int)boxCorner) {
            LogAssert(
                "static_cast<int>(frustumCorner) < BOX_CORNER_NTYPES",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/primitives/Frustum.cpp", 77,
                nullptr);
        }
        switch (boxCorner) {
        case 0:
            uVar1 = GetNearTopLeft();
            break;
        case 1:
            uVar1 = GetNearTopRight();
            break;
        case 2:
            uVar1 = GetNearBottomLeft();
            break;
        case 3:
            uVar1 = GetNearBottomRight();
            break;
        case 4:
            uVar1 = GetFarTopLeft();
            break;
        case 5:
            uVar1 = GetFarTopRight();
            break;
        case 6:
            uVar1 = GetFarBottomLeft();
            break;
        case 7:
            uVar1 = GetFarBottomRight();
            break;
        default:
            local_28 = Vector3T();
            return local_28[0];
        }
        return uVar1;
    }

    // 0x100c6a470
    Frustum* Frustum::GetBoundaryPoints() const {
        Frustum* in_RSI;
        uint32_t in_XMM1_Da;

        uint64_t uVar1 = GetCornerPos(in_RSI, 0);
        field_0 = uVar1;
        field_8 = in_XMM1_Da;
        uVar1 = GetCornerPos(in_RSI, 1);
        field_12 = uVar1;
        field_20 = in_XMM1_Da;
        uVar1 = GetCornerPos(in_RSI, 2);
        field_24 = uVar1;
        field_32 = in_XMM1_Da;
        uVar1 = GetCornerPos(in_RSI, 3);
        field_36 = uVar1;
        field_44 = in_XMM1_Da;
        uVar1 = GetCornerPos(in_RSI, 4);
        field_48 = uVar1;
        field_56 = in_XMM1_Da;
        uVar1 = GetCornerPos(in_RSI, 5);
        field_60 = uVar1;
        field_68 = in_XMM1_Da;
        uVar1 = GetCornerPos(in_RSI, 6);
        field_72 = uVar1;
        field_80 = in_XMM1_Da;
        uVar1 = GetCornerPos(in_RSI, 7);
        field_84 = uVar1;
        field_92 = in_XMM1_Da;
        return this;
    }

    // 0x100c6a540
    Frustum* Frustum::Translate(float arg1) {
        PlaneT<float>* this_00 = (PlaneT<float>*)std::array<PlaneT<float>, 6ul>::begin();
        PlaneT<float>* pPVar1 = (PlaneT<float>*)std::array<PlaneT<float>, 6ul>::end();
        for (; this_00 != pPVar1; this_00 = this_00 + 16) {
            this_00->Translate(arg1);
        }
        return this;
    }

    // 0x100c6a5e0
    auto Frustum::Translate(const Vector3T<float>& vector3) {
        auto result;

        ReturnValue* __return_storage_ptr___00 = (ReturnValue*)std::array<PlaneT<float>, 6ul>::begin();
        ReturnValue* pRVar1 = (ReturnValue*)std::array<PlaneT<float>, 6ul>::end();
        for (; __return_storage_ptr___00 != pRVar1; __return_storage_ptr___00 = __return_storage_ptr___00 + 2) {
            __return_storage_ptr___00->Translate(vector3);
        }
        return result;
    }

    // 0x100c6a660
    uint8_t Frustum::TestIntersection(const Vector3T<float>& vector3) const {
        unsigned long arg1;

        PlaneT<float>* pPVar1 = (PlaneT<float>*)(*this)[0];
        float fVar3 = (float)pPVar1->SignedDistanceTo(vector3);
        bool bVar2 = true;
        if (0.0 <= fVar3) {
            arg1 = 0;
            do {
                bVar2 = arg1 < 5;
                if (arg1 == 5)
                    break;
                arg1 = arg1 + 1;
                pPVar1 = (PlaneT<float>*)(*this)[arg1];
                fVar3 = (float)pPVar1->SignedDistanceTo(vector3);
            } while (0.0 <= fVar3);
        }
        return bVar2 ^ 1;
    }

    // 0x100c6a700
    char Frustum::TestIntersection(const Sphere& sphere) const {
        unsigned int uVar1;
        PlaneT<float>* this_00;
        Vector3T<float>* vector3;
        float fVar5;
        float fVar6;
        float fVar7;

        bool bVar4 = true;
        unsigned long arg1 = 0;
        unsigned int uVar3 = 0;
        do {
            this_00 = (PlaneT<float>*)(*this)[arg1];
            vector3 = (Vector3T<float>*)sphere.SSOBeginPtr();
            fVar5 = (float)this_00->SignedDistanceTo(*vector3);
            fVar6 = (float)sphere.GetOutlineRadiusAdjustment();
            if (-fVar6 <= fVar5) {
                fVar7 = (float)sphere.GetOutlineRadiusAdjustment();
                uVar1 = 1 << ((uint8_t)arg1 & 31);
                if (fVar7 < fVar5) {
                    uVar1 = 0;
                }
                uVar3 = uVar3 | uVar1;
            }
            if (fVar5 < -fVar6)
                break;
            bVar4 = arg1 < 5;
            arg1 = arg1 + 1;
        } while (arg1 != 6);
        char cVar2 = '\0';
        if (!bVar4) {
            cVar2 = '\x02' - (uVar3 == 0);
        }
        return cVar2;
    }

    // 0x100c6a7e0
    uint8_t Frustum::TestIntersection(const AABB& aabb) const {
        return TestIntersectionSSE(aabb);
    }

    // 0x100c6a7f0
    uint8_t Frustum::TestIntersectionSSE(const AABB& aabb) const {
        uint8_t auVar1[16];
        uint8_t auVar2[16];
        uint8_t auVar3[16];
        uint8_t auVar14[16];
        uint8_t auVar15[16];
        uint8_t auVar16[16];
        uint8_t auVar17[16];
        uint8_t auVar18[16];
        uint8_t auVar19[16];
        uint8_t auVar20[16];
        uint8_t auVar21[16];
        uint8_t auVar22[16];
        uint8_t auVar23[16];
        uint8_t auVar24[16];

        auto puVar12 = aabb.SSOBeginPtr();
        uint64_t uVar7 = *puVar12;
        uint64_t uVar8 = puVar12[1];
        puVar12 = (uint64_t*)aabb.GetScreen();
        uint64_t uVar9 = *puVar12;
        uint64_t uVar10 = puVar12[1];
        float* pfVar13 = (float*)(*this)[0];
        float fVar4 = pfVar13[3];
        float fVar5 = pfVar13[7];
        float fVar6 = pfVar13[11];
        float local_28 = (float)uVar9;
        float fStack_24 = (float)((unsigned long)uVar9 >> 32);
        float fStack_20 = (float)uVar10;
        float fStack_1c = (float)((unsigned long)uVar10 >> 32);
        auVar19._0_4_ = pfVar13[8] * local_28;
        auVar19._4_4_ = pfVar13[9] * fStack_24;
        auVar19._8_4_ = pfVar13[10] * fStack_20;
        auVar19._12_4_ = fVar6 * fStack_1c;
        float local_38 = (float)uVar7;
        float fStack_34 = (float)((unsigned long)uVar7 >> 32);
        float fStack_30 = (float)uVar8;
        float fStack_2c = (float)((unsigned long)uVar8 >> 32);
        auVar21._0_4_ = *pfVar13 * local_38;
        auVar21._4_4_ = pfVar13[1] * fStack_34;
        auVar21._8_4_ = pfVar13[2] * fStack_30;
        auVar21._12_4_ = fVar4 * fStack_2c;
        auVar14._4_4_ = pfVar13[1] * fStack_24;
        auVar14._0_4_ = *pfVar13 * local_28;
        auVar14._8_4_ = pfVar13[2] * fStack_20;
        auVar14._12_4_ = fVar4 * fStack_1c;
        auVar22 = maxps(auVar21, auVar14);
        auVar24._0_4_ = pfVar13[4] * local_38;
        auVar24._4_4_ = pfVar13[5] * fStack_34;
        auVar24._8_4_ = pfVar13[6] * fStack_30;
        auVar24._12_4_ = fVar5 * fStack_2c;
        auVar18._4_4_ = pfVar13[5] * fStack_24;
        auVar18._0_4_ = pfVar13[4] * local_28;
        auVar18._8_4_ = pfVar13[6] * fStack_20;
        auVar18._12_4_ = fVar5 * fStack_1c;
        auVar14 = maxps(auVar24, auVar18);
        auVar17._0_4_ = pfVar13[8] * local_38;
        auVar17._4_4_ = pfVar13[9] * fStack_34;
        auVar17._8_4_ = pfVar13[10] * fStack_30;
        auVar17._12_4_ = fVar6 * fStack_2c;
        auVar18 = maxps(auVar17, auVar19);
        auVar22._0_4_ = auVar22._8_4_ + fVar4 + auVar22._4_4_ + auVar22._0_4_;
        auVar22._4_4_ = auVar14._8_4_ + fVar5 + auVar14._4_4_ + auVar14._0_4_;
        auVar22._8_4_ = auVar18._8_4_ + fVar6 + auVar18._4_4_ + auVar18._0_4_;
        auVar22._12_4_ = auVar18._0_4_ + fVar6 + auVar18._12_4_ + auVar18._12_4_;
        unsigned int uVar11 = movmskps((int)pfVar13, auVar22);
        if ((uVar11 & 7) == 0) {
            pfVar13 = (float*)(*this)[3];
            fVar4 = pfVar13[3];
            fVar5 = pfVar13[7];
            fVar6 = pfVar13[11];
            auVar20._0_4_ = *pfVar13 * local_38;
            auVar20._4_4_ = pfVar13[1] * fStack_34;
            auVar20._8_4_ = pfVar13[2] * fStack_30;
            auVar20._12_4_ = fVar4 * fStack_2c;
            auVar1._4_4_ = pfVar13[1] * fStack_24;
            auVar1._0_4_ = *pfVar13 * local_28;
            auVar1._8_4_ = pfVar13[2] * fStack_20;
            auVar1._12_4_ = fVar4 * fStack_1c;
            auVar18 = maxps(auVar20, auVar1);
            auVar15._0_4_ = pfVar13[4] * local_38;
            auVar15._4_4_ = pfVar13[5] * fStack_34;
            auVar15._8_4_ = pfVar13[6] * fStack_30;
            auVar15._12_4_ = fVar5 * fStack_2c;
            auVar2._4_4_ = pfVar13[5] * fStack_24;
            auVar2._0_4_ = pfVar13[4] * local_28;
            auVar2._8_4_ = pfVar13[6] * fStack_20;
            auVar2._12_4_ = fVar5 * fStack_1c;
            auVar14 = maxps(auVar15, auVar2);
            auVar23._0_4_ = local_38 * pfVar13[8];
            auVar23._4_4_ = fStack_34 * pfVar13[9];
            auVar23._8_4_ = fStack_30 * pfVar13[10];
            auVar23._12_4_ = fStack_2c * fVar6;
            auVar3._4_4_ = fStack_24 * pfVar13[9];
            auVar3._0_4_ = local_28 * pfVar13[8];
            auVar3._8_4_ = fStack_20 * pfVar13[10];
            auVar3._12_4_ = fStack_1c * fVar6;
            auVar24 = maxps(auVar23, auVar3);
            auVar16._0_4_ = auVar18._8_4_ + fVar4 + auVar18._4_4_ + auVar18._0_4_;
            auVar16._4_4_ = auVar14._8_4_ + fVar5 + auVar14._4_4_ + auVar14._0_4_;
            auVar16._8_4_ = auVar24._8_4_ + fVar6 + auVar24._4_4_ + auVar24._0_4_;
            auVar16._12_4_ = auVar24._0_4_ + fVar6 + auVar24._12_4_ + auVar24._12_4_;
            uVar11 = movmskps((int)pfVar13, auVar16);
            if ((uVar11 & 7) == 0) {
                return 1;
            }
        }
        return 0;
    }

    // 0x100c6a920
    uint8_t Frustum::TestIntersection(const OBB& obb) const {
        return TestIntersectionSSE(obb);
    }

    // 0x100c6a930
    char Frustum::TestIntersectionSSE(const OBB& obb) const {
        float fVar4;
        char cVar11;
        int iVar16;
        float fVar18;
        float fVar19;
        float fVar20;
        float local_78;
        float fStack_74;
        float fStack_70;
        float fStack_6c;
        float local_68;
        float fStack_64;
        float local_58;
        float fStack_54;
        float fStack_50;
        float fStack_4c;
        float local_38;
        float fStack_34;
        float fStack_30;
        float fStack_2c;

        if ((float)obb.field_12 != 0.0 || (float)obb.field_28 != 0.0) {
            LogAssert(
                "obb.m_dummy1 == 0.0f && obb.m_dummy2 == 0.0f",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/primitives/Frustum.cpp",
                529, nullptr);
        }
        auto puVar12 = obb.SSOBeginPtr();
        float fVar1 = *(float*)(puVar12 + 1);
        uint64_t uVar3 = *puVar12;
        puVar12 = (uint64_t*)obb.GetScreen();
        uint64_t uVar5 = *puVar12;
        uint64_t uVar6 = puVar12[1];
        puVar12 = (uint64_t*)obb.GetDefaultValue();
        uint64_t uVar7 = *puVar12;
        uint64_t uVar8 = puVar12[1];
        uint64_t uVar9 = puVar12[2];
        uint64_t uVar10 = puVar12[3];
        float fVar2 = *(float*)(puVar12 + 4);
        auto pfVar13 = begin();
        auto pfVar14 = end();
        bool bVar17 = pfVar13 == pfVar14;
        if (bVar17) {
            cVar11 = '\x02';
        } else {
            local_68 = (float)uVar3;
            fStack_64 = (float)((unsigned long)uVar3 >> 32);
            local_38 = (float)uVar9;
            fStack_34 = (float)((unsigned long)uVar9 >> 32);
            fStack_30 = (float)uVar10;
            fStack_2c = (float)((unsigned long)uVar10 >> 32);
            local_58 = (float)uVar7;
            fStack_54 = (float)((unsigned long)uVar7 >> 32);
            fStack_50 = (float)uVar8;
            fStack_4c = (float)((unsigned long)uVar8 >> 32);
            iVar16 = 0;
            local_78 = (float)uVar5;
            fStack_74 = (float)((unsigned long)uVar5 >> 32);
            fStack_70 = (float)uVar6;
            fStack_6c = (float)((unsigned long)uVar6 >> 32);
            do {
                fVar19 = *pfVar13;
                fVar20 = pfVar13[1];
                fVar4 = pfVar13[2];
                fVar18 = ABS(fVar4 * fStack_30 + fVar20 * fStack_30 + fVar19 * fStack_30) * fStack_6c +
                         ABS(fVar4 * fVar2 + fVar20 * fStack_2c + fVar19 * fStack_30) * fStack_70 +
                         ABS(fVar4 * fStack_34 + fVar20 * local_38 + fVar19 * fStack_4c) * fStack_74 +
                         ABS(fVar4 * fStack_50 + fVar20 * fStack_54 + fVar19 * local_58) * local_78;
                fVar20 = fVar4 * fVar1 + fVar19 * local_68 + pfVar13[3] * 0.0 + fVar20 * fStack_64 + pfVar13[3];
                fVar19 = fVar18 + fVar20;
                iVar16 = (unsigned int)(0.0 < fVar20 - fVar18 && 0.0 <= fVar19) + iVar16;
                if (fVar19 < 0.0)
                    break;
                pfVar13 = pfVar13 + 4;
                bVar17 = pfVar13 == pfVar14;
            } while (!bVar17);
            cVar11 = '\x02' - (iVar16 == 6);
        }
        char cVar15 = '\0';
        if (bVar17) {
            cVar15 = cVar11;
        }
        return cVar15;
    }

    // 0x100c6ab00
    uint8_t Frustum::TestIntersection(const PlaneT<float>& plane) const {
        char cVar2;
        uint64_t local_40[2];

        local_40[0] = GetCornerPos(0);
        bool cVar1 = plane.OnPositiveSide(*local_40);
        BoxCorner boxCorner = 1;
        do {
            local_40[0] = GetCornerPos(boxCorner);
            cVar2 = plane.OnPositiveSide(*local_40);
            if (cVar1 != cVar2) {
                return 2;
            }
            boxCorner = boxCorner + 1;
        } while (boxCorner != 8);
        return 0;
    }

    // 0x100c6abb0
    uint8_t Frustum::TestIntersection(Vector3T<float>& vector31, const Vector3T<float>& vector32,
                                      const Vector3T<float>& vector33, float arg4) const {
        bool bVar1;
        float arg1;
        int iVar5;
        int iVar6;
        ReturnValue* vector33_00;
        float fVar9;
        float in_XMM1_Da;
        Sphere local_88;
        float local_74;
        float local_34;

        auto pPVar7 = begin();
        auto local_40 = end();
        bool bVar8 = pPVar7 == local_40;
        bool bVar3 = true;
        bool bVar2 = true;
        PlaneT<float>* local_68 = pPVar7;
        if (!bVar8) {
            do {
                local_34 = (float)pPVar7->SignedDistanceTo(vector32);
                fVar9 = (float)pPVar7->SignedDistanceTo(vector33);
                arg1 = local_34;
                bVar1 = local_34 < 0.0;
                in_XMM1_Da = local_34;
                if (fVar9 >= 0.0 || !bVar1) {
                    local_34 = fVar9;
                    iVar5 = sign<float>(arg1);
                    iVar6 = sign<float>(local_34);
                    bVar2 = bVar3;
                    if (iVar5 != iVar6) {
                        bVar2 = false;
                        bVar3 = false;
                    }
                }
                if (fVar9 < 0.0 && bVar1)
                    break;
                pPVar7 = pPVar7 + 16;
                bVar8 = pPVar7 == local_40;
            } while (!bVar8);
        }
        if (bVar8) {
            if (bVar2) {
                return 1;
            }
            if (local_68 != local_40) {
                pPVar7 = local_68;
                do {
                    local_88._0_8_ = vector33 - vector32;
                    local_88.field_8 = in_XMM1_Da;
                    vector33_00 = local_88 = Vector3T<float>::Normalize();
                    pPVar7->TestIntersection(vector31, local_74, vector32, *vector33_00, 1e-06);
                    local_88 = Sphere(vector31, arg4);
                    if (TestIntersection(local_88) != '\0') {
                        return 2;
                    }
                    pPVar7 = pPVar7 + 16;
                } while (pPVar7 != local_40);
            }
        }
        return 0;
    }

    // 0x100c6ad60
    int sign<float>(float arg1) {
        return (unsigned int)(0.0 < arg1) - (unsigned int)(arg1 < 0.0);
    }

    // 0x100c6aec0
    char Frustum::TestIntersection(const Frustum& frustum) const {
        bool cVar1;
        Vector3T<float>* pVVar5;
        array<Vector3T<float>, _8ul> local_350;
        array<Vector3T<float>, _8ul> local_230;
        uint8_t local_110[96];
        uint8_t local_b0[112];
        unsigned int local_34;

        GetBoundaryPoints((Frustum*)local_110);
        GetBoundaryPoints((Frustum*)local_b0);
        auto pVVar2 = local_110->begin();
        auto pVVar3 = local_110->end();
        for (; pVVar2 != pVVar3; pVVar2 = pVVar2 + 12) {
            cVar1 = TestIntersection(*pVVar2);
            if (cVar1) {
                return '\x02';
            }
        }
        pVVar2 = (Vector3T<float>*)local_b0->begin();
        pVVar3 = (Vector3T<float>*)local_b0->end();
        for (; pVVar2 != pVVar3; pVVar2 = pVVar2 + 12) {
            cVar1 = TestIntersection(frustum, pVVar2);
            if (cVar1) {
                return '\x02';
            }
        }
        GetBoxEdges(&local_230);
        new ((local_b0 + 96)) Vector3T();
        pVVar2 = (Vector3T<float>*)std::array<std::pair<Vector3T<float>, Vector3T<float>>, 12ul>::begin();
        pVVar3 = (Vector3T<float>*)std::array<std::pair<Vector3T<float>, Vector3T<float>>, 12ul>::end();
        unsigned long uVar4 =
            (((uint64_t)((int64_t)((unsigned long)&local_230 >> 8)) << 8) | (uint8_t)(pVVar2 == pVVar3));
        if (pVVar2 == pVVar3) {
            GetBoxEdges(&local_350);
            local_230 = local_350;
        } else {
            local_34 = (unsigned int)uVar4;
            pVVar5 = pVVar2;
            do {
                cVar1 = pVVar5->SloppyCompare(*(pVVar5 + 12), 1e-06);
                if ((!cVar1) && (cVar1 = TestIntersection(*((local_b0 + 96)), *pVVar5, *(pVVar5 + 12), 1.0), cVar1)) {
                    uVar4 = 0;
                    goto LAB_100c6b0d7;
                }
                pVVar5 = pVVar5 + 24;
            } while (pVVar5 != pVVar3);
            GetBoxEdges(&local_350);
            local_230 = local_350;
            if (pVVar2 == pVVar3) {
                uVar4 = (unsigned long)local_34;
            } else {
                cVar1 = TestIntersection(frustum, (Vector3T<float>*)(local_b0 + 96), pVVar2, pVVar2 + 12, 1.0);
                uVar4 = (unsigned long)local_34;
                if (!cVar1) {
                    pVVar2 = pVVar2 + 36;
                    do {
                        pVVar5 = pVVar2 - 12;
                        uVar4 = (unsigned long)(pVVar5 == pVVar3);
                        if (pVVar5 == pVVar3)
                            break;
                        cVar1 = TestIntersection(frustum, (Vector3T<float>*)(local_b0 + 96), pVVar5, pVVar2, 1.0);
                        pVVar2 = pVVar2 + 24;
                    } while (!cVar1);
                }
            }
        }
    LAB_100c6b0d7:
        return ((uint8_t)uVar4 ^ 1) * '\x02';
    }

    // 0x100c6b1a0
    bool Frustum::TestIntersectionScalar(const AABB& aabb) const {
        bool bVar7;
        bool bVar8;
        bool bVar9;
        bool bVar10;
        bool bVar11;
        bool bVar12;
        bool bVar13;
        bool bVar14;
        bool bVar17;
        float fVar18;
        float fVar19;
        float fVar20;
        float fVar21;
        float fVar22;
        float fVar23;
        float fVar24;

        auto pVVar15 = aabb.SSOBeginPtr();
        float* pfVar16 = (float*)(*pVVar15)[0];
        float fVar1 = *pfVar16;
        pfVar16 = (float*)(*pVVar15)[1];
        float fVar2 = *pfVar16;
        pfVar16 = (float*)(*pVVar15)[2];
        float fVar3 = *pfVar16;
        pVVar15 = (Vector3T<float>*)aabb.GetScreen();
        pfVar16 = (float*)(*pVVar15)[0];
        float fVar4 = *pfVar16;
        pfVar16 = (float*)(*pVVar15)[1];
        float fVar5 = *pfVar16;
        pfVar16 = (float*)(*pVVar15)[2];
        float fVar6 = *pfVar16;
        unsigned long arg1 = 0;
        do {
            pVVar15 = (Vector3T<float>*)(*this)[arg1];
            pfVar16 = (float*)(*pVVar15)[0];
            fVar22 = *pfVar16;
            pfVar16 = (float*)(*pVVar15)[1];
            fVar19 = *pfVar16;
            pfVar16 = (float*)(*pVVar15)[2];
            fVar20 = fVar22 * fVar1;
            fVar24 = fVar19 * fVar2;
            fVar21 = *pfVar16 * fVar3 + *(float*)(pVVar15 + 12);
            fVar23 = fVar24 + fVar20;
            fVar19 = fVar19 * fVar5;
            bVar17 = 0.0 < fVar21 + fVar23;
            fVar20 = fVar20 + fVar19;
            fVar22 = fVar22 * fVar4;
            bVar7 = 0.0 < fVar21 + fVar20;
            fVar19 = fVar19 + fVar22;
            bVar8 = 0.0 < fVar21 + fVar19;
            fVar18 = *pfVar16 * fVar6 + *(float*)(pVVar15 + 12);
            fVar24 = fVar24 + fVar22;
            bVar9 = 0.0 < fVar23 + fVar18;
            bVar10 = 0.0 < fVar18 + fVar24;
            bVar11 = 0.0 < fVar20 + fVar18;
            bVar12 = 0.0 < fVar19 + fVar18;
            bVar13 = 0.0 < fVar24 + fVar21;
            bVar14 = (((bVar10 || bVar9) || bVar11) || ((bVar8 || bVar7) || (bVar13 || bVar17))) || bVar12;
            if ((((!bVar10 && !bVar9) && !bVar11) && ((!bVar8 && !bVar7) && (!bVar13 && !bVar17))) && !bVar12) {
                return bVar14;
            }
            bVar17 = arg1 != 5;
            arg1 = arg1 + 1;
        } while (bVar17);
        return bVar14;
    }

    // 0x100c6b3a0
    char Frustum::TestIntersectionScalar(const OBB& obb) const {
        char cVar1;
        int iVar2;
        Vector3T<float>* pVVar4;
        float* pfVar5;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float fVar14;

        auto this_00 = obb.GetScreen();
        auto this_01 = obb.GetDefaultValue();
        auto this_02 = begin();
        auto pPVar3 = end();
        bool bVar7 = this_02 == pPVar3;
        if (bVar7) {
            cVar1 = '\x02';
        } else {
            iVar2 = 0;
            do {
                pVVar4 = (Vector3T<float>*)obb.SSOBeginPtr();
                fVar8 = (float)this_02->SignedDistanceTo(*pVVar4);
                pfVar5 = (float*)this_00->SSOBeginPtr();
                fVar14 = *pfVar5;
                pVVar4 = (Vector3T<float>*)(*this_01)[0];
                fVar9 = Vector3Dot<float>((Vector3T<float>*)this_02, pVVar4);
                fVar10 = (float)::abs(fVar9);
                pfVar5 = (float*)this_00->y();
                fVar9 = *pfVar5;
                pVVar4 = (Vector3T<float>*)(*this_01)[1];
                fVar11 = Vector3Dot<float>((Vector3T<float>*)this_02, pVVar4);
                fVar12 = (float)::abs(fVar11);
                pfVar5 = (float*)this_00->second();
                fVar11 = *pfVar5;
                pVVar4 = (Vector3T<float>*)(*this_01)[2];
                fVar13 = Vector3Dot<float>((Vector3T<float>*)this_02, pVVar4);
                fVar13 = (float)::abs(fVar13);
                fVar14 = fVar13 * fVar11 + fVar12 * fVar9 + fVar10 * fVar14;
                fVar9 = fVar14 + fVar8;
                iVar2 = (unsigned int)(0.0 < fVar8 - fVar14 && 0.0 <= fVar9) + iVar2;
                if (fVar9 < 0.0)
                    break;
                this_02 = this_02 + 16;
                bVar7 = this_02 == pPVar3;
            } while (!bVar7);
            cVar1 = '\x02' - (iVar2 == 6);
        }
        char cVar6 = '\0';
        if (bVar7) {
            cVar6 = cVar1;
        }
        return cVar6;
    }

    // 0x100c6b530
    char Frustum::TestIntersection(const Capsule3D& capsule3D) const {
        bool bVar1;
        PlaneT<float>* this_00;
        Vector3T<float>* pVVar2;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;

        float fVar6 = (float)capsule3D.GetRadiusSq();
        unsigned long arg1 = 0;
        bool bVar5 = true;
        unsigned int uVar4 = 0;
        do {
            this_00 = (PlaneT<float>*)(*this)[arg1];
            pVVar2 = (Vector3T<float>*)capsule3D.SSOBeginPtr();
            fVar7 = (float)this_00->SignedDistanceTo(*pVVar2);
            pVVar2 = (Vector3T<float>*)capsule3D.GetScreen();
            fVar8 = (float)this_00->SignedDistanceTo(*pVVar2);
            if (fVar8 * fVar7 <= fVar6) {
                uVar4 = uVar4 | 1 << ((unsigned int)arg1 & 31);
                bVar1 = true;
            } else {
                fVar9 = (float)fabs(fVar7);
                fVar10 = (float)fabs(fVar8);
                fVar11 = (float)capsule3D.GetMainRenderTargetScaleFactor();
                if (fVar9 <= fVar10) {
                    if (fVar7 < -fVar11)
                        goto LAB_100c6b62a;
                    fVar8 = (float)capsule3D.GetMainRenderTargetScaleFactor();
                    bVar1 = true;
                    if (fVar7 < fVar8)
                        goto LAB_100c6b642;
                } else if (fVar8 < -fVar11) {
                LAB_100c6b62a:
                    bVar1 = false;
                } else {
                    fVar7 = (float)capsule3D.GetMainRenderTargetScaleFactor();
                    bVar1 = true;
                    if (fVar8 < fVar7) {
                    LAB_100c6b642:
                        bVar1 = true;
                        uVar4 = uVar4 | 1 << ((unsigned int)arg1 & 31);
                    }
                }
            }
            if (!bVar1)
                break;
            bVar5 = arg1 < 5;
            arg1 = arg1 + 1;
        } while (arg1 != 6);
        char cVar3 = '\0';
        if (!bVar5) {
            cVar3 = '\x02' - (uVar4 == 0);
        }
        return cVar3;
    }

    // 0x100c6b6d0
    Frustum* Frustum::GetMinimumEnclosingAABB() const {
        Frustum* in_RSI;
        uint64_t local_28[2];

        new (this) math::AABB();
        local_28[0] = GetNearTopLeft(in_RSI);
        AddPoint(*local_28);
        local_28[0] = GetNearTopRight(in_RSI);
        AddPoint(*local_28);
        local_28[0] = GetNearBottomLeft(in_RSI);
        AddPoint(*local_28);
        local_28[0] = GetNearBottomRight(in_RSI);
        AddPoint(*local_28);
        local_28[0] = GetFarTopLeft(in_RSI);
        AddPoint(*local_28);
        local_28[0] = GetFarTopRight(in_RSI);
        AddPoint(*local_28);
        local_28[0] = GetFarBottomLeft(in_RSI);
        AddPoint(*local_28);
        local_28[0] = GetFarBottomRight(in_RSI);
        AddPoint(*local_28);
        return this;
    }

} // namespace jag::math
