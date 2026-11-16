// _unplaced/libs/hal/render/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

namespace jag::threading {
    // 0x100d99814, 540 bytes, __const
    MAX_HARDWARE_THREAD_LIMIT = {
        16,          2,           2,           4,           4,           6,           6,           -1,
        0,           1,           2,           4,           1056964608,  1060205080,  0,           813694976,
        822083584,   1022739087,  1060068393,  1015021568,  1006632960,  1031798784,  1065877504,  1051634347,
        -1087853910, -1096373589, 1059891882,  1086324736,  1077936128,  1073741824,  1082130432,  -1111490560,
        1081933824,  1132462080,  805306368,   1035993089,  1027604481,  1064304640,  1110092459,  1124073472,
        1042983595,  1051372203,  -1096111445, 969478107,   -1060565029, 1078530011,  -1068953637, 1086918619,
        1000593162,  -1061158912, -1055916032, 1104674816,  1024963622,  1016575014,  1038323258,  -1109160390,
        1074137746,  1082526354,  -1130908634, 2139095039,  -8388609,    -1090519040, -1069547520, 8388608,
        1070141403,  -1333788672, 872415232,   880803840,   1069547520,  -1065353216, 1203982336,  1413754136,
        1074340347,  1413754136,  -1073143301, -2147483648, -2147483648, -2147483648, -2147483648, 0,
        -2147483648, 0,           -2147483648, 0,           -1074790400, 0,           1072693248,  -1,
        2147483647,  -1,          2147483647,  0,           1071644672,  0,           -1075838976, 0,
        1064304640,  0,           1081081856,  1413754136,  1074340347,  1413551940,  -1072094725, 1413754136,
        -1073143301, 1413551940,  1075388923,  1413754136,  1072243195,  1078530011,  -1068953637, 0,
        1075314688,  0,           -1070727168, 0,           1076101120,  0,           -1074790400, 858993459,
        1071854387,  -1717986918, 1072273817,  0,           1072693248,  0,           1070596096,  1610612736,
        1074340347,  0,           1068498944,  0,           1069547520,  0,           0,
    };

    // 0x100c5f390, 80 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL hash_map");
        new (&render::BufferPoolStats::m_stats) eastl::hash_map<
            eastl::fixed_string<char, 64, true, eastl::allocator>,
            eastl::map<unsigned int, render::BufferPoolStats::PoolStats, eastl::less<unsigned int>, eastl::allocator>,
            eastl::string_hash<eastl::fixed_string<char, 64, true, eastl::allocator>>,
            eastl::equal_to<eastl::fixed_string<char, 64, true, eastl::allocator>>, eastl::allocator, false>(local_20);
        ___cxa_atexit(PTR__hash_map_100ee6d80, &render::BufferPoolStats::m_stats, 4294967296);
    }

    // 0x100c5f3e0, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.396
    void ___cxx_global_var_init_396() {
        undefined8 uVar1;

        uVar1 = (*(code*)render::RenderDevice::m_secondaryRenderContext)();
        __tlv_atexit(std::unique_ptr<render::RenderContext, std::default_delete<render::RenderContext>>::~unique_ptr,
                     uVar1, 4294967296);
    }

    // 0x100c5f410, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.647
    void ___cxx_global_var_init_647() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100c5f450, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.648
    void ___cxx_global_var_init_648() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100c5f490, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.649
    void ___cxx_global_var_init_649() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c5f4d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.650
    void ___cxx_global_var_init_650() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c5f510, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.651
    void ___cxx_global_var_init_651() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100c5f540, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.652
    void ___cxx_global_var_init_652() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c5f580, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.653
    void ___cxx_global_var_init_653() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100c5f5c0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.654
    void ___cxx_global_var_init_654() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c5f600, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.655
    void ___cxx_global_var_init_655() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c5f640, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.656
    void ___cxx_global_var_init_656() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49b8;
        if (*PTR_m_pSingleton_100ee49b8 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<render::ShaderManager<render::VertexShader>,
                                std::default_delete<render::ShaderManager<render::VertexShader>>>::~unique_ptr,
                PTR_m_pSingleton_100ee6c28, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c5f680, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.657
    void ___cxx_global_var_init_657() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49b0;
        if (*PTR_m_pSingleton_100ee49b0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderManager<render::PixelShader>,
                                          std::default_delete<render::ShaderManager<render::PixelShader>>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c5f6c0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.658
    void ___cxx_global_var_init_658() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c0;
        if (*PTR_m_pSingleton_100ee49c0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<render::ShaderManager<render::ComputeShader>,
                                std::default_delete<render::ShaderManager<render::ComputeShader>>>::~unique_ptr,
                PTR_m_pSingleton_100ee6c30, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c5f700, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.659
    void ___cxx_global_var_init_659() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4998;
        if (*PTR_m_pSingleton_100ee4998 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VAOManager, std::default_delete<render::VAOManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c08, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c5f740, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.660
    void ___cxx_global_var_init_660() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42b8;
        if (*PTR_m_pSingleton_100ee42b8 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<render::internal::BufferPool<render::IndexBuffer>,
                                std::default_delete<render::internal::BufferPool<render::IndexBuffer>>>::~unique_ptr,
                PTR_m_pSingleton_100ee5968, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c5f780, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.661
    void ___cxx_global_var_init_661() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42c0;
        if (*PTR_m_pSingleton_100ee42c0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<render::internal::BufferPool<render::VertexBuffer>,
                                std::default_delete<render::internal::BufferPool<render::VertexBuffer>>>::~unique_ptr,
                PTR_m_pSingleton_100ee5970, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c5f7c0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.662
    void ___cxx_global_var_init_662() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42d0;
        if (*PTR_m_pSingleton_100ee42d0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<
                    render::internal::BufferPool<render::ShaderConstBuffer>,
                    std::default_delete<render::internal::BufferPool<render::ShaderConstBuffer>>>::~unique_ptr,
                PTR_m_pSingleton_100ee5980, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c5f800, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.663
    void ___cxx_global_var_init_663() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42c8;
        if (*PTR_m_pSingleton_100ee42c8 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<
                    render::internal::BufferPool<render::PixelUnpackBuffer>,
                    std::default_delete<render::internal::BufferPool<render::PixelUnpackBuffer>>>::~unique_ptr,
                PTR_m_pSingleton_100ee5978, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c5f840, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.664
    void ___cxx_global_var_init_664() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c5f880, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.665
    void ___cxx_global_var_init_665() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a8;
        if (*PTR_m_pSingleton_100ee49a8 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<render::BuiltinStates, std::default_delete<render::BuiltinStates>>::~unique_ptr,
                PTR_m_pSingleton_100ee6c18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c5f8c0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.666
    void ___cxx_global_var_init_666() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49f0;
        if (*PTR_m_pSingleton_100ee49f0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<hardware::HardwareInfo, std::default_delete<hardware::HardwareInfo>>::~unique_ptr,
                PTR_m_pSingleton_100ee6c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100c5f900, 34 bytes, placed by nothing (unplaced)
    // __GLOBAL__sub_I_unity_0_cxx.cxx
    void __GLOBAL__sub_I_unity_0_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::threading
