// libs/math/quaternion/Quaternion.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::math {
    template <typename...> // 2 instantiations, e.g. <double>, <float>
    class QuaternionT {
    public:
        QuaternionT<float>* FromAxisAngle(Vector3T<float> const&, float);
        QuaternionT<float>* Set(Vector3T<float> const&, float);
        QuaternionT<float>* Normalise();
        void Serialise<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>(
            oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, bool) const;
        Vector4T<float>* Set(QuaternionT<float> const&);
        QuaternionT<float>* SetToIdentity();
        QuaternionT<float>* Conjugate() const;
        QuaternionT<float>* operator*=(QuaternionT<float> const&);
        Vector4T<float>* operator*=(float);
        QuaternionT<float>* Interpolate(QuaternionT<float> const&, float) const;
        bool operator==(QuaternionT<float> const&);
        ulong operator!=(QuaternionT<float> const&);
        QuaternionT();
        void Length() const;
        QuaternionT<float>* operator/=(float);
        void LengthSq() const;
        QuaternionT(PacketT<Array<unsigned char, eastl::allocator>>&, bool);
        Rect<float>* operator=(QuaternionT<float> const&);
        float Dot(QuaternionT<float> const&) const;
        void Negate() const;
        QuaternionT(float, float, float, float);
        QuaternionT(QuaternionT<float> const&);
        void FromYawPitchRoll(Vector3T<float> const&);
        QuaternionT<double>* operator*=(QuaternionT<double> const&);
        QuaternionT<double>* operator*=(double);
        QuaternionT<double>* operator+=(QuaternionT<double> const&);
        QuaternionT(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, bool);
        QuaternionT<double>* Conjugate() const;
        QuaternionT<double>* Normalise();
        QuaternionT<double>* SetToIdentity();
        QuaternionT<double>* FromAxisAngle(Vector3T<double> const&, double);
        QuaternionT<double>* operator=(QuaternionT<double> const&);
        QuaternionT(double, double, double, double);
        QuaternionT<double>* Set(double, double, double, double);
        double Length() const;
        QuaternionT<double>* operator/=(double);
        QuaternionT<double>* Set(Vector3T<double> const&, double);
        QuaternionT<float>* Inverse() const;
        QuaternionT(Matrix33T<float> const&);
        GetXAxis() const;
        GetYAxis() const;
        GetZAxis() const;
        void FromYawPitchRoll(float, float, float);
        QuaternionT<float>* FromRotationMatrix(Matrix33T<float> const&);
        static QuaternionT<float> /* 16 bytes */ IDENTITY; // = QuaternionT<float>(0.0, 0.0, 0.0, 1.0)
    };

    // 0x100f3c200, 16 bytes, __data; set at startup by ___cxx_global_var_init.175
    QuaternionT<float> QuaternionT<float>::IDENTITY = QuaternionT<float>(0.0, 0.0, 0.0, 1.0);

    // 0x1001f4b80, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.175
    void ___cxx_global_var_init_175() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4778;
        if (*PTR_IDENTITY_100ee4778 == '\0') {
            new (PTR_IDENTITY_100ee6678) QuaternionT<float>(0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1002c9700, 176 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<float>::operator==(QuaternionT<float> const&)
    /* QuaternionT<float>::TEMPNAMEPLACEHOLDERVALUE(QuaternionT<float> const&) */

    bool QuaternionT<float>::operator==(QuaternionT* param_1) {
        float fVar1;
        vector* pvVar2;
        float* pfVar3;

        pvVar2 = SSOBeginPtr(param_1);
        fVar1 = *(float*)pvVar2;
        pvVar2 = param_1->SSOBeginPtr(param_1);
        if (fVar1 == *(float*)pvVar2) {
            pfVar3 = (float*)y();
            fVar1 = *pfVar3;
            pfVar3 = (float*)param_1->y();
            if (fVar1 == *pfVar3) {
                pfVar3 = (float*)second();
                fVar1 = *pfVar3;
                pfVar3 = (float*)param_1->second();
                if (fVar1 == *pfVar3) {
                    pfVar3 = (float*)qw(this);
                    fVar1 = *pfVar3;
                    pfVar3 = (float*)qw((QuaternionT<float>*)param_1);
                    return fVar1 == *pfVar3;
                }
            }
        }
        return false;
    }

    // 0x1002c97b0, 176 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<float>::operator!=(QuaternionT<float> const&)
    /* QuaternionT<float>::TEMPNAMEPLACEHOLDERVALUE(QuaternionT<float> const&) */

    ulong QuaternionT<float>::operator!=(QuaternionT* param_1) {
        float fVar1;
        vector* pvVar2;
        float* pfVar3;
        undefined8 unaff_R15;
        undefined7 uVar6;
        ulong uVar5;

        pvVar2 = SSOBeginPtr(param_1);
        fVar1 = *(float*)pvVar2;
        pvVar2 = param_1->SSOBeginPtr(param_1);
        uVar6 = (undefined7)((ulong)unaff_R15 >> 8);
        uVar5 = CONCAT71(uVar6, 1);
        if (fVar1 == *(float*)pvVar2) {
            pfVar3 = (float*)y();
            fVar1 = *pfVar3;
            pfVar3 = (float*)param_1->y();
            if (fVar1 == *pfVar3) {
                pfVar3 = (float*)second();
                fVar1 = *pfVar3;
                pfVar3 = (float*)param_1->second();
                if (fVar1 == *pfVar3) {
                    pfVar3 = (float*)qw(this);
                    fVar1 = *pfVar3;
                    pfVar3 = (float*)qw((QuaternionT<float>*)param_1);
                    uVar5 = CONCAT71(uVar6, fVar1 != *pfVar3);
                }
            }
        }
        return uVar5 & 4294967295;
    }

    // 0x1002c9860, 16 bytes, inline, placed by debug map only (low confidence)
    // bool operator!=<float>(Vector3T<float> const&, Vector3T<float> const&)
    /* bool TEMPNAMEPLACEHOLDERVALUE(Vector3T<float> const&,
   Vector3T<float> const&) */

    bool operator!=(Vector3T* param_1, Vector3T* param_2) {
        bool bVar1;

        bVar1 = operator==(param_1, param_2);
        return !bVar1;
    }

    // 0x1002c9870, 32 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float>::IsUniform() const
    bool Vector3T<float>::IsUniform() {
        if (*(float*)this == *(float*)(this + 4)) {
            return *(float*)this == *(float*)(this + 8);
        }
        return false;
    }

    // 0x1002e31f0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // QuaternionT<float>::QuaternionT(): jumps straight to the base-object constructor

    // 0x1002e3200, 16 bytes, base-object constructor, inline, placed by class header (inline)
    // QuaternionT<float>::QuaternionT()
    void QuaternionT<float>::QuaternionT() {
        SetToIdentity(this);
    }

    // 0x1002e3400, 16 bytes, inline, placed by class header (inline)
    // QuaternionT<float>::Length() const
    void QuaternionT<float>::Length() {
        float fVar1;

        fVar1 = (float)LengthSq(this);
        ::sqrt(fVar1);
    }

    // 0x1002e3410, 80 bytes, inline, placed by class header (inline)
    // QuaternionT<float>::operator/=(float)
    /* QuaternionT<float>::TEMPNAMEPLACEHOLDERVALUE(float) */

    QuaternionT<float>* QuaternionT<float>::operator/=(float param_1) {
        float fVar1;

        fVar1 = 1.0 / param_1;
        *(float*)this = *(float*)this * fVar1;
        *(float*)(this + 4) = *(float*)(this + 4) * fVar1;
        *(float*)(this + 8) = *(float*)(this + 8) * fVar1;
        *(float*)(this + 12) = fVar1 * *(float*)(this + 12);
        return this;
    }

    // 0x1002e3460, 16 bytes, inline, placed by class header (inline)
    // QuaternionT<float>::LengthSq() const
    void QuaternionT<float>::LengthSq() {
        QuaternionDot<float>((QuaternionT*)this, (QuaternionT*)this);
    }

    // 0x1002e35c0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // QuaternionT<float>::QuaternionT(PacketT<Array<unsigned char, eastl::allocator> >&, bool): jumps straight to the base-object constructor

    // 0x1002e35d0, 128 bytes, base-object constructor, inline, placed by class header (inline)
    // QuaternionT<float>::QuaternionT(PacketT<Array<unsigned char, eastl::allocator> >&, bool)
    void QuaternionT<float>::QuaternionT(PacketT* param_1, bool param_2) {
        undefined3 in_register_00000011;
        float fVar1;

        if (CONCAT31(in_register_00000011, param_2) == 0) {
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gT<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
            *(float*)this = fVar1;
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gT<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
            *(float*)(this + 4) = fVar1;
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gT<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
            *(float*)(this + 8) = fVar1;
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gT<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
        } else {
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gTPE<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
            *(float*)this = fVar1;
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gTPE<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
            *(float*)(this + 4) = fVar1;
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gTPE<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
            *(float*)(this + 8) = fVar1;
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gTPE<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
        }
        *(float*)(this + 12) = fVar1;
    }

    // 0x1002e3770, 48 bytes, inline, placed by class header (inline)
    // QuaternionT<float>::operator=(QuaternionT<float> const&)
    /* Rect<float>::TEMPNAMEPLACEHOLDERVALUE(Rect<float> const&) */

    Rect<float>* Rect<float>::operator=(Rect* param_1) {
        *(undefined4*)this = *(undefined4*)param_1;
        *(undefined4*)(this + 4) = *(undefined4*)(param_1 + 4);
        *(undefined4*)(this + 8) = *(undefined4*)(param_1 + 8);
        *(undefined4*)(this + 12) = *(undefined4*)(param_1 + 12);
        return this;
    }

    // 0x1002e3c80, 64 bytes, inline, placed by class header (inline)
    // QuaternionT<float>::Dot(QuaternionT<float> const&) const
    /* float Vector4Dot<float>(Vector4T<float> const&, Vector4T<float>
   const&) */

    float Vector4Dot<float>(Vector4T* param_1, Vector4T* param_2) {
        return *(float*)(param_1 + 12) * field_12 + *(float*)(param_1 + 8) * field_8 +
               *(float*)(param_1 + 4) * field_4 + *(float*)param_1 * field_0;
    }

    // 0x1002e3cc0, 64 bytes, inline, placed by class header (inline)
    // QuaternionT<float>::Negate() const
    void QuaternionT<float>::Negate() {
        float* in_RSI;
        QuaternionT<float>* in_RDI;

        QuaternionT(in_RDI, -*in_RSI, -in_RSI[1], -in_RSI[2], -in_RSI[3]);
    }

    // 0x1004c8370, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // QuaternionT<float>::QuaternionT(float, float, float, float): jumps straight to the base-object constructor

    // 0x1004c91d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // QuaternionT<float>::QuaternionT(QuaternionT<float> const&): jumps straight to the base-object constructor

    // 0x1004c91e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Matrix33T<float>::Matrix33T(): jumps straight to the base-object constructor

    // 0x1004c91f0, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // QuaternionT<float>::QuaternionT(QuaternionT<float> const&)
    void QuaternionT<float>::QuaternionT(QuaternionT* param_1) {
        vector* pvVar1;
        undefined4* puVar2;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        *(undefined4*)this = *(undefined4*)pvVar1;
        puVar2 = (undefined4*)param_1->y();
        *(undefined4*)(this + 4) = *puVar2;
        puVar2 = (undefined4*)param_1->second();
        *(undefined4*)(this + 8) = *puVar2;
        puVar2 = (undefined4*)qw((QuaternionT<float>*)param_1);
        *(undefined4*)(this + 12) = *puVar2;
    }

    // 0x1004c9250, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Matrix33T<float>::Matrix33T()
    void Matrix33T<float>::Matrix33T() {
        long lVar1;

        lVar1 = 0;
        do {
            new ((this + lVar1)) Vector3T<int>();
            lVar1 = lVar1 + 12;
        } while (lVar1 != 36);
    }

    // 0x1004cad80, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // QuaternionT<float>::QuaternionT(float, float, float, float)
    void QuaternionT<float>::QuaternionT(float param_1, float param_2, float param_3, float param_4) {
        Set(this, param_1, param_2, param_3, param_4);
    }

    // 0x100540b90, 96 bytes, inline, placed by class header (inline)
    // QuaternionT<float>::FromYawPitchRoll(Vector3T<float> const&)
    void QuaternionT<float>::FromYawPitchRoll(Vector3T* param_1) {
        float fVar1;
        float fVar2;
        vector* pvVar3;
        float* pfVar4;

        pvVar3 = param_1->SSOBeginPtr(param_1);
        fVar1 = *(float*)pvVar3;
        pfVar4 = (float*)param_1->y();
        fVar2 = *pfVar4;
        pfVar4 = (float*)param_1->second();
        FromYawPitchRoll(this, fVar1, fVar2, *pfVar4);
    }

    // 0x100616850, 400 bytes, inline, placed by class header (inline)
    // QuaternionT<double>::operator*=(QuaternionT<double> const&)
    /* QuaternionT<double>::TEMPNAMEPLACEHOLDERVALUE(QuaternionT<double> const&)
    */

    QuaternionT<double>* QuaternionT<double>::operator*=(QuaternionT* param_1) {
        double dVar1;
        double dVar2;
        double dVar3;
        double dVar4;
        double dVar5;
        double dVar6;
        double dVar7;
        double dVar8;
        vector* pvVar9;
        double* pdVar10;

        pvVar9 = SSOBeginPtr(param_1);
        dVar1 = *(double*)pvVar9;
        pdVar10 = (double*)second();
        dVar2 = *pdVar10;
        pdVar10 = (double*)GetScreen();
        dVar3 = *pdVar10;
        pdVar10 = (double*)second();
        dVar4 = *pdVar10;
        pvVar9 = param_1->SSOBeginPtr(param_1);
        dVar5 = *(double*)pvVar9;
        pdVar10 = (double*)param_1->second();
        dVar6 = *pdVar10;
        pdVar10 = (double*)param_1->GetScreen();
        dVar7 = *pdVar10;
        pdVar10 = (double*)param_1->second();
        dVar8 = *pdVar10;
        *(double*)this = (dVar5 * dVar4 - dVar6 * dVar3) + dVar7 * dVar2 + dVar8 * dVar1;
        *(double*)(this + 8) = ((dVar5 * dVar3 + dVar6 * dVar4) - dVar7 * dVar1) + dVar8 * dVar2;
        *(double*)(this + 16) = (dVar6 * dVar1 - dVar5 * dVar2) + dVar8 * dVar3 + dVar7 * dVar4;
        *(double*)(this + 24) = dVar8 * dVar4 - (dVar7 * dVar3 + dVar6 * dVar2 + dVar5 * dVar1);
        return this;
    }

    // 0x10061cd60, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // QuaternionT<double>::QuaternionT(QuaternionT<float> const&): jumps straight to the base-object constructor

    // 0x10061d040, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // QuaternionT<float>::QuaternionT(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&, bool): jumps straight to the base-object constructor

    // 0x10061fd40, 64 bytes, inline, placed by class header (inline)
    // QuaternionT<double>::Conjugate() const
    QuaternionT<double>* QuaternionT<double>::Conjugate() {
        double* in_RSI;

        QuaternionT(this, -*in_RSI, -in_RSI[1], -in_RSI[2], in_RSI[3]);
        return this;
    }

    // 0x1007a2490, 112 bytes, inline, placed by class header (inline)
    // QuaternionT<float>::Inverse() const
    QuaternionT<float>* QuaternionT<float>::Inverse() {
        QuaternionT<float>* in_RSI;
        float fVar1;

        QuaternionT(this);
        fVar1 = (float)LengthSq(in_RSI);
        fVar1 = 1.0 / fVar1;
        *(float*)this = -*(float*)in_RSI * fVar1;
        *(float*)(this + 4) = *(float*)(in_RSI + 4) * -fVar1;
        *(float*)(this + 8) = -fVar1 * *(float*)(in_RSI + 8);
        *(float*)(this + 12) = fVar1 * *(float*)(in_RSI + 12);
        return this;
    }

    // 0x1009db6e0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // QuaternionT<float>::QuaternionT(Matrix33T<float> const&): jumps straight to the base-object constructor

    // 0x1009dc3d0, 144 bytes, inline, placed by class header (inline)
    // QuaternionT<float>::GetXAxis() const
    undefined8 QuaternionT<float>::GetXAxis() {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        undefined8* puVar5;
        float fVar6;
        float fVar7;
        ColourHSL local_20;

        fVar1 = *(float*)this;
        fVar2 = *(float*)(this + 4);
        fVar3 = *(float*)(this + 8);
        fVar4 = *(float*)(this + 12);
        fVar6 = fVar3 * fVar4 + fVar2 * fVar1;
        fVar7 = fVar3 * fVar1 - fVar2 * fVar4;
        new (&local_20)
            ColourHSL((fVar4 * fVar4 + fVar1 * fVar1) - (fVar2 * fVar2 + fVar3 * fVar3), fVar6 + fVar6, fVar7 + fVar7);
        puVar5 = (undefined8*)local_20.Normalize();
        return *puVar5;
    }

    // 0x1009dc4c0, 144 bytes, inline, placed by class header (inline)
    // QuaternionT<float>::GetYAxis() const
    undefined8 QuaternionT<float>::GetYAxis() {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        undefined8* puVar5;
        float fVar6;
        float fVar7;
        ColourHSL local_20;

        fVar1 = *(float*)this;
        fVar2 = *(float*)(this + 4);
        fVar3 = *(float*)(this + 12);
        fVar4 = *(float*)(this + 8);
        fVar6 = fVar2 * fVar1 - fVar4 * fVar3;
        fVar7 = fVar4 * fVar2 + fVar3 * fVar1;
        new (&local_20)
            ColourHSL(fVar6 + fVar6, (fVar3 * fVar3 + fVar2 * fVar2) - (fVar4 * fVar4 + fVar1 * fVar1), fVar7 + fVar7);
        puVar5 = (undefined8*)local_20.Normalize();
        return *puVar5;
    }

    // 0x1009dc5b0, 144 bytes, inline, placed by class header (inline)
    // QuaternionT<float>::GetZAxis() const
    undefined8 QuaternionT<float>::GetZAxis() {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        undefined8* puVar5;
        float fVar6;
        float fVar7;
        ColourHSL local_20;

        fVar1 = *(float*)(this + 8);
        fVar2 = *(float*)(this + 12);
        fVar3 = *(float*)this;
        fVar4 = *(float*)(this + 4);
        fVar6 = fVar1 * fVar3 + fVar4 * fVar2;
        fVar7 = fVar4 * fVar1 - fVar2 * fVar3;
        new (&local_20)
            ColourHSL(fVar6 + fVar6, fVar7 + fVar7, (fVar2 * fVar2 + fVar1 * fVar1) - (fVar4 * fVar4 + fVar3 * fVar3));
        puVar5 = (undefined8*)local_20.Normalize();
        return *puVar5;
    }

    // 0x1009dc6d0, 288 bytes, inline, placed by class header (inline)
    // QuaternionT<float>::FromYawPitchRoll(float, float, float)
    void QuaternionT<float>::FromYawPitchRoll(float param_1, float param_2, float param_3) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;

        fVar1 = (float)::sin(param_1 * 0.5);
        fVar2 = (float)::cos(param_1 * 0.5);
        fVar3 = (float)::sin(param_2 * 0.5);
        fVar4 = (float)::cos(param_2 * 0.5);
        fVar5 = (float)::sin(param_3 * 0.5);
        fVar6 = (float)::cos(param_3 * 0.5);
        Set(this, fVar6 * fVar3 * fVar2 + fVar4 * fVar1 * fVar5, fVar6 * fVar4 * fVar1 - fVar3 * fVar2 * fVar5,
            fVar4 * fVar2 * fVar5 - fVar6 * fVar3 * fVar1, fVar3 * fVar1 * fVar5 + fVar4 * fVar2 * fVar6);
    }

    // 0x1009ddde0, 16 bytes, base-object constructor, inline, placed by class header (inline)
    // QuaternionT<float>::QuaternionT(Matrix33T<float> const&)
    void QuaternionT<float>::QuaternionT(Matrix33T* param_1) {
        FromRotationMatrix(this, param_1);
    }

    // 0x1009dddf0, 1072 bytes, inline, placed by class header (inline)
    // QuaternionT<float>::FromRotationMatrix(Matrix33T<float> const&)
    QuaternionT<float>* QuaternionT<float>::FromRotationMatrix(Matrix33T* param_1) {
        uint uVar1;
        bool bVar2;
        Vector3T<float>* pVVar3;
        float* pfVar4;
        uint uVar5;
        uint uVar6;
        ulong uVar7;
        float fVar8;
        float fVar9;
        float local_48[4];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pVVar3 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 0);
        pfVar4 = (float*)Vector3T<float>::operator[](pVVar3, 0);
        fVar9 = *pfVar4;
        pVVar3 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 1);
        pfVar4 = (float*)Vector3T<float>::operator[](pVVar3, 1);
        fVar8 = *pfVar4;
        pVVar3 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 2);
        pfVar4 = (float*)Vector3T<float>::operator[](pVVar3, 2);
        fVar9 = fVar9 + fVar8 + *pfVar4;
        if (fVar9 <= 0.0) {
            pVVar3 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 1);
            pfVar4 = (float*)Vector3T<float>::operator[](pVVar3, 1);
            fVar9 = *pfVar4;
            pVVar3 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 0);
            pfVar4 = (float*)Vector3T<float>::operator[](pVVar3, 0);
            bVar2 = *pfVar4 <= fVar9 && fVar9 != *pfVar4;
            pVVar3 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 2);
            pfVar4 = (float*)Vector3T<float>::operator[](pVVar3, 2);
            fVar9 = *pfVar4;
            uVar5 = (uint)bVar2;
            pVVar3 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, uVar5);
            pfVar4 = (float*)Vector3T<float>::operator[](pVVar3, (uint)bVar2);
            uVar7 = (ulong)uVar5;
            if (*pfVar4 <= fVar9 && fVar9 != *pfVar4) {
                uVar7 = 2;
            }
            uVar5 = *(uint*)(&DAT_100d4fe54 + uVar7 * 4);
            uVar1 = *(uint*)(&DAT_100d4fe54 + (long)(int)uVar5 * 4);
            uVar6 = (uint)uVar7;
            pVVar3 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, uVar6);
            pfVar4 = (float*)Vector3T<float>::operator[](pVVar3, uVar6);
            fVar9 = *pfVar4;
            pVVar3 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, uVar5);
            pfVar4 = (float*)Vector3T<float>::operator[](pVVar3, uVar5);
            fVar8 = *pfVar4;
            pVVar3 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, uVar1);
            pfVar4 = (float*)Vector3T<float>::operator[](pVVar3, uVar1);
            fVar9 = (float)::sqrt((fVar9 + 1.0) - (fVar8 + *pfVar4));
            local_48[uVar7] = fVar9 * 0.5;
            if (fVar9 != 0.0) {
                fVar9 = 0.5 / fVar9;
            }
            pVVar3 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, uVar5);
            pfVar4 = (float*)Vector3T<float>::operator[](pVVar3, uVar1);
            fVar8 = *pfVar4;
            pVVar3 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, uVar1);
            pfVar4 = (float*)Vector3T<float>::operator[](pVVar3, uVar5);
            local_48[3] = (fVar8 - *pfVar4) * fVar9;
            pVVar3 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, uVar6);
            pfVar4 = (float*)Vector3T<float>::operator[](pVVar3, uVar5);
            fVar8 = *pfVar4;
            pVVar3 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, uVar5);
            pfVar4 = (float*)Vector3T<float>::operator[](pVVar3, uVar6);
            local_48[(int)uVar5] = (fVar8 + *pfVar4) * fVar9;
            pVVar3 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, uVar6);
            pfVar4 = (float*)Vector3T<float>::operator[](pVVar3, uVar1);
            fVar8 = *pfVar4;
            pVVar3 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, uVar1);
            pfVar4 = (float*)Vector3T<float>::operator[](pVVar3, uVar6);
            local_48[(int)uVar1] = (fVar8 + *pfVar4) * fVar9;
            *(float*)this = local_48[0];
            *(float*)(this + 4) = local_48[1];
            *(float*)(this + 8) = local_48[2];
            *(float*)(this + 12) = local_48[3];
        } else {
            fVar8 = (float)::sqrt(fVar9 + 1.0);
            *(float*)(this + 12) = fVar8 * 0.5;
            fVar8 = 0.5 / fVar8;
            pVVar3 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 1);
            pfVar4 = (float*)Vector3T<float>::operator[](pVVar3, 2);
            fVar9 = *pfVar4;
            pVVar3 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 2);
            pfVar4 = (float*)Vector3T<float>::operator[](pVVar3, 1);
            *(float*)this = (fVar9 - *pfVar4) * fVar8;
            pVVar3 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 2);
            pfVar4 = (float*)Vector3T<float>::operator[](pVVar3, 0);
            fVar9 = *pfVar4;
            pVVar3 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 0);
            pfVar4 = (float*)Vector3T<float>::operator[](pVVar3, 2);
            *(float*)(this + 4) = (fVar9 - *pfVar4) * fVar8;
            pVVar3 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 0);
            pfVar4 = (float*)Vector3T<float>::operator[](pVVar3, 1);
            fVar9 = *pfVar4;
            pVVar3 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 1);
            pfVar4 = (float*)Vector3T<float>::operator[](pVVar3, 0);
            *(float*)(this + 8) = (fVar9 - *pfVar4) * fVar8;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

} // namespace jag::math

namespace jag::game {
    // 0x1004c86b0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // VarDomainTypePlayerNPC::VarDomainTypePlayerNPC(unsigned int, Js5ConfigGroup const*, bool, bool)
    void VarDomainTypePlayerNPC::VarDomainTypePlayerNPC(uint param_1, Js5ConfigGroup* param_2, bool param_3,
                                                        bool param_4) {
        new (this) VarDomainType(param_1, param_2, param_3, param_4);
        field_0 = PTR_vtable_100ee8010 + 16;
        new (&field_32, -1) VarValue();
    }

    // 0x1004c8770, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // VarDomainTypePlayerNPC::~VarDomainTypePlayerNPC(): jumps straight to the base-object destructor

    // 0x1004c8780, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // VarDomainTypePlayerNPC::~VarDomainTypePlayerNPC()
    void VarDomainTypePlayerNPC::~VarDomainTypePlayerNPC() {
        ~VarDomainTypePlayerNPC(this);
        operator_delete(this);
    }

    // 0x1004c87a0, 80 bytes, inline, placed by debug map only (low confidence)
    // VarDomainTypePlayerNPC::GetDefaultValue(VarType const*) const
    undefined1* VarDomainTypePlayerNPC::GetDefaultValue(VarType* param_1) {
        long lVar2;
        NXTPixToolkit* this_00;

        if ((param_1->LegacyDefaultValue() == '\0') ||
            (lVar2 = param_1->GetOutputType(), lVar2 != ScriptVarType::BOOLEAN)) {
            this_00 = (NXTPixToolkit*)param_1->GetOutputType();
            return (undefined1*)this_00->GetScreen();
        }
        return &field_32;
    }

    // 0x1004c8b50, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // VarDomainTypePlayerNPC::~VarDomainTypePlayerNPC()
    void VarDomainTypePlayerNPC::~VarDomainTypePlayerNPC() {
        field_0 = PTR_vtable_100ee8010 + 16;
        (&field_32)->~VarValue();
        ~AutoSingleton();
    }

    // 0x1004c8df0, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // VarDomainTypeClient::VarDomainTypeClient(unsigned int, Js5ConfigGroup const*, bool, bool)
    void VarDomainTypeClient::VarDomainTypeClient(uint param_1, Js5ConfigGroup* param_2, bool param_3, bool param_4) {
        new (this) VarDomainType(param_1, param_2, param_3, param_4);
        field_0 = PTR_vtable_100ee7fe8 + 16;
        new (&field_32, -1) VarValue();
    }

    // 0x1004c8e40, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // VarDomainTypeClient::~VarDomainTypeClient(): jumps straight to the base-object destructor

    // 0x1004c8e50, 32 bytes, deleting destructor, inline, placed by debug map only (low confidence)
    // VarDomainTypeClient::~VarDomainTypeClient()
    void VarDomainTypeClient::~VarDomainTypeClient() {
        ~VarDomainTypeClient(this);
        operator_delete(this);
    }

    // 0x1004c8e70, 112 bytes, inline, placed by debug map only (low confidence)
    // VarDomainTypeClient::GetDefaultValue(VarType const*) const
    undefined1* VarDomainTypeClient::GetDefaultValue(VarType* param_1) {
        long lVar2;
        NXTPixToolkit* this_00;
        undefined1* puVar3;

        if (param_1->LegacyDefaultValue() == '\0') {
        LAB_1004c8eb1:
            this_00 = (NXTPixToolkit*)param_1->GetOutputType();
            puVar3 = (undefined1*)this_00->GetScreen();
        } else {
            lVar2 = param_1->GetOutputType();
            if (lVar2 != ScriptVarType::INT) {
                lVar2 = param_1->GetOutputType();
                if (lVar2 != ScriptVarType::BOOLEAN)
                    goto LAB_1004c8eb1;
            }
            puVar3 = &field_32;
        }
        return puVar3;
    }

    // 0x1004c8ee0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // VarDomainTypeClient::~VarDomainTypeClient()
    void VarDomainTypeClient::~VarDomainTypeClient() {
        field_0 = PTR_vtable_100ee7fe8 + 16;
        (&field_32)->~VarValue();
        ~AutoSingleton();
    }

    // 0x1004c8f10, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // VarDomainTypeNormal::VarDomainTypeNormal(unsigned int, Js5ConfigGroup const*, bool, bool)
    void VarDomainTypeNormal::VarDomainTypeNormal(uint param_1, Js5ConfigGroup* param_2, bool param_3, bool param_4) {
        new (this) VarDomainType(param_1, param_2, param_3, param_4);
        field_0 = PTR_vtable_100ee7ff0 + 16;
    }

    // 0x1004c8f40, 32 bytes, inline, placed by debug map only (low confidence)
    // VarDomainTypeNormal::GetDefaultValue(VarType const*) const
    void VarDomainTypeNormal::GetDefaultValue(VarType* param_1) {
        NXTPixToolkit* this_00;

        this_00 = (NXTPixToolkit*)param_1->GetOutputType();
        this_00->GetScreen();
    }

} // namespace jag::game

namespace jag {
    // 0x1002c9890, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<math::QuaternionT<float> >::type make_shared<math::QuaternionT<float>, float&, float&, float&, float&>(float&, float&, float&, float&)
    jag* make_shared<math::QuaternionT<float>, float&, float&, float&, float&>(float* param_1, float* param_2,
                                                                               float* param_3, float* param_4) {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_44;
        QuaternionT* local_40[2];

        pvVar1 = (void*)aligned_alloc(32, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<math::QuaternionT<float>, float&, float&, float&, float&>(
                (void*)((long)pvVar1 + 16), param_1, param_2, param_3, param_4);
            local_44 = 1;
            prVar2 =
                placement_new<ref_counter_shared_trivial<math::QuaternionT<float>>, int, math::QuaternionT<float>*&>(
                    pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x1004cbed0, 144 bytes, inline, placed by debug map only (low confidence)
    // float PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gT<float>()
    float PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gT<float>(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this) {
        ulong uVar1;
        long lVar2;
        undefined8 uVar3;
        long lVar4;
        ulong uVar5;
        undefined8 uVar6;
        float local_2c;

        lVar4 = data();
        lVar2 = *(long*)(this + 24);
        uVar1 = lVar2 + 4;
        *(ulong*)(this + 24) = uVar1;
        uVar5 = end();
        if (uVar5 < uVar1) {
            uVar3 = *(undefined8*)(this + 24);
            uVar6 = end();
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                13, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        local_2c = *(float*)(lVar4 + lVar2);
        ReorderToBE<float>(&local_2c);
        return local_2c;
    }

    // 0x1004cbf60, 48 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // void ReorderFromBE<float>(float&)
    /* void ReorderToBE<float>(float&) */

    void ReorderToBE<float>(float* param_1) {
        if (IsLittleEndian() != '\0') {
            DoByteReorder<EndianSwap, float>(param_1);
        }
    }

    // 0x1004cbf90, 16 bytes, inline, placed by debug map only (low confidence)
    // void DoByteReorder<EndianSwap, float>(float&)
    void DoByteReorder<EndianSwap, float>(float* param_1) {
        DoByteReorder<EndianSwap, int>((int*)param_1);
    }

    // 0x1004cbfa0, 144 bytes, inline, placed by debug map only (low confidence)
    // short PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gT<short>()
    short PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gT<short>(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this) {
        ulong uVar1;
        long lVar2;
        undefined8 uVar3;
        long lVar4;
        ulong uVar5;
        undefined8 uVar6;
        short local_2a;

        lVar4 = data();
        lVar2 = *(long*)(this + 24);
        uVar1 = lVar2 + 2;
        *(ulong*)(this + 24) = uVar1;
        uVar5 = end();
        if (uVar5 < uVar1) {
            uVar3 = *(undefined8*)(this + 24);
            uVar6 = end();
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                13, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        local_2a = *(short*)(lVar4 + lVar2);
        ReorderToBE<short>(&local_2a);
        return local_2a;
    }

} // namespace jag
