// libs/jtl/pool/MakeUniquePool.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    template <
        typename...> // 9 instantiations, e.g. <SpotAnimation, 64>, <game::EnvironmentLoader, 48>, <game::MapElementType::Polygon, 256>
    class MakeUniquePool {
    public:
        class UniquePoolDeleter;
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
        MakeUnique<graphics::Model&, shared_ptr<graphics::GeometryBatch>&>(
            graphics::Model& model, shared_ptr<graphics::GeometryBatch>& geometryBatch);
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
        MakeUnique<graphics::GeometryBatchInstance const&, graphics::Model&, bool>(
            const graphics::GeometryBatchInstance& geometryBatchInstance, graphics::Model& model, bool&& arg3);
        void GetPool();
        MakeUniquePool();
        void RegisterThisUniquePool();
        void GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo& sharedPoolInfo);
        std::unique_ptr<game::EnvironmentLoader, MakeUniquePool<game::EnvironmentLoader, 48>::UniquePoolDeleter>
        MakeUnique<unsigned int&, unsigned int&, shared_ptr<game::ClientCompositeData>&>(
            unsigned int& arg1, unsigned int& arg2, shared_ptr<game::ClientCompositeData>& clientCompositeData);
        std::unique_ptr<game::Terrain, MakeUniquePool<game::Terrain, 32>::UniquePoolDeleter>
        MakeUnique<graphics::GraphNode*&, shared_ptr<game::World> const&, game::TerrainInputData&, graphics::RT7Core*&>(
            graphics::GraphNode*& arg1, const shared_ptr<game::World>& world, game::TerrainInputData& terrainInputData,
            graphics::RT7Core*& arg4);
        std::unique_ptr<game::MapElementType::Polygon,
                        MakeUniquePool<game::MapElementType::Polygon, 256>::UniquePoolDeleter>
        MakeUnique<>();
        std::unique_ptr<graphics::AnimationParameters,
                        MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>
        MakeUnique<shared_ptr<graphics::Animation> const&, graphics::AnimationLoopBehaviour&, unsigned int&,
                   unsigned int&, bool&, int, unsigned int, bool&>(
            const shared_ptr<graphics::Animation>& animation, graphics::AnimationLoopBehaviour& animationLoopBehaviour,
            unsigned int& arg3, unsigned int& arg4, bool& arg5, int&& arg6, unsigned int&& arg7, bool& arg8);
        std::unique_ptr<graphics::AnimationParameters,
                        MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>
        MakeUnique<shared_ptr<graphics::Animation> const&, graphics::AnimationLoopBehaviour, int&, int&, bool&, int&,
                   unsigned int, bool>(const shared_ptr<graphics::Animation>& animation,
                                       graphics::AnimationLoopBehaviour&& animationLoopBehaviour, int& arg3, int& arg4,
                                       bool& arg5, int& arg6, unsigned int&& arg7, bool&& arg8);
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
        MakeUnique<graphics::GeometryBatchInstance&, graphics::Model&, bool>(
            graphics::GeometryBatchInstance& geometryBatchInstance, graphics::Model& model, bool&& arg3);
        std::unique_ptr<graphics::BillboardBatchInstance,
                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>
        MakeUnique<graphics::BillboardBatchInstance&, graphics::Model&, bool>(
            graphics::BillboardBatchInstance& billboardBatchInstance, graphics::Model& model, bool&& arg3);
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
        MakeUnique<graphics::GeometryBatchInstance, graphics::Model&>(
            graphics::GeometryBatchInstance&& geometryBatchInstance, graphics::Model& model);
        std::unique_ptr<graphics::BillboardBatchInstance,
                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>
        MakeUnique<graphics::BillboardBatchInstance, graphics::Model&>(
            graphics::BillboardBatchInstance&& billboardBatchInstance, graphics::Model& model);
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
        MakeUnique<graphics::Model&, unsigned short&>(graphics::Model& model, unsigned short& arg2);
        std::unique_ptr<graphics::BillboardBatchInstance,
                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>
        MakeUnique<graphics::Model&, unsigned char&>(graphics::Model& model, unsigned char& arg2);
        std::unique_ptr<graphics::AnimState, MakeUniquePool<graphics::AnimState, 4096>::UniquePoolDeleter>
        MakeUnique<std::unique_ptr<graphics::BlendTreeNode>, graphics::AnimationStateResourceList>(
            std::unique_ptr<graphics::BlendTreeNode>&& blendTreeNode,
            graphics::AnimationStateResourceList&& animationStateResourceList);
        std::unique_ptr<graphics::AnimState, MakeUniquePool<graphics::AnimState, 4096>::UniquePoolDeleter>
        MakeUnique<graphics::AnimationDescriptor&>(graphics::AnimationDescriptor& animationDescriptor);
        std::unique_ptr<graphics::AnimState, MakeUniquePool<graphics::AnimState, 4096>::UniquePoolDeleter>
        MakeUnique<>();
        static int32_t m_mutex[16]; // initialised in its definition
        static int64_t m_peak;      // = 0
        static int32_t m_mutex[16]; // initialised in its definition
        static float m_peak[4];     // = { 0, 0, 0, 0 }
        static float m_peak[4];     // = { 0, 0, 0, 0 }
        static int32_t m_mutex[16]; // initialised in its definition
        static int32_t m_mutex[16]; // initialised in its definition
        static int64_t m_peak;      // = 0
        static int32_t m_mutex[16]; // initialised in its definition
        static int64_t m_peak;      // = 0
        static int64_t m_peak;      // = 0
        static int32_t m_mutex[16]; // initialised in its definition
        static int32_t m_mutex[16]; // initialised in its definition
        static int64_t m_peak;      // = 0
        static int32_t m_mutex[16]; // initialised in its definition
        static float m_peak[4];     // = { 0, 0, 0, 0 }
        static int32_t m_mutex[16]; // initialised in its definition
        static int64_t m_peak;      // = 0
    };

    template <typename...> // 1 instantiations, e.g.
    class MakeUniquePool::UniquePoolDeleter {
    public:
        void operator()(graphics::GeometryBatchInstance* geometryBatchInstance) const;
        void operator()(SpotAnimation* spotAnimation) const;
        void operator()(game::EnvironmentLoader* environmentLoader) const;
        void operator()(game::Terrain* terrain) const;
        void operator()(game::MapElementType::Polygon* polygon) const;
        void operator()(graphics::AnimationParameters* animationParameters) const;
        void operator()(graphics::BillboardBatchInstance* billboardBatchInstance) const;
        void operator()(graphics::AnimState* animState) const;
    };

    // 0x100f37c90
    int32_t MakeUniquePool<graphics::GeometryBatchInstance, 3072>::m_mutex[16] = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x100f37f20
    int64_t MakeUniquePool<graphics::GeometryBatchInstance, 3072>::m_peak = 0;

    // 0x100f386b0
    int32_t MakeUniquePool<game::Terrain, 32>::m_mutex[16] = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x100f387d0
    float MakeUniquePool<SpotAnimation, 64>::m_peak[4] = {0, 0, 0, 0};

    // 0x100f38820
    float MakeUniquePool<game::Terrain, 32>::m_peak[4] = {0, 0, 0, 0};

    // 0x100f38970
    int32_t MakeUniquePool<game::EnvironmentLoader, 48>::m_mutex[16] = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x100f389e0
    int32_t MakeUniquePool<SpotAnimation, 64>::m_mutex[16] = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x100f38b50
    int64_t MakeUniquePool<game::EnvironmentLoader, 48>::m_peak = 0;

    // 0x100f39070
    int32_t MakeUniquePool<game::MapElementType::Polygon, 256>::m_mutex[16] = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x100f3c928
    int64_t MakeUniquePool<game::MapElementType::Polygon, 256>::m_peak = 0;

    // 0x100f3e570
    int64_t MakeUniquePool<graphics::AnimationParameters, 512>::m_peak = 0;

    // 0x100f3e610
    int32_t MakeUniquePool<graphics::AnimationParameters, 512>::m_mutex[16] = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x100f43c78
    int32_t MakeUniquePool<graphics::Billboard, 32>::m_mutex[16] = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x100f43dc8
    int64_t MakeUniquePool<graphics::Billboard, 32>::m_peak = 0;

    // 0x100f43ee0
    int32_t MakeUniquePool<graphics::BillboardBatchInstance, 64>::m_mutex[16] = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x100f43fe0
    float MakeUniquePool<graphics::BillboardBatchInstance, 64>::m_peak[4] = {0, 0, 0, 0};

    // 0x100f44bb0
    int32_t MakeUniquePool<graphics::AnimState, 4096>::m_mutex[16] = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x100f44c28
    int64_t MakeUniquePool<graphics::AnimState, 4096>::m_peak = 0;

    // 0x100306380
    std::unique_ptr<graphics::GeometryBatchInstance,
                    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::MakeUnique<
        graphics::Model&, shared_ptr<graphics::GeometryBatch>&>(graphics::Model& model,
                                                                shared_ptr<graphics::GeometryBatch>& geometryBatch) {
        shared_ptr<graphics::GeometryBatch>* in_RDX;
        uint8_t auVar3[16];

        unique_lock<std::mutex> local_30(*PTR_m_mutex_100ee6020);
        long lVar1 =
            ((VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
                 GetPool())
                ->size();
        if (*(unsigned long*)PTR_m_peak_100ee6018 < lVar1 + 1U) {
            *(unsigned long*)PTR_m_peak_100ee6018 = lVar1 + 1U;
        }
        auVar3 = ((VectorFastPool<graphics::GeometryBatchInstance>*)GetPool())->allocate();
        model.unique_ptr<true, void>(auVar3._0_8_, auVar3._8_8_);
        local_30.unlock();
        _memset((void*)model.get(), 205, 896);
        new ((GeometryBatchInstance*)model.get()) graphics::GeometryBatchInstance(geometryBatch, in_RDX);
        return model;
    }

    // 0x100306460
    shared_ptr_if_not_array<oldscape::dash3d::ModelRSevenUnlit>::type
    make_shared<oldscape::dash3d::ModelRSevenUnlit, shared_ptr<graphics::Model>, bool>(
        shared_ptr<graphics::Model>&& model, bool&& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        ModelRSevenUnlit* local_38[2];

        auto arg1 = aligned_alloc(136, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::ModelRSevenUnlit>::type result;
        } else {
            local_38[0] = placement_new<oldscape::dash3d::ModelRSevenUnlit, shared_ptr<graphics::Model>, bool>(
                (void*)((long)arg1 + 32), model, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::ModelRSevenUnlit>, int,
                              oldscape::dash3d::ModelRSevenUnlit*&>(arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x10036dd10
    std::unique_ptr<graphics::GeometryBatchInstance,
                    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::MakeUnique<graphics::GeometryBatchInstance const&,
                                                                      graphics::Model&, bool>(
        const graphics::GeometryBatchInstance& geometryBatchInstance, graphics::Model& model, bool&& arg3) {
        uint64_t in_RCX;
        uint8_t auVar3[16];

        unique_lock<std::mutex> local_38(*PTR_m_mutex_100ee6020);
        long lVar1 =
            ((VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
                 GetPool())
                ->size();
        if (*(unsigned long*)PTR_m_peak_100ee6018 < lVar1 + 1U) {
            *(unsigned long*)PTR_m_peak_100ee6018 = lVar1 + 1U;
        }
        auVar3 = ((VectorFastPool<graphics::GeometryBatchInstance>*)GetPool())->allocate();
        geometryBatchInstance.unique_ptr<true, void>(auVar3._0_8_, auVar3._8_8_);
        local_38.unlock();
        _memset((void*)geometryBatchInstance.get(), 205, 896);
        new ((GeometryBatchInstance*)geometryBatchInstance.get())
            graphics::GeometryBatchInstance(model, arg3, *(bool*)in_RCX);
        return geometryBatchInstance;
    }

    // 0x100388290
    void MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter::operator()(
        graphics::GeometryBatchInstance* geometryBatchInstance) const {
        unique_lock<std::mutex> local_20;

        if (geometryBatchInstance != nullptr) {
            std::destroy_at(geometryBatchInstance);
            _memset(geometryBatchInstance, 221, 896);
            local_20 = std::unique_lock<std::mutex>(*PTR_m_mutex_100ee6020);
            ((VectorFastPool<graphics::GeometryBatchInstance>*)
                 MakeUniquePool<graphics::GeometryBatchInstance, 3072>::GetPool())
                ->deallocate(geometryBatchInstance);
        }
    }

    // 0x100388310
    void MakeUniquePool<graphics::GeometryBatchInstance, 3072>::GetPool() {
        unsigned long* puVar2;
        unsigned long local_20[2];

        if (*PTR_pool_100ee5080 == '\0') {
            if (___cxa_guard_acquire(PTR_pool_100ee5080) != 0) {
                local_20[0] = 16;
                local_20[1] = 16;
                puVar2 = std::max<unsigned long>(*local_20, *(local_20 + 1));
                new (PTR_pool_100ee9c78) VectorFastPool<graphics::GeometryBatchInstance>(3072, *puVar2);
                ___cxa_atexit(PTR__VectorFastPool_100ee63b0, PTR_pool_100ee9c78, 4294967296);
                ___cxa_guard_release(PTR_pool_100ee5080);
            }
        }
        return PTR_pool_100ee9c78;
    }

    // 0x1003daed0
    MakeUniquePool<game::EnvironmentLoader, 48>::MakeUniquePool() {
        uint8_t uVar1;

        if (*PTR_registered_100ee5058 == '\0') {
            if (___cxa_guard_acquire(PTR_registered_100ee5058) != 0) {
                uVar1 = RegisterThisUniquePool();
                *PTR_registered_100ee9c50 = uVar1;
                ___cxa_guard_release(PTR_registered_100ee5058);
            }
        }
    }

    // 0x1003e02b0
    void MakeUniquePool<game::EnvironmentLoader, 48>::RegisterThisUniquePool() {
        _lambda_jag__shareduniquedebug__SharedPoolInfo___1_* arg1;
        Logger* logger;
        function<void(shareduniquedebug::SharedPoolInfo&)> local_2f8[176];
        uint64_t local_20;

        fixed_string<char, 512> local_248("static bool MakeUniquePool<game::EnvironmentLoader, "
                                          "48>::RegisterThisUniquePool() [T = game::EnvironmentLoader, CAPACITY = 48]");
        char* pcVar3 = "T = jag::";
        long lVar1 = local_248.find("T = jag::", 0);
        if (lVar1 != -1) {
            local_248.replace(0, lVar1 + 9, "UniquePool\t");
            pcVar3 = ", CAPACITY = ";
            arg1 = (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)local_248.find(", CAPACITY = ", 0);
            if (arg1 != (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)18446744073709551615) {
                local_248.replace((unsigned long)arg1, 13, "[");
                pcVar3 = (char*)arg1;
            }
        }
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::function<
            MakeUniquePool<game::EnvironmentLoader, 48>::RegisterThisUniquePool()::_lambda(
                shareduniquedebug::SharedPoolInfo&) _1_,
            void>(local_2f8, (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)pcVar3);
        shareduniquedebug::RegisterUniquePool(
            "static bool MakeUniquePool<game::EnvironmentLoader, 48>::RegisterThisUniquePool() [T = "
            "game::EnvironmentLoader, CAPACITY = 48]",
            *local_2f8);
        new (local_2f8) eastl::fixed_string<char, 128>();
        logger = logger::default_logger();
        uint64_t uVar2 = local_248.begin();
        pcVar3 = DataSizeStringMB<eastl::fixed_string<char, 128>>((fixed_string<char, _128>*)local_2f8, 2688);
        logger->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/MakeUniquePool.h",
                    133, "%s\t%s", uVar2, pcVar3);
    }

    // 0x1003e0c50
    void MakeUniquePool<game::EnvironmentLoader, 48>::RegisterThisUniquePool()::{
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(shareduniquedebug::SharedPoolInfo & arg1) const {
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(_lambda_jag__shareduniquedebug__SharedPoolInfo___1_* this, SharedPoolInfo * sharedPoolInfo) {
        GetUniquePoolInfo(sharedPoolInfo);
        return;
    }

    // 0x1003e0c60
    void
    MakeUniquePool<game::EnvironmentLoader, 48>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo& sharedPoolInfo) {
        unique_lock<std::mutex> local_20(*PTR_m_mutex_100ee5ff0);
        *(uint64_t*)(sharedPoolInfo + 48) = 0;
        *(uint64_t*)(sharedPoolInfo + 56) = 0;
        *(uint64_t*)(sharedPoolInfo + 32) = 0;
        *(uint64_t*)(sharedPoolInfo + 40) = 0;
        *(uint64_t*)(sharedPoolInfo + 16) = 0;
        *(uint64_t*)(sharedPoolInfo + 24) = 0;
        *(uint64_t*)sharedPoolInfo = 0;
        *(uint64_t*)(sharedPoolInfo + 8) = 0;
        *(uint64_t*)(sharedPoolInfo + 64) = 0;
        auto pVVar1 = GetPool();
        uint64_t uVar2 = pVVar1->size();
        *(uint64_t*)sharedPoolInfo = uVar2;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        long lVar3 = pVVar1->capacity();
        *(long*)(sharedPoolInfo + 8) = lVar3;
        *(uint64_t*)(sharedPoolInfo + 16) = *(uint64_t*)PTR_m_peak_100ee5fe8;
        *(uint64_t*)(sharedPoolInfo + 32) = 48;
        if (lVar3 != 0) {
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 = FastPool<game::EnvironmentLoader, unsigned long>::GetTotalSize(*(unsigned long*)sharedPoolInfo);
            *(uint64_t*)(sharedPoolInfo + 40) = uVar2;
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 =
                FastPool<game::EnvironmentLoader, unsigned long>::GetTotalSize(*(unsigned long*)(sharedPoolInfo + 8));
            *(uint64_t*)(sharedPoolInfo + 48) = uVar2;
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 =
                FastPool<game::EnvironmentLoader, unsigned long>::GetTotalSize(*(unsigned long*)(sharedPoolInfo + 32));
            *(uint64_t*)(sharedPoolInfo + 56) = uVar2;
        }
        *(char**)(sharedPoolInfo + 64) =
            "static void MakeUniquePool<game::EnvironmentLoader, "
            "48>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo &) [T = game::EnvironmentLoader, CAPACITY = 48]";
    }

    // 0x1003f8210
    MakeUniquePool<SpotAnimation, 64>::MakeUniquePool() {
        uint8_t uVar1;

        if (*PTR_registered_100ee5038 == '\0') {
            if (___cxa_guard_acquire(PTR_registered_100ee5038) != 0) {
                uVar1 = RegisterThisUniquePool();
                *PTR_registered_100ee9c30 = uVar1;
                ___cxa_guard_release(PTR_registered_100ee5038);
            }
        }
    }

    // 0x1003f94e0
    MakeUniquePool<game::Terrain, 32>::MakeUniquePool() {
        uint8_t uVar1;

        if (*PTR_registered_100ee5068 == '\0') {
            if (___cxa_guard_acquire(PTR_registered_100ee5068) != 0) {
                uVar1 = RegisterThisUniquePool();
                *PTR_registered_100ee9c60 = uVar1;
                ___cxa_guard_release(PTR_registered_100ee5068);
            }
        }
    }

    // 0x100406200
    void MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter::operator()(SpotAnimation* spotAnimation) const {
        unique_lock<std::mutex> local_20;

        if (spotAnimation != nullptr) {
            std::destroy_at(spotAnimation);
            _memset(spotAnimation, 221, 464);
            local_20 = std::unique_lock<std::mutex>(*PTR_m_mutex_100ee5fd0);
            ((VectorFastPool<SpotAnimation>*)MakeUniquePool<SpotAnimation, 64>::GetPool())->deallocate(spotAnimation);
        }
    }

    // 0x100406270
    void MakeUniquePool<SpotAnimation, 64>::GetPool() {
        unsigned long* puVar2;
        unsigned long local_20[2];

        if (*PTR_pool_100ee5030 == '\0') {
            if (___cxa_guard_acquire(PTR_pool_100ee5030) != 0) {
                local_20[0] = 16;
                local_20[1] = 16;
                puVar2 = std::max<unsigned long>(*local_20, *(local_20 + 1));
                new (PTR_pool_100ee9c28) VectorFastPool<SpotAnimation>(64, *puVar2);
                ___cxa_atexit(PTR__VectorFastPool_100ee6060, PTR_pool_100ee9c28, 4294967296);
                ___cxa_guard_release(PTR_pool_100ee5030);
            }
        }
        return PTR_pool_100ee9c28;
    }

    // 0x100407d70
    void MakeUniquePool<SpotAnimation, 64>::RegisterThisUniquePool() {
        _lambda_jag__shareduniquedebug__SharedPoolInfo___1_* arg1;
        Logger* logger;
        function<void(shareduniquedebug::SharedPoolInfo&)> local_2f8[176];
        uint64_t local_20;

        fixed_string<char, 512> local_248("static bool MakeUniquePool<SpotAnimation, 64>::RegisterThisUniquePool() [T "
                                          "= SpotAnimation, CAPACITY = 64]");
        char* pcVar3 = "T = jag::";
        long lVar1 = local_248.find("T = jag::", 0);
        if (lVar1 != -1) {
            local_248.replace(0, lVar1 + 9, "UniquePool\t");
            pcVar3 = ", CAPACITY = ";
            arg1 = (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)local_248.find(", CAPACITY = ", 0);
            if (arg1 != (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)18446744073709551615) {
                local_248.replace((unsigned long)arg1, 13, "[");
                pcVar3 = (char*)arg1;
            }
        }
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::function<
            MakeUniquePool<SpotAnimation, 64>::RegisterThisUniquePool()::_lambda(shareduniquedebug::SharedPoolInfo&)
                _1_,
            void>(local_2f8, (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)pcVar3);
        shareduniquedebug::RegisterUniquePool("static bool MakeUniquePool<SpotAnimation, 64>::RegisterThisUniquePool() "
                                              "[T = SpotAnimation, CAPACITY = 64]",
                                              *local_2f8);
        new (local_2f8) eastl::fixed_string<char, 128>();
        logger = logger::default_logger();
        uint64_t uVar2 = local_248.begin();
        pcVar3 = DataSizeStringMB<eastl::fixed_string<char, 128>>((fixed_string<char, _128>*)local_2f8, 29696);
        logger->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/MakeUniquePool.h",
                    133, "%s\t%s", uVar2, pcVar3);
    }

    // 0x1004086b0
    void MakeUniquePool<SpotAnimation, 64>::RegisterThisUniquePool()::{
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(shareduniquedebug::SharedPoolInfo & arg1) const {
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(_lambda_jag__shareduniquedebug__SharedPoolInfo___1_* this, SharedPoolInfo * sharedPoolInfo) {
        GetUniquePoolInfo(sharedPoolInfo);
        return;
    }

    // 0x1004086c0
    void MakeUniquePool<SpotAnimation, 64>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo& sharedPoolInfo) {
        unique_lock<std::mutex> local_20(*PTR_m_mutex_100ee5fd0);
        *(uint64_t*)(sharedPoolInfo + 48) = 0;
        *(uint64_t*)(sharedPoolInfo + 56) = 0;
        *(uint64_t*)(sharedPoolInfo + 32) = 0;
        *(uint64_t*)(sharedPoolInfo + 40) = 0;
        *(uint64_t*)(sharedPoolInfo + 16) = 0;
        *(uint64_t*)(sharedPoolInfo + 24) = 0;
        *(uint64_t*)sharedPoolInfo = 0;
        *(uint64_t*)(sharedPoolInfo + 8) = 0;
        *(uint64_t*)(sharedPoolInfo + 64) = 0;
        auto pVVar1 = GetPool();
        uint64_t uVar2 = pVVar1->size();
        *(uint64_t*)sharedPoolInfo = uVar2;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        long lVar3 = pVVar1->capacity();
        *(long*)(sharedPoolInfo + 8) = lVar3;
        *(uint64_t*)(sharedPoolInfo + 16) = *(uint64_t*)PTR_m_peak_100ee5fc8;
        *(uint64_t*)(sharedPoolInfo + 32) = 64;
        if (lVar3 != 0) {
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 = FastPool<SpotAnimation, unsigned long>::GetTotalSize(*(unsigned long*)sharedPoolInfo);
            *(uint64_t*)(sharedPoolInfo + 40) = uVar2;
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 = FastPool<SpotAnimation, unsigned long>::GetTotalSize(*(unsigned long*)(sharedPoolInfo + 8));
            *(uint64_t*)(sharedPoolInfo + 48) = uVar2;
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 = FastPool<SpotAnimation, unsigned long>::GetTotalSize(*(unsigned long*)(sharedPoolInfo + 32));
            *(uint64_t*)(sharedPoolInfo + 56) = uVar2;
        }
        *(char**)(sharedPoolInfo + 64) =
            "static void MakeUniquePool<SpotAnimation, 64>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo &) [T "
            "= SpotAnimation, CAPACITY = 64]";
    }

    // 0x1004089f0
    void MakeUniquePool<game::Terrain, 32>::RegisterThisUniquePool() {
        _lambda_jag__shareduniquedebug__SharedPoolInfo___1_* arg1;
        Logger* logger;
        function<void(shareduniquedebug::SharedPoolInfo&)> local_2f8[176];
        uint64_t local_20;

        fixed_string<char, 512> local_248("static bool MakeUniquePool<game::Terrain, 32>::RegisterThisUniquePool() [T "
                                          "= game::Terrain, CAPACITY = 32]");
        char* pcVar3 = "T = jag::";
        long lVar1 = local_248.find("T = jag::", 0);
        if (lVar1 != -1) {
            local_248.replace(0, lVar1 + 9, "UniquePool\t");
            pcVar3 = ", CAPACITY = ";
            arg1 = (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)local_248.find(", CAPACITY = ", 0);
            if (arg1 != (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)18446744073709551615) {
                local_248.replace((unsigned long)arg1, 13, "[");
                pcVar3 = (char*)arg1;
            }
        }
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::function<
            MakeUniquePool<game::Terrain, 32>::RegisterThisUniquePool()::_lambda(shareduniquedebug::SharedPoolInfo&)
                _1_,
            void>(local_2f8, (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)pcVar3);
        shareduniquedebug::RegisterUniquePool("static bool MakeUniquePool<game::Terrain, 32>::RegisterThisUniquePool() "
                                              "[T = game::Terrain, CAPACITY = 32]",
                                              *local_2f8);
        new (local_2f8) eastl::fixed_string<char, 128>();
        logger = logger::default_logger();
        uint64_t uVar2 = local_248.begin();
        pcVar3 = DataSizeStringMB<eastl::fixed_string<char, 128>>((fixed_string<char, _128>*)local_2f8, 54272);
        logger->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/MakeUniquePool.h",
                    133, "%s\t%s", uVar2, pcVar3);
    }

    // 0x100409330
    void MakeUniquePool<game::Terrain, 32>::RegisterThisUniquePool()::{
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(shareduniquedebug::SharedPoolInfo & arg1) const {
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(_lambda_jag__shareduniquedebug__SharedPoolInfo___1_* this, SharedPoolInfo * sharedPoolInfo) {
        GetUniquePoolInfo(sharedPoolInfo);
        return;
    }

    // 0x100409340
    void MakeUniquePool<game::Terrain, 32>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo& sharedPoolInfo) {
        unique_lock<std::mutex> local_20(*PTR_m_mutex_100ee6000);
        *(uint64_t*)(sharedPoolInfo + 48) = 0;
        *(uint64_t*)(sharedPoolInfo + 56) = 0;
        *(uint64_t*)(sharedPoolInfo + 32) = 0;
        *(uint64_t*)(sharedPoolInfo + 40) = 0;
        *(uint64_t*)(sharedPoolInfo + 16) = 0;
        *(uint64_t*)(sharedPoolInfo + 24) = 0;
        *(uint64_t*)sharedPoolInfo = 0;
        *(uint64_t*)(sharedPoolInfo + 8) = 0;
        *(uint64_t*)(sharedPoolInfo + 64) = 0;
        auto pVVar1 = GetPool();
        uint64_t uVar2 = pVVar1->size();
        *(uint64_t*)sharedPoolInfo = uVar2;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        long lVar3 = pVVar1->capacity();
        *(long*)(sharedPoolInfo + 8) = lVar3;
        *(uint64_t*)(sharedPoolInfo + 16) = *(uint64_t*)PTR_m_peak_100ee5ff8;
        *(uint64_t*)(sharedPoolInfo + 32) = 32;
        if (lVar3 != 0) {
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 = FastPool<game::Terrain, unsigned long>::GetTotalSize(*(unsigned long*)sharedPoolInfo);
            *(uint64_t*)(sharedPoolInfo + 40) = uVar2;
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 = FastPool<game::Terrain, unsigned long>::GetTotalSize(*(unsigned long*)(sharedPoolInfo + 8));
            *(uint64_t*)(sharedPoolInfo + 48) = uVar2;
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 = FastPool<game::Terrain, unsigned long>::GetTotalSize(*(unsigned long*)(sharedPoolInfo + 32));
            *(uint64_t*)(sharedPoolInfo + 56) = uVar2;
        }
        *(char**)(sharedPoolInfo + 64) =
            "static void MakeUniquePool<game::Terrain, 32>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo &) [T "
            "= game::Terrain, CAPACITY = 32]";
    }

    // 0x100414170
    std::unique_ptr<game::EnvironmentLoader, MakeUniquePool<game::EnvironmentLoader, 48>::UniquePoolDeleter>
    MakeUniquePool<game::EnvironmentLoader, 48>::MakeUnique<unsigned int&, unsigned int&,
                                                            shared_ptr<game::ClientCompositeData>&>(
        unsigned int& arg1, unsigned int& arg2, shared_ptr<game::ClientCompositeData>& clientCompositeData) {
        shared_ptr<game::ClientCompositeData>* in_RCX;
        uint8_t auVar3[16];

        unique_lock<std::mutex> local_38(*PTR_m_mutex_100ee5ff0);
        long lVar1 =
            ((VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
                 GetPool())
                ->size();
        if (*(unsigned long*)PTR_m_peak_100ee5fe8 < lVar1 + 1U) {
            *(unsigned long*)PTR_m_peak_100ee5fe8 = lVar1 + 1U;
        }
        auVar3 = ((VectorFastPool<game::EnvironmentLoader>*)GetPool())->allocate();
        arg1.unique_ptr<true, void>(auVar3._0_8_, auVar3._8_8_);
        local_38.unlock();
        auto puVar2 = arg1.get();
        *puVar2 = 14829735431805717965;
        puVar2[1] = 14829735431805717965;
        puVar2[2] = 14829735431805717965;
        puVar2[3] = 14829735431805717965;
        puVar2[4] = 14829735431805717965;
        puVar2[5] = 14829735431805717965;
        puVar2[6] = 14829735431805717965;
        new ((EnvironmentLoader*)arg1.get())
            game::EnvironmentLoader(arg2, *(unsigned int*)clientCompositeData, *in_RCX);
        return arg1;
    }

    // 0x100414370
    std::unique_ptr<game::Terrain, MakeUniquePool<game::Terrain, 32>::UniquePoolDeleter>
    MakeUniquePool<game::Terrain, 32>::MakeUnique<graphics::GraphNode*&, shared_ptr<game::World> const&,
                                                  game::TerrainInputData&, graphics::RT7Core*&>(
        graphics::GraphNode*& arg1, const shared_ptr<game::World>& world, game::TerrainInputData& terrainInputData,
        graphics::RT7Core*& arg4) {
        uint64_t* in_R8;
        uint8_t auVar3[16];

        unique_lock<std::mutex> local_40(*PTR_m_mutex_100ee6000);
        long lVar1 =
            ((VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
                 GetPool())
                ->size();
        if (*(unsigned long*)PTR_m_peak_100ee5ff8 < lVar1 + 1U) {
            *(unsigned long*)PTR_m_peak_100ee5ff8 = lVar1 + 1U;
        }
        auVar3 = ((VectorFastPool<game::Terrain>*)GetPool())->allocate();
        arg1.unique_ptr<true, void>(auVar3._0_8_, auVar3._8_8_);
        local_40.unlock();
        _memset((void*)arg1.get(), 205, 1696);
        new ((Terrain*)arg1.get()) game::Terrain(*(GraphNode**)world, terrainInputData, arg4, *in_R8);
        return arg1;
    }

    // 0x100420c80
    void MakeUniquePool<game::EnvironmentLoader, 48>::UniquePoolDeleter::operator()(
        game::EnvironmentLoader* environmentLoader) const {
        unique_lock<std::mutex> local_20;

        if (environmentLoader != nullptr) {
            environmentLoader->~EnvironmentLoader();
            environmentLoader[1].field_0 = 3722304989;
            environmentLoader[1].field_4 = 3722304989;
            *(uint64_t*)&environmentLoader->field_32 = 15987178197214944733;
            *(uint64_t*)&environmentLoader->field_40 = 15987178197214944733;
            *(uint64_t*)(environmentLoader->field_8 + 8) = 15987178197214944733;
            *(uint64_t*)&environmentLoader->field_24 = 15987178197214944733;
            environmentLoader->field_0 = 3722304989;
            environmentLoader->field_4 = 3722304989;
            *(uint64_t*)environmentLoader->field_8 = 15987178197214944733;
            local_20 = std::unique_lock<std::mutex>(*PTR_m_mutex_100ee5ff0);
            ((VectorFastPool<game::EnvironmentLoader>*)MakeUniquePool<game::EnvironmentLoader, 48>::GetPool())
                ->deallocate(environmentLoader);
        }
    }

    // 0x100420d30
    void MakeUniquePool<game::EnvironmentLoader, 48>::GetPool() {
        unsigned long* puVar2;
        unsigned long local_20[2];

        if (*PTR_pool_100ee5050 == '\0') {
            if (___cxa_guard_acquire(PTR_pool_100ee5050) != 0) {
                local_20[0] = 16;
                local_20[1] = 8;
                puVar2 = std::max<unsigned long>(*local_20, *(local_20 + 1));
                new (PTR_pool_100ee9c48) VectorFastPool<game::EnvironmentLoader>(48, *puVar2);
                ___cxa_atexit(PTR__VectorFastPool_100ee6378, PTR_pool_100ee9c48, 4294967296);
                ___cxa_guard_release(PTR_pool_100ee5050);
            }
        }
        return PTR_pool_100ee9c48;
    }

    // 0x100421620
    void MakeUniquePool<game::Terrain, 32>::UniquePoolDeleter::operator()(game::Terrain* terrain) const {
        unique_lock<std::mutex> local_20;

        if (terrain != nullptr) {
            std::destroy_at(terrain);
            _memset(terrain, 221, 1696);
            local_20 = std::unique_lock<std::mutex>(*PTR_m_mutex_100ee6000);
            ((VectorFastPool<game::Terrain>*)MakeUniquePool<game::Terrain, 32>::GetPool())->deallocate(terrain);
        }
    }

    // 0x1004216b0
    void MakeUniquePool<game::Terrain, 32>::GetPool() {
        unsigned long* puVar2;
        unsigned long local_20[2];

        if (*PTR_pool_100ee5060 == '\0') {
            if (___cxa_guard_acquire(PTR_pool_100ee5060) != 0) {
                local_20[0] = 16;
                local_20[1] = 16;
                puVar2 = std::max<unsigned long>(*local_20, *(local_20 + 1));
                new (PTR_pool_100ee9c58) VectorFastPool<game::Terrain>(32, *puVar2);
                ___cxa_atexit(PTR__VectorFastPool_100ee6380, PTR_pool_100ee9c58, 4294967296);
                ___cxa_guard_release(PTR_pool_100ee5060);
            }
        }
        return PTR_pool_100ee9c58;
    }

    // 0x100516a10
    std::unique_ptr<game::MapElementType::Polygon,
                    MakeUniquePool<game::MapElementType::Polygon, 256>::UniquePoolDeleter>
    MakeUniquePool<game::MapElementType::Polygon, 256>::MakeUnique<>() {
        unique_ptr<game::MapElementType::Polygon,
                   MakeUniquePool<game::MapElementType::Polygon, 256>::UniquePoolDeleter>* in_RDI;
        uint8_t auVar3[16];

        unique_lock<std::mutex> local_28(*PTR_m_mutex_100ee5fe0);
        long lVar1 =
            ((VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
                 GetPool())
                ->size();
        if (*(unsigned long*)PTR_m_peak_100ee5fd8 < lVar1 + 1U) {
            *(unsigned long*)PTR_m_peak_100ee5fd8 = lVar1 + 1U;
        }
        auVar3 = ((VectorFastPool<game::MapElementType::Polygon>*)GetPool())->allocate();
        in_RDI->unique_ptr<true, void>(auVar3._0_8_, auVar3._8_8_);
        local_28.unlock();
        auto puVar2 = in_RDI->get();
        *puVar2 = 14829735431805717965;
        puVar2[1] = 14829735431805717965;
        puVar2[2] = 14829735431805717965;
        puVar2[3] = 14829735431805717965;
        puVar2[4] = 14829735431805717965;
        puVar2[5] = 14829735431805717965;
        puVar2[6] = 14829735431805717965;
        puVar2[7] = 14829735431805717965;
        puVar2[8] = 14829735431805717965;
        puVar2[9] = 14829735431805717965;
        puVar2[10] = 14829735431805717965;
        puVar2[11] = 14829735431805717965;
        puVar2[12] = 14829735431805717965;
        puVar2[13] = 14829735431805717965;
        puVar2[14] = 14829735431805717965;
        puVar2[15] = 14829735431805717965;
        puVar2[16] = 14829735431805717965;
        puVar2[17] = 14829735431805717965;
        auto this_01 = in_RDI->get();
        *(uint64_t*)this_01 = 0;
        *(uint64_t*)&this_01->field_8 = 0;
        *(uint64_t*)&this_01->field_16 = 0;
        *(uint64_t*)&this_01->field_24 = 0;
        this_01->field_32 = 0;
        this_01->field_40 = 0;
        this_01->field_48 = 0;
        this_01->field_56 = 0;
        *(uint64_t*)&this_01->field_64 = 0;
        *(uint64_t*)&this_01->field_72 = 0;
        *(uint64_t*)&this_01->field_80 = 0;
        *(uint64_t*)&this_01->field_88 = 0;
        *(uint64_t*)&this_01->field_96 = 0;
        *(uint64_t*)&this_01->field_104 = 0;
        *(uint64_t*)&this_01->field_112 = 0;
        *(uint64_t*)(this_01 + 1) = 0;
        *(uint64_t*)&this_01[1].field_8 = 0;
        *(uint64_t*)&this_01[1].field_16 = 0;
        new (this_01) game::MapElementType::Polygon();
    }

    // 0x10051f750
    MakeUniquePool<game::MapElementType::Polygon, 256>::MakeUniquePool() {
        uint8_t uVar1;

        if (*PTR_registered_100ee5048 == '\0') {
            if (___cxa_guard_acquire(PTR_registered_100ee5048) != 0) {
                uVar1 = RegisterThisUniquePool();
                *PTR_registered_100ee9c40 = uVar1;
                ___cxa_guard_release(PTR_registered_100ee5048);
            }
        }
    }

    // 0x10051f7c0
    void MakeUniquePool<game::MapElementType::Polygon, 256>::RegisterThisUniquePool() {
        _lambda_jag__shareduniquedebug__SharedPoolInfo___1_* arg1;
        Logger* logger;
        function<void(shareduniquedebug::SharedPoolInfo&)> local_2f8[176];
        uint64_t local_20;

        fixed_string<char, 512> local_248(
            "static bool MakeUniquePool<game::MapElementType::Polygon, 256>::RegisterThisUniquePool() [T = "
            "game::MapElementType::Polygon, CAPACITY = 256]");
        char* pcVar3 = "T = jag::";
        long lVar1 = local_248.find("T = jag::", 0);
        if (lVar1 != -1) {
            local_248.replace(0, lVar1 + 9, "UniquePool\t");
            pcVar3 = ", CAPACITY = ";
            arg1 = (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)local_248.find(", CAPACITY = ", 0);
            if (arg1 != (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)18446744073709551615) {
                local_248.replace((unsigned long)arg1, 13, "[");
                pcVar3 = (char*)arg1;
            }
        }
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::function<
            MakeUniquePool<game::MapElementType::Polygon, 256>::RegisterThisUniquePool()::_lambda(
                shareduniquedebug::SharedPoolInfo&) _1_,
            void>(local_2f8, (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)pcVar3);
        shareduniquedebug::RegisterUniquePool(
            "static bool MakeUniquePool<game::MapElementType::Polygon, 256>::RegisterThisUniquePool() [T = "
            "game::MapElementType::Polygon, CAPACITY = 256]",
            *local_2f8);
        new (local_2f8) eastl::fixed_string<char, 128>();
        logger = logger::default_logger();
        uint64_t uVar2 = local_248.begin();
        pcVar3 = DataSizeStringMB<eastl::fixed_string<char, 128>>((fixed_string<char, _128>*)local_2f8, 36864);
        logger->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/MakeUniquePool.h",
                    133, "%s\t%s", uVar2, pcVar3);
    }

    // 0x100520160
    void MakeUniquePool<game::MapElementType::Polygon, 256>::RegisterThisUniquePool()::{
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(shareduniquedebug::SharedPoolInfo & arg1) const {
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(_lambda_jag__shareduniquedebug__SharedPoolInfo___1_* this, SharedPoolInfo * sharedPoolInfo) {
        GetUniquePoolInfo(sharedPoolInfo);
        return;
    }

    // 0x100520170
    void MakeUniquePool<game::MapElementType::Polygon, 256>::GetUniquePoolInfo(
        shareduniquedebug::SharedPoolInfo& sharedPoolInfo) {
        unique_lock<std::mutex> local_20(*PTR_m_mutex_100ee5fe0);
        *(uint64_t*)(sharedPoolInfo + 48) = 0;
        *(uint64_t*)(sharedPoolInfo + 56) = 0;
        *(uint64_t*)(sharedPoolInfo + 32) = 0;
        *(uint64_t*)(sharedPoolInfo + 40) = 0;
        *(uint64_t*)(sharedPoolInfo + 16) = 0;
        *(uint64_t*)(sharedPoolInfo + 24) = 0;
        *(uint64_t*)sharedPoolInfo = 0;
        *(uint64_t*)(sharedPoolInfo + 8) = 0;
        *(uint64_t*)(sharedPoolInfo + 64) = 0;
        auto pVVar1 = GetPool();
        uint64_t uVar2 = pVVar1->size();
        *(uint64_t*)sharedPoolInfo = uVar2;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        long lVar3 = pVVar1->capacity();
        *(long*)(sharedPoolInfo + 8) = lVar3;
        *(uint64_t*)(sharedPoolInfo + 16) = *(uint64_t*)PTR_m_peak_100ee5fd8;
        *(uint64_t*)(sharedPoolInfo + 32) = 256;
        if (lVar3 != 0) {
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 = FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::GetTotalSize(
                *(unsigned long*)sharedPoolInfo);
            *(uint64_t*)(sharedPoolInfo + 40) = uVar2;
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 = FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::GetTotalSize(
                *(unsigned long*)(sharedPoolInfo + 8));
            *(uint64_t*)(sharedPoolInfo + 48) = uVar2;
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 = FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::GetTotalSize(
                *(unsigned long*)(sharedPoolInfo + 32));
            *(uint64_t*)(sharedPoolInfo + 56) = uVar2;
        }
        *(char**)(sharedPoolInfo + 64) = "static void MakeUniquePool<game::MapElementType::Polygon, "
                                         "256>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo &) [T = "
                                         "game::MapElementType::Polygon, CAPACITY = 256]";
    }

    // 0x1005ad720
    void MakeUniquePool<game::MapElementType::Polygon, 256>::UniquePoolDeleter::operator()(
        game::MapElementType::Polygon* polygon) const {
        unique_lock<std::mutex> local_20;

        if (polygon != nullptr) {
            polygon->~Polygon();
            *(uint64_t*)&polygon[1].field_8 = 15987178197214944733;
            *(uint64_t*)&polygon[1].field_16 = 15987178197214944733;
            *(uint64_t*)&polygon->field_112 = 15987178197214944733;
            *(uint64_t*)(polygon + 1) = 15987178197214944733;
            *(uint64_t*)&polygon->field_96 = 15987178197214944733;
            *(uint64_t*)&polygon->field_104 = 15987178197214944733;
            *(uint64_t*)&polygon->field_80 = 15987178197214944733;
            *(uint64_t*)&polygon->field_88 = 15987178197214944733;
            *(uint64_t*)&polygon->field_64 = 15987178197214944733;
            *(uint64_t*)&polygon->field_72 = 15987178197214944733;
            polygon->field_48 = 15987178197214944733;
            polygon->field_56 = 15987178197214944733;
            polygon->field_32 = 15987178197214944733;
            polygon->field_40 = 15987178197214944733;
            *(uint64_t*)&polygon->field_16 = 15987178197214944733;
            *(uint64_t*)&polygon->field_24 = 15987178197214944733;
            *(uint64_t*)polygon = 15987178197214944733;
            *(uint64_t*)&polygon->field_8 = 15987178197214944733;
            local_20 = std::unique_lock<std::mutex>(*PTR_m_mutex_100ee5fe0);
            ((VectorFastPool<game::MapElementType::Polygon>*)
                 MakeUniquePool<game::MapElementType::Polygon, 256>::GetPool())
                ->deallocate(polygon);
        }
    }

    // 0x1005ad7e0
    void MakeUniquePool<game::MapElementType::Polygon, 256>::GetPool() {
        unsigned long* puVar2;
        unsigned long local_20[2];

        if (*PTR_pool_100ee5040 == '\0') {
            if (___cxa_guard_acquire(PTR_pool_100ee5040) != 0) {
                local_20[0] = 16;
                local_20[1] = 8;
                puVar2 = std::max<unsigned long>(*local_20, *(local_20 + 1));
                new (PTR_pool_100ee9c38) VectorFastPool<game::MapElementType::Polygon>(256, *puVar2);
                ___cxa_atexit(PTR__VectorFastPool_100ee6370, PTR_pool_100ee9c38, 4294967296);
                ___cxa_guard_release(PTR_pool_100ee5040);
            }
        }
        return PTR_pool_100ee9c38;
    }

    // 0x100657f10
    std::unique_ptr<graphics::AnimationParameters,
                    MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>
    MakeUniquePool<graphics::AnimationParameters, 512>::MakeUnique<
        shared_ptr<graphics::Animation> const&, graphics::AnimationLoopBehaviour&, unsigned int&, unsigned int&, bool&,
        int, unsigned int, bool&>(const shared_ptr<graphics::Animation>& animation,
                                  graphics::AnimationLoopBehaviour& animationLoopBehaviour, unsigned int& arg3,
                                  unsigned int& arg4, bool& arg5, int&& arg6, unsigned int&& arg7, bool& arg8) {
        uint8_t auVar3[16];

        unique_lock<std::mutex> local_48(*PTR_m_mutex_100ee6010);
        long lVar1 =
            ((VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
                 GetPool())
                ->size();
        if (*(unsigned long*)PTR_m_peak_100ee6008 < lVar1 + 1U) {
            *(unsigned long*)PTR_m_peak_100ee6008 = lVar1 + 1U;
        }
        auVar3 = ((VectorFastPool<graphics::AnimationParameters>*)GetPool())->allocate();
        unique_ptr<true, void>(auVar3._0_8_, auVar3._8_8_);
        local_48.unlock();
        auto puVar2 = get();
        *puVar2 = 14829735431805717965;
        puVar2[1] = 14829735431805717965;
        puVar2[2] = 14829735431805717965;
        puVar2[3] = 14829735431805717965;
        puVar2[4] = 14829735431805717965;
        puVar2[5] = 14829735431805717965;
        puVar2[6] = 14829735431805717965;
        puVar2[7] = 14829735431805717965;
        puVar2[8] = 14829735431805717965;
        puVar2[9] = 14829735431805717965;
        puVar2[10] = 14829735431805717965;
        puVar2[11] = 14829735431805717965;
        puVar2[12] = 14829735431805717965;
        puVar2[13] = 14829735431805717965;
        puVar2[14] = 14829735431805717965;
        puVar2[15] = 14829735431805717965;
        puVar2[16] = 14829735431805717965;
        puVar2[17] = 14829735431805717965;
        puVar2[18] = 14829735431805717965;
        puVar2[19] = 14829735431805717965;
        puVar2[20] = 14829735431805717965;
        puVar2[21] = 14829735431805717965;
        puVar2[22] = 14829735431805717965;
        puVar2[23] = 14829735431805717965;
        new ((AnimationParameters*)get())
            graphics::AnimationParameters(animation, animationLoopBehaviour, arg3, arg4, arg5, arg6, arg7, arg8);
        return this;
    }

    // 0x1006593d0
    std::unique_ptr<graphics::AnimationParameters,
                    MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>
    MakeUniquePool<graphics::AnimationParameters, 512>::MakeUnique<
        shared_ptr<graphics::Animation> const&, graphics::AnimationLoopBehaviour, int&, int&, bool&, int&, unsigned int,
        bool>(const shared_ptr<graphics::Animation>& animation,
              graphics::AnimationLoopBehaviour&& animationLoopBehaviour, int& arg3, int& arg4, bool& arg5, int& arg6,
              unsigned int&& arg7, bool&& arg8) {
        uint8_t auVar3[16];

        unique_lock<std::mutex> local_48(*PTR_m_mutex_100ee6010);
        long lVar1 =
            ((VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
                 GetPool())
                ->size();
        if (*(unsigned long*)PTR_m_peak_100ee6008 < lVar1 + 1U) {
            *(unsigned long*)PTR_m_peak_100ee6008 = lVar1 + 1U;
        }
        auVar3 = ((VectorFastPool<graphics::AnimationParameters>*)GetPool())->allocate();
        unique_ptr<true, void>(auVar3._0_8_, auVar3._8_8_);
        local_48.unlock();
        auto puVar2 = get();
        *puVar2 = 14829735431805717965;
        puVar2[1] = 14829735431805717965;
        puVar2[2] = 14829735431805717965;
        puVar2[3] = 14829735431805717965;
        puVar2[4] = 14829735431805717965;
        puVar2[5] = 14829735431805717965;
        puVar2[6] = 14829735431805717965;
        puVar2[7] = 14829735431805717965;
        puVar2[8] = 14829735431805717965;
        puVar2[9] = 14829735431805717965;
        puVar2[10] = 14829735431805717965;
        puVar2[11] = 14829735431805717965;
        puVar2[12] = 14829735431805717965;
        puVar2[13] = 14829735431805717965;
        puVar2[14] = 14829735431805717965;
        puVar2[15] = 14829735431805717965;
        puVar2[16] = 14829735431805717965;
        puVar2[17] = 14829735431805717965;
        puVar2[18] = 14829735431805717965;
        puVar2[19] = 14829735431805717965;
        puVar2[20] = 14829735431805717965;
        puVar2[21] = 14829735431805717965;
        puVar2[22] = 14829735431805717965;
        puVar2[23] = 14829735431805717965;
        new ((AnimationParameters*)get())
            graphics::AnimationParameters(animation, animationLoopBehaviour, arg3, arg4, arg5, arg6, arg7, arg8);
        return this;
    }

    // 0x1006727f0
    void MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter::operator()(
        graphics::AnimationParameters* animationParameters) const {
        unique_lock<std::mutex> local_20;

        if (animationParameters != nullptr) {
            animationParameters->~AnimationParameters();
            animationParameters->m_lastUpdateTimeNS = -2459565876494606883;
            *(uint64_t*)&animationParameters->m_paused = 15987178197214944733;
            *(uint64_t*)&animationParameters->field_160 = 15987178197214944733;
            animationParameters->m_startTimeNS = 15987178197214944733;
            animationParameters->field_144 = 3722304989;
            animationParameters->field_148 = 3722304989;
            animationParameters->m_currentIndex = 3722304989;
            animationParameters->field_156 = 3722304989;
            animationParameters->field_128 = 3722304989;
            animationParameters->m_finished = 221;
            *(uint32_t*)&animationParameters->field_133 = 14540253;
            animationParameters->m_delay = 3722304989;
            animationParameters->m_animationLength = 3722304989;
            animationParameters->m_loopBehaviour = 3722304989;
            animationParameters->m_loopLength = 3722304989;
            animationParameters->m_tweenLastFrameToFirst = true;
            *(uint32_t*)&animationParameters->field_121 = 14540253;
            animationParameters->m_loopsCompleted = 3722304989;
            *(uint64_t*)&animationParameters->field_96 = 15987178197214944733;
            *(uint64_t*)&animationParameters->field_104 = 15987178197214944733;
            animationParameters->field_80 = 15987178197214944733;
            animationParameters->field_88 = 15987178197214944733;
            *(uint64_t*)&animationParameters->field_64 = 15987178197214944733;
            *(uint64_t*)&animationParameters->field_72 = 15987178197214944733;
            *(uint64_t*)&animationParameters->field_48 = 15987178197214944733;
            *(uint64_t*)&animationParameters->field_56 = 15987178197214944733;
            *(uint64_t*)&animationParameters->field_32 = 15987178197214944733;
            *(uint64_t*)&animationParameters->field_40 = 15987178197214944733;
            *(uint64_t*)&animationParameters->field_16 = 15987178197214944733;
            *(uint64_t*)&animationParameters->field_24 = 15987178197214944733;
            animationParameters->field_0 = (uint8_t*)15987178197214944733;
            *(uint64_t*)&animationParameters->field_8 = 15987178197214944733;
            local_20 = std::unique_lock<std::mutex>(*PTR_m_mutex_100ee6010);
            ((VectorFastPool<graphics::AnimationParameters>*)
                 MakeUniquePool<graphics::AnimationParameters, 512>::GetPool())
                ->deallocate(animationParameters);
        }
    }

    // 0x1006728c0
    void MakeUniquePool<graphics::AnimationParameters, 512>::GetPool() {
        unsigned long* puVar2;
        unsigned long local_20[2];

        if (*PTR_pool_100ee5070 == '\0') {
            if (___cxa_guard_acquire(PTR_pool_100ee5070) != 0) {
                local_20[0] = 16;
                local_20[1] = 16;
                puVar2 = std::max<unsigned long>(*local_20, *(local_20 + 1));
                new (PTR_pool_100ee9c68) VectorFastPool<graphics::AnimationParameters>(512, *puVar2);
                ___cxa_atexit(PTR__VectorFastPool_100ee63a8, PTR_pool_100ee9c68, 4294967296);
                ___cxa_guard_release(PTR_pool_100ee5070);
            }
        }
        return PTR_pool_100ee9c68;
    }

    // 0x10080d2b0
    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::MakeUniquePool() {
        uint8_t uVar1;

        if (*PTR_registered_100ee5088 == '\0') {
            if (___cxa_guard_acquire(PTR_registered_100ee5088) != 0) {
                uVar1 = RegisterThisUniquePool();
                *PTR_registered_100ee9c80 = uVar1;
                ___cxa_guard_release(PTR_registered_100ee5088);
            }
        }
    }

    // 0x100817100
    std::unique_ptr<graphics::GeometryBatchInstance,
                    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::MakeUnique<graphics::GeometryBatchInstance&,
                                                                      graphics::Model&, bool>(
        graphics::GeometryBatchInstance& geometryBatchInstance, graphics::Model& model, bool&& arg3) {
        uint64_t in_RCX;
        uint8_t auVar3[16];

        unique_lock<std::mutex> local_38(*PTR_m_mutex_100ee6020);
        long lVar1 =
            ((VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
                 GetPool())
                ->size();
        if (*(unsigned long*)PTR_m_peak_100ee6018 < lVar1 + 1U) {
            *(unsigned long*)PTR_m_peak_100ee6018 = lVar1 + 1U;
        }
        auVar3 = ((VectorFastPool<graphics::GeometryBatchInstance>*)GetPool())->allocate();
        geometryBatchInstance.unique_ptr<true, void>(auVar3._0_8_, auVar3._8_8_);
        local_38.unlock();
        _memset((void*)geometryBatchInstance.get(), 205, 896);
        new ((GeometryBatchInstance*)geometryBatchInstance.get())
            graphics::GeometryBatchInstance(model, arg3, *(bool*)in_RCX);
        return geometryBatchInstance;
    }

    // 0x1008172a0
    std::unique_ptr<graphics::BillboardBatchInstance,
                    MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>
    MakeUniquePool<graphics::BillboardBatchInstance, 64>::MakeUnique<graphics::BillboardBatchInstance&,
                                                                     graphics::Model&, bool>(
        graphics::BillboardBatchInstance& billboardBatchInstance, graphics::Model& model, bool&& arg3) {
        uint64_t in_RCX;
        uint8_t auVar3[16];

        unique_lock<std::mutex> local_38(*PTR_m_mutex_100ee6030);
        long lVar1 =
            ((VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
                 GetPool())
                ->size();
        if (*(unsigned long*)PTR_m_peak_100ee6028 < lVar1 + 1U) {
            *(unsigned long*)PTR_m_peak_100ee6028 = lVar1 + 1U;
        }
        auVar3 = ((VectorFastPool<graphics::BillboardBatchInstance>*)GetPool())->allocate();
        billboardBatchInstance.unique_ptr<true, void>(auVar3._0_8_, auVar3._8_8_);
        local_38.unlock();
        _memset((void*)billboardBatchInstance.get(), 205, 768);
        new ((BillboardBatchInstance*)billboardBatchInstance.get())
            graphics::BillboardBatchInstance(model, arg3, *(bool*)in_RCX);
        return billboardBatchInstance;
    }

    // 0x100818ec0
    std::unique_ptr<graphics::GeometryBatchInstance,
                    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::MakeUnique<
        graphics::GeometryBatchInstance, graphics::Model&>(graphics::GeometryBatchInstance&& geometryBatchInstance,
                                                           graphics::Model& model) {
        Model* in_RDX;
        uint8_t auVar3[16];

        unique_lock<std::mutex> local_30(*PTR_m_mutex_100ee6020);
        long lVar1 =
            ((VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
                 GetPool())
                ->size();
        if (*(unsigned long*)PTR_m_peak_100ee6018 < lVar1 + 1U) {
            *(unsigned long*)PTR_m_peak_100ee6018 = lVar1 + 1U;
        }
        auVar3 = ((VectorFastPool<graphics::GeometryBatchInstance>*)GetPool())->allocate();
        geometryBatchInstance.unique_ptr<true, void>(auVar3._0_8_, auVar3._8_8_);
        local_30.unlock();
        _memset((void*)geometryBatchInstance.get(), 205, 896);
        new ((GeometryBatchInstance*)geometryBatchInstance.get()) graphics::GeometryBatchInstance(model, in_RDX);
        return geometryBatchInstance;
    }

    // 0x100818f90
    std::unique_ptr<graphics::BillboardBatchInstance,
                    MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>
    MakeUniquePool<graphics::BillboardBatchInstance, 64>::MakeUnique<
        graphics::BillboardBatchInstance, graphics::Model&>(graphics::BillboardBatchInstance&& billboardBatchInstance,
                                                            graphics::Model& model) {
        Model* in_RDX;
        uint8_t auVar3[16];

        unique_lock<std::mutex> local_30(*PTR_m_mutex_100ee6030);
        long lVar1 =
            ((VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
                 GetPool())
                ->size();
        if (*(unsigned long*)PTR_m_peak_100ee6028 < lVar1 + 1U) {
            *(unsigned long*)PTR_m_peak_100ee6028 = lVar1 + 1U;
        }
        auVar3 = ((VectorFastPool<graphics::BillboardBatchInstance>*)GetPool())->allocate();
        billboardBatchInstance.unique_ptr<true, void>(auVar3._0_8_, auVar3._8_8_);
        local_30.unlock();
        _memset((void*)billboardBatchInstance.get(), 205, 768);
        new ((BillboardBatchInstance*)billboardBatchInstance.get()) graphics::BillboardBatchInstance(model, in_RDX);
        return billboardBatchInstance;
    }

    // 0x10081b480
    std::unique_ptr<graphics::GeometryBatchInstance,
                    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::MakeUnique<graphics::Model&, unsigned short&>(
        graphics::Model& model, unsigned short& arg2) {
        unsigned short* in_RDX;
        uint8_t auVar3[16];

        unique_lock<std::mutex> local_30(*PTR_m_mutex_100ee6020);
        long lVar1 =
            ((VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
                 GetPool())
                ->size();
        if (*(unsigned long*)PTR_m_peak_100ee6018 < lVar1 + 1U) {
            *(unsigned long*)PTR_m_peak_100ee6018 = lVar1 + 1U;
        }
        auVar3 = ((VectorFastPool<graphics::GeometryBatchInstance>*)GetPool())->allocate();
        model.unique_ptr<true, void>(auVar3._0_8_, auVar3._8_8_);
        local_30.unlock();
        _memset((void*)model.get(), 205, 896);
        new ((GeometryBatchInstance*)model.get()) graphics::GeometryBatchInstance(arg2, *in_RDX);
        return model;
    }

    // 0x10081b550
    std::unique_ptr<graphics::BillboardBatchInstance,
                    MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>
    MakeUniquePool<graphics::BillboardBatchInstance, 64>::MakeUnique<graphics::Model&, unsigned char&>(
        graphics::Model& model, unsigned char& arg2) {
        uint8_t* in_RDX;
        uint8_t auVar3[16];

        unique_lock<std::mutex> local_30(*PTR_m_mutex_100ee6030);
        long lVar1 =
            ((VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
                 GetPool())
                ->size();
        if (*(unsigned long*)PTR_m_peak_100ee6028 < lVar1 + 1U) {
            *(unsigned long*)PTR_m_peak_100ee6028 = lVar1 + 1U;
        }
        auVar3 = ((VectorFastPool<graphics::BillboardBatchInstance>*)GetPool())->allocate();
        model.unique_ptr<true, void>(auVar3._0_8_, auVar3._8_8_);
        local_30.unlock();
        _memset((void*)model.get(), 205, 768);
        new ((BillboardBatchInstance*)model.get()) graphics::BillboardBatchInstance(arg2, (unsigned short)*in_RDX);
        return model;
    }

    // 0x100821b90
    MakeUniquePool<graphics::Billboard, 32>::MakeUniquePool() {
        uint8_t uVar1;

        if (*PTR_registered_100ee50b8 == '\0') {
            if (___cxa_guard_acquire(PTR_registered_100ee50b8) != 0) {
                uVar1 = RegisterThisUniquePool();
                *PTR_registered_100ee9cb0 = uVar1;
                ___cxa_guard_release(PTR_registered_100ee50b8);
            }
        }
    }

    // 0x100836b30
    void MakeUniquePool<graphics::GeometryBatchInstance, 3072>::RegisterThisUniquePool() {
        _lambda_jag__shareduniquedebug__SharedPoolInfo___1_* arg1;
        Logger* logger;
        function<void(shareduniquedebug::SharedPoolInfo&)> local_2f8[176];
        uint64_t local_20;

        fixed_string<char, 512> local_248(
            "static bool MakeUniquePool<graphics::GeometryBatchInstance, 3072>::RegisterThisUniquePool() [T = "
            "graphics::GeometryBatchInstance, CAPACITY = 3072]");
        char* pcVar3 = "T = jag::";
        long lVar1 = local_248.find("T = jag::", 0);
        if (lVar1 != -1) {
            local_248.replace(0, lVar1 + 9, "UniquePool\t");
            pcVar3 = ", CAPACITY = ";
            arg1 = (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)local_248.find(", CAPACITY = ", 0);
            if (arg1 != (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)18446744073709551615) {
                local_248.replace((unsigned long)arg1, 13, "[");
                pcVar3 = (char*)arg1;
            }
        }
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::function<
            MakeUniquePool<graphics::GeometryBatchInstance, 3072>::RegisterThisUniquePool()::_lambda(
                shareduniquedebug::SharedPoolInfo&) _1_,
            void>(local_2f8, (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)pcVar3);
        shareduniquedebug::RegisterUniquePool(
            "static bool MakeUniquePool<graphics::GeometryBatchInstance, 3072>::RegisterThisUniquePool() [T = "
            "graphics::GeometryBatchInstance, CAPACITY = 3072]",
            *local_2f8);
        new (local_2f8) eastl::fixed_string<char, 128>();
        logger = logger::default_logger();
        uint64_t uVar2 = local_248.begin();
        pcVar3 = DataSizeStringMB<eastl::fixed_string<char, 128>>((fixed_string<char, _128>*)local_2f8, 2752512);
        logger->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/MakeUniquePool.h",
                    133, "%s\t%s", uVar2, pcVar3);
    }

    // 0x100837470
    void MakeUniquePool<graphics::GeometryBatchInstance, 3072>::RegisterThisUniquePool()::{
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(shareduniquedebug::SharedPoolInfo & arg1) const {
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(_lambda_jag__shareduniquedebug__SharedPoolInfo___1_* this, SharedPoolInfo * sharedPoolInfo) {
        GetUniquePoolInfo(sharedPoolInfo);
        return;
    }

    // 0x100837480
    void MakeUniquePool<graphics::GeometryBatchInstance, 3072>::GetUniquePoolInfo(
        shareduniquedebug::SharedPoolInfo& sharedPoolInfo) {
        unique_lock<std::mutex> local_20(*PTR_m_mutex_100ee6020);
        *(uint64_t*)(sharedPoolInfo + 48) = 0;
        *(uint64_t*)(sharedPoolInfo + 56) = 0;
        *(uint64_t*)(sharedPoolInfo + 32) = 0;
        *(uint64_t*)(sharedPoolInfo + 40) = 0;
        *(uint64_t*)(sharedPoolInfo + 16) = 0;
        *(uint64_t*)(sharedPoolInfo + 24) = 0;
        *(uint64_t*)sharedPoolInfo = 0;
        *(uint64_t*)(sharedPoolInfo + 8) = 0;
        *(uint64_t*)(sharedPoolInfo + 64) = 0;
        auto pVVar1 = GetPool();
        uint64_t uVar2 = pVVar1->size();
        *(uint64_t*)sharedPoolInfo = uVar2;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        long lVar3 = pVVar1->capacity();
        *(long*)(sharedPoolInfo + 8) = lVar3;
        *(uint64_t*)(sharedPoolInfo + 16) = *(uint64_t*)PTR_m_peak_100ee6018;
        *(uint64_t*)(sharedPoolInfo + 32) = 3072;
        if (lVar3 != 0) {
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 =
                FastPool<graphics::GeometryBatchInstance, unsigned long>::GetTotalSize(*(unsigned long*)sharedPoolInfo);
            *(uint64_t*)(sharedPoolInfo + 40) = uVar2;
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 = FastPool<graphics::GeometryBatchInstance, unsigned long>::GetTotalSize(
                *(unsigned long*)(sharedPoolInfo + 8));
            *(uint64_t*)(sharedPoolInfo + 48) = uVar2;
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 = FastPool<graphics::GeometryBatchInstance, unsigned long>::GetTotalSize(
                *(unsigned long*)(sharedPoolInfo + 32));
            *(uint64_t*)(sharedPoolInfo + 56) = uVar2;
        }
        *(char**)(sharedPoolInfo + 64) = "static void MakeUniquePool<graphics::GeometryBatchInstance, "
                                         "3072>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo &) [T = "
                                         "graphics::GeometryBatchInstance, CAPACITY = 3072]";
    }

    // 0x1008430a0
    void MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter::operator()(
        graphics::BillboardBatchInstance* billboardBatchInstance) const {
        unique_lock<std::mutex> local_20;

        if (billboardBatchInstance != nullptr) {
            std::destroy_at(billboardBatchInstance);
            _memset(billboardBatchInstance, 221, 768);
            local_20 = std::unique_lock<std::mutex>(*PTR_m_mutex_100ee6030);
            ((VectorFastPool<graphics::BillboardBatchInstance>*)
                 MakeUniquePool<graphics::BillboardBatchInstance, 64>::GetPool())
                ->deallocate(billboardBatchInstance);
        }
    }

    // 0x10084a610
    void MakeUniquePool<graphics::Billboard, 32>::RegisterThisUniquePool() {
        _lambda_jag__shareduniquedebug__SharedPoolInfo___1_* arg1;
        Logger* logger;
        function<void(shareduniquedebug::SharedPoolInfo&)> local_2f8[176];
        uint64_t local_20;

        fixed_string<char, 512> local_248("static bool MakeUniquePool<graphics::Billboard, "
                                          "32>::RegisterThisUniquePool() [T = graphics::Billboard, CAPACITY = 32]");
        char* pcVar3 = "T = jag::";
        long lVar1 = local_248.find("T = jag::", 0);
        if (lVar1 != -1) {
            local_248.replace(0, lVar1 + 9, "UniquePool\t");
            pcVar3 = ", CAPACITY = ";
            arg1 = (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)local_248.find(", CAPACITY = ", 0);
            if (arg1 != (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)18446744073709551615) {
                local_248.replace((unsigned long)arg1, 13, "[");
                pcVar3 = (char*)arg1;
            }
        }
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::function<
            MakeUniquePool<graphics::Billboard, 32>::RegisterThisUniquePool()::_lambda(
                shareduniquedebug::SharedPoolInfo&) _1_,
            void>(local_2f8, (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)pcVar3);
        shareduniquedebug::RegisterUniquePool("static bool MakeUniquePool<graphics::Billboard, "
                                              "32>::RegisterThisUniquePool() [T = graphics::Billboard, CAPACITY = 32]",
                                              *local_2f8);
        new (local_2f8) eastl::fixed_string<char, 128>();
        logger = logger::default_logger();
        uint64_t uVar2 = local_248.begin();
        pcVar3 = DataSizeStringMB<eastl::fixed_string<char, 128>>((fixed_string<char, _128>*)local_2f8, 2176);
        logger->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/MakeUniquePool.h",
                    133, "%s\t%s", uVar2, pcVar3);
    }

    // 0x10084af50
    void MakeUniquePool<graphics::Billboard, 32>::RegisterThisUniquePool()::{
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(shareduniquedebug::SharedPoolInfo & arg1) const {
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(_lambda_jag__shareduniquedebug__SharedPoolInfo___1_* this, SharedPoolInfo * sharedPoolInfo) {
        GetUniquePoolInfo(sharedPoolInfo);
        return;
    }

    // 0x10084af60
    void MakeUniquePool<graphics::Billboard, 32>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo& sharedPoolInfo) {
        unique_lock<std::mutex> local_20(*PTR_m_mutex_100ee6050);
        *(uint64_t*)(sharedPoolInfo + 48) = 0;
        *(uint64_t*)(sharedPoolInfo + 56) = 0;
        *(uint64_t*)(sharedPoolInfo + 32) = 0;
        *(uint64_t*)(sharedPoolInfo + 40) = 0;
        *(uint64_t*)(sharedPoolInfo + 16) = 0;
        *(uint64_t*)(sharedPoolInfo + 24) = 0;
        *(uint64_t*)sharedPoolInfo = 0;
        *(uint64_t*)(sharedPoolInfo + 8) = 0;
        *(uint64_t*)(sharedPoolInfo + 64) = 0;
        auto pVVar1 = GetPool();
        uint64_t uVar2 = pVVar1->size();
        *(uint64_t*)sharedPoolInfo = uVar2;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        long lVar3 = pVVar1->capacity();
        *(long*)(sharedPoolInfo + 8) = lVar3;
        *(uint64_t*)(sharedPoolInfo + 16) = *(uint64_t*)PTR_m_peak_100ee6048;
        *(uint64_t*)(sharedPoolInfo + 32) = 32;
        if (lVar3 != 0) {
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 = FastPool<graphics::Billboard, unsigned long>::GetTotalSize(*(unsigned long*)sharedPoolInfo);
            *(uint64_t*)(sharedPoolInfo + 40) = uVar2;
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 = FastPool<graphics::Billboard, unsigned long>::GetTotalSize(*(unsigned long*)(sharedPoolInfo + 8));
            *(uint64_t*)(sharedPoolInfo + 48) = uVar2;
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 = FastPool<graphics::Billboard, unsigned long>::GetTotalSize(*(unsigned long*)(sharedPoolInfo + 32));
            *(uint64_t*)(sharedPoolInfo + 56) = uVar2;
        }
        *(char**)(sharedPoolInfo + 64) =
            "static void MakeUniquePool<graphics::Billboard, 32>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo "
            "&) [T = graphics::Billboard, CAPACITY = 32]";
    }

    // 0x10084b050
    void MakeUniquePool<graphics::Billboard, 32>::GetPool() {
        unsigned long* puVar2;
        unsigned long local_20[2];

        if (*PTR_pool_100ee50b0 == '\0') {
            if (___cxa_guard_acquire(PTR_pool_100ee50b0) != 0) {
                local_20[0] = 16;
                local_20[1] = 4;
                puVar2 = std::max<unsigned long>(*local_20, *(local_20 + 1));
                new (PTR_pool_100ee9ca8) VectorFastPool<graphics::Billboard>(32, *puVar2);
                ___cxa_atexit(PTR__VectorFastPool_100ee63c8, PTR_pool_100ee9ca8, 4294967296);
                ___cxa_guard_release(PTR_pool_100ee50b0);
            }
        }
        return PTR_pool_100ee9ca8;
    }

    // 0x100866180
    MakeUniquePool<graphics::BillboardBatchInstance, 64>::MakeUniquePool() {
        uint8_t uVar1;

        if (*PTR_registered_100ee5098 == '\0') {
            if (___cxa_guard_acquire(PTR_registered_100ee5098) != 0) {
                uVar1 = RegisterThisUniquePool();
                *PTR_registered_100ee9c90 = uVar1;
                ___cxa_guard_release(PTR_registered_100ee5098);
            }
        }
    }

    // 0x1008850b0
    void MakeUniquePool<graphics::BillboardBatchInstance, 64>::RegisterThisUniquePool() {
        _lambda_jag__shareduniquedebug__SharedPoolInfo___1_* arg1;
        Logger* logger;
        function<void(shareduniquedebug::SharedPoolInfo&)> local_2f8[176];
        uint64_t local_20;

        fixed_string<char, 512> local_248(
            "static bool MakeUniquePool<graphics::BillboardBatchInstance, 64>::RegisterThisUniquePool() [T = "
            "graphics::BillboardBatchInstance, CAPACITY = 64]");
        char* pcVar3 = "T = jag::";
        long lVar1 = local_248.find("T = jag::", 0);
        if (lVar1 != -1) {
            local_248.replace(0, lVar1 + 9, "UniquePool\t");
            pcVar3 = ", CAPACITY = ";
            arg1 = (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)local_248.find(", CAPACITY = ", 0);
            if (arg1 != (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)18446744073709551615) {
                local_248.replace((unsigned long)arg1, 13, "[");
                pcVar3 = (char*)arg1;
            }
        }
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::function<
            MakeUniquePool<graphics::BillboardBatchInstance, 64>::RegisterThisUniquePool()::_lambda(
                shareduniquedebug::SharedPoolInfo&) _1_,
            void>(local_2f8, (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)pcVar3);
        shareduniquedebug::RegisterUniquePool(
            "static bool MakeUniquePool<graphics::BillboardBatchInstance, 64>::RegisterThisUniquePool() [T = "
            "graphics::BillboardBatchInstance, CAPACITY = 64]",
            *local_2f8);
        new (local_2f8) eastl::fixed_string<char, 128>();
        logger = logger::default_logger();
        uint64_t uVar2 = local_248.begin();
        pcVar3 = DataSizeStringMB<eastl::fixed_string<char, 128>>((fixed_string<char, _128>*)local_2f8, 49152);
        logger->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/MakeUniquePool.h",
                    133, "%s\t%s", uVar2, pcVar3);
    }

    // 0x1008859f0
    void MakeUniquePool<graphics::BillboardBatchInstance, 64>::RegisterThisUniquePool()::{
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(shareduniquedebug::SharedPoolInfo & arg1) const {
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(_lambda_jag__shareduniquedebug__SharedPoolInfo___1_* this, SharedPoolInfo * sharedPoolInfo) {
        GetUniquePoolInfo(sharedPoolInfo);
        return;
    }

    // 0x100885a00
    void MakeUniquePool<graphics::BillboardBatchInstance, 64>::GetUniquePoolInfo(
        shareduniquedebug::SharedPoolInfo& sharedPoolInfo) {
        unique_lock<std::mutex> local_20(*PTR_m_mutex_100ee6030);
        *(uint64_t*)(sharedPoolInfo + 48) = 0;
        *(uint64_t*)(sharedPoolInfo + 56) = 0;
        *(uint64_t*)(sharedPoolInfo + 32) = 0;
        *(uint64_t*)(sharedPoolInfo + 40) = 0;
        *(uint64_t*)(sharedPoolInfo + 16) = 0;
        *(uint64_t*)(sharedPoolInfo + 24) = 0;
        *(uint64_t*)sharedPoolInfo = 0;
        *(uint64_t*)(sharedPoolInfo + 8) = 0;
        *(uint64_t*)(sharedPoolInfo + 64) = 0;
        auto pVVar1 = GetPool();
        uint64_t uVar2 = pVVar1->size();
        *(uint64_t*)sharedPoolInfo = uVar2;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        long lVar3 = pVVar1->capacity();
        *(long*)(sharedPoolInfo + 8) = lVar3;
        *(uint64_t*)(sharedPoolInfo + 16) = *(uint64_t*)PTR_m_peak_100ee6028;
        *(uint64_t*)(sharedPoolInfo + 32) = 64;
        if (lVar3 != 0) {
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 = FastPool<graphics::BillboardBatchInstance, unsigned long>::GetTotalSize(
                *(unsigned long*)sharedPoolInfo);
            *(uint64_t*)(sharedPoolInfo + 40) = uVar2;
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 = FastPool<graphics::BillboardBatchInstance, unsigned long>::GetTotalSize(
                *(unsigned long*)(sharedPoolInfo + 8));
            *(uint64_t*)(sharedPoolInfo + 48) = uVar2;
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 = FastPool<graphics::BillboardBatchInstance, unsigned long>::GetTotalSize(
                *(unsigned long*)(sharedPoolInfo + 32));
            *(uint64_t*)(sharedPoolInfo + 56) = uVar2;
        }
        *(char**)(sharedPoolInfo + 64) = "static void MakeUniquePool<graphics::BillboardBatchInstance, "
                                         "64>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo &) [T = "
                                         "graphics::BillboardBatchInstance, CAPACITY = 64]";
    }

    // 0x100885af0
    void MakeUniquePool<graphics::BillboardBatchInstance, 64>::GetPool() {
        unsigned long* puVar2;
        unsigned long local_20[2];

        if (*PTR_pool_100ee5090 == '\0') {
            if (___cxa_guard_acquire(PTR_pool_100ee5090) != 0) {
                local_20[0] = 16;
                local_20[1] = 16;
                puVar2 = std::max<unsigned long>(*local_20, *(local_20 + 1));
                new (PTR_pool_100ee9c88) VectorFastPool<graphics::BillboardBatchInstance>(64, *puVar2);
                ___cxa_atexit(PTR__VectorFastPool_100ee63b8, PTR_pool_100ee9c88, 4294967296);
                ___cxa_guard_release(PTR_pool_100ee5090);
            }
        }
        return PTR_pool_100ee9c88;
    }

    // 0x100956100
    std::unique_ptr<graphics::AnimState, MakeUniquePool<graphics::AnimState, 4096>::UniquePoolDeleter>
    MakeUniquePool<graphics::AnimState, 4096>::MakeUnique<std::unique_ptr<graphics::BlendTreeNode>,
                                                          graphics::AnimationStateResourceList>(
        std::unique_ptr<graphics::BlendTreeNode>&& blendTreeNode,
        graphics::AnimationStateResourceList&& animationStateResourceList) {
        AnimationStateResourceList* in_RDX;
        uint8_t auVar3[16];

        unique_lock<std::mutex> local_30(*PTR_m_mutex_100ee6040);
        long lVar1 =
            ((VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
                 GetPool())
                ->size();
        if (*(unsigned long*)PTR_m_peak_100ee6038 < lVar1 + 1U) {
            *(unsigned long*)PTR_m_peak_100ee6038 = lVar1 + 1U;
        }
        auVar3 = ((VectorFastPool<graphics::AnimState>*)GetPool())->allocate();
        blendTreeNode.unique_ptr<true, void>(auVar3._0_8_, auVar3._8_8_);
        local_30.unlock();
        auto puVar2 = blendTreeNode.get();
        *puVar2 = 14829735431805717965;
        puVar2[1] = 14829735431805717965;
        puVar2[2] = 14829735431805717965;
        puVar2[3] = 14829735431805717965;
        puVar2[4] = 14829735431805717965;
        puVar2[5] = 14829735431805717965;
        puVar2[6] = 14829735431805717965;
        puVar2[7] = 14829735431805717965;
        puVar2[8] = 14829735431805717965;
        puVar2[9] = 14829735431805717965;
        puVar2[10] = 14829735431805717965;
        puVar2[11] = 14829735431805717965;
        puVar2[12] = 14829735431805717965;
        puVar2[13] = 14829735431805717965;
        puVar2[14] = 14829735431805717965;
        puVar2[15] = 14829735431805717965;
        puVar2[16] = 14829735431805717965;
        puVar2[17] = 14829735431805717965;
        puVar2[18] = 14829735431805717965;
        puVar2[19] = 14829735431805717965;
        new ((AnimState*)blendTreeNode.get()) graphics::AnimState(animationStateResourceList, *in_RDX);
        return blendTreeNode;
    }

    // 0x100956260
    std::unique_ptr<graphics::AnimState, MakeUniquePool<graphics::AnimState, 4096>::UniquePoolDeleter>
    MakeUniquePool<graphics::AnimState, 4096>::MakeUnique<graphics::AnimationDescriptor&>(
        graphics::AnimationDescriptor& animationDescriptor) {
        AnimationDescriptor* in_RSI;
        uint8_t auVar3[16];

        unique_lock<std::mutex> local_28(*PTR_m_mutex_100ee6040);
        long lVar1 =
            ((VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
                 GetPool())
                ->size();
        if (*(unsigned long*)PTR_m_peak_100ee6038 < lVar1 + 1U) {
            *(unsigned long*)PTR_m_peak_100ee6038 = lVar1 + 1U;
        }
        auVar3 = ((VectorFastPool<graphics::AnimState>*)GetPool())->allocate();
        animationDescriptor.unique_ptr<true, void>(auVar3._0_8_, auVar3._8_8_);
        local_28.unlock();
        auto puVar2 = animationDescriptor.get();
        *puVar2 = 14829735431805717965;
        puVar2[1] = 14829735431805717965;
        puVar2[2] = 14829735431805717965;
        puVar2[3] = 14829735431805717965;
        puVar2[4] = 14829735431805717965;
        puVar2[5] = 14829735431805717965;
        puVar2[6] = 14829735431805717965;
        puVar2[7] = 14829735431805717965;
        puVar2[8] = 14829735431805717965;
        puVar2[9] = 14829735431805717965;
        puVar2[10] = 14829735431805717965;
        puVar2[11] = 14829735431805717965;
        puVar2[12] = 14829735431805717965;
        puVar2[13] = 14829735431805717965;
        puVar2[14] = 14829735431805717965;
        puVar2[15] = 14829735431805717965;
        puVar2[16] = 14829735431805717965;
        puVar2[17] = 14829735431805717965;
        puVar2[18] = 14829735431805717965;
        puVar2[19] = 14829735431805717965;
        new ((AnimState*)animationDescriptor.get()) graphics::AnimState(*in_RSI);
        return animationDescriptor;
    }

    // 0x100956350
    std::unique_ptr<graphics::AnimState, MakeUniquePool<graphics::AnimState, 4096>::UniquePoolDeleter>
    MakeUniquePool<graphics::AnimState, 4096>::MakeUnique<>() {
        unique_ptr<graphics::AnimState, MakeUniquePool<graphics::AnimState, 4096>::UniquePoolDeleter>* in_RDI;
        uint8_t auVar3[16];

        unique_lock<std::mutex> local_28(*PTR_m_mutex_100ee6040);
        long lVar1 =
            ((VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
                 GetPool())
                ->size();
        if (*(unsigned long*)PTR_m_peak_100ee6038 < lVar1 + 1U) {
            *(unsigned long*)PTR_m_peak_100ee6038 = lVar1 + 1U;
        }
        auVar3 = ((VectorFastPool<graphics::AnimState>*)GetPool())->allocate();
        in_RDI->unique_ptr<true, void>(auVar3._0_8_, auVar3._8_8_);
        local_28.unlock();
        auto puVar2 = in_RDI->get();
        *puVar2 = 14829735431805717965;
        puVar2[1] = 14829735431805717965;
        puVar2[2] = 14829735431805717965;
        puVar2[3] = 14829735431805717965;
        puVar2[4] = 14829735431805717965;
        puVar2[5] = 14829735431805717965;
        puVar2[6] = 14829735431805717965;
        puVar2[7] = 14829735431805717965;
        puVar2[8] = 14829735431805717965;
        puVar2[9] = 14829735431805717965;
        puVar2[10] = 14829735431805717965;
        puVar2[11] = 14829735431805717965;
        puVar2[12] = 14829735431805717965;
        puVar2[13] = 14829735431805717965;
        puVar2[14] = 14829735431805717965;
        puVar2[15] = 14829735431805717965;
        puVar2[16] = 14829735431805717965;
        puVar2[17] = 14829735431805717965;
        puVar2[18] = 14829735431805717965;
        puVar2[19] = 14829735431805717965;
        new ((AnimState*)in_RDI->get()) graphics::AnimState();
    }

    // 0x100956780
    MakeUniquePool<graphics::AnimState, 4096>::MakeUniquePool() {
        uint8_t uVar1;

        if (*PTR_registered_100ee50a8 == '\0') {
            if (___cxa_guard_acquire(PTR_registered_100ee50a8) != 0) {
                uVar1 = RegisterThisUniquePool();
                *PTR_registered_100ee9ca0 = uVar1;
                ___cxa_guard_release(PTR_registered_100ee50a8);
            }
        }
    }

    // 0x100967ab0
    void
    MakeUniquePool<graphics::AnimState, 4096>::UniquePoolDeleter::operator()(graphics::AnimState* animState) const {
        unique_lock<std::mutex> local_20;

        if (animState != nullptr) {
            animState->~AnimState();
            *(uint64_t*)&animState[1].field_8 = 15987178197214944733;
            *(uint64_t*)animState[1].m_resources = 15987178197214944733;
            *(uint64_t*)&animState->field_128 = 15987178197214944733;
            *(uint64_t*)(animState + 1) = 15987178197214944733;
            *(uint64_t*)&animState->field_112 = 15987178197214944733;
            *(uint64_t*)&animState->field_120 = 15987178197214944733;
            *(uint64_t*)&animState->field_96 = 15987178197214944733;
            *(uint64_t*)&animState->field_104 = 15987178197214944733;
            *(uint64_t*)&animState->field_80 = 15987178197214944733;
            *(uint64_t*)&animState->field_88 = 15987178197214944733;
            *(uint64_t*)&animState->field_64 = 15987178197214944733;
            *(uint64_t*)&animState->field_72 = 15987178197214944733;
            *(uint64_t*)(animState->m_resources + 32) = 15987178197214944733;
            *(uint64_t*)&animState->field_56 = 15987178197214944733;
            *(uint64_t*)(animState->m_resources + 16) = 15987178197214944733;
            *(uint64_t*)(animState->m_resources + 24) = 15987178197214944733;
            *(uint64_t*)animState->m_resources = 15987178197214944733;
            *(uint64_t*)(animState->m_resources + 8) = 15987178197214944733;
            *(uint64_t*)animState = 15987178197214944733;
            *(uint64_t*)&animState->field_8 = 15987178197214944733;
            local_20 = std::unique_lock<std::mutex>(*PTR_m_mutex_100ee6040);
            ((VectorFastPool<graphics::AnimState>*)MakeUniquePool<graphics::AnimState, 4096>::GetPool())
                ->deallocate(animState);
        }
    }

    // 0x100967b70
    void MakeUniquePool<graphics::AnimState, 4096>::GetPool() {
        unsigned long* puVar2;
        unsigned long local_20[2];

        if (*PTR_pool_100ee50a0 == '\0') {
            if (___cxa_guard_acquire(PTR_pool_100ee50a0) != 0) {
                local_20[0] = 16;
                local_20[1] = 8;
                puVar2 = std::max<unsigned long>(*local_20, *(local_20 + 1));
                new (PTR_pool_100ee9c98) VectorFastPool<graphics::AnimState>(4096, *puVar2);
                ___cxa_atexit(PTR__VectorFastPool_100ee63c0, PTR_pool_100ee9c98, 4294967296);
                ___cxa_guard_release(PTR_pool_100ee50a0);
            }
        }
        return PTR_pool_100ee9c98;
    }

    // 0x100968530
    void MakeUniquePool<graphics::AnimState, 4096>::RegisterThisUniquePool() {
        _lambda_jag__shareduniquedebug__SharedPoolInfo___1_* arg1;
        Logger* logger;
        function<void(shareduniquedebug::SharedPoolInfo&)> local_2f8[176];
        uint64_t local_20;

        fixed_string<char, 512> local_248("static bool MakeUniquePool<graphics::AnimState, "
                                          "4096>::RegisterThisUniquePool() [T = graphics::AnimState, CAPACITY = 4096]");
        char* pcVar3 = "T = jag::";
        long lVar1 = local_248.find("T = jag::", 0);
        if (lVar1 != -1) {
            local_248.replace(0, lVar1 + 9, "UniquePool\t");
            pcVar3 = ", CAPACITY = ";
            arg1 = (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)local_248.find(", CAPACITY = ", 0);
            if (arg1 != (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)18446744073709551615) {
                local_248.replace((unsigned long)arg1, 13, "[");
                pcVar3 = (char*)arg1;
            }
        }
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::function<
            MakeUniquePool<graphics::AnimState, 4096>::RegisterThisUniquePool()::_lambda(
                shareduniquedebug::SharedPoolInfo&) _1_,
            void>(local_2f8, (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)pcVar3);
        shareduniquedebug::RegisterUniquePool(
            "static bool MakeUniquePool<graphics::AnimState, 4096>::RegisterThisUniquePool() [T = graphics::AnimState, "
            "CAPACITY = 4096]",
            *local_2f8);
        new (local_2f8) eastl::fixed_string<char, 128>();
        logger = logger::default_logger();
        uint64_t uVar2 = local_248.begin();
        pcVar3 = DataSizeStringMB<eastl::fixed_string<char, 128>>((fixed_string<char, _128>*)local_2f8, 655360);
        logger->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/MakeUniquePool.h",
                    133, "%s\t%s", uVar2, pcVar3);
    }

    // 0x100968eb0
    void MakeUniquePool<graphics::AnimState, 4096>::RegisterThisUniquePool()::{
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(shareduniquedebug::SharedPoolInfo & arg1) const {
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(_lambda_jag__shareduniquedebug__SharedPoolInfo___1_* this, SharedPoolInfo * sharedPoolInfo) {
        GetUniquePoolInfo(sharedPoolInfo);
        return;
    }

    // 0x100968ec0
    void
    MakeUniquePool<graphics::AnimState, 4096>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo& sharedPoolInfo) {
        unique_lock<std::mutex> local_20(*PTR_m_mutex_100ee6040);
        *(uint64_t*)(sharedPoolInfo + 48) = 0;
        *(uint64_t*)(sharedPoolInfo + 56) = 0;
        *(uint64_t*)(sharedPoolInfo + 32) = 0;
        *(uint64_t*)(sharedPoolInfo + 40) = 0;
        *(uint64_t*)(sharedPoolInfo + 16) = 0;
        *(uint64_t*)(sharedPoolInfo + 24) = 0;
        *(uint64_t*)sharedPoolInfo = 0;
        *(uint64_t*)(sharedPoolInfo + 8) = 0;
        *(uint64_t*)(sharedPoolInfo + 64) = 0;
        auto pVVar1 = GetPool();
        uint64_t uVar2 = pVVar1->size();
        *(uint64_t*)sharedPoolInfo = uVar2;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        long lVar3 = pVVar1->capacity();
        *(long*)(sharedPoolInfo + 8) = lVar3;
        *(uint64_t*)(sharedPoolInfo + 16) = *(uint64_t*)PTR_m_peak_100ee6038;
        *(uint64_t*)(sharedPoolInfo + 32) = 4096;
        if (lVar3 != 0) {
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 = FastPool<graphics::AnimState, unsigned long>::GetTotalSize(*(unsigned long*)sharedPoolInfo);
            *(uint64_t*)(sharedPoolInfo + 40) = uVar2;
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 = FastPool<graphics::AnimState, unsigned long>::GetTotalSize(*(unsigned long*)(sharedPoolInfo + 8));
            *(uint64_t*)(sharedPoolInfo + 48) = uVar2;
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 = FastPool<graphics::AnimState, unsigned long>::GetTotalSize(*(unsigned long*)(sharedPoolInfo + 32));
            *(uint64_t*)(sharedPoolInfo + 56) = uVar2;
        }
        *(char**)(sharedPoolInfo + 64) =
            "static void MakeUniquePool<graphics::AnimState, "
            "4096>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo &) [T = graphics::AnimState, CAPACITY = 4096]";
    }

    // 0x100989a50
    MakeUniquePool<graphics::AnimationParameters, 512>::MakeUniquePool() {
        uint8_t uVar1;

        if (*PTR_registered_100ee5078 == '\0') {
            if (___cxa_guard_acquire(PTR_registered_100ee5078) != 0) {
                uVar1 = RegisterThisUniquePool();
                *PTR_registered_100ee9c70 = uVar1;
                ___cxa_guard_release(PTR_registered_100ee5078);
            }
        }
    }

    // 0x1009a3cf0
    void MakeUniquePool<graphics::AnimationParameters, 512>::RegisterThisUniquePool() {
        _lambda_jag__shareduniquedebug__SharedPoolInfo___1_* arg1;
        Logger* logger;
        function<void(shareduniquedebug::SharedPoolInfo&)> local_2f8[176];
        uint64_t local_20;

        fixed_string<char, 512> local_248(
            "static bool MakeUniquePool<graphics::AnimationParameters, 512>::RegisterThisUniquePool() [T = "
            "graphics::AnimationParameters, CAPACITY = 512]");
        char* pcVar3 = "T = jag::";
        long lVar1 = local_248.find("T = jag::", 0);
        if (lVar1 != -1) {
            local_248.replace(0, lVar1 + 9, "UniquePool\t");
            pcVar3 = ", CAPACITY = ";
            arg1 = (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)local_248.find(", CAPACITY = ", 0);
            if (arg1 != (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)18446744073709551615) {
                local_248.replace((unsigned long)arg1, 13, "[");
                pcVar3 = (char*)arg1;
            }
        }
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::function<
            MakeUniquePool<graphics::AnimationParameters, 512>::RegisterThisUniquePool()::_lambda(
                shareduniquedebug::SharedPoolInfo&) _1_,
            void>(local_2f8, (_lambda_jag__shareduniquedebug__SharedPoolInfo___1_*)pcVar3);
        shareduniquedebug::RegisterUniquePool(
            "static bool MakeUniquePool<graphics::AnimationParameters, 512>::RegisterThisUniquePool() [T = "
            "graphics::AnimationParameters, CAPACITY = 512]",
            *local_2f8);
        new (local_2f8) eastl::fixed_string<char, 128>();
        logger = logger::default_logger();
        uint64_t uVar2 = local_248.begin();
        pcVar3 = DataSizeStringMB<eastl::fixed_string<char, 128>>((fixed_string<char, _128>*)local_2f8, 98304);
        logger->Log(false, 7,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/MakeUniquePool.h",
                    133, "%s\t%s", uVar2, pcVar3);
    }

    // 0x1009a4630
    void MakeUniquePool<graphics::AnimationParameters, 512>::RegisterThisUniquePool()::{
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(shareduniquedebug::SharedPoolInfo & arg1) const {
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(_lambda_jag__shareduniquedebug__SharedPoolInfo___1_* this, SharedPoolInfo * sharedPoolInfo) {
        GetUniquePoolInfo(sharedPoolInfo);
        return;
    }

    // 0x1009a4640
    void MakeUniquePool<graphics::AnimationParameters, 512>::GetUniquePoolInfo(
        shareduniquedebug::SharedPoolInfo& sharedPoolInfo) {
        unique_lock<std::mutex> local_20(*PTR_m_mutex_100ee6010);
        *(uint64_t*)(sharedPoolInfo + 48) = 0;
        *(uint64_t*)(sharedPoolInfo + 56) = 0;
        *(uint64_t*)(sharedPoolInfo + 32) = 0;
        *(uint64_t*)(sharedPoolInfo + 40) = 0;
        *(uint64_t*)(sharedPoolInfo + 16) = 0;
        *(uint64_t*)(sharedPoolInfo + 24) = 0;
        *(uint64_t*)sharedPoolInfo = 0;
        *(uint64_t*)(sharedPoolInfo + 8) = 0;
        *(uint64_t*)(sharedPoolInfo + 64) = 0;
        auto pVVar1 = GetPool();
        uint64_t uVar2 = pVVar1->size();
        *(uint64_t*)sharedPoolInfo = uVar2;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        long lVar3 = pVVar1->capacity();
        *(long*)(sharedPoolInfo + 8) = lVar3;
        *(uint64_t*)(sharedPoolInfo + 16) = *(uint64_t*)PTR_m_peak_100ee6008;
        *(uint64_t*)(sharedPoolInfo + 32) = 512;
        if (lVar3 != 0) {
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 =
                FastPool<graphics::AnimationParameters, unsigned long>::GetTotalSize(*(unsigned long*)sharedPoolInfo);
            *(uint64_t*)(sharedPoolInfo + 40) = uVar2;
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 = FastPool<graphics::AnimationParameters, unsigned long>::GetTotalSize(
                *(unsigned long*)(sharedPoolInfo + 8));
            *(uint64_t*)(sharedPoolInfo + 48) = uVar2;
            GetPool();
            ShuffledPacketFactory::p2_alt2();
            uVar2 = FastPool<graphics::AnimationParameters, unsigned long>::GetTotalSize(
                *(unsigned long*)(sharedPoolInfo + 32));
            *(uint64_t*)(sharedPoolInfo + 56) = uVar2;
        }
        *(char**)(sharedPoolInfo + 64) = "static void MakeUniquePool<graphics::AnimationParameters, "
                                         "512>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo &) [T = "
                                         "graphics::AnimationParameters, CAPACITY = 512]";
    }

} // namespace jag

namespace jag::math {
    // 0x100306520
    auto Vector3T<float>::NormalizeSafe() {
        auto result;

        float arg1 = (float)Length(&result);
        if (arg1 != 0.0) {
            operator/=(&result, arg1);
        }
        return result;
    }

} // namespace jag::math
