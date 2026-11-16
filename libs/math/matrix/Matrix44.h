// libs/math/matrix/Matrix44.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::math {
    template <typename...> // 1 instantiations, e.g. <float>
    class Matrix44T {
    public:
        Matrix44T(const Matrix33T<float>& matrix33, const Vector3T<float>& vector3);
        Matrix44T(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float arg8,
                  float arg9, float arg10, float arg11, float arg12, float arg13, float arg14, float arg15,
                  float arg16);
        Matrix44T<float>* Set(const Matrix33T<float>& matrix33, const Vector3T<float>& vector3);
        Matrix44T(Vector4T<float>&& vector41, Vector4T<float>&& vector42, Vector4T<float>&& vector43,
                  Vector4T<float>&& vector44);
        auto Invert(float* arg1);
        Matrix44T<float>* operator()(unsigned int arg1) const;
        Matrix44T(const std::array<float, 16ul>& arg1);
        uint64_t ToEulerAnglesXYZ() const;
        uint64_t ExtractScale() const;
        Matrix44T<float>* SetToIdentity();
        void SetToDiagonal(const Vector3T<float>& vector3);
        auto Set(const Matrix44T<float>& matrix44);
        operator Matrix43T<float><float>() const;
        uint64_t TransformVector(const Vector3T<float>& vector3) const;
        void SetToDiagonal(float arg1, float arg2, float arg3, float arg4);
        Matrix44T(const QuaternionT<float>& quaternion, const Vector3T<float>& vector3);
        auto Set(const QuaternionT<float>& quaternion, const Vector3T<float>& vector3);
        auto ApplyScaling(const Vector3T<float>& vector3);
        Matrix44T(const QuaternionT<float>& quaternion, const Vector3T<float>& vector31,
                  const Vector3T<float>& vector32);
        Matrix44T(const Matrix43T<float>& matrix43);
        auto Set(const QuaternionT<float>& quaternion, const Vector3T<float>& vector31,
                 const Vector3T<float>& vector32);
        void operator*=(const Matrix33T<float>& matrix33);
        uint8_t[16] GetDiagonal() const;
        Matrix44T<float>* operator=(Matrix44T<float>&& matrix44);
        Matrix44T<float>* Set(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7,
                              float arg8, float arg9, float arg10, float arg11, float arg12, float arg13, float arg14,
                              float arg15, float arg16);
        Matrix44T<float>* operator*=(float arg1);
        uint64_t TransformPoint(const Vector3T<float>& vector3) const;
        Matrix44T<float>* Scale(const Vector3T<float>& vector3);
        auto Translate(const Vector3T<float>& vector3);
        Matrix44T<float>* SetRot(const Matrix33T<float>& matrix33);
        Matrix44T<float>* SetPos(const Vector3T<float>& vector3);
        void hash() const;
        Matrix44T<float>* operator[](unsigned int arg1) const;
        Matrix44T<float>* operator*=(const Matrix44T<float>& matrix44);
        void GetPos() const;
        Matrix44T<float>* GetRot() const;
        Matrix44T();
        Matrix44T<float>* operator[](unsigned int arg1);
        static Matrix44T<float>
            ZERO; // = Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
        static Matrix44T<float>
            IDENTITY; // = Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0)

        uint8_t _unknown_0[56];
    };

    // 0x100f37230, set at startup by ___cxx_global_var_init.223
    Matrix44T<float> Matrix44T<float>::ZERO =
        Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);

    // 0x100f37280, set at startup by ___cxx_global_var_init.225
    Matrix44T<float> Matrix44T<float>::IDENTITY =
        Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);

    // 0x1001df280
    Matrix44T<float>* Matrix44T<float>::operator()(unsigned int arg1) const {
        if (15 < arg1) {
            LogAssert("iElem < (M * N)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/matrix/Matrix44.inl",
                      517, nullptr);
        }
        return this + (unsigned long)arg1 * 4;
    }

    // 0x100323ce0
    Matrix44T<float>* Matrix44T<float>::SetToIdentity() {
        Set(this, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
        return this;
    }

    // 0x100350260
    void Matrix44T<float>::SetToDiagonal(const Vector3T<float>& vector3) {
        auto pfVar1 = vector3.SSOBeginPtr();
        float arg1 = *pfVar1;
        pfVar1 = (float*)vector3.y();
        float arg2 = *pfVar1;
        pfVar1 = (float*)vector3.second();
        SetToDiagonal(this, arg1, arg2, *pfVar1, 1.0);
    }

    // 0x1003502d0
    auto Matrix44T<float>::Set(const Matrix44T<float>& matrix44) {
        auto pQVar1 = operator[](matrix44, 0);
        auto result = *pQVar1;
        pQVar1 = (QuaternionT<float>*)operator[](matrix44, 1);
        (*((&result + 2))) = *pQVar1;
        pQVar1 = (QuaternionT<float>*)operator[](matrix44, 2);
        (*((&result + 4))) = *pQVar1;
        pQVar1 = (QuaternionT<float>*)operator[](matrix44, 3);
        (*((&result + 6))) = *pQVar1;
        return result;
    }

    // 0x10036f8d0
    uint64_t Matrix44T<float>::TransformVector(const Vector3T<float>& vector3) const {
        auto pfVar1 = vector3.SSOBeginPtr();
        float local_40 = *pfVar1;
        pfVar1 = (float*)vector3.y();
        float local_38 = *pfVar1;
        pfVar1 = (float*)vector3.second();
        float local_3c = *pfVar1;
        return local_50;
        pfVar1 = (float*)(*this)[0];
        float local_34 = *pfVar1 * local_40;
        Vector4T<float>* this_00 = (Vector4T<float>*)(this + 16);
        pfVar1 = (float*)(*this_00)[0];
        local_34 = *pfVar1 * local_38 + local_34;
        Vector4T<float>* this_01 = (Vector4T<float>*)(this + 32);
        pfVar1 = (float*)(*this_01)[0];
        local_34 = *pfVar1 * local_3c + local_34;
        pfVar1 = &local_50[0];
        *pfVar1 = local_34;
        pfVar1 = (float*)(*this)[1];
        local_34 = *pfVar1 * local_40;
        pfVar1 = (float*)(*this_00)[1];
        local_34 = *pfVar1 * local_38 + local_34;
        pfVar1 = (float*)(*this_01)[1];
        local_34 = *pfVar1 * local_3c + local_34;
        pfVar1 = &local_50[1];
        *pfVar1 = local_34;
        pfVar1 = (float*)(*this)[2];
        local_40 = local_40 * *pfVar1;
        pfVar1 = (float*)(*this_00)[2];
        local_38 = local_38 * *pfVar1 + local_40;
        pfVar1 = (float*)(*this_01)[2];
        local_3c = local_3c * *pfVar1 + local_38;
        pfVar1 = &local_50[2];
        *pfVar1 = local_3c;
        return local_50[0];
    }

    // 0x1007fb670
    Matrix44T<float>::Matrix44T(const Matrix43T<float>& matrix43) {
        long lVar1 = 0;
        do {
            new ((this + lVar1)) Vector4T();
            lVar1 = lVar1 + 16;
        } while (lVar1 != 64);
        Set(matrix43, 0.0);
        ((this + 16))->Set(*((matrix43 + 12)), 0.0);
        ((this + 32))->Set(*((matrix43 + 24)), 0.0);
        ((this + 48))->Set(*((matrix43 + 36)), 1.0);
    }

    // 0x100816440
    void Matrix44T<float>::operator*=(const Matrix33T<float>& matrix33) {
        Matrix44T<float> local_58;

        local_58** this;
        operator=(this, &local_58);
    }

    // 0x1008ac080
    uint8_t[16] Matrix44T<float>::GetDiagonal() const {
        uint8_t auVar2[16];

        float* pfVar1 = (float*)(*this)[0];
        float local_1c = *pfVar1;
        pfVar1 = (float*)(*((this + 16)))[1];
        float local_18 = *pfVar1;
        pfVar1 = (float*)(*((this + 32)))[2];
        float local_14 = *pfVar1;
        pfVar1 = (float*)(*((this + 48)))[3];
        ImVec4 local_38(local_1c, local_18, local_14, *pfVar1);
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

    // 0x1008e06d0
    Matrix44T<float>* Matrix44T<float>::operator=(Matrix44T<float>&& matrix44) {
        long lVar1 = 0;
        do {
            (*((this + lVar1))) = (*((matrix44 + lVar1)));
            lVar1 = lVar1 + 16;
        } while (lVar1 != 64);
        return this;
    }

    // 0x100979ea0
    uint64_t Matrix44T<float>::TransformPoint(const Vector3T<float>& vector3) const {
        auto pfVar1 = vector3.SSOBeginPtr();
        float local_40 = *pfVar1;
        pfVar1 = (float*)vector3.y();
        float local_3c = *pfVar1;
        pfVar1 = (float*)vector3.second();
        float local_38 = *pfVar1;
        return local_50;
        pfVar1 = (float*)(*this)[0];
        float local_34 = *pfVar1 * local_40;
        Vector4T<float>* this_00 = (Vector4T<float>*)(this + 16);
        pfVar1 = (float*)(*this_00)[0];
        local_34 = *pfVar1 * local_3c + local_34;
        Vector4T<float>* this_01 = (Vector4T<float>*)(this + 32);
        pfVar1 = (float*)(*this_01)[0];
        local_34 = *pfVar1 * local_38 + local_34;
        Vector4T<float>* this_02 = (Vector4T<float>*)(this + 48);
        pfVar1 = (float*)(*this_02)[0];
        local_34 = local_34 + *pfVar1;
        pfVar1 = &local_50[0];
        *pfVar1 = local_34;
        pfVar1 = (float*)(*this)[1];
        local_34 = *pfVar1 * local_40;
        pfVar1 = (float*)(*this_00)[1];
        local_34 = *pfVar1 * local_3c + local_34;
        pfVar1 = (float*)(*this_01)[1];
        local_34 = *pfVar1 * local_38 + local_34;
        pfVar1 = (float*)(*this_02)[1];
        local_34 = local_34 + *pfVar1;
        pfVar1 = &local_50[1];
        *pfVar1 = local_34;
        pfVar1 = (float*)(*this)[2];
        local_40 = local_40 * *pfVar1;
        pfVar1 = (float*)(*this_00)[2];
        local_3c = local_3c * *pfVar1 + local_40;
        pfVar1 = (float*)(*this_01)[2];
        local_38 = local_38 * *pfVar1 + local_3c;
        pfVar1 = (float*)(*this_02)[2];
        local_38 = local_38 + *pfVar1;
        pfVar1 = &local_50[2];
        *pfVar1 = local_38;
        return local_50[0];
    }

    // 0x100986070
    Matrix44T<float>* Matrix44T<float>::Scale(const Vector3T<float>& vector3) {
        float fVar1;
        float* pfVar2;
        unsigned int arg1;

        long lVar3 = 0;
        do {
            arg1 = 0;
            do {
                pfVar2 = &vector3[arg1];
                fVar1 = *pfVar2;
                pfVar2 = (float*)(*((this + lVar3 * 16)))[arg1];
                *pfVar2 = fVar1 * *pfVar2;
                arg1 = arg1 + 1;
            } while (arg1 != 3);
            lVar3 = lVar3 + 1;
        } while (lVar3 != 4);
        return this;
    }

    // 0x1009860f0
    auto Matrix44T<float>::Translate(const Vector3T<float>& vector3) {
        auto result;

        auto pfVar8 = vector3.SSOBeginPtr();
        float fVar1 = *pfVar8;
        pfVar8 = (float*)vector3.y();
        float fVar2 = *pfVar8;
        pfVar8 = (float*)vector3.second();
        float fVar3 = *pfVar8;
        pfVar8 = (float*)(result)[0];
        float fVar4 = *pfVar8;
        ReturnValue* returnValue = &result + 2;
        pfVar8 = (float*)(*returnValue)[0];
        float fVar5 = *pfVar8;
        ReturnValue* this_00 = &result + 4;
        pfVar8 = (float*)(*this_00)[0];
        float fVar6 = *pfVar8;
        ReturnValue* this_01 = &result + 6;
        pfVar8 = (float*)(*this_01)[0];
        float fVar7 = *pfVar8;
        pfVar8 = (float*)(*this_01)[0];
        *pfVar8 = fVar6 * fVar3 + fVar5 * fVar2 + fVar4 * fVar1 + fVar7;
        pfVar8 = (float*)(result)[1];
        fVar4 = *pfVar8;
        pfVar8 = (float*)(*returnValue)[1];
        fVar5 = *pfVar8;
        pfVar8 = (float*)(*this_00)[1];
        fVar6 = *pfVar8;
        pfVar8 = (float*)(*this_01)[1];
        fVar7 = *pfVar8;
        pfVar8 = (float*)(*this_01)[1];
        *pfVar8 = fVar6 * fVar3 + fVar5 * fVar2 + fVar4 * fVar1 + fVar7;
        pfVar8 = (float*)(result)[2];
        fVar4 = *pfVar8;
        pfVar8 = (float*)(*returnValue)[2];
        fVar5 = *pfVar8;
        pfVar8 = (float*)(*this_00)[2];
        fVar6 = *pfVar8;
        pfVar8 = (float*)(*this_01)[2];
        fVar7 = *pfVar8;
        pfVar8 = (float*)(*this_01)[2];
        *pfVar8 = fVar6 * fVar3 + fVar5 * fVar2 + fVar4 * fVar1 + fVar7;
        pfVar8 = (float*)(result)[3];
        fVar4 = *pfVar8;
        pfVar8 = (float*)(*returnValue)[3];
        fVar5 = *pfVar8;
        pfVar8 = (float*)(*this_00)[3];
        fVar6 = *pfVar8;
        pfVar8 = (float*)(*this_01)[3];
        fVar7 = *pfVar8;
        pfVar8 = (float*)(*this_01)[3];
        *pfVar8 = fVar3 * fVar6 + fVar2 * fVar5 + fVar1 * fVar4 + fVar7;
        return result;
    }

    // 0x1009dcb30
    Matrix44T<float>* Matrix44T<float>::SetRot(const Matrix33T<float>& matrix33) {
        SetXYZ(matrix33);
        ((this + 16))->SetXYZ(*((matrix33 + 12)));
        ((this + 32))->SetXYZ(*((matrix33 + 24)));
        return this;
    }

    // 0x1009dcb70
    Matrix44T<float>* Matrix44T<float>::SetPos(const Vector3T<float>& vector3) {
        ((this + 48))->SetXYZ(vector3);
        return this;
    }

    // 0x1009dd780
    void Matrix44T<float>::hash() const {
        unsigned long local_30 = hash();
        unsigned long local_28 = ((this + 16))->hash();
        unsigned long local_20 = ((this + 32))->hash();
        unsigned long local_18 = ((this + 48))->hash();
        hash_val<unsigned long, unsigned long, unsigned long, unsigned long>(&local_30, &local_28, &local_20,
                                                                             &local_18);
    }

    // 0x100c6c410
    Matrix44T<float>* Matrix44T<float>::operator*=(const Matrix44T<float>& matrix44) {
        internal::MatrixMultSSEInPlace(*this, matrix44);
        return this;
    }

    // 0x100c6c430
    void Matrix44T<float>::GetPos() const {
        ((this + 48))->GetXYZ();
    }

    // 0x100c6c440
    Matrix44T<float>* Matrix44T<float>::GetRot() const {
        Vector4T<float>* in_RSI;

        float* pfVar1 = (float*)(*in_RSI)[0];
        float arg1 = *pfVar1;
        pfVar1 = (float*)(*in_RSI)[1];
        float arg2 = *pfVar1;
        pfVar1 = (float*)(*in_RSI)[2];
        float arg3 = *pfVar1;
        Vector4T<float>* pVVar2 = in_RSI + 16;
        pfVar1 = (float*)(*pVVar2)[0];
        float arg4 = *pfVar1;
        pfVar1 = (float*)(*pVVar2)[1];
        float arg5 = *pfVar1;
        pfVar1 = (float*)(*pVVar2)[2];
        float arg6 = *pfVar1;
        pVVar2 = in_RSI + 32;
        pfVar1 = (float*)(*pVVar2)[0];
        float arg7 = *pfVar1;
        pfVar1 = (float*)(*pVVar2)[1];
        float arg8 = *pfVar1;
        pfVar1 = (float*)(*pVVar2)[2];
        new (this) Matrix33T<float>(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, *pfVar1);
        return this;
    }

    // 0x100c6d420
    Matrix44T<float>::Matrix44T() {
        long lVar1 = 0;
        do {
            new ((this + lVar1)) Vector4T();
            lVar1 = lVar1 + 16;
        } while (lVar1 != 64);
    }

    // 0x100c6e410
    Matrix44T<float>* Matrix44T<float>::operator[](unsigned int arg1) {
        if (4 < arg1) {
            LogAssert("iRow <= M",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/matrix/Matrix44.inl",
                      495, nullptr);
        }
        return this + (unsigned long)arg1 * 16;
    }

} // namespace jag::math
