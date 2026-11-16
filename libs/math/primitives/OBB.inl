// libs/math/primitives/OBB.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::math {
    // 0x1008b0400, 80 bytes, inline, placed by class name and debug map
    // OBB::operator=(OBB const&)
    /* OBB::TEMPNAMEPLACEHOLDERVALUE(OBB const&) */

    OBB* OBB::operator=(OBB* param_1) {
        SetXYZ(param_1);
        field_12 = 0;
        Matrix33T<float>::operator=((Matrix33T<float>*)&field_32, &param_1->field_32);
        field_28 = 0;
        (&m_halfSize, (Vector3T*)&param_1->m_halfSize)->SetXYZ();
        return this;
    }

    // 0x1008b1770, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<double>::Vector3T(double, double, double): jumps straight to the base-object constructor

    // 0x1008b1790, 48 bytes, inline, placed by debug map only (low confidence)
    // double Vector3Dot<double>(Vector3T<double> const&, Vector3T<double> const&)
    double Vector3Dot<double>(Vector3T* param_1, Vector3T* param_2) {
        return *(double*)(param_2 + 16) * *(double*)(param_1 + 16) + *(double*)(param_2 + 8) * *(double*)(param_1 + 8) +
               *(double*)param_2 * *(double*)param_1;
    }

    // 0x1008b17c0, 48 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<double>::operator=(Vector3T<double> const&)
    /* Vector3T<double>::TEMPNAMEPLACEHOLDERVALUE(Vector3T<double> const&) */

    Vector3T<double>* Vector3T<double>::operator=(Vector3T* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)(this + 8) = *(undefined8*)(param_1 + 8);
        *(undefined8*)(this + 16) = *(undefined8*)(param_1 + 16);
        return this;
    }

    // 0x1008b17f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<double>::Vector3T<float>(Vector3T<float> const&): jumps straight to the base-object constructor

    // 0x1008b1800, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Vector4T<double>::Vector4T(Vector3T<double> const&, double): jumps straight to the base-object constructor

    // 0x1008b1810, 48 bytes, inline, placed by debug map only (low confidence)
    // Vector4T<double>::GetXYZ() const
    Vector4T<double>* Vector4T<double>::GetXYZ() {
        double* in_RSI;

        new (this) Vector3T<double>(*in_RSI, in_RSI[1], in_RSI[2]);
        return this;
    }

    // 0x1008b1840, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<double> operator+<double>(Vector3T<double> const&, Vector3T<double> const&)
    /* Vector3T<double> TEMPNAMEPLACEHOLDERVALUE(Vector3T<double>
   const&, Vector3T<double> const&) */

    math* operator+(Vector3T* param_1, Vector3T* param_2) {
        new (this)
            Vector3T<double>(*(double*)param_2 + *(double*)param_1, *(double*)(param_2 + 8) + *(double*)(param_1 + 8),
                             *(double*)(param_2 + 16) + *(double*)(param_1 + 16));
        return this;
    }

    // 0x1008b1880, 560 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float>& Matrix44LookAtLH<float>(Matrix44T<float>&, Vector3T<double> const&, Vector3T<double> const&, Vector3T<double> const&)
    Matrix44T* Matrix44LookAtLH<float>(Matrix44T* param_1, Vector3T* param_2, Vector3T* param_3, Vector3T* param_4) {
        double dVar1;
        double* pdVar2;
        uint extraout_XMM0_Dc;
        uint extraout_XMM0_Dc_00;
        uint extraout_XMM0_Dd;
        uint extraout_XMM0_Dd_00;
        undefined1 local_f0[28];
        uint uStack_d4;
        uint uStack_d0;
        uint uStack_cc;
        float local_c8;
        uint uStack_c4;
        uint uStack_c0;
        uint uStack_bc;
        double local_b8;
        double dStack_b0;
        double local_a8;
        undefined1 local_98[16];
        double local_88;
        double local_78;
        double dStack_70;
        double local_68;
        float local_54;
        float local_50;
        float local_4c;
        float local_48;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        operator-((math*)local_98, param_3, param_2);
        pdVar2 = (double*)local_98->Normalize();
        local_b8 = *pdVar2;
        dStack_b0 = pdVar2[1];
        local_a8 = pdVar2[2];
        Vector3Cross<double>((math*)&local_78, param_4, (Vector3T*)&local_b8);
        pdVar2 = (double*)local_78.Normalize();
        local_98._0_8_ = *pdVar2;
        local_98._8_8_ = pdVar2[1];
        local_88 = pdVar2[2];
        Vector3Cross<double>((math*)local_f0, (Vector3T*)&local_b8, (Vector3T*)local_98);
        pdVar2 = (double*)local_f0->Normalize();
        local_78 = *pdVar2;
        dStack_70 = pdVar2[1];
        local_68 = pdVar2[2];
        local_54 = (float)(double)local_98._0_8_;
        local_50 = (float)local_78;
        local_4c = (float)local_b8;
        local_48 = (float)(double)local_98._8_8_;
        local_44 = (float)dStack_70;
        local_40 = (float)dStack_b0;
        local_3c = (float)local_88;
        local_38 = (float)local_68;
        local_34 = (float)local_a8;
        dVar1 = Vector3Dot<double>((Vector3T*)local_98, param_2);
        local_f0._24_4_ = -(float)dVar1;
        uStack_d4 = (uint)((ulong)dVar1 >> 32) ^ 2147483648;
        uStack_d0 = extraout_XMM0_Dc ^ 2147483648;
        uStack_cc = extraout_XMM0_Dd ^ 2147483648;
        dVar1 = Vector3Dot<double>((Vector3T*)&local_78, param_2);
        local_c8 = -(float)dVar1;
        uStack_c4 = (uint)((ulong)dVar1 >> 32) ^ 2147483648;
        uStack_c0 = extraout_XMM0_Dc_00 ^ 2147483648;
        uStack_bc = extraout_XMM0_Dd_00 ^ 2147483648;
        dVar1 = Vector3Dot<double>((Vector3T*)&local_b8, param_2);
        param_1->Set(local_54, local_50, local_4c, 0.0, local_48, local_44, local_40, 0.0, local_3c, local_38, local_34,
                     0.0, (float)local_f0._24_4_, local_c8, -(float)dVar1, 1.0);
        return param_1;
    }

    // 0x1008b24d0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // OBB::OBB(OBB const&): jumps straight to the base-object constructor

    // 0x1008b26d0, 144 bytes, inline, placed by debug map only (low confidence)
    // Vector4T<float> Vector4Min<float>(Vector4T<float> const&, Vector4T<float> const&)
    undefined1[16] Vector4Min<float>(Vector4T* param_1, Vector4T* param_2) {
        float* pfVar1;
        undefined1 auVar2[16];
        ImVec4 local_38[20];
        float local_24;
        float local_20;
        float local_1c;

        pfVar1 = std::min<float>((float*)param_1, (float*)param_2);
        local_24 = *pfVar1;
        pfVar1 = std::min<float>((float*)(param_1 + 4), (float*)(param_2 + 4));
        local_20 = *pfVar1;
        pfVar1 = std::min<float>((float*)(param_1 + 8), (float*)(param_2 + 8));
        local_1c = *pfVar1;
        pfVar1 = std::min<float>((float*)(param_1 + 12), (float*)(param_2 + 12));
        ImVec4::ImVec4(local_38, local_24, local_20, local_1c, *pfVar1);
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

    // 0x1008b2760, 144 bytes, inline, placed by debug map only (low confidence)
    // Vector4T<float> Vector4Max<float>(Vector4T<float> const&, Vector4T<float> const&)
    undefined1[16] Vector4Max<float>(Vector4T* param_1, Vector4T* param_2) {
        float* pfVar1;
        undefined1 auVar2[16];
        ImVec4 local_38[20];
        float local_24;
        float local_20;
        float local_1c;

        pfVar1 = std::max<float>((float*)param_1, (float*)param_2);
        local_24 = *pfVar1;
        pfVar1 = std::max<float>((float*)(param_1 + 4), (float*)(param_2 + 4));
        local_20 = *pfVar1;
        pfVar1 = std::max<float>((float*)(param_1 + 8), (float*)(param_2 + 8));
        local_1c = *pfVar1;
        pfVar1 = std::max<float>((float*)(param_1 + 12), (float*)(param_2 + 12));
        ImVec4::ImVec4(local_38, local_24, local_20, local_1c, *pfVar1);
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

    // 0x1008b2800, 224 bytes, inline, placed by debug map only (low confidence)
    // Vector4T<float> Vector4ComponentSelect<float>(Vector4T<float> const&, Vector4T<float> const&, std::array<unsigned int, Vector4T<float>::N> const&)
    /* Vector4T<float> Vector4ComponentSelect<float>(Vector4T<float>
   const&, Vector4T<float> const&, std::array<unsigned int, Vector4T<float>::N> const&)
    */

    undefined1[16] Vector4ComponentSelect<float>(Vector4T* param_1, Vector4T* param_2, array* param_3) {
        int* piVar1;
        float* pfVar2;
        Vector4T* pVVar3;
        undefined1 auVar4[16];
        ImVec4 local_48[28];
        float local_2c;
        float local_28;
        float local_24;

        piVar1 = (int*)std::array<unsigned int, 4ul>::operator[]((array<unsigned int, 4ul>*)param_3, 0);
        pVVar3 = param_2;
        if (*piVar1 == 0) {
            pVVar3 = param_1;
        }
        pfVar2 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)pVVar3, 0);
        local_2c = *pfVar2;
        piVar1 = (int*)std::array<unsigned int, 4ul>::operator[]((array<unsigned int, 4ul>*)param_3, 1);
        pVVar3 = param_2;
        if (*piVar1 == 0) {
            pVVar3 = param_1;
        }
        pfVar2 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)pVVar3, 1);
        local_28 = *pfVar2;
        piVar1 = (int*)std::array<unsigned int, 4ul>::operator[]((array<unsigned int, 4ul>*)param_3, 2);
        pVVar3 = param_2;
        if (*piVar1 == 0) {
            pVVar3 = param_1;
        }
        pfVar2 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)pVVar3, 2);
        local_24 = *pfVar2;
        piVar1 = (int*)std::array<unsigned int, 4ul>::operator[]((array<unsigned int, 4ul>*)param_3, 3);
        if (*piVar1 == 0) {
            param_2 = param_1;
        }
        pfVar2 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)param_2, 3);
        ImVec4::ImVec4(local_48, local_2c, local_28, local_24, *pfVar2);
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

    // 0x1008b2a80, 112 bytes, inline, placed by debug map only (low confidence)
    // Vector4T<float> Vector4Abs<float>(Vector4T<float> const&)
    undefined1[16] Vector4Abs<float>(Vector4T* param_1) {
        float fVar1;
        undefined1 auVar2[16];
        ImVec4 local_38[28];
        float local_1c;
        float local_18;
        float local_14;

        local_1c = (float)::abs(*(float*)param_1);
        local_18 = (float)::abs(*(float*)(param_1 + 4));
        local_14 = (float)::abs(*(float*)(param_1 + 8));
        fVar1 = (float)::abs(*(float*)(param_1 + 12));
        ImVec4::ImVec4(local_38, local_1c, local_18, local_14, fVar1);
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

    // 0x1008b2af0, 112 bytes, inline, placed by debug map only (low confidence)
    // Vector4T<float> Vector4Round<float>(Vector4T<float> const&)
    undefined1[16] Vector4Round<float>(Vector4T* param_1) {
        float fVar1;
        undefined1 auVar2[16];
        ImVec4 local_38[28];
        float local_1c;
        float local_18;
        float local_14;

        local_1c = (float)round(*(float*)param_1);
        local_18 = (float)round(*(float*)(param_1 + 4));
        local_14 = (float)round(*(float*)(param_1 + 8));
        fVar1 = (float)round(*(float*)(param_1 + 12));
        ImVec4::ImVec4(local_38, local_1c, local_18, local_14, fVar1);
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

    // 0x1008b2b60, 80 bytes, inline, placed by debug map only (low confidence)
    // Vector4T<float> operator/<float>(Vector4T<float> const&, Vector4T<float> const&)
    /* Vector4T<float> TEMPNAMEPLACEHOLDERVALUE(Vector4T<float> const&,
   Vector4T<float> const&) */

    undefined1[16] operator/(Vector4T * param_1, Vector4T * param_2) {
        undefined1 auVar1[16];
        ImVec4 local_18[16];

        ImVec4::ImVec4(local_18, *(float*)param_1 / *(float*)param_2, *(float*)(param_1 + 4) / *(float*)(param_2 + 4),
                       *(float*)(param_1 + 8) / *(float*)(param_2 + 8),
                       *(float*)(param_1 + 12) / *(float*)(param_2 + 12));
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
    // 0x1008b2040, 128 bytes, inline, placed by debug map only (low confidence)
    // eastl::string ToString<eastl::string, int>(int const&, unsigned int)
    jag* ToString<eastl::string, int>(int* param_1, uint param_2) {
        allocator local_70[8];
        char local_68[64];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        ToText(local_68, 64, *param_1, param_2);
        eastl::allocator::allocator(local_70, "EASTL basic_string");
        new (this) eastl::string(local_68, local_70);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

} // namespace jag

namespace jag::graphics {
    // 0x1008b2510, 416 bytes, placed by debug map only (low confidence)
    // CreateAABBPoints(std::array<math::Vector4T<float>, 8ul>&, math::Vector4T<float> const&, math::Vector4T<float> const&)
    /* CreateAABBPoints(std::array<math::Vector4T<float>, 8ul>&,
   math::Vector4T<float> const&, math::Vector4T<float> const&) */

    void CreateAABBPoints(array* param_1, Vector4T* param_2, Vector4T* param_3) {
        Vector4T* pVVar1;
        Rect<float>* this;
        ulong uVar2;
        undefined8 uVar3;
        ImVec4 local_d8[16];
        ImVec4 local_c8[16];
        ImVec4 local_b8[16];
        ImVec4 local_a8[16];
        ImVec4 local_98[16];
        ImVec4 local_88[16];
        ImVec4 local_78[16];
        ImVec4 local_68[16];
        undefined8 local_58;
        undefined4 uStack_50;
        undefined4 uStack_4c;
        undefined8 local_48;
        undefined4 uStack_40;
        undefined4 uStack_3c;

        ImVec4::ImVec4(local_d8, 1.0, 1.0, -1.0, 1.0);
        ImVec4::ImVec4(local_c8, -1.0, 1.0, -1.0, 1.0);
        ImVec4::ImVec4(local_b8, 1.0, -1.0, -1.0, 1.0);
        ImVec4::ImVec4(local_a8, -1.0, -1.0, -1.0, 1.0);
        ImVec4::ImVec4(local_98, 1.0, 1.0, 1.0, 1.0);
        ImVec4::ImVec4(local_88, -1.0, 1.0, 1.0, 1.0);
        ImVec4::ImVec4(local_78, 1.0, -1.0, 1.0, 1.0);
        ImVec4::ImVec4(local_68, -1.0, -1.0, 1.0, 1.0);
        uVar2 = 0;
        do {
            pVVar1 = (Vector4T*)std::array<math::Vector4T<float>, 8ul>::operator[](
                (array<math::Vector4T<float>, 8ul>*)local_d8, uVar2);
            uVar3 = math::operator*(pVVar1, param_3);
            uStack_40 = 3212836864;
            uStack_3c = 0;
            local_48 = uVar3;
            uVar3 = math::operator+((Vector4T*)&local_48, param_2);
            uStack_50 = 3212836864;
            uStack_4c = 0;
            local_58 = uVar3;
            this = (Rect<float>*)std::array<math::Vector4T<float>, 8ul>::operator[](
                (array<math::Vector4T<float>, 8ul>*)param_1, uVar2);
            math::Rect<float>::operator=(this, (Rect*)&local_58);
            uVar2 = uVar2 + 1;
        } while (uVar2 != 8);
    }

} // namespace jag::graphics

// 0x1008b2bb0, 16 bytes, placed by debug map only (low confidence)
// pow(float, float)
void pow(float param_1, float param_2) {
    _powf();
}
