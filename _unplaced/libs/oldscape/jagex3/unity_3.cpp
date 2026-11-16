// _unplaced/libs/oldscape/jagex3/unity_3.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

namespace jag::oldscape::shared {
    // 0x100d40150
    int32_t ClientProt::SIZES[100] = {
        2, 8,  -1, 7,  -1, 8, 8, 4,  0,  -1, 3,  -1, 15, 3,  16, -1, 8,  0,  15, -1, 3,  -1, -2, 4, 0,
        7, 8,  9,  7,  -2, 2, 3, 8,  6,  3,  3,  7,  -1, -1, 7,  0,  -1, -1, -1, 7,  7,  6,  1,  3, -1,
        7, 11, 4,  3,  15, 8, 6, -1, 11, 3,  13, 3,  2,  3,  2,  2,  3,  -1, 8,  11, -1, 7,  -1, 7, -1,
        0, 8,  15, 11, 7,  3, 3, 10, -1, -1, -2, -1, -1, 4,  8,  5,  2,  4,  16, 4,  22, 1,  1,  0, 0,
    };

    // 0x100d40310
    int32_t ServerProt::SIZES[123] = {
        5,  6,  1,  17, 2,  10, 6,  0,  4,  7,  -2, 2, 8,  1,  -1, 6,  -2, -2, 2,  10, 0,  2,  16, -1, -2,
        6,  12, 9,  0,  4,  8,  -2, 6,  8,  -2, 5,  2, -1, -2, 6,  2,  0,  -2, 3,  7,  2,  10, 6,  -1, 2,
        -2, -2, 10, 8,  -2, 5,  -2, -2, 4,  6,  6,  1, 0,  5,  0,  1,  6,  -2, -2, 1,  -2, 6,  0,  7,  2,
        2,  6,  -2, 4,  -2, -1, 8,  9,  28, 8,  -2, 0, 0,  6,  7,  -2, -2, 6,  5,  14, 4,  4,  -2, 20, 4,
        8,  -1, -1, 2,  11, -2, 4,  -1, -1, 5,  12, 8, 14, 4,  5,  9,  3,  5,  -2, 0,  7,  -2, 19,
    };

    // 0x100ef94b0
    const void* ClientProt::NAMES[98] = {
        "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
        "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
        "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
        "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
    };

    // 0x100ef97c0
    const void* ServerProt::NAMES[123] = {
        "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
        "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
        "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
        "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
        "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
    };

    // 0x1002ad5d0
    void ___cxx_global_var_init(void) {
        Matrix33T<float> local_50;

        jag::math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&jag::graphics::MAYA_ANIM_INVERT_MATRIX)
            jag::math::Matrix44T<float>(local_50, local_28);
    }

    // 0x1002ad630
    void ___cxx_global_var_init_6(void) {
        new ((ColourHSL*)&jag::graphics::WORLD_ORTHOGONAL) jag::math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x1002ad650
    void ___cxx_global_var_init_8(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x1002ad6b0
    void ___cxx_global_var_init_10(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x1002ad710
    void ___cxx_global_var_init_12(void) {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x1002adc50
    void ___cxx_global_var_init_48(void) {
        ___cxa_atexit(std::unique_ptr<sound::PCMPlayerFactory>::~unique_ptr, &sound::PCMPlayer::m_pcmPlayerFactory,
                      4294967296);
    }

    // 0x1002add30
    void ___cxx_global_var_init_61(void) {
        initializer_list<unsigned int> local_1028;

        _memcpy(&local_1028, &reinterpret_cast<const uint64_t*>(&m_rangeVector)[2], 4096);
        new ((fixed_vector<unsigned int, 1024ul>*)&sound::noiseBits)
            eastl::fixed_vector<unsigned int, 1024ul>(&local_1028, *1024);
        ___cxa_atexit(PTR__fixed_vector_100ee6ce8, &sound::noiseBits, 4294967296);
    }

    // 0x1002adde0
    void ___cxx_global_var_init_70(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1002ade20
    void ___cxx_global_var_init_71(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1002ade60
    void ___cxx_global_var_init_72(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002adea0
    void ___cxx_global_var_init_73(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002adee0
    void ___cxx_global_var_init_74(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) jag::math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1002adf10
    void ___cxx_global_var_init_75(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002adf50
    void ___cxx_global_var_init_76(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1002adf90
    void ___cxx_global_var_init_77(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002adfd0
    void ___cxx_global_var_init_78(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002ae010
    void ___cxx_global_var_init_79(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) jag::math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1002ae050
    void ___cxx_global_var_init_80(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002ae090
    void ___cxx_global_var_init_81(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002ae0d0
    void ___cxx_global_var_init_82(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<jag::graphics::AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002ae110
    void ___cxx_global_var_init_83(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728) jag::math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                                                                 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1002ae170
    void ___cxx_global_var_init_84(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002ae1b0
    void ___cxx_global_var_init_85(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730) jag::math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
                                                                     1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1002ae210
    void ___cxx_global_var_init_86(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002ae250
    void ___cxx_global_var_init_87(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002ae290
    void ___cxx_global_var_init_88(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002ae2d0
    void __GLOBAL__sub_I_unity_3_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_6();
        ___cxx_global_var_init_14();
        ___cxx_global_var_init_25();
        ___cxx_global_var_init_26();
        ___cxx_global_var_init_27();
        ___cxx_global_var_init_28();
        ___cxx_global_var_init_29();
        ___cxx_global_var_init_30();
        ___cxx_global_var_init_31();
        ___cxx_global_var_init_32();
        ___cxx_global_var_init_33();
        ___cxx_global_var_init_34();
        ___cxx_global_var_init_35();
        ___cxx_global_var_init_36();
        ___cxx_global_var_init_37();
        ___cxx_global_var_init_38();
        ___cxx_global_var_init_39();
        ___cxx_global_var_init_46();
        ___cxx_global_var_init_47();
        ___cxx_global_var_init_48();
        ___cxx_global_var_init_58();
        ___cxx_global_var_init_59();
        ___cxx_global_var_init_60();
        ___cxx_global_var_init_61();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::oldscape::shared

namespace jag::oldscape::sound {
    // 0x1016c1ba0, set at startup by ___cxx_global_var_init.47
    std::__thread_id g_idWorkerThread = __thread_id();

    // 0x1016c1dc0, set at startup by ___cxx_global_var_init.46
    std::__thread_id g_idMainThread = __thread_id();

    // 0x1042295e0, set at startup by ___cxx_global_var_init.61
    eastl::fixed_vector<unsigned int, 1024ul> noiseBits;

} // namespace jag::oldscape::sound

namespace jag::graphics {
    // 0x104229590
    uint8_t MAYA_ANIM_INVERT_MATRIX[64];

    // 0x1042295d0
    uint8_t WORLD_ORTHOGONAL[16];

} // namespace jag::graphics

namespace jag {
    // 0x1002a9cd0
    oldscape::sound::DelayedStream*
    placement_new<oldscape::sound::DelayedStream, shared_ptr<oldscape::sound::PCMStream>&, int&>(
        void* arg1, shared_ptr<oldscape::sound::PCMStream>& pcmStream, int& arg3) {
        new (arg1) oldscape::sound::DelayedStream(pcmStream, arg3);
        return arg1;
    }

    // 0x1002a9cf0
    ref_counter_shared<oldscape::sound::DelayedStream>*
    placement_new<ref_counter_shared<oldscape::sound::DelayedStream>, int, oldscape::sound::DelayedStream*&>(
        void* arg1, int&& arg2, oldscape::sound::DelayedStream*& arg3) {
        new (arg1) ref_counter_shared<oldscape::sound::DelayedStream>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

// 0x1002ad810
void ___cxx_global_array_dtor(void) {
    long lVar1 = 328;
    do {
        ((&jag::oldscape::shared::PacketPool::g_pools + lVar1))->~PacketPool();
        lVar1 = lVar1 - 328;
    } while (lVar1 != -328);
}
