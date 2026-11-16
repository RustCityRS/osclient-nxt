// _unplaced/libs/js5/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.js5

namespace jag {
    // 0x100d4fea0, 4 bytes, __const
    Js5Constants::MAX_CONCURRENT_URGENT_REQUESTS = 500;

    // 0x100d4fea4, 4 bytes, __const
    Js5Constants::MAX_CONCURRENT_PREFETCH_REQUESTS = 500;

    // 0x100d4fea8, 4 bytes, __const
    Js5Constants::MAX_CONCURRENT_PREFETCH_REQUESTS_LOGINSCREEN = 500;

    // 0x100d4feac, 4 bytes, __const
    Js5Constants::MAX_CONCURRENT_PREFETCH_REQUESTS_GAME = 0;

    // 0x100d4feb0, 4 bytes, __const
    Js5Constants::MEMORY_CACHE_SIZE_BYTES = 67108864;

    // 0x100d4feb4, 4 bytes, __const
    Js5Constants::MEMORY_CACHE_EXPIRE_TICKS = 1024;

    // 0x100d4feb8, 4 bytes, __const
    Js5Constants::SOCKET_RCV_BUFFER_SIZE = 1048576;

    // 0x100d4febc, 4 bytes, __const
    Js5Constants::SOCKET_SND_BUFFER_SIZE = 8192;

    // 0x100d4fec0, 4 bytes, __const
    Js5Constants::CIRCULAR_RCV_BUFFER_SIZE = 4194304;

    // 0x100d4fec4, 4 bytes, __const
    Js5Constants::CIRCULAR_SND_BUFFER_SIZE = 10240;

    // 0x100d4fec8, 4 bytes, __const
    ZLIB_HEADER = 21122138;

    // 0x1009ef390, 176 bytes, inline, placed by nothing (unplaced)
    // shared_ptr_if_not_array<Js5MemoryCacheWrapper>::type bucket_make_shared<Js5MemoryCacheWrapper, unsigned int&, unsigned int&, shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > > const&>(unsigned int&, unsigned int&, shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > > const&)
    jag* jag::bucket_make_shared<Js5MemoryCacheWrapper, unsigned int&, unsigned int&,
                                 shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&>(
        uint* param_1, uint* param_2, shared_ptr* param_3) {
        BucketRefCounter* pBVar1;
        managed_ptr_counter_and_data* local_40;
        Js5MemoryCacheWrapper* local_38[2];

        local_40 = (managed_ptr_counter_and_data*)BucketManager::Allocate(72, 0, 16);
        if (local_40 == (managed_ptr_counter_and_data*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_38[0] = placement_new<Js5MemoryCacheWrapper, unsigned int&, unsigned int&,
                                        shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&>(
                local_40 + 48, param_1, param_2, param_3);
            pBVar1 = placement_new<
                BucketRefCounter<Js5MemoryCacheWrapper>,
                managed_ptr_counter_and_data<BucketRefCounter<Js5MemoryCacheWrapper>, Js5MemoryCacheWrapper>*&,
                Js5MemoryCacheWrapper*&>(local_40, &local_40, local_38);
            pBVar1->~AutoSingleton(local_38[0]);
            pBVar1->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(pBVar1, local_38[0]);
        }
        return this;
    }

    // 0x100a06310, 32 bytes, inline, placed by nothing (unplaced)
    // Js5MemoryCacheWrapper* placement_new<Js5MemoryCacheWrapper, unsigned int&, unsigned int&, shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > > const&>(void*, unsigned int&, unsigned int&, shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > > const&)
    Js5MemoryCacheWrapper* jag::placement_new<Js5MemoryCacheWrapper, unsigned int&, unsigned int&,
                                              shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>> const&>(
        void* param_1, uint* param_2, uint* param_3, shared_ptr* param_4) {
        Js5MemoryCacheWrapper::Js5MemoryCacheWrapper(param_1, *param_2, *param_3, param_4);
        return param_1;
    }

    // 0x100a06330, 32 bytes, inline, placed by nothing (unplaced)
    // BucketRefCounter<Js5MemoryCacheWrapper>* placement_new<BucketRefCounter<Js5MemoryCacheWrapper>, managed_ptr_counter_and_data<BucketRefCounter<Js5MemoryCacheWrapper>, Js5MemoryCacheWrapper>*&, Js5MemoryCacheWrapper*&>(void*, managed_ptr_counter_and_data<BucketRefCounter<Js5MemoryCacheWrapper>, Js5MemoryCacheWrapper>*&, Js5MemoryCacheWrapper*&)
    BucketRefCounter*
    jag::placement_new<BucketRefCounter<Js5MemoryCacheWrapper>,
                       managed_ptr_counter_and_data<BucketRefCounter<Js5MemoryCacheWrapper>, Js5MemoryCacheWrapper>*&,
                       Js5MemoryCacheWrapper*&>(void* param_1, managed_ptr_counter_and_data** param_2,
                                                Js5MemoryCacheWrapper** param_3) {
        BucketRefCounter<Js5MemoryCacheWrapper>::BucketRefCounter(param_1, *param_2, *param_3, 0);
        return param_1;
    }

    // 0x100a0b3f0, 48 bytes, inline, placed by nothing (unplaced)
    // ClientStream* placement_new<ClientStream, char const*, int const&, int const&, int const&, int const&>(void*, char const*&&, int const&, int const&, int const&, int const&)
    ClientStream* placement_new<ClientStream, char const*, int const&, int const&, int const&, int const&>(
        void* param_1, char** param_2, int* param_3, int* param_4, int* param_5, int* param_6) {
        ClientStream::ClientStream(param_1, *param_2, *param_3, *param_4, *param_5, *param_6, true);
        return param_1;
    }

    // 0x100a0b420, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<ClientStream>* placement_new<ref_counter_shared<ClientStream>, int, ClientStream*&>(void*, int&&, ClientStream*&)
    ref_counter_shared* placement_new<ref_counter_shared<ClientStream>, int, ClientStream*&>(void* param_1,
                                                                                             int* param_2,
                                                                                             ClientStream** param_3) {
        ref_counter_shared<ClientStream>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100a0b900, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.184
    void ___cxx_global_var_init_184() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100a0b940, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.185
    void ___cxx_global_var_init_185() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100a0b980, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.186
    void ___cxx_global_var_init_186() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100a0b9c0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.187
    void ___cxx_global_var_init_187() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100a0ba00, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.188
    void ___cxx_global_var_init_188() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100a0ba40, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.189
    void ___cxx_global_var_init_189() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee42d8;
        if (*PTR_m_mutex_100ee42d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5998, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100a0ba80, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.190
    void ___cxx_global_var_init_190() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100a0baf0, 39 bytes, placed by nothing (unplaced)
    // __GLOBAL__sub_I_unity_0_cxx.cxx
    void __GLOBAL__sub_I_unity_0_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_132();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag

namespace jag::threading {
    // 0x100d4fecc, 100 bytes, __const
    MAX_HARDWARE_THREAD_LIMIT = {
        16,         0,          1048576,     0,          1075970048, 0,          1090021888, 536870912,  1107468383,
        640942080,  1124887541, 1048592,     1055916048, 0,          1089470432, -431437368, 1057268774, 625347238,
        1067057781, -4194304,   -1042284545, 1196314761, 169478669,  0,          0,
    };

} // namespace jag::threading
