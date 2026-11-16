// libs/oldscape/rs2lib/util/recols_runescape.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib {
    class RecolsRunescape {
    public:
        bool IsRecolSelectable(int arg1, int arg2);
        static int32_t m_recol1s[53];     // initialised in its definition
        static int32_t m_recol2s[112];    // initialised in its definition
        static Array<short> m_recol1d[5]; // initialised in its definition
        static Array<short> m_recol2d[5]; // initialised in its definition
    };

    // 0x100d3fcac
    int32_t RecolsRunescape::m_recol1s[53] = {
        572856974,   303194774,   445518278, 673906795,   314376208,  380051008,  -2086596070, 195516321,   578481,
        684070049,   -1790570942, 13150891,  59507259,    1897026886, -918109525, 61450646,    -879616062,  572880561,
        -98697204,   506964122,   111485140, 1579062814,  -584243287, 87888559,   -2000994110, 549527,      684070049,
        -1790570942, 13150891,    59507259,  1897026886,  -918109525, 572940950,  -98697204,   506964122,   111485140,
        1579062814,  -584243287,  87888559,  -2000994110, 346095624,  239216838,  -1431595706, 37421256,    1430651788,
        -1028951790, 298240326,   372314553, 379459113,   529275542,  1117393374, 8323072,     -1179024461,
    };

    // 0x100d3fd80
    int32_t RecolsRunescape::m_recol2s[112] = {
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

    // 0x100fd52f0, set at startup by ___cxx_global_var_init.88
    Array<short> RecolsRunescape::m_recol1d[5] = {
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

    // 0x100fd5368, set at startup by ___cxx_global_var_init.93
    Array<short> RecolsRunescape::m_recol2d[5] = {
        /* [0] */
        ?,
        /* [1] */
        ?,
        /* [2] */ Array<short>(),
        /* [3] */ Array<short>(),
        /* [4] */ Array<short>(), };

    // 0x100205080
    bool RecolsRunescape::IsRecolSelectable(int arg1, int arg2) {
        return arg2 < 8 || arg1 != 4;
    }

    // 0x100226ee0
    void ___cxx_global_var_init_88(void) {
        uint32_t uStack_38 = 2845231430;
        uint64_t uStack_34 = 8552840995811754921;
        uint64_t uStack_48 = 160723073558615366;
        uint32_t uStack_40 = 1430651788;
        uint32_t local_3c = 3266015506;
        uint64_t local_58 = 15253986226238227361;
        uint64_t uStack_50 = 1027428496208625672;
        uint64_t local_68 = 4547764783094414;
        uint64_t uStack_60 = 1304379949100044989;
        uint64_t* local_168 = &local_68;
        uint64_t local_160 = 30;
        new ((Array<short>*)&RecolsRunescape::m_recol1d) Array<short>(&local_168);
        uint16_t uStack_78 = 908;
        uint64_t uStack_76 = 14503493691585484102;
        uint64_t uStack_88 = 1027428496208625672;
        uint16_t uStack_80 = 38214;
        uint64_t local_7e = 2452439476907;
        uint64_t local_98 = 1346537999615745566;
        uint64_t uStack_90 = 7104297275026965821;
        uint64_t local_a8 = 12149297951542092325;
        uint64_t uStack_a0 = 10817090661280652855;
        uint64_t* local_158 = &local_a8;
        uint64_t local_150 = 29;
        new ((Array<short>*)&reinterpret_cast<const uint64_t*>(&m_recol1d)[3]) Array<short>(&local_158);
        uint16_t uStack_b8 = 908;
        uint64_t uStack_b6 = 14503493691585484102;
        uint64_t uStack_c8 = 1027428496208625672;
        uint16_t uStack_c0 = 38214;
        uint64_t local_be = 2452439476907;
        uint64_t local_d8 = 15937438264716072478;
        uint64_t uStack_d0 = 9852539811858813615;
        uint64_t local_e8 = 18022842810895852182;
        uint64_t uStack_e0 = 478825030796945562;
        uint64_t* local_148 = &local_e8;
        uint64_t local_140 = 29;
        new ((Array<short>*)&reinterpret_cast<const uint64_t*>(&m_recol1d)[6]) Array<short>(&local_148);
        uint64_t local_f4 = 3405355745415698;
        uint32_t local_ec = 673059478;
        uint64_t* local_138 = &local_f4;
        uint64_t local_130 = 6;
        new ((Array<short>*)&reinterpret_cast<const uint64_t*>(&m_recol1d)[9]) Array<short>(&local_138);
        uint16_t uStack_108 = 17050;
        uint64_t uStack_106 = 13382872572538847232;
        uint64_t local_118 = 1596831942886101446;
        uint16_t uStack_110 = 5790;
        uint64_t local_10e = 19645709687446;
        uint64_t* local_128 = &local_118;
        uint64_t local_120 = 13;
        new ((Array<short>*)&reinterpret_cast<const uint64_t*>(&m_recol1d)[12]) Array<short>(&local_128);
        ___cxa_atexit(PTR__array_100ee6ea8, &RecolsRunescape::m_recol1d, 4294967296);
    }

    // 0x100227130
    void ___cxx_global_var_init_93(void) {
        uint32_t uStack_38 = 2845624654;
        uint64_t uStack_34 = 8553966930079253425;
        uint64_t uStack_48 = 163257516572251470;
        uint32_t uStack_40 = 1439564560;
        uint32_t local_3c = 3266277654;
        uint64_t local_58 = 15255111593569387429;
        uint64_t uStack_50 = 1029680330373922832;
        uint64_t local_68 = 7925554698459546;
        uint64_t uStack_60 = 1269476545182570054;
        uint64_t* local_c8 = &local_68;
        uint64_t local_c0 = 30;
        new ((Array<short>*)&RecolsRunescape::m_recol2d) Array<short>(&local_c8);
        uint16_t uStack_78 = 412;
        uint64_t uStack_76 = 14500961451874932029;
        uint64_t uStack_88 = 1033902382025539608;
        uint16_t uStack_80 = 38201;
        uint64_t local_7e = 2950655158843;
        uint64_t local_98 = 1415226625601134482;
        uint64_t uStack_90 = 7173821542734038449;
        uint64_t local_a8 = 1016157286875472784;
        uint64_t uStack_a0 = 10921795989665619751;
        uint64_t* local_b8 = &local_a8;
        uint64_t local_b0 = 29;
        new ((Array<short>*)&reinterpret_cast<const uint64_t*>(&m_recol2d)[3]) Array<short>(&local_b8);
        new ((Array<short>*)&reinterpret_cast<const uint64_t*>(&m_recol2d)[6]) Array<short>();
        new ((Array<short>*)&reinterpret_cast<const uint64_t*>(&m_recol2d)[9]) Array<short>();
        new ((Array<short>*)&reinterpret_cast<const uint64_t*>(&m_recol2d)[12]) Array<short>();
        ___cxa_atexit(PTR__array_100ee6ea8, &RecolsRunescape::m_recol2d, 4294967296);
    }

} // namespace jag::oldscape::rs2lib

namespace jag {
    // 0x100206450
    shared_ptr_if_not_array<int>::type make_shared<int, int&>(int& arg1) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        int* local_30[2];

        auto arg1_00 = aligned_alloc(24, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<int>::type result;
        } else {
            local_30[0] = placement_new<int, int&>((void*)((long)arg1_00 + 16), arg1);
            local_34 = 1;
            autoSingleton =
                (AutoSingleton<ShaderThreadPoolSingleton>*)placement_new<ref_counter_shared_trivial<int>, int, int*&>(
                    arg1_00, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag
