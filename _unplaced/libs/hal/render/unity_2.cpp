// _unplaced/libs/hal/render/unity_2.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

// 0x100bdc060
void ___cxx_global_var_init_205(void) {
    int local_188[44];
    pair<int, int> local_d8;
    pair<int, int> local_d0;
    pair<int, int> local_c8;
    pair<int, int> local_c0;
    pair<int, int> local_b8;
    pair<int, int> local_b0;
    pair<int, int> local_a8;
    pair<int, int> local_a0;
    pair<int, int> local_98;
    pair<int, int> local_90;
    pair<int, int> local_88;
    pair<int, int> local_80;
    pair<int, int> local_78;
    pair<int, int> local_70;
    pair<int, int> local_68;
    pair<int, int> local_60;
    pair<int, int> local_58;
    pair<int, int> local_50;
    pair<int, int> local_48;
    pair<int, int> local_40;
    pair<int, int> local_38;
    pair<int, int> local_30;

    local_188[0] = 5126;
    local_188[1] = 1;
    local_d8.pair<int, int&, void>(*local_188, *(local_188 + 1));
    local_188[2] = 35664;
    local_188[3] = 2;
    local_d0.pair<int, int&, void>(*(local_188 + 2), *(local_188 + 3));
    local_188[4] = 35665;
    local_188[5] = 3;
    local_c8.pair<int, int&, void>(*(local_188 + 4), *(local_188 + 5));
    local_188[6] = 35666;
    local_188[7] = 4;
    local_c0.pair<int, int&, void>(*(local_188 + 6), *(local_188 + 7));
    local_188[8] = 5124;
    local_188[9] = 1;
    local_b8.pair<int, int&, void>(*(local_188 + 8), *(local_188 + 9));
    local_188[10] = 35667;
    local_188[11] = 2;
    local_b0.pair<int, int&, void>(*(local_188 + 10), *(local_188 + 11));
    local_188[12] = 35668;
    local_188[13] = 3;
    local_a8.pair<int, int&, void>(*(local_188 + 12), *(local_188 + 13));
    local_188[14] = 35669;
    local_188[15] = 4;
    local_a0.pair<int, int&, void>(*(local_188 + 14), *(local_188 + 15));
    local_188[16] = 5125;
    local_188[17] = 1;
    local_98.pair<int, int&, void>(*(local_188 + 16), *(local_188 + 17));
    local_188[18] = 36294;
    local_188[19] = 2;
    local_90.pair<int, int&, void>(*(local_188 + 18), *(local_188 + 19));
    local_188[20] = 36295;
    local_188[21] = 3;
    local_88.pair<int, int&, void>(*(local_188 + 20), *(local_188 + 21));
    local_188[22] = 36296;
    local_188[23] = 4;
    local_80.pair<int, int&, void>(*(local_188 + 22), *(local_188 + 23));
    local_188[24] = 35670;
    local_188[25] = 1;
    local_78.pair<int, int&, void>(*(local_188 + 24), *(local_188 + 25));
    local_188[26] = 35671;
    local_188[27] = 2;
    local_70.pair<int, int&, void>(*(local_188 + 26), *(local_188 + 27));
    local_188[28] = 35672;
    local_188[29] = 3;
    local_68.pair<int, int&, void>(*(local_188 + 28), *(local_188 + 29));
    local_188[30] = 35673;
    local_188[31] = 4;
    local_60.pair<int, int&, void>(*(local_188 + 30), *(local_188 + 31));
    local_188[32] = 35674;
    local_188[33] = 4;
    local_58.pair<int, int&, void>(*(local_188 + 32), *(local_188 + 33));
    local_188[34] = 35675;
    local_188[35] = 9;
    local_50.pair<int, int&, void>(*(local_188 + 34), *(local_188 + 35));
    local_188[36] = 35676;
    local_188[37] = 16;
    local_48.pair<int, int&, void>(*(local_188 + 36), *(local_188 + 37));
    local_188[38] = 36941;
    local_188[39] = 1;
    local_40.pair<int, int&, void>(*(local_188 + 38), *(local_188 + 39));
    local_188[40] = 36963;
    local_188[41] = 1;
    local_38.pair<int, int&, void>(*(local_188 + 40), *(local_188 + 41));
    local_188[42] = 36306;
    local_188[43] = 1;
    local_30.pair<int, int&, void>(*(local_188 + 42), *(local_188 + 43));
    new ((fixed_map<unsigned int, unsigned int, 17ul>*)&jag::render::g_GLShaderTypeElementSizeMap)
        eastl::fixed_map<unsigned int, unsigned int, 17ul>(&local_d8, *22);
    ___cxa_atexit(PTR__fixed_map_100ee6e38, &jag::render::g_GLShaderTypeElementSizeMap, 4294967296);
}

// 0x100bdc4c0
void ___cxx_global_var_init_256(void) {
    uint8_t* puVar1 = PTR_LOOK_100ee47d8;
    if (*PTR_LOOK_100ee47d8 == '\0') {
        new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
        *puVar1 = 1;
    }
}

// 0x100bdc500
void ___cxx_global_var_init_257(void) {
    uint8_t* puVar1 = PTR_UP_100ee47c8;
    if (*PTR_UP_100ee47c8 == '\0') {
        new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100bdc540
void ___cxx_global_var_init_258(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee4298;
    if (*PTR_m_pSingleton_100ee4298 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5948, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100bdc580
void ___cxx_global_var_init_259(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee42a0;
    if (*PTR_m_pSingleton_100ee42a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::ShaderThreadPoolSingleton>::~unique_ptr, PTR_m_pSingleton_100ee5950,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x100bdc5c0
void ___cxx_global_var_init_260(void) {
    uint8_t* puVar1 = PTR_ZERO_100ee4790;
    if (*PTR_ZERO_100ee4790 == '\0') {
        new (PTR_ZERO_100ee6698) jag::math::Point(0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100bdc5f0
void ___cxx_global_var_init_261(void) {
    uint8_t* puVar1 = PTR_m_mutex_100ee4518;
    if (*PTR_m_mutex_100ee4518 == '\0') {
        ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100bdc630
void ___cxx_global_var_init_262(void) {
    uint8_t* puVar1 = PTR_ZERO_100ee4800;
    if (*PTR_ZERO_100ee4800 == '\0') {
        new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
        *puVar1 = 1;
    }
}

// 0x100bdc670
void ___cxx_global_var_init_263(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49c8;
    if (*PTR_m_pSingleton_100ee49c8 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::ShaderProgramManager>::~unique_ptr, PTR_m_pSingleton_100ee6c38,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x100bdc6b0
void ___cxx_global_var_init_264(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49d0;
    if (*PTR_m_pSingleton_100ee49d0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::VertexDeclarationManager>::~unique_ptr, PTR_m_pSingleton_100ee6c40,
                      4294967296);
        *puVar1 = 1;
    }
}

// 0x100bdc6f0
void ___cxx_global_var_init_265(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49a8;
    if (*PTR_m_pSingleton_100ee49a8 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::BuiltinStates>::~unique_ptr, PTR_m_pSingleton_100ee6c18, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100bdc730
void ___cxx_global_var_init_266(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee4998;
    if (*PTR_m_pSingleton_100ee4998 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::VAOManager>::~unique_ptr, PTR_m_pSingleton_100ee6c08, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100bdc770
void ___cxx_global_var_init_267(void) {
    uint8_t* puVar1 = PTR_m_pSingleton_100ee49a0;
    if (*PTR_m_pSingleton_100ee49a0 == '\0') {
        ___cxa_atexit(std::unique_ptr<jag::render::RenderDevice>::~unique_ptr, PTR_m_pSingleton_100ee6c10, 4294967296);
        *puVar1 = 1;
    }
}

// 0x100bdc7b0
void __GLOBAL__sub_I_unity_2_cxx_cxx(void) {
    uint64_t uVar1 = _objc_autoreleasePoolPush();
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
