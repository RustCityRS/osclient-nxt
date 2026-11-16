// _unplaced/libs/oldscape/jagex3/unity_1.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

namespace jag::oldscape::dash3d {
    // 0x100f37c88, 8 bytes, __data
    WorldRenderer_renderGround = 1;

    // 0x10392aa20, 8 bytes, __common; zero-initialised
    WorldRenderer_debugFont;

    // 0x10392aa28, 4 bytes, __common; zero-initialised
    g_debug;

    // 0x1003256c0, 96 bytes, inline, placed by nothing (unplaced)
    // GetMaximumLabel(jag::graphics::Model const&, std::function<eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const* (jag::graphics::GeometryBatch const&)>)::$_8::operator()(int, std::unique_ptr<jag::graphics::GeometryBatchInstance, MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> const&) const
    /* GetMaximumLabel(jag::graphics::Model const&,
   std::function<eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
   eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> >
   const* (jag::graphics::GeometryBatch const&)>)::$_8::TEMPNAMEPLACEHOLDERVALUE(int,
   std::unique_ptr<jag::graphics::GeometryBatchInstance,
   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> const&) const
    */

    int dash3d::GetMaximumLabel(
        jag::graphics::Model_const&,
        std::function<eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                      eastl::allocator>> const*(jag::graphics::GeometryBatch_const&)>)::
        $_8::operator()(int param_1, unique_ptr* param_2) {
        function<eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                   eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                 eastl::allocator>> const*(jag::graphics::GeometryBatch_const&)>*
            this_00;
        char cVar1;
        GeometryBatchInstance* this_01;
        GeometryBatch* pGVar2;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_02;
        ushort* puVar3;
        int* piVar4;
        uint local_18;
        int local_14;

        this_00 =
            *(function<
                eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                  eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                eastl::allocator>> const*(jag::graphics::GeometryBatch_const&)>**)this;
        local_14 = param_1;
        this_01 =
            (GeometryBatchInstance*)
                std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::
                operator->((
                    unique_ptr<jag::graphics::GeometryBatchInstance,
                               MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)param_2);
        pGVar2 = (GeometryBatch*)this_01->GetGeometryBatch();
        this_02 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
            std::function<eastl::vector_map<
                unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                eastl::vector<eastl::pair<unsigned short, unsigned short>,
                              eastl::allocator>> const*(jag::graphics::GeometryBatch_const&)>::operator()(this_00,
                                                                                                          pGVar2);
        cVar1 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            this_02);
        if (cVar1 == '\0') {
            puVar3 = (ushort*)this_02->back();
            _local_18 = CONCAT44(local_14, (uint)*puVar3);
            piVar4 = std::max<int>(&local_14, (int*)&local_18);
            local_14 = *piVar4;
        }
        return local_14;
    }

    // 0x10033dde0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        undefined1 local_50[40];
        Vector3T<int> local_28[16];

        jag::math::Matrix33Scaling<float>((math*)local_50, 1.0, 1.0, -1.0);
        jag::math::Vector3T<int>::Vector3T(local_28);
        new (&jag::graphics::MAYA_ANIM_INVERT_MATRIX) jag::math::Matrix44T<float>(local_50, local_28);
    }

    // 0x10033de40, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.1
    void ___cxx_global_var_init_1() {
        new (&jag::graphics::WORLD_ORTHOGONAL) jag::math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x10033de60, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.12
    void ___cxx_global_var_init_12() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x10033dec0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.14
    void ___cxx_global_var_init_14() {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x10033df20, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.16
    void ___cxx_global_var_init_16() {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x10033e000, 32 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.84
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

    void ___cxx_global_var_init_84() {
        _DAT_1016c616c = *(undefined4*)(PTR_ZERO_100ee66f8 + 8);
        _m_mouseoverGroundFine = *(undefined8*)PTR_ZERO_100ee66f8;
    }

    // 0x10033e220, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.139
    void ___cxx_global_var_init_139() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) jag::math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10033e260, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.140
    void ___cxx_global_var_init_140() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10033e2a0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.141
    void ___cxx_global_var_init_141() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10033e2e0, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.142
    void ___cxx_global_var_init_142() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) jag::math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10033e310, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.143
    void ___cxx_global_var_init_143() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e350, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.144
    void ___cxx_global_var_init_144() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10033e390, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.145
    void ___cxx_global_var_init_145() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e3d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.146
    void ___cxx_global_var_init_146() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e410, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.147
    void ___cxx_global_var_init_147() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice, std::default_delete<render::RenderDevice>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e450, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.148
    void ___cxx_global_var_init_148() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e490, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.149
    void ___cxx_global_var_init_149() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<jag::graphics::AnimationManager,
                                          std::default_delete<jag::graphics::AnimationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c48, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e4d0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.150
    void ___cxx_global_var_init_150() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728) jag::math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                                                                 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10033e530, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.151
    void ___cxx_global_var_init_151() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e570, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.152
    void ___cxx_global_var_init_152() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730) jag::math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
                                                                     1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10033e5d0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.153
    void ___cxx_global_var_init_153() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e610, 64 bytes, placed by nothing (unplaced)
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

    // 0x10033e650, 64 bytes, placed by nothing (unplaced)
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

    // 0x10033e690, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.156
    void ___cxx_global_var_init_156() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager,
                                          std::default_delete<graphicutils::BatchDestroyManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5940, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e6d0, 96 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.157
    void ___cxx_global_var_init_157() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4818;
        if (*PTR_IDENTITY_100ee4818 == '\0') {
            new (PTR_IDENTITY_100ee6720)
                jag::math::Matrix43T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10033e730, 80 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.158
    void ___cxx_global_var_init_158() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4810;
        if (*PTR_IDENTITY_100ee4810 == '\0') {
            new (PTR_IDENTITY_100ee6718) jag::math::Matrix33T<float>(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10033e780, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.159
    void ___cxx_global_var_init_159() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e7c0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.160
    void ___cxx_global_var_init_160() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45e8;
        if (*PTR_m_mutex_100ee45e8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f90, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e800, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.161
    void ___cxx_global_var_init_161() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4630;
        if (*PTR_m_mutex_100ee4630 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee6020, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e870, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.163
    void ___cxx_global_var_init_163() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45f8;
        if (*PTR_m_mutex_100ee45f8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5fb0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10033e8b0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.164
    void ___cxx_global_var_init_164() {
        undefined* puVar1;

        puVar1 = PTR_IDENTITY_100ee4778;
        if (*PTR_IDENTITY_100ee4778 == '\0') {
            new (PTR_IDENTITY_100ee6678) jag::math::QuaternionT<float>(0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10033e8f0, 94 bytes, placed by nothing (unplaced)
    // __GLOBAL__sub_I_unity_1_cxx.cxx
    void __GLOBAL__sub_I_unity_1_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
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
    // 0x10422a7e0, 64 bytes, __bss; zero-initialised
    MAYA_ANIM_INVERT_MATRIX;

    // 0x10422a820, 16 bytes, __bss; zero-initialised
    WORLD_ORTHOGONAL;

} // namespace jag::graphics

namespace jag::threading {
    // 0x100d42270, 336 bytes, __const
    MAX_HARDWARE_THREAD_LIMIT = {
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
