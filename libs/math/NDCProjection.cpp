// libs/math/NDCProjection.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.math

namespace jag::math {
    // 0x100c60e80
    void NDCProjectGetNDCProjectionValue(const OBB& obb, const Matrix44T<float>& matrix44) {
        Matrix44T<float> local_98;
        Vector4T<float> local_88;
        Vector4T<float> local_78;
        uint64_t local_68;
        uint64_t uStack_60;
        uint64_t local_58[2];
        uint64_t local_48[2];

        auto local_d8 = obb.GetTransform();
        &local_98*& local_d8;
        uint64_t local_38 = local_98 + local_88;
        local_d8[0] = (ReturnValue)local_38 + local_78;
        local_38 = local_68;
        uint64_t uStack_30 = uStack_60;
        auto pfVar1 = local_38.qw();
        local_58[0] = &local_d8 * (1.0 / *pfVar1);
        local_48[0] = local_58->GetXYZ();
        local_48->LengthSq();
    }

    // 0x100c60f40
    Matrix44T<float>* operator*(const Matrix44T<float>& matrix441, const Matrix44T<float>& matrix442) {
        internal::MatrixMultSSE(matrix441, matrix442);
        return matrix441;
    }

    // 0x100c60ff0
    Vector4T<float> operator+ <float>(const Vector4T<float>& vector41, const Vector4T<float>& vector42) {
        uint8_t auVar1[16];

        ImVec4 local_18(*(float*)vector42 + *(float*)vector41, *(float*)(vector42 + 4) + *(float*)(vector41 + 4),
                        *(float*)(vector42 + 8) + *(float*)(vector41 + 8),
                        *(float*)(vector42 + 12) + *(float*)(vector41 + 12));
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

    // 0x100c61040
    Vector4T<float> operator* <float>(const Vector4T<float>& vector4, float arg2) {
        uint8_t auVar1[16];

        ImVec4 local_18(*(float*)vector4 * arg2, *(float*)(vector4 + 4) * arg2, *(float*)(vector4 + 8) * arg2,
                        arg2 * *(float*)(vector4 + 12));
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

    // 0x100c610d0
    void NDCProjectGetSphericalNDCRadius(const Sphere& sphere, const Matrix44T<float>& matrix441,
                                         const Matrix44T<float>& matrix442) {
        float arg1;
        uint64_t local_a8;
        uint64_t uStack_a0;
        uint64_t local_88[2];
        uint64_t local_78[2];
        uint64_t local_68[2];
        uint64_t local_58[3];

        auto vector3 = sphere.SSOBeginPtr();
        new (&local_a8) Vector4T(*vector3, 1.0);
        uint64_t local_98 = local_a8;
        uint64_t uStack_90 = uStack_a0;
        float local_34 = (float)sphere.GetOutlineRadiusAdjustment();
        auto pfVar1 = local_98.second();
        *pfVar1 = local_34 + *pfVar1;
        local_a8 *= matrix441;
        local_98 *= matrix441;
        local_58[0] = local_98 - local_a8;
        uint64_t local_40 = local_58->GetXYZ();
        local_34 = (float)local_40.Length();
        local_98 = local_a8;
        pfVar1 = (float*)local_98.second();
        *pfVar1 = local_34 + *pfVar1;
        local_a8 *= matrix442;
        local_98 *= matrix442;
        local_88[0] = local_98.GetXYZ();
        pfVar1 = (float*)local_98.qw();
        local_40 = local_88 / *pfVar1;
        local_68[0] = local_a8.GetXYZ();
        pfVar1 = (float*)local_98.qw();
        local_78[0] = local_68 / *pfVar1;
        local_58[0] = local_40 - *local_78;
        arg1 = (float)local_58->LengthSq();
        ::abs(arg1);
    }

    // 0x100c61290
    Vector4T<float> operator- <float>(const Vector4T<float>& vector41, const Vector4T<float>& vector42) {
        uint8_t auVar1[16];

        ImVec4 local_18(*(float*)vector41 - *(float*)vector42, *(float*)(vector41 + 4) - *(float*)(vector42 + 4),
                        *(float*)(vector41 + 8) - *(float*)(vector42 + 8),
                        *(float*)(vector41 + 12) - *(float*)(vector42 + 12));
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

    // 0x100c612f0
    Vector3T<float> operator- <float>(const Vector3T<float>& vector31, const Vector3T<float>& vector32) {
        uint64_t uVar1;

        ColourHSL local_18(*(float*)vector31 - *(float*)vector32, *(float*)(vector31 + 4) - *(float*)(vector32 + 4),
                           *(float*)(vector31 + 8) - *(float*)(vector32 + 8));
        uVar1._0_4_ = local_18.field_0;
        uVar1._4_4_ = local_18.field_4;
        return uVar1;
    }

    // 0x100c61330
    Vector3T<float> operator/ <float>(const Vector3T<float>& vector3, float arg2) {
        uint64_t uVar1;

        float fVar2 = 1.0 / arg2;
        ColourHSL local_18(*(float*)vector3 * fVar2, *(float*)(vector3 + 4) * fVar2, fVar2 * *(float*)(vector3 + 8));
        uVar1._0_4_ = local_18.field_0;
        uVar1._4_4_ = local_18.field_4;
        return uVar1;
    }

    // 0x100c61390
    float NDCProjectGetSphericalNDCRadius2(const Sphere& sphere, const Matrix44T<float>& matrix44) {
        uint64_t local_40[2];

        array<Vector3T<float>, 2ul> local_68;
        auto pVVar1 = sphere.SSOBeginPtr();
        Vector4T<float>* vector4T = &local_68[0];
        vector4T->SetXYZ(*pVVar1);
        pVVar1 = (Vector3T<float>*)sphere.SSOBeginPtr();
        float fVar2 = (float)sphere.GetOutlineRadiusAdjustment();
        unsigned long local_50 = fVar2 * PTR_UP_100ee66d0;
        local_40[0] = *pVVar1 + local_50;
        Vector4T<float>* this_00 = &local_68[1];
        this_00->SetXYZ(*local_40);
        local_40[0] = WorldPosToClipPos((Vector3T<float>*)vector4T, matrix44);
        vector4T->SetXYZ(*local_40);
        local_40[0] = WorldPosToClipPos((Vector3T<float>*)this_00, matrix44);
        this_00->SetXYZ(*local_40);
        local_40[0] = *vector4T - *this_00;
        uint32_t uVar3 = local_40->Length();
        local_40[0] = (((uint64_t)local_40[0]._4_4_ << 32) | (uint32_t)uVar3);
        local_50 = local_50 & 18446744069414584320;
        float local_44 = 2.0;
        fVar2 = Clamp<float>((float*)local_40, (float*)&local_50, &local_44);
        return fVar2 * 0.5;
    }

    // 0x100c614f0
    Vector3T<float> operator+ <float>(const Vector3T<float>& vector31, const Vector3T<float>& vector32) {
        uint64_t uVar1;

        ColourHSL local_18(*(float*)vector32 + *(float*)vector31, *(float*)(vector32 + 4) + *(float*)(vector31 + 4),
                           *(float*)(vector32 + 8) + *(float*)(vector31 + 8));
        uVar1._0_4_ = local_18.field_0;
        uVar1._4_4_ = local_18.field_4;
        return uVar1;
    }

    // 0x100c61530
    Vector3T<float> operator* <float>(float arg1, const Vector3T<float>& vector3) {
        uint64_t uVar1;

        ColourHSL local_18(*(float*)vector3 * arg1, *(float*)(vector3 + 4) * arg1, arg1 * *(float*)(vector3 + 8));
        uVar1._0_4_ = local_18.field_0;
        uVar1._4_4_ = local_18.field_4;
        return uVar1;
    }

    // 0x100c61570
    void WorldPosToClipPos(const Vector3T<float>& vector3, const Matrix44T<float>& matrix44) {
        uint64_t uVar2;
        uint8_t local_30[16];

        auto pfVar1 = vector3.SSOBeginPtr();
        local_30._12_4_ = *pfVar1;
        pfVar1 = (float*)vector3.y();
        float local_20 = *pfVar1;
        pfVar1 = (float*)vector3.second();
        float arg3 = 1.0;
        if (*pfVar1 != 0.0) {
            pfVar1 = (float*)vector3.second();
            arg3 = *pfVar1;
        }
        float local_1c = 1.0;
        ImVec4 local_48((float)local_30._12_4_, local_20, arg3, 1.0);
        local_48 *= matrix44;
        pfVar1 = (float*)local_48.qw();
        local_1c = local_1c / *pfVar1;
        pfVar1 = (float*)local_48.SSOBeginPtr();
        local_30._12_4_ = *pfVar1 * local_1c;
        pfVar1 = (float*)local_48.y();
        local_20 = *pfVar1 * local_1c;
        pfVar1 = (float*)local_48.second();
        new (local_30) ColourHSL((float)local_30._12_4_, local_20, local_1c * *pfVar1);
        uVar2._0_4_ = (float)local_30._0_4_;
        uVar2._4_4_ = (float)local_30._4_4_;
        return uVar2;
    }

} // namespace jag::math

// 0x100c61380
unsigned long abs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}
