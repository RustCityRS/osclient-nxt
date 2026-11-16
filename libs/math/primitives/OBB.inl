// libs/math/primitives/OBB.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::math {
    // 0x1008b0400
    OBB* OBB::operator=(const OBB& obb) {
        SetXYZ(obb);
        field_12 = 0;
        field_32 = obb.field_32;
        field_28 = 0;
        m_halfSize.SetXYZ(obb.m_halfSize);
        return this;
    }

    // 0x1008b1790
    double Vector3Dot<double>(const Vector3T<double>& vector31, const Vector3T<double>& vector32) {
        return *(double*)(vector32 + 16) * *(double*)(vector31 + 16) +
               *(double*)(vector32 + 8) * *(double*)(vector31 + 8) + *(double*)vector32 * *(double*)vector31;
    }

    // 0x1008b17c0
    Vector3T<double>* Vector3T<double>::operator=(const Vector3T<double>& vector3) {
        *(uint64_t*)this = *(uint64_t*)vector3;
        *(uint64_t*)(this + 8) = *(uint64_t*)(vector3 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)(vector3 + 16);
        return this;
    }

    // 0x1008b1810
    Vector4T<double>* Vector4T<double>::GetXYZ() const {
        double* in_RSI;

        new (this) Vector3T(*in_RSI, in_RSI[1], in_RSI[2]);
        return this;
    }

    // 0x1008b1840
    Vector3T<double> operator+ <double>(const Vector3T<double>& vector31, const Vector3T<double>& vector32) {
        double* in_RDX;

        new (vector31) Vector3T(*in_RDX + *(double*)vector32, in_RDX[1] + *(double*)(vector32 + 8),
                                in_RDX[2] + *(double*)(vector32 + 16));
        return vector31;
    }

    // 0x1008b1880
    Matrix44T<float>& Matrix44LookAtLH<float>(Matrix44T<float>& matrix44, const Vector3T<double>& vector31,
                                              const Vector3T<double>& vector32, const Vector3T<double>& vector33) {
        unsigned int extraout_XMM0_Dc;
        unsigned int extraout_XMM0_Dc_00;
        unsigned int extraout_XMM0_Dd;
        unsigned int extraout_XMM0_Dd_00;
        ReturnValue local_f0;
        ReturnValue local_98;
        ReturnValue local_78;

        local_98 - vector32;
        ReturnValue* pRVar2 = local_98 = Vector3T<double>::Normalize();
        ReturnValue local_b8 = *pRVar2;
        ReturnValue RStack_b0 = pRVar2[1];
        ReturnValue local_a8 = pRVar2[2];
        Vector3Cross<double>((Vector3T<double>*)&local_78, vector33);
        pRVar2 = local_78 = Vector3T<double>::Normalize();
        local_98 = *pRVar2;
        ReturnValue RStack_90 = pRVar2[1];
        ReturnValue local_88 = pRVar2[2];
        Vector3Cross<double>(&local_f0, (Vector3T<double>*)&local_b8);
        pRVar2 = local_f0 = Vector3T<double>::Normalize();
        local_78 = *pRVar2;
        ReturnValue RStack_70 = pRVar2[1];
        ReturnValue local_68 = pRVar2[2];
        float local_54 = (float)(double)local_98;
        float local_50 = (float)(double)local_78;
        float local_4c = (float)(double)local_b8;
        float local_48 = (float)(double)RStack_90;
        float local_44 = (float)(double)RStack_70;
        float local_40 = (float)(double)RStack_b0;
        float local_3c = (float)(double)local_88;
        float local_38 = (float)(double)local_68;
        float local_34 = (float)(double)local_a8;
        double dVar1 = Vector3Dot<double>((Vector3T<double>*)&local_98, vector31);
        float local_d8 = -(float)dVar1;
        unsigned int uStack_d4 = (unsigned int)((unsigned long)dVar1 >> 32) ^ 2147483648;
        unsigned int uStack_d0 = extraout_XMM0_Dc ^ 2147483648;
        unsigned int uStack_cc = extraout_XMM0_Dd ^ 2147483648;
        dVar1 = Vector3Dot<double>((Vector3T<double>*)&local_78, vector31);
        float local_c8 = -(float)dVar1;
        unsigned int uStack_c4 = (unsigned int)((unsigned long)dVar1 >> 32) ^ 2147483648;
        unsigned int uStack_c0 = extraout_XMM0_Dc_00 ^ 2147483648;
        unsigned int uStack_bc = extraout_XMM0_Dd_00 ^ 2147483648;
        dVar1 = Vector3Dot<double>((Vector3T<double>*)&local_b8, vector31);
        matrix44.Set(local_54, local_50, local_4c, 0.0, local_48, local_44, local_40, 0.0, local_3c, local_38, local_34,
                     0.0, local_d8, local_c8, -(float)dVar1, 1.0);
        return matrix44;
    }

    // 0x1008b26d0
    Vector4T<float> Vector4Min<float>(const Vector4T<float>& vector41, const Vector4T<float>& vector42) {
        uint8_t auVar2[16];

        auto pfVar1 = std::min<float>(vector41, vector42);
        float local_24 = *pfVar1;
        pfVar1 = std::min<float>(*((vector41 + 4)), *((vector42 + 4)));
        float local_20 = *pfVar1;
        pfVar1 = std::min<float>(*((vector41 + 8)), *((vector42 + 8)));
        float local_1c = *pfVar1;
        pfVar1 = std::min<float>(*((vector41 + 12)), *((vector42 + 12)));
        ImVec4 local_38(local_24, local_20, local_1c, *pfVar1);
        auVar2[0] = local_38[0];
        auVar2[1] = local_38[1];
        auVar2[2] = local_38[2];
        auVar2[3] = local_38[3];
        auVar2[4] = local_38[4];
        auVar2[5] = local_38[5];
        auVar2[6] = local_38[6];
        auVar2[7] = local_38[7];
        auVar2[8] = local_38[8];
        auVar2[9] = local_38[9];
        auVar2[10] = local_38[10];
        auVar2[11] = local_38[11];
        auVar2[12] = local_38[12];
        auVar2[13] = local_38[13];
        auVar2[14] = local_38[14];
        auVar2[15] = local_38[15];
        return auVar2;
    }

    // 0x1008b2760
    Vector4T<float> Vector4Max<float>(const Vector4T<float>& vector41, const Vector4T<float>& vector42) {
        uint8_t auVar2[16];

        auto pfVar1 = std::max<float>(vector41, vector42);
        float local_24 = *pfVar1;
        pfVar1 = std::max<float>(*((vector41 + 4)), *((vector42 + 4)));
        float local_20 = *pfVar1;
        pfVar1 = std::max<float>(*((vector41 + 8)), *((vector42 + 8)));
        float local_1c = *pfVar1;
        pfVar1 = std::max<float>(*((vector41 + 12)), *((vector42 + 12)));
        ImVec4 local_38(local_24, local_20, local_1c, *pfVar1);
        auVar2[0] = local_38[0];
        auVar2[1] = local_38[1];
        auVar2[2] = local_38[2];
        auVar2[3] = local_38[3];
        auVar2[4] = local_38[4];
        auVar2[5] = local_38[5];
        auVar2[6] = local_38[6];
        auVar2[7] = local_38[7];
        auVar2[8] = local_38[8];
        auVar2[9] = local_38[9];
        auVar2[10] = local_38[10];
        auVar2[11] = local_38[11];
        auVar2[12] = local_38[12];
        auVar2[13] = local_38[13];
        auVar2[14] = local_38[14];
        auVar2[15] = local_38[15];
        return auVar2;
    }

    // 0x1008b2800
    Vector4T<float> Vector4ComponentSelect<float>(const Vector4T<float>& vector41, const Vector4T<float>& vector42,
                                                  const std::array<unsigned int, Vector4T<float>::N>& arg3) {
        uint8_t auVar4[16];

        int* piVar1 = &arg3[0];
        Vector4T<float>* pVVar3 = vector42;
        if (*piVar1 == 0) {
            pVVar3 = vector41;
        }
        float* pfVar2 = (float*)(*pVVar3)[0];
        float local_2c = *pfVar2;
        piVar1 = &arg3[1];
        pVVar3 = vector42;
        if (*piVar1 == 0) {
            pVVar3 = vector41;
        }
        pfVar2 = (float*)(*pVVar3)[1];
        float local_28 = *pfVar2;
        piVar1 = &arg3[2];
        pVVar3 = vector42;
        if (*piVar1 == 0) {
            pVVar3 = vector41;
        }
        pfVar2 = (float*)(*pVVar3)[2];
        float local_24 = *pfVar2;
        piVar1 = &arg3[3];
        if (*piVar1 == 0) {
            vector42 = vector41;
        }
        pfVar2 = &vector42[3];
        ImVec4 local_48(local_2c, local_28, local_24, *pfVar2);
        auVar4[0] = local_48[0];
        auVar4[1] = local_48[1];
        auVar4[2] = local_48[2];
        auVar4[3] = local_48[3];
        auVar4[4] = local_48[4];
        auVar4[5] = local_48[5];
        auVar4[6] = local_48[6];
        auVar4[7] = local_48[7];
        auVar4[8] = local_48[8];
        auVar4[9] = local_48[9];
        auVar4[10] = local_48[10];
        auVar4[11] = local_48[11];
        auVar4[12] = local_48[12];
        auVar4[13] = local_48[13];
        auVar4[14] = local_48[14];
        auVar4[15] = local_48[15];
        return auVar4;
    }

    // 0x1008b2a80
    Vector4T<float> Vector4Abs<float>(const Vector4T<float>& vector4) {
        uint8_t auVar1[16];

        float local_1c = (float)::abs(*(float*)vector4);
        float local_18 = (float)::abs(*(float*)(vector4 + 4));
        float local_14 = (float)::abs(*(float*)(vector4 + 8));
        float arg4 = (float)::abs(*(float*)(vector4 + 12));
        ImVec4 local_38(local_1c, local_18, local_14, arg4);
        auVar1[0] = local_38[0];
        auVar1[1] = local_38[1];
        auVar1[2] = local_38[2];
        auVar1[3] = local_38[3];
        auVar1[4] = local_38[4];
        auVar1[5] = local_38[5];
        auVar1[6] = local_38[6];
        auVar1[7] = local_38[7];
        auVar1[8] = local_38[8];
        auVar1[9] = local_38[9];
        auVar1[10] = local_38[10];
        auVar1[11] = local_38[11];
        auVar1[12] = local_38[12];
        auVar1[13] = local_38[13];
        auVar1[14] = local_38[14];
        auVar1[15] = local_38[15];
        return auVar1;
    }

    // 0x1008b2af0
    Vector4T<float> Vector4Round<float>(const Vector4T<float>& vector4) {
        uint8_t auVar1[16];

        float local_1c = (float)round(*(float*)vector4);
        float local_18 = (float)round(*(float*)(vector4 + 4));
        float local_14 = (float)round(*(float*)(vector4 + 8));
        float arg4 = (float)round(*(float*)(vector4 + 12));
        ImVec4 local_38(local_1c, local_18, local_14, arg4);
        auVar1[0] = local_38[0];
        auVar1[1] = local_38[1];
        auVar1[2] = local_38[2];
        auVar1[3] = local_38[3];
        auVar1[4] = local_38[4];
        auVar1[5] = local_38[5];
        auVar1[6] = local_38[6];
        auVar1[7] = local_38[7];
        auVar1[8] = local_38[8];
        auVar1[9] = local_38[9];
        auVar1[10] = local_38[10];
        auVar1[11] = local_38[11];
        auVar1[12] = local_38[12];
        auVar1[13] = local_38[13];
        auVar1[14] = local_38[14];
        auVar1[15] = local_38[15];
        return auVar1;
    }

    // 0x1008b2b60
    Vector4T<float> operator/ <float>(const Vector4T<float>& vector41, const Vector4T<float>& vector42) {
        uint8_t auVar1[16];

        ImVec4 local_18(*(float*)vector41 / *(float*)vector42, *(float*)(vector41 + 4) / *(float*)(vector42 + 4),
                        *(float*)(vector41 + 8) / *(float*)(vector42 + 8),
                        *(float*)(vector41 + 12) / *(float*)(vector42 + 12));
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

} // namespace jag::math

namespace jag {
    // 0x1008b2040
    eastl::string ToString<eastl::string, int>(const int& arg1, unsigned int arg2) {
        unsigned int in_EDX;
        uint32_t in_register_00000034;
        char local_68[64];

        ToText(local_68, 64, *(int*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2), in_EDX);
        new (arg1) eastl::string(local_68);
        return arg1;
    }

} // namespace jag

namespace jag::graphics {
    // 0x1008b2510
    void CreateAABBPoints(std::array<math::Vector4T<float>, 8ul>& vector4s, const math::Vector4T<float>& vector41,
                          const math::Vector4T<float>& vector42) {
        Vector4T<float>* vector41_00;
        Rect<float>* rect;
        uint64_t uVar1;
        uint64_t local_58;
        uint32_t uStack_50;
        uint32_t uStack_4c;
        uint32_t uStack_40;
        uint32_t uStack_3c;

        ImVec4 local_d8(1.0, 1.0, -1.0, 1.0);
        ImVec4 local_c8(-1.0, 1.0, -1.0, 1.0);
        ImVec4 local_b8(1.0, -1.0, -1.0, 1.0);
        ImVec4 local_a8(-1.0, -1.0, -1.0, 1.0);
        ImVec4 local_98(1.0, 1.0, 1.0, 1.0);
        ImVec4 local_88(-1.0, 1.0, 1.0, 1.0);
        ImVec4 local_78(1.0, -1.0, 1.0, 1.0);
        ImVec4 local_68(-1.0, -1.0, 1.0, 1.0);
        unsigned long arg1 = 0;
        do {
            vector41_00 = &local_d8[arg1];
            uVar1 = *vector41_00 vector42;
            uStack_40 = 3212836864;
            uStack_3c = 0;
            uVar1 = uVar1 + vector41;
            uStack_50 = 3212836864;
            uStack_4c = 0;
            local_58 = uVar1;
            rect = &vector4s[arg1];
            *rect = local_58;
            arg1 = arg1 + 1;
        } while (arg1 != 8);
    }

} // namespace jag::graphics

// 0x1008b2bb0
void pow(float arg1, float arg2) {
    _powf();
}
