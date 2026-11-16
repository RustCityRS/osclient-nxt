// _unplaced/libs/game/runetek5/unity_36.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag {
    // 0x10047ab00
    shared_ptr_if_not_array<eastl::fixed_vector<render::ImageData, 6ul>>::type
    make_shared<eastl::fixed_vector<render::ImageData, 6ul>>() {
        ref_counter_shared<eastl::fixed_vector<render::ImageData, _6ul> _>* ref_counter_shared;
        int local_2c;
        fixed_vector<render::ImageData, _6ul>* local_28[2];

        auto arg1 = aligned_alloc(312, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<eastl::fixed_vector<render::ImageData, 6ul>>::type result;
        } else {
            local_28[0] = placement_new<eastl::fixed_vector<render::ImageData, 6ul>>((void*)((long)arg1 + 32));
            local_2c = 1;
            ref_counter_shared =
                placement_new<ref_counter_shared<eastl::fixed_vector<render::ImageData, 6ul>>, int,
                              eastl::fixed_vector<render::ImageData, 6ul>*&>(arg1, &local_2c, local_28);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100482520
    eastl::fixed_vector<render::ImageData, 6ul>*
    placement_new<eastl::fixed_vector<render::ImageData, 6ul>>(void* arg1) {
        new (arg1) eastl::fixed_vector<render::ImageData, 6ul>();
        return arg1;
    }

    // 0x100482540
    ref_counter_shared<eastl::fixed_vector<render::ImageData, 6ul>>*
    placement_new<ref_counter_shared<eastl::fixed_vector<render::ImageData, 6ul>>, int,
                  eastl::fixed_vector<render::ImageData, 6ul>*&>(void* arg1, int&& arg2,
                                                                 eastl::fixed_vector<render::ImageData, 6ul>*& arg3) {
        new (arg1) ref_counter_shared<eastl::fixed_vector<render::ImageData, 6ul>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100486c30
    ObjStackEntity*
    placement_new<ObjStackEntity, graphics::GraphNode*&, shared_ptr<game::World> const&, game::ConfigProvider const*&,
                  game::CoordGrid const&>(void* arg1, graphics::GraphNode*& arg2, const shared_ptr<game::World>& world,
                                          const game::ConfigProvider*& arg4, const game::CoordGrid& coordGrid) {
        uint8_t local_40[16];

        new (local_40) game::CoordFine(coordGrid, false);
        new (arg1) ObjStackEntity((GraphNode*)arg2, world, (ConfigProvider*)arg4, *local_40);
        return arg1;
    }

    // 0x100486c90
    MakeSharedPoolRefCounter<ObjStackEntity, MakeSharedPool<ObjStackEntity, 256>>*
    placement_new<MakeSharedPoolRefCounter<ObjStackEntity, MakeSharedPool<ObjStackEntity, 256>>,
                  MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData*&, ObjStackEntity*>(
        void* arg1, MakeSharedPool<ObjStackEntity, 256>::RefCounterAndData*& arg2, ObjStackEntity*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<ObjStackEntity, MakeSharedPool<ObjStackEntity, 256>>(arg2, arg3);
        return arg1;
    }

    // 0x100486cb0
    void shared_ptr_do_enable_shared_from_this<ObjStackEntity>(ref_counter_base* ref_counter_base,
                                                               ObjStackEntity* objStackEntity,
                                                               ObjStackEntity::enable_shared_type* enable_shared_type) {
        hashtable_iterator<eastl::pair<int const, unsigned int>, false, false> local_48;
        weak_ptr<oldscape::dash3d::Decor> local_38;

        if (ref_counter_base != nullptr) {
            ref_counter_base->IncRef();
            local_48 = eastl::hashtable_iterator(ref_counter_base, (unsigned long)objStackEntity);
            local_38 = weak_ptr(local_48);
            objStackEntity->field_192.__internal_set_weak_ptr(local_38);
        }
    }

    // 0x10048e080
    void ___cxx_global_var_init(void) {
        Matrix33T<float> local_50;

        math::Matrix33Scaling<float>(1.0, 1.0, -1.0);
        Vector3T<int> local_28;
        new ((Matrix44T<float>*)&graphics::MAYA_ANIM_INVERT_MATRIX) math::Matrix44T<float>(local_50, local_28);
    }

    // 0x10048e0e0
    void ___cxx_global_var_init_1(void) {
        new ((ColourHSL*)&graphics::WORLD_ORTHOGONAL) math::ColourHSL(-1.5707964, -1.5707964, 0.0);
    }

    // 0x10048e100
    void ___cxx_global_var_init_2(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578) HashedString("LUMINANCE_ADAPTED");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_100ee4048);
            }
        }
    }

    // 0x10048e160
    void ___cxx_global_var_init_3(void) {
        if (*PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058) != 0) {
                new (PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588) HashedString("LUMINANCE_ADAPTED_PREVIOUS");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee4058);
            }
        }
    }

    // 0x10048e1c0
    void ___cxx_global_var_init_5(void) {
        if (*PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050 == '\0') {
            if (___cxa_guard_acquire(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050) != 0) {
                new (PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580) HashedString("VIEWRT_LUMINANCE_AVERAGE");
                ___cxa_guard_release(PTR_VIEWRT_LUMINANCE_AVERAGE_100ee4050);
            }
        }
    }

    // 0x10048e220
    void ___cxx_global_var_init_8(void) {
        if (*PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658 == '\0') {
            if (___cxa_guard_acquire(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658) != 0) {
                new (PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee6450) oldscape::sidebars::SideBarData(0, -1);
                ___cxa_guard_release(PTR_DEFAULT_SERVER_ACTIVE_PROPERTIES_100ee4658);
            }
        }
    }

    // 0x10048e280
    void ___cxx_global_var_init_9(void) {
        if (*PTR_NullComponentShared_100ee4660 == '\0') {
            if (___cxa_guard_acquire(PTR_NullComponentShared_100ee4660) != 0) {
                new (PTR_NullComponentShared_100ee6498) shared_ptr();
                ___cxa_atexit(PTR__shared_ptr_100ee5178, PTR_NullComponentShared_100ee6498, 4294967296);
                ___cxa_guard_release(PTR_NullComponentShared_100ee4660);
            }
        }
    }

    // 0x10048e320
    void ___cxx_global_var_init_54(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10048e360
    void ___cxx_global_var_init_55(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10048e3a0
    void ___cxx_global_var_init_56(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10048e3e0
    void ___cxx_global_var_init_57(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10048e420
    void ___cxx_global_var_init_58(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10048e450
    void ___cxx_global_var_init_59(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10048e490
    void ___cxx_global_var_init_60(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10048e4d0
    void ___cxx_global_var_init_61(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10048e510
    void ___cxx_global_var_init_62(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10048e550
    void ___cxx_global_var_init_63(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) math::ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10048e590
    void ___cxx_global_var_init_64(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10048e5d0
    void ___cxx_global_var_init_65(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10048e610
    void ___cxx_global_var_init_66(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
        if (*PTR_m_pSingleton_100ee49a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10048e650
    void ___cxx_global_var_init_67(void) {
        uint8_t* puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) math::ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10048e690
    void ___cxx_global_var_init_68(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45b0;
        if (*PTR_m_mutex_100ee45b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10048e6d0
    void ___cxx_global_var_init_69(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49d8;
        if (*PTR_m_pSingleton_100ee49d8 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphics::AnimationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c48,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10048e710
    void ___cxx_global_var_init_70(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4820;
        if (*PTR_ZERO_100ee4820 == '\0') {
            new (PTR_ZERO_100ee6728)
                math::Matrix44T<float>(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10048e770
    void ___cxx_global_var_init_71(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee45d8;
        if (*PTR_m_mutex_100ee45d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10048e7b0
    void ___cxx_global_var_init_72(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4828;
        if (*PTR_IDENTITY_100ee4828 == '\0') {
            new (PTR_IDENTITY_100ee6730)
                math::Matrix44T<float>(1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10048e810
    void ___cxx_global_var_init_73(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4360;
        if (*PTR_m_mutex_100ee4360 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5a88, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10048e850
    void ___cxx_global_var_init_74(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4448;
        if (*PTR_m_mutex_100ee4448 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c50, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10048e890
    void ___cxx_global_var_init_75(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4408;
        if (*PTR_m_mutex_100ee4408 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5bd8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10048e8d0
    void ___cxx_global_var_init_76(void) {
        uint8_t* puVar1 = PTR_ONE_100ee4798;
        if (*PTR_ONE_100ee4798 == '\0') {
            new (PTR_ONE_100ee66a0) math::Point(1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10048e910
    void ___cxx_global_var_init_77(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee47a0;
        if (*PTR_ZERO_100ee47a0 == '\0') {
            new (PTR_ZERO_100ee66a8) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10048e940
    void ___cxx_global_var_init_78(void) {
        uint8_t* puVar1 = PTR_IDENTITY_100ee4778;
        if (*PTR_IDENTITY_100ee4778 == '\0') {
            new (PTR_IDENTITY_100ee6678) math::QuaternionT<float>(0.0, 0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10048e980
    void ___cxx_global_var_init_79(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4590;
        if (*PTR_m_mutex_100ee4590 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ee0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10048e9c0
    void ___cxx_global_var_init_80(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4290;
        if (*PTR_m_pSingleton_100ee4290 == '\0') {
            ___cxa_atexit(std::unique_ptr<graphicutils::BatchDestroyManager>::~unique_ptr, PTR_m_pSingleton_100ee5940,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10048ea00
    void ___cxx_global_var_init_81(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee43b0;
        if (*PTR_m_mutex_100ee43b0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5b28, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10048ea40
    void ___cxx_global_var_init_82(void) {
        uint8_t* puVar2 = PTR_NullCacheObj_100ee68c0;
        uint8_t* puVar1 = PTR_NullCacheObj_100ee4870;
        if (*PTR_NullCacheObj_100ee4870 == '\0') {
            new (PTR_NullCacheObj_100ee68c0) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee51e0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10048ea80
    void ___cxx_global_var_init_83(void) {
        uint8_t* puVar2 = PTR_NullConfigType_100ee6508;
        uint8_t* puVar1 = PTR_NullConfigType_100ee46b0;
        if (*PTR_NullConfigType_100ee46b0 == '\0') {
            new (PTR_NullConfigType_100ee6508) shared_ptr();
            ___cxa_atexit(PTR__shared_ptr_100ee51e0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10048eac0
    void ___cxx_global_var_init_84(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4450;
        if (*PTR_m_mutex_100ee4450 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c60, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10048eb00
    void ___cxx_global_var_init_85(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44d8;
        if (*PTR_m_mutex_100ee44d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d70, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10048eb40
    void ___cxx_global_var_init_86(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4430;
        if (*PTR_m_mutex_100ee4430 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5c20, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10048eb80
    void ___cxx_global_var_init_87(void) {
        uint8_t* puVar1 = PTR_ONE_100ee47d0;
        if (*PTR_ONE_100ee47d0 == '\0') {
            new (PTR_ONE_100ee66d8) math::ColourHSL(1.0, 1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10048ebc0
    void ___cxx_global_var_init_88(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee44a0;
        if (*PTR_m_mutex_100ee44a0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10048ec00
    void ___cxx_global_var_init_89(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee42e0;
        if (*PTR_m_mutex_100ee42e0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee59a8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10048ec40
    void ___cxx_global_var_init_90(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee49a8;
        if (*PTR_m_pSingleton_100ee49a8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::BuiltinStates>::~unique_ptr, PTR_m_pSingleton_100ee6c18, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10048ec80
    void __GLOBAL__sub_I_unity_36_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_1();
        ___cxx_global_var_init_10();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag

namespace jag::graphics {
    // 0x10422ad60
    uint8_t MAYA_ANIM_INVERT_MATRIX[64];

    // 0x10422ada0
    uint8_t WORLD_ORTHOGONAL[12];

} // namespace jag::graphics

namespace jag::threading {
    // 0x100d42d70
    int64_t MAX_HARDWARE_THREAD_LIMIT = 4252262741118550032;

} // namespace jag::threading

namespace jag::game {
    // 0x100488b70
    void DoEntityPicking(eastl::fixed_vector<shared_ptr<Entity>, 128ul>&, unsigned int, World&, int, int, int, int, int,
                         render::Viewport const&, bool)::$_7::operator()() const {
        int* arg3;
        shared_ptr<Entity>* entity;
        Point<float> local_58;
        World* local_50;
        fixed_vector<shared_ptr<Entity>, _128ul>* local_48;
        fixed_vector<shared_ptr<Entity>, _128ul>* local_40;

        unsigned long* puVar1 = (unsigned long*)(*(*(
            vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>**)(this + 8)))[*(unsigned long*)this];
        unsigned long arg1 = *puVar1;
        long lVar2 = (*(*(
            vector<std::pair<unsigned long, unsigned long>, BucketAllocatorEASTL>**)(this + 8)))[*(unsigned long*)this];
        unsigned long local_38 = *(unsigned long*)(lVar2 + 8);
        if (arg1 < local_38) {
            do {
                local_50 = *(World**)(this + 16);
                local_48 = (fixed_vector<shared_ptr<Entity>, _128ul>*)(*(
                    *(Array<eastl::fixed_vector<shared_ptr<Entity>, 128ul>,
                            BucketAllocatorEASTL>**)(this + 24)))[*(unsigned long*)this];
                local_40 = (fixed_vector<shared_ptr<Entity>, _128ul>*)(*(
                    *(Array<eastl::fixed_vector<shared_ptr<Entity>, 128ul>,
                            BucketAllocatorEASTL>**)(this + 32)))[*(unsigned long*)this];
                arg3 =
                    (int*)(*(*(Array<std::pair<int, int>, BucketAllocatorEASTL>**)(this + 40)))[*(unsigned long*)this];
                lVar2 = (*(*(Array<std::pair<int, int>, BucketAllocatorEASTL>**)(this + 40)))[*(unsigned long*)this];
                entity = (shared_ptr<Entity>*)(*(
                    *(vector<shared_ptr<Entity>,
                             eastl::fixed_vector_allocator<16ul, 2048ul, 8ul, 0ul, true>>**)(this + 48)))[arg1];
                math::Point<float>::ToType<int>(&local_58);
                local_50->TestPickableEntity(*local_48, *local_40, *arg3, *((lVar2 + 4)), *entity, local_58,
                                             **(int**)(this + 64), **(unsigned int**)(this + 72));
                arg1 = arg1 + 1;
            } while (local_38 != arg1);
        }
    }

} // namespace jag::game
