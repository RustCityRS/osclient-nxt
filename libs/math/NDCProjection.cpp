// libs/math/NDCProjection.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.math

namespace jag::math {
    // 0x100c60e80, 192 bytes, placed by debug map only (low confidence)
    // NDCProjectGetNDCProjectionValue(OBB const&, Matrix44T<float> const&)
    void NDCProjectGetNDCProjectionValue(OBB* param_1, Matrix44T* param_2) {
        float* pfVar1;
        undefined1 local_d8[80];
        Vector4T local_88[16];
        Vector4T local_78[16];
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58[2];
        undefined8 local_48[2];
        undefined8 local_38;
        undefined8 uStack_30;

        local_d8->GetTransform();
        operator*((math*)(local_d8 + 64), (Matrix44T*)local_d8, param_2);
        local_38 = operator+((Vector4T*)(local_d8 + 64), local_88);
        local_d8._0_8_ = operator+((Vector4T*)&local_38, local_78);
        local_38 = local_68;
        uStack_30 = uStack_60;
        pfVar1 = (float*)local_38.qw();
        local_58[0] = operator*((Vector4T*)local_d8, 1.0 / *pfVar1);
        local_48[0] = local_58->GetXYZ();
        local_48->LengthSq();
    }

    // 0x100c60f40, 32 bytes, inline, placed by debug map only (low confidence)
    // operator*(Matrix44T<float> const&, Matrix44T<float> const&)
    /* TEMPNAMEPLACEHOLDERVALUE(Matrix44T<float> const&,
   Matrix44T<float> const&) */

    math* operator*(Matrix44T* param_1, Matrix44T* param_2) {
        MatrixMultSSE(param_1, param_2);
        return this;
    }

    // 0x100c60ff0, 80 bytes, inline, placed by debug map only (low confidence)
    // Vector4T<float> operator+<float>(Vector4T<float> const&, Vector4T<float> const&)
    /* Vector4T<float> TEMPNAMEPLACEHOLDERVALUE(Vector4T<float> const&,
   Vector4T<float> const&) */

    undefined1[16] operator+(Vector4T * param_1, Vector4T * param_2) {
        undefined1 auVar1[16];
        ImVec4 local_18[16];

        ImVec4::ImVec4(local_18, *(float*)param_2 + *(float*)param_1, *(float*)(param_2 + 4) + *(float*)(param_1 + 4),
                       *(float*)(param_2 + 8) + *(float*)(param_1 + 8),
                       *(float*)(param_2 + 12) + *(float*)(param_1 + 12));
        auVar1[0] = local_18[0];
        auVar1[1] = local_18[1];
        auVar1[2] = local_18[2];
        auVar1[3] = local_18[3];
        auVar1[4] = local_18[4];
        auVar1[5] = local_18[5];
        auVar1[6] = local_18[6];
        auVar1[7] = local_18[7];
        auVar1[8] = local_18[8];
        auVar1[9] = local_18[9];
        auVar1[10] = local_18[10];
        auVar1[11] = local_18[11];
        auVar1[12] = local_18[12];
        auVar1[13] = local_18[13];
        auVar1[14] = local_18[14];
        auVar1[15] = local_18[15];
        return auVar1;
    }

    // 0x100c61040, 80 bytes, inline, placed by debug map only (low confidence)
    // Vector4T<float> operator*<float>(Vector4T<float> const&, float)
    /* Vector4T<float> TEMPNAMEPLACEHOLDERVALUE(Vector4T<float> const&,
   float) */

    undefined1[16] operator*(Vector4T * param_1, float param_2) {
        undefined1 auVar1[16];
        ImVec4 local_18[16];

        ImVec4::ImVec4(local_18, *(float*)param_1 * param_2, *(float*)(param_1 + 4) * param_2,
                       *(float*)(param_1 + 8) * param_2, param_2 * *(float*)(param_1 + 12));
        auVar1[0] = local_18[0];
        auVar1[1] = local_18[1];
        auVar1[2] = local_18[2];
        auVar1[3] = local_18[3];
        auVar1[4] = local_18[4];
        auVar1[5] = local_18[5];
        auVar1[6] = local_18[6];
        auVar1[7] = local_18[7];
        auVar1[8] = local_18[8];
        auVar1[9] = local_18[9];
        auVar1[10] = local_18[10];
        auVar1[11] = local_18[11];
        auVar1[12] = local_18[12];
        auVar1[13] = local_18[13];
        auVar1[14] = local_18[14];
        auVar1[15] = local_18[15];
        return auVar1;
    }

    // 0x100c610d0, 384 bytes, placed by debug map only (low confidence)
    // NDCProjectGetSphericalNDCRadius(Sphere const&, Matrix44T<float> const&, Matrix44T<float> const&)
    void NDCProjectGetSphericalNDCRadius(Sphere* param_1, Matrix44T* param_2, Matrix44T* param_3) {
        vector* pvVar1;
        float* pfVar2;
        float fVar3;
        undefined8 local_a8;
        undefined8 uStack_a0;
        undefined8 local_98;
        undefined8 uStack_90;
        undefined8 local_88[2];
        undefined8 local_78[2];
        undefined8 local_68[2];
        undefined8 local_58[3];
        undefined8 local_40;
        float local_34;

        pvVar1 = param_1->SSOBeginPtr(param_2);
        new (&local_a8) Vector4T<float>(pvVar1, 1.0);
        local_98 = local_a8;
        uStack_90 = uStack_a0;
        local_34 = (float)param_1->GetOutlineRadiusAdjustment();
        pfVar2 = (float*)local_98.second();
        *pfVar2 = local_34 + *pfVar2;
        Vector4T<float>::operator*=((Vector4T<float>*)&local_a8, param_2);
        Vector4T<float>::operator*=((Vector4T<float>*)&local_98, param_2);
        local_58[0] = operator-((Vector4T*)&local_98, (Vector4T*)&local_a8);
        local_40 = local_58->GetXYZ();
        local_34 = (float)local_40.Length();
        Rect<float>::operator=((Rect<float>*)&local_98, (Rect*)&local_a8);
        pfVar2 = (float*)local_98.second();
        *pfVar2 = local_34 + *pfVar2;
        Vector4T<float>::operator*=((Vector4T<float>*)&local_a8, param_3);
        Vector4T<float>::operator*=((Vector4T<float>*)&local_98, param_3);
        local_88[0] = local_98.GetXYZ();
        pfVar2 = (float*)local_98.qw();
        local_40 = operator/((Vector3T*)local_88, *pfVar2);
        local_68[0] = local_a8.GetXYZ();
        pfVar2 = (float*)local_98.qw();
        local_78[0] = operator/((Vector3T*)local_68, *pfVar2);
        local_58[0] = operator-((Vector3T*)&local_40, (Vector3T*)local_78);
        fVar3 = (float)local_58->LengthSq();
        ::abs(fVar3);
    }

    // 0x100c61290, 80 bytes, inline, placed by debug map only (low confidence)
    // Vector4T<float> operator-<float>(Vector4T<float> const&, Vector4T<float> const&)
    /* Vector4T<float> TEMPNAMEPLACEHOLDERVALUE(Vector4T<float> const&,
   Vector4T<float> const&) */

    undefined1[16] operator-(Vector4T * param_1, Vector4T * param_2) {
        undefined1 auVar1[16];
        ImVec4 local_18[16];

        ImVec4::ImVec4(local_18, *(float*)param_1 - *(float*)param_2, *(float*)(param_1 + 4) - *(float*)(param_2 + 4),
                       *(float*)(param_1 + 8) - *(float*)(param_2 + 8),
                       *(float*)(param_1 + 12) - *(float*)(param_2 + 12));
        auVar1[0] = local_18[0];
        auVar1[1] = local_18[1];
        auVar1[2] = local_18[2];
        auVar1[3] = local_18[3];
        auVar1[4] = local_18[4];
        auVar1[5] = local_18[5];
        auVar1[6] = local_18[6];
        auVar1[7] = local_18[7];
        auVar1[8] = local_18[8];
        auVar1[9] = local_18[9];
        auVar1[10] = local_18[10];
        auVar1[11] = local_18[11];
        auVar1[12] = local_18[12];
        auVar1[13] = local_18[13];
        auVar1[14] = local_18[14];
        auVar1[15] = local_18[15];
        return auVar1;
    }

    // 0x100c612f0, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float> operator-<float>(Vector3T<float> const&, Vector3T<float> const&)
    /* Vector3T<float> TEMPNAMEPLACEHOLDERVALUE(Vector3T<float> const&,
   Vector3T<float> const&) */

    undefined8 operator-(Vector3T* param_1, Vector3T* param_2) {
        undefined8 uVar1;
        ColourHSL local_18;

        new (&local_18) ColourHSL(*(float*)param_1 - *(float*)param_2, *(float*)(param_1 + 4) - *(float*)(param_2 + 4),
                                  *(float*)(param_1 + 8) - *(float*)(param_2 + 8));
        uVar1._0_4_ = local_18.field_0;
        uVar1._4_4_ = local_18.field_4;
        return uVar1;
    }

    // 0x100c61330, 80 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float> operator/<float>(Vector3T<float> const&, float)
    /* Vector3T<float> TEMPNAMEPLACEHOLDERVALUE(Vector3T<float> const&,
   float) */

    undefined8 operator/(Vector3T* param_1, float param_2) {
        undefined8 uVar1;
        float fVar2;
        ColourHSL local_18;

        fVar2 = 1.0 / param_2;
        new (&local_18)
            ColourHSL(*(float*)param_1 * fVar2, *(float*)(param_1 + 4) * fVar2, fVar2 * *(float*)(param_1 + 8));
        uVar1._0_4_ = local_18.field_0;
        uVar1._4_4_ = local_18.field_4;
        return uVar1;
    }

    // 0x100c61390, 320 bytes, placed by debug map only (low confidence)
    // NDCProjectGetSphericalNDCRadius2(Sphere const&, Matrix44T<float> const&)
    float NDCProjectGetSphericalNDCRadius2(Sphere* param_1, Matrix44T* param_2) {
        vector* pvVar1;
        Vector4T<float>* this;
        Vector4T<float>* this_00;
        float fVar3;
        undefined4 uVar4;
        array<Vector3T<float>, 2ul> local_68[24];
        ulong local_50;
        float local_44;
        undefined8 local_40[2];

        std::array<Vector3T<float>, 2ul>::array(local_68);
        pvVar1 = param_1->SSOBeginPtr(param_2);
        this = (Vector4T<float>*)std::array<Vector3T<float>, 2ul>::operator[](local_68, 0);
        Vector4T<float>::SetXYZ(this, (Vector3T*)pvVar1);
        pvVar1 = param_1->SSOBeginPtr(pvVar1);
        fVar3 = (float)param_1->GetOutlineRadiusAdjustment();
        local_50 = operator*((Vector3T*)PTR_UP_100ee66d0, fVar3);
        local_40[0] = operator+((Vector3T*)pvVar1, (Vector3T*)&local_50);
        this_00 = (Vector4T<float>*)std::array<Vector3T<float>, 2ul>::operator[](local_68, 1);
        Vector4T<float>::SetXYZ(this_00, (Vector3T*)local_40);
        local_40[0] = WorldPosToClipPos((Vector3T*)this, param_2);
        Vector4T<float>::SetXYZ(this, (Vector3T*)local_40);
        local_40[0] = WorldPosToClipPos((Vector3T*)this_00, param_2);
        Vector4T<float>::SetXYZ(this_00, (Vector3T*)local_40);
        local_40[0] = operator-((Vector3T*)this, (Vector3T*)this_00);
        uVar4 = local_40->Length();
        local_40[0] = CONCAT44(local_40[0]._4_4_, uVar4);
        local_50 = local_50 & 18446744069414584320;
        local_44 = 2.0;
        fVar3 = Clamp<float>((float*)local_40, (float*)&local_50, &local_44);
        return fVar3 * 0.5;
    }

    // 0x100c614f0, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float> operator+<float>(Vector3T<float> const&, Vector3T<float> const&)
    /* Vector3T<float> TEMPNAMEPLACEHOLDERVALUE(Vector3T<float> const&,
   Vector3T<float> const&) */

    undefined8 operator+(Vector3T* param_1, Vector3T* param_2) {
        undefined8 uVar1;
        ColourHSL local_18;

        new (&local_18) ColourHSL(*(float*)param_2 + *(float*)param_1, *(float*)(param_2 + 4) + *(float*)(param_1 + 4),
                                  *(float*)(param_2 + 8) + *(float*)(param_1 + 8));
        uVar1._0_4_ = local_18.field_0;
        uVar1._4_4_ = local_18.field_4;
        return uVar1;
    }

    // 0x100c61530, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float> operator*<float>(float, Vector3T<float> const&)
    /* Vector3T<float> TEMPNAMEPLACEHOLDERVALUE(Vector3T<float> const&,
   float) */

    undefined8 operator*(Vector3T* param_1, float param_2) {
        undefined8 uVar1;
        ColourHSL local_18;

        new (&local_18)
            ColourHSL(*(float*)param_1 * param_2, *(float*)(param_1 + 4) * param_2, param_2 * *(float*)(param_1 + 8));
        uVar1._0_4_ = local_18.field_0;
        uVar1._4_4_ = local_18.field_4;
        return uVar1;
    }

    // 0x100c61570, 256 bytes, inline, placed by debug map only (low confidence)
    // WorldPosToClipPos(Vector3T<float> const&, Matrix44T<float> const&)
    undefined8 WorldPosToClipPos(Vector3T* param_1, Matrix44T* param_2) {
        vector* pvVar1;
        float* pfVar2;
        undefined8 uVar3;
        float fVar4;
        ImVec4 local_48[24];
        undefined1 local_30[16];
        float local_20;
        float local_1c;

        pvVar1 = param_1->SSOBeginPtr(param_2);
        local_30._12_4_ = *(undefined4*)pvVar1;
        pfVar2 = (float*)param_1->y();
        local_20 = *pfVar2;
        pfVar2 = (float*)param_1->second();
        fVar4 = 1.0;
        if (*pfVar2 != 0.0) {
            pfVar2 = (float*)param_1->second();
            fVar4 = *pfVar2;
        }
        local_1c = 1.0;
        ImVec4::ImVec4(local_48, (float)local_30._12_4_, local_20, fVar4, 1.0);
        Vector4T<float>::operator*=((Vector4T<float>*)local_48, param_2);
        pfVar2 = (float*)local_48->qw();
        local_1c = local_1c / *pfVar2;
        pvVar1 = local_48->SSOBeginPtr(param_2);
        local_30._12_4_ = *(float*)pvVar1 * local_1c;
        pfVar2 = (float*)local_48->y();
        local_20 = *pfVar2 * local_1c;
        pfVar2 = (float*)local_48->second();
        new (local_30) ColourHSL((float)local_30._12_4_, local_20, local_1c * *pfVar2);
        uVar3._0_4_ = (float)local_30._0_4_;
        uVar3._4_4_ = (float)local_30._4_4_;
        return uVar3;
    }

} // namespace jag::math

// 0x100c61380, 16 bytes, placed by debug map only (low confidence)
// abs(float)
ulong abs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}
