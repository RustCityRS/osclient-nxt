// libs/graphics/runetek7/animation/AnimationConstants.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    // 0x103bc0f08, set at startup by ___cxx_global_var_init.90
    Array<float> AnimationConstants::IDENTITY_LABELDELTAS = Array<float>(1600, (float*)((long)&uStack_18 + 4));

    // 0x103bc0f20, set at startup by ___cxx_global_var_init.89
    Array<float> AnimationConstants::IDENTITY_DELTA;

    // 0x103bc0f38, set at startup by ___cxx_global_var_init.92
    Array<float> AnimationConstants::IDENTITY_BILLBOARDTRANSFORM;

    // 0x103bc0f50, set at startup by ___cxx_global_var_init.91
    Array<unsigned char> AnimationConstants::IDENTITY_SKIPTWEENLABEL =
        Array<unsigned char>(400, (uchar*)((long)&uStack_18 + 7));

    // 0x103bc0f68
    Array<float> AnimationConstants::IDENTITY_BILLBOARDTRANSFORMS;

    // 0x100987830
    auto GetIdentityBillboardTransforms() {
        uint32_t* puVar1;

        auto result(3200);
        unsigned long arg1 = 3;
        do {
            puVar1 = (uint32_t*)(result)[arg1 - 1];
            *puVar1 = 1065353216;
            puVar1 = (uint32_t*)(result)[arg1];
            *puVar1 = 1065353216;
            arg1 = arg1 + 8;
        } while (arg1 != 3203);
        return result;
    }

    // 0x1009a7240
    void ___cxx_global_var_init_89(void) {
        uint64_t local_28 = 0;
        uint64_t uStack_20 = 0;
        uint64_t* local_38 = &local_28;
        uint64_t local_30 = 4;
        new ((Array<float>*)&AnimationConstants::IDENTITY_DELTA) Array<float>(&local_38);
        ___cxa_atexit(PTR__Array_100ee67f0, &AnimationConstants::IDENTITY_DELTA, 4294967296);
    }

    // 0x1009a7350
    void ___cxx_global_var_init_92(void) {
        uint64_t local_28 = 0;
        uint64_t uStack_20 = 0;
        uint64_t local_38 = 0;
        uint64_t uStack_30 = 4575657222473777152;
        uint64_t* local_48 = &local_38;
        uint64_t local_40 = 8;
        new ((Array<float>*)&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM) Array<float>(&local_48);
        ___cxa_atexit(PTR__Array_100ee67f0, &AnimationConstants::IDENTITY_BILLBOARDTRANSFORM, 4294967296);
    }

} // namespace jag::graphics
