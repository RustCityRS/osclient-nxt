// libs/math/primitives/Frustum.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::math {
    // 0x10048d010
    void Frustum::Resize(float arg1) {
        auto pPVar1 = GetPlane(0);
        pPVar1->Translate(arg1);
        pPVar1 = GetPlane(1);
        pPVar1->Translate(arg1);
        pPVar1 = GetPlane(2);
        pPVar1->Translate(arg1);
        pPVar1 = GetPlane(3);
        pPVar1->Translate(arg1);
        pPVar1 = GetPlane(4);
        pPVar1->Translate(arg1);
        pPVar1 = GetPlane(5);
        pPVar1->Translate(arg1);
    }

    // 0x10048d0c0
    unsigned long Frustum::IsInside(const Frustum& frustum) const {
        BoxCorner boxCorner;
        uint64_t unaff_R12;
        uint64_t local_40[2];

        Vector3T<int> local_50;
        local_40[0] = GetCornerPos(frustum, 0);
        local_50.SetXYZ(*local_40);
        char cVar1 = TestIntersection(local_50);
        bool bVar2 = true;
        if (cVar1 == '\x01') {
            boxCorner = 1;
            do {
                bVar2 = boxCorner - 1 < 7;
                if (boxCorner == 8)
                    break;
                local_40[0] = GetCornerPos(frustum, boxCorner);
                local_50.SetXYZ(*local_40);
                cVar1 = TestIntersection(local_50);
                boxCorner = boxCorner + 1;
            } while (cVar1 == '\x01');
        }
        return ((((uint64_t)((int64_t)((unsigned long)unaff_R12 >> 8)) << 8) | (uint8_t)bVar2) ^ 1) & 4294967295;
    }

    // 0x10048d190
    PlaneT<float>* Frustum::GetPlane(FrustumPlane frustumPlane) {
        return (PlaneT<float>*)(*this)[(unsigned long)frustumPlane];
    }

    // 0x10048d6c0
    PlaneT<float>::PlaneT(const Vector3T<float>& vector3, float arg2) {
        *(uint32_t*)(this + 8) = *(uint32_t*)(vector3 + 8);
        *(uint64_t*)this = *(uint64_t*)vector3;
        *(float*)(this + 12) = arg2;
    }

} // namespace jag::math

namespace jag::graphics {
    // 0x10048d1b0
    GraphEntityTransformData* GraphEntityTransformData::operator=(GraphEntityTransformData&& graphEntityTransformData) {
        field_0 = graphEntityTransformData.field_0;
        *field_16 = graphEntityTransformData.field_16;
        return this;
    }

} // namespace jag::graphics
