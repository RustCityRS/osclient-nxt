// libs/math/primitives/Frustum.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.math

#include "Frustum.h"

namespace jag::math {
    // 0x1001cd990: the linker folded this into graphics::PointLightIndicesEffect::GetVisiblePointLights(), which has identical code
    Frustum::GetViewProjMatrix() const;

    // 0x1001d07e0: the linker folded this into Frustum::operator=(Frustum const&), which has identical code
    Frustum::operator=(Frustum&&);

    // 0x100c69490, 2320 bytes, placed by class name and debug map
    // Frustum::Set(Matrix44T<float> const&, Matrix44T<float> const&)
    void Frustum::Set(Matrix44T* param_1, Matrix44T* param_2) {
        Vector4T<float>* pVVar1;
        float* pfVar2;
        Vector3T<float>* pVVar3;
        undefined1 local_68[68];
        float local_24;

        math::operator*((math*)local_68, param_1, param_2);
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 0);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 3);
        local_24 = *pfVar2;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 0);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 0);
        local_24 = local_24 - *pfVar2;
        pVVar3 = (Vector3T<float>*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 0);
        pfVar2 = (float*)Vector3T<float>::operator[](pVVar3, 0);
        *pfVar2 = local_24;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 1);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 3);
        local_24 = *pfVar2;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 1);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 0);
        local_24 = local_24 - *pfVar2;
        pfVar2 = (float*)Vector3T<float>::operator[](pVVar3, 1);
        *pfVar2 = local_24;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 2);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 3);
        local_24 = *pfVar2;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 2);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 0);
        local_24 = local_24 - *pfVar2;
        pfVar2 = (float*)Vector3T<float>::operator[](pVVar3, 2);
        *pfVar2 = local_24;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 3);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 3);
        local_24 = *pfVar2;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 3);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 0);
        *(float*)(pVVar3 + 12) = local_24 - *pfVar2;
        pVVar3->Normalise();
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 0);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 3);
        local_24 = *pfVar2;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 0);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 0);
        local_24 = local_24 + *pfVar2;
        pVVar3 = (Vector3T<float>*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 1);
        pfVar2 = (float*)Vector3T<float>::operator[](pVVar3, 0);
        *pfVar2 = local_24;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 1);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 3);
        local_24 = *pfVar2;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 1);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 0);
        local_24 = local_24 + *pfVar2;
        pfVar2 = (float*)Vector3T<float>::operator[](pVVar3, 1);
        *pfVar2 = local_24;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 2);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 3);
        local_24 = *pfVar2;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 2);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 0);
        local_24 = local_24 + *pfVar2;
        pfVar2 = (float*)Vector3T<float>::operator[](pVVar3, 2);
        *pfVar2 = local_24;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 3);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 3);
        local_24 = *pfVar2;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 3);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 0);
        *(float*)(pVVar3 + 12) = local_24 + *pfVar2;
        pVVar3->Normalise();
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 0);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 3);
        local_24 = *pfVar2;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 0);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 1);
        local_24 = local_24 + *pfVar2;
        pVVar3 = (Vector3T<float>*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 2);
        pfVar2 = (float*)Vector3T<float>::operator[](pVVar3, 0);
        *pfVar2 = local_24;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 1);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 3);
        local_24 = *pfVar2;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 1);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 1);
        local_24 = local_24 + *pfVar2;
        pfVar2 = (float*)Vector3T<float>::operator[](pVVar3, 1);
        *pfVar2 = local_24;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 2);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 3);
        local_24 = *pfVar2;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 2);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 1);
        local_24 = local_24 + *pfVar2;
        pfVar2 = (float*)Vector3T<float>::operator[](pVVar3, 2);
        *pfVar2 = local_24;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 3);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 3);
        local_24 = *pfVar2;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 3);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 1);
        *(float*)(pVVar3 + 12) = local_24 + *pfVar2;
        pVVar3->Normalise();
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 0);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 3);
        local_24 = *pfVar2;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 0);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 1);
        local_24 = local_24 - *pfVar2;
        pVVar3 = (Vector3T<float>*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 3);
        pfVar2 = (float*)Vector3T<float>::operator[](pVVar3, 0);
        *pfVar2 = local_24;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 1);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 3);
        local_24 = *pfVar2;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 1);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 1);
        local_24 = local_24 - *pfVar2;
        pfVar2 = (float*)Vector3T<float>::operator[](pVVar3, 1);
        *pfVar2 = local_24;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 2);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 3);
        local_24 = *pfVar2;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 2);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 1);
        local_24 = local_24 - *pfVar2;
        pfVar2 = (float*)Vector3T<float>::operator[](pVVar3, 2);
        *pfVar2 = local_24;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 3);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 3);
        local_24 = *pfVar2;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 3);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 1);
        *(float*)(pVVar3 + 12) = local_24 - *pfVar2;
        pVVar3->Normalise();
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 0);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 3);
        local_24 = *pfVar2;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 0);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 2);
        local_24 = local_24 - *pfVar2;
        pVVar3 = (Vector3T<float>*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 4);
        pfVar2 = (float*)Vector3T<float>::operator[](pVVar3, 0);
        *pfVar2 = local_24;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 1);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 3);
        local_24 = *pfVar2;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 1);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 2);
        local_24 = local_24 - *pfVar2;
        pfVar2 = (float*)Vector3T<float>::operator[](pVVar3, 1);
        *pfVar2 = local_24;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 2);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 3);
        local_24 = *pfVar2;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 2);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 2);
        local_24 = local_24 - *pfVar2;
        pfVar2 = (float*)Vector3T<float>::operator[](pVVar3, 2);
        *pfVar2 = local_24;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 3);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 3);
        local_24 = *pfVar2;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 3);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 2);
        *(float*)(pVVar3 + 12) = local_24 - *pfVar2;
        pVVar3->Normalise();
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 0);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 3);
        local_24 = *pfVar2;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 0);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 2);
        local_24 = local_24 + *pfVar2;
        pVVar3 = (Vector3T<float>*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 5);
        pfVar2 = (float*)Vector3T<float>::operator[](pVVar3, 0);
        *pfVar2 = local_24;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 1);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 3);
        local_24 = *pfVar2;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 1);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 2);
        local_24 = local_24 + *pfVar2;
        pfVar2 = (float*)Vector3T<float>::operator[](pVVar3, 1);
        *pfVar2 = local_24;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 2);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 3);
        local_24 = *pfVar2;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 2);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 2);
        local_24 = local_24 + *pfVar2;
        pfVar2 = (float*)Vector3T<float>::operator[](pVVar3, 2);
        *pfVar2 = local_24;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 3);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 3);
        local_24 = *pfVar2;
        pVVar1 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)local_68, 3);
        pfVar2 = (float*)Vector4T<float>::operator[](pVVar1, 2);
        *(float*)(pVVar3 + 12) = local_24 + *pfVar2;
        pVVar3->Normalise();
        Matrix44T<float>::operator=((Matrix44T<float>*)&field_96, (Matrix44T*)local_68);
    }

    // 0x100c69df0, 352 bytes, placed by class name and debug map
    // Frustum::Set(std::array<Vector3T<float>, 4ul> const&, Vector3T<float> const&, float)
    /* Frustum::Set(std::array<Vector3T<float>, 4ul> const&,
   Vector3T<float> const&, float) */

    void Frustum::Set(array* param_1, Vector3T* param_2, float param_3) {
        math* pmVar2;
        Vector3T* pVVar3;
        Vector3T* pVVar4;
        Vector3T* pVVar5;
        PlaneT<float>* pPVar6;
        float fVar7;
        undefined8 local_68[2];
        math* local_58;
        Vector3T* local_48;
        Vector3T* local_40;

        pmVar2 = (math*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 4);
        local_58 = pmVar2;
        pVVar3 = (Vector3T*)std::array<Vector3T<float>, 4ul>::operator[]((array<Vector3T<float>, 4ul>*)param_1, 2);
        local_40 = pVVar3;
        pVVar4 = (Vector3T*)std::array<Vector3T<float>, 4ul>::operator[]((array<Vector3T<float>, 4ul>*)param_1, 3);
        pVVar5 = (Vector3T*)std::array<Vector3T<float>, 4ul>::operator[]((array<Vector3T<float>, 4ul>*)param_1, 0);
        local_48 = pVVar5;
        pmVar2->Set(pVVar3, pVVar4, pVVar5);
        pPVar6 = (PlaneT<float>*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 1);
        pPVar6->Set(pVVar3, pVVar5, param_2);
        pPVar6 = (PlaneT<float>*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 0);
        pVVar3 = (Vector3T*)std::array<Vector3T<float>, 4ul>::operator[]((array<Vector3T<float>, 4ul>*)param_1, 1);
        pPVar6->Set(pVVar3, pVVar4, param_2);
        pPVar6 = (PlaneT<float>*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 3);
        pPVar6->Set(pVVar4, local_40, param_2);
        pPVar6 = (PlaneT<float>*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 2);
        pPVar6->Set(local_48, pVVar3, param_2);
        pVVar3 = (Vector3T*)5;
        pPVar6 = (PlaneT<float>*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 5);
        pmVar2 = local_58;
        local_68[0] = math::operator-(local_58, pVVar3);
        fVar7 = Vector3Dot<float>((Vector3T*)pmVar2, param_2);
        pPVar6->Set(local_68, fVar7 + param_3);
    }

    // 0x100c6a0a0, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float> operator-<float>(Vector3T<float> const&)
    /* Vector3T<float> TEMPNAMEPLACEHOLDERVALUE(Vector3T<float> const&)
    */

    undefined8 operator-(Vector3T* param_1) {
        undefined8 uVar1;
        ColourHSL local_18;

        new (&local_18) ColourHSL(-field_0, -field_4, -field_8);
        uVar1._0_4_ = local_18.field_0;
        uVar1._4_4_ = local_18.field_4;
        return uVar1;
    }

    // 0x100c6a0e0, 48 bytes, inline, placed by debug map only (low confidence)
    // float Vector3Dot<float>(Vector3T<float> const&, Vector3T<float> const&)
    float Vector3Dot<float>(Vector3T* param_1, Vector3T* param_2) {
        return *(float*)(param_2 + 8) * *(float*)(param_1 + 8) + *(float*)(param_2 + 4) * *(float*)(param_1 + 4) +
               *(float*)param_2 * *(float*)param_1;
    }

    // 0x100c6a110, 224 bytes, placed by class name and debug map
    // Frustum::GetCornerPos(BoxCorner) const
    undefined8 Frustum::GetCornerPos(int param_2) {
        undefined8 uVar1;
        undefined8 local_28[2];

        if (7 < param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "static_cast<int>(frustumCorner) < BOX_CORNER_NTYPES",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/primitives/Frustum.cpp", 77,
                (char*)0);
        }
        switch (param_2) {
        case 0:
            uVar1 = GetNearTopLeft(this);
            break;
        case 1:
            uVar1 = GetNearTopRight(this);
            break;
        case 2:
            uVar1 = GetNearBottomLeft(this);
            break;
        case 3:
            uVar1 = GetNearBottomRight(this);
            break;
        case 4:
            uVar1 = GetFarTopLeft(this);
            break;
        case 5:
            uVar1 = GetFarTopRight(this);
            break;
        case 6:
            uVar1 = GetFarBottomLeft(this);
            break;
        case 7:
            uVar1 = GetFarBottomRight(this);
            break;
        default:
            new (local_28) Vector3T<int>();
            return local_28[0];
        }
        return uVar1;
    }

    // 0x100c6a470, 208 bytes, placed by class name and debug map
    // Frustum::GetBoundaryPoints() const
    Frustum* Frustum::GetBoundaryPoints() {
        undefined8 uVar1;
        undefined4 in_XMM1_Da;

        uVar1 = GetCornerPos();
        field_0 = uVar1;
        field_8 = in_XMM1_Da;
        uVar1 = GetCornerPos();
        field_12 = uVar1;
        field_20 = in_XMM1_Da;
        uVar1 = GetCornerPos();
        field_24 = uVar1;
        field_32 = in_XMM1_Da;
        uVar1 = GetCornerPos();
        field_36 = uVar1;
        field_44 = in_XMM1_Da;
        uVar1 = GetCornerPos();
        field_48 = uVar1;
        field_56 = in_XMM1_Da;
        uVar1 = GetCornerPos();
        field_60 = uVar1;
        field_68 = in_XMM1_Da;
        uVar1 = GetCornerPos();
        field_72 = uVar1;
        field_80 = in_XMM1_Da;
        uVar1 = GetCornerPos();
        field_84 = uVar1;
        field_92 = in_XMM1_Da;
        return this;
    }

    // 0x100c6a540, 96 bytes, placed by class name and debug map
    // Frustum::Translate(float)
    Frustum* Frustum::Translate(float param_1) {
        PlaneT<float>* this_00;
        PlaneT<float>* pPVar1;

        this_00 = (PlaneT<float>*)begin();
        pPVar1 = (PlaneT<float>*)end();
        for (; this_00 != pPVar1; this_00 = this_00 + 16) {
            this_00->Translate(param_1);
        }
        return this;
    }

    // 0x100c6a5e0, 80 bytes, placed by class name and debug map
    // Frustum::Translate(Vector3T<float> const&)
    Frustum* Frustum::Translate(Vector3T* param_1) {
        PlaneT<float>* this_00;
        PlaneT<float>* pPVar1;

        this_00 = (PlaneT<float>*)begin();
        pPVar1 = (PlaneT<float>*)end();
        for (; this_00 != pPVar1; this_00 = this_00 + 16) {
            this_00->Translate(param_1);
        }
        return this;
    }

    // 0x100c6a660, 112 bytes, placed by class name and debug map
    // Frustum::TestIntersection(Vector3T<float> const&) const
    byte Frustum::TestIntersection(Vector3T* param_1) {
        PlaneT<float>* pPVar1;
        ulong uVar2;
        bool bVar3;
        float fVar4;

        pPVar1 = (PlaneT<float>*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 0);
        fVar4 = (float)pPVar1->SignedDistanceTo(param_1);
        bVar3 = true;
        if (0.0 <= fVar4) {
            uVar2 = 0;
            do {
                bVar3 = uVar2 < 5;
                if (uVar2 == 5)
                    break;
                uVar2 = uVar2 + 1;
                pPVar1 =
                    (PlaneT<float>*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, uVar2);
                fVar4 = (float)pPVar1->SignedDistanceTo(param_1);
            } while (0.0 <= fVar4);
        }
        return bVar3 ^ 1;
    }

    // 0x100c6a700, 224 bytes, placed by class name and debug map
    // Frustum::TestIntersection(Sphere const&) const
    char Frustum::TestIntersection(Sphere* param_1) {
        uint uVar1;
        PlaneT<float>* this_00;
        vector* pvVar2;
        char cVar3;
        type* ptVar4;
        type* ptVar5;
        uint uVar6;
        bool bVar7;
        float fVar8;
        float fVar9;
        float fVar10;

        bVar7 = true;
        ptVar4 = (type*)0;
        uVar6 = 0;
        do {
            ptVar5 = ptVar4;
            this_00 = (PlaneT<float>*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this,
                                                                                 (ulong)ptVar4);
            pvVar2 = param_1->SSOBeginPtr(ptVar5);
            fVar8 = (float)this_00->SignedDistanceTo(pvVar2);
            fVar9 = (float)param_1->GetOutlineRadiusAdjustment();
            if (-fVar9 <= fVar8) {
                fVar10 = (float)param_1->GetOutlineRadiusAdjustment();
                uVar1 = 1 << ((byte)ptVar4 & 31);
                if (fVar10 < fVar8) {
                    uVar1 = 0;
                }
                uVar6 = uVar6 | uVar1;
            }
            if (fVar8 < -fVar9)
                break;
            bVar7 = ptVar4 < (type*)5;
            ptVar4 = ptVar4 + 1;
        } while (ptVar4 != (type*)6);
        cVar3 = '\0';
        if (!bVar7) {
            cVar3 = '\x02' - (uVar6 == 0);
        }
        return cVar3;
    }

    // 0x100c6a7e0, 16 bytes, placed by class name and debug map
    // Frustum::TestIntersection(AABB const&) const
    undefined1 Frustum::TestIntersection(AABB* param_1) {
        return TestIntersectionSSE(this, param_1);
    }

    // 0x100c6a7f0, 304 bytes, placed by class name and debug map
    // Frustum::TestIntersectionSSE(AABB const&) const
    undefined1 Frustum::TestIntersectionSSE(AABB* param_1) {
        undefined1 auVar1[16];
        undefined1 auVar2[16];
        undefined1 auVar3[16];
        float fVar4;
        float fVar5;
        float fVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        undefined8 uVar10;
        uint uVar11;
        vector* pvVar12;
        undefined8* puVar13;
        float* pfVar14;
        undefined1 auVar15[16];
        undefined1 auVar16[16];
        undefined1 auVar17[16];
        undefined1 auVar18[16];
        undefined1 auVar19[16];
        undefined1 auVar20[16];
        undefined1 auVar21[16];
        undefined1 auVar22[16];
        undefined1 auVar23[16];
        undefined1 auVar24[16];
        undefined1 auVar25[16];
        float local_38;
        float fStack_34;
        float fStack_30;
        float fStack_2c;
        float local_28;
        float fStack_24;
        float fStack_20;
        float fStack_1c;

        pvVar12 = param_1->SSOBeginPtr(param_1);
        uVar7 = *(undefined8*)pvVar12;
        uVar8 = *(undefined8*)(pvVar12 + 8);
        puVar13 = (undefined8*)param_1->GetScreen();
        uVar9 = *puVar13;
        uVar10 = puVar13[1];
        pfVar14 = (float*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 0);
        fVar4 = pfVar14[3];
        fVar5 = pfVar14[7];
        fVar6 = pfVar14[11];
        local_28 = (float)uVar9;
        fStack_24 = (float)((ulong)uVar9 >> 32);
        fStack_20 = (float)uVar10;
        fStack_1c = (float)((ulong)uVar10 >> 32);
        auVar20._0_4_ = pfVar14[8] * local_28;
        auVar20._4_4_ = pfVar14[9] * fStack_24;
        auVar20._8_4_ = pfVar14[10] * fStack_20;
        auVar20._12_4_ = fVar6 * fStack_1c;
        local_38 = (float)uVar7;
        fStack_34 = (float)((ulong)uVar7 >> 32);
        fStack_30 = (float)uVar8;
        fStack_2c = (float)((ulong)uVar8 >> 32);
        auVar22._0_4_ = *pfVar14 * local_38;
        auVar22._4_4_ = pfVar14[1] * fStack_34;
        auVar22._8_4_ = pfVar14[2] * fStack_30;
        auVar22._12_4_ = fVar4 * fStack_2c;
        auVar15._4_4_ = pfVar14[1] * fStack_24;
        auVar15._0_4_ = *pfVar14 * local_28;
        auVar15._8_4_ = pfVar14[2] * fStack_20;
        auVar15._12_4_ = fVar4 * fStack_1c;
        auVar23 = maxps(auVar22, auVar15);
        auVar25._0_4_ = pfVar14[4] * local_38;
        auVar25._4_4_ = pfVar14[5] * fStack_34;
        auVar25._8_4_ = pfVar14[6] * fStack_30;
        auVar25._12_4_ = fVar5 * fStack_2c;
        auVar19._4_4_ = pfVar14[5] * fStack_24;
        auVar19._0_4_ = pfVar14[4] * local_28;
        auVar19._8_4_ = pfVar14[6] * fStack_20;
        auVar19._12_4_ = fVar5 * fStack_1c;
        auVar15 = maxps(auVar25, auVar19);
        auVar18._0_4_ = pfVar14[8] * local_38;
        auVar18._4_4_ = pfVar14[9] * fStack_34;
        auVar18._8_4_ = pfVar14[10] * fStack_30;
        auVar18._12_4_ = fVar6 * fStack_2c;
        auVar19 = maxps(auVar18, auVar20);
        auVar23._0_4_ = auVar23._8_4_ + fVar4 + auVar23._4_4_ + auVar23._0_4_;
        auVar23._4_4_ = auVar15._8_4_ + fVar5 + auVar15._4_4_ + auVar15._0_4_;
        auVar23._8_4_ = auVar19._8_4_ + fVar6 + auVar19._4_4_ + auVar19._0_4_;
        auVar23._12_4_ = auVar19._0_4_ + fVar6 + auVar19._12_4_ + auVar19._12_4_;
        uVar11 = movmskps((int)pfVar14, auVar23);
        if ((uVar11 & 7) == 0) {
            pfVar14 = (float*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, 3);
            fVar4 = pfVar14[3];
            fVar5 = pfVar14[7];
            fVar6 = pfVar14[11];
            auVar21._0_4_ = *pfVar14 * local_38;
            auVar21._4_4_ = pfVar14[1] * fStack_34;
            auVar21._8_4_ = pfVar14[2] * fStack_30;
            auVar21._12_4_ = fVar4 * fStack_2c;
            auVar1._4_4_ = pfVar14[1] * fStack_24;
            auVar1._0_4_ = *pfVar14 * local_28;
            auVar1._8_4_ = pfVar14[2] * fStack_20;
            auVar1._12_4_ = fVar4 * fStack_1c;
            auVar19 = maxps(auVar21, auVar1);
            auVar16._0_4_ = pfVar14[4] * local_38;
            auVar16._4_4_ = pfVar14[5] * fStack_34;
            auVar16._8_4_ = pfVar14[6] * fStack_30;
            auVar16._12_4_ = fVar5 * fStack_2c;
            auVar2._4_4_ = pfVar14[5] * fStack_24;
            auVar2._0_4_ = pfVar14[4] * local_28;
            auVar2._8_4_ = pfVar14[6] * fStack_20;
            auVar2._12_4_ = fVar5 * fStack_1c;
            auVar15 = maxps(auVar16, auVar2);
            auVar24._0_4_ = local_38 * pfVar14[8];
            auVar24._4_4_ = fStack_34 * pfVar14[9];
            auVar24._8_4_ = fStack_30 * pfVar14[10];
            auVar24._12_4_ = fStack_2c * fVar6;
            auVar3._4_4_ = fStack_24 * pfVar14[9];
            auVar3._0_4_ = local_28 * pfVar14[8];
            auVar3._8_4_ = fStack_20 * pfVar14[10];
            auVar3._12_4_ = fStack_1c * fVar6;
            auVar25 = maxps(auVar24, auVar3);
            auVar17._0_4_ = auVar19._8_4_ + fVar4 + auVar19._4_4_ + auVar19._0_4_;
            auVar17._4_4_ = auVar15._8_4_ + fVar5 + auVar15._4_4_ + auVar15._0_4_;
            auVar17._8_4_ = auVar25._8_4_ + fVar6 + auVar25._4_4_ + auVar25._0_4_;
            auVar17._12_4_ = auVar25._0_4_ + fVar6 + auVar25._12_4_ + auVar25._12_4_;
            uVar11 = movmskps((int)pfVar14, auVar17);
            if ((uVar11 & 7) == 0) {
                return 1;
            }
        }
        return 0;
    }

    // 0x100c6a920, 16 bytes, placed by class name and debug map
    // Frustum::TestIntersection(OBB const&) const
    undefined1 Frustum::TestIntersection(OBB* param_1) {
        return TestIntersectionSSE(this, param_1);
    }

    // 0x100c6a930, 464 bytes, placed by class name and debug map
    // Frustum::TestIntersectionSSE(OBB const&) const
    char Frustum::TestIntersectionSSE(OBB* param_1) {
        float fVar1;
        float fVar2;
        undefined8 uVar3;
        float fVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        undefined8 uVar10;
        char cVar11;
        vector* pvVar12;
        undefined8* puVar13;
        float* pfVar14;
        float* pfVar15;
        char cVar16;
        int iVar17;
        bool bVar18;
        float fVar19;
        float fVar20;
        float fVar21;
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

        if ((float)param_1->field_12 != 0.0 || (float)param_1->field_28 != 0.0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "obb.m_dummy1 == 0.0f && obb.m_dummy2 == 0.0f",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/primitives/Frustum.cpp",
                529, (char*)0);
        }
        pvVar12 = param_1->SSOBeginPtr(param_1);
        fVar1 = *(float*)(pvVar12 + 8);
        uVar3 = *(undefined8*)pvVar12;
        puVar13 = (undefined8*)param_1->GetScreen();
        uVar5 = *puVar13;
        uVar6 = puVar13[1];
        puVar13 = (undefined8*)param_1->GetDefaultValue();
        uVar7 = *puVar13;
        uVar8 = puVar13[1];
        uVar9 = puVar13[2];
        uVar10 = puVar13[3];
        fVar2 = *(float*)(puVar13 + 4);
        pfVar14 = (float*)begin();
        pfVar15 = (float*)end();
        bVar18 = pfVar14 == pfVar15;
        if (bVar18) {
            cVar11 = '\x02';
        } else {
            local_68 = (float)uVar3;
            fStack_64 = (float)((ulong)uVar3 >> 32);
            local_38 = (float)uVar9;
            fStack_34 = (float)((ulong)uVar9 >> 32);
            fStack_30 = (float)uVar10;
            fStack_2c = (float)((ulong)uVar10 >> 32);
            local_58 = (float)uVar7;
            fStack_54 = (float)((ulong)uVar7 >> 32);
            fStack_50 = (float)uVar8;
            fStack_4c = (float)((ulong)uVar8 >> 32);
            iVar17 = 0;
            local_78 = (float)uVar5;
            fStack_74 = (float)((ulong)uVar5 >> 32);
            fStack_70 = (float)uVar6;
            fStack_6c = (float)((ulong)uVar6 >> 32);
            do {
                fVar20 = *pfVar14;
                fVar21 = pfVar14[1];
                fVar4 = pfVar14[2];
                fVar19 = ABS(fVar4 * fStack_30 + fVar21 * fStack_30 + fVar20 * fStack_30) * fStack_6c +
                         ABS(fVar4 * fVar2 + fVar21 * fStack_2c + fVar20 * fStack_30) * fStack_70 +
                         ABS(fVar4 * fStack_34 + fVar21 * local_38 + fVar20 * fStack_4c) * fStack_74 +
                         ABS(fVar4 * fStack_50 + fVar21 * fStack_54 + fVar20 * local_58) * local_78;
                fVar21 = fVar4 * fVar1 + fVar20 * local_68 + pfVar14[3] * 0.0 + fVar21 * fStack_64 + pfVar14[3];
                fVar20 = fVar19 + fVar21;
                iVar17 = (uint)(0.0 < fVar21 - fVar19 && 0.0 <= fVar20) + iVar17;
                if (fVar20 < 0.0)
                    break;
                pfVar14 = pfVar14 + 4;
                bVar18 = pfVar14 == pfVar15;
            } while (!bVar18);
            cVar11 = '\x02' - (iVar17 == 6);
        }
        cVar16 = '\0';
        if (bVar18) {
            cVar16 = cVar11;
        }
        return cVar16;
    }

    // 0x100c6ab00, 144 bytes, placed by class name and debug map
    // Frustum::TestIntersection(PlaneT<float> const&) const
    undefined1 Frustum::TestIntersection(PlaneT* param_1) {
        char cVar1;
        char cVar2;
        int iVar3;
        undefined8 local_40[2];

        local_40[0] = GetCornerPos(this, 0);
        cVar1 = param_1->OnPositiveSide(local_40);
        iVar3 = 1;
        do {
            local_40[0] = GetCornerPos(this, iVar3);
            cVar2 = param_1->OnPositiveSide(local_40);
            if (cVar1 != cVar2) {
                return 2;
            }
            iVar3 = iVar3 + 1;
        } while (iVar3 != 8);
        return 0;
    }

    // 0x100c6abb0, 400 bytes, placed by class name and debug map
    // Frustum::TestIntersection(Vector3T<float>&, Vector3T<float> const&, Vector3T<float> const&, float) const
    undefined1 Frustum::TestIntersection(Vector3T* param_1, Vector3T* param_2, Vector3T* param_3, float param_4) {
        bool bVar1;
        bool bVar2;
        bool bVar3;
        float fVar6;
        int iVar8;
        int iVar9;
        PlaneT<float>* pPVar10;
        Vector3T* pVVar11;
        bool bVar12;
        float fVar13;
        float in_XMM1_Da;
        Sphere local_88;
        float local_74;
        PlaneT<float>* local_68;
        PlaneT<float>* local_40;
        float local_34;

        pPVar10 = (PlaneT<float>*)begin();
        local_40 = (PlaneT<float>*)end();
        bVar12 = pPVar10 == local_40;
        bVar3 = true;
        bVar2 = true;
        local_68 = pPVar10;
        if (!bVar12) {
            do {
                local_34 = (float)pPVar10->SignedDistanceTo(param_2);
                fVar13 = (float)pPVar10->SignedDistanceTo(param_3);
                fVar6 = local_34;
                bVar1 = local_34 < 0.0;
                in_XMM1_Da = local_34;
                if (fVar13 >= 0.0 || !bVar1) {
                    local_34 = fVar13;
                    iVar8 = sign<float>(fVar6);
                    iVar9 = sign<float>(local_34);
                    bVar2 = bVar3;
                    if (iVar8 != iVar9) {
                        bVar2 = false;
                        bVar3 = false;
                    }
                }
                if (fVar13 < 0.0 && bVar1)
                    break;
                pPVar10 = pPVar10 + 16;
                bVar12 = pPVar10 == local_40;
            } while (!bVar12);
        }
        if (bVar12) {
            if (bVar2) {
                return 1;
            }
            if (local_68 != local_40) {
                pPVar10 = local_68;
                do {
                    local_88._0_8_ = math::operator-(param_3, param_2);
                    local_88.field_8 = in_XMM1_Da;
                    pVVar11 = (Vector3T*)local_88.Normalize();
                    pPVar10->TestIntersection(param_1, &local_74, param_2, pVVar11, 1e-06);
                    new (&local_88) Sphere(param_1, param_4);
                    if (TestIntersection((Frustum*)this, &local_88) != '\0') {
                        return 2;
                    }
                    pPVar10 = pPVar10 + 16;
                } while (pPVar10 != local_40);
            }
        }
        return 0;
    }

    // 0x100c6ad60, 32 bytes, inline, placed by debug map only (low confidence)
    // int sign<float>(float)
    int sign<float>(float param_1) {
        return (uint)(0.0 < param_1) - (uint)(param_1 < 0.0);
    }

    // 0x100c6aec0, 576 bytes, placed by class name and debug map
    // Frustum::TestIntersection(Frustum const&) const
    char Frustum::TestIntersection(Frustum* param_1) {
        char cVar1;
        Vector3T* pVVar2;
        Vector3T* pVVar3;
        ulong uVar4;
        Vector3T* pVVar5;
        math local_350[3];
        math local_230[3];
        undefined1 local_110[96];
        undefined1 local_b0[112];
        uint local_34;

        GetBoundaryPoints((Frustum*)local_110);
        GetBoundaryPoints((Frustum*)local_b0);
        pVVar2 = (Vector3T*)local_110->begin();
        pVVar3 = (Vector3T*)local_110->end();
        for (; pVVar2 != pVVar3; pVVar2 = pVVar2 + 12) {
            cVar1 = TestIntersection(this, pVVar2);
            if (cVar1 != '\0') {
                return '\x02';
            }
        }
        pVVar2 = (Vector3T*)local_b0->begin();
        pVVar3 = (Vector3T*)local_b0->end();
        for (; pVVar2 != pVVar3; pVVar2 = pVVar2 + 12) {
            cVar1 = TestIntersection(param_1, pVVar2);
            if (cVar1 != '\0') {
                return '\x02';
            }
        }
        GetBoxEdges(local_230, (array*)local_110);
        new ((local_b0 + 96)) Vector3T<int>();
        pVVar2 = (Vector3T*)local_230->begin();
        pVVar3 = (Vector3T*)local_230->end();
        uVar4 = CONCAT71((int7)((ulong)local_230 >> 8), pVVar2 == pVVar3);
        if (pVVar2 == pVVar3) {
            GetBoxEdges(local_350, (array*)local_b0);
            std::array<std::pair<Vector3T<float>, Vector3T<float>>, 12ul>::operator=(
                (array<std::pair<Vector3T<float>, Vector3T<float>>, 12ul>*)local_230, (array*)local_350);
        } else {
            local_34 = (uint)uVar4;
            pVVar5 = pVVar2;
            do {
                cVar1 = pVVar5->SloppyCompare(pVVar5 + 12, 1e-06);
                if ((cVar1 == '\0') &&
                    (cVar1 = TestIntersection(this, (Vector3T*)(local_b0 + 96), pVVar5, pVVar5 + 12, 1.0),
                     cVar1 != '\0')) {
                    uVar4 = 0;
                    goto LAB_100c6b0d7;
                }
                pVVar5 = pVVar5 + 24;
            } while (pVVar5 != pVVar3);
            GetBoxEdges(local_350, (array*)local_b0);
            std::array<std::pair<Vector3T<float>, Vector3T<float>>, 12ul>::operator=(
                (array<std::pair<Vector3T<float>, Vector3T<float>>, 12ul>*)local_230, (array*)local_350);
            if (pVVar2 == pVVar3) {
                uVar4 = (ulong)local_34;
            } else {
                cVar1 = TestIntersection(param_1, (Vector3T*)(local_b0 + 96), pVVar2, pVVar2 + 12, 1.0);
                uVar4 = (ulong)local_34;
                if (cVar1 == '\0') {
                    pVVar2 = pVVar2 + 36;
                    do {
                        pVVar5 = pVVar2 + -12;
                        uVar4 = (ulong)(pVVar5 == pVVar3);
                        if (pVVar5 == pVVar3)
                            break;
                        cVar1 = TestIntersection(param_1, (Vector3T*)(local_b0 + 96), pVVar5, pVVar2, 1.0);
                        pVVar2 = pVVar2 + 24;
                    } while (cVar1 == '\0');
                }
            }
        }
    LAB_100c6b0d7:
        return ((byte)uVar4 ^ 1) * '\x02';
    }

    // 0x100c6b1a0, 512 bytes, placed by class name and debug map
    // Frustum::TestIntersectionScalar(AABB const&) const
    bool Frustum::TestIntersectionScalar(AABB* param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        bool bVar7;
        bool bVar8;
        bool bVar9;
        bool bVar10;
        bool bVar11;
        bool bVar12;
        bool bVar13;
        bool bVar14;
        vector* this_00;
        float* pfVar15;
        Vector3T<float>* pVVar16;
        ulong uVar17;
        bool bVar18;
        float fVar19;
        float fVar20;
        float fVar21;
        float fVar22;
        float fVar23;
        float fVar24;
        float fVar25;

        this_00 = param_1->SSOBeginPtr(param_1);
        pfVar15 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 0);
        fVar1 = *pfVar15;
        pfVar15 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 1);
        fVar2 = *pfVar15;
        pfVar15 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this_00, 2);
        fVar3 = *pfVar15;
        pVVar16 = (Vector3T<float>*)param_1->GetScreen();
        pfVar15 = (float*)Vector3T<float>::operator[](pVVar16, 0);
        fVar4 = *pfVar15;
        pfVar15 = (float*)Vector3T<float>::operator[](pVVar16, 1);
        fVar5 = *pfVar15;
        pfVar15 = (float*)Vector3T<float>::operator[](pVVar16, 2);
        fVar6 = *pfVar15;
        uVar17 = 0;
        do {
            pVVar16 =
                (Vector3T<float>*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, uVar17);
            pfVar15 = (float*)Vector3T<float>::operator[](pVVar16, 0);
            fVar23 = *pfVar15;
            pfVar15 = (float*)Vector3T<float>::operator[](pVVar16, 1);
            fVar20 = *pfVar15;
            pfVar15 = (float*)Vector3T<float>::operator[](pVVar16, 2);
            fVar21 = fVar23 * fVar1;
            fVar25 = fVar20 * fVar2;
            fVar22 = *pfVar15 * fVar3 + *(float*)(pVVar16 + 12);
            fVar24 = fVar25 + fVar21;
            fVar20 = fVar20 * fVar5;
            bVar18 = 0.0 < fVar22 + fVar24;
            fVar21 = fVar21 + fVar20;
            fVar23 = fVar23 * fVar4;
            bVar7 = 0.0 < fVar22 + fVar21;
            fVar20 = fVar20 + fVar23;
            bVar8 = 0.0 < fVar22 + fVar20;
            fVar19 = *pfVar15 * fVar6 + *(float*)(pVVar16 + 12);
            fVar25 = fVar25 + fVar23;
            bVar9 = 0.0 < fVar24 + fVar19;
            bVar10 = 0.0 < fVar19 + fVar25;
            bVar11 = 0.0 < fVar21 + fVar19;
            bVar12 = 0.0 < fVar20 + fVar19;
            bVar13 = 0.0 < fVar25 + fVar22;
            bVar14 = (((bVar10 || bVar9) || bVar11) || ((bVar8 || bVar7) || (bVar13 || bVar18))) || bVar12;
            if ((((!bVar10 && !bVar9) && !bVar11) && ((!bVar8 && !bVar7) && (!bVar13 && !bVar18))) && !bVar12) {
                return bVar14;
            }
            bVar18 = uVar17 != 5;
            uVar17 = uVar17 + 1;
        } while (bVar18);
        return bVar14;
    }

    // 0x100c6b3a0, 400 bytes, placed by class name and debug map
    // Frustum::TestIntersectionScalar(OBB const&) const
    char Frustum::TestIntersectionScalar(OBB* param_1) {
        char cVar1;
        int iVar2;
        Layout* this_00;
        Matrix33T<float>* this_01;
        PlaneT<float>* this_02;
        PlaneT<float>* pPVar3;
        vector* pvVar4;
        Vector3T* pVVar5;
        float* pfVar6;
        OBB* pOVar7;
        char cVar8;
        bool bVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        float fVar15;
        float fVar16;

        pOVar7 = param_1;
        this_00 = (Layout*)param_1->GetScreen();
        this_01 = (Matrix33T<float>*)param_1->GetDefaultValue();
        this_02 = (PlaneT<float>*)begin();
        pPVar3 = (PlaneT<float>*)end();
        bVar9 = this_02 == pPVar3;
        if (bVar9) {
            cVar1 = '\x02';
        } else {
            iVar2 = 0;
            do {
                pvVar4 = param_1->SSOBeginPtr(pOVar7);
                fVar10 = (float)this_02->SignedDistanceTo(pvVar4);
                pvVar4 = eastl::string::Layout::SSOBeginPtr(this_00, (type*)pvVar4);
                fVar16 = *(float*)pvVar4;
                pVVar5 = (Vector3T*)Matrix33T<float>::operator[](this_01, 0);
                fVar11 = Vector3Dot<float>((Vector3T*)this_02, pVVar5);
                fVar12 = (float)::abs(fVar11);
                pfVar6 = (float*)this_00->y();
                fVar11 = *pfVar6;
                pVVar5 = (Vector3T*)Matrix33T<float>::operator[](this_01, 1);
                fVar13 = Vector3Dot<float>((Vector3T*)this_02, pVVar5);
                fVar14 = (float)::abs(fVar13);
                pfVar6 = (float*)this_00->second();
                fVar13 = *pfVar6;
                pOVar7 = (OBB*)Matrix33T<float>::operator[](this_01, 2);
                fVar15 = Vector3Dot<float>((Vector3T*)this_02, (Vector3T*)pOVar7);
                fVar15 = (float)::abs(fVar15);
                fVar16 = fVar15 * fVar13 + fVar14 * fVar11 + fVar12 * fVar16;
                fVar11 = fVar16 + fVar10;
                iVar2 = (uint)(0.0 < fVar10 - fVar16 && 0.0 <= fVar11) + iVar2;
                if (fVar11 < 0.0)
                    break;
                this_02 = this_02 + 16;
                bVar9 = this_02 == pPVar3;
            } while (!bVar9);
            cVar1 = '\x02' - (iVar2 == 6);
        }
        cVar8 = '\0';
        if (bVar9) {
            cVar8 = cVar1;
        }
        return cVar8;
    }

    // 0x100c6b530, 368 bytes, placed by class name and debug map
    // Frustum::TestIntersection(Capsule3D const&) const
    char Frustum::TestIntersection(Capsule3D* param_1) {
        bool bVar1;
        PlaneT<float>* this_00;
        vector* pvVar2;
        Vector3T* pVVar3;
        char cVar4;
        type* ptVar5;
        type* ptVar6;
        uint uVar7;
        bool bVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float fVar14;

        fVar9 = (float)param_1->GetRadiusSq();
        ptVar6 = (type*)0;
        bVar8 = true;
        uVar7 = 0;
        do {
            ptVar5 = ptVar6;
            this_00 = (PlaneT<float>*)std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this,
                                                                                 (ulong)ptVar6);
            pvVar2 = param_1->SSOBeginPtr(ptVar5);
            fVar10 = (float)this_00->SignedDistanceTo(pvVar2);
            pVVar3 = (Vector3T*)param_1->GetScreen();
            fVar11 = (float)this_00->SignedDistanceTo(pVVar3);
            if (fVar11 * fVar10 <= fVar9) {
                uVar7 = uVar7 | 1 << ((uint)ptVar6 & 31);
                bVar1 = true;
            } else {
                fVar12 = (float)fabs(fVar10);
                fVar13 = (float)fabs(fVar11);
                fVar14 = (float)param_1->GetMainRenderTargetScaleFactor();
                if (fVar12 <= fVar13) {
                    if (fVar10 < -fVar14)
                        goto LAB_100c6b62a;
                    fVar11 = (float)param_1->GetMainRenderTargetScaleFactor();
                    bVar1 = true;
                    if (fVar10 < fVar11)
                        goto LAB_100c6b642;
                } else if (fVar11 < -fVar14) {
                LAB_100c6b62a:
                    bVar1 = false;
                } else {
                    fVar10 = (float)param_1->GetMainRenderTargetScaleFactor();
                    bVar1 = true;
                    if (fVar11 < fVar10) {
                    LAB_100c6b642:
                        bVar1 = true;
                        uVar7 = uVar7 | 1 << ((uint)ptVar6 & 31);
                    }
                }
            }
            if (!bVar1)
                break;
            bVar8 = ptVar6 < (type*)5;
            ptVar6 = ptVar6 + 1;
        } while (ptVar6 != (type*)6);
        cVar4 = '\0';
        if (!bVar8) {
            cVar4 = '\x02' - (uVar7 == 0);
        }
        return cVar4;
    }

    // 0x100c6b6d0, 272 bytes, placed by class name and debug map
    // Frustum::GetMinimumEnclosingAABB() const
    Frustum* Frustum::GetMinimumEnclosingAABB() {
        Frustum* in_RSI;
        undefined8 local_28[2];

        new (this) math::AABB();
        local_28[0] = GetNearTopLeft(in_RSI);
        AddPoint(local_28);
        local_28[0] = GetNearTopRight(in_RSI);
        AddPoint(local_28);
        local_28[0] = GetNearBottomLeft(in_RSI);
        AddPoint(local_28);
        local_28[0] = GetNearBottomRight(in_RSI);
        AddPoint(local_28);
        local_28[0] = GetFarTopLeft(in_RSI);
        AddPoint(local_28);
        local_28[0] = GetFarTopRight(in_RSI);
        AddPoint(local_28);
        local_28[0] = GetFarBottomLeft(in_RSI);
        AddPoint(local_28);
        local_28[0] = GetFarBottomRight(in_RSI);
        AddPoint(local_28);
        return this;
    }

} // namespace jag::math
