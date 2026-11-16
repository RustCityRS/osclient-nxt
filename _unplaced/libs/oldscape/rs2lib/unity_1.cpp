// _unplaced/libs/oldscape/rs2lib/unity_1.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

namespace jag::oldscape::configdecoder {
    // 0x10103fe48, 42088 bytes, __common; set at startup by ___cxx_global_var_init.35
    ObjStatics g_objStatics = ObjStatics();

    // 0x100257ab0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        new (&InvType::m_recentUse) LRUHashCache<InvType, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee5720, &InvType::m_recentUse, 4294967296);
    }

    // 0x100257af0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.5
    void ___cxx_global_var_init_5() {
        new (&LocType::m_recentUse) LRUHashCache<LocType, 4096ul, 4097ul, false, unsigned long long>(4096, "Loc");
        ___cxa_atexit(PTR__LRUHashCache_100ee5730, &LocType::m_recentUse, 4294967296);
    }

    // 0x100257b30, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.7
    void ___cxx_global_var_init_7() {
        new (&LocType::m_mc1)
            LRUHashCache<dash3d::ModelUnlit, 500ul, 501ul, false, unsigned long long>(500, "LocBaseModel");
        ___cxa_atexit(PTR__LRUHashCache_100ee5810, &LocType::m_mc1, 4294967296);
    }

    // 0x100257b70, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.9
    void ___cxx_global_var_init_9() {
        new (&LocType::m_mc2)
            LRUHashCache<dash3d::ModelSource, 128ul, 129ul, false, unsigned long long>(128, "LocSceneCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee5820, &LocType::m_mc2, 4294967296);
    }

    // 0x100257bb0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.11
    void ___cxx_global_var_init_11() {
        new (&LocType::m_mc3)
            LRUHashCache<dash3d::ModelLit, 128ul, 129ul, false, unsigned long long>(128, "LocDynCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee5840, &LocType::m_mc3, 4294967296);
    }

    // 0x100257bf0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.21
    void ___cxx_global_var_init_21() {
        new (&MapElementType::m_spriteCache)
            LRUHashCache<graphics::Pix32, 256ul, 257ul, false, unsigned long long>(256, "LRUHashCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee58e0, &MapElementType::m_spriteCache, 4294967296);
    }

    // 0x100257c30, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.22
    void ___cxx_global_var_init_22() {
        new (&MapElementType::m_list)
            Array<std::unique_ptr<MapElementType, std::default_delete<MapElementType>>, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee67c8, &MapElementType::m_list, 4294967296);
    }

    // 0x100257c70, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.26
    void ___cxx_global_var_init_26() {
        new (&MesAnimType::m_recentUse)
            LRUHashCache<MesAnimType, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee56b0, &MesAnimType::m_recentUse, 4294967296);
    }

    // 0x100257cb0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.29
    void ___cxx_global_var_init_29() {
        new (&NpcType::m_recentUse) LRUHashCache<NpcType, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee5740, &NpcType::m_recentUse, 4294967296);
    }

    // 0x100257cf0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.30
    void ___cxx_global_var_init_30() {
        new (&NpcType::m_modelCache)
            LRUHashCache<dash3d::ModelLit, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee5880, &NpcType::m_modelCache, 4294967296);
    }

    // 0x100257d30, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.35
    void ___cxx_global_var_init_35() {
        new (&g_objStatics) ObjStatics();
        ___cxa_atexit(PTR__ObjStatics_100ee6ae8, &g_objStatics, 4294967296);
    }

    // 0x100257db0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.46
    void ___cxx_global_var_init_46() {
        new (&ParamType::m_recentUse)
            LRUHashCache<ParamType, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee5800, &ParamType::m_recentUse, 4294967296);
    }

    // 0x100257df0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.50
    void ___cxx_global_var_init_50() {
        new (&SeqType::m_recentUse) LRUHashCache<SeqType, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee5758, &SeqType::m_recentUse, 4294967296);
    }

    // 0x100257e30, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.51
    void ___cxx_global_var_init_51() {
        new (&SeqType::m_framesetCache)
            LRUHashCache<dash3d::AnimFrameSet, 100ul, 101ul, false, unsigned long long>(100, "LRUHashCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee5830, &SeqType::m_framesetCache, 4294967296);
    }

    // 0x100257e70, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.52
    void ___cxx_global_var_init_52() {
        new (&SeqType::m_keyFrameSetCache)
            LRUHashCache<graphics::animation::OldscapeAnimKeyFrameSet, 100ul, 101ul, false, unsigned long long>(
                100, "LRUHashCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee5908, &SeqType::m_keyFrameSetCache, 4294967296);
    }

    // 0x100257eb0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.56
    void ___cxx_global_var_init_56() {
        new (&SpotType::m_recentUse) LRUHashCache<SpotType, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee5798, &SpotType::m_recentUse, 4294967296);
    }

    // 0x100257ef0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.57
    void ___cxx_global_var_init_57() {
        new (&SpotType::m_modelCache)
            LRUHashCache<dash3d::ModelLit, 30ul, 31ul, false, unsigned long long>(30, "LRUHashCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee5860, &SpotType::m_modelCache, 4294967296);
    }

    // 0x100257f30, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.62
    void ___cxx_global_var_init_62() {
        new (&StructType::m_recentUse)
            LRUHashCache<StructType, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee5640, &StructType::m_recentUse, 4294967296);
    }

    // 0x100257f70, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.63
    void ___cxx_global_var_init_63() {
        new (&VarBitType::m_recentUse)
            LRUHashCache<VarBitType, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee5650, &VarBitType::m_recentUse, 4294967296);
    }

    // 0x100257fb0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.69
    void ___cxx_global_var_init_69() {
        new (&VarConBitType::m_recentUse)
            LRUHashCache<VarConBitType, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee56d0, &VarConBitType::m_recentUse, 4294967296);
    }

    // 0x100257ff0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.70
    void ___cxx_global_var_init_70() {
        new (&VarConType::m_recentUse)
            LRUHashCache<VarConType, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee5660, &VarConType::m_recentUse, 4294967296);
    }

    // 0x100258030, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.73
    void ___cxx_global_var_init_73() {
        new (&VarGlobalType::m_recentUse)
            LRUHashCache<VarGlobalType, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee56e0, &VarGlobalType::m_recentUse, 4294967296);
    }

    // 0x100258070, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.78
    void ___cxx_global_var_init_78() {
        new (&VarObjType::m_recentUse)
            LRUHashCache<VarObjType, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee5670, &VarObjType::m_recentUse, 4294967296);
    }

    // 0x1002580b0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.79
    void ___cxx_global_var_init_79() {
        new (&VarcType::m_recentUse) LRUHashCache<VarcType, 64ul, 65ul, false, unsigned long long>(64, "Varc");
        ___cxa_atexit(PTR__LRUHashCache_100ee57a8, &VarcType::m_recentUse, 4294967296);
    }

    // 0x1002580f0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.83
    void ___cxx_global_var_init_83() {
        new (&VarnBitType::m_recentUse)
            LRUHashCache<VarnBitType, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee56c0, &VarnBitType::m_recentUse, 4294967296);
    }

    // 0x100258130, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.88
    void ___cxx_global_var_init_88() {
        new (&VarnType::m_recentUse) LRUHashCache<VarnType, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee57b8, &VarnType::m_recentUse, 4294967296);
    }

    // 0x100258170, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.89
    void ___cxx_global_var_init_89() {
        new (&VarpType::m_recentUse) LRUHashCache<VarpType, 64ul, 65ul, false, unsigned long long>(64, "Varp");
        ___cxa_atexit(PTR__LRUHashCache_100ee57c8, &VarpType::m_recentUse, 4294967296);
    }

    // 0x1002581b0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.93
    void ___cxx_global_var_init_93() {
        new (&VeccType::m_recentUse) LRUHashCache<VeccType, 64ul, 65ul, false, unsigned long long>(64, "Vecc");
        ___cxa_atexit(PTR__LRUHashCache_100ee57d8, &VeccType::m_recentUse, 4294967296);
    }

    // 0x1002581f0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.97
    void ___cxx_global_var_init_97() {
        new (&DBRowType::m_recentUse)
            LRUHashCache<DBRowType, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee57e8, &DBRowType::m_recentUse, 4294967296);
    }

    // 0x100258230, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.105
    void ___cxx_global_var_init_105() {
        new (&DBTableType::m_recentUse)
            LRUHashCache<DBTableType, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache");
        ___cxa_atexit(PTR__LRUHashCache_100ee5680, &DBTableType::m_recentUse, 4294967296);
    }

    // 0x1002582b0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.113
    void ___cxx_global_var_init_113() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) jag::math::ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1002582f0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.114
    void ___cxx_global_var_init_114() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) jag::math::ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100258330, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.115
    void ___cxx_global_var_init_115() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee4298;
        if (*PTR_m_pSingleton_100ee4298 == '\0') {
            ___cxa_atexit(std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::~unique_ptr,
                          PTR_m_pSingleton_100ee5948, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258370, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.116
    void ___cxx_global_var_init_116() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee42a0;
        if (*PTR_m_pSingleton_100ee42a0 == '\0') {
            ___cxa_atexit(
                std::unique_ptr<ShaderThreadPoolSingleton, std::default_delete<ShaderThreadPoolSingleton>>::~unique_ptr,
                PTR_m_pSingleton_100ee5950, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002583b0, 48 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.117
    void ___cxx_global_var_init_117() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4790;
        if (*PTR_ZERO_100ee4790 == '\0') {
            new (PTR_ZERO_100ee6698) jag::math::Point<float>(0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1002583e0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.118
    void ___cxx_global_var_init_118() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4518;
        if (*PTR_m_mutex_100ee4518 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5df0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258420, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.119
    void ___cxx_global_var_init_119() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee4800;
        if (*PTR_ZERO_100ee4800 == '\0') {
            new (PTR_ZERO_100ee6708) ImVec4(0.0, 0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100258460, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.120
    void ___cxx_global_var_init_120() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49c8;
        if (*PTR_m_pSingleton_100ee49c8 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::ShaderProgramManager,
                                          std::default_delete<render::ShaderProgramManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c38, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1002584a0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.121
    void ___cxx_global_var_init_121() {
        undefined* puVar1;

        puVar1 = PTR_m_pSingleton_100ee49d0;
        if (*PTR_m_pSingleton_100ee49d0 == '\0') {
            ___cxa_atexit(std::unique_ptr<render::VertexDeclarationManager,
                                          std::default_delete<render::VertexDeclarationManager>>::~unique_ptr,
                          PTR_m_pSingleton_100ee6c40, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258720, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.131
    void ___cxx_global_var_init_131(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullCacheObj_100ee5868;
        puVar1 = PTR_NullCacheObj_100ee4218;
        if (*PTR_NullCacheObj_100ee4218 == '\0') {
            new (PTR_NullCacheObj_100ee5868) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee54f0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258be0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.150
    void ___cxx_global_var_init_150() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4520;
        if (*PTR_m_mutex_100ee4520 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5e00, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258c20, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.151
    void ___cxx_global_var_init_151() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4500;
        if (*PTR_m_mutex_100ee4500 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5dc0, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258c60, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.152
    void ___cxx_global_var_init_152() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee44e8;
        if (*PTR_m_mutex_100ee44e8 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5d90, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258ca0, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.153
    void ___cxx_global_var_init_153() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee4378;
        if (*PTR_m_mutex_100ee4378 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5ab8, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258d20, 64 bytes, placed by nothing (unplaced)
    // ___cxx_global_var_init.155
    void ___cxx_global_var_init_155() {
        undefined* puVar1;

        puVar1 = PTR_m_mutex_100ee45e0;
        if (*PTR_m_mutex_100ee45e0 == '\0') {
            ___cxa_atexit(PTR__mutex_100ee6ef8, PTR_m_mutex_100ee5f80, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100258da0, 184 bytes, placed by nothing (unplaced)
    // __GLOBAL__sub_I_unity_1_cxx.cxx
    void __GLOBAL__sub_I_unity_1_cxx_cxx() {
        undefined8 uVar1;

        uVar1 = _objc_autoreleasePoolPush();
        ___cxx_global_var_init();
        ___cxx_global_var_init_5();
        ___cxx_global_var_init_7();
        ___cxx_global_var_init_9();
        ___cxx_global_var_init_11();
        ___cxx_global_var_init_21();
        ___cxx_global_var_init_22();
        ___cxx_global_var_init_26();
        ___cxx_global_var_init_29();
        ___cxx_global_var_init_30();
        ___cxx_global_var_init_35();
        ___cxx_global_var_init_36();
        ___cxx_global_var_init_46();
        ___cxx_global_var_init_50();
        ___cxx_global_var_init_51();
        ___cxx_global_var_init_52();
        ___cxx_global_var_init_56();
        ___cxx_global_var_init_57();
        ___cxx_global_var_init_62();
        ___cxx_global_var_init_63();
        ___cxx_global_var_init_69();
        ___cxx_global_var_init_70();
        ___cxx_global_var_init_73();
        ___cxx_global_var_init_78();
        ___cxx_global_var_init_79();
        ___cxx_global_var_init_83();
        ___cxx_global_var_init_88();
        ___cxx_global_var_init_89();
        ___cxx_global_var_init_93();
        ___cxx_global_var_init_97();
        ___cxx_global_var_init_105();
        _objc_autoreleasePoolPop(uVar1);
    }

} // namespace jag::oldscape::configdecoder
