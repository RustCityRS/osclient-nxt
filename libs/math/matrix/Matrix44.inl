// libs/math/matrix/Matrix44.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::math {
    // 0x10005a2d0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.224
    void ___cxx_global_var_init_224() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10005a370, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.226
    void ___cxx_global_var_init_226() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10005a3b0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.227
    void ___cxx_global_var_init_227() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager,
                                          std::default_delete<graphicutils::BatchDestroyManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5940, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10005a3f0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.228
    void ___cxx_global_var_init_228() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10005a430, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.229
    void ___cxx_global_var_init_229() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10005a470, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.230
    void ___cxx_global_var_init_230() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a8;
        if (*PTR_m_pSingleton_100ee42a8 == '\0') {
            ___cxa_atexit(std::unique_ptr<hal::Haptics, std::default_delete<hal::Haptics>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5958, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10005a4b0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.231
    void ___cxx_global_var_init_231() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44e8;
        if (*PTR_m_mutex_100ee44e8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d90, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10005a4f0, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.232
    void ___cxx_global_var_init_232() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4378;
        if (*PTR_m_mutex_100ee4378 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ab8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10005a570, 64 bytes, placed by debug map only (low confidence)
    // ___cxx_global_var_init.234
    void ___cxx_global_var_init_234() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45e0;
        if (*PTR_m_mutex_100ee45e0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f80, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10005a5f0, 59 bytes, placed by debug map only (low confidence)
    // __GLOBAL__sub_I_unity_4_cxx.cxx
    void __GLOBAL__sub_I_unity_4_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_8();
        ___cxx_global_var_init_9();
        ___cxx_global_var_init_10();
        ___cxx_global_var_init_61();
        _objc_autoreleasePoolPop(uVar1);
    }

    // 0x1002af8f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Matrix44T<float>::Matrix44T(std::array<float, 16ul> const&): jumps straight to the base-object constructor

    // 0x1002af940, 304 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float>::ToEulerAnglesXYZ() const
    undefined8 Matrix44T<float>::ToEulerAnglesXYZ() {
        double dVar1;
        ulong uVar2;
        undefined4* puVar3;
        float* pfVar4;
        float fVar5;
        undefined4 uVar6;
        uint extraout_XMM0_Dc;
        uint extraout_XMM0_Dd;
        undefined8 local_38[2];
        double local_28;
        uint uStack_20;
        uint uStack_1c;

        new (local_38) Vector3T<int>();
        uVar2 = asin(*(float*)(this + 24));
        uStack_20 = extraout_XMM0_Dc ^ 2147483648;
        uStack_1c = extraout_XMM0_Dd ^ 2147483648;
        local_28 = (double)(uVar2 ^ 9223372039002259456);
        puVar3 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)local_38, 0);
        *puVar3 = local_28._0_4_;
        pfVar4 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)local_38, 0);
        fVar5 = (float)::cos(*pfVar4);
        fVar5 = (float)::abs(fVar5);
        if (fVar5 <= 0.005) {
            uVar6 = atan2(*(float*)(this + 4), *(float*)this);
            local_28 = (double)CONCAT44(local_28._4_4_, uVar6);
            puVar3 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)local_38, 1);
            *puVar3 = local_28._0_4_;
            fVar5 = 0.0;
        } else {
            local_28 = (double)*(float*)(this + 16);
            fVar5 = *(float*)(this + 20);
            dVar1 = (double)_atan2(SUB84((double)*(float*)(this + 8), 0), (double)*(float*)(this + 40));
            pfVar4 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)local_38, 1);
            *pfVar4 = (float)dVar1;
            dVar1 = (double)_atan2(SUB84(local_28, 0), (double)fVar5);
            fVar5 = (float)dVar1;
        }
        local_28 = (double)CONCAT44(local_28._4_4_, fVar5);
        puVar3 = (undefined4*)Vector3T<float>::operator[]((Vector3T<float>*)local_38, 2);
        *puVar3 = local_28._0_4_;
        return local_38[0];
    }

    // 0x1002afa70, 144 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float>::ExtractScale() const
    undefined8 Matrix44T<float>::ExtractScale() {
        float fVar1;
        undefined8 uVar2;
        ColourHSL local_58;
        undefined8 local_48[2];
        undefined8 local_38[2];
        undefined8 local_28[2];
        float local_18;
        float local_14;

        local_48[0] = GetXYZ();
        local_18 = (float)local_48->Length();
        local_38[0] = ((this + 16))->GetXYZ();
        local_14 = (float)local_38->Length();
        local_28[0] = ((this + 32))->GetXYZ();
        fVar1 = (float)local_28->Length();
        new (&local_58) ColourHSL(local_18, local_14, fVar1);
        uVar2._0_4_ = local_58.field_0;
        uVar2._4_4_ = local_58.field_4;
        return uVar2;
    }

} // namespace jag::math

namespace jag {
    // 0x1002afd60, 32 bytes, inline, placed by debug map only (low confidence)
    // void PacketT<Array<unsigned char, eastl::allocator> >::p2<float>(float)
    void
    PacketT<Array<unsigned char, eastl::allocator>>::p2<float>(PacketT<Array<unsigned char, eastl::allocator>>* this,
                                                               float param_1) {
        pT<short>(this, (short)(int)param_1);
    }

} // namespace jag
