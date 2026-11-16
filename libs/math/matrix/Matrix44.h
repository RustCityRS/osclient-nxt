// libs/math/matrix/Matrix44.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::math {
    template <typename...> // 1 instantiations, e.g. <float>
    class Matrix44T {
    public:
        Matrix44T(Matrix33T<float> const&, Vector3T<float> const&);
        Matrix44T(float, float, float, float, float, float, float, float, float, float, float, float, float, float,
                  float, float);
        Matrix44T<float>* Set(Matrix33T<float> const&, Vector3T<float> const&);
        Matrix44T(Vector4T<float>&&, Vector4T<float>&&, Vector4T<float>&&, Vector4T<float>&&);
        Matrix44T<float>* Invert(float*);
        Matrix44T<float>* operator()(unsigned int) const;
        Matrix44T(std::array<float, 16ul> const&);
        ToEulerAnglesXYZ() const;
        ExtractScale() const;
        Matrix44T<float>* SetToIdentity();
        void SetToDiagonal(Vector3T<float> const&);
        Matrix44T<float>* Set(Matrix44T<float> const&);
        operator Matrix43T<float><float>() const;
        TransformVector(Vector3T<float> const&) const;
        void SetToDiagonal(float, float, float, float);
        Matrix44T(QuaternionT<float> const&, Vector3T<float> const&);
        Matrix44T<float>* Set(QuaternionT<float> const&, Vector3T<float> const&);
        Matrix44T<float>* ApplyScaling(Vector3T<float> const&);
        Matrix44T(QuaternionT<float> const&, Vector3T<float> const&, Vector3T<float> const&);
        Matrix44T(Matrix43T<float> const&);
        Matrix44T<float>* Set(QuaternionT<float> const&, Vector3T<float> const&, Vector3T<float> const&);
        void operator*=(Matrix33T<float> const&);
        GetDiagonal() const;
        Matrix44T<float>* operator=(Matrix44T<float>&&);
        Matrix44T<float>* Set(float, float, float, float, float, float, float, float, float, float, float, float, float,
                              float, float, float);
        Matrix44T<float>* operator*=(float);
        TransformPoint(Vector3T<float> const&) const;
        Matrix44T<float>* Scale(Vector3T<float> const&);
        Matrix44T<float>* Translate(Vector3T<float> const&);
        Matrix44T<float>* SetRot(Matrix33T<float> const&);
        Matrix44T<float>* SetPos(Vector3T<float> const&);
        void hash() const;
        Matrix44T<float>* operator[](unsigned int) const;
        Matrix44T<float>* operator*=(Matrix44T<float> const&);
        void GetPos() const;
        Matrix44T<float>* GetRot() const;
        Matrix44T();
        Matrix44T<float>* operator[](unsigned int);
        static Matrix44T<float> /* 64 bytes */
            ZERO; // = Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
        static Matrix44T<float> /* 64 bytes */
            IDENTITY; // = Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0)

        // data members, from how the methods use this: 56 bytes
        char _unknown_0[56];
    };

    // 0x100f37230, 64 bytes, __data; set at startup by ___cxx_global_var_init.223
    Matrix44T<float> Matrix44T<float>::ZERO =
        Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);

    // 0x100f37280, 64 bytes, __data; set at startup by ___cxx_global_var_init.225
    Matrix44T<float> Matrix44T<float>::IDENTITY =
        Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);

    // 0x10005a270, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.223
    void ___cxx_global_var_init_223() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10005a310, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.225
    void ___cxx_global_var_init_225() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10017a120, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Matrix44T<float>::Matrix44T(Matrix33T<float> const&, Vector3T<float> const&): jumps straight to the base-object constructor

    // 0x1001df280, 64 bytes, inline, placed by class header (inline)
    // Matrix44T<float>::operator()(unsigned int) const
    /* Matrix44T<float>::TEMPNAMEPLACEHOLDERVALUE(unsigned int) const */

    Matrix44T<float>* Matrix44T<float>::operator()(uint param_1) {
        if (15 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("iElem < (M * N)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/matrix/Matrix44.inl",
                      517, (char*)0);
        }
        return this + (ulong)param_1 * 4;
    }

    // 0x100323ce0, 80 bytes, inline, placed by class header (inline)
    // Matrix44T<float>::SetToIdentity()
    Matrix44T<float>* Matrix44T<float>::SetToIdentity() {
        Set(this, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
        return this;
    }

    // 0x100350260, 112 bytes, inline, placed by class header (inline)
    // Matrix44T<float>::SetToDiagonal(Vector3T<float> const&)
    void Matrix44T<float>::SetToDiagonal(Vector3T* param_1) {
        float fVar1;
        float fVar2;
        vector* pvVar3;
        float* pfVar4;

        pvVar3 = param_1->SSOBeginPtr(param_1);
        fVar1 = *(float*)pvVar3;
        pfVar4 = (float*)param_1->y();
        fVar2 = *pfVar4;
        pfVar4 = (float*)param_1->second();
        SetToDiagonal(fVar1, fVar2, *pfVar4, 1.0);
    }

    // 0x1003502d0, 128 bytes, inline, placed by class header (inline)
    // Matrix44T<float>::Set(Matrix44T<float> const&)
    Matrix44T<float>* Matrix44T<float>::Set(Matrix44T* param_1) {
        Rect* pRVar1;

        pRVar1 = (Rect*)operator[]((Matrix44T<float>*)param_1, 0);
        Rect<float>::operator=((Rect<float>*)this, pRVar1);
        pRVar1 = (Rect*)operator[]((Matrix44T<float>*)param_1, 1);
        Rect<float>::operator=((Rect<float>*)(this + 16), pRVar1);
        pRVar1 = (Rect*)operator[]((Matrix44T<float>*)param_1, 2);
        Rect<float>::operator=((Rect<float>*)(this + 32), pRVar1);
        pRVar1 = (Rect*)operator[]((Matrix44T<float>*)param_1, 3);
        Rect<float>::operator=((Rect<float>*)(this + 48), pRVar1);
        return this;
    }

    // 0x10036f8d0, 448 bytes, inline, placed by class header (inline)
    // Matrix44T<float>::TransformVector(Vector3T<float> const&) const
    undefined8 Matrix44T<float>::TransformVector(Vector3T* param_1) {
        Vector4T<float>* this_00;
        Vector4T<float>* this_01;
        vector* pvVar1;
        float* pfVar2;
        undefined8 local_50[2];
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        local_40 = *(float*)pvVar1;
        pfVar2 = (float*)param_1->y();
        local_38 = *pfVar2;
        pfVar2 = (float*)param_1->second();
        local_3c = *pfVar2;
        new (local_50) Vector3T<int>();
        pfVar2 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)this, 0);
        local_34 = *pfVar2 * local_40;
        this_00 = (Vector4T<float>*)(this + 16);
        pfVar2 = (float*)Vector4T<float>::operator[](this_00, 0);
        local_34 = *pfVar2 * local_38 + local_34;
        this_01 = (Vector4T<float>*)(this + 32);
        pfVar2 = (float*)Vector4T<float>::operator[](this_01, 0);
        local_34 = *pfVar2 * local_3c + local_34;
        pfVar2 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)local_50, 0);
        *pfVar2 = local_34;
        pfVar2 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)this, 1);
        local_34 = *pfVar2 * local_40;
        pfVar2 = (float*)Vector4T<float>::operator[](this_00, 1);
        local_34 = *pfVar2 * local_38 + local_34;
        pfVar2 = (float*)Vector4T<float>::operator[](this_01, 1);
        local_34 = *pfVar2 * local_3c + local_34;
        pfVar2 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)local_50, 1);
        *pfVar2 = local_34;
        pfVar2 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)this, 2);
        local_40 = local_40 * *pfVar2;
        pfVar2 = (float*)Vector4T<float>::operator[](this_00, 2);
        local_38 = local_38 * *pfVar2 + local_40;
        pfVar2 = (float*)Vector4T<float>::operator[](this_01, 2);
        local_3c = local_3c * *pfVar2 + local_38;
        pfVar2 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)local_50, 2);
        *pfVar2 = local_3c;
        return local_50[0];
    }

    // 0x1007dc740, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Matrix44T<float>::Matrix44T(Matrix43T<float> const&): jumps straight to the base-object constructor

    // 0x1007fb670, 144 bytes, base-object constructor, inline, placed by class header (inline)
    // Matrix44T<float>::Matrix44T(Matrix43T<float> const&)
    void Matrix44T<float>::Matrix44T(Matrix43T* param_1) {
        long lVar1;

        lVar1 = 0;
        do {
            new ((this + lVar1)) Vector4T<float>();
            lVar1 = lVar1 + 16;
        } while (lVar1 != 64);
        Set(param_1, 0.0);
        ((this + 16))->Set((Vector3T*)(param_1 + 12), 0.0);
        ((this + 32))->Set((Vector3T*)(param_1 + 24), 0.0);
        ((this + 48))->Set((Vector3T*)(param_1 + 36), 1.0);
    }

    // 0x100816440, 64 bytes, inline, placed by class header (inline)
    // Matrix44T<float>::operator*=(Matrix33T<float> const&)
    /* Matrix44T<float>::TEMPNAMEPLACEHOLDERVALUE(Matrix33T<float> const&) */

    void Matrix44T<float>::operator*=(Matrix33T* param_1) {
        Matrix33T* in_RCX;
        Matrix44T local_58;

        math::operator*(&local_58, (math*)this, (Matrix44T*)param_1, in_RCX);
        operator=(this, &local_58);
    }

    // 0x1008ac080, 144 bytes, inline, placed by class header (inline)
    // Matrix44T<float>::GetDiagonal() const
    undefined1[16] Matrix44T<float>::GetDiagonal() {
        float* pfVar1;
        undefined1 auVar2[16];
        ImVec4 local_38[28];
        float local_1c;
        float local_18;
        float local_14;

        pfVar1 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)this, 0);
        local_1c = *pfVar1;
        pfVar1 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)(this + 16), 1);
        local_18 = *pfVar1;
        pfVar1 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)(this + 32), 2);
        local_14 = *pfVar1;
        pfVar1 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)(this + 48), 3);
        ImVec4::ImVec4(local_38, local_1c, local_18, local_14, *pfVar1);
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

    // 0x1008e06d0, 80 bytes, inline, placed by class header (inline)
    // Matrix44T<float>::operator=(Matrix44T<float>&&)
    /* Matrix44T<float>::TEMPNAMEPLACEHOLDERVALUE(Matrix44T<float> const&) */

    Matrix44T<float>* Matrix44T<float>::operator=(Matrix44T* param_1) {
        long lVar1;

        lVar1 = 0;
        do {
            Rect<float>::operator=((Rect<float>*)(this + lVar1), (Rect*)(&param_1->field_0 + lVar1));
            lVar1 = lVar1 + 16;
        } while (lVar1 != 64);
        return this;
    }

    // 0x100979ea0, 528 bytes, inline, placed by class header (inline)
    // Matrix44T<float>::TransformPoint(Vector3T<float> const&) const
    undefined8 Matrix44T<float>::TransformPoint(Vector3T* param_1) {
        Vector4T<float>* this_00;
        Vector4T<float>* this_01;
        Vector4T<float>* this_02;
        vector* pvVar1;
        float* pfVar2;
        undefined8 local_50[2];
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        local_40 = *(float*)pvVar1;
        pfVar2 = (float*)param_1->y();
        local_3c = *pfVar2;
        pfVar2 = (float*)param_1->second();
        local_38 = *pfVar2;
        new (local_50) Vector3T<int>();
        pfVar2 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)this, 0);
        local_34 = *pfVar2 * local_40;
        this_00 = (Vector4T<float>*)(this + 16);
        pfVar2 = (float*)Vector4T<float>::operator[](this_00, 0);
        local_34 = *pfVar2 * local_3c + local_34;
        this_01 = (Vector4T<float>*)(this + 32);
        pfVar2 = (float*)Vector4T<float>::operator[](this_01, 0);
        local_34 = *pfVar2 * local_38 + local_34;
        this_02 = (Vector4T<float>*)(this + 48);
        pfVar2 = (float*)Vector4T<float>::operator[](this_02, 0);
        local_34 = local_34 + *pfVar2;
        pfVar2 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)local_50, 0);
        *pfVar2 = local_34;
        pfVar2 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)this, 1);
        local_34 = *pfVar2 * local_40;
        pfVar2 = (float*)Vector4T<float>::operator[](this_00, 1);
        local_34 = *pfVar2 * local_3c + local_34;
        pfVar2 = (float*)Vector4T<float>::operator[](this_01, 1);
        local_34 = *pfVar2 * local_38 + local_34;
        pfVar2 = (float*)Vector4T<float>::operator[](this_02, 1);
        local_34 = local_34 + *pfVar2;
        pfVar2 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)local_50, 1);
        *pfVar2 = local_34;
        pfVar2 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)this, 2);
        local_40 = local_40 * *pfVar2;
        pfVar2 = (float*)Vector4T<float>::operator[](this_00, 2);
        local_3c = local_3c * *pfVar2 + local_40;
        pfVar2 = (float*)Vector4T<float>::operator[](this_01, 2);
        local_38 = local_38 * *pfVar2 + local_3c;
        pfVar2 = (float*)Vector4T<float>::operator[](this_02, 2);
        local_38 = local_38 + *pfVar2;
        pfVar2 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)local_50, 2);
        *pfVar2 = local_38;
        return local_50[0];
    }

    // 0x100986070, 128 bytes, inline, placed by class header (inline)
    // Matrix44T<float>::Scale(Vector3T<float> const&)
    Matrix44T<float>* Matrix44T<float>::Scale(Vector3T* param_1) {
        float fVar1;
        float* pfVar2;
        uint uVar3;
        long lVar4;

        lVar4 = 0;
        do {
            uVar3 = 0;
            do {
                pfVar2 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, uVar3);
                fVar1 = *pfVar2;
                pfVar2 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)(this + lVar4 * 16), uVar3);
                *pfVar2 = fVar1 * *pfVar2;
                uVar3 = uVar3 + 1;
            } while (uVar3 != 3);
            lVar4 = lVar4 + 1;
        } while (lVar4 != 4);
        return this;
    }

    // 0x1009860f0, 656 bytes, inline, placed by class header (inline)
    // Matrix44T<float>::Translate(Vector3T<float> const&)
    Matrix44T<float>* Matrix44T<float>::Translate(Vector3T* param_1) {
        Vector4T<float>* this_00;
        Vector4T<float>* this_01;
        Vector4T<float>* this_02;
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        vector* pvVar8;
        float* pfVar9;

        pvVar8 = param_1->SSOBeginPtr(param_1);
        fVar1 = *(float*)pvVar8;
        pfVar9 = (float*)param_1->y();
        fVar2 = *pfVar9;
        pfVar9 = (float*)param_1->second();
        fVar3 = *pfVar9;
        pfVar9 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)this, 0);
        fVar4 = *pfVar9;
        this_00 = (Vector4T<float>*)(this + 16);
        pfVar9 = (float*)Vector4T<float>::operator[](this_00, 0);
        fVar5 = *pfVar9;
        this_01 = (Vector4T<float>*)(this + 32);
        pfVar9 = (float*)Vector4T<float>::operator[](this_01, 0);
        fVar6 = *pfVar9;
        this_02 = (Vector4T<float>*)(this + 48);
        pfVar9 = (float*)Vector4T<float>::operator[](this_02, 0);
        fVar7 = *pfVar9;
        pfVar9 = (float*)Vector4T<float>::operator[](this_02, 0);
        *pfVar9 = fVar6 * fVar3 + fVar5 * fVar2 + fVar4 * fVar1 + fVar7;
        pfVar9 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)this, 1);
        fVar4 = *pfVar9;
        pfVar9 = (float*)Vector4T<float>::operator[](this_00, 1);
        fVar5 = *pfVar9;
        pfVar9 = (float*)Vector4T<float>::operator[](this_01, 1);
        fVar6 = *pfVar9;
        pfVar9 = (float*)Vector4T<float>::operator[](this_02, 1);
        fVar7 = *pfVar9;
        pfVar9 = (float*)Vector4T<float>::operator[](this_02, 1);
        *pfVar9 = fVar6 * fVar3 + fVar5 * fVar2 + fVar4 * fVar1 + fVar7;
        pfVar9 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)this, 2);
        fVar4 = *pfVar9;
        pfVar9 = (float*)Vector4T<float>::operator[](this_00, 2);
        fVar5 = *pfVar9;
        pfVar9 = (float*)Vector4T<float>::operator[](this_01, 2);
        fVar6 = *pfVar9;
        pfVar9 = (float*)Vector4T<float>::operator[](this_02, 2);
        fVar7 = *pfVar9;
        pfVar9 = (float*)Vector4T<float>::operator[](this_02, 2);
        *pfVar9 = fVar6 * fVar3 + fVar5 * fVar2 + fVar4 * fVar1 + fVar7;
        pfVar9 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)this, 3);
        fVar4 = *pfVar9;
        pfVar9 = (float*)Vector4T<float>::operator[](this_00, 3);
        fVar5 = *pfVar9;
        pfVar9 = (float*)Vector4T<float>::operator[](this_01, 3);
        fVar6 = *pfVar9;
        pfVar9 = (float*)Vector4T<float>::operator[](this_02, 3);
        fVar7 = *pfVar9;
        pfVar9 = (float*)Vector4T<float>::operator[](this_02, 3);
        *pfVar9 = fVar3 * fVar6 + fVar2 * fVar5 + fVar1 * fVar4 + fVar7;
        return this;
    }

    // 0x1009dcb30, 64 bytes, inline, placed by class header (inline)
    // Matrix44T<float>::SetRot(Matrix33T<float> const&)
    Matrix44T<float>* Matrix44T<float>::SetRot(Matrix33T* param_1) {
        SetXYZ(param_1);
        ((this + 16))->SetXYZ((Vector3T*)(param_1 + 12));
        ((this + 32))->SetXYZ((Vector3T*)(param_1 + 24));
        return this;
    }

    // 0x1009dcb70, 32 bytes, inline, placed by class header (inline)
    // Matrix44T<float>::SetPos(Vector3T<float> const&)
    Matrix44T<float>* Matrix44T<float>::SetPos(Vector3T* param_1) {
        ((this + 48))->SetXYZ(param_1);
        return this;
    }

    // 0x1009dd780, 96 bytes, inline, placed by class header (inline)
    // Matrix44T<float>::hash() const
    void Matrix44T<float>::hash() {
        ulong local_30;
        ulong local_28;
        ulong local_20;
        ulong local_18;

        local_30 = hash();
        local_28 = ((this + 16))->hash();
        local_20 = ((this + 32))->hash();
        local_18 = ((this + 48))->hash();
        hash_val<unsigned long, unsigned long, unsigned long, unsigned long>(&local_30, &local_28, &local_20,
                                                                             &local_18);
    }

    // 0x100c6c410, 32 bytes, inline, placed by class header (inline)
    // Matrix44T<float>::operator*=(Matrix44T<float> const&)
    /* Matrix44T<float>::TEMPNAMEPLACEHOLDERVALUE(Matrix44T<float> const&) */

    Matrix44T<float>* Matrix44T<float>::operator*=(Matrix44T* param_1) {
        internal::MatrixMultSSEInPlace((Matrix44T*)this, param_1);
        return this;
    }

    // 0x100c6c430, 16 bytes, inline, placed by class header (inline)
    // Matrix44T<float>::GetPos() const
    void Matrix44T<float>::GetPos() {
        ((this + 48))->GetXYZ();
    }

    // 0x100c6c440, 288 bytes, inline, placed by class header (inline)
    // Matrix44T<float>::GetRot() const
    Matrix44T<float>* Matrix44T<float>::GetRot() {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float* pfVar9;
        Vector4T<float>* pVVar10;
        Vector4T<float>* in_RSI;

        pfVar9 = (float*)Vector4T<float>::operator[](in_RSI, 0);
        fVar1 = *pfVar9;
        pfVar9 = (float*)Vector4T<float>::operator[](in_RSI, 1);
        fVar2 = *pfVar9;
        pfVar9 = (float*)Vector4T<float>::operator[](in_RSI, 2);
        fVar3 = *pfVar9;
        pVVar10 = in_RSI + 16;
        pfVar9 = (float*)Vector4T<float>::operator[](pVVar10, 0);
        fVar4 = *pfVar9;
        pfVar9 = (float*)Vector4T<float>::operator[](pVVar10, 1);
        fVar5 = *pfVar9;
        pfVar9 = (float*)Vector4T<float>::operator[](pVVar10, 2);
        fVar6 = *pfVar9;
        pVVar10 = in_RSI + 32;
        pfVar9 = (float*)Vector4T<float>::operator[](pVVar10, 0);
        fVar7 = *pfVar9;
        pfVar9 = (float*)Vector4T<float>::operator[](pVVar10, 1);
        fVar8 = *pfVar9;
        pfVar9 = (float*)Vector4T<float>::operator[](pVVar10, 2);
        new (this) Matrix33T<float>(fVar1, fVar2, fVar3, fVar4, fVar5, fVar6, fVar7, fVar8, *pfVar9);
        return this;
    }

    // 0x100c6d3d0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Matrix44T<float>::Matrix44T(): jumps straight to the base-object constructor

    // 0x100c6d420, 48 bytes, base-object constructor, inline, placed by class header (inline)
    // Matrix44T<float>::Matrix44T()
    void Matrix44T<float>::Matrix44T() {
        long lVar1;

        lVar1 = 0;
        do {
            new ((this + lVar1)) Vector4T<float>();
            lVar1 = lVar1 + 16;
        } while (lVar1 != 64);
    }

    // 0x100c6e410, 80 bytes, inline, placed by class header (inline)
    // Matrix44T<float>::operator[](unsigned int)
    Matrix44T<float>* Matrix44T<float>::operator[](uint param_1) {
        if (4 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("iRow <= M",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/matrix/Matrix44.inl",
                      495, (char*)0);
        }
        return this + (ulong)param_1 * 16;
    }

} // namespace jag::math
