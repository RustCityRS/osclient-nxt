// libs/game/runetek5/config/ConfigProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class ConfigProvider {
    public:
        // virtual methods in vtable order
        virtual ~ConfigProvider();
        virtual void SetDecoder(Js5ArchiveSettings const*, ConfigDecoderInfo&&);
        virtual long GetDecoder(Js5ArchiveSettings const*);
        virtual void GetVarBitTypeList() const;
        virtual void GetVarPlayerTypeList() const;
        virtual void GetVarPlayerGroupTypeList() const;
        virtual void GetSkillDefaults() const;
        shared_ptr<MapElementType> const& GetConfig<MapElementType>(int, DataStatus const**) const;
        shared_ptr<MSIType> const& GetConfig<MSIType>(int, DataStatus const**) const;
        void GetWorldMapDefaults() const;
        DataStatus const* GetConfigSize<MapElementType>(unsigned int&);
        shared_ptr<SkyBoxType> const& GetConfig<SkyBoxType>(int, DataStatus const**) const;
        shared_ptr<ObjType> const& GetConfig<ObjType>(int, DataStatus const**) const;
        void GetCustomizationDefaults() const;
        shared_ptr<EnumType> const& GetConfig<EnumType>(int, DataStatus const**) const;
        ConfigProvider* GetAnimationStateMachineProvider(int) const;
        shared_ptr<EffectAnimType> const& GetConfig<EffectAnimType>(int, DataStatus const**) const;
        shared_ptr<WaterType> const& GetConfig<WaterType>(int, DataStatus const**) const;
        shared_ptr<NPCType> const& GetConfig<NPCType>(int, DataStatus const**) const;
        shared_ptr<BASType> const& GetConfig<BASType>(int, DataStatus const**) const;
        void GetGraphicsDefaults() const;
        shared_ptr<HitmarkType> const& GetConfig<HitmarkType>(int, DataStatus const**) const;
        shared_ptr<HeadbarType> const& GetConfig<HeadbarType>(int, DataStatus const**) const;
        shared_ptr<LocType> const& GetConfig<LocType>(int, DataStatus const**) const;
        shared_ptr<LightType> const& GetConfig<LightType>(int, DataStatus const**) const;
        void GetMapDefaults() const;
        WorldAreaTypeList* GetConfigList<WorldAreaType, WorldAreaTypeList>();
        void GetWearposDefaults() const;
        shared_ptr<IDKType> const& GetConfig<IDKType>(int, DataStatus const**) const;
        shared_ptr<InvType> const& GetConfig<InvType>(int, DataStatus const**) const;
        DataStatus const* GetConfigSize<QuestType>(unsigned int&);
        shared_ptr<QuestType> const& GetConfig<QuestType>(int, DataStatus const**) const;
        shared_ptr<ParamType> const& GetConfig<ParamType>(int, DataStatus const**) const;
        void GetInterfacePacketGroup(int);
        ConfigProvider(Js5ResourceProvider&, Language const*, ModeGame const*, bool, PlayerVarDomain*,
                       Array<ConfigTypeListContainerStrategy, eastl::allocator>&, bool);
        void EnableServerSyncing();
        void SetMembersServer(bool);
        GetVarType(VarDomainType*, int) const;
        GetVarBitType(int) const;
        void CacheReset();
        void CheckLoaded(bool&, bool, Js5ArchiveSettings const&);
        void MainLogic();
        bool PerformIndexDownload(Js5ResourceProvider&);
        GetPreloadProgress() const;
        void Reload();
        void DumpUsage();
        void ResetUsage();
        void SetDownloadedAnimationStateMachines(
            eastl::vector_map<int, shared_ptr<graphics::AnimationStateMachineProvider>, eastl::less<int>,
                              eastl::allocator,
                              eastl::vector<eastl::pair<int, shared_ptr<graphics::AnimationStateMachineProvider>>,
                                            eastl::allocator>>&&);
        bool Ready() const;
        shared_ptr<FloorOverlayType> const& GetConfig<FloorOverlayType>(int, DataStatus const**) const;
        shared_ptr<FloorUnderlayType> const& GetConfig<FloorUnderlayType>(int, DataStatus const**) const;
        shared_ptr<SeqType> const& GetConfig<SeqType>(int, DataStatus const**) const;

        // data members, from how the methods use this: 66376 bytes
        undefined** field_0;           // offset 0, vtable pointer
        undefined** field_8;           // offset 8
        Js5ResourceProvider* field_16; // offset 16
        Language* field_24;            // offset 24
        ModeGame* field_32;            // offset 32
        bool field_40;                 // offset 40
        char _unknown_41[7];
        PlayerVarDomain* field_48; // offset 48
        char _unknown_56[24];
        bool field_80; // offset 80
        char _unknown_81[3];
        int field_84;        // offset 84
        int field_88;        // offset 88
        undefined1 field_92; // offset 92
        char _unknown_93[3];
        undefined4 field_96; // offset 96
        char _unknown_100[644];
        int field_744; // offset 744
        int field_748; // offset 748
        int field_752; // offset 752
        char _unknown_756[4];
        ServerSyncing* field_760; // offset 760
        char _unknown_768[65608];
    };

    // 0x1003c0ac0, 176 bytes, inline, placed by class name and debug map
    // shared_ptr<MapElementType> const& ConfigProvider::GetConfig<MapElementType>(int, DataStatus const**) const
    shared_ptr* ConfigProvider::GetConfig<MapElementType>(int param_1, DataStatus** param_2) {
        int iVar1;
        uint uVar2;
        Js5ConfigGroup* this_00;
        undefined8* puVar3;
        shared_ptr* psVar4;

        psVar4 = (shared_ptr*)PTR_NullConfigType_100ee6518;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<MapElementType>();
            iVar1 = this_00->GetX();
            puVar3 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar1);
            if ((BaseTemplateConfigTypeList<MapElementType>*)*puVar3 ==
                (BaseTemplateConfigTypeList<MapElementType>*)0) {
                uVar2 = this_00->GetX();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (ulong)uVar2);
            }
            psVar4 = (shared_ptr*)(*puVar3)->List(param_1, param_2);
        } else if (param_2 != (DataStatus**)0) {
            *param_2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x1003c21d0, 176 bytes, inline, placed by class name
    // shared_ptr<MSIType> const& ConfigProvider::GetConfig<MSIType>(int, DataStatus const**) const
    shared_ptr* ConfigProvider::GetConfig<MSIType>(int param_1, DataStatus** param_2) {
        int iVar1;
        uint uVar2;
        Js5ConfigGroup* this_00;
        undefined8* puVar3;
        shared_ptr* psVar4;

        psVar4 = (shared_ptr*)PTR_NullConfigType_100ee6558;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<MSIType>();
            iVar1 = this_00->GetX();
            puVar3 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar1);
            if ((BaseTemplateConfigTypeList<MSIType>*)*puVar3 == (BaseTemplateConfigTypeList<MSIType>*)0) {
                uVar2 = this_00->GetX();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (ulong)uVar2);
            }
            psVar4 = (shared_ptr*)(*puVar3)->List(param_1, param_2);
        } else if (param_2 != (DataStatus**)0) {
            *param_2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x1003c7540, 32 bytes, inline, placed by class name
    // ConfigProvider::GetWorldMapDefaults() const
    void ConfigProvider::GetWorldMapDefaults() {
        (&field_552)->get();
    }

    // 0x1003c90a0, 112 bytes, inline, placed by class name
    // DataStatus const* ConfigProvider::GetConfigSize<MapElementType>(unsigned int&)
    DataStatus* ConfigProvider::GetConfigSize<MapElementType>(uint* param_1) {
        int iVar1;
        uint uVar2;
        Js5ConfigGroup* this_00;
        undefined8* puVar3;
        undefined** ppuVar4;

        ppuVar4 = &DataStatus::NOTLOADED;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<MapElementType>();
            iVar1 = this_00->GetX();
            puVar3 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar1);
            if ((Mixer*)*puVar3 != (Mixer*)0) {
                uVar2 = (*puVar3)->GetStreamCountLastMix();
                *param_1 = uVar2;
                ppuVar4 = &DataStatus::READY;
            }
        }
        return (DataStatus*)*ppuVar4;
    }

    // 0x1003dd4f0, 176 bytes, inline, placed by class name
    // shared_ptr<SkyBoxType> const& ConfigProvider::GetConfig<SkyBoxType>(int, DataStatus const**) const
    shared_ptr* ConfigProvider::GetConfig<SkyBoxType>(int param_1, DataStatus** param_2) {
        int iVar1;
        uint uVar2;
        Js5ConfigGroup* this_00;
        undefined8* puVar3;
        shared_ptr* psVar4;

        psVar4 = (shared_ptr*)PTR_NullConfigType_100ee64d0;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<SkyBoxType>();
            iVar1 = this_00->GetX();
            puVar3 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar1);
            if ((BaseTemplateConfigTypeList<SkyBoxType>*)*puVar3 == (BaseTemplateConfigTypeList<SkyBoxType>*)0) {
                uVar2 = this_00->GetX();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (ulong)uVar2);
            }
            psVar4 = (shared_ptr*)(*puVar3)->List(param_1, param_2);
        } else if (param_2 != (DataStatus**)0) {
            *param_2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x1003edd30, 176 bytes, inline, placed by class name
    // shared_ptr<ObjType> const& ConfigProvider::GetConfig<ObjType>(int, DataStatus const**) const
    shared_ptr* ConfigProvider::GetConfig<ObjType>(int param_1, DataStatus** param_2) {
        int iVar1;
        uint uVar2;
        Js5ConfigGroup* this_00;
        undefined8* puVar3;
        shared_ptr* psVar4;

        psVar4 = (shared_ptr*)PTR_NullConfigType_100ee6568;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<ObjType>();
            iVar1 = this_00->GetX();
            puVar3 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar1);
            if ((BaseTemplateConfigTypeList<ObjType>*)*puVar3 == (BaseTemplateConfigTypeList<ObjType>*)0) {
                uVar2 = this_00->GetX();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (ulong)uVar2);
            }
            psVar4 = (shared_ptr*)(*puVar3)->List(param_1, param_2);
        } else if (param_2 != (DataStatus**)0) {
            *param_2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x1003f0d90, 32 bytes, inline, placed by class name
    // ConfigProvider::GetCustomizationDefaults() const
    void ConfigProvider::GetCustomizationDefaults() {
        (&field_560)->get();
    }

    // 0x1003f0dd0, 176 bytes, inline, placed by class name
    // shared_ptr<EnumType> const& ConfigProvider::GetConfig<EnumType>(int, DataStatus const**) const
    shared_ptr* ConfigProvider::GetConfig<EnumType>(int param_1, DataStatus** param_2) {
        int iVar1;
        uint uVar2;
        Js5ConfigGroup* this_00;
        undefined8* puVar3;
        shared_ptr* psVar4;

        psVar4 = (shared_ptr*)PTR_NullConfigType_100ee6580;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<EnumType>();
            iVar1 = this_00->GetX();
            puVar3 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar1);
            if ((BaseTemplateConfigTypeList<EnumType>*)*puVar3 == (BaseTemplateConfigTypeList<EnumType>*)0) {
                uVar2 = this_00->GetX();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (ulong)uVar2);
            }
            psVar4 = (shared_ptr*)(*puVar3)->List(param_1, param_2);
        } else if (param_2 != (DataStatus**)0) {
            *param_2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x1003f2b10, 96 bytes, inline, placed by class name
    // ConfigProvider::GetAnimationStateMachineProvider(int) const
    ConfigProvider* ConfigProvider::GetAnimationStateMachineProvider(int param_1) {
        long lVar1;
        long lVar2;
        vector_map<int, shared_ptr<graphics::AnimationStateMachineProvider>, eastl::less<int>, eastl::allocator,
                   eastl::vector<eastl::pair<int, shared_ptr<graphics::AnimationStateMachineProvider>>,
                                 eastl::allocator>>* this_00;
        undefined4 in_register_00000034;
        int local_24;

        this_00 =
            (vector_map<int, shared_ptr<graphics::AnimationStateMachineProvider>, eastl::less<int>, eastl::allocator,
                        eastl::vector<eastl::pair<int, shared_ptr<graphics::AnimationStateMachineProvider>>,
                                      eastl::allocator>>*)(CONCAT44(in_register_00000034, param_1) + 664);
        lVar1 = eastl::vector_map<int, shared_ptr<graphics::AnimationStateMachineProvider>, eastl::less<int>,
                                  eastl::allocator,
                                  eastl::vector<eastl::pair<int, shared_ptr<graphics::AnimationStateMachineProvider>>,
                                                eastl::allocator>>::find(this_00, &local_24);
        lVar2 = this_00->end();
        if (lVar1 == lVar2) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            new (this) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)(lVar1 + 8));
        }
        return this;
    }

    // 0x1003f84d0, 176 bytes, inline, placed by class name
    // shared_ptr<EffectAnimType> const& ConfigProvider::GetConfig<EffectAnimType>(int, DataStatus const**) const
    shared_ptr* ConfigProvider::GetConfig<EffectAnimType>(int param_1, DataStatus** param_2) {
        int iVar1;
        uint uVar2;
        Js5ConfigGroup* this_00;
        undefined8* puVar3;
        shared_ptr* psVar4;

        psVar4 = (shared_ptr*)PTR_NullConfigType_100ee6510;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<EffectAnimType>();
            iVar1 = this_00->GetX();
            puVar3 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar1);
            if ((BaseTemplateConfigTypeList<EffectAnimType>*)*puVar3 ==
                (BaseTemplateConfigTypeList<EffectAnimType>*)0) {
                uVar2 = this_00->GetX();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (ulong)uVar2);
            }
            psVar4 = (shared_ptr*)(*puVar3)->List(param_1, param_2);
        } else if (param_2 != (DataStatus**)0) {
            *param_2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x1004142a0, 176 bytes, inline, placed by class name
    // shared_ptr<WaterType> const& ConfigProvider::GetConfig<WaterType>(int, DataStatus const**) const
    shared_ptr* ConfigProvider::GetConfig<WaterType>(int param_1, DataStatus** param_2) {
        int iVar1;
        uint uVar2;
        Js5ConfigGroup* this_00;
        undefined8* puVar3;
        shared_ptr* psVar4;

        psVar4 = (shared_ptr*)PTR_NullConfigType_100ee65a8;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<WaterType>();
            iVar1 = this_00->GetX();
            puVar3 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar1);
            if ((BaseTemplateConfigTypeList<WaterType>*)*puVar3 == (BaseTemplateConfigTypeList<WaterType>*)0) {
                uVar2 = this_00->GetX();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (ulong)uVar2);
            }
            psVar4 = (shared_ptr*)(*puVar3)->List(param_1, param_2);
        } else if (param_2 != (DataStatus**)0) {
            *param_2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x1004191e0, 176 bytes, inline, placed by class name
    // shared_ptr<NPCType> const& ConfigProvider::GetConfig<NPCType>(int, DataStatus const**) const
    shared_ptr* ConfigProvider::GetConfig<NPCType>(int param_1, DataStatus** param_2) {
        int iVar1;
        uint uVar2;
        Js5ConfigGroup* this_00;
        undefined8* puVar3;
        shared_ptr* psVar4;

        psVar4 = (shared_ptr*)PTR_NullConfigType_100ee6560;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<NPCType>();
            iVar1 = this_00->GetX();
            puVar3 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar1);
            if ((BaseTemplateConfigTypeList<NPCType>*)*puVar3 == (BaseTemplateConfigTypeList<NPCType>*)0) {
                uVar2 = this_00->GetX();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (ulong)uVar2);
            }
            psVar4 = (shared_ptr*)(*puVar3)->List(param_1, param_2);
        } else if (param_2 != (DataStatus**)0) {
            *param_2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x100419b80, 176 bytes, inline, placed by class name
    // shared_ptr<BASType> const& ConfigProvider::GetConfig<BASType>(int, DataStatus const**) const
    shared_ptr* ConfigProvider::GetConfig<BASType>(int param_1, DataStatus** param_2) {
        int iVar1;
        uint uVar2;
        Js5ConfigGroup* this_00;
        undefined8* puVar3;
        shared_ptr* psVar4;

        psVar4 = (shared_ptr*)PTR_NullConfigType_100ee6538;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<BASType>();
            iVar1 = this_00->GetX();
            puVar3 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar1);
            if ((BaseTemplateConfigTypeList<BASType>*)*puVar3 == (BaseTemplateConfigTypeList<BASType>*)0) {
                uVar2 = this_00->GetX();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (ulong)uVar2);
            }
            psVar4 = (shared_ptr*)(*puVar3)->List(param_1, param_2);
        } else if (param_2 != (DataStatus**)0) {
            *param_2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x100428410, 32 bytes, inline, placed by class name
    // ConfigProvider::GetGraphicsDefaults() const
    void ConfigProvider::GetGraphicsDefaults() {
        (&field_512)->get();
    }

    // 0x100428950, 176 bytes, inline, placed by class name
    // shared_ptr<HitmarkType> const& ConfigProvider::GetConfig<HitmarkType>(int, DataStatus const**) const
    shared_ptr* ConfigProvider::GetConfig<HitmarkType>(int param_1, DataStatus** param_2) {
        int iVar1;
        uint uVar2;
        Js5ConfigGroup* this_00;
        undefined8* puVar3;
        shared_ptr* psVar4;

        psVar4 = (shared_ptr*)PTR_NullConfigType_100ee64f8;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<HitmarkType>();
            iVar1 = this_00->GetX();
            puVar3 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar1);
            if ((BaseTemplateConfigTypeList<HitmarkType>*)*puVar3 == (BaseTemplateConfigTypeList<HitmarkType>*)0) {
                uVar2 = this_00->GetX();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (ulong)uVar2);
            }
            psVar4 = (shared_ptr*)(*puVar3)->List(param_1, param_2);
        } else if (param_2 != (DataStatus**)0) {
            *param_2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x100429460, 176 bytes, inline, placed by class name
    // shared_ptr<HeadbarType> const& ConfigProvider::GetConfig<HeadbarType>(int, DataStatus const**) const
    shared_ptr* ConfigProvider::GetConfig<HeadbarType>(int param_1, DataStatus** param_2) {
        int iVar1;
        uint uVar2;
        Js5ConfigGroup* this_00;
        undefined8* puVar3;
        shared_ptr* psVar4;

        psVar4 = (shared_ptr*)PTR_NullConfigType_100ee64f0;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<HeadbarType>();
            iVar1 = this_00->GetX();
            puVar3 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar1);
            if ((BaseTemplateConfigTypeList<HeadbarType>*)*puVar3 == (BaseTemplateConfigTypeList<HeadbarType>*)0) {
                uVar2 = this_00->GetX();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (ulong)uVar2);
            }
            psVar4 = (shared_ptr*)(*puVar3)->List(param_1, param_2);
        } else if (param_2 != (DataStatus**)0) {
            *param_2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x10042d2d0, 176 bytes, inline, placed by class name
    // shared_ptr<LocType> const& ConfigProvider::GetConfig<LocType>(int, DataStatus const**) const
    shared_ptr* ConfigProvider::GetConfig<LocType>(int param_1, DataStatus** param_2) {
        int iVar1;
        uint uVar2;
        Js5ConfigGroup* this_00;
        undefined8* puVar3;
        shared_ptr* psVar4;

        psVar4 = (shared_ptr*)PTR_NullConfigType_100ee6550;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<LocType>();
            iVar1 = this_00->GetX();
            puVar3 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar1);
            if ((BaseTemplateConfigTypeList<LocType>*)*puVar3 == (BaseTemplateConfigTypeList<LocType>*)0) {
                uVar2 = this_00->GetX();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (ulong)uVar2);
            }
            psVar4 = (shared_ptr*)(*puVar3)->List(param_1, param_2);
        } else if (param_2 != (DataStatus**)0) {
            *param_2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x10043bfc0, 176 bytes, inline, placed by class name
    // shared_ptr<LightType> const& ConfigProvider::GetConfig<LightType>(int, DataStatus const**) const
    shared_ptr* ConfigProvider::GetConfig<LightType>(int param_1, DataStatus** param_2) {
        int iVar1;
        uint uVar2;
        Js5ConfigGroup* this_00;
        undefined8* puVar3;
        shared_ptr* psVar4;

        psVar4 = (shared_ptr*)PTR_NullConfigType_100ee6590;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<LightType>();
            iVar1 = this_00->GetX();
            puVar3 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar1);
            if ((BaseTemplateConfigTypeList<LightType>*)*puVar3 == (BaseTemplateConfigTypeList<LightType>*)0) {
                uVar2 = this_00->GetX();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (ulong)uVar2);
            }
            psVar4 = (shared_ptr*)(*puVar3)->List(param_1, param_2);
        } else if (param_2 != (DataStatus**)0) {
            *param_2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x100441a00, 32 bytes, inline, placed by class name
    // ConfigProvider::GetMapDefaults() const
    void ConfigProvider::GetMapDefaults() {
        (&field_520)->get();
    }

    // 0x100443490, 64 bytes, inline, placed by class name
    // WorldAreaTypeList* ConfigProvider::GetConfigList<WorldAreaType, WorldAreaTypeList>()
    WorldAreaTypeList* ConfigProvider::GetConfigList<WorldAreaType, WorldAreaTypeList>() {
        int iVar1;
        Js5ConfigGroup* this_00;
        undefined8* puVar2;

        this_00 = Js5ConfigGroup::GetConfigGroup<WorldAreaType>();
        iVar1 = this_00->GetX();
        puVar2 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
            (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar1);
        return (WorldAreaTypeList*)*puVar2;
    }

    // 0x100495160, 32 bytes, inline, placed by class name
    // ConfigProvider::GetWearposDefaults() const
    void ConfigProvider::GetWearposDefaults() {
        (&field_544)->get();
    }

    // 0x1004962a0, 176 bytes, inline, placed by class name
    // shared_ptr<IDKType> const& ConfigProvider::GetConfig<IDKType>(int, DataStatus const**) const
    shared_ptr* ConfigProvider::GetConfig<IDKType>(int param_1, DataStatus** param_2) {
        int iVar1;
        uint uVar2;
        Js5ConfigGroup* this_00;
        undefined8* puVar3;
        shared_ptr* psVar4;

        psVar4 = (shared_ptr*)PTR_NullConfigType_100ee6540;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<IDKType>();
            iVar1 = this_00->GetX();
            puVar3 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar1);
            if ((BaseTemplateConfigTypeList<IDKType>*)*puVar3 == (BaseTemplateConfigTypeList<IDKType>*)0) {
                uVar2 = this_00->GetX();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (ulong)uVar2);
            }
            psVar4 = (shared_ptr*)(*puVar3)->List(param_1, param_2);
        } else if (param_2 != (DataStatus**)0) {
            *param_2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x1004bbda0, 176 bytes, inline, placed by class name
    // shared_ptr<InvType> const& ConfigProvider::GetConfig<InvType>(int, DataStatus const**) const
    shared_ptr* ConfigProvider::GetConfig<InvType>(int param_1, DataStatus** param_2) {
        int iVar1;
        uint uVar2;
        Js5ConfigGroup* this_00;
        undefined8* puVar3;
        shared_ptr* psVar4;

        psVar4 = (shared_ptr*)PTR_NullConfigType_100ee6548;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<InvType>();
            iVar1 = this_00->GetX();
            puVar3 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar1);
            if ((BaseTemplateConfigTypeList<InvType>*)*puVar3 == (BaseTemplateConfigTypeList<InvType>*)0) {
                uVar2 = this_00->GetX();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (ulong)uVar2);
            }
            psVar4 = (shared_ptr*)(*puVar3)->List(param_1, param_2);
        } else if (param_2 != (DataStatus**)0) {
            *param_2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x1004ce8e0, 112 bytes, inline, placed by class name
    // DataStatus const* ConfigProvider::GetConfigSize<QuestType>(unsigned int&)
    DataStatus* ConfigProvider::GetConfigSize<QuestType>(uint* param_1) {
        int iVar1;
        uint uVar2;
        Js5ConfigGroup* this_00;
        undefined8* puVar3;
        undefined** ppuVar4;

        ppuVar4 = &DataStatus::NOTLOADED;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<QuestType>();
            iVar1 = this_00->GetX();
            puVar3 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar1);
            if ((Mixer*)*puVar3 != (Mixer*)0) {
                uVar2 = (*puVar3)->GetStreamCountLastMix();
                *param_1 = uVar2;
                ppuVar4 = &DataStatus::READY;
            }
        }
        return (DataStatus*)*ppuVar4;
    }

    // 0x1004ce950, 176 bytes, inline, placed by class name
    // shared_ptr<QuestType> const& ConfigProvider::GetConfig<QuestType>(int, DataStatus const**) const
    shared_ptr* ConfigProvider::GetConfig<QuestType>(int param_1, DataStatus** param_2) {
        int iVar1;
        uint uVar2;
        Js5ConfigGroup* this_00;
        undefined8* puVar3;
        shared_ptr* psVar4;

        psVar4 = (shared_ptr*)PTR_NullConfigType_100ee65a0;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<QuestType>();
            iVar1 = this_00->GetX();
            puVar3 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar1);
            if ((BaseTemplateConfigTypeList<QuestType>*)*puVar3 == (BaseTemplateConfigTypeList<QuestType>*)0) {
                uVar2 = this_00->GetX();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (ulong)uVar2);
            }
            psVar4 = (shared_ptr*)(*puVar3)->List(param_1, param_2);
        } else if (param_2 != (DataStatus**)0) {
            *param_2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x100509b70, 176 bytes, inline, placed by class name
    // shared_ptr<ParamType> const& ConfigProvider::GetConfig<ParamType>(int, DataStatus const**) const
    shared_ptr* ConfigProvider::GetConfig<ParamType>(int param_1, DataStatus** param_2) {
        int iVar1;
        uint uVar2;
        Js5ConfigGroup* this_00;
        undefined8* puVar3;
        shared_ptr* psVar4;

        psVar4 = (shared_ptr*)PTR_NullConfigType_100ee6598;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<ParamType>();
            iVar1 = this_00->GetX();
            puVar3 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar1);
            if ((BaseTemplateConfigTypeList<ParamType>*)*puVar3 == (BaseTemplateConfigTypeList<ParamType>*)0) {
                uVar2 = this_00->GetX();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (ulong)uVar2);
            }
            psVar4 = (shared_ptr*)(*puVar3)->List(param_1, param_2);
        } else if (param_2 != (DataStatus**)0) {
            *param_2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x100535c70, 32 bytes, inline, placed by class name
    // ConfigProvider::GetInterfacePacketGroup(int)
    void ConfigProvider::GetInterfacePacketGroup(int param_1) {
        Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>, eastl::allocator>::
        operator[]((Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>,
                          eastl::allocator>*)&field_592,
                   (long)param_1);
    }

    // 0x10056adf0, 32 bytes, inline, placed by class name
    // ConfigProvider::SetDownloadedAnimationStateMachines(eastl::vector_map<int, shared_ptr<graphics::AnimationStateMachineProvider>, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, shared_ptr<graphics::AnimationStateMachineProvider> >, eastl::allocator> >&&)
    void ConfigProvider::SetDownloadedAnimationStateMachines(vector_map* param_1) {
        (&field_664, param_1)->swap();
    }

    // 0x10056c6a0, 48 bytes, inline, placed by class name
    // ConfigProvider::SetDecoder(Js5ArchiveSettings const*, ConfigDecoderInfo&&)
    void ConfigProvider::SetDecoder(Js5ArchiveSettings* param_1, ConfigDecoderInfo* param_2) {
        ConfigDecoderInfo* this_00;
        Js5ArchiveSettings* local_18;

        local_18 = param_1;
        this_00 = (ConfigDecoderInfo*)
            eastl::hash_map<Js5ArchiveSettings_const*, ConfigDecoderInfo, eastl::hash<Js5ArchiveSettings_const*>,
                            eastl::equal_to<Js5ArchiveSettings_const*>, eastl::allocator, false>::
            operator[]((hash_map<Js5ArchiveSettings_const*, ConfigDecoderInfo, eastl::hash<Js5ArchiveSettings_const*>,
                                 eastl::equal_to<Js5ArchiveSettings_const*>, eastl::allocator, false>*)&field_104,
                       &local_18);
        ConfigDecoderInfo::operator=(this_00, param_2);
    }

    // 0x10056c6d0, 112 bytes, inline, placed by class name
    // ConfigProvider::GetDecoder(Js5ArchiveSettings const*)
    long ConfigProvider::GetDecoder(Js5ArchiveSettings* param_1) {
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base local_48[16];
        eastl local_38[16];
        Js5ArchiveSettings* local_28;

        local_28 = param_1;
        eastl::hashtable<
            graphics::TextureAtlas*, eastl::pair<graphics::TextureAtlas* const, render::SamplerState>, eastl::allocator,
            eastl::use_first<eastl::pair<graphics::TextureAtlas* const, render::SamplerState>>,
            eastl::equal_to<graphics::TextureAtlas*>, eastl::hash<graphics::TextureAtlas*>, eastl::mod_range_hashing,
            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::find((TextureAtlas**)local_38);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        if (eastl::operator!=(local_38, local_48, extraout_RDX)) {
            lVar2 = local_38->HeapBeginPtr();
            lVar2 = lVar2 + 8;
        } else {
            lVar2 = 0;
        }
        return lVar2;
    }

    // 0x10056c740, 32 bytes, inline, placed by class name
    // ConfigProvider::GetVarBitTypeList() const
    void ConfigProvider::GetVarBitTypeList() {
        (&field_496)->get();
    }

    // 0x10056c760, 32 bytes, inline, placed by class name
    // ConfigProvider::GetVarPlayerTypeList() const
    void ConfigProvider::GetVarPlayerTypeList() {
        (&field_440)->get();
    }

    // 0x10056c780, 32 bytes, inline, placed by class name
    // ConfigProvider::GetVarPlayerGroupTypeList() const
    void ConfigProvider::GetVarPlayerGroupTypeList() {
        (&field_488)->get();
    }

    // 0x10056c7a0, 32 bytes, inline, placed by class name
    // ConfigProvider::GetSkillDefaults() const
    void ConfigProvider::GetSkillDefaults() {
        (&field_536)->get();
    }

    // 0x1006277c0, 16 bytes, inline, placed by class name
    // ConfigProvider::Ready() const
    bool ConfigProvider::Ready() {
        return field_96 == 4;
    }

    // 0x100627830, 176 bytes, inline, placed by class name
    // shared_ptr<FloorOverlayType> const& ConfigProvider::GetConfig<FloorOverlayType>(int, DataStatus const**) const
    shared_ptr* ConfigProvider::GetConfig<FloorOverlayType>(int param_1, DataStatus** param_2) {
        int iVar1;
        uint uVar2;
        Js5ConfigGroup* this_00;
        undefined8* puVar3;
        shared_ptr* psVar4;

        psVar4 = (shared_ptr*)PTR_NullConfigType_100ee6528;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<FloorOverlayType>();
            iVar1 = this_00->GetX();
            puVar3 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar1);
            if ((BaseTemplateConfigTypeList<FloorOverlayType>*)*puVar3 ==
                (BaseTemplateConfigTypeList<FloorOverlayType>*)0) {
                uVar2 = this_00->GetX();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (ulong)uVar2);
            }
            psVar4 = (shared_ptr*)(*puVar3)->List(param_1, param_2);
        } else if (param_2 != (DataStatus**)0) {
            *param_2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x100627a40, 176 bytes, inline, placed by class name
    // shared_ptr<FloorUnderlayType> const& ConfigProvider::GetConfig<FloorUnderlayType>(int, DataStatus const**) const
    shared_ptr* ConfigProvider::GetConfig<FloorUnderlayType>(int param_1, DataStatus** param_2) {
        int iVar1;
        uint uVar2;
        Js5ConfigGroup* this_00;
        undefined8* puVar3;
        shared_ptr* psVar4;

        psVar4 = (shared_ptr*)PTR_NullConfigType_100ee6530;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<FloorUnderlayType>();
            iVar1 = this_00->GetX();
            puVar3 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar1);
            if ((BaseTemplateConfigTypeList<FloorUnderlayType>*)*puVar3 ==
                (BaseTemplateConfigTypeList<FloorUnderlayType>*)0) {
                uVar2 = this_00->GetX();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (ulong)uVar2);
            }
            psVar4 = (shared_ptr*)(*puVar3)->List(param_1, param_2);
        } else if (param_2 != (DataStatus**)0) {
            *param_2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

    // 0x100668a80, 176 bytes, inline, placed by class name
    // shared_ptr<SeqType> const& ConfigProvider::GetConfig<SeqType>(int, DataStatus const**) const
    shared_ptr* ConfigProvider::GetConfig<SeqType>(int param_1, DataStatus** param_2) {
        int iVar1;
        uint uVar2;
        Js5ConfigGroup* this_00;
        undefined8* puVar3;
        shared_ptr* psVar4;

        psVar4 = (shared_ptr*)PTR_NullConfigType_100ee6570;
        if (field_96 == 4) {
            this_00 = Js5ConfigGroup::GetConfigGroup<SeqType>();
            iVar1 = this_00->GetX();
            puVar3 = (undefined8*)Array<BaseConfigTypeList*, eastl::allocator>::operator[](
                (Array<BaseConfigTypeList*, eastl::allocator>*)&field_160, (long)iVar1);
            if ((BaseTemplateConfigTypeList<SeqType>*)*puVar3 == (BaseTemplateConfigTypeList<SeqType>*)0) {
                uVar2 = this_00->GetX();
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/ConfigProvider.h",
                                147, "ConfigProvider: Unknown config type: %u", (ulong)uVar2);
            }
            psVar4 = (shared_ptr*)(*puVar3)->List(param_1, param_2);
        } else if (param_2 != (DataStatus**)0) {
            *param_2 = (DataStatus*)DataStatus::NOTLOADED;
        }
        return psVar4;
    }

} // namespace jag::game
