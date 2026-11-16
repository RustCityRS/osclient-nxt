// libs/math/primitives/Frustum.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::math {
    // 0x10048d010, 176 bytes, inline, placed by class name and debug map
    // Frustum::Resize(float)
    void Frustum::Resize(float param_1) {
        PlaneT<float>* pPVar1;

        pPVar1 = (PlaneT<float>*)GetPlane(this, 0);
        pPVar1->Translate(param_1);
        pPVar1 = (PlaneT<float>*)GetPlane(this, 1);
        pPVar1->Translate(param_1);
        pPVar1 = (PlaneT<float>*)GetPlane(this, 2);
        pPVar1->Translate(param_1);
        pPVar1 = (PlaneT<float>*)GetPlane(this, 3);
        pPVar1->Translate(param_1);
        pPVar1 = (PlaneT<float>*)GetPlane(this, 4);
        pPVar1->Translate(param_1);
        pPVar1 = (PlaneT<float>*)GetPlane(this, 5);
        pPVar1->Translate(param_1);
    }

    // 0x10048d0c0, 192 bytes, inline, placed by class name and debug map
    // Frustum::IsInside(Frustum const&) const
    ulong Frustum::IsInside(Frustum* param_1) {
        char cVar1;
        int iVar2;
        undefined8 unaff_R12;
        bool bVar3;
        Vector3T<int> local_50[16];
        undefined8 local_40[2];

        Vector3T<int>::Vector3T(local_50);
        local_40[0] = GetCornerPos(param_1, 0);
        local_50->SetXYZ(local_40);
        cVar1 = TestIntersection(this, (Vector3T*)local_50);
        bVar3 = true;
        if (cVar1 == '\x01') {
            iVar2 = 1;
            do {
                bVar3 = iVar2 - 1U < 7;
                if (iVar2 == 8)
                    break;
                local_40[0] = GetCornerPos(param_1, iVar2);
                local_50->SetXYZ(local_40);
                cVar1 = TestIntersection(this, (Vector3T*)local_50);
                iVar2 = iVar2 + 1;
            } while (cVar1 == '\x01');
        }
        return (CONCAT71((int7)((ulong)unaff_R12 >> 8), bVar3) ^ 1) & 4294967295;
    }

    // 0x10048d190, 16 bytes, inline, placed by class name and debug map
    // Frustum::GetPlane(FrustumPlane)
    void Frustum::GetPlane(uint param_2) {
        std::array<PlaneT<float>, 6ul>::operator[]((array<PlaneT<float>, 6ul>*)this, (ulong)param_2);
    }

    // 0x10048d6c0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PlaneT<float>::PlaneT(Vector3T<float> const&, float)
    void PlaneT<float>::PlaneT(Vector3T* param_1, float param_2) {
        *(undefined4*)(this + 8) = *(undefined4*)(param_1 + 8);
        *(undefined8*)this = *(undefined8*)param_1;
        *(float*)(this + 12) = param_2;
    }

} // namespace jag::math

namespace jag::graphics {
    // 0x10048d1b0, 48 bytes, inline, placed by debug map only (low confidence)
    // GraphEntityTransformData::operator=(GraphEntityTransformData&&)
    /* GraphEntityTransformData::TEMPNAMEPLACEHOLDERVALUE(GraphEntityTransformData&&)
    */

    GraphEntityTransformData* GraphEntityTransformData::operator=(GraphEntityTransformData* param_1) {
        field_0 = param_1->field_0;
        math::Frustum::operator=((Frustum*)field_16, (Frustum*)param_1->field_16);
        return this;
    }

} // namespace jag::graphics
