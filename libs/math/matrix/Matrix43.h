// libs/math/matrix/Matrix43.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::math {
    template <typename...> // 1 instantiations, e.g. <float>
    class Matrix43T {
    public:
        Matrix43T(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float arg8,
                  float arg9, float arg10, float arg11, float arg12);
        Matrix43T<float>* operator[](unsigned int arg1);
        ParticleVertexDataProxy<Vector3T<float>>* operator=(const Matrix43T<float>& matrix43);
        Matrix43T(const Matrix33T<float>& matrix33, const Vector3T<float>& vector3);
        void operator*=(const Matrix43T<float>& matrix43);
        Matrix43T<float>* operator=(const Matrix44T<float>& matrix44);
        Matrix43T<float>* operator[](unsigned int arg1) const;
        Matrix43T(Vector3T<float>&& vector31, Vector3T<float>&& vector32, Vector3T<float>&& vector33,
                  Vector3T<float>&& vector34);
        Matrix43T();
        Matrix43T<float>* GetRot() const;
        Matrix43T<float>* SetToIdentity();
        Matrix43T<float>* Translate(const Vector3T<float>& vector3);
        auto Set(const QuaternionT<float>& quaternion, const Vector3T<float>& vector3);
        auto Set(const Matrix33T<float>& matrix33, const Vector3T<float>& vector3);
        Matrix43T<float>* Set(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7,
                              float arg8, float arg9, float arg10, float arg11, float arg12);
        static Matrix43T<float>
            IDENTITY; // = Matrix43T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0)
    };

    // 0x100f37460, set at startup by ___cxx_global_var_init.170
    Matrix43T<float> Matrix43T<float>::IDENTITY =
        Matrix43T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0);

    // 0x1001eae70
    Matrix43T<float>::Matrix43T(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7,
                                float arg8, float arg9, float arg10, float arg11, float arg12) {
        long lVar1 = 0;
        do {
            new ((this + lVar1)) Vector3T();
            lVar1 = lVar1 + 12;
        } while (lVar1 != 48);
        Set(arg1, arg2, arg3);
        ((this + 12))->Set(arg4, arg5, arg6);
        ((this + 24))->Set(arg7, arg8, arg9);
        ((this + 36))->Set(arg10, arg11, arg12);
    }

    // 0x1002ed890
    Matrix43T<float>* Matrix43T<float>::operator[](unsigned int arg1) {
        if (4 < arg1) {
            LogAssert("iRow <= M",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/matrix/Matrix43.inl",
                      192, nullptr);
        }
        return this + (unsigned long)arg1 * 12;
    }

    // 0x100325250
    Matrix43T<float>* Matrix43T<float>::operator[](unsigned int arg1) const {
        if (4 < arg1) {
            LogAssert("iRow <= M",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/matrix/Matrix43.inl",
                      200, nullptr);
        }
        return this + (unsigned long)arg1 * 12;
    }

    // 0x10081ea10
    Matrix43T<float>* Matrix43T<float>::GetRot() const {
        Vector3T<float>* in_RSI;

        float* pfVar1 = (float*)(*in_RSI)[0];
        float arg1 = *pfVar1;
        pfVar1 = (float*)(*in_RSI)[1];
        float arg2 = *pfVar1;
        pfVar1 = (float*)(*in_RSI)[2];
        float arg3 = *pfVar1;
        Vector3T<float>* pVVar2 = in_RSI + 12;
        pfVar1 = (float*)(*pVVar2)[0];
        float arg4 = *pfVar1;
        pfVar1 = (float*)(*pVVar2)[1];
        float arg5 = *pfVar1;
        pfVar1 = (float*)(*pVVar2)[2];
        float arg6 = *pfVar1;
        pVVar2 = in_RSI + 24;
        pfVar1 = (float*)(*pVVar2)[0];
        float arg7 = *pfVar1;
        pfVar1 = (float*)(*pVVar2)[1];
        float arg8 = *pfVar1;
        pfVar1 = (float*)(*pVVar2)[2];
        new (this) Matrix33T<float>(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, *pfVar1);
        return this;
    }

} // namespace jag::math
