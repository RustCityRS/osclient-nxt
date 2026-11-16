// libs/math/vector/Vector3.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.system.osclient

namespace jag::math {
    // 0x10000bf40, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.154
    void ___cxx_global_var_init_154() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10000bf80, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.155
    void ___cxx_global_var_init_155() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10000bfc0, 39 bytes, placed by debug map only (low confidence)
    // __GLOBAL__sub_I_unity_0_cxx.cxx
    void __GLOBAL__sub_I_unity_0_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_130();
        _objc_autoreleasePoolPop(uVar1);
    }

    // 0x1002c8480, 96 bytes, inline, placed by debug map only (low confidence)
    // void Vector3T<float>::Serialise<oldscape::PacketJ<Array<unsigned char, eastl::allocator> > >(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, bool) const
    void Vector3T<float>::Serialise<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>(PacketJ* param_1,
                                                                                               bool param_2) {
        undefined3 in_register_00000011;

        if (CONCAT31(in_register_00000011, param_2) == 0) {
            PacketT<Array<unsigned char, eastl::allocator>>::pT<float>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, *(float*)this);
            PacketT<Array<unsigned char, eastl::allocator>>::pT<float>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, *(float*)(this + 4));
            PacketT<Array<unsigned char, eastl::allocator>>::pT<float>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, *(float*)(this + 8));
        } else {
            PacketT<Array<unsigned char, eastl::allocator>>::pTPE<float>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, *(float*)this);
            PacketT<Array<unsigned char, eastl::allocator>>::pTPE<float>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, *(float*)(this + 4));
            PacketT<Array<unsigned char, eastl::allocator>>::pTPE<float>(
                (PacketT<Array<unsigned char, eastl::allocator>>*)param_1, *(float*)(this + 8));
        }
    }

    // 0x1002c88f0, 32 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<float>::Set(QuaternionT<float> const&)
    /* Vector4T<float>::Set(Vector4T<float> const&) */

    Vector4T<float>* Vector4T<float>::Set(Vector4T* param_1) {
        Rect<float>::operator=((Rect<float>*)this, (Rect*)param_1);
        return this;
    }

    // 0x1002c8960, 48 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<float>::SetToIdentity()
    QuaternionT<float>* QuaternionT<float>::SetToIdentity() {
        Set(this, 0.0, 0.0, 0.0, 1.0);
        return this;
    }

    // 0x1002c8990, 32 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float>::SetToZero()
    Vector3T<float>* Vector3T<float>::SetToZero() {
        *(undefined8*)this = 0;
        *(undefined4*)(this + 8) = 0;
        return this;
    }

    // 0x1002c8ab0, 64 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<float>::Conjugate() const
    QuaternionT<float>* QuaternionT<float>::Conjugate() {
        float* in_RSI;

        QuaternionT(this, -*in_RSI, -in_RSI[1], -in_RSI[2], in_RSI[3]);
        return this;
    }

    // 0x1002c8af0, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float>::Negate()
    void Vector3T<float>::Negate() {
        *(uint*)this = *(uint*)this ^ 2147483648;
        *(uint*)(this + 4) = *(uint*)(this + 4) ^ 2147483648;
        *(uint*)(this + 8) = *(uint*)(this + 8) ^ 2147483648;
    }

    // 0x1002c8b30, 208 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float>::Rotate(QuaternionT<float> const&)
    void Vector3T<float>::Rotate(QuaternionT* param_1) {
        QuaternionT<float> local_90[16];
        QuaternionT<float> local_80[16];
        QuaternionT<float> local_70[16];
        QuaternionT<float> local_60[16];
        undefined1 local_50[16];
        float local_40;
        float local_3c;
        float local_38;

        QuaternionT<float>::QuaternionT(local_90);
        local_90->Set(*(float*)this, *(float*)(this + 4), *(float*)(this + 8), 0.0);
        QuaternionT<float>::QuaternionT(local_80, param_1);
        local_40.Conjugate();
        math::operator*((math*)&local_40, (QuaternionT*)local_80, (QuaternionT*)local_90);
        QuaternionT<float>::QuaternionT(local_70, (QuaternionT*)&local_40);
        QuaternionT<float>::QuaternionT(local_60, param_1);
        QuaternionMultiply<float>((math*)local_50, (math*)&local_40, local_70, local_60);
        Set(this, local_40, local_3c, local_38);
    }

    // 0x1002c8dc0, 384 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<float>::operator*=(QuaternionT<float> const&)
    /* QuaternionT<float>::TEMPNAMEPLACEHOLDERVALUE(QuaternionT<float> const&) */

    QuaternionT<float>* QuaternionT<float>::operator*=(QuaternionT* param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        vector* pvVar9;
        float* pfVar10;

        pvVar9 = SSOBeginPtr(param_1);
        fVar1 = *(float*)pvVar9;
        pfVar10 = (float*)y();
        fVar2 = *pfVar10;
        pfVar10 = (float*)second();
        fVar3 = *pfVar10;
        pfVar10 = (float*)qw(this);
        fVar4 = *pfVar10;
        pvVar9 = param_1->SSOBeginPtr(param_1);
        fVar5 = *(float*)pvVar9;
        pfVar10 = (float*)param_1->y();
        fVar6 = *pfVar10;
        pfVar10 = (float*)param_1->second();
        fVar7 = *pfVar10;
        pfVar10 = (float*)qw((QuaternionT<float>*)param_1);
        fVar8 = *pfVar10;
        *(float*)this = (fVar5 * fVar4 - fVar6 * fVar3) + fVar7 * fVar2 + fVar8 * fVar1;
        *(float*)(this + 4) = ((fVar5 * fVar3 + fVar6 * fVar4) - fVar7 * fVar1) + fVar8 * fVar2;
        *(float*)(this + 8) = (fVar6 * fVar1 - fVar5 * fVar2) + fVar8 * fVar3 + fVar7 * fVar4;
        *(float*)(this + 12) = fVar8 * fVar4 - (fVar7 * fVar3 + fVar6 * fVar2 + fVar5 * fVar1);
        return this;
    }

    // 0x1002c8fc0, 576 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float>::operator*=(QuaternionT<float> const&)
    /* Vector3T<float>::TEMPNAMEPLACEHOLDERVALUE(QuaternionT<float> const&) */

    Vector3T<float>* Vector3T<float>::operator*=(QuaternionT* param_1) {
        float fVar1;
        float* pfVar2;
        vector* pvVar3;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;

        pfVar2 = (float*)param_1->y();
        fVar8 = *pfVar2;
        pfVar2 = (float*)second();
        fVar1 = *pfVar2;
        pfVar2 = (float*)param_1->second();
        fVar7 = *pfVar2;
        pfVar2 = (float*)y();
        fVar5 = fVar8 * fVar1 - fVar7 * *pfVar2;
        pfVar2 = (float*)param_1->second();
        fVar8 = *pfVar2;
        pvVar3 = SSOBeginPtr(param_1);
        fVar1 = *(float*)pvVar3;
        pvVar3 = param_1->SSOBeginPtr(param_1);
        fVar7 = *(float*)pvVar3;
        pfVar2 = (float*)second();
        fVar6 = fVar8 * fVar1 - fVar7 * *pfVar2;
        pvVar3 = param_1->SSOBeginPtr(param_1);
        fVar8 = *(float*)pvVar3;
        pfVar2 = (float*)y();
        fVar1 = *pfVar2;
        pfVar2 = (float*)param_1->y();
        fVar7 = *pfVar2;
        pvVar3 = SSOBeginPtr(param_1);
        fVar7 = fVar8 * fVar1 - fVar7 * *(float*)pvVar3;
        pfVar2 = (float*)param_1->qw();
        fVar8 = *pfVar2;
        pfVar2 = (float*)param_1->y();
        fVar1 = *pfVar2;
        pfVar2 = (float*)param_1->second();
        fVar8 = (fVar1 * fVar7 + fVar8 * fVar5) - *pfVar2 * fVar6;
        *(float*)this = fVar8 + fVar8 + *(float*)this;
        pfVar2 = (float*)param_1->qw();
        fVar8 = *pfVar2;
        pfVar2 = (float*)param_1->second();
        fVar1 = *pfVar2;
        pvVar3 = param_1->SSOBeginPtr(param_1);
        fVar8 = (fVar1 * fVar5 + fVar8 * fVar6) - *(float*)pvVar3 * fVar7;
        *(float*)(this + 4) = fVar8 + fVar8 + *(float*)(this + 4);
        pfVar2 = (float*)param_1->qw();
        fVar8 = *pfVar2;
        pvVar3 = param_1->SSOBeginPtr(param_1);
        fVar1 = *(float*)pvVar3;
        pfVar2 = (float*)param_1->y();
        fVar8 = (fVar6 * fVar1 + fVar7 * fVar8) - fVar5 * *pfVar2;
        *(float*)(this + 8) = fVar8 + fVar8 + *(float*)(this + 8);
        return this;
    }

    // 0x1002c9350, 64 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<float>::operator*=(float)
    /* Vector4T<float>::TEMPNAMEPLACEHOLDERVALUE(float) */

    Vector4T<float>* Vector4T<float>::operator*=(float param_1) {
        *(float*)this = *(float*)this * param_1;
        *(float*)(this + 4) = *(float*)(this + 4) * param_1;
        *(float*)(this + 8) = *(float*)(this + 8) * param_1;
        *(float*)(this + 12) = param_1 * *(float*)(this + 12);
        return this;
    }

    // 0x1002c94d0, 160 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<float>::Interpolate(QuaternionT<float> const&, float) const
    QuaternionT<float>* QuaternionT<float>::Interpolate(QuaternionT* param_1, float param_2) {
        Vector4T* in_RDX;
        Vector4T* extraout_RDX;
        QuaternionT<float> local_38[20];

        QuaternionT(this, param_1);
        if (Vector4Dot<float>((math*)param_1, in_RDX, extraout_RDX) < 0.0) {
            Negate();
        }
        Vector4T<float>::operator*=((Vector4T<float>*)this, 1.0 - param_2);
        QuaternionT(local_38);
        SetToIdentity(local_38);
        Vector4T<float>::operator*=((Vector4T<float>*)local_38, param_2);
        operator+=(this, (QuaternionT*)local_38);
        Normalise(this);
        return this;
    }

    // 0x1002c9570, 96 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float>::Interpolate(Vector3T<float> const&, float)
    void Vector3T<float>::Interpolate(Vector3T* param_1, float param_2) {
        undefined8 local_28;
        float local_20;

        operator*=(this, 1.0 - param_2);
        local_28 = math::operator*(param_1, param_2);
        local_20 = param_2;
        operator+=(this, (Vector3T*)&local_28);
    }

} // namespace jag::math

namespace jag {
    // 0x1002c87b0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<math::QuaternionT<float> >::type make_shared<math::QuaternionT<float>, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&>(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&)
    jag* jag::make_shared<math::QuaternionT<float>, oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&>(
        PacketJ* param_1) {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_34;
        QuaternionT* local_30[2];

        pvVar1 = (void*)aligned_alloc(32, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] =
                placement_new<math::QuaternionT<float>, oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&>(
                    (void*)((long)pvVar1 + 16), param_1);
            local_34 = 1;
            prVar2 =
                placement_new<ref_counter_shared_trivial<math::QuaternionT<float>>, int, math::QuaternionT<float>*&>(
                    pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x1002c8850, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<math::Vector3T<float> >::type make_shared<math::Vector3T<float>, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&>(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&)
    jag* jag::make_shared<math::Vector3T<float>, oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&>(
        PacketJ* param_1) {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_34;
        Vector3T* local_30[2];

        pvVar1 = (void*)aligned_alloc(32, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] =
                placement_new<math::Vector3T<float>, oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&>(
                    (void*)((long)pvVar1 + 16), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared_trivial<math::Vector3T<float>>, int, math::Vector3T<float>*&>(
                pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x1002c8c40, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::math::RotTrans>::type make_shared<oldscape::math::RotTrans, oldscape::math::RotTrans const&>(oldscape::math::RotTrans const&)
    jag* make_shared<oldscape::math::RotTrans, oldscape::math::RotTrans_const&>(RotTrans* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        RotTrans* local_30[2];

        pvVar1 = (void*)aligned_alloc(80, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::math::RotTrans, oldscape::math::RotTrans_const&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::math::RotTrans>, int, oldscape::math::RotTrans*&>(
                pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag
