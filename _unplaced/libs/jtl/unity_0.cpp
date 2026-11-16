// _unplaced/libs/jtl/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.jtl

// 0x100cc50f0
void ___cxx_global_var_init(void) {
    new ((allocator*)&eastl::gDefaultAllocator) eastl::allocator("EASTL");
}

// 0x100cc5110
void ___cxx_global_var_init_6(void) {
    new ((eastl::string*)&eastl::EMPTY_STRING) eastl::string();
    ___cxa_atexit(PTR__basic_string_100ee6c80, &eastl::EMPTY_STRING, 4294967296);
}

// 0x100cc5150
void ___cxx_global_var_init_39(void) {
    eastl* eastl;

    eastl = (eastl*)(*(void (*)(...))jag::BucketManager::m_bucketStaticDestructor)();
    eastl::destruct<jag::oldscape::highlight::NpcUID*>(eastl);
    __tlv_atexit(jag::BucketManager::StaticDestructor::~StaticDestructor, eastl, 4294967296);
}

// 0x100cc5190
void ___cxx_global_var_init_40(void) {
    (&jag::BucketManager::m_safeBucketStaticDestructor)->destruct<jag::oldscape::highlight::NpcUID*>();
    ___cxa_atexit(jag::BucketManager::SafeStaticDestructor::~SafeStaticDestructor,
                  &jag::BucketManager::m_safeBucketStaticDestructor, 4294967296);
}

// 0x100cc51d0
void ___cxx_global_var_init_41(void) {
    array<jag::Bucket, 256ul>* array;

    array = (array<jag::Bucket, 256ul>*)(*(void (*)(...))jag::BucketManager::m_buckets)();
    new (array) std::array<jag::Bucket, 256ul>();
    __tlv_atexit(PTR__array_100ee6eb0, array, 4294967296);
}

// 0x100cc5250
void ___cxx_global_var_init_43(void) {
    ___cxa_atexit(PTR__mutex_100ee6ef8, &jag::BucketManager::m_metricsMutex, 4294967296);
}

// 0x100cc52b0
void ___cxx_global_var_init_85(void) {
    array<jag::SimpleAllocator, 32ul>* array;

    array = (array<jag::SimpleAllocator, 32ul>*)(*(void (*)(...))jag::SimpleAllocator::m_threadLocalAllocators)();
    new (array) std::array<jag::SimpleAllocator, 32ul>();
    __tlv_atexit(PTR__array_100ee6ea0, array, 4294967296);
}

// 0x100cc52f0
void ___cxx_global_var_init_115(void) {
    uint8_t* puVar1 = PTR_LOOK_100ee47d8;
    if (*PTR_LOOK_100ee47d8 == '\0') {
        new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x100cc5330
void ___cxx_global_var_init_116(void) {
    uint8_t* puVar1 = PTR_UP_100ee47c8;
    if (*PTR_UP_100ee47c8 == '\0') {
        new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100cc5370
void ___cxx_global_var_init_117(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
    if (*PTR_m_pSingleton_100ee4298 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100cc53b0
void ___cxx_global_var_init_118(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
    if (*PTR_m_pSingleton_100ee42a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x100cc53f0
void ___cxx_global_var_init_119(void) {
    uint8_t* puVar1 = PTR_ZERO_100ee47e0;
    if (*PTR_ZERO_100ee47e0 == '\0') {
        new (PTR_ZERO_100ee66e8) jag::math::ColourHSL(0.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100cc5430
void __GLOBAL__sub_I_unity_0_cxx_cxx(void) {
    uint64_t uVar1 = _objc_autoreleasePoolPush();
    ___cxx_global_var_init();
    ___cxx_global_var_init_6();
    ___cxx_global_var_init_40();
    ___cxx_global_var_init_42();
    ___cxx_global_var_init_43();
    ___cxx_global_var_init_84();
    _objc_autoreleasePoolPop(uVar1);
}
