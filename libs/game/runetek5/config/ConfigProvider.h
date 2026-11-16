// libs/game/runetek5/config/ConfigProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class ConfigProvider {
    public:
        // virtual methods in vtable order
        virtual ~ConfigProvider();
        virtual void SetDecoder(const Js5ArchiveSettings* js5ArchiveSettings, ConfigDecoderInfo&& configDecoderInfo);
        virtual long GetDecoder(const Js5ArchiveSettings* js5ArchiveSettings);
        virtual void GetVarBitTypeList() const;
        virtual void GetVarPlayerTypeList() const;
        virtual void GetVarPlayerGroupTypeList() const;
        virtual void GetSkillDefaults() const;
        shared_ptr<MapElementType> const& GetConfig<MapElementType>(int arg1, const DataStatus** arg2) const;
        shared_ptr<MSIType> const& GetConfig<MSIType>(int arg1, const DataStatus** arg2) const;
        void GetWorldMapDefaults() const;
        DataStatus const* GetConfigSize<MapElementType>(unsigned int& arg1);
        shared_ptr<SkyBoxType> const& GetConfig<SkyBoxType>(int arg1, const DataStatus** arg2) const;
        shared_ptr<ObjType> const& GetConfig<ObjType>(int arg1, const DataStatus** arg2) const;
        void GetCustomizationDefaults() const;
        shared_ptr<EnumType> const& GetConfig<EnumType>(int arg1, const DataStatus** arg2) const;
        ConfigProvider* GetAnimationStateMachineProvider(int arg1) const;
        shared_ptr<EffectAnimType> const& GetConfig<EffectAnimType>(int arg1, const DataStatus** arg2) const;
        shared_ptr<WaterType> const& GetConfig<WaterType>(int arg1, const DataStatus** arg2) const;
        shared_ptr<NPCType> const& GetConfig<NPCType>(int arg1, const DataStatus** arg2) const;
        shared_ptr<BASType> const& GetConfig<BASType>(int arg1, const DataStatus** arg2) const;
        void GetGraphicsDefaults() const;
        shared_ptr<HitmarkType> const& GetConfig<HitmarkType>(int arg1, const DataStatus** arg2) const;
        shared_ptr<HeadbarType> const& GetConfig<HeadbarType>(int arg1, const DataStatus** arg2) const;
        shared_ptr<LocType> const& GetConfig<LocType>(int arg1, const DataStatus** arg2) const;
        shared_ptr<LightType> const& GetConfig<LightType>(int arg1, const DataStatus** arg2) const;
        CoordMapSquare* GetMapDefaults() const;
        WorldAreaTypeList* GetConfigList<WorldAreaType, WorldAreaTypeList>();
        void GetWearposDefaults() const;
        shared_ptr<IDKType> const& GetConfig<IDKType>(int arg1, const DataStatus** arg2) const;
        shared_ptr<InvType> const& GetConfig<InvType>(int arg1, const DataStatus** arg2) const;
        DataStatus const* GetConfigSize<QuestType>(unsigned int& arg1);
        shared_ptr<QuestType> const& GetConfig<QuestType>(int arg1, const DataStatus** arg2) const;
        shared_ptr<ParamType> const& GetConfig<ParamType>(int arg1, const DataStatus** arg2) const;
        void GetInterfacePacketGroup(int arg1);
        ConfigProvider(Js5ResourceProvider& js5ResourceProvider, const Language* language, const ModeGame* modeGame,
                       bool arg4, PlayerVarDomain* playerVarDomain,
                       Array<ConfigTypeListContainerStrategy>& configTypeListContainerStrategys, bool arg7);
        void EnableServerSyncing();
        void SetMembersServer(bool arg1);
        uint8_t* GetVarType(VarDomainType* varDomainType, int arg2) const;
        uint8_t* GetVarBitType(int arg1) const;
        void CacheReset();
        void CheckLoaded(bool& arg1, bool arg2, const Js5ArchiveSettings& js5ArchiveSettings);
        void MainLogic();
        bool PerformIndexDownload(Js5ResourceProvider& js5ResourceProvider);
        uint64_t GetPreloadProgress() const;
        void Reload();
        void DumpUsage();
        void ResetUsage();
        void SetDownloadedAnimationStateMachines(
            eastl::vector_map<int, shared_ptr<graphics::AnimationStateMachineProvider>>&& arg1);
        bool Ready() const;
        shared_ptr<FloorOverlayType> const& GetConfig<FloorOverlayType>(int arg1, const DataStatus** arg2) const;
        shared_ptr<FloorUnderlayType> const& GetConfig<FloorUnderlayType>(int arg1, const DataStatus** arg2) const;
        shared_ptr<SeqType> const& GetConfig<SeqType>(int arg1, const DataStatus** arg2) const;

    private:
        uint8_t** field_8;
        Js5ResourceProvider* field_16;
        Language* field_24;
        ModeGame* field_32;
        bool field_40;
        uint8_t _unknown_41[7];
        PlayerVarDomain* field_48;
        uint8_t _unknown_56[24];
        bool field_80;
        uint8_t _unknown_81[3];
        int field_84;
        int field_88;
        uint8_t field_92;
        uint8_t _unknown_93[3];
        uint32_t field_96;
        uint8_t _unknown_100[108];
        uint8_t field_208;
        uint8_t _unknown_209[7];
        uint8_t field_216;
        uint8_t _unknown_217[7];
        uint8_t field_224;
        uint8_t _unknown_225[7];
        uint8_t field_232;
        uint8_t _unknown_233[7];
        uint8_t field_240;
        uint8_t _unknown_241[7];
        uint8_t field_248;
        uint8_t _unknown_249[7];
        uint8_t field_256;
        uint8_t _unknown_257[7];
        uint8_t field_264;
        uint8_t _unknown_265[7];
        uint8_t field_272;
        uint8_t _unknown_273[7];
        uint8_t field_280;
        uint8_t _unknown_281[7];
        uint8_t field_288;
        uint8_t _unknown_289[7];
        uint8_t field_296;
        uint8_t _unknown_297[7];
        uint8_t field_304;
        uint8_t _unknown_305[7];
        uint8_t field_312;
        uint8_t _unknown_313[7];
        uint8_t field_320;
        uint8_t _unknown_321[7];
        uint8_t field_328;
        uint8_t _unknown_329[7];
        uint8_t field_336;
        uint8_t _unknown_337[7];
        uint8_t field_344;
        uint8_t _unknown_345[7];
        uint8_t field_352;
        uint8_t _unknown_353[7];
        uint8_t field_360;
        uint8_t _unknown_361[7];
        uint8_t field_368;
        uint8_t _unknown_369[7];
        uint8_t field_376;
        uint8_t _unknown_377[7];
        uint8_t field_384;
        uint8_t _unknown_385[7];
        uint8_t field_392;
        uint8_t _unknown_393[7];
        uint8_t field_400;
        uint8_t _unknown_401[7];
        uint8_t field_408;
        uint8_t _unknown_409[7];
        uint8_t field_416;
        uint8_t _unknown_417[7];
        uint8_t field_424;
        uint8_t _unknown_425[7];
        uint8_t field_432;
        uint8_t _unknown_433[7];
        uint8_t field_440;
        uint8_t _unknown_441[7];
        uint8_t field_448;
        uint8_t _unknown_449[7];
        uint8_t field_456;
        uint8_t _unknown_457[7];
        uint8_t field_464;
        uint8_t _unknown_465[7];
        uint8_t field_472;
        uint8_t _unknown_473[7];
        uint8_t field_480;
        uint8_t _unknown_481[7];
        uint8_t field_488;
        uint8_t _unknown_489[7];
        uint8_t field_496;
        uint8_t _unknown_497[247];
        int field_744;
        int field_748;
        int field_752;
        uint8_t _unknown_756[4];
        ServerSyncing* field_760;
        uint8_t _unknown_768[65608];
    };

    // 0x1003c0ac0
    shared_ptr<MapElementType> const& ConfigProvider::GetConfig<MapElementType>(int arg1,
                                                                                const DataStatus** arg2) const {
        int iVar1;
        unsigned int uVar2;
        Js5ConfigGroup* this_00;
        uint64_t* puVar3;

        shared_ptr<MapElementType>* psVar4 = (shared_ptr<MapElementType>*)PTR_NullConfigType_100ee6518;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<MapElementType>();
            iVar1 = this_00->GetX();
            puVar3 = &field_160[(long)iVar1];
            if ((BaseTemplateConfigTypeList<MapElementType>*)*puVar3 == nullptr) {
                uVar2 = this_00->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (unsigned long)uVar2);
            }
            psVar4 = (shared_ptr<MapElementType>*)(*puVar3)->List(arg1, arg2);
        } else if (arg2 != nullptr) {
            *arg2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x1003c21d0
    shared_ptr<MSIType> const& ConfigProvider::GetConfig<MSIType>(int arg1, const DataStatus** arg2) const {
        int iVar1;
        unsigned int uVar2;
        Js5ConfigGroup* this_00;
        uint64_t* puVar3;

        shared_ptr<MSIType>* psVar4 = (shared_ptr<MSIType>*)PTR_NullConfigType_100ee6558;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<MSIType>();
            iVar1 = this_00->GetX();
            puVar3 = &field_160[(long)iVar1];
            if ((BaseTemplateConfigTypeList<MSIType>*)*puVar3 == nullptr) {
                uVar2 = this_00->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (unsigned long)uVar2);
            }
            psVar4 = (shared_ptr<MSIType>*)(*puVar3)->List(arg1, arg2);
        } else if (arg2 != nullptr) {
            *arg2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x1003c7540
    void ConfigProvider::GetWorldMapDefaults() const {
        field_552.get();
    }

    // 0x1003c90a0
    DataStatus const* ConfigProvider::GetConfigSize<MapElementType>(unsigned int& arg1) {
        int iVar1;
        uint64_t* puVar3;

        uint8_t** ppuVar4 = &DataStatus::NOTLOADED;
        if (field_96 == 4) {
            iVar1 = Js5ConfigGroup::GetConfigGroup<MapElementType>()->GetX();
            puVar3 = &field_160[(long)iVar1];
            if ((Mixer*)*puVar3 != nullptr) {
                arg1 = (*puVar3)->GetStreamCountLastMix();
                ppuVar4 = &DataStatus::READY;
            }
        }
        return (DataStatus*)*ppuVar4;
    }

    // 0x1003dd4f0
    shared_ptr<SkyBoxType> const& ConfigProvider::GetConfig<SkyBoxType>(int arg1, const DataStatus** arg2) const {
        int iVar1;
        unsigned int uVar2;
        Js5ConfigGroup* this_00;
        uint64_t* puVar3;

        shared_ptr<SkyBoxType>* psVar4 = (shared_ptr<SkyBoxType>*)PTR_NullConfigType_100ee64d0;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<SkyBoxType>();
            iVar1 = this_00->GetX();
            puVar3 = &field_160[(long)iVar1];
            if ((BaseTemplateConfigTypeList<SkyBoxType>*)*puVar3 == nullptr) {
                uVar2 = this_00->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (unsigned long)uVar2);
            }
            psVar4 = (shared_ptr<SkyBoxType>*)(*puVar3)->List(arg1, arg2);
        } else if (arg2 != nullptr) {
            *arg2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x1003edd30
    shared_ptr<ObjType> const& ConfigProvider::GetConfig<ObjType>(int arg1, const DataStatus** arg2) const {
        int iVar1;
        unsigned int uVar2;
        Js5ConfigGroup* this_00;
        uint64_t* puVar3;

        shared_ptr<ObjType>* psVar4 = (shared_ptr<ObjType>*)PTR_NullConfigType_100ee6568;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<ObjType>();
            iVar1 = this_00->GetX();
            puVar3 = &field_160[(long)iVar1];
            if ((BaseTemplateConfigTypeList<ObjType>*)*puVar3 == nullptr) {
                uVar2 = this_00->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (unsigned long)uVar2);
            }
            psVar4 = (shared_ptr<ObjType>*)(*puVar3)->List(arg1, arg2);
        } else if (arg2 != nullptr) {
            *arg2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x1003f0d90
    void ConfigProvider::GetCustomizationDefaults() const {
        field_560.get();
    }

    // 0x1003f0dd0
    shared_ptr<EnumType> const& ConfigProvider::GetConfig<EnumType>(int arg1, const DataStatus** arg2) const {
        int iVar1;
        unsigned int uVar2;
        Js5ConfigGroup* this_00;
        uint64_t* puVar3;

        shared_ptr<EnumType>* psVar4 = (shared_ptr<EnumType>*)PTR_NullConfigType_100ee6580;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<EnumType>();
            iVar1 = this_00->GetX();
            puVar3 = &field_160[(long)iVar1];
            if ((BaseTemplateConfigTypeList<EnumType>*)*puVar3 == nullptr) {
                uVar2 = this_00->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (unsigned long)uVar2);
            }
            psVar4 = (shared_ptr<EnumType>*)(*puVar3)->List(arg1, arg2);
        } else if (arg2 != nullptr) {
            *arg2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x1003f2b10
    ConfigProvider* ConfigProvider::GetAnimationStateMachineProvider(int arg1) const {
        uint32_t in_register_00000034;

        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)((((uint64_t)in_register_00000034
                                                                                  << 32) |
                                                                                 (uint32_t)arg1) +
                                                                                664);
        long lVar1 = eastl::vector_map<int, shared_ptr<graphics::AnimationStateMachineProvider>>::find(*this_00);
        long lVar2 = this_00->end();
        if (lVar1 == lVar2) {
            new (this) shared_ptr();
        } else {
            new (this) shared_ptr((lVar1 + 8));
        }
        return this;
    }

    // 0x1003f84d0
    shared_ptr<EffectAnimType> const& ConfigProvider::GetConfig<EffectAnimType>(int arg1,
                                                                                const DataStatus** arg2) const {
        int iVar1;
        unsigned int uVar2;
        Js5ConfigGroup* this_00;
        uint64_t* puVar3;

        shared_ptr<EffectAnimType>* psVar4 = (shared_ptr<EffectAnimType>*)PTR_NullConfigType_100ee6510;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<EffectAnimType>();
            iVar1 = this_00->GetX();
            puVar3 = &field_160[(long)iVar1];
            if ((BaseTemplateConfigTypeList<EffectAnimType>*)*puVar3 == nullptr) {
                uVar2 = this_00->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (unsigned long)uVar2);
            }
            psVar4 = (shared_ptr<EffectAnimType>*)(*puVar3)->List(arg1, arg2);
        } else if (arg2 != nullptr) {
            *arg2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x1004142a0
    shared_ptr<WaterType> const& ConfigProvider::GetConfig<WaterType>(int arg1, const DataStatus** arg2) const {
        int iVar1;
        unsigned int uVar2;
        Js5ConfigGroup* this_00;
        uint64_t* puVar3;

        shared_ptr<WaterType>* psVar4 = (shared_ptr<WaterType>*)PTR_NullConfigType_100ee65a8;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<WaterType>();
            iVar1 = this_00->GetX();
            puVar3 = &field_160[(long)iVar1];
            if ((BaseTemplateConfigTypeList<WaterType>*)*puVar3 == nullptr) {
                uVar2 = this_00->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (unsigned long)uVar2);
            }
            psVar4 = (shared_ptr<WaterType>*)(*puVar3)->List(arg1, arg2);
        } else if (arg2 != nullptr) {
            *arg2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x1004191e0
    shared_ptr<NPCType> const& ConfigProvider::GetConfig<NPCType>(int arg1, const DataStatus** arg2) const {
        int iVar1;
        unsigned int uVar2;
        Js5ConfigGroup* this_00;
        uint64_t* puVar3;

        shared_ptr<NPCType>* psVar4 = (shared_ptr<NPCType>*)PTR_NullConfigType_100ee6560;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<NPCType>();
            iVar1 = this_00->GetX();
            puVar3 = &field_160[(long)iVar1];
            if ((BaseTemplateConfigTypeList<NPCType>*)*puVar3 == nullptr) {
                uVar2 = this_00->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (unsigned long)uVar2);
            }
            psVar4 = (shared_ptr<NPCType>*)(*puVar3)->List(arg1, arg2);
        } else if (arg2 != nullptr) {
            *arg2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x100419b80
    shared_ptr<BASType> const& ConfigProvider::GetConfig<BASType>(int arg1, const DataStatus** arg2) const {
        int iVar1;
        unsigned int uVar2;
        Js5ConfigGroup* this_00;
        uint64_t* puVar3;

        shared_ptr<BASType>* psVar4 = (shared_ptr<BASType>*)PTR_NullConfigType_100ee6538;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<BASType>();
            iVar1 = this_00->GetX();
            puVar3 = &field_160[(long)iVar1];
            if ((BaseTemplateConfigTypeList<BASType>*)*puVar3 == nullptr) {
                uVar2 = this_00->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (unsigned long)uVar2);
            }
            psVar4 = (shared_ptr<BASType>*)(*puVar3)->List(arg1, arg2);
        } else if (arg2 != nullptr) {
            *arg2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x100428410
    void ConfigProvider::GetGraphicsDefaults() const {
        field_512.get();
    }

    // 0x100428950
    shared_ptr<HitmarkType> const& ConfigProvider::GetConfig<HitmarkType>(int arg1, const DataStatus** arg2) const {
        int iVar1;
        unsigned int uVar2;
        Js5ConfigGroup* this_00;
        uint64_t* puVar3;

        shared_ptr<HitmarkType>* psVar4 = (shared_ptr<HitmarkType>*)PTR_NullConfigType_100ee64f8;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<HitmarkType>();
            iVar1 = this_00->GetX();
            puVar3 = &field_160[(long)iVar1];
            if ((BaseTemplateConfigTypeList<HitmarkType>*)*puVar3 == nullptr) {
                uVar2 = this_00->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (unsigned long)uVar2);
            }
            psVar4 = (shared_ptr<HitmarkType>*)(*puVar3)->List(arg1, arg2);
        } else if (arg2 != nullptr) {
            *arg2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x100429460
    shared_ptr<HeadbarType> const& ConfigProvider::GetConfig<HeadbarType>(int arg1, const DataStatus** arg2) const {
        int iVar1;
        unsigned int uVar2;
        Js5ConfigGroup* this_00;
        uint64_t* puVar3;

        shared_ptr<HeadbarType>* psVar4 = (shared_ptr<HeadbarType>*)PTR_NullConfigType_100ee64f0;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<HeadbarType>();
            iVar1 = this_00->GetX();
            puVar3 = &field_160[(long)iVar1];
            if ((BaseTemplateConfigTypeList<HeadbarType>*)*puVar3 == nullptr) {
                uVar2 = this_00->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (unsigned long)uVar2);
            }
            psVar4 = (shared_ptr<HeadbarType>*)(*puVar3)->List(arg1, arg2);
        } else if (arg2 != nullptr) {
            *arg2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x10042d2d0
    shared_ptr<LocType> const& ConfigProvider::GetConfig<LocType>(int arg1, const DataStatus** arg2) const {
        int iVar1;
        unsigned int uVar2;
        Js5ConfigGroup* this_00;
        uint64_t* puVar3;

        shared_ptr<LocType>* psVar4 = (shared_ptr<LocType>*)PTR_NullConfigType_100ee6550;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<LocType>();
            iVar1 = this_00->GetX();
            puVar3 = &field_160[(long)iVar1];
            if ((BaseTemplateConfigTypeList<LocType>*)*puVar3 == nullptr) {
                uVar2 = this_00->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (unsigned long)uVar2);
            }
            psVar4 = (shared_ptr<LocType>*)(*puVar3)->List(arg1, arg2);
        } else if (arg2 != nullptr) {
            *arg2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x10043bfc0
    shared_ptr<LightType> const& ConfigProvider::GetConfig<LightType>(int arg1, const DataStatus** arg2) const {
        int iVar1;
        unsigned int uVar2;
        Js5ConfigGroup* this_00;
        uint64_t* puVar3;

        shared_ptr<LightType>* psVar4 = (shared_ptr<LightType>*)PTR_NullConfigType_100ee6590;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<LightType>();
            iVar1 = this_00->GetX();
            puVar3 = &field_160[(long)iVar1];
            if ((BaseTemplateConfigTypeList<LightType>*)*puVar3 == nullptr) {
                uVar2 = this_00->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (unsigned long)uVar2);
            }
            psVar4 = (shared_ptr<LightType>*)(*puVar3)->List(arg1, arg2);
        } else if (arg2 != nullptr) {
            *arg2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x100441a00
    CoordMapSquare* ConfigProvider::GetMapDefaults() const {
        return (CoordMapSquare*)field_520.get();
    }

    // 0x100443490
    WorldAreaTypeList* ConfigProvider::GetConfigList<WorldAreaType, WorldAreaTypeList>() {
        int iVar1 = Js5ConfigGroup::GetConfigGroup<WorldAreaType>()->GetX();
        uint64_t* puVar2 = &field_160[(long)iVar1];
        return (WorldAreaTypeList*)*puVar2;
    }

    // 0x100495160
    void ConfigProvider::GetWearposDefaults() const {
        field_544.get();
    }

    // 0x1004962a0
    shared_ptr<IDKType> const& ConfigProvider::GetConfig<IDKType>(int arg1, const DataStatus** arg2) const {
        int iVar1;
        unsigned int uVar2;
        Js5ConfigGroup* this_00;
        uint64_t* puVar3;

        shared_ptr<IDKType>* psVar4 = (shared_ptr<IDKType>*)PTR_NullConfigType_100ee6540;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<IDKType>();
            iVar1 = this_00->GetX();
            puVar3 = &field_160[(long)iVar1];
            if ((BaseTemplateConfigTypeList<IDKType>*)*puVar3 == nullptr) {
                uVar2 = this_00->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (unsigned long)uVar2);
            }
            psVar4 = (shared_ptr<IDKType>*)(*puVar3)->List(arg1, arg2);
        } else if (arg2 != nullptr) {
            *arg2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x1004bbda0
    shared_ptr<InvType> const& ConfigProvider::GetConfig<InvType>(int arg1, const DataStatus** arg2) const {
        int iVar1;
        unsigned int uVar2;
        Js5ConfigGroup* this_00;
        uint64_t* puVar3;

        shared_ptr<InvType>* psVar4 = (shared_ptr<InvType>*)PTR_NullConfigType_100ee6548;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<InvType>();
            iVar1 = this_00->GetX();
            puVar3 = &field_160[(long)iVar1];
            if ((BaseTemplateConfigTypeList<InvType>*)*puVar3 == nullptr) {
                uVar2 = this_00->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (unsigned long)uVar2);
            }
            psVar4 = (shared_ptr<InvType>*)(*puVar3)->List(arg1, arg2);
        } else if (arg2 != nullptr) {
            *arg2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x1004ce8e0
    DataStatus const* ConfigProvider::GetConfigSize<QuestType>(unsigned int& arg1) {
        int iVar1;
        uint64_t* puVar3;

        uint8_t** ppuVar4 = &DataStatus::NOTLOADED;
        if (field_96 == 4) {
            iVar1 = Js5ConfigGroup::GetConfigGroup<QuestType>()->GetX();
            puVar3 = &field_160[(long)iVar1];
            if ((Mixer*)*puVar3 != nullptr) {
                arg1 = (*puVar3)->GetStreamCountLastMix();
                ppuVar4 = &DataStatus::READY;
            }
        }
        return (DataStatus*)*ppuVar4;
    }

    // 0x1004ce950
    shared_ptr<QuestType> const& ConfigProvider::GetConfig<QuestType>(int arg1, const DataStatus** arg2) const {
        int iVar1;
        unsigned int uVar2;
        Js5ConfigGroup* this_00;
        uint64_t* puVar3;

        shared_ptr<QuestType>* psVar4 = (shared_ptr<QuestType>*)PTR_NullConfigType_100ee65a0;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<QuestType>();
            iVar1 = this_00->GetX();
            puVar3 = &field_160[(long)iVar1];
            if ((BaseTemplateConfigTypeList<QuestType>*)*puVar3 == nullptr) {
                uVar2 = this_00->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (unsigned long)uVar2);
            }
            psVar4 = (shared_ptr<QuestType>*)(*puVar3)->List(arg1, arg2);
        } else if (arg2 != nullptr) {
            *arg2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x100509b70
    shared_ptr<ParamType> const& ConfigProvider::GetConfig<ParamType>(int arg1, const DataStatus** arg2) const {
        int iVar1;
        unsigned int uVar2;
        Js5ConfigGroup* this_00;
        uint64_t* puVar3;

        shared_ptr<ParamType>* psVar4 = (shared_ptr<ParamType>*)PTR_NullConfigType_100ee6598;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<ParamType>();
            iVar1 = this_00->GetX();
            puVar3 = &field_160[(long)iVar1];
            if ((BaseTemplateConfigTypeList<ParamType>*)*puVar3 == nullptr) {
                uVar2 = this_00->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (unsigned long)uVar2);
            }
            psVar4 = (shared_ptr<ParamType>*)(*puVar3)->List(arg1, arg2);
        } else if (arg2 != nullptr) {
            *arg2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x100535c70
    void ConfigProvider::GetInterfacePacketGroup(int arg1) {
        field_592[(long)arg1];
    }

    // 0x10056adf0
    void ConfigProvider::SetDownloadedAnimationStateMachines(
        eastl::vector_map<int, shared_ptr<graphics::AnimationStateMachineProvider>>&& arg1) {
        field_664.swap(arg1);
    }

    // 0x10056c6a0
    void ConfigProvider::SetDecoder(const Js5ArchiveSettings* js5ArchiveSettings,
                                    ConfigDecoderInfo&& configDecoderInfo) {
        ConfigDecoderInfo* this_00 = &field_104[js5ArchiveSettings];
        *this_00 = configDecoderInfo;
    }

    // 0x10056c6d0
    long ConfigProvider::GetDecoder(const Js5ArchiveSettings* js5ArchiveSettings) {
        long lVar2;

        auto local_38 = field_104.find(js5ArchiveSettings);
        auto local_48 = field_104.end();
        if (local_38 != local_48 == '\0') {
            lVar2 = 0;
        } else {
            lVar2 = local_38.HeapBeginPtr();
            lVar2 = lVar2 + 8;
        }
        return lVar2;
    }

    // 0x10056c740
    void ConfigProvider::GetVarBitTypeList() const {
        field_496.get();
    }

    // 0x10056c760
    void ConfigProvider::GetVarPlayerTypeList() const {
        field_440.get();
    }

    // 0x10056c780
    void ConfigProvider::GetVarPlayerGroupTypeList() const {
        field_488.get();
    }

    // 0x10056c7a0
    void ConfigProvider::GetSkillDefaults() const {
        field_536.get();
    }

    // 0x1006277c0
    bool ConfigProvider::Ready() const {
        return field_96 == 4;
    }

    // 0x100627830
    shared_ptr<FloorOverlayType> const& ConfigProvider::GetConfig<FloorOverlayType>(int arg1,
                                                                                    const DataStatus** arg2) const {
        int iVar1;
        unsigned int uVar2;
        Js5ConfigGroup* this_00;
        uint64_t* puVar3;

        shared_ptr<FloorOverlayType>* psVar4 = (shared_ptr<FloorOverlayType>*)PTR_NullConfigType_100ee6528;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<FloorOverlayType>();
            iVar1 = this_00->GetX();
            puVar3 = &field_160[(long)iVar1];
            if ((BaseTemplateConfigTypeList<FloorOverlayType>*)*puVar3 == nullptr) {
                uVar2 = this_00->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (unsigned long)uVar2);
            }
            psVar4 = (shared_ptr<FloorOverlayType>*)(*puVar3)->List(arg1, arg2);
        } else if (arg2 != nullptr) {
            *arg2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x100627a40
    shared_ptr<FloorUnderlayType> const& ConfigProvider::GetConfig<FloorUnderlayType>(int arg1,
                                                                                      const DataStatus** arg2) const {
        int iVar1;
        unsigned int uVar2;
        Js5ConfigGroup* this_00;
        uint64_t* puVar3;

        shared_ptr<FloorUnderlayType>* psVar4 = (shared_ptr<FloorUnderlayType>*)PTR_NullConfigType_100ee6530;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<FloorUnderlayType>();
            iVar1 = this_00->GetX();
            puVar3 = &field_160[(long)iVar1];
            if ((BaseTemplateConfigTypeList<FloorUnderlayType>*)*puVar3 == nullptr) {
                uVar2 = this_00->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (unsigned long)uVar2);
            }
            psVar4 = (shared_ptr<FloorUnderlayType>*)(*puVar3)->List(arg1, arg2);
        } else if (arg2 != nullptr) {
            *arg2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x100668a80
    shared_ptr<SeqType> const& ConfigProvider::GetConfig<SeqType>(int arg1, const DataStatus** arg2) const {
        int iVar1;
        unsigned int uVar2;
        Js5ConfigGroup* this_00;
        uint64_t* puVar3;

        shared_ptr<SeqType>* psVar4 = (shared_ptr<SeqType>*)PTR_NullConfigType_100ee6570;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<SeqType>();
            iVar1 = this_00->GetX();
            puVar3 = &field_160[(long)iVar1];
            if ((BaseTemplateConfigTypeList<SeqType>*)*puVar3 == nullptr) {
                uVar2 = this_00->GetX();
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (unsigned long)uVar2);
            }
            psVar4 = (shared_ptr<SeqType>*)(*puVar3)->List(arg1, arg2);
        } else if (arg2 != nullptr) {
            *arg2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

} // namespace jag::game
