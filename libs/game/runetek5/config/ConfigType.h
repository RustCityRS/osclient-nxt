// libs/game/runetek5/config/ConfigType.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    template <typename...> // 29 instantiations, e.g. <AchievementType>, <BASType>, <CursorType>
    class ConfigType {
    public:
        // virtual methods in vtable order
        virtual void __pure_slot_2() = 0;
        virtual void __pure_slot_3() = 0;
        virtual Decode(PacketT<Array<unsigned char, eastl::allocator>>&);
        ~ConfigType();
        void GetParam(int, shared_ptr<ParamType> const&) const;
        ConfigType(BaseTemplateConfigTypeList<VarBitType>*, int);
        ConfigType(BaseTemplateConfigTypeList<WaterType>*, int);
        ConfigType(BaseTemplateConfigTypeList<VarType>*, int);
        void DecodeParams(PacketT<Array<unsigned char, eastl::allocator>>&);
        ConfigType(BaseTemplateConfigTypeList<SeqType>*, int);
        ConfigType(BaseTemplateConfigTypeList<NPCType>*, int);
        ConfigType(BaseTemplateConfigTypeList<ObjType>*, int);
        ConfigType(BaseTemplateConfigTypeList<LocType>*, int);
        ConfigType(BaseTemplateConfigTypeList<HitmarkType>*, int);
        ConfigType(BaseTemplateConfigTypeList<ParamType>*, int);
        ConfigType(BaseTemplateConfigTypeList<DBRowType>*, int);
        ConfigType(BaseTemplateConfigTypeList<DBTableType>*, int);
        ConfigType(BaseTemplateConfigTypeList<InvType>*, int);
        ConfigType(BaseTemplateConfigTypeList<BASType>*, int);
        ConfigType(BaseTemplateConfigTypeList<FloorUnderlayType>*, int);
        ConfigType(BaseTemplateConfigTypeList<FloorOverlayType>*, int);
        ConfigType(BaseTemplateConfigTypeList<HeadbarType>*, int);
        ConfigType(BaseTemplateConfigTypeList<IDKType>*, int);
        ConfigType(BaseTemplateConfigTypeList<MapElementType>*, int);
        ConfigType(BaseTemplateConfigTypeList<MSIType>*, int);
        ConfigType(BaseTemplateConfigTypeList<QuestType>*, int);
        ConfigType(BaseTemplateConfigTypeList<SeqGroupType>*, int);
        ConfigType(BaseTemplateConfigTypeList<LightType>*, int);
        ConfigType(BaseTemplateConfigTypeList<SkyBoxType>*, int);
        ConfigType(BaseTemplateConfigTypeList<CursorType>*, int);
        ConfigType(BaseTemplateConfigTypeList<WorldAreaType>*, int);
        ConfigType(BaseTemplateConfigTypeList<EnumType>*, int);
        ConfigType(BaseTemplateConfigTypeList<EffectAnimType>*, int);
        ConfigType(BaseTemplateConfigTypeList<StructType>*, int);
        ConfigType(BaseTemplateConfigTypeList<AchievementType>*, int);
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullConfigType;
    };

    // 0x100f383a0, 16 bytes, __data; set at startup by ___cxx_global_var_init.125
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<LocType>::NullConfigType;

    // 0x100f389c0, 16 bytes, __data; set at startup by ___cxx_global_var_init.60
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<WaterType>::NullConfigType;

    // 0x100f38a78, 16 bytes, __data; set at startup by ___cxx_global_var_init.110
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<NPCType>::NullConfigType;

    // 0x100f38a90, 16 bytes, __data; set at startup by ___cxx_global_var_init.102
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<BASType>::NullConfigType;

    // 0x100f38c40, 16 bytes, __data; set at startup by ___cxx_global_var_init.91
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<HitmarkType>::NullConfigType;

    // 0x100f38c58, 16 bytes, __data; set at startup by ___cxx_global_var_init.92
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<HeadbarType>::NullConfigType;

    // 0x100f38c70, 16 bytes, __data; set at startup by ___cxx_global_var_init.114
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<WorldAreaType>::NullConfigType;

    // 0x100f38d40, 16 bytes, __data; set at startup by ___cxx_global_var_init.123
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<SeqType>::NullConfigType;

    // 0x100f38f60, 16 bytes, __data; set at startup by ___cxx_global_var_init.98
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<LightType>::NullConfigType;

    // 0x100f3c0c0, 16 bytes, __data; set at startup by ___cxx_global_var_init.52
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<InvType>::NullConfigType;

    // 0x100f3c180, 16 bytes, __data; set at startup by ___cxx_global_var_init.38
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<VarBitType>::NullConfigType;

    // 0x100f3c3d0, 16 bytes, __data; set at startup by ___cxx_global_var_init.25
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<VarType>::NullConfigType;

    // 0x100f3c620, 16 bytes, __data; set at startup by ___cxx_global_var_init.93
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<ObjType>::NullConfigType;

    // 0x100f3c8f0, 16 bytes, __data; set at startup by ___cxx_global_var_init.127
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<MSIType>::NullConfigType;

    // 0x100f3cae0, 16 bytes, __data; set at startup by ___cxx_global_var_init.63
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<AchievementType>::NullConfigType;

    // 0x100f3ce10, 16 bytes, __data; set at startup by ___cxx_global_var_init.43
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<CursorType>::NullConfigType;

    // 0x100f3ce48, 16 bytes, __data; set at startup by ___cxx_global_var_init.46
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<DBRowType>::NullConfigType;

    // 0x100f3ce80, 16 bytes, __data; set at startup by ___cxx_global_var_init.49
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<DBTableType>::NullConfigType;

    // 0x100f3cef8, 16 bytes, __data; set at startup by ___cxx_global_var_init.106
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<EffectAnimType>::NullConfigType;

    // 0x100f3cf30, 16 bytes, __data; set at startup by ___cxx_global_var_init.100
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<EnumType>::NullConfigType;

    // 0x100f3cfd0, 16 bytes, __data; set at startup by ___cxx_global_var_init.61
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<FloorUnderlayType>::NullConfigType;

    // 0x100f3d0f0, 16 bytes, __data; set at startup by ___cxx_global_var_init.57
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<IDKType>::NullConfigType;

    // 0x100f3d1c0, 16 bytes, __data; set at startup by ___cxx_global_var_init.22
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<QuestType>::NullConfigType;

    // 0x100f3d318, 16 bytes, __data; set at startup by ___cxx_global_var_init.126
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<MapElementType>::NullConfigType;

    // 0x100f3d3a0, 16 bytes, __data; set at startup by ___cxx_global_var_init.54
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<ParamType>::NullConfigType;

    // 0x100f3d4a8, 16 bytes, __data; set at startup by ___cxx_global_var_init.46
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<SeqGroupType>::NullConfigType;

    // 0x100f3d528, 16 bytes, __data; set at startup by ___cxx_global_var_init.55
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<SkyBoxType>::NullConfigType;

    // 0x100f3d5a0, 16 bytes, __data; set at startup by ___cxx_global_var_init.118
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<StructType>::NullConfigType;

    // 0x100f3df30, 16 bytes, __data; set at startup by ___cxx_global_var_init.58
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> ConfigType<FloorOverlayType>::NullConfigType;

    // 0x1001a3d80, 64 bytes, base-object destructor, inline, placed by class name and debug map
    // ConfigType<VarType>::~ConfigType()
    void ConfigType<VarType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7e78 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x1003da680, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.114
    void ___cxx_global_var_init_114(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6508;
        puVar1 = PTR_NullConfigType_100ee46b0;
        if (*PTR_NullConfigType_100ee46b0 == '\0') {
            new (PTR_NullConfigType_100ee6508) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51e0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003da8b0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.123
    void ___cxx_global_var_init_123(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6570;
        puVar1 = PTR_NullConfigType_100ee4718;
        if (*PTR_NullConfigType_100ee4718 == '\0') {
            new (PTR_NullConfigType_100ee6570) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee52a0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003da930, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.125
    void ___cxx_global_var_init_125(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6550;
        puVar1 = PTR_NullConfigType_100ee46f8;
        if (*PTR_NullConfigType_100ee46f8 == '\0') {
            new (PTR_NullConfigType_100ee6550) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5278, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003da970, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.126
    void ___cxx_global_var_init_126(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6518;
        puVar1 = PTR_NullConfigType_100ee46c0;
        if (*PTR_NullConfigType_100ee46c0 == '\0') {
            new (PTR_NullConfigType_100ee6518) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51f0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003da9b0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.127
    void ___cxx_global_var_init_127(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6558;
        puVar1 = PTR_NullConfigType_100ee4700;
        if (*PTR_NullConfigType_100ee4700 == '\0') {
            new (PTR_NullConfigType_100ee6558) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5280, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003e7540, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.55
    void ___cxx_global_var_init_55(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee64d0;
        puVar1 = PTR_NullConfigType_100ee4678;
        if (*PTR_NullConfigType_100ee4678 == '\0') {
            new (PTR_NullConfigType_100ee64d0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5198, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1003e7670, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.60
    void ___cxx_global_var_init_60(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee65a8;
        puVar1 = PTR_NullConfigType_100ee4750;
        if (*PTR_NullConfigType_100ee4750 == '\0') {
            new (PTR_NullConfigType_100ee65a8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee52e8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040b990, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.93
    void ___cxx_global_var_init_93(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6568;
        puVar1 = PTR_NullConfigType_100ee4710;
        if (*PTR_NullConfigType_100ee4710 == '\0') {
            new (PTR_NullConfigType_100ee6568) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5298, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040bb50, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.100
    void ___cxx_global_var_init_100(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6580;
        puVar1 = PTR_NullConfigType_100ee4728;
        if (*PTR_NullConfigType_100ee4728 == '\0') {
            new (PTR_NullConfigType_100ee6580) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee52b0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040bbd0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.102
    void ___cxx_global_var_init_102(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6538;
        puVar1 = PTR_NullConfigType_100ee46e0;
        if (*PTR_NullConfigType_100ee46e0 == '\0') {
            new (PTR_NullConfigType_100ee6538) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5260, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10040bcd0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.106
    void ___cxx_global_var_init_106(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6510;
        puVar1 = PTR_NullConfigType_100ee46b8;
        if (*PTR_NullConfigType_100ee46b8 == '\0') {
            new (PTR_NullConfigType_100ee6510) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51e8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100427ea0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.110
    void ___cxx_global_var_init_110(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6560;
        puVar1 = PTR_NullConfigType_100ee4708;
        if (*PTR_NullConfigType_100ee4708 == '\0') {
            new (PTR_NullConfigType_100ee6560) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5290, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043ab50, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.91
    void ___cxx_global_var_init_91(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee64f8;
        puVar1 = PTR_NullConfigType_100ee46a0;
        if (*PTR_NullConfigType_100ee46a0 == '\0') {
            new (PTR_NullConfigType_100ee64f8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51c0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10043ab90, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.92
    void ___cxx_global_var_init_92(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee64f0;
        puVar1 = PTR_NullConfigType_100ee4698;
        if (*PTR_NullConfigType_100ee4698 == '\0') {
            new (PTR_NullConfigType_100ee64f0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51b8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100460320, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.98
    void ___cxx_global_var_init_98(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6590;
        puVar1 = PTR_NullConfigType_100ee4738;
        if (*PTR_NullConfigType_100ee4738 == '\0') {
            new (PTR_NullConfigType_100ee6590) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee52c8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x10049f690, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.57
    void ___cxx_global_var_init_57(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6540;
        puVar1 = PTR_NullConfigType_100ee46e8;
        if (*PTR_NullConfigType_100ee46e8 == '\0') {
            new (PTR_NullConfigType_100ee6540) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5268, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004bc1c0, 144 bytes, inline, placed by class name
    // ConfigType<ObjType>::GetParam(int, shared_ptr<ParamType> const&) const
    void ConfigType<ObjType>::GetParam(int param_1, shared_ptr* param_2) {
        vector_map<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::less<int>,
                   eastl::allocator,
                   eastl::vector<eastl::pair<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>,
                                 eastl::allocator>>* this_00;
        long lVar1;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        LightType* this_02;
        bool bVar2;
        long lVar3;
        shared_ptr* this_03;
        int local_24;

        this_03 = (shared_ptr*)(this + 40);
        bVar2 = shared_ptr::operator_cast_to_bool(this_03);
        if (bVar2) {
            this_00 =
                (vector_map<
                    int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::less<int>,
                    eastl::allocator,
                    eastl::vector<eastl::pair<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>,
                                  eastl::allocator>>*)
                    shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                 eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
                    operator->(
                        (shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                      eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)
                            this_03);
            lVar1 = eastl::vector_map<
                int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>, eastl::less<int>,
                eastl::allocator,
                eastl::vector<eastl::pair<int, std::variant<int, eastl::basic_string<char, BucketAllocatorEASTL>>>,
                              eastl::allocator>>::find(this_00, &local_24);
            this_01 =
                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                 eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
                    operator->(
                        (shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                      eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)
                            this_03);
            lVar3 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
            if (lVar1 != lVar3) {
                ((lVar1 + 8))->GetInt();
                return;
            }
        }
        this_02 = (LightType*)shared_ptr<ParamType>::operator->((shared_ptr<ParamType>*)param_2);
        this_02->GetAmplitude();
    }

    // 0x1004c0240, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.38
    void ___cxx_global_var_init_38(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee64e0;
        puVar1 = PTR_NullConfigType_100ee4688;
        if (*PTR_NullConfigType_100ee4688 == '\0') {
            new (PTR_NullConfigType_100ee64e0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51a8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004c0600, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.52
    void ___cxx_global_var_init_52(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6548;
        puVar1 = PTR_NullConfigType_100ee46f0;
        if (*PTR_NullConfigType_100ee46f0 == '\0') {
            new (PTR_NullConfigType_100ee6548) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5270, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004c0680, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.54
    void ___cxx_global_var_init_54(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6598;
        puVar1 = PTR_NullConfigType_100ee4740;
        if (*PTR_NullConfigType_100ee4740 == '\0') {
            new (PTR_NullConfigType_100ee6598) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee52d8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004c5a30, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<VarBitType>::ConfigType(BaseTemplateConfigTypeList<VarBitType>*, int)
    void ConfigType<VarBitType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7de0 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x1004c5af0, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<VarBitType>::~ConfigType()
    void ConfigType<VarBitType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7de0 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x1004c6350, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<WaterType>::ConfigType(BaseTemplateConfigTypeList<WaterType>*, int)
    void ConfigType<WaterType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7ea8 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x1004c6450, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<WaterType>::~ConfigType()
    void ConfigType<WaterType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7ea8 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x1004c9350, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<WorldAreaType>::~ConfigType()
    void ConfigType<WorldAreaType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7e08 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x1004d1850, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<VarType>::ConfigType(BaseTemplateConfigTypeList<VarType>*, int)
    void ConfigType<VarType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7e78 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x1004dce40, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.22
    void ___cxx_global_var_init_22(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee65a0;
        puVar1 = PTR_NullConfigType_100ee4748;
        if (*PTR_NullConfigType_100ee4748 == '\0') {
            new (PTR_NullConfigType_100ee65a0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee52e0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004dcf00, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.25
    void ___cxx_global_var_init_25(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6578;
        puVar1 = PTR_NullConfigType_100ee4720;
        if (*PTR_NullConfigType_100ee4720 == '\0') {
            new (PTR_NullConfigType_100ee6578) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee52a8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004ddb50, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<SeqType>::~ConfigType()
    void ConfigType<SeqType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7e70 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x1004de6b0, 512 bytes, inline, placed by class name
    // ConfigType<SeqType>::DecodeParams(PacketT<Array<unsigned char, eastl::allocator> >&)
    void ConfigType<SeqType>::DecodeParams(PacketT* param_1) {
        vector<eastl::pair<int, VarValue>, eastl::allocator>* this_00;
        PacketT* this_01;
        bool bVar1;
        char cVar2;
        uint uVar3;
        int iVar4;
        shared_ptr* this_02;
        VarValue local_b0[32];
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_90[24];
        shared_ptr local_78[2];
        shared_ptr* local_50;
        PacketT* local_48;
        vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                   eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>* local_40;
        int local_34;

        uVar3 = param_1->g1();
        this_02 = (shared_ptr*)(this + 40);
        bVar1 = shared_ptr::operator_cast_to_bool(this_02);
        if (!bVar1) {
            make_shared<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                          eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>((jag*)local_78);
            shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                         eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
            operator=(
                (shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                              eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)this_02,
                local_78);
            local_78->~shared_ptr();
        }
        uVar3 = uVar3 & 255;
        local_50 = this_02;
        local_48 = param_1;
        this_00 =
            (vector<eastl::pair<int, VarValue>, eastl::allocator>*)
                shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                             eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
                operator->((shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                         eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)
                               this_02);
        eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>::reserve(this_00, (ulong)uVar3);
        if (uVar3 != 0) {
            do {
                this_01 = local_48;
                cVar2 = local_48->g1();
                local_34 = this_01->g3();
                local_40 =
                    (vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>*)
                        shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                     eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
                        operator->((
                            shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                         eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)
                                       local_50);
                if (cVar2 == '\x01') {
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(local_90, SUB81(this_01, 0));
                    VarValue::VarValue(local_b0, local_90);
                    eastl::make_pair<int&, VarValue>((eastl*)local_78, &local_34, local_b0);
                    eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                      eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>::
                        insert<eastl::pair<int, VarValue>, void>(local_40, (pair*)local_78);
                    local_78->~pair();
                    local_b0->~VarValue();
                    local_90->~basic_string();
                } else {
                    iVar4 = this_01->g4s();
                    VarValue::VarValue(local_b0, iVar4);
                    eastl::make_pair<int&, VarValue>((eastl*)local_78, &local_34, local_b0);
                    eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                      eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>::
                        insert<eastl::pair<int, VarValue>, void>(local_40, (pair*)local_78);
                    local_78->~pair();
                    local_b0->~VarValue();
                }
                uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
        }
    }

    // 0x1004e11d0, 512 bytes, inline, placed by class name
    // ConfigType<StructType>::DecodeParams(PacketT<Array<unsigned char, eastl::allocator> >&)
    void ConfigType<StructType>::DecodeParams(PacketT* param_1) {
        vector<eastl::pair<int, VarValue>, eastl::allocator>* this_00;
        PacketT* this_01;
        bool bVar1;
        char cVar2;
        uint uVar3;
        int iVar4;
        shared_ptr* this_02;
        VarValue local_b0[32];
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_90[24];
        shared_ptr local_78[2];
        shared_ptr* local_50;
        PacketT* local_48;
        vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                   eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>* local_40;
        int local_34;

        uVar3 = param_1->g1();
        this_02 = (shared_ptr*)(this + 40);
        bVar1 = shared_ptr::operator_cast_to_bool(this_02);
        if (!bVar1) {
            make_shared<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                          eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>((jag*)local_78);
            shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                         eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
            operator=(
                (shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                              eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)this_02,
                local_78);
            local_78->~shared_ptr();
        }
        uVar3 = uVar3 & 255;
        local_50 = this_02;
        local_48 = param_1;
        this_00 =
            (vector<eastl::pair<int, VarValue>, eastl::allocator>*)
                shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                             eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
                operator->((shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                         eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)
                               this_02);
        eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>::reserve(this_00, (ulong)uVar3);
        if (uVar3 != 0) {
            do {
                this_01 = local_48;
                cVar2 = local_48->g1();
                local_34 = this_01->g3();
                local_40 =
                    (vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>*)
                        shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                     eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
                        operator->((
                            shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                         eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)
                                       local_50);
                if (cVar2 == '\x01') {
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(local_90, SUB81(this_01, 0));
                    VarValue::VarValue(local_b0, local_90);
                    eastl::make_pair<int&, VarValue>((eastl*)local_78, &local_34, local_b0);
                    eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                      eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>::
                        insert<eastl::pair<int, VarValue>, void>(local_40, (pair*)local_78);
                    local_78->~pair();
                    local_b0->~VarValue();
                    local_90->~basic_string();
                } else {
                    iVar4 = this_01->g4s();
                    VarValue::VarValue(local_b0, iVar4);
                    eastl::make_pair<int&, VarValue>((eastl*)local_78, &local_34, local_b0);
                    eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                      eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>::
                        insert<eastl::pair<int, VarValue>, void>(local_40, (pair*)local_78);
                    local_78->~pair();
                    local_b0->~VarValue();
                }
                uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
        }
    }

    // 0x1004ebc40, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<SeqType>::ConfigType(BaseTemplateConfigTypeList<SeqType>*, int)
    void ConfigType<SeqType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7e70 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x1004f2840, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.46
    void ___cxx_global_var_init_46(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6500;
        puVar1 = PTR_NullConfigType_100ee46a8;
        if (*PTR_NullConfigType_100ee46a8 == '\0') {
            new (PTR_NullConfigType_100ee6500) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51d8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1004f4810, 512 bytes, inline, placed by class name
    // ConfigType<QuestType>::DecodeParams(PacketT<Array<unsigned char, eastl::allocator> >&)
    void ConfigType<QuestType>::DecodeParams(PacketT* param_1) {
        vector<eastl::pair<int, VarValue>, eastl::allocator>* this_00;
        PacketT* this_01;
        bool bVar1;
        char cVar2;
        uint uVar3;
        int iVar4;
        shared_ptr* this_02;
        VarValue local_b0[32];
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_90[24];
        shared_ptr local_78[2];
        shared_ptr* local_50;
        PacketT* local_48;
        vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                   eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>* local_40;
        int local_34;

        uVar3 = param_1->g1();
        this_02 = (shared_ptr*)(this + 40);
        bVar1 = shared_ptr::operator_cast_to_bool(this_02);
        if (!bVar1) {
            make_shared<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                          eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>((jag*)local_78);
            shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                         eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
            operator=(
                (shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                              eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)this_02,
                local_78);
            local_78->~shared_ptr();
        }
        uVar3 = uVar3 & 255;
        local_50 = this_02;
        local_48 = param_1;
        this_00 =
            (vector<eastl::pair<int, VarValue>, eastl::allocator>*)
                shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                             eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
                operator->((shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                         eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)
                               this_02);
        eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>::reserve(this_00, (ulong)uVar3);
        if (uVar3 != 0) {
            do {
                this_01 = local_48;
                cVar2 = local_48->g1();
                local_34 = this_01->g3();
                local_40 =
                    (vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>*)
                        shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                     eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
                        operator->((
                            shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                         eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)
                                       local_50);
                if (cVar2 == '\x01') {
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(local_90, SUB81(this_01, 0));
                    VarValue::VarValue(local_b0, local_90);
                    eastl::make_pair<int&, VarValue>((eastl*)local_78, &local_34, local_b0);
                    eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                      eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>::
                        insert<eastl::pair<int, VarValue>, void>(local_40, (pair*)local_78);
                    local_78->~pair();
                    local_b0->~VarValue();
                    local_90->~basic_string();
                } else {
                    iVar4 = this_01->g4s();
                    VarValue::VarValue(local_b0, iVar4);
                    eastl::make_pair<int&, VarValue>((eastl*)local_78, &local_34, local_b0);
                    eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                      eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>::
                        insert<eastl::pair<int, VarValue>, void>(local_40, (pair*)local_78);
                    local_78->~pair();
                    local_b0->~VarValue();
                }
                uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
        }
    }

    // 0x1004f8f70, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<ObjType>::~ConfigType()
    void ConfigType<ObjType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7e68 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x1005023d0, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<NPCType>::ConfigType(BaseTemplateConfigTypeList<NPCType>*, int)
    void ConfigType<NPCType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7e60 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x1005024f0, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<NPCType>::~ConfigType()
    void ConfigType<NPCType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7e60 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x100503780, 512 bytes, inline, placed by class name
    // ConfigType<NPCType>::DecodeParams(PacketT<Array<unsigned char, eastl::allocator> >&)
    void ConfigType<NPCType>::DecodeParams(PacketT* param_1) {
        vector<eastl::pair<int, VarValue>, eastl::allocator>* this_00;
        PacketT* this_01;
        bool bVar1;
        char cVar2;
        uint uVar3;
        int iVar4;
        shared_ptr* this_02;
        VarValue local_b0[32];
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_90[24];
        shared_ptr local_78[2];
        shared_ptr* local_50;
        PacketT* local_48;
        vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                   eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>* local_40;
        int local_34;

        uVar3 = param_1->g1();
        this_02 = (shared_ptr*)(this + 40);
        bVar1 = shared_ptr::operator_cast_to_bool(this_02);
        if (!bVar1) {
            make_shared<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                          eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>((jag*)local_78);
            shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                         eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
            operator=(
                (shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                              eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)this_02,
                local_78);
            local_78->~shared_ptr();
        }
        uVar3 = uVar3 & 255;
        local_50 = this_02;
        local_48 = param_1;
        this_00 =
            (vector<eastl::pair<int, VarValue>, eastl::allocator>*)
                shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                             eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
                operator->((shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                         eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)
                               this_02);
        eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>::reserve(this_00, (ulong)uVar3);
        if (uVar3 != 0) {
            do {
                this_01 = local_48;
                cVar2 = local_48->g1();
                local_34 = this_01->g3();
                local_40 =
                    (vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>*)
                        shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                     eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
                        operator->((
                            shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                         eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)
                                       local_50);
                if (cVar2 == '\x01') {
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(local_90, SUB81(this_01, 0));
                    VarValue::VarValue(local_b0, local_90);
                    eastl::make_pair<int&, VarValue>((eastl*)local_78, &local_34, local_b0);
                    eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                      eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>::
                        insert<eastl::pair<int, VarValue>, void>(local_40, (pair*)local_78);
                    local_78->~pair();
                    local_b0->~VarValue();
                    local_90->~basic_string();
                } else {
                    iVar4 = this_01->g4s();
                    VarValue::VarValue(local_b0, iVar4);
                    eastl::make_pair<int&, VarValue>((eastl*)local_78, &local_34, local_b0);
                    eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                      eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>::
                        insert<eastl::pair<int, VarValue>, void>(local_40, (pair*)local_78);
                    local_78->~pair();
                    local_b0->~VarValue();
                }
                uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
        }
    }

    // 0x1005060a0, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<ObjType>::ConfigType(BaseTemplateConfigTypeList<ObjType>*, int)
    void ConfigType<ObjType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7e68 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x100507120, 512 bytes, inline, placed by class name
    // ConfigType<ObjType>::DecodeParams(PacketT<Array<unsigned char, eastl::allocator> >&)
    void ConfigType<ObjType>::DecodeParams(PacketT* param_1) {
        vector<eastl::pair<int, VarValue>, eastl::allocator>* this_00;
        PacketT* this_01;
        bool bVar1;
        char cVar2;
        uint uVar3;
        int iVar4;
        shared_ptr* this_02;
        VarValue local_b0[32];
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_90[24];
        shared_ptr local_78[2];
        shared_ptr* local_50;
        PacketT* local_48;
        vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                   eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>* local_40;
        int local_34;

        uVar3 = param_1->g1();
        this_02 = (shared_ptr*)(this + 40);
        bVar1 = shared_ptr::operator_cast_to_bool(this_02);
        if (!bVar1) {
            make_shared<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                          eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>((jag*)local_78);
            shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                         eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
            operator=(
                (shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                              eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)this_02,
                local_78);
            local_78->~shared_ptr();
        }
        uVar3 = uVar3 & 255;
        local_50 = this_02;
        local_48 = param_1;
        this_00 =
            (vector<eastl::pair<int, VarValue>, eastl::allocator>*)
                shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                             eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
                operator->((shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                         eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)
                               this_02);
        eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>::reserve(this_00, (ulong)uVar3);
        if (uVar3 != 0) {
            do {
                this_01 = local_48;
                cVar2 = local_48->g1();
                local_34 = this_01->g3();
                local_40 =
                    (vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>*)
                        shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                     eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
                        operator->((
                            shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                         eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)
                                       local_50);
                if (cVar2 == '\x01') {
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(local_90, SUB81(this_01, 0));
                    VarValue::VarValue(local_b0, local_90);
                    eastl::make_pair<int&, VarValue>((eastl*)local_78, &local_34, local_b0);
                    eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                      eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>::
                        insert<eastl::pair<int, VarValue>, void>(local_40, (pair*)local_78);
                    local_78->~pair();
                    local_b0->~VarValue();
                    local_90->~basic_string();
                } else {
                    iVar4 = this_01->g4s();
                    VarValue::VarValue(local_b0, iVar4);
                    eastl::make_pair<int&, VarValue>((eastl*)local_78, &local_34, local_b0);
                    eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                      eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>::
                        insert<eastl::pair<int, VarValue>, void>(local_40, (pair*)local_78);
                    local_78->~pair();
                    local_b0->~VarValue();
                }
                uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
        }
    }

    // 0x100516e70, 512 bytes, inline, placed by class name
    // ConfigType<MapElementType>::DecodeParams(PacketT<Array<unsigned char, eastl::allocator> >&)
    void ConfigType<MapElementType>::DecodeParams(PacketT* param_1) {
        vector<eastl::pair<int, VarValue>, eastl::allocator>* this_00;
        PacketT* this_01;
        bool bVar1;
        char cVar2;
        uint uVar3;
        int iVar4;
        shared_ptr* this_02;
        VarValue local_b0[32];
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_90[24];
        shared_ptr local_78[2];
        shared_ptr* local_50;
        PacketT* local_48;
        vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                   eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>* local_40;
        int local_34;

        uVar3 = param_1->g1();
        this_02 = (shared_ptr*)(this + 40);
        bVar1 = shared_ptr::operator_cast_to_bool(this_02);
        if (!bVar1) {
            make_shared<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                          eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>((jag*)local_78);
            shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                         eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
            operator=(
                (shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                              eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)this_02,
                local_78);
            local_78->~shared_ptr();
        }
        uVar3 = uVar3 & 255;
        local_50 = this_02;
        local_48 = param_1;
        this_00 =
            (vector<eastl::pair<int, VarValue>, eastl::allocator>*)
                shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                             eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
                operator->((shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                         eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)
                               this_02);
        eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>::reserve(this_00, (ulong)uVar3);
        if (uVar3 != 0) {
            do {
                this_01 = local_48;
                cVar2 = local_48->g1();
                local_34 = this_01->g3();
                local_40 =
                    (vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>*)
                        shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                     eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
                        operator->((
                            shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                         eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)
                                       local_50);
                if (cVar2 == '\x01') {
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(local_90, SUB81(this_01, 0));
                    VarValue::VarValue(local_b0, local_90);
                    eastl::make_pair<int&, VarValue>((eastl*)local_78, &local_34, local_b0);
                    eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                      eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>::
                        insert<eastl::pair<int, VarValue>, void>(local_40, (pair*)local_78);
                    local_78->~pair();
                    local_b0->~VarValue();
                    local_90->~basic_string();
                } else {
                    iVar4 = this_01->g4s();
                    VarValue::VarValue(local_b0, iVar4);
                    eastl::make_pair<int&, VarValue>((eastl*)local_78, &local_34, local_b0);
                    eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                      eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>::
                        insert<eastl::pair<int, VarValue>, void>(local_40, (pair*)local_78);
                    local_78->~pair();
                    local_b0->~VarValue();
                }
                uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
        }
    }

    // 0x10051b1a0, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<LocType>::~ConfigType()
    void ConfigType<LocType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7e50 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x100525bd0, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<LocType>::ConfigType(BaseTemplateConfigTypeList<LocType>*, int)
    void ConfigType<LocType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7e50 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x100527660, 512 bytes, inline, placed by class name
    // ConfigType<LocType>::DecodeParams(PacketT<Array<unsigned char, eastl::allocator> >&)
    void ConfigType<LocType>::DecodeParams(PacketT* param_1) {
        vector<eastl::pair<int, VarValue>, eastl::allocator>* this_00;
        PacketT* this_01;
        bool bVar1;
        char cVar2;
        uint uVar3;
        int iVar4;
        shared_ptr* this_02;
        VarValue local_b0[32];
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_90[24];
        shared_ptr local_78[2];
        shared_ptr* local_50;
        PacketT* local_48;
        vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                   eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>* local_40;
        int local_34;

        uVar3 = param_1->g1();
        this_02 = (shared_ptr*)(this + 40);
        bVar1 = shared_ptr::operator_cast_to_bool(this_02);
        if (!bVar1) {
            make_shared<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                          eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>((jag*)local_78);
            shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                         eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
            operator=(
                (shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                              eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)this_02,
                local_78);
            local_78->~shared_ptr();
        }
        uVar3 = uVar3 & 255;
        local_50 = this_02;
        local_48 = param_1;
        this_00 =
            (vector<eastl::pair<int, VarValue>, eastl::allocator>*)
                shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                             eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
                operator->((shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                         eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)
                               this_02);
        eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>::reserve(this_00, (ulong)uVar3);
        if (uVar3 != 0) {
            do {
                this_01 = local_48;
                cVar2 = local_48->g1();
                local_34 = this_01->g3();
                local_40 =
                    (vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>*)
                        shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                     eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>::
                        operator->((
                            shared_ptr<eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                                         eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>>*)
                                       local_50);
                if (cVar2 == '\x01') {
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::basic_string<char, BucketAllocatorEASTL>>(local_90, SUB81(this_01, 0));
                    VarValue::VarValue(local_b0, local_90);
                    eastl::make_pair<int&, VarValue>((eastl*)local_78, &local_34, local_b0);
                    eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                      eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>::
                        insert<eastl::pair<int, VarValue>, void>(local_40, (pair*)local_78);
                    local_78->~pair();
                    local_b0->~VarValue();
                    local_90->~basic_string();
                } else {
                    iVar4 = this_01->g4s();
                    VarValue::VarValue(local_b0, iVar4);
                    eastl::make_pair<int&, VarValue>((eastl*)local_78, &local_34, local_b0);
                    eastl::vector_map<int, VarValue, eastl::less<int>, eastl::allocator,
                                      eastl::vector<eastl::pair<int, VarValue>, eastl::allocator>>::
                        insert<eastl::pair<int, VarValue>, void>(local_40, (pair*)local_78);
                    local_78->~pair();
                    local_b0->~VarValue();
                }
                uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
        }
    }

    // 0x100544ef0, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<HitmarkType>::ConfigType(BaseTemplateConfigTypeList<HitmarkType>*, int)
    void ConfigType<HitmarkType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7df8 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x100560fe0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.63
    void ___cxx_global_var_init_63(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6520;
        puVar1 = PTR_NullConfigType_100ee46c8;
        if (*PTR_NullConfigType_100ee46c8 == '\0') {
            new (PTR_NullConfigType_100ee6520) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51f8, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x100572b50, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<ParamType>::~ConfigType()
    void ConfigType<ParamType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7e98 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x100572dc0, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<ParamType>::ConfigType(BaseTemplateConfigTypeList<ParamType>*, int)
    void ConfigType<ParamType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7e98 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x1005784a0, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<DBRowType>::~ConfigType()
    void ConfigType<DBRowType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7e88 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x100578ad0, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<DBRowType>::ConfigType(BaseTemplateConfigTypeList<DBRowType>*, int)
    void ConfigType<DBRowType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7e88 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x10057df60, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<DBTableType>::~ConfigType()
    void ConfigType<DBTableType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7de8 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x10057e1e0, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<DBTableType>::ConfigType(BaseTemplateConfigTypeList<DBTableType>*, int)
    void ConfigType<DBTableType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7de8 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x100583640, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<InvType>::~ConfigType()
    void ConfigType<InvType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7e48 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x1005838c0, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<InvType>::ConfigType(BaseTemplateConfigTypeList<InvType>*, int)
    void ConfigType<InvType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7e48 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x10058d0e0, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<BASType>::~ConfigType()
    void ConfigType<BASType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7e38 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x10058d3e0, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<BASType>::ConfigType(BaseTemplateConfigTypeList<BASType>*, int)
    void ConfigType<BASType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7e38 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x100592810, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<FloorUnderlayType>::~ConfigType()
    void ConfigType<FloorUnderlayType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7e30 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x100592a80, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<FloorUnderlayType>::ConfigType(BaseTemplateConfigTypeList<FloorUnderlayType>*, int)
    void ConfigType<FloorUnderlayType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7e30 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x100597ed0, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<FloorOverlayType>::~ConfigType()
    void ConfigType<FloorOverlayType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7e28 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x100598150, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<FloorOverlayType>::ConfigType(BaseTemplateConfigTypeList<FloorOverlayType>*, int)
    void ConfigType<FloorOverlayType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7e28 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x10059d680, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<HitmarkType>::~ConfigType()
    void ConfigType<HitmarkType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7df8 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x1005a26a0, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<HeadbarType>::~ConfigType()
    void ConfigType<HeadbarType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7df0 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x1005a2930, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<HeadbarType>::ConfigType(BaseTemplateConfigTypeList<HeadbarType>*, int)
    void ConfigType<HeadbarType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7df0 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x1005a7ce0, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<IDKType>::~ConfigType()
    void ConfigType<IDKType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7e40 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x1005a80d0, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<IDKType>::ConfigType(BaseTemplateConfigTypeList<IDKType>*, int)
    void ConfigType<IDKType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7e40 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x1005ad670, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<MapElementType>::~ConfigType()
    void ConfigType<MapElementType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7e18 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x1005ae2a0, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<MapElementType>::ConfigType(BaseTemplateConfigTypeList<MapElementType>*, int)
    void ConfigType<MapElementType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7e18 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x1005b3e90, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<MSIType>::~ConfigType()
    void ConfigType<MSIType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7e58 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x1005b40f0, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<MSIType>::ConfigType(BaseTemplateConfigTypeList<MSIType>*, int)
    void ConfigType<MSIType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7e58 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x1005b9980, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<QuestType>::~ConfigType()
    void ConfigType<QuestType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7ea0 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x1005b9f70, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<QuestType>::ConfigType(BaseTemplateConfigTypeList<QuestType>*, int)
    void ConfigType<QuestType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7ea0 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x1005bf4f0, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<SeqGroupType>::~ConfigType()
    void ConfigType<SeqGroupType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7e00 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x1005bf790, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<SeqGroupType>::ConfigType(BaseTemplateConfigTypeList<SeqGroupType>*, int)
    void ConfigType<SeqGroupType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7e00 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x1005c4be0, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<LightType>::~ConfigType()
    void ConfigType<LightType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7e90 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x1005c4e70, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<LightType>::ConfigType(BaseTemplateConfigTypeList<LightType>*, int)
    void ConfigType<LightType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7e90 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x1005ca390, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<SkyBoxType>::~ConfigType()
    void ConfigType<SkyBoxType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7dd0 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x1005ca600, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<SkyBoxType>::ConfigType(BaseTemplateConfigTypeList<SkyBoxType>*, int)
    void ConfigType<SkyBoxType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7dd0 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x1005d44a0, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<CursorType>::~ConfigType()
    void ConfigType<CursorType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7dc8 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x1005d46f0, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<CursorType>::ConfigType(BaseTemplateConfigTypeList<CursorType>*, int)
    void ConfigType<CursorType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7dc8 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x1005d9ce0, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<WorldAreaType>::ConfigType(BaseTemplateConfigTypeList<WorldAreaType>*, int)
    void ConfigType<WorldAreaType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7e08 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x1005df3f0, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<EnumType>::~ConfigType()
    void ConfigType<EnumType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7e80 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x1005dfab0, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<EnumType>::ConfigType(BaseTemplateConfigTypeList<EnumType>*, int)
    void ConfigType<EnumType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7e80 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x1005e5750, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<EffectAnimType>::~ConfigType()
    void ConfigType<EffectAnimType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7e10 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x1005e5a50, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<EffectAnimType>::ConfigType(BaseTemplateConfigTypeList<EffectAnimType>*, int)
    void ConfigType<EffectAnimType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7e10 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x1005eb440, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<StructType>::~ConfigType()
    void ConfigType<StructType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7dd8 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x1005eb690, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<StructType>::ConfigType(BaseTemplateConfigTypeList<StructType>*, int)
    void ConfigType<StructType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7dd8 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x1005f0c00, 64 bytes, base-object destructor, inline, placed by class name
    // ConfigType<AchievementType>::~ConfigType()
    void ConfigType<AchievementType>::~ConfigType() {
        *(undefined**)this = PTR_vtable_100ee7e20 + 16;
        ((this + 40))->~shared_ptr();
        ((this + 8))->~enable_shared_from_this();
    }

    // 0x1005f1460, 96 bytes, base-object constructor, inline, placed by class name
    // ConfigType<AchievementType>::ConfigType(BaseTemplateConfigTypeList<AchievementType>*, int)
    void ConfigType<AchievementType>::ConfigType(BaseTemplateConfigTypeList* param_1, int param_2) {
        new ((this + 8)) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        *(undefined**)this = PTR_vtable_100ee7e20 + 16;
        *(BaseTemplateConfigTypeList**)(this + 24) = param_1;
        *(int*)(this + 32) = param_2;
        new ((this + 40)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
    }

    // 0x1005f6650, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.43
    void ___cxx_global_var_init_43(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee64c8;
        puVar1 = PTR_NullConfigType_100ee4670;
        if (*PTR_NullConfigType_100ee4670 == '\0') {
            new (PTR_NullConfigType_100ee64c8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5190, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6710, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.46
    void ___cxx_global_var_init_46(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6588;
        puVar1 = PTR_NullConfigType_100ee4730;
        if (*PTR_NullConfigType_100ee4730 == '\0') {
            new (PTR_NullConfigType_100ee6588) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee52c0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f67d0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.49
    void ___cxx_global_var_init_49(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee64e8;
        puVar1 = PTR_NullConfigType_100ee4690;
        if (*PTR_NullConfigType_100ee4690 == '\0') {
            new (PTR_NullConfigType_100ee64e8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51b0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6a10, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.58
    void ___cxx_global_var_init_58(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6528;
        puVar1 = PTR_NullConfigType_100ee46d0;
        if (*PTR_NullConfigType_100ee46d0 == '\0') {
            new (PTR_NullConfigType_100ee6528) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5208, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f6ad0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.61
    void ___cxx_global_var_init_61(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee6530;
        puVar1 = PTR_NullConfigType_100ee46d8;
        if (*PTR_NullConfigType_100ee46d8 == '\0') {
            new (PTR_NullConfigType_100ee6530) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee5220, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

    // 0x1005f7950, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.118
    void ___cxx_global_var_init_118(undefined8 param_1, _func_decltype_nullptr* param_2) {
        undefined* puVar1;
        undefined* puVar2;

        puVar2 = PTR_NullConfigType_100ee64d8;
        puVar1 = PTR_NullConfigType_100ee4680;
        if (*PTR_NullConfigType_100ee4680 == '\0') {
            new (PTR_NullConfigType_100ee64d8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
            ___cxa_atexit(PTR__shared_ptr_100ee51a0, puVar2, 4294967296);
            *puVar1 = 1;
        }
    }

} // namespace jag::game

namespace jag::math {
    // 0x1001a4060, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<float>::Vector3T()
    /* Vector3T<int>::Vector3T() */

    void Vector3T<int>::Vector3T() {
        *(undefined8*)this = 0;
        *(undefined4*)(this + 8) = 0;
    }

    // 0x1001a4060: the linker folded this into Vector3T<float>::Vector3T(), which has identical code
    ColourHSL::ColourHSL();

    // 0x1001a4080, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Matrix44T<float>::Matrix44T(Matrix33T<float> const&, Vector3T<float> const&)
    void Matrix44T<float>::Matrix44T(Matrix33T* param_1, Vector3T* param_2) {
        long lVar1;

        lVar1 = 0;
        do {
            new ((this + lVar1)) Vector4T<float>();
            lVar1 = lVar1 + 16;
        } while (lVar1 != 64);
        Set(this, param_1, param_2);
    }

} // namespace jag::math

namespace jag::render {
    // 0x1001a4060: the linker folded this into math::Vector3T<float>::Vector3T(), which has identical code
    DispatchCallParams::DispatchCallParams();

    // 0x1001a4060: the linker folded this into math::Vector3T<float>::Vector3T(), which has identical code
    QueryView::QueryView();

} // namespace jag::render

namespace jag::graphics {
    // 0x1001a4060: the linker folded this into math::Vector3T<float>::Vector3T(), which has identical code
    TextRunCharacter::TextRunCharacter();

} // namespace jag::graphics

namespace jag::oldscape::dash3d {
    // 0x1001a4060: the linker folded this into jag::math::Vector3T<float>::Vector3T(), which has identical code
    FaceNormal::FaceNormal();

} // namespace jag::oldscape::dash3d

namespace jag::game::configtype {
    // 0x100561cd0, 96 bytes, placed by class name
    // GetConfigTypeListContainerStrategyArray(ConfigTypeListContainerStrategy)
    configtype* GetConfigTypeListContainerStrategyArray(undefined4 param_2) {
        ConfigTypeListContainerStrategy* pCVar1;
        ConfigTypeListContainerStrategy* pCVar2;
        undefined4 local_1c;

        local_1c = param_2;
        new (this) Array<ConfigTypeListContainerStrategy, eastl::allocator>(86);
        pCVar1 = (ConfigTypeListContainerStrategy*)data();
        pCVar2 = (ConfigTypeListContainerStrategy*)end();
        std::fill<ConfigTypeListContainerStrategy*, ConfigTypeListContainerStrategy>(
            pCVar1, pCVar2, (ConfigTypeListContainerStrategy*)&local_1c);
        return this;
    }

} // namespace jag::game::configtype
