// libs/math/matrix/Matrix44.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::math {
    // 0x10005a2d0
    void ___cxx_global_var_init_224(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10005a370
    void ___cxx_global_var_init_226(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10005a3b0
    void ___cxx_global_var_init_227(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10005a3f0
    void ___cxx_global_var_init_228(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10005a430
    void ___cxx_global_var_init_229(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10005a470
    void ___cxx_global_var_init_230(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a8;
        if (*PTR_m_pSingleton_100ee42a8 == '\0') {
            ___cxa_atexit(std::unique_ptr<hal::Haptics>::~unique_ptr, PTR_m_pSingleton_100ee5958, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10005a4b0
    void ___cxx_global_var_init_231(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44e8;
        if (*PTR_m_mutex_100ee44e8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d90, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10005a4f0
    void ___cxx_global_var_init_232(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4378;
        if (*PTR_m_mutex_100ee4378 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ab8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10005a570
    void ___cxx_global_var_init_234(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45e0;
        if (*PTR_m_mutex_100ee45e0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f80, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10005a5f0
    void __GLOBAL__sub_I_unity_4_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_8();
        ___cxx_global_var_init_9();
        ___cxx_global_var_init_10();
        ___cxx_global_var_init_61();
        _objc_autoreleasePoolPop(uVar1);
    }

    // 0x1002af940
    uint64_t Matrix44T<float>::ToEulerAnglesXYZ() const {
        double dVar1;
        uint32_t uVar6;
        unsigned int extraout_XMM0_Dc;
        unsigned int extraout_XMM0_Dd;

        return local_38;
        unsigned long uVar2 = asin(*(float*)(this + 24));
        unsigned int uStack_20 = extraout_XMM0_Dc ^ 2147483648;
        unsigned int uStack_1c = extraout_XMM0_Dd ^ 2147483648;
        double local_28 = (double)(uVar2 ^ 9223372039002259456);
        uint32_t* puVar3 = &local_38[0];
        *puVar3 = local_28._0_4_;
        float* pfVar4 = &local_38[0];
        float fVar5 = (float)::cos(*pfVar4);
        fVar5 = (float)::abs(fVar5);
        if (fVar5 <= 0.005) {
            uVar6 = atan2(*(float*)(this + 4), *(float*)this);
            local_28 = (double)(((uint64_t)local_28._4_4_ << 32) | (uint32_t)uVar6);
            puVar3 = &local_38[1];
            *puVar3 = local_28._0_4_;
            fVar5 = 0.0;
        } else {
            local_28 = (double)*(float*)(this + 16);
            fVar5 = *(float*)(this + 20);
            dVar1 = (double)_atan2((uint32_t)((double)*(float*)(this + 8)), (double)*(float*)(this + 40));
            pfVar4 = &local_38[1];
            *pfVar4 = (float)dVar1;
            dVar1 = (double)_atan2((uint32_t)local_28, (double)fVar5);
            fVar5 = (float)dVar1;
        }
        local_28 = (double)(((uint64_t)local_28._4_4_ << 32) | (uint32_t)fVar5);
        puVar3 = &local_38[2];
        *puVar3 = local_28._0_4_;
        return local_38[0];
    }

    // 0x1002afa70
    uint64_t Matrix44T<float>::ExtractScale() const {
        uint64_t uVar1;
        uint64_t local_48[2];
        uint64_t local_38[2];
        uint64_t local_28[2];

        local_48[0] = GetXYZ();
        float local_18 = (float)local_48->Length();
        local_38[0] = ((this + 16))->GetXYZ();
        float local_14 = (float)local_38->Length();
        local_28[0] = ((this + 32))->GetXYZ();
        float arg3 = (float)local_28->Length();
        ColourHSL local_58(local_18, local_14, arg3);
        uVar1._0_4_ = local_58.field_0;
        uVar1._4_4_ = local_58.field_4;
        return uVar1;
    }

} // namespace jag::math

namespace jag {
    // 0x1002afd60
    void PacketT<Array<unsigned char>>::p2<float>(float arg1) {
        pT<short>(this, (short)(int)arg1);
    }

} // namespace jag
