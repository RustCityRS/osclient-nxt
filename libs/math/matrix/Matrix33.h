// libs/math/matrix/Matrix33.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::math {
    template <typename...> // 1 instantiations, e.g. <float>
    class Matrix33T {
    public:
        Matrix33T<float>* operator[](unsigned int) const;
        Matrix33T(float, float, float, float, float, float, float, float, float);
        Matrix33T<float>* Orthonormalise(Matrix33T<float> const&);
        Matrix33T<float>* operator[](unsigned int);
        Up();
        Matrix33T<float>* operator=(Matrix33T<float>&&);
        void operator*=(Matrix33T<float> const&);
        Matrix33T(Vector3T<float> const&, Vector3T<float> const&, Vector3T<float> const&);
        Matrix33T<float>* Transpose();
        Matrix33T();
        void SetToDiagonal(float, float, float);
        Matrix33T<float>* LookAt(Vector3T<float> const&, Vector3T<float>);
        Matrix33T(QuaternionT<float> const&);
        Matrix33T<float>* Invert(float*);
        Matrix33T<float>* Set(QuaternionT<float> const&);
        void SetToIdentity();
        float Determinant() const;
        Matrix33T<float>* Set(float, float, float, float, float, float, float, float, float);
        static Matrix33T<float> /* 48 bytes */
            IDENTITY;           // = Matrix33T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0)
    };

    // 0x100f373c0, 48 bytes, __data; set at startup by ___cxx_global_var_init.171
    Matrix33T<float> Matrix33T<float>::IDENTITY = Matrix33T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0);

    // 0x1001a4210, 176 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Matrix33T<float>::Matrix33T(float, float, float, float, float, float, float, float, float)
    void Matrix33T<float>::Matrix33T(float param_1, float param_2, float param_3, float param_4, float param_5,
                                     float param_6, float param_7, float param_8, float param_9) {
        long lVar1;

        lVar1 = 0;
        do {
            new ((this + lVar1)) Vector3T<int>();
            lVar1 = lVar1 + 12;
        } while (lVar1 != 36);
        Set(param_1, param_2, param_3);
        ((this + 12))->Set(param_4, param_5, param_6);
        ((this + 24))->Set(param_7, param_8, param_9);
    }

    // 0x1001a42c0, 32 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float>::Set(float, float, float)
    Vector3T<float>* Vector3T<float>::Set(float param_1, float param_2, float param_3) {
        *(float*)this = param_1;
        *(float*)(this + 4) = param_2;
        *(float*)(this + 8) = param_3;
        return this;
    }

    // 0x1001a5350, 224 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Matrix44T<float>::Matrix44T(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float)
    void Matrix44T<float>::Matrix44T(float param_1, float param_2, float param_3, float param_4, float param_5,
                                     float param_6, float param_7, float param_8, float param_9, float param_10,
                                     float param_11, float param_12, float param_13, float param_14, float param_15,
                                     float param_16) {
        long lVar1;

        lVar1 = 0;
        do {
            new ((this + lVar1)) Vector4T<float>();
            lVar1 = lVar1 + 16;
        } while (lVar1 != 64);
        Set(param_1, param_2, param_3, param_4);
        ((this + 16))->Set(param_5, param_6, param_7, param_8);
        ((this + 32))->Set(param_9, param_10, param_11, param_12);
        ((this + 48))->Set(param_13, param_14, param_15, param_16);
    }

    // 0x1001a5430, 32 bytes, inline, placed by debug map only (low confidence)
    // Vector4T<float>::Set(float, float, float, float)
    /* QuaternionT<float>::Set(float, float, float, float) */

    QuaternionT<float>* QuaternionT<float>::Set(float param_1, float param_2, float param_3, float param_4) {
        *(float*)this = param_1;
        *(float*)(this + 4) = param_2;
        *(float*)(this + 8) = param_3;
        *(float*)(this + 12) = param_4;
        return this;
    }

    // 0x1001f4a80, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.171
    void ___cxx_global_var_init_171() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4810;
        if (*PTR_IDENTITY_100ee4810 == '\0') {
            new (PTR_IDENTITY_100ee6718) Matrix33T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10036f170, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Matrix33T<float>::Matrix33T(Vector3T<float> const&, Vector3T<float> const&, Vector3T<float> const&): jumps straight to the base-object constructor

    // 0x1007b0240, 48 bytes, inline, placed by class header (inline)
    // Matrix33T<float>::SetToDiagonal(float, float, float)
    void Matrix33T<float>::SetToDiagonal(float param_1, float param_2, float param_3) {
        Matrix33T<float>* in_RDI;

        Set(in_RDI, param_1, 0.0, 0.0, 0.0, param_2, 0.0, 0.0, 0.0, param_3);
    }

    // 0x1009dcb20, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Matrix33T<float>::Matrix33T(QuaternionT<float> const&): jumps straight to the base-object constructor

    // 0x1009dd190, 912 bytes, inline, placed by class header (inline)
    // Matrix33T<float>::Invert(float*)
    Matrix33T<float>* Matrix33T<float>::Invert(float* param_1) {
        Vector3T<float>* this_00;
        Vector3T<float>* this_01;
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float* pfVar10;
        float fVar11;

        pfVar10 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 0);
        fVar1 = *pfVar10;
        pfVar10 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 1);
        fVar2 = *pfVar10;
        pfVar10 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 2);
        fVar3 = *pfVar10;
        this_00 = (Vector3T<float>*)(this + 12);
        pfVar10 = (float*)Vector3T<float>::operator[](this_00, 0);
        fVar4 = *pfVar10;
        pfVar10 = (float*)Vector3T<float>::operator[](this_00, 1);
        fVar5 = *pfVar10;
        pfVar10 = (float*)Vector3T<float>::operator[](this_00, 2);
        fVar6 = *pfVar10;
        this_01 = (Vector3T<float>*)(this + 24);
        pfVar10 = (float*)Vector3T<float>::operator[](this_01, 0);
        fVar7 = *pfVar10;
        pfVar10 = (float*)Vector3T<float>::operator[](this_01, 1);
        fVar8 = *pfVar10;
        pfVar10 = (float*)Vector3T<float>::operator[](this_01, 2);
        fVar9 = *pfVar10;
        fVar11 = (fVar8 * fVar4 * fVar3 + fVar7 * fVar6 * fVar2 + fVar9 * fVar5 * fVar1) -
                 (fVar9 * fVar4 * fVar2 + fVar8 * fVar6 * fVar1 + fVar7 * fVar5 * fVar3);
        if (fVar11 != 0.0) {
            if (param_1 != (float*)0) {
                *param_1 = fVar11;
            }
            fVar11 = 1.0 / fVar11;
            pfVar10 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 0);
            *pfVar10 = (fVar9 * fVar5 - fVar8 * fVar6) * fVar11;
            pfVar10 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 1);
            *pfVar10 = (fVar8 * fVar3 - fVar9 * fVar2) * fVar11;
            pfVar10 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 2);
            *pfVar10 = (fVar6 * fVar2 - fVar5 * fVar3) * fVar11;
            pfVar10 = (float*)Vector3T<float>::operator[](this_00, 0);
            *pfVar10 = (fVar6 * fVar7 - fVar9 * fVar4) * fVar11;
            pfVar10 = (float*)Vector3T<float>::operator[](this_00, 1);
            *pfVar10 = (fVar9 * fVar1 - fVar3 * fVar7) * fVar11;
            pfVar10 = (float*)Vector3T<float>::operator[](this_00, 2);
            *pfVar10 = (fVar4 * fVar3 - fVar6 * fVar1) * fVar11;
            pfVar10 = (float*)Vector3T<float>::operator[](this_01, 0);
            *pfVar10 = (fVar4 * fVar8 - fVar5 * fVar7) * fVar11;
            pfVar10 = (float*)Vector3T<float>::operator[](this_01, 1);
            *pfVar10 = (fVar7 * fVar2 - fVar8 * fVar1) * fVar11;
            pfVar10 = (float*)Vector3T<float>::operator[](this_01, 2);
            *pfVar10 = (fVar5 * fVar1 - fVar4 * fVar2) * fVar11;
        }
        return this;
    }

    // 0x1009de260, 80 bytes, base-object constructor, inline, placed by class header (inline)
    // Matrix33T<float>::Matrix33T(QuaternionT<float> const&)
    void Matrix33T<float>::Matrix33T(QuaternionT* param_1) {
        long lVar1;

        lVar1 = 0;
        do {
            new ((this + lVar1)) Vector3T<int>();
            lVar1 = lVar1 + 12;
        } while (lVar1 != 36);
        Set(this, param_1);
    }

    // 0x1009de2b0, 240 bytes, inline, placed by class header (inline)
    // Matrix33T<float>::Set(QuaternionT<float> const&)
    Matrix33T<float>* Matrix33T<float>::Set(QuaternionT* param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;

        fVar1 = *(float*)param_1;
        fVar2 = *(float*)(param_1 + 4);
        fVar5 = fVar2 + fVar2;
        fVar3 = *(float*)(param_1 + 8);
        fVar7 = fVar3 + fVar3;
        fVar4 = *(float*)(param_1 + 12);
        fVar8 = fVar4 * (fVar1 + fVar1);
        *(float*)this = -fVar2 * fVar5 + 1.0 + -fVar3 * fVar7;
        *(float*)(this + 4) = fVar7 * fVar4 + fVar5 * fVar1;
        *(float*)(this + 8) = fVar7 * fVar1 - fVar5 * fVar4;
        *(float*)(this + 12) = fVar5 * fVar1 - fVar7 * fVar4;
        fVar6 = 1.0 - (fVar1 + fVar1) * fVar1;
        *(float*)(this + 16) = -fVar3 * fVar7 + fVar6;
        *(float*)(this + 20) = fVar7 * fVar2 + fVar8;
        *(float*)(this + 24) = fVar5 * fVar4 + fVar7 * fVar1;
        *(float*)(this + 28) = fVar7 * fVar2 - fVar8;
        *(float*)(this + 32) = fVar6 + -fVar2 * fVar5;
        return this;
    }

    // 0x100c6b8e0, 64 bytes, inline, placed by class header (inline)
    // Matrix33T<float>::SetToIdentity()
    void Matrix33T<float>::SetToIdentity() {
        Set(this, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0);
    }

    // 0x100c6dfd0, 512 bytes, inline, placed by class header (inline)
    // Matrix33T<float>::Determinant() const
    float Matrix33T<float>::Determinant() {
        Vector3T<float>* this_00;
        Vector3T<float>* this_01;
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        float fVar15;
        float fVar16;
        float fVar17;
        float* pfVar18;

        pfVar18 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 0);
        fVar1 = *pfVar18;
        this_00 = (Vector3T<float>*)(this + 12);
        pfVar18 = (float*)Vector3T<float>::operator[](this_00, 1);
        fVar2 = *pfVar18;
        this_01 = (Vector3T<float>*)(this + 24);
        pfVar18 = (float*)Vector3T<float>::operator[](this_01, 2);
        fVar3 = *pfVar18;
        pfVar18 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 1);
        fVar4 = *pfVar18;
        pfVar18 = (float*)Vector3T<float>::operator[](this_00, 2);
        fVar5 = *pfVar18;
        pfVar18 = (float*)Vector3T<float>::operator[](this_01, 0);
        fVar6 = *pfVar18;
        pfVar18 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 2);
        fVar7 = *pfVar18;
        pfVar18 = (float*)Vector3T<float>::operator[](this_00, 0);
        fVar8 = *pfVar18;
        pfVar18 = (float*)Vector3T<float>::operator[](this_01, 1);
        fVar9 = *pfVar18;
        pfVar18 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 2);
        fVar10 = *pfVar18;
        pfVar18 = (float*)Vector3T<float>::operator[](this_00, 1);
        fVar11 = *pfVar18;
        pfVar18 = (float*)Vector3T<float>::operator[](this_01, 0);
        fVar12 = *pfVar18;
        pfVar18 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 1);
        fVar13 = *pfVar18;
        pfVar18 = (float*)Vector3T<float>::operator[](this_00, 0);
        fVar14 = *pfVar18;
        pfVar18 = (float*)Vector3T<float>::operator[](this_01, 2);
        fVar15 = *pfVar18;
        pfVar18 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)this, 0);
        fVar16 = *pfVar18;
        pfVar18 = (float*)Vector3T<float>::operator[](this_00, 2);
        fVar17 = *pfVar18;
        pfVar18 = (float*)Vector3T<float>::operator[](this_01, 1);
        return (fVar7 * fVar8 * fVar9 + fVar4 * fVar5 * fVar6 + fVar1 * fVar2 * fVar3) -
               (fVar16 * fVar17 * *pfVar18 + fVar13 * fVar14 * fVar15 + fVar10 * fVar11 * fVar12);
    }

    // 0x100c6f070, 112 bytes, inline, placed by class header (inline)
    // Matrix33T<float>::Set(float, float, float, float, float, float, float, float, float)
    Matrix33T<float>* Matrix33T<float>::Set(float param_1, float param_2, float param_3, float param_4, float param_5,
                                            float param_6, float param_7, float param_8, float param_9) {
        Set(param_1, param_2, param_3);
        ((this + 12))->Set(param_4, param_5, param_6);
        ((this + 24))->Set(param_7, param_8, param_9);
        return this;
    }

} // namespace jag::math

namespace jag {
    // 0x1001a4f60, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PacketT<Array<unsigned char, eastl::allocator> >::PacketT()
    /* oldscape::sound::BitUnpacker::BitUnpacker() */

    void oldscape::sound::BitUnpacker::BitUnpacker() {
        new (this) Array<unsigned char, eastl::allocator>();
        field_24 = 0;
        field_28 = 0;
    }

} // namespace jag
