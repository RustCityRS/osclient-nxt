// _unplaced/libs/js5/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.js5

namespace jag {
    // 0x100d4fea0
    int32_t Js5Constants::MAX_CONCURRENT_URGENT_REQUESTS = 500;

    // 0x100d4fea4
    int32_t Js5Constants::MAX_CONCURRENT_PREFETCH_REQUESTS = 500;

    // 0x100d4fea8
    int32_t Js5Constants::MAX_CONCURRENT_PREFETCH_REQUESTS_LOGINSCREEN = 500;

    // 0x100d4feac
    int32_t Js5Constants::MAX_CONCURRENT_PREFETCH_REQUESTS_GAME = 0;

    // 0x100d4feb0
    int32_t Js5Constants::MEMORY_CACHE_SIZE_BYTES = 67108864;

    // 0x100d4feb4
    int32_t Js5Constants::MEMORY_CACHE_EXPIRE_TICKS = 1024;

    // 0x100d4feb8
    int32_t Js5Constants::SOCKET_RCV_BUFFER_SIZE = 1048576;

    // 0x100d4febc
    int32_t Js5Constants::SOCKET_SND_BUFFER_SIZE = 8192;

    // 0x100d4fec0
    int32_t Js5Constants::CIRCULAR_RCV_BUFFER_SIZE = 4194304;

    // 0x100d4fec4
    int32_t Js5Constants::CIRCULAR_SND_BUFFER_SIZE = 10240;

    // 0x100d4fec8
    int32_t ZLIB_HEADER = 21122138;

    // 0x1009ef390
    shared_ptr_if_not_array<Js5MemoryCacheWrapper>::type
    bucket_make_shared<Js5MemoryCacheWrapper, unsigned int&, unsigned int&,
                       shared_ptr<PacketT<Array<unsigned char>>> const&>(
        unsigned int& arg1, unsigned int& arg2, const shared_ptr<PacketT<Array<unsigned char>>>& arg3) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        Js5MemoryCacheWrapper* local_38[2];

        auto local_40 = BucketManager::Allocate(72, 0, 16);
        if (local_40 == nullptr) {
            shared_ptr_if_not_array<Js5MemoryCacheWrapper>::type result;
        } else {
            local_38[0] =
                placement_new<Js5MemoryCacheWrapper, unsigned int&, unsigned int&,
                              shared_ptr<PacketT<Array<unsigned char>>> const&>(local_40 + 48, arg1, arg2, arg3);
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)placement_new<
                BucketRefCounter<Js5MemoryCacheWrapper>,
                managed_ptr_counter_and_data<BucketRefCounter<Js5MemoryCacheWrapper>, Js5MemoryCacheWrapper>*&,
                Js5MemoryCacheWrapper*&>(local_40, &local_40, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x100a06310
    Js5MemoryCacheWrapper* placement_new<Js5MemoryCacheWrapper, unsigned int&, unsigned int&,
                                         shared_ptr<PacketT<Array<unsigned char>>> const&>(
        void* arg1, unsigned int& arg2, unsigned int& arg3, const shared_ptr<PacketT<Array<unsigned char>>>& arg4) {
        new (arg1) Js5MemoryCacheWrapper(arg2, arg3, arg4);
        return arg1;
    }

    // 0x100a06330
    BucketRefCounter<Js5MemoryCacheWrapper>*
    placement_new<BucketRefCounter<Js5MemoryCacheWrapper>,
                  managed_ptr_counter_and_data<BucketRefCounter<Js5MemoryCacheWrapper>, Js5MemoryCacheWrapper>*&,
                  Js5MemoryCacheWrapper*&>(
        void* arg1, managed_ptr_counter_and_data<BucketRefCounter<Js5MemoryCacheWrapper>, Js5MemoryCacheWrapper>*& arg2,
        Js5MemoryCacheWrapper*& arg3) {
        new (arg1) BucketRefCounter<Js5MemoryCacheWrapper>(arg2, arg3, 0);
        return arg1;
    }

    // 0x100a0b3f0
    ClientStream* placement_new<ClientStream, char const*, int const&, int const&, int const&, int const&>(
        void* arg1, const char*&& arg2, const int& arg3, const int& arg4, const int& arg5, const int& arg6) {
        new (arg1) ClientStream(arg2, arg3, arg4, arg5, arg6, true);
        return arg1;
    }

    // 0x100a0b420
    ref_counter_shared<ClientStream>*
    placement_new<ref_counter_shared<ClientStream>, int, ClientStream*&>(void* arg1, int&& arg2, ClientStream*& arg3) {
        new (arg1) ref_counter_shared<ClientStream>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100a0b900
    void ___cxx_global_var_init_184(void) {
        uint8_t* puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x100a0b940
    void ___cxx_global_var_init_185(void) {
        uint8_t* puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100a0b980
    void ___cxx_global_var_init_186(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100a0b9c0
    void ___cxx_global_var_init_187(void) {
        uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(std::unique_ptr<ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                          4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100a0ba00
    void ___cxx_global_var_init_188(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100a0ba40
    void ___cxx_global_var_init_189(void) {
        uint8_t* puVar1 = PTR_m_mutex_100ee42d8;
        if (*PTR_m_mutex_100ee42d8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5998, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100a0ba80
    void ___cxx_global_var_init_190(void) {
        uint8_t* puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) math::Point(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100a0baf0
    void __GLOBAL__sub_I_unity_0_cxx_cxx(void) {
        uint64_t uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_132();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag

namespace jag::threading {
    // 0x100d4fecc
    int32_t MAX_HARDWARE_THREAD_LIMIT[25] = {
        16,         0,          1048576,     0,          1075970048, 0,          1090021888, 536870912,  1107468383,
        640942080,  1124887541, 1048592,     1055916048, 0,          1089470432, -431437368, 1057268774, 625347238,
        1067057781, -4194304,   -1042284545, 1196314761, 169478669,  0,          0,
    };

} // namespace jag::threading
