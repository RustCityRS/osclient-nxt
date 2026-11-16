// libs/graphics/runetek7/animation/AnimationConstants.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    // 0x103bc0f08, 24 bytes, __common; set at startup by ___cxx_global_var_init.90
    Array<float, eastl::allocator> AnimationConstants::IDENTITY_LABELDELTAS =
        Array<float, eastl::allocator>(1600, (float*)((long)&uStack_18 + 4));

    // 0x103bc0f20, 24 bytes, __common; set at startup by ___cxx_global_var_init.89
    Array<float, eastl::allocator> AnimationConstants::IDENTITY_DELTA;

    // 0x103bc0f38, 24 bytes, __common; set at startup by ___cxx_global_var_init.92
    Array<float, eastl::allocator> AnimationConstants::IDENTITY_BILLBOARDTRANSFORM;

    // 0x103bc0f50, 24 bytes, __common; set at startup by ___cxx_global_var_init.91
    Array<unsigned char, eastl::allocator> AnimationConstants::IDENTITY_SKIPTWEENLABEL =
        Array<unsigned char, eastl::allocator>(400, (uchar*)((long)&uStack_18 + 7));

    // 0x103bc0f68, 24 bytes, __common; zero-initialised
    AnimationConstants::IDENTITY_BILLBOARDTRANSFORMS;

    // 0x100987830, 112 bytes, placed by debug map only (low confidence)
    // GetIdentityBillboardTransforms()
    graphics* GetIdentityBillboardTransforms() {
        undefined4* puVar1;
        ulong uVar2;

        new (this) Array<float, eastl::allocator>(3200);
        uVar2 = 3;
        do {
            puVar1 = (undefined4*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)this,
                                                                             uVar2 - 1);
            *puVar1 = 1065353216;
            puVar1 =
                (undefined4*)Array<float, eastl::allocator>::operator[]((Array<float, eastl::allocator>*)this, uVar2);
            *puVar1 = 1065353216;
            uVar2 = uVar2 + 8;
        } while (uVar2 != 3203);
        return this;
    }

    // 0x1009a7240, 128 bytes, placed by the data it initialises
    // ___cxx_global_var_init.89
    void ___cxx_global_var_init_89() {
        undefined8* local_38;
        undefined8 local_30;
        undefined8 local_28;
        undefined8 uStack_20;
        long local_18;

        local_18 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_28 = 0;
        uStack_20 = 0;
        local_38 = &local_28;
        local_30 = 4;
        new (&AnimationConstants::IDENTITY_DELTA) Array<float, eastl::allocator>((initializer_list*)&local_38);
        ___cxa_atexit(PTR__Array_100ee67f0, &AnimationConstants::IDENTITY_DELTA, 4294967296);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1009a72c0, 80 bytes, placed by the data it initialises
    // ___cxx_global_var_init.90
    void ___cxx_global_var_init_90() {
        uint in_EAX;
        undefined8 uStack_18;

        uStack_18 = (ulong)in_EAX;
        new (&AnimationConstants::IDENTITY_LABELDELTAS)
            Array<float, eastl::allocator>(1600, (float*)((long)&uStack_18 + 4));
        ___cxa_atexit(PTR__Array_100ee67f0, &AnimationConstants::IDENTITY_LABELDELTAS, 4294967296);
    }

    // 0x1009a7310, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.91
    void ___cxx_global_var_init_91() {
        ulong in_RAX;
        undefined8 uStack_18;

        uStack_18 = in_RAX & 72057594037927935;
        new (&AnimationConstants::IDENTITY_SKIPTWEENLABEL)
            Array<unsigned char, eastl::allocator>(400, (uchar*)((long)&uStack_18 + 7));
        ___cxa_atexit(PTR__Array_100ee67f8, &AnimationConstants::IDENTITY_SKIPTWEENLABEL, 4294967296);
    }

    // 0x1009a7350, 144 bytes, placed by the data it initialises
    // ___cxx_global_var_init.92
    void ___cxx_global_var_init_92() {
        undefined8* local_48;
        undefined8 local_40;
        undefined8 local_38;
        undefined8 uStack_30;
        undefined8 local_28;
        undefined8 uStack_20;
        long local_18;

        local_18 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_28 = 0;
        uStack_20 = 0;
        local_38 = 0;
        uStack_30 = 4575657222473777152;
        local_48 = &local_38;
        local_40 = 8;
        new (&AnimationConstants::IDENTITY_BILLBOARDTRANSFORM)
            Array<float, eastl::allocator>((initializer_list*)&local_48);
        ___cxa_atexit(PTR__Array_100ee67f0, &AnimationConstants::IDENTITY_BILLBOARDTRANSFORM, 4294967296);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_18) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::graphics
