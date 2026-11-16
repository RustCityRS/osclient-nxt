// libs/oldscape/rs2lib/util/recols_runescape.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib {
    class RecolsRunescape {
    public:
        bool IsRecolSelectable(int, int);
        static /* 212 bytes */ m_recol1s;                                   // initialised in its definition
        static /* 448 bytes */ m_recol2s;                                   // initialised in its definition
        static Array<short, eastl::allocator> /* 120 bytes */ m_recol1d[5]; // initialised in its definition
        static Array<short, eastl::allocator> /* 120 bytes */ m_recol2d[5]; // initialised in its definition
    };

    // 0x100d3fcac, 212 bytes, __const
    RecolsRunescape::m_recol1s = {
        572856974,   303194774,   445518278, 673906795,   314376208,  380051008,  -2086596070, 195516321,   578481,
        684070049,   -1790570942, 13150891,  59507259,    1897026886, -918109525, 61450646,    -879616062,  572880561,
        -98697204,   506964122,   111485140, 1579062814,  -584243287, 87888559,   -2000994110, 549527,      684070049,
        -1790570942, 13150891,    59507259,  1897026886,  -918109525, 572940950,  -98697204,   506964122,   111485140,
        1579062814,  -584243287,  87888559,  -2000994110, 346095624,  239216838,  -1431595706, 37421256,    1430651788,
        -1028951790, 298240326,   372314553, 379459113,   529275542,  1117393374, 8323072,     -1179024461,
    };

    // 0x100d3fd80, 448 bytes, __const
    RecolsRunescape::m_recol2s = {
        596694976,   -1,          429588479,  675283059,  373686300,  372317772,  -2086334050, 187389861,   1102773,
        684594213,   -1790046646, 30976563,   51380804,   1897289166, -917585233, 61974940,    -879091760,  596670133,
        497756195,   522653210,   60170574,   1603442578, -451008607, 95490979,   -2001780555, 1598350,     683480336,
        -1791422887, 12626491,    27001519,   1889752381, -918699108, -1,         16,          0,           0,
        -1,          -1,          -1,         0,          2147483647, 2147483647, -2147483648, -2147483648, 1,
        -1,          -1,          -1,         -1,         -1,         0,          -1,          -1,          -1,
        128,         128,         5,          -1,         -1,         99,         128,         128,         0,
        0,           1,           4,          16,         64,         16,         64,          1,           4,
        512,         2048,        8192,       32768,      -1,         1,          1,           -1,          1,
        1,           -1,          -1,         8192,       32768,      512,        2048,        171798692,   1072735191,
        0,           1073217536,  1108344832, 1107296256, 1064178811, 0,          1431655765,  1078285653,  0,
        1082130432,  1431655765,  1069897045, 0,          0,          -1,         255,         255,         -1,
        1,           70,          -1,         -1,
    };

    // 0x100fd52f0, 120 bytes, __common; set at startup by ___cxx_global_var_init.88
    Array<short, eastl::allocator> RecolsRunescape::m_recol1d[5] = {
        /* [0] */
        ?,
        /* [1] */
        ?,
        /* [2] */
        ?,
        /* [3] */
        ?,
        /* [4] */
        ?, };

    // 0x100fd5368, 120 bytes, __common; set at startup by ___cxx_global_var_init.93
    Array<short, eastl::allocator> RecolsRunescape::m_recol2d[5] = {
        /* [0] */
        ?,
        /* [1] */
        ?,
        /* [2] */ Array<short, eastl::allocator>(),
        /* [3] */ Array<short, eastl::allocator>(),
        /* [4] */ Array<short, eastl::allocator>(), };

    // 0x100205080, 32 bytes, placed by class name and debug map
    // RecolsRunescape::IsRecolSelectable(int, int)
    bool RecolsRunescape::IsRecolSelectable(int param_1, int param_2) {
        return param_2 < 8 || param_1 != 4;
    }

    // 0x100226ee0, 592 bytes, placed by the data it initialises
    // ___cxx_global_var_init.88
    void ___cxx_global_var_init_88() {
        undefined8* local_168;
        undefined8 local_160;
        undefined8* local_158;
        undefined8 local_150;
        undefined8* local_148;
        undefined8 local_140;
        undefined8* local_138;
        undefined8 local_130;
        undefined8* local_128;
        undefined8 local_120;
        undefined8 local_118;
        undefined2 uStack_110;
        undefined6 local_10e;
        undefined2 uStack_108;
        undefined8 uStack_106;
        undefined8 local_f4;
        undefined4 local_ec;
        undefined8 local_e8;
        undefined8 uStack_e0;
        undefined8 local_d8;
        undefined8 uStack_d0;
        undefined8 uStack_c8;
        undefined2 uStack_c0;
        undefined6 local_be;
        undefined2 uStack_b8;
        undefined8 uStack_b6;
        undefined8 local_a8;
        undefined8 uStack_a0;
        undefined8 local_98;
        undefined8 uStack_90;
        undefined8 uStack_88;
        undefined2 uStack_80;
        undefined6 local_7e;
        undefined2 uStack_78;
        undefined8 uStack_76;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined8 uStack_48;
        undefined4 uStack_40;
        undefined4 local_3c;
        undefined4 uStack_38;
        undefined8 uStack_34;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uStack_38 = 2845231430;
        uStack_34 = 8552840995811754921;
        uStack_48 = 160723073558615366;
        uStack_40 = 1430651788;
        local_3c = 3266015506;
        local_58 = 15253986226238227361;
        uStack_50 = 1027428496208625672;
        local_68 = 4547764783094414;
        uStack_60 = 1304379949100044989;
        local_168 = &local_68;
        local_160 = 30;
        new (&RecolsRunescape::m_recol1d) Array<short, eastl::allocator>((initializer_list*)&local_168);
        uStack_78 = 908;
        uStack_76 = 14503493691585484102;
        uStack_88 = 1027428496208625672;
        uStack_80 = 38214;
        local_7e = 2452439476907;
        local_98 = 1346537999615745566;
        uStack_90 = 7104297275026965821;
        local_a8 = 12149297951542092325;
        uStack_a0 = 10817090661280652855;
        local_158 = &local_a8;
        local_150 = 29;
        new (&DAT_100fd5308) Array<short, eastl::allocator>((initializer_list*)&local_158);
        uStack_b8 = 908;
        uStack_b6 = 14503493691585484102;
        uStack_c8 = 1027428496208625672;
        uStack_c0 = 38214;
        local_be = 2452439476907;
        local_d8 = 15937438264716072478;
        uStack_d0 = 9852539811858813615;
        local_e8 = 18022842810895852182;
        uStack_e0 = 478825030796945562;
        local_148 = &local_e8;
        local_140 = 29;
        new (&DAT_100fd5320) Array<short, eastl::allocator>((initializer_list*)&local_148);
        local_f4 = 3405355745415698;
        local_ec = 673059478;
        local_138 = &local_f4;
        local_130 = 6;
        new (&DAT_100fd5338) Array<short, eastl::allocator>((initializer_list*)&local_138);
        uStack_108 = 17050;
        uStack_106 = 13382872572538847232;
        local_118 = 1596831942886101446;
        uStack_110 = 5790;
        local_10e = 19645709687446;
        local_128 = &local_118;
        local_120 = 13;
        new (&DAT_100fd5350) Array<short, eastl::allocator>((initializer_list*)&local_128);
        ___cxa_atexit(PTR__array_100ee6ea8, &RecolsRunescape::m_recol1d, 4294967296);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100227130, 384 bytes, placed by the data it initialises
    // ___cxx_global_var_init.93
    void ___cxx_global_var_init_93() {
        undefined8* local_c8;
        undefined8 local_c0;
        undefined8* local_b8;
        undefined8 local_b0;
        undefined8 local_a8;
        undefined8 uStack_a0;
        undefined8 local_98;
        undefined8 uStack_90;
        undefined8 uStack_88;
        undefined2 uStack_80;
        undefined6 local_7e;
        undefined2 uStack_78;
        undefined8 uStack_76;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined8 uStack_48;
        undefined4 uStack_40;
        undefined4 local_3c;
        undefined4 uStack_38;
        undefined8 uStack_34;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uStack_38 = 2845624654;
        uStack_34 = 8553966930079253425;
        uStack_48 = 163257516572251470;
        uStack_40 = 1439564560;
        local_3c = 3266277654;
        local_58 = 15255111593569387429;
        uStack_50 = 1029680330373922832;
        local_68 = 7925554698459546;
        uStack_60 = 1269476545182570054;
        local_c8 = &local_68;
        local_c0 = 30;
        new (&RecolsRunescape::m_recol2d) Array<short, eastl::allocator>((initializer_list*)&local_c8);
        uStack_78 = 412;
        uStack_76 = 14500961451874932029;
        uStack_88 = 1033902382025539608;
        uStack_80 = 38201;
        local_7e = 2950655158843;
        local_98 = 1415226625601134482;
        uStack_90 = 7173821542734038449;
        local_a8 = 1016157286875472784;
        uStack_a0 = 10921795989665619751;
        local_b8 = &local_a8;
        local_b0 = 29;
        new (&DAT_100fd5380) Array<short, eastl::allocator>((initializer_list*)&local_b8);
        new (&DAT_100fd5398) Array<short, eastl::allocator>();
        new (&DAT_100fd53b0) Array<short, eastl::allocator>();
        new (&DAT_100fd53c8) Array<short, eastl::allocator>();
        ___cxa_atexit(PTR__array_100ee6ea8, &RecolsRunescape::m_recol2d, 4294967296);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::oldscape::rs2lib

namespace jag {
    // 0x100206450, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<int>::type make_shared<int, int&>(int&)
    jag* make_shared<int, int&>(int* param_1) {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_34;
        hash_node** local_30[2];

        pvVar1 = (void*)aligned_alloc(24, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = (hash_node**)placement_new<int, int&>((void*)((long)pvVar1 + 16), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared_trivial<int>, int, int*&>(pvVar1, &local_34, (int**)local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag
