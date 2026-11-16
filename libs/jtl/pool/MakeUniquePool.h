// libs/jtl/pool/MakeUniquePool.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    template <
        typename...> // 9 instantiations, e.g. <SpotAnimation, 64>, <game::EnvironmentLoader, 48>, <game::MapElementType::Polygon, 256>
    class MakeUniquePool {
    public:
        class UniquePoolDeleter;
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
        MakeUnique<graphics::Model&, shared_ptr<graphics::GeometryBatch>&>(graphics::Model&,
                                                                           shared_ptr<graphics::GeometryBatch>&);
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
        MakeUnique<graphics::GeometryBatchInstance const&, graphics::Model&, bool>(
            graphics::GeometryBatchInstance const&, graphics::Model&, bool&&);
        GetPool();
        MakeUniquePool();
        void RegisterThisUniquePool();
        void GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo&);
        std::unique_ptr<game::EnvironmentLoader, MakeUniquePool<game::EnvironmentLoader, 48>::UniquePoolDeleter>
        MakeUnique<unsigned int&, unsigned int&, shared_ptr<game::ClientCompositeData>&>(
            unsigned int&, unsigned int&, shared_ptr<game::ClientCompositeData>&);
        std::unique_ptr<game::Terrain, MakeUniquePool<game::Terrain, 32>::UniquePoolDeleter>
        MakeUnique<graphics::GraphNode*&, shared_ptr<game::World> const&, game::TerrainInputData&, graphics::RT7Core*&>(
            graphics::GraphNode*&, shared_ptr<game::World> const&, game::TerrainInputData&, graphics::RT7Core*&);
        std::unique_ptr<game::MapElementType::Polygon,
                        MakeUniquePool<game::MapElementType::Polygon, 256>::UniquePoolDeleter>
        MakeUnique<>();
        std::unique_ptr<graphics::AnimationParameters,
                        MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>
        MakeUnique<shared_ptr<graphics::Animation> const&, graphics::AnimationLoopBehaviour&, unsigned int&,
                   unsigned int&, bool&, int, unsigned int, bool&>(shared_ptr<graphics::Animation> const&,
                                                                   graphics::AnimationLoopBehaviour&, unsigned int&,
                                                                   unsigned int&, bool&, int&&, unsigned int&&, bool&);
        std::unique_ptr<graphics::AnimationParameters,
                        MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>
        MakeUnique<shared_ptr<graphics::Animation> const&, graphics::AnimationLoopBehaviour, int&, int&, bool&, int&,
                   unsigned int, bool>(shared_ptr<graphics::Animation> const&, graphics::AnimationLoopBehaviour&&, int&,
                                       int&, bool&, int&, unsigned int&&, bool&&);
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
        MakeUnique<graphics::GeometryBatchInstance&, graphics::Model&, bool>(graphics::GeometryBatchInstance&,
                                                                             graphics::Model&, bool&&);
        std::unique_ptr<graphics::BillboardBatchInstance,
                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>
        MakeUnique<graphics::BillboardBatchInstance&, graphics::Model&, bool>(graphics::BillboardBatchInstance&,
                                                                              graphics::Model&, bool&&);
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
        MakeUnique<graphics::GeometryBatchInstance, graphics::Model&>(graphics::GeometryBatchInstance&&,
                                                                      graphics::Model&);
        std::unique_ptr<graphics::BillboardBatchInstance,
                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>
        MakeUnique<graphics::BillboardBatchInstance, graphics::Model&>(graphics::BillboardBatchInstance&&,
                                                                       graphics::Model&);
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
        MakeUnique<graphics::Model&, unsigned short&>(graphics::Model&, unsigned short&);
        std::unique_ptr<graphics::BillboardBatchInstance,
                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>
        MakeUnique<graphics::Model&, unsigned char&>(graphics::Model&, unsigned char&);
        std::unique_ptr<graphics::AnimState, MakeUniquePool<graphics::AnimState, 4096>::UniquePoolDeleter>
        MakeUnique<std::unique_ptr<graphics::BlendTreeNode, std::default_delete<graphics::BlendTreeNode>>,
                   graphics::AnimationStateResourceList>(
            std::unique_ptr<graphics::BlendTreeNode, std::default_delete<graphics::BlendTreeNode>>&&,
            graphics::AnimationStateResourceList&&);
        std::unique_ptr<graphics::AnimState, MakeUniquePool<graphics::AnimState, 4096>::UniquePoolDeleter>
        MakeUnique<graphics::AnimationDescriptor&>(graphics::AnimationDescriptor&);
        std::unique_ptr<graphics::AnimState, MakeUniquePool<graphics::AnimState, 4096>::UniquePoolDeleter>
        MakeUnique<>();
        static /* 64 bytes */ m_mutex; // initialised in its definition
        static /* 8 bytes */ m_peak;   // = 0
        static /* 64 bytes */ m_mutex; // initialised in its definition
        static /* 16 bytes */ m_peak;  // = { 0, 0, 0, 0 }
        static /* 16 bytes */ m_peak;  // = { 0, 0, 0, 0 }
        static /* 64 bytes */ m_mutex; // initialised in its definition
        static /* 64 bytes */ m_mutex; // initialised in its definition
        static /* 8 bytes */ m_peak;   // = 0
        static /* 64 bytes */ m_mutex; // initialised in its definition
        static /* 8 bytes */ m_peak;   // = 0
        static /* 8 bytes */ m_peak;   // = 0
        static /* 64 bytes */ m_mutex; // initialised in its definition
        static /* 64 bytes */ m_mutex; // initialised in its definition
        static /* 8 bytes */ m_peak;   // = 0
        static /* 64 bytes */ m_mutex; // initialised in its definition
        static /* 16 bytes */ m_peak;  // = { 0, 0, 0, 0 }
        static /* 64 bytes */ m_mutex; // initialised in its definition
        static /* 8 bytes */ m_peak;   // = 0
    };

    template <typename...> // 1 instantiations, e.g.
    class MakeUniquePool::UniquePoolDeleter {
    public:
        void operator()(graphics::GeometryBatchInstance*) const;
        void operator()(SpotAnimation*) const;
        void operator()(game::EnvironmentLoader*) const;
        void operator()(game::Terrain*) const;
        void operator()(game::MapElementType::Polygon*) const;
        void operator()(graphics::AnimationParameters*) const;
        void operator()(graphics::BillboardBatchInstance*) const;
        void operator()(graphics::AnimState*) const;
    };

    // 0x100f37c90, 64 bytes, __data
    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::m_mutex = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x100f37f20, 8 bytes, __data
    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::m_peak = 0;

    // 0x100f386b0, 64 bytes, __data
    MakeUniquePool<game::Terrain, 32>::m_mutex = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x100f387d0, 16 bytes, __data
    MakeUniquePool<SpotAnimation, 64>::m_peak = {0, 0, 0, 0};

    // 0x100f38820, 16 bytes, __data
    MakeUniquePool<game::Terrain, 32>::m_peak = {0, 0, 0, 0};

    // 0x100f38970, 64 bytes, __data
    MakeUniquePool<game::EnvironmentLoader, 48>::m_mutex = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x100f389e0, 64 bytes, __data
    MakeUniquePool<SpotAnimation, 64>::m_mutex = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x100f38b50, 8 bytes, __data
    MakeUniquePool<game::EnvironmentLoader, 48>::m_peak = 0;

    // 0x100f39070, 64 bytes, __data
    MakeUniquePool<game::MapElementType::Polygon, 256>::m_mutex = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x100f3c928, 8 bytes, __data
    MakeUniquePool<game::MapElementType::Polygon, 256>::m_peak = 0;

    // 0x100f3e570, 8 bytes, __data
    MakeUniquePool<graphics::AnimationParameters, 512>::m_peak = 0;

    // 0x100f3e610, 64 bytes, __data
    MakeUniquePool<graphics::AnimationParameters, 512>::m_mutex = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x100f43c78, 64 bytes, __data
    MakeUniquePool<graphics::Billboard, 32>::m_mutex = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x100f43dc8, 8 bytes, __data
    MakeUniquePool<graphics::Billboard, 32>::m_peak = 0;

    // 0x100f43ee0, 64 bytes, __data
    MakeUniquePool<graphics::BillboardBatchInstance, 64>::m_mutex = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x100f43fe0, 16 bytes, __data
    MakeUniquePool<graphics::BillboardBatchInstance, 64>::m_peak = {0, 0, 0, 0};

    // 0x100f44bb0, 64 bytes, __data
    MakeUniquePool<graphics::AnimState, 4096>::m_mutex = {
        850045863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    // 0x100f44c28, 8 bytes, __data
    MakeUniquePool<graphics::AnimState, 4096>::m_peak = 0;

    // 0x100306380, 208 bytes, inline, placed by class name and debug map
    // std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> MakeUniquePool<graphics::GeometryBatchInstance, 3072>::MakeUnique<graphics::Model&, shared_ptr<graphics::GeometryBatch>&>(graphics::Model&, shared_ptr<graphics::GeometryBatch>&)
    /* std::unique_ptr<graphics::GeometryBatchInstance,
   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
   MakeUniquePool<graphics::GeometryBatchInstance,
   3072>::MakeUnique<graphics::Model&,
   shared_ptr<graphics::GeometryBatch>&>(graphics::Model&,
   shared_ptr<graphics::GeometryBatch>&) */

    MakeUniquePool<graphics::GeometryBatchInstance, 3072>*
    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::MakeUnique<graphics::Model&,
                                                                      shared_ptr<graphics::GeometryBatch>&>(
        MakeUniquePool<graphics::GeometryBatchInstance, 3072>* this, Model* param_1, shared_ptr* param_2) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* this_00;
        long lVar1;
        VectorFastPool<graphics::GeometryBatchInstance>* this_01;
        undefined8 uVar2;
        void* pvVar3;
        GeometryBatchInstance* this_02;
        unique_lock<std::mutex> local_30[16];

        std::unique_lock<std::mutex>::unique_lock(local_30, (mutex*)PTR_m_mutex_100ee6020);
        this_00 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        lVar1 = this_00->size();
        if (*(ulong*)PTR_m_peak_100ee6018 < lVar1 + 1U) {
            *(ulong*)PTR_m_peak_100ee6018 = lVar1 + 1U;
        }
        this_01 = (VectorFastPool<graphics::GeometryBatchInstance>*)GetPool();
        uVar2 = this_01->allocate();
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::unique_ptr<true,
                                                                                                              void>(
            this, uVar2);
        std::unique_lock<std::mutex>::unlock(local_30);
        pvVar3 = (void*)get();
        _memset(pvVar3, 205, 896);
        this_02 = (GeometryBatchInstance*)get();
        graphics::GeometryBatchInstance::GeometryBatchInstance(this_02, param_1, param_2);
        std::unique_lock<std::mutex>::~unique_lock(local_30);
        return this;
    }

    // 0x100306460, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::dash3d::ModelRSevenUnlit>::type make_shared<oldscape::dash3d::ModelRSevenUnlit, shared_ptr<graphics::Model>, bool>(shared_ptr<graphics::Model>&&, bool&&)
    jag* make_shared<oldscape::dash3d::ModelRSevenUnlit, shared_ptr<graphics::Model>, bool>(shared_ptr* param_1,
                                                                                            bool* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        ModelRSevenUnlit* local_38[2];

        pvVar1 = (void*)aligned_alloc(136, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<oldscape::dash3d::ModelRSevenUnlit, shared_ptr<graphics::Model>, bool>(
                (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::dash3d::ModelRSevenUnlit>, int,
                                   oldscape::dash3d::ModelRSevenUnlit*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x10036dd10, 224 bytes, inline, placed by class name
    // std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> MakeUniquePool<graphics::GeometryBatchInstance, 3072>::MakeUnique<graphics::GeometryBatchInstance const&, graphics::Model&, bool>(graphics::GeometryBatchInstance const&, graphics::Model&, bool&&)
    /* std::unique_ptr<graphics::GeometryBatchInstance,
   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
   MakeUniquePool<graphics::GeometryBatchInstance,
   3072>::MakeUnique<graphics::GeometryBatchInstance const&, graphics::Model&,
   bool>(graphics::GeometryBatchInstance const&, graphics::Model&, bool&&) */

    MakeUniquePool<graphics::GeometryBatchInstance, 3072>*
    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::MakeUnique<graphics::GeometryBatchInstance_const&,
                                                                      graphics::Model&, bool>(
        MakeUniquePool<graphics::GeometryBatchInstance, 3072>* this, GeometryBatchInstance* param_1, Model* param_2,
        bool* param_3) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* this_00;
        long lVar1;
        VectorFastPool<graphics::GeometryBatchInstance>* this_01;
        undefined8 uVar2;
        void* pvVar3;
        GeometryBatchInstance* this_02;
        unique_lock<std::mutex> local_38[16];

        std::unique_lock<std::mutex>::unique_lock(local_38, (mutex*)PTR_m_mutex_100ee6020);
        this_00 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        lVar1 = this_00->size();
        if (*(ulong*)PTR_m_peak_100ee6018 < lVar1 + 1U) {
            *(ulong*)PTR_m_peak_100ee6018 = lVar1 + 1U;
        }
        this_01 = (VectorFastPool<graphics::GeometryBatchInstance>*)GetPool();
        uVar2 = this_01->allocate();
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::unique_ptr<true,
                                                                                                              void>(
            this, uVar2);
        std::unique_lock<std::mutex>::unlock(local_38);
        pvVar3 = (void*)get();
        _memset(pvVar3, 205, 896);
        this_02 = (GeometryBatchInstance*)get();
        graphics::GeometryBatchInstance::GeometryBatchInstance(this_02, param_1, param_2, *param_3);
        std::unique_lock<std::mutex>::~unique_lock(local_38);
        return this;
    }

    // 0x100388290, 112 bytes, inline, placed by class name
    // MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter::operator()(graphics::GeometryBatchInstance*) const
    /* MakeUniquePool<graphics::GeometryBatchInstance,
   3072>::UniquePoolDeleter::TEMPNAMEPLACEHOLDERVALUE(graphics::GeometryBatchInstance*) const
    */

    void MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter::operator()(
        GeometryBatchInstance* param_1) {
        VectorFastPool<graphics::GeometryBatchInstance>* this_00;
        unique_lock<std::mutex> local_20[16];

        if (param_1 != (GeometryBatchInstance*)0) {
            (*(code*)param_1->field_0[4])(param_1);
            _memset(param_1, 221, 896);
            std::unique_lock<std::mutex>::unique_lock(local_20, (mutex*)PTR_m_mutex_100ee6020);
            this_00 = (VectorFastPool<graphics::GeometryBatchInstance>*)
                MakeUniquePool<graphics::GeometryBatchInstance, 3072>::GetPool();
            this_00->deallocate(param_1);
            std::unique_lock<std::mutex>::~unique_lock(local_20);
        }
    }

    // 0x100388310, 176 bytes, inline, placed by class name
    // MakeUniquePool<graphics::GeometryBatchInstance, 3072>::GetPool()
    undefined* MakeUniquePool<graphics::GeometryBatchInstance, 3072>::GetPool() {
        ulong* puVar2;
        ulong local_20[2];

        if (*PTR_pool_100ee5080 == '\0') {
            if (___cxa_guard_acquire(PTR_pool_100ee5080) != 0) {
                local_20[0] = 16;
                local_20[1] = 16;
                puVar2 = std::max<unsigned long>(local_20, local_20 + 1);
                new (PTR_pool_100ee9c78) VectorFastPool<graphics::GeometryBatchInstance>(3072, *puVar2);
                ___cxa_atexit(PTR__VectorFastPool_100ee63b0, PTR_pool_100ee9c78, 4294967296);
                ___cxa_guard_release(PTR_pool_100ee5080);
            }
        }
        return PTR_pool_100ee9c78;
    }

    // 0x1003daed0, 96 bytes, base-object constructor, inline, placed by class name
    // MakeUniquePool<game::EnvironmentLoader, 48>::MakeUniquePool()
    void
    MakeUniquePool<game::EnvironmentLoader, 48>::MakeUniquePool(MakeUniquePool<game::EnvironmentLoader, 48>* this) {
        undefined1 uVar1;

        if (*PTR_registered_100ee5058 == '\0') {
            if (___cxa_guard_acquire(PTR_registered_100ee5058) != 0) {
                uVar1 = RegisterThisUniquePool();
                *PTR_registered_100ee9c50 = uVar1;
                ___cxa_guard_release(PTR_registered_100ee5058);
            }
        }
    }

    // 0x1003e02b0, 432 bytes, inline, placed by class name
    // MakeUniquePool<game::EnvironmentLoader, 48>::RegisterThisUniquePool()
    void MakeUniquePool<game::EnvironmentLoader, 48>::RegisterThisUniquePool() {
        long lVar1;
        ulong uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        char* pcVar5;
        function local_2f8[176];
        fixed_string<char, 512, true, eastl::allocator> local_248[552];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(
            local_248, "static bool MakeUniquePool<game::EnvironmentLoader, 48>::RegisterThisUniquePool() [T = "
                       "game::EnvironmentLoader, CAPACITY = 48]");
        lVar1 = local_248->find("T = jag::", 0);
        if (lVar1 != -1) {
            local_248->replace(0, lVar1 + 9, "UniquePool\t");
            uVar2 = local_248->find(", CAPACITY = ", 0);
            if (uVar2 != 18446744073709551615) {
                local_248->replace(uVar2, 13, "[");
            }
        }
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::function<
            MakeUniquePool<game::EnvironmentLoader, 48>::RegisterThisUniquePool()::_lambda(
                shareduniquedebug::SharedPoolInfo&) _1_,
            void>(local_2f8);
        shareduniquedebug::RegisterUniquePool(
            "static bool MakeUniquePool<game::EnvironmentLoader, 48>::RegisterThisUniquePool() [T = "
            "game::EnvironmentLoader, CAPACITY = 48]",
            local_2f8);
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::~function(
            (function<void(shareduniquedebug::SharedPoolInfo&)>*)local_2f8);
        new (local_2f8) eastl::fixed_string<char, 128, true, eastl::allocator>();
        uVar3 = logger::default_logger();
        uVar4 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        pcVar5 =
            DataSizeStringMB<eastl::fixed_string<char, 128, true, eastl::allocator>>((fixed_string*)local_2f8, 2688);
        logger::Logger::Log(
            uVar3, 0, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/MakeUniquePool.h", 133,
            "%s\t%s", uVar4, pcVar5);
        /* WARNING: Subroutine does not return */
        local_2f8->~fixed_string();
    }

    // 0x1003e0c50, 16 bytes, inline, placed by class name
    // MakeUniquePool<game::EnvironmentLoader, 48>::RegisterThisUniquePool()::{lambda(shareduniquedebug::SharedPoolInfo&)#1}::operator()(shareduniquedebug::SharedPoolInfo&) const
    /* MakeUniquePool<game::EnvironmentLoader,
   48>::RegisterThisUniquePool()::{lambda(shareduniquedebug::SharedPoolInfo&)#1}::TEMPNAMEPLACEHOLDERVALUE(shareduniquedebug::SharedPoolInfo&)
   const */

    void MakeUniquePool<game::EnvironmentLoader, 48>::RegisterThisUniquePool()::{
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(_lambda_jag__shareduniquedebug__SharedPoolInfo___1_* this, SharedPoolInfo * param_1)

    {
        GetUniquePoolInfo(param_1);
    }

    // 0x1003e0c60, 240 bytes, inline, placed by class name
    // MakeUniquePool<game::EnvironmentLoader, 48>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo&)
    void MakeUniquePool<game::EnvironmentLoader, 48>::GetUniquePoolInfo(SharedPoolInfo* param_1) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* pVVar1;
        undefined8 uVar2;
        long lVar3;
        ShuffledPacketFactory* pSVar4;
        unique_lock<std::mutex> local_20[16];

        std::unique_lock<std::mutex>::unique_lock(local_20, (mutex*)PTR_m_mutex_100ee5ff0);
        *(undefined8*)(param_1 + 48) = 0;
        *(undefined8*)(param_1 + 56) = 0;
        *(undefined8*)(param_1 + 32) = 0;
        *(undefined8*)(param_1 + 40) = 0;
        *(undefined8*)(param_1 + 16) = 0;
        *(undefined8*)(param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)(param_1 + 8) = 0;
        *(undefined8*)(param_1 + 64) = 0;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        uVar2 = pVVar1->size();
        *(undefined8*)param_1 = uVar2;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        lVar3 = pVVar1->capacity();
        *(long*)(param_1 + 8) = lVar3;
        *(undefined8*)(param_1 + 16) = *(undefined8*)PTR_m_peak_100ee5fe8;
        *(undefined8*)(param_1 + 32) = 48;
        if (lVar3 != 0) {
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<game::EnvironmentLoader, unsigned long>::GetTotalSize(*(ulong*)param_1);
            *(undefined8*)(param_1 + 40) = uVar2;
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<game::EnvironmentLoader, unsigned long>::GetTotalSize(*(ulong*)(param_1 + 8));
            *(undefined8*)(param_1 + 48) = uVar2;
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<game::EnvironmentLoader, unsigned long>::GetTotalSize(*(ulong*)(param_1 + 32));
            *(undefined8*)(param_1 + 56) = uVar2;
        }
        *(char**)(param_1 + 64) =
            "static void MakeUniquePool<game::EnvironmentLoader, "
            "48>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo &) [T = game::EnvironmentLoader, CAPACITY = 48]";
        std::unique_lock<std::mutex>::~unique_lock(local_20);
    }

    // 0x1003f8210, 96 bytes, base-object constructor, inline, placed by class name
    // MakeUniquePool<SpotAnimation, 64>::MakeUniquePool()
    void MakeUniquePool<SpotAnimation, 64>::MakeUniquePool(MakeUniquePool<SpotAnimation, 64>* this) {
        undefined1 uVar1;

        if (*PTR_registered_100ee5038 == '\0') {
            if (___cxa_guard_acquire(PTR_registered_100ee5038) != 0) {
                uVar1 = RegisterThisUniquePool();
                *PTR_registered_100ee9c30 = uVar1;
                ___cxa_guard_release(PTR_registered_100ee5038);
            }
        }
    }

    // 0x1003f94e0, 96 bytes, base-object constructor, inline, placed by class name
    // MakeUniquePool<game::Terrain, 32>::MakeUniquePool()
    void MakeUniquePool<game::Terrain, 32>::MakeUniquePool(MakeUniquePool<game::Terrain, 32>* this) {
        undefined1 uVar1;

        if (*PTR_registered_100ee5068 == '\0') {
            if (___cxa_guard_acquire(PTR_registered_100ee5068) != 0) {
                uVar1 = RegisterThisUniquePool();
                *PTR_registered_100ee9c60 = uVar1;
                ___cxa_guard_release(PTR_registered_100ee5068);
            }
        }
    }

    // 0x100406200, 112 bytes, inline, placed by class name
    // MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter::operator()(SpotAnimation*) const
    /* MakeUniquePool<SpotAnimation,
   64>::UniquePoolDeleter::TEMPNAMEPLACEHOLDERVALUE(SpotAnimation*) const */

    void MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter::operator()(SpotAnimation* param_1) {
        VectorFastPool<SpotAnimation>* this_00;
        unique_lock<std::mutex> local_20[16];

        if (param_1 != (SpotAnimation*)0) {
            (*(code*)*param_1->field_0)(param_1);
            _memset(param_1, 221, 464);
            std::unique_lock<std::mutex>::unique_lock(local_20, (mutex*)PTR_m_mutex_100ee5fd0);
            this_00 = (VectorFastPool<SpotAnimation>*)MakeUniquePool<SpotAnimation, 64>::GetPool();
            this_00->deallocate(param_1);
            std::unique_lock<std::mutex>::~unique_lock(local_20);
        }
    }

    // 0x100406270, 176 bytes, inline, placed by class name
    // MakeUniquePool<SpotAnimation, 64>::GetPool()
    undefined* MakeUniquePool<SpotAnimation, 64>::GetPool() {
        ulong* puVar2;
        ulong local_20[2];

        if (*PTR_pool_100ee5030 == '\0') {
            if (___cxa_guard_acquire(PTR_pool_100ee5030) != 0) {
                local_20[0] = 16;
                local_20[1] = 16;
                puVar2 = std::max<unsigned long>(local_20, local_20 + 1);
                new (PTR_pool_100ee9c28) VectorFastPool<SpotAnimation>(64, *puVar2);
                ___cxa_atexit(PTR__VectorFastPool_100ee6060, PTR_pool_100ee9c28, 4294967296);
                ___cxa_guard_release(PTR_pool_100ee5030);
            }
        }
        return PTR_pool_100ee9c28;
    }

    // 0x100407d70, 432 bytes, inline, placed by class name
    // MakeUniquePool<SpotAnimation, 64>::RegisterThisUniquePool()
    void MakeUniquePool<SpotAnimation, 64>::RegisterThisUniquePool() {
        long lVar1;
        ulong uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        char* pcVar5;
        function local_2f8[176];
        fixed_string<char, 512, true, eastl::allocator> local_248[552];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(
            local_248, "static bool MakeUniquePool<SpotAnimation, 64>::RegisterThisUniquePool() [T = SpotAnimation, "
                       "CAPACITY = 64]");
        lVar1 = local_248->find("T = jag::", 0);
        if (lVar1 != -1) {
            local_248->replace(0, lVar1 + 9, "UniquePool\t");
            uVar2 = local_248->find(", CAPACITY = ", 0);
            if (uVar2 != 18446744073709551615) {
                local_248->replace(uVar2, 13, "[");
            }
        }
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::function<
            MakeUniquePool<SpotAnimation, 64>::RegisterThisUniquePool()::_lambda(shareduniquedebug::SharedPoolInfo&)
                _1_,
            void>(local_2f8);
        shareduniquedebug::RegisterUniquePool("static bool MakeUniquePool<SpotAnimation, 64>::RegisterThisUniquePool() "
                                              "[T = SpotAnimation, CAPACITY = 64]",
                                              local_2f8);
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::~function(
            (function<void(shareduniquedebug::SharedPoolInfo&)>*)local_2f8);
        new (local_2f8) eastl::fixed_string<char, 128, true, eastl::allocator>();
        uVar3 = logger::default_logger();
        uVar4 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        pcVar5 =
            DataSizeStringMB<eastl::fixed_string<char, 128, true, eastl::allocator>>((fixed_string*)local_2f8, 29696);
        logger::Logger::Log(
            uVar3, 0, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/MakeUniquePool.h", 133,
            "%s\t%s", uVar4, pcVar5);
        /* WARNING: Subroutine does not return */
        local_2f8->~fixed_string();
    }

    // 0x1004086b0, 16 bytes, inline, placed by class name
    // MakeUniquePool<SpotAnimation, 64>::RegisterThisUniquePool()::{lambda(shareduniquedebug::SharedPoolInfo&)#1}::operator()(shareduniquedebug::SharedPoolInfo&) const
    /* MakeUniquePool<SpotAnimation,
   64>::RegisterThisUniquePool()::{lambda(shareduniquedebug::SharedPoolInfo&)#1}::TEMPNAMEPLACEHOLDERVALUE(shareduniquedebug::SharedPoolInfo&)
   const */

    void MakeUniquePool<SpotAnimation, 64>::RegisterThisUniquePool()::{
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(_lambda_jag__shareduniquedebug__SharedPoolInfo___1_* this, SharedPoolInfo * param_1)

    {
        GetUniquePoolInfo(param_1);
    }

    // 0x1004086c0, 240 bytes, inline, placed by class name
    // MakeUniquePool<SpotAnimation, 64>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo&)
    void MakeUniquePool<SpotAnimation, 64>::GetUniquePoolInfo(SharedPoolInfo* param_1) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* pVVar1;
        undefined8 uVar2;
        long lVar3;
        ShuffledPacketFactory* pSVar4;
        unique_lock<std::mutex> local_20[16];

        std::unique_lock<std::mutex>::unique_lock(local_20, (mutex*)PTR_m_mutex_100ee5fd0);
        *(undefined8*)(param_1 + 48) = 0;
        *(undefined8*)(param_1 + 56) = 0;
        *(undefined8*)(param_1 + 32) = 0;
        *(undefined8*)(param_1 + 40) = 0;
        *(undefined8*)(param_1 + 16) = 0;
        *(undefined8*)(param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)(param_1 + 8) = 0;
        *(undefined8*)(param_1 + 64) = 0;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        uVar2 = pVVar1->size();
        *(undefined8*)param_1 = uVar2;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        lVar3 = pVVar1->capacity();
        *(long*)(param_1 + 8) = lVar3;
        *(undefined8*)(param_1 + 16) = *(undefined8*)PTR_m_peak_100ee5fc8;
        *(undefined8*)(param_1 + 32) = 64;
        if (lVar3 != 0) {
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<SpotAnimation, unsigned long>::GetTotalSize(*(ulong*)param_1);
            *(undefined8*)(param_1 + 40) = uVar2;
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<SpotAnimation, unsigned long>::GetTotalSize(*(ulong*)(param_1 + 8));
            *(undefined8*)(param_1 + 48) = uVar2;
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<SpotAnimation, unsigned long>::GetTotalSize(*(ulong*)(param_1 + 32));
            *(undefined8*)(param_1 + 56) = uVar2;
        }
        *(char**)(param_1 + 64) =
            "static void MakeUniquePool<SpotAnimation, 64>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo &) [T "
            "= SpotAnimation, CAPACITY = 64]";
        std::unique_lock<std::mutex>::~unique_lock(local_20);
    }

    // 0x1004089f0, 432 bytes, inline, placed by class name
    // MakeUniquePool<game::Terrain, 32>::RegisterThisUniquePool()
    void MakeUniquePool<game::Terrain, 32>::RegisterThisUniquePool() {
        long lVar1;
        ulong uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        char* pcVar5;
        function local_2f8[176];
        fixed_string<char, 512, true, eastl::allocator> local_248[552];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(
            local_248, "static bool MakeUniquePool<game::Terrain, 32>::RegisterThisUniquePool() [T = game::Terrain, "
                       "CAPACITY = 32]");
        lVar1 = local_248->find("T = jag::", 0);
        if (lVar1 != -1) {
            local_248->replace(0, lVar1 + 9, "UniquePool\t");
            uVar2 = local_248->find(", CAPACITY = ", 0);
            if (uVar2 != 18446744073709551615) {
                local_248->replace(uVar2, 13, "[");
            }
        }
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::function<
            MakeUniquePool<game::Terrain, 32>::RegisterThisUniquePool()::_lambda(shareduniquedebug::SharedPoolInfo&)
                _1_,
            void>(local_2f8);
        shareduniquedebug::RegisterUniquePool("static bool MakeUniquePool<game::Terrain, 32>::RegisterThisUniquePool() "
                                              "[T = game::Terrain, CAPACITY = 32]",
                                              local_2f8);
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::~function(
            (function<void(shareduniquedebug::SharedPoolInfo&)>*)local_2f8);
        new (local_2f8) eastl::fixed_string<char, 128, true, eastl::allocator>();
        uVar3 = logger::default_logger();
        uVar4 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        pcVar5 =
            DataSizeStringMB<eastl::fixed_string<char, 128, true, eastl::allocator>>((fixed_string*)local_2f8, 54272);
        logger::Logger::Log(
            uVar3, 0, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/MakeUniquePool.h", 133,
            "%s\t%s", uVar4, pcVar5);
        /* WARNING: Subroutine does not return */
        local_2f8->~fixed_string();
    }

    // 0x100409330, 16 bytes, inline, placed by class name
    // MakeUniquePool<game::Terrain, 32>::RegisterThisUniquePool()::{lambda(shareduniquedebug::SharedPoolInfo&)#1}::operator()(shareduniquedebug::SharedPoolInfo&) const
    /* MakeUniquePool<game::Terrain,
   32>::RegisterThisUniquePool()::{lambda(shareduniquedebug::SharedPoolInfo&)#1}::TEMPNAMEPLACEHOLDERVALUE(shareduniquedebug::SharedPoolInfo&)
   const */

    void MakeUniquePool<game::Terrain, 32>::RegisterThisUniquePool()::{
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(_lambda_jag__shareduniquedebug__SharedPoolInfo___1_* this, SharedPoolInfo * param_1)

    {
        GetUniquePoolInfo(param_1);
    }

    // 0x100409340, 240 bytes, inline, placed by class name
    // MakeUniquePool<game::Terrain, 32>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo&)
    void MakeUniquePool<game::Terrain, 32>::GetUniquePoolInfo(SharedPoolInfo* param_1) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* pVVar1;
        undefined8 uVar2;
        long lVar3;
        ShuffledPacketFactory* pSVar4;
        unique_lock<std::mutex> local_20[16];

        std::unique_lock<std::mutex>::unique_lock(local_20, (mutex*)PTR_m_mutex_100ee6000);
        *(undefined8*)(param_1 + 48) = 0;
        *(undefined8*)(param_1 + 56) = 0;
        *(undefined8*)(param_1 + 32) = 0;
        *(undefined8*)(param_1 + 40) = 0;
        *(undefined8*)(param_1 + 16) = 0;
        *(undefined8*)(param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)(param_1 + 8) = 0;
        *(undefined8*)(param_1 + 64) = 0;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        uVar2 = pVVar1->size();
        *(undefined8*)param_1 = uVar2;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        lVar3 = pVVar1->capacity();
        *(long*)(param_1 + 8) = lVar3;
        *(undefined8*)(param_1 + 16) = *(undefined8*)PTR_m_peak_100ee5ff8;
        *(undefined8*)(param_1 + 32) = 32;
        if (lVar3 != 0) {
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<game::Terrain, unsigned long>::GetTotalSize(*(ulong*)param_1);
            *(undefined8*)(param_1 + 40) = uVar2;
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<game::Terrain, unsigned long>::GetTotalSize(*(ulong*)(param_1 + 8));
            *(undefined8*)(param_1 + 48) = uVar2;
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<game::Terrain, unsigned long>::GetTotalSize(*(ulong*)(param_1 + 32));
            *(undefined8*)(param_1 + 56) = uVar2;
        }
        *(char**)(param_1 + 64) =
            "static void MakeUniquePool<game::Terrain, 32>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo &) [T "
            "= game::Terrain, CAPACITY = 32]";
        std::unique_lock<std::mutex>::~unique_lock(local_20);
    }

    // 0x100414170, 240 bytes, inline, placed by class name
    // std::unique_ptr<game::EnvironmentLoader, MakeUniquePool<game::EnvironmentLoader, 48>::UniquePoolDeleter> MakeUniquePool<game::EnvironmentLoader, 48>::MakeUnique<unsigned int&, unsigned int&, shared_ptr<game::ClientCompositeData>&>(unsigned int&, unsigned int&, shared_ptr<game::ClientCompositeData>&)
    /* std::unique_ptr<game::EnvironmentLoader, MakeUniquePool<game::EnvironmentLoader,
   48>::UniquePoolDeleter> MakeUniquePool<game::EnvironmentLoader,
   48>::MakeUnique<unsigned int&, unsigned int&,
   shared_ptr<game::ClientCompositeData>&>(unsigned int&, unsigned int&,
   shared_ptr<game::ClientCompositeData>&) */

    MakeUniquePool<game::EnvironmentLoader, 48>*
    MakeUniquePool<game::EnvironmentLoader, 48>::MakeUnique<unsigned int&, unsigned int&,
                                                            shared_ptr<game::ClientCompositeData>&>(
        MakeUniquePool<game::EnvironmentLoader, 48>* this, uint* param_1, uint* param_2, shared_ptr* param_3) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* this_00;
        long lVar1;
        VectorFastPool<game::EnvironmentLoader>* this_01;
        undefined8 uVar2;
        undefined8* puVar3;
        EnvironmentLoader* this_02;
        unique_lock<std::mutex> local_38[16];

        std::unique_lock<std::mutex>::unique_lock(local_38, (mutex*)PTR_m_mutex_100ee5ff0);
        this_00 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        lVar1 = this_00->size();
        if (*(ulong*)PTR_m_peak_100ee5fe8 < lVar1 + 1U) {
            *(ulong*)PTR_m_peak_100ee5fe8 = lVar1 + 1U;
        }
        this_01 = (VectorFastPool<game::EnvironmentLoader>*)GetPool();
        uVar2 = this_01->allocate();
        std::unique_ptr<game::EnvironmentLoader,
                        MakeUniquePool<game::EnvironmentLoader, 48>::UniquePoolDeleter>::unique_ptr<true, void>(this,
                                                                                                                uVar2);
        std::unique_lock<std::mutex>::unlock(local_38);
        puVar3 = (undefined8*)get();
        *puVar3 = 14829735431805717965;
        puVar3[1] = 14829735431805717965;
        puVar3[2] = 14829735431805717965;
        puVar3[3] = 14829735431805717965;
        puVar3[4] = 14829735431805717965;
        puVar3[5] = 14829735431805717965;
        puVar3[6] = 14829735431805717965;
        this_02 = (EnvironmentLoader*)get();
        game::EnvironmentLoader::EnvironmentLoader(this_02, *param_1, *param_2, param_3);
        std::unique_lock<std::mutex>::~unique_lock(local_38);
        return this;
    }

    // 0x100414370, 240 bytes, inline, placed by class name
    // std::unique_ptr<game::Terrain, MakeUniquePool<game::Terrain, 32>::UniquePoolDeleter> MakeUniquePool<game::Terrain, 32>::MakeUnique<graphics::GraphNode*&, shared_ptr<game::World> const&, game::TerrainInputData&, graphics::RT7Core*&>(graphics::GraphNode*&, shared_ptr<game::World> const&, game::TerrainInputData&, graphics::RT7Core*&)
    /* std::unique_ptr<game::Terrain, MakeUniquePool<game::Terrain,
   32>::UniquePoolDeleter> MakeUniquePool<game::Terrain,
   32>::MakeUnique<graphics::GraphNode*&, shared_ptr<game::World> const&,
   game::TerrainInputData&, graphics::RT7Core*&>(graphics::GraphNode*&,
   shared_ptr<game::World> const&, game::TerrainInputData&, graphics::RT7Core*&)
    */

    MakeUniquePool<game::Terrain, 32>*
    MakeUniquePool<game::Terrain, 32>::MakeUnique<graphics::GraphNode*&, shared_ptr<game::World> const&,
                                                  game::TerrainInputData&, graphics::RT7Core*&>(
        MakeUniquePool<game::Terrain, 32>* this, GraphNode** param_1, shared_ptr* param_2, TerrainInputData* param_3,
        RT7Core** param_4) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* this_00;
        long lVar1;
        VectorFastPool<game::Terrain>* this_01;
        undefined8 uVar2;
        void* pvVar3;
        Terrain* this_02;
        unique_lock<std::mutex> local_40[16];

        std::unique_lock<std::mutex>::unique_lock(local_40, (mutex*)PTR_m_mutex_100ee6000);
        this_00 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        lVar1 = this_00->size();
        if (*(ulong*)PTR_m_peak_100ee5ff8 < lVar1 + 1U) {
            *(ulong*)PTR_m_peak_100ee5ff8 = lVar1 + 1U;
        }
        this_01 = (VectorFastPool<game::Terrain>*)GetPool();
        uVar2 = this_01->allocate();
        std::unique_ptr<game::Terrain, MakeUniquePool<game::Terrain, 32>::UniquePoolDeleter>::unique_ptr<true, void>(
            this, uVar2);
        std::unique_lock<std::mutex>::unlock(local_40);
        pvVar3 = (void*)get();
        _memset(pvVar3, 205, 1696);
        this_02 = (Terrain*)get();
        game::Terrain::Terrain(this_02, *param_1, param_2, param_3, *param_4);
        std::unique_lock<std::mutex>::~unique_lock(local_40);
        return this;
    }

    // 0x100420c80, 128 bytes, inline, placed by class name
    // MakeUniquePool<game::EnvironmentLoader, 48>::UniquePoolDeleter::operator()(game::EnvironmentLoader*) const
    /* MakeUniquePool<game::EnvironmentLoader,
   48>::UniquePoolDeleter::TEMPNAMEPLACEHOLDERVALUE(game::EnvironmentLoader*) const */

    void MakeUniquePool<game::EnvironmentLoader, 48>::UniquePoolDeleter::operator()(EnvironmentLoader* param_1) {
        VectorFastPool<game::EnvironmentLoader>* this_00;
        unique_lock<std::mutex> local_20[16];

        if (param_1 != (EnvironmentLoader*)0) {
            param_1->~EnvironmentLoader();
            *(undefined8*)(param_1->field_40 + 8) = 15987178197214944733;
            *(undefined8*)(param_1->field_24 + 8) = 15987178197214944733;
            *(undefined8*)param_1->field_40 = 15987178197214944733;
            *(undefined8*)(param_1->field_8 + 8) = 15987178197214944733;
            *(undefined8*)param_1->field_24 = 15987178197214944733;
            param_1->field_0 = 3722304989;
            param_1->field_4 = 3722304989;
            *(undefined8*)param_1->field_8 = 15987178197214944733;
            std::unique_lock<std::mutex>::unique_lock(local_20, (mutex*)PTR_m_mutex_100ee5ff0);
            this_00 = (VectorFastPool<game::EnvironmentLoader>*)MakeUniquePool<game::EnvironmentLoader, 48>::GetPool();
            this_00->deallocate(param_1);
            std::unique_lock<std::mutex>::~unique_lock(local_20);
        }
    }

    // 0x100420d30, 176 bytes, inline, placed by class name
    // MakeUniquePool<game::EnvironmentLoader, 48>::GetPool()
    undefined* MakeUniquePool<game::EnvironmentLoader, 48>::GetPool() {
        ulong* puVar2;
        ulong local_20[2];

        if (*PTR_pool_100ee5050 == '\0') {
            if (___cxa_guard_acquire(PTR_pool_100ee5050) != 0) {
                local_20[0] = 16;
                local_20[1] = 8;
                puVar2 = std::max<unsigned long>(local_20, local_20 + 1);
                new (PTR_pool_100ee9c48) VectorFastPool<game::EnvironmentLoader>(48, *puVar2);
                ___cxa_atexit(PTR__VectorFastPool_100ee6378, PTR_pool_100ee9c48, 4294967296);
                ___cxa_guard_release(PTR_pool_100ee5050);
            }
        }
        return PTR_pool_100ee9c48;
    }

    // 0x100421620, 112 bytes, inline, placed by class name
    // MakeUniquePool<game::Terrain, 32>::UniquePoolDeleter::operator()(game::Terrain*) const
    /* MakeUniquePool<game::Terrain,
   32>::UniquePoolDeleter::TEMPNAMEPLACEHOLDERVALUE(game::Terrain*) const */

    void MakeUniquePool<game::Terrain, 32>::UniquePoolDeleter::operator()(Terrain* param_1) {
        VectorFastPool<game::Terrain>* this_00;
        unique_lock<std::mutex> local_20[16];

        if (param_1 != (Terrain*)0) {
            (*(code*)*param_1->field_0)(param_1);
            _memset(param_1, 221, 1696);
            std::unique_lock<std::mutex>::unique_lock(local_20, (mutex*)PTR_m_mutex_100ee6000);
            this_00 = (VectorFastPool<game::Terrain>*)MakeUniquePool<game::Terrain, 32>::GetPool();
            this_00->deallocate(param_1);
            std::unique_lock<std::mutex>::~unique_lock(local_20);
        }
    }

    // 0x1004216b0, 176 bytes, inline, placed by class name
    // MakeUniquePool<game::Terrain, 32>::GetPool()
    undefined* MakeUniquePool<game::Terrain, 32>::GetPool() {
        ulong* puVar2;
        ulong local_20[2];

        if (*PTR_pool_100ee5060 == '\0') {
            if (___cxa_guard_acquire(PTR_pool_100ee5060) != 0) {
                local_20[0] = 16;
                local_20[1] = 16;
                puVar2 = std::max<unsigned long>(local_20, local_20 + 1);
                new (PTR_pool_100ee9c58) VectorFastPool<game::Terrain>(32, *puVar2);
                ___cxa_atexit(PTR__VectorFastPool_100ee6380, PTR_pool_100ee9c58, 4294967296);
                ___cxa_guard_release(PTR_pool_100ee5060);
            }
        }
        return PTR_pool_100ee9c58;
    }

    // 0x100516a10, 272 bytes, inline, placed by class name
    // std::unique_ptr<game::MapElementType::Polygon, MakeUniquePool<game::MapElementType::Polygon, 256>::UniquePoolDeleter> MakeUniquePool<game::MapElementType::Polygon, 256>::MakeUnique<>()
    /* std::unique_ptr<game::MapElementType::Polygon,
   MakeUniquePool<game::MapElementType::Polygon, 256>::UniquePoolDeleter>
   MakeUniquePool<game::MapElementType::Polygon, 256>::MakeUnique<>() */

    MakeUniquePool<game::MapElementType::Polygon, 256>*
    MakeUniquePool<game::MapElementType::Polygon, 256>::MakeUnique<>(
        MakeUniquePool<game::MapElementType::Polygon, 256>* this) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* this_00;
        long lVar1;
        VectorFastPool<game::MapElementType::Polygon>* this_01;
        undefined8 uVar2;
        undefined8* puVar3;
        Polygon* this_02;
        unique_lock<std::mutex> local_28[16];

        std::unique_lock<std::mutex>::unique_lock(local_28, (mutex*)PTR_m_mutex_100ee5fe0);
        this_00 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        lVar1 = this_00->size();
        if (*(ulong*)PTR_m_peak_100ee5fd8 < lVar1 + 1U) {
            *(ulong*)PTR_m_peak_100ee5fd8 = lVar1 + 1U;
        }
        this_01 = (VectorFastPool<game::MapElementType::Polygon>*)GetPool();
        uVar2 = this_01->allocate();
        std::unique_ptr<game::MapElementType::Polygon,
                        MakeUniquePool<game::MapElementType::Polygon, 256>::UniquePoolDeleter>::unique_ptr<true,
                                                                                                           void>(this,
                                                                                                                 uVar2);
        std::unique_lock<std::mutex>::unlock(local_28);
        puVar3 = (undefined8*)get();
        *puVar3 = 14829735431805717965;
        puVar3[1] = 14829735431805717965;
        puVar3[2] = 14829735431805717965;
        puVar3[3] = 14829735431805717965;
        puVar3[4] = 14829735431805717965;
        puVar3[5] = 14829735431805717965;
        puVar3[6] = 14829735431805717965;
        puVar3[7] = 14829735431805717965;
        puVar3[8] = 14829735431805717965;
        puVar3[9] = 14829735431805717965;
        puVar3[10] = 14829735431805717965;
        puVar3[11] = 14829735431805717965;
        puVar3[12] = 14829735431805717965;
        puVar3[13] = 14829735431805717965;
        puVar3[14] = 14829735431805717965;
        puVar3[15] = 14829735431805717965;
        puVar3[16] = 14829735431805717965;
        puVar3[17] = 14829735431805717965;
        this_02 = (Polygon*)get();
        *(undefined8*)this_02 = 0;
        *(undefined8*)&this_02->field_8 = 0;
        *(undefined8*)&this_02->field_16 = 0;
        *(undefined8*)&this_02->field_24 = 0;
        this_02->field_32 = 0;
        this_02->field_40 = 0;
        this_02->field_48 = 0;
        this_02->field_56 = 0;
        *(undefined8*)&this_02->field_64 = 0;
        *(undefined8*)&this_02->field_72 = 0;
        *(undefined8*)&this_02->field_80 = 0;
        *(undefined8*)&this_02->field_88 = 0;
        *(undefined8*)&this_02->field_96 = 0;
        *(undefined8*)&this_02->field_104 = 0;
        *(undefined8*)&this_02->field_112 = 0;
        *(undefined8*)(this_02 + 1) = 0;
        *(undefined8*)&this_02[1].field_8 = 0;
        *(undefined8*)&this_02[1].field_16 = 0;
        game::MapElementType::Polygon::Polygon(this_02);
        std::unique_lock<std::mutex>::~unique_lock(local_28);
        return this;
    }

    // 0x10051f750, 96 bytes, base-object constructor, inline, placed by class name
    // MakeUniquePool<game::MapElementType::Polygon, 256>::MakeUniquePool()
    void MakeUniquePool<game::MapElementType::Polygon, 256>::MakeUniquePool(
        MakeUniquePool<game::MapElementType::Polygon, 256>* this) {
        undefined1 uVar1;

        if (*PTR_registered_100ee5048 == '\0') {
            if (___cxa_guard_acquire(PTR_registered_100ee5048) != 0) {
                uVar1 = RegisterThisUniquePool();
                *PTR_registered_100ee9c40 = uVar1;
                ___cxa_guard_release(PTR_registered_100ee5048);
            }
        }
    }

    // 0x10051f7c0, 432 bytes, inline, placed by class name
    // MakeUniquePool<game::MapElementType::Polygon, 256>::RegisterThisUniquePool()
    void MakeUniquePool<game::MapElementType::Polygon, 256>::RegisterThisUniquePool() {
        long lVar1;
        ulong uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        char* pcVar5;
        function local_2f8[176];
        fixed_string<char, 512, true, eastl::allocator> local_248[552];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(
            local_248, "static bool MakeUniquePool<game::MapElementType::Polygon, 256>::RegisterThisUniquePool() [T = "
                       "game::MapElementType::Polygon, CAPACITY = 256]");
        lVar1 = local_248->find("T = jag::", 0);
        if (lVar1 != -1) {
            local_248->replace(0, lVar1 + 9, "UniquePool\t");
            uVar2 = local_248->find(", CAPACITY = ", 0);
            if (uVar2 != 18446744073709551615) {
                local_248->replace(uVar2, 13, "[");
            }
        }
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::function<
            MakeUniquePool<game::MapElementType::Polygon, 256>::RegisterThisUniquePool()::_lambda(
                shareduniquedebug::SharedPoolInfo&) _1_,
            void>(local_2f8);
        shareduniquedebug::RegisterUniquePool(
            "static bool MakeUniquePool<game::MapElementType::Polygon, 256>::RegisterThisUniquePool() [T = "
            "game::MapElementType::Polygon, CAPACITY = 256]",
            local_2f8);
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::~function(
            (function<void(shareduniquedebug::SharedPoolInfo&)>*)local_2f8);
        new (local_2f8) eastl::fixed_string<char, 128, true, eastl::allocator>();
        uVar3 = logger::default_logger();
        uVar4 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        pcVar5 =
            DataSizeStringMB<eastl::fixed_string<char, 128, true, eastl::allocator>>((fixed_string*)local_2f8, 36864);
        logger::Logger::Log(
            uVar3, 0, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/MakeUniquePool.h", 133,
            "%s\t%s", uVar4, pcVar5);
        /* WARNING: Subroutine does not return */
        local_2f8->~fixed_string();
    }

    // 0x100520160, 16 bytes, inline, placed by class name
    // MakeUniquePool<game::MapElementType::Polygon, 256>::RegisterThisUniquePool()::{lambda(shareduniquedebug::SharedPoolInfo&)#1}::operator()(shareduniquedebug::SharedPoolInfo&) const
    /* MakeUniquePool<game::MapElementType::Polygon,
   256>::RegisterThisUniquePool()::{lambda(shareduniquedebug::SharedPoolInfo&)#1}::TEMPNAMEPLACEHOLDERVALUE(shareduniquedebug::SharedPoolInfo&)
   const */

    void MakeUniquePool<game::MapElementType::Polygon, 256>::RegisterThisUniquePool()::{
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(_lambda_jag__shareduniquedebug__SharedPoolInfo___1_* this, SharedPoolInfo * param_1)

    {
        GetUniquePoolInfo(param_1);
    }

    // 0x100520170, 240 bytes, inline, placed by class name
    // MakeUniquePool<game::MapElementType::Polygon, 256>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo&)
    void MakeUniquePool<game::MapElementType::Polygon, 256>::GetUniquePoolInfo(SharedPoolInfo* param_1) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* pVVar1;
        undefined8 uVar2;
        long lVar3;
        ShuffledPacketFactory* pSVar4;
        unique_lock<std::mutex> local_20[16];

        std::unique_lock<std::mutex>::unique_lock(local_20, (mutex*)PTR_m_mutex_100ee5fe0);
        *(undefined8*)(param_1 + 48) = 0;
        *(undefined8*)(param_1 + 56) = 0;
        *(undefined8*)(param_1 + 32) = 0;
        *(undefined8*)(param_1 + 40) = 0;
        *(undefined8*)(param_1 + 16) = 0;
        *(undefined8*)(param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)(param_1 + 8) = 0;
        *(undefined8*)(param_1 + 64) = 0;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        uVar2 = pVVar1->size();
        *(undefined8*)param_1 = uVar2;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        lVar3 = pVVar1->capacity();
        *(long*)(param_1 + 8) = lVar3;
        *(undefined8*)(param_1 + 16) = *(undefined8*)PTR_m_peak_100ee5fd8;
        *(undefined8*)(param_1 + 32) = 256;
        if (lVar3 != 0) {
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::GetTotalSize(
                *(ulong*)param_1);
            *(undefined8*)(param_1 + 40) = uVar2;
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::GetTotalSize(
                *(ulong*)(param_1 + 8));
            *(undefined8*)(param_1 + 48) = uVar2;
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<MakeSharedPool<game::ParamType, 640>::RefCounterAndData, unsigned long>::GetTotalSize(
                *(ulong*)(param_1 + 32));
            *(undefined8*)(param_1 + 56) = uVar2;
        }
        *(char**)(param_1 + 64) = "static void MakeUniquePool<game::MapElementType::Polygon, "
                                  "256>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo &) [T = "
                                  "game::MapElementType::Polygon, CAPACITY = 256]";
        std::unique_lock<std::mutex>::~unique_lock(local_20);
    }

    // 0x1005ad720, 144 bytes, inline, placed by class name
    // MakeUniquePool<game::MapElementType::Polygon, 256>::UniquePoolDeleter::operator()(game::MapElementType::Polygon*) const
    /* MakeUniquePool<game::MapElementType::Polygon,
   256>::UniquePoolDeleter::TEMPNAMEPLACEHOLDERVALUE(game::MapElementType::Polygon*) const */

    void MakeUniquePool<game::MapElementType::Polygon, 256>::UniquePoolDeleter::operator()(Polygon* param_1) {
        VectorFastPool<game::MapElementType::Polygon>* this_00;
        unique_lock<std::mutex> local_20[16];

        if (param_1 != (Polygon*)0) {
            param_1->~Polygon();
            *(undefined8*)&param_1[1].field_8 = 15987178197214944733;
            *(undefined8*)&param_1[1].field_16 = 15987178197214944733;
            *(undefined8*)&param_1->field_112 = 15987178197214944733;
            *(undefined8*)(param_1 + 1) = 15987178197214944733;
            *(undefined8*)&param_1->field_96 = 15987178197214944733;
            *(undefined8*)&param_1->field_104 = 15987178197214944733;
            *(undefined8*)&param_1->field_80 = 15987178197214944733;
            *(undefined8*)&param_1->field_88 = 15987178197214944733;
            *(undefined8*)&param_1->field_64 = 15987178197214944733;
            *(undefined8*)&param_1->field_72 = 15987178197214944733;
            param_1->field_48 = 15987178197214944733;
            param_1->field_56 = 15987178197214944733;
            param_1->field_32 = 15987178197214944733;
            param_1->field_40 = 15987178197214944733;
            *(undefined8*)&param_1->field_16 = 15987178197214944733;
            *(undefined8*)&param_1->field_24 = 15987178197214944733;
            *(undefined8*)param_1 = 15987178197214944733;
            *(undefined8*)&param_1->field_8 = 15987178197214944733;
            std::unique_lock<std::mutex>::unique_lock(local_20, (mutex*)PTR_m_mutex_100ee5fe0);
            this_00 = (VectorFastPool<game::MapElementType::Polygon>*)
                MakeUniquePool<game::MapElementType::Polygon, 256>::GetPool();
            this_00->deallocate(param_1);
            std::unique_lock<std::mutex>::~unique_lock(local_20);
        }
    }

    // 0x1005ad7e0, 176 bytes, inline, placed by class name
    // MakeUniquePool<game::MapElementType::Polygon, 256>::GetPool()
    undefined* MakeUniquePool<game::MapElementType::Polygon, 256>::GetPool() {
        ulong* puVar2;
        ulong local_20[2];

        if (*PTR_pool_100ee5040 == '\0') {
            if (___cxa_guard_acquire(PTR_pool_100ee5040) != 0) {
                local_20[0] = 16;
                local_20[1] = 8;
                puVar2 = std::max<unsigned long>(local_20, local_20 + 1);
                new (PTR_pool_100ee9c38) VectorFastPool<game::MapElementType::Polygon>(256, *puVar2);
                ___cxa_atexit(PTR__VectorFastPool_100ee6370, PTR_pool_100ee9c38, 4294967296);
                ___cxa_guard_release(PTR_pool_100ee5040);
            }
        }
        return PTR_pool_100ee9c38;
    }

    // 0x100657f10, 320 bytes, inline, placed by class name
    // std::unique_ptr<graphics::AnimationParameters, MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter> MakeUniquePool<graphics::AnimationParameters, 512>::MakeUnique<shared_ptr<graphics::Animation> const&, graphics::AnimationLoopBehaviour&, unsigned int&, unsigned int&, bool&, int, unsigned int, bool&>(shared_ptr<graphics::Animation> const&, graphics::AnimationLoopBehaviour&, unsigned int&, unsigned int&, bool&, int&&, unsigned int&&, bool&)
    /* std::unique_ptr<graphics::AnimationParameters,
   MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>
   MakeUniquePool<graphics::AnimationParameters,
   512>::MakeUnique<shared_ptr<graphics::Animation> const&,
   graphics::AnimationLoopBehaviour&, unsigned int&, unsigned int&, bool&, int, unsigned int,
   bool&>(shared_ptr<graphics::Animation> const&, graphics::AnimationLoopBehaviour&,
   unsigned int&, unsigned int&, bool&, int&&, unsigned int&&, bool&) */

    MakeUniquePool<graphics::AnimationParameters, 512>* MakeUniquePool<graphics::AnimationParameters, 512>::MakeUnique<
        shared_ptr<graphics::Animation> const&, graphics::AnimationLoopBehaviour&, unsigned int&, unsigned int&, bool&,
        int, unsigned int, bool&>(MakeUniquePool<graphics::AnimationParameters, 512>* this, shared_ptr* param_1,
                                  AnimationLoopBehaviour* param_2, uint* param_3, uint* param_4, bool* param_5,
                                  int* param_6, uint* param_7, bool* param_8) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* this_00;
        long lVar1;
        VectorFastPool<graphics::AnimationParameters>* this_01;
        undefined8 uVar2;
        undefined8* puVar3;
        AnimationParameters* pAVar4;
        unique_lock<std::mutex> local_48[16];
        undefined4* local_38;

        local_38 = (undefined4*)param_2;
        std::unique_lock<std::mutex>::unique_lock(local_48, (mutex*)PTR_m_mutex_100ee6010);
        this_00 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        lVar1 = this_00->size();
        if (*(ulong*)PTR_m_peak_100ee6008 < lVar1 + 1U) {
            *(ulong*)PTR_m_peak_100ee6008 = lVar1 + 1U;
        }
        this_01 = (VectorFastPool<graphics::AnimationParameters>*)GetPool();
        uVar2 = this_01->allocate();
        std::unique_ptr<graphics::AnimationParameters,
                        MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>::unique_ptr<true,
                                                                                                           void>(this,
                                                                                                                 uVar2);
        std::unique_lock<std::mutex>::unlock(local_48);
        puVar3 = (undefined8*)get();
        *puVar3 = 14829735431805717965;
        puVar3[1] = 14829735431805717965;
        puVar3[2] = 14829735431805717965;
        puVar3[3] = 14829735431805717965;
        puVar3[4] = 14829735431805717965;
        puVar3[5] = 14829735431805717965;
        puVar3[6] = 14829735431805717965;
        puVar3[7] = 14829735431805717965;
        puVar3[8] = 14829735431805717965;
        puVar3[9] = 14829735431805717965;
        puVar3[10] = 14829735431805717965;
        puVar3[11] = 14829735431805717965;
        puVar3[12] = 14829735431805717965;
        puVar3[13] = 14829735431805717965;
        puVar3[14] = 14829735431805717965;
        puVar3[15] = 14829735431805717965;
        puVar3[16] = 14829735431805717965;
        puVar3[17] = 14829735431805717965;
        puVar3[18] = 14829735431805717965;
        puVar3[19] = 14829735431805717965;
        puVar3[20] = 14829735431805717965;
        puVar3[21] = 14829735431805717965;
        puVar3[22] = 14829735431805717965;
        puVar3[23] = 14829735431805717965;
        pAVar4 = (AnimationParameters*)get();
        graphics::AnimationParameters::AnimationParameters(pAVar4, param_1, *local_38, *param_3, *param_4, *param_5,
                                                           *param_6, *param_7, *param_8);
        std::unique_lock<std::mutex>::~unique_lock(local_48);
        return this;
    }

    // 0x1006593d0, 320 bytes, inline, placed by class name
    // std::unique_ptr<graphics::AnimationParameters, MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter> MakeUniquePool<graphics::AnimationParameters, 512>::MakeUnique<shared_ptr<graphics::Animation> const&, graphics::AnimationLoopBehaviour, int&, int&, bool&, int&, unsigned int, bool>(shared_ptr<graphics::Animation> const&, graphics::AnimationLoopBehaviour&&, int&, int&, bool&, int&, unsigned int&&, bool&&)
    /* std::unique_ptr<graphics::AnimationParameters,
   MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>
   MakeUniquePool<graphics::AnimationParameters,
   512>::MakeUnique<shared_ptr<graphics::Animation> const&,
   graphics::AnimationLoopBehaviour, int&, int&, bool&, int&, unsigned int,
   bool>(shared_ptr<graphics::Animation> const&, graphics::AnimationLoopBehaviour&&,
   int&, int&, bool&, int&, unsigned int&&, bool&&) */

    MakeUniquePool<graphics::AnimationParameters, 512>* MakeUniquePool<graphics::AnimationParameters, 512>::MakeUnique<
        shared_ptr<graphics::Animation> const&, graphics::AnimationLoopBehaviour, int&, int&, bool&, int&, unsigned int,
        bool>(MakeUniquePool<graphics::AnimationParameters, 512>* this, shared_ptr* param_1,
              AnimationLoopBehaviour* param_2, int* param_3, int* param_4, bool* param_5, int* param_6, uint* param_7,
              bool* param_8) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* this_00;
        long lVar1;
        VectorFastPool<graphics::AnimationParameters>* this_01;
        undefined8 uVar2;
        undefined8* puVar3;
        AnimationParameters* pAVar4;
        unique_lock<std::mutex> local_48[16];
        undefined4* local_38;

        local_38 = (undefined4*)param_2;
        std::unique_lock<std::mutex>::unique_lock(local_48, (mutex*)PTR_m_mutex_100ee6010);
        this_00 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        lVar1 = this_00->size();
        if (*(ulong*)PTR_m_peak_100ee6008 < lVar1 + 1U) {
            *(ulong*)PTR_m_peak_100ee6008 = lVar1 + 1U;
        }
        this_01 = (VectorFastPool<graphics::AnimationParameters>*)GetPool();
        uVar2 = this_01->allocate();
        std::unique_ptr<graphics::AnimationParameters,
                        MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter>::unique_ptr<true,
                                                                                                           void>(this,
                                                                                                                 uVar2);
        std::unique_lock<std::mutex>::unlock(local_48);
        puVar3 = (undefined8*)get();
        *puVar3 = 14829735431805717965;
        puVar3[1] = 14829735431805717965;
        puVar3[2] = 14829735431805717965;
        puVar3[3] = 14829735431805717965;
        puVar3[4] = 14829735431805717965;
        puVar3[5] = 14829735431805717965;
        puVar3[6] = 14829735431805717965;
        puVar3[7] = 14829735431805717965;
        puVar3[8] = 14829735431805717965;
        puVar3[9] = 14829735431805717965;
        puVar3[10] = 14829735431805717965;
        puVar3[11] = 14829735431805717965;
        puVar3[12] = 14829735431805717965;
        puVar3[13] = 14829735431805717965;
        puVar3[14] = 14829735431805717965;
        puVar3[15] = 14829735431805717965;
        puVar3[16] = 14829735431805717965;
        puVar3[17] = 14829735431805717965;
        puVar3[18] = 14829735431805717965;
        puVar3[19] = 14829735431805717965;
        puVar3[20] = 14829735431805717965;
        puVar3[21] = 14829735431805717965;
        puVar3[22] = 14829735431805717965;
        puVar3[23] = 14829735431805717965;
        pAVar4 = (AnimationParameters*)get();
        graphics::AnimationParameters::AnimationParameters(pAVar4, param_1, *local_38, *param_3, *param_4, *param_5,
                                                           *param_6, *param_7, *param_8);
        std::unique_lock<std::mutex>::~unique_lock(local_48);
        return this;
    }

    // 0x1006727f0, 160 bytes, inline, placed by class name
    // MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter::operator()(graphics::AnimationParameters*) const
    /* MakeUniquePool<graphics::AnimationParameters,
   512>::UniquePoolDeleter::TEMPNAMEPLACEHOLDERVALUE(graphics::AnimationParameters*) const */

    void
    MakeUniquePool<graphics::AnimationParameters, 512>::UniquePoolDeleter::operator()(AnimationParameters* param_1) {
        VectorFastPool<graphics::AnimationParameters>* this_00;
        unique_lock<std::mutex> local_20[16];

        if (param_1 != (AnimationParameters*)0) {
            param_1->~AnimationParameters();
            param_1->m_lastUpdateTimeNS = -2459565876494606883;
            *(undefined8*)&param_1->m_paused = 15987178197214944733;
            *(undefined8*)&param_1->field_160 = 15987178197214944733;
            param_1->m_startTimeNS = 15987178197214944733;
            param_1->field_144 = 3722304989;
            param_1->field_148 = 3722304989;
            param_1->m_currentIndex = 3722304989;
            param_1->field_156 = 3722304989;
            param_1->field_128 = 3722304989;
            param_1->m_finished = 221;
            *(undefined3*)&param_1->field_133 = 14540253;
            param_1->m_delay = 3722304989;
            param_1->m_animationLength = 3722304989;
            param_1->m_loopBehaviour = -572662307;
            param_1->m_loopLength = 3722304989;
            param_1->m_tweenLastFrameToFirst = 221;
            *(undefined3*)&param_1->field_121 = 14540253;
            param_1->m_loopsCompleted = 3722304989;
            *(undefined8*)&param_1->field_96 = 15987178197214944733;
            *(undefined8*)&param_1->field_104 = 15987178197214944733;
            param_1->field_80 = 15987178197214944733;
            param_1->field_88 = 15987178197214944733;
            *(undefined8*)&param_1->field_64 = 15987178197214944733;
            *(undefined8*)&param_1->field_72 = 15987178197214944733;
            *(undefined8*)&param_1->field_48 = 15987178197214944733;
            *(undefined8*)&param_1->field_56 = 15987178197214944733;
            *(undefined8*)&param_1->field_32 = 15987178197214944733;
            *(undefined8*)&param_1->field_40 = 15987178197214944733;
            *(undefined8*)&param_1->field_16 = 15987178197214944733;
            *(undefined8*)&param_1->field_24 = 15987178197214944733;
            param_1->field_0 = (undefined*)15987178197214944733;
            *(undefined8*)&param_1->field_8 = 15987178197214944733;
            std::unique_lock<std::mutex>::unique_lock(local_20, (mutex*)PTR_m_mutex_100ee6010);
            this_00 = (VectorFastPool<graphics::AnimationParameters>*)
                MakeUniquePool<graphics::AnimationParameters, 512>::GetPool();
            this_00->deallocate(param_1);
            std::unique_lock<std::mutex>::~unique_lock(local_20);
        }
    }

    // 0x1006728c0, 176 bytes, inline, placed by class name
    // MakeUniquePool<graphics::AnimationParameters, 512>::GetPool()
    undefined* MakeUniquePool<graphics::AnimationParameters, 512>::GetPool() {
        ulong* puVar2;
        ulong local_20[2];

        if (*PTR_pool_100ee5070 == '\0') {
            if (___cxa_guard_acquire(PTR_pool_100ee5070) != 0) {
                local_20[0] = 16;
                local_20[1] = 16;
                puVar2 = std::max<unsigned long>(local_20, local_20 + 1);
                new (PTR_pool_100ee9c68) VectorFastPool<graphics::AnimationParameters>(512, *puVar2);
                ___cxa_atexit(PTR__VectorFastPool_100ee63a8, PTR_pool_100ee9c68, 4294967296);
                ___cxa_guard_release(PTR_pool_100ee5070);
            }
        }
        return PTR_pool_100ee9c68;
    }

    // 0x10080d2b0, 96 bytes, base-object constructor, inline, placed by class name
    // MakeUniquePool<graphics::GeometryBatchInstance, 3072>::MakeUniquePool()
    void MakeUniquePool<graphics::GeometryBatchInstance, 3072>::MakeUniquePool(
        MakeUniquePool<graphics::GeometryBatchInstance, 3072>* this) {
        undefined1 uVar1;

        if (*PTR_registered_100ee5088 == '\0') {
            if (___cxa_guard_acquire(PTR_registered_100ee5088) != 0) {
                uVar1 = RegisterThisUniquePool();
                *PTR_registered_100ee9c80 = uVar1;
                ___cxa_guard_release(PTR_registered_100ee5088);
            }
        }
    }

    // 0x100817100, 224 bytes, inline, placed by class name
    // std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> MakeUniquePool<graphics::GeometryBatchInstance, 3072>::MakeUnique<graphics::GeometryBatchInstance&, graphics::Model&, bool>(graphics::GeometryBatchInstance&, graphics::Model&, bool&&)
    /* std::unique_ptr<graphics::GeometryBatchInstance,
   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
   MakeUniquePool<graphics::GeometryBatchInstance,
   3072>::MakeUnique<graphics::GeometryBatchInstance&, graphics::Model&,
   bool>(graphics::GeometryBatchInstance&, graphics::Model&, bool&&) */

    MakeUniquePool<graphics::GeometryBatchInstance, 3072>*
    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::MakeUnique<graphics::GeometryBatchInstance&,
                                                                      graphics::Model&, bool>(
        MakeUniquePool<graphics::GeometryBatchInstance, 3072>* this, GeometryBatchInstance* param_1, Model* param_2,
        bool* param_3) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* this_00;
        long lVar1;
        VectorFastPool<graphics::GeometryBatchInstance>* this_01;
        undefined8 uVar2;
        void* pvVar3;
        GeometryBatchInstance* this_02;
        unique_lock<std::mutex> local_38[16];

        std::unique_lock<std::mutex>::unique_lock(local_38, (mutex*)PTR_m_mutex_100ee6020);
        this_00 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        lVar1 = this_00->size();
        if (*(ulong*)PTR_m_peak_100ee6018 < lVar1 + 1U) {
            *(ulong*)PTR_m_peak_100ee6018 = lVar1 + 1U;
        }
        this_01 = (VectorFastPool<graphics::GeometryBatchInstance>*)GetPool();
        uVar2 = this_01->allocate();
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::unique_ptr<true,
                                                                                                              void>(
            this, uVar2);
        std::unique_lock<std::mutex>::unlock(local_38);
        pvVar3 = (void*)get();
        _memset(pvVar3, 205, 896);
        this_02 = (GeometryBatchInstance*)get();
        graphics::GeometryBatchInstance::GeometryBatchInstance(this_02, param_1, param_2, *param_3);
        std::unique_lock<std::mutex>::~unique_lock(local_38);
        return this;
    }

    // 0x1008172a0, 224 bytes, inline, placed by class name
    // std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter> MakeUniquePool<graphics::BillboardBatchInstance, 64>::MakeUnique<graphics::BillboardBatchInstance&, graphics::Model&, bool>(graphics::BillboardBatchInstance&, graphics::Model&, bool&&)
    /* std::unique_ptr<graphics::BillboardBatchInstance,
   MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>
   MakeUniquePool<graphics::BillboardBatchInstance,
   64>::MakeUnique<graphics::BillboardBatchInstance&, graphics::Model&,
   bool>(graphics::BillboardBatchInstance&, graphics::Model&, bool&&) */

    MakeUniquePool<graphics::BillboardBatchInstance, 64>*
    MakeUniquePool<graphics::BillboardBatchInstance, 64>::MakeUnique<graphics::BillboardBatchInstance&,
                                                                     graphics::Model&, bool>(
        MakeUniquePool<graphics::BillboardBatchInstance, 64>* this, BillboardBatchInstance* param_1, Model* param_2,
        bool* param_3) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* this_00;
        long lVar1;
        VectorFastPool<graphics::BillboardBatchInstance>* this_01;
        undefined8 uVar2;
        void* pvVar3;
        BillboardBatchInstance* this_02;
        unique_lock<std::mutex> local_38[16];

        std::unique_lock<std::mutex>::unique_lock(local_38, (mutex*)PTR_m_mutex_100ee6030);
        this_00 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        lVar1 = this_00->size();
        if (*(ulong*)PTR_m_peak_100ee6028 < lVar1 + 1U) {
            *(ulong*)PTR_m_peak_100ee6028 = lVar1 + 1U;
        }
        this_01 = (VectorFastPool<graphics::BillboardBatchInstance>*)GetPool();
        uVar2 = this_01->allocate();
        std::unique_ptr<graphics::BillboardBatchInstance,
                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>::unique_ptr<true,
                                                                                                             void>(
            this, uVar2);
        std::unique_lock<std::mutex>::unlock(local_38);
        pvVar3 = (void*)get();
        _memset(pvVar3, 205, 768);
        this_02 = (BillboardBatchInstance*)get();
        graphics::BillboardBatchInstance::BillboardBatchInstance(this_02, param_1, param_2, *param_3);
        std::unique_lock<std::mutex>::~unique_lock(local_38);
        return this;
    }

    // 0x100818ec0, 208 bytes, inline, placed by class name
    // std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> MakeUniquePool<graphics::GeometryBatchInstance, 3072>::MakeUnique<graphics::GeometryBatchInstance, graphics::Model&>(graphics::GeometryBatchInstance&&, graphics::Model&)
    /* std::unique_ptr<graphics::GeometryBatchInstance,
   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
   MakeUniquePool<graphics::GeometryBatchInstance,
   3072>::MakeUnique<graphics::GeometryBatchInstance,
   graphics::Model&>(graphics::GeometryBatchInstance&&, graphics::Model&) */

    MakeUniquePool<graphics::GeometryBatchInstance, 3072>*
    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::MakeUnique<
        graphics::GeometryBatchInstance, graphics::Model&>(MakeUniquePool<graphics::GeometryBatchInstance, 3072>* this,
                                                           GeometryBatchInstance* param_1, Model* param_2) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* this_00;
        long lVar1;
        VectorFastPool<graphics::GeometryBatchInstance>* this_01;
        undefined8 uVar2;
        void* pvVar3;
        GeometryBatchInstance* this_02;
        unique_lock<std::mutex> local_30[16];

        std::unique_lock<std::mutex>::unique_lock(local_30, (mutex*)PTR_m_mutex_100ee6020);
        this_00 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        lVar1 = this_00->size();
        if (*(ulong*)PTR_m_peak_100ee6018 < lVar1 + 1U) {
            *(ulong*)PTR_m_peak_100ee6018 = lVar1 + 1U;
        }
        this_01 = (VectorFastPool<graphics::GeometryBatchInstance>*)GetPool();
        uVar2 = this_01->allocate();
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::unique_ptr<true,
                                                                                                              void>(
            this, uVar2);
        std::unique_lock<std::mutex>::unlock(local_30);
        pvVar3 = (void*)get();
        _memset(pvVar3, 205, 896);
        this_02 = (GeometryBatchInstance*)get();
        graphics::GeometryBatchInstance::GeometryBatchInstance(this_02, param_1, param_2);
        std::unique_lock<std::mutex>::~unique_lock(local_30);
        return this;
    }

    // 0x100818f90, 208 bytes, inline, placed by class name
    // std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter> MakeUniquePool<graphics::BillboardBatchInstance, 64>::MakeUnique<graphics::BillboardBatchInstance, graphics::Model&>(graphics::BillboardBatchInstance&&, graphics::Model&)
    /* std::unique_ptr<graphics::BillboardBatchInstance,
   MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>
   MakeUniquePool<graphics::BillboardBatchInstance,
   64>::MakeUnique<graphics::BillboardBatchInstance,
   graphics::Model&>(graphics::BillboardBatchInstance&&, graphics::Model&) */

    MakeUniquePool<graphics::BillboardBatchInstance, 64>*
    MakeUniquePool<graphics::BillboardBatchInstance, 64>::MakeUnique<
        graphics::BillboardBatchInstance, graphics::Model&>(MakeUniquePool<graphics::BillboardBatchInstance, 64>* this,
                                                            BillboardBatchInstance* param_1, Model* param_2) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* this_00;
        long lVar1;
        VectorFastPool<graphics::BillboardBatchInstance>* this_01;
        undefined8 uVar2;
        void* pvVar3;
        BillboardBatchInstance* this_02;
        unique_lock<std::mutex> local_30[16];

        std::unique_lock<std::mutex>::unique_lock(local_30, (mutex*)PTR_m_mutex_100ee6030);
        this_00 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        lVar1 = this_00->size();
        if (*(ulong*)PTR_m_peak_100ee6028 < lVar1 + 1U) {
            *(ulong*)PTR_m_peak_100ee6028 = lVar1 + 1U;
        }
        this_01 = (VectorFastPool<graphics::BillboardBatchInstance>*)GetPool();
        uVar2 = this_01->allocate();
        std::unique_ptr<graphics::BillboardBatchInstance,
                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>::unique_ptr<true,
                                                                                                             void>(
            this, uVar2);
        std::unique_lock<std::mutex>::unlock(local_30);
        pvVar3 = (void*)get();
        _memset(pvVar3, 205, 768);
        this_02 = (BillboardBatchInstance*)get();
        graphics::BillboardBatchInstance::BillboardBatchInstance(this_02, param_1, param_2);
        std::unique_lock<std::mutex>::~unique_lock(local_30);
        return this;
    }

    // 0x10081b480, 208 bytes, inline, placed by class name
    // std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> MakeUniquePool<graphics::GeometryBatchInstance, 3072>::MakeUnique<graphics::Model&, unsigned short&>(graphics::Model&, unsigned short&)
    /* std::unique_ptr<graphics::GeometryBatchInstance,
   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
   MakeUniquePool<graphics::GeometryBatchInstance,
   3072>::MakeUnique<graphics::Model&, unsigned short&>(graphics::Model&, unsigned short&)
    */

    MakeUniquePool<graphics::GeometryBatchInstance, 3072>*
    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::MakeUnique<graphics::Model&, unsigned short&>(
        MakeUniquePool<graphics::GeometryBatchInstance, 3072>* this, Model* param_1, ushort* param_2) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* this_00;
        long lVar1;
        VectorFastPool<graphics::GeometryBatchInstance>* this_01;
        undefined8 uVar2;
        void* pvVar3;
        GeometryBatchInstance* this_02;
        unique_lock<std::mutex> local_30[16];

        std::unique_lock<std::mutex>::unique_lock(local_30, (mutex*)PTR_m_mutex_100ee6020);
        this_00 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        lVar1 = this_00->size();
        if (*(ulong*)PTR_m_peak_100ee6018 < lVar1 + 1U) {
            *(ulong*)PTR_m_peak_100ee6018 = lVar1 + 1U;
        }
        this_01 = (VectorFastPool<graphics::GeometryBatchInstance>*)GetPool();
        uVar2 = this_01->allocate();
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>::unique_ptr<true,
                                                                                                              void>(
            this, uVar2);
        std::unique_lock<std::mutex>::unlock(local_30);
        pvVar3 = (void*)get();
        _memset(pvVar3, 205, 896);
        this_02 = (GeometryBatchInstance*)get();
        graphics::GeometryBatchInstance::GeometryBatchInstance(this_02, param_1, *param_2);
        std::unique_lock<std::mutex>::~unique_lock(local_30);
        return this;
    }

    // 0x10081b550, 208 bytes, inline, placed by class name
    // std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter> MakeUniquePool<graphics::BillboardBatchInstance, 64>::MakeUnique<graphics::Model&, unsigned char&>(graphics::Model&, unsigned char&)
    /* std::unique_ptr<graphics::BillboardBatchInstance,
   MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>
   MakeUniquePool<graphics::BillboardBatchInstance, 64>::MakeUnique<graphics::Model&,
   unsigned char&>(graphics::Model&, unsigned char&) */

    MakeUniquePool<graphics::BillboardBatchInstance, 64>*
    MakeUniquePool<graphics::BillboardBatchInstance, 64>::MakeUnique<graphics::Model&, unsigned char&>(
        MakeUniquePool<graphics::BillboardBatchInstance, 64>* this, Model* param_1, uchar* param_2) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* this_00;
        long lVar1;
        VectorFastPool<graphics::BillboardBatchInstance>* this_01;
        undefined8 uVar2;
        void* pvVar3;
        BillboardBatchInstance* this_02;
        unique_lock<std::mutex> local_30[16];

        std::unique_lock<std::mutex>::unique_lock(local_30, (mutex*)PTR_m_mutex_100ee6030);
        this_00 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        lVar1 = this_00->size();
        if (*(ulong*)PTR_m_peak_100ee6028 < lVar1 + 1U) {
            *(ulong*)PTR_m_peak_100ee6028 = lVar1 + 1U;
        }
        this_01 = (VectorFastPool<graphics::BillboardBatchInstance>*)GetPool();
        uVar2 = this_01->allocate();
        std::unique_ptr<graphics::BillboardBatchInstance,
                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>::unique_ptr<true,
                                                                                                             void>(
            this, uVar2);
        std::unique_lock<std::mutex>::unlock(local_30);
        pvVar3 = (void*)get();
        _memset(pvVar3, 205, 768);
        this_02 = (BillboardBatchInstance*)get();
        graphics::BillboardBatchInstance::BillboardBatchInstance(this_02, param_1, (ushort)*param_2);
        std::unique_lock<std::mutex>::~unique_lock(local_30);
        return this;
    }

    // 0x100821b90, 96 bytes, base-object constructor, inline, placed by class name
    // MakeUniquePool<graphics::Billboard, 32>::MakeUniquePool()
    void MakeUniquePool<graphics::Billboard, 32>::MakeUniquePool(MakeUniquePool<graphics::Billboard, 32>* this) {
        undefined1 uVar1;

        if (*PTR_registered_100ee50b8 == '\0') {
            if (___cxa_guard_acquire(PTR_registered_100ee50b8) != 0) {
                uVar1 = RegisterThisUniquePool();
                *PTR_registered_100ee9cb0 = uVar1;
                ___cxa_guard_release(PTR_registered_100ee50b8);
            }
        }
    }

    // 0x100836b30, 432 bytes, inline, placed by class name
    // MakeUniquePool<graphics::GeometryBatchInstance, 3072>::RegisterThisUniquePool()
    void MakeUniquePool<graphics::GeometryBatchInstance, 3072>::RegisterThisUniquePool() {
        long lVar1;
        ulong uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        char* pcVar5;
        function local_2f8[176];
        fixed_string<char, 512, true, eastl::allocator> local_248[552];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(
            local_248, "static bool MakeUniquePool<graphics::GeometryBatchInstance, 3072>::RegisterThisUniquePool() [T "
                       "= graphics::GeometryBatchInstance, CAPACITY = 3072]");
        lVar1 = local_248->find("T = jag::", 0);
        if (lVar1 != -1) {
            local_248->replace(0, lVar1 + 9, "UniquePool\t");
            uVar2 = local_248->find(", CAPACITY = ", 0);
            if (uVar2 != 18446744073709551615) {
                local_248->replace(uVar2, 13, "[");
            }
        }
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::function<
            MakeUniquePool<graphics::GeometryBatchInstance, 3072>::RegisterThisUniquePool()::_lambda(
                shareduniquedebug::SharedPoolInfo&) _1_,
            void>(local_2f8);
        shareduniquedebug::RegisterUniquePool(
            "static bool MakeUniquePool<graphics::GeometryBatchInstance, 3072>::RegisterThisUniquePool() [T = "
            "graphics::GeometryBatchInstance, CAPACITY = 3072]",
            local_2f8);
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::~function(
            (function<void(shareduniquedebug::SharedPoolInfo&)>*)local_2f8);
        new (local_2f8) eastl::fixed_string<char, 128, true, eastl::allocator>();
        uVar3 = logger::default_logger();
        uVar4 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        pcVar5 =
            DataSizeStringMB<eastl::fixed_string<char, 128, true, eastl::allocator>>((fixed_string*)local_2f8, 2752512);
        logger::Logger::Log(
            uVar3, 0, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/MakeUniquePool.h", 133,
            "%s\t%s", uVar4, pcVar5);
        /* WARNING: Subroutine does not return */
        local_2f8->~fixed_string();
    }

    // 0x100837470, 16 bytes, inline, placed by class name
    // MakeUniquePool<graphics::GeometryBatchInstance, 3072>::RegisterThisUniquePool()::{lambda(shareduniquedebug::SharedPoolInfo&)#1}::operator()(shareduniquedebug::SharedPoolInfo&) const
    /* MakeUniquePool<graphics::GeometryBatchInstance,
   3072>::RegisterThisUniquePool()::{lambda(shareduniquedebug::SharedPoolInfo&)#1}::TEMPNAMEPLACEHOLDERVALUE(shareduniquedebug::SharedPoolInfo&)
   const */

    void MakeUniquePool<graphics::GeometryBatchInstance, 3072>::RegisterThisUniquePool()::{
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(_lambda_jag__shareduniquedebug__SharedPoolInfo___1_* this, SharedPoolInfo * param_1)

    {
        GetUniquePoolInfo(param_1);
    }

    // 0x100837480, 240 bytes, inline, placed by class name
    // MakeUniquePool<graphics::GeometryBatchInstance, 3072>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo&)
    void MakeUniquePool<graphics::GeometryBatchInstance, 3072>::GetUniquePoolInfo(SharedPoolInfo* param_1) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* pVVar1;
        undefined8 uVar2;
        long lVar3;
        ShuffledPacketFactory* pSVar4;
        unique_lock<std::mutex> local_20[16];

        std::unique_lock<std::mutex>::unique_lock(local_20, (mutex*)PTR_m_mutex_100ee6020);
        *(undefined8*)(param_1 + 48) = 0;
        *(undefined8*)(param_1 + 56) = 0;
        *(undefined8*)(param_1 + 32) = 0;
        *(undefined8*)(param_1 + 40) = 0;
        *(undefined8*)(param_1 + 16) = 0;
        *(undefined8*)(param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)(param_1 + 8) = 0;
        *(undefined8*)(param_1 + 64) = 0;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        uVar2 = pVVar1->size();
        *(undefined8*)param_1 = uVar2;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        lVar3 = pVVar1->capacity();
        *(long*)(param_1 + 8) = lVar3;
        *(undefined8*)(param_1 + 16) = *(undefined8*)PTR_m_peak_100ee6018;
        *(undefined8*)(param_1 + 32) = 3072;
        if (lVar3 != 0) {
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<graphics::GeometryBatchInstance, unsigned long>::GetTotalSize(*(ulong*)param_1);
            *(undefined8*)(param_1 + 40) = uVar2;
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<graphics::GeometryBatchInstance, unsigned long>::GetTotalSize(*(ulong*)(param_1 + 8));
            *(undefined8*)(param_1 + 48) = uVar2;
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<graphics::GeometryBatchInstance, unsigned long>::GetTotalSize(*(ulong*)(param_1 + 32));
            *(undefined8*)(param_1 + 56) = uVar2;
        }
        *(char**)(param_1 + 64) = "static void MakeUniquePool<graphics::GeometryBatchInstance, "
                                  "3072>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo &) [T = "
                                  "graphics::GeometryBatchInstance, CAPACITY = 3072]";
        std::unique_lock<std::mutex>::~unique_lock(local_20);
    }

    // 0x1008430a0, 112 bytes, inline, placed by class name
    // MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter::operator()(graphics::BillboardBatchInstance*) const
    /* MakeUniquePool<graphics::BillboardBatchInstance,
   64>::UniquePoolDeleter::TEMPNAMEPLACEHOLDERVALUE(graphics::BillboardBatchInstance*) const */

    void MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter::operator()(
        BillboardBatchInstance* param_1) {
        VectorFastPool<graphics::BillboardBatchInstance>* this_00;
        unique_lock<std::mutex> local_20[16];

        if (param_1 != (BillboardBatchInstance*)0) {
            (*(code*)*param_1->field_0)(param_1);
            _memset(param_1, 221, 768);
            std::unique_lock<std::mutex>::unique_lock(local_20, (mutex*)PTR_m_mutex_100ee6030);
            this_00 = (VectorFastPool<graphics::BillboardBatchInstance>*)
                MakeUniquePool<graphics::BillboardBatchInstance, 64>::GetPool();
            this_00->deallocate(param_1);
            std::unique_lock<std::mutex>::~unique_lock(local_20);
        }
    }

    // 0x10084a610, 432 bytes, inline, placed by class name
    // MakeUniquePool<graphics::Billboard, 32>::RegisterThisUniquePool()
    void MakeUniquePool<graphics::Billboard, 32>::RegisterThisUniquePool() {
        long lVar1;
        ulong uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        char* pcVar5;
        function local_2f8[176];
        fixed_string<char, 512, true, eastl::allocator> local_248[552];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(
            local_248, "static bool MakeUniquePool<graphics::Billboard, 32>::RegisterThisUniquePool() [T = "
                       "graphics::Billboard, CAPACITY = 32]");
        lVar1 = local_248->find("T = jag::", 0);
        if (lVar1 != -1) {
            local_248->replace(0, lVar1 + 9, "UniquePool\t");
            uVar2 = local_248->find(", CAPACITY = ", 0);
            if (uVar2 != 18446744073709551615) {
                local_248->replace(uVar2, 13, "[");
            }
        }
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::function<
            MakeUniquePool<graphics::Billboard, 32>::RegisterThisUniquePool()::_lambda(
                shareduniquedebug::SharedPoolInfo&) _1_,
            void>(local_2f8);
        shareduniquedebug::RegisterUniquePool("static bool MakeUniquePool<graphics::Billboard, "
                                              "32>::RegisterThisUniquePool() [T = graphics::Billboard, CAPACITY = 32]",
                                              local_2f8);
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::~function(
            (function<void(shareduniquedebug::SharedPoolInfo&)>*)local_2f8);
        new (local_2f8) eastl::fixed_string<char, 128, true, eastl::allocator>();
        uVar3 = logger::default_logger();
        uVar4 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        pcVar5 =
            DataSizeStringMB<eastl::fixed_string<char, 128, true, eastl::allocator>>((fixed_string*)local_2f8, 2176);
        logger::Logger::Log(
            uVar3, 0, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/MakeUniquePool.h", 133,
            "%s\t%s", uVar4, pcVar5);
        /* WARNING: Subroutine does not return */
        local_2f8->~fixed_string();
    }

    // 0x10084af50, 16 bytes, inline, placed by class name
    // MakeUniquePool<graphics::Billboard, 32>::RegisterThisUniquePool()::{lambda(shareduniquedebug::SharedPoolInfo&)#1}::operator()(shareduniquedebug::SharedPoolInfo&) const
    /* MakeUniquePool<graphics::Billboard,
   32>::RegisterThisUniquePool()::{lambda(shareduniquedebug::SharedPoolInfo&)#1}::TEMPNAMEPLACEHOLDERVALUE(shareduniquedebug::SharedPoolInfo&)
   const */

    void MakeUniquePool<graphics::Billboard, 32>::RegisterThisUniquePool()::{
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(_lambda_jag__shareduniquedebug__SharedPoolInfo___1_* this, SharedPoolInfo * param_1)

    {
        GetUniquePoolInfo(param_1);
    }

    // 0x10084af60, 240 bytes, inline, placed by class name
    // MakeUniquePool<graphics::Billboard, 32>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo&)
    void MakeUniquePool<graphics::Billboard, 32>::GetUniquePoolInfo(SharedPoolInfo* param_1) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* pVVar1;
        undefined8 uVar2;
        long lVar3;
        ShuffledPacketFactory* pSVar4;
        unique_lock<std::mutex> local_20[16];

        std::unique_lock<std::mutex>::unique_lock(local_20, (mutex*)PTR_m_mutex_100ee6050);
        *(undefined8*)(param_1 + 48) = 0;
        *(undefined8*)(param_1 + 56) = 0;
        *(undefined8*)(param_1 + 32) = 0;
        *(undefined8*)(param_1 + 40) = 0;
        *(undefined8*)(param_1 + 16) = 0;
        *(undefined8*)(param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)(param_1 + 8) = 0;
        *(undefined8*)(param_1 + 64) = 0;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        uVar2 = pVVar1->size();
        *(undefined8*)param_1 = uVar2;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        lVar3 = pVVar1->capacity();
        *(long*)(param_1 + 8) = lVar3;
        *(undefined8*)(param_1 + 16) = *(undefined8*)PTR_m_peak_100ee6048;
        *(undefined8*)(param_1 + 32) = 32;
        if (lVar3 != 0) {
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<graphics::Billboard, unsigned long>::GetTotalSize(*(ulong*)param_1);
            *(undefined8*)(param_1 + 40) = uVar2;
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<graphics::Billboard, unsigned long>::GetTotalSize(*(ulong*)(param_1 + 8));
            *(undefined8*)(param_1 + 48) = uVar2;
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<graphics::Billboard, unsigned long>::GetTotalSize(*(ulong*)(param_1 + 32));
            *(undefined8*)(param_1 + 56) = uVar2;
        }
        *(char**)(param_1 + 64) =
            "static void MakeUniquePool<graphics::Billboard, 32>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo "
            "&) [T = graphics::Billboard, CAPACITY = 32]";
        std::unique_lock<std::mutex>::~unique_lock(local_20);
    }

    // 0x10084b050, 176 bytes, inline, placed by class name
    // MakeUniquePool<graphics::Billboard, 32>::GetPool()
    undefined* MakeUniquePool<graphics::Billboard, 32>::GetPool() {
        ulong* puVar2;
        ulong local_20[2];

        if (*PTR_pool_100ee50b0 == '\0') {
            if (___cxa_guard_acquire(PTR_pool_100ee50b0) != 0) {
                local_20[0] = 16;
                local_20[1] = 4;
                puVar2 = std::max<unsigned long>(local_20, local_20 + 1);
                new (PTR_pool_100ee9ca8) VectorFastPool<graphics::Billboard>(32, *puVar2);
                ___cxa_atexit(PTR__VectorFastPool_100ee63c8, PTR_pool_100ee9ca8, 4294967296);
                ___cxa_guard_release(PTR_pool_100ee50b0);
            }
        }
        return PTR_pool_100ee9ca8;
    }

    // 0x100866180, 96 bytes, base-object constructor, inline, placed by class name
    // MakeUniquePool<graphics::BillboardBatchInstance, 64>::MakeUniquePool()
    void MakeUniquePool<graphics::BillboardBatchInstance, 64>::MakeUniquePool(
        MakeUniquePool<graphics::BillboardBatchInstance, 64>* this) {
        undefined1 uVar1;

        if (*PTR_registered_100ee5098 == '\0') {
            if (___cxa_guard_acquire(PTR_registered_100ee5098) != 0) {
                uVar1 = RegisterThisUniquePool();
                *PTR_registered_100ee9c90 = uVar1;
                ___cxa_guard_release(PTR_registered_100ee5098);
            }
        }
    }

    // 0x1008850b0, 432 bytes, inline, placed by class name
    // MakeUniquePool<graphics::BillboardBatchInstance, 64>::RegisterThisUniquePool()
    void MakeUniquePool<graphics::BillboardBatchInstance, 64>::RegisterThisUniquePool() {
        long lVar1;
        ulong uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        char* pcVar5;
        function local_2f8[176];
        fixed_string<char, 512, true, eastl::allocator> local_248[552];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(
            local_248, "static bool MakeUniquePool<graphics::BillboardBatchInstance, 64>::RegisterThisUniquePool() [T "
                       "= graphics::BillboardBatchInstance, CAPACITY = 64]");
        lVar1 = local_248->find("T = jag::", 0);
        if (lVar1 != -1) {
            local_248->replace(0, lVar1 + 9, "UniquePool\t");
            uVar2 = local_248->find(", CAPACITY = ", 0);
            if (uVar2 != 18446744073709551615) {
                local_248->replace(uVar2, 13, "[");
            }
        }
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::function<
            MakeUniquePool<graphics::BillboardBatchInstance, 64>::RegisterThisUniquePool()::_lambda(
                shareduniquedebug::SharedPoolInfo&) _1_,
            void>(local_2f8);
        shareduniquedebug::RegisterUniquePool(
            "static bool MakeUniquePool<graphics::BillboardBatchInstance, 64>::RegisterThisUniquePool() [T = "
            "graphics::BillboardBatchInstance, CAPACITY = 64]",
            local_2f8);
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::~function(
            (function<void(shareduniquedebug::SharedPoolInfo&)>*)local_2f8);
        new (local_2f8) eastl::fixed_string<char, 128, true, eastl::allocator>();
        uVar3 = logger::default_logger();
        uVar4 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        pcVar5 =
            DataSizeStringMB<eastl::fixed_string<char, 128, true, eastl::allocator>>((fixed_string*)local_2f8, 49152);
        logger::Logger::Log(
            uVar3, 0, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/MakeUniquePool.h", 133,
            "%s\t%s", uVar4, pcVar5);
        /* WARNING: Subroutine does not return */
        local_2f8->~fixed_string();
    }

    // 0x1008859f0, 16 bytes, inline, placed by class name
    // MakeUniquePool<graphics::BillboardBatchInstance, 64>::RegisterThisUniquePool()::{lambda(shareduniquedebug::SharedPoolInfo&)#1}::operator()(shareduniquedebug::SharedPoolInfo&) const
    /* MakeUniquePool<graphics::BillboardBatchInstance,
   64>::RegisterThisUniquePool()::{lambda(shareduniquedebug::SharedPoolInfo&)#1}::TEMPNAMEPLACEHOLDERVALUE(shareduniquedebug::SharedPoolInfo&)
   const */

    void MakeUniquePool<graphics::BillboardBatchInstance, 64>::RegisterThisUniquePool()::{
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(_lambda_jag__shareduniquedebug__SharedPoolInfo___1_* this, SharedPoolInfo * param_1)

    {
        GetUniquePoolInfo(param_1);
    }

    // 0x100885a00, 240 bytes, inline, placed by class name
    // MakeUniquePool<graphics::BillboardBatchInstance, 64>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo&)
    void MakeUniquePool<graphics::BillboardBatchInstance, 64>::GetUniquePoolInfo(SharedPoolInfo* param_1) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* pVVar1;
        undefined8 uVar2;
        long lVar3;
        ShuffledPacketFactory* pSVar4;
        unique_lock<std::mutex> local_20[16];

        std::unique_lock<std::mutex>::unique_lock(local_20, (mutex*)PTR_m_mutex_100ee6030);
        *(undefined8*)(param_1 + 48) = 0;
        *(undefined8*)(param_1 + 56) = 0;
        *(undefined8*)(param_1 + 32) = 0;
        *(undefined8*)(param_1 + 40) = 0;
        *(undefined8*)(param_1 + 16) = 0;
        *(undefined8*)(param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)(param_1 + 8) = 0;
        *(undefined8*)(param_1 + 64) = 0;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        uVar2 = pVVar1->size();
        *(undefined8*)param_1 = uVar2;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        lVar3 = pVVar1->capacity();
        *(long*)(param_1 + 8) = lVar3;
        *(undefined8*)(param_1 + 16) = *(undefined8*)PTR_m_peak_100ee6028;
        *(undefined8*)(param_1 + 32) = 64;
        if (lVar3 != 0) {
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<graphics::BillboardBatchInstance, unsigned long>::GetTotalSize(*(ulong*)param_1);
            *(undefined8*)(param_1 + 40) = uVar2;
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<graphics::BillboardBatchInstance, unsigned long>::GetTotalSize(*(ulong*)(param_1 + 8));
            *(undefined8*)(param_1 + 48) = uVar2;
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<graphics::BillboardBatchInstance, unsigned long>::GetTotalSize(*(ulong*)(param_1 + 32));
            *(undefined8*)(param_1 + 56) = uVar2;
        }
        *(char**)(param_1 + 64) = "static void MakeUniquePool<graphics::BillboardBatchInstance, "
                                  "64>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo &) [T = "
                                  "graphics::BillboardBatchInstance, CAPACITY = 64]";
        std::unique_lock<std::mutex>::~unique_lock(local_20);
    }

    // 0x100885af0, 176 bytes, inline, placed by class name
    // MakeUniquePool<graphics::BillboardBatchInstance, 64>::GetPool()
    undefined* MakeUniquePool<graphics::BillboardBatchInstance, 64>::GetPool() {
        ulong* puVar2;
        ulong local_20[2];

        if (*PTR_pool_100ee5090 == '\0') {
            if (___cxa_guard_acquire(PTR_pool_100ee5090) != 0) {
                local_20[0] = 16;
                local_20[1] = 16;
                puVar2 = std::max<unsigned long>(local_20, local_20 + 1);
                new (PTR_pool_100ee9c88) VectorFastPool<graphics::BillboardBatchInstance>(64, *puVar2);
                ___cxa_atexit(PTR__VectorFastPool_100ee63b8, PTR_pool_100ee9c88, 4294967296);
                ___cxa_guard_release(PTR_pool_100ee5090);
            }
        }
        return PTR_pool_100ee9c88;
    }

    // 0x100956100, 256 bytes, inline, placed by class name
    // std::unique_ptr<graphics::AnimState, MakeUniquePool<graphics::AnimState, 4096>::UniquePoolDeleter> MakeUniquePool<graphics::AnimState, 4096>::MakeUnique<std::unique_ptr<graphics::BlendTreeNode, std::default_delete<graphics::BlendTreeNode> >, graphics::AnimationStateResourceList>(std::unique_ptr<graphics::BlendTreeNode, std::default_delete<graphics::BlendTreeNode> >&&, graphics::AnimationStateResourceList&&)
    /* std::unique_ptr<graphics::AnimState, MakeUniquePool<graphics::AnimState,
   4096>::UniquePoolDeleter> MakeUniquePool<graphics::AnimState,
   4096>::MakeUnique<std::unique_ptr<graphics::BlendTreeNode,
   std::default_delete<graphics::BlendTreeNode> >,
   graphics::AnimationStateResourceList>(std::unique_ptr<graphics::BlendTreeNode,
   std::default_delete<graphics::BlendTreeNode> >&&,
   graphics::AnimationStateResourceList&&) */

    MakeUniquePool<graphics::AnimState, 4096>* MakeUniquePool<graphics::AnimState, 4096>::MakeUnique<
        std::unique_ptr<graphics::BlendTreeNode, std::default_delete<graphics::BlendTreeNode>>,
        graphics::AnimationStateResourceList>(MakeUniquePool<graphics::AnimState, 4096>* this, unique_ptr* param_1,
                                              AnimationStateResourceList* param_2) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* this_00;
        long lVar1;
        VectorFastPool<graphics::AnimState>* this_01;
        undefined8 uVar2;
        undefined8* puVar3;
        AnimState* this_02;
        unique_lock<std::mutex> local_30[16];

        std::unique_lock<std::mutex>::unique_lock(local_30, (mutex*)PTR_m_mutex_100ee6040);
        this_00 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        lVar1 = this_00->size();
        if (*(ulong*)PTR_m_peak_100ee6038 < lVar1 + 1U) {
            *(ulong*)PTR_m_peak_100ee6038 = lVar1 + 1U;
        }
        this_01 = (VectorFastPool<graphics::AnimState>*)GetPool();
        uVar2 = this_01->allocate();
        std::unique_ptr<graphics::AnimState,
                        MakeUniquePool<graphics::AnimState, 4096>::UniquePoolDeleter>::unique_ptr<true, void>(this,
                                                                                                              uVar2);
        std::unique_lock<std::mutex>::unlock(local_30);
        puVar3 = (undefined8*)get();
        *puVar3 = 14829735431805717965;
        puVar3[1] = 14829735431805717965;
        puVar3[2] = 14829735431805717965;
        puVar3[3] = 14829735431805717965;
        puVar3[4] = 14829735431805717965;
        puVar3[5] = 14829735431805717965;
        puVar3[6] = 14829735431805717965;
        puVar3[7] = 14829735431805717965;
        puVar3[8] = 14829735431805717965;
        puVar3[9] = 14829735431805717965;
        puVar3[10] = 14829735431805717965;
        puVar3[11] = 14829735431805717965;
        puVar3[12] = 14829735431805717965;
        puVar3[13] = 14829735431805717965;
        puVar3[14] = 14829735431805717965;
        puVar3[15] = 14829735431805717965;
        puVar3[16] = 14829735431805717965;
        puVar3[17] = 14829735431805717965;
        puVar3[18] = 14829735431805717965;
        puVar3[19] = 14829735431805717965;
        this_02 = (AnimState*)get();
        graphics::AnimState::AnimState(this_02, param_1, param_2);
        std::unique_lock<std::mutex>::~unique_lock(local_30);
        return this;
    }

    // 0x100956260, 240 bytes, inline, placed by class name
    // std::unique_ptr<graphics::AnimState, MakeUniquePool<graphics::AnimState, 4096>::UniquePoolDeleter> MakeUniquePool<graphics::AnimState, 4096>::MakeUnique<graphics::AnimationDescriptor&>(graphics::AnimationDescriptor&)
    /* std::unique_ptr<graphics::AnimState, MakeUniquePool<graphics::AnimState,
   4096>::UniquePoolDeleter> MakeUniquePool<graphics::AnimState,
   4096>::MakeUnique<graphics::AnimationDescriptor&>(graphics::AnimationDescriptor&) */

    MakeUniquePool<graphics::AnimState, 4096>*
    MakeUniquePool<graphics::AnimState, 4096>::MakeUnique<graphics::AnimationDescriptor&>(
        MakeUniquePool<graphics::AnimState, 4096>* this, AnimationDescriptor* param_1) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* this_00;
        long lVar1;
        VectorFastPool<graphics::AnimState>* this_01;
        undefined8 uVar2;
        undefined8* puVar3;
        AnimState* this_02;
        unique_lock<std::mutex> local_28[16];

        std::unique_lock<std::mutex>::unique_lock(local_28, (mutex*)PTR_m_mutex_100ee6040);
        this_00 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        lVar1 = this_00->size();
        if (*(ulong*)PTR_m_peak_100ee6038 < lVar1 + 1U) {
            *(ulong*)PTR_m_peak_100ee6038 = lVar1 + 1U;
        }
        this_01 = (VectorFastPool<graphics::AnimState>*)GetPool();
        uVar2 = this_01->allocate();
        std::unique_ptr<graphics::AnimState,
                        MakeUniquePool<graphics::AnimState, 4096>::UniquePoolDeleter>::unique_ptr<true, void>(this,
                                                                                                              uVar2);
        std::unique_lock<std::mutex>::unlock(local_28);
        puVar3 = (undefined8*)get();
        *puVar3 = 14829735431805717965;
        puVar3[1] = 14829735431805717965;
        puVar3[2] = 14829735431805717965;
        puVar3[3] = 14829735431805717965;
        puVar3[4] = 14829735431805717965;
        puVar3[5] = 14829735431805717965;
        puVar3[6] = 14829735431805717965;
        puVar3[7] = 14829735431805717965;
        puVar3[8] = 14829735431805717965;
        puVar3[9] = 14829735431805717965;
        puVar3[10] = 14829735431805717965;
        puVar3[11] = 14829735431805717965;
        puVar3[12] = 14829735431805717965;
        puVar3[13] = 14829735431805717965;
        puVar3[14] = 14829735431805717965;
        puVar3[15] = 14829735431805717965;
        puVar3[16] = 14829735431805717965;
        puVar3[17] = 14829735431805717965;
        puVar3[18] = 14829735431805717965;
        puVar3[19] = 14829735431805717965;
        this_02 = (AnimState*)get();
        graphics::AnimState::AnimState(this_02, param_1);
        std::unique_lock<std::mutex>::~unique_lock(local_28);
        return this;
    }

    // 0x100956350, 240 bytes, inline, placed by class name
    // std::unique_ptr<graphics::AnimState, MakeUniquePool<graphics::AnimState, 4096>::UniquePoolDeleter> MakeUniquePool<graphics::AnimState, 4096>::MakeUnique<>()
    /* std::unique_ptr<graphics::AnimState, MakeUniquePool<graphics::AnimState,
   4096>::UniquePoolDeleter> MakeUniquePool<graphics::AnimState, 4096>::MakeUnique<>() */

    MakeUniquePool<graphics::AnimState, 4096>*
    MakeUniquePool<graphics::AnimState, 4096>::MakeUnique<>(MakeUniquePool<graphics::AnimState, 4096>* this) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* this_00;
        long lVar1;
        VectorFastPool<graphics::AnimState>* this_01;
        undefined8 uVar2;
        undefined8* puVar3;
        AnimState* this_02;
        unique_lock<std::mutex> local_28[16];

        std::unique_lock<std::mutex>::unique_lock(local_28, (mutex*)PTR_m_mutex_100ee6040);
        this_00 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        lVar1 = this_00->size();
        if (*(ulong*)PTR_m_peak_100ee6038 < lVar1 + 1U) {
            *(ulong*)PTR_m_peak_100ee6038 = lVar1 + 1U;
        }
        this_01 = (VectorFastPool<graphics::AnimState>*)GetPool();
        uVar2 = this_01->allocate();
        std::unique_ptr<graphics::AnimState,
                        MakeUniquePool<graphics::AnimState, 4096>::UniquePoolDeleter>::unique_ptr<true, void>(this,
                                                                                                              uVar2);
        std::unique_lock<std::mutex>::unlock(local_28);
        puVar3 = (undefined8*)get();
        *puVar3 = 14829735431805717965;
        puVar3[1] = 14829735431805717965;
        puVar3[2] = 14829735431805717965;
        puVar3[3] = 14829735431805717965;
        puVar3[4] = 14829735431805717965;
        puVar3[5] = 14829735431805717965;
        puVar3[6] = 14829735431805717965;
        puVar3[7] = 14829735431805717965;
        puVar3[8] = 14829735431805717965;
        puVar3[9] = 14829735431805717965;
        puVar3[10] = 14829735431805717965;
        puVar3[11] = 14829735431805717965;
        puVar3[12] = 14829735431805717965;
        puVar3[13] = 14829735431805717965;
        puVar3[14] = 14829735431805717965;
        puVar3[15] = 14829735431805717965;
        puVar3[16] = 14829735431805717965;
        puVar3[17] = 14829735431805717965;
        puVar3[18] = 14829735431805717965;
        puVar3[19] = 14829735431805717965;
        this_02 = (AnimState*)get();
        graphics::AnimState::AnimState(this_02);
        std::unique_lock<std::mutex>::~unique_lock(local_28);
        return this;
    }

    // 0x100956780, 96 bytes, base-object constructor, inline, placed by class name
    // MakeUniquePool<graphics::AnimState, 4096>::MakeUniquePool()
    void MakeUniquePool<graphics::AnimState, 4096>::MakeUniquePool(MakeUniquePool<graphics::AnimState, 4096>* this) {
        undefined1 uVar1;

        if (*PTR_registered_100ee50a8 == '\0') {
            if (___cxa_guard_acquire(PTR_registered_100ee50a8) != 0) {
                uVar1 = RegisterThisUniquePool();
                *PTR_registered_100ee9ca0 = uVar1;
                ___cxa_guard_release(PTR_registered_100ee50a8);
            }
        }
    }

    // 0x100967ab0, 160 bytes, inline, placed by class name
    // MakeUniquePool<graphics::AnimState, 4096>::UniquePoolDeleter::operator()(graphics::AnimState*) const
    /* MakeUniquePool<graphics::AnimState,
   4096>::UniquePoolDeleter::TEMPNAMEPLACEHOLDERVALUE(graphics::AnimState*) const */

    void MakeUniquePool<graphics::AnimState, 4096>::UniquePoolDeleter::operator()(AnimState* param_1) {
        VectorFastPool<graphics::AnimState>* this_00;
        unique_lock<std::mutex> local_20[16];

        if (param_1 != (AnimState*)0) {
            param_1->~AnimState();
            *(undefined8*)&param_1[1].field_8 = 15987178197214944733;
            *(undefined8*)param_1[1].m_resources = 15987178197214944733;
            *(undefined8*)&param_1->field_128 = 15987178197214944733;
            *(undefined8*)(param_1 + 1) = 15987178197214944733;
            *(undefined8*)&param_1->field_112 = 15987178197214944733;
            *(undefined8*)&param_1->field_120 = 15987178197214944733;
            *(undefined8*)&param_1->field_96 = 15987178197214944733;
            *(undefined8*)&param_1->field_104 = 15987178197214944733;
            *(undefined8*)&param_1->field_80 = 15987178197214944733;
            *(undefined8*)&param_1->field_88 = 15987178197214944733;
            *(undefined8*)&param_1->field_64 = 15987178197214944733;
            *(undefined8*)&param_1->field_72 = 15987178197214944733;
            *(undefined8*)(param_1->m_resources + 32) = 15987178197214944733;
            *(undefined8*)&param_1->field_56 = 15987178197214944733;
            *(undefined8*)(param_1->m_resources + 16) = 15987178197214944733;
            *(undefined8*)(param_1->m_resources + 24) = 15987178197214944733;
            *(undefined8*)param_1->m_resources = 15987178197214944733;
            *(undefined8*)(param_1->m_resources + 8) = 15987178197214944733;
            *(undefined8*)param_1 = 15987178197214944733;
            *(undefined8*)&param_1->field_8 = 15987178197214944733;
            std::unique_lock<std::mutex>::unique_lock(local_20, (mutex*)PTR_m_mutex_100ee6040);
            this_00 = (VectorFastPool<graphics::AnimState>*)MakeUniquePool<graphics::AnimState, 4096>::GetPool();
            this_00->deallocate(param_1);
            std::unique_lock<std::mutex>::~unique_lock(local_20);
        }
    }

    // 0x100967b70, 176 bytes, inline, placed by class name
    // MakeUniquePool<graphics::AnimState, 4096>::GetPool()
    undefined* MakeUniquePool<graphics::AnimState, 4096>::GetPool() {
        ulong* puVar2;
        ulong local_20[2];

        if (*PTR_pool_100ee50a0 == '\0') {
            if (___cxa_guard_acquire(PTR_pool_100ee50a0) != 0) {
                local_20[0] = 16;
                local_20[1] = 8;
                puVar2 = std::max<unsigned long>(local_20, local_20 + 1);
                new (PTR_pool_100ee9c98) VectorFastPool<graphics::AnimState>(4096, *puVar2);
                ___cxa_atexit(PTR__VectorFastPool_100ee63c0, PTR_pool_100ee9c98, 4294967296);
                ___cxa_guard_release(PTR_pool_100ee50a0);
            }
        }
        return PTR_pool_100ee9c98;
    }

    // 0x100968530, 432 bytes, inline, placed by class name
    // MakeUniquePool<graphics::AnimState, 4096>::RegisterThisUniquePool()
    void MakeUniquePool<graphics::AnimState, 4096>::RegisterThisUniquePool() {
        long lVar1;
        ulong uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        char* pcVar5;
        function local_2f8[176];
        fixed_string<char, 512, true, eastl::allocator> local_248[552];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(
            local_248, "static bool MakeUniquePool<graphics::AnimState, 4096>::RegisterThisUniquePool() [T = "
                       "graphics::AnimState, CAPACITY = 4096]");
        lVar1 = local_248->find("T = jag::", 0);
        if (lVar1 != -1) {
            local_248->replace(0, lVar1 + 9, "UniquePool\t");
            uVar2 = local_248->find(", CAPACITY = ", 0);
            if (uVar2 != 18446744073709551615) {
                local_248->replace(uVar2, 13, "[");
            }
        }
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::function<
            MakeUniquePool<graphics::AnimState, 4096>::RegisterThisUniquePool()::_lambda(
                shareduniquedebug::SharedPoolInfo&) _1_,
            void>(local_2f8);
        shareduniquedebug::RegisterUniquePool(
            "static bool MakeUniquePool<graphics::AnimState, 4096>::RegisterThisUniquePool() [T = graphics::AnimState, "
            "CAPACITY = 4096]",
            local_2f8);
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::~function(
            (function<void(shareduniquedebug::SharedPoolInfo&)>*)local_2f8);
        new (local_2f8) eastl::fixed_string<char, 128, true, eastl::allocator>();
        uVar3 = logger::default_logger();
        uVar4 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        pcVar5 =
            DataSizeStringMB<eastl::fixed_string<char, 128, true, eastl::allocator>>((fixed_string*)local_2f8, 655360);
        logger::Logger::Log(
            uVar3, 0, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/MakeUniquePool.h", 133,
            "%s\t%s", uVar4, pcVar5);
        /* WARNING: Subroutine does not return */
        local_2f8->~fixed_string();
    }

    // 0x100968eb0, 16 bytes, inline, placed by class name
    // MakeUniquePool<graphics::AnimState, 4096>::RegisterThisUniquePool()::{lambda(shareduniquedebug::SharedPoolInfo&)#1}::operator()(shareduniquedebug::SharedPoolInfo&) const
    /* MakeUniquePool<graphics::AnimState,
   4096>::RegisterThisUniquePool()::{lambda(shareduniquedebug::SharedPoolInfo&)#1}::TEMPNAMEPLACEHOLDERVALUE(shareduniquedebug::SharedPoolInfo&)
   const */

    void MakeUniquePool<graphics::AnimState, 4096>::RegisterThisUniquePool()::{
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(_lambda_jag__shareduniquedebug__SharedPoolInfo___1_* this, SharedPoolInfo * param_1)

    {
        GetUniquePoolInfo(param_1);
    }

    // 0x100968ec0, 240 bytes, inline, placed by class name
    // MakeUniquePool<graphics::AnimState, 4096>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo&)
    void MakeUniquePool<graphics::AnimState, 4096>::GetUniquePoolInfo(SharedPoolInfo* param_1) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* pVVar1;
        undefined8 uVar2;
        long lVar3;
        ShuffledPacketFactory* pSVar4;
        unique_lock<std::mutex> local_20[16];

        std::unique_lock<std::mutex>::unique_lock(local_20, (mutex*)PTR_m_mutex_100ee6040);
        *(undefined8*)(param_1 + 48) = 0;
        *(undefined8*)(param_1 + 56) = 0;
        *(undefined8*)(param_1 + 32) = 0;
        *(undefined8*)(param_1 + 40) = 0;
        *(undefined8*)(param_1 + 16) = 0;
        *(undefined8*)(param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)(param_1 + 8) = 0;
        *(undefined8*)(param_1 + 64) = 0;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        uVar2 = pVVar1->size();
        *(undefined8*)param_1 = uVar2;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        lVar3 = pVVar1->capacity();
        *(long*)(param_1 + 8) = lVar3;
        *(undefined8*)(param_1 + 16) = *(undefined8*)PTR_m_peak_100ee6038;
        *(undefined8*)(param_1 + 32) = 4096;
        if (lVar3 != 0) {
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<graphics::AnimState, unsigned long>::GetTotalSize(*(ulong*)param_1);
            *(undefined8*)(param_1 + 40) = uVar2;
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<graphics::AnimState, unsigned long>::GetTotalSize(*(ulong*)(param_1 + 8));
            *(undefined8*)(param_1 + 48) = uVar2;
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<graphics::AnimState, unsigned long>::GetTotalSize(*(ulong*)(param_1 + 32));
            *(undefined8*)(param_1 + 56) = uVar2;
        }
        *(char**)(param_1 + 64) =
            "static void MakeUniquePool<graphics::AnimState, "
            "4096>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo &) [T = graphics::AnimState, CAPACITY = 4096]";
        std::unique_lock<std::mutex>::~unique_lock(local_20);
    }

    // 0x100989a50, 96 bytes, base-object constructor, inline, placed by class name
    // MakeUniquePool<graphics::AnimationParameters, 512>::MakeUniquePool()
    void MakeUniquePool<graphics::AnimationParameters, 512>::MakeUniquePool(
        MakeUniquePool<graphics::AnimationParameters, 512>* this) {
        undefined1 uVar1;

        if (*PTR_registered_100ee5078 == '\0') {
            if (___cxa_guard_acquire(PTR_registered_100ee5078) != 0) {
                uVar1 = RegisterThisUniquePool();
                *PTR_registered_100ee9c70 = uVar1;
                ___cxa_guard_release(PTR_registered_100ee5078);
            }
        }
    }

    // 0x1009a3cf0, 432 bytes, inline, placed by class name
    // MakeUniquePool<graphics::AnimationParameters, 512>::RegisterThisUniquePool()
    void MakeUniquePool<graphics::AnimationParameters, 512>::RegisterThisUniquePool() {
        long lVar1;
        ulong uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        char* pcVar5;
        function local_2f8[176];
        fixed_string<char, 512, true, eastl::allocator> local_248[552];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(
            local_248, "static bool MakeUniquePool<graphics::AnimationParameters, 512>::RegisterThisUniquePool() [T = "
                       "graphics::AnimationParameters, CAPACITY = 512]");
        lVar1 = local_248->find("T = jag::", 0);
        if (lVar1 != -1) {
            local_248->replace(0, lVar1 + 9, "UniquePool\t");
            uVar2 = local_248->find(", CAPACITY = ", 0);
            if (uVar2 != 18446744073709551615) {
                local_248->replace(uVar2, 13, "[");
            }
        }
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::function<
            MakeUniquePool<graphics::AnimationParameters, 512>::RegisterThisUniquePool()::_lambda(
                shareduniquedebug::SharedPoolInfo&) _1_,
            void>(local_2f8);
        shareduniquedebug::RegisterUniquePool(
            "static bool MakeUniquePool<graphics::AnimationParameters, 512>::RegisterThisUniquePool() [T = "
            "graphics::AnimationParameters, CAPACITY = 512]",
            local_2f8);
        std::function<void(shareduniquedebug::SharedPoolInfo&)>::~function(
            (function<void(shareduniquedebug::SharedPoolInfo&)>*)local_2f8);
        new (local_2f8) eastl::fixed_string<char, 128, true, eastl::allocator>();
        uVar3 = logger::default_logger();
        uVar4 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
        pcVar5 =
            DataSizeStringMB<eastl::fixed_string<char, 128, true, eastl::allocator>>((fixed_string*)local_2f8, 98304);
        logger::Logger::Log(
            uVar3, 0, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/pool/MakeUniquePool.h", 133,
            "%s\t%s", uVar4, pcVar5);
        /* WARNING: Subroutine does not return */
        local_2f8->~fixed_string();
    }

    // 0x1009a4630, 16 bytes, inline, placed by class name
    // MakeUniquePool<graphics::AnimationParameters, 512>::RegisterThisUniquePool()::{lambda(shareduniquedebug::SharedPoolInfo&)#1}::operator()(shareduniquedebug::SharedPoolInfo&) const
    /* MakeUniquePool<graphics::AnimationParameters,
   512>::RegisterThisUniquePool()::{lambda(shareduniquedebug::SharedPoolInfo&)#1}::TEMPNAMEPLACEHOLDERVALUE(shareduniquedebug::SharedPoolInfo&)
   const */

    void MakeUniquePool<graphics::AnimationParameters, 512>::RegisterThisUniquePool()::{
        lambda(shareduniquedebug::SharedPoolInfo&) #1
    }
    ::operator()(_lambda_jag__shareduniquedebug__SharedPoolInfo___1_* this, SharedPoolInfo * param_1)

    {
        GetUniquePoolInfo(param_1);
    }

    // 0x1009a4640, 240 bytes, inline, placed by class name
    // MakeUniquePool<graphics::AnimationParameters, 512>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo&)
    void MakeUniquePool<graphics::AnimationParameters, 512>::GetUniquePoolInfo(SharedPoolInfo* param_1) {
        VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>* pVVar1;
        undefined8 uVar2;
        long lVar3;
        ShuffledPacketFactory* pSVar4;
        unique_lock<std::mutex> local_20[16];

        std::unique_lock<std::mutex>::unique_lock(local_20, (mutex*)PTR_m_mutex_100ee6010);
        *(undefined8*)(param_1 + 48) = 0;
        *(undefined8*)(param_1 + 56) = 0;
        *(undefined8*)(param_1 + 32) = 0;
        *(undefined8*)(param_1 + 40) = 0;
        *(undefined8*)(param_1 + 16) = 0;
        *(undefined8*)(param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)(param_1 + 8) = 0;
        *(undefined8*)(param_1 + 64) = 0;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        uVar2 = pVVar1->size();
        *(undefined8*)param_1 = uVar2;
        pVVar1 = (VectorFastPool<MakeSharedPool<oldscape::rseven::BuildTerrainResultLevel, 64>::RefCounterAndData>*)
            GetPool();
        lVar3 = pVVar1->capacity();
        *(long*)(param_1 + 8) = lVar3;
        *(undefined8*)(param_1 + 16) = *(undefined8*)PTR_m_peak_100ee6008;
        *(undefined8*)(param_1 + 32) = 512;
        if (lVar3 != 0) {
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<graphics::AnimationParameters, unsigned long>::GetTotalSize(*(ulong*)param_1);
            *(undefined8*)(param_1 + 40) = uVar2;
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<graphics::AnimationParameters, unsigned long>::GetTotalSize(*(ulong*)(param_1 + 8));
            *(undefined8*)(param_1 + 48) = uVar2;
            pSVar4 = (ShuffledPacketFactory*)GetPool();
            ShuffledPacketFactory::p2_alt2(pSVar4);
            uVar2 = FastPool<graphics::AnimationParameters, unsigned long>::GetTotalSize(*(ulong*)(param_1 + 32));
            *(undefined8*)(param_1 + 56) = uVar2;
        }
        *(char**)(param_1 + 64) = "static void MakeUniquePool<graphics::AnimationParameters, "
                                  "512>::GetUniquePoolInfo(shareduniquedebug::SharedPoolInfo &) [T = "
                                  "graphics::AnimationParameters, CAPACITY = 512]";
        std::unique_lock<std::mutex>::~unique_lock(local_20);
    }

} // namespace jag

namespace jag::math {
    // 0x100306520, 48 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float>::NormalizeSafe()
    Vector3T<float>* Vector3T<float>::NormalizeSafe() {
        float fVar1;

        fVar1 = (float)Length(this);
        if (fVar1 != 0.0) {
            operator/=(this, fVar1);
        }
        return this;
    }

} // namespace jag::math
