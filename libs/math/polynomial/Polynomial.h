// libs/math/polynomial/Polynomial.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.math

namespace jag::math {
    // 0x100c66c00
    Vector3T<float>* Vector3T<float>::operator[](unsigned int arg1) const {
        if (2 < arg1) {
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector3.inl",
                      203, nullptr);
        }
        return this + (unsigned long)arg1 * 4;
    }

    // 0x100c66ca0
    Vector3T<float>* Vector3T<float>::Set(const Vector3T<float>& vector3) {
        SetXYZ(vector3);
        return this;
    }

    // 0x100c66cc0
    Vector3T<float> Vector3Abs<float>(const Vector3T<float>& vector3) {
        uint64_t uVar1;

        float local_18 = (float)::abs(*(float*)vector3);
        float local_14 = (float)::abs(*(float*)(vector3 + 4));
        float arg3 = (float)::abs(*(float*)(vector3 + 8));
        ColourHSL local_28(local_18, local_14, arg3);
        uVar1._0_4_ = local_28.field_0;
        uVar1._4_4_ = local_28.field_4;
        return uVar1;
    }

    // 0x100c66dd0
    Vector3T<float>* Vector3T<float>::operator+=(const Vector3T<float>& vector3) {
        *(float*)this = *(float*)this + *(float*)vector3;
        *(float*)(this + 4) = *(float*)(this + 4) + *(float*)(vector3 + 4);
        *(float*)(this + 8) = *(float*)(this + 8) + *(float*)(vector3 + 8);
        return this;
    }

    // 0x100c66e40
    Vector3T<float>* Vector3T<float>::operator*=(const Vector3T<float>& vector3) {
        *(float*)this = *(float*)this * *(float*)vector3;
        *(float*)(this + 4) = *(float*)(this + 4) * *(float*)(vector3 + 4);
        *(float*)(this + 8) = *(float*)(this + 8) * *(float*)(vector3 + 8);
        return this;
    }

    // 0x100c670a0
    Matrix44T<float>* Matrix44T<float>::operator[](unsigned int arg1) const {
        if (4 < arg1) {
            LogAssert("iRow <= M",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/matrix/Matrix44.inl",
                      503, nullptr);
        }
        return this + (unsigned long)arg1 * 16;
    }

    // 0x100c670f0
    Vector4T<float>* Vector4T<float>::operator[](unsigned int arg1) const {
        if (3 < arg1) {
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector4.inl",
                      192, nullptr);
        }
        return this + (unsigned long)arg1 * 4;
    }

} // namespace jag::math

namespace jag::math::polynomial {
    // 0x100c66720
    int FindQuadraticRoots<3ul>(std::array<float, 3ul>* arg1, float arg2, float arg3, float arg4) {
        float* pfVar2;
        float fVar4;

        float fVar3 = arg2 * -4.0 * arg4 + arg3 * arg3;
        int iVar1 = 0;
        if (0.0 < fVar3) {
            fVar3 = (float)::sqrt(fVar3);
            fVar4 = 1.0 / (arg2 + arg2);
            pfVar2 = (float*)(*arg1)[0];
            *pfVar2 = (fVar3 - arg3) * fVar4;
            pfVar2 = (float*)(*arg1)[1];
            *pfVar2 = (fVar3 + arg3) * fVar4;
            iVar1 = 2;
        }
        return iVar1;
    }

} // namespace jag::math::polynomial

namespace jag::math::polynomial {
    namespace {
        // 0x100c667e0
        unsigned long CubeRealRoot(float arg1) {
            unsigned long uVar1;

            if (arg1 < 0.0) {
                uVar1 = pow(-arg1, 0.33333334f);
                return uVar1 ^ 9223372039002259456;
            }
            uVar1 = pow(arg1, 0.33333334f);
            return uVar1;
        }

    } // namespace

} // namespace jag::math::polynomial

// 0x100c66820
void acos(float arg1) {
    _acosf();
}

namespace jag {
    // 0x100c66bf0
    void PacketT<Array<unsigned char>>::pFloat(float arg1) {
        pT<float>(this, arg1);
    }

} // namespace jag
