// libs/math/Transitionable.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::math {
    template <typename...> // 7 instantiations, e.g. <float>, <graphics::IrradianceSHCoefConsts>, <QuaternionT<double> >
    class Transitionable {
    public:
        Transitionable();
        Transitionable<Vector4T<float>>* operator=(const Vector4T<float>& vector4);
        void SetValue(const Vector4T<float>& vector4, long long arg2, unsigned long long arg3);
        uint8_t[16] GetValue(unsigned long long arg1) const;
        bool IsTransitioning(unsigned long long arg1) const;
        Transitionable(const float& arg1);
        uint64_t GetSlerpedValue(unsigned long long arg1) const;
        auto GetValue(unsigned long long arg1) const;
        void SetValue(const Vector3T<double>& vector3, long long arg2, unsigned long long arg3);
        void SetValue(const graphics::IrradianceSHCoefConsts& irradianceSHCoefConsts, long long arg2,
                      unsigned long long arg3);
        uint8_t* GetEndValue();
        void SetValue(const QuaternionT<double>& quaternion, long long arg2, unsigned long long arg3);
        Transitionable<Vector3T<double>>* operator=(const Vector3T<double>& vector3);
        Transitionable<QuaternionT<double>>* operator=(const QuaternionT<double>& quaternion);
        Transitionable<float>* operator=(const float& arg1);
        void SetValue(const float& arg1, long long arg2, unsigned long long arg3);
        void GetValue(unsigned long long arg1) const;
        Transitionable<Vector3T<float>>* operator=(const Transitionable<Vector3T<float>>& transitionable);
        uint64_t GetValue(unsigned long long arg1) const;
        Transitionable(const Vector3T<float>& vector3);
        void SetValue(const Vector3T<float>& vector3, long long arg2, unsigned long long arg3);
        void SetValue(const Vector2T<float>& vector2, long long arg2, unsigned long long arg3);
        Transitionable(const Vector4T<float>& vector4);
        Transitionable(const Vector2T<float>& vector2);
    };

    // 0x100068a70
    Transitionable<Vector4T<float>>* Transitionable<Vector4T<float>>::operator=(const Vector4T<float>& vector4) {
        (*((this + 48))) = vector4;
        *(uint64_t*)(this + 32) = 0;
        return this;
    }

    // 0x1000b0fd0
    Transitionable<Vector4T<float>>::Transitionable() {
        *(uint64_t*)this = 0;
        new ((this + 16)) Vector4T();
        *(uint64_t*)(this + 32) = 0;
        new ((this + 48)) Vector4T();
    }

    // 0x10012acb0
    void Transitionable<Vector4T<float>>::SetValue(const Vector4T<float>& vector4, long long arg2,
                                                   unsigned long long arg3) {
        long lVar1;
        uint64_t local_38[2];

        if (arg2 < 1) {
            (*((this + 48))) = vector4;
            lVar1 = 0;
        } else {
            local_38[0] = GetValue(this, arg3);
            (*((this + 16))) = *local_38;
            *(unsigned long long*)this = arg3;
            (*((this + 48))) = vector4;
            lVar1 = arg2 + *(long*)this;
        }
        *(long*)(this + 32) = lVar1;
    }

    // 0x10012ad30
    uint8_t[16] Transitionable<Vector4T<float>>::GetValue(unsigned long long arg1) const {
        uint8_t auVar4[16];
        uint8_t auVar5[16];

        if (*(unsigned long*)(this + 32) <= arg1) {
            return *(uint8_t(*)[16])(this + 48);
        }
        unsigned long uVar1 = *(unsigned long*)this;
        if (arg1 < uVar1) {
            return *(uint8_t(*)[16])(this + 16);
        }
        long lVar3 = arg1 - uVar1;
        auVar5._8_4_ = (int)((unsigned long)lVar3 >> 32);
        auVar5._0_8_ = lVar3;
        auVar5._12_4_ = 1160773632;
        long lVar2 = *(unsigned long*)(this + 32) - uVar1;
        auVar4._8_4_ = (int)((unsigned long)lVar2 >> 32);
        auVar4._0_8_ = lVar2;
        auVar4._12_4_ = 1160773632;
        auVar5 = Lerp<Vector4T<float>, float>(
            (Vector4T<float>*)(this + 16), (Vector4T<float>*)(this + 48),
            (float)(((auVar5._8_8_ - 1.9342813113834067e+25) +
                     ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)lVar3)) - 4503599627370496.0)) /
                    ((auVar4._8_8_ - 1.9342813113834067e+25) +
                     ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)lVar2)) - 4503599627370496.0))));
        return auVar5;
    }

    // 0x1001d0840
    bool Transitionable<Vector3T<float>>::IsTransitioning(unsigned long long arg1) const {
        if (arg1 < *(unsigned long*)(this + 24)) {
            return *(unsigned long*)this <= arg1;
        }
        return false;
    }

    // 0x1001d4c00
    Transitionable<float>::Transitionable(const float& arg1) {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 16) = 0;
        *(float*)(this + 24) = arg1;
    }

    // 0x1001df6e0
    uint64_t Transitionable<Vector3T<float>>::GetSlerpedValue(unsigned long long arg1) const {
        uint8_t auVar5[16];
        uint8_t auVar6[16];

        if (*(unsigned long*)(this + 24) <= arg1) {
            return *(uint64_t*)(this + 32);
        }
        unsigned long uVar1 = *(unsigned long*)this;
        if (arg1 < uVar1) {
            return *(uint64_t*)(this + 8);
        }
        long lVar3 = arg1 - uVar1;
        auVar5._8_4_ = (int)((unsigned long)lVar3 >> 32);
        auVar5._0_8_ = lVar3;
        auVar5._12_4_ = 1160773632;
        long lVar2 = *(unsigned long*)(this + 24) - uVar1;
        auVar6._8_4_ = (int)((unsigned long)lVar2 >> 32);
        auVar6._0_8_ = lVar2;
        auVar6._12_4_ = 1160773632;
        return SLerp<float>(
            (Vector3T<float>*)(this + 8), (Vector3T<float>*)(this + 32),
            (float)(((auVar5._8_8_ - 1.9342813113834067e+25) +
                     ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)lVar3)) - 4503599627370496.0)) /
                    ((auVar6._8_8_ - 1.9342813113834067e+25) +
                     ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)lVar2)) - 4503599627370496.0))));
    }

    // 0x1003f3650
    auto Transitionable<Vector3T<double>>::GetValue(unsigned long long arg1) const {
        auto result;
        unsigned long uVar1;
        ReturnValue RVar2;
        long lVar3;
        long lVar4;
        uint8_t auVar5[16];
        uint8_t auVar6[16];

        if (arg1 < *(unsigned long*)(this + 32)) {
            uVar1 = *(unsigned long*)this;
            if (arg1 < uVar1) {
                &result[2] = *(ReturnValue*)(this + 24);
                RVar2 = *(ReturnValue*)(this + 16);
                result = *(ReturnValue*)(this + 8);
                &result[1] = RVar2;
            } else {
                lVar4 = arg1 - uVar1;
                auVar5._8_4_ = (int)((unsigned long)lVar4 >> 32);
                auVar5._0_8_ = lVar4;
                auVar5._12_4_ = 1160773632;
                lVar3 = *(unsigned long*)(this + 32) - uVar1;
                auVar6._8_4_ = (int)((unsigned long)lVar3 >> 32);
                auVar6._0_8_ = lVar3;
                auVar6._12_4_ = 1160773632;
                Lerp<Vector3T<double>, double>(
                    &result, (Vector3T<double>*)(this + 8),
                    ((auVar5._8_8_ - 1.9342813113834067e+25) +
                     ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)lVar4)) - 4503599627370496.0)) /
                        ((auVar6._8_8_ - 1.9342813113834067e+25) +
                         ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)lVar3)) - 4503599627370496.0)));
            }
        } else {
            &result[2] = *(ReturnValue*)(this + 56);
            RVar2 = *(ReturnValue*)(this + 48);
            result = *(ReturnValue*)(this + 40);
            &result[1] = RVar2;
        }
        return result;
    }

    // 0x1003f5110
    void Transitionable<Vector3T<double>>::SetValue(const Vector3T<double>& vector3, long long arg2,
                                                    unsigned long long arg3) {
        long lVar1;
        ReturnValue local_48;

        if (arg2 < 1) {
            (*((this + 40))) = vector3;
            lVar1 = 0;
        } else {
            GetValue(&local_48, this, arg3);
            (*((this + 8))) = local_48;
            *(unsigned long long*)this = arg3;
            (*((this + 40))) = vector3;
            lVar1 = arg2 + *(long*)this;
        }
        *(long*)(this + 32) = lVar1;
    }

    // 0x100404d30
    Transitionable<Vector3T<double>>::Transitionable() {
        *(uint64_t*)this = 0;
        new ((this + 8)) oldscape::dash3d::ModelLit::AABB();
        *(uint64_t*)(this + 32) = 0;
        new ((this + 40)) oldscape::dash3d::ModelLit::AABB();
    }

    // 0x100414b50
    void Transitionable<graphics::IrradianceSHCoefConsts>::SetValue(
        const graphics::IrradianceSHCoefConsts& irradianceSHCoefConsts, long long arg2, unsigned long long arg3) {
        long lVar1;
        IrradianceSHCoefConsts local_a8;

        if (arg2 < 1) {
            (*((this + 144))) = irradianceSHCoefConsts;
            lVar1 = 0;
        } else {
            GetValue((ReturnValue*)&local_a8, this, arg3);
            (*((this + 16))) = local_a8;
            *(unsigned long long*)this = arg3;
            (*((this + 144))) = irradianceSHCoefConsts;
            lVar1 = arg2 + *(long*)this;
        }
        *(long*)(this + 128) = lVar1;
    }

    // 0x100414cb0
    uint8_t* Transitionable<graphics::IrradianceSHCoefConsts>::GetEndValue() {
        return m_immediateThreadPool;
    }

    // 0x100420ad0
    Transitionable<graphics::IrradianceSHCoefConsts>::Transitionable() {
        *(uint64_t*)this = 0;
        new ((this + 16)) graphics::IrradianceSHCoefConsts();
        *(uint64_t*)(this + 128) = 0;
        new ((this + 144)) graphics::IrradianceSHCoefConsts();
    }

    // 0x100432200
    auto Transitionable<graphics::IrradianceSHCoefConsts>::GetValue(unsigned long long arg1) const {
        auto result;
        unsigned long uVar1;
        long lVar2;
        long lVar3;
        ReturnValue RVar4;
        ReturnValue RVar7;
        uint8_t auVar5[16];
        uint8_t auVar6[16];
        ReturnValue RVar8;
        ReturnValue RVar9;
        ReturnValue RVar10;
        ReturnValue RVar11;
        uint32_t uVar12;
        uint32_t uVar13;
        uint32_t uVar14;
        uint32_t uVar15;

        if (arg1 < *(unsigned long*)(this + 128)) {
            uVar1 = *(unsigned long*)this;
            if (uVar1 <= arg1) {
                lVar3 = arg1 - uVar1;
                auVar5._8_4_ = (int)((unsigned long)lVar3 >> 32);
                auVar5._0_8_ = lVar3;
                auVar5._12_4_ = 1160773632;
                lVar2 = *(unsigned long*)(this + 128) - uVar1;
                auVar6._8_4_ = (int)((unsigned long)lVar2 >> 32);
                auVar6._0_8_ = lVar2;
                auVar6._12_4_ = 1160773632;
                Lerp<graphics::IrradianceSHCoefConsts, float>(
                    &result, (IrradianceSHCoefConsts*)(this + 16), (IrradianceSHCoefConsts*)(this + 144),
                    (float)(((auVar5._8_8_ - 1.9342813113834067e+25) +
                             ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)lVar3)) - 4503599627370496.0)) /
                            ((auVar6._8_8_ - 1.9342813113834067e+25) +
                             ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)lVar2)) - 4503599627370496.0))));
                return result;
            }
            RVar10 = *(ReturnValue*)(this + 120);
            &result[12] = *(ReturnValue*)(this + 112);
            &result[13] = RVar10;
            RVar10 = *(ReturnValue*)(this + 104);
            &result[10] = *(ReturnValue*)(this + 96);
            &result[11] = RVar10;
            RVar10 = *(ReturnValue*)(this + 88);
            &result[8] = *(ReturnValue*)(this + 80);
            &result[9] = RVar10;
            RVar4 = *(ReturnValue*)(this + 16);
            RVar7 = *(ReturnValue*)(this + 24);
            RVar8 = *(ReturnValue*)(this + 32);
            RVar9 = *(ReturnValue*)(this + 40);
            RVar10 = *(ReturnValue*)(this + 48);
            RVar11 = *(ReturnValue*)(this + 56);
            uVar12 = *(uint32_t*)(this + 64);
            uVar13 = *(uint32_t*)(this + 68);
            uVar14 = *(uint32_t*)(this + 72);
            uVar15 = *(uint32_t*)(this + 76);
        } else {
            RVar10 = *(ReturnValue*)(this + 248);
            &result[12] = *(ReturnValue*)(this + 240);
            &result[13] = RVar10;
            RVar10 = *(ReturnValue*)(this + 232);
            &result[10] = *(ReturnValue*)(this + 224);
            &result[11] = RVar10;
            RVar10 = *(ReturnValue*)(this + 216);
            &result[8] = *(ReturnValue*)(this + 208);
            &result[9] = RVar10;
            RVar4 = *(ReturnValue*)(this + 144);
            RVar7 = *(ReturnValue*)(this + 152);
            RVar8 = *(ReturnValue*)(this + 160);
            RVar9 = *(ReturnValue*)(this + 168);
            RVar10 = *(ReturnValue*)(this + 176);
            RVar11 = *(ReturnValue*)(this + 184);
            uVar12 = *(uint32_t*)(this + 192);
            uVar13 = *(uint32_t*)(this + 196);
            uVar14 = *(uint32_t*)(this + 200);
            uVar15 = *(uint32_t*)(this + 204);
        }
        *(uint32_t*)(&result + 6) = uVar12;
        *(uint32_t*) && result[6].field_4 = uVar13;
        *(uint32_t*)(&result + 7) = uVar14;
        *(uint32_t*) && result[7].field_4 = uVar15;
        &result[4] = RVar10;
        &result[5] = RVar11;
        &result[2] = RVar8;
        &result[3] = RVar9;
        result = RVar4;
        &result[1] = RVar7;
        return result;
    }

    // 0x100616120
    void Transitionable<QuaternionT<double>>::SetValue(const QuaternionT<double>& quaternion, long long arg2,
                                                       unsigned long long arg3) {
        long lVar1;
        ReturnValue local_50;

        if (arg2 < 1) {
            (*((this + 48))) = quaternion;
            lVar1 = 0;
        } else {
            GetValue(&local_50, this, arg3);
            (*((this + 8))) = local_50;
            *(unsigned long long*)this = arg3;
            (*((this + 48))) = quaternion;
            lVar1 = arg2 + *(long*)this;
        }
        *(long*)(this + 40) = lVar1;
    }

    // 0x10061b180
    auto Transitionable<QuaternionT<double>>::GetValue(unsigned long long arg1) const {
        auto result;
        unsigned long uVar1;
        long lVar2;
        long lVar3;
        ReturnValue RVar4;
        ReturnValue RVar7;
        uint8_t auVar5[16];
        uint8_t auVar6[16];
        ReturnValue RVar8;
        ReturnValue RVar9;

        if (arg1 < *(unsigned long*)(this + 40)) {
            uVar1 = *(unsigned long*)this;
            if (uVar1 <= arg1) {
                lVar3 = arg1 - uVar1;
                auVar5._8_4_ = (int)((unsigned long)lVar3 >> 32);
                auVar5._0_8_ = lVar3;
                auVar5._12_4_ = 1160773632;
                lVar2 = *(unsigned long*)(this + 40) - uVar1;
                auVar6._8_4_ = (int)((unsigned long)lVar2 >> 32);
                auVar6._0_8_ = lVar2;
                auVar6._12_4_ = 1160773632;
                Lerp<QuaternionT<double>, float>(
                    &result, (QuaternionT<double>*)(this + 8),
                    (float)(((auVar5._8_8_ - 1.9342813113834067e+25) +
                             ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)lVar3)) - 4503599627370496.0)) /
                            ((auVar6._8_8_ - 1.9342813113834067e+25) +
                             ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)lVar2)) - 4503599627370496.0))));
                return result;
            }
            RVar4 = *(ReturnValue*)(this + 8);
            RVar7 = *(ReturnValue*)(this + 16);
            RVar8 = *(ReturnValue*)(this + 24);
            RVar9 = *(ReturnValue*)(this + 32);
        } else {
            RVar4 = *(ReturnValue*)(this + 48);
            RVar7 = *(ReturnValue*)(this + 56);
            RVar8 = *(ReturnValue*)(this + 64);
            RVar9 = *(ReturnValue*)(this + 72);
        }
        &result[2] = RVar8;
        &result[3] = RVar9;
        result = RVar4;
        &result[1] = RVar7;
        return result;
    }

    // 0x1006233d0
    Transitionable<Vector3T<double>>* Transitionable<Vector3T<double>>::operator=(const Vector3T<double>& vector3) {
        (*((this + 40))) = vector3;
        *(uint64_t*)(this + 32) = 0;
        return this;
    }

    // 0x100641390
    Transitionable<QuaternionT<double>>*
    Transitionable<QuaternionT<double>>::operator=(const QuaternionT<double>& quaternion) {
        (*((this + 48))) = quaternion;
        *(uint64_t*)(this + 40) = 0;
        return this;
    }

    // 0x1006413c0
    Transitionable<QuaternionT<double>>::Transitionable() {
        *(uint64_t*)this = 0;
        new ((this + 8)) QuaternionT<double>();
        *(uint64_t*)(this + 40) = 0;
        new ((this + 48)) QuaternionT<double>();
    }

    // 0x1007df490
    Transitionable<float>* Transitionable<float>::operator=(const float& arg1) {
        *(float*)(this + 24) = arg1;
        *(uint64_t*)(this + 16) = 0;
        return this;
    }

    // 0x1008d2420
    Transitionable<Vector3T<float>>::Transitionable() {
        *(uint64_t*)this = 0;
        new ((this + 8)) Vector3T();
        *(uint64_t*)(this + 24) = 0;
        new ((this + 32)) Vector3T();
    }

    // 0x1008fa430
    void Transitionable<float>::SetValue(const float& arg1, long long arg2, unsigned long long arg3) {
        long lVar1;
        uint32_t uVar2;

        if (arg2 < 1) {
            *(float*)(this + 24) = arg1;
            lVar1 = 0;
        } else {
            uVar2 = GetValue(this, arg3);
            *(uint32_t*)(this + 8) = uVar2;
            *(unsigned long long*)this = arg3;
            *(float*)(this + 24) = arg1;
            lVar1 = arg2 + arg3;
        }
        *(long*)(this + 16) = lVar1;
    }

    // 0x1008fa550
    void Transitionable<float>::GetValue(unsigned long long arg1) const {
        uint8_t auVar4[16];
        uint8_t auVar5[16];

        if (*(unsigned long*)(this + 16) <= arg1) {
            return;
        }
        unsigned long uVar1 = *(unsigned long*)this;
        if (arg1 < uVar1) {
            return;
        }
        long lVar3 = arg1 - uVar1;
        auVar4._8_4_ = (int)((unsigned long)lVar3 >> 32);
        auVar4._0_8_ = lVar3;
        auVar4._12_4_ = 1160773632;
        long lVar2 = *(unsigned long*)(this + 16) - uVar1;
        auVar5._8_4_ = (int)((unsigned long)lVar2 >> 32);
        auVar5._0_8_ = lVar2;
        auVar5._12_4_ = 1160773632;
        Lerp<float, float>(
            (float*)(this + 8), (float*)(this + 24),
            (float)(((auVar4._8_8_ - 1.9342813113834067e+25) +
                     ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)lVar3)) - 4503599627370496.0)) /
                    ((auVar5._8_8_ - 1.9342813113834067e+25) +
                     ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)lVar2)) - 4503599627370496.0))));
    }

    // 0x100912bd0
    Transitionable<float>::Transitionable() {
        *(uint64_t*)this = 0;
        *(uint64_t*)(this + 16) = 0;
    }

    // 0x100922250
    Transitionable<Vector3T<float>>*
    Transitionable<Vector3T<float>>::operator=(const Transitionable<Vector3T<float>>& transitionable) {
        *(uint64_t*)this = *(uint64_t*)transitionable;
        ((this + 8))->SetXYZ(*((transitionable + 8)));
        *(uint64_t*)(this + 24) = *(uint64_t*)(transitionable + 24);
        ((this + 32))->SetXYZ(*((transitionable + 32)));
        return this;
    }

    // 0x1009318e0
    uint64_t Transitionable<Vector3T<float>>::GetValue(unsigned long long arg1) const {
        uint8_t auVar5[16];
        uint8_t auVar6[16];

        if (*(unsigned long*)(this + 24) <= arg1) {
            return *(uint64_t*)(this + 32);
        }
        unsigned long uVar1 = *(unsigned long*)this;
        if (arg1 < uVar1) {
            return *(uint64_t*)(this + 8);
        }
        long lVar3 = arg1 - uVar1;
        auVar5._8_4_ = (int)((unsigned long)lVar3 >> 32);
        auVar5._0_8_ = lVar3;
        auVar5._12_4_ = 1160773632;
        long lVar2 = *(unsigned long*)(this + 24) - uVar1;
        auVar6._8_4_ = (int)((unsigned long)lVar2 >> 32);
        auVar6._0_8_ = lVar2;
        auVar6._12_4_ = 1160773632;
        return Lerp<Vector3T<float>, float>(
            (Vector3T<float>*)(this + 8), (Vector3T<float>*)(this + 32),
            (float)(((auVar5._8_8_ - 1.9342813113834067e+25) +
                     ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)lVar3)) - 4503599627370496.0)) /
                    ((auVar6._8_8_ - 1.9342813113834067e+25) +
                     ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)lVar2)) - 4503599627370496.0))));
    }

    // 0x1009340f0
    void Transitionable<Vector3T<float>>::SetValue(const Vector3T<float>& vector3, long long arg2,
                                                   unsigned long long arg3) {
        long lVar1;
        uint64_t local_38[2];

        if (arg2 < 1) {
            ((this + 32))->SetXYZ(vector3);
            lVar1 = 0;
        } else {
            local_38[0] = GetValue(this, arg3);
            ((this + 8))->SetXYZ(*local_38);
            *(unsigned long long*)this = arg3;
            ((this + 32))->SetXYZ(vector3);
            lVar1 = arg2 + *(long*)this;
        }
        *(long*)(this + 24) = lVar1;
    }

    // 0x100936480
    uint64_t Transitionable<Vector2T<float>>::GetValue(unsigned long long arg1) const {
        uint8_t auVar5[16];
        uint8_t auVar6[16];

        if (*(unsigned long*)(this + 16) <= arg1) {
            return *(uint64_t*)(this + 24);
        }
        unsigned long uVar1 = *(unsigned long*)this;
        if (arg1 < uVar1) {
            return *(uint64_t*)(this + 8);
        }
        long lVar3 = arg1 - uVar1;
        auVar5._8_4_ = (int)((unsigned long)lVar3 >> 32);
        auVar5._0_8_ = lVar3;
        auVar5._12_4_ = 1160773632;
        long lVar2 = *(unsigned long*)(this + 16) - uVar1;
        auVar6._8_4_ = (int)((unsigned long)lVar2 >> 32);
        auVar6._0_8_ = lVar2;
        auVar6._12_4_ = 1160773632;
        return Lerp<Vector2T<float>, float>(
            (Vector2T<float>*)(this + 8), (Vector2T<float>*)(this + 24),
            (float)(((auVar5._8_8_ - 1.9342813113834067e+25) +
                     ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)lVar3)) - 4503599627370496.0)) /
                    ((auVar6._8_8_ - 1.9342813113834067e+25) +
                     ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)lVar2)) - 4503599627370496.0))));
    }

    // 0x100936b60
    void Transitionable<Vector2T<float>>::SetValue(const Vector2T<float>& vector2, long long arg2,
                                                   unsigned long long arg3) {
        long lVar1;
        uint64_t local_30;

        if (arg2 < 1) {
            (*((this + 24))) = vector2;
            lVar1 = 0;
        } else {
            local_30 = GetValue(this, arg3);
            (*((this + 8))) = local_30;
            *(unsigned long long*)this = arg3;
            (*((this + 24))) = vector2;
            lVar1 = arg2 + *(long*)this;
        }
        *(long*)(this + 16) = lVar1;
    }

    // 0x10093a3c0
    Transitionable<Vector3T<float>>::Transitionable(const Vector3T<float>& vector3) {
        *(uint64_t*)this = 0;
        new ((this + 8)) Vector3T();
        *(uint64_t*)(this + 24) = 0;
        *(uint64_t*)(this + 32) = *(uint64_t*)vector3;
        *(uint32_t*)(this + 40) = *(uint32_t*)(vector3 + 8);
    }

    // 0x10093c0e0
    Transitionable<Vector4T<float>>::Transitionable(const Vector4T<float>& vector4) {
        *(uint64_t*)this = 0;
        new ((this + 16)) Vector4T();
        *(uint64_t*)(this + 32) = 0;
        uint64_t uVar1 = *(uint64_t*)(vector4 + 8);
        *(uint64_t*)(this + 48) = *(uint64_t*)vector4;
        *(uint64_t*)(this + 56) = uVar1;
    }

    // 0x10093c120
    Transitionable<Vector2T<float>>::Transitionable(const Vector2T<float>& vector2) {
        *(uint64_t*)this = 0;
        new ((this + 8)) Vector2T();
        *(uint64_t*)(this + 16) = 0;
        *(uint64_t*)(this + 24) = *(uint64_t*)vector2;
    }

} // namespace jag::math

namespace jag::graphics {
    // 0x100414cb0: SpriteAtlasUsageMap::GetPermanent() const has the same machine code as math::Transitionable<IrradianceSHCoefConsts>::GetEndValue()

} // namespace jag::graphics
