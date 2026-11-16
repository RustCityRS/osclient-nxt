// libs/math/polynomial/Polynomial.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.math

namespace jag::math {
    // 0x100c66c00, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float>::operator[](unsigned int) const
    Vector3T<float>* Vector3T<float>::operator[](uint param_1) {
        if (2 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector3.inl",
                      203, (char*)0);
        }
        return this + (ulong)param_1 * 4;
    }

    // 0x100c66ca0, 32 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float>::Set(Vector3T<float> const&)
    Vector3T<float>* Vector3T<float>::Set(Vector3T* param_1) {
        SetXYZ(param_1);
        return this;
    }

    // 0x100c66cc0, 96 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float> Vector3Abs<float>(Vector3T<float> const&)
    undefined8 Vector3Abs<float>(Vector3T* param_1) {
        float fVar1;
        undefined8 uVar2;
        ColourHSL local_28;
        float local_18;
        float local_14;

        local_18 = (float)::abs(*(float*)param_1);
        local_14 = (float)::abs(*(float*)(param_1 + 4));
        fVar1 = (float)::abs(*(float*)(param_1 + 8));
        new (&local_28) ColourHSL(local_18, local_14, fVar1);
        uVar2._0_4_ = local_28.field_0;
        uVar2._4_4_ = local_28.field_4;
        return uVar2;
    }

    // 0x100c66dd0, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float>::operator+=(Vector3T<float> const&)
    /* Vector3T<float>::TEMPNAMEPLACEHOLDERVALUE(Vector3T<float> const&) */

    Vector3T<float>* Vector3T<float>::operator+=(Vector3T* param_1) {
        *(float*)this = *(float*)this + *(float*)param_1;
        *(float*)(this + 4) = *(float*)(this + 4) + *(float*)(param_1 + 4);
        *(float*)(this + 8) = *(float*)(this + 8) + *(float*)(param_1 + 8);
        return this;
    }

    // 0x100c66e40, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float>::operator*=(Vector3T<float> const&)
    /* Vector3T<float>::TEMPNAMEPLACEHOLDERVALUE(Vector3T<float> const&) */

    Vector3T<float>* Vector3T<float>::operator*=(Vector3T* param_1) {
        *(float*)this = *(float*)this * *(float*)param_1;
        *(float*)(this + 4) = *(float*)(this + 4) * *(float*)(param_1 + 4);
        *(float*)(this + 8) = *(float*)(this + 8) * *(float*)(param_1 + 8);
        return this;
    }

    // 0x100c670a0, 80 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float>::operator[](unsigned int) const
    Matrix44T<float>* Matrix44T<float>::operator[](uint param_1) {
        if (4 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("iRow <= M",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/matrix/Matrix44.inl",
                      503, (char*)0);
        }
        return this + (ulong)param_1 * 16;
    }

    // 0x100c670f0, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector4T<float>::operator[](unsigned int) const
    Vector4T<float>* Vector4T<float>::operator[](uint param_1) {
        if (3 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector4.inl",
                      192, (char*)0);
        }
        return this + (ulong)param_1 * 4;
    }

} // namespace jag::math

namespace jag::math::polynomial {
    // 0x100c66720, 192 bytes, inline, placed by class name and debug map
    // int FindQuadraticRoots<3ul>(std::array<float, 3ul>*, float, float, float)
    /* int FindQuadraticRoots<3ul>(std::array<float, 3ul>*, float, float, float)
    */

    int FindQuadraticRoots<3ul>(array* param_1, float param_2, float param_3, float param_4) {
        int iVar1;
        float* pfVar2;
        float fVar3;
        float fVar4;

        fVar3 = param_2 * -4.0 * param_4 + param_3 * param_3;
        iVar1 = 0;
        if (0.0 < fVar3) {
            fVar3 = (float)::sqrt(fVar3);
            fVar4 = 1.0 / (param_2 + param_2);
            pfVar2 = (float*)std::array<float, 3ul>::operator[]((array<float, 3ul>*)param_1, 0);
            *pfVar2 = (fVar3 - param_3) * fVar4;
            pfVar2 = (float*)std::array<float, 3ul>::operator[]((array<float, 3ul>*)param_1, 1);
            *pfVar2 = (fVar3 + param_3) * fVar4;
            iVar1 = 2;
        }
        return iVar1;
    }

} // namespace jag::math::polynomial

namespace jag::math::polynomial {
    namespace {
        // 0x100c667e0, 64 bytes, placed by debug map only (low confidence)
        // CubeRealRoot(float)
        ulong CubeRealRoot(float param_1) {
            ulong uVar1;

            if (param_1 < 0.0) {
                uVar1 = pow(-param_1, 0.33333334);
                return uVar1 ^ 9223372039002259456;
            }
            uVar1 = pow(param_1, 0.33333334);
            return uVar1;
        }

    } // namespace

} // namespace jag::math::polynomial

// 0x100c66820, 16 bytes, placed by debug map only (low confidence)
// acos(float)
void acos(float param_1) {
    _acosf();
}

namespace jag {
    // 0x100c66bf0, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketT<Array<unsigned char, eastl::allocator> >::pFloat(float)
    void PacketT<Array<unsigned char, eastl::allocator>>::pFloat(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                                 float param_1) {
        pT<float>(this, param_1);
    }

} // namespace jag
