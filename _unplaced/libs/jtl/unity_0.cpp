// _unplaced/libs/jtl/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.jtl

// 0x100cc50f0, 32 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init
void ___cxx_global_var_init() {
    new (&eastl::gDefaultAllocator) eastl::allocator("EASTL");
}

// 0x100cc5110, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.6
void ___cxx_global_var_init_6() {
    new (&eastl::EMPTY_STRING) eastl::string();
    ___cxa_atexit(PTR__basic_string_100ee6c80, &eastl::EMPTY_STRING, 4294967296);
}

// 0x100cc5150, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.39
void ___cxx_global_var_init_39(undefined8 param_1, NpcUID* param_2) {
    undefined1 auVar1[16];

    auVar1 = (*(code*)jag::BucketManager::m_bucketStaticDestructor)();
    eastl::destruct<jag::oldscape::highlight::NpcUID*>(auVar1._0_8_, param_2, auVar1._8_8_);
    __tlv_atexit(jag::BucketManager::StaticDestructor::~StaticDestructor, auVar1._0_8_, 4294967296);
}

// 0x100cc5190, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.40
void ___cxx_global_var_init_40(undefined8 param_1, NpcUID* param_2, NpcUID* param_3) {
    eastl::destruct<jag::oldscape::highlight::NpcUID*>((eastl*)&jag::BucketManager::m_safeBucketStaticDestructor,
                                                       param_2, param_3);
    ___cxa_atexit(jag::BucketManager::SafeStaticDestructor::~SafeStaticDestructor,
                  &jag::BucketManager::m_safeBucketStaticDestructor, 4294967296);
}

// 0x100cc51d0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.41
void ___cxx_global_var_init_41() {
    array<jag::Bucket, 256ul>* this;

    this = (array<jag::Bucket, 256ul>*)(*(code*)jag::BucketManager::m_buckets)();
    std::array<jag::Bucket, 256ul>::array(this);
    __tlv_atexit(PTR__array_100ee6eb0, this, 4294967296);
}

// 0x100cc5250, 32 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.43
void ___cxx_global_var_init_43() {
    ___cxa_atexit(PTR__mutex_100ee6ef8, &jag::BucketManager::m_metricsMutex, 4294967296);
}

// 0x100cc52b0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.85
void ___cxx_global_var_init_85() {
    array<jag::SimpleAllocator, 32ul>* this;

    this = (array<jag::SimpleAllocator, 32ul>*)(*(code*)jag::SimpleAllocator::m_threadLocalAllocators)();
    std::array<jag::SimpleAllocator, 32ul>::array(this);
    __tlv_atexit(PTR__array_100ee6ea0, this, 4294967296);
}

// 0x100cc52f0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.115
void ___cxx_global_var_init_115() {
    undefined* puVar1;

    puVar1 = PTR_LOOK_100ee47d8;
    if (*PTR_LOOK_100ee47d8 == '\0') {
        new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x100cc5330, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.116
void ___cxx_global_var_init_116() {
    undefined* puVar1;

    puVar1 = PTR_UP_100ee47c8;
    if (*PTR_UP_100ee47c8 == '\0') {
        new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100cc5370, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.117
void ___cxx_global_var_init_117() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee4298;
    if (*PTR_m_pSingleton_100ee4298 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::ThreadPoolSingleton, std::default_delete<jag::ThreadPoolSingleton>>::~unique_ptr,
            PTR_m_pSingleton_100ee5948, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100cc53b0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.118
void ___cxx_global_var_init_118() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee42a0;
    if (*PTR_m_pSingleton_100ee42a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ShaderThreadPoolSingleton,
                                      std::default_delete<jag::ShaderThreadPoolSingleton>>::~unique_ptr,
                      PTR_m_pSingleton_100ee5950, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100cc53f0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.119
void ___cxx_global_var_init_119() {
    undefined* puVar1;

    puVar1 = PTR_ZERO_100ee47e0;
    if (*PTR_ZERO_100ee47e0 == '\0') {
        new (PTR_ZERO_100ee66e8) jag::math::ColourHSL(0.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100cc5430, 59 bytes, placed by nothing (unplaced)
// __GLOBAL__sub_I_unity_0_cxx.cxx
void __GLOBAL__sub_I_unity_0_cxx_cxx() {
    undefined8 uVar1;

    uVar1 = _objc_autoreleasePoolPush();
    ___cxx_global_var_init();
    ___cxx_global_var_init_6();
    ___cxx_global_var_init_40();
    ___cxx_global_var_init_42();
    ___cxx_global_var_init_43();
    ___cxx_global_var_init_84();
    _objc_autoreleasePoolPop(uVar1);
}
