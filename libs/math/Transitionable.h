// libs/math/Transitionable.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::math {
    template <typename...> // 7 instantiations, e.g. <float>, <graphics::IrradianceSHCoefConsts>, <QuaternionT<double> >
    class Transitionable {
    public:
        Transitionable();
        Transitionable<Vector4T<float>>* operator=(Vector4T<float> const&);
        void SetValue(Vector4T<float> const&, long long, unsigned long long);
        GetValue(unsigned long long) const;
        bool IsTransitioning(unsigned long long) const;
        Transitionable(float const&);
        GetSlerpedValue(unsigned long long) const;
        Transitionable<Vector3T<double>>* GetValue(unsigned long long) const;
        void SetValue(Vector3T<double> const&, long long, unsigned long long);
        void SetValue(graphics::IrradianceSHCoefConsts const&, long long, unsigned long long);
        GetEndValue();
        Transitionable<graphics::IrradianceSHCoefConsts>* GetValue(unsigned long long) const;
        void SetValue(QuaternionT<double> const&, long long, unsigned long long);
        Transitionable<QuaternionT<double>>* GetValue(unsigned long long) const;
        Transitionable<Vector3T<double>>* operator=(Vector3T<double> const&);
        Transitionable<QuaternionT<double>>* operator=(QuaternionT<double> const&);
        Transitionable<float>* operator=(float const&);
        void SetValue(float const&, long long, unsigned long long);
        void GetValue(unsigned long long) const;
        Transitionable<Vector3T<float>>* operator=(Transitionable<Vector3T<float>> const&);
        Transitionable(Vector3T<float> const&);
        void SetValue(Vector3T<float> const&, long long, unsigned long long);
        void SetValue(Vector2T<float> const&, long long, unsigned long long);
        Transitionable(Vector4T<float> const&);
        Transitionable(Vector2T<float> const&);
    };

    // 0x100068a60, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // Transitionable<Vector4T<float> >::Transitionable(): jumps straight to the base-object constructor

    // 0x100068a70, 48 bytes, inline, placed by class name and debug map
    // Transitionable<Vector4T<float> >::operator=(Vector4T<float> const&)
    /* Transitionable<Vector4T<float>
   >::TEMPNAMEPLACEHOLDERVALUE(Vector4T<float> const&) */

    Transitionable<Vector4T<float>>* Transitionable<Vector4T<float>>::operator=(Vector4T* param_1) {
        Rect<float>::operator=((Rect<float>*)(this + 48), (Rect*)param_1);
        *(undefined8*)(this + 32) = 0;
        return this;
    }

    // 0x1000b0fd0, 64 bytes, base-object constructor, inline, placed by class name
    // Transitionable<Vector4T<float> >::Transitionable()
    void Transitionable<Vector4T<float>>::Transitionable() {
        *(undefined8*)this = 0;
        new ((this + 16)) Vector4T<float>();
        *(undefined8*)(this + 32) = 0;
        new ((this + 48)) Vector4T<float>();
    }

    // 0x10012acb0, 128 bytes, inline, placed by class name
    // Transitionable<Vector4T<float> >::SetValue(Vector4T<float> const&, long long, unsigned long long)
    void Transitionable<Vector4T<float>>::SetValue(Vector4T* param_1, longlong param_2, ulonglong param_3) {
        long lVar1;
        undefined8 local_38[2];

        if (param_2 < 1) {
            Rect<float>::operator=((Rect<float>*)(this + 48), (Rect*)param_1);
            lVar1 = 0;
        } else {
            local_38[0] = GetValue(this, param_3);
            Rect<float>::operator=((Rect<float>*)(this + 16), (Rect*)local_38);
            *(ulonglong*)this = param_3;
            Rect<float>::operator=((Rect<float>*)(this + 48), (Rect*)param_1);
            lVar1 = param_2 + *(long*)this;
        }
        *(long*)(this + 32) = lVar1;
    }

    // 0x10012ad30, 160 bytes, inline, placed by class name
    // Transitionable<Vector4T<float> >::GetValue(unsigned long long) const
    undefined1[16] Transitionable<Vector4T<float>>::GetValue(ulonglong param_1) {
        Vector4T* pVVar1;
        long lVar2;
        long lVar3;
        undefined1 auVar4[16];
        undefined1 auVar5[16];

        if (*(ulong*)(this + 32) <= param_1) {
            return *(undefined1(*)[16])(this + 48);
        }
        pVVar1 = *(Vector4T**)this;
        if (param_1 < pVVar1) {
            return *(undefined1(*)[16])(this + 16);
        }
        lVar3 = param_1 - (long)pVVar1;
        auVar5._8_4_ = (int)((ulong)lVar3 >> 32);
        auVar5._0_8_ = lVar3;
        auVar5._12_4_ = 1160773632;
        lVar2 = *(ulong*)(this + 32) - (long)pVVar1;
        auVar4._8_4_ = (int)((ulong)lVar2 >> 32);
        auVar4._0_8_ = lVar2;
        auVar4._12_4_ = 1160773632;
        auVar5 =
            Lerp<Vector4T<float>, float>((math*)(this + 16), (Vector4T*)(this + 48), pVVar1,
                                         (float)(((auVar5._8_8_ - 1.9342813113834067e+25) +
                                                  ((double)CONCAT44(1127219200, (int)lVar3) - 4503599627370496.0)) /
                                                 ((auVar4._8_8_ - 1.9342813113834067e+25) +
                                                  ((double)CONCAT44(1127219200, (int)lVar2) - 4503599627370496.0))));
        return auVar5;
    }

    // 0x1001d0840, 32 bytes, inline, placed by class name
    // Transitionable<Vector3T<float> >::IsTransitioning(unsigned long long) const
    bool Transitionable<Vector3T<float>>::IsTransitioning(ulonglong param_1) {
        if (param_1 < *(ulong*)(this + 24)) {
            return *(ulong*)this <= param_1;
        }
        return false;
    }

    // 0x1001d4bf0, 16 bytes, complete-object constructor, inline, placed by class name
    // Transitionable<float>::Transitionable(float const&): jumps straight to the base-object constructor

    // 0x1001d4c00, 32 bytes, base-object constructor, inline, placed by class name
    // Transitionable<float>::Transitionable(float const&)
    void Transitionable<float>::Transitionable(float* param_1) {
        *(undefined8*)this = 0;
        *(undefined8*)(this + 16) = 0;
        *(float*)(this + 24) = *param_1;
    }

    // 0x1001df6e0, 160 bytes, inline, placed by class name
    // Transitionable<Vector3T<float> >::GetSlerpedValue(unsigned long long) const
    undefined8 Transitionable<Vector3T<float>>::GetSlerpedValue(ulonglong param_1) {
        ulong uVar1;
        long lVar2;
        long lVar3;
        undefined8 uVar4;
        undefined1 auVar5[16];
        undefined1 auVar6[16];

        if (*(ulong*)(this + 24) <= param_1) {
            return *(undefined8*)(this + 32);
        }
        uVar1 = *(ulong*)this;
        if (param_1 < uVar1) {
            return *(undefined8*)(this + 8);
        }
        lVar3 = param_1 - uVar1;
        auVar5._8_4_ = (int)((ulong)lVar3 >> 32);
        auVar5._0_8_ = lVar3;
        auVar5._12_4_ = 1160773632;
        lVar2 = *(ulong*)(this + 24) - uVar1;
        auVar6._8_4_ = (int)((ulong)lVar2 >> 32);
        auVar6._0_8_ = lVar2;
        auVar6._12_4_ = 1160773632;
        uVar4 = SLerp<float>((Vector3T*)(this + 8), (Vector3T*)(this + 32),
                             (float)(((auVar5._8_8_ - 1.9342813113834067e+25) +
                                      ((double)CONCAT44(1127219200, (int)lVar3) - 4503599627370496.0)) /
                                     ((auVar6._8_8_ - 1.9342813113834067e+25) +
                                      ((double)CONCAT44(1127219200, (int)lVar2) - 4503599627370496.0))));
        return uVar4;
    }

    // 0x1003f0600, 16 bytes, complete-object constructor, inline, placed by class name
    // Transitionable<Vector3T<double> >::Transitionable(): jumps straight to the base-object constructor

    // 0x1003f3650, 176 bytes, inline, placed by class name
    // Transitionable<Vector3T<double> >::GetValue(unsigned long long) const
    Transitionable<Vector3T<double>>* Transitionable<Vector3T<double>>::GetValue(ulonglong param_1) {
        ulong uVar1;
        undefined8 uVar2;
        long lVar3;
        ulong in_RDX;
        long lVar4;
        undefined1 auVar5[16];
        undefined1 auVar6[16];

        if (in_RDX < *(ulong*)(param_1 + 32)) {
            uVar1 = *(ulong*)param_1;
            if (in_RDX < uVar1) {
                *(undefined8*)(this + 16) = *(undefined8*)(param_1 + 24);
                uVar2 = *(undefined8*)(param_1 + 16);
                *(undefined8*)this = *(undefined8*)(param_1 + 8);
                *(undefined8*)(this + 8) = uVar2;
            } else {
                lVar4 = in_RDX - uVar1;
                auVar5._8_4_ = (int)((ulong)lVar4 >> 32);
                auVar5._0_8_ = lVar4;
                auVar5._12_4_ = 1160773632;
                lVar3 = *(ulong*)(param_1 + 32) - uVar1;
                auVar6._8_4_ = (int)((ulong)lVar3 >> 32);
                auVar6._0_8_ = lVar3;
                auVar6._12_4_ = 1160773632;
                Lerp<Vector3T<double>, double>((math*)this, (Vector3T*)(param_1 + 8), (Vector3T*)(param_1 + 40),
                                               ((auVar5._8_8_ - 1.9342813113834067e+25) +
                                                ((double)CONCAT44(1127219200, (int)lVar4) - 4503599627370496.0)) /
                                                   ((auVar6._8_8_ - 1.9342813113834067e+25) +
                                                    ((double)CONCAT44(1127219200, (int)lVar3) - 4503599627370496.0)));
            }
        } else {
            *(undefined8*)(this + 16) = *(undefined8*)(param_1 + 56);
            uVar2 = *(undefined8*)(param_1 + 48);
            *(undefined8*)this = *(undefined8*)(param_1 + 40);
            *(undefined8*)(this + 8) = uVar2;
        }
        return this;
    }

    // 0x1003f5110, 128 bytes, inline, placed by class name
    // Transitionable<Vector3T<double> >::SetValue(Vector3T<double> const&, long long, unsigned long long)
    void Transitionable<Vector3T<double>>::SetValue(Vector3T* param_1, longlong param_2, ulonglong param_3) {
        long lVar1;
        Transitionable<Vector3T<double>> local_48[24];

        if (param_2 < 1) {
            Vector3T<double>::operator=((Vector3T<double>*)(this + 40), param_1);
            lVar1 = 0;
        } else {
            GetValue(local_48, (ulonglong)this);
            Vector3T<double>::operator=((Vector3T<double>*)(this + 8), (Vector3T*)local_48);
            *(ulonglong*)this = param_3;
            Vector3T<double>::operator=((Vector3T<double>*)(this + 40), param_1);
            lVar1 = param_2 + *(long*)this;
        }
        *(long*)(this + 32) = lVar1;
    }

    // 0x100404d30, 64 bytes, base-object constructor, inline, placed by class name
    // Transitionable<Vector3T<double> >::Transitionable()
    void Transitionable<Vector3T<double>>::Transitionable() {
        *(undefined8*)this = 0;
        new ((this + 8)) oldscape::dash3d::ModelLit::AABB();
        *(undefined8*)(this + 32) = 0;
        new ((this + 40)) oldscape::dash3d::ModelLit::AABB();
    }

    // 0x1004113e0, 16 bytes, complete-object constructor, inline, placed by class name
    // Transitionable<graphics::IrradianceSHCoefConsts>::Transitionable(): jumps straight to the base-object constructor

    // 0x100414b50, 144 bytes, inline, placed by class name
    // Transitionable<graphics::IrradianceSHCoefConsts>::SetValue(graphics::IrradianceSHCoefConsts const&, long long, unsigned long long)
    void Transitionable<graphics::IrradianceSHCoefConsts>::SetValue(IrradianceSHCoefConsts* param_1, longlong param_2,
                                                                    ulonglong param_3) {
        long lVar1;
        IrradianceSHCoefConsts local_a8;

        if (param_2 < 1) {
            graphics::IrradianceSHCoefConsts::operator=((IrradianceSHCoefConsts*)(this + 144), param_1);
            lVar1 = 0;
        } else {
            GetValue((Transitionable<graphics::IrradianceSHCoefConsts>*)&local_a8, (ulonglong)this);
            graphics::IrradianceSHCoefConsts::operator=((IrradianceSHCoefConsts*)(this + 16), &local_a8);
            *(ulonglong*)this = param_3;
            graphics::IrradianceSHCoefConsts::operator=((IrradianceSHCoefConsts*)(this + 144), param_1);
            lVar1 = param_2 + *(long*)this;
        }
        *(long*)(this + 128) = lVar1;
    }

    // 0x100414cb0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Transitionable<graphics::IrradianceSHCoefConsts>::GetEndValue()
    /* graphics::RT7Core::GetImmediateThreadPool() */

    undefined1* graphics::RT7Core::GetImmediateThreadPool() {
        return m_immediateThreadPool;
    }

    // 0x100420ad0, 64 bytes, base-object constructor, inline, placed by class name
    // Transitionable<graphics::IrradianceSHCoefConsts>::Transitionable()
    void Transitionable<graphics::IrradianceSHCoefConsts>::Transitionable() {
        *(undefined8*)this = 0;
        new ((this + 16)) graphics::IrradianceSHCoefConsts();
        *(undefined8*)(this + 128) = 0;
        new ((this + 144)) graphics::IrradianceSHCoefConsts();
    }

    // 0x100432200, 272 bytes, inline, placed by class name
    // Transitionable<graphics::IrradianceSHCoefConsts>::GetValue(unsigned long long) const
    Transitionable<graphics::IrradianceSHCoefConsts>*
    Transitionable<graphics::IrradianceSHCoefConsts>::GetValue(ulonglong param_1) {
        ulong uVar1;
        IrradianceSHCoefConsts* pIVar2;
        ulong in_RDX;
        long lVar3;
        undefined8 uVar4;
        undefined8 uVar7;
        undefined1 auVar5[16];
        undefined1 auVar6[16];
        undefined8 uVar8;
        undefined8 uVar9;
        undefined8 uVar10;
        undefined8 uVar11;
        undefined4 uVar12;
        undefined4 uVar13;
        undefined4 uVar14;
        undefined4 uVar15;

        if (in_RDX < *(ulong*)(param_1 + 128)) {
            uVar1 = *(ulong*)param_1;
            if (uVar1 <= in_RDX) {
                lVar3 = in_RDX - uVar1;
                auVar5._8_4_ = (int)((ulong)lVar3 >> 32);
                auVar5._0_8_ = lVar3;
                auVar5._12_4_ = 1160773632;
                pIVar2 = (IrradianceSHCoefConsts*)(*(ulong*)(param_1 + 128) - uVar1);
                auVar6._8_4_ = (int)((ulong)pIVar2 >> 32);
                auVar6._0_8_ = pIVar2;
                auVar6._12_4_ = 1160773632;
                Lerp<graphics::IrradianceSHCoefConsts, float>(
                    (IrradianceSHCoefConsts*)this, (math*)(param_1 + 16), (IrradianceSHCoefConsts*)(param_1 + 144),
                    pIVar2,
                    (float)(((auVar5._8_8_ - 1.9342813113834067e+25) +
                             ((double)CONCAT44(1127219200, (int)lVar3) - 4503599627370496.0)) /
                            ((auVar6._8_8_ - 1.9342813113834067e+25) +
                             ((double)CONCAT44(1127219200, (int)pIVar2) - 4503599627370496.0))));
                return this;
            }
            uVar10 = *(undefined8*)(param_1 + 120);
            *(undefined8*)(this + 96) = *(undefined8*)(param_1 + 112);
            *(undefined8*)(this + 104) = uVar10;
            uVar10 = *(undefined8*)(param_1 + 104);
            *(undefined8*)(this + 80) = *(undefined8*)(param_1 + 96);
            *(undefined8*)(this + 88) = uVar10;
            uVar10 = *(undefined8*)(param_1 + 88);
            *(undefined8*)(this + 64) = *(undefined8*)(param_1 + 80);
            *(undefined8*)(this + 72) = uVar10;
            uVar4 = *(undefined8*)(param_1 + 16);
            uVar7 = *(undefined8*)(param_1 + 24);
            uVar8 = *(undefined8*)(param_1 + 32);
            uVar9 = *(undefined8*)(param_1 + 40);
            uVar10 = *(undefined8*)(param_1 + 48);
            uVar11 = *(undefined8*)(param_1 + 56);
            uVar12 = *(undefined4*)(param_1 + 64);
            uVar13 = *(undefined4*)(param_1 + 68);
            uVar14 = *(undefined4*)(param_1 + 72);
            uVar15 = *(undefined4*)(param_1 + 76);
        } else {
            uVar10 = *(undefined8*)(param_1 + 248);
            *(undefined8*)(this + 96) = *(undefined8*)(param_1 + 240);
            *(undefined8*)(this + 104) = uVar10;
            uVar10 = *(undefined8*)(param_1 + 232);
            *(undefined8*)(this + 80) = *(undefined8*)(param_1 + 224);
            *(undefined8*)(this + 88) = uVar10;
            uVar10 = *(undefined8*)(param_1 + 216);
            *(undefined8*)(this + 64) = *(undefined8*)(param_1 + 208);
            *(undefined8*)(this + 72) = uVar10;
            uVar4 = *(undefined8*)(param_1 + 144);
            uVar7 = *(undefined8*)(param_1 + 152);
            uVar8 = *(undefined8*)(param_1 + 160);
            uVar9 = *(undefined8*)(param_1 + 168);
            uVar10 = *(undefined8*)(param_1 + 176);
            uVar11 = *(undefined8*)(param_1 + 184);
            uVar12 = *(undefined4*)(param_1 + 192);
            uVar13 = *(undefined4*)(param_1 + 196);
            uVar14 = *(undefined4*)(param_1 + 200);
            uVar15 = *(undefined4*)(param_1 + 204);
        }
        *(undefined4*)(this + 48) = uVar12;
        *(undefined4*)(this + 52) = uVar13;
        *(undefined4*)(this + 56) = uVar14;
        *(undefined4*)(this + 60) = uVar15;
        *(undefined8*)(this + 32) = uVar10;
        *(undefined8*)(this + 40) = uVar11;
        *(undefined8*)(this + 16) = uVar8;
        *(undefined8*)(this + 24) = uVar9;
        *(undefined8*)this = uVar4;
        *(undefined8*)(this + 8) = uVar7;
        return this;
    }

    // 0x100616120, 128 bytes, inline, placed by class name
    // Transitionable<QuaternionT<double> >::SetValue(QuaternionT<double> const&, long long, unsigned long long)
    void Transitionable<QuaternionT<double>>::SetValue(QuaternionT* param_1, longlong param_2, ulonglong param_3) {
        long lVar1;
        Transitionable<QuaternionT<double>> local_50[32];

        if (param_2 < 1) {
            QuaternionT<double>::operator=((QuaternionT<double>*)(this + 48), param_1);
            lVar1 = 0;
        } else {
            GetValue(local_50, (ulonglong)this);
            QuaternionT<double>::operator=((QuaternionT<double>*)(this + 8), (QuaternionT*)local_50);
            *(ulonglong*)this = param_3;
            QuaternionT<double>::operator=((QuaternionT<double>*)(this + 48), param_1);
            lVar1 = param_2 + *(long*)this;
        }
        *(long*)(this + 40) = lVar1;
    }

    // 0x10061b180, 176 bytes, inline, placed by class name
    // Transitionable<QuaternionT<double> >::GetValue(unsigned long long) const
    Transitionable<QuaternionT<double>>* Transitionable<QuaternionT<double>>::GetValue(ulonglong param_1) {
        ulong uVar1;
        long lVar2;
        ulong in_RDX;
        long lVar3;
        undefined8 uVar4;
        undefined8 uVar7;
        undefined1 auVar5[16];
        undefined1 auVar6[16];
        undefined8 uVar8;
        undefined8 uVar9;

        if (in_RDX < *(ulong*)(param_1 + 40)) {
            uVar1 = *(ulong*)param_1;
            if (uVar1 <= in_RDX) {
                lVar3 = in_RDX - uVar1;
                auVar5._8_4_ = (int)((ulong)lVar3 >> 32);
                auVar5._0_8_ = lVar3;
                auVar5._12_4_ = 1160773632;
                lVar2 = *(ulong*)(param_1 + 40) - uVar1;
                auVar6._8_4_ = (int)((ulong)lVar2 >> 32);
                auVar6._0_8_ = lVar2;
                auVar6._12_4_ = 1160773632;
                Lerp<QuaternionT<double>, float>(
                    (math*)this, (QuaternionT*)(param_1 + 8), (QuaternionT*)(param_1 + 48),
                    (float)(((auVar5._8_8_ - 1.9342813113834067e+25) +
                             ((double)CONCAT44(1127219200, (int)lVar3) - 4503599627370496.0)) /
                            ((auVar6._8_8_ - 1.9342813113834067e+25) +
                             ((double)CONCAT44(1127219200, (int)lVar2) - 4503599627370496.0))));
                return this;
            }
            uVar4 = *(undefined8*)(param_1 + 8);
            uVar7 = *(undefined8*)(param_1 + 16);
            uVar8 = *(undefined8*)(param_1 + 24);
            uVar9 = *(undefined8*)(param_1 + 32);
        } else {
            uVar4 = *(undefined8*)(param_1 + 48);
            uVar7 = *(undefined8*)(param_1 + 56);
            uVar8 = *(undefined8*)(param_1 + 64);
            uVar9 = *(undefined8*)(param_1 + 72);
        }
        *(undefined8*)(this + 16) = uVar8;
        *(undefined8*)(this + 24) = uVar9;
        *(undefined8*)this = uVar4;
        *(undefined8*)(this + 8) = uVar7;
        return this;
    }

    // 0x1006233d0, 48 bytes, inline, placed by class name
    // Transitionable<Vector3T<double> >::operator=(Vector3T<double> const&)
    /* Transitionable<Vector3T<double>
   >::TEMPNAMEPLACEHOLDERVALUE(Vector3T<double> const&) */

    Transitionable<Vector3T<double>>* Transitionable<Vector3T<double>>::operator=(Vector3T* param_1) {
        Vector3T<double>::operator=((Vector3T<double>*)(this + 40), param_1);
        *(undefined8*)(this + 32) = 0;
        return this;
    }

    // 0x100641370, 16 bytes, complete-object constructor, inline, placed by class name
    // Transitionable<QuaternionT<double> >::Transitionable(): jumps straight to the base-object constructor

    // 0x100641390, 48 bytes, inline, placed by class name
    // Transitionable<QuaternionT<double> >::operator=(QuaternionT<double> const&)
    /* Transitionable<QuaternionT<double>
   >::TEMPNAMEPLACEHOLDERVALUE(QuaternionT<double> const&) */

    Transitionable<QuaternionT<double>>* Transitionable<QuaternionT<double>>::operator=(QuaternionT* param_1) {
        QuaternionT<double>::operator=((QuaternionT<double>*)(this + 48), param_1);
        *(undefined8*)(this + 40) = 0;
        return this;
    }

    // 0x1006413c0, 64 bytes, base-object constructor, inline, placed by class name
    // Transitionable<QuaternionT<double> >::Transitionable()
    void Transitionable<QuaternionT<double>>::Transitionable() {
        *(undefined8*)this = 0;
        new ((this + 8)) QuaternionT<double>();
        *(undefined8*)(this + 40) = 0;
        new ((this + 48)) QuaternionT<double>();
    }

    // 0x1007df490, 32 bytes, inline, placed by class name
    // Transitionable<float>::operator=(float const&)
    /* Transitionable<float>::TEMPNAMEPLACEHOLDERVALUE(float const&) */

    Transitionable<float>* Transitionable<float>::operator=(float* param_1) {
        *(float*)(this + 24) = *param_1;
        *(undefined8*)(this + 16) = 0;
        return this;
    }

    // 0x1008a9490, 16 bytes, complete-object constructor, inline, placed by class name
    // Transitionable<Vector3T<float> >::Transitionable(): jumps straight to the base-object constructor

    // 0x1008d2420, 64 bytes, base-object constructor, inline, placed by class name
    // Transitionable<Vector3T<float> >::Transitionable()
    void Transitionable<Vector3T<float>>::Transitionable() {
        *(undefined8*)this = 0;
        new ((this + 8)) Vector3T<int>();
        *(undefined8*)(this + 24) = 0;
        new ((this + 32)) Vector3T<int>();
    }

    // 0x1008fa430, 96 bytes, inline, placed by class name
    // Transitionable<float>::SetValue(float const&, long long, unsigned long long)
    void Transitionable<float>::SetValue(float* param_1, longlong param_2, ulonglong param_3) {
        long lVar1;
        undefined4 uVar2;

        if (param_2 < 1) {
            *(float*)(this + 24) = *param_1;
            lVar1 = 0;
        } else {
            uVar2 = GetValue(this, param_3);
            *(undefined4*)(this + 8) = uVar2;
            *(ulonglong*)this = param_3;
            *(float*)(this + 24) = *param_1;
            lVar1 = param_2 + param_3;
        }
        *(long*)(this + 16) = lVar1;
    }

    // 0x1008fa550, 144 bytes, inline, placed by class name
    // Transitionable<float>::GetValue(unsigned long long) const
    void Transitionable<float>::GetValue(ulonglong param_1) {
        ulong uVar1;
        long lVar2;
        long lVar3;
        undefined1 auVar4[16];
        undefined1 auVar5[16];

        if (*(ulong*)(this + 16) <= param_1) {
            return;
        }
        uVar1 = *(ulong*)this;
        if (param_1 < uVar1) {
            return;
        }
        lVar3 = param_1 - uVar1;
        auVar4._8_4_ = (int)((ulong)lVar3 >> 32);
        auVar4._0_8_ = lVar3;
        auVar4._12_4_ = 1160773632;
        lVar2 = *(ulong*)(this + 16) - uVar1;
        auVar5._8_4_ = (int)((ulong)lVar2 >> 32);
        auVar5._0_8_ = lVar2;
        auVar5._12_4_ = 1160773632;
        Lerp<float, float>((float*)(this + 8), (float*)(this + 24),
                           (float)(((auVar4._8_8_ - 1.9342813113834067e+25) +
                                    ((double)CONCAT44(1127219200, (int)lVar3) - 4503599627370496.0)) /
                                   ((auVar5._8_8_ - 1.9342813113834067e+25) +
                                    ((double)CONCAT44(1127219200, (int)lVar2) - 4503599627370496.0))));
    }

    // 0x1008fae90, 16 bytes, complete-object constructor, inline, placed by class name
    // Transitionable<float>::Transitionable(): jumps straight to the base-object constructor

    // 0x100912bd0, 32 bytes, base-object constructor, inline, placed by class name
    // Transitionable<float>::Transitionable()
    void Transitionable<float>::Transitionable() {
        *(undefined8*)this = 0;
        *(undefined8*)(this + 16) = 0;
    }

    // 0x100922250, 64 bytes, inline, placed by class name
    // Transitionable<Vector3T<float> >::operator=(Transitionable<Vector3T<float> > const&)
    /* Transitionable<Vector3T<float>
   >::TEMPNAMEPLACEHOLDERVALUE(Transitionable<Vector3T<float> > const&) */

    Transitionable<Vector3T<float>>* Transitionable<Vector3T<float>>::operator=(Transitionable* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        ((this + 8))->SetXYZ((Vector3T*)(param_1 + 8));
        *(undefined8*)(this + 24) = *(undefined8*)(param_1 + 24);
        ((this + 32))->SetXYZ((Vector3T*)(param_1 + 32));
        return this;
    }

    // 0x1009318e0, 160 bytes, inline, placed by class name
    // Transitionable<Vector3T<float> >::GetValue(unsigned long long) const
    undefined8 Transitionable<Vector3T<float>>::GetValue(ulonglong param_1) {
        Vector3T* pVVar1;
        long lVar2;
        long lVar3;
        undefined8 uVar4;
        undefined1 auVar5[16];
        undefined1 auVar6[16];

        if (*(ulong*)(this + 24) <= param_1) {
            return *(undefined8*)(this + 32);
        }
        pVVar1 = *(Vector3T**)this;
        if (param_1 < pVVar1) {
            return *(undefined8*)(this + 8);
        }
        lVar3 = param_1 - (long)pVVar1;
        auVar5._8_4_ = (int)((ulong)lVar3 >> 32);
        auVar5._0_8_ = lVar3;
        auVar5._12_4_ = 1160773632;
        lVar2 = *(ulong*)(this + 24) - (long)pVVar1;
        auVar6._8_4_ = (int)((ulong)lVar2 >> 32);
        auVar6._0_8_ = lVar2;
        auVar6._12_4_ = 1160773632;
        uVar4 =
            Lerp<Vector3T<float>, float>((math*)(this + 8), (Vector3T*)(this + 32), pVVar1,
                                         (float)(((auVar5._8_8_ - 1.9342813113834067e+25) +
                                                  ((double)CONCAT44(1127219200, (int)lVar3) - 4503599627370496.0)) /
                                                 ((auVar6._8_8_ - 1.9342813113834067e+25) +
                                                  ((double)CONCAT44(1127219200, (int)lVar2) - 4503599627370496.0))));
        return uVar4;
    }

    // 0x1009329d0, 16 bytes, complete-object constructor, inline, placed by class name
    // Transitionable<Vector3T<float> >::Transitionable(Vector3T<float> const&): jumps straight to the base-object constructor

    // 0x1009340f0, 128 bytes, inline, placed by class name
    // Transitionable<Vector3T<float> >::SetValue(Vector3T<float> const&, long long, unsigned long long)
    void Transitionable<Vector3T<float>>::SetValue(Vector3T* param_1, longlong param_2, ulonglong param_3) {
        long lVar1;
        undefined8 local_38[2];

        if (param_2 < 1) {
            ((this + 32))->SetXYZ(param_1);
            lVar1 = 0;
        } else {
            local_38[0] = GetValue(this, param_3);
            ((this + 8))->SetXYZ(local_38);
            *(ulonglong*)this = param_3;
            ((this + 32))->SetXYZ(param_1);
            lVar1 = param_2 + *(long*)this;
        }
        *(long*)(this + 24) = lVar1;
    }

    // 0x100936480, 144 bytes, inline, placed by class name
    // Transitionable<Vector2T<float> >::GetValue(unsigned long long) const
    undefined8 Transitionable<Vector2T<float>>::GetValue(ulonglong param_1) {
        ulong uVar1;
        long lVar2;
        long lVar3;
        undefined8 uVar4;
        undefined1 auVar5[16];
        undefined1 auVar6[16];

        if (*(ulong*)(this + 16) <= param_1) {
            return *(undefined8*)(this + 24);
        }
        uVar1 = *(ulong*)this;
        if (param_1 < uVar1) {
            return *(undefined8*)(this + 8);
        }
        lVar3 = param_1 - uVar1;
        auVar5._8_4_ = (int)((ulong)lVar3 >> 32);
        auVar5._0_8_ = lVar3;
        auVar5._12_4_ = 1160773632;
        lVar2 = *(ulong*)(this + 16) - uVar1;
        auVar6._8_4_ = (int)((ulong)lVar2 >> 32);
        auVar6._0_8_ = lVar2;
        auVar6._12_4_ = 1160773632;
        uVar4 =
            Lerp<Vector2T<float>, float>((Vector2T*)(this + 8), (Vector2T*)(this + 24),
                                         (float)(((auVar5._8_8_ - 1.9342813113834067e+25) +
                                                  ((double)CONCAT44(1127219200, (int)lVar3) - 4503599627370496.0)) /
                                                 ((auVar6._8_8_ - 1.9342813113834067e+25) +
                                                  ((double)CONCAT44(1127219200, (int)lVar2) - 4503599627370496.0))));
        return uVar4;
    }

    // 0x100936b60, 112 bytes, inline, placed by class name
    // Transitionable<Vector2T<float> >::SetValue(Vector2T<float> const&, long long, unsigned long long)
    void Transitionable<Vector2T<float>>::SetValue(Vector2T* param_1, longlong param_2, ulonglong param_3) {
        long lVar1;
        undefined8 local_30;

        if (param_2 < 1) {
            Vector2T<float>::operator=((Vector2T<float>*)(this + 24), param_1);
            lVar1 = 0;
        } else {
            local_30 = GetValue(this, param_3);
            Vector2T<float>::operator=((Vector2T<float>*)(this + 8), (Vector2T*)&local_30);
            *(ulonglong*)this = param_3;
            Vector2T<float>::operator=((Vector2T<float>*)(this + 24), param_1);
            lVar1 = param_2 + *(long*)this;
        }
        *(long*)(this + 16) = lVar1;
    }

    // 0x10093a3c0, 64 bytes, base-object constructor, inline, placed by class name
    // Transitionable<Vector3T<float> >::Transitionable(Vector3T<float> const&)
    void Transitionable<Vector3T<float>>::Transitionable(Vector3T* param_1) {
        *(undefined8*)this = 0;
        new ((this + 8)) Vector3T<int>();
        *(undefined8*)(this + 24) = 0;
        *(undefined8*)(this + 32) = *(undefined8*)param_1;
        *(undefined4*)(this + 40) = *(undefined4*)(param_1 + 8);
    }

    // 0x10093c090, 16 bytes, complete-object constructor, inline, placed by class name
    // Transitionable<Vector4T<float> >::Transitionable(Vector4T<float> const&): jumps straight to the base-object constructor

    // 0x10093c0a0, 16 bytes, complete-object constructor, inline, placed by class name
    // Transitionable<Vector2T<float> >::Transitionable(Vector2T<float> const&): jumps straight to the base-object constructor

    // 0x10093c0e0, 64 bytes, base-object constructor, inline, placed by class name
    // Transitionable<Vector4T<float> >::Transitionable(Vector4T<float> const&)
    void Transitionable<Vector4T<float>>::Transitionable(Vector4T* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        new ((this + 16)) Vector4T<float>();
        *(undefined8*)(this + 32) = 0;
        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)(this + 48) = *(undefined8*)param_1;
        *(undefined8*)(this + 56) = uVar1;
    }

    // 0x10093c120, 64 bytes, base-object constructor, inline, placed by class name
    // Transitionable<Vector2T<float> >::Transitionable(Vector2T<float> const&)
    void Transitionable<Vector2T<float>>::Transitionable(Vector2T* param_1) {
        *(undefined8*)this = 0;
        new ((this + 8)) Vector2T<int>();
        *(undefined8*)(this + 16) = 0;
        *(undefined8*)(this + 24) = *(undefined8*)param_1;
    }

} // namespace jag::math

namespace jag::graphics {
    // 0x100414cb0: the linker folded this into math::Transitionable<IrradianceSHCoefConsts>::GetEndValue(), which has identical code
    SpriteAtlasUsageMap::GetPermanent() const;

} // namespace jag::graphics
