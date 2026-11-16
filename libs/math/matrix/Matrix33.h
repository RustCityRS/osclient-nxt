// libs/math/matrix/Matrix33.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::math {
    template <typename...> // 1 instantiations, e.g. <float>
    class Matrix33T {
    public:
        Matrix33T<float>* operator[](unsigned int arg1) const;
        Matrix33T(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float arg8,
                  float arg9);
        Matrix33T<float>* Orthonormalise(const Matrix33T<float>& matrix33);
        Matrix33T<float>* operator[](unsigned int arg1);
        QuaternionT<float>* Up();
        Matrix33T<float>* operator=(Matrix33T<float>&& matrix33);
        void operator*=(const Matrix33T<float>& matrix33);
        Matrix33T(const Vector3T<float>& vector31, const Vector3T<float>& vector32, const Vector3T<float>& vector33);
        Matrix33T<float>* Transpose();
        Matrix33T();
        void SetToDiagonal(float arg1, float arg2, float arg3);
        Vector3T<float>* LookAt(const Vector3T<float>& vector31, Vector3T<float> vector32);
        Matrix33T(const QuaternionT<float>& quaternion);
        auto Invert(float* arg1);
        auto Set(const QuaternionT<float>& quaternion);
        void SetToIdentity();
        float Determinant() const;
        Matrix33T<float>* Set(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7,
                              float arg8, float arg9);
        static Matrix33T<float> IDENTITY; // = Matrix33T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0)
    };

    // 0x100f373c0, set at startup by ___cxx_global_var_init.171
    Matrix33T<float> Matrix33T<float>::IDENTITY = Matrix33T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0);

    // 0x1001a4210
    Matrix33T<float>::Matrix33T(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7,
                                float arg8, float arg9) {
        long lVar1 = 0;
        do {
            new ((this + lVar1)) Vector3T();
            lVar1 = lVar1 + 12;
        } while (lVar1 != 36);
        Set(arg1, arg2, arg3);
        ((this + 12))->Set(arg4, arg5, arg6);
        ((this + 24))->Set(arg7, arg8, arg9);
    }

    // 0x1001a42c0
    Vector3T<float>* Vector3T<float>::Set(float arg1, float arg2, float arg3) {
        *(float*)this = arg1;
        *(float*)(this + 4) = arg2;
        *(float*)(this + 8) = arg3;
        return this;
    }

    // 0x1001a5350
    Matrix44T<float>::Matrix44T(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7,
                                float arg8, float arg9, float arg10, float arg11, float arg12, float arg13, float arg14,
                                float arg15, float arg16) {
        long lVar1 = 0;
        do {
            new ((this + lVar1)) Vector4T();
            lVar1 = lVar1 + 16;
        } while (lVar1 != 64);
        Set(arg1, arg2, arg3, arg4);
        ((this + 16))->Set(arg5, arg6, arg7, arg8);
        ((this + 32))->Set(arg9, arg10, arg11, arg12);
        ((this + 48))->Set(arg13, arg14, arg15, arg16);
    }

    // 0x1001a5430
    QuaternionT<float>* Vector4T<float>::Set(float arg1, float arg2, float arg3, float arg4) {
        *(float*)this = arg1;
        *(float*)(this + 4) = arg2;
        *(float*)(this + 8) = arg3;
        *(float*)(this + 12) = arg4;
        return this;
    }

    // 0x1007b0240
    void Matrix33T<float>::SetToDiagonal(float arg1, float arg2, float arg3) {
        Set(this, arg1, 0.0, 0.0, 0.0, arg2, 0.0, 0.0, 0.0, arg3);
    }

    // 0x1009dd190
    auto Matrix33T<float>::Invert(float* arg1) {
        auto result;

        float* pfVar10 = (float*)(result)[0];
        float fVar1 = *pfVar10;
        pfVar10 = (float*)(result)[1];
        float fVar2 = *pfVar10;
        pfVar10 = (float*)(result)[2];
        float fVar3 = *pfVar10;
        uint8_t* uint8_t = &&result[1].field_4;
        pfVar10 = (float*)(*uint8_t)[0];
        float fVar4 = *pfVar10;
        pfVar10 = (float*)(*uint8_t)[1];
        float fVar5 = *pfVar10;
        pfVar10 = (float*)(*uint8_t)[2];
        float fVar6 = *pfVar10;
        ReturnValue* this_00 = &result + 3;
        pfVar10 = (float*)(*this_00)[0];
        float fVar7 = *pfVar10;
        pfVar10 = (float*)(*this_00)[1];
        float fVar8 = *pfVar10;
        pfVar10 = (float*)(*this_00)[2];
        float fVar9 = *pfVar10;
        float fVar11 = (fVar8 * fVar4 * fVar3 + fVar7 * fVar6 * fVar2 + fVar9 * fVar5 * fVar1) -
                       (fVar9 * fVar4 * fVar2 + fVar8 * fVar6 * fVar1 + fVar7 * fVar5 * fVar3);
        if (fVar11 != 0.0) {
            if (arg1 != nullptr) {
                *arg1 = fVar11;
            }
            fVar11 = 1.0 / fVar11;
            pfVar10 = (float*)(result)[0];
            *pfVar10 = (fVar9 * fVar5 - fVar8 * fVar6) * fVar11;
            pfVar10 = (float*)(result)[1];
            *pfVar10 = (fVar8 * fVar3 - fVar9 * fVar2) * fVar11;
            pfVar10 = (float*)(result)[2];
            *pfVar10 = (fVar6 * fVar2 - fVar5 * fVar3) * fVar11;
            pfVar10 = (float*)(*uint8_t)[0];
            *pfVar10 = (fVar6 * fVar7 - fVar9 * fVar4) * fVar11;
            pfVar10 = (float*)(*uint8_t)[1];
            *pfVar10 = (fVar9 * fVar1 - fVar3 * fVar7) * fVar11;
            pfVar10 = (float*)(*uint8_t)[2];
            *pfVar10 = (fVar4 * fVar3 - fVar6 * fVar1) * fVar11;
            pfVar10 = (float*)(*this_00)[0];
            *pfVar10 = (fVar4 * fVar8 - fVar5 * fVar7) * fVar11;
            pfVar10 = (float*)(*this_00)[1];
            *pfVar10 = (fVar7 * fVar2 - fVar8 * fVar1) * fVar11;
            pfVar10 = (float*)(*this_00)[2];
            *pfVar10 = (fVar5 * fVar1 - fVar4 * fVar2) * fVar11;
        }
        return result;
    }

    // 0x1009de260
    Matrix33T<float>::Matrix33T(const QuaternionT<float>& quaternion) {
        long lVar1 = 0;
        do {
            new ((this + lVar1)) Vector3T();
            lVar1 = lVar1 + 12;
        } while (lVar1 != 36);
        Set((ReturnValue*)this, quaternion);
    }

    // 0x1009de2b0
    auto Matrix33T<float>::Set(const QuaternionT<float>& quaternion) {
        float fVar1 = *(float*)quaternion;
        float fVar2 = *(float*)(quaternion + 4);
        float fVar5 = fVar2 + fVar2;
        float fVar3 = *(float*)(quaternion + 8);
        float fVar7 = fVar3 + fVar3;
        float fVar4 = *(float*)(quaternion + 12);
        float fVar8 = fVar4 * (fVar1 + fVar1);
        auto result = -fVar2 * fVar5 + 1.0 - fVar3 * fVar7;
        *(float*)&result.field_4 = fVar7 * fVar4 + fVar5 * fVar1;
        *(float*)(&result + 1) = fVar7 * fVar1 - fVar5 * fVar4;
        *(float*) && result[1].field_4 = fVar5 * fVar1 - fVar7 * fVar4;
        float fVar6 = 1.0 - (fVar1 + fVar1) * fVar1;
        *(float*)(&result + 2) = -fVar3 * fVar7 + fVar6;
        *(float*) && result[2].field_4 = fVar7 * fVar2 + fVar8;
        *(float*)(&result + 3) = fVar5 * fVar4 + fVar7 * fVar1;
        *(float*) && result[3].field_4 = fVar7 * fVar2 - fVar8;
        *(float*)(&result + 4) = fVar6 - fVar2 * fVar5;
        return result;
    }

    // 0x100c6b8e0
    void Matrix33T<float>::SetToIdentity() {
        Set(this, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0);
    }

    // 0x100c6dfd0
    float Matrix33T<float>::Determinant() const {
        float* pfVar18 = (float*)(*this)[0];
        float fVar1 = *pfVar18;
        Vector3T<float>* this_00 = (Vector3T<float>*)(this + 12);
        pfVar18 = (float*)(*this_00)[1];
        float fVar2 = *pfVar18;
        Vector3T<float>* this_01 = (Vector3T<float>*)(this + 24);
        pfVar18 = (float*)(*this_01)[2];
        float fVar3 = *pfVar18;
        pfVar18 = (float*)(*this)[1];
        float fVar4 = *pfVar18;
        pfVar18 = (float*)(*this_00)[2];
        float fVar5 = *pfVar18;
        pfVar18 = (float*)(*this_01)[0];
        float fVar6 = *pfVar18;
        pfVar18 = (float*)(*this)[2];
        float fVar7 = *pfVar18;
        pfVar18 = (float*)(*this_00)[0];
        float fVar8 = *pfVar18;
        pfVar18 = (float*)(*this_01)[1];
        float fVar9 = *pfVar18;
        pfVar18 = (float*)(*this)[2];
        float fVar10 = *pfVar18;
        pfVar18 = (float*)(*this_00)[1];
        float fVar11 = *pfVar18;
        pfVar18 = (float*)(*this_01)[0];
        float fVar12 = *pfVar18;
        pfVar18 = (float*)(*this)[1];
        float fVar13 = *pfVar18;
        pfVar18 = (float*)(*this_00)[0];
        float fVar14 = *pfVar18;
        pfVar18 = (float*)(*this_01)[2];
        float fVar15 = *pfVar18;
        pfVar18 = (float*)(*this)[0];
        float fVar16 = *pfVar18;
        pfVar18 = (float*)(*this_00)[2];
        float fVar17 = *pfVar18;
        pfVar18 = (float*)(*this_01)[1];
        return (fVar7 * fVar8 * fVar9 + fVar4 * fVar5 * fVar6 + fVar1 * fVar2 * fVar3) -
               (fVar16 * fVar17 * *pfVar18 + fVar13 * fVar14 * fVar15 + fVar10 * fVar11 * fVar12);
    }

    // 0x100c6f070
    Matrix33T<float>* Matrix33T<float>::Set(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6,
                                            float arg7, float arg8, float arg9) {
        Set(arg1, arg2, arg3);
        ((this + 12))->Set(arg4, arg5, arg6);
        ((this + 24))->Set(arg7, arg8, arg9);
        return this;
    }

} // namespace jag::math

namespace jag {
    // 0x1001a4f60
    PacketT<Array<unsigned char>>::PacketT() : Array<unsigned char>(), field_24(0), field_28(0) {}

} // namespace jag
