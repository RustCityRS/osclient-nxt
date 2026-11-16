// libs/math/primitives/Plane.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::math {
    template <typename...> // 1 instantiations, e.g. <float>
    class PlaneT {
    public:
        PlaneT();
        PlaneT<float>* operator=(const PlaneT<float>& positionTimeData);
        PlaneT<float>* operator*=(const Matrix44T<float>& matrix44);
        PlaneT(const Vector3T<float>& vector3, float arg2);
        PlaneT(const Vector3T<float>& vector31, const Vector3T<float>& vector32);
        void Set(const Vector3T<float>& vector31, const Vector3T<float>& vector32);
        void Normalise();
        void Set(const Vector3T<float>& vector31, const Vector3T<float>& vector32, const Vector3T<float>& vector33);
        void Set(const Vector3T<float>& vector3, float arg2);
        PlaneT<float>* Translate(float arg1);
        auto Translate(const Vector3T<float>& vector3);
        float SignedDistanceTo(const Vector3T<float>& vector3) const;
        bool OnPositiveSide(const Vector3T<float>& vector3) const;
        uint8_t TestIntersection(Vector3T<float>& vector31, float& arg2, const Vector3T<float>& vector32,
                                 const Vector3T<float>& vector33, float arg5) const;
        void GetIntersectionPoint(const PlaneT<float>& plane1, const PlaneT<float>& plane2,
                                  const PlaneT<float>& plane3);
    };

    // 0x1001df680
    PlaneT<float>* PlaneT<float>::operator=(const PlaneT<float>& positionTimeData) {
        SetXYZ(positionTimeData);
        *(uint32_t*)(this + 12) = *(uint32_t*)&positionTimeData.field_12;
        return this;
    }

    // 0x100c69db0
    void PlaneT<float>::Normalise() {
        float arg1 = (float)Length();
        *this /= arg1;
        *(float*)(this + 12) = *(float*)(this + 12) / arg1;
    }

    // 0x100c69f50
    void PlaneT<float>::Set(const Vector3T<float>& vector31, const Vector3T<float>& vector32,
                            const Vector3T<float>& vector33) {
        uint64_t local_68[2];
        uint64_t local_58[2];
        ReturnValue local_48;
        uint8_t local_38[16];

        local_68[0] = vector31 - vector32;
        local_58[0] = vector31 - vector33;
        local_48[0] = (ReturnValue)Vector3Cross<float>((Vector3T<float>*)local_68, (Vector3T<float>*)local_58);
        ReturnValue* vector3 = local_48 = Vector3T<float>::Normalize();
        Set(*vector3);
        float* pfVar1 = (float*)(*this)[0];
        local_38._0_4_ = *pfVar1;
        pfVar1 = &vector31[0];
        local_38._0_4_ = (float)local_38._0_4_ * *pfVar1;
        pfVar1 = (float*)(*this)[1];
        float local_24 = *pfVar1;
        pfVar1 = &vector31[1];
        local_24 = local_24 * *pfVar1 + (float)local_38._0_4_;
        unsigned int* puVar2 = (unsigned int*)(*this)[2];
        local_38 = (unsigned __int128)(*puVar2);
        pfVar1 = &vector31[2];
        *(float*)(this + 12) = -((float)local_38._0_4_ * *pfVar1 + local_24);
    }

    // 0x100c6a070
    void PlaneT<float>::Set(const Vector3T<float>& vector3, float arg2) {
        SetXYZ(vector3);
        *(float*)(this + 12) = arg2;
    }

    // 0x100c6a5c0
    PlaneT<float>* PlaneT<float>::Translate(float arg1) {
        *(float*)(this + 12) = *(float*)(this + 12) - arg1;
        return this;
    }

    // 0x100c6a630
    auto PlaneT<float>::Translate(const Vector3T<float>& vector3) {
        auto result;

        float fVar1 = Vector3Dot<float>(&result, vector3);
        *(float*) && result[1].field_4 = *(float*) && result[1].field_4 - fVar1;
        Normalise(&result);
        return result;
    }

    // 0x100c6a6e0
    float PlaneT<float>::SignedDistanceTo(const Vector3T<float>& vector3) const {
        return Vector3Dot<float>((Vector3T<float>*)this, vector3) + *(float*)(this + 12);
    }

    // 0x100c6ab90
    bool PlaneT<float>::OnPositiveSide(const Vector3T<float>& vector3) const {
        float fVar1 = (float)SignedDistanceTo(this, vector3);
        return 0.0 < fVar1;
    }

    // 0x100c6ad80
    uint8_t PlaneT<float>::TestIntersection(Vector3T<float>& vector31, float& arg2, const Vector3T<float>& vector32,
                                            const Vector3T<float>& vector33, float arg5) const {
        float* local_40;

        local_40 = (float*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)arg5);
        float local_34 = Vector3Dot<float>((Vector3T<float>*)this, vector33);
        float fVar1 = (float)SignedDistanceTo(this, vector32);
        if (local_34 == 0.0) {
            fVar1 = (float)::abs(fVar1);
            if (local_40._0_4_ < fVar1) {
                return 0;
            }
        }
        fVar1 = Vector3Dot<float>((Vector3T<float>*)this, vector32);
        uint32_t local_58 = *(uint32_t*)(vector33 + 8);
        uint64_t local_60 = *(uint64_t*)vector33;
        local_40 = arg2;
        local_60 *= (-(fVar1 + *(float*)(this + 12)) / local_34);
        uint64_t local_50 = vector32 + local_60;
        uint32_t local_48 = 0;
        vector31.Set(local_50);
        float local_44 = (float)Length();
        fVar1 = (float)vector33.Length();
        fVar1 = (float)::abs(local_34 / (fVar1 * local_44));
        fVar1 = (float)asin(fVar1);
        *local_40 = fVar1;
        return 2;
    }

    // 0x100c6da60
    void PlaneT<float>::GetIntersectionPoint(const PlaneT<float>& plane1, const PlaneT<float>& plane2,
                                             const PlaneT<float>& plane3) {
        uint64_t uVar4;
        uint8_t local_60[16];

        float* pfVar1 = &plane1[0];
        float local_44 = *pfVar1;
        pfVar1 = &plane1[1];
        float local_4c = *pfVar1;
        pfVar1 = &plane1[2];
        float local_40 = *pfVar1;
        pfVar1 = &plane2[0];
        float local_3c = *pfVar1;
        pfVar1 = &plane2[1];
        float local_38 = *pfVar1;
        pfVar1 = &plane2[2];
        float local_34 = *pfVar1;
        pfVar1 = &plane3[0];
        float local_30 = *pfVar1;
        pfVar1 = &plane3[1];
        float local_2c = *pfVar1;
        pfVar1 = &plane3[2];
        Matrix33T<float> local_110(local_44, local_4c, local_40, local_3c, local_38, local_34, local_30, local_2c,
                                   *pfVar1);
        local_44 = (float)local_110.Determinant();
        ColourHSL local_70(-*(float*)(plane1 + 12), -*(float*)(plane2 + 12), -*(float*)(plane3 + 12));
        pfVar1 = &local_70[0];
        local_4c = *pfVar1;
        Vector3T<float>* pVVar2 = &local_110[0];
        pfVar1 = (float*)(*pVVar2)[1];
        local_40 = *pfVar1;
        pVVar2 = &local_110[0];
        pfVar1 = (float*)(*pVVar2)[2];
        local_3c = *pfVar1;
        pfVar1 = &local_70[1];
        local_38 = *pfVar1;
        pVVar2 = &local_110[1];
        pfVar1 = (float*)(*pVVar2)[1];
        local_34 = *pfVar1;
        pVVar2 = &local_110[1];
        pfVar1 = (float*)(*pVVar2)[2];
        local_30 = *pfVar1;
        pfVar1 = &local_70[2];
        local_2c = *pfVar1;
        pVVar2 = &local_110[2];
        pfVar1 = (float*)(*pVVar2)[1];
        float local_48 = *pfVar1;
        pVVar2 = &local_110[2];
        pfVar1 = (float*)(*pVVar2)[2];
        Matrix33T<float> local_e8(local_4c, local_40, local_3c, local_38, local_34, local_30, local_2c, local_48,
                                  *pfVar1);
        local_4c = (float)local_e8.Determinant();
        local_44 = 1.0 / local_44;
        local_4c = local_4c * local_44;
        pVVar2 = &local_110[0];
        pfVar1 = (float*)(*pVVar2)[0];
        local_40 = *pfVar1;
        pfVar1 = &local_70[0];
        local_3c = *pfVar1;
        pVVar2 = &local_110[0];
        pfVar1 = (float*)(*pVVar2)[2];
        local_38 = *pfVar1;
        pVVar2 = &local_110[1];
        pfVar1 = (float*)(*pVVar2)[0];
        local_34 = *pfVar1;
        pfVar1 = &local_70[1];
        local_30 = *pfVar1;
        pVVar2 = &local_110[1];
        pfVar1 = (float*)(*pVVar2)[2];
        local_2c = *pfVar1;
        pVVar2 = &local_110[2];
        pfVar1 = (float*)(*pVVar2)[0];
        local_48 = *pfVar1;
        pfVar1 = &local_70[2];
        float local_50 = *pfVar1;
        pVVar2 = &local_110[2];
        pfVar1 = (float*)(*pVVar2)[2];
        Matrix33T<float> local_c0(local_40, local_3c, local_38, local_34, local_30, local_2c, local_48, local_50,
                                  *pfVar1);
        local_40 = (float)local_c0.Determinant();
        local_40 = local_40 * local_44;
        pVVar2 = &local_110[0];
        pfVar1 = (float*)(*pVVar2)[0];
        local_3c = *pfVar1;
        pVVar2 = &local_110[0];
        pfVar1 = (float*)(*pVVar2)[1];
        local_38 = *pfVar1;
        pfVar1 = &local_70[0];
        local_34 = *pfVar1;
        pVVar2 = &local_110[1];
        pfVar1 = (float*)(*pVVar2)[0];
        local_30 = *pfVar1;
        pVVar2 = &local_110[1];
        pfVar1 = (float*)(*pVVar2)[1];
        local_2c = *pfVar1;
        pfVar1 = &local_70[1];
        local_48 = *pfVar1;
        pVVar2 = &local_110[2];
        pfVar1 = (float*)(*pVVar2)[0];
        local_50 = *pfVar1;
        pVVar2 = &local_110[2];
        pfVar1 = (float*)(*pVVar2)[1];
        local_60._12_4_ = *pfVar1;
        pfVar1 = &local_70[2];
        Matrix33T<float> local_98(local_3c, local_38, local_34, local_30, local_2c, local_48, local_50,
                                  (float)local_60._12_4_, *pfVar1);
        float fVar3 = (float)local_98.Determinant();
        new (local_60) ColourHSL(local_4c, local_40, local_44 * fVar3);
        uVar4._0_4_ = (float)local_60._0_4_;
        uVar4._4_4_ = (float)local_60._4_4_;
        return uVar4;
    }

} // namespace jag::math

namespace jag::graphics {
    // 0x1001df680: ParticleData::PositionTimeData::operator=(ParticleData::PositionTimeData&&) has the same machine code as math::PlaneT<float>::operator=(math::PlaneT<float> const&)

    // 0x1001df680: ParticleData::PositionTimeData::operator=(ParticleData::PositionTimeData const&) has the same machine code as math::PlaneT<float>::operator=(math::PlaneT<float> const&)

} // namespace jag::graphics
