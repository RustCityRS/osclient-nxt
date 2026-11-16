// libs/math/vector/Vector4.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::math {
    template <typename...> // 5 instantiations, e.g. <double>, <float>, <int>
    class Vector4T {
    public:
        Vector4T();
        Vector4T<float>* Set(Vector3T<float> const&, float);
        QuaternionT<float>* Set(float, float, float, float);
        QuaternionT<float>* operator+=(Vector4T<float> const&);
        Vector4T<int>* operator+=(Vector4T<int> const&);
        GetXYZ() const;
        Vector4T(float, float, float, float);
        Vector4T<float>* SetToIdentity();
        Vector4T<unsigned char>* operator[](unsigned int) const;
        Vector4T<signed char>* operator=(Vector4T<unsigned char> const&);
        Vector4T<unsigned char>* operator[](unsigned int);
        ulong GetXYZ() const;
        Vector4T(Vector3T<double> const&, double);
        Vector4T<double>* GetXYZ() const;
        Vector4T<float>* SetToZero();
        Vector4T<float>* SetToOne();
        ulong hash() const;
        Vector4T(float);
        Vector4T(Vector3T<float> const&, float);
        Vector4T<float>* operator*=(Matrix44T<float> const&);
        Vector4T<float>* operator[](unsigned int) const;
        Vector4T<float>* operator/=(float);
        Vector4T<float>* operator[](unsigned int);
        static ImVec4 /* 16 bytes */ ZERO;     // = ImVec4(0.0, 0.0, 0.0, 0.0)
        static ImVec4 /* 16 bytes */ IDENTITY; // = ImVec4(0.0, 0.0, 0.0, 1.0)
        static ImVec4 /* 16 bytes */ ONE;      // = ImVec4(1.0, 1.0, 1.0, 1.0)
    };

    // 0x100f38110, 16 bytes, __data; set at startup by ___cxx_global_var_init.215
    ImVec4 Vector4T<float>::ZERO = ImVec4(0.0, 0.0, 0.0, 0.0);

    // 0x100f3de80, 16 bytes, __data; set at startup by ___cxx_global_var_init.25
    ImVec4 Vector4T<float>::IDENTITY = ImVec4(0.0, 0.0, 0.0, 1.0);

    // 0x100f44ab0, 16 bytes, __data; set at startup by ___cxx_global_var_init.28
    ImVec4 Vector4T<float>::ONE = ImVec4(1.0, 1.0, 1.0, 1.0);

    // 0x10005a070, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.215
    void ___cxx_global_var_init_215() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1001a40d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Vector4T<float>::Vector4T(): jumps straight to the base-object constructor

    // 0x1001a40e0, 144 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float>::Set(Matrix33T<float> const&, Vector3T<float> const&)
    Matrix44T<float>* Matrix44T<float>::Set(Matrix33T* param_1, Vector3T* param_2) {
        Vector3T* pVVar1;

        pVVar1 = (Vector3T*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 0);
        Set(pVVar1, 0.0);
        pVVar1 = (Vector3T*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 1);
        ((this + 16))->Set(pVVar1, 0.0);
        pVVar1 = (Vector3T*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 2);
        ((this + 32))->Set(pVVar1, 0.0);
        ((this + 48))->Set(param_2, 1.0);
        return this;
    }

    // 0x1001a4170, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Vector4T<float>::Vector4T()
    void Vector4T<float>::Vector4T() {
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
    }

    // 0x1001a4180, 48 bytes, inline, placed by debug map only (low confidence)
    // Vector4T<float>::Set(Vector3T<float> const&, float)
    Vector4T<float>* Vector4T<float>::Set(Vector3T* param_1, float param_2) {
        *(undefined4*)this = *(undefined4*)param_1;
        *(undefined4*)(this + 4) = *(undefined4*)(param_1 + 4);
        *(undefined4*)(this + 8) = *(undefined4*)(param_1 + 8);
        *(float*)(this + 12) = param_2;
        return this;
    }

    // 0x1001a41b0, 64 bytes, inline, placed by debug map only (low confidence)
    // Matrix33T<float>::operator[](unsigned int) const
    Matrix33T<float>* Matrix33T<float>::operator[](uint param_1) {
        if (3 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("iRow <= M",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/matrix/Matrix33.inl",
                      289, (char*)0);
        }
        return this + (ulong)param_1 * 12;
    }

    // 0x1001a41f0, 32 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Matrix33T<float>::Matrix33T(float, float, float, float, float, float, float, float, float)
    void Matrix33T<float>::Matrix33T(float param_1, float param_2, float param_3, float param_4, float param_5,
                                     float param_6, float param_7, float param_8, float param_9) {
        Matrix33T(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9);
    }

    // 0x1002f3600, 32 bytes, inline, placed by class header (inline)
    // Vector4T<int>::operator+=(Vector4T<int> const&)
    /* Vector4T<int>::TEMPNAMEPLACEHOLDERVALUE(Vector4T<int> const&) */

    Vector4T<int>* Vector4T<int>::operator+=(Vector4T* param_1) {
        *(int*)this = *(int*)this + *(int*)param_1;
        *(int*)(this + 4) = *(int*)(this + 4) + *(int*)(param_1 + 4);
        *(int*)(this + 8) = *(int*)(this + 8) + *(int*)(param_1 + 8);
        *(int*)(this + 12) = *(int*)(this + 12) + *(int*)(param_1 + 12);
        return this;
    }

    // 0x1003a6ab0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Vector4T<float>::Vector4T(float, float, float, float): jumps straight to the base-object constructor

    // 0x10061e960, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.25
    void ___cxx_global_var_init_25() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4808;
        if (*PTR_IDENTITY_100ee4808 == '\0') {
            new (PTR_IDENTITY_100ee6710) ImVec4(0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1007a3ee0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.28
    void ___cxx_global_var_init_28() {
        undefined* puVar1;

        puVar1 = PTR_ONE_100ee47f8;
        if (*PTR_ONE_100ee47f8 == '\0') {
            new (PTR_ONE_100ee6700) ImVec4(1.0, 1.0, 1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1008071c0, 32 bytes, inline, placed by class header (inline)
    // Vector4T<unsigned char>::operator=(Vector4T<unsigned char> const&)
    /* Vector4T<signed char>::TEMPNAMEPLACEHOLDERVALUE(Vector4T<signed char>
   const&) */

    Vector4T<signed char>* Vector4T<signed char>::operator=(Vector4T* param_1) {
        *this = (Vector4T<signed char>)*param_1;
        *(Vector4T*)(this + 1) = param_1[1];
        *(Vector4T*)(this + 2) = param_1[2];
        *(Vector4T*)(this + 3) = param_1[3];
        return this;
    }

    // 0x1008071e0, 64 bytes, inline, placed by class header (inline)
    // Vector4T<unsigned char>::operator[](unsigned int)
    Vector4T<unsigned char>* Vector4T<unsigned char>::operator[](uint param_1) {
        if (3 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector4.inl",
                      185, (char*)0);
        }
        return this + param_1;
    }

    // 0x10082da80, 48 bytes, inline, placed by class header (inline)
    // Vector4T<signed char>::GetXYZ() const
    ulong Vector4T<signed char>::GetXYZ() {
        uint3 local_10[2];

        new (local_10) Vector3T<unsigned char>((uchar) * this, (uchar)this[1], (uchar)this[2]);
        return (ulong)local_10[0];
    }

    // 0x100984ed0, 16 bytes, inline, placed by class header (inline)
    // Vector4T<float>::SetToZero()
    Vector4T<float>* Vector4T<float>::SetToZero() {
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        return this;
    }

    // 0x100984ee0, 32 bytes, inline, placed by class header (inline)
    // Vector4T<float>::SetToOne()
    Vector4T<float>* Vector4T<float>::SetToOne() {
        *(undefined8*)(this + 8) = 4575657222473777152;
        *(undefined8*)this = 4575657222473777152;
        return this;
    }

    // 0x1009de430, 96 bytes, inline, placed by class header (inline)
    // Vector4T<float>::hash() const
    ulong Vector4T<float>::hash() {
        ulong local_20;

        local_20 = 0;
        hash_combine<float>(&local_20, (float*)this);
        hash_combine<float>(&local_20, (float*)(this + 4));
        hash_combine<float>(&local_20, (float*)(this + 8));
        hash_combine<float>(&local_20, (float*)(this + 12));
        return local_20;
    }

    // 0x100c61090, 48 bytes, inline, placed by class header (inline)
    // Vector4T<float>::GetXYZ() const
    undefined8 Vector4T<float>::GetXYZ() {
        undefined8 uVar1;
        ColourHSL local_18;

        new (&local_18) ColourHSL(*(float*)this, *(float*)(this + 4), *(float*)(this + 8));
        uVar1._0_4_ = local_18.field_0;
        uVar1._4_4_ = local_18.field_4;
        return uVar1;
    }

    // 0x100c61250, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Vector4T<float>::Vector4T(Vector3T<float> const&, float): jumps straight to the base-object constructor

    // 0x100c61260, 48 bytes, inline, placed by class header (inline)
    // Vector4T<float>::operator*=(Matrix44T<float> const&)
    /* Vector4T<float>::TEMPNAMEPLACEHOLDERVALUE(Matrix44T<float> const&) */

    Vector4T<float>* Vector4T<float>::operator*=(Matrix44T* param_1) {
        undefined8 local_28[3];

        local_28[0] = math::operator*((Vector4T*)this, param_1);
        Rect<float>::operator=((Rect<float>*)this, (Rect*)local_28);
        return this;
    }

    // 0x100c6d3e0, 64 bytes, inline, placed by class header (inline)
    // Vector4T<float>::operator[](unsigned int)
    Vector4T<float>* Vector4T<float>::operator[](uint param_1) {
        if (3 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector4.inl",
                      185, (char*)0);
        }
        return this + (ulong)param_1 * 4;
    }

    // 0x100c6e460, 96 bytes, base-object constructor, inline, placed by class header (inline)
    // Vector4T<float>::Vector4T(Vector3T<float> const&, float)
    void Vector4T<float>::Vector4T(Vector3T* param_1, float param_2) {
        vector* pvVar1;
        undefined4* puVar2;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        *(undefined4*)this = *(undefined4*)pvVar1;
        puVar2 = (undefined4*)param_1->y();
        *(undefined4*)(this + 4) = *puVar2;
        puVar2 = (undefined4*)param_1->second();
        *(undefined4*)(this + 8) = *puVar2;
        *(float*)(this + 12) = param_2;
    }

} // namespace jag::math
