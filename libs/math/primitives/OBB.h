// libs/math/primitives/OBB.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::math {
    class OBB {
    public:
        GetCentrePos() const;
        GetPos() const;
        GetOri() const;
        GetHalfSize();
        GetHalfSize() const;
        void SetHalfSize(Vector3T<float> const&);
        OBB(Vector3T<float> const&, Matrix33T<float> const&, Vector3T<float> const&);
        OBB* operator=(OBB const&);
        OBB(OBB const&);
        OBB(OBB&&);
        OBB();
        GetTransform() const;
        void Set(Vector3T<float> const&, Matrix33T<float> const&, Vector3T<float> const&);
        OBB(AABB const&);
        void Set(AABB const&);
        AABB* GetMinimumEnclosingAABB(AABB&) const;
        AABB* GetMaximumContainedAABB(AABB&) const;
        void GetMinimumRadius() const;
        Sphere* GetMinimumEnclosingSphere(Sphere&) const;
        void GetMaximumRadius() const;
        Sphere* GetMaximumContainedSphere(Sphere&) const;
        Sphere* GetApproxMinimumEnclosingSphere(Sphere&) const;
        GetCornerPos(BoxCorner) const;
        GetLocalCornerPos(BoxCorner) const;
        bool IsInside(Vector3T<float> const&) const;
        ulong IsInside(OBB const&) const;
        void Transform(Matrix44T<float> const&);

        // data members, from how the methods use this: 72 bytes
        float field_0;         // offset 0
        float field_4;         // offset 4
        float field_8;         // offset 8
        undefined4 field_12;   // offset 12
        undefined8 m_halfSize; // offset 16
        undefined4 field_24;   // offset 24
        undefined4 field_28;   // offset 28
        Matrix33T field_32;    // offset 32
        char _unknown_33[7];
        undefined8 field_40; // offset 40
        undefined8 field_48; // offset 48
        undefined8 field_56; // offset 56
        undefined4 field_64; // offset 64
        char _unknown_68[4];
    };

    // 0x1007bbf00, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // OBB::OBB(Vector3T<float> const&, Matrix33T<float> const&, Vector3T<float> const&): jumps straight to the base-object constructor

    // 0x1007bd480, 80 bytes, base-object constructor, inline, placed by class name
    // OBB::OBB(Vector3T<float> const&, Matrix33T<float> const&, Vector3T<float> const&)
    void OBB::OBB(Vector3T* param_1, Matrix33T* param_2, Vector3T* param_3) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;

        field_8 = *(float*)(param_1 + 8);
        uVar1 = *(undefined8*)param_1;
        field_0 = (float)(int)uVar1;
        field_4 = (float)(int)((ulong)uVar1 >> 32);
        field_12 = 0;
        m_halfSize = *(undefined8*)param_3;
        field_24 = *(undefined4*)(param_3 + 8);
        field_28 = 0;
        uVar1 = *(undefined8*)(param_2 + 8);
        uVar2 = *(undefined8*)(param_2 + 16);
        uVar3 = *(undefined8*)(param_2 + 24);
        *(undefined8*)&field_32 = *(undefined8*)param_2;
        field_40 = uVar1;
        field_48 = uVar2;
        field_56 = uVar3;
        field_64 = *(undefined4*)(param_2 + 32);
    }

    // 0x1008cd7d0, 80 bytes, base-object constructor, inline, placed by class name
    // OBB::OBB(OBB const&)
    /* OBB::OBB(OBB&&) */

    void OBB::OBB(OBB* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        float fVar4;
        undefined7 uVar5;

        field_8 = param_1->field_8;
        fVar4 = param_1->field_4;
        field_0 = param_1->field_0;
        field_4 = fVar4;
        field_12 = 0;
        field_24 = param_1->field_24;
        m_halfSize = param_1->m_halfSize;
        field_28 = 0;
        uVar5 = *(undefined7*)&param_1->field_33;
        uVar1 = param_1->field_40;
        uVar2 = param_1->field_48;
        uVar3 = param_1->field_56;
        field_32 = param_1->field_32;
        *(undefined7*)&field_33 = uVar5;
        field_40 = uVar1;
        field_48 = uVar2;
        field_56 = uVar3;
        field_64 = param_1->field_64;
    }

    // 0x10093f200, 16 bytes, complete-object constructor, inline, placed by class name
    // OBB::OBB(): jumps straight to the base-object constructor

    // 0x10093f210, 64 bytes, base-object constructor, inline, placed by class name
    // OBB::OBB()
    void OBB::OBB() {
        new (this) Vector3T<int>();
        field_12 = 0;
        new (&m_halfSize) Vector3T<int>();
        field_28 = 0;
        new (&field_32) Matrix33T<float>();
    }

    // 0x100c60f60, 144 bytes, inline, placed by class name
    // OBB::GetTransform() const
    OBB* OBB::GetTransform() {
        Layout* this_00;
        vector* pvVar1;
        float* pfVar2;
        type* in_RSI;
        undefined1 local_80[40];
        Matrix33T local_58[40];
        float local_30;
        float local_2c;

        this_00 = (Layout*)(in_RSI + 16);
        pvVar1 = eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
        local_30 = *(float*)pvVar1;
        pfVar2 = (float*)this_00->y();
        local_2c = *pfVar2;
        pfVar2 = (float*)this_00->second();
        Matrix33Scaling<float>((math*)local_80, local_30, local_2c, *pfVar2);
        math::operator*(local_58, (Matrix33T*)local_80);
        new (this) Matrix44T<float>(local_58, in_RSI);
        return this;
    }

    // 0x100c671d0, 64 bytes, inline, placed by class name and debug map
    // OBB::Set(Vector3T<float> const&, Matrix33T<float> const&, Vector3T<float> const&)
    void OBB::Set(Vector3T* param_1, Matrix33T* param_2, Vector3T* param_3) {
        SetXYZ(param_1);
        (&m_halfSize, param_3)->SetXYZ();
        Matrix33T<float>::operator=((Matrix33T<float>*)&field_32, param_2);
    }

    // 0x100c67700, 128 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float> Vector3Max<float>(Vector3T<float> const&, Vector3T<float> const&)
    undefined8 Vector3Max<float>(Vector3T* param_1, Vector3T* param_2) {
        float* pfVar1;
        undefined8 uVar2;
        ColourHSL local_30;
        float local_20;
        float local_1c;

        pfVar1 = std::max<float>((float*)param_1, (float*)param_2);
        local_20 = *pfVar1;
        pfVar1 = std::max<float>((float*)(param_1 + 4), (float*)(param_2 + 4));
        local_1c = *pfVar1;
        pfVar1 = std::max<float>((float*)(param_1 + 8), (float*)(param_2 + 8));
        new (&local_30) ColourHSL(local_20, local_1c, *pfVar1);
        uVar2._0_4_ = local_30.field_0;
        uVar2._4_4_ = local_30.field_4;
        return uVar2;
    }

    // 0x100c67780, 128 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float> Vector3Min<float>(Vector3T<float> const&, Vector3T<float> const&)
    undefined8 Vector3Min<float>(Vector3T* param_1, Vector3T* param_2) {
        float* pfVar1;
        undefined8 uVar2;
        ColourHSL local_30;
        float local_20;
        float local_1c;

        pfVar1 = std::min<float>((float*)param_1, (float*)param_2);
        local_20 = *pfVar1;
        pfVar1 = std::min<float>((float*)(param_1 + 4), (float*)(param_2 + 4));
        local_1c = *pfVar1;
        pfVar1 = std::min<float>((float*)(param_1 + 8), (float*)(param_2 + 8));
        new (&local_30) ColourHSL(local_20, local_1c, *pfVar1);
        uVar2._0_4_ = local_30.field_0;
        uVar2._4_4_ = local_30.field_4;
        return uVar2;
    }

    // 0x100c67860, 112 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float>::SloppyCompare(Vector3T<float> const&, float) const
    bool Vector3T<float>::SloppyCompare(Vector3T* param_1, float param_2) {
        float fVar1;
        float extraout_XMM0_Da;

        fVar1 = (float)::abs(*(float*)this - *(float*)param_1);
        if ((fVar1 < param_2) &&
            (fVar1 = (float)::abs(*(float*)(this + 4) - *(float*)(param_1 + 4)), fVar1 < param_2)) {
            ::abs(*(float*)(this + 8) - *(float*)(param_1 + 8));
            return extraout_XMM0_Da < param_2;
        }
        return false;
    }

    // 0x100c6ba20, 16 bytes, inline, placed by class name
    // OBB::GetMinimumRadius() const
    void OBB::GetMinimumRadius() {
        (&m_halfSize)->MinElement();
    }

    // 0x100c6ba70, 16 bytes, inline, placed by class name
    // OBB::GetMaximumRadius() const
    void OBB::GetMaximumRadius() {
        (&m_halfSize)->Length();
    }

} // namespace jag::math
