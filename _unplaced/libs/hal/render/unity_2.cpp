// _unplaced/libs/hal/render/unity_2.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

// 0x100bdc060, 1120 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.205
void ___cxx_global_var_init_205() {
    allocator local_190[8];
    int local_188[44];
    pair<int, int> local_d8[8];
    pair<int, int> local_d0[8];
    pair<int, int> local_c8[8];
    pair<int, int> local_c0[8];
    pair<int, int> local_b8[8];
    pair<int, int> local_b0[8];
    pair<int, int> local_a8[8];
    pair<int, int> local_a0[8];
    pair<int, int> local_98[8];
    pair<int, int> local_90[8];
    pair<int, int> local_88[8];
    pair<int, int> local_80[8];
    pair<int, int> local_78[8];
    pair<int, int> local_70[8];
    pair<int, int> local_68[8];
    pair<int, int> local_60[8];
    pair<int, int> local_58[8];
    pair<int, int> local_50[8];
    pair<int, int> local_48[8];
    pair<int, int> local_40[8];
    pair<int, int> local_38[8];
    pair<int, int> local_30[8];
    long local_28;

    local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
    local_188[0] = 5126;
    local_188[1] = 1;
    eastl::pair<int, int>::pair<int, int&, void>(local_d8, local_188, local_188 + 1);
    local_188[2] = 35664;
    local_188[3] = 2;
    eastl::pair<int, int>::pair<int, int&, void>(local_d0, local_188 + 2, local_188 + 3);
    local_188[4] = 35665;
    local_188[5] = 3;
    eastl::pair<int, int>::pair<int, int&, void>(local_c8, local_188 + 4, local_188 + 5);
    local_188[6] = 35666;
    local_188[7] = 4;
    eastl::pair<int, int>::pair<int, int&, void>(local_c0, local_188 + 6, local_188 + 7);
    local_188[8] = 5124;
    local_188[9] = 1;
    eastl::pair<int, int>::pair<int, int&, void>(local_b8, local_188 + 8, local_188 + 9);
    local_188[10] = 35667;
    local_188[11] = 2;
    eastl::pair<int, int>::pair<int, int&, void>(local_b0, local_188 + 10, local_188 + 11);
    local_188[12] = 35668;
    local_188[13] = 3;
    eastl::pair<int, int>::pair<int, int&, void>(local_a8, local_188 + 12, local_188 + 13);
    local_188[14] = 35669;
    local_188[15] = 4;
    eastl::pair<int, int>::pair<int, int&, void>(local_a0, local_188 + 14, local_188 + 15);
    local_188[16] = 5125;
    local_188[17] = 1;
    eastl::pair<int, int>::pair<int, int&, void>(local_98, local_188 + 16, local_188 + 17);
    local_188[18] = 36294;
    local_188[19] = 2;
    eastl::pair<int, int>::pair<int, int&, void>(local_90, local_188 + 18, local_188 + 19);
    local_188[20] = 36295;
    local_188[21] = 3;
    eastl::pair<int, int>::pair<int, int&, void>(local_88, local_188 + 20, local_188 + 21);
    local_188[22] = 36296;
    local_188[23] = 4;
    eastl::pair<int, int>::pair<int, int&, void>(local_80, local_188 + 22, local_188 + 23);
    local_188[24] = 35670;
    local_188[25] = 1;
    eastl::pair<int, int>::pair<int, int&, void>(local_78, local_188 + 24, local_188 + 25);
    local_188[26] = 35671;
    local_188[27] = 2;
    eastl::pair<int, int>::pair<int, int&, void>(local_70, local_188 + 26, local_188 + 27);
    local_188[28] = 35672;
    local_188[29] = 3;
    eastl::pair<int, int>::pair<int, int&, void>(local_68, local_188 + 28, local_188 + 29);
    local_188[30] = 35673;
    local_188[31] = 4;
    eastl::pair<int, int>::pair<int, int&, void>(local_60, local_188 + 30, local_188 + 31);
    local_188[32] = 35674;
    local_188[33] = 4;
    eastl::pair<int, int>::pair<int, int&, void>(local_58, local_188 + 32, local_188 + 33);
    local_188[34] = 35675;
    local_188[35] = 9;
    eastl::pair<int, int>::pair<int, int&, void>(local_50, local_188 + 34, local_188 + 35);
    local_188[36] = 35676;
    local_188[37] = 16;
    eastl::pair<int, int>::pair<int, int&, void>(local_48, local_188 + 36, local_188 + 37);
    local_188[38] = 36941;
    local_188[39] = 1;
    eastl::pair<int, int>::pair<int, int&, void>(local_40, local_188 + 38, local_188 + 39);
    local_188[40] = 36963;
    local_188[41] = 1;
    eastl::pair<int, int>::pair<int, int&, void>(local_38, local_188 + 40, local_188 + 41);
    local_188[42] = 36306;
    local_188[43] = 1;
    eastl::pair<int, int>::pair<int, int&, void>(local_30, local_188 + 42, local_188 + 43);
    eastl::allocator::allocator(local_190, "EASTL fixed_map");
    new (&jag::render::g_GLShaderTypeElementSizeMap)
        eastl::fixed_map<unsigned int, unsigned int, 17ul, true, eastl::less<unsigned int>, eastl::allocator>(
            local_d8, 22, local_190);
    ___cxa_atexit(PTR__fixed_map_100ee6e38, &jag::render::g_GLShaderTypeElementSizeMap, 4294967296);
    if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
        /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
    }
}

// 0x100bdc4c0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.256
void ___cxx_global_var_init_256() {
    undefined* puVar1;

    puVar1 = PTR_LOOK_100ee47d8;
    if (*PTR_LOOK_100ee47d8 == '\0') {
        new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x100bdc500, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.257
void ___cxx_global_var_init_257() {
    undefined* puVar1;

    puVar1 = PTR_UP_100ee47c8;
    if (*PTR_UP_100ee47c8 == '\0') {
        new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100bdc540, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.258
void ___cxx_global_var_init_258() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee4298;
    if (*PTR_m_pSingleton_100ee4298 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::ThreadPoolSingleton, std::default_delete<jag::ThreadPoolSingleton>>::~unique_ptr,
            PTR_m_pSingleton_100ee5948, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100bdc580, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.259
void ___cxx_global_var_init_259() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee42a0;
    if (*PTR_m_pSingleton_100ee42a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ShaderThreadPoolSingleton,
                                      std::default_delete<jag::ShaderThreadPoolSingleton>>::~unique_ptr,
                      PTR_m_pSingleton_100ee5950, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100bdc5c0, 48 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.260
void ___cxx_global_var_init_260() {
    undefined* puVar1;

    puVar1 = PTR_ZERO_100ee4790;
    if (*PTR_ZERO_100ee4790 == '\0') {
        new (PTR_ZERO_100ee6698) jag::math::Point<float>(0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100bdc5f0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.261
void ___cxx_global_var_init_261() {
    undefined* puVar1;

    puVar1 = PTR_m_mutex_100ee4518;
    if (*PTR_m_mutex_100ee4518 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100bdc630, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.262
void ___cxx_global_var_init_262() {
    undefined* puVar1;

    puVar1 = PTR_ZERO_100ee4800;
    if (*PTR_ZERO_100ee4800 == '\0') {
        new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100bdc670, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.263
void ___cxx_global_var_init_263() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49c8;
    if (*PTR_m_pSingleton_100ee49c8 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::ShaderProgramManager,
                                      std::default_delete<jag::render::ShaderProgramManager>>::~unique_ptr,
                      PTR_m_pSingleton_100ee6c38, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100bdc6b0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.264
void ___cxx_global_var_init_264() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49d0;
    if (*PTR_m_pSingleton_100ee49d0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::VertexDeclarationManager,
                                      std::default_delete<jag::render::VertexDeclarationManager>>::~unique_ptr,
                      PTR_m_pSingleton_100ee6c40, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100bdc6f0, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.265
void ___cxx_global_var_init_265() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49a8;
    if (*PTR_m_pSingleton_100ee49a8 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::render::BuiltinStates, std::default_delete<jag::render::BuiltinStates>>::~unique_ptr,
            PTR_m_pSingleton_100ee6c18, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100bdc730, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.266
void ___cxx_global_var_init_266() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee4998;
    if (*PTR_m_pSingleton_100ee4998 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::render::VAOManager, std::default_delete<jag::render::VAOManager>>::~unique_ptr,
            PTR_m_pSingleton_100ee6c08, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100bdc770, 64 bytes, placed by nothing (unplaced)
// ___cxx_global_var_init.267
void ___cxx_global_var_init_267() {
    undefined* puVar1;

    puVar1 = PTR_m_pSingleton_100ee49a0;
    if (*PTR_m_pSingleton_100ee49a0 == '\0') {
        ___cxa_atexit(
            std::unique_ptr<jag::render::RenderDevice, std::default_delete<jag::render::RenderDevice>>::~unique_ptr,
            PTR_m_pSingleton_100ee6c10, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100bdc7b0, 69 bytes, placed by nothing (unplaced)
// __GLOBAL__sub_I_unity_2_cxx.cxx
void __GLOBAL__sub_I_unity_2_cxx_cxx() {
    undefined8 uVar1;

    uVar1 = _objc_autoreleasePoolPush();
    ___cxx_global_var_init();
    ___cxx_global_var_init_181();
    ___cxx_global_var_init_186();
    ___cxx_global_var_init_192();
    ___cxx_global_var_init_202();
    ___cxx_global_var_init_203();
    ___cxx_global_var_init_204();
    ___cxx_global_var_init_205();
    _objc_autoreleasePoolPop(uVar1);
}
