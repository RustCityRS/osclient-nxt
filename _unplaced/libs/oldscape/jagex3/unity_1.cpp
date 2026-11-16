// _unplaced/libs/oldscape/jagex3/unity_1.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

namespace jag::oldscape::dash3d {
    // 0x100f37c88
    int64_t WorldRenderer_renderGround = 1;

    // 0x10392aa20
    int64_t WorldRenderer_debugFont;

    // 0x10392aa28
    int32_t g_debug;

    // 0x1003256c0
    int GetMaximumLabel(
        jag::graphics::Model const&,
        std::function<eastl::vector_map<unsigned short, unsigned short> const*(jag::graphics::GeometryBatch const&)>)::
        $_8::operator()(
            int arg1,
            const std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                  MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&
                geometryBatchInstance) const {
        function<eastl::vector_map<unsigned short, unsigned short> const*(jag::graphics::GeometryBatch const&)>*
            this_00;
        unsigned short* puVar2;
        int* piVar3;
        unsigned int local_18;

        this_00 = *(function<eastl::vector_map<unsigned short, unsigned short> const*(
                        jag::graphics::GeometryBatch const&)>**)this;
        return local_14 = arg1;
        auto this_01 = geometryBatchInstance.operator->();
        auto geometryBatch = this_01->GetGeometryBatch();
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_02 =
            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)
                std::function<eastl::vector_map<unsigned short, unsigned short> const*(
                    jag::graphics::GeometryBatch const&)>::operator()(this_00, geometryBatch);
        if (!(this_02->empty())) {
            puVar2 = (unsigned short*)this_02->back();
            _local_18 = (((uint64_t)local_14 << 32) | (uint32_t)((unsigned int)*puVar2));
            piVar3 = std::max<int>(local_14, local_18);
            local_14 = *piVar3;
        }
        return local_14;
    }

    // 0x10033dde0
    void ___cxx_global_var_init(void) {
        Matrix33T<float> local_50;

        jag::math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&jag::graphics::MAYA_ANIM_INVERT_MATRIX)
            jag::math::Matrix44T<float>(local_50, local_28);
    }

    // 0x10033de40
    void ___cxx_global_var_init_1(void) {
        new ((ColourHSL*)&jag::graphics::WORLD_ORTHOGONAL) jag::math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x10033de60
    void ___cxx_global_var_init_12(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x10033dec0
    void ___cxx_global_var_init_14(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x10033df20
    void ___cxx_global_var_init_16(void) {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x10033e000
    void ___cxx_global_var_init_84(void) {
        _DAT_1016c616c = *(uint32_t*)(PTR_ZERO_100ee66f8 + 8);
        m_mouseoverGroundFine = *(uint64_t*)PTR_ZERO_100ee66f8;
    }

    // 0x10033e220
    void ___cxx_global_var_init_139(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) jag::math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10033e260
    void ___cxx_global_var_init_140(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10033e2a0
    void ___cxx_global_var_init_141(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10033e2e0
    void ___cxx_global_var_init_142(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) jag::math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10033e310
    void ___cxx_global_var_init_143(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e350
    void ___cxx_global_var_init_144(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10033e390
    void ___cxx_global_var_init_145(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e3d0
    void ___cxx_global_var_init_146(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e410
    void ___cxx_global_var_init_147(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e450
    void ___cxx_global_var_init_148(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e490
    void ___cxx_global_var_init_149(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<jag::graphics::AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e4d0
    void ___cxx_global_var_init_150(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728) jag::math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                                                                 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10033e530
    void ___cxx_global_var_init_151(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e570
    void ___cxx_global_var_init_152(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730) jag::math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
                                                                     1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10033e5d0
    void ___cxx_global_var_init_153(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e610
    void ___cxx_global_var_init_154(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e650
    void ___cxx_global_var_init_155(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e690
    void ___cxx_global_var_init_156(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e6d0
    void ___cxx_global_var_init_157(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4818;
        if (*PTR_IDENTITY_100ee4818 == '\0') {
            new (PTR_IDENTITY_100ee6720)
                jag::math::Matrix43T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10033e730
    void ___cxx_global_var_init_158(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4810;
        if (*PTR_IDENTITY_100ee4810 == '\0') {
            new (PTR_IDENTITY_100ee6718) jag::math::Matrix33T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10033e780
    void ___cxx_global_var_init_159(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e7c0
    void ___cxx_global_var_init_160(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45e8;
        if (*PTR_m_mutex_100ee45e8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f90, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e800
    void ___cxx_global_var_init_161(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4630;
        if (*PTR_m_mutex_100ee4630 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee6020, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e870
    void ___cxx_global_var_init_163(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45f8;
        if (*PTR_m_mutex_100ee45f8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5fb0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e8b0
    void ___cxx_global_var_init_164(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4778;
        if (*PTR_IDENTITY_100ee4778 == '\0') {
            new (PTR_IDENTITY_100ee6678) jag::math::QuaternionT<float>(0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10033e8f0
    void __GLOBAL__sub_I_unity_1_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_43();
        ___cxx_global_var_init_75();
        ___cxx_global_var_init_84();
        ___cxx_global_var_init_85();
        ___cxx_global_var_init_95();
        ___cxx_global_var_init_96();
        ___cxx_global_var_init_97();
        ___cxx_global_var_init_98();
        ___cxx_global_var_init_99();
        ___cxx_global_var_init_100();
        ___cxx_global_var_init_107();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::oldscape::dash3d

namespace jag::graphics {
    // 0x10422a7e0
    uint8_t MAYA_ANIM_INVERT_MATRIX[64];

    // 0x10422a820
    uint8_t WORLD_ORTHOGONAL[16];

} // namespace jag::graphics

namespace jag::threading {
    // 0x100d42270
    int32_t MAX_HARDWARE_THREAD_LIMIT[84] = {
        16,          9,          3,           6,          1,          3,          2,           2,          2,
        1,           1,          1,           3,          3,          3,          7,           7,          7,
        7,           7,          7,           5,          0,          1,          2,           3,          4,
        5,           6,          7,           8,          0,          1,          2,           3,          4,
        5,           0,          1065742022,  1091488973, 1057097761, 1015154721, 1041385765,  1006699012, -1133133169,
        0,           858993459,  1070805811,  2061584302, 1072672276, 1239037454, 1063854587,  0,          1089470464,
        0,           1066401792, 0,           1065353216, 0,          1072758784, 1431655765,  1070978389, 1431655766,
        -1075505835, 1431655765, -1076570795, 1431655766, 1072010581, 0,          -1078460416, 0,          1074765824,
        1,           3,          5,           7,          0,          999999,     -999999,     -99999,     -999999,
        999999,      -999999,    -999999,
    };

} // namespace jag::threading
