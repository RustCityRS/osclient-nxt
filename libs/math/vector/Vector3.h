// libs/math/vector/Vector3.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::math {
    template <typename...> // 9 instantiations, e.g. <double>, <float>, <int>
    class Vector3T {
    public:
        Vector3T(float arg1, float arg2, float arg3);
        Vector3T(int arg1, int arg2, int arg3);
        Vector3T(int waterNormalParamsEncoding, int waterNormalParamGroup, int arg3);
        Vector3T();
        Vector4T<float>* operator=(const Vector3T<float>& vector3);
        Vector3T<float>* Set(float arg1, float arg2, float arg3);
        Vector3T<int>(const Vector3T<int>& vector3);
        Vector3T(short arg1, short arg2, short arg3);
        Vector3T<short>* operator=(const Vector3T<short>& vector3);
        Vector3T<int>* operator*=(int arg1);
        uint8_t[16] operator/=(int arg1);
        bool IsNormal(float arg1) const;
        Vector3T<int>* operator=(const Vector3T<int>& vector3);
        void Serialise<oldscape::PacketJ<Array<unsigned char>>>(oldscape::PacketJ<Array<unsigned char>>& packetJ,
                                                                bool arg2) const;
        auto SetToZero();
        void Negate();
        void Rotate(const QuaternionT<float>& quaternion);
        Vector3T<float>* operator*=(const QuaternionT<float>& quaternion);
        void Interpolate(const Vector3T<float>& vector3, float arg2);
        bool IsUniform() const;
        Vector3T(PacketT<Array<unsigned char>>& arg1, bool arg2);
        void operator*=(const Matrix43T<float>& matrix43);
        Vector4T<signed char>* y();
        Vector3T<signed char>* z();
        Vector3T<int>* operator+=(const Vector3T<int>& vector3);
        auto NormalizeSafe();
        int Length() const;
        Vector3T<signed char>(const Vector3T<signed char>& vector3);
        Vector3T<float>(const Vector3T<float>& vector3);
        Vector3T(int arg1);
        Vector3T<unsigned char>* operator=(const Vector3T<signed char>& vector3);
        void LengthSq() const;
        int MaxElement() const;
        Vector3T<unsigned int>* operator[](unsigned int arg1) const;
        Vector3T<float>* operator-=(const Vector3T<float>& vector3);
        Vector3T(PacketT<Array<unsigned char>>& arg1, bool arg2);
        Vector3T<short>* operator[](unsigned int arg1);
        Vector3T<int>* operator[](unsigned int arg1);
        Vector3T<int>* operator[](unsigned int arg1) const;
        Vector3T<short>* operator[](unsigned int arg1) const;
        Vector3T<double>* operator[](unsigned int arg1) const;
        Vector3T<double>* operator[](unsigned int arg1);
        Vector3T<double>* operator+=(const Vector3T<double>& vector3);
        Vector3T<double>* operator/=(double arg1);
        Vector3T<double>* Set(const Vector3T<double>& vector3);
        Vector3T<double>* operator*=(const QuaternionT<double>& quaternion);
        Vector3T<double>* operator-=(const Vector3T<double>& vector3);
        Vector3T<short>* operator+=(const Vector3T<short>& vector3);
        auto Set(unsigned short arg1, unsigned short arg2, unsigned short arg3);
        auto Set(unsigned char arg1, unsigned char arg2, unsigned char arg3);
        Vector3T<signed char>* operator[](unsigned int arg1) const;
        Vector3T<unsigned short>* operator[](unsigned int arg1) const;
        Vector3T<unsigned char>* operator[](unsigned int arg1) const;
        Vector3T(signed char arg1, signed char arg2, signed char arg3);
        Vector3T(double arg1, double arg2, double arg3);
        Vector3T<double>* operator=(const Vector3T<double>& vector3);
        void operator*=(const Matrix44T<float>& matrix44);
        auto Normalize();
        double InvLength() const;
        Vector3T<double>* operator*=(double arg1);
        double Length() const;
        auto SetToOne();
        unsigned long hash() const;
        void Length() const;
        Vector3T(float arg1);
        Vector3T<float>* operator[](unsigned int arg1) const;
        Vector3T<float>* Set(const Vector3T<float>& vector3);
        Vector3T<float>* operator+=(const Vector3T<float>& vector3);
        Vector3T<float>* operator*=(const Vector3T<float>& vector3);
        bool SloppyCompare(const Vector3T<float>& vector3, float arg2) const;
        Vector3T<float>* operator*=(float arg1);
        float MaxElement() const;
        Vector3T<float>* operator*=(const Matrix33T<float>& matrix33);
        float MinElement() const;
        float InvLength() const;
        Vector3T<float>* operator/=(float arg1);
        Vector3T<float>* operator[](unsigned int arg1);
        static ColourHSL ONE;                                 // = ColourHSL(1.0, 1.0, 1.0)
        static oldscape::rs2lib::worldmap::LocationData ZERO; // = LocationData(0, 0, 0)
        static ColourHSL LOOK;                                // = ColourHSL(0.0, 0.0, 1.0)
        static Vector3T<double> ZERO;                         // = Vector3T<double>(0.0, 0.0, 0.0)
        static ColourHSL ZERO;                                // = ColourHSL(0.0, 0.0, 0.0)
        static ColourHSL RIGHT;                               // = ColourHSL(1.0, 0.0, 0.0)
        static Vector3T<double> RIGHT;                        // = Vector3T<double>(1.0, 0.0, 0.0)
        static Vector3T<double> LOOK;                         // = Vector3T<double>(0.0, 0.0, 1.0)
        static Vector3T<double> UP;                           // = Vector3T<double>(0.0, 1.0, 0.0)
        static ColourHSL UP;                                  // = ColourHSL(0.0, 1.0, 0.0)
    };

    // 0x100f37c40, set at startup by ___cxx_global_var_init.240
    ColourHSL Vector3T<float>::ONE = ColourHSL(1.0, 1.0, 1.0);

    // 0x100f37c78, set at startup by ___cxx_global_var_init.162
    oldscape::rs2lib::worldmap::LocationData Vector3T<int>::ZERO = LocationData(0, 0, 0);

    // 0x100f38070, set at startup by ___cxx_global_var_init.152
    ColourHSL Vector3T<float>::LOOK = ColourHSL(0.0, 0.0, 1.0);

    // 0x100f38530, set at startup by ___cxx_global_var_init.103
    Vector3T<double> Vector3T<double>::ZERO = Vector3T<double>(0.0, 0.0, 0.0);

    // 0x100f3dcb0, set at startup by ___cxx_global_var_init.219
    ColourHSL Vector3T<float>::ZERO = ColourHSL(0.0, 0.0, 0.0);

    // 0x100f3dcd0, set at startup by ___cxx_global_var_init.374
    ColourHSL Vector3T<float>::RIGHT = ColourHSL(1.0, 0.0, 0.0);

    // 0x100f3dea0, set at startup by ___cxx_global_var_init.66
    Vector3T<double> Vector3T<double>::RIGHT = Vector3T<double>(1.0, 0.0, 0.0);

    // 0x100f3dec0, set at startup by ___cxx_global_var_init.64
    Vector3T<double> Vector3T<double>::LOOK = Vector3T<double>(0.0, 0.0, 1.0);

    // 0x100f44150, set at startup by ___cxx_global_var_init.65
    Vector3T<double> Vector3T<double>::UP = Vector3T<double>(0.0, 1.0, 0.0);

    // 0x100f4df50, set at startup by ___cxx_global_var_init.153
    ColourHSL Vector3T<float>::UP = ColourHSL(0.0, 1.0, 0.0);

    // 0x1000099f0: ColourHSL::ColourHSL(float, float, float) has the same machine code as Vector3T<float>::Vector3T(float, float, float)

    // 0x100009d90
    Vector3T<float>::Vector3T(float arg1, float arg2, float arg3) : field_0(arg1), field_4(arg2), field_8(arg3) {}

    // 0x1001ccc70
    Vector3T<int>* Vector3T<int>::operator*=(int arg1) {
        *(int*)this = *(int*)this * arg1;
        *(int*)(this + 4) = *(int*)(this + 4) * arg1;
        *(int*)(this + 8) = arg1 * *(int*)(this + 8);
        return this;
    }

    // 0x1001ccc90
    uint8_t[16] Vector3T<int>::operator/=(int arg1) {
        uint8_t auVar1[16];

        *(int*)this = *(int*)this / arg1;
        *(int*)(this + 4) = *(int*)(this + 4) / arg1;
        auVar1._8_8_ = (long)*(int*)(this + 8) % (long)arg1 & 4294967295;
        *(int*)(this + 8) = *(int*)(this + 8) / arg1;
        auVar1._0_8_ = this;
        return auVar1;
    }

    // 0x1001dc6f0
    Vector3T<int>* Vector3T<int>::operator=(const Vector3T<int>& vector3) {
        *(uint32_t*)this = *(uint32_t*)vector3;
        *(uint32_t*)(this + 4) = *(uint32_t*)(vector3 + 4);
        *(uint32_t*)(this + 8) = *(uint32_t*)(vector3 + 8);
        return this;
    }

    // 0x1002e3700
    Vector3T<float>::Vector3T(PacketT<Array<unsigned char>>& arg1, bool arg2) {
        uint32_t in_register_00000011;
        float fVar1;

        if ((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            fVar1 = arg1.gT<float>();
            *(float*)this = fVar1;
            fVar1 = arg1.gT<float>();
            *(float*)(this + 4) = fVar1;
            fVar1 = arg1.gT<float>();
        } else {
            fVar1 = arg1.gTPE<float>();
            *(float*)this = fVar1;
            fVar1 = arg1.gTPE<float>();
            *(float*)(this + 4) = fVar1;
            fVar1 = arg1.gTPE<float>();
        }
        *(float*)(this + 8) = fVar1;
    }

    // 0x1002f35b0
    Vector4T<signed char>* Vector3T<signed char>::y() {
        return this + 1;
    }

    // 0x1002f35c0
    Vector3T<signed char>* Vector3T<signed char>::z() {
        return this + 2;
    }

    // 0x10036f450
    int Vector3T<int>::Length() const {
        int arg1 = LengthSq(this);
        double dVar1 = (double)sqrt<int>(arg1);
        return (int)dVar1;
    }

    // 0x100370210
    Vector3T<unsigned char>* Vector3T<signed char>::operator=(const Vector3T<signed char>& vector3) {
        *this = (Vector3T<unsigned char>)*vector3;
        *(Vector3T<signed char>*)(this + 1) = vector3[1];
        *(Vector3T<signed char>*)(this + 2) = vector3[2];
        return this;
    }

    // 0x1003702b0
    void Vector3T<int>::LengthSq() const {
        Vector3Dot<int>(this, this);
    }

    // 0x100370360
    int Vector3T<int>::MaxElement() const {
        auto piVar1 = second();
        auto piVar2 = SSOBeginPtr();
        auto arg2 = y();
        piVar2 = std::max<int>(*piVar2, *arg2);
        piVar1 = std::max<int>(*piVar1, *piVar2);
        return *piVar1;
    }

    // 0x1003de380
    Vector3T<unsigned int>* Vector3T<unsigned int>::operator[](unsigned int arg1) const {
        if (2 < arg1) {
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector3.inl",
                      203, nullptr);
        }
        return this + (unsigned long)arg1 * 4;
    }

    // 0x100507070
    Vector3T<short>* Vector3T<short>::operator[](unsigned int arg1) {
        if (2 < arg1) {
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector3.inl",
                      196, nullptr);
        }
        return this + (unsigned long)arg1 * 2;
    }

    // 0x1005070b0
    Vector3T<int>* Vector3T<int>::operator[](unsigned int arg1) {
        if (2 < arg1) {
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector3.inl",
                      196, nullptr);
        }
        return this + (unsigned long)arg1 * 4;
    }

    // 0x1005414d0
    Vector3T<int>::Vector3T(PacketT<Array<unsigned char>>& arg1, bool arg2) {
        int iVar1;
        uint32_t in_register_00000011;

        if ((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            iVar1 = arg1.gT<int>();
            *(int*)this = iVar1;
            iVar1 = arg1.gT<int>();
            *(int*)(this + 4) = iVar1;
            iVar1 = arg1.gT<int>();
        } else {
            iVar1 = arg1.gTPE<int>();
            *(int*)this = iVar1;
            iVar1 = arg1.gTPE<int>();
            *(int*)(this + 4) = iVar1;
            iVar1 = arg1.gTPE<int>();
        }
        *(int*)(this + 8) = iVar1;
    }

    // 0x100606ad0
    Vector3T<double>* Vector3T<double>::operator[](unsigned int arg1) const {
        if (2 < arg1) {
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector3.inl",
                      203, nullptr);
        }
        return this + (unsigned long)arg1 * 8;
    }

    // 0x100606b10
    Vector3T<double>* Vector3T<double>::operator[](unsigned int arg1) {
        if (2 < arg1) {
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector3.inl",
                      196, nullptr);
        }
        return this + (unsigned long)arg1 * 8;
    }

    // 0x1006075f0
    Vector3T<double>* Vector3T<double>::operator+=(const Vector3T<double>& vector3) {
        *(double*)this = *(double*)this + *(double*)vector3;
        *(double*)(this + 8) = *(double*)(this + 8) + *(double*)(vector3 + 8);
        *(double*)(this + 16) = *(double*)(this + 16) + *(double*)(vector3 + 16);
        return this;
    }

    // 0x100620060
    Vector3T<double>* Vector3T<double>::operator/=(double arg1) {
        double dVar1 = 1.0 / arg1;
        *(double*)this = *(double*)this * dVar1;
        *(double*)(this + 8) = *(double*)(this + 8) * dVar1;
        *(double*)(this + 16) = dVar1 * *(double*)(this + 16);
        return this;
    }

    // 0x100623d30
    Vector3T<double>* Vector3T<double>::Set(const Vector3T<double>& vector3) {
        operator=(this, vector3);
        return this;
    }

    // 0x10064b690
    Vector3T<short>* Vector3T<short>::operator+=(const Vector3T<short>& vector3) {
        *(short*)this = *(short*)this + *(short*)vector3;
        *(short*)(this + 2) = *(short*)(this + 2) + *(short*)(vector3 + 2);
        *(short*)(this + 4) = *(short*)(this + 4) + *(short*)(vector3 + 4);
        return this;
    }

    // 0x1007b46c0
    auto Vector3T<unsigned short>::Set(unsigned short arg1, unsigned short arg2, unsigned short arg3) {
        auto result;
        result = arg1;
        *(unsigned short*)&result.field_2 = arg2;
        *(unsigned short*)&result.field_4 = arg3;
        return result;
    }

    // 0x1007b4740
    auto Vector3T<unsigned char>::Set(unsigned char arg1, unsigned char arg2, unsigned char arg3) {
        auto result;
        result = arg1;
        result.field_1 = arg2;
        result.field_2 = arg3;
        return result;
    }

    // 0x100979770
    auto Vector3T<float>::SetToOne() {
        auto result;
        result = (ReturnValue)4575657222473777152;
        *(uint32_t*)(&result + 1) = 1065353216;
        return result;
    }

    // 0x1009dd730
    unsigned long Vector3T<float>::hash() const {

        return local_20 = 0;
        hash_combine<float>(&local_20, (float*)this);
        hash_combine<float>(&local_20, (float*)(this + 4));
        hash_combine<float>(&local_20, (float*)(this + 8));
        return local_20;
    }

    // 0x100c610c0
    void Vector3T<float>::LengthSq() const {
        Vector3Dot<float>(this, this);
    }

    // 0x100c612e0
    void Vector3T<float>::Length() const {
        float arg1;

        arg1 = (float)LengthSq(this);
        ::sqrt(arg1);
    }

    // 0x100c6ae90
    auto Vector3T<float>::Normalize() {
        auto result;

        float arg1 = (float)InvLength(&result);
        operator*=(&result, arg1);
        return result;
    }

    // 0x100c6b920
    Vector3T<float>* Vector3T<float>::operator*=(float arg1) {
        *(float*)this = *(float*)this * arg1;
        *(float*)(this + 4) = *(float*)(this + 4) * arg1;
        *(float*)(this + 8) = arg1 * *(float*)(this + 8);
        return this;
    }

    // 0x100c6bb00
    float Vector3T<float>::MaxElement() const {
        auto pfVar1 = second();
        auto pfVar2 = SSOBeginPtr();
        auto arg2 = y();
        pfVar2 = std::max<float>(*pfVar2, *arg2);
        pfVar1 = std::max<float>(*pfVar1, *pfVar2);
        return *pfVar1;
    }

    // 0x100c6be60
    Vector3T<float>* Vector3T<float>::operator*=(const Matrix33T<float>& matrix33) {
        float fVar1 = *(float*)this;
        Vector3T<float>* pVVar18 = &matrix33[0];
        auto pfVar19 = operator[](pVVar18, 0);
        float fVar2 = *pfVar19;
        float fVar3 = *(float*)(this + 4);
        pVVar18 = &matrix33[1];
        pfVar19 = (float*)operator[](pVVar18, 0);
        float fVar4 = *pfVar19;
        float fVar5 = *(float*)(this + 8);
        pVVar18 = &matrix33[2];
        pfVar19 = (float*)operator[](pVVar18, 0);
        float fVar6 = *pfVar19;
        float fVar7 = *(float*)this;
        pVVar18 = &matrix33[0];
        pfVar19 = (float*)operator[](pVVar18, 1);
        float fVar8 = *pfVar19;
        float fVar9 = *(float*)(this + 4);
        pVVar18 = &matrix33[1];
        pfVar19 = (float*)operator[](pVVar18, 1);
        float fVar10 = *pfVar19;
        float fVar11 = *(float*)(this + 8);
        pVVar18 = &matrix33[2];
        pfVar19 = (float*)operator[](pVVar18, 1);
        float fVar12 = *pfVar19;
        float fVar13 = *(float*)this;
        pVVar18 = &matrix33[0];
        pfVar19 = (float*)operator[](pVVar18, 2);
        float fVar14 = *pfVar19;
        float fVar15 = *(float*)(this + 4);
        pVVar18 = &matrix33[1];
        pfVar19 = (float*)operator[](pVVar18, 2);
        float fVar16 = *pfVar19;
        float fVar17 = *(float*)(this + 8);
        pVVar18 = &matrix33[2];
        pfVar19 = (float*)operator[](pVVar18, 2);
        *(float*)(this + 8) = fVar17 * *pfVar19 + fVar15 * fVar16 + fVar13 * fVar14;
        *(float*)this = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
        *(float*)(this + 4) = fVar11 * fVar12 + fVar9 * fVar10 + fVar7 * fVar8;
        return this;
    }

    // 0x100c6d9c0
    float Vector3T<float>::MinElement() const {
        auto pfVar1 = second();
        auto pfVar2 = SSOBeginPtr();
        auto arg2 = y();
        pfVar2 = std::min<float>(*pfVar2, *arg2);
        pfVar1 = std::min<float>(*pfVar1, *pfVar2);
        return *pfVar1;
    }

    // 0x100c6e4f0
    Vector3T<float>::Vector3T(float arg1) {
        *(float*)this = arg1;
        *(float*)(this + 4) = arg1;
        *(float*)(this + 8) = arg1;
    }

    // 0x100c6e510
    float Vector3T<float>::InvLength() const {
        float fVar1 = (float)Length(this);
        float fVar2 = 0.0;
        if (fVar1 != 0.0) {
            fVar2 = 1.0 / fVar1;
        }
        return fVar2;
    }

    // 0x100c6efb0
    Vector3T<float>* Vector3T<float>::operator/=(float arg1) {
        float fVar1 = 1.0 / arg1;
        *(float*)this = *(float*)this * fVar1;
        *(float*)(this + 4) = *(float*)(this + 4) * fVar1;
        *(float*)(this + 8) = fVar1 * *(float*)(this + 8);
        return this;
    }

    // 0x100cba770
    Vector3T<float>* Vector3T<float>::operator[](unsigned int arg1) {
        if (2 < arg1) {
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector3.inl",
                      196, nullptr);
        }
        return this + (unsigned long)arg1 * 4;
    }

} // namespace jag::math

namespace jag {
    // 0x100009a70
    Args::~Args() {}

} // namespace jag
