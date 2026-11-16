// libs/math/primitives/Plane.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::math {
    template <typename...> // 1 instantiations, e.g. <float>
    class PlaneT {
    public:
        PlaneT();
        PlaneT<float>* operator=(PlaneT<float> const&);
        PlaneT<float>* operator*=(Matrix44T<float> const&);
        PlaneT(Vector3T<float> const&, float);
        PlaneT(Vector3T<float> const&, Vector3T<float> const&);
        void Set(Vector3T<float> const&, Vector3T<float> const&);
        void Normalise();
        void Set(Vector3T<float> const&, Vector3T<float> const&, Vector3T<float> const&);
        void Set(Vector3T<float> const&, float);
        PlaneT<float>* Translate(float);
        PlaneT<float>* Translate(Vector3T<float> const&);
        float SignedDistanceTo(Vector3T<float> const&) const;
        bool OnPositiveSide(Vector3T<float> const&) const;
        TestIntersection(Vector3T<float>&, float&, Vector3T<float> const&, Vector3T<float> const&, float) const;
        GetIntersectionPoint(PlaneT<float> const&, PlaneT<float> const&, PlaneT<float> const&);
    };

    // 0x1001df680, 48 bytes, inline, placed by debug map only (low confidence)
    // PlaneT<float>::operator=(PlaneT<float> const&)
    /* PlaneT<float>::TEMPNAMEPLACEHOLDERVALUE(PlaneT<float>&&) */

    PlaneT<float>* PlaneT<float>::operator=(PlaneT* param_1) {
        SetXYZ(param_1);
        *(undefined4*)(this + 12) = *(undefined4*)(param_1 + 12);
        return this;
    }

    // 0x10047e8e0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // PlaneT<float>::PlaneT(Vector3T<float> const&, float): jumps straight to the base-object constructor

    // 0x100c69db0, 64 bytes, inline, placed by class header (inline)
    // PlaneT<float>::Normalise()
    void PlaneT<float>::Normalise() {
        float fVar1;

        fVar1 = (float)Length();
        Vector3T<float>::operator/=((Vector3T<float>*)this, fVar1);
        *(float*)(this + 12) = *(float*)(this + 12) / fVar1;
    }

    // 0x100c69f50, 272 bytes, inline, placed by class header (inline)
    // PlaneT<float>::Set(Vector3T<float> const&, Vector3T<float> const&, Vector3T<float> const&)
    void PlaneT<float>::Set(Vector3T* param_1, Vector3T* param_2, Vector3T* param_3) {
        Vector3T* pVVar1;
        float* pfVar2;
        uint* puVar3;
        undefined8 local_68[2];
        undefined8 local_58[2];
        undefined8 local_48[2];
        undefined1 local_38[16];
        float local_24;

        local_68[0] = math::operator-(param_1, param_2);
        local_58[0] = math::operator-(param_1, param_3);
        local_48[0] = Vector3Cross<float>((Vector3T*)local_68, (Vector3T*)local_58);
        pVVar1 = (Vector3T*)local_48->Normalize();
        Set(pVVar1);
        pfVar2 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 0);
        local_38._0_4_ = *pfVar2;
        pfVar2 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 0);
        local_38._0_4_ = (float)local_38._0_4_ * *pfVar2;
        pfVar2 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 1);
        local_24 = *pfVar2;
        pfVar2 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 1);
        local_24 = local_24 * *pfVar2 + (float)local_38._0_4_;
        puVar3 = (uint*)Vector3T<float>::operator[]((Vector3T<float>*)this, 2);
        local_38 = ZEXT416(*puVar3);
        pfVar2 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 2);
        *(float*)(this + 12) = -((float)local_38._0_4_ * *pfVar2 + local_24);
    }

    // 0x100c6a070, 48 bytes, inline, placed by class header (inline)
    // PlaneT<float>::Set(Vector3T<float> const&, float)
    void PlaneT<float>::Set(Vector3T* param_1, float param_2) {
        SetXYZ(param_1);
        *(float*)(this + 12) = param_2;
    }

    // 0x100c6a5c0, 32 bytes, inline, placed by class header (inline)
    // PlaneT<float>::Translate(float)
    PlaneT<float>* PlaneT<float>::Translate(float param_1) {
        *(float*)(this + 12) = *(float*)(this + 12) - param_1;
        return this;
    }

    // 0x100c6a630, 48 bytes, inline, placed by class header (inline)
    // PlaneT<float>::Translate(Vector3T<float> const&)
    PlaneT<float>* PlaneT<float>::Translate(Vector3T* param_1) {
        float fVar1;

        fVar1 = Vector3Dot<float>((Vector3T*)this, param_1);
        *(float*)(this + 12) = *(float*)(this + 12) - fVar1;
        Normalise(this);
        return this;
    }

    // 0x100c6a6e0, 32 bytes, inline, placed by class header (inline)
    // PlaneT<float>::SignedDistanceTo(Vector3T<float> const&) const
    float PlaneT<float>::SignedDistanceTo(Vector3T* param_1) {
        return Vector3Dot<float>((Vector3T*)this, param_1) + *(float*)(this + 12);
    }

    // 0x100c6ab90, 32 bytes, inline, placed by class header (inline)
    // PlaneT<float>::OnPositiveSide(Vector3T<float> const&) const
    bool PlaneT<float>::OnPositiveSide(Vector3T* param_1) {
        float fVar1;

        fVar1 = (float)SignedDistanceTo(this, param_1);
        return 0.0 < fVar1;
    }

    // 0x100c6ad80, 272 bytes, inline, placed by class header (inline)
    // PlaneT<float>::TestIntersection(Vector3T<float>&, float&, Vector3T<float> const&, Vector3T<float> const&, float) const
    undefined1 PlaneT<float>::TestIntersection(Vector3T* param_1, float* param_2, Vector3T* param_3, Vector3T* param_4,
                                               float param_5) {
        float fVar1;
        undefined8 local_60;
        undefined4 local_58;
        undefined8 local_50;
        undefined4 local_48;
        float local_44;
        float* local_40;
        float local_34;

        local_40 = (float*)CONCAT44(local_40._4_4_, param_5);
        local_34 = Vector3Dot<float>((Vector3T*)this, param_4);
        fVar1 = (float)SignedDistanceTo(this, param_3);
        if (local_34 == 0.0) {
            fVar1 = (float)::abs(fVar1);
            if (local_40._0_4_ < fVar1) {
                return 0;
            }
        }
        fVar1 = Vector3Dot<float>((Vector3T*)this, param_3);
        local_58 = *(undefined4*)(param_4 + 8);
        local_60 = *(undefined8*)param_4;
        local_40 = param_2;
        Vector3T<float>::operator*=((Vector3T<float>*)&local_60, -(fVar1 + *(float*)(this + 12)) / local_34);
        local_50 = math::operator+(param_3, (Vector3T*)&local_60);
        local_48 = 0;
        param_1->Set((Vector3T*)&local_50);
        local_44 = (float)Length();
        fVar1 = (float)param_4->Length();
        fVar1 = (float)::abs(local_34 / (fVar1 * local_44));
        fVar1 = (float)asin(fVar1);
        *local_40 = fVar1;
        return 2;
    }

    // 0x100c6da60, 1392 bytes, inline, placed by class header (inline)
    // PlaneT<float>::GetIntersectionPoint(PlaneT<float> const&, PlaneT<float> const&, PlaneT<float> const&)
    undefined8 PlaneT<float>::GetIntersectionPoint(PlaneT* param_1, PlaneT* param_2, PlaneT* param_3) {
        float* pfVar1;
        Vector3T<float>* pVVar2;
        float fVar3;
        undefined8 uVar4;
        Matrix33T<float> local_110[40];
        Matrix33T<float> local_e8[40];
        Matrix33T<float> local_c0[40];
        Matrix33T<float> local_98[40];
        ColourHSL local_70;
        undefined1 local_60[16];
        float local_50;
        float local_4c;
        float local_48;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;
        float local_30;
        float local_2c;

        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 0);
        local_44 = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 1);
        local_4c = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 2);
        local_40 = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_2, 0);
        local_3c = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_2, 1);
        local_38 = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_2, 2);
        local_34 = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_3, 0);
        local_30 = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_3, 1);
        local_2c = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_3, 2);
        Matrix33T<float>::Matrix33T(local_110, local_44, local_4c, local_40, local_3c, local_38, local_34, local_30,
                                    local_2c, *pfVar1);
        local_44 = (float)local_110->Determinant();
        new (&local_70) ColourHSL(-*(float*)(param_1 + 12), -*(float*)(param_2 + 12), -*(float*)(param_3 + 12));
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_70, 0);
        local_4c = *pfVar1;
        pVVar2 = (Vector3T<float>*)Matrix33T<float>::operator[](local_110, 0);
        pfVar1 = (float*)Vector3T<float>::operator[](pVVar2, 1);
        local_40 = *pfVar1;
        pVVar2 = (Vector3T<float>*)Matrix33T<float>::operator[](local_110, 0);
        pfVar1 = (float*)Vector3T<float>::operator[](pVVar2, 2);
        local_3c = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_70, 1);
        local_38 = *pfVar1;
        pVVar2 = (Vector3T<float>*)Matrix33T<float>::operator[](local_110, 1);
        pfVar1 = (float*)Vector3T<float>::operator[](pVVar2, 1);
        local_34 = *pfVar1;
        pVVar2 = (Vector3T<float>*)Matrix33T<float>::operator[](local_110, 1);
        pfVar1 = (float*)Vector3T<float>::operator[](pVVar2, 2);
        local_30 = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_70, 2);
        local_2c = *pfVar1;
        pVVar2 = (Vector3T<float>*)Matrix33T<float>::operator[](local_110, 2);
        pfVar1 = (float*)Vector3T<float>::operator[](pVVar2, 1);
        local_48 = *pfVar1;
        pVVar2 = (Vector3T<float>*)Matrix33T<float>::operator[](local_110, 2);
        pfVar1 = (float*)Vector3T<float>::operator[](pVVar2, 2);
        Matrix33T<float>::Matrix33T(local_e8, local_4c, local_40, local_3c, local_38, local_34, local_30, local_2c,
                                    local_48, *pfVar1);
        local_4c = (float)local_e8->Determinant();
        local_44 = 1.0 / local_44;
        local_4c = local_4c * local_44;
        pVVar2 = (Vector3T<float>*)Matrix33T<float>::operator[](local_110, 0);
        pfVar1 = (float*)Vector3T<float>::operator[](pVVar2, 0);
        local_40 = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_70, 0);
        local_3c = *pfVar1;
        pVVar2 = (Vector3T<float>*)Matrix33T<float>::operator[](local_110, 0);
        pfVar1 = (float*)Vector3T<float>::operator[](pVVar2, 2);
        local_38 = *pfVar1;
        pVVar2 = (Vector3T<float>*)Matrix33T<float>::operator[](local_110, 1);
        pfVar1 = (float*)Vector3T<float>::operator[](pVVar2, 0);
        local_34 = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_70, 1);
        local_30 = *pfVar1;
        pVVar2 = (Vector3T<float>*)Matrix33T<float>::operator[](local_110, 1);
        pfVar1 = (float*)Vector3T<float>::operator[](pVVar2, 2);
        local_2c = *pfVar1;
        pVVar2 = (Vector3T<float>*)Matrix33T<float>::operator[](local_110, 2);
        pfVar1 = (float*)Vector3T<float>::operator[](pVVar2, 0);
        local_48 = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_70, 2);
        local_50 = *pfVar1;
        pVVar2 = (Vector3T<float>*)Matrix33T<float>::operator[](local_110, 2);
        pfVar1 = (float*)Vector3T<float>::operator[](pVVar2, 2);
        Matrix33T<float>::Matrix33T(local_c0, local_40, local_3c, local_38, local_34, local_30, local_2c, local_48,
                                    local_50, *pfVar1);
        local_40 = (float)local_c0->Determinant();
        local_40 = local_40 * local_44;
        pVVar2 = (Vector3T<float>*)Matrix33T<float>::operator[](local_110, 0);
        pfVar1 = (float*)Vector3T<float>::operator[](pVVar2, 0);
        local_3c = *pfVar1;
        pVVar2 = (Vector3T<float>*)Matrix33T<float>::operator[](local_110, 0);
        pfVar1 = (float*)Vector3T<float>::operator[](pVVar2, 1);
        local_38 = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_70, 0);
        local_34 = *pfVar1;
        pVVar2 = (Vector3T<float>*)Matrix33T<float>::operator[](local_110, 1);
        pfVar1 = (float*)Vector3T<float>::operator[](pVVar2, 0);
        local_30 = *pfVar1;
        pVVar2 = (Vector3T<float>*)Matrix33T<float>::operator[](local_110, 1);
        pfVar1 = (float*)Vector3T<float>::operator[](pVVar2, 1);
        local_2c = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_70, 1);
        local_48 = *pfVar1;
        pVVar2 = (Vector3T<float>*)Matrix33T<float>::operator[](local_110, 2);
        pfVar1 = (float*)Vector3T<float>::operator[](pVVar2, 0);
        local_50 = *pfVar1;
        pVVar2 = (Vector3T<float>*)Matrix33T<float>::operator[](local_110, 2);
        pfVar1 = (float*)Vector3T<float>::operator[](pVVar2, 1);
        local_60._12_4_ = *pfVar1;
        pfVar1 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)&local_70, 2);
        Matrix33T<float>::Matrix33T(local_98, local_3c, local_38, local_34, local_30, local_2c, local_48, local_50,
                                    (float)local_60._12_4_, *pfVar1);
        fVar3 = (float)local_98->Determinant();
        new (local_60) ColourHSL(local_4c, local_40, local_44 * fVar3);
        uVar4._0_4_ = (float)local_60._0_4_;
        uVar4._4_4_ = (float)local_60._4_4_;
        return uVar4;
    }

} // namespace jag::math

namespace jag::graphics {
    // 0x1001df680: the linker folded this into math::PlaneT<float>::operator=(math::PlaneT<float> const&), which has identical code
    ParticleData::PositionTimeData::operator=(ParticleData::PositionTimeData&&);

    // 0x1001df680: the linker folded this into math::PlaneT<float>::operator=(math::PlaneT<float> const&), which has identical code
    ParticleData::PositionTimeData::operator=(ParticleData::PositionTimeData const&);

} // namespace jag::graphics
