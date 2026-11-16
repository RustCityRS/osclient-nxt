// libs/math/vector/Vector4.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::math {
    template <typename...> // 5 instantiations, e.g. <double>, <float>, <int>
    class Vector4T {
    public:
        Vector4T();
        Vector4T<float>* Set(const Vector3T<float>& vector3, float arg2);
        QuaternionT<float>* Set(float arg1, float arg2, float arg3, float arg4);
        QuaternionT<float>* operator+=(const Vector4T<float>& vector4);
        Vector4T<int>* operator+=(const Vector4T<int>& vector4);
        uint8_t[16] GetXYZ() const;
        Vector4T(float arg1, float arg2, float arg3, float arg4);
        auto SetToIdentity();
        Vector4T<unsigned char>* operator[](unsigned int arg1) const;
        Vector4T<signed char>* operator=(const Vector4T<unsigned char>& vector4);
        Vector4T<unsigned char>* operator[](unsigned int arg1);
        unsigned long GetXYZ() const;
        Vector4T(const Vector3T<double>& vector3, double arg2);
        Vector4T<double>* GetXYZ() const;
        auto SetToZero();
        auto SetToOne();
        unsigned long hash() const;
        Vector4T(float arg1);
        uint64_t GetXYZ() const;
        Vector4T(const Vector3T<float>& vector3, float arg2);
        Vector4T<float>* operator*=(const Matrix44T<float>& matrix44);
        Vector4T<float>* operator[](unsigned int arg1) const;
        Vector4T<float>* operator/=(float arg1);
        Vector4T<float>* operator[](unsigned int arg1);
        static ImVec4 ZERO;     // = ImVec4(0.0, 0.0, 0.0, 0.0)
        static ImVec4 IDENTITY; // = ImVec4(0.0, 0.0, 0.0, 1.0)
        static ImVec4 ONE;      // = ImVec4(1.0, 1.0, 1.0, 1.0)
    };

    // 0x100f38110, set at startup by ___cxx_global_var_init.215
    ImVec4 Vector4T<float>::ZERO = ImVec4(0.0, 0.0, 0.0, 0.0);

    // 0x100f3de80, set at startup by ___cxx_global_var_init.25
    ImVec4 Vector4T<float>::IDENTITY = ImVec4(0.0, 0.0, 0.0, 1.0);

    // 0x100f44ab0, set at startup by ___cxx_global_var_init.28
    ImVec4 Vector4T<float>::ONE = ImVec4(1.0, 1.0, 1.0, 1.0);

    // 0x1001a40e0
    Matrix44T<float>* Matrix44T<float>::Set(const Matrix33T<float>& matrix33, const Vector3T<float>& vector3) {
        Vector3T<float>* pVVar1 = &matrix33[0];
        Set(*pVVar1, 0.0);
        pVVar1 = &matrix33[1];
        ((this + 16))->Set(*pVVar1, 0.0);
        pVVar1 = &matrix33[2];
        ((this + 32))->Set(*pVVar1, 0.0);
        ((this + 48))->Set(vector3, 1.0);
        return this;
    }

    // 0x1001a4170
    Vector4T<float>::Vector4T() {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 8) = 0;
    }

    // 0x1001a4180
    Vector4T<float>* Vector4T<float>::Set(const Vector3T<float>& vector3, float arg2) {
        *(uint32_t*)this = *(uint32_t*)vector3;
        *(uint32_t*)(this + 4) = *(uint32_t*)(vector3 + 4);
        *(uint32_t*)(this + 8) = *(uint32_t*)(vector3 + 8);
        *(float*)(this + 12) = arg2;
        return this;
    }

    // 0x1001a41b0
    Matrix33T<float>* Matrix33T<float>::operator[](unsigned int arg1) const {
        if (3 < arg1) {
            LogAssert("iRow <= M",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/matrix/Matrix33.inl",
                      289, nullptr);
        }
        return this + (unsigned long)arg1 * 12;
    }

    // 0x1001a41f0
    Matrix33T<float>::Matrix33T(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7,
                                float arg8, float arg9) {
        Matrix33T(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }

    // 0x1002f3600
    Vector4T<int>* Vector4T<int>::operator+=(const Vector4T<int>& vector4) {
        *(int*)this = *(int*)this + *(int*)vector4;
        *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(vector4 + 4);
        *(int*)(this + 8) = *(int*)(this + 8) + *(int*)(vector4 + 8);
        *(int*)(this + 12) = *(int*)(this + 12) + *(int*)(vector4 + 12);
        return this;
    }

    // 0x1008071c0
    Vector4T<signed char>* Vector4T<unsigned char>::operator=(const Vector4T<unsigned char>& vector4) {
        *this = (Vector4T<signed char>)*vector4;
        *(Vector4T<unsigned char>*)(this + 1) = vector4[1];
        *(Vector4T<unsigned char>*)(this + 2) = vector4[2];
        *(Vector4T<unsigned char>*)(this + 3) = vector4[3];
        return this;
    }

    // 0x1008071e0
    Vector4T<unsigned char>* Vector4T<unsigned char>::operator[](unsigned int arg1) {
        if (3 < arg1) {
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector4.inl",
                      185, nullptr);
        }
        return this + arg1;
    }

    // 0x10082da80
    unsigned long Vector4T<signed char>::GetXYZ() const {
        uint32_t local_10[2];

        new (local_10) Vector3T((schar) * this, (schar)this[1], (schar)this[2]);
        return (unsigned long)local_10[0];
    }

    // 0x100984ed0
    auto Vector4T<float>::SetToZero() {
        auto result;
        result = (ReturnValue)0;
        &result[1] = (ReturnValue)0;
        return result;
    }

    // 0x100984ee0
    auto Vector4T<float>::SetToOne() {
        auto result;
        &result[1] = (ReturnValue)4575657222473777152;
        result = (ReturnValue)4575657222473777152;
        return result;
    }

    // 0x1009de430
    unsigned long Vector4T<float>::hash() const {

        return local_20 = 0;
        hash_combine<float>(&local_20, (float*)this);
        hash_combine<float>(&local_20, (float*)(this + 4));
        hash_combine<float>(&local_20, (float*)(this + 8));
        hash_combine<float>(&local_20, (float*)(this + 12));
        return local_20;
    }

    // 0x100c61090
    uint64_t Vector4T<float>::GetXYZ() const {
        uint64_t uVar1;

        ColourHSL local_18(*(float*)this, *(float*)(this + 4), *(float*)(this + 8));
        uVar1._0_4_ = local_18.field_0;
        uVar1._4_4_ = local_18.field_4;
        return uVar1;
    }

    // 0x100c61260
    Vector4T<float>* Vector4T<float>::operator*=(const Matrix44T<float>& matrix44) {
        uint64_t local_28[3];

        local_28[0] = *this matrix44;
        *this = *local_28;
        return this;
    }

    // 0x100c6d3e0
    Vector4T<float>* Vector4T<float>::operator[](unsigned int arg1) {
        if (3 < arg1) {
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector4.inl",
                      185, nullptr);
        }
        return this + (unsigned long)arg1 * 4;
    }

    // 0x100c6e460
    Vector4T<float>::Vector4T(const Vector3T<float>& vector3, float arg2) {
        auto puVar1 = vector3.SSOBeginPtr();
        *(uint32_t*)this = *puVar1;
        puVar1 = (uint32_t*)vector3.y();
        *(uint32_t*)(this + 4) = *puVar1;
        puVar1 = (uint32_t*)vector3.second();
        *(uint32_t*)(this + 8) = *puVar1;
        *(float*)(this + 12) = arg2;
    }

} // namespace jag::math
