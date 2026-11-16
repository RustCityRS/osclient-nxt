// libs/math/matrix/Matrix43.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::math {
    template <typename...> // 1 instantiations, e.g. <float>
    class Matrix43T {
    public:
        Matrix43T(float, float, float, float, float, float, float, float, float, float, float, float);
        Matrix43T<float>* operator[](unsigned int);
        ParticleVertexDataProxy<Vector3T<float>>* operator=(Matrix43T<float> const&);
        Matrix43T(Matrix33T<float> const&, Vector3T<float> const&);
        void operator*=(Matrix43T<float> const&);
        Matrix43T<float>* operator=(Matrix44T<float> const&);
        Matrix43T<float>* operator[](unsigned int) const;
        Matrix43T(Vector3T<float>&&, Vector3T<float>&&, Vector3T<float>&&, Vector3T<float>&&);
        Matrix43T();
        Matrix43T<float>* GetRot() const;
        Matrix43T<float>* SetToIdentity();
        Matrix43T<float>* Translate(Vector3T<float> const&);
        Matrix43T<float>* Set(QuaternionT<float> const&, Vector3T<float> const&);
        Matrix43T<float>* Set(Matrix33T<float> const&, Vector3T<float> const&);
        Matrix43T<float>* Set(float, float, float, float, float, float, float, float, float, float, float, float);
        static Matrix43T<float> /* 48 bytes */
            IDENTITY;           // = Matrix43T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0)
    };

    // 0x100f37460, 48 bytes, __data; set at startup by ___cxx_global_var_init.170
    Matrix43T<float> Matrix43T<float>::IDENTITY =
        Matrix43T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0);

    // 0x1001eae70, 192 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Matrix43T<float>::Matrix43T(float, float, float, float, float, float, float, float, float, float, float, float)
    void Matrix43T<float>::Matrix43T(float param_1, float param_2, float param_3, float param_4, float param_5,
                                     float param_6, float param_7, float param_8, float param_9, float param_10,
                                     float param_11, float param_12) {
        long lVar1;

        lVar1 = 0;
        do {
            new ((this + lVar1)) Vector3T<int>();
            lVar1 = lVar1 + 12;
        } while (lVar1 != 48);
        Set(param_1, param_2, param_3);
        ((this + 12))->Set(param_4, param_5, param_6);
        ((this + 24))->Set(param_7, param_8, param_9);
        ((this + 36))->Set(param_10, param_11, param_12);
    }

    // 0x1001f4a20, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.170
    void ___cxx_global_var_init_170() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4818;
        if (*PTR_IDENTITY_100ee4818 == '\0') {
            new (PTR_IDENTITY_100ee6720) Matrix43T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1002ed890, 64 bytes, inline, placed by class header (inline)
    // Matrix43T<float>::operator[](unsigned int)
    Matrix43T<float>* Matrix43T<float>::operator[](uint param_1) {
        if (4 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("iRow <= M",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/matrix/Matrix43.inl",
                      192, (char*)0);
        }
        return this + (ulong)param_1 * 12;
    }

    // 0x100325250, 64 bytes, inline, placed by class header (inline)
    // Matrix43T<float>::operator[](unsigned int) const
    Matrix43T<float>* Matrix43T<float>::operator[](uint param_1) {
        if (4 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("iRow <= M",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/matrix/Matrix43.inl",
                      200, (char*)0);
        }
        return this + (ulong)param_1 * 12;
    }

    // 0x10081ea10, 288 bytes, inline, placed by class header (inline)
    // Matrix43T<float>::GetRot() const
    Matrix43T<float>* Matrix43T<float>::GetRot() {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float* pfVar9;
        Vector3T<float>* pVVar10;
        Vector3T<float>* in_RSI;

        pfVar9 = (float*)Vector3T<float>::operator[](in_RSI, 0);
        fVar1 = *pfVar9;
        pfVar9 = (float*)Vector3T<float>::operator[](in_RSI, 1);
        fVar2 = *pfVar9;
        pfVar9 = (float*)Vector3T<float>::operator[](in_RSI, 2);
        fVar3 = *pfVar9;
        pVVar10 = in_RSI + 12;
        pfVar9 = (float*)Vector3T<float>::operator[](pVVar10, 0);
        fVar4 = *pfVar9;
        pfVar9 = (float*)Vector3T<float>::operator[](pVVar10, 1);
        fVar5 = *pfVar9;
        pfVar9 = (float*)Vector3T<float>::operator[](pVVar10, 2);
        fVar6 = *pfVar9;
        pVVar10 = in_RSI + 24;
        pfVar9 = (float*)Vector3T<float>::operator[](pVVar10, 0);
        fVar7 = *pfVar9;
        pfVar9 = (float*)Vector3T<float>::operator[](pVVar10, 1);
        fVar8 = *pfVar9;
        pfVar9 = (float*)Vector3T<float>::operator[](pVVar10, 2);
        new (this) Matrix33T<float>(fVar1, fVar2, fVar3, fVar4, fVar5, fVar6, fVar7, fVar8, *pfVar9);
        return this;
    }

} // namespace jag::math
